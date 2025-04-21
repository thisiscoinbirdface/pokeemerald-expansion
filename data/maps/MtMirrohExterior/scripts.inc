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
# 28 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_0
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
	msgbox MtMirrohExterior_BreechTrigger_Text_1
# 35 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 36 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 39 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement LOCALID_BREECH, MtMirrohExterior_BreechTrigger_Movement_2
# 40 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement LOCALID_CLEF, MtMirrohExterior_BreechTrigger_Movement_2
# 41 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtMirrohExterior_BreechTrigger_Movement_3
# 42 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 43 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 44 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_2
# 45 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 46 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 47 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement LOCALID_BREECH, MtMirrohExterior_BreechTrigger_Movement_2
# 48 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement LOCALID_CLEF, MtMirrohExterior_BreechTrigger_Movement_2
# 49 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 50 "data//maps/MtMirrohExterior/scripts.pory"
	delay 30
# 51 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_3
# 52 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 53 "data//maps/MtMirrohExterior/scripts.pory"
	delay 60
# 54 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_4
# 55 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 57 "data//maps/MtMirrohExterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data//maps/MtMirrohExterior/scripts.pory"
	removeobject LOCALID_BREECH
# 59 "data//maps/MtMirrohExterior/scripts.pory"
	removeobject LOCALID_CLEF
# 60 "data//maps/MtMirrohExterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data//maps/MtMirrohExterior/scripts.pory"
	setflag FLAG_MIRROH_EXTERIOR_BREECH
# 63 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end

MtMirrohExterior_BreechTrigger_2:
	end


MtMirrohExterior_Trainer_A::
# 70 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_A, MtMirrohExterior_Trainer_A_Text_0, MtMirrohExterior_Trainer_A_Text_1
# 71 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_A_Text_2
# 72 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_B::
# 76 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_B, MtMirrohExterior_Trainer_B_Text_0, MtMirrohExterior_Trainer_B_Text_1
# 77 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_B_Text_2
# 78 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_C::
# 82 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_C, MtMirrohExterior_Trainer_C_Text_0, MtMirrohExterior_Trainer_C_Text_1
# 83 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_C_Text_2
# 84 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_A::
# 117 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 118 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 119 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_A_Text_0
# 120 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_B::
# 124 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 125 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 126 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_B_Text_0
# 127 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_C::
# 131 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 132 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 133 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_C_Text_0
# 134 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_D::
# 140 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 141 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_0
# 142 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 143 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_NPC_D_Movement_0
# 144 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 145 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 146 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_BreechTrigger_Movement_3
# 147 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 148 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Conkeldurr::
# 152 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 153 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_CONKELDURR, CRY_MODE_NORMAL
# 154 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Conkeldurr_Text_0
# 155 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_E::
# 161 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 162 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 163 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_E_Text_0
# 164 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 165 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_NPC_D_Movement_0
# 166 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 167 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 168 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_BreechTrigger_Movement_3
# 169 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 170 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Toxicroak::
# 174 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 175 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_TOXICROAK, CRY_MODE_NORMAL
# 176 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Toxicroak_Text_0
# 177 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_F::
# 183 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 184 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 185 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_F_Text_0
# 186 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_G::
# 191 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 192 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_G_Text_0
# 193 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Medicham::
# 198 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 199 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Medicham_Text_0
# 200 "data//maps/MtMirrohExterior/scripts.pory"
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

# 39 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_BreechTrigger_Movement_2:
# 39 "data//maps/MtMirrohExterior/scripts.pory"
	face_left
# 39 "data//maps/MtMirrohExterior/scripts.pory"
	emote_exclamation_mark
	step_end

# 41 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_BreechTrigger_Movement_3:
# 41 "data//maps/MtMirrohExterior/scripts.pory"
	face_right
	step_end

# 143 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_NPC_D_Movement_0:
# 143 "data//maps/MtMirrohExterior/scripts.pory"
	emote_exclamation_mark
	step_end

MtMirrohExterior_BreechTrigger_Text_0:
# 28 "data//maps/MtMirrohExterior/scripts.pory"
	.string "BREECH: Clefaible, did you see the Team\n"
	.string "Somber grunts too?$"

MtMirrohExterior_BreechTrigger_Text_1:
# 34 "data//maps/MtMirrohExterior/scripts.pory"
	.string "CLEFABLE: clee!!!$"

MtMirrohExterior_BreechTrigger_Text_2:
# 44 "data//maps/MtMirrohExterior/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! Fancy\n"
	.string "seeing you here. How are you?\p"
	.string "...\p"
	.string "BREECH: So you're chasing Team Somber.\n"
	.string "I admire you, {PLAYER}. Clefairy and I\l"
	.string "just saw a couple of them enter Mt.\l"
	.string "Mirroh. They left this drill here and\l"
	.string "blocked the path with these boulders. I\l"
	.string "wonder what they're using all this\l"
	.string "equipment for?$"

MtMirrohExterior_BreechTrigger_Text_3:
# 51 "data//maps/MtMirrohExterior/scripts.pory"
	.string "BREECH: I see...so they must be using\n"
	.string "all this equipment to build and carry\l"
	.string "this Dreamalyser thing you're talking\l"
	.string "about. How scary!$"

MtMirrohExterior_BreechTrigger_Text_4:
# 54 "data//maps/MtMirrohExterior/scripts.pory"
	.string "BREECH: Clefable and I have become\n"
	.string "stronger now, but I really don't want to\l"
	.string "get involved in all these matters. We'll\l"
	.string "find some other way through the\l"
	.string "mountain. All the best, {PLAYER}!$"

MtMirrohExterior_Trainer_A_Text_0:
# 70 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Once you jump over that ledge over\n"
	.string "there, you can't come back. So let me\l"
	.string "battle you before you go!$"

MtMirrohExterior_Trainer_A_Text_1:
# 70 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Okay, you can go!$"

MtMirrohExterior_Trainer_A_Text_2:
# 71 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'm training here so that I can safely\n"
	.string "go back to the Pokémon Center if I need\l"
	.string "to.$"

MtMirrohExterior_Trainer_B_Text_0:
# 76 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I know what you're eyeing! That's why I\n"
	.string "planted myself here - hahaha!$"

MtMirrohExterior_Trainer_B_Text_1:
# 76 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Aw I lost!$"

MtMirrohExterior_Trainer_B_Text_2:
# 77 "data//maps/MtMirrohExterior/scripts.pory"
	.string "$"

MtMirrohExterior_Trainer_C_Text_0:
# 82 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'd rather be skiing on these slopes but\n"
	.string "I don't mind a battle!$"

MtMirrohExterior_Trainer_C_Text_1:
# 82 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Yup - I prefer skiing!$"

MtMirrohExterior_Trainer_C_Text_2:
# 83 "data//maps/MtMirrohExterior/scripts.pory"
	.string "You won't get slopes like these in all of\n"
	.string "Cormoria!$"

MtMirrohExterior_NPC_A_Text_0:
# 119 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Be careful! There are some nasty types\n"
	.string "around. They're wearing dark suits and\l"
	.string "harrassing everyone they see. They\l"
	.string "even threatened me - a senior citizen!$"

MtMirrohExterior_NPC_B_Text_0:
# 126 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Higher up, the weather becomes too\n"
	.string "harsh to climb, so to reach Winterlily\l"
	.string "Hollow, you have to cross the caverns\l"
	.string "inside the mountain.$"

MtMirrohExterior_NPC_C_Text_0:
# 133 "data//maps/MtMirrohExterior/scripts.pory"
	.string "The Vivillon here take good care of the\n"
	.string "flowers, which is why they grow even in\l"
	.string "such cold weather!$"

MtMirrohExterior_NPC_D_Text_0:
# 141 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Hang in there Conkeldurr!$"

MtMirrohExterior_NPC_D_Text_1:
# 144 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Don't disturb us - we're training!$"

MtMirrohExterior_Conkeldurr_Text_0:
# 154 "data//maps/MtMirrohExterior/scripts.pory"
	.string "CONKELDURR: durr!!!!\p"
	.string "The Toxicroak has poisoned it, but it's\n"
	.string "still going strong!$"

MtMirrohExterior_NPC_E_Text_0:
# 163 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Finish this, Toxicroak!$"

MtMirrohExterior_Toxicroak_Text_0:
# 176 "data//maps/MtMirrohExterior/scripts.pory"
	.string "TOXICROAK: croooaaakk!!!!\p"
	.string "It's hammering the Conkeldurr with\n"
	.string "Posion Jabs!$"

MtMirrohExterior_NPC_F_Text_0:
# 185 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I can't believe what's happening inside\n"
	.string "the Fighting Dojo! How could the master\l"
	.string "have lost her mind like this?$"

MtMirrohExterior_NPC_G_Text_0:
# 192 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her\n"
	.string "Medicham...best not disturb her.$"

MtMirrohExterior_Medicham_Text_0:
# 199 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her trainer...best\n"
	.string "not disturb her.$"
