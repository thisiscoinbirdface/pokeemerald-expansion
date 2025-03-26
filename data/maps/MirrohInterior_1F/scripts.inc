MirrohInterior_1F_MapScripts::
	.byte 0


MirrohInterior_1F_Trainer_A::
# 18 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_A, MirrohInterior_1F_Trainer_A_Text_0, MirrohInterior_1F_Trainer_A_Text_1
# 19 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_A_Text_2
# 20 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_B::
# 25 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_B, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_1
# 26 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_2
# 27 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_C::
# 32 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_C, MirrohInterior_1F_Trainer_C_Text_0, MirrohInterior_1F_Trainer_C_Text_1
# 33 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_C_Text_2
# 34 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_D::
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_E, MirrohInterior_1F_Trainer_D_Text_0, MirrohInterior_1F_Trainer_D_Text_1
# 40 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_2
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_E::
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_E_Text_0, MirrohInterior_1F_Trainer_E_Text_1
# 47 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_E_Text_2
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_NPC_A::
# 69 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 70 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 71 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_A_Text_0
# 72 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_B::
# 77 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 78 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 79 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_B_Text_0
# 80 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_C::
# 85 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 86 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 87 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_C_Text_0
# 88 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_Trainer_A_Text_0:
# 18 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Ho ho! Didn't expect to see a fellow\n"
	.string "traveler up here in this frozen\l"
	.string "mountain!$"

MirrohInterior_1F_Trainer_A_Text_1:
# 18 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Keep traveling, traveler!$"

MirrohInterior_1F_Trainer_A_Text_2:
# 19 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I love delving deep into the mountains\n"
	.string "of CORMORIA!$"

MirrohInterior_1F_Trainer_B_Text_0:
# 25 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! That item's mine!$"

MirrohInterior_1F_Trainer_B_Text_1:
# 25 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine, you can have it!$"

MirrohInterior_1F_Trainer_B_Text_2:
# 26 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Travelers often leave rare items inside\n"
	.string "caves and mountains. That's where the\l"
	.string "money is, baby!$"

MirrohInterior_1F_Trainer_C_Text_0:
# 32 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I may switch to ICE type {PKMN} after\n"
	.string "seeing the {PKMN} here!$"

MirrohInterior_1F_Trainer_C_Text_1:
# 32 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I should just use ROCK types!$"

MirrohInterior_1F_Trainer_C_Text_2:
# 33 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "If you go deeper into the mountain,\n"
	.string "you'll find some rare ICE type {PKMN}!$"

MirrohInterior_1F_Trainer_D_Text_0:
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I took a wrong turn and got lost. This is\n"
	.string "a dead end!$"

MirrohInterior_1F_Trainer_D_Text_1:
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're not lost!$"

MirrohInterior_1F_Trainer_D_Text_2:
# 40 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "How do I get out of here?$"

MirrohInterior_1F_Trainer_E_Text_0:
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "These grunts aren't letting me through\n"
	.string "to WINTERLILY HOLLOW! Are you one of\l"
	.string "them too?$"

MirrohInterior_1F_Trainer_E_Text_1:
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No you're not!$"

MirrohInterior_1F_Trainer_E_Text_2:
# 47 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "What are these city criminals doing all\n"
	.string "the way up here?$"

MirrohInterior_1F_NPC_A_Text_0:
# 71 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I'm trekking to WINTERLILY HOLLOW! But\n"
	.string "my GRASS type {PKMN} can't deal with all\l"
	.string "the ICE type {PKMN} around here...$"

MirrohInterior_1F_NPC_B_Text_0:
# 79 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "The way to WINTERLILY HOLLOW is past\n"
	.string "the ledge above. But how do I cross the\l"
	.string "ledge?$"

MirrohInterior_1F_NPC_C_Text_0:
# 87 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Past this is the trek upto MT MIRROH\n"
	.string "PEAK. The weather is harsh!$"
