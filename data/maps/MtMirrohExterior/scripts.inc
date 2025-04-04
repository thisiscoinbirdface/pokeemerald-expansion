MtMirrohExterior_MapScripts::
	.byte 0


MtMirrohExterior_BreechTrigger::
# 17 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
	return


MtMirrohExterior_Trainer_A::
# 23 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_A, MtMirrohExterior_Trainer_A_Text_0, MtMirrohExterior_Trainer_A_Text_1
# 24 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_A_Text_2
# 25 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_B::
# 29 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_B, MtMirrohExterior_Trainer_B_Text_0, MtMirrohExterior_Trainer_B_Text_1
# 30 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_B_Text_2
# 31 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_C::
# 35 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_C, MtMirrohExterior_Trainer_C_Text_0, MtMirrohExterior_Trainer_C_Text_1
# 36 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_B_Text_2
# 37 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Palpitoad::
# 42 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 43 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 44 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 45 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Palpitoad_Text_0
# 46 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_D::
# 51 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_D, MtMirrohExterior_Trainer_D_Text_0, MtMirrohExterior_Trainer_D_Text_1
# 52 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_D_Text_2
# 53 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_E::
# 57 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_E, MtMirrohExterior_Trainer_E_Text_0, MtMirrohExterior_Trainer_E_Text_1
# 58 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_E_Text_2
# 59 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_A::
# 79 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 80 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 81 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_A_Text_0
# 82 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_B::
# 86 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 87 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 88 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_B_Text_0
# 89 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_C::
# 93 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 94 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 95 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_C_Text_0
# 96 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_D::
# 102 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 103 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_0
# 104 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 105 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_NPC_D_Movement_0
# 106 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 107 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 108 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_NPC_D_Movement_1
# 109 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Conkeldurr::
# 113 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 114 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 115 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_CONKELDURR, CRY_MODE_NORMAL
# 116 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Conkeldurr_Text_0
# 117 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_E::
# 123 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 124 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 125 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_E_Text_0
# 126 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 127 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_NPC_D_Movement_0
# 128 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 129 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 130 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_NPC_D_Movement_1
# 131 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Toxicroak::
# 135 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 136 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 137 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_TOXICROAK, CRY_MODE_NORMAL
# 138 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Toxicroak_Text_0
# 139 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_F::
# 145 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 146 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 147 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_F_Text_0
# 148 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_G::
# 153 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 154 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_G_Text_0
# 155 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Medicham::
# 160 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 161 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Medicham_Text_0
# 162 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


# 105 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_NPC_D_Movement_0:
# 105 "data//maps/MtMirrohExterior/scripts.pory"
	emote_exclamation_mark
	step_end

# 108 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_NPC_D_Movement_1:
# 108 "data//maps/MtMirrohExterior/scripts.pory"
	face_right
	step_end

MtMirrohExterior_Trainer_A_Text_0:
# 23 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Once you jump over that ledge over\n"
	.string "there, you can't come back. So let me\l"
	.string "battle you before you go!$"

MtMirrohExterior_Trainer_A_Text_1:
# 23 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Okay, you can go!$"

MtMirrohExterior_Trainer_A_Text_2:
# 24 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'm training here so that I can safely\n"
	.string "go back to the {PKMN} Center if I need to.$"

MtMirrohExterior_Trainer_B_Text_0:
# 29 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I know what you're eyeing! That's why I\n"
	.string "planted myself here - hahaha!$"

MtMirrohExterior_Trainer_B_Text_1:
# 29 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Aw I lost!$"

MtMirrohExterior_Trainer_B_Text_2:
# 30 "data//maps/MtMirrohExterior/scripts.pory"
	.string "$"

MtMirrohExterior_Trainer_C_Text_0:
# 35 "data//maps/MtMirrohExterior/scripts.pory"
	.string "My PALPITOAD and I training to beat the\n"
	.string "WINTERLILY HOLLOW Gym. A battle will be\l"
	.string "better training than a jog though!$"

MtMirrohExterior_Trainer_C_Text_1:
# 35 "data//maps/MtMirrohExterior/scripts.pory"
	.string "It was good training!$"

MtMirrohExterior_Palpitoad_Text_0:
# 45 "data//maps/MtMirrohExterior/scripts.pory"
	.string "PALPITOAD: piii!!!!$"

MtMirrohExterior_Trainer_D_Text_0:
# 51 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Are you another of those weird Team\n"
	.string "Sombrero grunts? Stop harrassing\l"
	.string "innocent people!$"

MtMirrohExterior_Trainer_D_Text_1:
# 51 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I guess you're not one of them!$"

MtMirrohExterior_Trainer_D_Text_2:
# 52 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I found some Team Sombrero - or was it\n"
	.string "Somber? - grunts harrassing an old man.\l"
	.string "You can't be doing stuff like that! So I\l"
	.string "put an end to it. I wonder what they're\l"
	.string "upto...$"

MtMirrohExterior_Trainer_E_Text_0:
# 57 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'm from the FIGHTING DOJO! Guess you\n"
	.string "know what that means, right?$"

MtMirrohExterior_Trainer_E_Text_1:
# 57 "data//maps/MtMirrohExterior/scripts.pory"
	.string "You knew what that meant!$"

MtMirrohExterior_Trainer_E_Text_2:
# 58 "data//maps/MtMirrohExterior/scripts.pory"
	.string "The FIGHTING DOJO is the pinnacle for\n"
	.string "us FIGHTING type users! It's where you\l"
	.string "become the best of the best$"

MtMirrohExterior_NPC_A_Text_0:
# 81 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Be careful child! There are some nasty\n"
	.string "types around. They're wearing dark\l"
	.string "suits and harrassing everyone they\l"
	.string "see. They even threatened me - a senior\l"
	.string "citizen!$"

MtMirrohExterior_NPC_B_Text_0:
# 88 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Higher up, the weather becomes too\n"
	.string "harsh to climb, so to reach WINTERLILY\l"
	.string "HOLLOW, you have to cross the caves\l"
	.string "inside the mountain.$"

MtMirrohExterior_NPC_C_Text_0:
# 95 "data//maps/MtMirrohExterior/scripts.pory"
	.string "the VIVILLON care for the flowers here,\n"
	.string "which is why they grow even in such cold\l"
	.string "weather!$"

MtMirrohExterior_NPC_D_Text_0:
# 103 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Hang in there CONKELDURR!$"

MtMirrohExterior_NPC_D_Text_1:
# 106 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Don't disturb us - we're training!$"

MtMirrohExterior_Conkeldurr_Text_0:
# 116 "data//maps/MtMirrohExterior/scripts.pory"
	.string "CONKELDURR: durr!!!!\p"
	.string "The TOXICROAK has poisoned it, but it's\n"
	.string "still going strong!$"

MtMirrohExterior_NPC_E_Text_0:
# 125 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Finish this, TOXICROAK!$"

MtMirrohExterior_Toxicroak_Text_0:
# 138 "data//maps/MtMirrohExterior/scripts.pory"
	.string "TOXICROAK: croooaaakk!!!!\p"
	.string "It's hammering the CONKELDURR with\n"
	.string "Posion Jabs!$"

MtMirrohExterior_NPC_F_Text_0:
# 147 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I can't believe what's happening inside\n"
	.string "the FIGHTING DOJO! How could the\l"
	.string "master have lost her mind like this?$"

MtMirrohExterior_NPC_G_Text_0:
# 154 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her\n"
	.string "MEDICHAM...best not disturb her.$"

MtMirrohExterior_Medicham_Text_0:
# 161 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her trainer...best\n"
	.string "not disturb her.$"
