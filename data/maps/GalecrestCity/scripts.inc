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


GalecrestCity_Froakie::
# 283 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 284 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 285 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_FROAKIE, CRY_MODE_ENCOUNTER
# 286 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Froakie_Text_0
# 287 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_5::
# 295 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 296 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 298 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_ROCKSMASH, GalecrestCity_NPC_5_2
# 301 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_1
# 302 "data//maps/GalecrestCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_NPC_5_Text_2, GalecrestCity_NPC_5_Text_3, GalecrestCity_NPC_5_Text_4, GalecrestCity_NPC_5_Text_5
# 303 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_NPC_5_5
# 308 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_7
GalecrestCity_NPC_5_1:
# 315 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_5_2:
# 299 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_0
	goto GalecrestCity_NPC_5_1

GalecrestCity_NPC_5_5:
# 304 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_6
# 305 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 306 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROCKSMASH
	goto GalecrestCity_NPC_5_1


GalecrestCity_NPC_6::
# 319 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 320 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 321 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_6_Text_0
# 322 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_7::
# 326 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 327 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 328 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_7_Text_0
# 329 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_8::
# 333 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 334 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 335 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_8_Text_0
# 336 "data//maps/GalecrestCity/scripts.pory"
	release
# 337 "data//maps/GalecrestCity/scripts.pory"
	face_left
# 338 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_9::
# 342 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 343 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 344 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_9_Text_0
# 345 "data//maps/GalecrestCity/scripts.pory"
	release
# 346 "data//maps/GalecrestCity/scripts.pory"
	face_right
# 347 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_10::
# 351 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 352 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 353 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_10_Text_0
# 354 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_11::
# 359 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 360 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 361 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_0
# 363 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_NURSE_BERRY, GalecrestCity_NPC_11_2
# 366 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_1
# 367 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_CHILAN_BERRY, 3
# 368 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_NURSE_BERRY
GalecrestCity_NPC_11_1:
# 370 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_11_2:
	goto GalecrestCity_NPC_11_1


GalecrestCity_Chansey::
# 377 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 378 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 379 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 380 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Chansey_Text_0
# 381 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_12::
# 387 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 388 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 389 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_12_Text_0
# 390 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_13::
# 394 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 395 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 396 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_13_Text_0
# 397 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_14::
# 408 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 410 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 0
	goto_if_eq GalecrestCity_NPC_14_2
# 414 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 415 "data//maps/GalecrestCity/scripts.pory"
	release
# 416 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 417 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 418 "data//maps/GalecrestCity/scripts.pory"
	applymovement 12, GalecrestCity_NPC_14_Movement_0
# 419 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 420 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_1
# 422 "data//maps/GalecrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECREST_ROBBER, GalecrestCity_NPC_14_Text_2
# 423 "data//maps/GalecrestCity/scripts.pory"
	release
# 424 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_3
# 425 "data//maps/GalecrestCity/scripts.pory"
	release
# 426 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_PEARL_STRING
# 427 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_4
# 428 "data//maps/GalecrestCity/scripts.pory"
	release
# 430 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 431 "data//maps/GalecrestCity/scripts.pory"
	removeobject 12
# 432 "data//maps/GalecrestCity/scripts.pory"
	removeobject 37
# 433 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 435 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROBBER
# 436 "data//maps/GalecrestCity/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 2
GalecrestCity_NPC_14_1:
# 439 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_14_2:
# 411 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 412 "data//maps/GalecrestCity/scripts.pory"
	release
	goto GalecrestCity_NPC_14_1


GalecrestCity_Nickit::
# 443 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 444 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_NICKIT, CRY_MODE_NORMAL
# 445 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Nickit_Text_0
# 446 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_15::
# 451 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 452 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 453 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_15_Text_0
# 454 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_16::
# 458 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 459 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 460 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_16_Text_0
# 461 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_17::
# 465 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 466 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 467 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_17_Text_0
# 468 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_18::
# 472 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 473 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_0
# 474 "data//maps/GalecrestCity/scripts.pory"
	release
# 476 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_REGRETFULMAN, GalecrestCity_NPC_18_1
# 480 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 481 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_1, MSGBOX_YESNO
# 482 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_NPC_18_5
# 487 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_3
# 488 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_BRIGHT_POWDER
# 489 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
GalecrestCity_NPC_18_4:
# 491 "data//maps/GalecrestCity/scripts.pory"
	face_left
# 492 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_18_1:
# 477 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_18_5:
# 483 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_2
# 484 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_BINDING_BAND
# 485 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
	goto GalecrestCity_NPC_18_4


GalecrestCity_NPC_19::
# 497 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 498 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 499 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_19_Text_0
# 500 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_20::
# 505 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 506 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 507 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_20_Text_0
# 508 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_Red::
# 517 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 518 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 519 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_Red_Text_0
# 520 "data//maps/GalecrestCity/scripts.pory"
	release
# 521 "data//maps/GalecrestCity/scripts.pory"
	applymovement 39, GalecrestCity_DetectiveMeet_Main_Movement_0
# 522 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 523 "data//maps/GalecrestCity/scripts.pory"
	releaseall
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

# 418 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_NPC_14_Movement_0:
# 418 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
	step_end

GalecrestCity_OnFrame_Text_0:
# 34 "data//maps/GalecrestCity/scripts.pory"
	.string "GABRIELLE: ...have we left that place?\p"
	.string "Yes! Yes we have! I'm so relieved. I've\n"
	.string "never been so happy to see a city\l"
	.string "before!\p"
	.string "This must be Galecrest City. The\n"
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
	.string "Rue: {PLAYER}! You're here! Where\n"
	.string "have you been?$"

GalecrestCity_DetectiveMeet_Main_Text_0:
# 149 "data//maps/GalecrestCity/scripts.pory"
	.string "Rue: We heard from KOHLA that you went\n"
	.string "up to the peak to stop Team Somber.\l"
	.string "What happened up there?\p"
	.string "...\p"
	.string "...$"

GalecrestCity_DetectiveMeet_Main_Text_1:
# 154 "data//maps/GalecrestCity/scripts.pory"
	.string "Rue: What! Is that true? Did all of that\n"
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
	.string "possible Rue?\p"
	.string "Rue: No, I had no idea. We knew that\n"
	.string "dreamstones absorbed {PKMN} memories, but\l"
	.string "to transport things and people...$"

GalecrestCity_DetectiveMeet_Main_Text_4:
# 165 "data//maps/GalecrestCity/scripts.pory"
	.string "Rue: {PLAYER}, you encountered\n"
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

GalecrestCity_Froakie_Text_0:
# 286 "data//maps/GalecrestCity/scripts.pory"
	.string "FROAKIE is having fun with the siblings!$"

GalecrestCity_NPC_5_Text_0:
# 299 "data//maps/GalecrestCity/scripts.pory"
	.string "I need to find a {PKMN} that can learn ROCK\n"
	.string "SMASH...$"

GalecrestCity_NPC_5_Text_1:
# 301 "data//maps/GalecrestCity/scripts.pory"
	.string "This rock can be smashed by a {PKMN} that\n"
	.string "knows a certain move...I forgot which\l"
	.string "one though! Do you know?$"

GalecrestCity_NPC_5_Text_2:
# 302 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK BLAST$"

GalecrestCity_NPC_5_Text_3:
# 302 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK SLIDE$"

GalecrestCity_NPC_5_Text_4:
# 302 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK SMASH$"

GalecrestCity_NPC_5_Text_5:
# 302 "data//maps/GalecrestCity/scripts.pory"
	.string "STONE EDGE$"

GalecrestCity_NPC_5_Text_6:
# 304 "data//maps/GalecrestCity/scripts.pory"
	.string "Yes! Now I remember! In fact, I also\n"
	.string "remember that I have the HM for it here.\l"
	.string "Why don't you keep it?$"

GalecrestCity_NPC_5_Text_7:
# 308 "data//maps/GalecrestCity/scripts.pory"
	.string "No...$"

GalecrestCity_NPC_6_Text_0:
# 321 "data//maps/GalecrestCity/scripts.pory"
	.string "If you head west, you enter the elite\n"
	.string "residential neighborhood.\p"
	.string "The area south of here is poorer.$"

GalecrestCity_NPC_7_Text_0:
# 328 "data//maps/GalecrestCity/scripts.pory"
	.string "The city garden is maintained by\n"
	.string "Rotoms! But for some reason, I've never\l"
	.string "seen any of them at work.$"

GalecrestCity_NPC_8_Text_0:
# 335 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm on a date with the girl of my dreams!\n"
	.string "But we can't ever be together. I'm too\l"
	.string "poor for her family.$"

GalecrestCity_NPC_9_Text_0:
# 344 "data//maps/GalecrestCity/scripts.pory"
	.string "I don't care about money! We love each\n"
	.string "other and that's what matters.$"

GalecrestCity_NPC_10_Text_0:
# 353 "data//maps/GalecrestCity/scripts.pory"
	.string "The Detective Academy is the most\n"
	.string "prestigious police academy in all of\l"
	.string "Cormoria. My husband helped build it,\l"
	.string "many years ago, when he ran a\l"
	.string "construction business.$"

GalecrestCity_NPC_11_Text_0:
# 361 "data//maps/GalecrestCity/scripts.pory"
	.string "I do the night shift at the Pokemon\n"
	.string "Center. During the day, CHANSEY and I\l"
	.string "like to walk around the garden and pick\l"
	.string "berries.$"

GalecrestCity_NPC_11_Text_1:
# 366 "data//maps/GalecrestCity/scripts.pory"
	.string "Here, you can have some of our extra\n"
	.string "berries.$"

GalecrestCity_Chansey_Text_0:
# 380 "data//maps/GalecrestCity/scripts.pory"
	.string "CHANSEY looks happy to be out in the\n"
	.string "garden!$"

GalecrestCity_NPC_12_Text_0:
# 389 "data//maps/GalecrestCity/scripts.pory"
	.string "If you continue west from here, you'll\n"
	.string "enter Route 5 and the Vilethorn Woods.\l"
	.string "Many years ago, one of the rich folk\l"
	.string "from Galecrest City left to build a\l"
	.string "mansion deep in the woods. What a\l"
	.string "strange man!$"

GalecrestCity_NPC_13_Text_0:
# 396 "data//maps/GalecrestCity/scripts.pory"
	.string "This part of town is so clean and\n"
	.string "peaceful!$"

GalecrestCity_NPC_14_Text_0:
# 411 "data//maps/GalecrestCity/scripts.pory"
	.string "Hehehe...this was too easy!$"

GalecrestCity_NPC_14_Text_1:
# 420 "data//maps/GalecrestCity/scripts.pory"
	.string "I look suspicious? How dare you! I'm\n"
	.string "just innocently hanging around behind\l"
	.string "this rich house! I don't take such\l"
	.string "accusations lightly!$"

GalecrestCity_NPC_14_Text_2:
# 422 "data//maps/GalecrestCity/scripts.pory"
	.string "I've been caught!$"

GalecrestCity_NPC_14_Text_3:
# 424 "data//maps/GalecrestCity/scripts.pory"
	.string "Fine, you got me! I'm a thief alright?\n"
	.string "I'll give you what I stole. It's not\l"
	.string "worth going to jail for.$"

GalecrestCity_NPC_14_Text_4:
# 427 "data//maps/GalecrestCity/scripts.pory"
	.string "I knew I shouldn't have tried to steal\n"
	.string "anything near the Detective Academy!$"

GalecrestCity_Nickit_Text_0:
# 445 "data//maps/GalecrestCity/scripts.pory"
	.string "NICKIT is grinning mischievously.\n"
	.string "What's it upto?$"

GalecrestCity_NPC_15_Text_0:
# 453 "data//maps/GalecrestCity/scripts.pory"
	.string "PESTER is this city's Gym Leader! She's\n"
	.string "tough but calculated. She likes strong\l"
	.string "{PKMN} and gives them berries to gain an\l"
	.string "advantage in battle!$"

GalecrestCity_NPC_16_Text_0:
# 460 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm sorry! I won't skip class again!$"

GalecrestCity_NPC_17_Text_0:
# 467 "data//maps/GalecrestCity/scripts.pory"
	.string "One more misdeneanour and I'll have you\n"
	.string "expelled, got it? And then you'll never\l"
	.string "get your CHARCADET.$"

GalecrestCity_NPC_18_Text_0:
# 473 "data//maps/GalecrestCity/scripts.pory"
	.string "All my life I've lived in this\n"
	.string "neighbourhood. It's all I've seen and all\l"
	.string "I know...and now I'm too old to go\l"
	.string "exploring Cormoria.$"

GalecrestCity_NPC_18_Text_1:
# 481 "data//maps/GalecrestCity/scripts.pory"
	.string "Have you ever felt like I do?$"

GalecrestCity_NPC_18_Text_2:
# 483 "data//maps/GalecrestCity/scripts.pory"
	.string "Experience does not discriminate. We all\n"
	.string "feel regret.\p"
	.string "But you still have time to change.\p"
	.string "Take this as a memento - don't let\n"
	.string "anything bind you!$"

GalecrestCity_NPC_18_Text_3:
# 487 "data//maps/GalecrestCity/scripts.pory"
	.string "You're still innocent. The smile on your\n"
	.string "face is so bright! It lightens my heart.\p"
	.string "Accept this as a memento - keep that\n"
	.string "bright smile of yours!$"

GalecrestCity_NPC_19_Text_0:
# 499 "data//maps/GalecrestCity/scripts.pory"
	.string "I learned something new in class today!\n"
	.string "Certain BERRIES reduce the power of\l"
	.string "attacks dealt to them. A CHARTI BERRY\l"
	.string "for example reduces the power of a\l"
	.string "NORMAL type attack. That'd be useful in\l"
	.string "the gym here, wouldn't it?$"

GalecrestCity_NPC_20_Text_0:
# 507 "data//maps/GalecrestCity/scripts.pory"
	.string "Whaddya want? Thought you'd get\n"
	.string "something by talking to me? You poor\l"
	.string "people are all the same - always looking\l"
	.string "for handouts!$"

GalecrestCity_NPC_Red_Text_0:
# 519 "data//maps/GalecrestCity/scripts.pory"
	.string "Sorry trainer, the Gym Leader's not in\n"
	.string "right now. He should be back soon. Check\l"
	.string "out the DETECTIVE ACADEMY in the\l"
	.string "meantime!$"
