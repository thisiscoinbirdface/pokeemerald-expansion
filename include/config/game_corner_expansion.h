#ifndef GUARD_GAME_CORNER_EXPANSION_H
#define GUARD_GAME_CORNER_EXPANSION_H

#define GAME_CORNER_VAR_ID_CHECK        0  // This is just a funny variable used for the Game Corner map itself and can be set to 0
#define GAME_CORNER_VAR_WINNINGS        VAR_GIFT_UNUSED_2   // Must be set to a valid variable for most minigames to function

#define FLAPPY_VAR_HIGH_SCORE           0  // If this variable isn't set to 0, this tracks the high score of the Flappy Bird minigame

#define DERBY_FLAG_NICKNAME             FLAG_MINIGAME_NICKNAME    // This flag tracks whether nicknames should be reset or not. Must be set to a valid flag
#define DERBY_FLAG_RESET                FLAG_MINIGAME_RESET    // This flag tracks whether the data for the derby should be reset or not. Must be set to a valid flag
#define DERBY_VAR_RACER_NAME_1          VAR_ROUTE117_STATE   // The following 6 variables track the data for each indivial racer in their respective variable
#define DERBY_VAR_RACER_NAME_2          VAR_EVER_GRANDE_CITY_STATE   // Species is stored in the hundreds place in decimal
#define DERBY_VAR_RACER_NAME_3          VAR_FORTREE_CITY_STATE   // Shininess is stored in the tens place in decimal
#define DERBY_VAR_RACER_NAME_4          VAR_LILYCOVE_CITY_STATE   // Condition is stored in the ones place in decimal
#define DERBY_VAR_RACER_NAME_5          VAR_MAUVILLE_CITY_STATE
#define DERBY_VAR_RACER_NAME_6          VAR_UNUSED_0x404E
#define DERBY_VAR_RACER_1               VAR_DEWFORD_TOWN_STATE   // The following 6 variables hold the nickname ID for each racer in the derby
#define DERBY_VAR_RACER_2               VAR_VERDANTURF_TOWN_STATE   // These variables only hold the ID itself, the actual nickname uses the species data as well
#define DERBY_VAR_RACER_3               VAR_PACIFIDLOG_TOWN_STATE
#define DERBY_VAR_RACER_4               VAR_UNUSED_0x4083
#define DERBY_VAR_RACER_5               VAR_TRICK_HOUSE_PUZZLE_7_STATE_2
#define DERBY_VAR_RACER_6               VAR_GIFT_UNUSED_1

#define FLIP_VAR_LEVEL                  0   // If this variable isn't set to 0, it will track the difficult level for any game of Voltorb Flip after the first one

#endif // GUARD_GAME_CORNER_EXPANSION_H
