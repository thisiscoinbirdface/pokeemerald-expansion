# 1 "data//maps/MtCeram_Caves/scripts.pory"

# 2 "data//maps/MtCeram_Caves/scripts.pory"
    .set LOCALID_LEAF, 9
# 3 "data//maps/MtCeram_Caves/scripts.pory"
    .set LOCALID_SIZZ, 10
# 4 "data//maps/MtCeram_Caves/scripts.pory"
    .set LOCALID_VEN, 11

MtCeram_Caves_MapScripts::
	.byte 0


MtCeram_Caves_Leaf_Trigger0::
# 10 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 12 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_LEAF, MtCeram_Caves_Leaf_Trigger0_Movement_0
# 13 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 14 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Leaf_Trigger0_Movement_1
# 15 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Leaf_Trigger0_Movement_2
# 16 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Trigger0_Text_0
# 17 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 19 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Leaf_Trigger0_Movement_3
# 21 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Leaf_Main
	return


MtCeram_Caves_Leaf_Trigger1::
# 25 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 27 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_LEAF, MtCeram_Caves_Leaf_Trigger0_Movement_0
# 28 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 29 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Leaf_Trigger0_Movement_1
# 30 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Leaf_Trigger0_Movement_2
# 31 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Trigger0_Text_0
# 32 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Leaf_Trigger1_Movement_0
# 36 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Leaf_Main
	return


MtCeram_Caves_Leaf_Trigger2::
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 42 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_LEAF, MtCeram_Caves_Leaf_Trigger0_Movement_0
# 43 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 44 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_SIZZLIPEDE, CRY_MODE_NORMAL
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Leaf_Trigger0_Movement_1
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Leaf_Trigger0_Movement_2
# 47 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 48 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Trigger0_Text_0
# 49 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Leaf_Trigger2_Movement_0
# 53 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Leaf_Main
	return


MtCeram_Caves_Leaf_Main::
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Main_Text_0
# 61 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 62 "data//maps/MtCeram_Caves/scripts.pory"
	delay 16
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Leaf_Main_Movement_0
# 64 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Leaf_Main_Movement_0
# 65 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 66 "data//maps/MtCeram_Caves/scripts.pory"
	delay 24
# 67 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Leaf_Main_Movement_1
# 68 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Leaf_Main_Movement_2
# 69 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 70 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_SIZZLIPEDE, CRY_MODE_ENCOUNTER
# 71 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_VENIPEDE, CRY_MODE_ENCOUNTER
# 73 "data//maps/MtCeram_Caves/scripts.pory"
	setwildbattle SPECIES_SIZZLIPEDE, 8, ITEM_NONE, SPECIES_VENIPEDE, 8, ITEM_NONE
# 74 "data//maps/MtCeram_Caves/scripts.pory"
	dowildbattle
# 76 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_SIZZ
# 77 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_VEN
# 78 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Main_Text_1
# 79 "data//maps/MtCeram_Caves/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 80 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Main_Text_2
# 81 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 82 "data//maps/MtCeram_Caves/scripts.pory"
	setflag FLAG_CERAM_CAVES_LEAF_MEETING
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_LEAF, MtCeram_Caves_Leaf_Main_Movement_3
# 85 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 86 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_LEAF
# 88 "data//maps/MtCeram_Caves/scripts.pory"
	releaseall
	end


# 12 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger0_Movement_0:
# 12 "data//maps/MtCeram_Caves/scripts.pory"
	emote_exclamation_mark
	step_end

# 14 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger0_Movement_1:
# 14 "data//maps/MtCeram_Caves/scripts.pory"
	jump_in_place_right
	step_end

# 15 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger0_Movement_2:
# 15 "data//maps/MtCeram_Caves/scripts.pory"
	jump_in_place_left
	step_end

# 19 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger0_Movement_3:
# 19 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 19 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 19 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 19 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 19 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 19 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 34 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger1_Movement_0:
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 51 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger2_Movement_0:
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 63 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Main_Movement_0:
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	face_down
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	emote_exclamation_mark
	step_end

# 67 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Main_Movement_1:
# 67 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 67 "data//maps/MtCeram_Caves/scripts.pory"
	face_right
	step_end

# 68 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Main_Movement_2:
# 68 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 68 "data//maps/MtCeram_Caves/scripts.pory"
	face_left
	step_end

# 84 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Main_Movement_3:
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
	step_end

MtCeram_Caves_Leaf_Trigger0_Text_0:
# 16 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???: HELP!$"

MtCeram_Caves_Leaf_Main_Text_0:
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???: I'm trapped in between this\n"
	.string "SIZZLIPEDE and VENIPEDE who are\l"
	.string "fighting each other! I can't get free!$"

MtCeram_Caves_Leaf_Main_Text_1:
# 78 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???: Thank you so much! I forgot my {PKMN}\n"
	.string "and couldn't do anything!\p"
	.string "LEAF: My name's LEAF and I'm a traveling\n"
	.string "merchant. Are you a trainer? What's\l"
	.string "your name?\p"
	.string "...\p"
	.string "{PLAYER}? Nice to meet you! Take this\n"
	.string "- a thank you for saving me.$"

MtCeram_Caves_Leaf_Main_Text_2:
# 80 "data//maps/MtCeram_Caves/scripts.pory"
	.string "LEAF: I travel all the routes and towns\n"
	.string "of CORMORIA, so I bet we'll meet again -\l"
	.string "somewhere or the other. Please buy my\l"
	.string "stuff then!$"
