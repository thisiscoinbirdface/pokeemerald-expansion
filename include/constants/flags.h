#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"
#include "constants/rematches.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  // When set, follower pokemon won't be spawned
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)  // Unused Flag
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10) // Unused Flag
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F
#define NUM_TEMP_FLAGS   (TEMP_FLAGS_END - TEMP_FLAGS_START + 1)

//I AM GOING TO USE THESE FLAGS | STORY FLAGS
#define FLAG_UNUSED_0x020    0x20 // Obtained Starter Pokemon
#define FLAG_WELCOMEPACKAGE_GET    0x21 // Pickup lab welcome package from your room
#define FLAG_LAB_POKEBALL_ONE    0x22 // First ball to get starter in Lab
#define FLAG_LAB_POKEBALL_TWO    0x23 // Second ball to get starter in Lab
#define FLAG_LAB_POKEBALL_THREE    0x24 // Third ball to get starter in Lab
#define FLAG_CARABRUE_POLICE    0x25 // If the police are there or not in Carabrue Town
#define FLAG_REAL_PACKAGE_GET    0x26 // Pick up the real package from the lab
#define FLAG_LAB_CALLTOACTION    0x27 // After rival battle and true quest start
#define FLAG_FENNILAHL_HIKER_GEAR_GET    0x28 // after defeating the route 2 clefairy
#define FLAG_FENNILAHL_HIKER_BLOCK    0x29 // after talking to breech and clearing the path to route 3
#define FLAG_BATTLE_NO_RUNNING_CATCHING    0x2A // Flag for no running or catching in wild battles (special battles)
#define FLAG_TENEBRIS_POLICE_PRESCENCE    0x2B // yes as long as the police SHOULDNT be there
#define FLAG_ROUTE3_UNDERPASS_EVILTEAM    0x2C // check if the fight is won or not
#define FLAG_GASTREE_KOHLA_BATTLE    0x2D // rival battle outside gastree gym
#define FLAG_ROUTE4_EVIL_BATTLE    0x2E // evil team blocks you at the end of route 4
#define FLAG_CERAMBASECAMP_EVIL_BATTLE    0x2F // Evil team at the market/base camp prep zone
#define FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER    0x30 // got the appointment letter for a meeting with the gym leader
#define FLAG_CERAMBASECAMP_CYNDAQUIL_TM    0x31 // whether you taught the cynda or not.
#define FLAG_CERAMBASECAMP_NPCITEM    0x32 // whether the NPC has given you the stone or not
#define FLAG_CERAMBASECAMP_EXCADRILL    0x33 // Whether you've caught or defeated the excadril
#define FLAG_CERAMBASECAMP_MAIN_BERRY    0x34 // the sitting man (first floor) gives you a berry
#define FLAG_CERAMBASECAMP_NPC_TRADE    0x35 // the base camp trade NPC
#define FLAG_MT_CERAM_SOMBER_FOOT    0x36 // at the foot of the mountain, eavesdrop with kohla
#define FLAG_MT_CERAM_SOMBER_PEAK    0x37 // at the top (just below the peak) battle with grunts. kohla loses.
#define FLAG_MT_CERAM_DREAMSTONE    0x38 // at the peak itself, battle the boss and touch the dreamstone.
#define FLAG_ANCIENT_FIRST_TIME    0x39 // go to the ancient area for the first time. triggered on EXIT
#define FLAG_GALECREST_POST_ANCIENT    0x3A // flag for the intro galecrest cutscene - after TPing back to the present
#define FLAG_GALECREST_POOCHYENA    0x3B // the poochyena blocking the way
#define FLAG_GALECREST_DETECTIVE_CONVO    0x3C // the conversation with rue and the detectives
#define FLAG_DETECTIVE_ACAD_KOHLA    0x3D // After talking to kohla at the academy
#define FLAG_DETECTIVE_ACAD_BREECH    0x3E // check this flag off once you meet breech next.
#define FLAG_GALECREST_ROCKSMASH    0x3F // get rock smash in galecrest
#define FLAG_VILETHORN_PROF    0x40 // overhear the prof getting taken by a magma grunt
#define FLAG_SILVERSUN_DETECTIVES_ENTER    0x41 // first convo with detectives in silversun
#define FLAG_SILVERSUN_BACKSTAGEPASS_GET    0x42 // get the backstage pass from the nurse at the gym
#define FLAG_SILVERSUN_BACKSTAGEPASS_USE    0x43 // use the backstage pass to access the backstage (and hideout)
#define FLAG_SILVERSUN_SOMBERHQ_ENTRANCE    0x44 // gabrielle is at the entrance and lets you in
#define FLAG_SILVERSUN_SOMBERHQ_MAIN    0x45 // the main somber HQ encounter
#define FLAG_SILVERSUN_NEXTQUEST    0x46 // set the next quest
#define FLAG_HIDE_SILVERSUN_PROF    0x47 // hide the prof in the overworld until the HQ is cleared.
#define FLAG_ROUTE6_KOHLA_BATTLE    0x48 // after everything, battle kohla as you enter route 6
#define FLAG_ROUTE6_GABRIELLE_BULLY    0x49 // save gab from the grunts in r6
#define FLAG_PELLUCA_GABRIELLE_CHOICEBAND    0x4A // get the choice band from gab in pelluca
#define FLAG_MIRROH_KOHLA_BATTLE    0x4B // battle kohla at the graveyard
#define FLAG_MIRROHBASECAMP_LEADER    0x4C // Unused Flag
#define FLAG_MIRROHPEAK_MOXIE_DEFEATED    0x4D // defeat moxie at mirroh peak (before heading into Ceram)
#define FLAG_MIRROHPEAK_VINIEL_CUTSCENE    0x4E // see the cutscene with viniel fighting off 4 grunts
#define FLAG_MIRROHBASECAMP_HISTORIAN    0x4F // Unused Flag

#define FLAG_HIDE_MIRROHBASECAMP_HISTORIAN  0x264 // to hide the old lady at home
#define FLAG_HIDE_GRAVEYARD_HISTORIAN  0x265 // to hide the old lady at the graveyard
#define FLAG_ANCIENT_MIRROH_KOHLA_MEETING  0x266 // run into the grunt and kohla in ancient mir
#define FLAG_ANCIENT_MIRROH_KORAIDON  0x267 // the koraidon cutscene
#define FLAG_ANCIENT_MIRROH_FINAL_KOHLA_TRIGGER  0x268 // the last trigger (after exiting the cave, kohla says come here)
#define FLAG_ANCIENT_MIRROH_HEAVYDUTYBOOTS  0x269 // item flag for heavy duty boots
#define FLAG_ANCIENT_MIRROH_DONE  0x26A // complete the segment
#define FLAG_HIDE_LILY_POND_KOHLA  0x26B // hides kohla in the lily pond
#define FLAG_WINTERLILY_VINIEL_CUTSCENE  0x26C // Unused Flag
#define FLAG_MIRROH_EXTERIOR_BREECH  0x26D // Unused Flag
#define FLAG_FENNILAHL_CLEFAIRY_FIRST_SIGHTING  0x26E // Unused Flag
#define FLAG_FENNILAHL_CLEFAIRY_FOLLOWING  0x26F // Unused Flag
#define FLAG_HIDE_ROUTE3_UNDERPASS_GYM  0x270 // Unused Flag
#define FLAG_MIRROHBASECAMP_MASTERBALL_RUE  0x271 // Unused Flag
#define FLAG_MIRROHBASECAMP_MASTERBALL_GET  0x272 // Unused Flag
#define FLAG_WINTERLILY_HOUSE_ITEM  0x273 // Unused Flag
#define FLAG_MIRROH_INT_SOMBER_GRUNTS  0x274 // Unused Flag
#define FLAG_ANCIENT_MIRROH_PROF_TENEBRIS_OUTSIDE  0x275 // Unused Flag
#define FLAG_ANCIENT_MIRROH_PROF_TENEBRIS_INSIDE  0x276 // Unused Flag
#define FLAG_WINTERLILY_GYM_TRICK_TRAINER  0x277 // Unused Flag
#define FLAG_WINTERLILY_HOLLOW_SURF  0x278 // Unused Flag
#define FLAG_IVY_RIVER_SHARPEDO_JANIA  0x279 // Unused Flag
#define FLAG_IVY_RIVER_SHARPEDO_MAIN  0x27A // Unused Flag
#define FLAG_MIRROHBASECAMP_TRAINER_A  0x27B // outside gym trainer
#define FLAG_MIRROHBASECAMP_TRAINER_B  0x27C // outside gym trainer
#define FLAG_MIRROHBASECAMP_TRAINER_C  0x27D // outside gym trainer
#define FLAG_MIRROHGYM_TRAINER_A  0x27E // inside double battle
#define FLAG_MIRROHGYM_TRAINER_B  0x27F // inside double battle
#define FLAG_PELLUCA_MAYOR_FIGHT  0x495 // the first confrontation with the qwilsquad
#define FLAG_PELLUCA_QWILSQUAD_ENTRANCE  0x496 // dude that's blocking the entrance to the shack in pelluca
#define FLAG_PELLUCA_REGULAR_CITIZENS  0x497 // Unused Flag
#define FLAG_PELLUCA_FLOODED_CITIZENS  0x498 // Unused Flag
#define FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A  0x499 // Unused Flag
#define FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B  0x49A // Unused Flag
#define FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C  0x49B // Unused Flag
#define FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D  0x49C // Unused Flag
#define FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED  0x49D // Unused Flag
#define FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED  0x4A9 // Unused Flag
#define FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED  0x4AA // Unused Flag
#define FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED  0x4AB // Unused Flag
#define FLAG_PELLUCA_PC_CHARS  0x4AC // Unused Flag
#define FLAG_SHRINE_QUEST  0x4AD // Unused Flag
#define FLAG_GALECREST_ARMAROUGE_1_MOVED  0x4AE // stops the detective academy armarouge from moving again and again
#define FLAG_GALECREST_ARMAROUGE_2_MOVED  0x4AF // Unused Flag
#define FLAG_PELLUCA_POSTGYM  0x4B0 // Unused Flag
#define FLAG_RIVETSHORE_ASSEMBLY  0x4B1 // some of the gym leaders and kohla assemble
#define FLAG_RIVETSHORE_ASSEMBLY_GYM  0x4B2 // Unused Flag
#define FLAG_RIVETSHORE_RAAZI_CALL  0x4B3 // Unused Flag
#define FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED  0x4B4 // Unused Flag
#define FLAG_RIVETSHORE_RAAZI_CALLOUT 0x4C0 // Unused Flag
#define FLAG_RIVETSHORE_STORAGE_BAY_SLAKING 0x54  // Unused Flag
#define FLAG_PELLUCA_QUEST_END 0x55  // Unused Flag
#define FLAG_MIRROH_GREAVARD_BLOCKER 0x68  // flags for the greavard playing
#define FLAG_MIRROH_GOT_OLD_BONE 0xE9 // flag to hide the greavard indoors (once they're done playing)
#define FLAG_RIVETSHORE_GAB 0x1AA // meeting gab in rivetshore
#define FLAG_ISLAND_MOXIE_VIEWPOINT       0x1AB // Unused Flag
#define FLAG_ISLAND_MOXIE_MELEA_BATTLE    0x1DA // Unused Flag
#define FLAG_HIDE_ISLAND_FINALE           0x2D9 // Unused Flag
#define FLAG_RAAZI_BEATEN                 0x465 // once raazi is beaten, the gym leaders vanish
#define FLAG_GAB_BREECH_TEAMUP            0x466 // Unused Flag
#define FLAG_STORAGE_GAB_ZOROARK          0x467 // this is set after the zoroark fake scene
#define FLAG_STORAGE_MOONBLAST            0x468 // bust open the wall with moonblast
#define FLAG_HIDE_GAB_BREECH_OUTDOOR      0x470 // hide gab and breech on deck
#define FLAG_HIDE_GAB_BREECH_STORAGE      0x472 // hide gab and breech in storage
#define FLAG_HIDE_TENEBRIS_FINALE         0x479 // Unused Flag
#define FLAG_FINALE_DONE                  0x46D // Unused Flag
#define FLAG_HIDE_RIVETSHORE_MIMIKYU      0x4BC // Unused Flag
#define FLAG_CHAMPIONSHIP_KOHLA_ROOM      0x4BD // Unused Flag
#define FLAG_HIDE_PELLUCA_GAB             0x4BE // Unused Flag
#define FLAG_UNUSED_0x4BF                 0x4BF // Unused Flag


//I AM GOING TO USE THESE FLAGS | EXTRA FLAGS
#define FLAG_GASTREE_NPC_SHOAL_SALT  0x280 // Get Shoal Salt from NPC in House 2
#define FLAG_GASTREE_NPC_SKITTY  0x281 // Has she got her skitty or not
#define FLAG_GASTREE_TRIGGER_SKITTY  0x282 // Deactivate the Skitty trees trigger
#define FLAG_HIDE_BASECAMP_SHOPKEEPER  0x283 // Hides the 1F shopkeeper at the base camp depot
#define FLAG_HIDE_GASTREE_SKITTY  0x284 // Hide the skitty in gastree city (at first, then clear this for the rest of the game)
#define FLAG_GALECREST_NURSE_BERRY  0x285 // Nurse gives the berries (that counter the gym leader)
#define FLAG_GALECREST_ROBBER  0x286 // The robber outside the rich house in galecrest
#define FLAG_GALECREST_REGRETFULMAN  0x287 // man gives either a belt or a bright powder
#define FLAG_MT_CERAM_NURSE  0x288 // the nurse gives you a revive in mt ceram
#define FLAG_MT_CERAM_FRESH_WATER  0x289 // an npc gives you fresh water in mt ceram
#define FLAG_GALECREST_POOR_TRADEITEM  0x28A // item trade in galecrest poor
#define FLAG_GALECREST_RICH_HOUSECLEANITEM  0x28B // gym leaders parents give you a macho brace
#define FLAG_VILETHORN_NPC_ITEM  0x28C // ?
#define FLAG_VILETHORN_NPC_MUSHROOMS  0x28D // chef hunting for mushrooms in vilethorn
#define FLAG_SILVERSUN_THEATER_MANIAC  0x28E // maniac in love with gloria at the theater challenges you 
#define FLAG_SILVERSUN_THEATER_LENS  0x28F // get zoom lens from the dude in the back
#define FLAG_SILVERSUN_THEATER_SCARF  0x290 // get silk scarf from the beauty backstage
#define FLAG_SILVERSUN_ANTIDOTE  0x291 // antidote because someone's pokemon got poisoned
#define FLAG_SEWERS_DUSKULL  0x292 // Unused Flag
#define FLAG_HIDE_SILVERSUN_DUSKULL_NPCS  0x293 // Unused Flag
#define FLAG_FIGHTING_DOJO_QUEST  0x294 // Unused Flag
#define FLAG_TENEBRIS_GARDEVOIR  0x295 // Unused Flag
#define FLAG_GASTREE_HOUSE1_BUNEARY 0x296 // Unused Flag
#define FLAG_ROUTE4_COOK  0x297 // Unused Flag
#define FLAG_ROUTE4_KIDGANG  0x298 // Unused Flag
#define FLAG_GALECREST_LITWICK  0x299 // Unused Flag
#define FLAG_FENNILAHL_CUTEMONGIFT  0x29A // Unused Flag
#define FLAG_GALECREST_FAKEID  0x29B // get the fake ID
#define FLAG_GALECREST_CHARCADET_GET  0x29C // get the charcadet
#define FLAG_GALECREST_STUDENTID_GET  0x29D // get the temp student ID
#define FLAG_GALECREST_CLEFAIRY_ITEM  0x29E // clefairy in the classroom gives you an item
#define FLAG_RANGER_GOT_FIRST_MISSION  0x29F // Unused Flag
#define FLAG_RANGER_INSTITUTE_BAYLEEF  0x2A0 // bayleef at the ranger institute gives you miracle seed
#define FLAG_CERAM_CAVES_GRETA_MEETING  0x2A1 // meet leaf for the first time in ceram caves
#define FLAG_SILVERSUN_VIVILLON  0x2A2 // feed vivillon a lava cookie
#define FLAG_HIDE_GASTREE_SKITTY1  0x2A3 // the first of the 3 skittys - trees
#define FLAG_HIDE_GASTREE_SKITTY2  0x2A4 // see above - teahouse garden
#define FLAG_HIDE_GASTREE_SKITTY3  0x2A5 // see above - below her trainer 
#define FLAG_GRETA_ROUTE5  0x2A6 // encounter with Greta on R5 - random items
#define FLAG_FENNILAHL_BUDEW_GET  0x2A7 // get the budew by offering 3 oran berries
#define FLAG_ROUTE3_SKARMORY_WILD  0x2A8 // mawile wild set encounter
#define FLAG_ROUTE4_DEWPIDER_ATTACK  0x2A9 // trigger the attack
#define FLAG_ROUTE4_DEWPIDER_FINISHED  0x2AA // complete the quest one way or another
#define FLAG_CERAM_CHARIZARD  0x2AB // catch or defeat the charizard on top of mt. ceram
#define FLAG_HIDE_VILETHORN_RALTS_1  0x2AC // Unused Flag
#define FLAG_HIDE_VILETHORN_RALTS_2  0x2AD // Unused Flag
#define FLAG_HIDE_VILETHORN_RALTS_3  0x2AE // Unused Flag
#define FLAG_VILETHORN_RALTS_FINISHED  0x2AF // Unused Flag
#define FLAG_ROUTE6_VENUSAUR  0x2B0 // Unused Flag
#define FLAG_HOLLOW_MIMEJR  0x2B1 // Unused Flag
#define FLAG_HIDE_HOLLOW_MIMEJR_1  0x2B2 // Unused Flag
#define FLAG_HIDE_HOLLOW_MIMEJR_2  0x2B3 // Unused Flag
#define FLAG_HIDE_HOLLOW_MIMEJR_3  0x2B4 // Unused Flag
#define FLAG_GRETA_PELLUCACITY  0x2B5 // Unused Flag
#define FLAG_SILVERSUN_BRAILLE_1_DONE  0x2B6 // Unused Flag
#define FLAG_SILVERSUN_BRAILLE_2_START  0x2B7 // Unused Flag
#define FLAG_SILVERSUN_BRAILLE_2_DONE  0x2B8 // Unused Flag
#define FLAG_GASTREE_TEAHOUSE_BERRIES  0x2B9 // Unused Flag
#define FLAG_HIDE_ROUTE4_DEWPIDER  0x2BA // Unused Flag
#define FLAG_SEWERS_DUSKULL_FIGHT_COMPLETE  0x2BB // Unused Flag
#define FLAG_CERAMBASECAMP_ALTARIA_FEATHER   0x4D8 // Unused Flag
#define FLAG_PELLUCA_RESTAURANT_TRADE   0x4D9 // Unused Flag
#define FLAG_HIDE_PELLUCA_MAYOR_MON1   0x4DB // Unused Flag
#define FLAG_HIDE_PELLUCA_MAYOR_MON2   0x4DC // Unused Flag
#define FLAG_HIDE_PELLUCA_MAYOR_MON3   0x4DD // Unused Flag
#define FLAG_HIDE_PELLUCA_MAYOR_MON4   0x4DE // Unused Flag
#define FLAG_HIDE_PELLUCA_MAYOR_MON5   0x4DF // Unused Flag
#define FLAG_PELLUCA_CITY_TM_GIVER   0x4DA // Unused Flag
#define FLAG_MIRROH_NURSE_QUEST_START 0x4E0 // Unused Flag
#define FLAG_MIRROH_ROBBER 0x4E1 // Unused Flag
#define FLAG_MIRROH_NURSE_QUEST_CHANSEYGET 0x4E2 // Unused Flag
#define FLAG_MIRROH_NURSE_QUEST_END 0x4E3 // Unused Flag
#define FLAG_HIDE_MIRROH_LAST_CHANSEY 0x4E4 // Unused Flag
#define FLAG_MIRROH_BERGMITE_A 0x4E5 // Unused Flag
#define FLAG_MIRROH_BERGMITE_B 0x49E // Unused Flag
#define FLAG_MIRROH_BERGMITE_C 0x49F // Unused Flag
#define FLAG_ANCIENT_MIRROH_AERODACTYL 0x4A0 // Unused Flag
#define FLAG_LILYPOND_DREEPY_FIRST 0x4A1 // dreepy 
#define FLAG_LILYPOND_DREEPY_SECOND 0x4A2 // dreepy 
#define FLAG_LILYPOND_DREEPY_THIRD 0x4A3 // dreepy
#define FLAG_LILYPOND_LAPRAS 0x4A4 // heal the lapras
#define FLAG_LILYPOND_FISHERMAN_QUEST_START 0x4A5 // get the letter and start quest
#define FLAG_LILYPOND_FISHERMAN_A_LETTER 0x4A6 // give letter to brother A
#define FLAG_LILYPOND_FISHERMAN_B_LETTER 0x4A7 // give letter to brother B
#define FLAG_IVYRIVER_ZARUDE_SCARF 0x4A8 // meet the fishermen at ivy river
#define FLAG_IVYRIVER_ZARUDE_NOTE1 0x1DE // full zarude cutscene
#define FLAG_IVYRIVER_ZARUDE_NOTE2 0x1DF // unused flag
#define FLAG_LILYPOND_LAPRAS_ENCOUNTER 0x1E0 // the one-time lapras encounter done or not
#define FLAG_RANGER_TAUROS_USE 0x1E1 // can use the ranger tauros
#define FLAG_RANGER_ACCEPTED 0x1E2 // cleared the interview 
#define FLAG_IVY_RIVER_RANGER_SCIENTIST_A 0x1E3 // Unused Flag
#define FLAG_IVY_RIVER_RANGER_SCIENTIST_B 0x4B5 // Unused Flag
#define FLAG_IVY_RIVER_RANGER_SCIENTIST_C 0x4B6 // Unused Flag
#define FLAG_GRAVEYARD_SPIRITOMB 0x4B7 // Unused Flag
#define FLAG_WINTERLILY_SNEASLER 0x4B8 // Unused Flag
#define FLAG_CERAM_TALONFLAME 0x4B9 // Unused Flag
#define FLAG_PELLUCA_GYM_GABRIELLE_BATTLE 0x4BA // Unused Flag
#define FLAG_HIDE_RIVETSHORE_PERCY        0x4BB // Unused Flag
#define FLAG_HIDE_CONSTRUCTION_HQ_PERCY      0x13D // These Wonder Card flags are referenced but never set
#define FLAG_HIDE_ROUTE1_NORMAL              0x13E
#define FLAG_HIDE_ROUTE1_STRONG              0x13F
#define FLAG_POST_FINALE_CUTSCENE            0x140
#define FLAG_HIDE_TENEBRIS_TENEBRIS          0x141
#define FLAG_HOLLOW_ARMOR_GET                0x142
#define FLAG_RIVETSHORE_PINSIR_TRADE         0x143
#define FLAG_RIVETSHORE_GET_POCKETBOY        0x144
#define FLAG_GALECREST_GAME_CORNER_PASS      0x145
#define FLAG_PELLUCA_GC_TUTOR_BATTLE         0x146
#define FLAG_RANGER_SELECTED_MON_ONE         0x147
#define FLAG_RANGER_SELECTED_MON_TWO         0x148
#define FLAG_RANGER_SELECTED_MON_THREE       0x149
#define FLAG_BERGER_CERAM                    0x14A
#define FLAG_ROUTE6_ZERAORA_BLOCKER          0x14B
#define FLAG_POSTGAME_MOM_TALK               0xC2 
#define FLAG_FISHERMAN_GAVE_LETTER           0xC3 
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3   0xC4 
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4   0xC5 
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5   0xC6 


//Post-game
#define FLAG_GET_RETRO_DRIVE                 0x4F9 // Unused Flag
#define FLAG_GET_POCKET_DRIVE                0x4FA // Unused Flag
#define FLAG_GET_SWAP_DRIVE                  0x4FF // Unused Flag
#define FLAG_WONDER_CARD_UNUSED_16           0x14C
#define FLAG_WONDER_CARD_UNUSED_17           0x14D

//I AM GOING TO USE THESE ONE BY ONE | CUSTOM or SPECIAL FLAGS
#define FLAG_HEAL_PASS_EXPLAIN                                      0x4E7 // gym 
#define FLAG_HEAL_PASS_HAVE                                         0x4E8 // gym 
#define FLAG_GASTREEGYM_SPENSER_WATER                               0x4E9 // gym 
#define FLAG_GASTREEGYM_SPENSER_REWARD                              0x4EA // gym 
#define FLAG_CERAMBASECAMPGYM_SPENSER_WATER                         0x4EB // gym 
#define FLAG_CERAMBASECAMPGYM_SPENSER_REWARD                        0x4EC // gym 
#define FLAG_GALECRESTGYM_SPENSER_WATER                             0x4ED // gym 
#define FLAG_GALECRESTGYM_SPENSER_REWARD                            0x4EE // gym 
#define FLAG_SILVERSUNGYM_SPENSER_WATER                             0x4EF // gym 
#define FLAG_SILVERSUNGYM_SPENSER_REWARD                            0x4E6 // gym 
#define FLAG_WINTERLILYHOLLOWGYM_SPENSER_WATER                      0x4C1 // gym 
#define FLAG_WINTERLILYHOLLOWGYM_SPENSER_REWARD                     0x4C2 // gym 
#define FLAG_PELLUCAGYM_SPENSER_WATER                               0x4C3 // gym
#define FLAG_PELLUCAGYM_SPENSER_REWARD                              0x4C4 // gym
#define FLAG_RIVETSHOREGYM_SPENSER_WATER                            0x4C5 // gym
#define FLAG_RIVETSHOREGYM_SPENSER_REWARD                           0x4C6 // gym
#define FLAG_MIRROHBASECAMPGYM_SPENSER_WATER                        0x4C7 // gym
#define FLAG_MIRROHBASECAMPGYM_SPENSER_REWARD                       0x4C8 // gym
#define FLAG_UNUSED_0x4C9                                           0x4C9 // Unused Flag
#define FLAG_UNUSED_0x4CA                                           0x4CA // Unused Flag
#define FLAG_UNUSED_0x4CB                                           0x4CB // Unused Flag
#define FLAG_UNUSED_0x4CC                                           0x4CC // Unused Flag
#define FLAG_UNUSED_0x4CD                                           0x4CD // Unused Flag
#define FLAG_UNUSED_0x4CE                                           0x4CE // Unused Flag
#define FLAG_UNUSED_0x4CF                                           0x4CF // Unused Flag

//Legendaries
#define FLAG_UNUSED_0x4D0                                           0x4D0 // Unused Flag
#define FLAG_UNUSED_0x4D1                                           0x4D1 // Unused Flag
#define FLAG_UNUSED_0x4D2                                           0x4D2 // Unused Flag
#define FLAG_UNUSED_0x4D3                                           0x4D3 // Unused Flag
#define FLAG_CELEBI                                                 0x4D4 // Unused Flag
#define FLAG_DIANCIE                                                0x4D5 // Unused Flag
#define FLAG_ZERAORA                                                0x4D6 // Unused Flag
#define FLAG_ZARUDE                                                 0x4D7 // Unused Flag


// Scripts
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL  0x50
#define FLAG_SET_WALL_CLOCK                      0x51
#define FLAG_RESCUED_BIRCH                       0x52
#define FLAG_LEGENDARIES_IN_SOOTOPOLIS           0x53
#define FLAG_HIDE_CONTEST_POKE_BALL          0x56  // Always set after new game, object it hides is added directly
#define FLAG_MET_RIVAL_MOM                   0x57
#define FLAG_BIRCH_AIDE_MET                  0x58
#define FLAG_DECLINED_BIKE                   0x59
#define FLAG_RECEIVED_BIKE                   0x5A
#define FLAG_WATTSON_REMATCH_AVAILABLE       0x5B
#define FLAG_COLLECTED_ALL_SILVER_SYMBOLS    0x5C
#define FLAG_GOOD_LUCK_SAFARI_ZONE           0x5D // Set after talking to NPC blocking Safari Zone entrance/exit once.
#define FLAG_RECEIVED_WAILMER_PAIL           0x5E
#define FLAG_RECEIVED_POKEBLOCK_CASE         0x5F
#define FLAG_RECEIVED_SECRET_POWER           0x60
#define FLAG_MET_TEAM_AQUA_HARBOR            0x61
#define FLAG_TV_EXPLAINED                    0x62
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE     0x63
#define FLAG_MOSSDEEP_GYM_SWITCH_1           0x64 // Leftover from the RS version of Mossdeep Gym, functionally unused
#define FLAG_MOSSDEEP_GYM_SWITCH_2           0x65 //
#define FLAG_MOSSDEEP_GYM_SWITCH_3           0x66 //
#define FLAG_MOSSDEEP_GYM_SWITCH_4           0x67 //
#define FLAG_OCEANIC_MUSEUM_MET_REPORTER     0x69
#define FLAG_RECEIVED_HM_STRENGTH            0x6A
#define FLAG_RECEIVED_HM_ROCK_SMASH          0x6B
#define FLAG_WHITEOUT_TO_LAVARIDGE           0x6C // Set after defeating Flannery, so the player cant white out from poison before receiving Go Goggles
#define FLAG_RECEIVED_HM_FLASH               0x6D
#define FLAG_RECEIVED_HM_FLY                 0x6E
#define FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT  0x6F
#define FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE  0x70
#define FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE 0x71 // Unused Flag. Used in R/S to indicate whether player defeated or caught Groudon/Kyogre in Cave of Origin.
#define FLAG_SCOTT_CALL_BATTLE_FRONTIER      0x72 // Used in order to activate a phone call from Scott, inviting the player to the SS Tidal.
#define FLAG_RECEIVED_METEORITE              0x73
#define FLAG_ADVENTURE_STARTED               0x74 // RECEIVED Pokédex.
#define FLAG_DEFEATED_MAGMA_SPACE_CENTER     0x75 // Set when Team Magma is defeated at Mossdeep's Space Center.
#define FLAG_MET_HIDDEN_POWER_GIVER          0x76

#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE    0x77

#define FLAG_LANDMARK_MIRAGE_TOWER           0x78
#define FLAG_RECEIVED_TM_BRICK_BREAK         0x79
#define FLAG_RECEIVED_HM_SURF                0x7A
#define FLAG_RECEIVED_HM_DIVE                0x7B
#define FLAG_REGISTER_RIVAL_POKENAV          0x7C
#define FLAG_DEFEATED_RIVAL_ROUTE_104        0x7D
#define FLAG_DEFEATED_WALLY_VICTORY_ROAD     0x7E
#define FLAG_MET_PRETTY_PETAL_SHOP_OWNER     0x7F
#define FLAG_ENABLE_ROXANNE_FIRST_CALL       0x80 // Set after defeating Brawly. This will activate a call with Roxanne in order to register her.
#define FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN  0x81
#define FLAG_DEFEATED_RIVAL_ROUTE103         0x82
#define FLAG_RECEIVED_DOLL_LANETTE           0x83
#define FLAG_RECEIVED_POTION_OLDALE          0x84
#define FLAG_RECEIVED_AMULET_COIN            0x85
#define FLAG_PENDING_DAYCARE_EGG             0x86
#define FLAG_THANKED_FOR_PLAYING_WITH_WALLY  0x87
#define FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL 0x88 // Set after defeating Wally outside Mauville Gym. Will activate a call later to register Wally.
#define FLAG_RECEIVED_HM_CUT                 0x89
#define FLAG_SCOTT_CALL_FORTREE_GYM          0x8A // Triggers call from Scott after defeating Winona
#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY   0x8B
#define FLAG_RECEIVED_6_SODA_POP             0x8C
#define FLAG_DEFEATED_SEASHORE_HOUSE         0x8D
#define FLAG_DEVON_GOODS_STOLEN              0x8E
#define FLAG_RECOVERED_DEVON_GOODS           0x8F
#define FLAG_RETURNED_DEVON_GOODS            0x90
#define FLAG_CAUGHT_LUGIA                    0x91
#define FLAG_CAUGHT_HO_OH                    0x92
#define FLAG_MR_BRINEY_SAILING_INTRO         0x93
#define FLAG_DOCK_REJECTED_DEVON_GOODS       0x94
#define FLAG_DELIVERED_DEVON_GOODS           0x95
#define FLAG_RECEIVED_CONTEST_PASS           0x96 // Unused, leftover from R/S
#define FLAG_RECEIVED_CASTFORM               0x97
#define FLAG_RECEIVED_SUPER_ROD              0x98
#define FLAG_RUSTBORO_NPC_TRADE_COMPLETED    0x99
#define FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED  0x9A
#define FLAG_FORTREE_NPC_TRADE_COMPLETED     0x9B
#define FLAG_BATTLE_FRONTIER_TRADE_DONE      0x9C
#define FLAG_FORCE_MIRAGE_TOWER_VISIBLE      0x9D
#define FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE   0x9E
#define FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN 0x9F
#define FLAG_COOL_PAINTING_MADE              0xA0
#define FLAG_BEAUTY_PAINTING_MADE            0xA1
#define FLAG_CUTE_PAINTING_MADE              0xA2
#define FLAG_SMART_PAINTING_MADE             0xA3
#define FLAG_TOUGH_PAINTING_MADE             0xA4
#define FLAG_RECEIVED_TM_ROCK_TOMB           0xA5
#define FLAG_RECEIVED_TM_BULK_UP             0xA6
#define FLAG_RECEIVED_TM_SHOCK_WAVE          0xA7
#define FLAG_RECEIVED_TM_OVERHEAT            0xA8
#define FLAG_RECEIVED_TM_FACADE              0xA9
#define FLAG_RECEIVED_TM_AERIAL_ACE          0xAA
#define FLAG_RECEIVED_TM_CALM_MIND           0xAB
#define FLAG_RECEIVED_TM_WATER_PULSE         0xAC
#define FLAG_HIDE_SECRET_BASE_TRAINER        0xAD
#define FLAG_DECORATION_1                    0xAE
#define FLAG_DECORATION_2                    0xAF
#define FLAG_DECORATION_3                    0xB0
#define FLAG_DECORATION_4                    0xB1
#define FLAG_DECORATION_5                    0xB2
#define FLAG_DECORATION_6                    0xB3
#define FLAG_DECORATION_7                    0xB4
#define FLAG_DECORATION_8                    0xB5
#define FLAG_DECORATION_9                    0xB6
#define FLAG_DECORATION_10                   0xB7
#define FLAG_DECORATION_11                   0xB8
#define FLAG_DECORATION_12                   0xB9
#define FLAG_DECORATION_13                   0xBA
#define FLAG_DECORATION_14                   0xBB
#define FLAG_RECEIVED_POKENAV                0xBC
#define FLAG_DELIVERED_STEVEN_LETTER         0xBD
#define FLAG_DEFEATED_WALLY_MAUVILLE         0xBE
#define FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F  0xBF
#define FLAG_RECEIVED_SUN_STONE_MOSSDEEP     0xC0
#define FLAG_WALLY_SPEECH                    0xC1
#define FLAG_RUSTURF_TUNNEL_OPENED           0xC7
#define FLAG_RECEIVED_RED_SCARF              0xC8
#define FLAG_RECEIVED_BLUE_SCARF             0xC9
#define FLAG_RECEIVED_PINK_SCARF             0xCA
#define FLAG_RECEIVED_GREEN_SCARF            0xCB
#define FLAG_RECEIVED_YELLOW_SCARF           0xCC
#define FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER    0xCD
#define FLAG_ENCOUNTERED_LATIAS_OR_LATIOS    0xCE
#define FLAG_MET_ARCHIE_METEOR_FALLS         0xCF
#define FLAG_GOT_BASEMENT_KEY_FROM_WATTSON   0xD0
#define FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON 0xD1
#define FLAG_FAN_CLUB_STRENGTH_SHARED        0xD2 // Set when you rate the strength of another trainer in Lilycove's Trainer Fan Club.
#define FLAG_DEFEATED_RIVAL_RUSTBORO         0xD3
#define FLAG_RECEIVED_RED_OR_BLUE_ORB        0xD4
#define FLAG_RECEIVED_PREMIER_BALL_RUSTBORO  0xD5
#define FLAG_ENABLE_WALLY_MATCH_CALL         0xD6
#define FLAG_ENABLE_SCOTT_MATCH_CALL         0xD7
#define FLAG_ENABLE_MOM_MATCH_CALL           0xD8
#define FLAG_MET_DIVING_TREASURE_HUNTER      0xD9
#define FLAG_MET_WAILMER_TRAINER             0xDA
#define FLAG_EVIL_LEADER_PLEASE_STOP         0xDB

#define FLAG_NEVER_SET_0x0DC                 0xDC // This flag is read, but never written to

#define FLAG_RECEIVED_GO_GOGGLES             0xDD
#define FLAG_WINGULL_SENT_ON_ERRAND          0xDE
#define FLAG_RECEIVED_MENTAL_HERB            0xDF
#define FLAG_WINGULL_DELIVERED_MAIL          0xE0
#define FLAG_RECEIVED_20_COINS               0xE1
#define FLAG_RECEIVED_STARTER_DOLL           0xE2
#define FLAG_RECEIVED_GOOD_ROD               0xE3
#define FLAG_REGI_DOORS_OPENED               0xE4
#define FLAG_RECEIVED_TM_RETURN              0xE5
#define FLAG_RECEIVED_TM_SLUDGE_BOMB         0xE6
#define FLAG_RECEIVED_TM_ROAR                0xE7
#define FLAG_RECEIVED_TM_GIGA_DRAIN          0xE8
#define FLAG_RECEIVED_TM_REST                0xEA
#define FLAG_RECEIVED_TM_ATTRACT             0xEB
#define FLAG_RECEIVED_GLASS_ORNAMENT         0xEC
#define FLAG_RECEIVED_SILVER_SHIELD          0xED
#define FLAG_RECEIVED_GOLD_SHIELD            0xEE
#define FLAG_USED_STORAGE_KEY                0xEF
#define FLAG_USED_ROOM_1_KEY                 0xF0
#define FLAG_USED_ROOM_2_KEY                 0xF1
#define FLAG_USED_ROOM_4_KEY                 0xF2
#define FLAG_USED_ROOM_6_KEY                 0xF3
#define FLAG_MET_PROF_COZMO                  0xF4
#define FLAG_RECEIVED_WAILMER_DOLL           0xF5
#define FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104 0xF6
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS      0xF7
#define FLAG_RECEIVED_SPELON_BERRY           0xF8
#define FLAG_RECEIVED_PAMTRE_BERRY           0xF9
#define FLAG_RECEIVED_WATMEL_BERRY           0xFA
#define FLAG_RECEIVED_DURIN_BERRY            0xFB
#define FLAG_RECEIVED_BELUE_BERRY            0xFC
#define FLAG_ENABLE_RIVAL_MATCH_CALL         0xFD
#define FLAG_RECEIVED_CHARCOAL               0xFE
#define FLAG_LATIOS_OR_LATIAS_ROAMING        0xFF
#define FLAG_RECEIVED_REPEAT_BALL            0x100
#define FLAG_RECEIVED_OLD_ROD                0x101
#define FLAG_RECEIVED_COIN_CASE              0x102
#define FLAG_RETURNED_RED_OR_BLUE_ORB        0x103
#define FLAG_RECEIVED_TM_SNATCH              0x104
#define FLAG_RECEIVED_TM_DIG                 0x105
#define FLAG_RECEIVED_TM_BULLET_SEED         0x106
#define FLAG_ENTERED_ELITE_FOUR              0x107
#define FLAG_RECEIVED_TM_HIDDEN_POWER        0x108
#define FLAG_RECEIVED_TM_TORMENT             0x109
#define FLAG_RECEIVED_LAVARIDGE_EGG          0x10A
#define FLAG_RECEIVED_REVIVED_FOSSIL_MON     0x10B
#define FLAG_SECRET_BASE_REGISTRY_ENABLED    0x10C
#define FLAG_RECEIVED_TM_THIEF               0x10D
#define FLAG_CONTEST_SKETCH_CREATED          0x10E  // Set but never read
#define FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE   0x10F
#define FLAG_RECEIVED_EXP_SHARE              0x110
#define FLAG_POKERUS_EXPLAINED               0x111
#define FLAG_RECEIVED_RUNNING_SHOES          0x112
#define FLAG_RECEIVED_QUICK_CLAW             0x113
#define FLAG_RECEIVED_KINGS_ROCK             0x114
#define FLAG_RECEIVED_MACHO_BRACE            0x115
#define FLAG_RECEIVED_SOOTHE_BELL            0x116
#define FLAG_RECEIVED_WHITE_HERB             0x117
#define FLAG_RECEIVED_SOFT_SAND              0x118
#define FLAG_ENABLE_PROF_BIRCH_MATCH_CALL    0x119
#define FLAG_RECEIVED_CLEANSE_TAG            0x11A
#define FLAG_RECEIVED_FOCUS_BAND             0x11B
#define FLAG_DECLINED_WALLY_BATTLE_MAUVILLE  0x11C
#define FLAG_RECEIVED_DEVON_SCOPE            0x11D
#define FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE  0x11E
#define FLAG_MET_DEVON_EMPLOYEE              0x11F
#define FLAG_MET_RIVAL_RUSTBORO              0x120
#define FLAG_RECEIVED_SILK_SCARF             0x121
#define FLAG_NOT_READY_FOR_BATTLE_ROUTE_120  0x122
#define FLAG_RECEIVED_SS_TICKET              0x123
#define FLAG_MET_RIVAL_LILYCOVE              0x124
#define FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE 0x125
#define FLAG_EXCHANGED_SCANNER               0x126
#define FLAG_KECLEON_FLED_FORTREE            0x127
#define FLAG_PETALBURG_MART_EXPANDED_ITEMS   0x128
#define FLAG_RECEIVED_MIRACLE_SEED           0x129
#define FLAG_RECEIVED_BELDUM                 0x12A
#define FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK   0x12B
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER     0x12C
#define FLAG_RIVAL_LEFT_FOR_ROUTE103         0x12D
#define FLAG_OMIT_DIVE_FROM_STEVEN_LETTER    0x12E
#define FLAG_HAS_MATCH_CALL                  0x12F
#define FLAG_ADDED_MATCH_CALL_TO_POKENAV     0x130
#define FLAG_REGISTERED_STEVEN_POKENAV       0x131
#define FLAG_ENABLE_NORMAN_MATCH_CALL        0x132
#define FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN 0x133 // Set after you follow Steven to the entrance of the Cave of Origin.
#define FLAG_MET_ARCHIE_SOOTOPOLIS           0x134
#define FLAG_MET_MAXIE_SOOTOPOLIS            0x135
#define FLAG_MET_SCOTT_RUSTBORO              0x136
#define FLAG_WALLACE_GOES_TO_SKY_PILLAR      0x137 // Set after speaking to Wallace within the Cave of Origin.
#define FLAG_RECEIVED_HM_WATERFALL           0x138
#define FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS    0x139
#define FLAG_RECEIVED_AURORA_TICKET          0x13A
#define FLAG_RECEIVED_MYSTIC_TICKET          0x13B
#define FLAG_RECEIVED_OLD_SEA_MAP            0x13C
#define NUM_WONDER_CARD_FLAGS                (1 + FLAG_RECEIVED_OLD_SEA_MAP - FLAG_RECEIVED_AURORA_TICKET)

#define FLAG_MIRAGE_TOWER_VISIBLE            0x14E
#define FLAG_CHOSE_ROOT_FOSSIL               0x14F
#define FLAG_CHOSE_CLAW_FOSSIL               0x150
#define FLAG_RECEIVED_POWDER_JAR             0x151

#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER 0x152

#define FLAG_MET_BATTLE_FRONTIER_BREEDER     0x153
#define FLAG_MET_BATTLE_FRONTIER_MANIAC      0x154
#define FLAG_ENTERED_CONTEST                 0x155
#define FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN  0x156
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER     0x157
#define FLAG_ENABLE_MR_STONE_POKENAV         0x158
#define FLAG_NURSE_MENTIONS_GOLD_CARD        0x159
#define FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR  0x15A
#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR 0x15B

// Flags for whether a rematchable trainer has been registered in the player's Match Call.
// Most are used implicitly by adding their REMATCH_* id to TRAINER_REGISTERED_FLAGS_START.
// Some Match Call entries (like those for gym leaders, Wally, and all non-trainer NPCs like Prof. Birch)
// have their own separate flag that needs to be set to be enabled; see src/pokenav_match_call_data.c
#define TRAINER_REGISTERED_FLAGS_START       0x15C
#define FLAG_REGISTERED_ROSE                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_ROSE)
#define FLAG_REGISTERED_ANDRES               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ANDRES)
#define FLAG_REGISTERED_DUSTY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_DUSTY)
#define FLAG_REGISTERED_LOLA                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_LOLA)
#define FLAG_REGISTERED_RICKY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_RICKY)
#define FLAG_REGISTERED_LILA_AND_ROY         (TRAINER_REGISTERED_FLAGS_START + REMATCH_LILA_AND_ROY)
#define FLAG_REGISTERED_CRISTIN              (TRAINER_REGISTERED_FLAGS_START + REMATCH_CRISTIN)
#define FLAG_REGISTERED_BROOKE               (TRAINER_REGISTERED_FLAGS_START + REMATCH_BROOKE)
#define FLAG_REGISTERED_WILTON               (TRAINER_REGISTERED_FLAGS_START + REMATCH_WILTON)
#define FLAG_REGISTERED_VALERIE              (TRAINER_REGISTERED_FLAGS_START + REMATCH_VALERIE)
#define FLAG_REGISTERED_CINDY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_CINDY)
#define FLAG_REGISTERED_THALIA               (TRAINER_REGISTERED_FLAGS_START + REMATCH_THALIA)
#define FLAG_REGISTERED_JESSICA              (TRAINER_REGISTERED_FLAGS_START + REMATCH_JESSICA)
#define FLAG_REGISTERED_WINSTON              (TRAINER_REGISTERED_FLAGS_START + REMATCH_WINSTON)
#define FLAG_REGISTERED_STEVE                (TRAINER_REGISTERED_FLAGS_START + REMATCH_STEVE)
#define FLAG_REGISTERED_TONY                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_TONY)
#define FLAG_REGISTERED_NOB                  (TRAINER_REGISTERED_FLAGS_START + REMATCH_NOB)
#define FLAG_REGISTERED_KOJI                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_KOJI)
#define FLAG_REGISTERED_FERNANDO             (TRAINER_REGISTERED_FLAGS_START + REMATCH_FERNANDO)
#define FLAG_REGISTERED_DALTON               (TRAINER_REGISTERED_FLAGS_START + REMATCH_DALTON)
#define FLAG_REGISTERED_BERNIE               (TRAINER_REGISTERED_FLAGS_START + REMATCH_BERNIE)
#define FLAG_REGISTERED_ETHAN                (TRAINER_REGISTERED_FLAGS_START + REMATCH_ETHAN)
#define FLAG_REGISTERED_JOHN_AND_JAY         (TRAINER_REGISTERED_FLAGS_START + REMATCH_JOHN_AND_JAY)
#define FLAG_REGISTERED_JEFFREY              (TRAINER_REGISTERED_FLAGS_START + REMATCH_JEFFREY)
#define FLAG_REGISTERED_CAMERON              (TRAINER_REGISTERED_FLAGS_START + REMATCH_CAMERON)
#define FLAG_REGISTERED_JACKI                (TRAINER_REGISTERED_FLAGS_START + REMATCH_JACKI)
#define FLAG_REGISTERED_WALTER               (TRAINER_REGISTERED_FLAGS_START + REMATCH_WALTER)
#define FLAG_REGISTERED_KAREN                (TRAINER_REGISTERED_FLAGS_START + REMATCH_KAREN)
#define FLAG_REGISTERED_JERRY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_JERRY)
#define FLAG_REGISTERED_ANNA_AND_MEG         (TRAINER_REGISTERED_FLAGS_START + REMATCH_ANNA_AND_MEG)
#define FLAG_REGISTERED_ISABEL               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ISABEL)
#define FLAG_REGISTERED_MIGUEL               (TRAINER_REGISTERED_FLAGS_START + REMATCH_MIGUEL)
#define FLAG_REGISTERED_TIMOTHY              (TRAINER_REGISTERED_FLAGS_START + REMATCH_TIMOTHY)
#define FLAG_REGISTERED_SHELBY               (TRAINER_REGISTERED_FLAGS_START + REMATCH_SHELBY)
#define FLAG_REGISTERED_CALVIN               (TRAINER_REGISTERED_FLAGS_START + REMATCH_CALVIN)
#define FLAG_REGISTERED_ELLIOT               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ELLIOT)
#define FLAG_REGISTERED_ISAIAH               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ISAIAH)
#define FLAG_REGISTERED_MARIA                (TRAINER_REGISTERED_FLAGS_START + REMATCH_MARIA)
#define FLAG_REGISTERED_ABIGAIL              (TRAINER_REGISTERED_FLAGS_START + REMATCH_ABIGAIL)
#define FLAG_REGISTERED_DYLAN                (TRAINER_REGISTERED_FLAGS_START + REMATCH_DYLAN)
#define FLAG_REGISTERED_KATELYN              (TRAINER_REGISTERED_FLAGS_START + REMATCH_KATELYN)
#define FLAG_REGISTERED_BENJAMIN             (TRAINER_REGISTERED_FLAGS_START + REMATCH_BENJAMIN)
#define FLAG_REGISTERED_PABLO                (TRAINER_REGISTERED_FLAGS_START + REMATCH_PABLO)
#define FLAG_REGISTERED_NICOLAS              (TRAINER_REGISTERED_FLAGS_START + REMATCH_NICOLAS)
#define FLAG_REGISTERED_ROBERT               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ROBERT)
#define FLAG_REGISTERED_LAO                  (TRAINER_REGISTERED_FLAGS_START + REMATCH_LAO)
#define FLAG_REGISTERED_CYNDY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_CYNDY)
#define FLAG_REGISTERED_MADELINE             (TRAINER_REGISTERED_FLAGS_START + REMATCH_MADELINE)
#define FLAG_REGISTERED_JENNY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_JENNY)
#define FLAG_REGISTERED_DIANA                (TRAINER_REGISTERED_FLAGS_START + REMATCH_DIANA)
#define FLAG_REGISTERED_AMY_AND_LIV          (TRAINER_REGISTERED_FLAGS_START + REMATCH_AMY_AND_LIV)
#define FLAG_REGISTERED_ERNEST               (TRAINER_REGISTERED_FLAGS_START + REMATCH_ERNEST)
#define FLAG_REGISTERED_CORY                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_CORY)
#define FLAG_REGISTERED_EDWIN                (TRAINER_REGISTERED_FLAGS_START + REMATCH_EDWIN)
#define FLAG_REGISTERED_LYDIA                (TRAINER_REGISTERED_FLAGS_START + REMATCH_LYDIA)
#define FLAG_REGISTERED_ISAAC                (TRAINER_REGISTERED_FLAGS_START + REMATCH_ISAAC)
#define FLAG_REGISTERED_GABRIELLE            (TRAINER_REGISTERED_FLAGS_START + REMATCH_GABRIELLE)
#define FLAG_REGISTERED_CATHERINE            (TRAINER_REGISTERED_FLAGS_START + REMATCH_CATHERINE)
#define FLAG_REGISTERED_JACKSON              (TRAINER_REGISTERED_FLAGS_START + REMATCH_JACKSON)
#define FLAG_REGISTERED_HALEY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_HALEY)
#define FLAG_REGISTERED_JAMES                (TRAINER_REGISTERED_FLAGS_START + REMATCH_JAMES)
#define FLAG_REGISTERED_TRENT                (TRAINER_REGISTERED_FLAGS_START + REMATCH_TRENT)
#define FLAG_REGISTERED_SAWYER               (TRAINER_REGISTERED_FLAGS_START + REMATCH_SAWYER)
#define FLAG_REGISTERED_KIRA_AND_DAN         (TRAINER_REGISTERED_FLAGS_START + REMATCH_KIRA_AND_DAN)
#define FLAG_REGISTERED_WALLY                (TRAINER_REGISTERED_FLAGS_START + REMATCH_WALLY)
#define FLAG_REGISTERED_ROXANNE              (TRAINER_REGISTERED_FLAGS_START + REMATCH_ROXANNE)
#define FLAG_REGISTERED_BRAWLY               (TRAINER_REGISTERED_FLAGS_START + REMATCH_BRAWLY)
#define FLAG_REGISTERED_WATTSON              (TRAINER_REGISTERED_FLAGS_START + REMATCH_WATTSON)
#define FLAG_REGISTERED_FLANNERY             (TRAINER_REGISTERED_FLAGS_START + REMATCH_FLANNERY)
#define FLAG_REGISTERED_NORMAN               (TRAINER_REGISTERED_FLAGS_START + REMATCH_NORMAN)
#define FLAG_REGISTERED_WINONA               (TRAINER_REGISTERED_FLAGS_START + REMATCH_WINONA)
#define FLAG_REGISTERED_TATE_AND_LIZA        (TRAINER_REGISTERED_FLAGS_START + REMATCH_TATE_AND_LIZA)
#define FLAG_REGISTERED_JUAN                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_JUAN)
#define FLAG_REGISTERED_SIDNEY               (TRAINER_REGISTERED_FLAGS_START + REMATCH_SIDNEY)
#define FLAG_REGISTERED_PHOEBE               (TRAINER_REGISTERED_FLAGS_START + REMATCH_PHOEBE)
#define FLAG_REGISTERED_GLACIA               (TRAINER_REGISTERED_FLAGS_START + REMATCH_GLACIA)
#define FLAG_REGISTERED_DRAKE                (TRAINER_REGISTERED_FLAGS_START + REMATCH_DRAKE)
#define FLAG_REGISTERED_WALLACE              (TRAINER_REGISTERED_FLAGS_START + REMATCH_WALLACE)

#define FLAG_DEFEATED_DEOXYS                 0x1AC
#define FLAG_BATTLED_DEOXYS                  0x1AD
#define FLAG_SHOWN_EON_TICKET                0x1AE
#define FLAG_SHOWN_AURORA_TICKET             0x1AF
#define FLAG_SHOWN_OLD_SEA_MAP               0x1B0
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER       0x1B1
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT       0x1B2
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER   0x1B3
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC         0x1B4
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME     0x1B5
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK    0x1B6
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE    0x1B7
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH  0x1B8
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE   0x1B9
#define FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION     0x1BA
#define FLAG_DEFEATED_REGIROCK               0x1BB
#define FLAG_DEFEATED_REGICE                 0x1BC
#define FLAG_DEFEATED_REGISTEEL              0x1BD
#define FLAG_DEFEATED_KYOGRE                 0x1BE
#define FLAG_DEFEATED_GROUDON                0x1BF
#define FLAG_DEFEATED_RAYQUAZA               0x1C0
#define FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE 0x1C1
#define FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE 0x1C2
#define FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE 0x1C3
#define FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT 0x1C4
#define FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT 0x1C5
#define FLAG_DEFEATED_SUDOWOODO              0x1C6
#define FLAG_DEFEATED_MEW                    0x1C7
#define FLAG_DEFEATED_LATIAS_OR_LATIOS       0x1C8
#define FLAG_CAUGHT_LATIAS_OR_LATIOS         0x1C9
#define FLAG_CAUGHT_MEW                      0x1CA
#define FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE 0x1CB
#define FLAG_MET_SCOTT_IN_VERDANTURF         0x1CC
#define FLAG_MET_SCOTT_IN_FALLARBOR          0x1CD
#define FLAG_MET_SCOTT_IN_LILYCOVE           0x1CE
#define FLAG_MET_SCOTT_IN_EVERGRANDE         0x1CF
#define FLAG_MET_SCOTT_ON_SS_TIDAL           0x1D0
#define FLAG_SCOTT_GIVES_BATTLE_POINTS       0x1D1
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS      0x1D2
#define FLAG_ENABLE_ROXANNE_MATCH_CALL       0x1D3
#define FLAG_ENABLE_BRAWLY_MATCH_CALL        0x1D4
#define FLAG_ENABLE_WATTSON_MATCH_CALL       0x1D5
#define FLAG_ENABLE_FLANNERY_MATCH_CALL      0x1D6
#define FLAG_ENABLE_WINONA_MATCH_CALL        0x1D7
#define FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL 0x1D8
#define FLAG_ENABLE_JUAN_MATCH_CALL          0x1D9
#define FLAG_SHOWN_MYSTIC_TICKET             0x1DB
#define FLAG_DEFEATED_HO_OH                  0x1DC
#define FLAG_DEFEATED_LUGIA                  0x1DD

// Mystery Gift Flags (Unknown)
#define FLAG_MYSTERY_GIFT_DONE               0x1E4
#define FLAG_MYSTERY_GIFT_1                  0x1E5
#define FLAG_MYSTERY_GIFT_2                  0x1E6
#define FLAG_MYSTERY_GIFT_3                  0x1E7
#define FLAG_MYSTERY_GIFT_4                  0x1E8
#define FLAG_MYSTERY_GIFT_5                  0x1E9
#define FLAG_MYSTERY_GIFT_6                  0x1EA
#define FLAG_MYSTERY_GIFT_7                  0x1EB
#define FLAG_MYSTERY_GIFT_8                  0x1EC
#define FLAG_MYSTERY_GIFT_9                  0x1ED
#define FLAG_MYSTERY_GIFT_10                 0x1EE
#define FLAG_MYSTERY_GIFT_11                 0x1EF
#define FLAG_MYSTERY_GIFT_12                 0x1F0
#define FLAG_MYSTERY_GIFT_13                 0x1F1
#define FLAG_MYSTERY_GIFT_14                 0x1F2
#define FLAG_MYSTERY_GIFT_15                 0x1F3

// Hidden Items (I AM GOING TO USE THESE ONE BY ONE)
#define FLAG_HIDDEN_ITEMS_START                                                         0x1F4
#define FLAG_HIDDEN_ITEM_ROUTE1_A                            (FLAG_HIDDEN_ITEMS_START + 0x00)
#define FLAG_HIDDEN_ITEM_TRICK_HOUSE_NUGGET                  (FLAG_HIDDEN_ITEMS_START + 0x01)   //SOME SPECIAL FLAG IGNORE IT
#define FLAG_HIDDEN_ITEM_ROUTE1_B                            (FLAG_HIDDEN_ITEMS_START + 0x02)
#define FLAG_HIDDEN_ITEM_ROUTE1_C                            (FLAG_HIDDEN_ITEMS_START + 0x03)
#define FLAG_HIDDEN_ITEM_FENNILAHL_TOWN_A                    (FLAG_HIDDEN_ITEMS_START + 0x04)
#define FLAG_HIDDEN_ITEM_ROUTE2_A                            (FLAG_HIDDEN_ITEMS_START + 0x05)
#define FLAG_HIDDEN_ITEM_ROUTE3_A                            (FLAG_HIDDEN_ITEMS_START + 0x06)
#define FLAG_HIDDEN_ITEM_ROUTE3_B                            (FLAG_HIDDEN_ITEMS_START + 0x07)
#define FLAG_HIDDEN_ITEM_ROUTE3_C                            (FLAG_HIDDEN_ITEMS_START + 0x08)
#define FLAG_HIDDEN_ITEM_ROUTE3_D                            (FLAG_HIDDEN_ITEMS_START + 0x09)
#define FLAG_HIDDEN_ITEM_GASTREE_A                           (FLAG_HIDDEN_ITEMS_START + 0x0A)
#define FLAG_HIDDEN_ITEM_GASTREE_B                           (FLAG_HIDDEN_ITEMS_START + 0x0B)

#define FLAG_HIDDEN_ITEM_ROUTE4_A                            (FLAG_HIDDEN_ITEMS_START + 0x0C)
#define FLAG_HIDDEN_ITEM_ROUTE4_B                            (FLAG_HIDDEN_ITEMS_START + 0x0D)
#define FLAG_HIDDEN_ITEM_CERAMBASECAMP_A                     (FLAG_HIDDEN_ITEMS_START + 0x0E)
#define FLAG_HIDDEN_ITEM_CERAMBASECAMP_B                     (FLAG_HIDDEN_ITEMS_START + 0x0F)
#define FLAG_HIDDEN_ITEM_MTCERAM_A                           (FLAG_HIDDEN_ITEMS_START + 0x10)
#define FLAG_HIDDEN_ITEM_MTCERAM_B                           (FLAG_HIDDEN_ITEMS_START + 0x11)
#define FLAG_HIDDEN_ITEM_MTCERAM_C                           (FLAG_HIDDEN_ITEMS_START + 0x12)
#define FLAG_HIDDEN_ITEM_VILETHORN_WOODS_A                   (FLAG_HIDDEN_ITEMS_START + 0x13)
#define FLAG_HIDDEN_ITEM_VILETHORN_WOODS_B                   (FLAG_HIDDEN_ITEMS_START + 0x14)

#define FLAG_HIDDEN_ITEM_VILETHORN_WOODS_C                   (FLAG_HIDDEN_ITEMS_START + 0x15)
#define FLAG_HIDDEN_ITEM_VILETHORN_WOODS_D                   (FLAG_HIDDEN_ITEMS_START + 0x16)
#define FLAG_HIDDEN_ITEM_GALECREST_A                         (FLAG_HIDDEN_ITEMS_START + 0x17)
#define FLAG_HIDDEN_ITEM_GALECREST_B                         (FLAG_HIDDEN_ITEMS_START + 0x18)
#define FLAG_HIDDEN_ITEM_GALECREST_C                         (FLAG_HIDDEN_ITEMS_START + 0x19)
#define FLAG_HIDDEN_ITEM_GALECREST_D                         (FLAG_HIDDEN_ITEMS_START + 0x1A)

#define FLAG_HIDDEN_ITEM_SILVERSUN_A                         (FLAG_HIDDEN_ITEMS_START + 0x1B)
#define FLAG_HIDDEN_ITEM_SILVERSUN_B                         (FLAG_HIDDEN_ITEMS_START + 0x1C)
#define FLAG_HIDDEN_ITEM_SILVERSUN_C                         (FLAG_HIDDEN_ITEMS_START + 0x1D)
#define FLAG_HIDDEN_ITEM_SILVERSUN_D                         (FLAG_HIDDEN_ITEMS_START + 0x1E)
#define FLAG_HIDDEN_ITEM_SILVERSUN_E                         (FLAG_HIDDEN_ITEMS_START + 0x1F)

#define FLAG_HIDDEN_ITEM_CERAMBASECAMP_C                     (FLAG_HIDDEN_ITEMS_START + 0x20)
#define FLAG_HIDDEN_ITEM_CERAMBASECAMP_D                     (FLAG_HIDDEN_ITEMS_START + 0x21)

#define FLAG_HIDDEN_ITEM_MIRROHINT_A                         (FLAG_HIDDEN_ITEMS_START + 0x22)
#define FLAG_HIDDEN_ITEM_MIRROHINT_B                         (FLAG_HIDDEN_ITEMS_START + 0x23)
#define FLAG_HIDDEN_ITEM_MIRROHINT_C                         (FLAG_HIDDEN_ITEMS_START + 0x24)
#define FLAG_HIDDEN_ITEM_MIRROHINT_D                         (FLAG_HIDDEN_ITEMS_START + 0x25)
#define FLAG_HIDDEN_ITEM_MIRROHINT_E                         (FLAG_HIDDEN_ITEMS_START + 0x26)
#define FLAG_HIDDEN_ITEM_MIRROHINT_F                         (FLAG_HIDDEN_ITEMS_START + 0x27)
#define FLAG_HIDDEN_ITEM_MIRROHPEAK_A                        (FLAG_HIDDEN_ITEMS_START + 0x28)
#define FLAG_HIDDEN_ITEM_MIRROHPEAK_B                        (FLAG_HIDDEN_ITEMS_START + 0x29)

#define FLAG_HIDDEN_ITEM_ANCIENTMIRROH_A                     (FLAG_HIDDEN_ITEMS_START + 0x2A)
#define FLAG_HIDDEN_ITEM_ANCIENTMIRROH_B                     (FLAG_HIDDEN_ITEMS_START + 0x2B)
#define FLAG_HIDDEN_ITEM_ANCIENTMIRROH_C                     (FLAG_HIDDEN_ITEMS_START + 0x2C)

#define FLAG_HIDDEN_ITEM_HOLLOW_GYM_A                        (FLAG_HIDDEN_ITEMS_START + 0x2D)
#define FLAG_HIDDEN_ITEM_HOLLOW_GYM_B                        (FLAG_HIDDEN_ITEMS_START + 0x39)

//lily pond
#define FLAG_HIDDEN_ITEM_LILY_POND_A                         (FLAG_HIDDEN_ITEMS_START + 0x2E)

//ivy river
#define FLAG_HIDDEN_ITEM_IVY_RIVER_A                         (FLAG_HIDDEN_ITEMS_START + 0x2F)
#define FLAG_HIDDEN_ITEM_IVY_RIVER_B                         (FLAG_HIDDEN_ITEMS_START + 0x30)
#define FLAG_HIDDEN_ITEM_IVY_RIVER_C                         (FLAG_HIDDEN_ITEMS_START + 0x31)

//Pelluca
#define FLAG_HIDDEN_ITEM_PELLUCA_RESTAURANT_A                (FLAG_HIDDEN_ITEMS_START + 0x32)
#define FLAG_HIDDEN_ITEM_PELLUCA_RESTAURANT_B                (FLAG_HIDDEN_ITEMS_START + 0x33)

//Hollow
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x34)
#define FLAG_HIDDEN_ITEM_ROUTE_110_GREAT_BALL                (FLAG_HIDDEN_ITEMS_START + 0x35)

//ROUTE 7
#define FLAG_HIDDEN_ITEM_ROUTE7_A                            (FLAG_HIDDEN_ITEMS_START + 0x36)
#define FLAG_HIDDEN_ITEM_ROUTE7_B                            (FLAG_HIDDEN_ITEMS_START + 0x37)

//Pelluca GC
#define FLAG_HIDDEN_ITEM_PELLUCA_GC                          (FLAG_HIDDEN_ITEMS_START + 0x38)

//rivetshore
#define FLAG_HIDDEN_ITEM_RIVETSHORE_A                        (FLAG_HIDDEN_ITEMS_START + 0x3A)
#define FLAG_HIDDEN_ITEM_RIVETSHORE_B                        (FLAG_HIDDEN_ITEMS_START + 0x3B)

//SS Elegant
#define FLAG_HIDDEN_ITEM_ELEGANT_A                           (FLAG_HIDDEN_ITEMS_START + 0x3C)
#define FLAG_HIDDEN_ITEM_ELEGANT_B                           (FLAG_HIDDEN_ITEMS_START + 0x3D)

//Championship
#define FLAG_HIDDEN_ITEM_VICTORY_CAPE_A                      (FLAG_HIDDEN_ITEMS_START + 0x3E)
#define FLAG_HIDDEN_ITEM_VICTORY_CAPE_B                      (FLAG_HIDDEN_ITEMS_START + 0x3F)

//Zeraora Cave
#define FLAG_HIDDEN_ITEM_ZERAORA_A                           (FLAG_HIDDEN_ITEMS_START + 0x40)
#define FLAG_HIDDEN_ITEM_ZERAORA_B                           (FLAG_HIDDEN_ITEMS_START + 0x41)

#define FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x42)
#define FLAG_HIDDEN_ITEM_ROUTE_118_IRON                      (FLAG_HIDDEN_ITEMS_START + 0x43)
#define FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x44)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2              (FLAG_HIDDEN_ITEMS_START + 0x45)
#define FLAG_HIDDEN_ITEM_ROUTE_120_ZINC                      (FLAG_HIDDEN_ITEMS_START + 0x46)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1              (FLAG_HIDDEN_ITEMS_START + 0x47)
#define FLAG_HIDDEN_ITEM_ROUTE_117_REPEL                     (FLAG_HIDDEN_ITEMS_START + 0x48)
#define FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x49)
#define FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x4A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_POKE_BALL             (FLAG_HIDDEN_ITEMS_START + 0x4B)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_GREAT_BALL              (FLAG_HIDDEN_ITEMS_START + 0x4C)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_FULL_HEAL               (FLAG_HIDDEN_ITEMS_START + 0x4D)
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_MAX_ETHER          (FLAG_HIDDEN_ITEMS_START + 0x4E)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_ZINC                 (FLAG_HIDDEN_ITEMS_START + 0x4F)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x50)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_1F_ULTRA_BALL          (FLAG_HIDDEN_ITEMS_START + 0x51)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_ELIXIR             (FLAG_HIDDEN_ITEMS_START + 0x52)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_MAX_REPEL          (FLAG_HIDDEN_ITEMS_START + 0x53)
#define FLAG_HIDDEN_ITEM_ROUTE_120_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x54)
#define FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE                  (FLAG_HIDDEN_ITEMS_START + 0x55)
#define FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x56)
#define FLAG_HIDDEN_ITEM_ROUTE_119_MAX_ETHER                 (FLAG_HIDDEN_ITEMS_START + 0x57)
#define FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x58)
#define FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x59)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5A)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5B)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x5C)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5D)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5E)
#define FLAG_HIDDEN_ITEM_PETALBURG_CITY_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x5F)
#define FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES             (FLAG_HIDDEN_ITEMS_START + 0x60)
#define FLAG_HIDDEN_ITEM_ROUTE_115_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x61)
#define FLAG_HIDDEN_ITEM_ROUTE_113_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x62)
#define FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP                     (FLAG_HIDDEN_ITEMS_START + 0x63)
#define FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE                (FLAG_HIDDEN_ITEMS_START + 0x64)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_CALCIUM            (FLAG_HIDDEN_ITEMS_START + 0x65)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_ZINC               (FLAG_HIDDEN_ITEMS_START + 0x66)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_PROTEIN            (FLAG_HIDDEN_ITEMS_START + 0x67)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_IRON               (FLAG_HIDDEN_ITEMS_START + 0x68)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE (FLAG_HIDDEN_ITEMS_START + 0x69)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY   (FLAG_HIDDEN_ITEMS_START + 0x6A)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC         (FLAG_HIDDEN_ITEMS_START + 0x6B)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP        (FLAG_HIDDEN_ITEMS_START + 0x6C)
#define FLAG_HIDDEN_ITEM_NAVEL_ROCK_TOP_SACRED_ASH           (FLAG_HIDDEN_ITEMS_START + 0x6D)
#define FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x6E)
#define FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL                 (FLAG_HIDDEN_ITEMS_START + 0x6F)




// Event Flags
#define FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG                      0x2BC
#define FLAG_HIDE_APPRENTICE                                        0x2BD
#define FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN                0x2BE
#define FLAG_HIDE_UNION_ROOM_PLAYER_1                               0x2BF
#define FLAG_HIDE_UNION_ROOM_PLAYER_2                               0x2C0
#define FLAG_HIDE_UNION_ROOM_PLAYER_3                               0x2C1
#define FLAG_HIDE_UNION_ROOM_PLAYER_4                               0x2C2
#define FLAG_HIDE_UNION_ROOM_PLAYER_5                               0x2C3
#define FLAG_HIDE_UNION_ROOM_PLAYER_6                               0x2C4
#define FLAG_HIDE_UNION_ROOM_PLAYER_7                               0x2C5
#define FLAG_HIDE_UNION_ROOM_PLAYER_8                               0x2C6
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1               0x2C7
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2               0x2C8
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3               0x2C9
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4               0x2CA
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5               0x2CB
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6               0x2CC
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS            0x2CD
#define FLAG_HIDE_MEW                                               0x2CE
#define FLAG_HIDE_ROUTE_104_RIVAL                                   0x2CF
#define FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE                  0x2D0
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH                  0x2D1
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM          0x2D2
#define FLAG_HIDE_ROUTE_103_RIVAL                                   0x2D3
#define FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE                    0x2D4
#define FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT                        0x2D5
#define FLAG_HIDE_PETALBURG_CITY_WALLY                              0x2D6
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY   0x2D7
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM                         0x2D8
#define FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER                     0x2DA
#define FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT                          0x2DB
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1                    0x2DC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP              0x2DD
#define FLAG_HIDE_PLAYERS_HOUSE_DAD                                 0x2DE
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING      0x2DF
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING          0x2E0
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE             0x2E1
#define FLAG_HIDE_ROUTE_104_MR_BRINEY                               0x2E2
#define FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY                           0x2E3
#define FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN                            0x2E4
#define FLAG_HIDE_ROUTE_109_MR_BRINEY                               0x2E5
#define FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT                          0x2E6
#define FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN                       0x2E7
#define FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT                          0x2E8
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN            0x2E9
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY                    0x2EA
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION                  0x2EB
#define FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER                0x2EC
#define FLAG_HIDE_SLATEPORT_CITY_SCOTT                              0x2ED
#define FLAG_HIDE_ROUTE_101_ZIGZAGOON                               0x2EE
#define FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY                           0x2EF
#define FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE                       0x2F0
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN              0x2F1
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1          0x2F2
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2          0x2F3
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA          0x2F4
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM               0x2F5
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM                0x2F6
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM                    0x2F7
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM      0x2F8
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK              0x2F9
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK                  0x2FA
#define FLAG_HIDE_DEOXYS                                            0x2FB
#define FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE                      0x2FC
#define FLAG_HIDE_MAUVILLE_CITY_SCOTT                               0x2FD
#define FLAG_HIDE_VERDANTURF_TOWN_SCOTT                             0x2FE
#define FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT                  0x2FF
#define FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE                        0x300
#define FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE                      0x301
#define FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE                          0x302
#define FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE                         0x303
#define FLAG_HIDE_PETALBURG_GYM_NORMAN                              0x304
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA                           0x305
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1         0x306
#define FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR                           0x307
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1                          0x308
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2                          0x309
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3                          0x30A
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4                          0x30B
#define FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS                          0x30C
#define FLAG_HIDE_PETALBURG_GYM_GREETER                             0x30D
#define FLAG_HIDE_MARINE_CAVE_KYOGRE                                0x30E
#define FLAG_HIDE_TERRA_CAVE_GROUDON                                0x30F
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM          0x310
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM              0x311
#define FLAG_HIDE_ROUTE_119_SCOTT                                   0x312
#define FLAG_HIDE_LILYCOVE_MOTEL_SCOTT                              0x313
#define FLAG_HIDE_MOSSDEEP_CITY_SCOTT                               0x314
#define FLAG_HIDE_FANCLUB_OLD_LADY                                  0x315
#define FLAG_HIDE_FANCLUB_BOY                                       0x316
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                                0x317
#define FLAG_HIDE_FANCLUB_LADY                                      0x318
#define FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT               0x319
#define FLAG_HIDE_LITTLEROOT_TOWN_RIVAL                             0x31A
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCH                             0x31B
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                          0x31C
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1                          0x31D
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                          0x31E
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3                          0x31F
#define FLAG_HIDE_LUGIA                                             0x320
#define FLAG_HIDE_HO_OH                                             0x321
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER                    0x322
#define FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER                   0x323
#define FLAG_HIDE_MAUVILLE_CITY_WALLY                               0x324
#define FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE                        0x325
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY                0x326
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND                   0x327
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND     0x328
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE         0x329
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT                           0x32A
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL     0x32B
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE      0x32C
#define FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN                     0x32D
#define FLAG_HIDE_RUSTBORO_CITY_RIVAL                               0x32E
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL     0x32F
#define FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE                           0x330
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL       0x331
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL           0x332
#define FLAG_HIDE_ROUTE_112_TEAM_MAGMA                              0x333
#define FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE                        0x334
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE         0x335
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE         0x336
#define FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA                          0x337
#define FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD                          0x338
#define FLAG_HIDE_LEGEND_MON_CAVE_OF_ORIGIN                         0x339 // Unused, leftover from R/S
#define FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE                            0x33A
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE                             0x33B
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE                     0x33C
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE                      0x33D
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD                         0x33E
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS               0x33F
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER                0x340
#define FLAG_HIDE_GRANITE_CAVE_STEVEN                               0x341
#define FLAG_HIDE_ROUTE_128_STEVEN                                  0x342
#define FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY                       0x343
#define FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT              0x344
#define FLAG_HIDE_ROUTE_110_BIRCH                                   0x345
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA     0x346
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1                             0x347
#define FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN                      0x348
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN               0x349
#define FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO                         0x34A
#define FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY                      0x34B
#define FLAG_HIDE_RUSTBORO_CITY_SCIENTIST                           0x34C
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT                  0x34D
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE                      0x34E
#define FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD                           0x34F
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW            0x350
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL          0x351
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP                   0x352
#define FLAG_HIDE_ROUTE_119_RIVAL                                   0x353
#define FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS                         0x354
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON                          0x355
#define FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS                         0x356
#define FLAG_HIDE_SKY_PILLAR_WALLACE                                0x357
#define FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE                              0x358
#define FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS                              0x359
#define FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY                       0x35A
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE                     0x35B
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL                    0x35C
#define FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL                           0x35D
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA          0x35E
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN              0x35F
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1           0x360
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2           0x361
#define FLAG_HIDE_PETALBURG_GYM_WALLY                               0x362
#define FLAG_UNKNOWN_0x363                                          0x363 // Set, however has no purpose.
#define FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN                           0x364
#define FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY          0x365
#define FLAG_HIDE_LANETTES_HOUSE_LANETTE                            0x366
#define FLAG_HIDE_FALLARBOR_POKEMON_CENTER_LANETTE                  0x367
#define FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN                          0x368
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT    0x369
#define FLAG_HIDE_DESERT_UNDERPASS_FOSSIL                           0x36A
#define FLAG_HIDE_ROUTE_111_PLAYER_DESCENT                          0x36B
#define FLAG_HIDE_ROUTE_111_DESERT_FOSSIL                           0x36C
#define FLAG_HIDE_MT_CHIMNEY_TRAINERS                               0x36D
#define FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT                         0x36E
#define FLAG_HIDE_RUSTURF_TUNNEL_BRINEY                             0x36F
#define FLAG_HIDE_RUSTURF_TUNNEL_PEEKO                              0x370
#define FLAG_HIDE_BRINEYS_HOUSE_PEEKO                               0x371
#define FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA                          0x372
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS         0x373
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1     0x374
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2     0x375
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE           0x376
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN    0x377
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT                             0x378
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL                  0x379
#define FLAG_HIDE_ROUTE_119_TEAM_AQUA                               0x37A
#define FLAG_HIDE_ROUTE_116_MR_BRINEY                               0x37B
#define FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS                      0x37C
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS                      0x37D
#define FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND                        0x37E
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2         0x37F
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380          0x380
#define FLAG_HIDE_ROUTE_101_BIRCH                                   0x381
#define FLAG_HIDE_ROUTE_103_BIRCH                                   0x382
#define FLAG_HIDE_TRICK_HOUSE_END_MAN                               0x383
#define FLAG_HIDE_ROUTE_110_TEAM_AQUA                               0x384
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2                          0x385
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2                          0x386
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2                          0x387
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3                          0x388
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS                     0x389
#define FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST                      0x38A
#define FLAG_HIDE_FALLARBOR_AZURILL                                 0x38B
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_ATTENDANT                   0x38C
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR                      0x38D
#define FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE                         0x38E
#define FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON              0x38F
#define FLAG_HIDE_MAUVILLE_CITY_WATTSON                             0x390
#define FLAG_HIDE_MAUVILLE_GYM_WATTSON                              0x391
#define FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS                        0x392
#define FLAG_UNKNOWN_0x393                                          0x393 // Set, however has no purpose.
#define FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE                             0x394
#define FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA                          0x395
#define FLAG_HIDE_BATTLE_TOWER_REPORTER                             0x396
#define FLAG_HIDE_ROUTE_110_RIVAL                                   0x397
#define FLAG_HIDE_CHAMPIONS_ROOM_RIVAL                              0x398
#define FLAG_HIDE_CHAMPIONS_ROOM_BIRCH                              0x399
#define FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE                           0x39A
#define FLAG_HIDE_ROUTE_119_RIVAL_ON_BIKE                           0x39B
#define FLAG_HIDE_AQUA_HIDEOUT_GRUNTS                               0x39C
#define FLAG_HIDE_LILYCOVE_MOTEL_GAME_DESIGNERS                     0x39D
#define FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA                              0x39E
#define FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA                             0x39F
#define FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO                        0x3A0
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL                              0x3A1
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE                      0x3A2
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1                             0x3A3
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2                             0x3A4
#define FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL                      0x3A5
#define FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL                     0x3A6
#define FLAG_HIDE_REGIROCK                                          0x3A7
#define FLAG_HIDE_REGICE                                            0x3A8
#define FLAG_HIDE_REGISTEEL                                         0x3A9
#define FLAG_HIDE_METEOR_FALLS_TEAM_AQUA                            0x3AA
#define FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA                           0x3AB
#define FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN                      0x3AC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT               0x3AD
#define FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO                          0x3AE
#define FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW                 0x3AF
#define FLAG_HIDE_ROUTE_128_ARCHIE                                  0x3B0
#define FLAG_HIDE_ROUTE_128_MAXIE                                   0x3B1
#define FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS                       0x3B2
#define FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE                          0x3B3
#define FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN                        0x3B4
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE              0x3B5
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY                       0x3B6
#define FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER                       0x3B7
#define FLAG_RECEIVED_SHOAL_SALT_1                                  0x3B8
#define FLAG_RECEIVED_SHOAL_SALT_2                                  0x3B9
#define FLAG_RECEIVED_SHOAL_SALT_3                                  0x3BA
#define FLAG_RECEIVED_SHOAL_SALT_4                                  0x3BB
#define FLAG_RECEIVED_SHOAL_SHELL_1                                 0x3BC
#define FLAG_RECEIVED_SHOAL_SHELL_2                                 0x3BD
#define FLAG_RECEIVED_SHOAL_SHELL_3                                 0x3BE
#define FLAG_RECEIVED_SHOAL_SHELL_4                                 0x3BF
#define FLAG_HIDE_ROUTE_111_SECRET_POWER_MAN                        0x3C0
#define FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION                       0x3C1
#define FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN      0x3C2
#define FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL                          0x3C3
#define FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL                          0x3C4
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT 0x3C5
#define FLAG_HIDE_ROUTE_118_STEVEN                                  0x3C6
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN                0x3C7
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL       0x3C8
#define FLAG_HIDE_FORTREE_CITY_KECLEON                              0x3C9
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE                          0x3CA
#define FLAG_HIDE_LILYCOVE_CITY_RIVAL                               0x3CB
#define FLAG_HIDE_ROUTE_120_STEVEN                                  0x3CC
#define FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN                            0x3CD
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1                            0x3CE
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2                            0x3CF
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3                            0x3D0
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1                      0x3D1
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2                      0x3D2
#define FLAG_HIDE_OLDALE_TOWN_RIVAL                                 0x3D3
#define FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE      0x3D4
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_SHADOW                   0x3D5
#define FLAG_HIDE_ROUTE_120_KECLEON_1                               0x3D6
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDA                              0x3D7
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA                0x3D8
#define FLAG_HIDE_ROUTE_120_KECLEON_2                               0x3D9
#define FLAG_HIDE_ROUTE_120_KECLEON_3                               0x3DA
#define FLAG_HIDE_ROUTE_120_KECLEON_4                               0x3DB
#define FLAG_HIDE_ROUTE_120_KECLEON_5                               0x3DC
#define FLAG_HIDE_ROUTE_119_KECLEON_1                               0x3DD
#define FLAG_HIDE_ROUTE_119_KECLEON_2                               0x3DE
#define FLAG_HIDE_ROUTE_101_BOY                                     0x3DF
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M                 0x3E0
#define FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON          0x3E1
#define FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY                       0x3E2
#define FLAG_HIDE_PETALBURG_CITY_SCOTT                              0x3E3
#define FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA                          0x3E4
#define FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE                            0x3E5
#define FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON                           0x3E6
#define FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT                0x3E7

// Item Ball Flags (I AM GOING TO USE THESE ONE BY ONE)
#define FLAG_ITEM_ROUTE_1_POTION                                    0x3E8
#define FLAG_ITEM_ROUTE_1_POKE_BALL                                 0x3E9
#define FLAG_ITEM_ROUTE_2_POTION                                    0x3EA //FLAG_ITEM_ROUTE_104_PP_UP
#define FLAG_ITEM_ROUTE_2_CAVE_STARDUST                             0x3EB //FLAG_ITEM_ROUTE_105_IRON
#define FLAG_ITEM_FENNILAHL_GREAT_BALL                              0x3EC //FLAG_ITEM_ROUTE_106_PROTEIN
#define FLAG_ITEM_FENNILAHL_REPEL                                   0x3ED //?

//Route 3 items
#define FLAG_ITEM_ROUTE_3_A                                         0x3EE
#define FLAG_ITEM_ROUTE_3_B                                         0x3EF
#define FLAG_ITEM_ROUTE_3_C                                         0x3F0

//Route 4 items
#define FLAG_ITEM_ROUTE_4_A                                         0x3F1
#define FLAG_ITEM_ROUTE_4_B                                         0x3F2
#define FLAG_ITEM_ROUTE_4_C                                         0x3F3

//Ceram Base Camp items
#define FLAG_ITEM_CERAMBASECAMP_A                               0x3F4

//Mt Ceram items
#define FLAG_ITEM_MTCERAM_A                             0x3F5
#define FLAG_ITEM_MTCERAM_B                             0x3F6
#define FLAG_ITEM_MTCERAM_C                                 0x3F7
#define FLAG_ITEM_MTCERAM_D                            0x3F8

//Mt Ceram indoor items
#define FLAG_ITEM_MTCERAM_CAVE_A                          0x3F9
#define FLAG_ITEM_MTCERAM_CAVE_B                                   0x3FD

//Ancient Ceram items
#define FLAG_ITEM_ANCIENTCERAM_A                                   0x3FA
#define FLAG_ITEM_ANCIENTCERAM_B                                   0x3FB
#define FLAG_ITEM_ANCIENTCERAM_C                                   0x3FC

//Galecrest City items
#define FLAG_ITEM_GALECREST_A                              0x3FE
#define FLAG_ITEM_GALECREST_B                                  0x3FF
#define FLAG_ITEM_GALECREST_C                             0x400

//Vilethorn Woods items
#define FLAG_ITEM_VILETHORN_A                                    0x401
#define FLAG_ITEM_VILETHORN_B                                0x402
#define FLAG_ITEM_VILETHORN_C                              0x403
#define FLAG_ITEM_VILETHORN_D                              0x404
#define FLAG_ITEM_VILETHORN_E                          0x405

//Silversun City items
#define FLAG_ITEM_SILVERSUN_A                                  0x406
#define FLAG_ITEM_SILVERSUN_B                               0x407

//Sewers items
#define FLAG_ITEM_SEWERS_A                                 0x408
#define FLAG_ITEM_SEWERS_B                              0x409 // Unused Flag, leftover from R/S. In Emerald this is a hidden item and uses a different flag
#define FLAG_ITEM_SEWERS_C                                    0x40A
#define FLAG_ITEM_SEWERS_D                                  0x40B

//Somber HQ items
#define FLAG_ITEM_SOMBERHQ_A                              0x40C
#define FLAG_ITEM_SOMBERHQ_B                               0x40D
#define FLAG_ITEM_SOMBERHQ_C                              0x40E
#define FLAG_ITEM_SOMBERHQ_D                           0x40F
#define FLAG_ITEM_SOMBERHQ_E                              0x410

//Route 6 items
#define FLAG_ITEM_ROUTE6_TRANSITION_A                            0x411   //transition
#define FLAG_ITEM_ROUTE6_A                           0x412
#define FLAG_ITEM_ROUTE6_B                            0x413
#define FLAG_ITEM_ROUTE6_C                   0x414
#define FLAG_ITEM_ROUTE6_D                      0x415
#define FLAG_ITEM_ROUTE6_E                     0x416
#define FLAG_ITEM_ROUTE6_F                          0x417
#define FLAG_ITEM_ROUTE6_G                          0x418
#define FLAG_ITEM_ROUTE6_H                          0x419
#define FLAG_ITEM_ROUTE6_I                       0x41A
#define FLAG_ITEM_ROUTE6_J                        0x41B

//Mt Mirroh Exterior
#define FLAG_ITEM_MIRROHEXT_A                            0x41C
#define FLAG_ITEM_MIRROHEXT_B                            0x41D
#define FLAG_ITEM_MIRROHEXT_C                       0x41E
#define FLAG_ITEM_MIRROHEXT_D                          0x41F
#define FLAG_ITEM_MIRROHEXT_E                        0x420

//misc items (FORGOT TO DO BEFORE) 
#define FLAG_ITEM_GASTREE_A                 0x421
#define FLAG_ITEM_GASTREE_B                 0x422
#define FLAG_ITEM_GALECREST_D               0x423
#define FLAG_ITEM_GALECREST_E               0x424
#define FLAG_ITEM_PELLUCA_CITY_A            0x425
#define FLAG_ITEM_PELLUCA_CITY_B            0x426
#define FLAG_ITEM_PELLUCA_CITY_C            0x427

//mirroh
#define FLAG_ITEM_MIRROH_INT_A              0x428
#define FLAG_ITEM_MIRROH_INT_B              0x429
#define FLAG_ITEM_MIRROH_INT_C              0x42A
#define FLAG_ITEM_MIRROH_INT_D              0x42B
#define FLAG_ITEM_MIRROH_INT_E              0x42C
#define FLAG_ITEM_MIRROH_INT_F              0x42D
#define FLAG_ITEM_MIRROH_PEAK_A             0x42E
#define FLAG_ITEM_MIRROH_PEAK_B             0x42F

#define FLAG_ITEM_ANCIENTMIRROH_A           0x430
#define FLAG_ITEM_ANCIENTMIRROH_B           0x431
#define FLAG_ITEM_ANCIENTMIRROH_C           0x432
#define FLAG_ITEM_ANCIENTMIRROH_D           0x433
#define FLAG_ITEM_ANCIENTMIRROH_E           0x434
#define FLAG_ITEM_ANCIENTMIRROH_F           0x435

//lily pond
#define FLAG_ITEM_LILY_POND_A               0x436
#define FLAG_ITEM_LILY_POND_B               0x437
#define FLAG_ITEM_LILY_POND_C               0x438

//ivy river
#define FLAG_ITEM_IVYRIVER_GREEN_SCARF      0x439   ///unused now
#define FLAG_ITEM_IVY_RIVER_A               0x43A
#define FLAG_ITEM_IVY_RIVER_B               0x43B
#define FLAG_ITEM_IVY_RIVER_C               0x43C
#define FLAG_ITEM_IVY_RIVER_D               0x43D
#define FLAG_ITEM_IVY_RIVER_E               0x43E
#define FLAG_ITEM_IVY_RIVER_F               0x44C

//route 3 extended
#define FLAG_ITEM_ROUTE3_EXT_A              0x43F
#define FLAG_ITEM_ROUTE3_EXT_B              0x440
#define FLAG_ITEM_ROUTE3_EXT_C              0x441

//mirroh B1F (diancie)
#define FLAG_ITEM_MIRROH_B1F_A              0x442
#define FLAG_ITEM_CERAM_PEAK_A              0x443

//route 8
#define FLAG_ITEM_ROUTE8_A                  0x444
#define FLAG_ITEM_ROUTE8_B                  0x445
#define FLAG_ITEM_ROUTE8_C                  0x446
#define FLAG_ITEM_ROUTE8_D                  0x447

//rivetshore city
#define FLAG_ITEM_RIVETSHORE_A              0x448
#define FLAG_ITEM_RIVETSHORE_B              0x449
#define FLAG_ITEM_RIVETSHORE_C              0x44A
#define FLAG_ITEM_RIVETSHORE_D              0x44B

//more misc items
#define FLAG_ITEM_IVY_RIVER_F        0x44C
#define FLAG_ITEM_SSELEGANT_A    0x44D

//Route 7
#define FLAG_ITEM_ROUTE7_A  0x44E
#define FLAG_ITEM_ROUTE7_B                                  0x44F




#define FLAG_ITEM_VR_A                              0x450
#define FLAG_ITEM_VR_B                             0x451
#define FLAG_ITEM_VR_C                          0x452
#define FLAG_ITEM_VR_D                            0x453

#define FLAG_ITEM_VICTORY_CAPE_A                               0x454
#define FLAG_ITEM_VICTORY_CAPE_B                                  0x455

//Zeraora Cave
#define FLAG_ITEM_ZERAORA_A                                         0x456
#define FLAG_ITEM_ZERAORA_B                                         0x457
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_TM_HAIL                       0x458
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_NEVER_MELT_ICE                0x459
#define FLAG_ITEM_ROUTE_103_GUARD_SPEC                              0x45A
#define FLAG_ITEM_ROUTE_104_X_ACCURACY                              0x45B
#define FLAG_ITEM_MAUVILLE_CITY_X_SPEED                             0x45C
#define FLAG_ITEM_PETALBURG_WOODS_PARALYZE_HEAL                     0x45D
#define FLAG_ITEM_ROUTE_115_GREAT_BALL                              0x45E
#define FLAG_ITEM_SAFARI_ZONE_NORTH_CALCIUM                         0x45F
#define FLAG_ITEM_MT_PYRE_3F_SUPER_REPEL                            0x460
#define FLAG_ITEM_ROUTE_118_HYPER_POTION                            0x461
#define FLAG_ITEM_NEW_MAUVILLE_FULL_HEAL                            0x462
#define FLAG_ITEM_NEW_MAUVILLE_PARALYZE_HEAL                        0x463
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MASTER_BALL                      0x464
#define FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL                             0x469
#define FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE                            0x46A
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE                 0x46B
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_NUGGET                           0x46C
#define FLAG_ITEM_ROUTE_119_NUGGET                                  0x46E
#define FLAG_ITEM_ROUTE_104_POTION                                  0x46F
#define FLAG_ITEM_ROUTE_103_PP_UP                                   0x471
#define FLAG_ITEM_ROUTE_108_STAR_PIECE                              0x473
#define FLAG_ITEM_ROUTE_109_POTION                                  0x474
#define FLAG_ITEM_ROUTE_110_ELIXIR                                  0x475
#define FLAG_ITEM_ROUTE_111_ELIXIR                                  0x476
#define FLAG_ITEM_ROUTE_113_HYPER_POTION                            0x477
#define FLAG_ITEM_ROUTE_115_HEAL_POWDER                             0x478
#define FLAG_ITEM_ROUTE_116_POTION                                  0x47A
#define FLAG_ITEM_ROUTE_119_ELIXIR_2                                0x47B
#define FLAG_ITEM_ROUTE_120_REVIVE                                  0x47C
#define FLAG_ITEM_ROUTE_121_REVIVE                                  0x47D
#define FLAG_ITEM_ROUTE_121_ZINC                                    0x47E
#define FLAG_ITEM_MAGMA_HIDEOUT_1F_RARE_CANDY                       0x47F
#define FLAG_ITEM_ROUTE_123_PP_UP                                   0x480
#define FLAG_ITEM_ROUTE_123_REVIVAL_HERB                            0x481
#define FLAG_ITEM_ROUTE_125_BIG_PEARL                               0x482
#define FLAG_ITEM_ROUTE_127_RARE_CANDY                              0x483
#define FLAG_ITEM_ROUTE_132_PROTEIN                                 0x484
#define FLAG_ITEM_ROUTE_133_MAX_REVIVE                              0x485
#define FLAG_ITEM_ROUTE_134_CARBOS                                  0x486
#define FLAG_ITEM_ROUTE_134_STAR_PIECE                              0x487
#define FLAG_ITEM_ROUTE_114_ENERGY_POWDER                           0x488
#define FLAG_ITEM_ROUTE_115_PP_UP                                   0x489
#define FLAG_ITEM_ARTISAN_CAVE_B1F_HP_UP                            0x48A
#define FLAG_ITEM_ARTISAN_CAVE_1F_CARBOS                            0x48B
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_MAX_ELIXIR                    0x48C
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_FULL_RESTORE                  0x48D
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_1R_NUGGET                        0x48E
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_2R_PP_MAX                        0x48F
#define FLAG_ITEM_MAGMA_HIDEOUT_4F_MAX_REVIVE                       0x490
#define FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET                     0x491
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL                  0x492

#define FLAG_RUNNING_SHOES_TOGGLE                                   0x493 // Toggle running shoes
#define FLAG_SKIP_INTRO                                             0x494 // Unused Flag

#define FLAG_DEFEATED_RUSTBORO_GYM                                  0x4F0
#define FLAG_DEFEATED_DEWFORD_GYM                                   0x4F1
#define FLAG_DEFEATED_MAUVILLE_GYM                                  0x4F2
#define FLAG_DEFEATED_LAVARIDGE_GYM                                 0x4F3
#define FLAG_DEFEATED_PETALBURG_GYM                                 0x4F4
#define FLAG_DEFEATED_FORTREE_GYM                                   0x4F5
#define FLAG_DEFEATED_MOSSDEEP_GYM                                  0x4F6
#define FLAG_DEFEATED_SOOTOPOLIS_GYM                                0x4F7
#define FLAG_DEFEATED_METEOR_FALLS_STEVEN                           0x4F8
#define FLAG_DEFEATED_ELITE_4_SIDNEY                                0x4FB
#define FLAG_DEFEATED_ELITE_4_PHOEBE                                0x4FC
#define FLAG_DEFEATED_ELITE_4_GLACIA                                0x4FD
#define FLAG_DEFEATED_ELITE_4_DRAKE                                 0x4FE


// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         0x500
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F

// System Flags

#define SYSTEM_FLAGS                                   (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_SYS_QUEST_MENU_GET                      (SYSTEM_FLAGS + 0x3) // add QUESTS to start menu
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_UNLOCKED_TRENDY_SAYINGS                 (SYSTEM_FLAGS + 0x6)

// Badges
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)
#define NUM_BADGES                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)

// Towns and Cities
#define FLAG_VISITED_FENNILAHL_TOWN                 (SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_GASTREE_CITY                   (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_CERAM_BASE_CAMP                (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_GALECREST_CITY                 (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_SILVERSUN_CITY                 (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_PELLUCA_CITY                   (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_MIRROH_BASE_CAMP               (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_WINTERLILY_HOLLOW              (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_RIVETSHORE_CITY                (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_VICTORY_CAPE                   (SYSTEM_FLAGS + 0x18)

//still unused (old maps)
#define FLAG_VISITED_RIVETSHORE_RANGER              (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1E)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x20)

#define FLAG_SUPPRESS_SPEAKER_NAME                  (SYSTEM_FLAGS + 0x21) // Unused Flag
#define FLAG_UNUSED_0x882                           (SYSTEM_FLAGS + 0x22) // Unused Flag
#define FLAG_UNUSED_0x883                           (SYSTEM_FLAGS + 0x23) // Unused Flag
#define FLAG_UNUSED_0x884                           (SYSTEM_FLAGS + 0x24) // Unused Flag
#define FLAG_UNUSED_0x885                           (SYSTEM_FLAGS + 0x25) // Unused Flag
#define FLAG_UNUSED_0x886                           (SYSTEM_FLAGS + 0x26) // Unused Flag
#define FLAG_UNUSED_0x887                           (SYSTEM_FLAGS + 0x27) // Unused Flag

#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)

#define FLAG_UNUSED_0x88E                           (SYSTEM_FLAGS + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x88F                           (SYSTEM_FLAGS + 0x2F) // Unused Flag

#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_CAVE_SHIP                          (SYSTEM_FLAGS + 0x37) // Unused Flag, leftover from R/S debug, presumably used by Emerald's debug too
#define FLAG_SYS_CAVE_WONDER                        (SYSTEM_FLAGS + 0x38) // Unused Flag, same as above
#define FLAG_SYS_CAVE_BATTLE                        (SYSTEM_FLAGS + 0x39) // Unused Flag, same as above
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63)

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)

#define FLAG_UNUSED_0x8E3                           (SYSTEM_FLAGS + 0x83) // Unused Flag

#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)

//I AM GOING TO USE THESE FLAGS ONE BY ONE (SETTINGS AND SYS)
#define FLAG_SYS_EXP_ALL                            (SYSTEM_FLAGS + 0x85) // Unused Flag
#define FLAG_SYS_FISHING_MINIGAME                   (SYSTEM_FLAGS + 0x86) // Unused Flag
#define FLAG_SYS_TERA_ORB                           (SYSTEM_FLAGS + 0x87) // Unused Flag
#define FLAG_SYS_GOT_STRENGTH                       (SYSTEM_FLAGS + 0x88) // Unused Flag
#define FLAG_PREVENT_OVERWORLD_SPEEDUP              (SYSTEM_FLAGS + 0x89) // Unused Flag
#define FLAG_SYS_SURF_ENABLED                       (SYSTEM_FLAGS + 0x8A) // Unused Flag
#define FLAG_SYS_WHIRLPOOL_ENABLED                  (SYSTEM_FLAGS + 0x8B) // Unused Flag
#define FLAG_SYS_OW_FOLLOWERS_DISABLED              (SYSTEM_FLAGS + 0x8C) // Unused Flag
#define FLAG_SYS_RUNNING_SHOES_TOGGLE               (SYSTEM_FLAGS + 0x8D) // Unused Flag
#define FLAG_SYS_RUN_TOGGLE_SETTING                 (SYSTEM_FLAGS + 0x8E) // Unused Flag
#define FLAG_SYS_QUICK_RUN                          (SYSTEM_FLAGS + 0x8F) // Unused Flag
#define FLAG_SYS_BIKE_SURF_MUS                      (SYSTEM_FLAGS + 0x90) // Unused Flag
#define FLAG_SYS_AFFECTION_ENABLED                  (SYSTEM_FLAGS + 0x91) // Unused Flag
#define FLAG_SYS_STAT_EDITOR_ENABLED                (SYSTEM_FLAGS + 0x92) // Unused Flag
#define FLAG_SYS_AUTOSCROLL                         (SYSTEM_FLAGS + 0x93) // Unused Flag
#define FLAG_SYS_CHEATS_ENABLED                     (SYSTEM_FLAGS + 0x94) // Unused Flag
#define FLAG_SYS_WILD_ENCOUNTERS                    (SYSTEM_FLAGS + 0x95) // Unused Flag
#define FLAG_SYS_SHINY_STARTERS                     (SYSTEM_FLAGS + 0x96) // Unused Flag

//MINIGAME EXPANSION
#define FLAG_MINIGAME_NICKNAME                      (SYSTEM_FLAGS + 0x97) // Unused Flag
#define FLAG_MINIGAME_RESET                         (SYSTEM_FLAGS + 0x98) // Unused Flag

//cutscene skips
#define FLAG_SKIP_CERAM_CUTSCENE                    (SYSTEM_FLAGS + 0x99) // Unused Flag
#define FLAG_SKIP_SILVERSUN_CUTSCENE                (SYSTEM_FLAGS + 0x9A) // Unused Flag
#define FLAG_SKIP_MIRROH_CUTSCENE                   (SYSTEM_FLAGS + 0x9B) // Unused Flag
#define FLAG_SKIP_FINALE_CUTSCENE                   (SYSTEM_FLAGS + 0x9C) // Unused Flag
#define FLAG_SKIP_BERGER_CERAM                      (SYSTEM_FLAGS + 0x9D) // Unused Flag
#define FLAG_SKIP_PELLUCA_CUTSCENE                  (SYSTEM_FLAGS + 0x9E) // Unused Flag
#define FLAG_SKIP_POSTGAME_MSG                      (SYSTEM_FLAGS + 0x9F) // Unused Flag
#define FLAG_UNUSED_0x900                           (SYSTEM_FLAGS + 0xA0) // Unused Flag
#define FLAG_UNUSED_0x901                           (SYSTEM_FLAGS + 0xA1) // Unused Flag
#define FLAG_UNUSED_0x902                           (SYSTEM_FLAGS + 0xA2) // Unused Flag

//Pokemon Championship
#define FLAG_CHAMP_SIGNUP_DONE                      (SYSTEM_FLAGS + 0xA3) // Unused Flag
#define FLAG_BEAT_R1                                (SYSTEM_FLAGS + 0xA4) // Unused Flag
#define FLAG_BEAT_R2                                (SYSTEM_FLAGS + 0xA5) // Unused Flag
#define FLAG_BEAT_R3                                (SYSTEM_FLAGS + 0xA6) // Unused Flag
#define FLAG_BEAT_R4                                (SYSTEM_FLAGS + 0xA7) // Unused Flag
#define FLAG_BEAT_FINALS                            (SYSTEM_FLAGS + 0xA8) // Unused Flag
#define FLAG_UNUSED_0xA9                            (SYSTEM_FLAGS + 0xA9) // Unused Flag

//Tutors
#define FLAG_TUTOR_ROSELIA                          (SYSTEM_FLAGS + 0xAA) // Unused Flag
#define FLAG_TUTOR_LILLIGANT                        (SYSTEM_FLAGS + 0xAB) // Unused Flag
#define FLAG_TUTOR_KIDS                             (SYSTEM_FLAGS + 0xAC) // Unused Flag
#define FLAG_TUTOR_FANGS                            (SYSTEM_FLAGS + 0xAD) // Unused Flag
#define FLAG_TUTOR_VICTORY_CAPE                     (SYSTEM_FLAGS + 0xAE) // Unused Flag
#define FLAG_UNUSED_0x909                           (SYSTEM_FLAGS + 0xAF) // Unused Flag

//Misc
#define FLAG_SKIP_BALL_CHANGER                      (SYSTEM_FLAGS + 0xB0) // Unused Flag
#define FLAG_UNUSED_0x911                           (SYSTEM_FLAGS + 0xB1) // Unused Flag
#define FLAG_UNUSED_0x912                           (SYSTEM_FLAGS + 0xB2) // Unused Flag
#define FLAG_UNUSED_0x913                           (SYSTEM_FLAGS + 0xB3) // Unused Flag

//Statues
#define FLAG_STATUE_ROUTE1                          (SYSTEM_FLAGS + 0xB4) // Unused Flag
#define FLAG_STATUE_IVY_FOREST                      (SYSTEM_FLAGS + 0xB5) // Unused Flag
#define FLAG_STATUE_CERAM                           (SYSTEM_FLAGS + 0xB6) // Unused Flag
#define FLAG_STATUE_GALECREST                       (SYSTEM_FLAGS + 0xB7) // Unused Flag
#define FLAG_STATUE_CELEBI                          (SYSTEM_FLAGS + 0xB8) // Unused Flag
#define FLAG_STATUE_SEWERS                          (SYSTEM_FLAGS + 0xB9) // Unused Flag
#define FLAG_STATUE_ROUTE6                          (SYSTEM_FLAGS + 0xBA) // Unused Flag
#define FLAG_STATUE_GRAVEYARD                       (SYSTEM_FLAGS + 0xBB) // Unused Flag
#define FLAG_STATUE_LILYPOND                        (SYSTEM_FLAGS + 0xBC) // Unused Flag
#define FLAG_STATUE_ROUTE8                          (SYSTEM_FLAGS + 0xBD) // Unused Flag
#define FLAG_UNUSED_0x91E                           (SYSTEM_FLAGS + 0xBE) // Unused Flag
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // Unused Flag

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_UNUSED_0x920                           (DAILY_FLAGS_START + 0x0)  // Unused Flag
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_UNUSED_0x923                           (DAILY_FLAGS_START + 0x3)  // Unused Flag
#define FLAG_UNUSED_0x924                           (DAILY_FLAGS_START + 0x4)  // Unused Flag
#define FLAG_UNUSED_0x925                           (DAILY_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_UNUSED_0x926                           (DAILY_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_UNUSED_0x927                           (DAILY_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_UNUSED_0x928                           (DAILY_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_UNUSED_0x929                           (DAILY_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13) // Unused Flag
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)


///I AM GOING TO USE THESE DAILY FLAGS
#define FLAG_DAILY_SEWERS_MUK                       (DAILY_FLAGS_START + 0x15) // Unused Flag
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16) // Unused Flag
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // Unused Flag
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // Unused Flag
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // Unused Flag
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // Unused Flag
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // Unused Flag
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // Unused Flag
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D) // Unused Flag
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E) // Unused Flag
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F) // Unused Flag
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20) // Unused Flag
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21) // Unused Flag
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22) // Unused Flag
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23) // Unused Flag
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24) // Unused Flag
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25) // Unused Flag
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26) // Unused Flag
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27) // Unused Flag
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28) // Unused Flag
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // Unused Flag
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // Unused Flag
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // Unused Flag
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))
#define NUM_DAILY_FLAGS                             (DAILY_FLAGS_END - DAILY_FLAGS_START + 1)

#define FLAGS_COUNT (DAILY_FLAGS_END + 1)

// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
#define FLAG_SAFE_FOLLOWER_MOVEMENT             (SPECIAL_FLAGS_START + 0x5) // When set, applymovement does not put the follower inside a pokeball
                                                                            // Also, scripted movements on the player will move follower(s), too
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)
#define NUM_SPECIAL_FLAGS                       (SPECIAL_FLAGS_END - SPECIAL_FLAGS_START + 1)

// Temp flag aliases
#define FLAG_TEMP_SKIP_GABBY_INTERVIEW          FLAG_TEMP_1
#define FLAG_TEMP_REGICE_PUZZLE_STARTED         FLAG_TEMP_2
#define FLAG_TEMP_REGICE_PUZZLE_FAILED          FLAG_TEMP_3
#define FLAG_TEMP_HIDE_FOLLOWER                 FLAG_TEMP_E
#define FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE FLAG_TEMP_11

#if TESTING
#define TESTING_FLAGS_START                     0x5000
#define TESTING_FLAG_SLEEP_CLAUSE               (TESTING_FLAGS_START + 0x0)
#define TESTING_FLAG_UNUSED_1                   (TESTING_FLAGS_START + 0x1)
#define TESTING_FLAG_UNUSED_2                   (TESTING_FLAGS_START + 0x2)
#define TESTING_FLAG_UNUSED_3                   (TESTING_FLAGS_START + 0x3)
#define TESTING_FLAG_UNUSED_4                   (TESTING_FLAGS_START + 0x4)
#define TESTING_FLAG_UNUSED_5                   (TESTING_FLAGS_START + 0x5)
#define TESTING_FLAG_UNUSED_6                   (TESTING_FLAGS_START + 0x6)
#define TESTING_FLAG_UNUSED_7                   (TESTING_FLAGS_START + 0x7)
#endif // TESTING

#endif // GUARD_CONSTANTS_FLAGS_H
