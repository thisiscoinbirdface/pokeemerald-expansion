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
# 110 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT1
# 111 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT2
# 112 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT3
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT4
# 114 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_BOSS
# 115 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_LEADER
# 116 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_SHOPKEEPER2F
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EVIL_BATTLE
# 119 "data//maps/CeramBaseCamp_Main/scripts.pory"
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

CeramBaseCamp_Main_EventScript_MainEncounter_Text_0:
# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Release our shopkeeper at once!\n"
	.string "How dare you!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_1:
# 58 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Get out of my face, leader! We have\n"
	.string "business that concerns you not one bit.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_2:
# 59 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: No way! This is MY base camp!\n"
	.string "You're not harming anyone while I'm\l"
	.string "around!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_3:
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Hahaha! Well said! You are a leader\n"
	.string "after all. But how do you intend to\l"
	.string "handle the two of us, when there's just\l"
	.string "one of you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_4:
# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey - you! You look like a trainer. I\n"
	.string "need your help. These people are\l"
	.string "harrassing the shopkeeper. I'll take\l"
	.string "the boss. You deal with the one on the\l"
	.string "right for me!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_5:
# 77 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "It's you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_6:
# 81 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Boss! Boss! This is the kid that beat me\n"
	.string "in Route 4. I was trying to take the\l"
	.string "dream shard from that Celfairy hiker.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_7:
# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Remind me to punish you for that.\p"
	.string "...yes boss.\p"
	.string "But right now, just deal with this pest.\n"
	.string "And you better win this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_8:
# 89 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You heard that...what was your name\n"
	.string "again? {PLAYER}? Yeah, {PLAYER}!\l"
	.string "I'm not going to lose to you this time!$"
