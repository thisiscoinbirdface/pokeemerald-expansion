# 1 "data//maps/MirrohBaseCampGym/scripts.pory"

# 2 "data//maps/MirrohBaseCampGym/scripts.pory"
    .set LOCALID_TRF, 2
# 3 "data//maps/MirrohBaseCampGym/scripts.pory"
    .set LOCALID_TRM, 3
# 4 "data//maps/MirrohBaseCampGym/scripts.pory"
    .set LOCALID_CAR, 1
# 5 "data//maps/MirrohBaseCampGym/scripts.pory"
    .set LOCALID_SP, 4

MirrohBaseCampGym_MapScripts::
# 17 "data//maps/MirrohBaseCampGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MirrohBaseCampGym_EventScript_SetBattleMode_Transition
# 9 "data//maps/MirrohBaseCampGym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MirrohBaseCampGym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 13 "data//maps/MirrohBaseCampGym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MirrohBaseCampGym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

MirrohBaseCampGym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data//maps/MirrohBaseCampGym/scripts.pory"
	map_script_2 VAR_MIRROHBASECAMPGYM_STATE, 0, MirrohBaseCampGym_EventScript_Main
	.2byte 0

MirrohBaseCampGym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 14 "data//maps/MirrohBaseCampGym/scripts.pory"
	map_script_2 VAR_MIRROHBASECAMPGYM_STATE, 1, MirrohBaseCampGym_EventScript_SetBattleMode
	.2byte 0


MirrohBaseCampGym_EventScript_SetBattleMode_Transition::
# 21 "data//maps/MirrohBaseCampGym/scripts.pory"
	compare VAR_MIRROHBASECAMPGYM_STATE, 1
	goto_if_eq MirrohBaseCampGym_EventScript_SetBattleMode_Transition_2
MirrohBaseCampGym_EventScript_SetBattleMode_Transition_1:
	end

MirrohBaseCampGym_EventScript_SetBattleMode_Transition_2:
# 22 "data//maps/MirrohBaseCampGym/scripts.pory"
	setobjectmovementtype LOCALID_TRM, MOVEMENT_TYPE_FACE_RIGHT
# 23 "data//maps/MirrohBaseCampGym/scripts.pory"
	setobjectmovementtype LOCALID_TRF, MOVEMENT_TYPE_FACE_LEFT
	goto MirrohBaseCampGym_EventScript_SetBattleMode_Transition_1


MirrohBaseCampGym_EventScript_SetBattleMode::
# 29 "data//maps/MirrohBaseCampGym/scripts.pory"
	addobject LOCALID_TRF
# 30 "data//maps/MirrohBaseCampGym/scripts.pory"
	addobject LOCALID_TRM
# 31 "data//maps/MirrohBaseCampGym/scripts.pory"
	setobjectxy LOCALID_TRM, 2, 9
# 32 "data//maps/MirrohBaseCampGym/scripts.pory"
	setobjectxy LOCALID_TRF, 5, 9
# 33 "data//maps/MirrohBaseCampGym/scripts.pory"
	setobjectmovementtype LOCALID_TRM, MOVEMENT_TYPE_FACE_RIGHT
# 34 "data//maps/MirrohBaseCampGym/scripts.pory"
	setobjectmovementtype LOCALID_TRF, MOVEMENT_TYPE_FACE_LEFT
	end


MirrohBaseCampGym_EventScript_Main::
# 39 "data//maps/MirrohBaseCampGym/scripts.pory"
	lockall
# 40 "data//maps/MirrohBaseCampGym/scripts.pory"
	playbgm MUS_END, FALSE
# 42 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_EventScript_Main_Movement_0
# 44 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 45 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_1
# 50 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 51 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 52 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_0, MSGBOX_NPC
# 53 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 54 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 56 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRF, MirrohBaseCampGym_EventScript_Main_Movement_2
# 57 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 58 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 59 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_1, MSGBOX_NPC
# 60 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 61 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 65 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRF, MirrohBaseCampGym_EventScript_Main_Movement_3
# 66 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_3
# 69 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_CAR, MirrohBaseCampGym_EventScript_Main_Movement_4
# 70 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 71 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 72 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_2
# 73 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_3, MSGBOX_NPC
# 74 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 75 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 77 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRF, MirrohBaseCampGym_EventScript_Main_Movement_5
# 78 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 79 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 80 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_4, MSGBOX_NPC
# 81 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 82 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 84 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_5
# 85 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 86 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 87 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_5, MSGBOX_NPC
# 88 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 89 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 91 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_CAR, MirrohBaseCampGym_EventScript_Main_Movement_6
# 92 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 93 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 94 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 95 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_7, MSGBOX_NPC
# 96 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 97 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 99 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_6
# 100 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 101 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 102 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_8, MSGBOX_NPC
# 103 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 104 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 106 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_CAR, MirrohBaseCampGym_EventScript_Main_Movement_7
# 107 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 108 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 109 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 110 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_9, MSGBOX_NPC
# 111 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 112 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 116 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_SP, MirrohBaseCampGym_EventScript_Main_Movement_6
# 117 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 118 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 119 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_CAR, MirrohBaseCampGym_EventScript_Main_Movement_8
# 120 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_SP, MirrohBaseCampGym_EventScript_Main_Movement_9
# 121 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 122 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_10, MSGBOX_NPC
# 123 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 124 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 126 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 127 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_11, MSGBOX_NPC
# 128 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 130 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_SP, MirrohBaseCampGym_EventScript_Main_Movement_10
# 131 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 132 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 133 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_12, MSGBOX_NPC
# 134 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 135 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 137 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_SP, MirrohBaseCampGym_EventScript_Main_Movement_11
# 138 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_CAR, MirrohBaseCampGym_EventScript_Main_Movement_11
# 139 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_6
# 140 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRF, MirrohBaseCampGym_EventScript_Main_Movement_6
# 141 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 142 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 143 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_13, MSGBOX_NPC
# 144 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 145 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 147 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_CAR, MirrohBaseCampGym_EventScript_Main_Movement_12
# 148 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 149 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 150 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 151 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_14, MSGBOX_NPC
# 152 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 153 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 155 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_15, MSGBOX_NPC
# 156 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 157 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 159 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRF, MirrohBaseCampGym_EventScript_Main_Movement_2
# 160 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 161 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 162 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_16, MSGBOX_NPC
# 163 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 164 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 166 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_1
# 167 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 168 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 169 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_17, MSGBOX_NPC
# 170 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 171 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 173 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_3
# 174 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRF, MirrohBaseCampGym_EventScript_Main_Movement_3
# 175 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 176 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 177 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_18, MSGBOX_NPC
# 178 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 179 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 181 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_SP, MirrohBaseCampGym_EventScript_Main_Movement_6
# 182 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 183 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 184 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_19, MSGBOX_NPC
# 185 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 186 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 188 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_6
# 189 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRF, MirrohBaseCampGym_EventScript_Main_Movement_6
# 190 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 191 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 192 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_20, MSGBOX_NPC
# 193 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 194 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 195 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadedefaultbgm
# 196 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 24
# 197 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_13
# 198 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRF, MirrohBaseCampGym_EventScript_Main_Movement_13
# 199 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 200 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_21, MSGBOX_NPC
# 201 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 202 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 204 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRF, MirrohBaseCampGym_EventScript_Main_Movement_14
# 205 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_15
# 206 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 209 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_EventScript_Main_Movement_16
# 210 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 211 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 214 "data//maps/MirrohBaseCampGym/scripts.pory"
	setvar VAR_MIRROHBASECAMPGYM_STATE, 1
# 215 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	end


MirrohBaseCampGym_TrainerA::
# 225 "data//maps/MirrohBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_G, MirrohBaseCampGym_TrainerA_Text_0, MirrohBaseCampGym_TrainerA_Text_1
# 226 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_TrainerA_Text_2
# 227 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	end


MirrohBaseCampGym_TrainerB::
# 231 "data//maps/MirrohBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_H, MirrohBaseCampGym_TrainerB_Text_0, MirrohBaseCampGym_TrainerB_Text_1
# 232 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_TrainerB_Text_2
# 233 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	end


MirrohBaseCampGym_Leader::
# 246 "data//maps/MirrohBaseCampGym/scripts.pory"
	lockall
# 248 "data//maps/MirrohBaseCampGym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MirrohBaseCampGym_Leader_2
# 254 "data//maps/MirrohBaseCampGym/scripts.pory"
	call Common_EventScript_SaveGameBeforeBattle
# 257 "data//maps/MirrohBaseCampGym/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 259 "data//maps/MirrohBaseCampGym/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq MirrohBaseCampGym_Leader_6
MirrohBaseCampGym_Leader_5:
# 263 "data//maps/MirrohBaseCampGym/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MirrohBaseCampGym_Leader_9
MirrohBaseCampGym_Leader_8:
# 269 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 270 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_1
# 271 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 272 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 273 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 274 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_2
# 275 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 276 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 60
# 277 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 278 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_3
# 279 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 280 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 30
# 281 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 282 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_4
# 283 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 284 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement 1, MirrohBaseCampGym_EventScript_Main_Movement_6
# 285 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 286 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 12
# 287 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 288 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_5
# 289 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 290 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 60
# 291 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 292 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_6
# 293 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 296 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 297 "data//maps/MirrohBaseCampGym/scripts.pory"
	hidefollower
# 298 "data//maps/MirrohBaseCampGym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 0, 5
# 299 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 300 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_Leader_Movement_2
# 301 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 302 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 303 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_EventScript_Main_Movement_3
# 304 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement 1, MirrohBaseCampGym_EventScript_Main_Movement_11
# 305 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 306 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 308 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 309 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_7
# 310 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 313 "data//maps/MirrohBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHBASECAMP_LEADER, MirrohBaseCampGym_Leader_Text_8
# 317 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 318 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_9
# 319 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 321 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 322 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_Leader_Movement_3
# 323 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_4
# 324 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 325 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 327 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 328 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_10
# 329 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 330 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 8
# 333 "data//maps/MirrohBaseCampGym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 334 "data//maps/MirrohBaseCampGym/scripts.pory"
	message MirrohBaseCampGym_Leader_Text_11
# 335 "data//maps/MirrohBaseCampGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 336 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 337 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_12
# 338 "data//maps/MirrohBaseCampGym/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 339 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 340 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_13
# 341 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 342 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_14
# 343 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
MirrohBaseCampGym_Leader_1:
# 346 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	return

MirrohBaseCampGym_Leader_2:
# 249 "data//maps/MirrohBaseCampGym/scripts.pory"
	faceplayer
# 250 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 251 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_0
	goto MirrohBaseCampGym_Leader_1

MirrohBaseCampGym_Leader_6:
# 260 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_0
# 261 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
	goto MirrohBaseCampGym_Leader_5

MirrohBaseCampGym_Leader_9:
# 264 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_1
# 265 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
	goto MirrohBaseCampGym_Leader_8


MirrohBaseCampGym_Red::
# 362 "data//maps/MirrohBaseCampGym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MirrohBaseCampGym_Red_2
# 365 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Red_Text_1, MSGBOX_NPC
MirrohBaseCampGym_Red_1:
	end

MirrohBaseCampGym_Red_2:
# 363 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Red_Text_0, MSGBOX_NPC
	goto MirrohBaseCampGym_Red_1


# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_0:
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
	step_end

# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_1:
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	jump_in_place_down
	step_end

# 56 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_2:
# 56 "data//maps/MirrohBaseCampGym/scripts.pory"
	jump_in_place_up
	step_end

# 65 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_3:
# 65 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_right
	step_end

# 69 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_4:
# 69 "data//maps/MirrohBaseCampGym/scripts.pory"
	emote_exclamation_mark
# 69 "data//maps/MirrohBaseCampGym/scripts.pory"
	jump_in_place_left
	step_end

# 77 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_5:
# 77 "data//maps/MirrohBaseCampGym/scripts.pory"
	jump_in_place_right
	step_end

# 91 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_6:
# 91 "data//maps/MirrohBaseCampGym/scripts.pory"
	emote_exclamation_mark
	step_end

# 106 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_7:
# 106 "data//maps/MirrohBaseCampGym/scripts.pory"
	jump_in_place_left
	step_end

# 119 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_8:
# 119 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_up
	step_end

# 120 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_9:
# 120 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 120 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
	step_end

# 130 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_10:
# 130 "data//maps/MirrohBaseCampGym/scripts.pory"
	emote_question_mark
	step_end

# 137 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_11:
# 137 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_left
	step_end

# 147 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_12:
# 147 "data//maps/MirrohBaseCampGym/scripts.pory"
	jump_in_place_left
# 147 "data//maps/MirrohBaseCampGym/scripts.pory"
	jump_in_place_left
# 147 "data//maps/MirrohBaseCampGym/scripts.pory"
	jump_in_place_left
	step_end

# 197 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_13:
# 197 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_down
	step_end

# 204 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_14:
# 204 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 204 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 204 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 204 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 204 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_left
	step_end

# 205 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_15:
# 205 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 205 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 205 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 205 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 205 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 205 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 205 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 205 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 205 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_right
	step_end

# 209 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_16:
# 209 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 209 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 209 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 209 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 209 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 209 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 209 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
	step_end

# 260 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_0:
# 260 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 260 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 260 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_right
	step_end

# 264 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_1:
# 264 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 264 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
# 264 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_right
	step_end

# 300 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_2:
# 300 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 300 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
	step_end

# 322 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_3:
# 322 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 322 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
	step_end

# 323 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_4:
# 323 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 323 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 323 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 323 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 323 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 323 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
	step_end

MirrohBaseCampGym_EventScript_Main_Text_0:
# 52 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Sniff...I can't believe it...they're\n"
	.string "actually going to take down our gym!$"

MirrohBaseCampGym_EventScript_Main_Text_1:
# 59 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Sob...what are we going to do now?$"

MirrohBaseCampGym_EventScript_Main_Text_2:
# 72 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "???$"

MirrohBaseCampGym_EventScript_Main_Text_3:
# 73 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Come on, you two! Get it together!$"

MirrohBaseCampGym_EventScript_Main_Text_4:
# 80 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "B-but Carona, it's all over! All the\n"
	.string "other trainers are gone, all the gym\l"
	.string "puzzles are gone...$"

MirrohBaseCampGym_EventScript_Main_Text_5:
# 87 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Y-yeah...this gym was our home, Carona!\n"
	.string "What are we going to do without you?$"

MirrohBaseCampGym_EventScript_Main_Text_6:
# 94 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Carona$"

MirrohBaseCampGym_EventScript_Main_Text_7:
# 95 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I don't remember training two\n"
	.string "crybabies! You need to be resilient.\p"
	.string "Life is going to throw much harder\n"
	.string "challenges than this.\p"
	.string "Now come on - wipe those tears!$"

MirrohBaseCampGym_EventScript_Main_Text_8:
# 102 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "B-but -$"

MirrohBaseCampGym_EventScript_Main_Text_9:
# 110 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "No buts! Stop moping. You two said it\n"
	.string "yourself - we had such a good time.\p"
	.string "I want you two to cherish that.\p"
	.string "Got it?$"

MirrohBaseCampGym_EventScript_Main_Text_10:
# 122 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Carona - we have a trainer waiting.\n"
	.string "How many badges do you have left?$"

MirrohBaseCampGym_EventScript_Main_Text_11:
# 127 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Just one.$"

MirrohBaseCampGym_EventScript_Main_Text_12:
# 133 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Should I bring the trainer in then?$"

MirrohBaseCampGym_EventScript_Main_Text_13:
# 143 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Nooo!! We don't want it to end. We can't\n"
	.string "fight the last trainer - it's too much.$"

MirrohBaseCampGym_EventScript_Main_Text_14:
# 151 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Now that's enough both of you! We can't\n"
	.string "stop this from happening, but we can\l"
	.string "decide how we want to go out. Is this\l"
	.string "really how you want things to end?$"

MirrohBaseCampGym_EventScript_Main_Text_15:
# 155 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "N-no...okay, Carona.\p"
	.string "We're sorry.$"

MirrohBaseCampGym_EventScript_Main_Text_16:
# 162 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Sob...we've gotta do this right.$"

MirrohBaseCampGym_EventScript_Main_Text_17:
# 169 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Sniff...yeah. For Carona!$"

MirrohBaseCampGym_EventScript_Main_Text_18:
# 177 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Okay, we're ready! We're going to show\n"
	.string "this last trainer just how tough the\l"
	.string "Mirroh Base Camp Gym is!$"

MirrohBaseCampGym_EventScript_Main_Text_19:
# 184 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I'll go and bring the trainer in then.$"

MirrohBaseCampGym_EventScript_Main_Text_20:
# 192 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "No - you've done enough. You deserve to\n"
	.string "relax. We'll take care of this trainer!$"

MirrohBaseCampGym_EventScript_Main_Text_21:
# 200 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Come, trainer! You think you can\n"
	.string "challenge the Mirroh Base Camp Gym?\l"
	.string "Let's see what you've got!$"

MirrohBaseCampGym_TrainerA_Text_0:
# 225 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I've trained my FIGHTING type Pokémon\n"
	.string "in the strongest gym in Cormoria!\p"
	.string "Give me your best shot!$"

MirrohBaseCampGym_TrainerA_Text_1:
# 225 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I don't want to leave!$"

MirrohBaseCampGym_TrainerA_Text_2:
# 226 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Sniff...that was a good battle, trainer.$"

MirrohBaseCampGym_TrainerB_Text_0:
# 231 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Leader Carona taught me and my Pokémon\n"
	.string "to use our fists for maximum impact!\p"
	.string "You're going down!$"

MirrohBaseCampGym_TrainerB_Text_1:
# 231 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "This is our home!$"

MirrohBaseCampGym_TrainerB_Text_2:
# 232 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Sob...what a great last battle.$"

MirrohBaseCampGym_Leader_Text_0:
# 251 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Use your power wisely. As for me, it's\n"
	.string "time to move on.$"

MirrohBaseCampGym_Leader_Text_1:
# 270 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Welcome to the Mirroh Base Camp Gym...\p"
	.string "...\p"
	.string "...is what I would say if there was a Gym\n"
	.string "left to welcome you to.$"

MirrohBaseCampGym_Leader_Text_2:
# 274 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "My name is Carona. I am the former\n"
	.string "Leader of the Mirroh Base Camp Gym.\p"
	.string "You see, the Pokémon League recently\n"
	.string "decomissioned this gym.$"

MirrohBaseCampGym_Leader_Text_3:
# 278 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "They took the entrance statues out\n"
	.string "first. Then they removed all the gym\l"
	.string "puzzle equipment.\p"
	.string "...\p"
	.string "Finally, one by one, my trainers left.\p"
	.string "Only my two best trainers stayed.$"

MirrohBaseCampGym_Leader_Text_4:
# 282 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "And now it's just us in this empty\n"
	.string "warehouse. Like a ghost. Just like the\l"
	.string "rest of this little town of ours.$"

MirrohBaseCampGym_Leader_Text_5:
# 288 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "But I was a Gym Leader once, you\n"
	.string "understand? I was powerful and strong.\p"
	.string "I was something, someone! Countless\n"
	.string "trainers paid me their respects in\l"
	.string "battle, and to the chosen few destined\l"
	.string "for the top, I would award the coveted\l"
	.string "lapel pin known as the Ironfist Badge!$"

MirrohBaseCampGym_Leader_Text_6:
# 292 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "...but that's all in the past. Next week\n"
	.string "the construction crew will come to\l"
	.string "demolish this building. You were lucky\l"
	.string "you found me. I have one badge left.\p"
	.string "Perhaps you are the one destined to\n"
	.string "deliver the final blow...\p"
	.string "But I'm still a Leader! And I will be\n"
	.string "until the very end!$"

MirrohBaseCampGym_Leader_Text_7:
# 309 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Now, trainer, I'll make you feel the\n"
	.string "force of these iron fists!$"

MirrohBaseCampGym_Leader_Text_8:
# 313 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "A glorious battle!$"

MirrohBaseCampGym_Leader_Text_9:
# 318 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "What a beautiful display! What a thrill!\n"
	.string "This is why we do what we do, trainer!\p"
	.string "Now come to me.$"

MirrohBaseCampGym_Leader_Text_10:
# 328 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "How gratifying that my last badge goes\n"
	.string "to someone with your guts!$"

MirrohBaseCampGym_Leader_Text_11:
# 334 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "{PLAYER} received the Ironfist Badge\n"
	.string "from Carona.$"

MirrohBaseCampGym_Leader_Text_12:
# 337 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "And you must accept this as well.\n"
	.string "This is my last one!$"

MirrohBaseCampGym_Leader_Text_13:
# 340 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I see the closure of this gym as\n"
	.string "destiny's way of telling Medicham and\l"
	.string "me to lay down our fists.\p"
	.string "It's time we explored new things.$"

MirrohBaseCampGym_Leader_Text_14:
# 342 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I feel satisfied. This is a fitting end -\n"
	.string "to have been bested by a trainer of\l"
	.string "your caliber!\p"
	.string "Carry on our legacy, {PLAYER}!\n"
	.string "Show the world your iron fists!$"

MirrohBaseCampGym_Red_Text_0:
# 363 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Well done champ-in-the-making! I\n"
	.string "would've given you something to\l"
	.string "commemorate your victory...but we're all\l"
	.string "packed up! Sorry!\p"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

MirrohBaseCampGym_Red_Text_1:
# 365 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Welcome to the Mirroh Base Camp Gym,\n"
	.string "trainer!\p"
	.string "Unfortunately, we've packed everything\n"
	.string "up, so I don't have any Fresh Water for\l"
	.string "you.\p"
	.string "Carona - the Gym Leader glaring at us -\n"
	.string "uses FIGHTING type Pokémon with\l"
	.string "strength and skill. Watch out for her\l"
	.string "Swagger confusing you! Lum Berries can\l"
	.string "help.\p"
	.string "And beware, she's got a hidden ace up\n"
	.string "her sleeve...$"
