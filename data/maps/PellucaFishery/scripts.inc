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
	speakername PellucaFishery_NPC1_Text_0
# 15 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC1_Text_1, MSGBOX_NPC
	end


PellucaFishery_NPC2::
# 19 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_NPC1_Text_0
# 20 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC2_Text_0, MSGBOX_NPC
	end


PellucaFishery_NPC3::
# 24 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_NPC1_Text_0
# 25 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC3_Text_0, MSGBOX_NPC
	end


PellucaFishery_NPC4::
# 29 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC4_Text_0, MSGBOX_NPC
	end


PellucaFishery_EventScript_MainDude::
# 41 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 10
	goto_if_eq PellucaFishery_EventScript_MainDude_2
# 47 "data//maps/PellucaFishery/scripts.pory"
	lockall
# 48 "data//maps/PellucaFishery/scripts.pory"
	faceplayer
# 50 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 51 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_2
# 52 "data//maps/PellucaFishery/scripts.pory"
	release
# 54 "data//maps/PellucaFishery/scripts.pory"
	fadenewbgm MUS_ENCOUNTER_AQUA
# 56 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 58 "data//maps/PellucaFishery/scripts.pory"
	special SpawnCameraObject
# 59 "data//maps/PellucaFishery/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaFishery_EventScript_MainDude_Movement_0
# 60 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 61 "data//maps/PellucaFishery/scripts.pory"
	special RemoveCameraObject
# 65 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_1
# 66 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S3, PellucaFishery_EventScript_MainDude_Movement_2
# 67 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_3
# 68 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S2, PellucaFishery_EventScript_MainDude_Movement_4
# 69 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 71 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 72 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 73 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_3
# 74 "data//maps/PellucaFishery/scripts.pory"
	release
# 75 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 78 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_5
# 79 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_NPC1_Text_0
# 80 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_4
# 81 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_A, PellucaFishery_EventScript_MainDude_Text_5
# 82 "data//maps/PellucaFishery/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 84 "data//maps/PellucaFishery/scripts.pory"
	delay 8
# 85 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_6
# 92 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_NPC1_Text_0
# 93 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_6
# 95 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_7
# 96 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_NPC1_Text_0
# 97 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_7
# 98 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_B, PellucaFishery_EventScript_MainDude_Text_8
# 99 "data//maps/PellucaFishery/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 101 "data//maps/PellucaFishery/scripts.pory"
	delay 8
# 102 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_8
# 109 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_NPC1_Text_0
# 110 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_9
# 112 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 113 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 114 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_10
# 115 "data//maps/PellucaFishery/scripts.pory"
	release
# 116 "data//maps/PellucaFishery/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_QWILSQUAD_BOSS, PellucaFishery_EventScript_MainDude_Text_11
# 117 "data//maps/PellucaFishery/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 119 "data//maps/PellucaFishery/scripts.pory"
	delay 16
# 120 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 121 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_12
# 122 "data//maps/PellucaFishery/scripts.pory"
	release
# 124 "data//maps/PellucaFishery/scripts.pory"
	fadenewbgm SE_THUNDERSTORM
# 127 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8004, 2
# 128 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8005, 2
# 129 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8006, 8
# 130 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_0x8007, 5
# 131 "data//maps/PellucaFishery/scripts.pory"
	special ShakeCamera
# 132 "data//maps/PellucaFishery/scripts.pory"
	delay 48
# 134 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S1, PellucaFishery_EventScript_MainDude_Movement_9
# 135 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S2, PellucaFishery_EventScript_MainDude_Movement_9
# 136 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S3, PellucaFishery_EventScript_MainDude_Movement_9
# 137 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S4, PellucaFishery_EventScript_MainDude_Movement_9
# 138 "data//maps/PellucaFishery/scripts.pory"
	applymovement LOCALID_S_MAIN, PellucaFishery_EventScript_MainDude_Movement_9
# 139 "data//maps/PellucaFishery/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaFishery_EventScript_MainDude_Movement_9
# 140 "data//maps/PellucaFishery/scripts.pory"
	waitmovement 0
# 141 "data//maps/PellucaFishery/scripts.pory"
	delay 24
# 142 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 143 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_13
# 144 "data//maps/PellucaFishery/scripts.pory"
	release
# 147 "data//maps/PellucaFishery/scripts.pory"
	setflag FLAG_HIDE_PELLUCA_GAB
# 151 "data//maps/PellucaFishery/scripts.pory"
	setflag FLAG_PELLUCA_REGULAR_CITIZENS
# 152 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZENS
# 154 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A
# 155 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B
# 156 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C
# 157 "data//maps/PellucaFishery/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D
# 159 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 3
# 160 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 1
# 161 "data//maps/PellucaFishery/scripts.pory"
	warp MAP_PELLUCA_CITY, 43, 28
# 166 "data//maps/PellucaFishery/scripts.pory"
	releaseall
	end

PellucaFishery_EventScript_MainDude_2:
# 42 "data//maps/PellucaFishery/scripts.pory"
	speakername PellucaFishery_EventScript_MainDude_Text_0
# 43 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_1, MSGBOX_NPC
	end


# 59 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_0:
# 59 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 59 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 59 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 59 "data//maps/PellucaFishery/scripts.pory"
	walk_right
	step_end

# 65 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_1:
# 65 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 65 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 65 "data//maps/PellucaFishery/scripts.pory"
	walk_up
# 65 "data//maps/PellucaFishery/scripts.pory"
	walk_up
# 65 "data//maps/PellucaFishery/scripts.pory"
	face_right
	step_end

# 66 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_2:
# 66 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 66 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 66 "data//maps/PellucaFishery/scripts.pory"
	walk_right
# 66 "data//maps/PellucaFishery/scripts.pory"
	face_up
	step_end

# 67 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_3:
# 67 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 67 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 67 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 67 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 67 "data//maps/PellucaFishery/scripts.pory"
	walk_left
	step_end

# 68 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_4:
# 68 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 68 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 68 "data//maps/PellucaFishery/scripts.pory"
	walk_left
# 68 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 68 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 68 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 68 "data//maps/PellucaFishery/scripts.pory"
	walk_down
# 68 "data//maps/PellucaFishery/scripts.pory"
	face_up
	step_end

# 78 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_5:
# 78 "data//maps/PellucaFishery/scripts.pory"
	jump_in_place_right
	step_end

# 85 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_6:
# 86 "data//maps/PellucaFishery/scripts.pory"
	lock_anim
# 87 "data//maps/PellucaFishery/scripts.pory"
	lock_facing_direction
# 88 "data//maps/PellucaFishery/scripts.pory"
	walk_faster_left
# 89 "data//maps/PellucaFishery/scripts.pory"
	unlock_anim
# 90 "data//maps/PellucaFishery/scripts.pory"
	unlock_facing_direction
	step_end

# 95 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_7:
# 95 "data//maps/PellucaFishery/scripts.pory"
	jump_in_place_left
	step_end

# 102 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_8:
# 103 "data//maps/PellucaFishery/scripts.pory"
	lock_anim
# 104 "data//maps/PellucaFishery/scripts.pory"
	lock_facing_direction
# 105 "data//maps/PellucaFishery/scripts.pory"
	walk_faster_right
# 106 "data//maps/PellucaFishery/scripts.pory"
	unlock_anim
# 107 "data//maps/PellucaFishery/scripts.pory"
	unlock_facing_direction
	step_end

# 134 "data//maps/PellucaFishery/scripts.pory"
PellucaFishery_EventScript_MainDude_Movement_9:
# 134 "data//maps/PellucaFishery/scripts.pory"
	emote_exclamation_mark
# 134 "data//maps/PellucaFishery/scripts.pory"
	jump_in_place_down
	step_end

PellucaFishery_NPC1_Text_0:
# 14 "data//maps/PellucaFishery/scripts.pory"
	.string "Q-squad Grunt$"

PellucaFishery_NPC1_Text_1:
# 15 "data//maps/PellucaFishery/scripts.pory"
	.string "Yeah, that's right! I've got the Qwil\n"
	.string "blood in my veins! I dream about\l"
	.string "Qwilfish - nobody's a bigger\l"
	.string "Qwilsquadder than me!\p"
	.string "...\p"
	.string "...is that a Detective Academy pass?\p"
	.string "Listen, I'm an agent working\n"
	.string "undercover. Don't blow my cover!$"

PellucaFishery_NPC2_Text_0:
# 20 "data//maps/PellucaFishery/scripts.pory"
	.string "The boss is actually gonna make some\n"
	.string "real change happen around here!\p"
	.string "But for that, we gotta have money.\n"
	.string "That's why we're taxing the citizens!$"

PellucaFishery_NPC3_Text_0:
# 25 "data//maps/PellucaFishery/scripts.pory"
	.string "What's up new recruit?$"

PellucaFishery_NPC4_Text_0:
# 29 "data//maps/PellucaFishery/scripts.pory"
	.string "This was a fishery before we came in.\n"
	.string "All this stuff is from back then.$"

PellucaFishery_EventScript_MainDude_Text_0:
# 42 "data//maps/PellucaFishery/scripts.pory"
	.string "Q-squad Boss$"

PellucaFishery_EventScript_MainDude_Text_1:
# 43 "data//maps/PellucaFishery/scripts.pory"
	.string "How's it going, {PLAYER}?$"

PellucaFishery_EventScript_MainDude_Text_2:
# 51 "data//maps/PellucaFishery/scripts.pory"
	.string "So you're the new recruit, eh?\n"
	.string "Got a Qwilfish and everything, do ya?\p"
	.string "...\p"
	.string "Funny thing is, I don't remember any\n"
	.string "new recruits signing up.$"

PellucaFishery_EventScript_MainDude_Text_3:
# 73 "data//maps/PellucaFishery/scripts.pory"
	.string "Thought you were being slick, eh?\n"
	.string "Trying to pull a fast one on us?\p"
	.string "Make the kid pay, boys!$"

PellucaFishery_EventScript_MainDude_Text_4:
# 80 "data//maps/PellucaFishery/scripts.pory"
	.string "Aye-aye boss!\p"
	.string "I'll crush you, kid! That's what you get\n"
	.string "for messing with the Qwilsquad!$"

PellucaFishery_EventScript_MainDude_Text_5:
# 81 "data//maps/PellucaFishery/scripts.pory"
	.string "I let you down, boss!$"

PellucaFishery_EventScript_MainDude_Text_6:
# 93 "data//maps/PellucaFishery/scripts.pory"
	.string "Argh! This kid is good!$"

PellucaFishery_EventScript_MainDude_Text_7:
# 97 "data//maps/PellucaFishery/scripts.pory"
	.string "S'matter with you, losing like that?\p"
	.string "You're ruining our squad's name!\p"
	.string "C'mon kid - you really think you can\n"
	.string "get away with this?$"

PellucaFishery_EventScript_MainDude_Text_8:
# 98 "data//maps/PellucaFishery/scripts.pory"
	.string "No! I lost! Sorry, boss!$"

PellucaFishery_EventScript_MainDude_Text_9:
# 110 "data//maps/PellucaFishery/scripts.pory"
	.string "Boss! We-we can't handle this trainer.\n"
	.string "You gotta take care of this!$"

PellucaFishery_EventScript_MainDude_Text_10:
# 114 "data//maps/PellucaFishery/scripts.pory"
	.string "...\p"
	.string "Fine then.\p"
	.string "I respect a strong trainer. But respect\n"
	.string "goes only so far. You're going to pay\l"
	.string "for what you did to my boys!$"

PellucaFishery_EventScript_MainDude_Text_11:
# 116 "data//maps/PellucaFishery/scripts.pory"
	.string "Overqwil! Noo!$"

PellucaFishery_EventScript_MainDude_Text_12:
# 121 "data//maps/PellucaFishery/scripts.pory"
	.string "Argh! Fine! Fine!\p"
	.string "I'm man enough to admit defeat.\n"
	.string "You're tough, kid - I'll give you that.\p"
	.string "What's your name?\p"
	.string "{PLAYER}?\p"
	.string "...\p"
	.string "The mayor sent you? Why are you even\n"
	.string "listening to that blundering idiot?\p"
	.string "He's totally useless! That's why I\n"
	.string "decided to step in. Pelluca City is my\l"
	.string "home - it's all our homes!\p"
	.string "But if you say so, I'm willing to\n"
	.string "consider talking to him again.$"

PellucaFishery_EventScript_MainDude_Text_13:
# 143 "data//maps/PellucaFishery/scripts.pory"
	.string "What was that?\p"
	.string "Boys - we gotta go outside and see\n"
	.string "what's going on!\p"
	.string "C'mon {PLAYER} - you too!$"
