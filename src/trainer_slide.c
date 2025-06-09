#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_z_move.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "test_runner.h"
#include "text.h"
#include "trainer_hill.h"
#include "window.h"
#include "line_break.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"
#include "trainer_slide.h"
#include "battle_message.h"

static u32 BattlerHPPercentage(u32 battler, u32 operation, u32 threshold);
static u32 GetEnemyMonCount(u32 firstId, u32 lastId, bool32 onlyAlive);
static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(u32 firstId, u32 lastId, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(u32 firstId, u32 lastId);
static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(u32 firstId, u32 lastId, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLastSwitchIn(u32 battler);
static bool32 ShouldRunTrainerSlideLastHalfHP(u32 firstId, u32 lastId, u32 battler);
static bool32 ShouldRunTrainerSlideLastLowHp(u32 firstId, u32 lastId, u32 battler);
static void SetTrainerSlideParamters(u32 battler, u32* firstId, u32* lastId, u32* trainerId, u32* retValue);
static bool32 IsSlideInitalizedOrPlayed(enum TrainerSlideType slideId);


    // TRAINER_SLIDE_NONE,
    // TRAINER_SLIDE_BEFORE_FIRST_TURN,
    // TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT,
    // TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT,
    // TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT,
    // TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE,
    // TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN,
    // TRAINER_SLIDE_ENEMY_MON_UNAFFECTED,
    // TRAINER_SLIDE_LAST_SWITCHIN,
    // TRAINER_SLIDE_LAST_HALF_HP,
    // TRAINER_SLIDE_LAST_LOW_HP,
    // TRAINER_SLIDE_MEGA_EVOLUTION,
    // TRAINER_SLIDE_Z_MOVE,
    // TRAINER_SLIDE_DYNAMAX,
    // TRAINER_SLIDE_COUNT,

    
static const u8* const sTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
        [TRAINER_GASTREEGYM_LEADER] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Let me show you my ace!\p"), // find the id for the slide to be used.
        },
        [TRAINER_CERAMBASECAMP_EVIL_GABRIELLE] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_HALF_HP] = COMPOUND_STRING("I'm not losing to you again!\p"), // find the id for the slide to be used.
        },
        [TRAINER_CERAMBASECAMPGYM_LEADER] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Go Tauros! Charge!\p"), // find the id for the slide to be used.
        },
        [TRAINER_CERAMPEAK_MOXIE] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Stupid child...\pIt's time to get serious now!\p"), // find the id for the slide to be used.
        },
        [TRAINER_GALECRESTGYM_LEADER] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("I'm too strong for you!\pGo Ceruledge!\p"), // find the id for the slide to be used.
        },
        [TRAINER_SOMBERHQ_MELEA] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Absol - end this farce!\p"), // find the id for the slide to be used.
        }, 
        [TRAINER_SILVERSUNGYM_LEADER] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("The dance draws to a close!\pBombirdier - shall we?\p"), // find the id for the slide to be used.
        }, 
        [TRAINER_ROUTE6_KOHLA] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = COMPOUND_STRING("You're too weak, Boltund!\p"), // find the id for the slide to be used.
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Can't win without getting lucky?\p"), // find the id for the slide to be used.
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Ceruledge - show no mercy!\p"), // find the id for the slide to be used.
        }, 
        [TRAINER_PELLUCA_QWILSQUAD_BOSS] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("You can't take down the Qwilsquad!\pGet 'em, Overqwil!\p"), // find the id for the slide to be used.
        }, 
        [TRAINER_MIRROHBASECAMP_LEADER] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("I'm not ready to close the gym yet!\p"), // find the id for the slide to be used.
        }, 
        [TRAINER_MIRROHPEAK_MOXIE] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = COMPOUND_STRING("That won't be enough to stop Team Somber!\p"), // find the id for the slide to be used.
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("I've had it with you!\pHoundoom - finish this!\p"), // find the id for the slide to be used.
        }, 
        [TRAINER_WINTERLILY_HOLLOW_GYM_LEADER] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Hahaha! You're good - really good!\pC'mon Ampharos - let's amp this battle up!\p"), // find the id for the slide to be used.
        }, 
        [TRAINER_PELLUCA_CITY_GYM_LEADER] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("An impressive run, {PLAYER}...but it ends here!\pGyarados - tear this gym apart!\p"), // find the id for the slide to be used.
        },
        [TRAINER_RIVETSHORE_GYM_LEADER] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = COMPOUND_STRING("Raring to go, are we?\p"), // find the id for the slide to be used.            
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("You and your Pokemon are spectacular. Only one Pokemon stands between you and your final gym badge. Are you ready?\p"), // find the id for the slide to be used.
        }, 
        [TRAINER_UNCHARTED_ISLAND_MOXIE] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("No! You're not going to stop us!\pHoundoom - raze this battlefield!\p"), // find the id for the slide to be used.
        },
        [TRAINER_UNCHARTED_ISLAND_MELEA] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = COMPOUND_STRING("You think you can beat both of us in a row?\p"), // find the id for the slide to be used.
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("You think you've won! You haven't!\pYou haven't, you hear?\pAbsol! Just...just erase this eyesore!\p"), // find the id for the slide to be used.
        }, 
        [TRAINER_UNCHARTED_ISLAND_RUE] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = COMPOUND_STRING("I see why Tenebris chose you...\p"), // find the id for the slide to be used.            
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("None of this matters! You'll never win!\pCome forth, Ancient Terror!{PLAY_BGM MUS_VS_RAYQUAZA}\pBehold the power of Orichalcum Pulse!\p"), // find the id for the slide to be used.
            [TRAINER_SLIDE_LAST_HALF_HP] = COMPOUND_STRING("Ancient Terror! Finish this!\p"), // find the id for the slide to be used.
        }, 
        [TRAINER_CHAMPIONSHIP_A] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING(""), // find the id for the slide to be used.
        },
        [TRAINER_CHAMPIONSHIP_B] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING(""), // find the id for the slide to be used.
        }, 
        [TRAINER_CHAMPIONSHIP_C] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING(""), // find the id for the slide to be used.
        },
        [TRAINER_CHAMPIONSHIP_D] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING(""), // find the id for the slide to be used.
        },
        [TRAINER_CHAMPIONSHIP_E] = // use the Trainer's Id from include/constants/opponents.h
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("So it comes down to this...\pAfter everything we've been through...\pCeruledge...it's you and me against the world!{PLAY_BGM MUS_END}\p"), // find the id for the slide to be used.
            [TRAINER_SLIDE_LAST_HALF_HP] = COMPOUND_STRING(""), // find the id for the slide to be used.
        }, 
    },
};

static const u8* const sFrontierTrainerSlides[DIFFICULTY_COUNT][FRONTIER_TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {        

    },
};

static const u8* const sTestTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
#include "../test/battle/trainer_slides.h"
};

static u32 BattlerHPPercentage(u32 battler, u32 operation, u32 threshold)
{
    switch (operation)
    {
        case LESS_THAN:
            return gBattleMons[battler].hp < (gBattleMons[battler].maxHP / threshold);
        case EQUAL:
            return gBattleMons[battler].hp == (gBattleMons[battler].maxHP / threshold);
        case GREATER_THAN:
            return gBattleMons[battler].hp > (gBattleMons[battler].maxHP / threshold);
        case LESS_THAN_OR_EQUAL:
            return gBattleMons[battler].hp <= (gBattleMons[battler].maxHP / threshold);
        case GREATER_THAN_OR_EQUAL:
            return gBattleMons[battler].hp >= (gBattleMons[battler].maxHP / threshold);
        case NOT_EQUAL:
        default:
            return gBattleMons[battler].hp != (gBattleMons[battler].maxHP / threshold);
    }
}

static u32 GetEnemyMonCount(u32 firstId, u32 lastId, bool32 onlyAlive)
{
    u32 i, count = 0;

    for (i = firstId; i < lastId; i++)
    {
        u32 species = GetMonData(&gEnemyParty[i], MON_DATA_SPECIES_OR_EGG, NULL);
        if (species != SPECIES_NONE
                && species != SPECIES_EGG
                && (!onlyAlive || GetMonData(&gEnemyParty[i], MON_DATA_HP, NULL)))
            count++;
    }

    return count;
}

static const u8* const *GetTrainerSlideArray(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        return sFrontierTrainerSlides[difficulty][trainerId];
    else if (TESTING)
        return sTestTrainerSlides[difficulty][trainerId];
    else
        return sTrainerSlides[difficulty][trainerId];
}

static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

    if (trainerSlides[slideId] == NULL)
        return (trainerSlidesNormal[slideId] != NULL);
    else
        return TRUE;
}

void SetTrainerSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

    if (trainerSlides[slideId] != NULL)
        gBattleStruct->trainerSlideMsg = trainerSlides[slideId];
    else
        gBattleStruct->trainerSlideMsg = trainerSlidesNormal[slideId];
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum TrainerSlideType slideId)
{
    return IsTrainerSlideInitialized(slideId);
}

static bool32 ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(enum TrainerSlideType slideId)
{
    return IsTrainerSlideInitialized(slideId);
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (!IsBattlerAlive(battler))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(u32 firstId, u32 lastId, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(u32 firstId, u32 lastId)
{
    return ((GetEnemyMonCount(firstId, lastId, TRUE) == (GetEnemyMonCount(firstId, lastId, FALSE) - 1)));
}

static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(u32 firstId, u32 lastId, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    return (GetEnemyMonCount(firstId, lastId, TRUE) == GetEnemyMonCount(firstId, lastId, FALSE));
}

static bool32 ShouldRunTrainerSlideLastSwitchIn(u32 battler)
{
    return !CanBattlerSwitch(battler);
}

static bool32 ShouldRunTrainerSlideLastHalfHP(u32 firstId, u32 lastId, u32 battler)
{
    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (BattlerHPPercentage(battler, GREATER_THAN, 2))
        return FALSE;

    return (BattlerHPPercentage(battler, GREATER_THAN, 4));
}

static bool32 ShouldRunTrainerSlideLastLowHp(u32 firstId, u32 lastId, u32 battler)
{
    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    return (BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4));
}

static void SetTrainerSlideParamters(u32 battler, u32* firstId, u32* lastId, u32* trainerId, u32* retValue)
{
    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
    {
        if (gBattlerPartyIndexes[battler] >= MULTI_PARTY_SIZE)
        {
            *firstId = MULTI_PARTY_SIZE;
            *lastId = PARTY_SIZE;
            *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentB);
            *retValue = TRAINER_SLIDE_TARGET_TRAINER_B;
        }
        else
        {
            *firstId = 0;
            *lastId = MULTI_PARTY_SIZE;
            *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentA);
        }
    }
    else
    {
        *firstId = 0;
        *lastId = PARTY_SIZE;
        *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentA);
    }
}

enum TrainerSlideTargets ShouldDoTrainerSlide(u32 battler, enum TrainerSlideType slideId)
{
    u32 firstId, lastId, trainerId;
    u32 retValue = TRAINER_SLIDE_TARGET_TRAINER_A;
    bool32 shouldRun = FALSE;

    if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER) || GetBattlerSide(battler) != B_SIDE_OPPONENT)
        return TRAINER_SLIDE_TARGET_NONE;

    SetTrainerSlideParamters(battler, &firstId, &lastId, &trainerId, &retValue);
    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();

    gBattleScripting.battler = battler;

    if (IsTrainerSlidePlayed(slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    switch (slideId)
    {
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(slideId);
            break;
        case TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT:
            shouldRun = ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(battler, slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstSTABMove(firstId, lastId, slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstDown(firstId, lastId);
            break;
        case TRAINER_SLIDE_ENEMY_MON_UNAFFECTED:
            shouldRun = ShouldRunTrainerSlideEnemyMonUnaffected(firstId, lastId, slideId);
            break;
        case TRAINER_SLIDE_LAST_SWITCHIN:
            shouldRun = ShouldRunTrainerSlideLastSwitchIn(battler);
            break;
        case TRAINER_SLIDE_LAST_HALF_HP:
            shouldRun = ShouldRunTrainerSlideLastHalfHP(firstId, lastId, battler);
            break;
        case TRAINER_SLIDE_LAST_LOW_HP:
            shouldRun = ShouldRunTrainerSlideLastLowHp(firstId, lastId, battler);
            break;
        case TRAINER_SLIDE_BEFORE_FIRST_TURN:
        case TRAINER_SLIDE_MEGA_EVOLUTION:
        case TRAINER_SLIDE_Z_MOVE:
        case TRAINER_SLIDE_DYNAMAX:
            shouldRun = TRUE;
            break;
        default:
            return TRAINER_SLIDE_TARGET_NONE;
    }

    if (shouldRun == FALSE)
        return TRAINER_SLIDE_TARGET_NONE;

    MarkTrainerSlideAsPlayed(slideId);
    SetTrainerSlideMessage(difficulty,trainerId,slideId);
    return retValue;
}

static bool32 IsSlideInitalizedOrPlayed(enum TrainerSlideType slideId)
{
    if (IsTrainerSlideInitialized(slideId))
        return TRUE;

    if (IsTrainerSlidePlayed(slideId))
        return TRUE;

    return FALSE;
}

void TryInitializeFirstSTABMoveTrainerSlide(u32 battlerDef, u32 battlerAtk, u32 moveType)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if ((GetBattlerSide(battlerDef) == B_SIDE_PLAYER))
        return;

    if (IS_BATTLER_OF_TYPE(battlerAtk, moveType) == FALSE)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlidePlayerLandsFirstCriticalHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_PLAYER)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlideEnemyLandsFirstCriticalHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_OPPONENT)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_PLAYER)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlideEnemyMonUnaffected(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_MON_UNAFFECTED;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) != B_SIDE_OPPONENT)
        return;

    InitalizeTrainerSlide(slideId);
}

bool32 IsTrainerSlideInitialized(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messageInitalized[arrayIndex] & (1 << bitPosition)) != 0;
}

bool32 IsTrainerSlidePlayed(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messagePlayed[arrayIndex] & (1 << bitPosition)) != 0;
}

void InitalizeTrainerSlide(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messageInitalized[arrayIndex] |= (1 << bitPosition);
}

void MarkTrainerSlideAsPlayed(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messagePlayed[arrayIndex] |= (1 << bitPosition);
}
