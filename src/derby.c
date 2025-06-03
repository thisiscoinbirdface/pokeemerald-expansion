//#include "game_corner_blackjack.h"
#include "derby.h"
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
    DERBY_STATE_INIT,
    DERBY_STATE_PROCESS_INPUT,
    DERBY_STATE_BET_2_START,
    DERBY_STATE_BET_2,
    DERBY_STATE_RACE_DELAY,
    DERBY_STATE_START_FADE,
    DERBY_STATE_FADEIN,
    DERBY_STATE_DELAY_2,
    DERBY_STATE_COUNTDOWN,
    DERBY_STATE_RACE_START,
    DERBY_STATE_RACE_MID,
    DERBY_STATE_FINAL_DELAY,
    DERBY_STATE_START_EXIT,
    DERBY_STATE_EXIT,
};

enum {
    SPR_CREDIT_DIG_1,
    SPR_CREDIT_DIG_10,
    SPR_CREDIT_DIG_100,
    SPR_CREDIT_DIG_1000,
};

enum {
    SPR_BET_DIG_1,
    SPR_BET_DIG_10,
    SPR_BET_DIG_100,
    SPR_BET_DIG_1000,
};

enum {
    SPR_POT_DIG_1,
    SPR_POT_DIG_10,
    SPR_POT_DIG_100,
    SPR_POT_DIG_1000,
};

enum {
    DERBY_RACER_1,
    DERBY_RACER_2,
    DERBY_RACER_3,
    DERBY_RACER_4,
    DERBY_RACER_5,
    DERBY_RACER_6,
    DERBY_RACER_COUNT,
};

enum {
    CONDITION_1_STAR,
    CONDITION_2_STAR,
    CONDITION_3_STAR,
    CONDITION_4_STAR,
    CONDITION_5_STAR,
};

enum {
    DERBY_SPECIES_PONYTA_1,
    DERBY_SPECIES_PONYTA_2,
    DERBY_SPECIES_PONYTA_3,
    DERBY_SPECIES_PONYTA_4,
    DERBY_SPECIES_PONYTA_5,
    DERBY_SPECIES_RATTATA,
    DERBY_SPECIES_RAPIDASH,
    DERBY_SPECIES_FEEBAS,
    DERBY_SPECIES_COUNT,
};

enum {
    BET_MULTIPLIER_NONE,
    BET_MULTIPLIER_1_1,
    BET_MULTIPLIER_1_2,
    BET_MULTIPLIER_1_3,
    BET_MULTIPLIER_1_5,
    BET_MULTIPLIER_2_0,
    BET_MULTIPLIER_3_0,
    BET_MULTIPLIER_JACKPOT,
};

#define DERBY_SPECIES_PONYTA_COUNT DERBY_SPECIES_RATTATA

#define SPR_CREDIT_DIGITS SPR_CREDIT_DIG_1
#define SPR_BET_DIGITS SPR_BET_DIG_1
#define SPR_POTENTIAL_DIGITS SPR_POT_DIG_1

#define MAX_SPRITES_CREDIT 4
#define MAX_SPRITES_BET 4
#define MAX_SPRITES_POTENTIAL 4

struct Derby {
    u8 state;
    u8 racerSpecies[DERBY_RACER_COUNT];
    u8 racerShiny[DERBY_RACER_COUNT];
    u8 racerCondition[DERBY_RACER_COUNT];
    u8 racerSpeciesSpriteId[DERBY_RACER_COUNT];
    u8 racerSpeedPay[DERBY_RACER_COUNT];
    float racerSpeedStart[DERBY_RACER_COUNT];
    float racerSpeedRace[DERBY_RACER_COUNT];
    u8 MenuPosition; // 0-5
    u8 exitToggle;
    u8 SpeciesNameSpriteId;
    u8 ConditionSpriteId;
    u8 PayoutSpriteId;
    u8 uiSpriteId;
    u8 Arrow1SpriteId;
    u8 Arrow2SpriteId;
    u8 CreditIconSpriteId;
    u8 CreditSpriteIds[MAX_SPRITES_CREDIT];
    u8 BetSpriteIds[MAX_SPRITES_BET];
    u8 PotentialSpriteIds[MAX_SPRITES_POTENTIAL];
    u8 Menu;
    u8 RacerSelected;
    u8 Swap1;
    u8 P10SpriteId;
    u32 Bet;
    u32 PotentialWin;
    u32 delay;
    u8 RacerSprite1;
    u8 RacerSprite2;
    u8 RacerSprite3;
    u8 RacerSprite4;
    u8 RacerSprite5;
    u8 RacerSprite6;
    u8 CursorSpriteId;
    u8 Timer;
    u8 Swap2;
    s16 CountdownX;
    s16 CountdownY;
    u8 CountdownSpriteId;
    u32 frames;
    u8 place1;
    u8 place2;
    u8 place3;
    u8 place4;
    u8 place5;
    u8 place6;
    u8 ClefSpriteId;
};    

static EWRAM_DATA struct Derby *sDerby = NULL;

static void FadeToDerbyScreen(u8 taskId);
static void InitDerbyScreen(void);
static void DerbyVBlankCallback(void);

static const u8 sTestText[] = _("TEST");

// BG Images/Tilemaps

// Betting Slip
static const u32 Derby_BG_Bet_Img[] = INCBIN_U32("graphics/derby/betslip_bg.4bpp.lz");
static const u8 Derby_BG_Bet_Tilemap[] = INCBIN_U8("graphics/derby/betslip_bg.bin.lz");
static const u16 Derby_BG_Bet_Pal[] = INCBIN_U16("graphics/derby/bet_bg.gbapal");

// Betting Slip 2
static const u32 Derby_BG_Bet_Img_2[] = INCBIN_U32("graphics/derby/betslip_bg_2.4bpp.lz");
static const u8 Derby_BG_Bet_Tilemap_2[] = INCBIN_U8("graphics/derby/betslip_bg_2.bin.lz");
static const u16 Derby_BG_Bet_Pal_2[] = INCBIN_U16("graphics/derby/bet_bg_2.gbapal");

// Racetrack
static const u32 Derby_Race_Img[] = INCBIN_U32("graphics/derby/race_bg.4bpp.lz");
static const u8 Derby_Race_Tilemap[] = INCBIN_U8("graphics/derby/race_bg.bin.lz");
static const u16 Derby_Race_Pal[] = INCBIN_U16("graphics/derby/racetrack_bg.gbapal");

// Betting Menu Pokemon Sprites and Palettes

static const u32 PonytaGFX[] = INCBIN_U32("graphics/pokemon/ponyta/anim_front.4bpp.lz");
static const u16 PonytaNormalPAL[] = INCBIN_U16("graphics/pokemon/ponyta/normal.gbapal");
static const u16 PonytaShinyPAL[] = INCBIN_U16("graphics/pokemon/ponyta/shiny.gbapal");

static const u32 RapidashGFX[] = INCBIN_U32("graphics/pokemon/rapidash/anim_front.4bpp.lz");
static const u16 RapidashNormalPAL[] = INCBIN_U16("graphics/pokemon/rapidash/normal.gbapal");
static const u16 RapidashShinyPAL[] = INCBIN_U16("graphics/pokemon/rapidash/shiny.gbapal");

static const u32 RattataGFX[] = INCBIN_U32("graphics/pokemon/rattata/anim_front.4bpp.lz");
static const u16 RattataNormalPAL[] = INCBIN_U16("graphics/pokemon/rattata/normal.gbapal");
static const u16 RattataShinyPAL[] = INCBIN_U16("graphics/pokemon/rattata/shiny.gbapal");

static const u32 FeebasGFX[] = INCBIN_U32("graphics/pokemon/feebas/anim_front.4bpp.lz");
static const u16 FeebasNormalPAL[] = INCBIN_U16("graphics/pokemon/feebas/normal.gbapal");
static const u16 FeebasShinyPAL[] = INCBIN_U16("graphics/pokemon/feebas/shiny.gbapal");

// Betting Menu Text

// Pokemon Names

static const u32 Name_PonytaGFX[] = INCBIN_U32("graphics/derby/species_name/name-ponyta.4bpp.lz");
static const u32 Name_RapidashGFX[] = INCBIN_U32("graphics/derby/species_name/name-rapidash.4bpp.lz");
static const u32 Name_RattataGFX[] = INCBIN_U32("graphics/derby/species_name/name-rattata.4bpp.lz");
static const u32 Name_FeebasGFX[] = INCBIN_U32("graphics/derby/species_name/name-feebas.4bpp.lz");

static const u16 TextPAL[] = INCBIN_U16("graphics/derby/bet_text.gbapal");

// Conditions

static const u32 Condition_1_GFX[] = INCBIN_U32("graphics/derby/condition/condition-1.4bpp.lz");
static const u32 Condition_2_GFX[] = INCBIN_U32("graphics/derby/condition/condition-2.4bpp.lz");
static const u32 Condition_3_GFX[] = INCBIN_U32("graphics/derby/condition/condition-3.4bpp.lz");
static const u32 Condition_4_GFX[] = INCBIN_U32("graphics/derby/condition/condition-4.4bpp.lz");
static const u32 Condition_5_GFX[] = INCBIN_U32("graphics/derby/condition/condition-5.4bpp.lz");

static const u16 ConditionPAL[] = INCBIN_U16("graphics/derby/condition.gbapal");

// Payout

static const u32 Payout_1_GFX[] = INCBIN_U32("graphics/derby/payout/payout-1.4bpp.lz");
static const u32 Payout_2_GFX[] = INCBIN_U32("graphics/derby/payout/payout-2.4bpp.lz");
static const u32 Payout_3_GFX[] = INCBIN_U32("graphics/derby/payout/payout-3.4bpp.lz");
static const u32 Payout_4_GFX[] = INCBIN_U32("graphics/derby/payout/payout-4.4bpp.lz");
static const u32 Payout_5_GFX[] = INCBIN_U32("graphics/derby/payout/payout-5.4bpp.lz");
static const u32 Payout_6_GFX[] = INCBIN_U32("graphics/derby/payout/payout-6.4bpp.lz");
static const u32 Payout_7_GFX[] = INCBIN_U32("graphics/derby/payout/payout-7.4bpp.lz");

// UI

static const u32 UI_1_GFX[] = INCBIN_U32("graphics/derby/pokemon_ui/ui-1.4bpp.lz");
static const u32 UI_2_GFX[] = INCBIN_U32("graphics/derby/pokemon_ui/ui-2.4bpp.lz");
static const u32 UI_3_GFX[] = INCBIN_U32("graphics/derby/pokemon_ui/ui-3.4bpp.lz");
static const u32 UI_4_GFX[] = INCBIN_U32("graphics/derby/pokemon_ui/ui-4.4bpp.lz");
static const u32 UI_5_GFX[] = INCBIN_U32("graphics/derby/pokemon_ui/ui-5.4bpp.lz");
static const u32 UI_6_GFX[] = INCBIN_U32("graphics/derby/pokemon_ui/ui-6.4bpp.lz");

static const u16 BetMenuUIPAL[] = INCBIN_U16("graphics/derby/betmenu_interface.gbapal");

// Arrows

static const u32 Arrow_1_GFX[] = INCBIN_U32("graphics/derby/arrow-1.4bpp.lz");
static const u32 Arrow_2_GFX[] = INCBIN_U32("graphics/derby/arrow-2.4bpp.lz");

// Credit Icon

static const u32 Credit_Icon_GFX[] = INCBIN_U32("graphics/derby/credit.4bpp.lz");
static const u32 Credit_Red_Icon_GFX[] = INCBIN_U32("graphics/derby/creditred.4bpp.lz");
static const u16 Credit_Icon_PAL[] = INCBIN_U16("graphics/derby/credit.gbapal");

// Numbers

static const u32 Digits_Gfx[] = INCBIN_U32("graphics/derby/digits.4bpp.lz");
static const u32 Digits_2_Gfx[] = INCBIN_U32("graphics/derby/digits_2.4bpp.lz");
static const u16 Digits_Pal[] = INCBIN_U16("graphics/derby/digits.gbapal");

// P 10

static const u32 P10_GFX[] = INCBIN_U32("graphics/derby/10p.4bpp.lz");

// Pokemon OW Sprites

static const u32 Feebas_OW_GFX[] = INCBIN_U32("graphics/derby/feebas_ow.4bpp.lz");
static const u32 Ponyta_OW_GFX[] = INCBIN_U32("graphics/derby/ponyta_ow.4bpp.lz");
static const u32 Rattata_OW_GFX[] = INCBIN_U32("graphics/derby/rattata_ow.4bpp.lz");
static const u32 Rapidash_OW_GFX[] = INCBIN_U32("graphics/derby/rapidash_ow.4bpp.lz");

// Cursor

static const u32 Cursor_GFX[] = INCBIN_U32("graphics/derby/selection.4bpp.lz");
static const u16 Cursor_PAL[] = INCBIN_U16("graphics/derby/selection.gbapal");

// Countdown

static const u32 Countdown_3_GFX[] = INCBIN_U32("graphics/derby/countdown/countdown-3.4bpp.lz");
static const u32 Countdown_2_GFX[] = INCBIN_U32("graphics/derby/countdown/countdown-2.4bpp.lz");
static const u32 Countdown_1_GFX[] = INCBIN_U32("graphics/derby/countdown/countdown-1.4bpp.lz");
static const u32 Go_GFX[] = INCBIN_U32("graphics/derby/countdown/go.4bpp.lz");

static const u16 Countdown_PAL[] = INCBIN_U16("graphics/derby/countdown/countdown.gbapal");

// Clefairy

static const u32 Clef_GFX[] = INCBIN_U32("graphics/derby/clef.4bpp.lz");
static const u16 Clef_PAL[] = INCBIN_U16("graphics/derby/clef.gbapal");

#define DERBY_BG_BASE 1
#define DERBY_MENUS 0

static const struct BgTemplate sDerbyBGtemplates[] = {
    {
       .bg = DERBY_BG_BASE,
       .charBaseIndex = 2,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 3,
       .baseTile = 0
   },
   {
        .bg = DERBY_MENUS,
        .charBaseIndex = 0,
        .mapBaseIndex = 0x17,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    }
};

static const struct WindowTemplate sDerbyWinTemplates[] = {
    {
        .bg = DERBY_MENUS,
        .tilemapLeft = 6,
        .tilemapTop = 5,
        .width = 9,
        .height = 2,
        .paletteNum = 0xF,
        .baseBlock = 0x194,        
    },
    DUMMY_WIN_TEMPLATE,
};

#define GFX_BG_BETTING 1
#define GFX_BG_RACETRACK 2
#define GFX_PONYTA 3
#define GFX_RAPIDASH 4
#define GFX_RATTATA 5
#define GFX_FEEBAS 6
#define GFX_NAME_PONYTA 7
#define GFX_NAME_RATTATA 8
#define GFX_NAME_RAPIDASH 9
#define GFX_NAME_FEEBAS 10
#define GFX_CONDITION_1 11
#define GFX_CONDITION_2 12
#define GFX_CONDITION_3 13
#define GFX_CONDITION_4 14
#define GFX_CONDITION_5 15
#define GFX_PAYOUT_1 16
#define GFX_PAYOUT_2 17
#define GFX_PAYOUT_3 18
#define GFX_PAYOUT_4 19
#define GFX_PAYOUT_5 20
#define GFX_PAYOUT_6 21
#define GFX_PAYOUT_7 22
#define GFX_UI_1 23
#define GFX_UI_2 24
#define GFX_UI_3 25
#define GFX_UI_4 26
#define GFX_UI_5 27
#define GFX_UI_6 28
#define GFX_ARROW_1 29
#define GFX_ARROW_2 30
#define GFX_CREDIT_ICON 31
#define GFX_CREDIT_DIGITS 32
#define GFX_BET_DIGITS 33
#define GFX_CREDIT_ICON_RED 34
#define GFX_POTENTIAL_DIGITS 35
#define GFX_P10 36
#define GFX_PONYTA_OW 37
#define GFX_RATTATA_OW 38
#define GFX_RAPIDASH_OW 39
#define GFX_FEEBAS_OW 40
#define GFX_CURSOR 41
#define GFX_COUNTDOWN_3 42
#define GFX_COUNTDOWN_2 43
#define GFX_COUNTDOWN_1 44
#define GFX_GO 45
#define GFX_CLEFAIRY 46

#define PAL_BG_BETTING 1
#define PAL_BG_RACETRACK 2
#define PAL_PONYTA 3
#define PAL_PONYTA_SHINY 4
#define PAL_RAPIDASH 5
#define PAL_RAPIDASH_SHINY 6
#define PAL_RATTATA 7
#define PAL_RATTATA_SHINY 8
#define PAL_FEEBAS 9
#define PAL_FEEBAS_SHINY 10
#define PAL_BET_MENU_TEXT 11
#define PAL_CONDITION 12
#define PAL_UI 13
#define PAL_CREDIT_ICON 14
#define PAL_DIGITS 15
#define PAL_CURSOR 16
#define PAL_COUNTDOWN 17
#define PAL_CLEFAIRY 18

static const struct SpritePalette sSpritePalettes[] =
{
    { .data = Derby_BG_Bet_Pal,      .tag = PAL_BG_BETTING },
    { .data = PonytaNormalPAL,         .tag = PAL_PONYTA },
    { .data = PonytaShinyPAL,         .tag = PAL_PONYTA_SHINY },
    { .data = RapidashNormalPAL,     .tag = PAL_RAPIDASH },
    { .data = RapidashShinyPAL,         .tag = PAL_RAPIDASH_SHINY },
    { .data = RattataNormalPAL,         .tag = PAL_RATTATA },
    { .data = RattataShinyPAL,         .tag = PAL_RATTATA_SHINY },
    { .data = FeebasNormalPAL,         .tag = PAL_FEEBAS },
    { .data = FeebasShinyPAL,         .tag = PAL_FEEBAS_SHINY },
    { .data = TextPAL,                 .tag = PAL_BET_MENU_TEXT },
    { .data = ConditionPAL,             .tag = PAL_CONDITION },
    { .data = BetMenuUIPAL,             .tag = PAL_UI },
    { .data = Credit_Icon_PAL,         .tag = PAL_CREDIT_ICON },
    { .data = Digits_Pal,             .tag = PAL_DIGITS },
    { .data = Cursor_PAL,             .tag = PAL_CURSOR },
    { .data = Countdown_PAL,         .tag = PAL_COUNTDOWN },
    {}
};

static const struct SpritePalette sSpritePalettes2[] =
{
    { .data = Clef_PAL,                 .tag = PAL_CLEFAIRY },
    {}
};

static const struct CompressedSpriteSheet sSpriteSheet_Clefairy =
{
    .data = Clef_GFX,
    .size = 0x1000,
    .tag = GFX_CLEFAIRY,
};

static const struct OamData sOamData_Clefairy =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x32),
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 0,
};

static const union AnimCmd sClefAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(32, 20),
    ANIMCMD_FRAME(64, 20),
    ANIMCMD_FRAME(96, 20),
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd *const sClefAnimCmds[] = {
    sClefAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_Clefairy =
{
    .tileTag = GFX_CLEFAIRY,
    .paletteTag = PAL_CLEFAIRY,
    .oam = &sOamData_Clefairy,
    .anims = sClefAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Countdown_3 =
{
    .data = Countdown_3_GFX,
    .size = 0x800,
    .tag = GFX_COUNTDOWN_3,
};

static const struct OamData sOamData_Countdown =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct SpriteTemplate sSpriteTemplate_Countdown_3 =
{
    .tileTag = GFX_COUNTDOWN_3,
    .paletteTag = PAL_COUNTDOWN,
    .oam = &sOamData_Countdown,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Countdown_2 =
{
    .data = Countdown_2_GFX,
    .size = 0x800,
    .tag = GFX_COUNTDOWN_2,
};

static const struct SpriteTemplate sSpriteTemplate_Countdown_2 =
{
    .tileTag = GFX_COUNTDOWN_2,
    .paletteTag = PAL_COUNTDOWN,
    .oam = &sOamData_Countdown,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Countdown_1 =
{
    .data = Countdown_1_GFX,
    .size = 0x800,
    .tag = GFX_COUNTDOWN_1,
};

static const struct SpriteTemplate sSpriteTemplate_Countdown_1 =
{
    .tileTag = GFX_COUNTDOWN_1,
    .paletteTag = PAL_COUNTDOWN,
    .oam = &sOamData_Countdown,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Go =
{
    .data = Go_GFX,
    .size = 0x800,
    .tag = GFX_GO,
};

static const struct SpriteTemplate sSpriteTemplate_Go =
{
    .tileTag = GFX_GO,
    .paletteTag = PAL_COUNTDOWN,
    .oam = &sOamData_Countdown,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Ponyta_OW =
{
    .data = Ponyta_OW_GFX,
    .size = 0x600,
    .tag = GFX_PONYTA_OW,
};

static const struct OamData sOamData_Horse_OW =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
};

static const union AnimCmd sHorseAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END
};

static const union AnimCmd sHorseAnimCmd_1[] = 
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_FRAME(32, 5),
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd *const sHorseAnimCmds[] = {
    sHorseAnimCmd_0,  
    sHorseAnimCmd_1,
};

static const struct SpriteTemplate sSpriteTemplate_Ponyta_OW_Normal =
{
    .tileTag = GFX_PONYTA_OW,
    .paletteTag = PAL_PONYTA,
    .oam = &sOamData_Horse_OW,
    .anims = sHorseAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Ponyta_OW_Shiny =
{
    .tileTag = GFX_PONYTA_OW,
    .paletteTag = PAL_PONYTA_SHINY,
    .oam = &sOamData_Horse_OW,
    .anims = sHorseAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Rapidash_OW =
{
    .data = Rapidash_OW_GFX,
    .size = 0x600,
    .tag = GFX_RAPIDASH_OW,
};

static const struct SpriteTemplate sSpriteTemplate_Rapidash_OW_Normal =
{
    .tileTag = GFX_RAPIDASH_OW,
    .paletteTag = PAL_RAPIDASH,
    .oam = &sOamData_Horse_OW,
    .anims = sHorseAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Rapidash_OW_Shiny =
{
    .tileTag = GFX_RAPIDASH_OW,
    .paletteTag = PAL_RAPIDASH_SHINY,
    .oam = &sOamData_Horse_OW,
    .anims = sHorseAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Rattata_OW =
{
    .data = Rattata_OW_GFX,
    .size = 0x200,
    .tag = GFX_RATTATA_OW,
};

static const struct OamData sOamData_RatFish_OW =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x16),
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 0,
};

static const union AnimCmd sRattataAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END
};

static const union AnimCmd sRattataAnimCmd_1[] = 
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(8, 5),
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd *const sRattataAnimCmds[] = {
    sRattataAnimCmd_0,  
    sRattataAnimCmd_1,
};

static const struct SpriteTemplate sSpriteTemplate_Rattata_OW_Normal =
{
    .tileTag = GFX_RATTATA_OW,
    .paletteTag = PAL_RATTATA,
    .oam = &sOamData_RatFish_OW,
    .anims = sRattataAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Rattata_OW_Shiny =
{
    .tileTag = GFX_RATTATA_OW,
    .paletteTag = PAL_RATTATA_SHINY,
    .oam = &sOamData_RatFish_OW,
    .anims = sRattataAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Feebas_OW =
{
    .data = Feebas_OW_GFX,
    .size = 0x200,
    .tag = GFX_FEEBAS_OW,
};

static const union AnimCmd sFeebasAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(8, 20),
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd *const sFeebasAnimCmds[] = {
    sFeebasAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_Feebas_OW_Normal =
{
    .tileTag = GFX_FEEBAS_OW,
    .paletteTag = PAL_FEEBAS,
    .oam = &sOamData_RatFish_OW,
    .anims = sFeebasAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Feebas_OW_Shiny =
{
    .tileTag = GFX_FEEBAS_OW,
    .paletteTag = PAL_FEEBAS_SHINY,
    .oam = &sOamData_RatFish_OW,
    .anims = sFeebasAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheets_CreditsInterface[] =
{
    {
        .data = Digits_Gfx,
        .size = 0x280,
        .tag = GFX_CREDIT_DIGITS
    },
    {}
};

static const struct OamData sOam_CreditDigit =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(8x16),
    .size = SPRITE_SIZE(8x16),
    .priority = 2,
};

static const struct SpriteTemplate sSpriteTemplate_CreditDigit =
{
    .tileTag = GFX_CREDIT_DIGITS,
    .paletteTag = PAL_DIGITS,
    .oam = &sOam_CreditDigit,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct CompressedSpriteSheet sSpriteSheets_BetInterface[] =
{
    {
        .data = Digits_2_Gfx,
        .size = 0x280,
        .tag = GFX_BET_DIGITS
    },
    {}
};

static const struct SpriteTemplate sSpriteTemplate_BetDigit =
{
    .tileTag = GFX_BET_DIGITS,
    .paletteTag = PAL_DIGITS,
    .oam = &sOam_CreditDigit,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct CompressedSpriteSheet sSpriteSheets_PotentialInterface[] =
{
    {
        .data = Digits_2_Gfx,
        .size = 0x280,
        .tag = GFX_POTENTIAL_DIGITS
    },
    {}
};

static const struct SpriteTemplate sSpriteTemplate_PotentialDigit =
{
    .tileTag = GFX_POTENTIAL_DIGITS,
    .paletteTag = PAL_DIGITS,
    .oam = &sOam_CreditDigit,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct CompressedSpriteSheet sSpriteSheet_P10 =
{
    .data = P10_GFX,
    .size = 0x200,
    .tag = GFX_P10,
};

static const struct OamData sOamData_P10 =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x16),
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 0,
};

static const union AnimCmd sP10AnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(8, 20),
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd *const sP10AnimCmds[] = {
    sP10AnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_P10 =
{
    .tileTag = GFX_P10,
    .paletteTag = PAL_DIGITS,
    .oam = &sOamData_P10,
    .anims = sP10AnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Credit_Icon =
{
    .data = Credit_Icon_GFX,
    .size = 0x80,
    .tag = GFX_CREDIT_ICON,
};

static const struct CompressedSpriteSheet sSpriteSheet_Credit_Icon_Red =
{
    .data = Credit_Red_Icon_GFX,
    .size = 0x80,
    .tag = GFX_CREDIT_ICON_RED,
};

static const struct OamData sOamData_Credit_Icon =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x8),
    .size = SPRITE_SIZE(32x8),
    .tileNum = 0,
    .priority = 0,
};

static const struct SpriteTemplate sSpriteTemplate_Credit_Icon =
{
    .tileTag = GFX_CREDIT_ICON,
    .paletteTag = PAL_CREDIT_ICON,
    .oam = &sOamData_Credit_Icon,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Credit_Icon_Red =
{
    .tileTag = GFX_CREDIT_ICON_RED,
    .paletteTag = PAL_CREDIT_ICON,
    .oam = &sOamData_Credit_Icon,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Name_Ponyta =
{
    .data = Name_PonytaGFX,
    .size = 0x400,
    .tag = GFX_NAME_PONYTA,
};

static const struct OamData sOamData_Menu_Data =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x32),
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 0,
};

static const struct SpriteTemplate sSpriteTemplate_Name_Ponyta =
{
    .tileTag = GFX_NAME_PONYTA,
    .paletteTag = PAL_BET_MENU_TEXT,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Name_Rapidash =
{
    .data = Name_RapidashGFX,
    .size = 0x400,
    .tag = GFX_NAME_RAPIDASH,
};

static const struct SpriteTemplate sSpriteTemplate_Name_Rapidash =
{
    .tileTag = GFX_NAME_RAPIDASH,
    .paletteTag = PAL_BET_MENU_TEXT,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Name_Rattata =
{
    .data = Name_RattataGFX,
    .size = 0x400,
    .tag = GFX_NAME_RATTATA,
};

static const struct SpriteTemplate sSpriteTemplate_Name_Rattata =
{
    .tileTag = GFX_NAME_RATTATA,
    .paletteTag = PAL_BET_MENU_TEXT,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Name_Feebas =
{
    .data = Name_FeebasGFX,
    .size = 0x400,
    .tag = GFX_NAME_FEEBAS,
};

static const struct SpriteTemplate sSpriteTemplate_Name_Feebas =
{
    .tileTag = GFX_NAME_FEEBAS,
    .paletteTag = PAL_BET_MENU_TEXT,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Payout_1 =
{
    .data = Payout_1_GFX,
    .size = 0x400,
    .tag = GFX_PAYOUT_1,
};

static const struct SpriteTemplate sSpriteTemplate_Payout_1 =
{
    .tileTag = GFX_PAYOUT_1,
    .paletteTag = PAL_BET_MENU_TEXT,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Payout_2 =
{
    .data = Payout_2_GFX,
    .size = 0x400,
    .tag = GFX_PAYOUT_2,
};

static const struct SpriteTemplate sSpriteTemplate_Payout_2 =
{
    .tileTag = GFX_PAYOUT_2,
    .paletteTag = PAL_BET_MENU_TEXT,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Payout_3 =
{
    .data = Payout_3_GFX,
    .size = 0x400,
    .tag = GFX_PAYOUT_3,
};

static const struct SpriteTemplate sSpriteTemplate_Payout_3 =
{
    .tileTag = GFX_PAYOUT_3,
    .paletteTag = PAL_BET_MENU_TEXT,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Payout_4 =
{
    .data = Payout_4_GFX,
    .size = 0x400,
    .tag = GFX_PAYOUT_4,
};

static const struct SpriteTemplate sSpriteTemplate_Payout_4 =
{
    .tileTag = GFX_PAYOUT_4,
    .paletteTag = PAL_BET_MENU_TEXT,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Payout_5 =
{
    .data = Payout_5_GFX,
    .size = 0x400,
    .tag = GFX_PAYOUT_5,
};

static const struct SpriteTemplate sSpriteTemplate_Payout_5 =
{
    .tileTag = GFX_PAYOUT_5,
    .paletteTag = PAL_BET_MENU_TEXT,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Payout_6 =
{
    .data = Payout_6_GFX,
    .size = 0x400,
    .tag = GFX_PAYOUT_6,
};

static const struct SpriteTemplate sSpriteTemplate_Payout_6 =
{
    .tileTag = GFX_PAYOUT_6,
    .paletteTag = PAL_BET_MENU_TEXT,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Payout_7 =
{
    .data = Payout_7_GFX,
    .size = 0x400,
    .tag = GFX_PAYOUT_7,
};

static const struct SpriteTemplate sSpriteTemplate_Payout_7 =
{
    .tileTag = GFX_PAYOUT_7,
    .paletteTag = PAL_BET_MENU_TEXT,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_UI_1 =
{
    .data = UI_1_GFX,
    .size = 0x400,
    .tag = GFX_UI_1,
};

static const struct SpriteTemplate sSpriteTemplate_UI_1 =
{
    .tileTag = GFX_UI_1,
    .paletteTag = PAL_UI,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_UI_2 =
{
    .data = UI_2_GFX,
    .size = 0x400,
    .tag = GFX_UI_2,
};

static const struct SpriteTemplate sSpriteTemplate_UI_2 =
{
    .tileTag = GFX_UI_2,
    .paletteTag = PAL_UI,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_UI_3 =
{
    .data = UI_3_GFX,
    .size = 0x400,
    .tag = GFX_UI_3,
};

static const struct SpriteTemplate sSpriteTemplate_UI_3 =
{
    .tileTag = GFX_UI_3,
    .paletteTag = PAL_UI,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_UI_4 =
{
    .data = UI_4_GFX,
    .size = 0x400,
    .tag = GFX_UI_4,
};

static const struct SpriteTemplate sSpriteTemplate_UI_4 =
{
    .tileTag = GFX_UI_4,
    .paletteTag = PAL_UI,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_UI_5 =
{
    .data = UI_5_GFX,
    .size = 0x400,
    .tag = GFX_UI_5,
};

static const struct SpriteTemplate sSpriteTemplate_UI_5 =
{
    .tileTag = GFX_UI_5,
    .paletteTag = PAL_UI,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_UI_6 =
{
    .data = UI_6_GFX,
    .size = 0x400,
    .tag = GFX_UI_6,
};

static const struct SpriteTemplate sSpriteTemplate_UI_6 =
{
    .tileTag = GFX_UI_6,
    .paletteTag = PAL_UI,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Arrow_1 =
{
    .data = Arrow_1_GFX,
    .size = 0x100,
    .tag = GFX_ARROW_1,
};

static const struct OamData sOamData_Arrows =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 0,
};

static const union AnimCmd sArrowAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(4, 20),
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd *const sArrowAnimCmds[] = {
    sArrowAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_Arrow_1 =
{
    .tileTag = GFX_ARROW_1,
    .paletteTag = PAL_UI,
    .oam = &sOamData_Arrows,
    .anims = sArrowAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Arrow_2 =
{
    .data = Arrow_2_GFX,
    .size = 0x100,
    .tag = GFX_ARROW_2,
};

static const struct SpriteTemplate sSpriteTemplate_Arrow_2 =
{
    .tileTag = GFX_ARROW_2,
    .paletteTag = PAL_UI,
    .oam = &sOamData_Arrows,
    .anims = sArrowAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cursor =
{
    .data = Cursor_GFX,
    .size = 0x100,
    .tag = GFX_CURSOR,
};

static const struct SpriteTemplate sSpriteTemplate_Cursor =
{
    .tileTag = GFX_CURSOR,
    .paletteTag = PAL_CURSOR,
    .oam = &sOamData_Arrows,
    .anims = sArrowAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Condition_1 =
{
    .data = Condition_1_GFX,
    .size = 0x400,
    .tag = GFX_CONDITION_1,
};

static const struct SpriteTemplate sSpriteTemplate_Condition_1 =
{
    .tileTag = GFX_CONDITION_1,
    .paletteTag = PAL_CONDITION,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Condition_2 =
{
    .data = Condition_2_GFX,
    .size = 0x400,
    .tag = GFX_CONDITION_2,
};

static const struct SpriteTemplate sSpriteTemplate_Condition_2 =
{
    .tileTag = GFX_CONDITION_2,
    .paletteTag = PAL_CONDITION,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Condition_3 =
{
    .data = Condition_3_GFX,
    .size = 0x400,
    .tag = GFX_CONDITION_3,
};

static const struct SpriteTemplate sSpriteTemplate_Condition_3 =
{
    .tileTag = GFX_CONDITION_3,
    .paletteTag = PAL_CONDITION,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Condition_4 =
{
    .data = Condition_4_GFX,
    .size = 0x400,
    .tag = GFX_CONDITION_4,
};

static const struct SpriteTemplate sSpriteTemplate_Condition_4 =
{
    .tileTag = GFX_CONDITION_4,
    .paletteTag = PAL_CONDITION,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Condition_5 =
{
    .data = Condition_5_GFX,
    .size = 0x400,
    .tag = GFX_CONDITION_5,
};

static const struct SpriteTemplate sSpriteTemplate_Condition_5 =
{
    .tileTag = GFX_CONDITION_5,
    .paletteTag = PAL_CONDITION,
    .oam = &sOamData_Menu_Data,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Ponyta =
{
    .data = PonytaGFX,
    .size = 0x800,
    .tag = GFX_PONYTA,
};

static const struct OamData sOamData_Pokemon =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct SpriteTemplate sSpriteTemplate_PonytaNormal =
{
    .tileTag = GFX_PONYTA,
    .paletteTag = PAL_PONYTA,
    .oam = &sOamData_Pokemon,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_PonytaShiny =
{
    .tileTag = GFX_PONYTA,
    .paletteTag = PAL_PONYTA_SHINY,
    .oam = &sOamData_Pokemon,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Rapidash =
{
    .data = RapidashGFX,
    .size = 0x800,
    .tag = GFX_RAPIDASH,
};

static const struct SpriteTemplate sSpriteTemplate_RapidashNormal =
{
    .tileTag = GFX_RAPIDASH,
    .paletteTag = PAL_RAPIDASH,
    .oam = &sOamData_Pokemon,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_RapidashShiny =
{
    .tileTag = GFX_RAPIDASH,
    .paletteTag = PAL_RAPIDASH_SHINY,
    .oam = &sOamData_Pokemon,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Rattata =
{
    .data = RattataGFX,
    .size = 0x800,
    .tag = GFX_RATTATA,
};

static const struct SpriteTemplate sSpriteTemplate_RattataNormal =
{
    .tileTag = GFX_RATTATA,
    .paletteTag = PAL_RATTATA,
    .oam = &sOamData_Pokemon,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_RattataShiny =
{
    .tileTag = GFX_RATTATA,
    .paletteTag = PAL_RATTATA_SHINY,
    .oam = &sOamData_Pokemon,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Feebas =
{
    .data = FeebasGFX,
    .size = 0x800,
    .tag = GFX_FEEBAS,
};

static const struct SpriteTemplate sSpriteTemplate_FeebasNormal =
{
    .tileTag = GFX_FEEBAS,
    .paletteTag = PAL_FEEBAS,
    .oam = &sOamData_Pokemon,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_FeebasShiny =
{
    .tileTag = GFX_FEEBAS,
    .paletteTag = PAL_FEEBAS_SHINY,
    .oam = &sOamData_Pokemon,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

void StartDerby(void)
{
    sDerby = AllocZeroed(sizeof(struct Derby));
    CreateTask(FadeToDerbyScreen, 0);
}

typedef struct  {
    int SpeciesId; // 0-4 Ponyta, 5 Rattata, 6 Rapidash, 7 Feebas
    u8 StartSpeed;
    u8 RaceSpeed;
} RaceSpeeds;

static const RaceSpeeds RaceSpeedsValues[] =
{
    {DERBY_SPECIES_PONYTA_1, 4, 5}, // Ponyta 1
    {DERBY_SPECIES_PONYTA_2, 3, 5}, // Ponyta 2
    {DERBY_SPECIES_PONYTA_3, 5, 4}, // Ponyta 3
    {DERBY_SPECIES_PONYTA_4, 5, 5}, // Ponyta 4
    {DERBY_SPECIES_PONYTA_5, 3, 6}, // Ponyta 5
    {DERBY_SPECIES_RATTATA, 5, 4}, // Rattata
    {DERBY_SPECIES_RAPIDASH, 4, 7}, // Rapidash
    {DERBY_SPECIES_FEEBAS, 0, 0}, // Feebas
};

typedef struct  {
    int ID;
    u8 NameString[16];
} RattataNames;

static const RattataNames RattataNamesValues[] = {
    {0, _("REUBEN")},
    {1, _("SPEEDSTER")},
    {2, _("SQUEAKY")},
    {3, _("DASH")},
    {4, _("SCURRIER")},
    {5, _("CHASE")},
    {6, _("BRIAN")},
    {7, _("TAILSPIN")},
    {8, _("WHISKERS")},
    {9, _("RUSH")},
    {10, _("ZOOMER")},
    {11, _("ZOOMIE")},
    {12, _("JOEY'S RATTATA")},
    {13, _("RATNADO")},
    {14, _("RATICATOR")},
    {15, _("RATTY")},
    {16, _("NYOINK")},
    {17, _("RATSUPREME")},
    {18, _("REMY")},
    {19, _("RATRON")},
    {20, _("EL RATTO")},
    {21, _("TURBO")},
    {22, _("RATTHEW")},
    {23, _("RATTEUS")},
    {24, _("RATTINA")},
    {25, _("RATABELLA")},
    {26, _("RATTONIO")},
    {27, _("RATFORD")},
    {28, _("WISCONSIN")},
    {29, _("STEVE")},
    {30, _("RATALIE")},
    {31, _("RATALIA")},
    {32, _("RATALINA")},
    {33, _("RATIGAIL")},
    {34, _("RATASHA")},
    {35, _("MR. DIRTY")},
    {36, _("RATILDA")},
    {37, _("RATRICIA")},
    {38, _("RATRICK")},
    {39, _("RATISON")},
    {40, _("RATATHAN")},
    {41, _("RATOPHER")},
    {42, _("RATSON")},
    {43, _("CHEESER")},
    {44, _("SQUIRBY")},
    {45, _("BUCKY")},
    {46, _("CHOMPY")},
    {47, _("SCABBY")},
    {48, _("HAMELIN")},
    {49, _("CHUBBS")},
    {50, _("CHEDDAR")},
    {51, _("PIP")},
    {52, _("SQUEAKER")},
};

typedef struct  {
    int ID;
    u8 NameString[16];
} PonytaNames;

static const PonytaNames PonytaNamesValues[] = {
    {0, _("AIR BISCUIT")},
    {1, _("MR. WINKY")},
    {2, _("FLAMEFURY")},
    {3, _("TROT")},
    {4, _("BURNOUT")},
    {5, _("STRIDER")},
    {6, _("RUBY")},
    {7, _("STUD MUFFIN")},
    {8, _("FIERYDASH")},
    {9, _("MOON ROCKS")},
    {10, _("WILDFIRE")},
    {11, _("FIRESPIN")},
    {12, _("CHAMP")},
    {13, _("POMPOM")},
    {14, _("PIPPIN")},
    {15, _("DANDELION")},
    {16, _("CINNAMON")},
    {17, _("STARDUST")},
    {18, _("HOT STREAK")},
    {19, _("COLT")},
    {20, _("HOPE")},
    {21, _("LUCKY")},
    {22, _("JACKPOT")},
    {23, _("BIGBUCKS")},
    {24, _("CHACHING")},
    {25, _("PONY SOPRANO")},
    {26, _("HOTBET")},
    {27, _("TAPONE")},
    {28, _("LIL SPEEDY")},
    {29, _("LEONIE")},
    {30, _("RISKITALL")},
    {31, _("FASTFIRE")},
    {32, _("LUCKYDASH")},
    {33, _("HOT GLUE")},
    {34, _("FLICKER")},
    {35, _("BREADWINNER")},
    {36, _("LUCKY CHARM")},
    {37, _("GOLDEN RUN")},
    {38, _("SCARLET")},
    {39, _("DYNAMITE")},
    {40, _("SUNSET")},
    {41, _("ON THE DOT")},
    {42, _("FASTFORTUNE")},
    {43, _("STEADYSTRIDE")},
    {44, _("MARSCAPONE")},
    {45, _("HONSE")},
    {46, _("HERO")},
    {47, _("GOLDEN HOPE")},
    {48, _("RAPIDASH")},
    {49, _("FLASHFIRE")},
    {50, _("CROWN JEWEL")},
    {51, _("WHINNEY")},
    {52, _("MAJESTY")},
};

typedef struct  {
    int ID;
    u8 NameString[16];
} RapidashNames;

static const RapidashNames RapidashNamesValues[] = {
    {0, _("SCORCHER")},
    {1, _("RED COMET")},
    {2, _("RAGINGFIRE")},
    {3, _("ON-A-ROLLA")},
    {4, _("TRILLIONAIRE")},
    {5, _("HOT PURSUIT")},
    {6, _("BURNING GLORY")},
    {7, _("APOLLO")},
    {8, _("BIG HONSE")},
    {9, _("GREASE FIRE")},
    {10, _("WILD BLAZE")},
    {11, _("RED FORTUNE")},
    {12, _("CRIMSON")},
    {13, _("VICTORY")},
    {14, _("PONYTA")},
    {15, _("FIREBALL")},
    {16, _("BLAST BURN")},
    {17, _("FLAMEY")},
    {18, _("SPARKLE")},
    {19, _("DAPIRASH")},
    {20, _("BURNTOUT")},
    {21, _("MISFIRE")},
    {22, _("HUFFN'PUFF")},
    {23, _("HEATCRASH")},
    {24, _("FITYFIFTY")},
    {25, _("COMET")},
    {26, _("SUNSHINE")},
    {27, _("GOLDENGALLOP")},
    {28, _("GOLDMINE")},
    {29, _("PEGASUS")},
    {30, _("X SPEED")},
    {31, _("WISH")},
    {32, _("BIG JAMES")},
    {33, _("VELVET CROWN")},
    {34, _("LUCKY STRIKE")},
    {35, _("RED BULLET")},
    {36, _("BLAZING STAR")},
    {37, _("HOOF")},
    {38, _("BURNING SKY")},
    {39, _("IRON WILL")},
    {40, _("EMBER DAWN")},
    {41, _("NOBLE VICTORY")},
    {42, _("GOLDRUSH")},
    {43, _("BEEF")},
    {44, _("BOJACK")},
    {45, _("SCARLET WIND")},
    {46, _("BOSS")},
    {47, _("BUTTER")},
    {48, _("PORKCHOP")},
    {49, _("HOT PANTS")},
    {50, _("POT ROAST")},
    {51, _("PAPRIKA")},
    {52, _("EPONA")},
};

typedef struct  {
    int ID;
    u8 NameString[16];
} FeebasNames;

static const FeebasNames FeebasNamesValues[] = {
    {0, _("FISK")},
    {1, _("BINGLE")},
    {2, _("EEL MCNEAL")},
    {3, _("BASSINGA")},
    {4, _("BEEFAS")},
    {5, _("SKIPPER")},
    {6, _("BONES")},
    {7, _("KELPSTER")},
    {8, _("LOOPDELOOP")},
    {9, _("FINN")},
    {10, _("TROUT TROUBLE")},
    {11, _("THROTTLE")},
    {12, _("STINKY")},
    {13, _("MANOWAR")},
    {14, _("NEPTUNE")},
    {15, _("MIRAKLE B.")},
    {16, _("FISH")},
    {17, _("FREDDI FISH")},
    {18, _("SWIMMY MCFLOP")},
    {19, _("SOGGY")},
    {20, _("WIGGLY")},
    {21, _("GUPPY")},
    {22, _("WATERLOG")},
    {23, _("FLOUNDER")},
    {24, _("THE DRIP")},
    {25, _("WIGGLES")},
    {26, _("BOOGERFISH")},
    {27, _("THE BLOB")},
    {28, _("DRIPDROP")},
    {29, _("FEEBUS")},
    {30, _("BIG HOSS")},
    {31, _("SPLISHY")},
    {32, _("BLOOP")},
    {33, _("FLOPSTER")},
    {34, _("WET TOWEL")},
    {35, _("DISASTER")},
    {36, _("MR. FIASCO")},
    {37, _("SPLOOSH")},
    {38, _("SKIDOOSH")},
    {39, _("BELLYFLOP BOB")},
    {40, _("GURGLES")},
    {41, _("WIBBLE")},
    {42, _("NOTSOFAST")},
    {43, _("BLOOPMCSPLASH")},
    {44, _("WET SHAME")},
    {45, _("NOODLE")},
    {46, _("MEATLOAF")},
    {47, _("THEBIGSPLASH")},
    {48, _("CANNONBALL")},
    {49, _("GLUBGLUB")},
    {50, _("FLOPSTAR")},
    {51, _("PUDDLEHOPPER")},
    {52, _("DR. FUME")},
};

#define MAX_NAMES 53

typedef struct  {
    u16 racerVar;
    u16 racerNicknameVar;
} DerbyRacerVars;

static const DerbyRacerVars sDerbyRacerVars[] =
{
    [DERBY_RACER_1] =
    {
        .racerVar = DERBY_VAR_RACER_1,
        .racerNicknameVar = DERBY_VAR_RACER_NAME_1,
    },
    [DERBY_RACER_2] =
    {
        .racerVar = DERBY_VAR_RACER_2,
        .racerNicknameVar = DERBY_VAR_RACER_NAME_2,
    },
    [DERBY_RACER_3] =
    {
        .racerVar = DERBY_VAR_RACER_3,
        .racerNicknameVar = DERBY_VAR_RACER_NAME_3,
    },
    [DERBY_RACER_4] =
    {
        .racerVar = DERBY_VAR_RACER_4,
        .racerNicknameVar = DERBY_VAR_RACER_NAME_4,
    },
    [DERBY_RACER_5] =
    {
        .racerVar = DERBY_VAR_RACER_5,
        .racerNicknameVar = DERBY_VAR_RACER_NAME_5,
    },
    [DERBY_RACER_6] =
    {
        .racerVar = DERBY_VAR_RACER_6,
        .racerNicknameVar = DERBY_VAR_RACER_NAME_6,
    },
};

static inline u32 GetDerbySpeciesSpeedPay(u32 species, u32 condition)
{
    switch (species)
    {
    case DERBY_SPECIES_FEEBAS:
        return BET_MULTIPLIER_JACKPOT; // Will never actually win lol
    case DERBY_SPECIES_RAPIDASH:
        if (condition >= CONDITION_4_STAR)
            return BET_MULTIPLIER_1_1;
        return BET_MULTIPLIER_1_2;
    case DERBY_SPECIES_RATTATA:
        if (condition == CONDITION_5_STAR)
            return BET_MULTIPLIER_1_3;
        else if ((condition == CONDITION_4_STAR) || (condition == CONDITION_3_STAR))
            return BET_MULTIPLIER_1_5;
        else if (condition == CONDITION_2_STAR)
            return BET_MULTIPLIER_2_0;
        return BET_MULTIPLIER_3_0;
    default:
        if (condition == CONDITION_5_STAR)
            return BET_MULTIPLIER_1_2;
        else if (condition == CONDITION_4_STAR)
            return BET_MULTIPLIER_1_3;
        else if ((condition == CONDITION_3_STAR) || (condition == CONDITION_2_STAR))
            return BET_MULTIPLIER_1_5;
        return BET_MULTIPLIER_2_0;
    }
}

static void GetRacerSpeeds(u8 racerSpecies, u8 racer)
{
    u8 sSpeed;
    u8 rSpeed;
    u8 condition;
    int i;

    for (i = 0; i < DERBY_RACER_COUNT; i++)
    {
        if (RaceSpeedsValues[i].SpeciesId == racerSpecies)
        {
            sSpeed = RaceSpeedsValues[i].StartSpeed;
            rSpeed = RaceSpeedsValues[i].RaceSpeed;
        }
    }

    sDerby->racerSpeedStart[racer] = sSpeed * (1 + (sDerby->racerCondition[racer] / 10.0f));
    sDerby->racerSpeedRace[racer] = rSpeed * (1 + (sDerby->racerCondition[racer] / 10.0f));
    condition = sDerby->racerCondition[racer];
    sDerby->racerSpeedPay[racer] = GetDerbySpeciesSpeedPay(racerSpecies, condition);
}

static inline bool32 GetDerbyShinyChance(void)
{
    if ((Random() % 8192) == 777) // Shiny
        return TRUE;
    return FALSE;
}

void GetNewDerby(void)
{
    u32 odds;
    u8 odd_one;

    int i;
    u8 conditions[DERBY_RACER_COUNT];
    u8 derbySpecies[DERBY_RACER_COUNT];
    u8 derbyShiny[DERBY_RACER_COUNT];
    u16 racerVar;
    int condition4Index;
    int condition3Index;
    int condition2Index;

    // Generate all derby species with random Ponyta by default
    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        derbySpecies[i] = (Random() % DERBY_SPECIES_PONYTA_COUNT); // Ponyta 0-4
    }

    odds = (Random() % 100); // Feebas: 0-99
    if (odds != 99) // No Feebas
    {
        odds = (Random() % 300); // Ponyta/Rapidash/Rattata 0-2

        if ((odds >= 100) && (odds < 200)) // Rattata
        {
            odd_one = (Random() % DERBY_RACER_COUNT); // Picks a random racer
            derbySpecies[odd_one] = DERBY_SPECIES_RATTATA;
        }
        else if (odds >= 200) // Rapidash
        {
            odd_one = (Random() % DERBY_RACER_COUNT); // Picks a random racer
            derbySpecies[odd_one] = DERBY_SPECIES_RAPIDASH;
        }
    }
    else // Feebas
    {
        odd_one = (Random() % DERBY_RACER_COUNT); // Picks a random racer
        derbySpecies[odd_one] = DERBY_SPECIES_FEEBAS;
    }

    // Generate all derby species with random Ponyta by default
    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        derbyShiny[i] = GetDerbyShinyChance();
    }

    // Generate all racers with low stars by default
    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        conditions[i] = Random() % CONDITION_3_STAR;
    }

    condition4Index = Random() % DERBY_RACER_COUNT;
    conditions[condition4Index] = CONDITION_5_STAR;

    do {
        condition3Index = Random() % DERBY_RACER_COUNT;
    } while (condition3Index == condition4Index);  
    conditions[condition3Index] = CONDITION_4_STAR;

    do {
        condition2Index = Random() % DERBY_RACER_COUNT;
    } while (condition2Index == condition4Index || condition2Index == condition3Index);  
    conditions[condition2Index] = CONDITION_3_STAR;

    // Generate all racers with low stars by default
    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        racerVar = sDerbyRacerVars[i].racerVar;
        VarSet(racerVar, (derbySpecies[i] * 100) + (derbyShiny[i] * 10) + conditions[i]);
    }

    FlagSet(DERBY_FLAG_RESET);
}

void InitiateRacers(void)
{
    u32 number;
    u32 i;
    u16 racerVar;

    // Generate all racers with low stars by default
    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        racerVar = sDerbyRacerVars[i].racerVar;
        number = VarGet(racerVar);
        sDerby->racerSpecies[i] = number / 100;           // Hundreds place
        sDerby->racerShiny[i] = (number / 10) % 10;     // Tens place
        sDerby->racerCondition[i] = number % 10;            // Ones place
    }
}

static inline u32 CreatePonytaSprite(u32 shiny, u32 x, u32 y)
{
    if (shiny)
        return CreateSprite(&sSpriteTemplate_PonytaShiny, x, y, 0);
    return CreateSprite(&sSpriteTemplate_PonytaNormal, x, y, 0);
}

static inline u32 CreateRattataSprite(u32 shiny, u32 x, u32 y)
{
    if (shiny)
        return CreateSprite(&sSpriteTemplate_RattataShiny, x, y, 0);
    return CreateSprite(&sSpriteTemplate_RattataNormal, x, y, 0);
}

static inline u32 CreateRapidashSprite(u32 shiny, u32 x, u32 y)
{
    if (shiny)
        return CreateSprite(&sSpriteTemplate_RapidashShiny, x, y, 0);
    return CreateSprite(&sSpriteTemplate_RapidashNormal, x, y, 0);
}

static inline u32 CreateFeebasSprite(u32 shiny, u32 x, u32 y)
{
    if (shiny)
        return CreateSprite(&sSpriteTemplate_FeebasShiny, x, y, 0);
    return CreateSprite(&sSpriteTemplate_FeebasNormal, x, y, 0);
}

static inline u32 CreateDerbyMonSprite(u32 species, u32 shiny, u32 x)
{
    switch (species)
    {
    default:
        return CreatePonytaSprite(shiny, x, 96);
    case DERBY_SPECIES_RATTATA:
        return CreateRattataSprite(shiny, x, 100);
    case DERBY_SPECIES_RAPIDASH:
        return CreateRapidashSprite(shiny, x, 88);
    case DERBY_SPECIES_FEEBAS:
        return CreateFeebasSprite(shiny, x, 96);
    }
}

static void CreatePokemonSprites(void)
{
    s16 x;
    u32 i;

    x = 64;

    LoadCompressedSpriteSheet(&sSpriteSheet_Ponyta);
    LoadCompressedSpriteSheet(&sSpriteSheet_Rattata);
    LoadCompressedSpriteSheet(&sSpriteSheet_Rapidash);
    LoadCompressedSpriteSheet(&sSpriteSheet_Feebas);

    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        sDerby->racerSpeciesSpriteId[i] = CreateDerbyMonSprite(sDerby->racerSpecies[i], sDerby->racerShiny[i], x);
        gSprites[sDerby->racerSpeciesSpriteId[i]].invisible = FALSE;
    }
}

static void FadeToDerbyScreen(u8 taskId)
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
            SetMainCallback2(InitDerbyScreen);
            DestroyTask(taskId);
        }
        break;
    }
}

static void UpdatePokemonSprites(void)
{
    u32 i;
    // Generate all racers with low stars by default
    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        gSprites[sDerby->racerSpeciesSpriteId[i]].invisible = TRUE;
    }

    gSprites[sDerby->racerSpeciesSpriteId[sDerby->MenuPosition]].invisible = FALSE;
}

static void CreateMenuData(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Name_Ponyta);
    sDerby->SpeciesNameSpriteId = CreateSprite(&sSpriteTemplate_Name_Ponyta, 164, 60, 0);

    LoadCompressedSpriteSheet(&sSpriteSheet_Condition_1);
    sDerby->ConditionSpriteId = CreateSprite(&sSpriteTemplate_Condition_1, 164, 93, 0);

    LoadCompressedSpriteSheet(&sSpriteSheet_Payout_1);
    sDerby->PayoutSpriteId = CreateSprite(&sSpriteTemplate_Payout_1, 164, 124, 0);

    LoadCompressedSpriteSheet(&sSpriteSheet_UI_1);
    sDerby->uiSpriteId = CreateSprite(&sSpriteTemplate_UI_1, 64, 64, 0);
}

static void UpdatePokemonSpeciesNames(void)
{
    u8 species = 0;

    species = sDerby->racerSpecies[sDerby->MenuPosition];

    DestroySpriteAndFreeResources(&gSprites[sDerby->SpeciesNameSpriteId]);
    LoadSpritePalettes(sSpritePalettes);

    switch (species)
    {
    default:
        LoadCompressedSpriteSheet(&sSpriteSheet_Name_Ponyta);
        sDerby->SpeciesNameSpriteId = CreateSprite(&sSpriteTemplate_Name_Ponyta, 164, 60, 0);
        break;
    case DERBY_SPECIES_RATTATA:
        LoadCompressedSpriteSheet(&sSpriteSheet_Name_Rattata);
        sDerby->SpeciesNameSpriteId = CreateSprite(&sSpriteTemplate_Name_Rattata, 164, 60, 0);
        break;
    case DERBY_SPECIES_RAPIDASH:
        LoadCompressedSpriteSheet(&sSpriteSheet_Name_Rapidash);
        sDerby->SpeciesNameSpriteId = CreateSprite(&sSpriteTemplate_Name_Rapidash, 164, 60, 0);
        break;
    case DERBY_SPECIES_FEEBAS:
        LoadCompressedSpriteSheet(&sSpriteSheet_Name_Feebas);
        sDerby->SpeciesNameSpriteId = CreateSprite(&sSpriteTemplate_Name_Feebas, 164, 60, 0);
        break;
    }
}

static void UpdateCondition(void)
{
    u8 stars = 0;
    
    stars = sDerby->racerCondition[sDerby->MenuPosition];

    DestroySpriteAndFreeResources(&gSprites[sDerby->ConditionSpriteId]);
    LoadSpritePalettes(sSpritePalettes);

    switch (stars)
    {
    case CONDITION_1_STAR:
        LoadCompressedSpriteSheet(&sSpriteSheet_Condition_1);
        sDerby->ConditionSpriteId = CreateSprite(&sSpriteTemplate_Condition_1, 164, 93, 0);
        break;
    case CONDITION_2_STAR:
        LoadCompressedSpriteSheet(&sSpriteSheet_Condition_2);
        sDerby->ConditionSpriteId = CreateSprite(&sSpriteTemplate_Condition_2, 164, 93, 0);
        break;
    case CONDITION_3_STAR:
        LoadCompressedSpriteSheet(&sSpriteSheet_Condition_3);
        sDerby->ConditionSpriteId = CreateSprite(&sSpriteTemplate_Condition_3, 164, 93, 0);
        break;
    case CONDITION_4_STAR:
        LoadCompressedSpriteSheet(&sSpriteSheet_Condition_4);
        sDerby->ConditionSpriteId = CreateSprite(&sSpriteTemplate_Condition_4, 164, 93, 0);
        break;
    case CONDITION_5_STAR:
        LoadCompressedSpriteSheet(&sSpriteSheet_Condition_5);
        sDerby->ConditionSpriteId = CreateSprite(&sSpriteTemplate_Condition_5, 164, 93, 0);
        break;
    }
}

static void UpdatePayout(void)
{
    u8 multi = 0;
    s16 y;
    
    y = 124;
    
    multi = sDerby->racerSpeedPay[sDerby->MenuPosition];
    
    DestroySpriteAndFreeResources(&gSprites[sDerby->PayoutSpriteId]);
    LoadSpritePalettes(sSpritePalettes);

    switch (multi)
    {
    case BET_MULTIPLIER_1_1:
        LoadCompressedSpriteSheet(&sSpriteSheet_Payout_1);
        sDerby->PayoutSpriteId = CreateSprite(&sSpriteTemplate_Payout_1, 164, y, 0);
        break;
    case BET_MULTIPLIER_1_2:
        LoadCompressedSpriteSheet(&sSpriteSheet_Payout_2);
        sDerby->PayoutSpriteId = CreateSprite(&sSpriteTemplate_Payout_2, 164, y, 0);
        break;
    case BET_MULTIPLIER_1_3:
        LoadCompressedSpriteSheet(&sSpriteSheet_Payout_3);
        sDerby->PayoutSpriteId = CreateSprite(&sSpriteTemplate_Payout_3, 164, y, 0);
        break;
    case BET_MULTIPLIER_1_5:
        LoadCompressedSpriteSheet(&sSpriteSheet_Payout_4);
        sDerby->PayoutSpriteId = CreateSprite(&sSpriteTemplate_Payout_4, 164, y, 0);
        break;
    case BET_MULTIPLIER_2_0:
        LoadCompressedSpriteSheet(&sSpriteSheet_Payout_5);
        sDerby->PayoutSpriteId = CreateSprite(&sSpriteTemplate_Payout_5, 164, y, 0);
        break;
    case BET_MULTIPLIER_3_0:
        LoadCompressedSpriteSheet(&sSpriteSheet_Payout_6);
        sDerby->PayoutSpriteId = CreateSprite(&sSpriteTemplate_Payout_6, 164, y, 0);
        break;
    case BET_MULTIPLIER_JACKPOT:
        LoadCompressedSpriteSheet(&sSpriteSheet_Payout_7);
        sDerby->PayoutSpriteId = CreateSprite(&sSpriteTemplate_Payout_7, 164, y, 0);
        break;
    }
}

static void UpdateUI(void)
{
    DestroySpriteAndFreeResources(&gSprites[sDerby->uiSpriteId]);
    LoadSpritePalettes(sSpritePalettes);
    
    if (sDerby->MenuPosition == 0)
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_UI_1);
        sDerby->uiSpriteId = CreateSprite(&sSpriteTemplate_UI_1, 64, 64, 0);
    }
    else if (sDerby->MenuPosition == 1)
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_UI_2);
        sDerby->uiSpriteId = CreateSprite(&sSpriteTemplate_UI_2, 64, 64, 0);
    }
    else if (sDerby->MenuPosition == 2)
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_UI_3);
        sDerby->uiSpriteId = CreateSprite(&sSpriteTemplate_UI_3, 64, 64, 0);
    }
    else if (sDerby->MenuPosition == 3)
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_UI_4);
        sDerby->uiSpriteId = CreateSprite(&sSpriteTemplate_UI_4, 64, 64, 0);
    }
    else if (sDerby->MenuPosition == 4)
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_UI_5);
        sDerby->uiSpriteId = CreateSprite(&sSpriteTemplate_UI_5, 64, 64, 0);
    }
    else if (sDerby->MenuPosition == 5)
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_UI_6);
        sDerby->uiSpriteId = CreateSprite(&sSpriteTemplate_UI_6, 64, 64, 0);
    }
}

static void CreateP10(void)
{
    LoadSpritePalettes(sSpritePalettes);
    LoadCompressedSpriteSheet(&sSpriteSheet_P10);
    sDerby->P10SpriteId = CreateSprite(&sSpriteTemplate_P10, 172, 80, 0);
}

static void CreateCreditIcon(void)
{
    LoadSpritePalettes(sSpritePalettes);
    LoadCompressedSpriteSheet(&sSpriteSheet_Credit_Icon);
    sDerby->CreditIconSpriteId = CreateSprite(&sSpriteTemplate_Credit_Icon, 28, 126, 0);
}

static void CreateCreditIconRed(void)
{
    LoadSpritePalettes(sSpritePalettes);
    LoadCompressedSpriteSheet(&sSpriteSheet_Credit_Icon_Red);
    sDerby->CreditIconSpriteId = CreateSprite(&sSpriteTemplate_Credit_Icon_Red, 28, 126, 0);
}

static void CreateArrows(void)
{
    s16 x;
    s16 y;
    
    x = 32;
    y = 88;

    LoadCompressedSpriteSheet(&sSpriteSheet_Arrow_1);
    sDerby->Arrow1SpriteId = CreateSprite(&sSpriteTemplate_Arrow_1, x, y, 0);

    LoadCompressedSpriteSheet(&sSpriteSheet_Arrow_2);
    sDerby->Arrow2SpriteId = CreateSprite(&sSpriteTemplate_Arrow_2, x + 64, y, 0);
}

static void ShowName(const u8 *str)
{
    const u8 color[3] = { 0, 1, 2 };

    //FillWindowPixelBuffer(DERBY_MENUS, 0xFF);
    AddTextPrinterParameterized3(DERBY_MENUS, 0, 2, 0, color, 0, str);
    PutWindowTilemap(DERBY_MENUS);
    CopyWindowToVram(DERBY_MENUS, 3);
}

static void UpdateNicknames(void)
{
    int i;
    u32 racerSpecies = 0;
    u16 racerNicknameVar;

    InitWindows(sDerbyWinTemplates);
    DeactivateAllTextPrinters();
    LoadPalette(GetTextWindowPalette(2), 11 * 16, 32);

    racerSpecies = sDerby->racerSpecies[sDerby->MenuPosition];
    racerNicknameVar = sDerbyRacerVars[sDerby->MenuPosition].racerNicknameVar;

    switch (racerSpecies)
    {
    default:
        for (i = 0; i < MAX_NAMES; i++)
        {
            if (PonytaNamesValues[i].ID == (VarGet(racerNicknameVar)))
                ShowName(PonytaNamesValues[i].NameString);
        }
        break;
    case DERBY_SPECIES_RATTATA:
        for (i = 0; i < MAX_NAMES; i++)
        {
            if (RattataNamesValues[i].ID == (VarGet(racerNicknameVar)))
                ShowName(RattataNamesValues[i].NameString);
        }
        break;
    case DERBY_SPECIES_RAPIDASH:
        for (i = 0; i < MAX_NAMES; i++)
        {
            if (RapidashNamesValues[i].ID == (VarGet(racerNicknameVar)))
                ShowName(RapidashNamesValues[i].NameString);
        }
        break;
    case DERBY_SPECIES_FEEBAS:
        for (i = 0; i < MAX_NAMES; i++)
        {
            if (FeebasNamesValues[i].ID == (VarGet(racerNicknameVar)))
                ShowName(FeebasNamesValues[i].NameString);
        }
        break;
    }
}

u8 GetUniquePonytaName(u8 currentSpecies, u8 previousNames[])
{
    u8 newName;

    // Only apply uniqueness check for Ponyta (species < 5)
    if (currentSpecies < DERBY_SPECIES_PONYTA_COUNT)
    {
        do {
            newName = Random() % MAX_NAMES;  // Generate a random nickname index
        } while (previousNames[newName] != 0);  // Check if this name has already been taken
        
        // Mark this name as taken
        previousNames[newName] = 1;
    }
    else
    {
        // For non-Ponyta species, no need to check for uniqueness
        newName = Random() % MAX_NAMES;
    }
    
    return newName;
}

static void SetNicknames(void)
{
    u8 previousNames[MAX_NAMES] = {0};  // Array to track taken nicknames (0 = available, 1 = taken)
    u8 names[DERBY_RACER_COUNT];
    u32 i;
    u16 racerNicknameVar;

    // Generate all racers with low stars by default
    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        names[i] = GetUniquePonytaName(sDerby->racerSpecies[i], previousNames);
    }

    // Generate all racers with low stars by default
    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        racerNicknameVar = sDerbyRacerVars[i].racerNicknameVar;
        VarSet(racerNicknameVar, names[i]);
    }

    FlagSet(DERBY_FLAG_NICKNAME);
}

static void UpdatePokemonData(void)
{
    UpdatePokemonSprites();
    UpdatePokemonSpeciesNames();
    UpdateCondition();
    UpdatePayout();
    UpdateUI();
    if (!FlagGet(DERBY_FLAG_NICKNAME))
        SetNicknames();
    UpdateNicknames();
    
}

static void SetBetDigits(u16 num)
{
    u8 i;
    u16 d = 1000;  // Start with the thousands place

    for (i = 0; i < 4; i++)  // Always show 4 digits
    {
        u8 digit = num / d;

        // Show the digit (all digits are visible)
        //gSprites[sDerby->BetSpriteIds[i + SPR_BET_DIGITS]].invisible = TRUE;

        // If it's a smaller number, show 0 for the higher place values
        if (i == 0 && num < 1000) {
            digit = 0;  // Force 0 for the thousands place if the number is less than 1000
        }

        // Set the tileNum based on the current digit
        gSprites[sDerby->BetSpriteIds[i + SPR_BET_DIGITS]].oam.tileNum =
            gSprites[sDerby->BetSpriteIds[i + SPR_BET_DIGITS]].sheetTileStart + (digit * 2);

        gSprites[sDerby->BetSpriteIds[i + SPR_BET_DIGITS]].oam.priority = 0;

        // Reduce num for the next digit
        num = num % d;
        d = d / 10;
    }
    
    BuildOamBuffer();
}

static void CreateBetSprites(void)
{
    u8 i;

    for (i = 0; i < ARRAY_COUNT(sSpriteSheets_BetInterface) - 1; i++)  
    {
        LoadCompressedSpriteSheet(&sSpriteSheets_BetInterface[i]);
    }

    for (i = 0; i < 4; i++)
    {
        sDerby->BetSpriteIds[i + SPR_BET_DIGITS] = CreateSprite(&sSpriteTemplate_BetDigit, i * 5 + 148, 103, 2);
        gSprites[sDerby->BetSpriteIds[i + SPR_BET_DIGITS]].oam.priority = 0;
        gSprites[sDerby->BetSpriteIds[i + SPR_BET_DIGITS]].invisible = TRUE;
    }
}

static void SetPotentialDigits(u16 num)
{
    u8 i;
    u16 d = 1000;  // Start with the thousands place

    for (i = 0; i < 4; i++)  // Always show 4 digits
    {
        u8 digit = num / d;

        // Show the digit (all digits are visible)
        //gSprites[sDerby->PotentialSpriteIds[i + SPR_POTENTIAL_DIGITS]].invisible = TRUE;

        // If it's a smaller number, show 0 for the higher place values
        if (i == 0 && num < 1000) {
            digit = 0;  // Force 0 for the thousands place if the number is less than 1000
        }

        // Set the tileNum based on the current digit
        gSprites[sDerby->PotentialSpriteIds[i + SPR_POTENTIAL_DIGITS]].oam.tileNum =
            gSprites[sDerby->PotentialSpriteIds[i + SPR_POTENTIAL_DIGITS]].sheetTileStart + (digit * 2);

        gSprites[sDerby->PotentialSpriteIds[i + SPR_POTENTIAL_DIGITS]].oam.priority = 0;

        // Reduce num for the next digit
        num = num % d;
        d = d / 10;
    }
    
    BuildOamBuffer();
}

static void CreatePotentialSprites(void)
{
    u8 i;

    for (i = 0; i < ARRAY_COUNT(sSpriteSheets_PotentialInterface) - 1; i++)  
    {
        LoadCompressedSpriteSheet(&sSpriteSheets_PotentialInterface[i]);
    }

    for (i = 0; i < 4; i++)
    {
        sDerby->PotentialSpriteIds[i + SPR_POTENTIAL_DIGITS] = CreateSprite(&sSpriteTemplate_PotentialDigit, i * 6 + 186, 125, 2);
        gSprites[sDerby->PotentialSpriteIds[i + SPR_POTENTIAL_DIGITS]].oam.priority = 0;
        gSprites[sDerby->PotentialSpriteIds[i + SPR_POTENTIAL_DIGITS]].invisible = TRUE;
    }
}

static void SetCreditDigits(u16 num)
{
    u8 i;
    u16 d = 1000;  // Start with the thousands place

    for (i = 0; i < 4; i++)  // Always show 4 digits
    {
        u8 digit = num / d;

        // Show the digit (all digits are visible)
        gSprites[sDerby->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].invisible = FALSE;

        // If it's a smaller number, show 0 for the higher place values
        if (i == 0 && num < 1000) {
            digit = 0;  // Force 0 for the thousands place if the number is less than 1000
        }

        // Set the tileNum based on the current digit
        gSprites[sDerby->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].oam.tileNum =
            gSprites[sDerby->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].sheetTileStart + (digit * 2);

        gSprites[sDerby->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].oam.priority = 0;

        // Reduce num for the next digit
        num = num % d;
        d = d / 10;
    }
    
    BuildOamBuffer();
}

static void CreateCreditSprites(void)
{
    u8 i;

    for (i = 0; i < ARRAY_COUNT(sSpriteSheets_CreditsInterface) - 1; i++)  
    {
        LoadCompressedSpriteSheet(&sSpriteSheets_CreditsInterface[i]);
    }

    for (i = 0; i < 4; i++)
    {
        sDerby->CreditSpriteIds[i + SPR_CREDIT_DIGITS] = CreateSprite(&sSpriteTemplate_CreditDigit, i * 8 + 50, 136, 2);
        gSprites[sDerby->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].oam.priority = 0;
    }
}

static void DerbyVBlankCallback(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void DerbyMainCallback(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
}

static void StartExitDerby(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    sDerby->state = DERBY_STATE_EXIT;
}

static void ExitDerby(void)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        FREE_AND_SET_NULL(sDerby);
    }
}

static void ShiftData(u8 direction)
{
    // 1 = Right, 0 = Left
    
    if (direction == 1) // Right
    {
        PlaySE(SE_SELECT);
        if (sDerby->MenuPosition >= DERBY_RACER_6)
        {
            sDerby->MenuPosition = DERBY_RACER_1;
        }
        else
        {
            sDerby->MenuPosition++;
        }
    }
    else if (direction == 0) // Left
    {
        PlaySE(SE_SELECT);
        if (sDerby->MenuPosition <= DERBY_RACER_1)
        {
            sDerby->MenuPosition = DERBY_RACER_6;
        }
        else
        {
            sDerby->MenuPosition--;
        }
    }
    UpdatePokemonData();
}

static void HandleInput(void)
{
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        sDerby->state = DERBY_STATE_BET_2_START;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        if (sDerby->exitToggle == 0) {
        PlaySE(SE_SELECT);
        sDerby->state = DERBY_STATE_START_EXIT;
        }
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        ShiftData(1);
    }
    else if (JOY_NEW(DPAD_LEFT))
    {
        ShiftData(0);
    }
}

static void UpdateBetBG(void)
{
    if (sDerby->Menu == 0)
    {
        InitBgsFromTemplates(0, sDerbyBGtemplates, ARRAY_COUNT(sDerbyBGtemplates));
        SetBgTilemapBuffer(DERBY_BG_BASE, AllocZeroed(BG_SCREEN_SIZE));
        DecompressAndLoadBgGfxUsingHeap(DERBY_BG_BASE, Derby_BG_Bet_Img_2, 0x1940, 0, 0);
        CopyToBgTilemapBuffer(DERBY_BG_BASE, Derby_BG_Bet_Tilemap_2, 0, 0);
        ResetPaletteFade();
        LoadPalette(Derby_BG_Bet_Pal_2, 0, sizeof(Derby_BG_Bet_Pal_2)); // Load the second palette
        CopyBgTilemapBufferToVram(DERBY_BG_BASE);
        return;
    }
    else if (sDerby->Menu == 1)
    {
        InitBgsFromTemplates(0, sDerbyBGtemplates, ARRAY_COUNT(sDerbyBGtemplates));
        SetBgTilemapBuffer(DERBY_BG_BASE, AllocZeroed(BG_SCREEN_SIZE));
        DecompressAndLoadBgGfxUsingHeap(DERBY_BG_BASE, Derby_BG_Bet_Img, 0x1940, 0, 0);
        CopyToBgTilemapBuffer(DERBY_BG_BASE, Derby_BG_Bet_Tilemap, 0, 0);
        ResetPaletteFade();
        LoadPalette(Derby_BG_Bet_Pal, 0, sizeof(Derby_BG_Bet_Pal)); // Load the second palette
        CopyBgTilemapBufferToVram(DERBY_BG_BASE);
        return;
    }
}

static void HideBetSprites(void)
{
    if (sDerby->Menu == 0)
    {
        DestroySpriteAndFreeResources(&gSprites[sDerby->CreditIconSpriteId]);
        CreateCreditIconRed();
        CreateP10();
        
        gSprites[sDerby->SpeciesNameSpriteId].invisible = TRUE;
        gSprites[sDerby->ConditionSpriteId].invisible = TRUE;
        gSprites[sDerby->PayoutSpriteId].invisible = TRUE;
        gSprites[sDerby->Arrow1SpriteId].invisible = TRUE;
        gSprites[sDerby->Arrow2SpriteId].invisible = TRUE;
        gSprites[sDerby->uiSpriteId].invisible = TRUE;
        
        gSprites[sDerby->PotentialSpriteIds[0]].invisible = FALSE;
        gSprites[sDerby->PotentialSpriteIds[1]].invisible = FALSE;
        gSprites[sDerby->PotentialSpriteIds[2]].invisible = FALSE;
        gSprites[sDerby->PotentialSpriteIds[3]].invisible = FALSE;
        gSprites[sDerby->BetSpriteIds[0]].invisible = FALSE;
        gSprites[sDerby->BetSpriteIds[1]].invisible = FALSE;
        gSprites[sDerby->BetSpriteIds[2]].invisible = FALSE;
        gSprites[sDerby->BetSpriteIds[3]].invisible = FALSE;
    }
    else if (sDerby->Menu == 1)
    {
        DestroySpriteAndFreeResources(&gSprites[sDerby->P10SpriteId]);
        DestroySpriteAndFreeResources(&gSprites[sDerby->CreditIconSpriteId]);
        CreateCreditIcon();
        
        gSprites[sDerby->PotentialSpriteIds[0]].invisible = TRUE;
        gSprites[sDerby->PotentialSpriteIds[1]].invisible = TRUE;
        gSprites[sDerby->PotentialSpriteIds[2]].invisible = TRUE;
        gSprites[sDerby->PotentialSpriteIds[3]].invisible = TRUE;
        gSprites[sDerby->BetSpriteIds[0]].invisible = TRUE;
        gSprites[sDerby->BetSpriteIds[1]].invisible = TRUE;
        gSprites[sDerby->BetSpriteIds[2]].invisible = TRUE;
        gSprites[sDerby->BetSpriteIds[3]].invisible = TRUE;
        
        gSprites[sDerby->SpeciesNameSpriteId].invisible = FALSE;
        gSprites[sDerby->ConditionSpriteId].invisible = FALSE;
        gSprites[sDerby->PayoutSpriteId].invisible = FALSE;
        gSprites[sDerby->Arrow1SpriteId].invisible = FALSE;
        gSprites[sDerby->Arrow2SpriteId].invisible = FALSE;
        gSprites[sDerby->uiSpriteId].invisible = FALSE;
    }
}

static void AddBet(void)
{
    u8 PayoutId;
    
    PayoutId = sDerby->racerSpeedPay[sDerby->MenuPosition];
    
    if ((sDerby->Bet + 10) <= GetCoins())
    {
        PlaySE(SE_BALL_TRAY_BALL);
        sDerby->Bet = (sDerby->Bet + 10);
        SetBetDigits(sDerby->Bet);

        switch (PayoutId)
        {
        case BET_MULTIPLIER_1_1:
            sDerby->PotentialWin = (sDerby->Bet * 1.1);
            break;
        case BET_MULTIPLIER_1_2:
            sDerby->PotentialWin = (sDerby->Bet * 1.2);
            break;
        case BET_MULTIPLIER_1_3:
            sDerby->PotentialWin = (sDerby->Bet * 1.3);
            break;
        case BET_MULTIPLIER_1_5:
            sDerby->PotentialWin = (sDerby->Bet * 1.5);
            break;
        case BET_MULTIPLIER_2_0:
            sDerby->PotentialWin = (sDerby->Bet * 2);
            break;
        case BET_MULTIPLIER_3_0:
            sDerby->PotentialWin = (sDerby->Bet * 3);
            break;
        case BET_MULTIPLIER_JACKPOT:
            sDerby->PotentialWin = 9999;
            break;
        }

        if (sDerby->PotentialWin > 9999)
        {
            sDerby->PotentialWin = 9999;
        }
        SetPotentialDigits(sDerby->PotentialWin);
    }
    else
    {
        PlaySE(SE_FAILURE);
    }
}

static void SubBet(void)
{
    u8 PayoutId = 0;
    
    PayoutId = sDerby->racerSpeedPay[sDerby->MenuPosition];
    
    if (sDerby->Bet > 0)
    {
        PlaySE(SE_BALL_TRAY_BALL);
        sDerby->Bet = (sDerby->Bet - 10);
        SetBetDigits(sDerby->Bet);

        switch (PayoutId)
        {
        case BET_MULTIPLIER_1_1:
            sDerby->PotentialWin = (sDerby->Bet * 1.1);
            break;
        case BET_MULTIPLIER_1_2:
            sDerby->PotentialWin = (sDerby->Bet * 1.2);
            break;
        case BET_MULTIPLIER_1_3:
            sDerby->PotentialWin = (sDerby->Bet * 1.3);
            break;
        case BET_MULTIPLIER_1_5:
            sDerby->PotentialWin = (sDerby->Bet * 1.5);
            break;
        case BET_MULTIPLIER_2_0:
            sDerby->PotentialWin = (sDerby->Bet * 2);
            break;
        case BET_MULTIPLIER_3_0:
            sDerby->PotentialWin = (sDerby->Bet * 3);
            break;
        case BET_MULTIPLIER_JACKPOT:
            if (sDerby->Bet > 0)
                sDerby->PotentialWin = 9999;
            else
                sDerby->PotentialWin = 0;
            break;
        }

        SetPotentialDigits(sDerby->PotentialWin);
    }
    else
    {
        PlaySE(SE_FAILURE);
    }    
}

static void AdjustByRandom(void)
{
    int i;
    u8 chance;
    
    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        chance = Random() % 55;  
        
        if (chance < 50)
        {
            float randomAdjustment = (Random() % 251) / 100.0f; 
            
            if (Random() % 2 == 0)
            {
                // Add the random value
                sDerby->racerSpeedRace[i] += randomAdjustment;
            }
            else
            {
                // Subtract the random value
                sDerby->racerSpeedRace[i] -= randomAdjustment;
            }
        }
    }

    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        chance = Random() % 65;  

        if (chance < 50)
        {
            float randomAdjustment = (Random() % 51) / 100.0f; 
            
            if (Random() % 2 == 0)
            {
                // Add the random value
                sDerby->racerSpeedStart[i] += randomAdjustment;
            }
            else
            {
                // Subtract the random value
                sDerby->racerSpeedStart[i] -= randomAdjustment;
            }
        }
    }
}

static void HandleInput2(void)
{
    if (JOY_NEW(A_BUTTON))
    {
        if (sDerby->Bet > 0)
        {
            PlaySE(SE_SHOP);
            DestroySpriteAndFreeResources(&gSprites[sDerby->P10SpriteId]);
            PlayBGM(MUS_NONE);
            SetCoins((GetCoins() - sDerby->Bet));
            SetCreditDigits(GetCoins());
            sDerby->delay = 30;
            AdjustByRandom();
            sDerby->state = DERBY_STATE_RACE_DELAY;
        }
        else
        {
            PlaySE(SE_FAILURE);
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        if (sDerby->exitToggle == 0) {
        PlaySE(SE_SELECT);
        sDerby->Bet = 0;
        sDerby->PotentialWin = 0;
        SetBetDigits(0);
        SetPotentialDigits(0);
        HideBetSprites();
        UpdateBetBG();
        sDerby->Menu = 0;
        sDerby->state = DERBY_STATE_PROCESS_INPUT;
        }
    }
    else if (JOY_NEW(DPAD_UP))
    {
        AddBet();
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        SubBet();
    }
}

static inline u32 CreatePonytaOWSprite(u32 shiny, u32 x, u32 y, u32 position)
{
    if (shiny)
        return CreateSprite(&sSpriteTemplate_Ponyta_OW_Shiny, x, y, position);
    return CreateSprite(&sSpriteTemplate_Ponyta_OW_Normal, x, y, position);
}

static inline u32 CreateRattataOWSprite(u32 shiny, u32 x, u32 y, u32 position)
{
    if (shiny)
        return CreateSprite(&sSpriteTemplate_Rattata_OW_Shiny, x, y, position);
    return CreateSprite(&sSpriteTemplate_Rattata_OW_Normal, x, y, position);
}

static inline u32 CreateRapidashOWSprite(u32 shiny, u32 x, u32 y, u32 position)
{
    if (shiny)
        return CreateSprite(&sSpriteTemplate_Rapidash_OW_Shiny, x, y, position);
    return CreateSprite(&sSpriteTemplate_Rapidash_OW_Normal, x, y, position);
}

static inline u32 CreateFeebasOWSprite(u32 shiny, u32 x, u32 y, u32 position)
{
    if (shiny)
        return CreateSprite(&sSpriteTemplate_Feebas_OW_Shiny, x, y, position);
    return CreateSprite(&sSpriteTemplate_Feebas_OW_Normal, x, y, position);
}

static inline u32 CreateDerbyMonOWSprite(u32 species, u32 shiny, u32 x, u32 yAdd, u32 position)
{
    u32 speciesY = 48;
    switch (species)
    {
    default:
        return CreatePonytaOWSprite(shiny, x, speciesY + yAdd, position);
    case DERBY_SPECIES_RATTATA:
        speciesY = 56;
        return CreateRattataOWSprite(shiny, x, speciesY + yAdd, position);
    case DERBY_SPECIES_RAPIDASH:
        return CreateRapidashOWSprite(shiny, x, speciesY + yAdd, position);
    case DERBY_SPECIES_FEEBAS:
        speciesY = 56;
        return CreateFeebasOWSprite(shiny, x, speciesY + yAdd, position);
    }
}

static void CreateRacers(void)
{
    u8 position = 11;
    u32 yAdd = 0;

    LoadSpritePalettes(sSpritePalettes);

    LoadCompressedSpriteSheet(&sSpriteSheet_Ponyta_OW);
    LoadCompressedSpriteSheet(&sSpriteSheet_Rattata_OW);
    LoadCompressedSpriteSheet(&sSpriteSheet_Rapidash_OW);
    LoadCompressedSpriteSheet(&sSpriteSheet_Feebas_OW);

    sDerby->RacerSprite1 = CreateDerbyMonOWSprite(sDerby->racerSpecies[DERBY_RACER_1], sDerby->racerShiny[DERBY_RACER_1], 224, yAdd, position);

    yAdd = yAdd + 16;
    position = position - 2;
    sDerby->RacerSprite2 = CreateDerbyMonOWSprite(sDerby->racerSpecies[DERBY_RACER_2], sDerby->racerShiny[DERBY_RACER_2], 224, yAdd, position);

    yAdd = yAdd + 16;
    position = position - 2;
    sDerby->RacerSprite3 = CreateDerbyMonOWSprite(sDerby->racerSpecies[DERBY_RACER_3], sDerby->racerShiny[DERBY_RACER_3], 224, yAdd, position);

    yAdd = yAdd + 16;
    position = position - 2;
    sDerby->RacerSprite4 = CreateDerbyMonOWSprite(sDerby->racerSpecies[DERBY_RACER_4], sDerby->racerShiny[DERBY_RACER_4], 224, yAdd, position);

    yAdd = yAdd + 16;
    position = position - 2;
    sDerby->RacerSprite5 = CreateDerbyMonOWSprite(sDerby->racerSpecies[DERBY_RACER_5], sDerby->racerShiny[DERBY_RACER_5], 224, yAdd, position);

    yAdd = yAdd + 16;
    position = position - 2;
    sDerby->RacerSprite6 = CreateDerbyMonOWSprite(sDerby->racerSpecies[DERBY_RACER_6], sDerby->racerShiny[DERBY_RACER_6], 224, yAdd, position);
}

static void CreateCursor(void)
{
    u8 y = 0;
    u8 position = 0;
    
    LoadSpritePalettes(sSpritePalettes);
    
    if (sDerby->RacerSelected == 1)
    {
        position = 10;
        y = 40;
    }
    else if (sDerby->RacerSelected == 2)
    {
        position = 8;
        y = 40 + 16;
    }
    else if (sDerby->RacerSelected == 3)
    {
        position = 6;
        y = 40 + 16 + 16;
    }
    else if (sDerby->RacerSelected == 4)
    {
        position = 4;
        y = 40 + 16 + 16 + 16;
    }
    else if (sDerby->RacerSelected == 5)
    {
        position = 2;
        y = 40 + 16 + 16 + 16 + 16;
    }
    else if (sDerby->RacerSelected == 6)
    {
        position = 0;
        y = 40 + 16 + 16 + 16 + 16 + 16;
    }
    LoadCompressedSpriteSheet(&sSpriteSheet_Cursor);
            
    sDerby->CursorSpriteId = CreateSprite(&sSpriteTemplate_Cursor, 224, y, position);
}

static void InitRacetrack(void)
{
    ResetVramOamAndBgCntRegs();
    ResetBgsAndClearDma3BusyFlags(0);
    ResetTempTileDataBuffers();
    InitBgsFromTemplates(0, sDerbyBGtemplates, ARRAY_COUNT(sDerbyBGtemplates));
    SetBgTilemapBuffer(DERBY_BG_BASE, AllocZeroed(BG_SCREEN_SIZE));
    DecompressAndLoadBgGfxUsingHeap(DERBY_BG_BASE, Derby_Race_Img, 0x1940, 0, 0);
    CopyToBgTilemapBuffer(DERBY_BG_BASE, Derby_Race_Tilemap, 0, 0);
    ResetPaletteFade();
    LoadPalette(Derby_Race_Pal, 0, sizeof(Derby_Race_Pal));
    ResetSpriteData();
    FreeAllSpritePalettes();
    LoadSpritePalettes(sSpritePalettes);
    
    CreateRacers();
    CreateCursor();
    
    CopyBgTilemapBufferToVram(DERBY_BG_BASE);
    CopyBgTilemapBufferToVram(DERBY_MENUS);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON | DISPCNT_BG2_ON);
    ShowBg(DERBY_BG_BASE);
    ShowBg(DERBY_MENUS);
}

int ScaleSpeedToInt(float speed)
{
    float originalMin = 0.0f;
    float originalMax = 13.2f;
    float newMin = 1.0f;
    float newMax = 7.0f;

    float scaledValue = (speed - originalMin) / (originalMax - originalMin) * (newMax - newMin) + newMin;

    int roundedValue = (int)(scaledValue + 0.5f);
    
    return roundedValue;
}

void AssignRacerPlacements(void)
{
    struct Racer {
        int xValue;
        int index;
    };
    
    struct Racer racers[6] = {
        {gSprites[sDerby->RacerSprite1].x, 1},
        {gSprites[sDerby->RacerSprite2].x, 2},
        {gSprites[sDerby->RacerSprite3].x, 3},
        {gSprites[sDerby->RacerSprite4].x, 4},
        {gSprites[sDerby->RacerSprite5].x, 5},
        {gSprites[sDerby->RacerSprite6].x, 6}
    };
    
    int i;
    int j;
    struct Racer temp;
    u8 places[DERBY_RACER_COUNT] = {0, 0, 0, 0, 0, 0};

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (racers[i].xValue > racers[j].xValue)
            {
                temp = racers[i];
                racers[i] = racers[j];
                racers[j] = temp;
            }
        }
    }

    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        if (i > 0 && racers[i].xValue == racers[i - 1].xValue)
            places[racers[i].index - 1] = places[racers[i - 1].index - 1];
        else
            places[racers[i].index - 1] = i == 0 ? 2 : (i == 1 ? 1 : 0);
    }

    sDerby->place1 = places[0];  
    sDerby->place2 = places[1];  
    sDerby->place3 = places[2];  
    sDerby->place4 = places[3];  
    sDerby->place5 = places[4];  
    sDerby->place6 = places[5];  
}

static void DerbyMain(u8 taskId)
{
    switch (sDerby->state)
    {
    case DERBY_STATE_INIT:
        if (!gPaletteFade.active)
            sDerby->state = DERBY_STATE_PROCESS_INPUT;
        break;
    case DERBY_STATE_PROCESS_INPUT:
        HandleInput();
        break;
    case DERBY_STATE_BET_2_START:
        UpdateBetBG();
        HideBetSprites();
        sDerby->Menu = 1;
        sDerby->RacerSelected = sDerby->MenuPosition + 1;
        sDerby->state = DERBY_STATE_BET_2;
        break;
    case DERBY_STATE_BET_2:
        HandleInput2();
        break;
    case DERBY_STATE_RACE_DELAY:
        if (sDerby->delay != 0)
        {
            sDerby->delay--;
        }
        else
        {
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            sDerby->state = DERBY_STATE_START_FADE;
        }
        break;
    case DERBY_STATE_START_FADE:
        if (!gPaletteFade.active)
        {
            PlayBGM(MUS_RG_CYCLING);
            InitRacetrack();
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
            sDerby->state = DERBY_STATE_FADEIN;
        }
        break;
    case DERBY_STATE_FADEIN:    
        if (!gPaletteFade.active)
        {
            sDerby->delay = 30;
            sDerby->state = DERBY_STATE_DELAY_2;
        }
        break;
    case DERBY_STATE_DELAY_2:    
        if (sDerby->delay != 0)
        {
            sDerby->delay--;
        }
        else
        {
            sDerby->delay = 60;
            sDerby->Timer = 3;
            sDerby->Swap1 = 1;
            sDerby->Swap2 = 0;
            sDerby->CountdownX = 120;
            sDerby->CountdownY = 76;
            PlaySE(SE_CONTEST_PLACE); // 3

            LoadCompressedSpriteSheet(&sSpriteSheet_Countdown_3);
            sDerby->CountdownSpriteId = CreateSprite(&sSpriteTemplate_Countdown_3, sDerby->CountdownX, sDerby->CountdownY, 0);

            sDerby->state = DERBY_STATE_COUNTDOWN;
        }
        break;
    case DERBY_STATE_COUNTDOWN:
        if ((sDerby->Timer > 0) && (sDerby->Swap1 == 1) && (sDerby->Swap2 == 0))
        {
            if (sDerby->delay > 0)
            {
                sDerby->delay--;
            }
            else if (sDerby->delay == 0)
            {
                sDerby->Timer--; // 2
                sDerby->Swap2 = 1;
            }
        }
        else if ((sDerby->Timer > 0) && (sDerby->Swap1 > 0) && (sDerby->Swap2 > 0))
        {
            PlaySE(SE_CONTEST_PLACE); // 2

            DestroySpriteAndFreeResources(&gSprites[sDerby->CountdownSpriteId]);
            LoadSpritePalettes(sSpritePalettes);
            LoadCompressedSpriteSheet(&sSpriteSheet_Countdown_2);

            sDerby->CountdownSpriteId = CreateSprite(&sSpriteTemplate_Countdown_2, sDerby->CountdownX, sDerby->CountdownY, 0);

            sDerby->delay = 60;
            sDerby->Swap1 = 0;
            sDerby->Swap2 = 0;
        }
        else if ((sDerby->Timer > 0) && (sDerby->Swap1 == 0) && (sDerby->Swap2 == 0))
        {
            if (sDerby->delay > 0)
            {
                sDerby->delay--;
            }
            else if (sDerby->delay == 0)
            {
                sDerby->Timer--; // 1
                sDerby->Swap2 = 1;
            }
        }
        else if ((sDerby->Timer > 0) && (sDerby->Swap1 == 0) && (sDerby->Swap2 == 1))
        {
            PlaySE(SE_CONTEST_PLACE); // 1

            DestroySpriteAndFreeResources(&gSprites[sDerby->CountdownSpriteId]);
            LoadSpritePalettes(sSpritePalettes);
            LoadCompressedSpriteSheet(&sSpriteSheet_Countdown_1);

            sDerby->CountdownSpriteId = CreateSprite(&sSpriteTemplate_Countdown_1, sDerby->CountdownX, sDerby->CountdownY, 0);

            sDerby->delay = 60;
            sDerby->Swap1 = 2;
            sDerby->Swap2 = 0;
        }
        else if ((sDerby->Timer > 0) && (sDerby->Swap1 == 2) && (sDerby->Swap2 == 0))
        {
            if (sDerby->delay > 0)
            {
                sDerby->delay--;
            }
            else if (sDerby->delay == 0)
            {
                sDerby->Timer--; // 1
                sDerby->Swap2 = 3;
            }
        }
        else if (sDerby->Timer == 0)
        {
            if ((sDerby->Swap2 == 3) && (sDerby->delay == 0))
            {
                PlaySE(SE_EXP_MAX);
                
                DestroySpriteAndFreeResources(&gSprites[sDerby->CountdownSpriteId]);
                LoadSpritePalettes(sSpritePalettes);
                LoadCompressedSpriteSheet(&sSpriteSheet_Go);
                
                sDerby->CountdownSpriteId = CreateSprite(&sSpriteTemplate_Go, sDerby->CountdownX, sDerby->CountdownY, 0);
                
                sDerby->Swap2 = 4;
                sDerby->delay = 60;
                
            }
            else if (sDerby->delay > 0)
            {
                sDerby->delay--;
            }
            else if (sDerby->delay == 0)
            {
                DestroySpriteAndFreeResources(&gSprites[sDerby->CountdownSpriteId]);
                if (sDerby->racerSpecies[DERBY_RACER_1] != DERBY_SPECIES_FEEBAS)
                {
                    gSprites[sDerby->RacerSprite1].animNum = 1;
                }
                if (sDerby->racerSpecies[DERBY_RACER_2] != DERBY_SPECIES_FEEBAS)
                {
                    gSprites[sDerby->RacerSprite2].animNum = 1;
                }
                if (sDerby->racerSpecies[DERBY_RACER_3] != DERBY_SPECIES_FEEBAS)
                {
                    gSprites[sDerby->RacerSprite3].animNum = 1;
                }
                if (sDerby->racerSpecies[DERBY_RACER_4] != DERBY_SPECIES_FEEBAS)
                {
                    gSprites[sDerby->RacerSprite4].animNum = 1;
                }
                if (sDerby->racerSpecies[DERBY_RACER_5] != DERBY_SPECIES_FEEBAS)
                {
                    gSprites[sDerby->RacerSprite5].animNum = 1;
                }
                if (sDerby->racerSpecies[DERBY_RACER_6] != DERBY_SPECIES_FEEBAS)
                {
                    gSprites[sDerby->RacerSprite6].animNum = 1;
                }
                sDerby->frames = 3;
                sDerby->delay = 15;
                sDerby->state = DERBY_STATE_RACE_START;
            }
        }
        break;
    case DERBY_STATE_RACE_START:
        if (sDerby->frames == 0)
        {
            if (sDerby->racerSpecies[DERBY_RACER_1] != DERBY_SPECIES_FEEBAS)
            {
                gSprites[sDerby->RacerSprite1].x = gSprites[sDerby->RacerSprite1].x - (sDerby->racerSpeedStart[DERBY_RACER_1] / 2);
            }
            if (sDerby->racerSpecies[DERBY_RACER_2] != DERBY_SPECIES_FEEBAS)
            {
                gSprites[sDerby->RacerSprite2].x = gSprites[sDerby->RacerSprite2].x - (sDerby->racerSpeedStart[DERBY_RACER_2] / 2);
            }
            if (sDerby->racerSpecies[DERBY_RACER_3] != DERBY_SPECIES_FEEBAS)
            {
                gSprites[sDerby->RacerSprite3].x = gSprites[sDerby->RacerSprite3].x - (sDerby->racerSpeedStart[DERBY_RACER_3] / 2);
            }
            if (sDerby->racerSpecies[DERBY_RACER_4] != DERBY_SPECIES_FEEBAS)
            {
                gSprites[sDerby->RacerSprite4].x = gSprites[sDerby->RacerSprite4].x - (sDerby->racerSpeedStart[DERBY_RACER_4] / 2);
            }
            if (sDerby->racerSpecies[DERBY_RACER_5] != DERBY_SPECIES_FEEBAS)
            {
                gSprites[sDerby->RacerSprite5].x = gSprites[sDerby->RacerSprite5].x - (sDerby->racerSpeedStart[DERBY_RACER_5] / 2);
            }
            if (sDerby->racerSpecies[DERBY_RACER_6] != DERBY_SPECIES_FEEBAS)
            {
                gSprites[sDerby->RacerSprite6].x = gSprites[sDerby->RacerSprite6].x - (sDerby->racerSpeedStart[DERBY_RACER_6] / 2);
            }
            
            if (sDerby->RacerSelected == 1)
            {
                gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite1].x;
            }
            else if (sDerby->RacerSelected == 2)
            {
                gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite2].x;
            }
            else if (sDerby->RacerSelected == 3)
            {
                gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite3].x;
            }
            else if (sDerby->RacerSelected == 4)
            {
                gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite4].x;
            }
            else if (sDerby->RacerSelected == 5)
            {
                gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite5].x;
            }
            else if (sDerby->RacerSelected == 6)
            {
                gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite6].x;
            }
            
            sDerby->frames = 3;
            sDerby->delay--;
        }
        else if (sDerby->delay == 0)
        {
            sDerby->state = DERBY_STATE_RACE_MID;
        }
        sDerby->frames--;
        break;
    case DERBY_STATE_RACE_MID:
        if ((gSprites[sDerby->RacerSprite1].x > 16) &&
            (gSprites[sDerby->RacerSprite2].x > 16) &&
            (gSprites[sDerby->RacerSprite3].x > 16) &&
            (gSprites[sDerby->RacerSprite4].x > 16) &&
            (gSprites[sDerby->RacerSprite5].x > 16) &&
            (gSprites[sDerby->RacerSprite6].x > 16))
            {
                if (sDerby->frames == 0)
                {
                    if (sDerby->racerSpecies[DERBY_RACER_1] != DERBY_SPECIES_FEEBAS)
                    {
                        gSprites[sDerby->RacerSprite1].x = gSprites[sDerby->RacerSprite1].x - (sDerby->racerSpeedRace[DERBY_RACER_1] / 2);
                    }
                    if (sDerby->racerSpecies[DERBY_RACER_2] != DERBY_SPECIES_FEEBAS)
                    {
                        gSprites[sDerby->RacerSprite2].x = gSprites[sDerby->RacerSprite2].x - (sDerby->racerSpeedRace[DERBY_RACER_2] / 2);
                    }
                    if (sDerby->racerSpecies[DERBY_RACER_3] != DERBY_SPECIES_FEEBAS)
                    {
                        gSprites[sDerby->RacerSprite3].x = gSprites[sDerby->RacerSprite3].x - (sDerby->racerSpeedRace[DERBY_RACER_3] / 2);
                    }
                    if (sDerby->racerSpecies[DERBY_RACER_4] != DERBY_SPECIES_FEEBAS)
                    {
                        gSprites[sDerby->RacerSprite4].x = gSprites[sDerby->RacerSprite4].x - (sDerby->racerSpeedRace[DERBY_RACER_4] / 2);
                    }
                    if (sDerby->racerSpecies[DERBY_RACER_5] != DERBY_SPECIES_FEEBAS)
                    {
                        gSprites[sDerby->RacerSprite5].x = gSprites[sDerby->RacerSprite5].x - (sDerby->racerSpeedRace[DERBY_RACER_5] / 2);
                    }
                    if (sDerby->racerSpecies[DERBY_RACER_6] != DERBY_SPECIES_FEEBAS)
                    {
                        gSprites[sDerby->RacerSprite6].x = gSprites[sDerby->RacerSprite6].x - (sDerby->racerSpeedRace[DERBY_RACER_6] / 2);
                    }
                    
                    if (sDerby->RacerSelected == 1)
                    {
                        gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite1].x;
                    }
                    else if (sDerby->RacerSelected == 2)
                    {
                        gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite2].x;
                    }
                    else if (sDerby->RacerSelected == 3)
                    {
                        gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite3].x;
                    }
                    else if (sDerby->RacerSelected == 4)
                    {
                        gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite4].x;
                    }
                    else if (sDerby->RacerSelected == 5)
                    {
                        gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite5].x;
                    }
                    else if (sDerby->RacerSelected == 6)
                    {
                        gSprites[sDerby->CursorSpriteId].x = gSprites[sDerby->RacerSprite6].x;
                    }
                    
                    sDerby->frames = 3;
                }
                sDerby->frames--;
            }
            else
            {
                PlayBGM(MUS_NONE);
                AssignRacerPlacements();
                if (sDerby->RacerSelected == 1)
                {
                    if (sDerby->place1 == 2) // Win
                        VarSet(GAME_CORNER_VAR_WINNINGS, sDerby->PotentialWin);
                    else
                        VarSet(GAME_CORNER_VAR_WINNINGS, 0);
                }
                else if (sDerby->RacerSelected == 2)
                {
                    if (sDerby->place2 == 2) // Win
                        VarSet(GAME_CORNER_VAR_WINNINGS, sDerby->PotentialWin);
                    else
                        VarSet(GAME_CORNER_VAR_WINNINGS, 0);
                }
                else if (sDerby->RacerSelected == 3)
                {
                    if (sDerby->place3 == 2) // Win
                        VarSet(GAME_CORNER_VAR_WINNINGS, sDerby->PotentialWin);
                    else
                        VarSet(GAME_CORNER_VAR_WINNINGS, 0);
                }
                else if (sDerby->RacerSelected == 4)
                {
                    if (sDerby->place4 == 2) // Win
                        VarSet(GAME_CORNER_VAR_WINNINGS, sDerby->PotentialWin);
                    else
                        VarSet(GAME_CORNER_VAR_WINNINGS, 0);
                }
                else if (sDerby->RacerSelected == 5)
                {
                    if (sDerby->place5 == 2) // Win
                        VarSet(GAME_CORNER_VAR_WINNINGS, sDerby->PotentialWin);
                    else
                        VarSet(GAME_CORNER_VAR_WINNINGS, 0);
                }
                else if (sDerby->RacerSelected == 6)
                {
                    if (sDerby->place6 == 2) // Win
                        VarSet(GAME_CORNER_VAR_WINNINGS, sDerby->PotentialWin);
                    else
                        VarSet(GAME_CORNER_VAR_WINNINGS, 0);
                }
                PlaySE(SE_APPLAUSE);
                
                LoadSpritePalettes(sSpritePalettes2);
                LoadCompressedSpriteSheet(&sSpriteSheet_Clefairy);
                
                sDerby->ClefSpriteId = CreateSprite(&sSpriteTemplate_Clefairy, sDerby->CountdownX, sDerby->CountdownY, 0);
                FlagClear(DERBY_FLAG_RESET);
                FlagClear(DERBY_FLAG_NICKNAME);
                sDerby->delay = 120;
                sDerby->state = DERBY_STATE_FINAL_DELAY;
            }
        break;
    case DERBY_STATE_FINAL_DELAY:
        if (sDerby->delay == 0)
        {
            sDerby->state = DERBY_STATE_START_EXIT;
        }
        else
        {
            sDerby->delay--;
        }
        break;
    case DERBY_STATE_START_EXIT:
        StartExitDerby();
        break;
    case DERBY_STATE_EXIT:
        ExitDerby();
        break;
    }
}

static void InitDerbyScreen(void)
{    
    int i;

    SetVBlankCallback(NULL);
    ResetAllBgsCoordinates();
    ResetVramOamAndBgCntRegs();
    ResetBgsAndClearDma3BusyFlags(0);
    ResetTempTileDataBuffers();
    InitBgsFromTemplates(0, sDerbyBGtemplates, ARRAY_COUNT(sDerbyBGtemplates));
    SetBgTilemapBuffer(DERBY_BG_BASE, AllocZeroed(BG_SCREEN_SIZE));
    DecompressAndLoadBgGfxUsingHeap(DERBY_BG_BASE, Derby_BG_Bet_Img, 0x1940, 0, 0);
    CopyToBgTilemapBuffer(DERBY_BG_BASE, Derby_BG_Bet_Tilemap, 0, 0);
    ResetPaletteFade();
    LoadPalette(Derby_BG_Bet_Pal, 0, sizeof(Derby_BG_Bet_Pal));
    ResetSpriteData();
    FreeAllSpritePalettes();
    
    if (!FlagGet(DERBY_FLAG_RESET))
    {
        GetNewDerby();
    }
    InitiateRacers();
    for (i = DERBY_RACER_1; i < DERBY_RACER_COUNT; i++)
    {
        GetRacerSpeeds(sDerby->racerSpecies[i], i);
    }
    
    LoadSpritePalettes(sSpritePalettes);
    CreatePokemonSprites();
    CreateMenuData();
    CreateArrows();
    CreateCreditIcon();
    CreateCreditSprites();
    SetCreditDigits(GetCoins());
    CreateBetSprites();
    SetBetDigits(0);
    CreatePotentialSprites();
    SetPotentialDigits(0);
    
    UpdatePokemonData();
    
    CopyBgTilemapBufferToVram(DERBY_BG_BASE);
    CopyBgTilemapBufferToVram(DERBY_MENUS);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON | DISPCNT_BG2_ON);
    ShowBg(DERBY_BG_BASE);
    ShowBg(DERBY_MENUS);
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
    SetVBlankCallback(DerbyVBlankCallback);
    SetMainCallback2(DerbyMainCallback);
    CreateTask(DerbyMain, 1);
}

