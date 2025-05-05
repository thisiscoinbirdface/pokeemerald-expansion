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
# 43 "data//maps/PellucaFishery/scripts.pory"
	lockall
# 44 "data//maps/PellucaFishery/scripts.pory"
	faceplayer
# 46 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 47 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_1
# 48 "data//maps/PellucaFishery/scripts.pory"
	release
# 50 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 52 "data//maps/PellucaFishery/scripts.pory"
	special SpawnCameraObject
# 53 "data//maps/PellucaFishery/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaFishery_EventScript_MainDude_Movement_0
# 54 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 55 "data//maps/PellucaFishery/scripts.pory"
	special RemoveCameraObject
# 59 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_1
# 60 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S3, PellucaFishery_EventScript_MainDude_Movement_2
# 61 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_3
# 62 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S2, PellucaFishery_EventScript_MainDude_Movement_4
# 63 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 65 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 66 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 67 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_2
# 68 "data//maps/PellucaFishery/scripts.pory"
	release
# 69 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 72 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_5
# 73 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 74 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_4
# 75 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_A, PellucaFishery_EventScript_MainDude_Text_5
# 77 "data//maps/PellucaFishery/scripts.pory"
	delay 8
# 78 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_6
# 79 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 80 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_6
# 82 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_7
# 83 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 84 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_7
# 85 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_B, PellucaFishery_EventScript_MainDude_Text_8
# 87 "data//maps/PellucaFishery/scripts.pory"
	delay 8
# 88 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_8
# 89 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 90 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_9
# 92 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 93 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 94 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_10
# 95 "data//maps/PellucaFishery/scripts.pory"
	release
# 96 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_BOSS, PellucaFishery_EventScript_MainDude_Text_11
# 98 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 99 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 100 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_12
# 101 "data//maps/PellucaFishery/scripts.pory"
	release
# 104 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8004, 2
# 105 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8005, 2
# 106 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8006, 8
# 107 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8007, 5
# 108 "data//maps/PellucaFishery/scripts.pory"
	special ShakeCamera
# 109 "data//maps/PellucaFishery/scripts.pory"
	delay 48
# 111 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_9
# 112 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S2, PellucaFishery_EventScript_MainDude_Movement_9
# 113 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S3, PellucaFishery_EventScript_MainDude_Movement_9
# 114 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_9
# 115 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S_MAIN, PellucaFishery_EventScript_MainDude_Movement_9
# 116 "data//maps/PellucaFishery/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaFishery_EventScript_MainDude_Movement_9
# 117 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 118 "data//maps/PellucaFishery/scripts.pory"
	delay 24
# 119 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 120 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_13
# 121 "data//maps/PellucaFishery/scripts.pory"
	release
# 124 "data//maps/PellucaFishery/scripts.pory"
	setflag FLAG_PELLUCA_REGULAR_CITIZENS
# 125 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZENS
# 127 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A
# 128 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B
# 129 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C
# 130 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D
# 132 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 3
# 133 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 1
# 134 "data//maps/PellucaFishery/scripts.pory"
	warp MAP_PELLUCA_CITY, 43, 28
# 139 "data//maps/PellucaFishery/scripts.pory"
	releaseall
	end


# 53 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_0:
# 53 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 53 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 53 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 53 "data//maps/PellucaFishery/scripts.pory"
	walk_right
	step_end

# 59 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_1:
# 59 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 59 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 59 "data//maps/PellucaFishery/scripts.pory"
	walk_up
# 59 "data//maps/PellucaFishery/scripts.pory"
	walk_up
# 59 "data//maps/PellucaFishery/scripts.pory"
	face_right
	step_end

# 60 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_2:
# 60 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 60 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 60 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 60 "data//maps/PellucaFishery/scripts.pory"
	face_up
	step_end

# 61 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_3:
# 61 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 61 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 61 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 61 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 61 "data//maps/PellucaFishery/scripts.pory"
	walk_left
	step_end

# 62 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_4:
# 62 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 62 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 62 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 62 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 62 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 62 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 62 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 62 "data//maps/PellucaFishery/scripts.pory"
	face_up
	step_end

# 72 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_5:
# 72 "data//maps/PellucaFishery/scripts.pory"
	jump_in_place_right
	step_end

# 78 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_6:
# 78 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 78 "data//maps/PellucaFishery/scripts.pory"
	face_right
	step_end

# 82 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_7:
# 82 "data//maps/PellucaFishery/scripts.pory"
	jump_in_place_left
	step_end

# 88 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_8:
# 88 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 88 "data//maps/PellucaFishery/scripts.pory"
	face_left
	step_end

# 111 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_9:
# 111 "data//maps/PellucaFishery/scripts.pory"
	emote_exclamation_mark
# 111 "data//maps/PellucaFishery/scripts.pory"
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
# 46 "data//maps/PellucaFishery/scripts.pory"
	.string "Q-squad Boss$"

PellucaFishery_EventScript_MainDude_Text_1:
# 47 "data//maps/PellucaFishery/scripts.pory"
	.string "So you're the new recruit, eh? Got a\n"
	.string "Qwilfish and everything, do ya?\p"
	.string "...\p"
	.string "Funny thing is, I don't remember any new\n"
	.string "recruits signing up.$"

PellucaFishery_EventScript_MainDude_Text_2:
# 67 "data//maps/PellucaFishery/scripts.pory"
	.string "Thought you were being slick, eh?\n"
	.string "Trying to pull a fast one on us?\p"
	.string "Make the kid pay, boys!$"

PellucaFishery_EventScript_MainDude_Text_3:
# 73 "data//maps/PellucaFishery/scripts.pory"
	.string "Q-squad Grunt$"

PellucaFishery_EventScript_MainDude_Text_4:
# 74 "data//maps/PellucaFishery/scripts.pory"
	.string "Aye-aye boss!\p"
	.string "You're about to get crushed, kid! That's\n"
	.string "what you get for messing with the\l"
	.string "Qwilsquad!$"

PellucaFishery_EventScript_MainDude_Text_5:
# 75 "data//maps/PellucaFishery/scripts.pory"
	.string "I let you down, boss!$"

PellucaFishery_EventScript_MainDude_Text_6:
# 80 "data//maps/PellucaFishery/scripts.pory"
	.string "Argh! This kid is good!$"

PellucaFishery_EventScript_MainDude_Text_7:
# 84 "data//maps/PellucaFishery/scripts.pory"
	.string "S'matter with you? You're ruining our\n"
	.string "squad's name!\p"
	.string "C'mon kid, you think you can get away\n"
	.string "with this?$"

PellucaFishery_EventScript_MainDude_Text_8:
# 85 "data//maps/PellucaFishery/scripts.pory"
	.string "No! I lost! Sorry, boss!$"

PellucaFishery_EventScript_MainDude_Text_9:
# 90 "data//maps/PellucaFishery/scripts.pory"
	.string "Boss! We-we can't handle this trainer.\n"
	.string "You gotta take care of this!$"

PellucaFishery_EventScript_MainDude_Text_10:
# 94 "data//maps/PellucaFishery/scripts.pory"
	.string "...\p"
	.string "Fine then.\p"
	.string "I respect a strong trainer. But respect\n"
	.string "goes only so far. You're going to pay\l"
	.string "for what you did to my boys!$"

PellucaFishery_EventScript_MainDude_Text_11:
# 96 "data//maps/PellucaFishery/scripts.pory"
	.string "Overqwil! Noo!$"

PellucaFishery_EventScript_MainDude_Text_12:
# 100 "data//maps/PellucaFishery/scripts.pory"
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
# 120 "data//maps/PellucaFishery/scripts.pory"
	.string "What was that?\p"
	.string "Boys - we gotta go outside and see\n"
	.string "what's going on!\p"
	.string "C'mon {PLAYER}!$"
