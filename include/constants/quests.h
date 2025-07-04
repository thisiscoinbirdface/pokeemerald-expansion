#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1

// const u8 gText_SideQuestName_1[] = _("Lab Assistant");
// const u8 gText_SideQuestName_2[] = _("Dreamstone Mysteries");
// const u8 gText_SideQuestName_3[] = _("Pokemon Ranger Badge");
// const u8 gText_SideQuestName_4[] = _("Food Poisoning");
// const u8 gText_SideQuestName_5[] = _("A Hiker's Treasure");
// const u8 gText_SideQuestName_6[] = _("A Lost Skitty");
// const u8 gText_SideQuestName_7[] = _("Modern Matcha");
// const u8 gText_SideQuestName_8[] = _("Cyndaquil's Sunny Day");
// const u8 gText_SideQuestName_9[] = _("Precious Pearls");
// const u8 gText_SideQuestName_10[] = _("Malevolent Masterpiece");
// const u8 gText_SideQuestName_11[] = _("I Can't Find My Wife!");
// const u8 gText_SideQuestName_12[] = _("A Chef's Icy Troubles");

// quest number defines
#define QUEST_LAB_FIRST_DAY             0   //main (multistage)
#define QUEST_DREAMSTONE_MYSTERIES      1   //main (multistage)
#define QUEST_STOP_TEAM_SOMBER          2   //main (multistage)
#define QUEST_ROUTE1_PECHA_BERRY        3
#define QUEST_FENNILAHL_HIKER           4
#define QUEST_GASTREE_SKITTY            5
#define QUEST_ANCIENT_STATUES           6  //ongoing
#define QUEST_GASTREE_TEA               7
#define QUEST_CERAM_CYNDAQUIL           8
#define QUEST_GALECREST_PEARLS          9
#define QUEST_GALECREST_POORGUY         10 //remove and make it a normal thing
#define QUEST_SILVERSUN_ARTIST          11
#define QUEST_SILVERSUN_WIFE            12
#define QUEST_ROUTE6_FISHERMAN          13
#define QUEST_POKEMON_RANGER            14 //ongoing (multistage)
#define QUEST_PELLUCA_CITY              15 // (multistage)
#define QUEST_PELLUCA_RESTAURANT        16
#define QUEST_MIRROH_NURSE_CHANSEY      17
#define QUEST_RIVETSHORE_MIMIKYU        18
#define QUEST_RIVETSHORE_POCKETBOY      19
// #define QUEST_21        20
// #define QUEST_22        21
// #define QUEST_23        22
// #define QUEST_24        23
// #define QUEST_25        24
// #define QUEST_26        25
// #define QUEST_27        26
// #define QUEST_28        27
// #define QUEST_29        28
// #define QUEST_30        29
#define QUEST_COUNT     (QUEST_RIVETSHORE_POCKETBOY + 1)

#define SUB_QUEST_1          0  //QUEST_LAB_FIRST_DAY
#define SUB_QUEST_2          1  //QUEST_LAB_FIRST_DAY
#define SUB_QUEST_3          2  //QUEST_LAB_FIRST_DAY
#define SUB_QUEST_4          3  //QUEST_DREAMSTONE_MYSTERIES
#define SUB_QUEST_5          4  //QUEST_DREAMSTONE_MYSTERIES
#define SUB_QUEST_6          5  //QUEST_DREAMSTONE_MYSTERIES
#define SUB_QUEST_7          6  //QUEST_DREAMSTONE_MYSTERIES
#define SUB_QUEST_8          7  //QUEST_DREAMSTONE_MYSTERIES
#define SUB_QUEST_9          8  //QUEST_DREAMSTONE_MYSTERIES
#define SUB_QUEST_10         9  //QUEST_DREAMSTONE_MYSTERIES
#define SUB_QUEST_11        10  //QUEST_DREAMSTONE_MYSTERIES
#define SUB_QUEST_12        11  //FINALE
#define SUB_QUEST_13        12  //FINALE
#define SUB_QUEST_14        13  //FINALE
#define SUB_QUEST_15        14  //FINALE
#define SUB_QUEST_16        15  //QUEST_POKEMON_RANGER
#define SUB_QUEST_17        16  //QUEST_POKEMON_RANGER
#define SUB_QUEST_18        17  //QUEST_POKEMON_RANGER
#define SUB_QUEST_19        18  //QUEST_PELLUCA_EVENT 
#define SUB_QUEST_20        19  //QUEST_PELLUCA_EVENT 
#define SUB_QUEST_21        20  
#define SUB_QUEST_22        21  
#define SUB_QUEST_23        22  
#define SUB_QUEST_24        23  
#define SUB_QUEST_25        24  
#define SUB_QUEST_26        25
#define SUB_QUEST_27        26
#define SUB_QUEST_28        27
#define SUB_QUEST_29        28
#define SUB_QUEST_30        29

//add pelluca quest

#define QUEST_1_SUB_COUNT 3
#define QUEST_2_SUB_COUNT 8
#define QUEST_3_SUB_COUNT 4
#define QUEST_4_SUB_COUNT 3
#define QUEST_5_SUB_COUNT 2
#define SUB_QUEST_COUNT (QUEST_1_SUB_COUNT + QUEST_2_SUB_COUNT + QUEST_3_SUB_COUNT + QUEST_4_SUB_COUNT + QUEST_5_SUB_COUNT + 1)

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H
