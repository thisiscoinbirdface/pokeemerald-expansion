# 1 "data//maps/GalecrestCity/scripts.pory"

# 2 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_GAB, 13
# 3 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_RUE, 18    
# 4 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_DET1, 19
# 5 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_DET2, 20

GalecrestCity_MapScripts::
# 9 "data//maps/GalecrestCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GalecrestCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GalecrestCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data//maps/GalecrestCity/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, GalecrestCity_OnFrame
	.2byte 0


GalecrestCity_OnFrame::
# 27 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POST_ANCIENT, GalecrestCity_OnFrame_2
# 31 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 32 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_OnFrame_Movement_0
# 33 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 34 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_OnFrame_Text_0
# 35 "data//maps/GalecrestCity/scripts.pory"
	release
# 38 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_GAB
# 40 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 42 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_POST_ANCIENT
# 43 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_OnFrame_2:
	end


GalecrestCity_DetectiveMeet_Trigger0::
# 61 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger0_2
# 63 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 66 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 67 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 68 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 69 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 70 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 72 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 73 "data//maps/GalecrestCity/scripts.pory"
	release
# 76 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger0_Movement_1
# 79 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger0_2:
	end


GalecrestCity_DetectiveMeet_Trigger1::
# 83 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger1_2
# 85 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 88 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 89 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 90 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 91 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 92 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 94 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 95 "data//maps/GalecrestCity/scripts.pory"
	release
# 98 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger1_Movement_0
# 99 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 102 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger1_2:
	end


GalecrestCity_DetectiveMeet_Trigger2::
# 106 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger2_2
# 108 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 111 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 112 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 113 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 114 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 115 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 117 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 118 "data//maps/GalecrestCity/scripts.pory"
	release
# 121 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger2_Movement_0
# 122 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 125 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger2_2:
	end


GalecrestCity_DetectiveMeet_Trigger3::
# 129 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger3_2
# 131 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 134 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 135 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 136 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 137 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 138 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 140 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 141 "data//maps/GalecrestCity/scripts.pory"
	release
# 144 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger3_Movement_0
# 145 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 148 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger3_2:
	end


GalecrestCity_DetectiveMeet_Main::
# 153 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_0
# 154 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 155 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 156 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 157 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 158 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_1
# 159 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_2
# 160 "data//maps/GalecrestCity/scripts.pory"
	release
# 161 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_0
# 162 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_1
# 163 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 164 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_3
# 165 "data//maps/GalecrestCity/scripts.pory"
	release
# 166 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 167 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_OnFrame_Movement_0
# 168 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 169 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_4
# 170 "data//maps/GalecrestCity/scripts.pory"
	release
# 173 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_2
# 174 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_2
# 175 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 177 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_3
# 178 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 179 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_RUE
# 182 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 183 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 184 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 185 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_5
# 186 "data//maps/GalecrestCity/scripts.pory"
	release
# 187 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 188 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_6
# 189 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_7
# 190 "data//maps/GalecrestCity/scripts.pory"
	release
# 191 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_1
# 192 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_1
# 193 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_1
# 194 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 195 "data//maps/GalecrestCity/scripts.pory"
	special SpawnCameraObject
# 196 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_4
# 197 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 198 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_5
# 199 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_8
# 200 "data//maps/GalecrestCity/scripts.pory"
	release
# 202 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_6
# 203 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 204 "data//maps/GalecrestCity/scripts.pory"
	special RemoveCameraObject
# 205 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 206 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 207 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 208 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 209 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_9
# 210 "data//maps/GalecrestCity/scripts.pory"
	release
# 213 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 214 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET1
# 215 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET2
# 216 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 219 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_DETECTIVE_CONVO
# 220 "data//maps/GalecrestCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_3
# 221 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_EventScript_Poochyena::
# 244 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POOCHYENA, GalecrestCity_EventScript_Poochyena_2
# 246 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 247 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_EventScript_Poochyena_Text_0
# 248 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_SYS_EXP_ALL
# 249 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_EventScript_Poochyena_2:
	end


GalecrestCity_NPC_1::
# 269 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_1_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_2::
# 274 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_2_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_3::
# 279 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_3_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_4::
# 284 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_4_Text_0, MSGBOX_NPC
	end


GalecrestCity_Froakie::
# 289 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 290 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 291 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_FROAKIE, CRY_MODE_ENCOUNTER
# 292 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Froakie_Text_0
# 293 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_5::
# 301 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 302 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 304 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_ROCKSMASH, GalecrestCity_NPC_5_2
# 307 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_1
# 308 "data//maps/GalecrestCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_NPC_5_Text_2, GalecrestCity_NPC_5_Text_3, GalecrestCity_NPC_5_Text_4, GalecrestCity_NPC_5_Text_5
# 309 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_NPC_5_5
# 314 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_7
GalecrestCity_NPC_5_1:
# 321 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_5_2:
# 305 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_0
	goto GalecrestCity_NPC_5_1

GalecrestCity_NPC_5_5:
# 310 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_6
# 311 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 312 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROCKSMASH
	goto GalecrestCity_NPC_5_1


GalecrestCity_NPC_6::
# 325 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_6_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_7::
# 330 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_7_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_8::
# 335 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_8_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_9::
# 340 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_9_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_10::
# 345 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_10_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_11::
# 351 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_NURSE_BERRY, GalecrestCity_NPC_11_2
# 354 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 355 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 356 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_1
# 357 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_CHILAN_BERRY, 3
# 358 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_NURSE_BERRY
# 359 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_2, MSGBOX_NPC
GalecrestCity_NPC_11_1:
	end

GalecrestCity_NPC_11_2:
# 352 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_0, MSGBOX_NPC
	goto GalecrestCity_NPC_11_1


GalecrestCity_Chansey::
# 367 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 368 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Chansey_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_12::
# 374 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_12_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_13::
# 379 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_13_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_14::
# 391 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 393 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 0
	goto_if_eq GalecrestCity_NPC_14_2
# 397 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 398 "data//maps/GalecrestCity/scripts.pory"
	release
# 399 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 400 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 401 "data//maps/GalecrestCity/scripts.pory"
	applymovement 12, GalecrestCity_NPC_14_Movement_0
# 402 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 403 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_1
# 405 "data//maps/GalecrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECREST_ROBBER, GalecrestCity_NPC_14_Text_2
# 406 "data//maps/GalecrestCity/scripts.pory"
	release
# 407 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_3
# 408 "data//maps/GalecrestCity/scripts.pory"
	release
# 409 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_PEARL_STRING
# 410 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_4
# 411 "data//maps/GalecrestCity/scripts.pory"
	release
# 413 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 414 "data//maps/GalecrestCity/scripts.pory"
	removeobject 12
# 415 "data//maps/GalecrestCity/scripts.pory"
	removeobject 36
# 416 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 418 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROBBER
# 419 "data//maps/GalecrestCity/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 2
GalecrestCity_NPC_14_1:
# 422 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_14_2:
# 394 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 395 "data//maps/GalecrestCity/scripts.pory"
	release
	goto GalecrestCity_NPC_14_1


GalecrestCity_Nickit::
# 426 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 427 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_NICKIT, CRY_MODE_NORMAL
# 428 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Nickit_Text_0
# 429 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_15::
# 435 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_15_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_16::
# 440 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 441 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_16_Text_0
# 442 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_17::
# 447 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 448 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_17_Text_0
# 449 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_18::
# 454 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 455 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_0
# 456 "data//maps/GalecrestCity/scripts.pory"
	release
# 457 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 459 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_REGRETFULMAN, GalecrestCity_NPC_18_2
# 463 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 464 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_1, MSGBOX_YESNO
# 465 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_NPC_18_5
# 470 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_3
# 471 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_GRIP_CLAW
# 472 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
GalecrestCity_NPC_18_1:
# 475 "data//maps/GalecrestCity/scripts.pory"
	applymovement 16, GalecrestCity_DetectiveMeet_Main_Movement_2
# 476 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_18_2:
# 460 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_18_5:
# 466 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_2
# 467 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_BINDING_BAND
# 468 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
	goto GalecrestCity_NPC_18_1


GalecrestCity_NPC_19::
# 481 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_19_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_20::
# 486 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_20_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_Ranger::
# 492 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_Ranger_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_Red::
# 498 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_Red_Text_0, MSGBOX_NPC
# 499 "data//maps/GalecrestCity/scripts.pory"
	applymovement 38, GalecrestCity_DetectiveMeet_Main_Movement_0
# 500 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
	end


# 32 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_OnFrame_Movement_0:
# 32 "data//maps/GalecrestCity/scripts.pory"
	face_right
	step_end

# 66 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_0:
# 66 "data//maps/GalecrestCity/scripts.pory"
	face_right
# 66 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 76 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_1:
# 76 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 76 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 76 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 76 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 98 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger1_Movement_0:
# 98 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 98 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 98 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 121 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger2_Movement_0:
# 121 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 121 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 121 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 121 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 144 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger3_Movement_0:
# 144 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 144 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 144 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 144 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 144 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 161 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_0:
# 161 "data//maps/GalecrestCity/scripts.pory"
	face_down
	step_end

# 162 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_1:
# 162 "data//maps/GalecrestCity/scripts.pory"
	face_up
	step_end

# 173 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_2:
# 173 "data//maps/GalecrestCity/scripts.pory"
	face_left
	step_end

# 177 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_3:
# 177 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 177 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 177 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 177 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 177 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 177 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 196 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_4:
# 196 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 196 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 196 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 198 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_5:
# 198 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 198 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 202 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_6:
# 202 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 202 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 202 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 202 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 202 "data//maps/GalecrestCity/scripts.pory"
	walk_down
	step_end

# 401 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_NPC_14_Movement_0:
# 401 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
	step_end

GalecrestCity_OnFrame_Text_0:
# 34 "data//maps/GalecrestCity/scripts.pory"
	.string "GABRIELLE:...have we left that place?\p"
	.string "GABRIELLE: Yes! Yes we have! I'm so\n"
	.string "relieved. I've never been so happy to\l"
	.string "see a city before!\p"
	.string "GABRIELLE: This must be Galecrest City.\n"
	.string "The Detective Academy is here. I\l"
	.string "suppose you'll be headed there. Just\l"
	.string "head north from here...\p"
	.string "GABRIELLE:...and I'll be going back to\n"
	.string "Team Somber.\p"
	.string "GABRIELLE: Sigh...\p"
	.string "...\p"
	.string "GABRIELLE: {PLAYER}, we're still\n"
	.string "enemies! But you saved me. I owe you\l"
	.string "one.\p"
	.string "...\p"
	.string "GABRIELLE: T-thanks. Bye.$"

GalecrestCity_DetectiveMeet_Trigger0_Text_0:
# 72 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: {PLAYER}! You're here! Where\n"
	.string "have you been?$"

GalecrestCity_DetectiveMeet_Main_Text_0:
# 153 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: We heard from Kohla that you went\n"
	.string "up to the peak to stop Team Somber.\l"
	.string "What happened up there?\p"
	.string "...\p"
	.string "...$"

GalecrestCity_DetectiveMeet_Main_Text_1:
# 158 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: What! Is that true? Did all of that\n"
	.string "happen?\p"
	.string "...\p"
	.string "RUE: I'm glad you're safe, {PLAYER}.\n"
	.string "What a series of events!$"

GalecrestCity_DetectiveMeet_Main_Text_2:
# 159 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: So the dreamstones\n"
	.string "transported you to another dimension\l"
	.string "that you couldn't recognise? And the\l"
	.string "Pokemon were completely different too?$"

GalecrestCity_DetectiveMeet_Main_Text_3:
# 164 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: Did you know this was\n"
	.string "possible Rue?\p"
	.string "RUE: No, I had no idea. We knew that\n"
	.string "dreamstones absorbed the memories of\l"
	.string "sleeping Pokemon - that's why its\l"
	.string "called a dreamstone! But to transport\l"
	.string "things and people...$"

GalecrestCity_DetectiveMeet_Main_Text_4:
# 169 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: {PLAYER}, you encountered\n"
	.string "ancient Pokemon there, right? I\l"
	.string "wonder...\p"
	.string "RUE: Did the dreamstone take you back\n"
	.string "to the past somehow?\p"
	.string "RUE: Incredible...so much we don't yet\n"
	.string "know...\p"
	.string "RUE: I need to do some research. I'm\n"
	.string "going to head back to the lab.\p"
	.string "RUE: {PLAYER}, the detectives have\n"
	.string "some updates for you.\p"
	.string "...\p"
	.string "RUE: I'm glad you're okay.$"

GalecrestCity_DetectiveMeet_Main_Text_5:
# 185 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: We've uncovered a new lead\n"
	.string "on Professor Tenebris. An agent told us\l"
	.string "that she was spotted in Silversun City.$"

GalecrestCity_DetectiveMeet_Main_Text_6:
# 188 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: There's one issue...Team\n"
	.string "Somber. They're a known and dangerous\l"
	.string "criminal syndicate that aims to wrest\l"
	.string "power from the government.\p"
	.string "DETECTIVE: Their hideout is confirmed\n"
	.string "to be somewhere around Silversun City\l"
	.string "too.\p"
	.string "DETECTIVE: If the Professor, her\n"
	.string "dreamstone and Team Somber are in the\l"
	.string "same spot, things could erupt. We have\l"
	.string "to be there!$"

GalecrestCity_DetectiveMeet_Main_Text_7:
# 189 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: But now that we know Team\n"
	.string "Somber is involved, it's not safe for\l"
	.string "you, {PLAYER}. You may have handled a\l"
	.string "couple of grunts, but you're still a\l"
	.string "child.\p"
	.string "So heed these instructions carefully -\n"
	.string "make your way to Silversun City as soon\l"
	.string "as possible and keep a low profile. Do\l"
	.string "NOT engage with any suspicious\l"
	.string "individuals!$"

GalecrestCity_DetectiveMeet_Main_Text_8:
# 199 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: This building is the\n"
	.string "Detective Academy. Your frierd Kohla\l"
	.string "was trained here. He knows the plan\l"
	.string "already. Go and talk to him first.$"

GalecrestCity_DetectiveMeet_Main_Text_9:
# 209 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: See you in Silversun City.$"

GalecrestCity_EventScript_Poochyena_Text_0:
# 247 "data//maps/GalecrestCity/scripts.pory"
	.string "POOCHYENA: grr...\p"
	.string "The Poochyena are clearly on edge.\n"
	.string "Better not aggravate them!$"

GalecrestCity_NPC_1_Text_0:
# 269 "data//maps/GalecrestCity/scripts.pory"
	.string "You don't look like someone from\n"
	.string "here...are you a new student at the\l"
	.string "Detective Academy?$"

GalecrestCity_NPC_2_Text_0:
# 274 "data//maps/GalecrestCity/scripts.pory"
	.string "The city doesn't service our\n"
	.string "neighborhood. That's why these grass\l"
	.string "patches and puddles have come up.$"

GalecrestCity_NPC_3_Text_0:
# 279 "data//maps/GalecrestCity/scripts.pory"
	.string "All the rich kids play at home, but me\n"
	.string "and my brother love to splash in these\l"
	.string "puddles!$"

GalecrestCity_NPC_4_Text_0:
# 284 "data//maps/GalecrestCity/scripts.pory"
	.string "When I grow up, I want to be just like my\n"
	.string "sister!$"

GalecrestCity_Froakie_Text_0:
# 292 "data//maps/GalecrestCity/scripts.pory"
	.string "FROAKIE is having fun with the siblings!$"

GalecrestCity_NPC_5_Text_0:
# 305 "data//maps/GalecrestCity/scripts.pory"
	.string "I need to find a Pokemon that can learn\n"
	.string "ROCK SMASH...$"

GalecrestCity_NPC_5_Text_1:
# 307 "data//maps/GalecrestCity/scripts.pory"
	.string "This rock can be smashed by a Pokemon\n"
	.string "that knows a certain move...I forgot\l"
	.string "which one though! Do you know?$"

GalecrestCity_NPC_5_Text_2:
# 308 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK BLAST$"

GalecrestCity_NPC_5_Text_3:
# 308 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK SLIDE$"

GalecrestCity_NPC_5_Text_4:
# 308 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK SMASH$"

GalecrestCity_NPC_5_Text_5:
# 308 "data//maps/GalecrestCity/scripts.pory"
	.string "STONE EDGE$"

GalecrestCity_NPC_5_Text_6:
# 310 "data//maps/GalecrestCity/scripts.pory"
	.string "Yes! Now I remember! In fact, I also\n"
	.string "remember that I have the HM for it here.\l"
	.string "Why don't you keep it?$"

GalecrestCity_NPC_5_Text_7:
# 314 "data//maps/GalecrestCity/scripts.pory"
	.string "No...$"

GalecrestCity_NPC_6_Text_0:
# 325 "data//maps/GalecrestCity/scripts.pory"
	.string "If you head west, you enter the elite\n"
	.string "residential neighborhood.\p"
	.string "The area south of here is poorer.$"

GalecrestCity_NPC_7_Text_0:
# 330 "data//maps/GalecrestCity/scripts.pory"
	.string "The city garden is maintained by\n"
	.string "Rotoms! But for some reason, I've never\l"
	.string "seen any of them at work.$"

GalecrestCity_NPC_8_Text_0:
# 335 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm on a date with the girl of my dreams!\n"
	.string "But we can't ever be together. I'm too\l"
	.string "poor for her family.$"

GalecrestCity_NPC_9_Text_0:
# 340 "data//maps/GalecrestCity/scripts.pory"
	.string "I don't care about money! We love each\n"
	.string "other and that's what matters.$"

GalecrestCity_NPC_10_Text_0:
# 345 "data//maps/GalecrestCity/scripts.pory"
	.string "The Detective Academy is the most\n"
	.string "prestigious police academy in all of\l"
	.string "Cormoria. My husband helped build it,\l"
	.string "many years ago, when he ran a\l"
	.string "construction business.$"

GalecrestCity_NPC_11_Text_0:
# 352 "data//maps/GalecrestCity/scripts.pory"
	.string "I do the night shift at the Pokemon\n"
	.string "Center. During the day, Chansey and I\l"
	.string "like to walk around the garden and pick\l"
	.string "berries.$"

GalecrestCity_NPC_11_Text_1:
# 356 "data//maps/GalecrestCity/scripts.pory"
	.string "I do the night shift at the Pokemon\n"
	.string "Center. During the day, Chansey and I\l"
	.string "like to walk around the garden and pick\l"
	.string "berries. Here, you can have some of our\l"
	.string "extra berries.$"

GalecrestCity_NPC_11_Text_2:
# 359 "data//maps/GalecrestCity/scripts.pory"
	.string "They're yummy!$"

GalecrestCity_Chansey_Text_0:
# 368 "data//maps/GalecrestCity/scripts.pory"
	.string "CHANSEY looks happy to be out in the\n"
	.string "garden!$"

GalecrestCity_NPC_12_Text_0:
# 374 "data//maps/GalecrestCity/scripts.pory"
	.string "If you continue west from here, you'll\n"
	.string "enter Route 5 and the Vilethorn Woods.\l"
	.string "Many years ago, one of the rich folk\l"
	.string "here left to build a cottage deep in the\l"
	.string "woods. Who would want to live in a\l"
	.string "creepy forest like that?\p"
	.string "Rich folk I tell you...$"

GalecrestCity_NPC_13_Text_0:
# 379 "data//maps/GalecrestCity/scripts.pory"
	.string "This part of town is so clean and\n"
	.string "peaceful!$"

GalecrestCity_NPC_14_Text_0:
# 394 "data//maps/GalecrestCity/scripts.pory"
	.string "Hehehe...this was too easy!$"

GalecrestCity_NPC_14_Text_1:
# 403 "data//maps/GalecrestCity/scripts.pory"
	.string "I look suspicious? How dare you! I'm\n"
	.string "just innocently hanging around behind\l"
	.string "this rich house! I don't take such\l"
	.string "accusations lightly!$"

GalecrestCity_NPC_14_Text_2:
# 405 "data//maps/GalecrestCity/scripts.pory"
	.string "I've been caught!$"

GalecrestCity_NPC_14_Text_3:
# 407 "data//maps/GalecrestCity/scripts.pory"
	.string "Fine, you got me! I'm a thief alright?\n"
	.string "I'll give you what I stole. It's not\l"
	.string "worth going to jail for.$"

GalecrestCity_NPC_14_Text_4:
# 410 "data//maps/GalecrestCity/scripts.pory"
	.string "I knew I shouldn't have tried to steal\n"
	.string "anything near the Detective Academy!$"

GalecrestCity_Nickit_Text_0:
# 428 "data//maps/GalecrestCity/scripts.pory"
	.string "Nickit is grinning mischievously. What's\n"
	.string "it upto?$"

GalecrestCity_NPC_15_Text_0:
# 435 "data//maps/GalecrestCity/scripts.pory"
	.string "I really want to visit the Silversun\n"
	.string "Theatre and see a show! But crossing\l"
	.string "Vilethorn Woods isn't a good idea...$"

GalecrestCity_NPC_16_Text_0:
# 441 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm sorry! I won't skip class again!$"

GalecrestCity_NPC_17_Text_0:
# 448 "data//maps/GalecrestCity/scripts.pory"
	.string "One more misdeneanour and I'll have you\n"
	.string "expelled, got it? And then you'll never\l"
	.string "get your Charcadet.$"

GalecrestCity_NPC_18_Text_0:
# 455 "data//maps/GalecrestCity/scripts.pory"
	.string "All my life I've lived in this\n"
	.string "neighbourhood. It's all I've seen and all\l"
	.string "I know...and now I'm too old to go\l"
	.string "exploring Cormoria.$"

GalecrestCity_NPC_18_Text_1:
# 464 "data//maps/GalecrestCity/scripts.pory"
	.string "Have you ever felt like I do?$"

GalecrestCity_NPC_18_Text_2:
# 466 "data//maps/GalecrestCity/scripts.pory"
	.string "Experience does not discriminate. We all\n"
	.string "feel regret.\p"
	.string "But you still have time to change.\p"
	.string "Take this as a memento - don't let\n"
	.string "anything bind you!$"

GalecrestCity_NPC_18_Text_3:
# 470 "data//maps/GalecrestCity/scripts.pory"
	.string "You're still innocent. The smile on your\n"
	.string "face is so bright! It lightens my heart.\p"
	.string "Accept this as a memento - hold tightly\n"
	.string "onto that smile of yours!$"

GalecrestCity_NPC_19_Text_0:
# 481 "data//maps/GalecrestCity/scripts.pory"
	.string "I learned something new in class today!\n"
	.string "Some berries reduce the power of\l"
	.string "attacks dealt to them. A Chilan Berry\l"
	.string "for example reduces the power of a\l"
	.string "NORMAL type attack. That'd be useful in\l"
	.string "the gym here, wouldn't it?$"

GalecrestCity_NPC_20_Text_0:
# 486 "data//maps/GalecrestCity/scripts.pory"
	.string "Whaddya want? Thought you'd get\n"
	.string "something by talking to me? You poor\l"
	.string "people are all the same - always looking\l"
	.string "for handouts!$"

GalecrestCity_NPC_Ranger_Text_0:
# 492 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm a Pokemon Ranger. What am I doing?\n"
	.string "Ranger duty of course! I'm cleaning up\l"
	.string "the city. There's so much junk lying\l"
	.string "around!$"

GalecrestCity_NPC_Red_Text_0:
# 498 "data//maps/GalecrestCity/scripts.pory"
	.string "Sorry trainer, the Gym Leader's not in\n"
	.string "right now. He should be back soon. Check\l"
	.string "out the Detective Academy in the\l"
	.string "meantime!$"
