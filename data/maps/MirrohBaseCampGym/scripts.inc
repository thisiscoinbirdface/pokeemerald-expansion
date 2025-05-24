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
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_13
# 196 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRF, MirrohBaseCampGym_EventScript_Main_Movement_13
# 197 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 198 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_EventScript_Main_Text_21, MSGBOX_NPC
# 199 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 200 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 202 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRF, MirrohBaseCampGym_EventScript_Main_Movement_14
# 203 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement LOCALID_TRM, MirrohBaseCampGym_EventScript_Main_Movement_15
# 204 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 207 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_EventScript_Main_Movement_16
# 208 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 209 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 212 "data//maps/MirrohBaseCampGym/scripts.pory"
	setvar VAR_MIRROHBASECAMPGYM_STATE, 1
# 213 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	end


MirrohBaseCampGym_TrainerA::
# 223 "data//maps/MirrohBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_G, MirrohBaseCampGym_TrainerA_Text_0, MirrohBaseCampGym_TrainerA_Text_1
# 224 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_TrainerA_Text_2
# 225 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	end


MirrohBaseCampGym_TrainerB::
# 229 "data//maps/MirrohBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_MIRROHEXT_H, MirrohBaseCampGym_TrainerB_Text_0, MirrohBaseCampGym_TrainerB_Text_1
# 230 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_TrainerB_Text_2
# 231 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	end


MirrohBaseCampGym_Leader::
# 244 "data//maps/MirrohBaseCampGym/scripts.pory"
	lockall
# 245 "data//maps/MirrohBaseCampGym/scripts.pory"
	faceplayer
# 247 "data//maps/MirrohBaseCampGym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MirrohBaseCampGym_Leader_2
# 251 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SaveGame
# 252 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitstate
# 253 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 256 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 257 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_1
# 258 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 259 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 260 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 261 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_2
# 262 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 263 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 60
# 264 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 265 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_3
# 266 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 267 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 30
# 268 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 269 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_4
# 270 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 271 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement 1, MirrohBaseCampGym_EventScript_Main_Movement_6
# 272 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 273 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 12
# 274 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 275 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_5
# 276 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 277 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 60
# 278 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 279 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_6
# 281 "data//maps/MirrohBaseCampGym/scripts.pory"
	hidefollower
# 283 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 284 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 285 "data//maps/MirrohBaseCampGym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 0, 5
# 287 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 288 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_Leader_Movement_0
# 289 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 290 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 291 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_EventScript_Main_Movement_3
# 292 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement 1, MirrohBaseCampGym_EventScript_Main_Movement_11
# 293 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 294 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 295 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 296 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_7
# 297 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 300 "data//maps/MirrohBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHBASECAMP_LEADER, MirrohBaseCampGym_Leader_Text_8
# 304 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 305 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_9
# 306 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 308 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 309 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_Leader_Movement_1
# 310 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_2
# 311 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 312 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 314 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 315 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_10
# 316 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 317 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 8
# 320 "data//maps/MirrohBaseCampGym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 321 "data//maps/MirrohBaseCampGym/scripts.pory"
	message MirrohBaseCampGym_Leader_Text_11
# 322 "data//maps/MirrohBaseCampGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 323 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 324 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_12
# 325 "data//maps/MirrohBaseCampGym/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 326 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 327 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_13
# 328 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 329 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_14
# 330 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
MirrohBaseCampGym_Leader_1:
# 333 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	return

MirrohBaseCampGym_Leader_2:
# 248 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_EventScript_Main_Text_6
# 249 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_0
	goto MirrohBaseCampGym_Leader_1


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

# 195 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_13:
# 195 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_down
	step_end

# 202 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_14:
# 202 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 202 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 202 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 202 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 202 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_left
	step_end

# 203 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_15:
# 203 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 203 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 203 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 203 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 203 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 203 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 203 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 203 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 203 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_right
	step_end

# 207 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_16:
# 207 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 207 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 207 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 207 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 207 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 207 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
# 207 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_down
	step_end

# 288 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_0:
# 288 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 288 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
	step_end

# 309 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_1:
# 309 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 309 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
	step_end

# 310 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_2:
# 310 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 310 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 310 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 310 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 310 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 310 "data//maps/MirrohBaseCampGym/scripts.pory"
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
	.string "I want you two to cherish that.\n"
	.string "Got it?$"

MirrohBaseCampGym_EventScript_Main_Text_10:
# 122 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Carona - we have a trainer. How many\n"
	.string "badges do you have left?$"

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
	.string "this last trainer how tough the Mirroh\l"
	.string "Base Camp Gym is!$"

MirrohBaseCampGym_EventScript_Main_Text_19:
# 184 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I'll go and bring the trainer in then.$"

MirrohBaseCampGym_EventScript_Main_Text_20:
# 192 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "No! You've done enough. You deserve to\n"
	.string "relax. We'll take care of this trainer!$"

MirrohBaseCampGym_EventScript_Main_Text_21:
# 198 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Come, trainer! You think you can\n"
	.string "challenge the Mirroh Base Camp Gym?\l"
	.string "Let's see what you've got!$"

MirrohBaseCampGym_TrainerA_Text_0:
# 223 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I've trained my FIGHTING type Pokémon\n"
	.string "in the strongest gym in Cormoria!\p"
	.string "Give me your best shot!$"

MirrohBaseCampGym_TrainerA_Text_1:
# 223 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I don't want to leave!$"

MirrohBaseCampGym_TrainerA_Text_2:
# 224 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Sniff...that was a good battle, trainer.$"

MirrohBaseCampGym_TrainerB_Text_0:
# 229 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Leader Carona taught me and my Pokémon\n"
	.string "to use our fists for maximum impact!\p"
	.string "You're going down!$"

MirrohBaseCampGym_TrainerB_Text_1:
# 229 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "This is our home!$"

MirrohBaseCampGym_TrainerB_Text_2:
# 230 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Sob...what a great last battle.$"

MirrohBaseCampGym_Leader_Text_0:
# 249 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Use your power wisely. As for me, it's\n"
	.string "time to move on.$"

MirrohBaseCampGym_Leader_Text_1:
# 257 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Welcome to the Mirroh Base Camp Gym...\p"
	.string "...\p"
	.string "...is what I would say if there was a Gym\n"
	.string "left to welcome you to.$"

MirrohBaseCampGym_Leader_Text_2:
# 261 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "My name is Carona. I am the former\n"
	.string "Leader of the Mirroh Base Camp Gym.\p"
	.string "You see, the Pokémon League recently\n"
	.string "decomissioned this gym.$"

MirrohBaseCampGym_Leader_Text_3:
# 265 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "They took the entrance statues out\n"
	.string "first. Then they removed all the gym\l"
	.string "puzzle equipment.\p"
	.string "...\p"
	.string "Finally, one by one, my trainers left.\p"
	.string "Only my two best trainers stayed.$"

MirrohBaseCampGym_Leader_Text_4:
# 269 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "And now it's just us in this empty\n"
	.string "warehouse. Like a ghost. Just like the\l"
	.string "rest of this little town of ours.$"

MirrohBaseCampGym_Leader_Text_5:
# 275 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "But I was a Gym Leader once, you\n"
	.string "understand? I was powerful and strong.\p"
	.string "I was something, someone! Countless\n"
	.string "trainers paid me their respects in\l"
	.string "battle, and to the chosen few destined\l"
	.string "for the top, I would award the coveted\l"
	.string "lapel pin known as the Ironfist Badge!$"

MirrohBaseCampGym_Leader_Text_6:
# 279 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "...but that's all in the past. Next week\n"
	.string "the construction crew will come to\l"
	.string "demolish this building. You were lucky\l"
	.string "you found me. I have one badge left.\p"
	.string "Perhaps you are the one destined to\n"
	.string "deliver the final blow...\p"
	.string "But I'm still a Leader! And I will be\n"
	.string "until the very end!$"

MirrohBaseCampGym_Leader_Text_7:
# 296 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Now, trainer, I'll make you feel the\n"
	.string "force of these iron fists!$"

MirrohBaseCampGym_Leader_Text_8:
# 300 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "A glorious battle!$"

MirrohBaseCampGym_Leader_Text_9:
# 305 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "What a beautiful display! What a thrill!\n"
	.string "This is why we do what we do, trainer!\p"
	.string "Now come to me.$"

MirrohBaseCampGym_Leader_Text_10:
# 315 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "How gratifying that my last badge goes\n"
	.string "to someone with your guts!$"

MirrohBaseCampGym_Leader_Text_11:
# 321 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "{PLAYER} received the Ironfist Badge\n"
	.string "from Carona.$"

MirrohBaseCampGym_Leader_Text_12:
# 324 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "And you must accept this as well.\n"
	.string "This is my last one!$"

MirrohBaseCampGym_Leader_Text_13:
# 327 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I see the closure of this gym as\n"
	.string "destiny's way of telling Medicham and\l"
	.string "me to lay down our fists.\p"
	.string "It's time we explored new things.$"

MirrohBaseCampGym_Leader_Text_14:
# 329 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I feel satisfied. This is a fitting end -\n"
	.string "to have been bested by a trainer of\l"
	.string "your caliber!\p"
	.string "Carry on our legacy, {PLAYER}!\n"
	.string "Show the world your iron fists!$"
