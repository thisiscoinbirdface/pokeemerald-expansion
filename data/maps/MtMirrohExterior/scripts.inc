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
	goto MtMirrohExterior_Breech_Reward
	return

MtMirrohExterior_BreechTrigger_2:
	end


MtMirrohExterior_Breech_Reward::
# 63 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Breech_Reward_Text_0, MSGBOX_NPC
# 64 "data//maps/MtMirrohExterior/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, MtMirrohExterior_Breech_Reward_Text_1, MtMirrohExterior_Breech_Reward_Text_2
# 65 "data//maps/MtMirrohExterior/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtMirrohExterior_Breech_Reward_1
# 68 "data//maps/MtMirrohExterior/scripts.pory"
	goto MtMirrohExterior_Breech_Reward2
	return

MtMirrohExterior_Breech_Reward_1:
# 66 "data//maps/MtMirrohExterior/scripts.pory"
	goto MtMirrohExterior_Breech_Reward1
	return


MtMirrohExterior_Breech_Reward1::
# 73 "data//maps/MtMirrohExterior/scripts.pory"
	setvar VAR_0x8006, ITEM_ASSAULT_VEST
# 74 "data//maps/MtMirrohExterior/scripts.pory"
	showitemdescription
# 75 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Breech_Reward1_Text_0, MSGBOX_YESNO
# 76 "data//maps/MtMirrohExterior/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtMirrohExterior_Breech_Reward1_1
# 81 "data//maps/MtMirrohExterior/scripts.pory"
	hideitemdescription
# 82 "data//maps/MtMirrohExterior/scripts.pory"
	goto MtMirrohExterior_Breech_Reward
	return

MtMirrohExterior_Breech_Reward1_1:
# 77 "data//maps/MtMirrohExterior/scripts.pory"
	hideitemdescription
# 78 "data//maps/MtMirrohExterior/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 79 "data//maps/MtMirrohExterior/scripts.pory"
	goto MtMirrohExterior_Breech_Reward_End
	return


MtMirrohExterior_Breech_Reward2::
# 87 "data//maps/MtMirrohExterior/scripts.pory"
	setvar VAR_0x8006, ITEM_ROCKY_HELMET
# 88 "data//maps/MtMirrohExterior/scripts.pory"
	showitemdescription
# 89 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Breech_Reward1_Text_0, MSGBOX_YESNO
# 90 "data//maps/MtMirrohExterior/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtMirrohExterior_Breech_Reward2_1
# 95 "data//maps/MtMirrohExterior/scripts.pory"
	hideitemdescription
# 96 "data//maps/MtMirrohExterior/scripts.pory"
	goto MtMirrohExterior_Breech_Reward
	return

MtMirrohExterior_Breech_Reward2_1:
# 91 "data//maps/MtMirrohExterior/scripts.pory"
	hideitemdescription
# 92 "data//maps/MtMirrohExterior/scripts.pory"
	giveitem ITEM_ROCKY_HELMET
# 93 "data//maps/MtMirrohExterior/scripts.pory"
	goto MtMirrohExterior_Breech_Reward_End
	return


MtMirrohExterior_Breech_Reward_End::
# 101 "data//maps/MtMirrohExterior/scripts.pory"
	speakername MtMirrohExterior_BreechTrigger_Text_0
# 102 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Breech_Reward_End_Text_0
# 103 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 104 "data//maps/MtMirrohExterior/scripts.pory"
	delay 16
# 105 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 106 "data//maps/MtMirrohExterior/scripts.pory"
	delay 8
# 107 "data//maps/MtMirrohExterior/scripts.pory"
	speakername MtMirrohExterior_BreechTrigger_Text_2
# 108 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_BreechTrigger_Text_3
# 109 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 110 "data//maps/MtMirrohExterior/scripts.pory"
	delay 24
# 112 "data//maps/MtMirrohExterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 113 "data//maps/MtMirrohExterior/scripts.pory"
	removeobject LOCALID_BREECH
# 114 "data//maps/MtMirrohExterior/scripts.pory"
	removeobject LOCALID_CLEF
# 115 "data//maps/MtMirrohExterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 117 "data//maps/MtMirrohExterior/scripts.pory"
	setflag FLAG_MIRROH_EXTERIOR_BREECH
# 118 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_A::
# 126 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_A, MtMirrohExterior_Trainer_A_Text_0, MtMirrohExterior_Trainer_A_Text_1
# 127 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_A_Text_2
# 128 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_B::
# 132 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_B, MtMirrohExterior_Trainer_B_Text_0, MtMirrohExterior_Trainer_B_Text_1
# 133 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_B_Text_2
# 134 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Trainer_C::
# 138 "data//maps/MtMirrohExterior/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_C, MtMirrohExterior_Trainer_C_Text_0, MtMirrohExterior_Trainer_C_Text_1
# 139 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Trainer_C_Text_2
# 140 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_A::
# 173 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 174 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 175 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_A_Text_0
# 176 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_B::
# 180 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 181 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 182 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_B_Text_0
# 183 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_C::
# 187 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 188 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 189 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_C_Text_0
# 190 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_D::
# 196 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 197 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_0
# 198 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 199 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_NPC_D_Movement_0
# 200 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 201 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 202 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 12, MtMirrohExterior_BreechTrigger_Movement_3
# 203 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 204 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Conkeldurr::
# 208 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 209 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_CONKELDURR, CRY_MODE_NORMAL
# 210 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Conkeldurr_Text_0
# 211 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_E::
# 217 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 218 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 219 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_E_Text_0
# 220 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 221 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_NPC_D_Movement_0
# 222 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_D_Text_1
# 223 "data//maps/MtMirrohExterior/scripts.pory"
	release
# 224 "data//maps/MtMirrohExterior/scripts.pory"
	applymovement 13, MtMirrohExterior_BreechTrigger_Movement_3
# 225 "data//maps/MtMirrohExterior/scripts.pory"
	waitmovement 0
# 226 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Toxicroak::
# 230 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 231 "data//maps/MtMirrohExterior/scripts.pory"
	playmoncry SPECIES_TOXICROAK, CRY_MODE_NORMAL
# 232 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Toxicroak_Text_0
# 233 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_F::
# 239 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 240 "data//maps/MtMirrohExterior/scripts.pory"
	faceplayer
# 241 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_F_Text_0
# 242 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_NPC_G::
# 247 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 248 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_NPC_G_Text_0
# 249 "data//maps/MtMirrohExterior/scripts.pory"
	releaseall
	end


MtMirrohExterior_Medicham::
# 254 "data//maps/MtMirrohExterior/scripts.pory"
	lockall
# 255 "data//maps/MtMirrohExterior/scripts.pory"
	msgbox MtMirrohExterior_Medicham_Text_0
# 256 "data//maps/MtMirrohExterior/scripts.pory"
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

# 199 "data//maps/MtMirrohExterior/scripts.pory"
MtMirrohExterior_NPC_D_Movement_0:
# 199 "data//maps/MtMirrohExterior/scripts.pory"
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
	.string "Clefable and I just made our way down\n"
	.string "Mt. Mirroh. We're going to take a break\l"
	.string "from the mountains.\p"
	.string "Where are we going next?\p"
	.string "Rivetshore City! We're going to enjoy\n"
	.string "the sea breeze for a while.$"

MtMirrohExterior_Breech_Reward_Text_0:
# 63 "data//maps/MtMirrohExterior/scripts.pory"
	.string "We don't need these any more, so would\n"
	.string "you like one?$"

MtMirrohExterior_Breech_Reward_Text_1:
# 64 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Assault Vest$"

MtMirrohExterior_Breech_Reward_Text_2:
# 64 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Rocky Helmet$"

MtMirrohExterior_Breech_Reward1_Text_0:
# 75 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Are you sure?$"

MtMirrohExterior_Breech_Reward_End_Text_0:
# 102 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Maybe we'll see you in Rivetshore City!$"

MtMirrohExterior_Trainer_A_Text_0:
# 126 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Once you jump over that ledge over\n"
	.string "there, you can't come back. So let me\l"
	.string "battle you before you go!$"

MtMirrohExterior_Trainer_A_Text_1:
# 126 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Okay, you can go!$"

MtMirrohExterior_Trainer_A_Text_2:
# 127 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'm training here so that I can safely\n"
	.string "go back to the Pokémon Center if I need\l"
	.string "to.$"

MtMirrohExterior_Trainer_B_Text_0:
# 132 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I know what you're eyeing! That's why I\n"
	.string "planted myself here - hahaha!$"

MtMirrohExterior_Trainer_B_Text_1:
# 132 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Aw I lost!$"

MtMirrohExterior_Trainer_B_Text_2:
# 133 "data//maps/MtMirrohExterior/scripts.pory"
	.string "$"

MtMirrohExterior_Trainer_C_Text_0:
# 138 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I'd rather be skiing on these slopes but\n"
	.string "I don't mind a battle!$"

MtMirrohExterior_Trainer_C_Text_1:
# 138 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Yup - I prefer skiing!$"

MtMirrohExterior_Trainer_C_Text_2:
# 139 "data//maps/MtMirrohExterior/scripts.pory"
	.string "You won't get slopes like these in all of\n"
	.string "Cormoria!$"

MtMirrohExterior_NPC_A_Text_0:
# 175 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Be careful! There are some nasty types\n"
	.string "around. They're wearing dark suits and\l"
	.string "harrassing everyone they see. They\l"
	.string "even threatened me - a senior citizen!$"

MtMirrohExterior_NPC_B_Text_0:
# 182 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Higher up, the weather becomes too\n"
	.string "harsh to climb, so to reach Winterlily\l"
	.string "Hollow, you have to cross the caverns\l"
	.string "inside the mountain.$"

MtMirrohExterior_NPC_C_Text_0:
# 189 "data//maps/MtMirrohExterior/scripts.pory"
	.string "The Vivillon here take good care of the\n"
	.string "flowers, which is why they grow even in\l"
	.string "such cold weather!$"

MtMirrohExterior_NPC_D_Text_0:
# 197 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Hang in there Conkeldurr!$"

MtMirrohExterior_NPC_D_Text_1:
# 200 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Don't disturb us - we're training!$"

MtMirrohExterior_Conkeldurr_Text_0:
# 210 "data//maps/MtMirrohExterior/scripts.pory"
	.string "CONKELDURR: durr!!!!\p"
	.string "The Toxicroak has poisoned it, but it's\n"
	.string "still going strong!$"

MtMirrohExterior_NPC_E_Text_0:
# 219 "data//maps/MtMirrohExterior/scripts.pory"
	.string "Finish this, Toxicroak!$"

MtMirrohExterior_Toxicroak_Text_0:
# 232 "data//maps/MtMirrohExterior/scripts.pory"
	.string "TOXICROAK: croooaaakk!!!!\p"
	.string "It's hammering the Conkeldurr with\n"
	.string "Posion Jabs!$"

MtMirrohExterior_NPC_F_Text_0:
# 241 "data//maps/MtMirrohExterior/scripts.pory"
	.string "I can't believe what's happening inside\n"
	.string "the Fighting Dojo! How could the master\l"
	.string "have lost her mind like this?$"

MtMirrohExterior_NPC_G_Text_0:
# 248 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her\n"
	.string "Medicham...best not disturb her.$"

MtMirrohExterior_Medicham_Text_0:
# 255 "data//maps/MtMirrohExterior/scripts.pory"
	.string "She's meditating with her trainer...best\n"
	.string "not disturb her.$"
