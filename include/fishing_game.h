#ifndef GUARD_FISHING_GAME_H
#define GUARD_FISHING_GAME_H

// Configs
#define FISH_MINIGAME_ENABLED           TRUE    // If set to FALSE, this fishing minigame will be completely disabled.

#define MINIGAME_ON_SEPARATE_SCREEN     FALSE   // Play the minigame on its own dedicated screen instead of in the overworld.
#define DO_DOTS_GAME_BEFORE_MAIN_GAME   TRUE    // If FALSE, the fish will be hooked instantly, instead of doing the dots game.
#define PREVENT_FAILURE_IN_DOTS_GAME    TRUE    // If TRUE, the dots game cannot be failed.
#define OBSCURE_UNDISCOVERED_MONS       TRUE    // If TRUE, the Pokemon icon will be obscured if that species has not been seen in the Pokedex.
#define VAGUE_FISH_FOR_OBSCURED         FALSE   // If TRUE, uses a vague fish shape instead of a blacked out Pokemon icon when obscured.
#define OBSCURE_ALL_FISH                FALSE   // If TRUE, the Pokemon icon will always be obscured.
#define PERFECT_CHAIN_INCREASE          FALSE   // If TRUE, getting a "Perfect" in the minigame increases the chain fishing streak by an additional point.
#define BAR_WIDTH_FROM_ROD_TYPE         TRUE    // If TRUE, sets the fishing bar width based on the type of rod used.

#define OLD_ROD_BAR_WIDTH               40   // Default pixel width of the fishing bar. Cannot be below 33 or above 64.
#define GOOD_ROD_BAR_WIDTH              50   // Fishing bar pixel width for the Good Rod. BAR_WIDTH_FROM_ROD_TYPE must be TRUE. Cannot be below 33 or above 64.
#define SUPER_ROD_BAR_WIDTH             60   // Fishing bar pixel width for the Super Rod. BAR_WIDTH_FROM_ROD_TYPE must be TRUE. Cannot be below 33 or above 64.
#define FISHING_BAR_MAX_SPEED           50   // The greater the number, the faster the bar is allowed to go.
#define FISHING_BAR_BOUNCINESS          1.3  // The greater the number, the less the bar will bounce when it hits the left side. (Decimals are encouraged, as a little goes a long way.)
#define BAR_SPEED_SLOWING               2.0  // The greater the value, the slower the bar changes speed. (Decimals are encouraged, as a little goes a long way.) (Can affect the max speed.)

#define STARTING_SCORE                  300  // The number of points you already have when the game starts.
#define SCORE_INCREASE                  3    // The score increases by this many point every frame while the fish is within the bar.
#define SCORE_DECREASE                  5    // The score decreases by this many point every frame while the fish is outside the bar.
#define SCORE_MAX                       1920 // The number of points required to win. Must be divisible by SCORE_AREA_WIDTH.

#define FISH_FIRST_MOVE_DELAY           0.8  // Number of seconds before the fish will make its first movement.
#define FISH_ICON_HITBOX_WIDTH          12   // Width of the fish's hitbox in number of pixels.
#define FISH_SPEED_MULTIPLIER           100  // Global fish speed multiplier. It is a percent, so 50 would be half speed and 200 would be double speed.


// Fishing Bar Constants
#define BAR_SPEED_MODIFIER              (FISHING_BAR_MAX_SPEED / (FISHING_BAR_MAX_SPEED / BAR_SPEED_SLOWING))
#define FISHING_AREA_WIDTH              202  // The width of the total fishing bar area in number of pixels.
#define FISHING_BAR_Y                   102
#define FISHING_BAR_START_X             35
#define FISHING_BAR_SEGMENT_WIDTH       32
#define FISHING_BAR_WIDTH_MIN           33
#define FISHING_BAR_WIDTH_MAX           64
#define POSITION_ADJUSTMENT             10   // Multiplier to make values larger so decimal places are retained.
#define FISHING_BAR_MAX                 ((FISHING_AREA_WIDTH - FISHING_BAR_WIDTH) * POSITION_ADJUSTMENT)

// Score Meter Constants
#define SCORE_AREA_WIDTH                192  // The width of the total score meter area in number of pixels.
#define SCORE_AREA_OFFSET               24   // Position of the left edge of the score area.
#define SCORE_BAR_OFFSET                ((SCORE_SECTION_WIDTH / 2) - SCORE_AREA_OFFSET) // Sets the score position in relation to SCORE_AREA_OFFSET.
#define SCORE_INTERVAL                  (SCORE_MAX / SCORE_AREA_WIDTH)
#define SCORE_SECTION_INIT_X            ((STARTING_SCORE / SCORE_INTERVAL) - SCORE_BAR_OFFSET)
#define SCORE_SECTION_Y                 80
#define SCORE_SECTION_WIDTH             64   // The width of one score meter section sprite in number of pixels.
#define NUM_SCORE_SECTIONS              (SCORE_AREA_WIDTH / SCORE_SECTION_WIDTH)
#define NUM_COLOR_INTERVALS             64
#define SCORE_COLOR_INTERVAL            (SCORE_AREA_WIDTH / NUM_COLOR_INTERVALS)
#define SCORE_THIRD_SIZE                (SCORE_AREA_WIDTH / 3)
#define SCORE_COLOR_NUM                 12 // The color position in the palette that the score meter uses.

// Pokemon Icon Constants
#define FISH_ICON_WIDTH                 32
#define FISH_ICON_Y                     99
#define FISH_ICON_START_X               36
#define FISH_ICON_MIN_X                 26
#define FISH_ICON_MAX_X                 ((FISHING_AREA_WIDTH - ((FISH_ICON_WIDTH / 2) + 4)) * POSITION_ADJUSTMENT)
#define FISH_IDLE_NUDGE_CHANCE          60 // Percent chance per frame that the fish position value changes while idling.

// Perfect Icon Constants
#define PERFECT_SPRITE_WIDTH            32
#define PERFECT_X                       ((FISHING_BAR_START_X + FISHING_AREA_WIDTH) - PERFECT_SPRITE_WIDTH)
#define PERFECT_Y                       SCORE_SECTION_Y

// OW Constants
#define OW_FISHING_BAR_Y                22
#define OW_SCORE_SECTION_Y              0
#define OW_FISH_ICON_Y                  19
#define OW_PERFECT_Y                    (OW_SCORE_SECTION_Y + 38)
#define OW_PAUSE_BEFORE_START           20 // Number of frames before the minigame starts.


// Sprite sheet numbers.
enum {
    FISHING_BAR,
    FISHING_BAR_RIGHT,
    SCORE_METER,
    PERFECT,
    QUESTION_MARK,
    VAGUE_FISH,
    SCORE_METER_BACKING
};

// Fishing bar palette values.
enum {
    INSIDE_1,
    INSIDE_2,
    INSIDE_3,
    OUTSIDE_1,
    OUTSIDE_2,
    OUTSIDE_3
};

#define FISH_DIR_LEFT   0
#define FISH_DIR_RIGHT  1

#define SCORE_RIGHT     0
#define SCORE_MIDDLE    1
#define SCORE_LEFT      2

#define NUM_DEFAULT_BEHAVIORS   3 // Each rod type has a default behavior.

#define TAG_FISHING_BAR         0x1000
#define TAG_FISHING_BAR_RIGHT   0x1001
#define TAG_SCORE_METER         0x1002
#define TAG_PERFECT             0x1003
#define TAG_QUESTION_MARK       0x1004
#define TAG_VAGUE_FISH          0x1005
#define TAG_SCORE_BACKING       0x1006

struct FishValues
{
    u8 min;
    u8 max;
};

struct FishBehaviorData
{
    u16 species;
    struct FishValues speed;
    struct FishValues distance;
    struct FishValues delay;
    u8 idleMovement;
};

void CB2_InitFishingMinigame(void);
void Task_InitOWFishingMinigame(u8 taskId);

#endif // GUARD_FISHING_GAME_H
