#include "global.h"
#include "bg.h"
#include "coins.h"
#include "decompress.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "field_weather.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "pachinko.h"
#include "random.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "trig.h"
#include "window.h"
#include "constants/coins.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "string_util.h"
#include "constants/weather.h"
#include "constants/vars.h"

// In order to run the Pinball game, it should be launched via a normal script
// like the example below. VAR_RESULT is set to 1 if the player successfully
// completes the game, 0 otherwise.
//
// ...
// callnative PlayMeowthPinballGame
// waitstate
// ...

#define PINBALL_BG_TEXT        0
#define PINBALL_BG_COVER       1
#define PINBALL_BG_BASE        2

#define WIN_TEXT 0

#define TAG_BALL_POKEBALL              500

#define GFXTAG_PLAYER_DIGIT 8
#define GFXTAG_SPINARAK 9
#define GFXTAG_SPEED 10
#define GFXTAG_MULTIPLIER 11
#define GFXTAG_LIVES 12
#define GFXTAG_ARROW 13
#define GFXTAG_TITLE 14
#define GFXTAG_GAMEOVER 15
#define GFXTAG_WIN 16
#define GFXTAG_NEWLEVEL 17

#define PALTAG_INTERFACEPLAYER 9
#define PALTAG_SPINARAK 10
#define PALTAG_SPEED 11
#define PALTAG_MULTIPLIER 12
#define PALTAG_LIVES 13
#define PALTAG_ARROW 14
#define PALTAG_TITLE 15
#define PALTAG_GAMEOVER 16
#define PALTAG_WIN 17
#define PALTAG_NEWLEVEL 18

enum {
    SPR_PLAYER_DIG_1,
    SPR_PLAYER_DIG_10,
    SPR_PLAYER_DIG_100,
    SPR_PLAYER_DIG_1000,
};

#define SPR_PLAYER_DIGITS SPR_PLAYER_DIG_1
#define MAX_SPRITES_PLAYER 4

struct Credits {
    u8 PlayerSpriteIds[MAX_SPRITES_PLAYER];
    u8 StartSpeed;
    u8 SpinarakSpriteId;
    u8 SpeedSpriteId;
    u8 MultiplierSpriteId;
    u8 Live1SpriteId;
    u8 Live2SpriteId;
    u8 Live3SpriteId;
    u8 Live4SpriteId;
    u8 Live5SpriteId;
    u8 Lives;
    u8 Multiplier;
    u8 GameStart;
    u32 StartDelayTimer;
    u8 ArrowSpriteId;
    u8 ArrowPosition;
    u32 StartDelayMax;
    u8 ArrowDirection;
    u32 SecondDelay;
    u8 Level;
    u8 TitleSpriteId;
    u8 GameOverSpriteId;
    u8 Winnings;
    u8 WinSpriteId;
    u8 TitleDestroyed;
    u32 LevelChangeTimer;
    u8 JackpotSpriteId;
    u8 NewLevelSpriteId;
    u8 LastLevel;
    u32 TitleCounter;
};

enum
{
    PACHINKO_LEVEL_1,
    PACHINKO_LEVEL_2,
    PACHINKO_LEVEL_3,
    PACHINKO_LEVEL_4,
    PACHINKO_LEVEL_5,
    PACHINKO_LEVEL_6,
    PACHINKO_LEVEL_7,
    PACHINKO_LEVEL_8,
    PACHINKO_LEVEL_9,
    PACHINKO_LEVEL_10,
    PACHINKO_LEVEL_11,
    PACHINKO_LEVEL_12,
    PACHINKO_LEVEL_13,
    PACHINKO_LEVEL_14,
    PACHINKO_LEVEL_15,
    PACHINKO_LEVEL_16,
    PACHINKO_LEVEL_17,
    PACHINKO_LEVEL_18,
    PACHINKO_LEVEL_19,
    PACHINKO_LEVEL_20,
    PACHINKO_LEVEL_21,
    PACHINKO_LEVEL_22,
    PACHINKO_LEVEL_23,
    PACHINKO_LEVEL_COUNT,
};

enum
{
    PINBALL_STATE_INIT,
    PACHINKO_START_SCREEN,
    PINBALL_STATE_RUNNING,
    PINBALL_LOST_BALL_FADE_OUT,
    PINBALL_LOST_BALL_FADE_IN,
    PINBALL_STATE_DELAY_START_EXIT,
    PINBALL_STATE_START_EXIT,
    PINBALL_STATE_EXIT,
    PINBALL_STATE_WAIT_ANIM,
    PACHINKO_START_WIN,
    PACHINKO_WIN,
    PACHINKO_START_JACKPOT,
    PACHINKO_JACKPOT,
    PACHINKO_X2,
    PACHINKO_X3,
    PACHINKO_LEVEL_CHANGE_START,
    PACHINKO_LEVEL_FADE_OUT,
    PACHINKO_LEVEL_CHANGE,
    PACHINKO_LEVEL_FADE_IN,
};

struct Ball
{
    u8 spriteId;
    u32 xPos;
    u32 yPos;
    s16 xVelocity;
    s16 yVelocity;
    s8 spin;
    u8 rotation;
};

struct Diglett
{
    bool32 completed;
    bool8 initialized;
    u8 curInitIndex;
    u8 curUpdateIndex;
    u8 numDiglettsHit;
    u8 *collisionMap;
    u8 dugtrioSpriteId;
    u8 dugtrioState;
};

struct Tilt
{
    u8 counter;
    bool8 reset;
    bool8 pushing;
};

struct PinballGame
{
    u8 state;
    struct Ball ball;
    bool8 gravityEnabled;
    u8 stageTileWidth;
    u8 stageTileHeight;
    u16 cameraScrollX;
    u16 cameraScrollY;
    struct Diglett diglett;
    struct Tilt leftTilt;
    struct Tilt rightTilt;
    struct Tilt downTilt;
    bool8 doArtificialDownTilt;
    bool8 completed;
    u8 exitTimer;
    bool8 waitExitScene;
    MainCallback returnMainCallback;
};

struct PachinkoLevel
{
    const u16* levelTilemap;
    const u8* levelCollisionMap;
    u32 mode;
    u32 alloc;
};

static void PlayPinballGame(void);
static void FadeToPinballScreen(u8 taskId);
static void InitPinballScreen(void);
static void InitPinballGame(void);
static void LoadBgGfx(void);
static void InitBallSprite(void);
static void PinballVBlankCallback(void);
static void PinballMainCallback(void);
static void PinballMain(u8 taskId);
static void StartNewBall(void);
static void LoseBall(void);
static bool32 PlayAnotherBall(void);
static void HandleBallPhysics(void);
static void ApplyGravity(struct Ball *ball);
static void LimitVelocity(struct Ball *ball);
static void HandleTilts(struct Ball *ball);
static void HandleTilt(struct Ball *ball, struct Tilt *tilt, int xDelta, int yDelta, u32 buttonMask, bool8 artificalEnabled);
static void UpdatePosition(struct Ball *ball);
static bool32 CheckStaticCollision(struct Ball *ball, int stageTileWidth, int stageTileHeight, u8 *outCollisionNormal, u16 *outYForce);
static u8 GetCollisionAttribute(int index);
static u8 GetCollisionMaskRow(int collisionAttribute, int row);
static void HandleStaticCollisionDiglett(struct Diglett *diglett, int x, int y, u8 collisionAttribute, u16 *outYForce);
static void ApplyTiltForces(struct Ball *ball, u8 collisionNormal);
static void RotateVector(s16 *x, s16 *y, u8 angle);
static u8 ReverseBits(u8 value);
static void ApplyCollisionForces(struct Ball *ball, u16 flipperYForce, int collisionAmplification);
static void UpdateCamera(void);
static void StartExitPinballGame(void);
static void ExitPinballGame(void);
static void UpdateBallSprite(struct Sprite *sprite);

static const u8 sJackpotText[] = _("JACKPOT!\nYou won {STR_VAR_1} COINS!");
static const u8 sWinText[] = _("You won {STR_VAR_1} COINS!");
static const u8 sLoseText[] = _("Game over!");

static EWRAM_DATA struct PinballGame *sPinballGame = NULL;
static EWRAM_DATA struct Credits *sScore = NULL;

static const struct BgTemplate sPinballBgTemplates[] = {
    {
       .bg = PINBALL_BG_TEXT,
       .charBaseIndex = 0,
       .mapBaseIndex = 27,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 0,
       .baseTile = 0
   },
   {
       .bg = PINBALL_BG_COVER,
       .charBaseIndex = 1,
       .mapBaseIndex = 0x17,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 1,
       .baseTile = 0
   },
   {
       .bg = PINBALL_BG_BASE,
       .charBaseIndex = 0,
       .mapBaseIndex = 0x17,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 2,
       .baseTile = 0
   },
};

static const struct WindowTemplate sPinballWinTemplates[] = {
    { // WIN_TEXT
        .bg = PINBALL_BG_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 26,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x1,
    },
    DUMMY_WIN_TEMPLATE,
};

static const u32 sCoverBgGfx[] = INCBIN_U32("graphics/pinball/bg_cover_tiles.4bpp");
static const u16 sCoverBgPalette[] = INCBIN_U16("graphics/pinball/bg_cover_tiles.gbapal");
static const u16 sCovergTilemap[] = INCBIN_U16("graphics/pinball/bg_tilemap_cover.bin");

static const u32 sBallPokeballGfx[] = INCBIN_U32("graphics/pinball/ball_pokeball.4bpp.lz");
static const u16 sBallPokeballPalette[] = INCBIN_U16("graphics/pinball/ball_pokeball.gbapal");
static const u16 sFlipperPalette[] = INCBIN_U16("graphics/pinball/flipper.gbapal");

static const u8 sFlipperCollisionRadii[] = INCBIN_U8("data/pinball/flipper_radii.bin");
static const u8 sFlipperCollisionNormalAngles[] = INCBIN_U8("data/pinball/flipper_normal_angles.bin");

static const u32 sDiglettStageBgGfx[] = INCBIN_U32("graphics/pachinko/bgtiles.4bpp");
static const u16 sDiglettStageBgPalette[] = INCBIN_U16("graphics/pachinko/bg_indexed.gbapal");
static const u8 sDiglettStageBgCollisionMasks[] = INCBIN_U8("graphics/pinball/bg_collision_masks_diglett.1bpp");
static const u8 sDiglettStageBgCollisionMap[] = INCBIN_U8("graphics/pachinko/collisionmap.bin");

static const u32 gPlayer_Gfx[] = INCBIN_U32("graphics/pachinko/input_numbers.4bpp.lz");
static const u16 sPlayer_Pal[] = INCBIN_U16("graphics/pachinko/input_numbers.gbapal");

static const u32 SpinarakGFX[] = INCBIN_U32("graphics/pachinko/spider.4bpp.lz");
static const u16 SpinarakPAL[] = INCBIN_U16("graphics/pachinko/spider.gbapal");

static const u32 SpeedGFX[] = INCBIN_U32("graphics/pachinko/speed.4bpp.lz");
static const u16 SpeedPAL[] = INCBIN_U16("graphics/pachinko/speed.gbapal");

static const u32 MultiplierGFX[] = INCBIN_U32("graphics/pachinko/multiplier.4bpp.lz");
static const u16 MultiplierPAL[] = INCBIN_U16("graphics/pachinko/multiplier.gbapal");

static const u32 LivesGFX[] = INCBIN_U32("graphics/pachinko/lives.4bpp.lz");
static const u16 LivesPAL[] = INCBIN_U16("graphics/pachinko/lives.gbapal");

static const u32 ArrowGFX[] = INCBIN_U32("graphics/pachinko/arrow.4bpp.lz");
static const u16 ArrowPAL[] = INCBIN_U16("graphics/pachinko/arrow.gbapal");

static const u32 TitleGFX[] = INCBIN_U32("graphics/pachinko/title.4bpp.lz");
static const u16 TitlePAL[] = INCBIN_U16("graphics/pachinko/title.gbapal");

static const u32 GameOverGFX[] = INCBIN_U32("graphics/pachinko/gameover.4bpp.lz");
static const u16 GameOverPAL[] = INCBIN_U16("graphics/pachinko/gameover.gbapal");

static const u32 WinGFX[] = INCBIN_U32("graphics/pachinko/win.4bpp.lz");
static const u16 WinPAL[] = INCBIN_U16("graphics/pachinko/win.gbapal");

static const u32 NewLevelGFX[] = INCBIN_U32("graphics/pachinko/newlevel.4bpp.lz");
static const u16 NewLevelPAL[] = INCBIN_U16("graphics/pachinko/newlevel.gbapal");

// Levels

static const u16 sLevel_01_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_01.bin");
static const u8 sLevel_01_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_01.bin");

static const u16 sLevel_02_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_02.bin");
static const u8 sLevel_02_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_02.bin");

static const u16 sLevel_03_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_03.bin");
static const u8 sLevel_03_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_03.bin");

static const u16 sLevel_04_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_04.bin");
static const u8 sLevel_04_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_04.bin");

static const u16 sLevel_05_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_05.bin");
static const u8 sLevel_05_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_05.bin");

static const u16 sLevel_06_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_06.bin");
static const u8 sLevel_06_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_06.bin");

static const u16 sLevel_07_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_07.bin");
static const u8 sLevel_07_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_07.bin");

static const u16 sLevel_08_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_08.bin");
static const u8 sLevel_08_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_08.bin");

static const u16 sLevel_09_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_09.bin");
static const u8 sLevel_09_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_09.bin");

static const u16 sLevel_10_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_10.bin");
static const u8 sLevel_10_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_10.bin");

static const u16 sLevel_11_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_11.bin");
static const u8 sLevel_11_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_11.bin");

static const u16 sLevel_12_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_12.bin");
static const u8 sLevel_12_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_12.bin");

static const u16 sLevel_13_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_13.bin");
static const u8 sLevel_13_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_13.bin");

static const u16 sLevel_14_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_14.bin");
static const u8 sLevel_14_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_14.bin");

static const u16 sLevel_15_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_15.bin");
static const u8 sLevel_15_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_15.bin");

static const u16 sLevel_16_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_16.bin");
static const u8 sLevel_16_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_16.bin");

static const u16 sLevel_17_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_17.bin");
static const u8 sLevel_17_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_17.bin");

static const u16 sLevel_18_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_18.bin");
static const u8 sLevel_18_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_18.bin");

static const u16 sLevel_19_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_19.bin");
static const u8 sLevel_19_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_19.bin");

static const u16 sLevel_20_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_20.bin");
static const u8 sLevel_20_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_20.bin");

static const u16 sLevel_21_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_21.bin");
static const u8 sLevel_21_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_21.bin");

static const u16 sLevel_22_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_22.bin");
static const u8 sLevel_22_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_22.bin");

static const u16 sLevel_23_BgTilemap[] = INCBIN_U16("graphics/pachinko/LevelTilemaps/Level_23.bin");
static const u8 sLevel_23_BgCollisionMap[] = INCBIN_U8("graphics/pachinko/LevelCollision/Level_23.bin");

static const struct SpritePalette sSpritePalettes2[] =
{
    { .data = sPlayer_Pal,               .tag = PALTAG_INTERFACEPLAYER },    
    { .data = SpinarakPAL,                .tag = PALTAG_SPINARAK },
    { .data = SpeedPAL,                   .tag = PALTAG_SPEED },
    { .data = MultiplierPAL,           .tag = PALTAG_MULTIPLIER },
    { .data = LivesPAL,                   .tag = PALTAG_LIVES },
    { .data = ArrowPAL,                   .tag = PALTAG_ARROW },
    { .data = TitlePAL,                   .tag = PALTAG_TITLE },
    { .data = GameOverPAL,               .tag = PALTAG_GAMEOVER },
    { .data = WinPAL,                   .tag = PALTAG_WIN },
    { .data = NewLevelPAL,               .tag = PALTAG_NEWLEVEL },
    {}
};

static const struct CompressedSpriteSheet sSpriteSheet_NewLevel =
{
    .data = NewLevelGFX,
    .size = 0x1000,
    .tag = GFXTAG_NEWLEVEL,
};

static const struct OamData sOamData_NewLevel =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x32),
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 0,
};

static const union AnimCmd sNewLevelAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 15),   // Frame 0 for 30 ticks
    ANIMCMD_FRAME(32, 15),  // Frame 1 for 30 ticks
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd *const sNewLevelAnimCmds[] = {
    sNewLevelAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_NewLevel =
{
    .tileTag = GFXTAG_NEWLEVEL,
    .paletteTag = PALTAG_NEWLEVEL,
    .oam = &sOamData_NewLevel,
    .anims = sNewLevelAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Win =
{
    .data = WinGFX,
    .size = 0x1000,
    .tag = GFXTAG_WIN,
};

static const struct OamData sOamData_Win =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
};

static const union AnimCmd sWinAnimCmd_0[] = 
{
    ANIMCMD_FRAME(64, 15),   // Frame 0 for 30 ticks
    ANIMCMD_FRAME(0, 15),  // Frame 1 for 30 ticks
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd *const sWinAnimCmds[] = {
    sWinAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_Win =
{
    .tileTag = GFXTAG_WIN,
    .paletteTag = PALTAG_WIN,
    .oam = &sOamData_Win,
    .anims = sWinAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_GameOver =
{
    .data = GameOverGFX,
    .size = 0x800,
    .tag = GFXTAG_GAMEOVER,
};

static const struct OamData sOamData_GameOver =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct SpriteTemplate sSpriteTemplate_GameOver =
{
    .tileTag = GFXTAG_GAMEOVER,
    .paletteTag = PALTAG_GAMEOVER,
    .oam = &sOamData_GameOver,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Title =
{
    .data = TitleGFX,
    .size = 0x800,
    .tag = GFXTAG_TITLE,
};

static const struct OamData sOamData_Title =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct SpriteTemplate sSpriteTemplate_Title =
{
    .tileTag = GFXTAG_TITLE,
    .paletteTag = PALTAG_TITLE,
    .oam = &sOamData_Title,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Arrow =
{
    .data = ArrowGFX,
    .size = 0x80,
    .tag = GFXTAG_ARROW,
};

static const struct OamData sOamData_Arrow =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 0,
};

static const struct SpriteTemplate sSpriteTemplate_Arrow =
{
    .tileTag = GFXTAG_ARROW,
    .paletteTag = PALTAG_ARROW,
    .oam = &sOamData_Arrow,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Lives =
{
    .data = LivesGFX,
    .size = 0x40,
    .tag = GFXTAG_LIVES,
};

static const struct OamData sOamData_Lives =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(8x8),
    .size = SPRITE_SIZE(8x8),
    .tileNum = 0,
    .priority = 0,
};

static const struct SpriteTemplate sSpriteTemplate_Lives =
{
    .tileTag = GFXTAG_LIVES,
    .paletteTag = PALTAG_LIVES,
    .oam = &sOamData_Lives,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Multiplier =
{
    .data = MultiplierGFX,
    .size = 0x800,
    .tag = GFXTAG_MULTIPLIER,
};

static const struct OamData sOamData_Multiplier =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x16),
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 0,
};

static const union AnimCmd sMultiplierAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 10),   // Frame 0 for 30 ticks
    ANIMCMD_FRAME(8, 10),  // Frame 1 for 30 ticks
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd sMultiplierAnimCmd_1[] = 
{
    ANIMCMD_FRAME(16, 10),   // Frame 0 for 30 ticks
    ANIMCMD_FRAME(24, 10),  // Frame 1 for 30 ticks
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd sMultiplierAnimCmd_2[] = 
{
    ANIMCMD_FRAME(32, 10),   // Frame 0 for 30 ticks
    ANIMCMD_FRAME(40, 10),  // Frame 1 for 30 ticks
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd *const sMultiplierAnimCmds[] = {
    sMultiplierAnimCmd_0,  // Looping animation
    sMultiplierAnimCmd_1,
    sMultiplierAnimCmd_2,
};

static const struct SpriteTemplate sSpriteTemplate_Multiplier =
{
    .tileTag = GFXTAG_MULTIPLIER,
    .paletteTag = PALTAG_MULTIPLIER,
    .oam = &sOamData_Multiplier,
    .anims = sMultiplierAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Speed =
{
    .data = SpeedGFX,
    .size = 0x1000,
    .tag = GFXTAG_SPEED,
};

static const struct OamData sOamData_Speed =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x16),
    .size = SPRITE_SIZE(64x16),
    .tileNum = 0,
    .priority = 0,
};

static const struct SpriteTemplate sSpriteTemplate_Speed =
{
    .tileTag = GFXTAG_SPEED,
    .paletteTag = PALTAG_SPEED,
    .oam = &sOamData_Speed,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct CompressedSpriteSheet sSpriteSheet_Spinarak =
{
    .data = SpinarakGFX,
    .size = 0x3000,
    .tag = GFXTAG_SPINARAK,
};

static const struct OamData sOamData_Spinarak =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
};

static const union AnimCmd sSpinarakAnimCmd_0[] = 
{
    ANIMCMD_FRAME(0, 30),   // Frame 0 for 30 ticks
    ANIMCMD_FRAME(64, 30),  // Frame 1 for 30 ticks
    ANIMCMD_FRAME(0, 30),   // Frame 0 for 30 ticks
    ANIMCMD_FRAME(64, 30),  // Frame 1 for 30 ticks
    ANIMCMD_FRAME(0, 30),   // Frame 0 for 30 ticks
    ANIMCMD_FRAME(64, 30),  // Frame 1 for 30 ticks
    ANIMCMD_FRAME(128, 15), // Frame 2 for 15 ticks
    ANIMCMD_FRAME(0, 15),   // Frame 0 for 15 ticks
    ANIMCMD_FRAME(64, 30),  // Frame 1 for 30 ticks
    ANIMCMD_FRAME(0, 30),   // Frame 0 for 30 ticks
    ANIMCMD_FRAME(64, 30),  // Frame 1 for 30 ticks
    ANIMCMD_FRAME(0, 30),   // Frame 0 for 30 ticks
    ANIMCMD_FRAME(64, 30),  // Frame 1 for 30 ticks
    ANIMCMD_FRAME(192, 15), // Frame 3 for 15 ticks
    ANIMCMD_FRAME(256, 10), // Frame 4 for 15 ticks
    ANIMCMD_FRAME(320, 10), // Frame 5 for 15 ticks
    ANIMCMD_FRAME(256, 10), // Frame 4 for 15 ticks
    ANIMCMD_FRAME(192, 15), // Frame 3 for 15 ticks
    ANIMCMD_JUMP(0)         // Loop back to the first frame (Frame 0)
};

static const union AnimCmd *const sSpinarakAnimCmds[] = {
    sSpinarakAnimCmd_0,  // Looping animation
};

static const struct SpriteTemplate sSpriteTemplate_Spinarak =
{
    .tileTag = GFXTAG_SPINARAK,
    .paletteTag = PALTAG_SPINARAK,
    .oam = &sOamData_Spinarak,
    .anims = sSpinarakAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
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

static const struct OamData sOam_CreditDigit =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(8x16),
    .size = SPRITE_SIZE(8x16),
    .priority = 2,
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

static const struct CompressedSpriteSheet sBallPokeballSpriteSheet = {
    .data = sBallPokeballGfx,
    .size = 0x400,
    .tag = TAG_BALL_POKEBALL,
};

static const struct SpritePalette sPinballSpritePalette = { sBallPokeballPalette, TAG_BALL_POKEBALL };

static const struct OamData sBallOamData = {
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = 0,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 0,
    .affineParam = 0,
};

#define BALL_FRAME_ANIMCMD(n) \
static const union AnimCmd sBallAnimCmd_##n[] =\
{\
    ANIMCMD_FRAME((n) * 4, 0),\
    ANIMCMD_END,\
};

BALL_FRAME_ANIMCMD(0)
BALL_FRAME_ANIMCMD(1)
BALL_FRAME_ANIMCMD(2)
BALL_FRAME_ANIMCMD(3)
BALL_FRAME_ANIMCMD(4)
BALL_FRAME_ANIMCMD(5)
BALL_FRAME_ANIMCMD(6)
BALL_FRAME_ANIMCMD(7)

static const union AnimCmd *const sBallAnimCmds[] = {
    sBallAnimCmd_0,
    sBallAnimCmd_1,
    sBallAnimCmd_2,
    sBallAnimCmd_3,
    sBallAnimCmd_4,
    sBallAnimCmd_5,
    sBallAnimCmd_6,
    sBallAnimCmd_7,
};

static const struct SpriteTemplate sBallPokeballSpriteTemplate = {
    .tileTag = TAG_BALL_POKEBALL,
    .paletteTag = TAG_BALL_POKEBALL,
    .oam = &sBallOamData,
    .anims = sBallAnimCmds,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateBallSprite,
};

static const s8 sCollisionTestPointOffsets[][2] = {
    {  4,  0 },
    {  4,  1 },
    {  3,  3 },
    {  1,  4 },
    {  0,  4 },
    { -1,  4 },
    { -3,  3 },
    { -4,  1 },
    { -4,  0 },
    { -4, -1 },
    { -3, -3 },
    { -1, -4 },
    {  0, -4 },
    {  1, -4 },
    {  3, -3 },
    {  4, -1 },
};

// This array is indexed by the start and end indexes of the 16 collision point tests.
// The values here are on a 256-degree'd unit circle, where an angle of 0x00 is pointing
// directly up, 0x40 is pointing directly right, 0x80 is pointing directly down, and
// 0xC0 is pointing directly left.
static const u8 sCollisionNormals[256] = {
    0xC0, 0xC5, 0xD0, 0xDB, 0xE0, 0xE5, 0xF0, 0xFB, 0x00, 0x05, 0x10, 0x1B, 0x20, 0x25, 0x30, 0x3B, // 0x0X
    0x45, 0xCA, 0xD5, 0xE0, 0xE5, 0xEA, 0xF5, 0x00, 0x05, 0x0A, 0x15, 0x20, 0x25, 0x2A, 0x35, 0x40, // 0x1X
    0x50, 0x55, 0xE0, 0xEB, 0xF0, 0xF5, 0x00, 0x0B, 0x10, 0x15, 0x20, 0x2B, 0x30, 0x35, 0x40, 0x4B, // 0x2X
    0x5B, 0x60, 0x6B, 0xF6, 0xFB, 0x00, 0x0B, 0x16, 0x1B, 0x20, 0x2B, 0x36, 0x3B, 0x40, 0x4B, 0x56, // 0x3X
    0x60, 0x65, 0x70, 0x7B, 0x00, 0x05, 0x10, 0x1B, 0x20, 0x25, 0x30, 0x3B, 0x40, 0x45, 0x50, 0x5B, // 0x4X
    0x65, 0x6A, 0x75, 0x80, 0x85, 0x0A, 0x15, 0x20, 0x25, 0x2A, 0x35, 0x40, 0x45, 0x4A, 0x55, 0x60, // 0x5X
    0x70, 0x75, 0x80, 0x8B, 0x90, 0x95, 0x20, 0x2B, 0x30, 0x35, 0x40, 0x4B, 0x50, 0x55, 0x60, 0x6B, // 0x6X
    0x7B, 0x80, 0x8B, 0x96, 0x9B, 0xA0, 0xAB, 0x36, 0x3B, 0x40, 0x4B, 0x56, 0x5B, 0x60, 0x6B, 0x76, // 0x7X
    0x80, 0x85, 0x90, 0x9B, 0xA0, 0xA5, 0xB0, 0xBB, 0x40, 0x45, 0x50, 0x5B, 0x60, 0x65, 0x70, 0x7B, // 0x8X
    0x85, 0x8A, 0x95, 0xA0, 0xA5, 0xAA, 0xB5, 0xC0, 0xC5, 0x4A, 0x55, 0x60, 0x65, 0x6A, 0x75, 0x80, // 0x9X
    0x90, 0x95, 0xA0, 0xAB, 0xB0, 0xB5, 0xC0, 0xCB, 0xD0, 0xD5, 0x60, 0x6B, 0x70, 0x75, 0x80, 0x8B, // 0xAX
    0x9B, 0xA0, 0xAB, 0xB6, 0xBB, 0xC0, 0xCB, 0xD6, 0xDB, 0xE0, 0xEB, 0x76, 0x7B, 0x80, 0x8B, 0x96, // 0xBX
    0xA0, 0xA5, 0xB0, 0xBB, 0xC0, 0xC5, 0xD0, 0xDB, 0xE0, 0xE5, 0xF0, 0xFB, 0x80, 0x85, 0x90, 0x9B, // 0xCX
    0xA5, 0xAA, 0xB5, 0xC0, 0xC5, 0xCA, 0xD5, 0xE0, 0xE5, 0xEA, 0xF5, 0x00, 0x05, 0x8A, 0x95, 0xA0, // 0xDX
    0xB0, 0xB5, 0xC0, 0xCB, 0xD0, 0xD5, 0xE0, 0xEB, 0xF0, 0xF5, 0x00, 0x0B, 0x10, 0x15, 0xA0, 0xAB, // 0xEX
    0xBB, 0xC0, 0xCB, 0xD6, 0xDB, 0xE0, 0xEB, 0xF6, 0xFB, 0x00, 0x0B, 0x16, 0x1B, 0x20, 0x2B, 0xB6, // 0xFX
};

// This array is indexed by the start and end indexes of the 16 collision point tests.
// It is used to move the ball out of the the wall it's colliding with.
static const u16 sCollisionXDeltas[256] = {
    0xFF00, 0xFEFB, 0xFECC, 0xFE8C, 0xFE77, 0xFE71, 0xFEAD, 0xFF73, 0x0000, 0x00AC, 0x027F, 0x0497, 0x0589, 0x066D, 0x0808, 0x08E7, // 0x0X
    0x08E7, 0xFF08, 0xFF01, 0xFEE4, 0xFEDE, 0xFEE3, 0xFF32, 0x0000, 0x008D, 0x0137, 0x02FD, 0x04FD, 0x05E1, 0x06B6, 0x082C, 0x08E1, // 0x1X
    0x0808, 0x07B4, 0xFF4B, 0xFF70, 0xFF81, 0xFF99, 0x0000, 0x00CE, 0x0153, 0x01F0, 0x0389, 0x0547, 0x0608, 0x06B8, 0x07D4, 0x082C, // 0x2X
    0x066D, 0x05F6, 0x045D, 0xFFC2, 0xFFE0, 0x0000, 0x0067, 0x011D, 0x018F, 0x0214, 0x036C, 0x04D9, 0x0572, 0x05F8, 0x06B8, 0x06B6, // 0x3X
    0x0589, 0x0504, 0x0353, 0x0119, 0x0000, 0x0020, 0x007F, 0x0122, 0x0189, 0x0200, 0x0334, 0x0479, 0x04FF, 0x0572, 0x0608, 0x05E1, // 0x4X
    0x0497, 0x0406, 0x0243, 0x0000, 0xFEE7, 0x003E, 0x0090, 0x011C, 0x0174, 0x01DC, 0x02EB, 0x0407, 0x0479, 0x04D9, 0x0547, 0x04FD, // 0x5X
    0x027F, 0x01DC, 0x0000, 0xFDBD, 0xFCAD, 0xFBA3, 0x00B5, 0x00FF, 0x0134, 0x0176, 0x022B, 0x02EB, 0x0334, 0x036C, 0x0389, 0x02FD, // 0x6X
    0x00AC, 0x0000, 0xFE24, 0xFBFA, 0xFAFC, 0xFA0A, 0xF84C, 0x00F8, 0x0105, 0x011E, 0x0176, 0x01DC, 0x0200, 0x0214, 0x01F0, 0x0137, // 0x7X
    0x0000, 0xFF54, 0xFD81, 0xFB69, 0xFA77, 0xF993, 0xF7F8, 0xF719, 0x0100, 0x0105, 0x0134, 0x0174, 0x0189, 0x018F, 0x0153, 0x008D, // 0x8X
    0xFF73, 0xFEC9, 0xFD03, 0xFB03, 0xFA1F, 0xF94A, 0xF7D4, 0xF71F, 0xF719, 0x00F8, 0x00FF, 0x011C, 0x0122, 0x011D, 0x00CE, 0x0000, // 0x9X
    0xFEAD, 0xFE10, 0xFC77, 0xFAB9, 0xF9F8, 0xF948, 0xF82C, 0xF7D4, 0xF7F8, 0xF84C, 0x00B5, 0x0090, 0x007F, 0x0067, 0x0000, 0xFF32, // 0xAX
    0xFE71, 0xFDEC, 0xFC94, 0xFB27, 0xFA8E, 0xFA08, 0xF948, 0xF94A, 0xF993, 0xFA0A, 0xFBA3, 0x003E, 0x0020, 0x0000, 0xFF99, 0xFEE3, // 0xBX
    0xFE77, 0xFE00, 0xFCCC, 0xFB87, 0xFB01, 0xFA8E, 0xF9F8, 0xFA1F, 0xFA77, 0xFAFC, 0xFCAD, 0xFEE7, 0x0000, 0xFFE0, 0xFF81, 0xFEDE, // 0xCX
    0xFE8C, 0xFE24, 0xFD15, 0xFBF9, 0xFB87, 0xFB27, 0xFAB9, 0xFB03, 0xFB69, 0xFBFA, 0xFDBD, 0x0000, 0x0119, 0xFFC2, 0xFF70, 0xFEE4, // 0xDX
    0xFECC, 0xFE8A, 0xFDD5, 0xFD15, 0xFCCC, 0xFC94, 0xFC77, 0xFD03, 0xFD81, 0xFE24, 0x0000, 0x0243, 0x0353, 0x045D, 0xFF4B, 0xFF01, // 0xEX
    0xFEFB, 0xFEE2, 0xFE8A, 0xFE24, 0xFE00, 0xFDEC, 0xFE10, 0xFEC9, 0xFF54, 0x0000, 0x01DC, 0x0406, 0x0504, 0x05F6, 0x07B4, 0xFF08, // 0xFX
};

// This array is indexed by the start and end indexes of the 16 collision point tests.
// It is used to move the ball out of the the wall it's colliding with.
static const u16 sCollisionYDeltas[256] = {
    0x0000, 0xFFE0, 0xFF81, 0xFEDE, 0xFE77, 0xFE00, 0xFCCC, 0xFB87, 0xFB01, 0xFA8E, 0xF9F8, 0xFA1F, 0xFA77, 0xFAFC, 0xFCAD, 0xFEE7, // 0x0X
    0x0119, 0xFFC2, 0xFF70, 0xFEE4, 0xFE8C, 0xFE24, 0xFD15, 0xFBF9, 0xFB87, 0xFB27, 0xFAB9, 0xFB03, 0xFB69, 0xFBFA, 0xFDBD, 0x0000, // 0x1X
    0x0353, 0x045D, 0xFF4B, 0xFF01, 0xFECC, 0xFE8A, 0xFDD5, 0xFD15, 0xFCCC, 0xFC94, 0xFC77, 0xFD03, 0xFD81, 0xFE24, 0x0000, 0x0243, // 0x2X
    0x0504, 0x05F6, 0x07B4, 0xFF08, 0xFEFB, 0xFEE2, 0xFE8A, 0xFE24, 0xFE00, 0xFDEC, 0xFE10, 0xFEC9, 0xFF54, 0x0000, 0x01DC, 0x0406, // 0x3X
    0x0589, 0x066D, 0x0808, 0x08E7, 0xFF00, 0xFEFB, 0xFECC, 0xFE8C, 0xFE77, 0xFE71, 0xFEAD, 0xFF73, 0x0000, 0x00AC, 0x027F, 0x0497, // 0x4X
    0x05E1, 0x06B6, 0x082C, 0x08E1, 0x08E7, 0xFF08, 0xFF01, 0xFEE4, 0xFEDE, 0xFEE3, 0xFF32, 0x0000, 0x008D, 0x0137, 0x02FD, 0x04FD, // 0x5X
    0x0608, 0x06B8, 0x07D4, 0x082C, 0x0808, 0x07B4, 0xFF4B, 0xFF70, 0xFF81, 0xFF99, 0x0000, 0x00CE, 0x0153, 0x01F0, 0x0389, 0x0547, // 0x6X
    0x0572, 0x05F8, 0x06B8, 0x06B6, 0x066D, 0x05F6, 0x045D, 0xFFC2, 0xFFE0, 0x0000, 0x0067, 0x011D, 0x018F, 0x0214, 0x036C, 0x04D9, // 0x7X
    0x04FF, 0x0572, 0x0608, 0x05E1, 0x0589, 0x0504, 0x0353, 0x0119, 0x0000, 0x0020, 0x007F, 0x0122, 0x0189, 0x0200, 0x0334, 0x0479, // 0x8X
    0x0479, 0x04D9, 0x0547, 0x04FD, 0x0497, 0x0406, 0x0243, 0x0000, 0xFEE7, 0x003E, 0x0090, 0x011C, 0x0174, 0x01DC, 0x02EB, 0x0407, // 0x9X
    0x0334, 0x036C, 0x0389, 0x02FD, 0x027F, 0x01DC, 0x0000, 0xFDBD, 0xFCAD, 0xFBA3, 0x00B5, 0x00FF, 0x0134, 0x0176, 0x022B, 0x02EB, // 0xAX
    0x0200, 0x0214, 0x01F0, 0x0137, 0x00AC, 0x0000, 0xFE24, 0xFBFA, 0xFAFC, 0xFA0A, 0xF84C, 0x00F8, 0x0105, 0x011E, 0x0176, 0x01DC, // 0xBX
    0x0189, 0x018F, 0x0153, 0x008D, 0x0000, 0xFF54, 0xFD81, 0xFB69, 0xFA77, 0xF993, 0xF7F8, 0xF719, 0x0100, 0x0105, 0x0134, 0x0174, // 0xCX
    0x0122, 0x011D, 0x00CE, 0x0000, 0xFF73, 0xFEC9, 0xFD03, 0xFB03, 0xFA1F, 0xF94A, 0xF7D4, 0xF71F, 0xF719, 0x00F8, 0x00FF, 0x011C, // 0xDX
    0x007F, 0x0067, 0x0000, 0xFF32, 0xFEAD, 0xFE10, 0xFC77, 0xFAB9, 0xF9F8, 0xF948, 0xF82C, 0xF7D4, 0xF7F8, 0xF84C, 0x00B5, 0x0090, // 0xEX
    0x0020, 0x0000, 0xFF99, 0xFEE3, 0xFE71, 0xFDEC, 0xFC94, 0xFB27, 0xFA8E, 0xFA08, 0xF948, 0xF94A, 0xF993, 0xFA0A, 0xFBA3, 0x003E, // 0xFX
};

static const u16 sFlipperRadiusMagnitudes[32] = {
    0x0000, 0x000C, 0x001C, 0x0030, 0x0038, 0x0048, 0x005C, 0x006C, 0x0070, 0x0080, 0x0094, 0x00A4, 0x00B4, 0x00C4, 0x00D4, 0x00E4,
    0x00F8, 0x00FC, 0x00FC, 0x00FC, 0x00FC, 0x00FC, 0x00FC, 0x00FC, 0x00FC, 0x00FC, 0x00FC, 0x00FC, 0x00FC, 0x00FC, 0x00FC, 0x00FC,
};

static const s16 sTiltLeftOnlyVelocityDeltas[] = INCBIN_S16("data/pinball/tilt_left_deltas.bin");
static const s16 sTiltRightOnlyVelocityDeltas[] = INCBIN_S16("data/pinball/tilt_right_deltas.bin");
static const s16 sTiltDownOnlyVelocityDeltas[] = INCBIN_S16("data/pinball/tilt_down_deltas.bin");
static const s16 sTiltDownRightVelocityDeltas[] = INCBIN_S16("data/pinball/tilt_down_right_deltas.bin");
static const s16 sTiltDownLeftVelocityDeltas[] = INCBIN_S16("data/pinball/tilt_down_left_deltas.bin");

static const s16 *const sTiltVelocityDeltas[] = {
    NULL,
    sTiltLeftOnlyVelocityDeltas,
    sTiltRightOnlyVelocityDeltas,
    NULL,
    sTiltDownOnlyVelocityDeltas,
    sTiltDownLeftVelocityDeltas,
    sTiltDownRightVelocityDeltas,
    sTiltDownOnlyVelocityDeltas,
};

static const struct PachinkoLevel sPachinkoLevels[PACHINKO_LEVEL_COUNT] =
{
    [PACHINKO_LEVEL_1] =
    {
        .levelTilemap = sLevel_01_BgTilemap,
        .levelCollisionMap = sLevel_01_BgCollisionMap,
    },
    [PACHINKO_LEVEL_2] =
    {
        .levelTilemap = sLevel_02_BgTilemap,
        .levelCollisionMap = sLevel_02_BgCollisionMap,
    },
    [PACHINKO_LEVEL_3] =
    {
        .levelTilemap = sLevel_03_BgTilemap,
        .levelCollisionMap = sLevel_03_BgCollisionMap,
    },
    [PACHINKO_LEVEL_4] =
    {
        .levelTilemap = sLevel_04_BgTilemap,
        .levelCollisionMap = sLevel_04_BgCollisionMap,
    },
    [PACHINKO_LEVEL_5] =
    {
        .levelTilemap = sLevel_05_BgTilemap,
        .levelCollisionMap = sLevel_05_BgCollisionMap,
    },
    [PACHINKO_LEVEL_6] =
    {
        .levelTilemap = sLevel_06_BgTilemap,
        .levelCollisionMap = sLevel_06_BgCollisionMap,
    },
    [PACHINKO_LEVEL_7] =
    {
        .levelTilemap = sLevel_07_BgTilemap,
        .levelCollisionMap = sLevel_07_BgCollisionMap,
    },
    [PACHINKO_LEVEL_8] =
    {
        .levelTilemap = sLevel_08_BgTilemap,
        .levelCollisionMap = sLevel_08_BgCollisionMap,
    },
    [PACHINKO_LEVEL_9] =
    {
        .levelTilemap = sLevel_09_BgTilemap,
        .levelCollisionMap = sLevel_09_BgCollisionMap,
    },
    [PACHINKO_LEVEL_10] =
    {
        .levelTilemap = sLevel_10_BgTilemap,
        .levelCollisionMap = sLevel_10_BgCollisionMap,
    },
    [PACHINKO_LEVEL_11] =
    {
        .levelTilemap = sLevel_11_BgTilemap,
        .levelCollisionMap = sLevel_11_BgCollisionMap,
    },
    [PACHINKO_LEVEL_12] =
    {
        .levelTilemap = sLevel_12_BgTilemap,
        .levelCollisionMap = sLevel_12_BgCollisionMap,
    },
    [PACHINKO_LEVEL_13] =
    {
        .levelTilemap = sLevel_13_BgTilemap,
        .levelCollisionMap = sLevel_13_BgCollisionMap,
    },
    [PACHINKO_LEVEL_14] =
    {
        .levelTilemap = sLevel_14_BgTilemap,
        .levelCollisionMap = sLevel_14_BgCollisionMap,
    },
    [PACHINKO_LEVEL_15] =
    {
        .levelTilemap = sLevel_15_BgTilemap,
        .levelCollisionMap = sLevel_15_BgCollisionMap,
    },
    [PACHINKO_LEVEL_16] =
    {
        .levelTilemap = sLevel_16_BgTilemap,
        .levelCollisionMap = sLevel_16_BgCollisionMap,
    },
    [PACHINKO_LEVEL_17] =
    {
        .levelTilemap = sLevel_17_BgTilemap,
        .levelCollisionMap = sLevel_17_BgCollisionMap,
    },
    [PACHINKO_LEVEL_18] =
    {
        .levelTilemap = sLevel_18_BgTilemap,
        .levelCollisionMap = sLevel_18_BgCollisionMap,
    },
    [PACHINKO_LEVEL_19] =
    {
        .levelTilemap = sLevel_19_BgTilemap,
        .levelCollisionMap = sLevel_19_BgCollisionMap,
    },
    [PACHINKO_LEVEL_20] =
    {
        .levelTilemap = sLevel_20_BgTilemap,
        .levelCollisionMap = sLevel_20_BgCollisionMap,
    },
    [PACHINKO_LEVEL_21] =
    {
        .levelTilemap = sLevel_21_BgTilemap,
        .levelCollisionMap = sLevel_21_BgCollisionMap,
    },
    [PACHINKO_LEVEL_22] =
    {
        .levelTilemap = sLevel_22_BgTilemap,
        .levelCollisionMap = sLevel_22_BgCollisionMap,
    },
    [PACHINKO_LEVEL_23] =
    {
        .levelTilemap = sLevel_23_BgTilemap,
        .levelCollisionMap = sLevel_23_BgCollisionMap,
    }
};

void PlayPachinko(void)
{
    PlayPinballGame();
}

static void SetPlayerDigits(u16 num)
{
    u8 i;
    u16 d = 1000;  // Start with the thousands place

    for (i = 0; i < 4; i++)  // Always show 4 digits
    {
        u8 digit = num / d;

        // Show the digit (all digits are visible)
        gSprites[sScore->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].invisible = FALSE;

        // If it's a smaller number, show 0 for the higher place values
        if (i == 0 && num < 1000) {
            digit = 0;  // Force 0 for the thousands place if the number is less than 1000
        }

        // Set the tileNum based on the current digit
        gSprites[sScore->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].oam.tileNum =
            gSprites[sScore->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].sheetTileStart + (digit * 2);

        gSprites[sScore->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].oam.priority = 0;

        // Reduce num for the next digit
        num = num % d;
        d = d / 10;
    }
    
    BuildOamBuffer();
}

static void CreatePlayerSprites(void)
{
    u8 i;

    for (i = 0; i < ARRAY_COUNT(sSpriteSheets_PlayerInterface) - 1; i++)  
    {
        LoadCompressedSpriteSheet(&sSpriteSheets_PlayerInterface[i]);
    }

    for (i = 0; i < 4; i++)
    {
        sScore->PlayerSpriteIds[i + SPR_PLAYER_DIGITS] = CreateSprite(&sSpriteTemplate_PlayerDigit, i * 7 + 198, 127, 2);
        gSprites[sScore->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].oam.priority = 0;
    }
}

static void PlayPinballGame(void)
{
    ScriptContext_Stop();
    sPinballGame = AllocZeroed(sizeof(*sPinballGame));
    sPinballGame->returnMainCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    CreateTask(FadeToPinballScreen, 0);
}

static void FadeToPinballScreen(u8 taskId)
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
            SetMainCallback2(InitPinballScreen);
            DestroyTask(taskId);
        }
        break;
    }
}

static void RandomLevel(void)
{
    struct Diglett *diglett = &sPinballGame->diglett;
    const u16 * levelTilemap;
    const u8 * levelCollisionMap;
    u32 level = sScore->Level;

    if (level >= PACHINKO_LEVEL_COUNT)
        level = PACHINKO_LEVEL_1;

    levelTilemap = sPachinkoLevels[level].levelTilemap;
    levelCollisionMap = sPachinkoLevels[level].levelCollisionMap;

    LoadBgTiles(PINBALL_BG_BASE, sDiglettStageBgGfx, sizeof(sDiglettStageBgGfx), 0);
    CopyToBgTilemapBuffer(PINBALL_BG_BASE, levelTilemap, sizeof(sLevel_01_BgTilemap), 0);
    LoadPalette(sDiglettStageBgPalette, 0, sizeof(sDiglettStageBgPalette));
    CopyBgTilemapBufferToVram(PINBALL_BG_BASE);
    diglett->completed = FALSE;
    diglett->numDiglettsHit = 0;
    diglett->collisionMap = Alloc(ARRAY_COUNT(sLevel_01_BgCollisionMap) * sizeof(sLevel_01_BgCollisionMap[0]));
    memcpy(diglett->collisionMap, levelCollisionMap, ARRAY_COUNT(sLevel_01_BgCollisionMap) * sizeof(sLevel_01_BgCollisionMap[0]));
}


static void LevelChange(void)
{
    sScore->Multiplier = 1;
    gSprites[sScore->MultiplierSpriteId].animNum = 0;
    InitBgsFromTemplates(0, sPinballBgTemplates, ARRAY_COUNT(sPinballBgTemplates));
    SetBgTilemapBuffer(PINBALL_BG_BASE, AllocZeroed(BG_SCREEN_SIZE));
    LoadBgGfx();
}

static void DestroyWin(void)
{
    DestroySpriteAndFreeResources(&gSprites[sScore->WinSpriteId]);
}

static void DestroyTitle(void)
{
    DestroySpriteAndFreeResources(&gSprites[sScore->TitleSpriteId]);
    sScore->TitleDestroyed = 1;
}

static void DestroyNewLevel(void)
{
    DestroySpriteAndFreeResources(&gSprites[sScore->NewLevelSpriteId]);
}

static void CreateNewLevel(void)
{
    LoadSpritePalettes(sSpritePalettes2);
    LoadCompressedSpriteSheet(&sSpriteSheet_NewLevel);

    sScore->NewLevelSpriteId = CreateSprite(&sSpriteTemplate_NewLevel, 92, 82, 0);
    //gSprites[sScore->WinSpriteId].invisible = TRUE;
}

static void CreateWin(void)
{
    LoadSpritePalettes(sSpritePalettes2);
    LoadCompressedSpriteSheet(&sSpriteSheet_Win);

    sScore->WinSpriteId = CreateSprite(&sSpriteTemplate_Win, 92, 82, 0);
    //gSprites[sScore->WinSpriteId].invisible = TRUE;
}

static void CreateGameOver(void)
{
    LoadSpritePalettes(sSpritePalettes2);
    LoadCompressedSpriteSheet(&sSpriteSheet_GameOver);

    sScore->GameOverSpriteId = CreateSprite(&sSpriteTemplate_GameOver, 92, 82, 0);
    //gSprites[sScore->GameOverSpriteId].invisible = TRUE;
}

static void CreateTitle(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Title);
    sScore->TitleSpriteId = CreateSprite(&sSpriteTemplate_Title, 92, 82, 0);
}

static void CreateArrow(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Arrow);
    sScore->ArrowSpriteId = CreateSprite(&sSpriteTemplate_Arrow, 36, 20, 0);
}

static void CreateLives(void)
{
    s16 x = 4;
    s16 y = 156;
    s16 x2 = x + 8;
    s16 x3 = x + 16;
    s16 x4 = x + 24;
    s16 x5 = x + 32;

    LoadCompressedSpriteSheet(&sSpriteSheet_Lives);

    sScore->Live1SpriteId = CreateSprite(&sSpriteTemplate_Lives, x, y, 0);
    sScore->Live2SpriteId = CreateSprite(&sSpriteTemplate_Lives, x2, y, 0);
    sScore->Live3SpriteId = CreateSprite(&sSpriteTemplate_Lives, x3, y, 0);
    sScore->Live4SpriteId = CreateSprite(&sSpriteTemplate_Lives, x4, y, 0);
    sScore->Live5SpriteId = CreateSprite(&sSpriteTemplate_Lives, x5, y, 0);
}

static void UpdateLives(void)
{
    if (sScore->Lives == 5)
    {
        gSprites[sScore->Live1SpriteId].invisible = FALSE;
        gSprites[sScore->Live2SpriteId].invisible = FALSE;
        gSprites[sScore->Live3SpriteId].invisible = FALSE;
        gSprites[sScore->Live4SpriteId].invisible = FALSE;
        gSprites[sScore->Live5SpriteId].invisible = FALSE;
    }
    else if (sScore->Lives == 4)
    {
        gSprites[sScore->Live1SpriteId].invisible = FALSE;
        gSprites[sScore->Live2SpriteId].invisible = FALSE;
        gSprites[sScore->Live3SpriteId].invisible = FALSE;
        gSprites[sScore->Live4SpriteId].invisible = FALSE;
        gSprites[sScore->Live5SpriteId].invisible = TRUE;
    }
    else if (sScore->Lives == 3)
    {
        gSprites[sScore->Live1SpriteId].invisible = FALSE;
        gSprites[sScore->Live2SpriteId].invisible = FALSE;
        gSprites[sScore->Live3SpriteId].invisible = FALSE;
        gSprites[sScore->Live4SpriteId].invisible = TRUE;
        gSprites[sScore->Live5SpriteId].invisible = TRUE;
    }
    else if (sScore->Lives == 2)
    {
        gSprites[sScore->Live1SpriteId].invisible = FALSE;
        gSprites[sScore->Live2SpriteId].invisible = FALSE;
        gSprites[sScore->Live3SpriteId].invisible = TRUE;
        gSprites[sScore->Live4SpriteId].invisible = TRUE;
        gSprites[sScore->Live5SpriteId].invisible = TRUE;
    }
    else if (sScore->Lives == 1)
    {
        gSprites[sScore->Live1SpriteId].invisible = FALSE;
        gSprites[sScore->Live2SpriteId].invisible = TRUE;
        gSprites[sScore->Live3SpriteId].invisible = TRUE;
        gSprites[sScore->Live4SpriteId].invisible = TRUE;
        gSprites[sScore->Live5SpriteId].invisible = TRUE;
    }
    else
    {
        gSprites[sScore->Live1SpriteId].invisible = TRUE;
        gSprites[sScore->Live2SpriteId].invisible = TRUE;
        gSprites[sScore->Live3SpriteId].invisible = TRUE;
        gSprites[sScore->Live4SpriteId].invisible = TRUE;
        gSprites[sScore->Live5SpriteId].invisible = TRUE;
    }
}

static void CreateSpinarak(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Spinarak);
    sScore->SpinarakSpriteId = CreateSprite(&sSpriteTemplate_Spinarak, 208, 48, 0);
}

static void CreateSpeed(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Speed);
    sScore->SpeedSpriteId = CreateSprite(&sSpriteTemplate_Speed, 208, 160, 0);
}

static void CreateMultiplier(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Multiplier);
    sScore->MultiplierSpriteId = CreateSprite(&sSpriteTemplate_Multiplier, 208, 96, 0);
}

static void InitPinballScreen(void)
{
    switch (gMain.state)
    {
    case 0:
        sScore = AllocZeroed(sizeof(struct Credits));
        SetVBlankCallback(NULL);
        ResetAllBgsCoordinates();
        gMain.state++;
        break;
    case 1:
        sScore->Level = (Random() % PACHINKO_LEVEL_COUNT);
        sScore->LastLevel = sScore->Level;
        ResetVramOamAndBgCntRegs();
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sPinballBgTemplates, ARRAY_COUNT(sPinballBgTemplates));
        SetBgTilemapBuffer(PINBALL_BG_BASE, AllocZeroed(BG_SCREEN_SIZE));
        LoadBgGfx();
        gMain.state++;
        break;
    case 2:
        ResetSpriteData();
        FreeAllSpritePalettes();
        gMain.state++;
        break;
    case 3:
        CopyBgTilemapBufferToVram(PINBALL_BG_BASE);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON | DISPCNT_BG3_ON);
        ShowBg(PINBALL_BG_BASE);
        ShowBg(3);
        gMain.state++;
        break;
    case 4:
        sScore->StartSpeed = 0;
        sScore->Lives = 5;
        sScore->Multiplier = 1;
        sScore->GameStart = 0;
        sScore->StartDelayMax = 2;
        sScore->StartDelayTimer = sScore->StartDelayMax;
        sScore->ArrowPosition = 0;
        sScore->ArrowDirection = 0;
        sScore->SecondDelay = 30;
        LoadSpritePalettes(sSpritePalettes2);
        CreateArrow();
        sScore->TitleDestroyed = 0;
        sScore->TitleCounter = 140;
        CreateTitle();
        CreateLives();
        CreateSpinarak();
        CreateSpeed();
        CreateMultiplier();
        CreatePlayerSprites();
        SetPlayerDigits(GetCoins());
        LoadCompressedSpriteSheet(&sBallPokeballSpriteSheet);
        LoadSpritePalette(&sPinballSpritePalette);
        InitPinballGame();
        InitBallSprite();
        gMain.state++;
    case 5:
        // Center game in the middle of the screen
        //SetGpuReg(REG_OFFSET_BG2HOFS, -40);

        BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
        SetVBlankCallback(PinballVBlankCallback);
        SetMainCallback2(PinballMainCallback);
        CreateTask(PinballMain, 0);
        return;
    }
}

static void LoadBgGfx(void)
{
    ResetPaletteFade();
    RandomLevel();
}

static void InitPinballGame(void)
{
    sPinballGame->stageTileWidth = 32;
    sPinballGame->stageTileHeight = 32;
    sPinballGame->gravityEnabled = TRUE;
    sPinballGame->cameraScrollX = -40;
    sPinballGame->cameraScrollY = 0;
}

static void InitBallSprite(void)
{
    sPinballGame->ball.spriteId = CreateSprite(&sBallPokeballSpriteTemplate, 0, 0, 3);
    StartSpriteAnim(&gSprites[sPinballGame->ball.spriteId], 3);
    gSprites[sPinballGame->ball.spriteId].invisible = TRUE;
}

static void PinballVBlankCallback(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void PinballMainCallback(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
}

static void Arrow(void)
{
    if (sScore->GameStart != 1)
    {
        if (sScore->StartDelayTimer != 0)
        {
            sScore->StartDelayTimer--;
            return;
        }
        else
        {
            if ((sScore->ArrowPosition > 0) && (sScore->ArrowDirection == 0) && (sScore->ArrowPosition < 14)) // Right
            {
                sScore->ArrowPosition++;
                gSprites[sScore->ArrowSpriteId].x = (gSprites[sScore->ArrowSpriteId].x + 8);
            }
            else if ((sScore->ArrowPosition > 0) && (sScore->ArrowDirection == 1) && (sScore->ArrowPosition < 14)) // Left
            {
                sScore->ArrowPosition--;
                gSprites[sScore->ArrowSpriteId].x = (gSprites[sScore->ArrowSpriteId].x - 8);
            }
            else if (sScore->ArrowPosition == 0) // Turn Right
            {
                sScore->ArrowPosition++;
                sScore->ArrowDirection = 0;
                gSprites[sScore->ArrowSpriteId].x = (gSprites[sScore->ArrowSpriteId].x + 8);
            }
            else if (sScore->ArrowPosition == 14) // Turn Left
            {
                sScore->ArrowPosition--;
                sScore->ArrowDirection = 1;
                gSprites[sScore->ArrowSpriteId].x = (gSprites[sScore->ArrowSpriteId].x - 8);
            }
            sScore->StartDelayTimer = sScore->StartDelayMax;
            return;
        }
    }
}

static void AButton(void)
{
    if (GetCoins() > 2)
    {
    PlaySE(SE_TRUCK_DOOR);
    if (sScore->TitleDestroyed == 0)
    {
        DestroyTitle();
    }
    RemoveCoins(3);
    SetPlayerDigits(GetCoins());
    sScore->GameStart = 1;
    return;
    }
    else
    {
        PlaySE(SE_FAILURE);
        return;
    }
}

static void DropSpeed(u8 direction)
{
    if (direction == 1) // Left
    {
        if (sScore->StartSpeed == 0)
        {
            PlaySE(SE_FAILURE);
            return;
        }
        else if (sScore->StartSpeed == 1)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum -= 16;
            sScore->StartSpeed = 0;
            return;
        }
        else if (sScore->StartSpeed == 5)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum -= 16;
            sScore->StartSpeed = 1;
            return;
        }
        else if (sScore->StartSpeed == 10)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum -= 16;
            sScore->StartSpeed = 5;
            return;
        }
        else if (sScore->StartSpeed == 15)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum -= 16;
            sScore->StartSpeed = 10;
            return;
        }
        else if (sScore->StartSpeed == 20)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum -= 16;
            sScore->StartSpeed = 15;
            return;
        }
        else if (sScore->StartSpeed == 25)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum -= 16;
            sScore->StartSpeed = 20;
            return;
        }
    }
    else if (direction == 0) // Right
    {
        if (sScore->StartSpeed == 0)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum += 16;
            sScore->StartSpeed = 1;
            return;
        }
        else if (sScore->StartSpeed == 1)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum += 16;
            sScore->StartSpeed = 5;
            return;
        }
        else if (sScore->StartSpeed == 5)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum += 16;
            sScore->StartSpeed = 10;
            return;
        }
        else if (sScore->StartSpeed == 10)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum += 16;
            sScore->StartSpeed = 15;
            return;
        }
        else if (sScore->StartSpeed == 15)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum += 16;
            sScore->StartSpeed = 20;
            return;
        }
        else if (sScore->StartSpeed == 20)
        {
            PlaySE(SE_BALL_TRAY_BALL);
            gSprites[sScore->SpeedSpriteId].oam.tileNum += 16;
            sScore->StartSpeed = 25;
            return;
        }
        else if (sScore->StartSpeed == 25)
        {
            PlaySE(SE_FAILURE);
            return;
        }
    }
    return;
}

static void HandleInput(void)
{
    if (sScore->GameStart == 0) 
    {
        if (JOY_NEW(A_BUTTON))
        {
            AButton();
        }
        else if (JOY_NEW(B_BUTTON))
        {
            sPinballGame->state = PINBALL_STATE_START_EXIT;
        }
        else if (JOY_NEW(DPAD_RIGHT))
        {
            DropSpeed(0);
        }
        else if (JOY_NEW(DPAD_LEFT))
        {
            DropSpeed(1);
        }
    }
}

static void PinballMain(u8 taskId)
{
    bool32 completed;

    switch (sPinballGame->state)
    {
    case PINBALL_STATE_INIT:
        if (!gPaletteFade.active)
        {
            sPinballGame->state = PACHINKO_START_SCREEN;
        }
        break;
    case PACHINKO_START_SCREEN:
        HandleInput();
        //gSprites[sScore->WinSpriteId].invisible = TRUE;
        gSprites[sScore->ArrowSpriteId].invisible = FALSE;
        Arrow();
        if ((sScore->TitleCounter > 0) && (sScore->TitleDestroyed == 0))
        {
            sScore->TitleCounter--;
        }
        else if ((sScore->TitleCounter == 0) && (sScore->TitleDestroyed == 0))
        {
            DestroyTitle();
            sScore->TitleDestroyed = 1;
        }
        
        if (sScore->GameStart == 1)
        {
            gSprites[sScore->ArrowSpriteId].invisible = TRUE;
            sScore->SecondDelay--;
            if (sScore->SecondDelay == 0) {
            PlaySE(SE_BALL_TRADE);
            StartNewBall();
            sScore->SecondDelay = 30;
            sPinballGame->state = PINBALL_STATE_RUNNING;
            }
        }
        break;
    case PINBALL_STATE_RUNNING:
        completed = FALSE;
        if (!sPinballGame->completed && completed)
            sPinballGame->completed = TRUE;
        gSprites[sPinballGame->ball.spriteId].invisible = FALSE;
        HandleBallPhysics();
        UpdateCamera();
        break;
    case PINBALL_LOST_BALL_FADE_OUT:
        if (!gPaletteFade.active)
        {
            gSprites[sPinballGame->ball.spriteId].invisible = TRUE;
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_WHITE);
            sPinballGame->state = PINBALL_LOST_BALL_FADE_IN;
        }
        break;
    case PINBALL_LOST_BALL_FADE_IN:
        if (!gPaletteFade.active)
            sPinballGame->state = PACHINKO_START_SCREEN;
        break;
    case PACHINKO_START_JACKPOT:
        if (!gPaletteFade.active)
        {
            gSprites[sPinballGame->ball.spriteId].invisible = TRUE;
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_WHITE);
            PlayFanfare(MUS_OBTAIN_BADGE);
            CreateWin();
            sPinballGame->state = PACHINKO_JACKPOT;
        }
        break;
    case PACHINKO_JACKPOT:
            if (IsFanfareTaskInactive())
            {
                PlaySE(SE_SHOP);
                AddCoins(50 * sScore->Multiplier);
                sScore->Winnings = (sScore->Winnings + (50 * sScore->Multiplier));
                SetPlayerDigits(GetCoins());
                DestroyWin();
                if (sScore->Winnings < 30)
                {
                    sPinballGame->state = PACHINKO_START_SCREEN;
                }
                else
                {
                    sScore->LevelChangeTimer = 200;
                    sPinballGame->state = PACHINKO_LEVEL_CHANGE_START;
                }    
            }
        break;
    case PACHINKO_START_WIN:
        if (!gPaletteFade.active)
        {
            gSprites[sPinballGame->ball.spriteId].invisible = TRUE;
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_WHITE);
            PlayFanfare(MUS_LEVEL_UP);
            CreateWin();
            sPinballGame->state = PACHINKO_WIN;
        }
        break;
    case PACHINKO_WIN:
            if (IsFanfareTaskInactive())
            {
                PlaySE(SE_SHOP);
                AddCoins(6 * sScore->Multiplier);
                sScore->Winnings = (sScore->Winnings + (6 * sScore->Multiplier));
                SetPlayerDigits(GetCoins());
                DestroyWin();
                if (sScore->Winnings < 30)
                {
                    sPinballGame->state = PACHINKO_START_SCREEN;
                }
                else
                {
                    sScore->LevelChangeTimer = 200;
                    sPinballGame->state = PACHINKO_LEVEL_CHANGE_START;
                }            
            }
        break;
    case PACHINKO_LEVEL_CHANGE_START:
        if (sScore->LevelChangeTimer == 200)
        {
            PlaySE(SE_SUCCESS);
            CreateNewLevel();
            sScore->LevelChangeTimer--;
        }
        else if (sScore->LevelChangeTimer != 0)
        {
            sScore->LevelChangeTimer--;
        }
        else if (sScore->LevelChangeTimer == 0)
        {
            PlaySE(SE_LAVARIDGE_FALL_WARP);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            sPinballGame->state = PACHINKO_LEVEL_FADE_OUT;
        }
        break;
    case PACHINKO_LEVEL_FADE_OUT:
        if (!gPaletteFade.active)
        {
            DestroyNewLevel();
            sPinballGame->state = PACHINKO_LEVEL_CHANGE;
        }
        break;
    case PACHINKO_LEVEL_CHANGE:
        sScore->Level = (Random() % PACHINKO_LEVEL_COUNT);
        while (sScore->Level == sScore->LastLevel)
        {
            sScore->Level = (Random() % PACHINKO_LEVEL_COUNT);
        }
        sScore->LastLevel = sScore->Level;
        sScore->Winnings = 0;
        LevelChange();
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
        sPinballGame->state = PACHINKO_LEVEL_FADE_IN;
        break;
    case PACHINKO_LEVEL_FADE_IN:
        if (!gPaletteFade.active)
        {
            sPinballGame->state = PACHINKO_START_SCREEN;
        }
        break;
    case PINBALL_STATE_DELAY_START_EXIT:
        if (--sPinballGame->exitTimer == 0)
        {
            sPinballGame->state = PINBALL_STATE_START_EXIT;
        }
        break;
    case PINBALL_STATE_START_EXIT:
        StartExitPinballGame();
        break;
    case PINBALL_STATE_EXIT:
        ExitPinballGame();
        break;
    }
}

static void StartNewBall(void)
{
    u16 randomvel;
    u8 LR;
    s16 x;
    
    LR = (Random () % 100);
    x = 36 + (sScore->ArrowPosition * 8);
    randomvel = (Random() % 0x40);
    if (randomvel == 0)
    {
        randomvel = 2;
    }
    if (LR < 51)
    {
        randomvel = (randomvel * (0 - 1));
    }
    
    sPinballGame->ball.xPos = x << 8;
    sPinballGame->ball.yPos = 16 << 8;
    sPinballGame->ball.xVelocity = randomvel;
    sPinballGame->ball.yVelocity = (sScore->StartSpeed * 20);
    sPinballGame->ball.spin = 0;
}

static void HandleBallPhysics(void)
{
    bool32 isStaticColliding;
    bool32 isObjectColliding = FALSE;
    u8 objectCollisionNormal = 0;
    u8 staticCollisionNormal = 0;
    u8 collisionNormal;
    u16 artificialYForce = 0;
    int collisionAmplification = 0;
    struct Ball *ball = &sPinballGame->ball;

    if (sPinballGame->gravityEnabled)
        ApplyGravity(ball);

    LimitVelocity(ball);
    HandleTilts(ball);

    isStaticColliding = CheckStaticCollision(ball, sPinballGame->stageTileWidth, sPinballGame->stageTileHeight, &staticCollisionNormal, &artificialYForce);
    
    if (isObjectColliding)
        collisionNormal = objectCollisionNormal;
    else
        collisionNormal = staticCollisionNormal;

    if (isObjectColliding || isStaticColliding)
    {
        ApplyTiltForces(ball, collisionNormal);
        RotateVector(&ball->xVelocity, &ball->yVelocity, collisionNormal);
        ApplyCollisionForces(ball, artificialYForce, collisionAmplification);
        RotateVector(&ball->xVelocity, &ball->yVelocity, -collisionNormal);
        
        if ((isStaticColliding) && ((ball->yVelocity > 100) || (ball->xVelocity > 100))) // Wall or static object collision
        {
            PlaySE(SE_WALL_HIT); // Trigger the sound effect for wall collision
        }
    }

    UpdatePosition(ball);

    if ((ball->yPos >> 8) > 168)
    {
        ball->yPos = 170 << 8;
        LoseBall();
    }
}

static void LoseBall(void)
{
    sScore->Lives--;
    if (PlayAnotherBall())
    {
        PlaySE(SE_FAINT);
        sScore->Multiplier = 1;
        sScore->GameStart = 0;
        sScore->StartDelayMax = 2;
        sScore->StartDelayTimer = sScore->StartDelayMax;
        sScore->SecondDelay = 30;
        gSprites[sScore->MultiplierSpriteId].animNum = 0;
        gSprites[sPinballGame->ball.spriteId].invisible = TRUE;
        UpdateLives();
        sPinballGame->state = PINBALL_LOST_BALL_FADE_OUT;
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_WHITE);
    }
    else
    {
        if (!sPinballGame->waitExitScene)
        {
            PlayFanfare(MUS_TOO_BAD);
            sScore->Multiplier = 1;
            sScore->GameStart = 0;
            sScore->StartDelayMax = 2;
            sScore->StartDelayTimer = sScore->StartDelayMax;
            sScore->SecondDelay = 30;
            gSprites[sScore->MultiplierSpriteId].animNum = 0;
            gSprites[sPinballGame->ball.spriteId].invisible = TRUE;
            CreateGameOver();
            UpdateLives();
            sPinballGame->exitTimer = 2 * 60;
            sPinballGame->state = PINBALL_STATE_DELAY_START_EXIT;
        }

        gSpecialVar_Result = sPinballGame->completed;
    }
}

static bool32 PlayAnotherBall(void)
{
    if (sScore->Lives > 0)
        return TRUE;
    else
        return FALSE;
}

#define GRAVITY 0x08

static void ApplyGravity(struct Ball *ball)
{
    ball->yVelocity += GRAVITY;
}

#define MAX_VELOCITY 0x07FF

static void LimitVelocity(struct Ball *ball)
{
    // Limit each velocity axis independently. This means
    // the ball can move diagonally at a higher speed.
    if (ball->xVelocity > MAX_VELOCITY)
        ball->xVelocity = MAX_VELOCITY;
    else if (ball->xVelocity < -MAX_VELOCITY)
        ball->xVelocity = -MAX_VELOCITY;

    if (ball->yVelocity > MAX_VELOCITY)
        ball->yVelocity = MAX_VELOCITY;
    else if (ball->yVelocity < -MAX_VELOCITY)
        ball->yVelocity = -MAX_VELOCITY;
}

static void HandleTilts(struct Ball *ball)
{
    HandleTilt(ball, &sPinballGame->rightTilt, 1, 0, DPAD_RIGHT, FALSE);
    HandleTilt(ball, &sPinballGame->leftTilt, -1, 0, DPAD_LEFT, FALSE);
    HandleTilt(ball, &sPinballGame->downTilt, 0, 1, DPAD_UP | DPAD_DOWN, TRUE);
}

static void HandleTilt(struct Ball *ball, struct Tilt *tilt, int xDelta, int yDelta, u32 buttonMask, bool8 artificalEnabled)
{
    if ((!tilt->reset && (gMain.newKeys & buttonMask)))
    {
        PlaySE(SE_BREAKABLE_DOOR);
    }
    
    if ((artificalEnabled && sPinballGame->doArtificialDownTilt) || (!tilt->reset && (gMain.heldKeys & buttonMask)))
    {
        if (++tilt->counter >= 3)
        {
            if (artificalEnabled)
                sPinballGame->doArtificialDownTilt = FALSE;

            tilt->pushing = FALSE;
            tilt->reset = TRUE;
        }
        else
        {
            ball->xPos += (xDelta << 8);
            ball->yPos += (yDelta << 8);
            tilt->pushing = TRUE;
        }
    }
    else
    {
        tilt->pushing = FALSE;
        if (tilt->counter > 0)
            tilt->counter--;
        else if (!(gMain.heldKeys & buttonMask))
            tilt->reset = FALSE;
    }
}

#define MAX_POS_UPDATE 0x04FF

static void UpdatePosition(struct Ball *ball)
{
    // Moves the ball's position according to its velocity.
    // The amount it's moved is artificially limited at a lower
    // threshold than the maximum velocity.
    if (ball->xVelocity > MAX_POS_UPDATE)
        ball->xPos += MAX_POS_UPDATE;
    else if (ball->xVelocity < -MAX_POS_UPDATE)
        ball->xPos -= MAX_POS_UPDATE;
    else
        ball->xPos += ball->xVelocity;

    if (ball->yVelocity > MAX_POS_UPDATE)
        ball->yPos += MAX_POS_UPDATE;
    else if (ball->yVelocity < -MAX_POS_UPDATE)
        ball->yPos -= MAX_POS_UPDATE;
    else
        ball->yPos += ball->yVelocity;

    if (ball->xPos & 0x80000000)
        ball->xPos = 0;
    if (ball->yPos & 0x80000000)
        ball->yPos = 0;

}

static bool32 CheckStaticCollision(struct Ball *ball, int stageTileWidth, int stageTileHeight, u8 *outCollisionNormal, u16 *outYForce)
{
    int i;
    u16 xDelta, yDelta;
    int collisionIndex;
    int maxStringStart, maxStringEnd, curStringStart, curStringLength, maxStringLength;
    u8 collisionTestAttributes[ARRAY_COUNT(sCollisionTestPointOffsets)];
    u8 collisionTestCoords[ARRAY_COUNT(sCollisionTestPointOffsets)][2];
    u8 collisionTests[ARRAY_COUNT(sCollisionTestPointOffsets)];

    // Check each of the test points around the ball's origin
    // to see if they are colliding with the static collision masks.
    for (i = 0; i < ARRAY_COUNT(sCollisionTestPointOffsets); i++)
    {
        int testX, testY;
        int tileX, tileY, tileIndex;
        int collisionAttribute, row, column;
        u8 collisionMaskRow;
        int xPos = ball->xPos >> 8;
        int yPos = ball->yPos >> 8;

        collisionTests[i] = 0;
        testX = xPos + sCollisionTestPointOffsets[i][0];
        testY = yPos + sCollisionTestPointOffsets[i][1];
        if (testX < 0 || testY < 0)
        {
            collisionTests[i] = 1;
            continue;
        }

        tileX = testX / 8;
        tileY = testY / 8;
        row = testY % 8;
        column = testX % 8;
        tileIndex = (tileY * stageTileWidth) + tileX;
        collisionAttribute = GetCollisionAttribute(tileIndex);
        collisionMaskRow = GetCollisionMaskRow(collisionAttribute, row);
        collisionTests[i] = (collisionMaskRow & (1 << column)) != 0;
        collisionTestCoords[i][0] = testX;
        collisionTestCoords[i][1] = testY;
        collisionTestAttributes[i] = collisionAttribute;
    }

    // Find the largest string of consecutive colliding test points.
    maxStringStart = 0;
    maxStringEnd = 0;
    maxStringLength = 0;
    curStringStart = -1;
    curStringLength = 0;
    for (i = 0; i < ARRAY_COUNT(sCollisionTestPointOffsets); i++)
    {
        if (collisionTests[i])
        {
            if (curStringStart == -1)
                curStringStart = i;

            curStringLength++;
            if (curStringLength > maxStringLength)
            {
                maxStringLength = curStringLength;
                maxStringStart = curStringStart;
                maxStringEnd = i;
            }
        }
        else
        {
            curStringLength = 0;
            curStringStart = -1;
        }
    }

    // If all of the test points are colliding, then the ball
    // is inside a wall. Just early exit with no collision.
    if (maxStringLength == 0 || maxStringLength == 16)
        return FALSE;

    // Check if the maximum string loops around to the front of
    // the collision tests array.
    if (curStringStart != -1)
    {
        for (i = 0; i < ARRAY_COUNT(sCollisionTestPointOffsets); i++)
        {
            if (!collisionTests[i])
                break;

            curStringLength++;
            if (curStringLength > maxStringLength)
            {
                maxStringLength = curStringLength;
                maxStringStart = curStringStart;
                maxStringEnd = i;
            }
        }
    }
 
    collisionIndex = ((maxStringStart & 0xF) << 4) | (maxStringEnd & 0xF);

    // Treat the delta values as signed.
    xDelta = sCollisionXDeltas[collisionIndex];
    if (xDelta > 0x8000)
        ball->xPos -= 0x10000 - xDelta;
    else
        ball->xPos += xDelta;

    yDelta = sCollisionYDeltas[collisionIndex];
    if (yDelta > 0x8000)
        ball->yPos -= 0x10000 - yDelta;
    else
        ball->yPos += yDelta;

    *outCollisionNormal = sCollisionNormals[collisionIndex];
    HandleStaticCollisionDiglett(&sPinballGame->diglett,
                                  collisionTestCoords[maxStringStart][0],
                                  collisionTestCoords[maxStringStart][1],
                                  collisionTestAttributes[maxStringStart],
                                  outYForce);

    return TRUE;
}

static u8 GetCollisionAttribute(int index)
{
    return sPinballGame->diglett.collisionMap[index];
}

static u8 GetCollisionMaskRow(int collisionAttribute, int row)
{
    u8 mask = 0;

    if (collisionAttribute < 0xE0)
    {
        // Reverse the bits because my tooling is backwards.
        return ReverseBits(sDiglettStageBgCollisionMasks[(collisionAttribute * 0x8) + row]);
    }

    return ReverseBits(mask);
}

static u8 ReverseBits(u8 b)
{
    b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
    b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
    b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
    return b;
}

static void ApplyTiltForces(struct Ball *ball, u8 collisionNormal)
{
    u32 index = (sPinballGame->downTilt.pushing  << 2) |
                (sPinballGame->rightTilt.pushing << 1) |
                (sPinballGame->leftTilt.pushing  << 0);
    const s16 *deltas = sTiltVelocityDeltas[index];
    if (deltas != NULL)
    {
        ball->xVelocity += deltas[collisionNormal * 2];
        ball->yVelocity += deltas[collisionNormal * 2 + 1];
    }
}

static void RotateVector(s16 *x, s16 *y, u8 angle)
{
    // Rotate a vector by an angle with a 2D rotation matrix calculation.
    s16 sin = gSineTable[angle];
    s16 cos = gSineTable[angle + 64];
    s16 newX = ((*x * cos) / 256) + ((*y * sin) / 256);
    s16 newY = ((*y * cos) / 256) - ((*x * sin) / 256);
    *x = newX;
    *y = newY;
}

static void HandleStaticCollisionDiglett(struct Diglett *diglett, int x, int y, u8 collisionAttribute,  u16 *outYForce)
{
    if (collisionAttribute == 0x1C)
    {
        // If the ball hit a Diglett, remove the Diglett's solid collision from the map.
        int tileX = x / 8;  // Convert pixel x to tile x
        int tileY = y / 8;  // Convert pixel y to tile y

        // Update the collision map with the new coordinates (tileX, tileY)
        u16 *tilemap;
        int tileIndex = tileY * 32 + tileX;  // Convert tile coordinates to index (assuming 32 tiles per row)

        // Remove the collision at this position by setting it back to 0x2 in the collision map
        diglett->collisionMap[tileIndex]      = 0x2;

        // Update the tilemap at this position to 0x28 (new tile after collision)
        tilemap = GetBgTilemapBuffer(PINBALL_BG_BASE);
        tilemap[tileIndex] = 0x28;
        
        PlaySE(SE_SWITCH);
        // Copy the updated tilemap to VRAM
        CopyBgTilemapBufferToVram(PINBALL_BG_BASE);
    }

    else if (collisionAttribute == 0x19) // Jackpot
    {
        PlaySE(SE_UNLOCK);
        sScore->GameStart = 0;
        sScore->StartDelayMax = 2;
        sScore->StartDelayTimer = sScore->StartDelayMax;
        sScore->SecondDelay = 30;
        sPinballGame->state = PACHINKO_START_JACKPOT;
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_WHITE);
    }   
    else if (collisionAttribute == 0x1F) // x2
    {
        PlaySE(SE_UNLOCK);
        PlaySE(SE_M_STAT_INCREASE);
        if (sScore->Multiplier != 3)
        {
        sScore->Multiplier = 2;
        gSprites[sScore->MultiplierSpriteId].animNum = 1;
        }
        sScore->GameStart = 0;
        sScore->StartDelayMax = 2;
        sScore->StartDelayTimer = sScore->StartDelayMax;
        sScore->SecondDelay = 30;
        gSprites[sPinballGame->ball.spriteId].invisible = TRUE;
        sPinballGame->state = PINBALL_LOST_BALL_FADE_OUT;
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_WHITE);
    }   
    else if (collisionAttribute == 0x22) // x3
    {
        PlaySE(SE_UNLOCK);
        PlaySE(SE_M_STAT_INCREASE);
        sScore->Multiplier = 3;
        sScore->GameStart = 0;
        sScore->StartDelayMax = 2;
        sScore->StartDelayTimer = sScore->StartDelayMax;
        sScore->SecondDelay = 30;
        gSprites[sScore->MultiplierSpriteId].animNum = 2;
        gSprites[sPinballGame->ball.spriteId].invisible = TRUE;
        sPinballGame->state = PINBALL_LOST_BALL_FADE_OUT;
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_WHITE);
    }   
    else if (collisionAttribute == 0x25) // Win
    {
        PlaySE(SE_UNLOCK);
        sScore->GameStart = 0;
        sScore->StartDelayMax = 2;
        sScore->StartDelayTimer = sScore->StartDelayMax;
        sScore->SecondDelay = 30;
        sPinballGame->state = PACHINKO_START_WIN;
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_WHITE);
    }   
    else if (collisionAttribute == 0x28) // Bounce
    {
        PlaySE(SE_LEDGE);
        *outYForce = 0x100;
    }   
}       

static void ApplyCollisionForces(struct Ball *ball, u16 flipperYForce, int collisionAmplification)
{
    // Only apply the collision forces if the ball is moving
    // towards the wall it collided with, which can only be
    // true if the y velocity is traveling downward in the rotated
    // coordinate system.
    if (ball->yVelocity < 0)
        return;

    // Apply dampening to the vertical velocity component, and
    // negate it so that the ball bounces off the wall.
    ball->yVelocity = -(((2 + collisionAmplification) * ball->yVelocity) / 8);
    ball->xVelocity += ball->spin / 2;
    ball->spin = (ball->xVelocity * 4) >> 8;

    ball->yVelocity -= flipperYForce;
}

static void UpdateCamera(void)
{
    int scrollX, scrollY;

    scrollX = 0; // Center the game in the middle of the screen
    scrollY = 0;

    scrollX += sPinballGame->leftTilt.counter;
    scrollX -= sPinballGame->rightTilt.counter;
    scrollY += sPinballGame->downTilt.counter;

    sPinballGame->cameraScrollX = scrollX;
    sPinballGame->cameraScrollY = scrollY;

    SetGpuReg(REG_OFFSET_BG2HOFS, scrollX);
    SetGpuReg(REG_OFFSET_BG2VOFS, scrollY);
}

static void StartExitPinballGame(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    sPinballGame->state = PINBALL_STATE_EXIT;
}

static void ExitPinballGame(void)
{
    if (!gPaletteFade.active)
    {
        FREE_AND_SET_NULL(sPinballGame->diglett.collisionMap);

        SetMainCallback2(sPinballGame->returnMainCallback);
        FREE_AND_SET_NULL(sPinballGame);
        FREE_AND_SET_NULL(sScore);
    }
}

static void UpdateBallSprite(struct Sprite *sprite)
{
    int ballAnim;
    struct Ball *ball = &sPinballGame->ball;
    sprite->x = (ball->xPos >> 8) - sPinballGame->cameraScrollX;
    sprite->y = (ball->yPos >> 8) - sPinballGame->cameraScrollY;

    ball->rotation += ball->spin;
    ballAnim = (ball->rotation >> 4) % 8;
    StartSpriteAnim(sprite, ballAnim);
}
