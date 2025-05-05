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
	msgbox PellucaFishery_NPC3_Text_0, MSGBOX_NPC
	end


PellucaFishery_NPC4::
# 26 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC4_Text_0, MSGBOX_NPC
	end


PellucaFishery_EventScript_MainDude::
# 38 "data//maps/PellucaFishery/scripts.pory"
	lockall
# 39 "data//maps/PellucaFishery/scripts.pory"
	faceplayer
# 41 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 42 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_1
# 43 "data//maps/PellucaFishery/scripts.pory"
	release
# 45 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 47 "data//maps/PellucaFishery/scripts.pory"
	special SpawnCameraObject
# 48 "data//maps/PellucaFishery/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaFishery_EventScript_MainDude_Movement_0
# 49 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 50 "data//maps/PellucaFishery/scripts.pory"
	special RemoveCameraObject
# 54 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_1
# 55 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S3, PellucaFishery_EventScript_MainDude_Movement_2
# 56 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_3
# 57 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S2, PellucaFishery_EventScript_MainDude_Movement_4
# 58 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 60 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 61 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 62 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_2
# 63 "data//maps/PellucaFishery/scripts.pory"
	release
# 64 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 67 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_5
# 68 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 69 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_4
# 70 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_A, PellucaFishery_EventScript_MainDude_Text_5
# 72 "data//maps/PellucaFishery/scripts.pory"
	delay 8
# 73 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_6
# 74 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 75 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_6
# 77 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_7
# 78 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 79 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_7
# 80 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_B, PellucaFishery_EventScript_MainDude_Text_8
# 82 "data//maps/PellucaFishery/scripts.pory"
	delay 8
# 83 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_8
# 84 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_3
# 85 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_9
# 87 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 88 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 89 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_10
# 90 "data//maps/PellucaFishery/scripts.pory"
	release
# 91 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_BOSS, PellucaFishery_EventScript_MainDude_Text_11
# 93 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 94 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 95 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_12
# 96 "data//maps/PellucaFishery/scripts.pory"
	release
# 99 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8004, 2
# 100 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8005, 2
# 101 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8006, 8
# 102 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8007, 5
# 103 "data//maps/PellucaFishery/scripts.pory"
	special ShakeCamera
# 104 "data//maps/PellucaFishery/scripts.pory"
	delay 48
# 106 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_9
# 107 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S2, PellucaFishery_EventScript_MainDude_Movement_9
# 108 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S3, PellucaFishery_EventScript_MainDude_Movement_9
# 109 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_9
# 110 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S_MAIN, PellucaFishery_EventScript_MainDude_Movement_9
# 111 "data//maps/PellucaFishery/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaFishery_EventScript_MainDude_Movement_9
# 112 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 113 "data//maps/PellucaFishery/scripts.pory"
	delay 24
# 114 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 115 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_13
# 116 "data//maps/PellucaFishery/scripts.pory"
	release
# 119 "data//maps/PellucaFishery/scripts.pory"
	setflag FLAG_PELLUCA_REGULAR_CITIZENS
# 120 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZENS
# 122 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 3
# 123 "data//maps/PellucaFishery/scripts.pory"
	warp MAP_PELLUCA_CITY, 43, 28
# 126 "data//maps/PellucaFishery/scripts.pory"
	releaseall
	end


# 48 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_0:
# 48 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 48 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 48 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 48 "data//maps/PellucaFishery/scripts.pory"
	walk_right
	step_end

# 54 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_1:
# 54 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 54 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 54 "data//maps/PellucaFishery/scripts.pory"
	walk_up
# 54 "data//maps/PellucaFishery/scripts.pory"
	walk_up
# 54 "data//maps/PellucaFishery/scripts.pory"
	face_right
	step_end

# 55 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_2:
# 55 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 55 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 55 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 55 "data//maps/PellucaFishery/scripts.pory"
	face_up
	step_end

# 56 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_3:
# 56 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 56 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 56 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 56 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 56 "data//maps/PellucaFishery/scripts.pory"
	walk_left
	step_end

# 57 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_4:
# 57 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 57 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 57 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 57 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 57 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 57 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 57 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 57 "data//maps/PellucaFishery/scripts.pory"
	face_up
	step_end

# 67 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_5:
# 67 "data//maps/PellucaFishery/scripts.pory"
	jump_in_place_right
	step_end

# 73 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_6:
# 73 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 73 "data//maps/PellucaFishery/scripts.pory"
	face_right
	step_end

# 77 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_7:
# 77 "data//maps/PellucaFishery/scripts.pory"
	jump_in_place_left
	step_end

# 83 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_8:
# 83 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 83 "data//maps/PellucaFishery/scripts.pory"
	face_left
	step_end

# 106 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_9:
# 106 "data//maps/PellucaFishery/scripts.pory"
	emote_exclamation_mark
# 106 "data//maps/PellucaFishery/scripts.pory"
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
# 22 "data//maps/PellucaFishery/scripts.pory"
	.string "What's up new recruit?$"

PellucaFishery_NPC4_Text_0:
# 26 "data//maps/PellucaFishery/scripts.pory"
	.string "This used to be a boathouse before we\n"
	.string "came in. All this stuff is from back\l"
	.string "then.$"

PellucaFishery_EventScript_MainDude_Text_0:
# 41 "data//maps/PellucaFishery/scripts.pory"
	.string "Q-squad Boss$"

PellucaFishery_EventScript_MainDude_Text_1:
# 42 "data//maps/PellucaFishery/scripts.pory"
	.string "So you're the new recruit, eh? Got a\n"
	.string "Qwilfish and everything, do ya?\p"
	.string "...\p"
	.string "Funny thing is, I don't remember any new\n"
	.string "recruits signing up.$"

PellucaFishery_EventScript_MainDude_Text_2:
# 62 "data//maps/PellucaFishery/scripts.pory"
	.string "Thought you were being slick, eh?\n"
	.string "Trying to pull a fast one on us?\p"
	.string "Make the kid pay, boys!$"

PellucaFishery_EventScript_MainDude_Text_3:
# 68 "data//maps/PellucaFishery/scripts.pory"
	.string "Q-squad Grunt$"

PellucaFishery_EventScript_MainDude_Text_4:
# 69 "data//maps/PellucaFishery/scripts.pory"
	.string "Aye-aye boss!\p"
	.string "You're about to get crushed, kid! That's\n"
	.string "what you get for messing with the\l"
	.string "Qwilsquad!$"

PellucaFishery_EventScript_MainDude_Text_5:
# 70 "data//maps/PellucaFishery/scripts.pory"
	.string "I let you down, boss!$"

PellucaFishery_EventScript_MainDude_Text_6:
# 75 "data//maps/PellucaFishery/scripts.pory"
	.string "Argh! This kid is good!$"

PellucaFishery_EventScript_MainDude_Text_7:
# 79 "data//maps/PellucaFishery/scripts.pory"
	.string "S'matter with you? You're ruining our\n"
	.string "squad's name!\p"
	.string "C'mon kid, you think you can get away\n"
	.string "with this?$"

PellucaFishery_EventScript_MainDude_Text_8:
# 80 "data//maps/PellucaFishery/scripts.pory"
	.string "No! I lost! Sorry, boss!$"

PellucaFishery_EventScript_MainDude_Text_9:
# 85 "data//maps/PellucaFishery/scripts.pory"
	.string "Boss! We-we can't handle this trainer.\n"
	.string "You gotta take care of this!$"

PellucaFishery_EventScript_MainDude_Text_10:
# 89 "data//maps/PellucaFishery/scripts.pory"
	.string "...\p"
	.string "Fine then.\p"
	.string "I respect a strong trainer. But respect\n"
	.string "goes only so far. You're going to pay\l"
	.string "for what you did to my boys!$"

PellucaFishery_EventScript_MainDude_Text_11:
# 91 "data//maps/PellucaFishery/scripts.pory"
	.string "Overqwil! Noo!$"

PellucaFishery_EventScript_MainDude_Text_12:
# 95 "data//maps/PellucaFishery/scripts.pory"
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
# 115 "data//maps/PellucaFishery/scripts.pory"
	.string "What was that?\p"
	.string "Boys - we gotta go outside and see\n"
	.string "what's going on!\p"
	.string "C'mon {PLAYER}!$"
