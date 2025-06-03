#include "game_corner_gacha.h"
#include "global.h"
#include "malloc.h"
#include "battle.h"
#include "bg.h"
#include "coins.h"
#include "data.h"
#include "daycare.h"
#include "decompress.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "field_message_box.h"
#include "international_string_util.h"
#include "m4a.h"
#include "main.h"
#include "menu.h"
#include "menu_helpers.h"
#include "naming_screen.h"
#include "new_game.h"
#include "overworld.h"
#include "palette.h"
#include "palette_util.h"
#include "pokemon.h"
#include "pokedex.h"
#include "random.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "trade.h"
#include "trainer_pokemon_sprites.h"
#include "tv.h"
#include "window.h"
#include "constants/coins.h"
#include "constants/flags.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/vars.h"
#include "scanline_effect.h"
#include "pokemon_storage_system.h"
#include "string_util.h"
#include "field_specials.h"

enum
{
    GACHA_STATE_INIT,
    GACHA_STATE_PROCESS_INPUT,
    GACHA_STATE_COMPLETED_WAIT_FOR_SOUND,
    GACHA_STATE_PROCESS_COMPLETED_INPUT,
    GACHA_STATE_START_EXIT,
    GACHA_STATE_EXIT,
    STATE_INIT_A,
    STATE_TIMER_1,
    STATE_TWIST,
    STATE_TIMER_2,
    STATE_INIT_GIVE,
    STATE_SHAKE_1,
    STATE_TIMER_3,
    STATE_INIT_SHAKE_2,
    STATE_SHAKE_2,
    STATE_TIMER_4,
    STATE_INIT_SHAKE_3,
    STATE_TIMER_5,
    STATE_GIVE,
    STATE_FADE,
    STATE_POKEBALL_INIT,
    STATE_POKEBALL_PROCESS,
    STATE_POKEBALL_ARRIVE,
    STATE_FADE_POKEBALL_TO_NORMAL,
    STATE_POKEBALL_ARRIVE_WAIT,
    STATE_SHOW_NEW_MON,
    STATE_NEW_MON_MSG,
    NEW_1,
    NEW_2,
    NEW_3,
    NEW_4,
    NEW_5,
    NEW_6,
};

enum {
    SPR_CREDIT_DIG_1,
    SPR_CREDIT_DIG_10,
    SPR_CREDIT_DIG_100,
    SPR_CREDIT_DIG_1000,
};

enum {
    GACHA_BASIC = 1,
    GACHA_GREAT,
    GACHA_ULTRA,
    GACHA_MASTER,
};

enum {
    RARITY_COMMON,
    RARITY_UNCOMMON,
    RARITY_RARE,
    RARITY_ULTRA_RARE,
};

enum {
    SPR_PLAYER_DIG_1,
    SPR_PLAYER_DIG_10,
    SPR_PLAYER_DIG_100,
    SPR_PLAYER_DIG_1000,
};

#define RARITY_COMMON_ODDS 50
#define RARITY_UNCOMMON_ODDS 30
#define RARITY_RARE_ODDS 15
#define RARITY_ULTRA_RARE_ODDS 5

#define GACHA_BASIC_MIN_WAGER 50
#define GACHA_GREAT_MIN_WAGER 250
#define GACHA_ULTRA_MIN_WAGER 1000
#define GACHA_MASTER_MIN_WAGER 4500

#define SPR_CREDIT_DIGITS SPR_CREDIT_DIG_1
#define SPR_PLAYER_DIGITS SPR_PLAYER_DIG_1

#define MAX_SPRITES_CREDIT 4
#define MAX_SPRITES_PLAYER 4

struct Gacha {
    u8 state;
    u8 GachaId;
    u8 KnobSpriteId;
    u8 DigitalTextSpriteId;
    u8 LotteryJPNspriteId;
    u8 CreditSpriteIds[MAX_SPRITES_CREDIT];
    u8 PlayerSpriteIds[MAX_SPRITES_PLAYER];
    u8 CreditMenu1Id;
    u8 CreditMenu2Id;
    u8 PokemonOneSpriteId;
    u8 PokemonTwoSpriteId;
    u8 PokemonThreeSpriteId;
    u8 newMonOdds;
    u8 ArrowsSpriteId;
    u8 CTAspriteId;
    u16 wager;
    u8 cursorPosition;
    u8 Trigger;
    u8 Rarity; // 0 = Common, 1 = Uncommon, 2 = Rare, 3 = Ultra Rare
    u8 ownedCommon;
    u8 ownedUncommon;
    u8 ownedRare;
    u8 ownedUltraRare;
    u8 commonChance;
    u8 uncommonChance;
    u8 rareChance;
    u8 ultraRareChance;
    u16 CalculatedSpecies;
    u8 bouncingPokeballSpriteId;
    u8 timer;
    u8 monSpriteId;
    u32 waitTimer;
    u8 Input;
};    

static const u8 sText_FromGacha[] = _("You got {STR_VAR_1}!");

static const s8 sTradeBallVerticalVelocityTable[] =
{
     0,  0,  1,  0,  1,  0,  1,  1,  1,
     1,  2,  2,  2,  2,  3,  3,  3,  3,
     4,  4,  4,  4, -4, -4, -4, -3, -3,
    -3, -3, -2, -2, -2, -2, -1, -1, -1,
    -1,  0, -1,  0, -1,  0,  0,  0,  0,
     0,  1,  0,  1,  0,  1,  1,  1,  1,
     2,  2,  2,  2,  3,  3,  3,  3,  4,
     4,  4,  4, -4, -3, -3, -2, -2, -1,
    -1, -1,  0, -1,  0,  0,  0,  0,  0,
     0,  1,  0,  1,  1,  1,  2,  2,  3,
     3,  4, -4, -3, -2, -1, -1, -1,  0,
     0,  0,  0,  1,  0,  1,  1,  2,  3
};

static EWRAM_DATA struct Gacha *sGacha = NULL;
static EWRAM_DATA u8 sTextWindowId = 0;

static void FadeToGachaScreen(u8 taskId);
static void InitGachaScreen(void);
static void GachaVBlankCallback(void);
static void SpriteCB_BouncingPokeball(struct Sprite *);
static void SpriteCB_BouncingPokeballArrive(struct Sprite *);

static const u8 sMessageText[] = _("NEW POKéMON : {STR_VAR_1}%");

static void SpriteCB_Null(struct Sprite *sprite)
{
}

// BG Images/Tilemaps

// Main, no shake
static const u32 Gacha_BG_Main[] = INCBIN_U32("graphics/gacha/bg_middle.4bpp.lz");
static const u8 Gacha_BG_Main_Tilemap[] = INCBIN_U8("graphics/gacha/bg_middle.bin.lz");
// Left shake
static const u32 Gacha_BG_Left[] = INCBIN_U32("graphics/gacha/bg_left.4bpp.lz");
static const u8 Gacha_BG_Left_Tilemap[] = INCBIN_U8("graphics/gacha/bg_left.bin.lz");
// Right shake
static const u32 Gacha_BG_Right[] = INCBIN_U32("graphics/gacha/bg_right.4bpp.lz");
static const u8 Gacha_BG_Right_Tilemap[] = INCBIN_U8("graphics/gacha/bg_right.bin.lz");

// Trade
static const u32 Gacha_BG_Red[] = INCBIN_U32("graphics/gacha/bg_mon.4bpp.lz");
static const u8 Gacha_BG_Red_Tilemap[] = INCBIN_U8("graphics/gacha/bg_mon.bin.lz");

// BG Palettes

// Basic
static const u16 Gacha_BG_Basic_Pal[] = INCBIN_U16("graphics/gacha/bg_basic.gbapal");
// Great
static const u16 Gacha_BG_Great_Pal[] = INCBIN_U16("graphics/gacha/bg_great.gbapal");
// Ultra
static const u16 Gacha_BG_Ultra_Pal[] = INCBIN_U16("graphics/gacha/bg_ultra.gbapal");
// Master
static const u16 Gacha_BG_Master_Pal[] = INCBIN_U16("graphics/gacha/bg_master.gbapal");

static const u16 Gacha_BG_Red_Pal[] = INCBIN_U16("graphics/gacha/bg_mon.gbapal");

// Knob Sprite Image
static const u32 Gacha_Knob[] = INCBIN_U32("graphics/gacha/knob.4bpp.lz");

// Knob Sprite Palettes

static const u16 Gacha_Knob_Pal[] = INCBIN_U16("graphics/gacha/knob.gbapal");
static const u16 Gacha_Digital_Text_Pal[] = INCBIN_U16("graphics/gacha/digital_text.gbapal");
static const u16 Gacha_Lottery_Pal[] = INCBIN_U16("graphics/gacha/lottery.gbapal");
static const u16 Gacha_press_a_Pal[] = INCBIN_U16("graphics/gacha/press_a.gbapal");

// Digital Text
static const u32 Gacha_Digital_Text[] = INCBIN_U32("graphics/gacha/digital_text.4bpp.lz");

// Title, Japanese
static const u32 Gacha_Lottery_JPN[] = INCBIN_U32("graphics/gacha/lottery_japan.4bpp.lz");

//Numbers

static const u32 gCredits_Gfx[] = INCBIN_U32("graphics/gacha/numbers.4bpp.lz");
static const u16 sCredit_Pal[] = INCBIN_U16("graphics/gacha/numbers.gbapal");

static const u32 gPlayer_Gfx[] = INCBIN_U32("graphics/gacha/input_numbers.4bpp.lz");
static const u16 sPlayer_Pal[] = INCBIN_U16("graphics/gacha/input_numbers.gbapal");

// Credits Menu

// Images

static const u32 Gacha_Menu_1[] = INCBIN_U32("graphics/gacha/menu_1.4bpp.lz");
static const u32 Gacha_Menu_2[] = INCBIN_U32("graphics/gacha/menu_2.4bpp.lz");

// Palettes

// Basic
static const u16 Gacha_Menu_Basic_Pal[] = INCBIN_U16("graphics/gacha/menu_basic.gbapal");
// Great
static const u16 Gacha_Menu_Great_Pal[] = INCBIN_U16("graphics/gacha/menu_great.gbapal");
// Ultra
static const u16 Gacha_Menu_Ultra_Pal[] = INCBIN_U16("graphics/gacha/menu_ultra.gbapal");
// Master
static const u16 Gacha_Menu_Master_Pal[] = INCBIN_U16("graphics/gacha/menu_master.gbapal");

// Basic
static const u16 Gacha_Menu2_Basic_Pal[] = INCBIN_U16("graphics/gacha/menu2_basic.gbapal");
// Great
static const u16 Gacha_Menu2_Great_Pal[] = INCBIN_U16("graphics/gacha/menu2_great.gbapal");
// Ultra
static const u16 Gacha_Menu2_Ultra_Pal[] = INCBIN_U16("graphics/gacha/menu2_ultra.gbapal");
// Master
static const u16 Gacha_Menu2_Master_Pal[] = INCBIN_U16("graphics/gacha/menu2_master.gbapal");

// Pokemon

// Belossom
static const u32 BelossomGFX[] = INCBIN_U32("graphics/gacha/belossom.4bpp.lz");
static const u16 BelossomPAL[] = INCBIN_U16("graphics/gacha/belossom.gbapal");

// Phanpy
static const u32 PhanpyGFX[] = INCBIN_U32("graphics/gacha/phanpy.4bpp.lz");
static const u16 PhanpyPal[] = INCBIN_U16("graphics/gacha/phanpy.gbapal");

// Teddiursa
static const u32 TeddiursaGFX[] = INCBIN_U32("graphics/gacha/teddiursa.4bpp.lz");
static const u16 TeddiursaPAL[] = INCBIN_U16("graphics/gacha/teddiursa.gbapal");

// Elekid
static const u32 ElekidGFX[] = INCBIN_U32("graphics/gacha/elekid.4bpp.lz");
static const u16 ElekidPAL[] = INCBIN_U16("graphics/gacha/elekid.gbapal");

// Hoppip
static const u32 HoppipGFX[] = INCBIN_U32("graphics/gacha/hoppip.4bpp.lz");
static const u16 HoppipPAL[] = INCBIN_U16("graphics/gacha/hoppip.gbapal");

// Arrows

static const u32 Gacha_Arrows_GFX[] = INCBIN_U32("graphics/gacha/arrows.4bpp.lz");

// Press "A"

static const u32 Gacha_Press_A_GFX[] = INCBIN_U32("graphics/gacha/pressA.4bpp.lz");

static const u16 sPokeball_Pal[] = INCBIN_U16("graphics/trade/pokeball.gbapal");
static const u8 sPokeball_Gfx[] = INCBIN_U8("graphics/trade/pokeball.4bpp");

const u16 gTrade_Tilemap[] = INCBIN_U16("graphics/trade/platform.bin");

#define GACHA_BG_BASE 1
#define GACHA_MENUS 2

static const struct BgTemplate sGachaBGtemplates[] = {
    {
       .bg = GACHA_BG_BASE,
       .charBaseIndex = 2,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 3,
       .baseTile = 0
   },
   {
        .bg = GACHA_MENUS,
        .charBaseIndex = 0,
        .mapBaseIndex = 0x17,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    }
};

static const struct WindowTemplate sGachaWinTemplates[] = {
    {
        .bg = GACHA_MENUS,
        .tilemapLeft = 16,
        .tilemapTop = 9,
        .width = 14,
        .height = 2,
        .paletteNum = 0xF,
        .baseBlock = 0x194,
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sWinTemplates_EggHatch[] =
{
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 26,
        .height = 4,
        .paletteNum = 0,
        .baseBlock = 64
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sYesNoWinTemplate =
{
    .bg = 0,
    .tilemapLeft = 21,
    .tilemapTop = 9,
    .width = 5,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 424
};

#define BG_MIDDLE_GFX 1
#define BG_LEFT_GFX 2
#define BG_RIGHT_GFX 3
#define KNOB_GFX 4
#define DIGITAL_TEXT_GFX 5
#define LOTTERY_JPN_GFX 6
#define GFXTAG_CREDIT_DIGIT 7
#define GFXTAG_PLAYER_DIGIT 8
#define GFXTAG_MENU_1 9
#define GFXTAG_MENU_2 10
#define GFXTAG_BELOSSOM 11
#define GFXTAG_PHANPY 12
#define GFXTAG_TEDDIURSA 13
#define GFXTAG_ELEKID 14
#define GFXTAG_HOPPIP 15
#define GFXTAG_ARROWS 16
#define GFXTAG_PRESS_A 17

#define GFXTAG_POKEBALL        5557

#define BG_BASIC_PAL 1
#define BG_GREAT_PAL 2
#define BG_ULTRA_PAL 3
#define BG_MASTER_PAL 4
#define PALTAG_KNOB 5
#define DIGITAL_TEXT_PAL 6
#define LOTTERY_JPN_PAL 7
#define PALTAG_INTERFACE 8
#define PALTAG_INTERFACEPLAYER 9
#define PALTAG_MENU_BASIC 10
#define PALTAG_MENU_GREAT 11
#define PALTAG_MENU_ULTRA 12
#define PALTAG_MENU_MASTER 13

#define PALTAG_BELOSSOM 14
#define PALTAG_PHANPY 15
#define PALTAG_TEDDIURSA 16
#define PALTAG_ELEKID 17
#define PALTAG_HOPPIP 18
#define PALTAG_ARROWS 19
#define PALTAG_PRESS_A 20

#define PALTAG_POKEBALL  5558

static const struct SpritePalette sSpritePalettes[] =
{
    { .data = Gacha_BG_Basic_Pal,      .tag = BG_BASIC_PAL },
    { .data = Gacha_BG_Great_Pal,      .tag = BG_GREAT_PAL },
    { .data = Gacha_BG_Ultra_Pal,      .tag = BG_ULTRA_PAL },
    { .data = Gacha_BG_Master_Pal,     .tag = BG_MASTER_PAL },
    {}
};

static const struct SpritePalette sSpritePalettes2[] =
{
    { .data = BelossomPAL,             .tag = PALTAG_BELOSSOM },
    { .data = PhanpyPal,               .tag = PALTAG_PHANPY },
    { .data = TeddiursaPAL,            .tag = PALTAG_TEDDIURSA },
    { .data = ElekidPAL,               .tag = PALTAG_ELEKID },
    { .data = HoppipPAL,               .tag = PALTAG_HOPPIP },
    { .data = sCredit_Pal,             .tag = PALTAG_ARROWS },
    { .data = Gacha_press_a_Pal,       .tag = PALTAG_PRESS_A },
    { .data = Gacha_Knob_Pal,          .tag = PALTAG_KNOB },
    { .data = Gacha_Digital_Text_Pal,  .tag = DIGITAL_TEXT_PAL },
    { .data = sCredit_Pal,             .tag = PALTAG_INTERFACE },
    { .data = sPlayer_Pal,             .tag = PALTAG_INTERFACEPLAYER },
    { .data = Gacha_Lottery_Pal,       .tag = LOTTERY_JPN_PAL },
    { .data = Gacha_Menu_Basic_Pal,    .tag = PALTAG_MENU_BASIC },
    { .data = Gacha_Menu_Great_Pal,    .tag = PALTAG_MENU_GREAT },
    { .data = Gacha_Menu_Ultra_Pal,    .tag = PALTAG_MENU_ULTRA },
    { .data = Gacha_Menu_Master_Pal,   .tag = PALTAG_MENU_MASTER },
    {}
};

static const struct SpritePalette sBall[] =
{
    { .data = sPokeball_Pal,               .tag = PALTAG_POKEBALL },
    {}
};

static const struct CompressedSpriteSheet sSpriteSheet_Press_A =
{
    .data = Gacha_Press_A_GFX,
    .size = 0xC00,
    .tag = GFXTAG_PRESS_A,
};

static const struct CompressedSpriteSheet sSpriteSheet_Arrows =
{
    .data = Gacha_Arrows_GFX,
    .size = 0x200,
    .tag = GFXTAG_ARROWS,
};

static const struct CompressedSpriteSheet sSpriteSheet_Hoppip =
{
    .data = HoppipGFX,
    .size = 0x800,
    .tag = GFXTAG_HOPPIP,
};

static const struct CompressedSpriteSheet sSpriteSheet_Elekid =
{
    .data = ElekidGFX,
    .size = 0x800,
    .tag = GFXTAG_ELEKID,
};

static const struct CompressedSpriteSheet sSpriteSheet_Teddiursa =
{
    .data = TeddiursaGFX,
    .size = 0x800,
    .tag = GFXTAG_TEDDIURSA,
};

static const struct CompressedSpriteSheet sSpriteSheet_Phanpy =
{
    .data = PhanpyGFX,
    .size = 0x800,
    .tag = GFXTAG_PHANPY,
};

static const struct CompressedSpriteSheet sSpriteSheet_Belossom =
{
    .data = BelossomGFX,
    .size = 0x800,
    .tag = GFXTAG_BELOSSOM,
};

static const struct CompressedSpriteSheet sSpriteSheet_Menu_1 =
{
    .data = Gacha_Menu_1,
    .size = 0x800,
    .tag = GFXTAG_MENU_1,
};

static const struct CompressedSpriteSheet sSpriteSheet_Menu_2 =
{
    .data = Gacha_Menu_2,
    .size = 0x1000,
    .tag = GFXTAG_MENU_2,
};

static const struct CompressedSpriteSheet sSpriteSheets_Interface[] =
{
    {
        .data = gCredits_Gfx,
        .size = 0x280,
        .tag = GFXTAG_CREDIT_DIGIT,
    },
    {}
};

static const struct CompressedSpriteSheet sSpriteSheets_PlayerInterface[] =
{
    {
        .data = gPlayer_Gfx,
        .size = 0x280,
        .tag = GFXTAG_PLAYER_DIGIT
    },
    {}
};

static const struct CompressedSpriteSheet sSpriteSheet_Lottery_JPN =
{
    .data = Gacha_Lottery_JPN,
    .size = 0x800,
    .tag = LOTTERY_JPN_GFX,
};

static const struct CompressedSpriteSheet sSpriteSheet_Digital_Text =
{
    .data = Gacha_Digital_Text,
    .size = 0x1000,
    .tag = DIGITAL_TEXT_GFX,
};

static const struct CompressedSpriteSheet sSpriteSheet_Knob =
{
    .data = Gacha_Knob,
    .size = 0x800,
    .tag = KNOB_GFX,
};

static const struct OamData sOamData_Press_A =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x32),
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Arrows =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(8x32),
    .size = SPRITE_SIZE(8x32),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Hoppip =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Elekid =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Teddiursa =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Phanpy =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Belossom =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Menu =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Menu_2 =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Lottery_JPN =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Digital_Text =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x32),
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Knob =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOam_CreditDigit =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(8x16),
    .size = SPRITE_SIZE(8x16),
    .priority = 2,
};

static const struct OamData sOamData_Pokeball =
{
    .affineMode = ST_OAM_AFFINE_NORMAL,
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16)
};

static const union AnimCmd sAnim_Pokeball_SpinOnce[] =
{
    ANIMCMD_FRAME( 0, 3),
    ANIMCMD_FRAME( 4, 3),
    ANIMCMD_FRAME( 8, 3),
    ANIMCMD_FRAME(12, 3),
    ANIMCMD_FRAME(16, 3),
    ANIMCMD_FRAME(20, 3),
    ANIMCMD_FRAME(24, 3),
    ANIMCMD_FRAME(28, 3),
    ANIMCMD_FRAME(32, 3),
    ANIMCMD_FRAME(36, 3),
    ANIMCMD_FRAME(40, 3),
    ANIMCMD_FRAME(44, 3),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME( 0, 3),
    ANIMCMD_END
};

static const union AnimCmd sAnim_Pokeball_SpinTwice[] =
{
    ANIMCMD_FRAME( 0, 3),
    ANIMCMD_FRAME( 4, 3),
    ANIMCMD_FRAME( 8, 3),
    ANIMCMD_FRAME(12, 3),
    ANIMCMD_FRAME(16, 3),
    ANIMCMD_FRAME(20, 3),
    ANIMCMD_FRAME(24, 3),
    ANIMCMD_FRAME(28, 3),
    ANIMCMD_FRAME(32, 3),
    ANIMCMD_FRAME(36, 3),
    ANIMCMD_FRAME(40, 3),
    ANIMCMD_FRAME(44, 3),
    ANIMCMD_LOOP(2),
    ANIMCMD_FRAME( 0, 3),
    ANIMCMD_END
};

static const union AnimCmd *const sAnims_Pokeball[] =
{
    sAnim_Pokeball_SpinOnce,
    sAnim_Pokeball_SpinTwice
};

static const union AffineAnimCmd sAffineAnim_Pokeball_Normal[] =
{
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_END
};

static const union AffineAnimCmd sAffineAnim_Pokeball_Squish[] =
{
    AFFINEANIMCMD_FRAME(-8, 0, 0, 20),
    AFFINEANIMCMD_END
};

static const union AffineAnimCmd sAffineAnim_Pokeball_Unsquish[] =
{
    AFFINEANIMCMD_FRAME(0x60, 0x100, 0,  0),
    AFFINEANIMCMD_FRAME(   0,     0, 0,  5),
    AFFINEANIMCMD_FRAME(   8,     0, 0, 20),
    AFFINEANIMCMD_END
};

static const union AffineAnimCmd *const sAffineAnims_Pokeball[] =
{
    sAffineAnim_Pokeball_Normal,
    sAffineAnim_Pokeball_Squish,
    sAffineAnim_Pokeball_Unsquish
};

static const struct SpriteSheet sPokeBallSpriteSheet =
{
    .data = sPokeball_Gfx,
    .size = sizeof(sPokeball_Gfx),
    .tag = GFXTAG_POKEBALL
};

static const struct SpritePalette sPokeBallSpritePalette =
{
    .data = sPokeball_Pal,
    .tag = PALTAG_POKEBALL
};

static const struct SpriteTemplate sSpriteTemplate_Pokeball =
{
    .tileTag = GFXTAG_POKEBALL,
    .paletteTag = PALTAG_POKEBALL,
    .oam = &sOamData_Pokeball,
    .anims = sAnims_Pokeball,
    .images = NULL,
    .affineAnims = sAffineAnims_Pokeball,
    .callback = SpriteCB_BouncingPokeball
};

static const union AnimCmd sPressAAnimCmd_1[] = 
{
    ANIMCMD_FRAME(32, 10),
    ANIMCMD_FRAME(64, 10),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd sPressAAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sPressAAnimCmds[] = {
    sPressAAnimCmd_0, // Gray
    sPressAAnimCmd_1, // Highlight
};

static const struct SpriteTemplate sSpriteTemplate_Press_A =
{
    .tileTag = GFXTAG_PRESS_A,
    .paletteTag = PALTAG_PRESS_A,
    .oam = &sOamData_Press_A,
    .anims = sPressAAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const union AnimCmd sArrowAnimCmd_1[] = 
{
    ANIMCMD_FRAME(8, 20),
    ANIMCMD_FRAME(12, 20),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd sArrowAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(4, 20),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sArrowsAnimCmds[] = {
    sArrowAnimCmd_0, // Up and Down
    sArrowAnimCmd_1, // Up
};

static const struct SpriteTemplate sSpriteTemplate_Arrows =
{
    .tileTag = GFXTAG_ARROWS,
    .paletteTag = PALTAG_ARROWS,
    .oam = &sOamData_Arrows,
    .anims = sArrowsAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const union AnimCmd sMenu2AnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(64, 10),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sMenu2AnimCmds[] = {
    sMenu2AnimCmd_0,  // Looping animation
};

static const union AnimCmd sHoppipAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(32, 15),
    ANIMCMD_FRAME(48, 15),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sHoppipAnimCmds[] = {
    sHoppipAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_Hoppip =
{
    .tileTag = GFXTAG_HOPPIP,
    .paletteTag = PALTAG_HOPPIP,
    .oam = &sOamData_Hoppip,
    .anims = sHoppipAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const union AnimCmd sElekidAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(32, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(32, 15),
    //ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(48, 15),
    ANIMCMD_FRAME(32, 15),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sElekidAnimCmds[] = {
    sElekidAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_Elekid =
{
    .tileTag = GFXTAG_ELEKID,
    .paletteTag = PALTAG_ELEKID,
    .oam = &sOamData_Elekid,
    .anims = sElekidAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const union AnimCmd sTeddiursaAnimCmd_0[] = 
{
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(32, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(32, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(32, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(32, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(32, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(48, 30),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sTeddiursaAnimCmds[] = {
    sTeddiursaAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_Teddiursa =
{
    .tileTag = GFXTAG_TEDDIURSA,
    .paletteTag = PALTAG_TEDDIURSA,
    .oam = &sOamData_Teddiursa,
    .anims = sTeddiursaAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const union AnimCmd sPhanpyAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(48, 15),
    ANIMCMD_FRAME(32, 15),
    ANIMCMD_FRAME(48, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sPhanpyAnimCmds[] = {
    sPhanpyAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_Phanpy =
{
    .tileTag = GFXTAG_PHANPY,
    .paletteTag = PALTAG_PHANPY,
    .oam = &sOamData_Phanpy,
    .anims = sPhanpyAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const union AnimCmd sBelossomAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(32, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(16, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(48, 30),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sBelossomAnimCmds[] = {
    sBelossomAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_Belossom =
{
    .tileTag = GFXTAG_BELOSSOM,
    .paletteTag = PALTAG_BELOSSOM,
    .oam = &sOamData_Belossom,
    .anims = sBelossomAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Menu_1_Master =
{
    .tileTag = GFXTAG_MENU_1,
    .paletteTag = PALTAG_MENU_MASTER,
    .oam = &sOamData_Menu,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Menu_2_Master =
{
    .tileTag = GFXTAG_MENU_2,
    .paletteTag = PALTAG_MENU_MASTER,
    .oam = &sOamData_Menu_2,
    .anims = sMenu2AnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Menu_1_Ultra =
{
    .tileTag = GFXTAG_MENU_1,
    .paletteTag = PALTAG_MENU_ULTRA,
    .oam = &sOamData_Menu,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Menu_2_Ultra =
{
    .tileTag = GFXTAG_MENU_2,
    .paletteTag = PALTAG_MENU_ULTRA,
    .oam = &sOamData_Menu_2,
    .anims = sMenu2AnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Menu_1_Great =
{
    .tileTag = GFXTAG_MENU_1,
    .paletteTag = PALTAG_MENU_GREAT,
    .oam = &sOamData_Menu,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Menu_2_Great =
{
    .tileTag = GFXTAG_MENU_2,
    .paletteTag = PALTAG_MENU_GREAT,
    .oam = &sOamData_Menu_2,
    .anims = sMenu2AnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Menu_1_Basic =
{
    .tileTag = GFXTAG_MENU_1,
    .paletteTag = PALTAG_MENU_BASIC,
    .oam = &sOamData_Menu,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Menu_2_Basic =
{
    .tileTag = GFXTAG_MENU_2,
    .paletteTag = PALTAG_MENU_BASIC,
    .oam = &sOamData_Menu_2,
    .anims = sMenu2AnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_CreditDigit =
{
    .tileTag = GFXTAG_CREDIT_DIGIT,
    .paletteTag = PALTAG_INTERFACE,
    .oam = &sOam_CreditDigit,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct SpriteTemplate sSpriteTemplate_PlayerDigit =
{
    .tileTag = GFXTAG_PLAYER_DIGIT,
    .paletteTag = PALTAG_INTERFACEPLAYER,
    .oam = &sOam_CreditDigit,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const union AnimCmd sDigitalTextAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(32, 30),
    ANIMCMD_FRAME(64, 30),
    ANIMCMD_FRAME(96, 30),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sDigitalTextAnimCmds[] = {
    sDigitalTextAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_Digital_Text =
{
    .tileTag = DIGITAL_TEXT_GFX,
    .paletteTag = DIGITAL_TEXT_PAL,
    .oam = &sOamData_Digital_Text,
    .anims = sDigitalTextAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Lottery_JPN =
{
    .tileTag = LOTTERY_JPN_GFX,
    .paletteTag = LOTTERY_JPN_PAL,
    .oam = &sOamData_Lottery_JPN,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const union AnimCmd sKnobAnimCmd_1[] = 
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_FRAME(32, 20),
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END
};

static const union AnimCmd sKnobAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END
};

static const union AnimCmd *const sKnobAnimCmds[] = {
    sKnobAnimCmd_0, // Still
    sKnobAnimCmd_1, // Rotate
};

static const struct SpriteTemplate sSpriteTemplate_Knob =
{
    .tileTag = KNOB_GFX,
    .paletteTag = PALTAG_KNOB,
    .oam = &sOamData_Knob,
    .anims = sKnobAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

void StartGacha(void)
{
    sGacha = AllocZeroed(sizeof(struct Gacha));
    CreateTask(FadeToGachaScreen, 0);
}

static void SpriteCB_BouncingPokeball(struct Sprite *sprite)
{
    sprite->y += sprite->data[0] / 10;
    sprite->data[5] += sprite->data[1];
    sprite->x = sprite->data[5] / 10;
    if (sprite->y > 0x4c)
    {
        sprite->y = 0x4c;
        sprite->data[0] = -(sprite->data[0] * sprite->data[2]) / 100;
        sprite->data[3] ++;
    }
    if (sprite->x == 0x78)
        sprite->data[1] = 0;
    sprite->data[0] += sprite->data[4];
    if (sprite->data[3] == 4)
    {
        sprite->data[7] = 1;
        sprite->callback = SpriteCallbackDummy;
    }
}

static void SpriteCB_BouncingPokeballArrive(struct Sprite *sprite)
{
    if (sprite->data[2] == 0)
    {
        if ((sprite->y += 4) > sprite->data[3])
        {
            sprite->data[2] ++;
            sprite->data[0] = 0x16;
            PlaySE(SE_BALL_BOUNCE_1);
        }
    }
    else
    {
        if (sprite->data[0] == 0x42)
            PlaySE(SE_BALL_BOUNCE_2);
        if (sprite->data[0] == 0x5c)
            PlaySE(SE_BALL_BOUNCE_3);
        if (sprite->data[0] == 0x6b)
            PlaySE(SE_BALL_BOUNCE_4);
        sprite->y2 += sTradeBallVerticalVelocityTable[sprite->data[0]];
        if (++sprite->data[0] == 0x6c)
            sprite->callback = SpriteCallbackDummy;
    }
}

static void FadeToGachaScreen(u8 taskId)
{
    switch (gTasks[taskId].data[0])
    {
    case 0:
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].data[0]++;
        break;
    case 1:
        if (!gPaletteFade.active)
        {
            SetMainCallback2(InitGachaScreen);
            DestroyTask(taskId);
        }
        break;
    }
}

static void BGSetup(void)
{
    u16 size = 0x1480;

    InitBgsFromTemplates(0, sGachaBGtemplates, ARRAY_COUNT(sGachaBGtemplates));
    SetBgTilemapBuffer(GACHA_BG_BASE, AllocZeroed(BG_SCREEN_SIZE));
    DecompressAndLoadBgGfxUsingHeap(GACHA_BG_BASE, Gacha_BG_Main, size, 0, 0);
    CopyToBgTilemapBuffer(GACHA_BG_BASE, Gacha_BG_Main_Tilemap, 0, 0);
    ResetPaletteFade();

    switch (sGacha->GachaId)
    {
    default:
    case GACHA_BASIC:
        LoadPalette(Gacha_BG_Basic_Pal, 0, PLTT_SIZE_4BPP);
        break;
    case GACHA_GREAT:
        LoadPalette(Gacha_BG_Great_Pal, 0, PLTT_SIZE_4BPP);
        break;
    case GACHA_ULTRA:
        LoadPalette(Gacha_BG_Ultra_Pal, 0, PLTT_SIZE_4BPP);
        break;
    case GACHA_MASTER:
        LoadPalette(Gacha_BG_Master_Pal, 0, PLTT_SIZE_4BPP);
        break;
    }
}

static void BGRed(void)
{
    u16 size = 0x1480;

    InitBgsFromTemplates(0, sGachaBGtemplates, ARRAY_COUNT(sGachaBGtemplates));
    SetBgTilemapBuffer(GACHA_BG_BASE, AllocZeroed(BG_SCREEN_SIZE));
    DecompressAndLoadBgGfxUsingHeap(GACHA_BG_BASE, Gacha_BG_Red, size, 0, 0);
    CopyToBgTilemapBuffer(GACHA_BG_BASE, Gacha_BG_Red_Tilemap, 0, 0);
    ResetPaletteFade();
    LoadPalette(Gacha_BG_Red_Pal, 0, PLTT_SIZE_4BPP);
}

static void Shake1(void)
{
    u16 size = 0x1480;

    InitBgsFromTemplates(0, sGachaBGtemplates, ARRAY_COUNT(sGachaBGtemplates));
    SetBgTilemapBuffer(GACHA_BG_BASE, AllocZeroed(BG_SCREEN_SIZE));
    DecompressAndLoadBgGfxUsingHeap(GACHA_BG_BASE, Gacha_BG_Left, size, 0, 0);
    CopyToBgTilemapBuffer(GACHA_BG_BASE, Gacha_BG_Left_Tilemap, 0, 0);
    ResetPaletteFade();

    switch (sGacha->GachaId)
    {
    default:
    case GACHA_BASIC:
        LoadPalette(Gacha_BG_Basic_Pal, 0, PLTT_SIZE_4BPP);
        break;
    case GACHA_GREAT:
        LoadPalette(Gacha_BG_Great_Pal, 0, PLTT_SIZE_4BPP);
        break;
    case GACHA_ULTRA:
        LoadPalette(Gacha_BG_Ultra_Pal, 0, PLTT_SIZE_4BPP);
        break;
    case GACHA_MASTER:
        LoadPalette(Gacha_BG_Master_Pal, 0, PLTT_SIZE_4BPP);
        break;
    }
}

static void Shake2(void)
{
    u16 size = 0x1480;

    InitBgsFromTemplates(0, sGachaBGtemplates, ARRAY_COUNT(sGachaBGtemplates));
    SetBgTilemapBuffer(GACHA_BG_BASE, AllocZeroed(BG_SCREEN_SIZE));
    DecompressAndLoadBgGfxUsingHeap(GACHA_BG_BASE, Gacha_BG_Right, size, 0, 0);
    CopyToBgTilemapBuffer(GACHA_BG_BASE, Gacha_BG_Right_Tilemap, 0, 0);
    ResetPaletteFade();

    switch (sGacha->GachaId)
    {
    default:
    case GACHA_BASIC:
        LoadPalette(Gacha_BG_Basic_Pal, 0, PLTT_SIZE_4BPP);
        break;
    case GACHA_GREAT:
        LoadPalette(Gacha_BG_Great_Pal, 0, PLTT_SIZE_4BPP);
        break;
    case GACHA_ULTRA:
        LoadPalette(Gacha_BG_Ultra_Pal, 0, PLTT_SIZE_4BPP);
        break;
    case GACHA_MASTER:
        LoadPalette(Gacha_BG_Master_Pal, 0, PLTT_SIZE_4BPP);
        break;
    }
}

static void GachaVBlankCallback(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void GachaMainCallback(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
}

static void SetCreditDigits(u16 num)
{
    u8 i;
    u16 d = 1000;

    for (i = 0; i < 4; i++)
    {
        u8 digit = num / d;

        gSprites[sGacha->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].invisible = FALSE;

        gSprites[sGacha->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].oam.tileNum =
            gSprites[sGacha->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].sheetTileStart + (digit * 2);

        gSprites[sGacha->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].oam.priority = 0;

        num = num % d;
        d = d / 10;
    }

    for (i = 0; i < 4; i++) {
        if (gSprites[sGacha->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].invisible == FALSE) {

        } else {
            gSprites[sGacha->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].invisible = FALSE;
        }
    }

    BuildOamBuffer();
}

static void SetPlayerDigits(u16 num)
{
    u8 i;
    u16 d = 1000;  // Start with the thousands place

    for (i = 0; i < 4; i++)  // Always show 4 digits
    {
        u8 digit = num / d;

        // Show the digit (all digits are visible)
        gSprites[sGacha->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].invisible = FALSE;

        // If it's a smaller number, show 0 for the higher place values
        if (i == 0 && num < 1000) {
            digit = 0;  // Force 0 for the thousands place if the number is less than 1000
        }

        // Set the tileNum based on the current digit
        gSprites[sGacha->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].oam.tileNum =
            gSprites[sGacha->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].sheetTileStart + (digit * 2);

        gSprites[sGacha->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].oam.priority = 0;

        // Reduce num for the next digit
        num = num % d;
        d = d / 10;
    }

    BuildOamBuffer();
}

static void CreateCreditSprites(void)
{
    return; 

    u8 i;

    for (i = 0; i < ARRAY_COUNT(sSpriteSheets_Interface) - 1; i++)  
    {
        LoadCompressedSpriteSheet(&sSpriteSheets_Interface[i]);
    }

    for (i = 0; i < MAX_COIN_DIGITS; i++)
    {
        if (i == 0)
        {
            sGacha->CreditSpriteIds[i + SPR_CREDIT_DIGITS] = CreateSprite(&sSpriteTemplate_CreditDigit, 207, 140, 2);
            gSprites[sGacha->PlayerSpriteIds[i + SPR_CREDIT_DIGITS]].oam.priority = 0;
        }
        if (i == 1)
        {
            sGacha->CreditSpriteIds[i + SPR_CREDIT_DIGITS] = CreateSprite(&sSpriteTemplate_CreditDigit, 8 + 207, 140, 2);
            gSprites[sGacha->PlayerSpriteIds[i + SPR_CREDIT_DIGITS]].oam.priority = 0;
        }
        if (i == 2)
        {
            sGacha->CreditSpriteIds[i + SPR_CREDIT_DIGITS] = CreateSprite(&sSpriteTemplate_CreditDigit, 16 + 207, 140, 2);
            gSprites[sGacha->PlayerSpriteIds[i + SPR_CREDIT_DIGITS]].oam.priority = 0;
        }
        if (i == 3)
        {
            sGacha->CreditSpriteIds[i + SPR_CREDIT_DIGITS] = CreateSprite(&sSpriteTemplate_CreditDigit, 24 + 207, 140, 2);
            gSprites[sGacha->PlayerSpriteIds[i + SPR_CREDIT_DIGITS]].oam.priority = 0;
        }
    }
}

static void CreatePlayerSprites(void)
{
    return;

    u8 i;

    for (i = 0; i < ARRAY_COUNT(sSpriteSheets_PlayerInterface) - 1; i++)  
    {
        LoadCompressedSpriteSheet(&sSpriteSheets_PlayerInterface[i]);
    }

    for (i = 0; i < 4; i++)
    {
        sGacha->PlayerSpriteIds[i + SPR_PLAYER_DIGITS] = CreateSprite(&sSpriteTemplate_PlayerDigit, i * 8 + 207, 118, 2);
        gSprites[sGacha->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].oam.priority = 0;
    }
}

static void CreateCTA(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Press_A);
    sGacha->CTAspriteId = CreateSprite(&sSpriteTemplate_Press_A, 152, 116, 0);
    gSprites[sGacha->CTAspriteId].animNum = 1; // Off
}

static void CreateArrows(void)
{
    return;

    LoadCompressedSpriteSheet(&sSpriteSheet_Arrows);
    sGacha->ArrowsSpriteId = CreateSprite(&sSpriteTemplate_Arrows, 207 + 24, 120, 0);
    gSprites[sGacha->ArrowsSpriteId].animNum = 1; // Only Up
}

static void CreateLotteryJPN(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Lottery_JPN);
    sGacha->LotteryJPNspriteId = CreateSprite(&sSpriteTemplate_Lottery_JPN, 176, 32, 0);
}

static void CreateHoppip(void)
{
    s16 x = 142;
    s16 y = 56;
    s16 x2 = x + 34;
    s16 x3 = x + 68;

    LoadCompressedSpriteSheet(&sSpriteSheet_Hoppip);
    sGacha->PokemonOneSpriteId = CreateSprite(&sSpriteTemplate_Hoppip, x, y, 0);
    sGacha->PokemonTwoSpriteId = CreateSprite(&sSpriteTemplate_Hoppip, x2, y, 0);    
    sGacha->PokemonThreeSpriteId = CreateSprite(&sSpriteTemplate_Hoppip, x3, y, 0);    
}

static UNUSED void CreateElekid(void)
{
    s16 x = 142;
    s16 y = 56 + 2;
    s16 x2 = x + 34;
    s16 x3 = x + 68;

    LoadCompressedSpriteSheet(&sSpriteSheet_Elekid);
    sGacha->PokemonOneSpriteId = CreateSprite(&sSpriteTemplate_Elekid, x, y, 0);
    sGacha->PokemonTwoSpriteId = CreateSprite(&sSpriteTemplate_Elekid, x2, y, 0);
    sGacha->PokemonThreeSpriteId = CreateSprite(&sSpriteTemplate_Elekid, x3, y, 0);    
}

static void CreateTeddiursa(void)
{
    s16 x = 142;
    s16 y = 56;
    s16 x2 = x + 34;
    s16 x3 = x + 68;

    LoadCompressedSpriteSheet(&sSpriteSheet_Teddiursa);
    sGacha->PokemonOneSpriteId = CreateSprite(&sSpriteTemplate_Teddiursa, x, y, 0);
    sGacha->PokemonTwoSpriteId = CreateSprite(&sSpriteTemplate_Teddiursa, x2, y, 0);    
    sGacha->PokemonThreeSpriteId = CreateSprite(&sSpriteTemplate_Teddiursa, x3, y, 0);
}

static void CreatePhanpy(void)
{
    s16 x = 142;
    s16 y = 56;
    s16 x2 = x + 34;
    s16 x3 = x + 68;

    LoadCompressedSpriteSheet(&sSpriteSheet_Phanpy);
    sGacha->PokemonOneSpriteId = CreateSprite(&sSpriteTemplate_Phanpy, x, y, 0);
    sGacha->PokemonTwoSpriteId = CreateSprite(&sSpriteTemplate_Phanpy, x2, y, 0);
    sGacha->PokemonThreeSpriteId = CreateSprite(&sSpriteTemplate_Phanpy, x3, y, 0);
}

static void CreateBelossom(void)
{
    s16 x = 142;
    s16 y = 56;
    s16 x2 = x + 34;
    s16 x3 = x + 68;

    LoadCompressedSpriteSheet(&sSpriteSheet_Belossom);
    sGacha->PokemonOneSpriteId = CreateSprite(&sSpriteTemplate_Belossom, x, y, 0);
    sGacha->PokemonTwoSpriteId = CreateSprite(&sSpriteTemplate_Belossom, x2, y, 0);    
    sGacha->PokemonThreeSpriteId = CreateSprite(&sSpriteTemplate_Belossom, x3, y, 0);

}

static void CreateDigitalText(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Digital_Text);
    sGacha->DigitalTextSpriteId = CreateSprite(&sSpriteTemplate_Digital_Text, 64, 25, 0);
}

static void CreateCreditMenu(void)
{
    return; 

    s16 x = 144;
    s16 y = 128;
    u8 priority = 1;

    LoadCompressedSpriteSheet(&sSpriteSheet_Menu_1);

    switch (sGacha->GachaId)
    {
    default:
    case GACHA_BASIC:
        sGacha->CreditMenu1Id = CreateSprite(&sSpriteTemplate_Menu_1_Basic, x, y, priority);
        break;
    case GACHA_GREAT:
        sGacha->CreditMenu1Id = CreateSprite(&sSpriteTemplate_Menu_1_Great, x, y, priority);
        break;
    case GACHA_ULTRA:
        sGacha->CreditMenu1Id = CreateSprite(&sSpriteTemplate_Menu_1_Ultra, x, y, priority);
        break;
    case GACHA_MASTER:
        sGacha->CreditMenu1Id = CreateSprite(&sSpriteTemplate_Menu_1_Master, x, y, priority);
        break;
    }
    gSprites[sGacha->CreditMenu1Id].oam.priority = 1;
}

static void CreatePlayerMenu(void)
{
    return;

    s16 x = 144;
    s16 y = 128;
    s16 x2 = x + 64;
    u8 priority = 1;

    LoadCompressedSpriteSheet(&sSpriteSheet_Menu_2);

    switch (sGacha->GachaId)
    {
    default:
    case GACHA_BASIC:
        sGacha->CreditMenu2Id = CreateSprite(&sSpriteTemplate_Menu_2_Basic, x2, y, priority);
        break;
    case GACHA_GREAT:
        sGacha->CreditMenu2Id = CreateSprite(&sSpriteTemplate_Menu_2_Great, x2, y, priority);
        break;
    case GACHA_ULTRA:
        sGacha->CreditMenu2Id = CreateSprite(&sSpriteTemplate_Menu_2_Ultra, x2, y, priority);
        break;
    case GACHA_MASTER:
        sGacha->CreditMenu2Id = CreateSprite(&sSpriteTemplate_Menu_2_Master, x2, y, priority);
        break;
    }
    gSprites[sGacha->CreditMenu2Id].oam.priority = 1;
}

static void CreateKnob(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Knob);
    sGacha->KnobSpriteId = CreateSprite(&sSpriteTemplate_Knob, 76, 128, 0);
    gSprites[sGacha->KnobSpriteId].animNum = 0; // No Rotation
}

typedef struct  {
    int customNumber;
    u16 species;
} SpeciesGacha;

static const SpeciesGacha sSpeciesGachaBasicCommon[] = {
    {0, SPECIES_YAMPER},
    {1, SPECIES_BALTOY},
    {2, SPECIES_SNOM}
};

static const SpeciesGacha sSpeciesGachaBasicUncommon[] = {
    {0, SPECIES_YAMPER},
    {1, SPECIES_BALTOY},
    {2, SPECIES_SNOM}
};

static const SpeciesGacha sSpeciesGachaBasicRare[] = {
    {0, SPECIES_YAMPER},
    {1, SPECIES_BALTOY},
    {2, SPECIES_SNOM}
};

static const SpeciesGacha sSpeciesGachaBasicUltraRare[] = {
    {0, SPECIES_YAMPER},
    {1, SPECIES_BALTOY},
    {2, SPECIES_SNOM}
};

static const SpeciesGacha sSpeciesGreatCommon[] = {
    {0, SPECIES_VOLTORB_HISUI},
    {1, SPECIES_TOXEL},    
    {2, SPECIES_GEODUDE_ALOLA},    
};

static const SpeciesGacha sSpeciesGreatUncommon[] = {
    {0, SPECIES_VOLTORB_HISUI},
    {1, SPECIES_TOXEL},    
    {2, SPECIES_GEODUDE_ALOLA},   
};

static const SpeciesGacha sSpeciesGreatRare[] = {
    {0, SPECIES_VOLTORB_HISUI},
    {1, SPECIES_TOXEL},    
    {2, SPECIES_GEODUDE_ALOLA},    
};

static const SpeciesGacha sSpeciesGreatUltraRare[] = {
    {0, SPECIES_VOLTORB_HISUI},
    {1, SPECIES_TOXEL},    
    {2, SPECIES_GEODUDE_ALOLA},    
};

static const SpeciesGacha sSpeciesUltraCommon[] = {
    {0, SPECIES_JANGMO_O},
    {1, SPECIES_OSHAWOTT},
    {2, SPECIES_OSHAWOTT},        
};

static const SpeciesGacha sSpeciesUltraUncommon[] = {
    {0, SPECIES_JANGMO_O},
    {1, SPECIES_OSHAWOTT},
    {2, SPECIES_OSHAWOTT},    
};

static const SpeciesGacha sSpeciesUltraRare[] = {
    {0, SPECIES_JANGMO_O},
    {1, SPECIES_OSHAWOTT},
    {2, SPECIES_OSHAWOTT},    
};

static const SpeciesGacha sSpeciesUltraUltraRare[] = {
    {0, SPECIES_JANGMO_O},
    {1, SPECIES_OSHAWOTT},
    {2, SPECIES_ARCTIBAX},    
};

static const SpeciesGacha sSpeciesMasterCommon[] = {
    {0, SPECIES_KANGASKHAN},
    {1, SPECIES_CHANDELURE},
    {2, SPECIES_GARDEVOIR},
};

static const SpeciesGacha sSpeciesMasterUncommon[] = {
    {0, SPECIES_KANGASKHAN},
    {1, SPECIES_CHANDELURE},
    {2, SPECIES_GARDEVOIR},
};

static const SpeciesGacha sSpeciesMasterRare[] = {
    {0, SPECIES_KANGASKHAN},
    {1, SPECIES_CHANDELURE},
    {2, SPECIES_GARDEVOIR},
};

static const SpeciesGacha sSpeciesMasterUltraRare[] = {
    {0, SPECIES_KANGASKHAN},
    {1, SPECIES_CHANDELURE},
    {2, SPECIES_GARDEVOIR},
};

static void ShowMessage(void)
{
    u16 bet;
    struct WindowTemplate template;

    SetWindowTemplateFields(&template, GACHA_MENUS, 17, 10, 10, 2, 0xF, 0x194);
    
    sTextWindowId = AddWindow(&template);
    FillWindowPixelBuffer(sTextWindowId, PIXEL_FILL(0));
    PutWindowTilemap(sTextWindowId);
    LoadUserWindowBorderGfx(sTextWindowId, 0x214, BG_PLTT_ID(14));
    DrawStdWindowFrame(sTextWindowId, FALSE); 
    bet = sGacha->newMonOdds;
    ConvertUIntToDecimalStringN(gStringVar1, bet, STR_CONV_MODE_LEADING_ZEROS, 3);
    //gStringVar4[0] = '\0';
    StringExpandPlaceholders(gStringVar4, sMessageText);
    AddTextPrinterParameterized(sTextWindowId, FONT_NARROW, gStringVar4, 0, 1, 0, 0);
    CopyWindowToVram(sTextWindowId, 3);
}

static void ResetMessage(void)
{
    ClearStdWindowAndFrame(sTextWindowId, TRUE);
    RemoveWindow(sTextWindowId);
}

static void StartExitGacha(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    sGacha->state = GACHA_STATE_EXIT;
}

static void StartTradeScreen(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    sGacha->state = STATE_FADE;
}

static u16 GetMaxAvailableGachaRaritySpecies(u32 gachaId, u32 rarity)
{
    // Get the number of available Pokémon based on rarity
    switch (gachaId)
    {
    default:
    case GACHA_BASIC:
        switch (rarity)
        {
        default:
        case RARITY_COMMON:
            return ARRAY_COUNT(sSpeciesGachaBasicCommon);
        case RARITY_UNCOMMON:
            return ARRAY_COUNT(sSpeciesGachaBasicUncommon);
        case RARITY_RARE:
            return ARRAY_COUNT(sSpeciesGachaBasicRare);
        case RARITY_ULTRA_RARE:
            return ARRAY_COUNT(sSpeciesGachaBasicUltraRare);
        }
    case GACHA_GREAT:
        switch (rarity)
        {
        default:
        case RARITY_COMMON:
            return ARRAY_COUNT(sSpeciesGreatCommon);
        case RARITY_UNCOMMON:
            return ARRAY_COUNT(sSpeciesGreatUncommon);
        case RARITY_RARE:
            return ARRAY_COUNT(sSpeciesGreatRare);
        case RARITY_ULTRA_RARE:
            return ARRAY_COUNT(sSpeciesGreatUltraRare);
        }
    case GACHA_ULTRA:
        switch (rarity)
        {
        default:
        case RARITY_COMMON:
            return ARRAY_COUNT(sSpeciesUltraCommon);
        case RARITY_UNCOMMON:
            return ARRAY_COUNT(sSpeciesUltraUncommon);
        case RARITY_RARE:
            return ARRAY_COUNT(sSpeciesUltraRare);
        case RARITY_ULTRA_RARE:
            return ARRAY_COUNT(sSpeciesUltraUltraRare);
        }
    case GACHA_MASTER:
        switch (rarity)
        {
        default:
        case RARITY_COMMON:
            return ARRAY_COUNT(sSpeciesMasterCommon);
        case RARITY_UNCOMMON:
            return ARRAY_COUNT(sSpeciesMasterUncommon);
        case RARITY_RARE:
            return ARRAY_COUNT(sSpeciesMasterRare);
        case RARITY_ULTRA_RARE:
            return ARRAY_COUNT(sSpeciesMasterUltraRare);
        }
    }
    return 0; // failsafe
}

u16 GetGachaBasicSpecies(u16 randNum)
{
    int i;
    u16 totalMax;

    // Use the pre-defined totalMax values based on the rarity
    totalMax = GetMaxAvailableGachaRaritySpecies(GACHA_BASIC, sGacha->Rarity);

    // Check if the provided Number is valid
    if (randNum >= totalMax)
        return -1;  // Return -1 if the Number is out of range for the list

    // Now, search for the Pokémon based on its customNumber
    switch (sGacha->Rarity)
    {
    default:
    case RARITY_COMMON:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesGachaBasicCommon[i].customNumber == randNum)
                return sSpeciesGachaBasicCommon[i].species;
        }
        break;
    case RARITY_UNCOMMON:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesGachaBasicUncommon[i].customNumber == randNum)
                return sSpeciesGachaBasicUncommon[i].species;
        }
        break;
    case RARITY_RARE:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesGachaBasicRare[i].customNumber == randNum)
                return sSpeciesGachaBasicRare[i].species;
        }
        break;
    case RARITY_ULTRA_RARE:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesGachaBasicUltraRare[i].customNumber == randNum)
                return sSpeciesGachaBasicUltraRare[i].species;
        }
        break;
    }

    return -1; // Return -1 if customNumber is not found
}

u16 GetGachaGreatSpecies(u16 randNum)
{
    int i;
    u16 totalMax = 0;

    // Determine the totalMax based on rarity
    totalMax = GetMaxAvailableGachaRaritySpecies(GACHA_GREAT, sGacha->Rarity);

    // Check if the provided Number is within the range
    if (randNum >= totalMax)
        return -1;  // Return -1 if out of range

    // Loop through the correct array based on rarity
    switch (sGacha->Rarity)
    {
    default:
    case RARITY_COMMON:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesGreatCommon[i].customNumber == randNum)
                return sSpeciesGreatCommon[i].species;
        }
        break;
    case RARITY_UNCOMMON:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesGreatUncommon[i].customNumber == randNum)
                return sSpeciesGreatUncommon[i].species;
        }
        break;
    case RARITY_RARE:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesGreatRare[i].customNumber == randNum)
                return sSpeciesGreatRare[i].species;
        }
        break;
    case RARITY_ULTRA_RARE:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesGreatUltraRare[i].customNumber == randNum)
                return sSpeciesGreatUltraRare[i].species;
        }
        break;
    }

    return -1; // Return -1 if customNumber is not found
}

u16 GetGachaUltraSpecies(u16 randNum)
{
    int i;
    u16 totalMax = 0;

    // Determine the totalMax based on rarity
    totalMax = GetMaxAvailableGachaRaritySpecies(GACHA_ULTRA, sGacha->Rarity);

    // Check if the provided Number is within the range
    if (randNum >= totalMax)
        return -1;  // Return -1 if out of range

    // Loop through the correct array based on rarity
    switch (sGacha->Rarity)
    {
    default:
    case RARITY_COMMON:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesUltraCommon[i].customNumber == randNum)
                return sSpeciesUltraCommon[i].species;
        }
        break;
    case RARITY_UNCOMMON:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesUltraUncommon[i].customNumber == randNum)
                return sSpeciesUltraUncommon[i].species;
        }
        break;
    case RARITY_RARE:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesUltraRare[i].customNumber == randNum)
                return sSpeciesUltraRare[i].species;
        }
        break;
    case RARITY_ULTRA_RARE:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesUltraUltraRare[i].customNumber == randNum)
                return sSpeciesUltraUltraRare[i].species;
        }
        break;
    }

    return -1; // Return -1 if customNumber is not found
}

u16 GetGachaMasterSpecies(u16 randNum)
{
    int i;
    u16 totalMax = 0;

    totalMax = GetMaxAvailableGachaRaritySpecies(GACHA_MASTER, sGacha->Rarity);

    // Check if the provided Number is within the range
    if (randNum >= totalMax)
        return -1;  // Return -1 if out of range

    switch (sGacha->Rarity)
    {
    default:
    case RARITY_COMMON:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesMasterCommon[i].customNumber == randNum)
                return sSpeciesMasterCommon[i].species;
        }
        break;
    case RARITY_UNCOMMON:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesMasterUncommon[i].customNumber == randNum)
                return sSpeciesMasterUncommon[i].species;
        }
        break;
    case RARITY_RARE:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesMasterRare[i].customNumber == randNum)
                return sSpeciesMasterRare[i].species;
        }
        break;
    case RARITY_ULTRA_RARE:
        for (i = 0; i < totalMax; i++)
        {
            if (sSpeciesMasterUltraRare[i].customNumber == randNum)
                return sSpeciesMasterUltraRare[i].species;
        }
        break;
    }

    return -1; // Return -1 if customNumber is not found
}

u16 GetGachaMon(u16 randNum)
{
    u32 species;

    switch (sGacha->GachaId)
    {
    default:
    case GACHA_BASIC:
        species = GetGachaBasicSpecies(randNum);
        break;
    case GACHA_GREAT:
        species = GetGachaGreatSpecies(randNum);
        break;
    case GACHA_ULTRA:
        species = GetGachaUltraSpecies(randNum);
        break;
    case GACHA_MASTER:
        species = GetGachaMasterSpecies(randNum);
        break;
    }

    if (species >= SPECIES_EGG)
        return SPECIES_NONE;  // Or another default value indicating not found.
    return species;
}

static inline bool32 CheckIfOwned(u16 species)
{
    u16 nationalDexNo;
    nationalDexNo = SpeciesToNationalPokedexNum(species);
    return GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT);
}

bool32 IsNotValidOwnedSpecies(u16 species)
{
    if (species == SPECIES_NONE)
        return TRUE;
    return !CheckIfOwned(species);
}

bool32 IsNotValidUnownedSpecies(u16 species)
{
    if (species == SPECIES_NONE)
        return TRUE;
    return CheckIfOwned(species);
}

static void GetPokemonOwned(void)
{
    u16 species;
    int nationalDexNo;
    int i;

    sGacha->ownedCommon = 0;
    sGacha->ownedUncommon = 0;
    sGacha->ownedRare = 0;
    sGacha->ownedUltraRare = 0;

    switch (sGacha->GachaId)
    {
    default:
    case GACHA_BASIC:
        for (i = 0; i < ARRAY_COUNT(sSpeciesGachaBasicCommon); i++)
        {
            species = sSpeciesGachaBasicCommon[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedCommon = (sGacha->ownedCommon + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesGachaBasicUncommon); i++)
        {
            species = sSpeciesGachaBasicUncommon[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedUncommon = (sGacha->ownedUncommon + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesGachaBasicRare); i++)
        {
            species = sSpeciesGachaBasicRare[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedRare = (sGacha->ownedRare + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesGachaBasicUltraRare); i++)
        {
            species = sSpeciesGachaBasicUltraRare[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedUltraRare = (sGacha->ownedUltraRare + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        break;
    case GACHA_GREAT:
        for (i = 0; i < ARRAY_COUNT(sSpeciesGreatCommon); i++)
        {
            species = sSpeciesGreatCommon[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedCommon = (sGacha->ownedCommon + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesGreatUncommon); i++)
        {
            species = sSpeciesGreatUncommon[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedUncommon = (sGacha->ownedUncommon + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesGreatRare); i++)
        {
            species = sSpeciesGreatRare[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedRare = (sGacha->ownedRare + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesGreatUltraRare); i++)
        {
            species = sSpeciesGreatUltraRare[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedUltraRare = (sGacha->ownedUltraRare + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        break;
    case GACHA_ULTRA:
        for (i = 0; i < ARRAY_COUNT(sSpeciesUltraCommon); i++)
        {
            species = sSpeciesUltraCommon[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedCommon = (sGacha->ownedCommon + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesUltraUncommon); i++)
        {
            species = sSpeciesUltraUncommon[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedUncommon = (sGacha->ownedUncommon + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesUltraRare); i++)
        {
            species = sSpeciesUltraRare[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedRare = (sGacha->ownedRare + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesUltraUltraRare); i++)
        {
            species = sSpeciesUltraUltraRare[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedUltraRare = (sGacha->ownedUltraRare + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        break;
    case GACHA_MASTER:
        for (i = 0; i < ARRAY_COUNT(sSpeciesMasterCommon); i++)
        {
            species = sSpeciesMasterCommon[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedCommon = (sGacha->ownedCommon + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesMasterUncommon); i++)
        {
            species = sSpeciesMasterUncommon[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedUncommon = (sGacha->ownedUncommon + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesMasterRare); i++)
        {
            species = sSpeciesMasterRare[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedRare = (sGacha->ownedRare + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        for (i = 0; i < ARRAY_COUNT(sSpeciesMasterUltraRare); i++)
        {
            species = sSpeciesMasterUltraRare[i].species;
            nationalDexNo = SpeciesToNationalPokedexNum(species);
            sGacha->ownedUltraRare = (sGacha->ownedUltraRare + GetSetPokedexFlag(nationalDexNo, FLAG_GET_CAUGHT));
        }
        break;
    }
}

u8 CalculateChanceForCategory(u16 owned, u16 available, u8 baseChance, u16 wager)
{
    u8 newChance;
    u8 ownedPercentage;
    u8 wagerMultiplier;
    u8 boostedChance;
    u16 minWager;

    // Determine minimum wager based on sGacha->GachaId
    switch (sGacha->GachaId)
    {
    default:
    case GACHA_BASIC:
        minWager = GACHA_BASIC_MIN_WAGER;
        break;
    case GACHA_GREAT:
        minWager = GACHA_GREAT_MIN_WAGER;
        break;
    case GACHA_ULTRA:
        minWager = GACHA_ULTRA_MIN_WAGER;
        break;
    case GACHA_MASTER:
        minWager = GACHA_MASTER_MIN_WAGER;
        break;
    }

    // If available Pokémon is 0, there is no chance
    if (available == 0)
        return 0;

    // Calculate the reduction in chance based on the proportion of owned Pokémon
    ownedPercentage = (owned * 100) / available;
    newChance = baseChance * (100 - ownedPercentage) / 100;

    // Ensure the wager is within the valid range
    if (GACHA_BASIC_MIN_WAGER >= minWager && owned < available)
    {
        // Normalize wager to a 0-100 range where [minWager - 9999] -> [0 - 100]
        wagerMultiplier = ((GACHA_BASIC_MIN_WAGER - minWager) * 100) / (9999 - minWager);

        // Boost the chance based on the wager multiplier, but cap it by baseChance
        boostedChance = newChance + ((baseChance - newChance) * wagerMultiplier) / 100;

        // Ensure the chance doesn't exceed baseChance
        newChance = (boostedChance > baseChance) ? baseChance : boostedChance;
    }

    return newChance;
}

// Function to determine if the player gets a new Pokémon, and the rarity
void DeterminePokemonRarityAndNewStatus(void)
{
    u16 species;
    u16 totalNotOwned;
    u8 totalOwned;
    u16 totalMax;
    u16 newPokemonChance;
    u16 randomValue;
    u32 attempts = 1000;

    randomValue = (Random() % 100);  // Generate random value between 0 and 100

    // Determine Rarity based on the chances
    if (randomValue < RARITY_COMMON_ODDS)
        sGacha->Rarity = RARITY_COMMON; // Common
    else if (randomValue < (RARITY_COMMON_ODDS + RARITY_UNCOMMON_ODDS))
        sGacha->Rarity = RARITY_UNCOMMON; // Uncommon
    else if (randomValue < (RARITY_COMMON_ODDS + RARITY_UNCOMMON_ODDS + RARITY_RARE_ODDS))
        sGacha->Rarity = RARITY_RARE; // Rare
    else
        sGacha->Rarity = RARITY_ULTRA_RARE; // Ultra Rare

//    totalMax = GetMaxAvailableGachaRaritySpecies(sGacha->GachaId, sGacha->Rarity);
    newPokemonChance = (Random() % 3);  // Random pull from the available pool
    species = GetGachaMon(newPokemonChance);  // Get the Pokémon species based on the random value
    sGacha->CalculatedSpecies = species;  // Store the species of the owned Pokémon

    return;

    while (TRUE)
    {
        randomValue = (Random() % 100);  // Generate random value between 0 and 100

        // Determine Rarity based on the chances
        if (randomValue < RARITY_COMMON_ODDS)
            sGacha->Rarity = RARITY_COMMON; // Common
        else if (randomValue < (RARITY_COMMON_ODDS + RARITY_UNCOMMON_ODDS))
            sGacha->Rarity = RARITY_UNCOMMON; // Uncommon
        else if (randomValue < (RARITY_COMMON_ODDS + RARITY_UNCOMMON_ODDS + RARITY_RARE_ODDS))
            sGacha->Rarity = RARITY_RARE; // Rare
        else
            sGacha->Rarity = RARITY_ULTRA_RARE; // Ultra Rare


            
        // Get the number of available and owned Pokémon based on rarity
        totalMax = GetMaxAvailableGachaRaritySpecies(sGacha->GachaId, sGacha->Rarity);
        switch (sGacha->Rarity)
        {
        default:
        case RARITY_COMMON:
            totalOwned = sGacha->ownedCommon;
            break;
        case RARITY_UNCOMMON:
            totalOwned = sGacha->ownedUncommon;
            break;
        case RARITY_RARE:
            totalOwned = sGacha->ownedRare;
            break;
        case RARITY_ULTRA_RARE:
            totalOwned = sGacha->ownedUltraRare;
            break;
        }

        // Calculate the total number of Pokémon the player doesn't own
        totalNotOwned = totalMax - totalOwned;

        if (totalNotOwned <= 0)
        {
            // If all Pokémon of the selected rarity are owned, restart the process (reroll)
            continue;  // This will make the loop restart from the beginning
        }

        // Generate a random value for the chances
        randomValue = Random() % 100;  // Generate random value between 0-99

        // Check if we should get a new Pokémon based on the odds
        if (sGacha->newMonOdds >= randomValue)
        {
            // Loop until a new (not owned) Pokémon is found
            do {
                newPokemonChance = (Random() % totalMax);  // Random pull from the available pool
                species = GetGachaMon(newPokemonChance);  // Get the Pokémon species based on the random value
                attempts--;
                if (attempts < 1)
                {
                    attempts = 1000;
                    randomValue = (Random() % 100);  // Generate random value between 0 and 100

                    // Determine Rarity based on the chances
                    if (randomValue < RARITY_COMMON_ODDS)
                        sGacha->Rarity = RARITY_COMMON;
                    else if (randomValue < (RARITY_COMMON_ODDS + RARITY_UNCOMMON_ODDS))
                        sGacha->Rarity = RARITY_UNCOMMON;
                    else if (randomValue < (RARITY_COMMON_ODDS + RARITY_UNCOMMON_ODDS + RARITY_RARE_ODDS))
                        sGacha->Rarity = RARITY_RARE;
                    else
                        sGacha->Rarity = RARITY_ULTRA_RARE;
                }
                // If the Pokémon is not owned, we found a new Pokémon
            } while (IsNotValidUnownedSpecies(species));  // Continue if owned (IsNotValidUnownedSpecies returns TRUE)

            // If we've broken out of the loop, we have a new Pokémon
            sGacha->CalculatedSpecies = species;  // Store the species of the new Pokémon
            break;  // Exit the loop after finding a new Pokémon
        }
        else
        {
            // Loop until an owned Pokémon is found
            do {
                newPokemonChance = (Random() % totalMax);  // Random pull from the available pool
                species = GetGachaMon(newPokemonChance);  // Get the Pokémon species based on the random value
                attempts--;
                if (attempts < 1)
                {
                    attempts = 1000;
                    randomValue = (Random() % 100);  // Generate random value between 0 and 100

                    // Determine Rarity based on the chances
                    if (randomValue < RARITY_COMMON_ODDS)
                        sGacha->Rarity = RARITY_COMMON;
                    else if (randomValue < (RARITY_COMMON_ODDS + RARITY_UNCOMMON_ODDS))
                        sGacha->Rarity = RARITY_UNCOMMON;
                    else if (randomValue < (RARITY_COMMON_ODDS + RARITY_UNCOMMON_ODDS + RARITY_RARE_ODDS))
                        sGacha->Rarity = RARITY_RARE;
                    else
                        sGacha->Rarity = RARITY_ULTRA_RARE;
                }

                // If the Pokémon is owned, we have an owned Pokémon
            } while (IsNotValidOwnedSpecies(species));  // Continue if not owned

            // If we've broken out of the loop, we have an owned Pokémon
            sGacha->CalculatedSpecies = species;  // Store the species of the owned Pokémon
            break;  // Exit the loop after finding an owned Pokémon
        }
    }

}

static void CalculatePullOdds(void)
{
    u16 totalCommonAvailable;
    u16 totalUncommonAvailable;
    u16 totalRareAvailable;
    u16 totalUltraRareAvailable;
    u16 wager;
    u8 commonChance;
    u8 uncommonChance;
    u8 rareChance;
    u8 ultraRareChance;
    u8 totalChance;

    totalCommonAvailable = GetMaxAvailableGachaRaritySpecies(sGacha->GachaId, RARITY_COMMON);
    totalUncommonAvailable = GetMaxAvailableGachaRaritySpecies(sGacha->GachaId, RARITY_UNCOMMON);
    totalRareAvailable = GetMaxAvailableGachaRaritySpecies(sGacha->GachaId, RARITY_RARE);
    totalUltraRareAvailable = GetMaxAvailableGachaRaritySpecies(sGacha->GachaId, RARITY_ULTRA_RARE);

    wager = sGacha->wager;  // Player's wager (0-9999)

    // Calculate the chance for each category
    commonChance = CalculateChanceForCategory(sGacha->ownedCommon, totalCommonAvailable, RARITY_COMMON_ODDS, GACHA_BASIC_MIN_WAGER);
    uncommonChance = CalculateChanceForCategory(sGacha->ownedUncommon, totalUncommonAvailable, RARITY_UNCOMMON_ODDS, GACHA_BASIC_MIN_WAGER);
    rareChance = CalculateChanceForCategory(sGacha->ownedRare, totalRareAvailable, RARITY_RARE_ODDS, GACHA_BASIC_MIN_WAGER);
    ultraRareChance = CalculateChanceForCategory(sGacha->ownedUltraRare, totalUltraRareAvailable, RARITY_ULTRA_RARE_ODDS, GACHA_BASIC_MIN_WAGER);

    sGacha->commonChance = commonChance;
    sGacha->uncommonChance = uncommonChance;
    sGacha->rareChance = rareChance;
    sGacha->ultraRareChance = ultraRareChance;

    // Final Odds as a sum of chances
    
    totalChance = commonChance + uncommonChance + rareChance + ultraRareChance;
    if (totalChance <= 100)
        sGacha->newMonOdds = commonChance + uncommonChance + rareChance + ultraRareChance;
    else
        sGacha->newMonOdds = 100;
}

static void AButton(void)
{
    sGacha->state = STATE_INIT_A;

    // if (sGacha->Trigger == 1)
    // {
    //     sGacha->state = STATE_INIT_A;
    // }
    // else
    // {
    //     PlaySE(SE_FAILURE);
    // }
}

static void UpdateCursorPosition(s16 x)
{
    // Update cursor position based on X coordinate
    if (x == 231)
        sGacha->cursorPosition = 3; // Ones
    else if (x == 223)
        sGacha->cursorPosition = 2; // Tens
    else if (x == 215)
        sGacha->cursorPosition = 1; // Hundreds
    else
        sGacha->cursorPosition = 0; // Thousands
}

static void UpdateWagerDigit(int direction)
{
    u8 place;
    u16 tempwager;
    u8 wagerDigits[4];
    u16 newWager;
    u16 d;
    int i;
    u16 maxWager;
    u16 minWager;

    place = sGacha->cursorPosition;
    d = 1000;
    tempwager = sGacha->wager;
    
    for (i = 0; i < 4; i++)
    {
        if (tempwager >= d)
            wagerDigits[i] = tempwager / d;
        else
            wagerDigits[i] = 0;

        tempwager = tempwager % d;
        d = d / 10;
    }
    maxWager = GetCoins();  // Maximum wager is the current coins
    
    // wagerDigits[0] = Thousands place
    // wagerDigits[1] = Hundreds place
    // wagerDigits[2] = Tens place
    // wagerDigits[3] = Ones place

    if (direction == 0) // Up
    {
        if (wagerDigits[place] == 9)
        {
            // Set the current digit to 0
            wagerDigits[place] = 0;
            if (place > 0)
                place--;  // Move to the next digit on the left
        }

        // Otherwise, simply increase the digit by 1
        wagerDigits[place]++;
        PlaySE(SE_SELECT);
                
        // Ensure the new wager doesn't exceed max available coins
        newWager = (wagerDigits[0] * 1000) + (wagerDigits[1] * 100) + (wagerDigits[2] * 10) + wagerDigits[3];
        if (newWager > maxWager) // If the new wager exceeds available coins, revert back
            newWager = GetCoins();
        // Update the wager if it's within the limit
        sGacha->wager = newWager;
    }
    else if (direction == 2) // Down
    {
        if (wagerDigits[place] > 0)
        {
            // Decrease the digit by 1
            wagerDigits[place]--;
            sGacha->wager = (wagerDigits[0] * 1000) + (wagerDigits[1] * 100) + (wagerDigits[2] * 10) + wagerDigits[3];
            PlaySE(SE_SELECT);
        }
    }

    // Update sprite animation based on the new value
    gSprites[sGacha->ArrowsSpriteId].animNum = (wagerDigits[place] == 0) ? 1 : 0;
    SetPlayerDigits(sGacha->wager);  // Update the displayed wager

    switch (sGacha->GachaId)
    {
    default:
    case GACHA_BASIC:
        minWager = GACHA_BASIC_MIN_WAGER;
        break;
    case GACHA_GREAT:
        minWager = GACHA_GREAT_MIN_WAGER;
        break;
    case GACHA_ULTRA:
        minWager = GACHA_ULTRA_MIN_WAGER;
        break;
    case GACHA_MASTER:
        minWager = GACHA_MASTER_MIN_WAGER;
        break;
    }

    if (sGacha->wager >= minWager)
    {
        ResetMessage();
        CalculatePullOdds();
        sGacha->Trigger = 1;
        //gSprites[sGacha->CTAspriteId].animPaused = FALSE;
        gSprites[sGacha->CTAspriteId].animNum = 1; // On
        ShowMessage();
    }
    else
    {
        ResetMessage();
        //CalculatePullOdds();
        sGacha->newMonOdds = 0;
        sGacha->Trigger = 0;        
        gSprites[sGacha->CTAspriteId].animNum = 0; // Off
        //gSprites[sGacha->CTAspriteId].animPaused = TRUE;
        ShowMessage();
    }
}

static void MoveCursor(int direction)
{
    struct Sprite *cursorSprite = &gSprites[sGacha->ArrowsSpriteId];
    int curX = cursorSprite->x;
    int destX = curX;
    
    // Move cursor left or right (X axis)
    if (direction == 1 || direction == 3)// Right or Left
    {
        if (direction == 1 && curX < 231)
        {
            destX = curX + 8;
            PlaySE(SE_SELECT);
        }
        else if (direction == 3 && curX > 207)
        {
            destX = curX - 8;
            PlaySE(SE_SELECT);
        }
        
        cursorSprite->x = destX;
        UpdateCursorPosition(gSprites[sGacha->ArrowsSpriteId].x);  // Update cursor position based on X coordinate
    }
    
    // Move cursor up or down (change wager digit)
    else if (direction == 0 || direction == 2) // Up or Down
    {
        UpdateWagerDigit(direction); // Update the corresponding digit
    }
}

static void ExitGacha(void)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        FREE_AND_SET_NULL(sGacha);
    }
}

static void HandleInput_GachaComplete(void)
{
    if (IsFanfareTaskInactive())
    {
        if (JOY_NEW(A_BUTTON | B_BUTTON))
        {
            gSpecialVar_Result = 1;
            sGacha->state = GACHA_STATE_START_EXIT;
        }
    }
}

static void HandleInput(void)
{
    if (sGacha->Input == 0) 
    {
        if (JOY_NEW(A_BUTTON))
        {
            AButton();
        }
        else if (JOY_NEW(B_BUTTON))
        {
            sGacha->state = GACHA_STATE_START_EXIT;
        }
        // else if (JOY_NEW(DPAD_UP))
        // {
        //     MoveCursor(0);
        // }
        // else if (JOY_NEW(DPAD_RIGHT))
        // {
        //     MoveCursor(1);
        // }
        // else if (JOY_NEW(DPAD_DOWN))
        // {
        //     MoveCursor(2);
        // }
        // else if (JOY_NEW(DPAD_LEFT))
        // {
        //     MoveCursor(3);
        // }
    }
}

static void RemoveGarbage(void)
{
    DestroySpriteAndFreeResources(&gSprites[sGacha->CreditSpriteIds[0]]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->CreditSpriteIds[1]]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->CreditSpriteIds[2]]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->CreditSpriteIds[3]]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->PlayerSpriteIds[0]]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->PlayerSpriteIds[1]]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->PlayerSpriteIds[2]]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->PlayerSpriteIds[3]]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->KnobSpriteId]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->DigitalTextSpriteId]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->LotteryJPNspriteId]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->CreditMenu1Id]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->CreditMenu2Id]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->PokemonOneSpriteId]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->PokemonTwoSpriteId]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->PokemonThreeSpriteId]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->ArrowsSpriteId]);
    DestroySpriteAndFreeResources(&gSprites[sGacha->CTAspriteId]);
    ResetMessage();
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BG2CNT, BGCNT_PRIORITY(2) |
                                 BGCNT_CHARBASE(1) |
                                 BGCNT_16COLOR |
                                 BGCNT_SCREENBASE(18) |
                                 BGCNT_TXT512x256);
    LoadPalette(gTradeGba2_Pal, BG_PLTT_ID(1), 3 * PLTT_SIZE_4BPP);
    DmaCopyLarge16(3, gTradeGba_Gfx, (void *) BG_CHAR_ADDR(1), 0x1420, 0x1000);
    DmaCopy16Defvars(3, gTrade_Tilemap, (void *) BG_SCREEN_ADDR(18), 0x1000);    
    
    gPaletteFade.bufferTransferDisabled = TRUE;
    gPaletteFade.bufferTransferDisabled = FALSE;
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    SetVBlankCallback(GachaVBlankCallback);
}

void ShowFinalMessage(void)
{
    struct WindowTemplate template;

    SetWindowTemplateFields(&template, 1, 2, 15, 26, 4, 0xF, 0x194);
    
    sTextWindowId = AddWindow(&template);
    FillWindowPixelBuffer(sTextWindowId, PIXEL_FILL(0));
    PutWindowTilemap(sTextWindowId);
    LoadUserWindowBorderGfx(sTextWindowId, 0x214, BG_PLTT_ID(14));
    DrawStdWindowFrame(sTextWindowId, FALSE); 
    StringCopy(gStringVar1, GetSpeciesName(sGacha->CalculatedSpecies));
    StringExpandPlaceholders(gStringVar4, sText_FromGacha);
    AddTextPrinterParameterized(sTextWindowId, FONT_NORMAL, gStringVar4, 0, 1, 0, 0);
    CopyWindowToVram(sTextWindowId, 3);
}


static void GachaMain(u8 taskId)
{
    u16 level;
    u32 pos = B_POSITION_OPPONENT_RIGHT;

    if (FlagGet(FLAG_IS_CHAMPION) == TRUE)
    {
        level = (Random() % 30) + 40;
    }
    else if (FlagGet(FLAG_BADGE08_GET) == TRUE)
    {
        level = (Random() % 15) + 36;
    }
    else if (FlagGet(FLAG_BADGE07_GET) == TRUE)
    {
        level = (Random() % 9) + 28;
    }
    else if (FlagGet(FLAG_BADGE06_GET) == TRUE)
    {
        level = (Random() % 10) + 21;
    }
    else if (FlagGet(FLAG_BADGE05_GET) == TRUE)
    {
        level = (Random() % 10) + 19;
    }
    else if (FlagGet(FLAG_BADGE04_GET) == TRUE)
    {
        level = (Random() % 6) + 18;
    }
    else if (FlagGet(FLAG_BADGE03_GET) == TRUE)
    {
        level = (Random() % 8) + 13;
    }
    else if (FlagGet(FLAG_BADGE02_GET) == TRUE)
    {
        level = (Random() % 6) + 7;
    }
    else if (FlagGet(FLAG_BADGE01_GET) == TRUE)
    {
        level = (Random() % 7) + 5;
    }
    else
    {
        level = (Random() % 5) + 2;
    }
    
    switch (sGacha->state)
    {
    case GACHA_STATE_INIT:
        if (!gPaletteFade.active) {
            sGacha->state = GACHA_STATE_PROCESS_INPUT;
        }
        break;
    case GACHA_STATE_PROCESS_INPUT:
        HandleInput();
        break;
    case GACHA_STATE_COMPLETED_WAIT_FOR_SOUND:
        if (IsSEPlaying())
            break;

        PlayFanfare(MUS_SLOTS_WIN);
        sGacha->state = GACHA_STATE_PROCESS_COMPLETED_INPUT;
    case GACHA_STATE_PROCESS_COMPLETED_INPUT:
        HandleInput_GachaComplete();
        break;
    case GACHA_STATE_START_EXIT:
        StartExitGacha();
        break;
    case GACHA_STATE_EXIT:
        ExitGacha();
        break;
    case STATE_INIT_A: // Initial state
        sGacha->Input = 1;
        DeterminePokemonRarityAndNewStatus();
        PlaySE(SE_SHOP);
//        RemoveCoins(sGacha->wager);
        sGacha->wager = 0;
        ResetMessage();
        gSprites[sGacha->CTAspriteId].animNum = 0;
        gSprites[sGacha->ArrowsSpriteId].invisible = TRUE;
        SetCreditDigits(GetCoins());
        SetPlayerDigits(sGacha->wager);
        sGacha->waitTimer = 30;  // Set the timer
        sGacha->state = STATE_TIMER_1;  // Move to next state
        break;
    case STATE_TIMER_1: // Waiting for timer to expire
        if (sGacha->waitTimer > 0)
            sGacha->waitTimer--;  // Decrease timer
        else
            sGacha->state = STATE_TWIST;  // Transition to next state when the timer is done
        break;
    case STATE_TWIST: // After timer expires, proceed with animation
        PlaySE(SE_VEND);
        gSprites[sGacha->KnobSpriteId].animNum = 1;
        sGacha->state = STATE_TIMER_2;  // Move to the next state after animation starts
        break;
    case STATE_TIMER_2: // Handle the next part of the delay or action
        // (You can add another waiting period if needed)
        sGacha->waitTimer = 50;  // Set the next timer
        sGacha->state = STATE_INIT_GIVE;  // Move to next state
        break;
    case STATE_INIT_GIVE: // Final state
        if (sGacha->waitTimer > 0)
            sGacha->waitTimer--;  // Decrease timer
        else
            sGacha->state = STATE_SHAKE_1;  // Final action after timer
        break;
    case STATE_SHAKE_1: // After timer expires, proceed with animation
        PlaySE(SE_BREAKABLE_DOOR);
        Shake1();
        sGacha->state = STATE_TIMER_3;  // Move to the next state after animation starts
        break;
    case STATE_TIMER_3: // Handle the next part of the delay or action
        // (You can add another waiting period if needed)
        sGacha->waitTimer = 3;  // Set the next timer
        sGacha->state = STATE_INIT_SHAKE_2;  // Move to next state
        break;
    case STATE_INIT_SHAKE_2: // Final state
        if (sGacha->waitTimer > 0)
            sGacha->waitTimer--;  // Decrease timer
        else
            sGacha->state = STATE_SHAKE_2;  // Final action after timer
        break;    
    case STATE_SHAKE_2: // After timer expires, proceed with animation
        //PlaySE(SE_BREAKABLE_DOOR);
        Shake2();
        sGacha->state = STATE_TIMER_4;  // Move to the next state after animation starts
        break;
    case STATE_TIMER_4: // Handle the next part of the delay or action
        // (You can add another waiting period if needed)
        sGacha->waitTimer = 3;  // Set the next timer
        sGacha->state = STATE_INIT_SHAKE_3;  // Move to next state
        break;
    case STATE_INIT_SHAKE_3: // Final state
        if (sGacha->waitTimer > 0)
        {
            sGacha->waitTimer--;  // Decrease timer
        }
        else 
        {
            BGSetup();
            sGacha->waitTimer = 20;
            sGacha->state = STATE_TIMER_5;  // Final action after timer
        }
        break;
    case STATE_TIMER_5: // After timer expires, proceed with animation
        if (sGacha->waitTimer > 0)
            sGacha->waitTimer--;  // Decrease timer
        else
            sGacha->state = STATE_GIVE;  // Move to the next state after animation starts
        break;
    case STATE_GIVE:
        StartTradeScreen();
        break;
    case STATE_FADE:
        if (!gPaletteFade.active)
        {
            BGRed();
            sGacha->state = STATE_POKEBALL_INIT;
        }
        break;
    case STATE_POKEBALL_INIT:
        RemoveGarbage();
        sGacha->state++;
        break;    
    case STATE_POKEBALL_PROCESS:
        if (!gPaletteFade.active)
            sGacha->state = STATE_POKEBALL_ARRIVE;
        break;
    case STATE_POKEBALL_ARRIVE:    
        LoadSpriteSheet(&sPokeBallSpriteSheet);
        LoadSpritePalette(&sPokeBallSpritePalette);
        sGacha->bouncingPokeballSpriteId = CreateSprite(&sSpriteTemplate_Pokeball, 120, -8, 0);
        gSprites[sGacha->bouncingPokeballSpriteId].data[3] = 74;
        gSprites[sGacha->bouncingPokeballSpriteId].callback = SpriteCB_BouncingPokeballArrive;
        StartSpriteAnim(&gSprites[sGacha->bouncingPokeballSpriteId], 1);
        StartSpriteAffineAnim(&gSprites[sGacha->bouncingPokeballSpriteId], 2);
        BlendPalettes(1 << (16 + gSprites[sGacha->bouncingPokeballSpriteId].oam.paletteNum), 16, RGB_WHITEALPHA);
        sGacha->state++;
        sGacha->timer = 0;
        break;
    case STATE_FADE_POKEBALL_TO_NORMAL:
        BeginNormalPaletteFade(1 << (16 + gSprites[sGacha->bouncingPokeballSpriteId].oam.paletteNum), 1, 16, 0, RGB_WHITEALPHA);
        sGacha->state++;
        break;
    case STATE_POKEBALL_ARRIVE_WAIT:        
        if (gSprites[sGacha->bouncingPokeballSpriteId].callback == SpriteCallbackDummy)
        {
            CreateMon(&gEnemyParty[0], sGacha->CalculatedSpecies, level, USE_RANDOM_IVS, FALSE, 0, OT_ID_PLAYER_ID, 0);
            GiveMonToPlayer(&gEnemyParty[0]);
            GetSetPokedexFlag(SpeciesToNationalPokedexNum(sGacha->CalculatedSpecies), FLAG_SET_SEEN);
            HandleSetPokedexFlag(SpeciesToNationalPokedexNum(sGacha->CalculatedSpecies), FLAG_SET_CAUGHT, GetMonData(&gEnemyParty[0], MON_DATA_PERSONALITY));
            LoadCompressedPalette(GetMonFrontSpritePal(&gEnemyParty[0]), OBJ_PLTT_ID(2), PLTT_SIZE_4BPP);
            SetMultiuseSpriteTemplateToPokemon(sGacha->CalculatedSpecies, pos);
            sGacha->monSpriteId = CreateMonPicSprite_Affine(sGacha->CalculatedSpecies, GetMonData(&gEnemyParty[0], MON_DATA_IS_SHINY), GetMonData(&gEnemyParty[0], MON_DATA_PERSONALITY), MON_PIC_AFFINE_FRONT, 120, 60, 14, TAG_NONE);
            gSprites[sGacha->monSpriteId].callback = SpriteCB_Null;
            gSprites[sGacha->monSpriteId].oam.priority = 0;
            gSprites[sGacha->monSpriteId].invisible = TRUE;
            HandleLoadSpecialPokePic(TRUE,
                                        gMonSpritesGfxPtr->spritesGfx[pos],
                                        sGacha->CalculatedSpecies,
                                        GetMonData(&gEnemyParty[0], MON_DATA_PERSONALITY));
            sGacha->state++;
        }
        break;
    case STATE_SHOW_NEW_MON:
        gSprites[sGacha->monSpriteId].x = 120;
        gSprites[sGacha->monSpriteId].y = gSpeciesInfo[sGacha->CalculatedSpecies].frontPicYOffset + 56;
        gSprites[sGacha->monSpriteId].x2 = 0;
        gSprites[sGacha->monSpriteId].y2 = 0;
        StartSpriteAnim(&gSprites[sGacha->monSpriteId], 0);
        CreatePokeballSpriteToReleaseMon(sGacha->monSpriteId, gSprites[sGacha->monSpriteId].oam.paletteNum, 120, 84, 2, 1, 20, PALETTES_BG | (0xF << 16), sGacha->CalculatedSpecies);
        FreeSpriteOamMatrix(&gSprites[sGacha->bouncingPokeballSpriteId]);
        DestroySprite(&gSprites[sGacha->bouncingPokeballSpriteId]);
        sGacha->state++;
        break;
    case STATE_NEW_MON_MSG:
        // Wait for Pokémon's front sprite animation
        if (gSprites[sGacha->monSpriteId].callback == SpriteCallbackDummy)
            sGacha->state++;
        break;
    case NEW_1:
        // "{mon} hatched from egg" message/fanfare
        ShowFinalMessage();
        PlayFanfare(MUS_EVOLVED);
        sGacha->state++;
        //PutWindowTilemap(0);
        //CopyWindowToVram(0, COPYWIN_FULL);
        break;
    case NEW_2:
        if (IsFanfareTaskInactive())
            sGacha->state++;
        break;
    case NEW_3: // Twice?
        if (IsFanfareTaskInactive())
            sGacha->state++;
        break;
    case NEW_4:
        // Ready the nickname prompt
        if (FlagGet(FLAG_SYS_POKEMON_GET) == FALSE)
        {
            FlagSet(FLAG_SYS_POKEMON_GET);
        }
        sGacha->state = GACHA_STATE_START_EXIT;
        break;
    }
}

static void InitGachaScreen(void)
{    
    sGacha->GachaId = gSpecialVar_0x8004;

    SetVBlankCallback(NULL);
    ResetAllBgsCoordinates();
    ResetVramOamAndBgCntRegs();
    ResetBgsAndClearDma3BusyFlags(0);
    ResetTempTileDataBuffers();

    BGSetup();

    ResetSpriteData();
    FreeAllSpritePalettes();
    LoadSpritePalettes(sSpritePalettes2);

    switch (sGacha->GachaId)
    {
    default:
    case GACHA_BASIC:
        CreateHoppip();
        break;
    case GACHA_GREAT:
        CreatePhanpy();
        break;
    case GACHA_ULTRA:
        CreateTeddiursa();
        break;
    case GACHA_MASTER:
        CreateBelossom();
        break;
    }
    CreateArrows();
    CreateCTA();
    CreateDigitalText();    
    CreateKnob();
    CreateCreditSprites();
    CreatePlayerSprites();
    SetCreditDigits(GetCoins());
    SetPlayerDigits(0);    
    CreateCreditMenu();    
    CreatePlayerMenu();
    CreateLotteryJPN();
    
    sGacha->newMonOdds = 0;
    InitWindows(sGachaWinTemplates);
    LoadPalette(GetTextWindowPalette(2), 11 * 16, 32);
    ShowMessage();

    UpdateCursorPosition(gSprites[sGacha->ArrowsSpriteId].x);
    sGacha->waitTimer = 0;
    sGacha->Input = 0;
    GetPokemonOwned();
    
    CopyBgTilemapBufferToVram(GACHA_BG_BASE);
    CopyBgTilemapBufferToVram(GACHA_MENUS);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON | DISPCNT_BG2_ON);
    ShowBg(GACHA_BG_BASE);
    ShowBg(GACHA_MENUS);
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
    SetVBlankCallback(GachaVBlankCallback);
    SetMainCallback2(GachaMainCallback);
    CreateTask(GachaMain, 1);
}

