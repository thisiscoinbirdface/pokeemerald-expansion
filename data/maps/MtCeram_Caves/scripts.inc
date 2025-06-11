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
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 20 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Trigger0_Text_1
# 21 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 23 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Greta_Trigger0_Movement_3
# 24 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 26 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Greta_Main
	return

MtCeram_Caves_Greta_Trigger0_2:
	end


MtCeram_Caves_Greta_Trigger1::
# 30 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CERAM_CAVES_GRETA_MEETING, MtCeram_Caves_Greta_Trigger1_2
# 32 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 33 "data//maps/MtCeram_Caves/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_GRETA, MtCeram_Caves_Greta_Trigger0_Movement_0
# 35 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 36 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Trigger0_Movement_1
# 37 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Trigger0_Movement_2
# 38 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 39 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Trigger0_Text_1
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 42 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Greta_Trigger1_Movement_0
# 43 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Greta_Main
	return

MtCeram_Caves_Greta_Trigger1_2:
	end


MtCeram_Caves_Greta_Trigger2::
# 49 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CERAM_CAVES_GRETA_MEETING, MtCeram_Caves_Greta_Trigger2_2
# 51 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 52 "data//maps/MtCeram_Caves/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 53 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_GRETA, MtCeram_Caves_Greta_Trigger0_Movement_0
# 54 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 55 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_SIZZLIPEDE, CRY_MODE_NORMAL
# 56 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Trigger0_Movement_1
# 57 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Trigger0_Movement_2
# 58 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 59 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 60 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Trigger0_Text_1
# 61 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Greta_Trigger2_Movement_0
# 64 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 66 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Greta_Main
	return

MtCeram_Caves_Greta_Trigger2_2:
	end


MtCeram_Caves_Greta_Main::
# 73 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 74 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_0
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 76 "data//maps/MtCeram_Caves/scripts.pory"
	delay 24
# 77 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_SIZZLIPEDE, CRY_MODE_ENCOUNTER
# 78 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_VENIPEDE, CRY_MODE_ENCOUNTER
# 79 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Main_Movement_0
# 80 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Main_Movement_0
# 81 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 82 "data//maps/MtCeram_Caves/scripts.pory"
	delay 30
# 83 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_1
# 85 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 86 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Main_Movement_1
# 87 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Main_Movement_2
# 88 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 90 "data//maps/MtCeram_Caves/scripts.pory"
	setwildbattle SPECIES_SIZZLIPEDE, 17, ITEM_NONE, SPECIES_VENIPEDE, 17, ITEM_NONE
# 91 "data//maps/MtCeram_Caves/scripts.pory"
	dowildbattle
# 93 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_SIZZ
# 94 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_VEN
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 96 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_2
# 97 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Main_Text_3
# 98 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_4
# 99 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 100 "data//maps/MtCeram_Caves/scripts.pory"
	delay 16
# 101 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Main_Text_3
# 102 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_5
# 103 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 105 "data//maps/MtCeram_Caves/scripts.pory"
	delay 24
# 106 "data//maps/MtCeram_Caves/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MtCeram_Caves_Greta_Main_Text_6, MtCeram_Caves_Greta_Main_Text_7, MtCeram_Caves_Greta_Main_Text_8
# 107 "data//maps/MtCeram_Caves/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MtCeram_Caves_Greta_Main_2
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtCeram_Caves_Greta_Main_5
# 116 "data//maps/MtCeram_Caves/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MtCeram_Caves_Greta_Main_8
MtCeram_Caves_Greta_Main_1:
# 122 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Main_Text_3
# 123 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_9
# 124 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 125 "data//maps/MtCeram_Caves/scripts.pory"
	setflag FLAG_CERAM_CAVES_GRETA_MEETING
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_GRETA, MtCeram_Caves_Greta_Main_Movement_3
# 128 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 129 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_GRETA
# 131 "data//maps/MtCeram_Caves/scripts.pory"
	fadedefaultbgm
# 132 "data//maps/MtCeram_Caves/scripts.pory"
	releaseall
	end

MtCeram_Caves_Greta_Main_2:
# 108 "data//maps/MtCeram_Caves/scripts.pory"
	giveitem ITEM_DARK_GEM
	goto MtCeram_Caves_Greta_Main_1

MtCeram_Caves_Greta_Main_5:
# 113 "data//maps/MtCeram_Caves/scripts.pory"
	giveitem ITEM_FIGHTING_GEM
	goto MtCeram_Caves_Greta_Main_1

MtCeram_Caves_Greta_Main_8:
# 117 "data//maps/MtCeram_Caves/scripts.pory"
	giveitem ITEM_PSYCHIC_GEM
	goto MtCeram_Caves_Greta_Main_1


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

# 23 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger0_Movement_3:
# 23 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 23 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 23 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 23 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 23 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 23 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 42 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger1_Movement_0:
# 42 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 42 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 42 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 42 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 42 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 42 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 42 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 63 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger2_Movement_0:
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 63 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 79 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Main_Movement_0:
# 79 "data//maps/MtCeram_Caves/scripts.pory"
	face_down
# 79 "data//maps/MtCeram_Caves/scripts.pory"
	emote_exclamation_mark
	step_end

# 86 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Main_Movement_1:
# 86 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 86 "data//maps/MtCeram_Caves/scripts.pory"
	face_right
	step_end

# 87 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Main_Movement_2:
# 87 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 87 "data//maps/MtCeram_Caves/scripts.pory"
	face_left
	step_end

# 127 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Main_Movement_3:
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
	step_end

MtCeram_Caves_Greta_Trigger0_Text_0:
# 19 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???$"

MtCeram_Caves_Greta_Trigger0_Text_1:
# 20 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Help!$"

MtCeram_Caves_Greta_Main_Text_0:
# 74 "data//maps/MtCeram_Caves/scripts.pory"
	.string "I'm trapped in between this Sizzlipede\n"
	.string "and Venipede who are fighting each\l"
	.string "other! I can't get free!$"

MtCeram_Caves_Greta_Main_Text_1:
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Uh oh, they've noticed you...$"

MtCeram_Caves_Greta_Main_Text_2:
# 96 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Thank you so much! I forgot my Pokémon\n"
	.string "at home and couldn't do anything!\l"
	.string "People at the Ceram Base Camp told me\l"
	.string "that the Sizzlipede and Venipede fight\l"
	.string "all the time...that's what I get for not\l"
	.string "taking them seriously!$"

MtCeram_Caves_Greta_Main_Text_3:
# 97 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Greta$"

MtCeram_Caves_Greta_Main_Text_4:
# 98 "data//maps/MtCeram_Caves/scripts.pory"
	.string "My name's Greta. I'm a traveling\n"
	.string "merchant.\p"
	.string "Are you a trainer?\n"
	.string "What's your name?\p"
	.string "...\p"
	.string "{PLAYER}? Nice to meet you! I have to\n"
	.string "thank you for saving me. Lets see...$"

MtCeram_Caves_Greta_Main_Text_5:
# 102 "data//maps/MtCeram_Caves/scripts.pory"
	.string "I have some leftover stock that you\n"
	.string "might like. These gems came from Mt.\l"
	.string "Mirroh, on the other side of Cormoria!\p"
	.string "Once per battle, a gem increases the\n"
	.string "power of its corresponding move type\l"
	.string "by a third. Take any one you like!$"

MtCeram_Caves_Greta_Main_Text_6:
# 106 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Dark Gem$"

MtCeram_Caves_Greta_Main_Text_7:
# 106 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Fighting Gem$"

MtCeram_Caves_Greta_Main_Text_8:
# 106 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Psychic Gem$"

MtCeram_Caves_Greta_Main_Text_9:
# 123 "data//maps/MtCeram_Caves/scripts.pory"
	.string "I travel across all the routes and\n"
	.string "towns of Cormoria, so I bet we'll meet\l"
	.string "again - somewhere or the other. Please\l"
	.string "buy my stuff then!$"
