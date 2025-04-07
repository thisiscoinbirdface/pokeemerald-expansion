Route1_MapScripts::
	.byte 0


Route1_EventScripts_RandomDude::
# 4 "data//maps/Route1/scripts.pory"
	lockall
# 5 "data//maps/Route1/scripts.pory"
	faceplayer
# 6 "data//maps/Route1/scripts.pory"
	msgbox Route1_EventScripts_RandomDude_Text_0
# 7 "data//maps/Route1/scripts.pory"
	releaseall
	return


Route1_TrainerBattle_A::
# 12 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_A, Route1_TrainerBattle_A_Text_0, Route1_TrainerBattle_A_Text_1
# 13 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_A_Text_2
# 14 "data//maps/Route1/scripts.pory"
	release
	end


Route1_TrainerBattle_B::
# 21 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_B, Route1_TrainerBattle_B_Text_0, Route1_TrainerBattle_B_Text_1
# 22 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_B_Text_2
# 23 "data//maps/Route1/scripts.pory"
	release
	end


Route1_TrainerBattle_C::
# 29 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_C, Route1_TrainerBattle_C_Text_0, Route1_TrainerBattle_C_Text_1
# 30 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_C_Text_2
# 31 "data//maps/Route1/scripts.pory"
	release
	end


Route1_EventScripts_RandomDude_Text_0:
# 6 "data//maps/Route1/scripts.pory"
	.string "A Pokemon that uses a move of the same\n"
	.string "type as itself gets a boost. So if\l"
	.string "ROOKIDEE uses PECK, it'll deal more\l"
	.string "damage!$"

Route1_TrainerBattle_A_Text_0:
# 12 "data//maps/Route1/scripts.pory"
	.string "I just got my first Pokemon! And now,\n"
	.string "I'm about to get my first win!$"

Route1_TrainerBattle_A_Text_1:
# 12 "data//maps/Route1/scripts.pory"
	.string "Aw man! I thought I could win!$"

Route1_TrainerBattle_A_Text_2:
# 13 "data//maps/Route1/scripts.pory"
	.string "My Rattata and I will become Pokemon\n"
	.string "Champions one day!$"

Route1_TrainerBattle_B_Text_0:
# 21 "data//maps/Route1/scripts.pory"
	.string "I love FLYING-type Pokemon. Let me\n"
	.string "show you my favourite!$"

Route1_TrainerBattle_B_Text_1:
# 21 "data//maps/Route1/scripts.pory"
	.string "My FLYING type Pokemon lost!$"

Route1_TrainerBattle_B_Text_2:
# 22 "data//maps/Route1/scripts.pory"
	.string "A good Pokemon team needs variety, I\n"
	.string "guess.$"

Route1_TrainerBattle_C_Text_0:
# 29 "data//maps/Route1/scripts.pory"
	.string "I came from Gastree City to find cool\n"
	.string "bug-type Pokemon here...but I found\l"
	.string "you instead!$"

Route1_TrainerBattle_C_Text_1:
# 29 "data//maps/Route1/scripts.pory"
	.string "Well, back to bug-hunting for me.$"

Route1_TrainerBattle_C_Text_2:
# 30 "data//maps/Route1/scripts.pory"
	.string "There are many bug catchers like me.\n"
	.string "It's a huge hobby!$"
