# 2 "data//maps/CeramBaseCamp_Main/scripts.pory"

# 3 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_GRUNT1, 1
# 4 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_GRUNT2, 2
# 5 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_GRUNT3, 3
# 6 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_GRUNT4, 4
# 7 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_BOSS, 10
# 8 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_LEADER, 5
# 9 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_SHOPKEEPER2F, 9

CeramBaseCamp_Main_MapScripts::
	.byte 0


CeramBaseCamp_Main_EventScript_EvilTrigger1::
# 17 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger1_2
# 20 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 21 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0
# 22 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 23 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger1_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger2::
# 28 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger2_2
# 31 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0
# 33 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 34 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger2_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger3::
# 39 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger3_2
# 42 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0
# 44 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 45 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger3_2:
	end


CeramBaseCamp_Main_EventScript_MainEncounter::
# 51 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 52 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0
# 53 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 55 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 56 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 57 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 58 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_1
# 59 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_2
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 61 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 65 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 66 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 67 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 68 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_4
# 70 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4
# 74 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 75 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 76 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 77 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_5
# 78 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 80 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 81 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_6
# 82 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 83 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 84 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 86 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 88 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 89 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_8
# 90 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 93 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 94 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 95 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMP_EVIL_GABRIELLE, CeramBaseCamp_Main_EventScript_MainEncounter_Text_9
# 102 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 103 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 104 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_10
# 105 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 106 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_11
# 107 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 108 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 109 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_12
# 110 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 111 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 112 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_13
# 114 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 115 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 116 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 117 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_14
# 119 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9
# 124 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 130 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 131 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_15
# 132 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_16
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_SHOPKEEPER2F, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 140 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 141 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 142 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_17
# 144 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_18
# 145 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_19
# 146 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_20
# 147 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 150 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_TO_BLACK
# 151 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT1
# 152 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT2
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT3
# 154 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT4
# 155 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_BOSS
# 156 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_LEADER
# 157 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_SHOPKEEPER2F
# 159 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EVIL_BATTLE
# 161 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 162 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return


# 21 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0:
# 21 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 21 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
	step_end

# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0:
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0:
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 52 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0:
# 52 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_up
	step_end

# 56 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1:
# 56 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_down
	step_end

# 65 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2:
# 65 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_right
	step_end

# 67 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3:
# 67 "data//maps/CeramBaseCamp_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4:
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5:
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6:
# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_down
	step_end

# 94 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7:
# 94 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8:
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9:
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10:
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

CeramBaseCamp_Main_EventScript_MainEncounter_Text_0:
# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Release our shopkeeper at once!\n"
	.string "How dare you!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_1:
# 58 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Get out of my face, leader! We have\n"
	.string "business that concerns you not one bit.\l"
	.string "We want his supplies for our trek up MT\l"
	.string "CERAM!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_2:
# 59 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: The name's FLANNERY! And no\n"
	.string "way! This is MY base camp! You're not\l"
	.string "harming anyone while I'm around!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_3:
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Hahaha! Well said! You are a leader\n"
	.string "after all. But how do you intend to\l"
	.string "handle the two of us, when there's just\l"
	.string "one of you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_4:
# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey - you! You look like a trainer. I\n"
	.string "need your help. These people are trying\l"
	.string "to steal the shopkeeper's supplies. We\l"
	.string "have to stop them!\p"
	.string "I'll take the boss. You deal with the one\n"
	.string "on the right for me!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_5:
# 77 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: GABRIELLE: It's you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_6:
# 81 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: Boss! Boss! This is the kid\n"
	.string "that beat me in Route 4. I was trying to\l"
	.string "take the dreamstone from that Celfairy\l"
	.string "hiker.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_7:
# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: That wasn't a dreamstone you idiot\n"
	.string "- that was a moonstone! Nonetheless,\l"
	.string "remind me to punish you for that later.\p"
	.string "GABRIELLE:...yes boss.\p"
	.string "???: But there is a dreamstone sitting\n"
	.string "right on top of Mt. Ceram, and these\l"
	.string "people are in the way! GABRIELLE, you\l"
	.string "deal with this pest while I put the\l"
	.string "leader in her place. And you better win\l"
	.string "this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_8:
# 89 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: You heard that...what was\n"
	.string "your name again? {PLAYER}? Yeah,\l"
	.string "{PLAYER}! I'm not going to lose to you\l"
	.string "this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_9:
# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! Not again!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_10:
# 104 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Agh! You stupid fire-type monkey!\n"
	.string "I just didn't have my {PKMN} with me.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_11:
# 106 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: Serves you right! Now move\n"
	.string "over and give our shopkeeper back.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_12:
# 109 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: I...I'm sorry boss! I lost\n"
	.string "again.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_13:
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: You useless, incompetent fool!\n"
	.string "Argh! How can we accomplish anything\l"
	.string "with such terrible support!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_14:
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Fine, take your stupid shopkeeper\n"
	.string "back. We'll make it up the mountain\l"
	.string "anyway and there's nothing you can do\l"
	.string "to stop us!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_15:
# 131 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: Thanks for the help trainer!\n"
	.string "I needed it there. I could've taken them\l"
	.string "both alone, but I didn't have all my {PKMN}\l"
	.string "on me.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_16:
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: They didn't harm you right?\p"
	.string "SHOPKEEPER: No they didn't. Thank you\n"
	.string "FLANNERY! And you too, trainer. I owe\l"
	.string "you one. Stop by our counter downstairs\l"
	.string "for trekking supplies later on.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_17:
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: That boss was really tough!\p"
	.string "Hmm? You've met these thugs before?\n"
	.string "And you're also going to Mt. Ceram?\l"
	.string "What's up there?\p"
	.string "Dreamstones? I thought those were\n"
	.string "just rumours.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_18:
# 144 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: They're connected to\n"
	.string "Professor Tenebris' disappearance?\p"
	.string "Well I gotta do something - Professor\n"
	.string "Tenebris is the one who gave me my\l"
	.string "GROWLITHE.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_19:
# 145 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: Those guys seem to be after\n"
	.string "the dreamstone too...but I can't let you\l"
	.string "go up the mountain as you are now.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_20:
# 146 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: {PLAYER}, was it? Mt. Ceram\n"
	.string "is filled with dangerous {PKMN}. The rules\l"
	.string "around here are you can't climb unless\l"
	.string "you have my gym badge and my blessing.\l"
	.string "If you can beat me, I'll be able to send\l"
	.string "you up the hill with confidence. See you\l"
	.string "around, {PLAYER}!$"
