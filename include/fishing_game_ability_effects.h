#ifndef GUARD_FISHING_GAME_ABILITY_EFFECTS_H
#define GUARD_FISHING_GAME_ABILITY_EFFECTS_H

#include "constants/abilities.h"

static const struct FishingAbilityModifier sAbilityEffects[] = 
{
    {0},
/*
    {
        .ability = ,
        .happensWhen = ,
        .effectType = ,
        .operand = ,
        .effectAmount = ,
        .hasMoreEffects = 
    },
*/
    {
        .ability = ABILITY_STICKY_HOLD,
        .happensWhen = FG_HAPPENS_WHEN_FISH_INSIDE_BAR,
        .effectType = FG_EFFECT_FISH_SPEED,
        .operand = FG_SUBTRACT,
        .effectAmount = 2,
        .hasMoreEffects = TRUE
    },
    {
        .ability = ABILITY_STICKY_HOLD,
        .happensWhen = FG_HAPPENS_ALWAYS,
        .effectType = FG_EFFECT_BAR_SIZE,
        .operand = FG_ADD,
        .effectAmount = 8,
        .hasMoreEffects = FALSE
    },
    {
        .ability = ABILITY_SUCTION_CUPS,
        .happensWhen = FG_HAPPENS_WHEN_FISH_INSIDE_BAR,
        .effectType = FG_EFFECT_FISH_MOVE_DELAY,
        .operand = FG_ADD,
        .effectAmount = 20,
        .hasMoreEffects = TRUE
    },
    {
        .ability = ABILITY_SUCTION_CUPS,
        .happensWhen = FG_HAPPENS_ALWAYS,
        .effectType = FG_EFFECT_BAR_SIZE,
        .operand = FG_ADD,
        .effectAmount = 8,
        .hasMoreEffects = FALSE
    }
};

// Possible values for happensWhen
enum {
    FG_HAPPENS_ALWAYS,
    FG_HAPPENS_WHEN_FISH_INSIDE_BAR,
    FG_HAPPENS_WHEN_FISH_OUTSIDE_BAR,
    FG_HAPPENS_WHEN_TREASURE_INSIDE_BAR,
    FG_HAPPENS_WHEN_TREASURE_OUTSIDE_BAR
};

// Ability effect types
enum {
    FG_EFFECT_BAR_SIZE,             // Width of the fishing bar.
    FG_EFFECT_FISH_SPEED,           // Speed a fish travels during a movement.
    FG_EFFECT_FISH_MOVE_DELAY,      // Delay between fish movements.
    FG_EFFECT_FISH_MOVE_DISTANCE,   // How far a fish will travel in a movement.
    FG_EFFECT_SCORE_START,          // The score at the beginning of the game.
    FG_EFFECT_SCORE_INCREASE,       // How much the score will increase by every frame.
    FG_EFFECT_SCORE_DECREASE        // How much the score will decrease every frame.
};

// Operands for ability modifiers
enum {
    FG_ADD,
    FG_SUBTRACT,
    FG_MULTIPLY,
    FG_DIVIDE
};

#endif // GUARD_FISHING_GAME_ABILITY_EFFECTS_H
