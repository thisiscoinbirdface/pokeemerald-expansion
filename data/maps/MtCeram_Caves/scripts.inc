# 1 "data//maps/MtCeram_Caves/scripts.pory"

# 2 "data//maps/MtCeram_Caves/scripts.pory"
    .set LOCALID_GRETA, 3
# 3 "data//maps/MtCeram_Caves/scripts.pory"
    .set LOCALID_SIZZ, 4
# 4 "data//maps/MtCeram_Caves/scripts.pory"
    .set LOCALID_VEN, 5

MtCeram_Caves_MapScripts::
	.byte 0


MtCeram_Caves_Greta_Trigger0::
# 10 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CERAM_CAVES_GRETA_MEETING, MtCeram_Caves_Greta_Trigger0_2
# 12 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 13 "data//maps/MtCeram_Caves/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 15 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_GRETA, MtCeram_Caves_Greta_Trigger0_Movement_0
# 16 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 17 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Trigger0_Movement_1
# 18 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Trigger0_Movement_2
# 19 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Trigger0_Text_0
# 20 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 22 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Greta_Trigger0_Movement_3
# 23 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 25 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Greta_Main
	return

MtCeram_Caves_Greta_Trigger0_2:
	end


MtCeram_Caves_Greta_Trigger1::
# 29 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CERAM_CAVES_GRETA_MEETING, MtCeram_Caves_Greta_Trigger1_2
# 31 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 32 "data//maps/MtCeram_Caves/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 33 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_GRETA, MtCeram_Caves_Greta_Trigger0_Movement_0
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 35 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Trigger0_Movement_1
# 36 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Trigger0_Movement_2
# 37 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Trigger0_Text_0
# 38 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Greta_Trigger1_Movement_0
# 41 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 43 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Greta_Main
	return

MtCeram_Caves_Greta_Trigger1_2:
	end


MtCeram_Caves_Greta_Trigger2::
# 47 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CERAM_CAVES_GRETA_MEETING, MtCeram_Caves_Greta_Trigger2_2
# 49 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 50 "data//maps/MtCeram_Caves/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_GRETA, MtCeram_Caves_Greta_Trigger0_Movement_0
# 52 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 53 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_SIZZLIPEDE, CRY_MODE_NORMAL
# 54 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Trigger0_Movement_1
# 55 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Trigger0_Movement_2
# 56 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 57 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Trigger0_Text_0
# 58 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Greta_Trigger2_Movement_0
# 61 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Greta_Main
	return

MtCeram_Caves_Greta_Trigger2_2:
	end


MtCeram_Caves_Greta_Main::
# 70 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_0
# 71 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 72 "data//maps/MtCeram_Caves/scripts.pory"
	delay 24
# 73 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_SIZZLIPEDE, CRY_MODE_ENCOUNTER
# 74 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_VENIPEDE, CRY_MODE_ENCOUNTER
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Main_Movement_0
# 76 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Main_Movement_0
# 77 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 78 "data//maps/MtCeram_Caves/scripts.pory"
	delay 30
# 79 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_1
# 80 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 81 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Main_Movement_1
# 82 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Main_Movement_2
# 83 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 85 "data//maps/MtCeram_Caves/scripts.pory"
	setwildbattle SPECIES_SIZZLIPEDE, 8, ITEM_NONE, SPECIES_VENIPEDE, 8, ITEM_NONE
# 86 "data//maps/MtCeram_Caves/scripts.pory"
	dowildbattle
# 88 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_SIZZ
# 89 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_VEN
# 90 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_2
# 91 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 92 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_3
# 93 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	delay 24
# 96 "data//maps/MtCeram_Caves/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MtCeram_Caves_Greta_Main_Text_4, MtCeram_Caves_Greta_Main_Text_5, MtCeram_Caves_Greta_Main_Text_6
# 97 "data//maps/MtCeram_Caves/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MtCeram_Caves_Greta_Main_2
MtCeram_Caves_Greta_Main_1:
# 100 "data//maps/MtCeram_Caves/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtCeram_Caves_Greta_Main_5
MtCeram_Caves_Greta_Main_4:
# 103 "data//maps/MtCeram_Caves/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MtCeram_Caves_Greta_Main_8
MtCeram_Caves_Greta_Main_7:
# 108 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_7
# 109 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 110 "data//maps/MtCeram_Caves/scripts.pory"
	setflag FLAG_CERAM_CAVES_GRETA_MEETING
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_GRETA, MtCeram_Caves_Greta_Main_Movement_3
# 113 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 114 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_GRETA
# 116 "data//maps/MtCeram_Caves/scripts.pory"
	fadedefaultbgm
# 117 "data//maps/MtCeram_Caves/scripts.pory"
	releaseall
	end

MtCeram_Caves_Greta_Main_2:
# 98 "data//maps/MtCeram_Caves/scripts.pory"
	giveitem ITEM_DARK_GEM
	goto MtCeram_Caves_Greta_Main_1

MtCeram_Caves_Greta_Main_5:
# 101 "data//maps/MtCeram_Caves/scripts.pory"
	giveitem ITEM_FIGHTING_GEM
	goto MtCeram_Caves_Greta_Main_4

MtCeram_Caves_Greta_Main_8:
# 104 "data//maps/MtCeram_Caves/scripts.pory"
	giveitem ITEM_PSYCHIC_GEM
	goto MtCeram_Caves_Greta_Main_7


# 15 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger0_Movement_0:
# 15 "data//maps/MtCeram_Caves/scripts.pory"
	emote_exclamation_mark
	step_end

# 17 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger0_Movement_1:
# 17 "data//maps/MtCeram_Caves/scripts.pory"
	jump_in_place_right
	step_end

# 18 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger0_Movement_2:
# 18 "data//maps/MtCeram_Caves/scripts.pory"
	jump_in_place_left
	step_end

# 22 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger0_Movement_3:
# 22 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 22 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 22 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 22 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 22 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 22 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 40 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger1_Movement_0:
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 60 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger2_Movement_0:
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 75 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Main_Movement_0:
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	face_down
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	emote_exclamation_mark
	step_end

# 81 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Main_Movement_1:
# 81 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 81 "data//maps/MtCeram_Caves/scripts.pory"
	face_right
	step_end

# 82 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Main_Movement_2:
# 82 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 82 "data//maps/MtCeram_Caves/scripts.pory"
	face_left
	step_end

# 112 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Main_Movement_3:
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
	step_end

MtCeram_Caves_Greta_Trigger0_Text_0:
# 19 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???: HELP!$"

MtCeram_Caves_Greta_Main_Text_0:
# 70 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???: I'm trapped in between this\n"
	.string "SIZZLIPEDE and VENIPEDE who are\l"
	.string "fighting each other! I can't get free!$"

MtCeram_Caves_Greta_Main_Text_1:
# 79 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???: Uh oh, they've noticed you...$"

MtCeram_Caves_Greta_Main_Text_2:
# 90 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???: Thank you so much! I forgot my\n"
	.string "Pokemon at home and couldn't do\l"
	.string "anything! People at the Ceram Base\l"
	.string "Camp told me that the SIZZLIPEDE and\l"
	.string "VENIPEDE fight all the time...that's\l"
	.string "what I get for not taking them\l"
	.string "seriously!\p"
	.string "GRETA: My name's GRETA. I'm a traveling\n"
	.string "merchant. Are you a trainer? What's\l"
	.string "your name?\p"
	.string "...\p"
	.string "{PLAYER}? Nice to meet you! I have to\n"
	.string "thank you for saving me. Lets see...$"

MtCeram_Caves_Greta_Main_Text_3:
# 92 "data//maps/MtCeram_Caves/scripts.pory"
	.string "GRETA: I have some leftover stock that\n"
	.string "you might like. These gems came all the\l"
	.string "way from Mt Mirroh, on the other side of\l"
	.string "Cormoria! Once per battle, a gem\l"
	.string "increases the power of its\l"
	.string "corresponding move type by a third.\l"
	.string "Take any one you like!$"

MtCeram_Caves_Greta_Main_Text_4:
# 96 "data//maps/MtCeram_Caves/scripts.pory"
	.string "DARK GEM$"

MtCeram_Caves_Greta_Main_Text_5:
# 96 "data//maps/MtCeram_Caves/scripts.pory"
	.string "FIGHTING GEM$"

MtCeram_Caves_Greta_Main_Text_6:
# 96 "data//maps/MtCeram_Caves/scripts.pory"
	.string "PSYCHIC GEM$"

MtCeram_Caves_Greta_Main_Text_7:
# 108 "data//maps/MtCeram_Caves/scripts.pory"
	.string "GRETA: I travel across all the routes\n"
	.string "and towns of Cormoria, so I bet we'll\l"
	.string "meet again - somewhere or the other.\l"
	.string "Please buy my stuff then!$"
