# 1 "data//maps/GalecrestCity/scripts.pory"

# 2 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_GAB, 15
# 3 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_DET1, 21
# 4 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_DET2, 22
# 5 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_RUE, 20

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
	lockall
# 64 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 65 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 66 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 67 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 69 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 70 "data//maps/GalecrestCity/scripts.pory"
	release
# 73 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger0_Movement_1
# 76 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return


GalecrestCity_DetectiveMeet_Trigger1::
# 80 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 83 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 84 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 85 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 86 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 88 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 89 "data//maps/GalecrestCity/scripts.pory"
	release
# 92 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger1_Movement_0
# 93 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 96 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return


GalecrestCity_DetectiveMeet_Trigger2::
# 100 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 103 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 104 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 105 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 106 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 108 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 109 "data//maps/GalecrestCity/scripts.pory"
	release
# 112 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger2_Movement_0
# 113 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 116 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return


GalecrestCity_DetectiveMeet_Trigger3::
# 120 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 123 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 124 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 125 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 126 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 128 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 129 "data//maps/GalecrestCity/scripts.pory"
	release
# 132 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger3_Movement_0
# 133 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 136 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return


GalecrestCity_DetectiveMeet_Main::
# 141 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_0
# 142 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 143 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 144 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 145 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 146 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_1
# 147 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_2
# 148 "data//maps/GalecrestCity/scripts.pory"
	release
# 149 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_0
# 150 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_1
# 151 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 152 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_3
# 153 "data//maps/GalecrestCity/scripts.pory"
	release
# 154 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 155 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_OnFrame_Movement_0
# 156 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 157 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_4
# 158 "data//maps/GalecrestCity/scripts.pory"
	release
# 161 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_2
# 162 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_2
# 163 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 165 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_3
# 166 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 167 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_RUE
# 170 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 171 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 172 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 173 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_5
# 174 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_6
# 175 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_7
# 176 "data//maps/GalecrestCity/scripts.pory"
	release
# 177 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_1
# 178 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_1
# 179 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_1
# 180 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 181 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_8
# 182 "data//maps/GalecrestCity/scripts.pory"
	release
# 183 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 184 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 185 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 186 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 187 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_9
# 188 "data//maps/GalecrestCity/scripts.pory"
	release
# 191 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 192 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET1
# 193 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET2
# 194 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 197 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_DETECTIVE_CONVO
# 198 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_EventScript_Poochyena::
# 221 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POOCHYENA, GalecrestCity_EventScript_Poochyena_2
# 223 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 224 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_EventScript_Poochyena_Text_0
# 225 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_EventScript_Poochyena_2:
	end


GalecrestCity_NPC_1::
# 245 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 246 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 247 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_1_Text_0
# 248 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_2::
# 252 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 253 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 254 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_2_Text_0
# 255 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_3::
# 259 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 260 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 261 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_3_Text_0
# 262 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_4::
# 266 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 267 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 268 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_4_Text_0
# 269 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_5::
# 274 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 275 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 276 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_0
# 277 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_6::
# 281 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 282 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 283 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_6_Text_0
# 284 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_7::
# 288 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 289 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 290 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_7_Text_0
# 291 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_8::
# 295 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 296 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 297 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_8_Text_0
# 298 "data//maps/GalecrestCity/scripts.pory"
	release
# 299 "data//maps/GalecrestCity/scripts.pory"
	face_left
# 300 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_9::
# 304 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 305 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 306 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_9_Text_0
# 307 "data//maps/GalecrestCity/scripts.pory"
	face_right
# 308 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_10::
# 312 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 313 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 314 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_10_Text_0
# 315 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_11::
# 320 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 321 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 323 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_0
# 325 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_NURSE_BERRY, GalecrestCity_NPC_11_2
GalecrestCity_NPC_11_1:
# 330 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_11_2:
# 326 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_1
# 327 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_CHOPLE_BERRY, 3
# 328 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_NURSE_BERRY
	goto GalecrestCity_NPC_11_1


GalecrestCity_NPC_12::
# 334 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 335 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 336 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_12_Text_0
# 337 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_13::
# 341 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 342 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 343 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_13_Text_0
# 344 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_14::
# 349 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 350 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 351 "data//maps/GalecrestCity/scripts.pory"
	release
# 352 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 353 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 354 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
# 355 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 356 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_1
# 358 "data//maps/GalecrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECREST_ROBBER, GalecrestCity_NPC_14_Text_2
# 359 "data//maps/GalecrestCity/scripts.pory"
	release
# 360 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_3
# 361 "data//maps/GalecrestCity/scripts.pory"
	release
# 362 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_POKESHI_DOLL
# 363 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_4
# 364 "data//maps/GalecrestCity/scripts.pory"
	release
# 366 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 367 "data//maps/GalecrestCity/scripts.pory"
	removeobject 12
# 368 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 370 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROBBER
# 372 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_15::
# 376 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 377 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 378 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_15_Text_0
# 379 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_16::
# 383 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 384 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 385 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_16_Text_0
# 386 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_17::
# 390 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 391 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 392 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_17_Text_0
# 393 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_NPC_18::
# 397 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 398 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_0
# 399 "data//maps/GalecrestCity/scripts.pory"
	release
# 401 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_REGRETFULMAN, GalecrestCity_NPC_18_1
# 405 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 406 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_1, MSGBOX_YESNO
# 407 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_NPC_18_5
# 412 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_3
# 413 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_BRIGHT_POWDER
# 414 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
GalecrestCity_NPC_18_4:
# 416 "data//maps/GalecrestCity/scripts.pory"
	face_left
# 417 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_18_1:
# 402 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_18_5:
# 408 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_2
# 409 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_BINDING_BAND
# 410 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
	goto GalecrestCity_NPC_18_4


# 32 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_OnFrame_Movement_0:
# 32 "data//maps/GalecrestCity/scripts.pory"
	face_right
	step_end

# 64 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_0:
# 64 "data//maps/GalecrestCity/scripts.pory"
	face_right
# 64 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 73 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_1:
# 73 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 73 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 73 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 73 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 92 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger1_Movement_0:
# 92 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 92 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 92 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 112 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger2_Movement_0:
# 112 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 112 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 112 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 112 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 132 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger3_Movement_0:
# 132 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 132 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 132 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 132 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 132 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 149 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_0:
# 149 "data//maps/GalecrestCity/scripts.pory"
	face_down
	step_end

# 150 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_1:
# 150 "data//maps/GalecrestCity/scripts.pory"
	face_up
	step_end

# 161 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_2:
# 161 "data//maps/GalecrestCity/scripts.pory"
	face_left
	step_end

# 165 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_3:
# 165 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 165 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 165 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 165 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 165 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 165 "data//maps/GalecrestCity/scripts.pory"
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
# 69 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: {PLAYER}! You're here! Where\n"
	.string "have you been?$"

GalecrestCity_DetectiveMeet_Main_Text_0:
# 141 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: We heard from KOHLA that you went\n"
	.string "up to the peak to stop Team Somber.\l"
	.string "What happened up there?\p"
	.string "...\p"
	.string "...$"

GalecrestCity_DetectiveMeet_Main_Text_1:
# 146 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: What! Is that true? Did all of that\n"
	.string "happen?\p"
	.string "...\p"
	.string "I'm glad you're safe, {PLAYER}. What a\n"
	.string "series of events!$"

GalecrestCity_DetectiveMeet_Main_Text_2:
# 147 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: So the dreamstones\n"
	.string "transported you to another dimension\l"
	.string "that you couldn't recognise? And the\l"
	.string "{PKMN} were completely different too?$"

GalecrestCity_DetectiveMeet_Main_Text_3:
# 152 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: Did you know this was\n"
	.string "possible RUE?\p"
	.string "RUE: No, I had no idea. We knew that\n"
	.string "dreamstones absorbed {PKMN} memories, but\l"
	.string "to transport things and people...$"

GalecrestCity_DetectiveMeet_Main_Text_4:
# 157 "data//maps/GalecrestCity/scripts.pory"
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
# 173 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: We've uncovered a new lead\n"
	.string "on Professor Tenebris. An agent told us\l"
	.string "that he was spotted in Silversun City.$"

GalecrestCity_DetectiveMeet_Main_Text_6:
# 174 "data//maps/GalecrestCity/scripts.pory"
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
# 175 "data//maps/GalecrestCity/scripts.pory"
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
# 181 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: This building is the\n"
	.string "Detective Academy. Your frierd KOHLA\l"
	.string "was trained here. He knows the plan\l"
	.string "already. Go and talk to him first.$"

GalecrestCity_DetectiveMeet_Main_Text_9:
# 187 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: See you in Silversun City.$"

GalecrestCity_EventScript_Poochyena_Text_0:
# 224 "data//maps/GalecrestCity/scripts.pory"
	.string "POOCHYENA: grr...\p"
	.string "The POOCHYENA are clearly on edge.\n"
	.string "Better not aggravate them!$"

GalecrestCity_NPC_1_Text_0:
# 247 "data//maps/GalecrestCity/scripts.pory"
	.string "You don't look like someone from\n"
	.string "here...are you a new student at the\l"
	.string "Detective Academy?$"

GalecrestCity_NPC_2_Text_0:
# 254 "data//maps/GalecrestCity/scripts.pory"
	.string "The city doesn't service our\n"
	.string "neighborhood. That's why these grass\l"
	.string "patches and puddles have come up.$"

GalecrestCity_NPC_3_Text_0:
# 261 "data//maps/GalecrestCity/scripts.pory"
	.string "All the rich kids play at home, but me\n"
	.string "and my brother love to splash in these\l"
	.string "puddles!$"

GalecrestCity_NPC_4_Text_0:
# 268 "data//maps/GalecrestCity/scripts.pory"
	.string "When I grow up, I want to be just like my\n"
	.string "sister!$"

GalecrestCity_NPC_5_Text_0:
# 276 "data//maps/GalecrestCity/scripts.pory"
	.string "This rock can be smashed by a {PKMN} that\n"
	.string "knows a certain move...I forgot which\l"
	.string "one though!$"

GalecrestCity_NPC_6_Text_0:
# 283 "data//maps/GalecrestCity/scripts.pory"
	.string "If you head west, you enter the elite\n"
	.string "residential neighborhood.\p"
	.string "The area south of here is poorer.$"

GalecrestCity_NPC_7_Text_0:
# 290 "data//maps/GalecrestCity/scripts.pory"
	.string "The city garden is maintained by\n"
	.string "Rotoms! But for some reason, I've never\l"
	.string "seen any of them at work.$"

GalecrestCity_NPC_8_Text_0:
# 297 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm on a date with the girl of my dreams!\n"
	.string "But we can't ever be together. I'm too\l"
	.string "poor for her family.$"

GalecrestCity_NPC_9_Text_0:
# 306 "data//maps/GalecrestCity/scripts.pory"
	.string "I don't care about money! We love each\n"
	.string "other and that's what matters.$"

GalecrestCity_NPC_10_Text_0:
# 314 "data//maps/GalecrestCity/scripts.pory"
	.string "The Detective Academy is the most\n"
	.string "prestigious police academy in all of\l"
	.string "Cormoria. My husband helped build it,\l"
	.string "many years ago, when he ran a\l"
	.string "construction business.$"

GalecrestCity_NPC_11_Text_0:
# 323 "data//maps/GalecrestCity/scripts.pory"
	.string "I do the night shift at the Pokemon\n"
	.string "Center. During the day, I like to walk\l"
	.string "around the gardens and pick berries.$"

GalecrestCity_NPC_11_Text_1:
# 326 "data//maps/GalecrestCity/scripts.pory"
	.string "Here, you can have some of my extra\n"
	.string "berries.$"

GalecrestCity_NPC_12_Text_0:
# 336 "data//maps/GalecrestCity/scripts.pory"
	.string "If you continue west from here, you'll\n"
	.string "enter Route 5 and the Vilethorn Woods.\l"
	.string "Many years ago, one of the rich folk\l"
	.string "from Galecrest City left to build a\l"
	.string "mansion deep in the woods. What a\l"
	.string "strange man!$"

GalecrestCity_NPC_13_Text_0:
# 343 "data//maps/GalecrestCity/scripts.pory"
	.string "This part of town is so clean and\n"
	.string "peaceful!$"

GalecrestCity_NPC_14_Text_0:
# 350 "data//maps/GalecrestCity/scripts.pory"
	.string "Hehehe...$"

GalecrestCity_NPC_14_Text_1:
# 356 "data//maps/GalecrestCity/scripts.pory"
	.string "I look suspicious? How dare you! I'm\n"
	.string "just innocently hanging around behind\l"
	.string "this rich house! I don't take such\l"
	.string "accusations lightly!$"

GalecrestCity_NPC_14_Text_2:
# 358 "data//maps/GalecrestCity/scripts.pory"
	.string "I've been caught!$"

GalecrestCity_NPC_14_Text_3:
# 360 "data//maps/GalecrestCity/scripts.pory"
	.string "Fine, you got me! I'm a thief alright?\n"
	.string "I'll give you what I stole. It's just a\l"
	.string "stupid doll anyway.$"

GalecrestCity_NPC_14_Text_4:
# 363 "data//maps/GalecrestCity/scripts.pory"
	.string "I knew I shouldn't have tried to steal\n"
	.string "anything near the Detective Academy!$"

GalecrestCity_NPC_15_Text_0:
# 378 "data//maps/GalecrestCity/scripts.pory"
	.string "PESTER is this city's Gym Leader! She's\n"
	.string "tough but calculated. She likes strong\l"
	.string "{PKMN} and gives them berries to gain an\l"
	.string "advantage in battle!$"

GalecrestCity_NPC_16_Text_0:
# 385 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm sorry! I won't skip class again!$"

GalecrestCity_NPC_17_Text_0:
# 392 "data//maps/GalecrestCity/scripts.pory"
	.string "One more misdeneanour and I'll have you\n"
	.string "expelled, got it? And then you'll never\l"
	.string "get your CHARCADET.$"

GalecrestCity_NPC_18_Text_0:
# 398 "data//maps/GalecrestCity/scripts.pory"
	.string "All my life I've lived in this\n"
	.string "neighbourhood. It's all I've seen and all\l"
	.string "I know...and now I'm too old to go\l"
	.string "exploring Cormoria.$"

GalecrestCity_NPC_18_Text_1:
# 406 "data//maps/GalecrestCity/scripts.pory"
	.string "Have you ever felt like I do?$"

GalecrestCity_NPC_18_Text_2:
# 408 "data//maps/GalecrestCity/scripts.pory"
	.string "Experience does not discriminate. We all\n"
	.string "feel regret.\p"
	.string "But you still have time to change.\p"
	.string "Take this as a memento - don't let\n"
	.string "anything bind you!$"

GalecrestCity_NPC_18_Text_3:
# 412 "data//maps/GalecrestCity/scripts.pory"
	.string "You're still innocent. The smile on your\n"
	.string "face is so bright! It lightens my heart.\p"
	.string "Accept this as a memento - keep that\n"
	.string "bright smile of yours!$"
