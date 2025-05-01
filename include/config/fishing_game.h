#ifndef GUARD_CONFIG_FISHING_GAME_H
#define GUARD_CONFIG_FISHING_GAME_H

#define FG_FISH_MINIGAME_ENABLED            TRUE    // If set to FALSE, this fishing minigame will be completely disabled.

#define FG_MINIGAME_ON_SEPARATE_SCREEN      FALSE   // If TRUE, play the minigame on its own dedicated screen instead of in the overworld.
#define FG_DO_DOTS_GAME_BEFORE_MAIN_GAME    TRUE    // If FALSE, the fish will be hooked instantly, instead of doing the dots game.
#define FG_PREVENT_FAILURE_IN_DOTS_GAME     TRUE    // If TRUE, the dots game cannot be failed.
#define FG_OBSCURE_UNDISCOVERED_MONS        TRUE    // If TRUE, the Pokemon icon will be obscured if that species has not been seen in the Pokedex.
#define FG_VAGUE_FISH_FOR_OBSCURED          FALSE   // If TRUE, uses a vague fish shape instead of a blacked out Pokemon icon when obscured.
#define FG_OBSCURE_ALL_FISH                 FALSE   // If TRUE, the Pokemon icon will always be obscured.
#define FG_BAR_WIDTH_FROM_ROD_TYPE          TRUE    // If TRUE, sets the fishing bar width based on the type of rod used.
#define FG_PERFECT_CHAIN_INCREASE           FALSE   // If TRUE, getting a "Perfect" in the minigame increases the chain fishing streak by an additional point.
#define FG_VAR_TREASURE_CHANCE              0       // Replace 0 with an unused Var to use it to change the percent chance a random treasure will spawn via scripts.
#define FG_VAR_ITEM_RARITY                  0       // Replace 0 with an unused Var to use it to change the rarity of the treasure item pool via scripts.
                                                    // Otherwise, the rarity will be determined by the type of rod used.
                                                    // This is an offset value for the table in fishing_game_treasures.h.
                                                    // Eg: If the Var is set to 2, the item pool will start AFTER the second item in the table.
                                                    // The value of this Var should always be less than the number of items in the table (or the item will always be Tiny Mushroom).
#define DEFAULT_TREASURE_SCORE_PAUSE        FALSE   // If TRUE, the minigame score will not decrease while the treasure is within the fishing bar.
                                                    // Overridden if a flag is assigned to FG_FLAG_TREASURE_SCORE_PAUSE.
#define FG_FLAG_TREASURE_SCORE_PAUSE        0       // Replace 0 with an unused Flag to use it to toggle DEFAULT_TREASURE_SCORE_PAUSE.

// Look at the Easily Changed Constants at the top of include/fishing_game.h to customize more specific minigame parameters.

#endif // GUARD_CONFIG_FISHING_GAME_H
