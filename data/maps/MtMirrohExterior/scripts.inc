# 1 "data//maps/MtMirrohExterior/scripts.pory"

# 2 "data//maps/MtMirrohExterior/scripts.pory"
    .set LOCALID_BREECH, 5
# 3 "data//maps/MtMirrohExterior/scripts.pory"
    .set LOCALID_CLEF, 6

MtMirrohExterior_MapScripts::
	.byte 0


MtMirrohExterior_BreechTrigger::
# 22 "data//maps/MtMirrohExterior/scripts.pory"
	goto_if_set FLAG_MIRROH_EXTERIOR_BREECH, MtMirrohExterior_BreechTrigger_2
# 23 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 25 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtMirrohExterior_BreechTrigger_Movement_0
# 26 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 27 "data//maps/MtMirrohExterior/scripts.pory"
	speakername MtMirrohExterior_BreechTrigger_Text_0
# 28 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_1
# 29 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 30 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement LOCALID_CLEF, MtMirrohExterior_BreechTrigger_Movement_1
# 31 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 32 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 33 "data//maps/MtMirrohExterior/scripts.pory"
	delay 24
# 34 "data//maps/MtMirrohExterior/scripts.pory"
	speakername MtMirrohExterior_BreechTrigger_Text_2
# 35 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_3
# 36 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 37 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 40 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement LOCALID_BREECH, MtMirrohExterior_BreechTrigger_Movement_2
# 41 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement LOCALID_CLEF, MtMirrohExterior_BreechTrigger_Movement_2
# 42 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtMirrohExterior_BreechTrigger_Movement_3
# 43 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 44 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 45 "data//maps/MtMirrohExterior/scripts.pory"
	speakername MtMirrohExterior_BreechTrigger_Text_0
# 46 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_4
# 47 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 48 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 49 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement LOCALID_BREECH, MtMirrohExterior_BreechTrigger_Movement_2
# 50 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement LOCALID_CLEF, MtMirrohExterior_BreechTrigger_Movement_2
# 51 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 52 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 53 "data//maps/MtMirrohExterior/scripts.pory"
	speakername MtMirrohExterior_BreechTrigger_Text_0
# 54 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_5
# 55 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 56 "data//maps/MtMirrohExterior/scripts.pory"
	delay 60
# 57 "data//maps/MtMirrohExterior/scripts.pory"
	speakername MtMirrohExterior_BreechTrigger_Text_0
# 58 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_6
# 59 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 60 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 61 "data//maps/MtMirrohExterior/scripts.pory"
	speakername MtMirrohExterior_BreechTrigger_Text_2
# 62 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_3
# 63 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 64 "data//maps/MtMirrohExterior/scripts.pory"
	delay 24
# 66 "data//maps/MtMirrohExterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 67 "data//maps/MtMirrohExterior/scripts.pory"
	removeobject LOCALID_BREECH
# 68 "data//maps/MtMirrohExterior/scripts.pory"
	removeobject LOCALID_CLEF
# 69 "data//maps/MtMirrohExterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 71 "data//maps/MtMirrohExterior/scripts.pory"
	setflag FLAG_MIRROH_EXTERIOR_BREECH
# 72 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end

MtMirrohExterior_BreechTrigger_2:
	end


MtMirrohExterior_Trainer_A::
# 79 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_A, MtMirrohExterior_Trainer_A_Text_0, MtMirrohExterior_Trainer_A_Text_1
# 80 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_A_Text_2
# 81 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_B::
# 85 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_B, MtMirrohExterior_Trainer_B_Text_0, MtMirrohExterior_Trainer_B_Text_1
# 86 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_B_Text_2
# 87 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_C::
# 91 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_C, MtMirrohExterior_Trainer_C_Text_0, MtMirrohExterior_Trainer_C_Text_1
# 92 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_C_Text_2
# 93 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_A::
# 126 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 127 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 128 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_A_Text_0
# 129 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_B::
# 133 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 134 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 135 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_B_Text_0
# 136 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_C::
# 140 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 141 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 142 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_C_Text_0
# 143 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_D::
# 149 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 150 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_0
# 151 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 152 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_NPC_D_Movement_0
# 153 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 154 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 155 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_BreechTrigger_Movement_3
# 156 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 157 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Conkeldurr::
# 161 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 162 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_CONKELDURR, CRY_MODE_NORMAL
# 163 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Conkeldurr_Text_0
# 164 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_E::
# 170 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 171 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 172 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_E_Text_0
# 173 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 174 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_NPC_D_Movement_0
# 175 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 176 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 177 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_BreechTrigger_Movement_3
# 178 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 179 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Toxicroak::
# 183 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 184 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_TOXICROAK, CRY_MODE_NORMAL
# 185 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Toxicroak_Text_0
# 186 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_F::
# 192 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 193 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 194 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_F_Text_0
# 195 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_G::
# 200 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 201 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_G_Text_0
# 202 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Medicham::
# 207 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 208 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Medicham_Text_0
# 209 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


# 25 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_BreechTrigger_Movement_0:
# 25 "data//maps/MtMirrohExterior/scripts.pory"
	walk_up
	step_end

# 30 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_BreechTrigger_Movement_1:
# 30 "data//maps/MtMirrohExterior/scripts.pory"
	jump_in_place_up
	step_end

# 40 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_BreechTrigger_Movement_2:
# 40 "data//maps/MtMirrohExterior/scripts.pory"
	face_left
# 40 "data//maps/MtMirrohExterior/scripts.pory"
	emote_exclamation_mark
	step_end

# 42 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_BreechTrigger_Movement_3:
# 42 "data//maps/MtMirrohExterior/scripts.pory"
	face_right
	step_end

# 152 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_NPC_D_Movement_0:
# 152 "data//maps/MtMirrohExterior/scripts.pory"
	emote_exclamation_mark
	step_end

MtMirrohExterior_BreechTrigger_Text_0:
# 27 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Breech$"

MtMirrohExterior_BreechTrigger_Text_1:
# 28 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Clefable, did you see the Team Somber\n"
	.string "grunts too?$"

MtMirrohExterior_BreechTrigger_Text_2:
# 34 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Clefable$"

MtMirrohExterior_BreechTrigger_Text_3:
# 35 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Clee!!!$"

MtMirrohExterior_BreechTrigger_Text_4:
# 46 "data//maps/MtMirrohExterior/scripts.pory"
	.string "{PLAYER}! It's you! Fancy seeing you\n"
	.string "here. How are you?\p"
	.string "...\p"
	.string "So you're chasing Team Somber. I admire\n"
	.string "you, {PLAYER}. Clefairy and I just saw\l"
	.string "a couple of them enter Mt. Mirroh. They\l"
	.string "left this drill here and blocked the\l"
	.string "path with these boulders. I wonder what\l"
	.string "they're using all this equipment for?$"

MtMirrohExterior_BreechTrigger_Text_5:
# 54 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I see...so they must be using all this\n"
	.string "equipment to build and carry this\l"
	.string "Dreamalyser thing you're talking about.\l"
	.string "How scary!$"

MtMirrohExterior_BreechTrigger_Text_6:
# 58 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Clefable and I have become stronger\n"
	.string "now, but I really don't want to get\l"
	.string "involved in all these matters. We'll find\l"
	.string "some other way through the mountain.\l"
	.string "All the best, {PLAYER}!$"

MtMirrohExterior_Trainer_A_Text_0:
# 79 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Once you jump over that ledge over\n"
	.string "there, you can't come back. So let me\l"
	.string "battle you before you go!$"

MtMirrohExterior_Trainer_A_Text_1:
# 79 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Okay, you can go!$"

MtMirrohExterior_Trainer_A_Text_2:
# 80 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'm training here so that I can safely\n"
	.string "go back to the Pokémon Center if I need\l"
	.string "to.$"

MtMirrohExterior_Trainer_B_Text_0:
# 85 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I know what you're eyeing! That's why I\n"
	.string "planted myself here - hahaha!$"

MtMirrohExterior_Trainer_B_Text_1:
# 85 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Aw I lost!$"

MtMirrohExterior_Trainer_B_Text_2:
# 86 "data//maps/MtMirrohExterior/scripts.pory"
	.string "$"

MtMirrohExterior_Trainer_C_Text_0:
# 91 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'd rather be skiing on these slopes but\n"
	.string "I don't mind a battle!$"

MtMirrohExterior_Trainer_C_Text_1:
# 91 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Yup - I prefer skiing!$"

MtMirrohExterior_Trainer_C_Text_2:
# 92 "data//maps/MtMirrohExterior/scripts.pory"
	.string "You won't get slopes like these in all of\n"
	.string "Cormoria!$"

MtMirrohExterior_NPC_A_Text_0:
# 128 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Be careful! There are some nasty types\n"
	.string "around. They're wearing dark suits and\l"
	.string "harrassing everyone they see. They\l"
	.string "even threatened me - a senior citizen!$"

MtMirrohExterior_NPC_B_Text_0:
# 135 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Higher up, the weather becomes too\n"
	.string "harsh to climb, so to reach Winterlily\l"
	.string "Hollow, you have to cross the caverns\l"
	.string "inside the mountain.$"

MtMirrohExterior_NPC_C_Text_0:
# 142 "data//maps/MtMirrohExterior/scripts.pory"
	.string "The Vivillon here take good care of the\n"
	.string "flowers, which is why they grow even in\l"
	.string "such cold weather!$"

MtMirrohExterior_NPC_D_Text_0:
# 150 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Hang in there Conkeldurr!$"

MtMirrohExterior_NPC_D_Text_1:
# 153 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Don't disturb us - we're training!$"

MtMirrohExterior_Conkeldurr_Text_0:
# 163 "data//maps/MtMirrohExterior/scripts.pory"
	.string "CONKELDURR: durr!!!!\p"
	.string "The Toxicroak has poisoned it, but it's\n"
	.string "still going strong!$"

MtMirrohExterior_NPC_E_Text_0:
# 172 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Finish this, Toxicroak!$"

MtMirrohExterior_Toxicroak_Text_0:
# 185 "data//maps/MtMirrohExterior/scripts.pory"
	.string "TOXICROAK: croooaaakk!!!!\p"
	.string "It's hammering the Conkeldurr with\n"
	.string "Posion Jabs!$"

MtMirrohExterior_NPC_F_Text_0:
# 194 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I can't believe what's happening inside\n"
	.string "the Fighting Dojo! How could the master\l"
	.string "have lost her mind like this?$"

MtMirrohExterior_NPC_G_Text_0:
# 201 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her\n"
	.string "Medicham...best not disturb her.$"

MtMirrohExterior_Medicham_Text_0:
# 208 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her trainer...best\n"
	.string "not disturb her.$"
