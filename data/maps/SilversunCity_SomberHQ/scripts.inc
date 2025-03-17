# 1 "data//maps/SilversunCity_SomberHQ/scripts.pory"

# 2 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_PROF, 1
# 3 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_MELEA, 2
# 4 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_GAB, 3
# 5 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_GRUNT, 4

SilversunCity_SomberHQ_MapScripts::
	.byte 0


SilversunCity_SomberHQ_EventScript_Main_Trigger0::
# 18 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_SomberHQ_EventScript_Main_Trigger0_2
# 19 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 21 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 22 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	call SilversunCity_SomberHQ_EventScript_Main
	return

SilversunCity_SomberHQ_EventScript_Main_Trigger0_2:
	end


SilversunCity_SomberHQ_EventScript_Main_Trigger1::
# 25 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_SomberHQ_EventScript_Main_Trigger1_2
# 26 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger1_Movement_0
# 28 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 29 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	call SilversunCity_SomberHQ_EventScript_Main
	return

SilversunCity_SomberHQ_EventScript_Main_Trigger1_2:
	end


SilversunCity_SomberHQ_EventScript_Main::
# 36 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 37 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 38 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 39 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_0
# 40 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 41 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 42 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 43 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 44 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_1
# 45 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 48 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 49 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_2
# 50 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 55 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 56 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 57 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 61 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 62 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 64 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_3
# 65 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 66 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 68 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8004, 3
# 69 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8005, 3
# 70 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8006, 8
# 71 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8007, 5
# 72 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	special ShakeCamera
# 73 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_4
# 76 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 78 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 80 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 82 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 85 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_5
# 86 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 90 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 91 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 92 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 93 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 94 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 95 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 96 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_6
# 97 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 98 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 99 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_7
# 100 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 101 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 102 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_6
# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 104 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_8
# 105 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_7
# 107 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_9
# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 111 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_8
# 113 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 115 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 116 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 117 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_9
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 119 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 121 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 122 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_10
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_11
# 125 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 126 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GAB
# 130 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_11
# 131 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_12
# 133 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_12
# 137 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_no_intro TRAINER_SOMBERHQ_MELEA, SilversunCity_SomberHQ_EventScript_Main_Text_13
# 140 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_MAIN
# 145 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_14
# 146 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_13
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_14
# 149 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 150 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_6
# 151 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_15
# 152 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 153 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_14
# 154 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 155 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GRUNT
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_15
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GRUNT
# 161 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_16
# 162 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_17
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_16
# 165 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 169 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	warp MAP_SILVERSUN_CITY, 24, 6
# 170 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	return


# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0:
# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
	step_end

# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Trigger1_Movement_0:
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
	step_end

# 36 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_0:
# 36 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
	step_end

# 41 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_1:
# 41 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_2:
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_3:
# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_4:
# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_down
	step_end

# 80 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_5:
# 80 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_up
	step_end

# 96 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_6:
# 96 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 99 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_7:
# 99 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_question_mark
	step_end

# 104 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_8:
# 104 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_up
	step_end

# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_9:
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_10:
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_11:
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_down
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
	step_end

# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_12:
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_13:
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_14:
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_15:
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 161 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_16:
# 161 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 162 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_17:
# 162 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 162 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 162 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

SilversunCity_SomberHQ_EventScript_Main_Text_0:
# 39 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: It's no use Professor! We already\n"
	.string "know where you hid the dreamstone. It's\l"
	.string "on MT CERAM.\p"
	.string "Hahaha! What a pathetic attempt at\n"
	.string "hiding the dreamstone from us.$"

SilversunCity_SomberHQ_EventScript_Main_Text_1:
# 44 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: Fine! Go get the dreamstone,\n"
	.string "you rascal! You'll repeat what happened\l"
	.string "at MT CERAM. Without the Dreamalyser,\l"
	.string "the dreamstone will transport you to\l"
	.string "the past. It's uncontrollable! And I will\l"
	.string "NEVER reveal the Dreamalyser\l"
	.string "blueprints to the likes of you!\p"
	.string "???: Oh Professor...you underestimate\n"
	.string "us. You see, a while ago, we obtained the\l"
	.string "blueprints from your lab.$"

SilversunCity_SomberHQ_EventScript_Main_Text_2:
# 49 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: But how?!\p"
	.string "???: Not to worry. Nobody at the lab was\n"
	.string "harmed. Your lab and Team Somber share\l"
	.string "a symbiotic relationship after all.\p"
	.string "TENEBRIS: Symbiotes? You thugs are\n"
	.string "just parasites!\p"
	.string "???: Enough of this chatter. We have a\n"
	.string "guest.$"

SilversunCity_SomberHQ_EventScript_Main_Text_3:
# 64 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Come here child. Let me see your\n"
	.string "face.$"

SilversunCity_SomberHQ_EventScript_Main_Text_4:
# 73 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: I said COME!!$"

SilversunCity_SomberHQ_EventScript_Main_Text_5:
# 85 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: So you're the one who defeated\n"
	.string "MOXIE at MT CERAM. So young...you\l"
	.string "must've gotten really lucky.\p"
	.string "???: Meet your Professor. He's been of\n"
	.string "invaluable help to us...albeit\l"
	.string "unwillingly.\p"
	.string "TENEBRIS: {PLAYER}. I recall signing\n"
	.string "your acceptance letter. I-I wish we had\l"
	.string "met under better circumstances.$"

SilversunCity_SomberHQ_EventScript_Main_Text_6:
# 102 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: How did you get inside our\n"
	.string "headquarters, I wonder...$"

SilversunCity_SomberHQ_EventScript_Main_Text_7:
# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GRUNT: Boss! Boss! GABRIELLE was on\n"
	.string "guard duty.\p"
	.string "???: So it was you, GABRIELLE?\n"
	.string "Hmm...what a blunder. MOXIE was right.\l"
	.string "You really are useless.$"

SilversunCity_SomberHQ_EventScript_Main_Text_8:
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: Miss MELEA, I-I'm sorry. I\n"
	.string "owed him and I didn't-$"

SilversunCity_SomberHQ_EventScript_Main_Text_9:
# 117 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: You mean that it was\n"
	.string "INTENTIONAL!? And don't use my name in\l"
	.string "public, you moron!\p"
	.string "GABRIELLE: Y-yes, I'm so sorry. I just -\p"
	.string "MELEA: You just NOTHING! You BETRAYED\n"
	.string "us! Out! OUT! You're no longer a part of\l"
	.string "Team Somber! And I'm going to have a\l"
	.string "squad chase you all over Cormoria!$"

SilversunCity_SomberHQ_EventScript_Main_Text_10:
# 122 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: No boss, please! What about\n"
	.string "my promise?\p"
	.string "MELEA: Should've thought of that\n"
	.string "before betraying us then! To hell with\l"
	.string "your promise! Now GET OUT!\p"
	.string "GABRIELLE:...$"

SilversunCity_SomberHQ_EventScript_Main_Text_11:
# 130 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Absolutely pathetic. I would\n"
	.string "deal with her myself...if not for you,\l"
	.string "{PLAYER}.$"

SilversunCity_SomberHQ_EventScript_Main_Text_12:
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: So you know our plan now. We're\n"
	.string "going to build a Dreamalyser and take it\l"
	.string "to MT MIRROH. We're going to obtain the\l"
	.string "dreamstone there...and the rest? Well\l"
	.string "you'll never see any of it, because I'm\l"
	.string "going to put an end to you right here,\l"
	.string "right now!$"

SilversunCity_SomberHQ_EventScript_Main_Text_13:
# 137 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stupid child!$"

SilversunCity_SomberHQ_EventScript_Main_Text_14:
# 145 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Unbelievable! Just unbelievable!\p"
	.string "MELEA: Fine. Keep your stupid\n"
	.string "Professor, child! We've got what we need\l"
	.string "from him anyway. Let's go!$"

SilversunCity_SomberHQ_EventScript_Main_Text_15:
# 151 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Heed this warning, {PLAYER}.\n"
	.string "Do NOT try to thwart us at MT MIRROH, or\l"
	.string "else we will crush you!$"

SilversunCity_SomberHQ_EventScript_Main_Text_16:
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: You saved me. You are an\n"
	.string "impressive trainer. I made the right\l"
	.string "choice.\p"
	.string "...\p"
	.string "TENEBRIS: There are detectives\n"
	.string "outside? Let's go and meet them.$"
