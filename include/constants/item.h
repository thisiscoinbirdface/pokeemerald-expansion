#ifndef GUARD_ITEM_CONSTANTS_H
#define GUARD_ITEM_CONSTANTS_H

// These constants are used in gItemsInfo
#define POCKET_NONE         0 
#define POCKET_ITEMS        1   //for general items
#define POCKET_MEDICINE     2   //for meds, ethers
#define POCKET_POKE_BALLS   3   //balls
#define POCKET_BERRIES      4   //berries
#define POCKET_TM_HM        5   //tms/hms
#define POCKET_KEY_ITEMS    6   //key items
#define POCKET_TREASURES    7   //remove
#define POCKET_BATTLE_ITEMS 8   //remove

#define ITEMS_POCKET        0  
#define MEDICINE_POCKET     1   
#define BALLS_POCKET        2
#define BERRIES_POCKET      3
#define TMHM_POCKET         4
#define KEYITEMS_POCKET     5
#define TREASURES_POCKET    6
#define BATTLEITEMS_POCKET  7
#define POCKETS_COUNT       6   //removed the last two

#define REPEL_LURE_MASK         (1 << 15)
#define IS_LAST_USED_LURE(var)  (var & REPEL_LURE_MASK)
#define REPEL_LURE_STEPS(var)   (var & (REPEL_LURE_MASK - 1))
#define LURE_STEP_COUNT         (IS_LAST_USED_LURE(VarGet(VAR_REPEL_STEP_COUNT)) ? REPEL_LURE_STEPS(VarGet(VAR_REPEL_STEP_COUNT)) : 0)
#define REPEL_STEP_COUNT        (!IS_LAST_USED_LURE(VarGet(VAR_REPEL_STEP_COUNT)) ? REPEL_LURE_STEPS(VarGet(VAR_REPEL_STEP_COUNT)) : 0)

#endif // GUARD_ITEM_CONSTANTS_H
