MtMirrohExterior_MapScripts::
	.byte 0


MtMirrohExterior_BreechTrigger::
# 17 "data//maps/MtMirrohExterior/scripts.pory"
	goto_if_set FLAG_MIRROH_EXTERIOR_BREECH, MtMirrohExterior_BreechTrigger_2
# 18 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 20 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtMirrohExterior_BreechTrigger_Movement_0
# 21 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 23 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_0
# 24 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 25 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 9, MtMirrohExterior_BreechTrigger_Movement_1
# 26 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 27 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 28 "data//maps/MtMirrohExterior/scripts.pory"
	delay 24
# 29 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_1
# 30 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 31 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 34 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 8, MtMirrohExterior_BreechTrigger_Movement_2
# 35 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 9, MtMirrohExterior_BreechTrigger_Movement_2
# 36 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtMirrohExterior_BreechTrigger_Movement_3
# 37 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 38 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 39 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_2
# 40 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 41 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 42 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 8, MtMirrohExterior_BreechTrigger_Movement_2
# 43 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 9, MtMirrohExterior_BreechTrigger_Movement_2
# 44 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 45 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 46 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_3
# 47 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 48 "data//maps/MtMirrohExterior/scripts.pory"
	delay 60
# 49 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_4
# 50 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 52 "data//maps/MtMirrohExterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data//maps/MtMirrohExterior/scripts.pory"
	removeobject 8
# 54 "data//maps/MtMirrohExterior/scripts.pory"
	removeobject 9
# 55 "data//maps/MtMirrohExterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 57 "data//maps/MtMirrohExterior/scripts.pory"
	setflag FLAG_MIRROH_EXTERIOR_BREECH
# 58 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end

MtMirrohExterior_BreechTrigger_2:
	end


MtMirrohExterior_Trainer_A::
# 65 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_A, MtMirrohExterior_Trainer_A_Text_0, MtMirrohExterior_Trainer_A_Text_1
# 66 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_A_Text_2
# 67 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_B::
# 71 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_B, MtMirrohExterior_Trainer_B_Text_0, MtMirrohExterior_Trainer_B_Text_1
# 72 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_B_Text_2
# 73 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_C::
# 77 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_C, MtMirrohExterior_Trainer_C_Text_0, MtMirrohExterior_Trainer_C_Text_1
# 78 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_B_Text_2
# 79 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Palpitoad::
# 84 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 85 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 86 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 87 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Palpitoad_Text_0
# 88 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_D::
# 93 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_D, MtMirrohExterior_Trainer_D_Text_0, MtMirrohExterior_Trainer_D_Text_1
# 94 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_D_Text_2
# 95 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_E::
# 99 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_E, MtMirrohExterior_Trainer_E_Text_0, MtMirrohExterior_Trainer_E_Text_1
# 100 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_E_Text_2
# 101 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_A::
# 121 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 122 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 123 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_A_Text_0
# 124 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_B::
# 128 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 129 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 130 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_B_Text_0
# 131 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_C::
# 135 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 136 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 137 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_C_Text_0
# 138 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_D::
# 144 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 145 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_0
# 146 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 147 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_NPC_D_Movement_0
# 148 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 149 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 150 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_BreechTrigger_Movement_3
# 151 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Conkeldurr::
# 155 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 156 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 157 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_CONKELDURR, CRY_MODE_NORMAL
# 158 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Conkeldurr_Text_0
# 159 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_E::
# 165 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 166 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 167 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_E_Text_0
# 168 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 169 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_NPC_D_Movement_0
# 170 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 171 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 172 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_BreechTrigger_Movement_3
# 173 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Toxicroak::
# 177 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 178 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 179 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_TOXICROAK, CRY_MODE_NORMAL
# 180 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Toxicroak_Text_0
# 181 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_F::
# 187 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 188 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 189 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_F_Text_0
# 190 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_G::
# 195 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 196 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_G_Text_0
# 197 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Medicham::
# 202 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 203 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Medicham_Text_0
# 204 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


# 20 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_BreechTrigger_Movement_0:
# 20 "data//maps/MtMirrohExterior/scripts.pory"
	walk_up
	step_end

# 25 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_BreechTrigger_Movement_1:
# 25 "data//maps/MtMirrohExterior/scripts.pory"
	jump_in_place_up
	step_end

# 34 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_BreechTrigger_Movement_2:
# 34 "data//maps/MtMirrohExterior/scripts.pory"
	face_left
# 34 "data//maps/MtMirrohExterior/scripts.pory"
	emote_exclamation_mark
	step_end

# 36 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_BreechTrigger_Movement_3:
# 36 "data//maps/MtMirrohExterior/scripts.pory"
	face_right
	step_end

# 147 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_NPC_D_Movement_0:
# 147 "data//maps/MtMirrohExterior/scripts.pory"
	emote_exclamation_mark
	step_end

MtMirrohExterior_BreechTrigger_Text_0:
# 23 "data//maps/MtMirrohExterior/scripts.pory"
	.string "BREECH: CLEFABLE, did you see the Team\n"
	.string "Somber grunts too?$"

MtMirrohExterior_BreechTrigger_Text_1:
# 29 "data//maps/MtMirrohExterior/scripts.pory"
	.string "CLEFABLE: clee!!!$"

MtMirrohExterior_BreechTrigger_Text_2:
# 39 "data//maps/MtMirrohExterior/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! Fancy\n"
	.string "seeing you here. How are you?\p"
	.string "...\p"
	.string "BREECH: So you're chasing Team Somber.\n"
	.string "I admire you, {PLAYER}. CLEFAIRY and\l"
	.string "I just saw a couple of them enter Mt.\l"
	.string "Mirroh. They left this drill here. I\l"
	.string "wonder what they're using all this\l"
	.string "equipment for?$"

MtMirrohExterior_BreechTrigger_Text_3:
# 46 "data//maps/MtMirrohExterior/scripts.pory"
	.string "BREECH: I see...so they must be using\n"
	.string "all this equipment to build and carry\l"
	.string "this Dreamalyser thing you're talking\l"
	.string "about. How scary!$"

MtMirrohExterior_BreechTrigger_Text_4:
# 49 "data//maps/MtMirrohExterior/scripts.pory"
	.string "BREECH: CLEFABLE and I have become\n"
	.string "stronger now, but I really don't want to\l"
	.string "get involved in all these matters. We'll\l"
	.string "find some other way through the\l"
	.string "mountain. All the best, {PLAYER}!$"

MtMirrohExterior_Trainer_A_Text_0:
# 65 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Once you jump over that ledge over\n"
	.string "there, you can't come back. So let me\l"
	.string "battle you before you go!$"

MtMirrohExterior_Trainer_A_Text_1:
# 65 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Okay, you can go!$"

MtMirrohExterior_Trainer_A_Text_2:
# 66 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'm training here so that I can safely\n"
	.string "go back to the Pokémon Center if I need\l"
	.string "to.$"

MtMirrohExterior_Trainer_B_Text_0:
# 71 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I know what you're eyeing! That's why I\n"
	.string "planted myself here - hahaha!$"

MtMirrohExterior_Trainer_B_Text_1:
# 71 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Aw I lost!$"

MtMirrohExterior_Trainer_B_Text_2:
# 72 "data//maps/MtMirrohExterior/scripts.pory"
	.string "$"

MtMirrohExterior_Trainer_C_Text_0:
# 77 "data//maps/MtMirrohExterior/scripts.pory"
	.string "My PALPITOAD and I training to beat the\n"
	.string "Winterlily Hollow Gym. A battle will be\l"
	.string "better training than a jog though!$"

MtMirrohExterior_Trainer_C_Text_1:
# 77 "data//maps/MtMirrohExterior/scripts.pory"
	.string "It was good training!$"

MtMirrohExterior_Palpitoad_Text_0:
# 87 "data//maps/MtMirrohExterior/scripts.pory"
	.string "PALPITOAD: piii!!!!$"

MtMirrohExterior_Trainer_D_Text_0:
# 93 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Are you another of those weird Team\n"
	.string "Sombrero grunts? Stop harrassing\l"
	.string "innocent people!$"

MtMirrohExterior_Trainer_D_Text_1:
# 93 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I guess you're not one of them!$"

MtMirrohExterior_Trainer_D_Text_2:
# 94 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I found some Team Sombrero - or was it\n"
	.string "Somber? - grunts harrassing an old man.\l"
	.string "You can't be doing stuff like that! So I\l"
	.string "put an end to it. I wonder what they're\l"
	.string "upto...$"

MtMirrohExterior_Trainer_E_Text_0:
# 99 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'm from the FIGHTING DOJO! Guess you\n"
	.string "know what that means, right?$"

MtMirrohExterior_Trainer_E_Text_1:
# 99 "data//maps/MtMirrohExterior/scripts.pory"
	.string "You knew what that meant!$"

MtMirrohExterior_Trainer_E_Text_2:
# 100 "data//maps/MtMirrohExterior/scripts.pory"
	.string "The FIGHTING DOJO is the pinnacle for\n"
	.string "us FIGHTING type users! It's where you\l"
	.string "become the best of the best$"

MtMirrohExterior_NPC_A_Text_0:
# 123 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Be careful child! There are some nasty\n"
	.string "types around. They're wearing dark\l"
	.string "suits and harrassing everyone they\l"
	.string "see. They even threatened me - a senior\l"
	.string "citizen!$"

MtMirrohExterior_NPC_B_Text_0:
# 130 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Higher up, the weather becomes too\n"
	.string "harsh to climb, so to reach Winterlily\l"
	.string "Hollow, you have to cross the caves\l"
	.string "inside the mountain.$"

MtMirrohExterior_NPC_C_Text_0:
# 137 "data//maps/MtMirrohExterior/scripts.pory"
	.string "the VIVILLON care for the flowers here,\n"
	.string "which is why they grow even in such cold\l"
	.string "weather!$"

MtMirrohExterior_NPC_D_Text_0:
# 145 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Hang in there CONKELDURR!$"

MtMirrohExterior_NPC_D_Text_1:
# 148 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Don't disturb us - we're training!$"

MtMirrohExterior_Conkeldurr_Text_0:
# 158 "data//maps/MtMirrohExterior/scripts.pory"
	.string "CONKELDURR: durr!!!!\p"
	.string "The TOXICROAK has poisoned it, but it's\n"
	.string "still going strong!$"

MtMirrohExterior_NPC_E_Text_0:
# 167 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Finish this, TOXICROAK!$"

MtMirrohExterior_Toxicroak_Text_0:
# 180 "data//maps/MtMirrohExterior/scripts.pory"
	.string "TOXICROAK: croooaaakk!!!!\p"
	.string "It's hammering the CONKELDURR with\n"
	.string "Posion Jabs!$"

MtMirrohExterior_NPC_F_Text_0:
# 189 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I can't believe what's happening inside\n"
	.string "the FIGHTING DOJO! How could the\l"
	.string "master have lost her mind like this?$"

MtMirrohExterior_NPC_G_Text_0:
# 196 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her\n"
	.string "MEDICHAM...best not disturb her.$"

MtMirrohExterior_Medicham_Text_0:
# 203 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her trainer...best\n"
	.string "not disturb her.$"
