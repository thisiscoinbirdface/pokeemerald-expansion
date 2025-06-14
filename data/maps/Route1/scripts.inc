Route1_MapScripts::
# 2 "data//maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route1_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_RESUME:
# 2 "data//maps/Route1/scripts.pory"
	setstepcallback STEP_CB_ASH
	return


Route1_EventScripts_RandomDude::
# 10 "data//maps/Route1/scripts.pory"
	msgbox Route1_EventScripts_RandomDude_Text_0, MSGBOX_NPC
	end


Route1_TrainerBattle_A::
# 15 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_A, Route1_TrainerBattle_A_Text_0, Route1_TrainerBattle_A_Text_1
# 16 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_A_Text_2
# 17 "data//maps/Route1/scripts.pory"
	release
	end


Route1_TrainerBattle_Strong_A::
# 22 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_STRONG_A, Route1_TrainerBattle_Strong_A_Text_0, Route1_TrainerBattle_A_Text_1
# 23 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_Strong_A_Text_1
# 24 "data//maps/Route1/scripts.pory"
	release
	end


Route1_TrainerBattle_B::
# 31 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_B, Route1_TrainerBattle_B_Text_0, Route1_TrainerBattle_B_Text_1
# 32 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_B_Text_2
# 33 "data//maps/Route1/scripts.pory"
	release
	end


Route1_TrainerBattle_Strong_B::
# 38 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_STRONG_B, Route1_TrainerBattle_Strong_B_Text_0, Route1_TrainerBattle_B_Text_1
# 39 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_Strong_B_Text_1
# 40 "data//maps/Route1/scripts.pory"
	release
	end


Route1_TrainerBattle_C::
# 45 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_C, Route1_TrainerBattle_C_Text_0, Route1_TrainerBattle_C_Text_1
# 46 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_C_Text_2
# 47 "data//maps/Route1/scripts.pory"
	release
	end


Route1_TrainerBattle_Strong_C::
# 51 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_STRONG_C, Route1_TrainerBattle_Strong_C_Text_0, Route1_TrainerBattle_Strong_C_Text_1
# 52 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_C_Text_2
# 53 "data//maps/Route1/scripts.pory"
	release
	end


Route1_EventScripts_RandomDude_Text_0:
# 10 "data//maps/Route1/scripts.pory"
	.string "A Pokémon using a move of the same type\n"
	.string "as itself gets a boost. If Pidove uses\l"
	.string "Peck, it'll deal more damage!$"

Route1_TrainerBattle_A_Text_0:
# 15 "data//maps/Route1/scripts.pory"
	.string "I just got my first Pokémon! And now,\n"
	.string "I'm about to get my first win!$"

Route1_TrainerBattle_A_Text_1:
# 15 "data//maps/Route1/scripts.pory"
	.string "Aw man! I thought I could win!$"

Route1_TrainerBattle_A_Text_2:
# 16 "data//maps/Route1/scripts.pory"
	.string "My Rattata and I will become Pokémon\n"
	.string "Champions one day!$"

Route1_TrainerBattle_Strong_A_Text_0:
# 22 "data//maps/Route1/scripts.pory"
	.string "Hey - it's you again! Thought you were\n"
	.string "the only one training?\p"
	.string "I demand a rematch!$"

Route1_TrainerBattle_Strong_A_Text_1:
# 23 "data//maps/Route1/scripts.pory"
	.string "Raticate and I are gonna get stronger\n"
	.string "and stronger!$"

Route1_TrainerBattle_B_Text_0:
# 31 "data//maps/Route1/scripts.pory"
	.string "I really love FLYING-type Pokémon.\n"
	.string "Let me show you my favourite!$"

Route1_TrainerBattle_B_Text_1:
# 31 "data//maps/Route1/scripts.pory"
	.string "My FLYING type Pokémon lost!$"

Route1_TrainerBattle_B_Text_2:
# 32 "data//maps/Route1/scripts.pory"
	.string "I guess a good Pokémon team needs\n"
	.string "good type variety!$"

Route1_TrainerBattle_Strong_B_Text_0:
# 38 "data//maps/Route1/scripts.pory"
	.string "Since our last battle,\n"
	.string "I traveled all over Cormoria...\p"
	.string "and I still love FLYING types!$"

Route1_TrainerBattle_Strong_B_Text_1:
# 39 "data//maps/Route1/scripts.pory"
	.string "I'm going to travel to another region\n"
	.string "and catch FLYING types there!$"

Route1_TrainerBattle_C_Text_0:
# 45 "data//maps/Route1/scripts.pory"
	.string "I came here to find BUG-type\n"
	.string "Pokémon...but I found you instead!$"

Route1_TrainerBattle_C_Text_1:
# 45 "data//maps/Route1/scripts.pory"
	.string "Back to bug-hunting for me!$"

Route1_TrainerBattle_C_Text_2:
# 46 "data//maps/Route1/scripts.pory"
	.string "There are many bug catchers like me.\n"
	.string "It's a huge hobby!$"

Route1_TrainerBattle_Strong_C_Text_0:
# 51 "data//maps/Route1/scripts.pory"
	.string "My BUG types and I have been training\n"
	.string "so much! You'll see!$"

Route1_TrainerBattle_Strong_C_Text_1:
# 51 "data//maps/Route1/scripts.pory"
	.string "Well, back to bug-hunting for me.$"
