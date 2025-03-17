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
# 38 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_PROF
# 39 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	warp MAP_SILVERSUN_CITY, 24, 6
# 40 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_MAIN
# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 48 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 49 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_0
# 50 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 51 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 52 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_1
# 55 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 56 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 57 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 58 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 59 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_2
# 60 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 64 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 65 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 66 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 67 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 71 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 72 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 73 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 74 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_3
# 75 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 76 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 78 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8004, 3
# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8005, 3
# 80 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8006, 8
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8007, 5
# 82 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	special ShakeCamera
# 83 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_4
# 86 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 88 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 89 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 90 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 91 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 92 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 95 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_5
# 96 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 97 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 100 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 101 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 102 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 104 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 105 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_6
# 107 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_7
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 111 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_6
# 113 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_8
# 115 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 116 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_7
# 117 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_9
# 119 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 121 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 122 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_8
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 125 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 126 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 127 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_9
# 128 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 129 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 130 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 131 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_10
# 133 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_11
# 135 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 136 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GAB
# 140 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_11
# 141 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_12
# 143 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 144 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_12
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_no_intro TRAINER_SOMBERHQ_MELEA, SilversunCity_SomberHQ_EventScript_Main_Text_13
# 150 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_MAIN
# 155 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_14
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_13
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_14
# 159 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 160 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_6
# 161 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_15
# 162 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_15
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_16
# 165 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 166 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GRUNT
# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_17
# 168 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 169 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_MELEA
# 172 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_15
# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_18
# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 175 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_16
# 176 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 178 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_PROF
# 181 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	warp MAP_SILVERSUN_CITY, 24, 6
# 182 "data//maps/SilversunCity_SomberHQ/scripts.pory"
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

# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_0:
# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
	step_end

# 51 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_1:
# 51 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_2:
# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_3:
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 89 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_4:
# 89 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_down
	step_end

# 90 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_5:
# 90 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_up
	step_end

# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_6:
# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_7:
# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_question_mark
	step_end

# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_8:
# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_up
	step_end

# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_9:
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_10:
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_11:
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_down
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
	step_end

# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_12:
# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_13:
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_14:
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_15:
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_16:
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
	step_end

# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_17:
# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_18:
# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

SilversunCity_SomberHQ_EventScript_Main_Text_0:
# 49 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: It's no use Professor! We already\n"
	.string "know you hid your dreamstone in MT\l"
	.string "MIRROH.\p"
	.string "Hahaha! What a pathetic attempt at\n"
	.string "hiding the dreamstone from us.$"

SilversunCity_SomberHQ_EventScript_Main_Text_1:
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
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
# 59 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: But how?!\p"
	.string "???: Not to worry. Nobody at the lab was\n"
	.string "harmed. Your lab and Team Somber share\l"
	.string "a symbiotic relationship after all.\p"
	.string "TENEBRIS: Symbiotes? You thugs are\n"
	.string "just parasites!\p"
	.string "???: Enough of this chatter. We have a\n"
	.string "guest.$"

SilversunCity_SomberHQ_EventScript_Main_Text_3:
# 74 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Come here child. Let me see your\n"
	.string "face.$"

SilversunCity_SomberHQ_EventScript_Main_Text_4:
# 83 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: I said COME!!$"

SilversunCity_SomberHQ_EventScript_Main_Text_5:
# 95 "data//maps/SilversunCity_SomberHQ/scripts.pory"
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
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: How did you get inside our\n"
	.string "headquarters, I wonder...$"

SilversunCity_SomberHQ_EventScript_Main_Text_7:
# 116 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GRUNT: Boss! Boss! GABRIELLE was on\n"
	.string "guard duty.\p"
	.string "???: So it was you, GABRIELLE?\n"
	.string "Hmm...what a blunder. MOXIE was right.\l"
	.string "You really are useless.$"

SilversunCity_SomberHQ_EventScript_Main_Text_8:
# 122 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: Miss MELEA, I-I'm sorry. I\n"
	.string "owed him and I didn't-$"

SilversunCity_SomberHQ_EventScript_Main_Text_9:
# 127 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: You mean that it was\n"
	.string "INTENTIONAL!? And don't use my name in\l"
	.string "public, you moron!\p"
	.string "GABRIELLE: Y-yes, I'm so sorry. I just -\p"
	.string "MELEA: You just NOTHING! You BETRAYED\n"
	.string "us! Out! OUT! You're no longer a part of\l"
	.string "Team Somber! And I'm going to have a\l"
	.string "squad chase you all over Cormoria!$"

SilversunCity_SomberHQ_EventScript_Main_Text_10:
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: No boss, please! What about\n"
	.string "my promise?\p"
	.string "MELEA: Should've thought of that\n"
	.string "before betraying us then! To hell with\l"
	.string "your promise! Now GET OUT!\p"
	.string "GABRIELLE:...$"

SilversunCity_SomberHQ_EventScript_Main_Text_11:
# 140 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: An absolutely pathetic\n"
	.string "character. I would deal with her\l"
	.string "myself...if not for you, {PLAYER}.$"

SilversunCity_SomberHQ_EventScript_Main_Text_12:
# 144 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: So you know our plan now. We're\n"
	.string "going to build a Dreamalyser and take it\l"
	.string "to MT MIRROH. We'll obtain the\l"
	.string "dreamstone there...and the rest? Well\l"
	.string "you'll never see any of it, because I'm\l"
	.string "going to put an end to you right here,\l"
	.string "right now!$"

SilversunCity_SomberHQ_EventScript_Main_Text_13:
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stupid child!$"

SilversunCity_SomberHQ_EventScript_Main_Text_14:
# 155 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Unbelievable! Just unbelievable!\p"
	.string "MELEA: Fine. Keep your stupid\n"
	.string "Professor, child! We've got what we need\l"
	.string "from him anyway. Let's go!$"

SilversunCity_SomberHQ_EventScript_Main_Text_15:
# 161 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Heed this warning, {PLAYER}.\n"
	.string "Do NOT try to thwart us at MT MIRROH, or\l"
	.string "else we will crush you!$"

SilversunCity_SomberHQ_EventScript_Main_Text_16:
# 175 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: You saved me. You are an\n"
	.string "impressive trainer. I made the right\l"
	.string "choice in selecting you.\p"
	.string "...\p"
	.string "TENEBRIS: There are detectives\n"
	.string "outside? Let's go and meet them.$"
