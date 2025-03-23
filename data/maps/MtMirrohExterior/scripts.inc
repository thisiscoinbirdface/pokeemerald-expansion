MtMirrohExterior_MapScripts::
	.byte 0


MtMirrohExterior_Trainer_A::
# 19 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_A, MtMirrohExterior_Trainer_A_Text_0, MtMirrohExterior_Trainer_A_Text_1
# 20 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_A_Text_2
# 21 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_B::
# 25 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_B, MtMirrohExterior_Trainer_B_Text_0, MtMirrohExterior_Trainer_B_Text_1
# 26 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_B_Text_2
# 27 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_C::
# 31 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_C, MtMirrohExterior_Trainer_C_Text_0, MtMirrohExterior_Trainer_C_Text_1
# 32 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_B_Text_2
# 33 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Palpitoad::
# 38 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 39 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 40 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 41 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Palpitoad_Text_0
# 42 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_D::
# 47 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_D, MtMirrohExterior_Trainer_D_Text_0, MtMirrohExterior_Trainer_D_Text_1
# 48 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_D_Text_2
# 49 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_E::
# 53 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_E, MtMirrohExterior_Trainer_E_Text_0, MtMirrohExterior_Trainer_E_Text_1
# 54 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_E_Text_2
# 55 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_A::
# 75 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 76 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 77 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_A_Text_0
# 78 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_B::
# 82 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 83 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 84 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_B_Text_0
# 85 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_C::
# 89 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 90 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 91 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_C_Text_0
# 92 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_D::
# 98 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 99 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_0
# 100 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 101 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_NPC_D_Movement_0
# 102 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 103 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 104 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_NPC_D_Movement_1
# 105 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Conkeldurr::
# 109 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 110 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 111 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_CONKELDURR, CRY_MODE_NORMAL
# 112 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Conkeldurr_Text_0
# 113 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_E::
# 119 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 120 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 121 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_E_Text_0
# 122 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 123 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_NPC_D_Movement_0
# 124 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 125 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 126 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_NPC_D_Movement_1
# 127 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Toxicroak::
# 131 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 132 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 133 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_TOXICROAK, CRY_MODE_NORMAL
# 134 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Toxicroak_Text_0
# 135 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_F::
# 141 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 142 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 143 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_F_Text_0
# 144 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_G::
# 148 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 149 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_G_Text_0
# 150 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Medicham::
# 155 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 156 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Medicham_Text_0
# 157 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


# 101 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_NPC_D_Movement_0:
# 101 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
	step_end

# 104 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_NPC_D_Movement_1:
# 104 "data//maps/MtMirrohExterior/scripts.pory"
	face_right
	step_end

MtMirrohExterior_Trainer_A_Text_0:
# 19 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Once you jump over that ledge over\n"
	.string "there, you can't come back. So let me\l"
	.string "battle you before you go!$"

MtMirrohExterior_Trainer_A_Text_1:
# 19 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Okay, you can go!$"

MtMirrohExterior_Trainer_A_Text_2:
# 20 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'm training here so that I cna safely\n"
	.string "go back to the {PKMN} Center if I need to.$"

MtMirrohExterior_Trainer_B_Text_0:
# 25 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I know what you're eyeing! That's why I\n"
	.string "planted myself here.$"

MtMirrohExterior_Trainer_B_Text_1:
# 25 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Aw!$"

MtMirrohExterior_Trainer_B_Text_2:
# 26 "data//maps/MtMirrohExterior/scripts.pory"
	.string "$"

MtMirrohExterior_Trainer_C_Text_0:
# 31 "data//maps/MtMirrohExterior/scripts.pory"
	.string "My PALPITOAD and I training to beat the\n"
	.string "WINTERLILY HOLLOW Gym. A battle will be\l"
	.string "better training than a jog though!$"

MtMirrohExterior_Trainer_C_Text_1:
# 31 "data//maps/MtMirrohExterior/scripts.pory"
	.string "It was good training!$"

MtMirrohExterior_Palpitoad_Text_0:
# 41 "data//maps/MtMirrohExterior/scripts.pory"
	.string "PALPITOAD: piii!!!!$"

MtMirrohExterior_Trainer_D_Text_0:
# 47 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Are you another of those weird Team\n"
	.string "Sombrero grunts? Stop harrassing\l"
	.string "innocent people!$"

MtMirrohExterior_Trainer_D_Text_1:
# 47 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I guess you're not one of them!$"

MtMirrohExterior_Trainer_D_Text_2:
# 48 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I found some Team Sombrero - or was it\n"
	.string "Somber? - grunts harrassing an old man.\l"
	.string "You can't be doing stuff like that! So I\l"
	.string "put an end to it. I wonder what they're\l"
	.string "upto...$"

MtMirrohExterior_Trainer_E_Text_0:
# 53 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'm from the FIGHTING DOJO! Guess you\n"
	.string "know what that means, right?$"

MtMirrohExterior_Trainer_E_Text_1:
# 53 "data//maps/MtMirrohExterior/scripts.pory"
	.string "You knew what that meant!$"

MtMirrohExterior_Trainer_E_Text_2:
# 54 "data//maps/MtMirrohExterior/scripts.pory"
	.string "The FIGHTING DOJO is the pinnacle for\n"
	.string "us FIGHTING type users! It's where you\l"
	.string "become the best of the best$"

MtMirrohExterior_NPC_A_Text_0:
# 77 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Be careful child! There are some nasty\n"
	.string "types around. They're wearing dark\l"
	.string "suits and harrassing everyone they\l"
	.string "see. They even threatened me - a senior\l"
	.string "citizen!$"

MtMirrohExterior_NPC_B_Text_0:
# 84 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Higher up, the weather becomes too\n"
	.string "harsh to climb, so to reach WINTERLILY\l"
	.string "HOLLOW, you have to cross the caves\l"
	.string "inside the mountain.$"

MtMirrohExterior_NPC_C_Text_0:
# 91 "data//maps/MtMirrohExterior/scripts.pory"
	.string "the VIVILLON care for the flowers here,\n"
	.string "which is why they grow even in such cold\l"
	.string "weather!$"

MtMirrohExterior_NPC_D_Text_0:
# 99 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Hang in there CONKELDURR!$"

MtMirrohExterior_NPC_D_Text_1:
# 102 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Don't disturb us - we're training!$"

MtMirrohExterior_Conkeldurr_Text_0:
# 112 "data//maps/MtMirrohExterior/scripts.pory"
	.string "CONKELDURR: durr!!!!\p"
	.string "The TOXICROAK has poisoned it, but it's\n"
	.string "still going strong!$"

MtMirrohExterior_NPC_E_Text_0:
# 121 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Finish this, TOXICROAK!$"

MtMirrohExterior_Toxicroak_Text_0:
# 134 "data//maps/MtMirrohExterior/scripts.pory"
	.string "TOXICROAK: croooaaakk!!!!\p"
	.string "It's hammering the CONKELDURR with\n"
	.string "Posion Jabs!$"

MtMirrohExterior_NPC_F_Text_0:
# 143 "data//maps/MtMirrohExterior/scripts.pory"
	.string "A fellow fighter! Welcome to the -\p"
	.string "Oh, you're just a regular trainer.\n"
	.string "Welcome to the FIGHTING DOJO anyway!\l"
	.string "The master is conducting a training\l"
	.string "session inside.$"

MtMirrohExterior_NPC_G_Text_0:
# 149 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her\n"
	.string "MEDICHAM...best not disturb her.$"

MtMirrohExterior_Medicham_Text_0:
# 156 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her trainer...best\n"
	.string "not disturb her.$"
