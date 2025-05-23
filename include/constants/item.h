#ifndef GUARD_ITEM_CONSTANTS_H
#define GUARD_ITEM_CONSTANTS_H

// These constants are used in gItemsInfo
#define POCKET_NONE         0 
#define POCKET_ITEMS        1   //for general items
#define POCKET_MEDICINE     2   //for meds, ethers
#define POCKET_BATTLE_ITEMS 3   //held items
#define POCKET_POKE_BALLS   4   //balls
#define POCKET_BERRIES      5   //berries
#define POCKET_TM_HM        6   //tms/hms
#define POCKET_KEY_ITEMS    7   //key items
#define POCKET_TREASURES    8   //remove

#define ITEMS_POCKET        0  
#define MEDICINE_POCKET     1   
#define BATTLEITEMS_POCKET  2
#define BALLS_POCKET        3
#define BERRIES_POCKET      4
#define TMHM_POCKET         5
#define KEYITEMS_POCKET     6
#define TREASURES_POCKET    7
#define POCKETS_COUNT       7   //removed the last two

#define REPEL_LURE_MASK         (1 << 15)
#define IS_LAST_USED_LURE(var)  (var & REPEL_LURE_MASK)
#define REPEL_LURE_STEPS(var)   (var & (REPEL_LURE_MASK - 1))
#define LURE_STEP_COUNT         (IS_LAST_USED_LURE(VarGet(VAR_REPEL_STEP_COUNT)) ? REPEL_LURE_STEPS(VarGet(VAR_REPEL_STEP_COUNT)) : 0)
#define REPEL_STEP_COUNT        (!IS_LAST_USED_LURE(VarGet(VAR_REPEL_STEP_COUNT)) ? REPEL_LURE_STEPS(VarGet(VAR_REPEL_STEP_COUNT)) : 0)

#endif // GUARD_ITEM_CONSTANTS_H
