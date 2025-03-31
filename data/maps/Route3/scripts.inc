Route3_MapScripts::
	.byte 0


Route3_TrainerBattle_Kim::
# 5 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_KIM, Route3_TrainerBattle_Kim_Text_0, Route3_TrainerBattle_Kim_Text_1
# 6 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Kim_Text_2
# 7 "data//maps/Route3/scripts.pory"
	release
	end


Route3_TrainerBattle_Ronnie::
# 14 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_RONNIE, Route3_TrainerBattle_Ronnie_Text_0, Route3_TrainerBattle_Ronnie_Text_1
# 15 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Ronnie_Text_2
# 16 "data//maps/Route3/scripts.pory"
	release
	end


Route3_TrainerBattle_Jana::
# 23 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_JANA, Route3_TrainerBattle_Jana_Text_0, Route3_TrainerBattle_Jana_Text_1
# 24 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Jana_Text_2
# 25 "data//maps/Route3/scripts.pory"
	release
	end


Route3_TrainerBattle_Chara::
# 32 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_CHARA, Route3_TrainerBattle_Chara_Text_0, Route3_TrainerBattle_Chara_Text_1
# 33 "data//maps/Route3/scripts.pory"
	msgbox Route3_TrainerBattle_Chara_Text_2
# 34 "data//maps/Route3/scripts.pory"
	release
	end


Route3_NPC1::
# 50 "data//maps/Route3/scripts.pory"
	lockall
# 51 "data//maps/Route3/scripts.pory"
	faceplayer
# 52 "data//maps/Route3/scripts.pory"
	msgbox Route3_NPC1_Text_0
# 53 "data//maps/Route3/scripts.pory"
	releaseall
	return


Route3_NPC2::
# 57 "data//maps/Route3/scripts.pory"
	lockall
# 58 "data//maps/Route3/scripts.pory"
	faceplayer
# 59 "data//maps/Route3/scripts.pory"
	msgbox Route3_NPC2_Text_0
# 60 "data//maps/Route3/scripts.pory"
	releaseall
	return


Route3_Skarmory_Trigger::
# 71 "data//maps/Route3/scripts.pory"
	lockall
# 72 "data//maps/Route3/scripts.pory"
	faceplayer
# 73 "data//maps/Route3/scripts.pory"
	playmoncry SPECIES_SKARMORY, CRY_MODE_NORMAL
# 74 "data//maps/Route3/scripts.pory"
	applymovement 13, Route3_Skarmory_Trigger_Movement_0
# 75 "data//maps/Route3/scripts.pory"
	waitmovement 0
# 76 "data//maps/Route3/scripts.pory"
	delay 16
# 77 "data//maps/Route3/scripts.pory"
	msgbox Route3_Skarmory_Trigger_Text_0
# 79 "data//maps/Route3/scripts.pory"
	setvar VAR_TEMP_0, 1
# 81 "data//maps/Route3/scripts.pory"
	releaseall
	end


Route3_Skarmory_Battle::
# 86 "data//maps/Route3/scripts.pory"
	lockall
# 87 "data//maps/Route3/scripts.pory"
	faceplayer
# 88 "data//maps/Route3/scripts.pory"
	playmoncry SPECIES_SKARMORY, CRY_MODE_NORMAL
# 89 "data//maps/Route3/scripts.pory"
	applymovement 13, Route3_Skarmory_Trigger_Movement_0
# 90 "data//maps/Route3/scripts.pory"
	waitmovement 0
# 91 "data//maps/Route3/scripts.pory"
	delay 16
# 92 "data//maps/Route3/scripts.pory"
	msgbox Route3_Skarmory_Battle_Text_0
# 93 "data//maps/Route3/scripts.pory"
	release
# 95 "data//maps/Route3/scripts.pory"
	setwildbattle SPECIES_SKARMORY, 2
# 96 "data//maps/Route3/scripts.pory"
	dowildbattle
# 99 "data//maps/Route3/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 100 "data//maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route3_Skarmory_Battle_2
Route3_Skarmory_Battle_1:
# 105 "data//maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route3_Skarmory_Battle_5
Route3_Skarmory_Battle_4:
# 110 "data//maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route3_Skarmory_Battle_8
Route3_Skarmory_Battle_7:
# 115 "data//maps/Route3/scripts.pory"
	releaseall
	end

Route3_Skarmory_Battle_2:
# 101 "data//maps/Route3/scripts.pory"
	removeobject 13
# 102 "data//maps/Route3/scripts.pory"
	setflag FLAG_ROUTE3_SKARMORY_WILD
# 103 "data//maps/Route3/scripts.pory"
	releaseall
	goto Route3_Skarmory_Battle_1

Route3_Skarmory_Battle_5:
# 106 "data//maps/Route3/scripts.pory"
	removeobject 13
# 107 "data//maps/Route3/scripts.pory"
	setflag FLAG_ROUTE3_SKARMORY_WILD
# 108 "data//maps/Route3/scripts.pory"
	releaseall
	goto Route3_Skarmory_Battle_4

Route3_Skarmory_Battle_8:
# 111 "data//maps/Route3/scripts.pory"
	msgbox Route3_Skarmory_Battle_Text_1
# 112 "data//maps/Route3/scripts.pory"
	release
	goto Route3_Skarmory_Battle_7


# 74 "data//maps/Route3/scripts.pory"
Route3_Skarmory_Trigger_Movement_0:
# 74 "data//maps/Route3/scripts.pory"
	emote_exclamation_mark
# 74 "data//maps/Route3/scripts.pory"
	jump_in_place_left
	step_end

Route3_TrainerBattle_Kim_Text_0:
# 5 "data//maps/Route3/scripts.pory"
	.string "I'm much tougher than I look. I'm from\n"
	.string "the hills after all!$"

Route3_TrainerBattle_Kim_Text_1:
# 5 "data//maps/Route3/scripts.pory"
	.string "You're from the hills too?$"

Route3_TrainerBattle_Kim_Text_2:
# 6 "data//maps/Route3/scripts.pory"
	.string "I'm tough but hungry too. Maybe I\n"
	.string "should go home and eat.$"

Route3_TrainerBattle_Ronnie_Text_0:
# 14 "data//maps/Route3/scripts.pory"
	.string "I'm on my way to GASTREE CITY to\n"
	.string "challenge the {PKMN} Gym there. Let me\l"
	.string "practice with you!$"

Route3_TrainerBattle_Ronnie_Text_1:
# 14 "data//maps/Route3/scripts.pory"
	.string "Looks like I need more practice!$"

Route3_TrainerBattle_Ronnie_Text_2:
# 15 "data//maps/Route3/scripts.pory"
	.string "I heard that the GASTREE CITY Gym\n"
	.string "Leader uses FIRE type {PKMN}.$"

Route3_TrainerBattle_Jana_Text_0:
# 23 "data//maps/Route3/scripts.pory"
	.string "I'm a {PKMN} Breeder! All Breeders\n"
	.string "specialise in one {PKMN} variety, such as\l"
	.string "dog {PKMN}, cat {PKMN}, or even bear {PKMN}! Can\l"
	.string "you guess my specialty?$"

Route3_TrainerBattle_Jana_Text_1:
# 23 "data//maps/Route3/scripts.pory"
	.string "I love foxes!$"

Route3_TrainerBattle_Jana_Text_2:
# 24 "data//maps/Route3/scripts.pory"
	.string "My {PKMN} are my most cherised partners!$"

Route3_TrainerBattle_Chara_Text_0:
# 32 "data//maps/Route3/scripts.pory"
	.string "Whew! Route 3 was long, but I can do one\n"
	.string "last battle!$"

Route3_TrainerBattle_Chara_Text_1:
# 32 "data//maps/Route3/scripts.pory"
	.string "Aw I lost!$"

Route3_TrainerBattle_Chara_Text_2:
# 33 "data//maps/Route3/scripts.pory"
	.string "My {PKMN} and I are all out of energy.$"

Route3_NPC1_Text_0:
# 52 "data//maps/Route3/scripts.pory"
	.string "I love the high-altitude winds! I feel\n"
	.string "one with the hills.$"

Route3_NPC2_Text_0:
# 59 "data//maps/Route3/scripts.pory"
	.string "I was supposed to go to a marathon, but\n"
	.string "I don't think this is where it starts.$"

Route3_Skarmory_Trigger_Text_0:
# 77 "data//maps/Route3/scripts.pory"
	.string "SKARMORY stares defiantly at you. It\n"
	.string "roars! Could be dangerous to approach.$"

Route3_Skarmory_Battle_Text_0:
# 92 "data//maps/Route3/scripts.pory"
	.string "The wild SKARMORY roars and attacks!$"

Route3_Skarmory_Battle_Text_1:
# 111 "data//maps/Route3/scripts.pory"
	.string "The SKARMORY preens its steely\n"
	.string "feathers victoriously. Better not\l"
	.string "disturb it again!$"
