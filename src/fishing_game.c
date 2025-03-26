#include "global.h"
#include "battle_main.h"
#include "battle_setup.h"
#include "battle_transition.h"
#include "bg.h"
#include "decompress.h"
#include "event_data.h"
#include "field_camera.h"
#include "field_control_avatar.h"
#include "field_player_avatar.h"
#include "fishing_game.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "pokedex.h"
#include "pokemon_icon.h"
#include "random.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "tileset_anims.h"
#include "trainer_pokemon_sprites.h"
#include "tv.h"
#include "util.h"
#include "wild_encounter.h"
#include "window.h"
#include "constants/items.h"
#include "constants/rgb.h"
#include "constants/songs.h"

static void Task_UnableToUseOW(u8 taskId);
static void LoadFishingSpritesheets(void);
static void CreateMinigameSprites(u8 taskId);
static void SetFishingSpeciesBehavior(u8 spriteId, u16 species);
static void CB2_FishingGame(void);
static void Task_FishingGame(u8 taskId);
static void Task_FishingPauseUntilFadeIn(u8 taskId);
static void Task_HandleFishingGameInput(u8 taskId);
static void Task_AskWantToQuit(u8 taskId);
static void Task_HandleConfirmQuitInput(u8 taskId);
static void Task_ReeledInFish(u8 taskId);
static void Task_FishGotAway(u8 taskId);
static void Task_QuitFishing(u8 taskId);
static u8 CalculateInitialScoreMeterInterval(void);
static void CalculateScoreMeterPalette(struct Sprite *sprite);
static void UpdateHelpfulTextHigher(u8 taskId);
static void UpdateHelpfulTextLower(u8 taskId);
static void HandleScore(u8 taskId);
static void SetFishingBarPosition(u8 taskId);
static void SetMonIconPosition(u8 taskId);
static void SpriteCB_FishingBar(struct Sprite *sprite);
static void SpriteCB_FishingBarRight(struct Sprite *sprite);
static void SpriteCB_FishingMonIcon(struct Sprite *sprite);
static void SpriteCB_ScoreMeter(struct Sprite *sprite);
static void SpriteCB_ScoreMeterAdditional(struct Sprite *sprite);
static void SpriteCB_Perfect(struct Sprite *sprite);
static void SpriteCB_Other(struct Sprite *sprite);
static void CB2_FishingBattleTransition(void);
static void CB2_FishingBattleStart(void);

const u16 gFishingGameBG_Pal[] = INCBIN_U16("graphics/fishing_game/fishing_bg_tiles.gbapal");
const u32 gFishingGameBG_Tilemap[] = INCBIN_U32("graphics/fishing_game/fishing_bg_tiles.bin.lz");
const u32 gScoreBG_Tilemap[] = INCBIN_U32("graphics/fishing_game/score_bg_tilemap.bin.lz");
const u32 gFishingGameBG_Gfx[] = INCBIN_U32("graphics/fishing_game/fishing_bg_tiles.4bpp.lz");
const u32 gFishingBar_Gfx[] = INCBIN_U32("graphics/fishing_game/fishing_bar.4bpp.lz");
const u32 gFishingBarRight_Gfx[] = INCBIN_U32("graphics/fishing_game/fishing_bar_right.4bpp.lz");
static const u16 sFishingBar_Pal[] = INCBIN_U16("graphics/fishing_game/fishing_bar.gbapal");
const u32 gScoreMeter_Gfx[] = INCBIN_U32("graphics/fishing_game/score_meter.4bpp.lz");
const u32 gPerfect_Gfx[] = INCBIN_U32("graphics/fishing_game/perfect.4bpp.lz");
const u32 gQuestionMark_Gfx[] = INCBIN_U32("graphics/fishing_game/question_mark.4bpp.lz");
const u32 gVagueFish_Gfx[] = INCBIN_U32("graphics/fishing_game/vague_fish.4bpp.lz");
const u32 gFishingGameOWBG_Gfx[] = INCBIN_U32("graphics/fishing_game/fishing_bg_ow_tiles.4bpp.lz");
const u16 gFishingGameOWBG_Pal[] = INCBIN_U16("graphics/fishing_game/fishing_bg_ow_tiles.gbapal");
const u32 gFishingGameOWBG_Tilemap[] = INCBIN_U32("graphics/fishing_game/fishing_bg_ow_tiles.bin.lz");
const u32 gFishingGameOWBGEnd_Tilemap[] = INCBIN_U32("graphics/fishing_game/fishing_bg_ow_end.bin.lz");
const u32 gScoreMeterOWBehind_Gfx[] = INCBIN_U32("graphics/fishing_game/score_meter_ow_behind.4bpp.lz");

// Behavior data for individual species.
// If a species is not present in this table it will use the default behavior for the current rod type.
static const struct FishBehaviorData sFishBehavior[] =
{
    { // Old Rod default behavior.
        .species = 0,
        .speed = { .min = 2, .max = 2 },
        .distance = { .min = 5, .max = 15 },
        .delay = { .min = 40, .max = 160 },
        .idleMovement = 6
    },
    { // Good Rod default behavior.
        .species = 0,
        .speed = { .min = 3, .max = 5 },
        .distance = { .min = 15, .max = 55 },
        .delay = { .min = 80, .max = 120 },
        .idleMovement = 6
    },
    { // Super Rod default behavior.
        .species = 0,
        .speed = { .min = 8, .max = 16 },
        .distance = { .min = 10, .max = 70 },
        .delay = { .min = 15, .max = 35 },
        .idleMovement = 12
    },
// Don't add new entries above this line.

    /* EMPTY TEMPLATE
    {
        .species = ,
        .speed = { .min = , .max =  },
        .distance = { .min = , .max =  },
        .delay = { .min = , .max =  },
        .idleMovement = 
    },
    */
    {
        .species = SPECIES_TENTACOOL,
        .speed = { .min = 3, .max = 5 },
        .distance = { .min = 25, .max = 55 },
        .delay = { .min = 80, .max = 120 },
        .idleMovement = 6
    },
    {
        .species = SPECIES_TENTACRUEL,
        .speed = { .min = 8, .max = 10 },
        .distance = { .min = 25, .max = 75 },
        .delay = { .min = 80, .max = 120 },
        .idleMovement = 8
    },
    {
        .species = SPECIES_HORSEA,
        .speed = { .min = 4, .max = 10 },
        .distance = { .min = 40, .max = 80 },
        .delay = { .min = 30, .max = 70 },
        .idleMovement = 7
    },
    {
        .species = SPECIES_GOLDEEN,
        .speed = { .min = 4, .max = 10 },
        .distance = { .min = 60, .max = 80 },
        .delay = { .min = 170, .max = 190 },
        .idleMovement = 4
    },
    {
        .species = SPECIES_SEAKING,
        .speed = { .min = 6, .max = 12 },
        .distance = { .min = 50, .max = 90 },
        .delay = { .min = 100, .max = 140 },
        .idleMovement = 6
    },
    {
        .species = SPECIES_STARYU,
        .speed = { .min = 7, .max = 13 },
        .distance = { .min = 15, .max = 45 },
        .delay = { .min = 20, .max = 80 },
        .idleMovement = 5
    },
    {
        .species = SPECIES_MAGIKARP,
        .speed = { .min = 2, .max = 2 },
        .distance = { .min = 5, .max = 15 },
        .delay = { .min = 40, .max = 160 },
        .idleMovement = 6
    },
    {
        .species = SPECIES_GYARADOS,
        .speed = { .min = 8, .max = 16 },
        .distance = { .min = 30, .max = 70 },
        .delay = { .min = 15, .max = 35 },
        .idleMovement = 12
    },
    {
        .species = SPECIES_CORSOLA,
        .speed = { .min = 4, .max = 8 },
        .distance = { .min = 10, .max = 70 },
        .delay = { .min = 55, .max = 95 },
        .idleMovement = 1
    },
    {
        .species = SPECIES_CARVANHA,
        .speed = { .min = 7, .max = 13 },
        .distance = { .min = 15, .max = 25 },
        .delay = { .min = 30, .max = 70 },
        .idleMovement = 15
    },
    {
        .species = SPECIES_SHARPEDO,
        .speed = { .min = 10, .max = 30 },
        .distance = { .min = 55, .max = 95 },
        .delay = { .min = 70, .max = 90 },
        .idleMovement = 20
    },
    {
        .species = SPECIES_WAILMER,
        .speed = { .min = 6, .max = 8 },
        .distance = { .min = 60, .max = 140 },
        .delay = { .min = 10, .max = 20 },
        .idleMovement = 2
    },
    {
        .species = SPECIES_BARBOACH,
        .speed = { .min = 4, .max = 8 },
        .distance = { .min = 10, .max = 40 },
        .delay = { .min = 45, .max = 75 },
        .idleMovement = 6
    },
    {
        .species = SPECIES_WHISCASH,
        .speed = { .min = 8, .max = 12 },
        .distance = { .min = 25, .max = 55 },
        .delay = { .min = 30, .max = 60 },
        .idleMovement = 5
    },
    {
        .species = SPECIES_CORPHISH,
        .speed = { .min = 7, .max = 13 },
        .distance = { .min = 4, .max = 10 },
        .delay = { .min = 30, .max = 70 },
        .idleMovement = 8
    },
    {
        .species = SPECIES_FEEBAS,
        .speed = { .min = 4, .max = 6 },
        .distance = { .min = 8, .max = 22 },
        .delay = { .min = 40, .max = 140 },
        .idleMovement = 6
    },
    {
        .species = SPECIES_LUVDISC,
        .speed = { .min = 6, .max = 8 },
        .distance = { .min = 35, .max = 65 },
        .delay = { .min = 10, .max = 40 },
        .idleMovement = 3
    }
};

static const u16 gBarColors[] =
{
    // The colors of the fishing bar when the fish is inside it.
    [INSIDE_1] = RGB(13, 23, 6),
    [INSIDE_2] = RGB(19, 28, 10),
    [INSIDE_3] = RGB(18, 30, 6),
    // The colors of the fishing bar when the fish is outside it.
    [OUTSIDE_1] = RGB(16, 23, 12),
    [OUTSIDE_2] = RGB(22, 28, 16),
    [OUTSIDE_3] = RGB(24, 31, 16)
};

const u8 * const sHelpfulTextTable[6] =
{
    gText_HelpfulTextHigher0,
    gText_HelpfulTextHigher1,
    gText_HelpfulTextHigher2,
    gText_HelpfulTextLower0,
    gText_HelpfulTextLower1,
    gText_HelpfulTextLower2
};

static const struct WindowTemplate sWindowTemplates[] =
{
    {
        .bg = 0,
        .tilemapLeft = 3,
        .tilemapTop = 15,
        .width = 24,
        .height = 4,
        .paletteNum = 14,
        .baseBlock = 0x0200
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sWindowTemplate_AskQuit =
{
    .bg = 0,
    .tilemapLeft = 24,
    .tilemapTop = 9,
    .width = 5,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x0260
};

static const struct BgTemplate sBgTemplates[3] =
{
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 7,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 0,
        .mapBaseIndex = 6,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    },
};

static const struct BgTemplate sOWBgTemplates[1] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
};

static const struct OamData sOam_FishingBar =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct OamData sOam_ScoreMeter =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct OamData sOam_Perfect =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x8),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x8),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct OamData sOam_UnknownFish =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct CompressedSpriteSheet sSpriteSheets_FishingGame[] =
{
    [FISHING_BAR] = {
        .data = gFishingBar_Gfx,
        .size = 256,
        .tag = TAG_FISHING_BAR
    },
    [FISHING_BAR_RIGHT] = {
        .data = gFishingBarRight_Gfx,
        .size = 256,
        .tag = TAG_FISHING_BAR_RIGHT
    },
    [SCORE_METER] = {
        .data = gScoreMeter_Gfx,
        .size = 1024,
        .tag = TAG_SCORE_METER
    },
    [PERFECT] = {
        .data = gPerfect_Gfx,
        .size = 128,
        .tag = TAG_PERFECT
    },
    [QUESTION_MARK] = {
        .data = gQuestionMark_Gfx,
        .size = 512,
        .tag = TAG_QUESTION_MARK
    },
    [VAGUE_FISH] = {
        .data = gVagueFish_Gfx,
        .size = 1024,
        .tag = TAG_VAGUE_FISH
    },
    [SCORE_METER_BACKING] = {
        .data = gScoreMeterOWBehind_Gfx,
        .size = 1024,
        .tag = TAG_SCORE_BACKING
    }
};

static const struct SpritePalette sSpritePalettes_FishingGame[] =
{
    {
        .data = sFishingBar_Pal,
        .tag = TAG_FISHING_BAR
    },
    {NULL},
};

static const union AnimCmd sAnim_VagueFish[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(16, 10),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd * const sAnims_VagueFish[] =
{
    sAnim_VagueFish,
};

static const struct SpriteTemplate sSpriteTemplate_FishingBar =
{
    .tileTag = TAG_FISHING_BAR,
    .paletteTag = TAG_FISHING_BAR,
    .oam = &sOam_FishingBar,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_FishingBar
};

static const struct SpriteTemplate sSpriteTemplate_FishingBarRight =
{
    .tileTag = TAG_FISHING_BAR_RIGHT,
    .paletteTag = TAG_FISHING_BAR,
    .oam = &sOam_FishingBar,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_FishingBarRight
};

static const struct SpriteTemplate sSpriteTemplate_ScoreMeter =
{
    .tileTag = TAG_SCORE_METER,
    .paletteTag = TAG_FISHING_BAR,
    .oam = &sOam_ScoreMeter,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_ScoreMeter
};

static const struct SpriteTemplate sSpriteTemplate_Perfect =
{
    .tileTag = TAG_PERFECT,
    .paletteTag = TAG_FISHING_BAR,
    .oam = &sOam_Perfect,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Perfect
};

static const struct SpriteTemplate sSpriteTemplate_QuestionMark =
{
    .tileTag = TAG_QUESTION_MARK,
    .paletteTag = TAG_FISHING_BAR,
    .oam = &sOam_UnknownFish,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Other
};

static const struct SpriteTemplate sSpriteTemplate_VagueFish =
{
    .tileTag = TAG_VAGUE_FISH,
    .paletteTag = TAG_FISHING_BAR,
    .oam = &sOam_UnknownFish,
    .anims = sAnims_VagueFish,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_FishingMonIcon
};

static const struct SpriteTemplate sSpriteTemplate_ScoreMeterBacking =
{
    .tileTag = TAG_SCORE_BACKING,
    .paletteTag = TAG_FISHING_BAR,
    .oam = &sOam_ScoreMeter,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Other
};

static void VblankCB_FishingGame(void)
{
    RunTextPrinters();
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

// Data for Tasks
#define tFrameCounter       data[0]
#define tFishIconSpriteId   data[1]
#define tBarLeftSpriteId    data[2]
#define tScoreMeterSpriteId data[3]
#define tQMarkSpriteId      data[4]
#define tFishSpeedCounter   data[5]
#define tInitialFishSpeed   data[6]
#define tScore              data[7]
#define tScoreDirection     data[8]
#define tFishIsMoving       data[9]
#define tVagueFish          data[10]
#define tMonIconPalNum      data[11]
#define tPaused             data[12]
#define tSeparateScreen     data[13]
#define tPlayerGFXId        data[14]
#define tRodType            data[15]

// Data for all sprites
#define sTaskId             data[0]

// Data for Fishing Bar sprite
#define sBarPosition        data[1]
#define sBarSpeed           data[2]
#define sBarDirection       data[3]
#define sBarWidth           data[4]

// Data for Mon Icon sprite
#define sFishPosition       data[1]
#define sFishSpeed          data[2]
#define sTimeToNextMove     data[3]
#define sFishDestination    data[4]
#define sFishDestInterval   data[5]
#define sFishDirection      data[6]
#define sFishSpecies        data[7]

// Data for Score Meter sprites
#define sScorePosition      data[1]
#define sScoreWinCheck      data[2]
#define sCurrColorInterval  data[3]
#define sScoreThird         data[4]
#define sTextCooldown       data[5]
#define sPerfectCatch       data[6]

// Data for Perfect sprite
#define sPerfectFrameCount  data[1]
#define sPerfectMoveFrames  data[2]

#define taskData            gTasks[taskId]

void CB2_InitFishingMinigame(void)
{
    u8 taskId;
    u8 oldTaskId;

    SetVBlankCallback(NULL);

    ChangeBgX(0, 0, BG_COORD_SET);
    ChangeBgY(0, 0, BG_COORD_SET);
    ChangeBgX(2, 0, BG_COORD_SET);
    ChangeBgY(2, 0, BG_COORD_SET);
    ChangeBgX(3, 0, BG_COORD_SET);
    ChangeBgY(3, 0, BG_COORD_SET);

    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);

    LZ77UnCompVram(gFishingGameBG_Gfx, (void *)VRAM);
    LZ77UnCompVram(gScoreBG_Tilemap, (void *)(BG_SCREEN_ADDR(6)));
    LZ77UnCompVram(gFishingGameBG_Tilemap, (void *)(BG_SCREEN_ADDR(7)));

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    InitWindows(sWindowTemplates);

    DeactivateAllTextPrinters();
    ClearScheduledBgCopiesToVram();
    ScanlineEffect_Stop();
    ResetSpriteData();
    ResetPaletteFade();
    FreeAllSpritePalettes();
    ResetAllPicSprites();

    LoadPalette(gFishingGameBG_Pal, BG_PLTT_ID(0), 3 * PLTT_SIZE_4BPP);
    LoadPalette(GetOverworldTextboxPalettePtr(), BG_PLTT_ID(14), PLTT_SIZE_4BPP);
    LoadUserWindowBorderGfx(0, 0x2A8, BG_PLTT_ID(13));
    LoadFishingSpritesheets();
    LoadSpritePalettes(sSpritePalettes_FishingGame);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);

    EnableInterrupts(DISPSTAT_VBLANK);
    SetVBlankCallback(VblankCB_FishingGame);
    SetMainCallback2(CB2_FishingGame);

    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);

    ShowBg(0);
    ShowBg(2);
    ShowBg(3);
    
    oldTaskId = FindTaskIdByFunc(Task_Fishing);
    if (oldTaskId == TASK_NONE)
        oldTaskId = FindTaskIdByFunc(Task_UnableToUseOW);
    taskId = CreateTask(Task_FishingGame, 0);
    taskData.tSeparateScreen = TRUE;
    taskData.tRodType = gTasks[oldTaskId].tRodType;
    DestroyTask(oldTaskId);

    CreateMinigameSprites(taskId);
}

void Task_InitOWFishingMinigame(u8 taskId)
{
    void *tilemapBuffer;
    
    LoadSpritePalettes(sSpritePalettes_FishingGame);

    // If the sprite palettes couldn't be loaded, do the minigame on a separate screen.
    if (IndexOfSpritePaletteTag(TAG_FISHING_BAR) == 0xFF)
    {
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        taskData.tFrameCounter = 0;
        taskData.func = Task_UnableToUseOW;
        return;
    }

    tilemapBuffer = AllocZeroed(GetDecompressedDataSize(gFishingGameOWBG_Gfx));
    LZDecompressWram(gFishingGameOWBG_Gfx, tilemapBuffer);
    CopyToBgTilemapBuffer(0, gFishingGameOWBG_Tilemap, 0, 0);
    CopyBgTilemapBufferToVram(0);
    LoadPalette(gFishingGameOWBG_Pal, BG_PLTT_ID(13), PLTT_SIZE_4BPP);
    LoadBgTiles(0, tilemapBuffer, GetDecompressedDataSize(gFishingGameOWBG_Gfx), 0);
    LoadMessageBoxAndFrameGfx(0, TRUE);
    LoadFishingSpritesheets();

    taskData.tSeparateScreen = FALSE;
    CreateMinigameSprites(taskId);

    taskData.func = Task_FishingGame;
}

static void Task_UnableToUseOW(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        if (taskData.tFrameCounter == 0)
        {
            ResetPlayerAvatar(taskData.tPlayerGFXId);
            taskData.tFrameCounter++;
        }

        if (taskData.tFrameCounter == 1)
        {
            PlayBGM(MUS_TRICK_HOUSE);
            SetMainCallback2(CB2_InitFishingMinigame);
            gMain.savedCallback = CB2_ReturnToField;
            taskData.tFrameCounter++;
        }
    }
}

static void LoadFishingSpritesheets(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheets_FishingGame[SCORE_METER]);
    LoadCompressedSpriteSheet(&sSpriteSheets_FishingGame[FISHING_BAR]);
    LoadCompressedSpriteSheet(&sSpriteSheets_FishingGame[FISHING_BAR_RIGHT]);
    if (MINIGAME_ON_SEPARATE_SCREEN == FALSE)
        LoadCompressedSpriteSheet(&sSpriteSheets_FishingGame[SCORE_METER_BACKING]);
}

#define spriteData  gSprites[spriteId]

static void CreateMinigameSprites(u8 taskId)
{
    u8 spriteId;
    u8 y;
    u8 i;
    u8 sections = NUM_SCORE_SECTIONS;
    u16 species = GetMonData(&gEnemyParty[0], MON_DATA_SPECIES);
    u8 iconPalSlot = LoadMonIconPaletteGetIndex(species, GetMonData(&gEnemyParty[0], MON_DATA_PERSONALITY));

    taskData.tPaused = TRUE; // Pause the sprite animations/movements until the game starts.
    taskData.tScore = STARTING_SCORE; // Set the starting score.
    taskData.tScoreDirection = FISH_DIR_RIGHT;

    // Create fishing bar sprites.
    if (taskData.tSeparateScreen)
        y = FISHING_BAR_Y;
    else
        y = OW_FISHING_BAR_Y;
    spriteId = CreateSprite(&sSpriteTemplate_FishingBar, FISHING_BAR_START_X, y, 0);
    spriteData.sTaskId = taskId;
    if (!taskData.tSeparateScreen)
        spriteData.oam.priority--;
    spriteData.subpriority = 2;
    spriteData.sBarDirection = FISH_DIR_RIGHT;
    spriteData.sBarWidth = OLD_ROD_BAR_WIDTH;
    taskData.tBarLeftSpriteId = spriteId;

    // Set width of fishing bar.
    if (BAR_WIDTH_FROM_ROD_TYPE == TRUE)
    {
        switch (taskData.tRodType)
        {
        case GOOD_ROD:
            spriteData.sBarWidth = GOOD_ROD_BAR_WIDTH;
            break;
        case SUPER_ROD:
            spriteData.sBarWidth = SUPER_ROD_BAR_WIDTH;
            break;
        }
    }
    if (spriteData.sBarWidth > FISHING_BAR_WIDTH_MAX)
        spriteData.sBarWidth = FISHING_BAR_WIDTH_MAX;
    else if (spriteData.sBarWidth < FISHING_BAR_WIDTH_MIN)
        spriteData.sBarWidth = FISHING_BAR_WIDTH_MIN;
    
    spriteId = CreateSprite(&sSpriteTemplate_FishingBarRight, (FISHING_BAR_START_X + (spriteData.sBarWidth - FISHING_BAR_SEGMENT_WIDTH)), y, 0);
    spriteData.sTaskId = taskId;
    if (!taskData.tSeparateScreen)
        spriteData.oam.priority--;
    spriteData.subpriority = 2;

    // Create mon icon sprite.
    if (taskData.tSeparateScreen)
        y = FISH_ICON_Y;
    else
        y = OW_FISH_ICON_Y;
    taskData.tQMarkSpriteId = 200;
    if (OBSCURE_ALL_FISH == TRUE || iconPalSlot == 255
        || (OBSCURE_UNDISCOVERED_MONS == TRUE && !GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_SEEN)))
    {
        if (VAGUE_FISH_FOR_OBSCURED == TRUE || iconPalSlot == 255)
        {
            LoadCompressedSpriteSheet(&sSpriteSheets_FishingGame[VAGUE_FISH]);
            spriteId = CreateSprite(&sSpriteTemplate_VagueFish, FISH_ICON_START_X, y, 0);
            taskData.tVagueFish = TRUE;
            if (!taskData.tSeparateScreen)
                spriteData.oam.priority--;
            spriteData.sTaskId = taskId;
        }
        else
        {
            LoadCompressedSpriteSheet(&sSpriteSheets_FishingGame[QUESTION_MARK]);
            FillPalette(RGB_BLACK, OBJ_PLTT_ID(iconPalSlot), PLTT_SIZE_4BPP);
            spriteId = CreateSprite(&sSpriteTemplate_QuestionMark, FISH_ICON_START_X, y, 0);
            taskData.tQMarkSpriteId = spriteId;
            if (!taskData.tSeparateScreen)
                spriteData.oam.priority--;
            spriteData.sTaskId = taskId;
            spriteId = CreateMonIcon(species, SpriteCB_FishingMonIcon, FISH_ICON_START_X, y, 1, GetMonData(&gEnemyParty[0], MON_DATA_PERSONALITY));
        }
    }
    else
    {
        spriteId = CreateMonIcon(species, SpriteCB_FishingMonIcon, FISH_ICON_START_X, y, 1, GetMonData(&gEnemyParty[0], MON_DATA_PERSONALITY));

    }
    spriteData.sTaskId = taskId;
    spriteData.oam.priority = 1;
    if (!taskData.tSeparateScreen)
        spriteData.oam.priority--;
    spriteData.subpriority = 1;
    spriteData.sFishPosition = (FISH_ICON_START_X - FISH_ICON_MIN_X) * POSITION_ADJUSTMENT;
    spriteData.sTimeToNextMove = (FISH_FIRST_MOVE_DELAY * 60);
    spriteData.sFishSpecies += taskData.tRodType;
    SetFishingSpeciesBehavior(spriteId, species);
    taskData.tFishIconSpriteId = spriteId;

    // Create score meter sprite.
    if (taskData.tSeparateScreen)
        y = SCORE_SECTION_Y;
    else
        y = OW_SCORE_SECTION_Y;
    spriteId = CreateSprite(&sSpriteTemplate_ScoreMeter, SCORE_SECTION_INIT_X, y, 0);
    spriteData.sTaskId = taskId;
    if (!taskData.tSeparateScreen)
        spriteData.oam.priority--;
    spriteData.sScorePosition = (STARTING_SCORE / SCORE_INTERVAL);
    spriteData.sScoreThird = (spriteData.sScorePosition / SCORE_THIRD_SIZE);
    spriteData.sCurrColorInterval = CalculateInitialScoreMeterInterval();
    spriteData.sPerfectCatch = TRUE; // Allow a perfect catch.
    taskData.tScoreMeterSpriteId = spriteId;

    // Create enough score meter sprites to fill the whole score area.
    if (SCORE_AREA_WIDTH > SCORE_SECTION_WIDTH)
    {
        if (((SCORE_AREA_WIDTH * 100) % SCORE_SECTION_WIDTH) > 0)
            sections++;

        for (i = 1; i <= (sections - 1); i++)
        {
            spriteId = CreateSprite(&sSpriteTemplate_ScoreMeter, (SCORE_SECTION_INIT_X - (SCORE_SECTION_WIDTH * i)), y, 0);
            spriteData.callback = SpriteCB_ScoreMeterAdditional;
            spriteData.sTaskId = taskId;
            if (!taskData.tSeparateScreen)
                spriteData.oam.priority--;
        }
    }
            
    // Create gray sprites as backing to score meter in OW.
    if (!taskData.tSeparateScreen)
    {
        for (i = 1; i <= (sections); i++)
        {
            spriteId = CreateSprite(&sSpriteTemplate_ScoreMeterBacking, ((SCORE_SECTION_WIDTH * i) - SCORE_BAR_OFFSET), y, 1);
            spriteData.oam.priority--;
            spriteData.sTaskId = taskId;
        }
    }
}

static void SetFishingSpeciesBehavior(u8 spriteId, u16 species)
{
    u8 i;

    for (i = NUM_DEFAULT_BEHAVIORS; i < ARRAY_COUNT(sFishBehavior); i++)
    {
        if (sFishBehavior[i].species == species)
        {
            spriteData.sFishSpecies = i;
            return;
        }
    }
}

static void CB2_FishingGame(void)
{
    RunTasks();
    RunTextPrinters();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void Task_FishingGame(u8 taskId)
{
    if (taskData.tSeparateScreen)
        DrawStdFrameWithCustomTileAndPalette(0, FALSE, 0x2A8, 0xD);
    else
        LoadUserWindowBorderGfx(0, 0x2A8, BG_PLTT_ID(14));
    AddTextPrinterParameterized(0, FONT_NORMAL, gText_ReelItIn, 0, 1, 0, NULL); // Show the fishing game instructions.
    ScheduleBgCopyTilemapToVram(0);
    taskData.func = Task_FishingPauseUntilFadeIn;
}

static void Task_FishingPauseUntilFadeIn(u8 taskId)
{
    RunTextPrinters();

    if (!gPaletteFade.active && taskData.tSeparateScreen) // Keep the game paused until the screen has fully faded in.
    {
        taskData.tPaused = FALSE; // Unpause.
        taskData.func = Task_HandleFishingGameInput;
        taskData.tFrameCounter = 0;
    }
    else if (taskData.tFrameCounter == OW_PAUSE_BEFORE_START && !taskData.tSeparateScreen)
    {
        taskData.tPaused = FALSE; // Unpause.
        taskData.func = Task_HandleFishingGameInput;
        taskData.tFrameCounter = 0;
    }
    taskData.tFrameCounter++;
}

static void Task_HandleFishingGameInput(u8 taskId)
{
    RunTextPrinters();
    HandleScore(taskId);
    SetFishingBarPosition(taskId);
    SetMonIconPosition(taskId);

    if (JOY_NEW(B_BUTTON)) // If the B Button is pressed.
    {
        taskData.tPaused = TRUE; // Pause the game.
        taskData.func = Task_AskWantToQuit;
    }

    if (!taskData.tFishIsMoving && taskData.tPaused == FALSE) // If the fish is not doing a movement and the game isn't paused.
        taskData.tFrameCounter++; // The time until the next fish movement is decreased.
}

static void Task_AskWantToQuit(u8 taskId)
{
    if (!taskData.tSeparateScreen)
        AlignFishingAnimationFrames();
    FillWindowPixelBuffer(0, PIXEL_FILL(1));
    AddTextPrinterParameterized(0, FONT_NORMAL, gText_FishingWantToQuit, 0, 1, 1, NULL); // Ask to quit the game.
    ScheduleBgCopyTilemapToVram(0);
    RunTextPrinters();
    if (taskData.tSeparateScreen)
        CreateYesNoMenu(&sWindowTemplate_AskQuit, 0x2A8, 13, 0); // Display the YES/NO option box.
    else
        CreateYesNoMenu(&sWindowTemplate_AskQuit, 0x2A8, 14, 0); // Display the YES/NO option box.
    taskData.func = Task_HandleConfirmQuitInput;
}

static void Task_HandleConfirmQuitInput(u8 taskId)
{
    RunTextPrinters();
    switch (Menu_ProcessInputNoWrapClearOnChoose())
    {
    case 0:  // YES
        if (taskData.tSeparateScreen)
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK); // Fade the screen to black.
        else
            ClearDialogWindowAndFrame(0, TRUE);
        PlaySE(SE_FLEE);
        taskData.func = Task_QuitFishing;
        break;
    case 1:  // NO
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized(0, FONT_NORMAL, gText_ReelItIn, 0, 1, 0, NULL); // Show the instructions again.
        taskData.tPaused = FALSE; // Unpause the game.
        taskData.func = Task_HandleFishingGameInput;
        break;
    }
}

static void Task_ReeledInFish(u8 taskId)
{
    RunTextPrinters();
    if (taskData.tFrameCounter == 0)
    {
        if (gSprites[taskData.tScoreMeterSpriteId].sPerfectCatch == TRUE) // If it was a perfect catch.
        {
            u8 spriteId;

            PlaySE(SE_RG_POKE_JUMP_SUCCESS);
            LoadCompressedSpriteSheet(&sSpriteSheets_FishingGame[PERFECT]);
            if (!taskData.tSeparateScreen)
                spriteId = CreateSprite(&sSpriteTemplate_Perfect, PERFECT_X, OW_PERFECT_Y, 0);
            else
                spriteId = CreateSprite(&sSpriteTemplate_Perfect, PERFECT_X, PERFECT_Y, 0);
            if (PERFECT_CHAIN_INCREASE == TRUE)
                UpdateChainFishingStreak();
            spriteData.sTaskId = taskId;
        }
        else // If it wasn't a perfect catch.
        {
            PlaySE(SE_PIN);
        }

        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized2(0, FONT_NORMAL, gText_ReeledInAPokemon, 1, 0, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY); // Congratulations text.
        taskData.tFrameCounter++;
    }

    if (taskData.tFrameCounter == 1)
    {
        if (!IsTextPrinterActive(0))
        {
            IncrementGameStat(GAME_STAT_FISHING_ENCOUNTERS);
            SetMainCallback2(CB2_FishingBattleTransition);
            taskData.tFrameCounter++;
        }
    }
}

static void Task_FishGotAway(u8 taskId)
{
    if (taskData.tFrameCounter == 0)
    {
        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        AddTextPrinterParameterized2(0, FONT_NORMAL, gText_PokemonGotAway, 1, 0, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY); // Failure text.
        PlaySE(SE_FLEE);
        taskData.tFrameCounter++;
        return;
    }

    RunTextPrinters();

    if (taskData.tFrameCounter == 1)
    {
        if (!IsTextPrinterActive(0)) // If a button was pressed.
        {
            if (taskData.tSeparateScreen)
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK); // Fade the screen to black.
            else
                ClearDialogWindowAndFrame(0, TRUE);
            taskData.func = Task_QuitFishing;
        }
    }
}

static void Task_QuitFishing(u8 taskId)
{
    RunTextPrinters();
    if (!gPaletteFade.active) // If the screen has fully faded to black.
    {
        if (!taskData.tSeparateScreen)
        {
            taskData.data[8] = TRUE; // Don't show any more text boxes.
            taskData.data[0] = 15; // Set Task_Fishing to run Fishing_GotAway.
            CopyToBgTilemapBuffer(0, gFishingGameOWBGEnd_Tilemap, 0, 0);
            CopyBgTilemapBufferToVram(0);
            taskData.tPaused = 3;
            taskData.func = Task_Fishing;
        }
        else
        {
            ResetAllPicSprites();
            PlayBGM(GetCurrLocationDefaultMusic()); // Play the map's default music.
            SetMainCallback2(gMain.savedCallback);
            DestroyTask(taskId); // Stop the fishing game task.
        }
    }
}

#define palStart       OBJ_PLTT_ID(IndexOfSpritePaletteTag(TAG_FISHING_BAR))

static u8 CalculateInitialScoreMeterInterval(void)
{
    u8 i;
    u8 startColorInterval = 0;
    u8 r = 31; // Max out the red level.
    u8 g = 0;

    for (i = 0; i <= (STARTING_SCORE / SCORE_INTERVAL); i += SCORE_COLOR_INTERVAL) // Set the starting color interval based on the starting score.
    {
        startColorInterval++;
    }

    if (startColorInterval < (NUM_COLOR_INTERVALS / 2)) // If the starting score interval is less than half of the total number of intervals.
    {
        g = (startColorInterval); // Set the green level to match the interval.
    }
    else
    {
        g = 31; // Max out the green level.
        r -= (startColorInterval - (NUM_COLOR_INTERVALS / 2)); // Set the red level to match the interval.
    }

    FillPalette(RGB(r, g, 0), (palStart + SCORE_COLOR_NUM), PLTT_SIZEOF(1)); // Set the score meter palette to the new color value.

    return startColorInterval;
}

static void CalculateScoreMeterPalette(struct Sprite *sprite)
{
    u8 r = 31;
    u8 g = 0;

    if (sprite->sCurrColorInterval > NUM_COLOR_INTERVALS) // Cannot exceed the maximum color interval.
        sprite->sCurrColorInterval = NUM_COLOR_INTERVALS;

    if (sprite->sCurrColorInterval <= (NUM_COLOR_INTERVALS / 2)) // If the score meter is less than half full.
    {
        g = (sprite->sCurrColorInterval - 1); // Set the green level to match the interval.
    }
    else
    {
        g = 31; // Max out the green level.
        r -= ((sprite->sCurrColorInterval - 1) - (NUM_COLOR_INTERVALS / 2)); // Set the red level to match the interval.
    }

    FillPalette(RGB(r, g, 0), (palStart + SCORE_COLOR_NUM), PLTT_SIZEOF(1)); // Set the score meter palette to the new color value.
}

#define scoreMeterData  gSprites[taskData.tScoreMeterSpriteId]

static void UpdateHelpfulTextHigher(u8 taskId)
{
    FillWindowPixelBuffer(0, PIXEL_FILL(1));
    AddTextPrinterParameterized(0, FONT_NORMAL, sHelpfulTextTable[scoreMeterData.sScoreThird], 0, 1, 1, NULL); // Print the helpful text that corresponds with the current score third.
    scoreMeterData.sTextCooldown = 60; // Reset the text cooldown counter.
}

static void UpdateHelpfulTextLower(u8 taskId)
{
    FillWindowPixelBuffer(0, PIXEL_FILL(1));
    AddTextPrinterParameterized(0, FONT_NORMAL, sHelpfulTextTable[scoreMeterData.sScoreThird + 3], 0, 1, 1, NULL); // Print the helpful text that corresponds with the current score third.
    scoreMeterData.sTextCooldown = 60; // Reset the text cooldown counter.
}

#define barData         gSprites[taskData.tBarLeftSpriteId]
#define fishData        gSprites[taskData.tFishIconSpriteId]
#define fishCenter      (fishData.sFishPosition + ((FISH_ICON_WIDTH / 4) * POSITION_ADJUSTMENT))
#define barLeftEdge     barData.sBarPosition
#define barRightEdge    (barLeftEdge + (barData.sBarWidth * POSITION_ADJUSTMENT))
#define barMax          ((FISHING_AREA_WIDTH - barData.sBarWidth) * POSITION_ADJUSTMENT)
#define fishHBLeftEdge  (fishCenter - ((FISH_ICON_HITBOX_WIDTH / 2) * POSITION_ADJUSTMENT))
#define fishHBRightEdge (fishCenter + ((FISH_ICON_HITBOX_WIDTH / 2) * POSITION_ADJUSTMENT))

static void HandleScore(u8 taskId)
{
    if (fishHBLeftEdge <= barRightEdge && fishHBRightEdge >= barLeftEdge) // If the fish hitbox is within the fishing bar.
    {
        taskData.tScore += SCORE_INCREASE; // Increase the score.

        if (taskData.tScoreDirection == FISH_DIR_LEFT) // Only on the frame when the fish enters the fishing bar area.
        {
            FillPalette(gBarColors[INSIDE_1], (palStart + 1), PLTT_SIZEOF(1));
            FillPalette(gBarColors[INSIDE_2], (palStart + 2), PLTT_SIZEOF(1));
            FillPalette(gBarColors[INSIDE_3], (palStart + 3), PLTT_SIZEOF(1));
            taskData.tScoreDirection = FISH_DIR_RIGHT; // Change the direction the score meter is moving.

            if (scoreMeterData.sTextCooldown < 30) // If there is less than half a second left on the text cooldown counter.
            {
                UpdateHelpfulTextHigher(taskId); // Display the appropriate helpful text.
            }
        }
    }
    else // If the fish hitbox is outside the fishing bar.
    {
        taskData.tScore -= SCORE_DECREASE; // Decrease the score.
        gSprites[taskData.tScoreMeterSpriteId].sPerfectCatch = FALSE; // Can no longer achieve a perfect catch.

        if (taskData.tScoreDirection == FISH_DIR_RIGHT) // Only on the frame when the fish exits the fishing bar area.
        {
            FillPalette(gBarColors[OUTSIDE_1], (palStart + 1), PLTT_SIZEOF(1));
            FillPalette(gBarColors[OUTSIDE_2], (palStart + 2), PLTT_SIZEOF(1));
            FillPalette(gBarColors[OUTSIDE_3], (palStart + 3), PLTT_SIZEOF(1));
            taskData.tScoreDirection = FISH_DIR_LEFT; // Change the direction the score meter is moving.

            if (scoreMeterData.sTextCooldown < 30) // If there is less than half a second left on the text cooldown counter.
            {
                UpdateHelpfulTextLower(taskId); // Display the appropriate helpful text.
            }
        }
    }

    if (taskData.tScore >= SCORE_MAX) // If the score goal has been achieved.
    {
        taskData.tPaused = TRUE; // Freeze all sprite animations/movements.
        taskData.tFrameCounter = 0; // Reset the frame counter.
        taskData.func = Task_ReeledInFish;
    }

    if (taskData.tScore <= 0) // If the score has hit 0.
    {
        taskData.tPaused = TRUE; // Freeze all sprite animations/movements.
        taskData.tFrameCounter = 0; // Reset the frame counter.
        taskData.func = Task_FishGotAway;
    }
}

static void SetFishingBarPosition(u8 taskId)
{
    if (JOY_NEW(A_BUTTON) || JOY_HELD(A_BUTTON)) // If the A Button is pressed.
    {
        u8 increment;

        if (barData.sBarDirection == FISH_DIR_LEFT) // If the bar is traveling to left.
        {
            if (barData.sBarSpeed == 0) // If the bar is not moving, switch directions.
                barData.sBarDirection = FISH_DIR_RIGHT;
            else
                barData.sBarSpeed--; // Decrease the bar speed.

            increment = (barData.sBarSpeed / BAR_SPEED_MODIFIER);

            if (barData.sBarPosition > 0 && barData.sBarPosition > increment) // If the bar won't exceed the left edge.
                barData.sBarPosition -= increment; // Move the bar to the left.
            else if (barData.sBarPosition < increment)
                barData.sBarPosition = 0; // Does not exceed left edge.
        }
        else if (barData.sBarDirection == FISH_DIR_RIGHT) // If the bar is traveling to right.
        {
            if (barData.sBarSpeed < FISHING_BAR_MAX_SPEED) // If the bar speed isn't at max.
                barData.sBarSpeed++; // Increase the bar speed.

            increment = (barData.sBarSpeed / BAR_SPEED_MODIFIER);

            if (barData.sBarPosition < barMax) // If the bar isn't against the right edge.
            {
                if ((barData.sBarPosition + increment) > barMax) // If the bar movement would exceed the right edge.
                    barData.sBarPosition = barMax; // Set the bar along the right edge.
                else
                    barData.sBarPosition += increment; // Move the bar to the right.
            }
        }
    }
    else // The A Button is not pressed.
    {
        u8 increment;
                
        if (barData.sBarDirection == FISH_DIR_RIGHT) // If the bar is traveling to right.
        {
            if (barData.sBarSpeed == 0 && barData.sBarPosition != 0) // If the bar isn't moving and isn't against the left edge, switch directions.
                barData.sBarDirection = FISH_DIR_LEFT;
            else if (barData.sBarSpeed > 0) // If the bar is moving.
                barData.sBarSpeed--; // Decrease the bar speed.
                
            increment = (barData.sBarSpeed / BAR_SPEED_MODIFIER);

            if ((barData.sBarPosition + increment) <= barMax) // If the bar won't exceed the right edge.
                barData.sBarPosition += increment; // Move the bar to the right.
            else
                barData.sBarPosition = barMax; // Set the bar along the right edge.
        }
        else if (barData.sBarDirection == FISH_DIR_LEFT) // If the bar is traveling to left.
        {
            if (barData.sBarSpeed < FISHING_BAR_MAX_SPEED && barData.sBarPosition > 0) // If the bar speed isn't at max and the bar isn't against the left edge.
                barData.sBarSpeed++; // Increase the bar speed.

            increment = (barData.sBarSpeed / BAR_SPEED_MODIFIER);

            if (barData.sBarPosition > 0) // If the bar isn't against the left edge.
            {
                if ((barData.sBarPosition - increment) < 0) // If the bar movement would exceed the left edge.
                    barData.sBarPosition = 0; // Set the bar along the left edge.
                else
                    barData.sBarPosition -= increment; // Move the bar to the left.
            }
        }
    }
}

#define sFishIconData            gSprites[taskData.tFishIconSpriteId]
#define sBehavior               sFishBehavior[sFishIconData.sFishSpecies]
#define s60PercentMovedRight    (sFishIconData.sFishDestination - ((sFishIconData.sFishDestInterval / 100) * 40))
#define s80PercentMovedRight    (sFishIconData.sFishDestination - ((sFishIconData.sFishDestInterval / 100) * 20))
#define s90PercentMovedRight    (sFishIconData.sFishDestination - ((sFishIconData.sFishDestInterval / 100) * 10))
#define s60PercentMovedLeft     (sFishIconData.sFishDestination + ((sFishIconData.sFishDestInterval / 100) * 40))
#define s80PercentMovedLeft     (sFishIconData.sFishDestination + ((sFishIconData.sFishDestInterval / 100) * 20))
#define s90PercentMovedLeft     (sFishIconData.sFishDestination + ((sFishIconData.sFishDestInterval / 100) * 10))

static void SetMonIconPosition(u8 taskId)
{
    if (taskData.tFishIsMoving) // Fish is moving.
    {
        if (sFishIconData.sFishDirection == FISH_DIR_RIGHT) // If the mon is moving to the right.
        {
            if (sFishIconData.sFishPosition >= s60PercentMovedRight && taskData.tFishSpeedCounter == 0) // If the mon has traveled at least 60% of the total movement distance.
            {
                if (sFishIconData.sFishSpeed > 2)
                    sFishIconData.sFishSpeed -= (taskData.tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                taskData.tFishSpeedCounter++;
            }
            else if (sFishIconData.sFishPosition >= s80PercentMovedRight && taskData.tFishSpeedCounter == 1) // If the mon has traveled at least 80% of the total movement distance.
            {
                if (sFishIconData.sFishSpeed > 2)
                    sFishIconData.sFishSpeed -= (taskData.tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                taskData.tFishSpeedCounter++;
            }
            else if (sFishIconData.sFishPosition >= s90PercentMovedRight && taskData.tFishSpeedCounter == 2 && sFishIconData.sFishSpeed > 2) // If the mon has traveled at least 90% of the total movement distance.
            {
                if (sFishIconData.sFishSpeed > 2)
                    sFishIconData.sFishSpeed -= (taskData.tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                taskData.tFishSpeedCounter++;
            }
            if (sFishIconData.sFishSpeed < 1)
                sFishIconData.sFishSpeed = 1;

            if ((sFishIconData.sFishPosition + sFishIconData.sFishSpeed) <= FISH_ICON_MAX_X) // If the fish position wouldn't exceed the right edge.
                sFishIconData.sFishPosition += sFishIconData.sFishSpeed; // Move the fish to the right.
            else
                sFishIconData.sFishPosition = FISH_ICON_MAX_X; // Cap the position at the right edge.

            if (sFishIconData.sFishPosition >= sFishIconData.sFishDestination)
                taskData.tFishIsMoving = FALSE; // Return to idle behavior if movement has completed.
        }
        else if (sFishIconData.sFishDirection == FISH_DIR_LEFT) // If the mon is moving to the left.
        {
            if (sFishIconData.sFishPosition <= s60PercentMovedLeft && taskData.tFishSpeedCounter == 0) // If the mon has traveled at least 60% of the total movement distance.
            {
                if (sFishIconData.sFishSpeed > 2)
                    sFishIconData.sFishSpeed -= (taskData.tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                taskData.tFishSpeedCounter++;
            }
            else if (sFishIconData.sFishPosition <= s80PercentMovedLeft && taskData.tFishSpeedCounter == 1) // If the mon has traveled at least 80% of the total movement distance.
            {
                if (sFishIconData.sFishSpeed > 2)
                    sFishIconData.sFishSpeed -= (taskData.tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                taskData.tFishSpeedCounter++;
            }
            else if (sFishIconData.sFishPosition <= s90PercentMovedLeft && taskData.tFishSpeedCounter == 2 && sFishIconData.sFishSpeed > 2) // If the mon has traveled at least 90% of the total movement distance.
            {
                if (sFishIconData.sFishSpeed > 2)
                    sFishIconData.sFishSpeed -= (taskData.tInitialFishSpeed / 4); // Reduce the speed by a quarter of the initial speed value.
                taskData.tFishSpeedCounter++;
            }
            if (sFishIconData.sFishSpeed < 1)
                sFishIconData.sFishSpeed = 1;

            if ((sFishIconData.sFishPosition - sFishIconData.sFishSpeed) >= FISH_ICON_MIN_X) // If the fish position wouldn't exceed the left edge.
                sFishIconData.sFishPosition -= sFishIconData.sFishSpeed; // Move the fish to the left.
            else
                sFishIconData.sFishPosition = FISH_ICON_MIN_X; // Cap the position at the left edge.

            if (sFishIconData.sFishPosition <= sFishIconData.sFishDestination) // If movement has completed.
                taskData.tFishIsMoving = FALSE; // Return to idle behavior.
        }
    }
    else // Fish is idle.
    {
        u8 rand;
        u16 leftProbability;
        u16 distance;

        if (taskData.tFrameCounter == sFishIconData.sTimeToNextMove) // Begin new movement.
        {
            taskData.tFishIsMoving = TRUE;
            taskData.tFrameCounter = 0;
            taskData.tFishSpeedCounter = 0;

            // Set fish movement speed.
            rand = (Random() % ((sBehavior.speed.max - sBehavior.speed.min) + 1));
            sFishIconData.sFishSpeed = sBehavior.speed.min + rand;
            sFishIconData.sFishSpeed = ((sFishIconData.sFishSpeed * FISH_SPEED_MULTIPLIER) / 100);
            if (sFishIconData.sFishSpeed < 1)
                sFishIconData.sFishSpeed = 1;
            taskData.tInitialFishSpeed = sFishIconData.sFishSpeed;

            // Set time until next movement.
            rand = (Random() % ((sBehavior.delay.max - sBehavior.delay.min) + 1));
            sFishIconData.sTimeToNextMove = sBehavior.delay.min + rand;
            if (sFishIconData.sTimeToNextMove < 1)
                sFishIconData.sTimeToNextMove = 1;

            // Set movement direction.
            leftProbability = (sFishIconData.sFishPosition / (FISH_ICON_MAX_X / 100));
            rand = (Random() % 100);
            if (rand < leftProbability)
                sFishIconData.sFishDirection = FISH_DIR_LEFT;
            else
                sFishIconData.sFishDirection = FISH_DIR_RIGHT;

            // Set fish destination and interval.
            rand = (Random() % ((sBehavior.distance.max - sBehavior.distance.min) + 1));
            distance = sBehavior.distance.min + rand;
            if (distance < 1)
                distance = 1;
            distance *= POSITION_ADJUSTMENT;
            if (sFishIconData.sFishDirection == FISH_DIR_LEFT)
            {
                sFishIconData.sFishDestination = (sFishIconData.sFishPosition - distance);
                if (sFishIconData.sFishDestination < FISH_ICON_MIN_X)
                    sFishIconData.sFishDestination = FISH_ICON_MIN_X;
                sFishIconData.sFishDestInterval = (sFishIconData.sFishPosition - sFishIconData.sFishDestination);
            }
            else
            {
                sFishIconData.sFishDestination = (sFishIconData.sFishPosition + distance);
                if (sFishIconData.sFishDestination > FISH_ICON_MAX_X)
                    sFishIconData.sFishDestination = FISH_ICON_MAX_X;
                sFishIconData.sFishDestInterval = (sFishIconData.sFishDestination - sFishIconData.sFishPosition);
            }
        }

        // Fish idle movement.
        rand = (Random() % 100);
        if (rand < (FISH_IDLE_NUDGE_CHANCE / 2)) // Nudge to right.
        {
            rand = (Random() % (sBehavior.idleMovement + 1));
            if ((sFishIconData.sFishPosition + rand) > FISH_ICON_MAX_X)
                sFishIconData.sFishPosition = FISH_ICON_MAX_X;
            else
                sFishIconData.sFishPosition += rand;
        }
        else if (rand < FISH_IDLE_NUDGE_CHANCE) // Nudge to left.
        {
            rand = (Random() % (sBehavior.idleMovement + 1));
            if ((sFishIconData.sFishPosition - rand) < FISH_ICON_MIN_X)
                sFishIconData.sFishPosition = FISH_ICON_MIN_X;
            else
                sFishIconData.sFishPosition -= rand;
        }
    }
}

#define sBarMax ((FISHING_AREA_WIDTH - sprite->sBarWidth) * POSITION_ADJUSTMENT)

static void SpriteCB_FishingBar(struct Sprite *sprite)
{
    if (gTasks[sprite->sTaskId].tPaused == 3)
    {
        DestroySpriteAndFreeResources(sprite);
        return;
    }
    else if (gTasks[sprite->sTaskId].tPaused == TRUE) // Don't do anything if paused.
        return;

    // Does not exceed max speed.
    if (sprite->sBarSpeed > FISHING_BAR_MAX_SPEED)
        sprite->sBarSpeed = FISHING_BAR_MAX_SPEED;

    // Bounce bar off of left edge.
    if (sprite->sBarPosition == 0 && sprite->sBarDirection == FISH_DIR_LEFT && sprite->sBarSpeed > 0)
    {
        sprite->sBarDirection = FISH_DIR_RIGHT;
        sprite->sBarSpeed /= FISHING_BAR_BOUNCINESS;
    }

    // Stop bar at right edge.
    if (sprite->sBarPosition == sBarMax && sprite->sBarDirection == FISH_DIR_RIGHT && sprite->sBarSpeed > 0)
        sprite->sBarSpeed = 0;

    // Set the bar sprite location.
    sprite->x2 = ((sprite->sBarPosition / POSITION_ADJUSTMENT));
}

static void SpriteCB_FishingBarRight(struct Sprite *sprite)
{
    if (gTasks[sprite->sTaskId].tPaused == 3)
    {
        DestroySpriteAndFreeResources(sprite);
        return;
    }
    sprite->x2 = (gSprites[gTasks[sprite->sTaskId].tBarLeftSpriteId].x2); // Set the location of the bar's right edge.
}

static void SpriteCB_FishingMonIcon(struct Sprite *sprite)
{
    if (gTasks[sprite->sTaskId].tPaused == 3)
    {
        if (gTasks[sprite->sTaskId].tVagueFish)
        {
            DestroySpriteAndFreeResources(sprite);
            return;
        }
        else
        {
            FreeAndDestroyMonIconSprite(sprite);
            return;
        }
    }
    else if (gTasks[sprite->sTaskId].tPaused == FALSE) // Don't do anything if paused.
    {
        if (gTasks[sprite->sTaskId].tVagueFish == FALSE)
            UpdateMonIconFrame(sprite); // Animate the mon icon.
        else if (sprite->animPaused)
            sprite->animPaused = FALSE;

        sprite->x = ((sprite->sFishPosition / POSITION_ADJUSTMENT) + FISH_ICON_MIN_X); // Set the fish sprite location.
        
        if (gTasks[sprite->sTaskId].tQMarkSpriteId != 200) // If the Question Mark sprite exists.
            gSprites[gTasks[sprite->sTaskId].tQMarkSpriteId].x = sprite->x; // Move the Question Mark with the fish sprite. This occurs in the fish sprite CB to prevent desync between the sprites.
    }
    else if (gTasks[sprite->sTaskId].tVagueFish == TRUE && gTasks[sprite->sTaskId].tPaused == TRUE)
    {
        if (!sprite->animPaused)
            sprite->animPaused = TRUE;
    }
}

static void SpriteCB_ScoreMeter(struct Sprite *sprite)
{
    if (gTasks[sprite->sTaskId].tPaused == 3)
    {
        DestroySpriteAndFreeResources(sprite);
        return;
    }
    if (gTasks[sprite->sTaskId].tScore <= 0 && sprite->sScorePosition > 0) // If the current score is 0.
    {
        sprite->sScorePosition = 0;
        sprite->x2--; // Move the score meter out of the score area.
    }

    if (gTasks[sprite->sTaskId].tPaused == TRUE) // Don't do anything else if paused.
        return;

    if (gTasks[sprite->sTaskId].tScore > (sprite->sScorePosition * SCORE_INTERVAL)) // If the current score has increased to a greater score interval.
    {
        sprite->sScorePosition++;
        sprite->x2++; // Increase the score meter's location by one pixel.
    }
    else if (gTasks[sprite->sTaskId].tScore < ((sprite->sScorePosition - 1) * SCORE_INTERVAL)) // If the current score has decreased to a lower score interval.
    {
        sprite->sScorePosition--;
        sprite->x2--; // Decrease the score meter's location by one pixel.
    }

    if (sprite->sScorePosition > ((sprite->sCurrColorInterval * SCORE_COLOR_INTERVAL) - 1)) // If the score meter has gone above the current color interval.
    {
        sprite->sCurrColorInterval++; // Increase the color interval by 1.
        CalculateScoreMeterPalette(sprite); // Change the score meter palette to reflect the change in color interval.
    }
    else if (sprite->sScorePosition < ((sprite->sCurrColorInterval - 1) * SCORE_COLOR_INTERVAL)) // If the score meter has gone below the current color interval.
    {
        sprite->sCurrColorInterval--; // Decrease the color interval by 1.
        CalculateScoreMeterPalette(sprite); // Change the score meter palette to reflect the change in color interval.
    }

    if (sprite->sScorePosition >= ((sprite->sScoreThird + 1) * SCORE_THIRD_SIZE)) // If the score position has gone above the current score third.
    {
        if (sprite->sScoreThird < 2) // If the score third isn't already at the maximum.
        {
            sprite->sScoreThird++; // Increase the score third by one.

            if (sprite->sTextCooldown == 0) // If the text cooldown counter is at 0.
                UpdateHelpfulTextHigher(sprite->sTaskId); // Show the relevant helpful text.
        }
    }
    else if (sprite->sScorePosition < (((sprite->sScoreThird + 1) * SCORE_THIRD_SIZE) - SCORE_THIRD_SIZE)) // If the score position has gone below the current score third.
    {
        if (sprite->sScoreThird > 0) // If the score third isn't already at the minimum.
        {
            sprite->sScoreThird--; // Decrease the score third by one.

            if (sprite->sTextCooldown == 0) // If the counter is at 0.
                UpdateHelpfulTextLower(sprite->sTaskId); // Show the relevant helpful text.
        }
    }
    if (sprite->sTextCooldown != 0) // If the text cooldown counter is active.
        sprite->sTextCooldown--; // Decrease the text cooldown counter by 1.
}

static void SpriteCB_ScoreMeterAdditional(struct Sprite *sprite)
{
    if (gTasks[sprite->sTaskId].tPaused == 3)
    {
        DestroySpriteAndFreeResources(sprite);
        return;
    }
    if (gTasks[sprite->sTaskId].tPaused == FALSE) // Don't do anything if paused.
    {
        sprite->x2 = (gSprites[gTasks[sprite->sTaskId].tScoreMeterSpriteId].x2); // Set the locations of the additional score meter sprites.
    }
}

static void SpriteCB_Perfect(struct Sprite *sprite)
{
    if (gTasks[sprite->sTaskId].tPaused == 3)
    {
        DestroySpriteAndFreeResources(sprite);
        return;
    }
    if (sprite->sPerfectMoveFrames > 2)
    {
        sprite->y2--;
        sprite->sPerfectMoveFrames = 0;
        sprite->sPerfectFrameCount++;
    }

    if (sprite->sPerfectFrameCount == 25)
        DestroySpriteAndFreeResources(sprite);

    sprite->sPerfectMoveFrames++;
}

static void SpriteCB_Other(struct Sprite *sprite)
{
    if (gTasks[sprite->sTaskId].tPaused == 3)
    {
        DestroySpriteAndFreeResources(sprite);
        return;
    }
}

static void CB2_FishingBattleTransition(void)
{
    FreeMonIconPalettes();
    PlayBattleBGM(); // Play the battle music.
    BattleTransition_Start(B_TRANSITION_WAVE); // Start the battle transition. The only other transitions that work properly here are B_TRANSITION_SLICE and B_TRANSITION_GRID_SQUARES.
    SetMainCallback2(CB2_FishingBattleStart);
}

static void CB2_FishingBattleStart(void)
{
    UpdatePaletteFade();
    RunTasks();

    if (IsBattleTransitionDone() == TRUE) // If the battle transition has fully completed.
    {
        gTasks[FindTaskIdByFunc(Task_ReeledInFish)].tPaused = 3;
        if (gTasks[FindTaskIdByFunc(Task_ReeledInFish)].tSeparateScreen == FALSE)
            ResetPlayerAvatar(gTasks[FindTaskIdByFunc(Task_ReeledInFish)].tPlayerGFXId);
        gMain.savedCallback = CB2_ReturnToField;
        FreeAllWindowBuffers();
        ResetTasks();
        SetMainCallback2(CB2_InitBattle); // Start the battle.
        RestartWildEncounterImmunitySteps();
        ClearPoisonStepCounter();
        IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
        IncrementGameStat(GAME_STAT_WILD_BATTLES);
        IncrementDailyWildBattles();
        if (GetGameStat(GAME_STAT_WILD_BATTLES) % 60 == 0)
            UpdateGymLeaderRematch();
    }
}
