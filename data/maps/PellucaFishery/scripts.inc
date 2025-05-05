# 1 "data//maps/PellucaFishery/scripts.pory"

# 2 "data//maps/PellucaFishery/scripts.pory"
    .set LOCALID_S_MAIN, 3
# 3 "data//maps/PellucaFishery/scripts.pory"
    .set LOCALID_S1, 1
# 4 "data//maps/PellucaFishery/scripts.pory"
    .set LOCALID_S2, 2
# 5 "data//maps/PellucaFishery/scripts.pory"
    .set LOCALID_S3, 4
# 6 "data//maps/PellucaFishery/scripts.pory"
    .set LOCALID_S4, 5

PellucaFishery_MapScripts::
	.byte 0


PellucaFishery_NPC1::
# 14 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC1_Text_0, MSGBOX_NPC
	end


PellucaFishery_NPC2::
# 18 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC2_Text_0, MSGBOX_NPC
	end


PellucaFishery_NPC3::
# 22 "data//maps/PellucaFishery/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 23 "data//maps/PellucaFishery/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 24 "data//maps/PellucaFishery/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 25 "data//maps/PellucaFishery/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 26 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC3_Text_0, MSGBOX_NPC
	end


PellucaFishery_NPC4::
# 30 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC4_Text_0, MSGBOX_NPC
	end


PellucaFishery_EventScript_MainDude::
# 44 "data//maps/PellucaFishery/scripts.pory"
	setflag FLAG_PELLUCA_REGULAR_CITIZENS
# 45 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZENS
# 47 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A
# 48 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B
# 49 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C
# 50 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D
# 52 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 3
# 53 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 1
# 54 "data//maps/PellucaFishery/scripts.pory"
	warp MAP_PELLUCA_CITY, 43, 28
# 58 "data//maps/PellucaFishery/scripts.pory"
	lockall
# 59 "data//maps/PellucaFishery/scripts.pory"
	faceplayer
# 61 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 62 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_1
# 63 "data//maps/PellucaFishery/scripts.pory"
	release
# 65 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 67 "data//maps/PellucaFishery/scripts.pory"
	special SpawnCameraObject
# 68 "data//maps/PellucaFishery/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaFishery_EventScript_MainDude_Movement_0
# 69 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 70 "data//maps/PellucaFishery/scripts.pory"
	special RemoveCameraObject
# 74 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_1
# 75 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S3, PellucaFishery_EventScript_MainDude_Movement_2
# 76 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_3
# 77 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S2, PellucaFishery_EventScript_MainDude_Movement_4
# 78 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 80 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 81 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 82 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_2
# 83 "data//maps/PellucaFishery/scripts.pory"
	release
# 84 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 87 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_5
# 88 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 89 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_4
# 90 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_A, PellucaFishery_EventScript_MainDude_Text_5
# 92 "data//maps/PellucaFishery/scripts.pory"
	delay 8
# 93 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_6
# 94 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 95 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_6
# 97 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_7
# 98 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 99 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_7
# 100 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_B, PellucaFishery_EventScript_MainDude_Text_8
# 102 "data//maps/PellucaFishery/scripts.pory"
	delay 8
# 103 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_8
# 104 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 105 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_9
# 107 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 108 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 109 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_10
# 110 "data//maps/PellucaFishery/scripts.pory"
	release
# 111 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_BOSS, PellucaFishery_EventScript_MainDude_Text_11
# 113 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 114 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 115 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_12
# 116 "data//maps/PellucaFishery/scripts.pory"
	release
# 119 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8004, 2
# 120 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8005, 2
# 121 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8006, 8
# 122 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8007, 5
# 123 "data//maps/PellucaFishery/scripts.pory"
	special ShakeCamera
# 124 "data//maps/PellucaFishery/scripts.pory"
	delay 48
# 126 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_9
# 127 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S2, PellucaFishery_EventScript_MainDude_Movement_9
# 128 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S3, PellucaFishery_EventScript_MainDude_Movement_9
# 129 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_9
# 130 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S_MAIN, PellucaFishery_EventScript_MainDude_Movement_9
# 131 "data//maps/PellucaFishery/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaFishery_EventScript_MainDude_Movement_9
# 132 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 133 "data//maps/PellucaFishery/scripts.pory"
	delay 24
# 134 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 135 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_13
# 136 "data//maps/PellucaFishery/scripts.pory"
	release
# 139 "data//maps/PellucaFishery/scripts.pory"
	setflag FLAG_PELLUCA_REGULAR_CITIZENS
# 140 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZENS
# 142 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 3
# 143 "data//maps/PellucaFishery/scripts.pory"
	warp MAP_PELLUCA_CITY, 43, 28
# 146 "data//maps/PellucaFishery/scripts.pory"
	releaseall
	end


# 68 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_0:
# 68 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 68 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 68 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 68 "data//maps/PellucaFishery/scripts.pory"
	walk_right
	step_end

# 74 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_1:
# 74 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 74 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 74 "data//maps/PellucaFishery/scripts.pory"
	walk_up
# 74 "data//maps/PellucaFishery/scripts.pory"
	walk_up
# 74 "data//maps/PellucaFishery/scripts.pory"
	face_right
	step_end

# 75 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_2:
# 75 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 75 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 75 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 75 "data//maps/PellucaFishery/scripts.pory"
	face_up
	step_end

# 76 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_3:
# 76 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 76 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 76 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 76 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 76 "data//maps/PellucaFishery/scripts.pory"
	walk_left
	step_end

# 77 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_4:
# 77 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 77 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 77 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 77 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 77 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 77 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 77 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 77 "data//maps/PellucaFishery/scripts.pory"
	face_up
	step_end

# 87 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_5:
# 87 "data//maps/PellucaFishery/scripts.pory"
	jump_in_place_right
	step_end

# 93 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_6:
# 93 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 93 "data//maps/PellucaFishery/scripts.pory"
	face_right
	step_end

# 97 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_7:
# 97 "data//maps/PellucaFishery/scripts.pory"
	jump_in_place_left
	step_end

# 103 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_8:
# 103 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 103 "data//maps/PellucaFishery/scripts.pory"
	face_left
	step_end

# 126 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_9:
# 126 "data//maps/PellucaFishery/scripts.pory"
	emote_exclamation_mark
# 126 "data//maps/PellucaFishery/scripts.pory"
	jump_in_place_down
	step_end

PellucaFishery_NPC1_Text_0:
# 14 "data//maps/PellucaFishery/scripts.pory"
	.string "Yeah, that's right! I've got the Qwil\n"
	.string "blood in my veins! I dream about\l"
	.string "Qwilfish - nobody's a bigger\l"
	.string "Qwilsquadder than me!\p"
	.string "...\p"
	.string "...is that a Detective Academy pass?\p"
	.string "Listen, I'm an agent working\n"
	.string "undercover. Don't blow my cover!$"

PellucaFishery_NPC2_Text_0:
# 18 "data//maps/PellucaFishery/scripts.pory"
	.string "The boss is actually gonna make some\n"
	.string "real change happen around here! But for\l"
	.string "that, we need money. That's why we're\l"
	.string "taxing the citizens!$"

PellucaFishery_NPC3_Text_0:
# 26 "data//maps/PellucaFishery/scripts.pory"
	.string "What's up new recruit?$"

PellucaFishery_NPC4_Text_0:
# 30 "data//maps/PellucaFishery/scripts.pory"
	.string "This used to be a boathouse before we\n"
	.string "came in. All this stuff is from back\l"
	.string "then.$"

PellucaFishery_EventScript_MainDude_Text_0:
# 61 "data//maps/PellucaFishery/scripts.pory"
	.string "Q-squad Boss$"

PellucaFishery_EventScript_MainDude_Text_1:
# 62 "data//maps/PellucaFishery/scripts.pory"
	.string "So you're the new recruit, eh? Got a\n"
	.string "Qwilfish and everything, do ya?\p"
	.string "...\p"
	.string "Funny thing is, I don't remember any new\n"
	.string "recruits signing up.$"

PellucaFishery_EventScript_MainDude_Text_2:
# 82 "data//maps/PellucaFishery/scripts.pory"
	.string "Thought you were being slick, eh?\n"
	.string "Trying to pull a fast one on us?\p"
	.string "Make the kid pay, boys!$"

PellucaFishery_EventScript_MainDude_Text_3:
# 88 "data//maps/PellucaFishery/scripts.pory"
	.string "Q-squad Grunt$"

PellucaFishery_EventScript_MainDude_Text_4:
# 89 "data//maps/PellucaFishery/scripts.pory"
	.string "Aye-aye boss!\p"
	.string "You're about to get crushed, kid! That's\n"
	.string "what you get for messing with the\l"
	.string "Qwilsquad!$"

PellucaFishery_EventScript_MainDude_Text_5:
# 90 "data//maps/PellucaFishery/scripts.pory"
	.string "I let you down, boss!$"

PellucaFishery_EventScript_MainDude_Text_6:
# 95 "data//maps/PellucaFishery/scripts.pory"
	.string "Argh! This kid is good!$"

PellucaFishery_EventScript_MainDude_Text_7:
# 99 "data//maps/PellucaFishery/scripts.pory"
	.string "S'matter with you? You're ruining our\n"
	.string "squad's name!\p"
	.string "C'mon kid, you think you can get away\n"
	.string "with this?$"

PellucaFishery_EventScript_MainDude_Text_8:
# 100 "data//maps/PellucaFishery/scripts.pory"
	.string "No! I lost! Sorry, boss!$"

PellucaFishery_EventScript_MainDude_Text_9:
# 105 "data//maps/PellucaFishery/scripts.pory"
	.string "Boss! We-we can't handle this trainer.\n"
	.string "You gotta take care of this!$"

PellucaFishery_EventScript_MainDude_Text_10:
# 109 "data//maps/PellucaFishery/scripts.pory"
	.string "...\p"
	.string "Fine then.\p"
	.string "I respect a strong trainer. But respect\n"
	.string "goes only so far. You're going to pay\l"
	.string "for what you did to my boys!$"

PellucaFishery_EventScript_MainDude_Text_11:
# 111 "data//maps/PellucaFishery/scripts.pory"
	.string "Overqwil! Noo!$"

PellucaFishery_EventScript_MainDude_Text_12:
# 115 "data//maps/PellucaFishery/scripts.pory"
	.string "Argh! Fine! Fine!\p"
	.string "I'm man enough to admit defeat. You're\n"
	.string "strong, kid. I'll give you that.\p"
	.string "What's your name?\p"
	.string "{PLAYER}?\p"
	.string "...\p"
	.string "The mayor sent you? Why are you even\n"
	.string "listening to that blundering idiot?\p"
	.string "He's totally useless! That's why I\n"
	.string "decided to step in. Pelluca City is my\l"
	.string "home.\p"
	.string "But if you say so, I'm willing to\n"
	.string "consider talking to him again.$"

PellucaFishery_EventScript_MainDude_Text_13:
# 135 "data//maps/PellucaFishery/scripts.pory"
	.string "What was that?\p"
	.string "Boys - we gotta go outside and see\n"
	.string "what's going on!\p"
	.string "C'mon {PLAYER}!$"
