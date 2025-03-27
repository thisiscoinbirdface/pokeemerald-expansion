Route1_MapScripts::
	.byte 0


Route1_EventScripts_RandomDude::
# 4 "data//maps/Route1/scripts.pory"
	lockall
# 5 "data//maps/Route1/scripts.pory"
	faceplayer
# 6 "data//maps/Route1/scripts.pory"
	msgbox Route1_EventScripts_RandomDude_Text_0
# 11 "data//maps/Route1/scripts.pory"
	releaseall
	return


Route1_TrainerBattle_Jose::
# 16 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_JOSE, Route1_TrainerBattle_Jose_Text_0, Route1_TrainerBattle_Jose_Text_1
# 17 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_Jose_Text_2
# 18 "data//maps/Route1/scripts.pory"
	release
	end


Route1_TrainerBattle_Sana::
# 25 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_SANA, Route1_TrainerBattle_Sana_Text_0, Route1_TrainerBattle_Sana_Text_1
# 26 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_Sana_Text_2
# 27 "data//maps/Route1/scripts.pory"
	release
	end


Route1_TrainerBattle_Mortem::
# 34 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_MORTEM, Route1_TrainerBattle_Mortem_Text_0, Route1_TrainerBattle_Mortem_Text_1
# 35 "data//maps/Route1/scripts.pory"
	msgbox Route1_TrainerBattle_Mortem_Text_2
# 36 "data//maps/Route1/scripts.pory"
	release
	end


Route1_Sign_Carabrue::
# 42 "data//maps/Route1/scripts.pory"
	msgbox Route1_Sign_Carabrue_Text_0, MSGBOX_SIGN
	end


Route1_Sign_Middle::
# 47 "data//maps/Route1/scripts.pory"
	msgbox Route1_Sign_Middle_Text_0, MSGBOX_SIGN
	end


Route1_Sign_Fennilahl::
# 52 "data//maps/Route1/scripts.pory"
	msgbox Route1_Sign_Fennilahl_Text_0, MSGBOX_SIGN
	end


Route1_EventScripts_RandomDude_Text_0:
# 8 "data//maps/Route1/scripts.pory"
	.string "Did you know that Pokemon hide in the\n"
	.string "grass? Be careful!$"

Route1_TrainerBattle_Jose_Text_0:
# 16 "data//maps/Route1/scripts.pory"
	.string "I just got my first {PKMN}! And now, I'm\n"
	.string "about to get my first win!$"

Route1_TrainerBattle_Jose_Text_1:
# 16 "data//maps/Route1/scripts.pory"
	.string "Aw man! I thought I could win!$"

Route1_TrainerBattle_Jose_Text_2:
# 17 "data//maps/Route1/scripts.pory"
	.string "My Rattata and I will become {PKMN}\n"
	.string "Champions one day!$"

Route1_TrainerBattle_Sana_Text_0:
# 25 "data//maps/Route1/scripts.pory"
	.string "I love FLYING-type {PKMN}. Let me show you\n"
	.string "my favourite!$"

Route1_TrainerBattle_Sana_Text_1:
# 25 "data//maps/Route1/scripts.pory"
	.string "My FLYING type {PKMN} lost!$"

Route1_TrainerBattle_Sana_Text_2:
# 26 "data//maps/Route1/scripts.pory"
	.string "A good {PKMN} team needs variety, I guess.$"

Route1_TrainerBattle_Mortem_Text_0:
# 34 "data//maps/Route1/scripts.pory"
	.string "I came from GASTREE CITY to find cool\n"
	.string "bug-type {PKMN} here...but I found you\l"
	.string "instead!$"

Route1_TrainerBattle_Mortem_Text_1:
# 34 "data//maps/Route1/scripts.pory"
	.string "Well, back to bug-hunting for me.$"

Route1_TrainerBattle_Mortem_Text_2:
# 35 "data//maps/Route1/scripts.pory"
	.string "There are many bug catchers like me.\n"
	.string "It's a huge hobby!$"

Route1_Sign_Carabrue_Text_0:
# 42 "data//maps/Route1/scripts.pory"
	.string "{LEFT_ARROW} CARABRUE TOWN\n"
	.string "{UP_ARROW} FENNILAHL TOWN$"

Route1_Sign_Middle_Text_0:
# 47 "data//maps/Route1/scripts.pory"
	.string "Beware {PKMN} that hide in tall grass!$"

Route1_Sign_Fennilahl_Text_0:
# 52 "data//maps/Route1/scripts.pory"
	.string "{RIGHT_ARROW} FENNILAHL TOWN\n"
	.string "Foothills of Mt. Ceram.$"
