Route1_MapScripts::
	.byte 0


Route1_EventScripts_RandomDude::
# 4 "data//maps/Route1/scripts.pory"
	msgbox Route1_EventScripts_RandomDude_Text_0, MSGBOX_NPC
	end


Route1_TrainerBattle_A::
# 10 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_A, Route1_TrainerBattle_A_Text_0, Route1_TrainerBattle_A_Text_1
# 11 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_A_Text_2
# 12 "data//maps/Route1/scripts.pory"
	release
	end


Route1_TrainerBattle_B::
# 19 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_B, Route1_TrainerBattle_B_Text_0, Route1_TrainerBattle_B_Text_1
# 20 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_B_Text_2
# 21 "data//maps/Route1/scripts.pory"
	release
	end


Route1_TrainerBattle_C::
# 27 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_C, Route1_TrainerBattle_C_Text_0, Route1_TrainerBattle_C_Text_1
# 28 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_C_Text_2
# 29 "data//maps/Route1/scripts.pory"
	release
	end


Route1_EventScripts_RandomDude_Text_0:
# 4 "data//maps/Route1/scripts.pory"
	.string "A Pokémon using a move of the same type\n"
	.string "as itself gets a boost. If Pidove uses\l"
	.string "Peck, it'll deal more damage!$"

Route1_TrainerBattle_A_Text_0:
# 10 "data//maps/Route1/scripts.pory"
	.string "I just got my first Pokémon! And now,\n"
	.string "I'm about to get my first win!$"

Route1_TrainerBattle_A_Text_1:
# 10 "data//maps/Route1/scripts.pory"
	.string "Aw man! I thought I could win!$"

Route1_TrainerBattle_A_Text_2:
# 11 "data//maps/Route1/scripts.pory"
	.string "My Rattata and I will become Pokémon\n"
	.string "Champions one day!$"

Route1_TrainerBattle_B_Text_0:
# 19 "data//maps/Route1/scripts.pory"
	.string "I love FLYING-type Pokémon. Let me\n"
	.string "show you my favourite!$"

Route1_TrainerBattle_B_Text_1:
# 19 "data//maps/Route1/scripts.pory"
	.string "My FLYING type Pokémon lost!$"

Route1_TrainerBattle_B_Text_2:
# 20 "data//maps/Route1/scripts.pory"
	.string "I guess A good Pokémon team needs type\n"
	.string "variety!$"

Route1_TrainerBattle_C_Text_0:
# 27 "data//maps/Route1/scripts.pory"
	.string "I came from Gastree City to find\n"
	.string "BUG-type Pokémon...but I found you\l"
	.string "instead!$"

Route1_TrainerBattle_C_Text_1:
# 27 "data//maps/Route1/scripts.pory"
	.string "Well, back to bug-hunting for me.$"

Route1_TrainerBattle_C_Text_2:
# 28 "data//maps/Route1/scripts.pory"
	.string "There are many bug catchers like me.\n"
	.string "It's a huge hobby!$"
