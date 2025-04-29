# 1 "data//maps/Route3/scripts.pory"

# 2 "data//maps/Route3/scripts.pory"
    .set LOCALID_SKARM, 12

Route3_MapScripts::
	.byte 0


Route3_TrainerBattle_Kim::
# 9 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_KIM, Route3_TrainerBattle_Kim_Text_0, Route3_TrainerBattle_Kim_Text_1
# 10 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Kim_Text_2
# 11 "data//maps/Route3/scripts.pory"
	release
	end


Route3_TrainerBattle_Ronnie::
# 18 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_RONNIE, Route3_TrainerBattle_Ronnie_Text_0, Route3_TrainerBattle_Ronnie_Text_1
# 19 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Ronnie_Text_2
# 20 "data//maps/Route3/scripts.pory"
	release
	end


Route3_TrainerBattle_Jana::
# 27 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_JANA, Route3_TrainerBattle_Jana_Text_0, Route3_TrainerBattle_Jana_Text_1
# 28 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Jana_Text_2
# 29 "data//maps/Route3/scripts.pory"
	release
	end


Route3_TrainerBattle_Chara::
# 36 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_CHARA, Route3_TrainerBattle_Chara_Text_0, Route3_TrainerBattle_Chara_Text_1
# 37 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Chara_Text_2
# 38 "data//maps/Route3/scripts.pory"
	release
	end


Route3_NPC1::
# 54 "data//maps/Route3/scripts.pory"
	msgbox Route3_NPC1_Text_0, MSGBOX_NPC
	end


Route3_NPC2::
# 59 "data//maps/Route3/scripts.pory"
	msgbox Route3_NPC2_Text_0, MSGBOX_NPC
	end


Route3_Skarmory_Trigger::
# 71 "data//maps/Route3/scripts.pory"
	goto_if_set FLAG_ROUTE3_SKARMORY_WILD, Route3_Skarmory_Trigger_2
# 72 "data//maps/Route3/scripts.pory"
	lockall
# 73 "data//maps/Route3/scripts.pory"
	faceplayer
# 74 "data//maps/Route3/scripts.pory"
	playmoncry SPECIES_SKARMORY, CRY_MODE_NORMAL
# 75 "data//maps/Route3/scripts.pory"
	applymovement LOCALID_SKARM, Route3_Skarmory_Trigger_Movement_0
# 76 "data//maps/Route3/scripts.pory"
	waitmovement 0
# 77 "data//maps/Route3/scripts.pory"
	delay 16
# 78 "data//maps/Route3/scripts.pory"
	msgbox Route3_Skarmory_Trigger_Text_0
# 80 "data//maps/Route3/scripts.pory"
	setvar VAR_TEMP_0, 1
# 82 "data//maps/Route3/scripts.pory"
	releaseall
	end

Route3_Skarmory_Trigger_2:
	end


Route3_Skarmory_Battle::
# 87 "data//maps/Route3/scripts.pory"
	lockall
# 88 "data//maps/Route3/scripts.pory"
	faceplayer
# 89 "data//maps/Route3/scripts.pory"
	playmoncry SPECIES_SKARMORY, CRY_MODE_NORMAL
# 90 "data//maps/Route3/scripts.pory"
	applymovement LOCALID_SKARM, Route3_Skarmory_Trigger_Movement_0
# 91 "data//maps/Route3/scripts.pory"
	waitmovement 0
# 92 "data//maps/Route3/scripts.pory"
	delay 16
# 93 "data//maps/Route3/scripts.pory"
	msgbox Route3_Skarmory_Battle_Text_0
# 94 "data//maps/Route3/scripts.pory"
	release
# 96 "data//maps/Route3/scripts.pory"
	setwildbattle SPECIES_SKARMORY, 12
# 97 "data//maps/Route3/scripts.pory"
	dowildbattle
# 100 "data//maps/Route3/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 101 "data//maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route3_Skarmory_Battle_2
Route3_Skarmory_Battle_1:
# 106 "data//maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route3_Skarmory_Battle_5
Route3_Skarmory_Battle_4:
# 111 "data//maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route3_Skarmory_Battle_8
Route3_Skarmory_Battle_7:
# 116 "data//maps/Route3/scripts.pory"
	releaseall
	end

Route3_Skarmory_Battle_2:
# 102 "data//maps/Route3/scripts.pory"
	removeobject LOCALID_SKARM
# 103 "data//maps/Route3/scripts.pory"
	setflag FLAG_ROUTE3_SKARMORY_WILD
# 104 "data//maps/Route3/scripts.pory"
	releaseall
	goto Route3_Skarmory_Battle_1

Route3_Skarmory_Battle_5:
# 107 "data//maps/Route3/scripts.pory"
	removeobject LOCALID_SKARM
# 108 "data//maps/Route3/scripts.pory"
	setflag FLAG_ROUTE3_SKARMORY_WILD
# 109 "data//maps/Route3/scripts.pory"
	releaseall
	goto Route3_Skarmory_Battle_4

Route3_Skarmory_Battle_8:
# 112 "data//maps/Route3/scripts.pory"
	msgbox Route3_Skarmory_Battle_Text_1
# 113 "data//maps/Route3/scripts.pory"
	release
	goto Route3_Skarmory_Battle_7


Route3_Ext_TrainerBattle_A::
# 135 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_EXT_A, Route3_Ext_TrainerBattle_A_Text_0, Route3_Ext_TrainerBattle_A_Text_1
# 136 "data//maps/Route3/scripts.pory"
	msgbox Route3_Ext_TrainerBattle_A_Text_2
# 137 "data//maps/Route3/scripts.pory"
	release
	end


Route3_Ext_TrainerBattle_B::
# 141 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_EXT_B, Route3_Ext_TrainerBattle_B_Text_0, Route3_Ext_TrainerBattle_B_Text_1, Route3_Ext_DoubleBattle_ItemGive
# 142 "data//maps/Route3/scripts.pory"
	msgbox Route3_Ext_TrainerBattle_B_Text_2
# 143 "data//maps/Route3/scripts.pory"
	release
	end


Route3_Ext_DoubleBattle_ItemGive::
# 147 "data//maps/Route3/scripts.pory"
	msgbox Route3_Ext_DoubleBattle_ItemGive_Text_0
# 148 "data//maps/Route3/scripts.pory"
	goto Route3_Ext_DoubleBattle_Reward
	return


Route3_Ext_DoubleBattle_Reward::
# 152 "data//maps/Route3/scripts.pory"
	message Route3_Ext_DoubleBattle_Reward_Text_0
# 153 "data//maps/Route3/scripts.pory"
	waitmessage
# 154 "data//maps/Route3/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route3_Ext_DoubleBattle_Reward_Text_1, Route3_Ext_DoubleBattle_Reward_Text_2
# 155 "data//maps/Route3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route3_Ext_DoubleBattle_Reward_2
Route3_Ext_DoubleBattle_Reward_1:
# 156 "data//maps/Route3/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route3_Ext_DoubleBattle_Reward_5
Route3_Ext_DoubleBattle_Reward_4:
# 157 "data//maps/Route3/scripts.pory"
	goto Route3_Ext_DoubleBattle_Reward_Give
	return

Route3_Ext_DoubleBattle_Reward_2:
# 155 "data//maps/Route3/scripts.pory"
	setvar VAR_0x8006, ITEM_BLACK_BELT
	goto Route3_Ext_DoubleBattle_Reward_1

Route3_Ext_DoubleBattle_Reward_5:
# 156 "data//maps/Route3/scripts.pory"
	setvar VAR_0x8006, ITEM_SHARP_BEAK
	goto Route3_Ext_DoubleBattle_Reward_4


Route3_Ext_DoubleBattle_Reward_Give::
# 161 "data//maps/Route3/scripts.pory"
	showitemdescription
# 162 "data//maps/Route3/scripts.pory"
	msgbox Route3_Ext_DoubleBattle_Reward_Give_Text_0, MSGBOX_YESNO
# 163 "data//maps/Route3/scripts.pory"
	hideitemdescription
# 164 "data//maps/Route3/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route3_Ext_DoubleBattle_Reward_Give_1
# 165 "data//maps/Route3/scripts.pory"
	goto Route3_Ext_DoubleBattle_Reward
	return

Route3_Ext_DoubleBattle_Reward_Give_1:
# 164 "data//maps/Route3/scripts.pory"
	giveitem VAR_0x8006
# 164 "data//maps/Route3/scripts.pory"
	goto Route3_Ext_DoubleBattle_Reward_End
	return


Route3_Ext_DoubleBattle_Reward_End::
# 169 "data//maps/Route3/scripts.pory"
	msgbox Route3_Ext_DoubleBattle_Reward_End_Text_0, MSGBOX_NPC
	end


# 75 "data//maps/Route3/scripts.pory"
Route3_Skarmory_Trigger_Movement_0:
# 75 "data//maps/Route3/scripts.pory"
	emote_exclamation_mark
# 75 "data//maps/Route3/scripts.pory"
	jump_in_place_left
	step_end

Route3_TrainerBattle_Kim_Text_0:
# 9 "data//maps/Route3/scripts.pory"
	.string "Mom gifted my sister and me a cool\n"
	.string "FLYING-type Pokémon!$"

Route3_TrainerBattle_Kim_Text_1:
# 9 "data//maps/Route3/scripts.pory"
	.string "My sister will beat you!$"

Route3_TrainerBattle_Kim_Text_2:
# 10 "data//maps/Route3/scripts.pory"
	.string "My sister is up ahead, near the Gastree\n"
	.string "City exit. She's super strong!$"

Route3_TrainerBattle_Ronnie_Text_0:
# 18 "data//maps/Route3/scripts.pory"
	.string "I'm on my way to Gastree City to\n"
	.string "challenge the Pokémon Gym, but I'm not\l"
	.string "sure I can win. Can I practice with you?$"

Route3_TrainerBattle_Ronnie_Text_1:
# 18 "data//maps/Route3/scripts.pory"
	.string "Looks like I need more practice!$"

Route3_TrainerBattle_Ronnie_Text_2:
# 19 "data//maps/Route3/scripts.pory"
	.string "I heard that the Gastree City Gym\n"
	.string "Leader uses ROCK type Pokémon.$"

Route3_TrainerBattle_Jana_Text_0:
# 27 "data//maps/Route3/scripts.pory"
	.string "I'm a Pokémon Breeder! All Breeders\n"
	.string "specialise in one Pokémon variety, such\l"
	.string "as dog, cat, or even bear Pokémon!\p"
	.string "Can you guess my specialty?$"

Route3_TrainerBattle_Jana_Text_1:
# 27 "data//maps/Route3/scripts.pory"
	.string "You guessed it - I love foxes!$"

Route3_TrainerBattle_Jana_Text_2:
# 28 "data//maps/Route3/scripts.pory"
	.string "My Pokémon are my most cherised\n"
	.string "partners!$"

Route3_TrainerBattle_Chara_Text_0:
# 36 "data//maps/Route3/scripts.pory"
	.string "Mom gifted my sister and me a cool\n"
	.string "FLYING-type Pokémon!\p"
	.string "...\p"
	.string "You met her and beat her?\p"
	.string "Well this is a revenge match then!$"

Route3_TrainerBattle_Chara_Text_1:
# 36 "data//maps/Route3/scripts.pory"
	.string "Aw I lost!$"

Route3_TrainerBattle_Chara_Text_2:
# 37 "data//maps/Route3/scripts.pory"
	.string "We love our Swablu!$"

Route3_NPC1_Text_0:
# 54 "data//maps/Route3/scripts.pory"
	.string "I love the high-altitude winds!\p"
	.string "I feel one with the hills.$"

Route3_NPC2_Text_0:
# 59 "data//maps/Route3/scripts.pory"
	.string "I was supposed to go to a marathon, but\n"
	.string "I don't think this is where it starts.$"

Route3_Skarmory_Trigger_Text_0:
# 78 "data//maps/Route3/scripts.pory"
	.string "SKARMORY stares defiantly at you. It\n"
	.string "roars! Could be dangerous to approach.$"

Route3_Skarmory_Battle_Text_0:
# 93 "data//maps/Route3/scripts.pory"
	.string "The wild SKARMORY roars and attacks!$"

Route3_Skarmory_Battle_Text_1:
# 112 "data//maps/Route3/scripts.pory"
	.string "The SKARMORY preens its steely\n"
	.string "feathers victoriously. Better not\l"
	.string "disturb it again!$"

Route3_Ext_TrainerBattle_A_Text_0:
# 135 "data//maps/Route3/scripts.pory"
	.string "My buddy and I train here every day!\n"
	.string "Let me show you how strong we've\l"
	.string "become!$"

Route3_Ext_TrainerBattle_A_Text_1:
# 135 "data//maps/Route3/scripts.pory"
	.string "No way! Against the two of us!$"

Route3_Ext_TrainerBattle_A_Text_2:
# 136 "data//maps/Route3/scripts.pory"
	.string "We're going to keep training together\n"
	.string "until we become the strongest!$"

Route3_Ext_TrainerBattle_B_Text_0:
# 141 "data//maps/Route3/scripts.pory"
	.string "You wanna take on me and my buddy\n"
	.string "together? When we fight side by side,\l"
	.string "our strength multiplies!$"

Route3_Ext_TrainerBattle_B_Text_1:
# 141 "data//maps/Route3/scripts.pory"
	.string "How? It was two-on-one!$"

Route3_Ext_TrainerBattle_B_Text_2:
# 142 "data//maps/Route3/scripts.pory"
	.string "You need good friends if you want to\n"
	.string "reach the top!$"

Route3_Ext_DoubleBattle_ItemGive_Text_0:
# 147 "data//maps/Route3/scripts.pory"
	.string "What a battle! You beat the two of us\n"
	.string "together. You're really strong - strong\l"
	.string "enough to be our third buddy!$"

Route3_Ext_DoubleBattle_Reward_Text_0:
# 152 "data//maps/Route3/scripts.pory"
	.string "Take one of these - you gotta have one\n"
	.string "as our third buddy!$"

Route3_Ext_DoubleBattle_Reward_Text_1:
# 154 "data//maps/Route3/scripts.pory"
	.string "Black Belt$"

Route3_Ext_DoubleBattle_Reward_Text_2:
# 154 "data//maps/Route3/scripts.pory"
	.string "Sharp Beak$"

Route3_Ext_DoubleBattle_Reward_Give_Text_0:
# 162 "data//maps/Route3/scripts.pory"
	.string "Are you sure?$"

Route3_Ext_DoubleBattle_Reward_End_Text_0:
# 169 "data//maps/Route3/scripts.pory"
	.string "Come train with us again sometime!$"
