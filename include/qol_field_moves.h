u32 CanUseCut(s16, s16);
u32 UseCut(u32);

void ReturnToFieldFromFlyToolMapSelect(void);
bool32 IsFlyToolUsed(void);
void ReturnToFieldOrBagFromFlyTool(void);
void ResetFlyTool(void);

u32 CanUseSurf(s16, s16, u8);
u32 CanUseSurfFromInteractedWater(void);
u32 UseSurf(u32);
void RemoveRelevantSurfFieldEffect(void);
void Task_SurfToolFieldEffect(u8 taskId);

u32 CanUseStrength(u8);
u32 UseStrength(u32, u8, u8, u8);

void FldEff_UseFlashTool(void);
u32 CanUseFlash(void);
void TryUseFlash(void);

u32 CanUseRockSmash(s16 x, s16 y);
u32 UseRockSmash(u32 fieldMoveStatus);

u32 CanUseWaterfall(u8);
bool32 CanUseWaterfallTool(void);
u32 UseWaterfall(struct PlayerAvatar, u32);
void CreateUseWaterfallTask(void);
u32 CanUseWaterfallFromInteractedWater(void);
void RemoveRelevantWaterfallFieldEffect(void);

bool8 FldEff_UseDiveTool(void);
void RemoveRelevantDiveFieldEffect(void);
u32 CanUseDiveDown(void);
u32 CanUseDiveEmerge(void);

bool8 FldEff_UseTeleportTool(void);

bool8 FldEff_SweetScentTool(void);

void ClearFieldMoveFlags(void);
bool32 PartyHasMonLearnsKnowsFieldMove(u16);

enum FieldMoveActionSource
{
    FIELD_MOVE_FAIL,
    FIELD_MOVE_POKEMON,
    FIELD_MOVE_TOOL
};

enum FlyToolSource
{
    FLY_SOURCE_MOVE,
    FLY_SOURCE_FIELD,
    FLY_SOURCE_BAG
};

// https://github.com/PokemonSanFran/pokeemerald/wiki/QoL-Field-Moves#developer-options
// When QOL_NO_MESSAGING is enabled, when the player uses a Field Move automatically for the first time on a map, a message or animation does not appear.
//#define QOL_NO_MESSAGING
