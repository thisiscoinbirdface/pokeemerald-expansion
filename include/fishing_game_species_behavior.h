#ifndef GUARD_FISHING_GAME_SPECIES_BEHAVIOR_H
#define GUARD_FISHING_GAME_SPECIES_BEHAVIOR_H

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

#endif // GUARD_FISHING_GAME_SPECIES_BEHAVIOR_H
