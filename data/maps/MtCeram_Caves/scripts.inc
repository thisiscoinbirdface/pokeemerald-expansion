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
	goto_if_set FLAG_CERAM_CAVES_LEAF_MEETING, MtCeram_Caves_Leaf_Trigger0_2
# 12 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 14 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_LEAF, MtCeram_Caves_Leaf_Trigger0_Movement_0
# 15 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 16 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Leaf_Trigger0_Movement_1
# 17 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Leaf_Trigger0_Movement_2
# 18 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Trigger0_Text_0
# 19 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 21 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Leaf_Trigger0_Movement_3
# 22 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 24 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Leaf_Main
	return

MtCeram_Caves_Leaf_Trigger0_2:
	end


MtCeram_Caves_Leaf_Trigger1::
# 28 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CERAM_CAVES_LEAF_MEETING, MtCeram_Caves_Leaf_Trigger1_2
# 30 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 32 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_LEAF, MtCeram_Caves_Leaf_Trigger0_Movement_0
# 33 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Leaf_Trigger0_Movement_1
# 35 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Leaf_Trigger0_Movement_2
# 36 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Trigger0_Text_0
# 37 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 39 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Leaf_Trigger1_Movement_0
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 42 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Leaf_Main
	return

MtCeram_Caves_Leaf_Trigger1_2:
	end


MtCeram_Caves_Leaf_Trigger2::
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CERAM_CAVES_LEAF_MEETING, MtCeram_Caves_Leaf_Trigger2_2
# 48 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 50 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_LEAF, MtCeram_Caves_Leaf_Trigger0_Movement_0
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 52 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_SIZZLIPEDE, CRY_MODE_NORMAL
# 53 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Leaf_Trigger0_Movement_1
# 54 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Leaf_Trigger0_Movement_2
# 55 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 56 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Trigger0_Text_0
# 57 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 59 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Leaf_Trigger2_Movement_0
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 62 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Leaf_Main
	return

MtCeram_Caves_Leaf_Trigger2_2:
	end


MtCeram_Caves_Leaf_Main::
# 69 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Main_Text_0
# 70 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 71 "data//maps/MtCeram_Caves/scripts.pory"
	delay 24
# 72 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_SIZZLIPEDE, CRY_MODE_ENCOUNTER
# 73 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_VENIPEDE, CRY_MODE_ENCOUNTER
# 74 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Leaf_Main_Movement_0
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Leaf_Main_Movement_0
# 76 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 77 "data//maps/MtCeram_Caves/scripts.pory"
	delay 30
# 78 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Main_Text_1
# 79 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 80 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Leaf_Main_Movement_1
# 81 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Leaf_Main_Movement_2
# 82 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	setwildbattle SPECIES_SIZZLIPEDE, 8, ITEM_NONE, SPECIES_VENIPEDE, 8, ITEM_NONE
# 85 "data//maps/MtCeram_Caves/scripts.pory"
	dowildbattle
# 87 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_SIZZ
# 88 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_VEN
# 89 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Main_Text_2
# 90 "data//maps/MtCeram_Caves/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 91 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Leaf_Main_Text_3
# 92 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 93 "data//maps/MtCeram_Caves/scripts.pory"
	setflag FLAG_CERAM_CAVES_LEAF_MEETING
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_LEAF, MtCeram_Caves_Leaf_Main_Movement_3
# 96 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 97 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_LEAF
# 99 "data//maps/MtCeram_Caves/scripts.pory"
	releaseall
	end


# 14 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger0_Movement_0:
# 14 "data//maps/MtCeram_Caves/scripts.pory"
	emote_exclamation_mark
	step_end

# 16 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger0_Movement_1:
# 16 "data//maps/MtCeram_Caves/scripts.pory"
	jump_in_place_right
	step_end

# 17 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger0_Movement_2:
# 17 "data//maps/MtCeram_Caves/scripts.pory"
	jump_in_place_left
	step_end

# 21 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger0_Movement_3:
# 21 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 21 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 21 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 21 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 21 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 21 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 39 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger1_Movement_0:
# 39 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 39 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 39 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 39 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 39 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 39 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 39 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 59 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Trigger2_Movement_0:
# 59 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 59 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 59 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 59 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 59 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 59 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 59 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 59 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 74 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Main_Movement_0:
# 74 "data//maps/MtCeram_Caves/scripts.pory"
	face_down
# 74 "data//maps/MtCeram_Caves/scripts.pory"
	emote_exclamation_mark
	step_end

# 80 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Main_Movement_1:
# 80 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 80 "data//maps/MtCeram_Caves/scripts.pory"
	face_right
	step_end

# 81 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Main_Movement_2:
# 81 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 81 "data//maps/MtCeram_Caves/scripts.pory"
	face_left
	step_end

# 95 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Leaf_Main_Movement_3:
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
	step_end

MtCeram_Caves_Leaf_Trigger0_Text_0:
# 18 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???: HELP!$"

MtCeram_Caves_Leaf_Main_Text_0:
# 69 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???: I'm trapped in between this\n"
	.string "SIZZLIPEDE and VENIPEDE who are\l"
	.string "fighting each other! I can't get free!$"

MtCeram_Caves_Leaf_Main_Text_1:
# 78 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???: Uh oh, they've noticed you...$"

MtCeram_Caves_Leaf_Main_Text_2:
# 89 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???: Thank you so much! I forgot my {PKMN}\n"
	.string "at home and couldn't do anything!\l"
	.string "People at the CERAM BASE CAMP told me\l"
	.string "that the SIZZLIPEDE and VENIPEDE\l"
	.string "fight all the time...that's what I get\l"
	.string "for not taking them seriously!\p"
	.string "LEAF: My name's LEAF. I'm a traveling\n"
	.string "merchant. Are you a trainer? What's\l"
	.string "your name?\p"
	.string "...\p"
	.string "{PLAYER}? Nice to meet you! Take this\n"
	.string "- a thank you for saving me.$"

MtCeram_Caves_Leaf_Main_Text_3:
# 91 "data//maps/MtCeram_Caves/scripts.pory"
	.string "LEAF: I travel across all the routes\n"
	.string "and towns of CORMORIA, so I bet we'll\l"
	.string "meet again - somewhere or the other.\l"
	.string "Please buy my stuff then!$"
