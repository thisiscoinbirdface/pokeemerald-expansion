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
# 71 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 72 "data//maps/GalecrestCity/scripts.pory"
	release
# 75 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger0_Movement_1
# 78 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger0_2:
	end


GalecrestCity_DetectiveMeet_Trigger1::
# 82 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger1_2
# 84 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 87 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 88 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 89 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 90 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 92 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 93 "data//maps/GalecrestCity/scripts.pory"
	release
# 96 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger1_Movement_0
# 97 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 100 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger1_2:
	end


GalecrestCity_DetectiveMeet_Trigger2::
# 104 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger2_2
# 106 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 109 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 110 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 111 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 112 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 114 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 115 "data//maps/GalecrestCity/scripts.pory"
	release
# 118 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger2_Movement_0
# 119 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 122 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger2_2:
	end


GalecrestCity_DetectiveMeet_Trigger3::
# 126 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger3_2
# 128 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 131 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 132 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 133 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 134 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 136 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 137 "data//maps/GalecrestCity/scripts.pory"
	release
# 140 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger3_Movement_0
# 141 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 144 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger3_2:
	end


GalecrestCity_DetectiveMeet_Main::
# 149 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_0
# 150 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 151 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 152 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 153 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 154 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_1
# 155 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_2
# 156 "data//maps/GalecrestCity/scripts.pory"
	release
# 157 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_0
# 158 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_1
# 159 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 160 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_3
# 161 "data//maps/GalecrestCity/scripts.pory"
	release
# 162 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 163 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_OnFrame_Movement_0
# 164 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 165 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_4
# 166 "data//maps/GalecrestCity/scripts.pory"
	release
# 169 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_2
# 170 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_2
# 171 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 173 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_3
# 174 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 175 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_RUE
# 178 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 179 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 180 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 181 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_5
# 182 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_6
# 183 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_7
# 184 "data//maps/GalecrestCity/scripts.pory"
	release
# 185 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_1
# 186 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_1
# 187 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_1
# 188 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 189 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_8
# 190 "data//maps/GalecrestCity/scripts.pory"
	release
# 191 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 192 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 193 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 194 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 195 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_9
# 196 "data//maps/GalecrestCity/scripts.pory"
	release
# 199 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 200 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET1
# 201 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET2
# 202 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 205 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_DETECTIVE_CONVO
# 206 "data//maps/GalecrestCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_3
# 207 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_EventScript_Poochyena::
# 230 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POOCHYENA, GalecrestCity_EventScript_Poochyena_2
# 232 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 233 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_EventScript_Poochyena_Text_0
# 234 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_SYS_EXP_ALL
# 235 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_EventScript_Poochyena_2:
	end


GalecrestCity_NPC_1::
# 255 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 256 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 257 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_1_Text_0
# 258 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_2::
# 262 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 263 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 264 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_2_Text_0
# 265 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_3::
# 269 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 270 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 271 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_3_Text_0
# 272 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_4::
# 276 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 277 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 278 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_4_Text_0
# 279 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_5::
# 284 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 285 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 287 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_ROCKSMASH, GalecrestCity_NPC_5_2
# 290 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_1
# 291 "data//maps/GalecrestCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_NPC_5_Text_2, GalecrestCity_NPC_5_Text_3, GalecrestCity_NPC_5_Text_4, GalecrestCity_NPC_5_Text_5
# 292 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_NPC_5_5
# 297 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_7
GalecrestCity_NPC_5_1:
# 304 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_5_2:
# 288 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_0
	goto GalecrestCity_NPC_5_1

GalecrestCity_NPC_5_5:
# 293 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_6
# 294 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 295 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROCKSMASH
	goto GalecrestCity_NPC_5_1


GalecrestCity_NPC_6::
# 308 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 309 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 310 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_6_Text_0
# 311 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_7::
# 315 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 316 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 317 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_7_Text_0
# 318 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_8::
# 322 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 323 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 324 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_8_Text_0
# 325 "data//maps/GalecrestCity/scripts.pory"
	release
# 326 "data//maps/GalecrestCity/scripts.pory"
	face_left
# 327 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_9::
# 331 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 332 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 333 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_9_Text_0
# 334 "data//maps/GalecrestCity/scripts.pory"
	release
# 335 "data//maps/GalecrestCity/scripts.pory"
	face_right
# 336 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_10::
# 340 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 341 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 342 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_10_Text_0
# 343 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_11::
# 348 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 349 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 351 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_0
# 353 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_NURSE_BERRY, GalecrestCity_NPC_11_2
GalecrestCity_NPC_11_1:
# 358 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_11_2:
# 354 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_1
# 355 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_CHOPLE_BERRY, 3
# 356 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_NURSE_BERRY
	goto GalecrestCity_NPC_11_1


GalecrestCity_NPC_12::
# 362 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 363 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 364 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_12_Text_0
# 365 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_13::
# 369 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 370 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 371 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_13_Text_0
# 372 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_14::
# 383 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 385 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 0
	goto_if_eq GalecrestCity_NPC_14_2
# 389 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 390 "data//maps/GalecrestCity/scripts.pory"
	release
# 391 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 392 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 393 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
# 394 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 395 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_1
# 397 "data//maps/GalecrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECREST_ROBBER, GalecrestCity_NPC_14_Text_2
# 398 "data//maps/GalecrestCity/scripts.pory"
	release
# 399 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_3
# 400 "data//maps/GalecrestCity/scripts.pory"
	release
# 401 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_PEARL_STRING
# 402 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_4
# 403 "data//maps/GalecrestCity/scripts.pory"
	release
# 405 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 406 "data//maps/GalecrestCity/scripts.pory"
	removeobject 12
# 407 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 409 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROBBER
GalecrestCity_NPC_14_1:
# 412 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_14_2:
# 386 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 387 "data//maps/GalecrestCity/scripts.pory"
	release
	goto GalecrestCity_NPC_14_1


GalecrestCity_NPC_15::
# 416 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 417 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 418 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_15_Text_0
# 419 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_16::
# 423 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 424 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 425 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_16_Text_0
# 426 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_17::
# 430 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 431 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 432 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_17_Text_0
# 433 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_18::
# 437 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 438 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_0
# 439 "data//maps/GalecrestCity/scripts.pory"
	release
# 441 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_REGRETFULMAN, GalecrestCity_NPC_18_1
# 445 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 446 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_1, MSGBOX_YESNO
# 447 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_NPC_18_5
# 452 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_3
# 453 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_BRIGHT_POWDER
# 454 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
GalecrestCity_NPC_18_4:
# 456 "data//maps/GalecrestCity/scripts.pory"
	face_left
# 457 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_18_1:
# 442 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_18_5:
# 448 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_2
# 449 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_BINDING_BAND
# 450 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
	goto GalecrestCity_NPC_18_4


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

# 75 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_1:
# 75 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 75 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 75 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 75 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 96 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger1_Movement_0:
# 96 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 96 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 96 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 118 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger2_Movement_0:
# 118 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 118 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 118 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 118 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 140 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger3_Movement_0:
# 140 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 140 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 140 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 140 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 140 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 157 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_0:
# 157 "data//maps/GalecrestCity/scripts.pory"
	face_down
	step_end

# 158 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_1:
# 158 "data//maps/GalecrestCity/scripts.pory"
	face_up
	step_end

# 169 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_2:
# 169 "data//maps/GalecrestCity/scripts.pory"
	face_left
	step_end

# 173 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_3:
# 173 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 173 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 173 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 173 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 173 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 173 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

GalecrestCity_OnFrame_Text_0:
# 34 "data//maps/GalecrestCity/scripts.pory"
	.string "GABRIELLE: ...have we left that place?\p"
	.string "Yes! Yes we have! I'm so relieved. I've\n"
	.string "never been so happy to see a city\l"
	.string "before!\p"
	.string "This must be GALECREST CITY. The\n"
	.string "Detective Academy is here. I suppose\l"
	.string "you'll be headed there. Just head north\l"
	.string "from here...\p"
	.string "...and I'll be going back to Team Somber.\p"
	.string "Sigh...\p"
	.string "...\p"
	.string "{PLAYER}, we're still enemies! But you\n"
	.string "saved me. I owe you one.\p"
	.string "...\p"
	.string "T-thanks. Bye.$"

GalecrestCity_DetectiveMeet_Trigger0_Text_0:
# 71 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: {PLAYER}! You're here! Where\n"
	.string "have you been?$"

GalecrestCity_DetectiveMeet_Main_Text_0:
# 149 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: We heard from KOHLA that you went\n"
	.string "up to the peak to stop Team Somber.\l"
	.string "What happened up there?\p"
	.string "...\p"
	.string "...$"

GalecrestCity_DetectiveMeet_Main_Text_1:
# 154 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: What! Is that true? Did all of that\n"
	.string "happen?\p"
	.string "...\p"
	.string "I'm glad you're safe, {PLAYER}. What a\n"
	.string "series of events!$"

GalecrestCity_DetectiveMeet_Main_Text_2:
# 155 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: So the dreamstones\n"
	.string "transported you to another dimension\l"
	.string "that you couldn't recognise? And the\l"
	.string "{PKMN} were completely different too?$"

GalecrestCity_DetectiveMeet_Main_Text_3:
# 160 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: Did you know this was\n"
	.string "possible RUE?\p"
	.string "RUE: No, I had no idea. We knew that\n"
	.string "dreamstones absorbed {PKMN} memories, but\l"
	.string "to transport things and people...$"

GalecrestCity_DetectiveMeet_Main_Text_4:
# 165 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: {PLAYER}, you encountered\n"
	.string "ancient {PKMN} there, right? I wonder...\p"
	.string "Did the dreamstone take you back to\n"
	.string "the past somehow?\p"
	.string "RUE: Incredible...so much we don't yet\n"
	.string "know...\p"
	.string "I need to do some research. I'm going to\n"
	.string "head back to the lab.\p"
	.string "{PLAYER}, the detectives have some\n"
	.string "updates for you.\p"
	.string "...\p"
	.string "I'm glad you're okay.$"

GalecrestCity_DetectiveMeet_Main_Text_5:
# 181 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: We've uncovered a new lead\n"
	.string "on Professor Tenebris. An agent told us\l"
	.string "that he was spotted in Silversun City.$"

GalecrestCity_DetectiveMeet_Main_Text_6:
# 182 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: There's one issue...Team\n"
	.string "Somber. They're a known and dangerous\l"
	.string "criminal syndicate that aims to wrest\l"
	.string "power from the government.\p"
	.string "Their hideout is confirmed to be\n"
	.string "somewhere around Silversun City too.\p"
	.string "If the Professor, his dreamstone and\n"
	.string "Team Somber are in the same spot,\l"
	.string "things could erupt. We have to be there.$"

GalecrestCity_DetectiveMeet_Main_Text_7:
# 183 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: But now that we know Team\n"
	.string "Somber is involved, we fear for your\l"
	.string "safety, {PLAYER}. You may have\l"
	.string "handled a couple of grunts, but you're\l"
	.string "still green.\p"
	.string "So heed my instructions carefully -\n"
	.string "make your way to Silversun City as soon\l"
	.string "as possible and keep a low profile. Do\l"
	.string "NOT engage with any suspicious\l"
	.string "individuals!$"

GalecrestCity_DetectiveMeet_Main_Text_8:
# 189 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: This building is the\n"
	.string "Detective Academy. Your frierd KOHLA\l"
	.string "was trained here. He knows the plan\l"
	.string "already. Go and talk to him first.$"

GalecrestCity_DetectiveMeet_Main_Text_9:
# 195 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: See you in Silversun City.$"

GalecrestCity_EventScript_Poochyena_Text_0:
# 233 "data//maps/GalecrestCity/scripts.pory"
	.string "POOCHYENA: grr...\p"
	.string "The POOCHYENA are clearly on edge.\n"
	.string "Better not aggravate them!$"

GalecrestCity_NPC_1_Text_0:
# 257 "data//maps/GalecrestCity/scripts.pory"
	.string "You don't look like someone from\n"
	.string "here...are you a new student at the\l"
	.string "Detective Academy?$"

GalecrestCity_NPC_2_Text_0:
# 264 "data//maps/GalecrestCity/scripts.pory"
	.string "The city doesn't service our\n"
	.string "neighborhood. That's why these grass\l"
	.string "patches and puddles have come up.$"

GalecrestCity_NPC_3_Text_0:
# 271 "data//maps/GalecrestCity/scripts.pory"
	.string "All the rich kids play at home, but me\n"
	.string "and my brother love to splash in these\l"
	.string "puddles!$"

GalecrestCity_NPC_4_Text_0:
# 278 "data//maps/GalecrestCity/scripts.pory"
	.string "When I grow up, I want to be just like my\n"
	.string "sister!$"

GalecrestCity_NPC_5_Text_0:
# 288 "data//maps/GalecrestCity/scripts.pory"
	.string "I need to find a {PKMN} that can learn ROCK\n"
	.string "SMASH...$"

GalecrestCity_NPC_5_Text_1:
# 290 "data//maps/GalecrestCity/scripts.pory"
	.string "This rock can be smashed by a {PKMN} that\n"
	.string "knows a certain move...I forgot which\l"
	.string "one though! Do you know?$"

GalecrestCity_NPC_5_Text_2:
# 291 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK BLAST$"

GalecrestCity_NPC_5_Text_3:
# 291 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK SLIDE$"

GalecrestCity_NPC_5_Text_4:
# 291 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK SMASH$"

GalecrestCity_NPC_5_Text_5:
# 291 "data//maps/GalecrestCity/scripts.pory"
	.string "STONE EDGE$"

GalecrestCity_NPC_5_Text_6:
# 293 "data//maps/GalecrestCity/scripts.pory"
	.string "Yes! Now I remember! In fact, I also\n"
	.string "remember that I have the HM for it here.\l"
	.string "Why don't you keep it?$"

GalecrestCity_NPC_5_Text_7:
# 297 "data//maps/GalecrestCity/scripts.pory"
	.string "No...$"

GalecrestCity_NPC_6_Text_0:
# 310 "data//maps/GalecrestCity/scripts.pory"
	.string "If you head west, you enter the elite\n"
	.string "residential neighborhood.\p"
	.string "The area south of here is poorer.$"

GalecrestCity_NPC_7_Text_0:
# 317 "data//maps/GalecrestCity/scripts.pory"
	.string "The city garden is maintained by\n"
	.string "Rotoms! But for some reason, I've never\l"
	.string "seen any of them at work.$"

GalecrestCity_NPC_8_Text_0:
# 324 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm on a date with the girl of my dreams!\n"
	.string "But we can't ever be together. I'm too\l"
	.string "poor for her family.$"

GalecrestCity_NPC_9_Text_0:
# 333 "data//maps/GalecrestCity/scripts.pory"
	.string "I don't care about money! We love each\n"
	.string "other and that's what matters.$"

GalecrestCity_NPC_10_Text_0:
# 342 "data//maps/GalecrestCity/scripts.pory"
	.string "The Detective Academy is the most\n"
	.string "prestigious police academy in all of\l"
	.string "CORMORIA. My husband helped build it,\l"
	.string "many years ago, when he ran a\l"
	.string "construction business.$"

GalecrestCity_NPC_11_Text_0:
# 351 "data//maps/GalecrestCity/scripts.pory"
	.string "I do the night shift at the Pokemon\n"
	.string "Center. During the day, I like to walk\l"
	.string "around the gardens and pick berries.$"

GalecrestCity_NPC_11_Text_1:
# 354 "data//maps/GalecrestCity/scripts.pory"
	.string "Here, you can have some of my extra\n"
	.string "berries.$"

GalecrestCity_NPC_12_Text_0:
# 364 "data//maps/GalecrestCity/scripts.pory"
	.string "If you continue west from here, you'll\n"
	.string "enter Route 5 and the Vilethorn Woods.\l"
	.string "Many years ago, one of the rich folk\l"
	.string "from Galecrest City left to build a\l"
	.string "mansion deep in the woods. What a\l"
	.string "strange man!$"

GalecrestCity_NPC_13_Text_0:
# 371 "data//maps/GalecrestCity/scripts.pory"
	.string "This part of town is so clean and\n"
	.string "peaceful!$"

GalecrestCity_NPC_14_Text_0:
# 386 "data//maps/GalecrestCity/scripts.pory"
	.string "Hehehe...look at all those pearls!$"

GalecrestCity_NPC_14_Text_1:
# 395 "data//maps/GalecrestCity/scripts.pory"
	.string "I look suspicious? How dare you! I'm\n"
	.string "just innocently hanging around behind\l"
	.string "this rich house! I don't take such\l"
	.string "accusations lightly!$"

GalecrestCity_NPC_14_Text_2:
# 397 "data//maps/GalecrestCity/scripts.pory"
	.string "I've been caught!$"

GalecrestCity_NPC_14_Text_3:
# 399 "data//maps/GalecrestCity/scripts.pory"
	.string "Fine, you got me! I'm a thief alright?\n"
	.string "I'll give you what I stole. It's not\l"
	.string "worth going to jail for.$"

GalecrestCity_NPC_14_Text_4:
# 402 "data//maps/GalecrestCity/scripts.pory"
	.string "I knew I shouldn't have tried to steal\n"
	.string "anything near the Detective Academy!$"

GalecrestCity_NPC_15_Text_0:
# 418 "data//maps/GalecrestCity/scripts.pory"
	.string "PESTER is this city's Gym Leader! She's\n"
	.string "tough but calculated. She likes strong\l"
	.string "{PKMN} and gives them berries to gain an\l"
	.string "advantage in battle!$"

GalecrestCity_NPC_16_Text_0:
# 425 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm sorry! I won't skip class again!$"

GalecrestCity_NPC_17_Text_0:
# 432 "data//maps/GalecrestCity/scripts.pory"
	.string "One more misdeneanour and I'll have you\n"
	.string "expelled, got it? And then you'll never\l"
	.string "get your CHARCADET.$"

GalecrestCity_NPC_18_Text_0:
# 438 "data//maps/GalecrestCity/scripts.pory"
	.string "All my life I've lived in this\n"
	.string "neighbourhood. It's all I've seen and all\l"
	.string "I know...and now I'm too old to go\l"
	.string "exploring CORMORIA.$"

GalecrestCity_NPC_18_Text_1:
# 446 "data//maps/GalecrestCity/scripts.pory"
	.string "Have you ever felt like I do?$"

GalecrestCity_NPC_18_Text_2:
# 448 "data//maps/GalecrestCity/scripts.pory"
	.string "Experience does not discriminate. We all\n"
	.string "feel regret.\p"
	.string "But you still have time to change.\p"
	.string "Take this as a memento - don't let\n"
	.string "anything bind you!$"

GalecrestCity_NPC_18_Text_3:
# 452 "data//maps/GalecrestCity/scripts.pory"
	.string "You're still innocent. The smile on your\n"
	.string "face is so bright! It lightens my heart.\p"
	.string "Accept this as a memento - keep that\n"
	.string "bright smile of yours!$"
