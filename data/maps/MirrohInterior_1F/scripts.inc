MirrohInterior_1F_MapScripts::
	.byte 0


MirrohInterior_1F_EventScript_Nurse::
# 19 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 20 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 21 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Nurse_Text_0
# 22 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 23 "data//maps/MirrohInterior_1F/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 24 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_Trainer_A::
# 35 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_A, MirrohInterior_1F_Trainer_A_Text_0, MirrohInterior_1F_Trainer_A_Text_1
# 36 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_A_Text_2
# 37 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_B::
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_B, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_1
# 43 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_2
# 44 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_C::
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_C, MirrohInterior_1F_Trainer_C_Text_0, MirrohInterior_1F_Trainer_C_Text_1
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_C_Text_2
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_D::
# 56 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_E, MirrohInterior_1F_Trainer_D_Text_0, MirrohInterior_1F_Trainer_D_Text_1
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_2
# 58 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_E::
# 63 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_E_Text_0, MirrohInterior_1F_Trainer_E_Text_1
# 64 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_E_Text_2
# 65 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_NPC_A::
# 86 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 87 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 88 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_A_Text_0
# 89 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_B::
# 94 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 95 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 96 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_B_Text_0
# 97 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_C::
# 102 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 103 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 104 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_C_Text_0
# 105 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_EventScript_Nurse_Text_0:
# 21 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "It's so cold here...CHANSEY and I got\n"
	.string "the worst route!$"

MirrohInterior_1F_Trainer_A_Text_0:
# 35 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Ho ho! Didn't expect to see a fellow\n"
	.string "traveler up here in this frozen\l"
	.string "mountain!$"

MirrohInterior_1F_Trainer_A_Text_1:
# 35 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Keep traveling, traveler!$"

MirrohInterior_1F_Trainer_A_Text_2:
# 36 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I love delving deep into the mountains\n"
	.string "of Cormoria!$"

MirrohInterior_1F_Trainer_B_Text_0:
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! That item's mine!$"

MirrohInterior_1F_Trainer_B_Text_1:
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine, you can have it...$"

MirrohInterior_1F_Trainer_B_Text_2:
# 43 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Travelers often leave rare items inside\n"
	.string "caves and mountains. That's where the\l"
	.string "money is, baby!$"

MirrohInterior_1F_Trainer_C_Text_0:
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I may switch to ICE type Pokémon after\n"
	.string "seeing the Pokémon here!$"

MirrohInterior_1F_Trainer_C_Text_1:
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I should just use ROCK types!$"

MirrohInterior_1F_Trainer_C_Text_2:
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "If you go deeper into the mountain,\n"
	.string "you'll find some rare ICE type Pokemon!$"

MirrohInterior_1F_Trainer_D_Text_0:
# 56 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I took a wrong turn and got lost. This is\n"
	.string "a dead end!$"

MirrohInterior_1F_Trainer_D_Text_1:
# 56 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're not lost!$"

MirrohInterior_1F_Trainer_D_Text_2:
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "How do I get out of here?$"

MirrohInterior_1F_Trainer_E_Text_0:
# 63 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I can't get through to Winterlily Hollow\n"
	.string "from this side. It's so frustrating!$"

MirrohInterior_1F_Trainer_E_Text_1:
# 63 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're also frustrating!$"

MirrohInterior_1F_Trainer_E_Text_2:
# 64 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I mean why even build a tunnel then?$"

MirrohInterior_1F_NPC_A_Text_0:
# 88 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I'm trekking to Winterlily Hollow! But my\n"
	.string "GRASS type Pokémon can't deal with all\l"
	.string "the ICE type Pokémon around here...$"

MirrohInterior_1F_NPC_B_Text_0:
# 96 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "The way to Winterlily Hollow is past the\n"
	.string "ledge above. But how do I cross the\l"
	.string "ledge?$"

MirrohInterior_1F_NPC_C_Text_0:
# 104 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Past this is the trek upto Mt. Mirroh\n"
	.string "PEAK. The weather is harsh!$"
