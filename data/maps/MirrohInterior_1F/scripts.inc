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
	trainerbattle_single TRAINER_MIRROHINT_B, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_0
# 26 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_0
# 27 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_C::
# 32 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_C, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_0
# 33 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_0
# 34 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_D::
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_0
# 40 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_0
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_E::
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_E, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_0
# 47 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_0
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
	.string "$"

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
