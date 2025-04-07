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
	release
# 183 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 184 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_6
# 185 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_7
# 186 "data//maps/GalecrestCity/scripts.pory"
	release
# 187 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_1
# 188 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_1
# 189 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_1
# 190 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 191 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_8
# 192 "data//maps/GalecrestCity/scripts.pory"
	release
# 193 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 194 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 195 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 196 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 197 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_9
# 198 "data//maps/GalecrestCity/scripts.pory"
	release
# 201 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 202 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET1
# 203 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET2
# 204 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 207 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_DETECTIVE_CONVO
# 208 "data//maps/GalecrestCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_3
# 209 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_EventScript_Poochyena::
# 232 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POOCHYENA, GalecrestCity_EventScript_Poochyena_2
# 234 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 235 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_EventScript_Poochyena_Text_0
# 236 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_SYS_EXP_ALL
# 237 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_EventScript_Poochyena_2:
	end


GalecrestCity_NPC_1::
# 257 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 258 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 259 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_1_Text_0
# 260 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_2::
# 264 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 265 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 266 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_2_Text_0
# 267 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_3::
# 271 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 272 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 273 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_3_Text_0
# 274 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_4::
# 278 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 279 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 280 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_4_Text_0
# 281 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_Froakie::
# 285 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 286 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 287 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_FROAKIE, CRY_MODE_ENCOUNTER
# 288 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Froakie_Text_0
# 289 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_5::
# 297 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 298 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 300 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_ROCKSMASH, GalecrestCity_NPC_5_2
# 303 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_1
# 304 "data//maps/GalecrestCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_NPC_5_Text_2, GalecrestCity_NPC_5_Text_3, GalecrestCity_NPC_5_Text_4, GalecrestCity_NPC_5_Text_5
# 305 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_NPC_5_5
# 310 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_7
GalecrestCity_NPC_5_1:
# 317 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_5_2:
# 301 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_0
	goto GalecrestCity_NPC_5_1

GalecrestCity_NPC_5_5:
# 306 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_6
# 307 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 308 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROCKSMASH
	goto GalecrestCity_NPC_5_1


GalecrestCity_NPC_6::
# 321 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 322 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 323 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_6_Text_0
# 324 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_7::
# 328 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 329 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 330 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_7_Text_0
# 331 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_8::
# 335 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 336 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 337 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_8_Text_0
# 338 "data//maps/GalecrestCity/scripts.pory"
	release
# 339 "data//maps/GalecrestCity/scripts.pory"
	face_left
# 340 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_9::
# 344 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 345 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 346 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_9_Text_0
# 347 "data//maps/GalecrestCity/scripts.pory"
	release
# 348 "data//maps/GalecrestCity/scripts.pory"
	face_right
# 349 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_10::
# 353 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 354 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 355 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_10_Text_0
# 356 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_11::
# 361 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 362 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 363 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_0
# 365 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_NURSE_BERRY, GalecrestCity_NPC_11_2
# 368 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_1
# 369 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_CHILAN_BERRY, 3
# 370 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_NURSE_BERRY
GalecrestCity_NPC_11_1:
# 372 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_11_2:
	goto GalecrestCity_NPC_11_1


GalecrestCity_Chansey::
# 379 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 380 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 381 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 382 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Chansey_Text_0
# 383 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_12::
# 389 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 390 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 391 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_12_Text_0
# 392 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_13::
# 396 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 397 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 398 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_13_Text_0
# 399 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_14::
# 410 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 412 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 0
	goto_if_eq GalecrestCity_NPC_14_2
# 416 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 417 "data//maps/GalecrestCity/scripts.pory"
	release
# 418 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 419 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 420 "data//maps/GalecrestCity/scripts.pory"
	applymovement 12, GalecrestCity_NPC_14_Movement_0
# 421 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 422 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_1
# 424 "data//maps/GalecrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECREST_ROBBER, GalecrestCity_NPC_14_Text_2
# 425 "data//maps/GalecrestCity/scripts.pory"
	release
# 426 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_3
# 427 "data//maps/GalecrestCity/scripts.pory"
	release
# 428 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_PEARL_STRING
# 429 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_4
# 430 "data//maps/GalecrestCity/scripts.pory"
	release
# 432 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 433 "data//maps/GalecrestCity/scripts.pory"
	removeobject 12
# 434 "data//maps/GalecrestCity/scripts.pory"
	removeobject 37
# 435 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 437 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROBBER
# 438 "data//maps/GalecrestCity/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 2
GalecrestCity_NPC_14_1:
# 441 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_14_2:
# 413 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 414 "data//maps/GalecrestCity/scripts.pory"
	release
	goto GalecrestCity_NPC_14_1


GalecrestCity_Nickit::
# 445 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 446 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_NICKIT, CRY_MODE_NORMAL
# 447 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Nickit_Text_0
# 448 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_15::
# 453 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 454 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 455 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_15_Text_0
# 456 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_16::
# 460 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 461 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_16_Text_0
# 462 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_17::
# 466 "data//maps/GalecrestCity/scripts.pory"
	lockall
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

# 420 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_NPC_14_Movement_0:
# 420 "data//maps/GalecrestCity/scripts.pory"
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
# 71 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: {PLAYER}! You're here! Where\n"
	.string "have you been?$"

GalecrestCity_DetectiveMeet_Main_Text_0:
# 149 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: We heard from Kohla that you went\n"
	.string "up to the peak to stop Team Somber.\l"
	.string "What happened up there?\p"
	.string "...\p"
	.string "...$"

GalecrestCity_DetectiveMeet_Main_Text_1:
# 154 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: What! Is that true? Did all of that\n"
	.string "happen?\p"
	.string "...\p"
	.string "RUE: I'm glad you're safe, {PLAYER}.\n"
	.string "What a series of events!$"

GalecrestCity_DetectiveMeet_Main_Text_2:
# 155 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: So the dreamstones\n"
	.string "transported you to another dimension\l"
	.string "that you couldn't recognise? And the\l"
	.string "Pokemon were completely different too?$"

GalecrestCity_DetectiveMeet_Main_Text_3:
# 160 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: Did you know this was\n"
	.string "possible Rue?\p"
	.string "RUE: No, I had no idea. We knew that\n"
	.string "dreamstones absorbed the memories of\l"
	.string "sleeping Pokemon - that's why its\l"
	.string "called a dreamstone! But to transport\l"
	.string "things and people...$"

GalecrestCity_DetectiveMeet_Main_Text_4:
# 165 "data//maps/GalecrestCity/scripts.pory"
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
# 181 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: We've uncovered a new lead\n"
	.string "on Professor Tenebris. An agent told us\l"
	.string "that he was spotted in Silversun City.$"

GalecrestCity_DetectiveMeet_Main_Text_6:
# 184 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: There's one issue...Team\n"
	.string "Somber. They're a known and dangerous\l"
	.string "criminal syndicate that aims to wrest\l"
	.string "power from the government.\p"
	.string "DETECTIVE: Their hideout is confirmed\n"
	.string "to be somewhere around Silversun City\l"
	.string "too.\p"
	.string "DETECTIVE: If the Professor, his\n"
	.string "dreamstone and Team Somber are in the\l"
	.string "same spot, things could erupt. We have\l"
	.string "to be there!$"

GalecrestCity_DetectiveMeet_Main_Text_7:
# 185 "data//maps/GalecrestCity/scripts.pory"
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
# 191 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: This building is the\n"
	.string "Detective Academy. Your frierd Kohla\l"
	.string "was trained here. He knows the plan\l"
	.string "already. Go and talk to him first.$"

GalecrestCity_DetectiveMeet_Main_Text_9:
# 197 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: See you in Silversun City.$"

GalecrestCity_EventScript_Poochyena_Text_0:
# 235 "data//maps/GalecrestCity/scripts.pory"
	.string "POOCHYENA: grr...\p"
	.string "The Poochyena are clearly on edge.\n"
	.string "Better not aggravate them!$"

GalecrestCity_NPC_1_Text_0:
# 259 "data//maps/GalecrestCity/scripts.pory"
	.string "You don't look like someone from\n"
	.string "here...are you a new student at the\l"
	.string "Detective Academy?$"

GalecrestCity_NPC_2_Text_0:
# 266 "data//maps/GalecrestCity/scripts.pory"
	.string "The city doesn't service our\n"
	.string "neighborhood. That's why these grass\l"
	.string "patches and puddles have come up.$"

GalecrestCity_NPC_3_Text_0:
# 273 "data//maps/GalecrestCity/scripts.pory"
	.string "All the rich kids play at home, but me\n"
	.string "and my brother love to splash in these\l"
	.string "puddles!$"

GalecrestCity_NPC_4_Text_0:
# 280 "data//maps/GalecrestCity/scripts.pory"
	.string "When I grow up, I want to be just like my\n"
	.string "sister!$"

GalecrestCity_Froakie_Text_0:
# 288 "data//maps/GalecrestCity/scripts.pory"
	.string "FROAKIE is having fun with the siblings!$"

GalecrestCity_NPC_5_Text_0:
# 301 "data//maps/GalecrestCity/scripts.pory"
	.string "I need to find a Pokemon that can learn\n"
	.string "ROCK SMASH...$"

GalecrestCity_NPC_5_Text_1:
# 303 "data//maps/GalecrestCity/scripts.pory"
	.string "This rock can be smashed by a Pokemon\n"
	.string "that knows a certain move...I forgot\l"
	.string "which one though! Do you know?$"

GalecrestCity_NPC_5_Text_2:
# 304 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK BLAST$"

GalecrestCity_NPC_5_Text_3:
# 304 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK SLIDE$"

GalecrestCity_NPC_5_Text_4:
# 304 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK SMASH$"

GalecrestCity_NPC_5_Text_5:
# 304 "data//maps/GalecrestCity/scripts.pory"
	.string "STONE EDGE$"

GalecrestCity_NPC_5_Text_6:
# 306 "data//maps/GalecrestCity/scripts.pory"
	.string "Yes! Now I remember! In fact, I also\n"
	.string "remember that I have the HM for it here.\l"
	.string "Why don't you keep it?$"

GalecrestCity_NPC_5_Text_7:
# 310 "data//maps/GalecrestCity/scripts.pory"
	.string "No...$"

GalecrestCity_NPC_6_Text_0:
# 323 "data//maps/GalecrestCity/scripts.pory"
	.string "If you head west, you enter the elite\n"
	.string "residential neighborhood.\p"
	.string "The area south of here is poorer.$"

GalecrestCity_NPC_7_Text_0:
# 330 "data//maps/GalecrestCity/scripts.pory"
	.string "The city garden is maintained by\n"
	.string "Rotoms! But for some reason, I've never\l"
	.string "seen any of them at work.$"

GalecrestCity_NPC_8_Text_0:
# 337 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm on a date with the girl of my dreams!\n"
	.string "But we can't ever be together. I'm too\l"
	.string "poor for her family.$"

GalecrestCity_NPC_9_Text_0:
# 346 "data//maps/GalecrestCity/scripts.pory"
	.string "I don't care about money! We love each\n"
	.string "other and that's what matters.$"

GalecrestCity_NPC_10_Text_0:
# 355 "data//maps/GalecrestCity/scripts.pory"
	.string "The Detective Academy is the most\n"
	.string "prestigious police academy in all of\l"
	.string "Cormoria. My husband helped build it,\l"
	.string "many years ago, when he ran a\l"
	.string "construction business.$"

GalecrestCity_NPC_11_Text_0:
# 363 "data//maps/GalecrestCity/scripts.pory"
	.string "I do the night shift at the Pokemon\n"
	.string "Center. During the day, CHANSEY and I\l"
	.string "like to walk around the garden and pick\l"
	.string "berries.$"

GalecrestCity_NPC_11_Text_1:
# 368 "data//maps/GalecrestCity/scripts.pory"
	.string "Here, you can have some of our extra\n"
	.string "berries.$"

GalecrestCity_Chansey_Text_0:
# 382 "data//maps/GalecrestCity/scripts.pory"
	.string "CHANSEY looks happy to be out in the\n"
	.string "garden!$"

GalecrestCity_NPC_12_Text_0:
# 391 "data//maps/GalecrestCity/scripts.pory"
	.string "If you continue west from here, you'll\n"
	.string "enter Route 5 and the Vilethorn Woods.\l"
	.string "Many years ago, one of the rich folk\l"
	.string "from Galecrest City left to build a\l"
	.string "cottage deep in the woods. Who would\l"
	.string "want to live in a creepy forest like\l"
	.string "that?\p"
	.string "Rich folk I tell you...$"

GalecrestCity_NPC_13_Text_0:
# 398 "data//maps/GalecrestCity/scripts.pory"
	.string "This part of town is so clean and\n"
	.string "peaceful!$"

GalecrestCity_NPC_14_Text_0:
# 413 "data//maps/GalecrestCity/scripts.pory"
	.string "Hehehe...this was too easy!$"

GalecrestCity_NPC_14_Text_1:
# 422 "data//maps/GalecrestCity/scripts.pory"
	.string "I look suspicious? How dare you! I'm\n"
	.string "just innocently hanging around behind\l"
	.string "this rich house! I don't take such\l"
	.string "accusations lightly!$"

GalecrestCity_NPC_14_Text_2:
# 424 "data//maps/GalecrestCity/scripts.pory"
	.string "I've been caught!$"

GalecrestCity_NPC_14_Text_3:
# 426 "data//maps/GalecrestCity/scripts.pory"
	.string "Fine, you got me! I'm a thief alright?\n"
	.string "I'll give you what I stole. It's not\l"
	.string "worth going to jail for.$"

GalecrestCity_NPC_14_Text_4:
# 429 "data//maps/GalecrestCity/scripts.pory"
	.string "I knew I shouldn't have tried to steal\n"
	.string "anything near the Detective Academy!$"

GalecrestCity_Nickit_Text_0:
# 447 "data//maps/GalecrestCity/scripts.pory"
	.string "NICKIT is grinning mischievously.\n"
	.string "What's it upto?$"

GalecrestCity_NPC_15_Text_0:
# 455 "data//maps/GalecrestCity/scripts.pory"
	.string "PESTER is this city's Gym Leader! She's\n"
	.string "tough but calculated. She likes strong\l"
	.string "Pokemon and gives them berries to gain\l"
	.string "an advantage in battle!$"

GalecrestCity_NPC_16_Text_0:
# 461 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm sorry! I won't skip class again!$"

GalecrestCity_NPC_17_Text_0:
# 467 "data//maps/GalecrestCity/scripts.pory"
	.string "One more misdeneanour and I'll have you\n"
	.string "expelled, got it? And then you'll never\l"
	.string "get your Charcadet.$"

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
