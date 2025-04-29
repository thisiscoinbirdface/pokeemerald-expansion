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
