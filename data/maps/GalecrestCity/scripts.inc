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
	map_script MAP_SCRIPT_ON_TRANSITION, GalecrestCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data//maps/GalecrestCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GalecrestCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GalecrestCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_VISITED_GALECREST_CITY
	return

GalecrestCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data//maps/GalecrestCity/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, GalecrestCity_OnFrame
	.2byte 0


GalecrestCity_OnFrame::
# 31 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POST_ANCIENT, GalecrestCity_OnFrame_2
# 35 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 36 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_OnFrame_Movement_0
# 37 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 38 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_OnFrame_Text_0
# 39 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_OnFrame_Text_1
# 40 "data//maps/GalecrestCity/scripts.pory"
	release
# 43 "data//maps/GalecrestCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 44 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_GAB
# 45 "data//maps/GalecrestCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 47 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_POST_ANCIENT
# 48 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_OnFrame_2:
	end


TempTemp::
# 52 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_OnFrame_Text_1
# 53 "data//maps/GalecrestCity/scripts.pory"
	release
	end


GalecrestCity_DetectiveMeet_Trigger0::
# 72 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger0_2
# 74 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 77 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 78 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 79 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 80 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 81 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 82 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 83 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_1
# 84 "data//maps/GalecrestCity/scripts.pory"
	release
# 87 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger0_Movement_1
# 90 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger0_2:
	end


GalecrestCity_DetectiveMeet_Trigger1::
# 94 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger1_2
# 96 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 99 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 100 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 101 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 102 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 103 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 104 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 105 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger1_Text_0
# 106 "data//maps/GalecrestCity/scripts.pory"
	release
# 109 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger1_Movement_0
# 110 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 113 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger1_2:
	end


GalecrestCity_DetectiveMeet_Trigger2::
# 117 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger2_2
# 119 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 122 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 123 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 124 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 125 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 126 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 127 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 128 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger1_Text_0
# 129 "data//maps/GalecrestCity/scripts.pory"
	release
# 132 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger2_Movement_0
# 133 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 136 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger2_2:
	end


GalecrestCity_DetectiveMeet_Trigger3::
# 140 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger3_2
# 142 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 145 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 146 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 147 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 148 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 149 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 150 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 151 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger1_Text_0
# 152 "data//maps/GalecrestCity/scripts.pory"
	release
# 155 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger3_Movement_0
# 156 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 159 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger3_2:
	end


GalecrestCity_DetectiveMeet_Main::
# 164 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 165 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_0
# 166 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 167 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 168 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 169 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 170 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 171 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_1
# 172 "data//maps/GalecrestCity/scripts.pory"
	release
# 173 "data//maps/GalecrestCity/scripts.pory"
	delay 8
# 174 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 175 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_3
# 176 "data//maps/GalecrestCity/scripts.pory"
	release
# 177 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_0
# 178 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 179 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 180 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_4
# 181 "data//maps/GalecrestCity/scripts.pory"
	release
# 182 "data//maps/GalecrestCity/scripts.pory"
	delay 8
# 183 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_1
# 184 "data//maps/GalecrestCity/scripts.pory"
	delay 8
# 185 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 186 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_5
# 187 "data//maps/GalecrestCity/scripts.pory"
	release
# 188 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 189 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_OnFrame_Movement_0
# 190 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 191 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 192 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_6
# 193 "data//maps/GalecrestCity/scripts.pory"
	release
# 196 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_2
# 197 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_2
# 198 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 200 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_3
# 201 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 202 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_RUE
# 203 "data//maps/GalecrestCity/scripts.pory"
	playse SE_EXIT
# 204 "data//maps/GalecrestCity/scripts.pory"
	waitse
# 207 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 208 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 209 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 210 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 211 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_7
# 212 "data//maps/GalecrestCity/scripts.pory"
	release
# 213 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 214 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 215 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_8
# 216 "data//maps/GalecrestCity/scripts.pory"
	release
# 217 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 219 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 220 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_9
# 221 "data//maps/GalecrestCity/scripts.pory"
	release
# 222 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_1
# 223 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_1
# 224 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_1
# 225 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 226 "data//maps/GalecrestCity/scripts.pory"
	special SpawnCameraObject
# 227 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_4
# 228 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 229 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_5
# 230 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 231 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_10
# 232 "data//maps/GalecrestCity/scripts.pory"
	release
# 234 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_6
# 235 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 236 "data//maps/GalecrestCity/scripts.pory"
	special RemoveCameraObject
# 237 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 238 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 239 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 240 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 241 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 242 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_11
# 243 "data//maps/GalecrestCity/scripts.pory"
	release
# 246 "data//maps/GalecrestCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 247 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET1
# 248 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET2
# 249 "data//maps/GalecrestCity/scripts.pory"
	playse SE_EXIT
# 250 "data//maps/GalecrestCity/scripts.pory"
	waitse
# 251 "data//maps/GalecrestCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 254 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_DETECTIVE_CONVO
# 256 "data//maps/GalecrestCity/scripts.pory"
	completesubquest QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_3
# 257 "data//maps/GalecrestCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_2
# 258 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_EventScript_Poochyena::
# 281 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POOCHYENA, GalecrestCity_EventScript_Poochyena_2
# 283 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 284 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_EventScript_Poochyena_Text_0
# 285 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_SYS_EXP_ALL
# 286 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_EventScript_Poochyena_2:
	end


GalecrestCity_NPC_1::
# 306 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_1_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_2::
# 311 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_2_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_3::
# 316 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_3_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_4::
# 321 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_4_Text_0, MSGBOX_NPC
	end


GalecrestCity_Totodile::
# 326 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 327 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Totodile_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_5::
# 335 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 336 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 338 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_ROCKSMASH, GalecrestCity_NPC_5_2
# 341 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_1
# 342 "data//maps/GalecrestCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_NPC_5_Text_2, GalecrestCity_NPC_5_Text_3, GalecrestCity_NPC_5_Text_4, GalecrestCity_NPC_5_Text_5
# 343 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_NPC_5_5
# 349 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_7, MSGBOX_NPC
GalecrestCity_NPC_5_1:
	end

GalecrestCity_NPC_5_2:
# 339 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_0, MSGBOX_NPC
	goto GalecrestCity_NPC_5_1

GalecrestCity_NPC_5_5:
# 344 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_6
# 345 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 346 "data//maps/GalecrestCity/scripts.pory"
	release
# 347 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROCKSMASH
	goto GalecrestCity_NPC_5_1


GalecrestCity_NPC_6::
# 356 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_6_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_7::
# 361 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_7_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_8::
# 366 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_8_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_9::
# 371 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_9_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_10::
# 376 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_10_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_11::
# 382 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_NURSE_BERRY, GalecrestCity_NPC_11_2
# 385 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 386 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 387 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_1
# 388 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_CHILAN_BERRY, 3
# 389 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_NURSE_BERRY
# 390 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_2, MSGBOX_NPC
GalecrestCity_NPC_11_1:
# 392 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_11_2:
# 383 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_0, MSGBOX_NPC
	goto GalecrestCity_NPC_11_1


GalecrestCity_Chansey::
# 399 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 400 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Chansey_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_12::
# 406 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_12_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_13::
# 411 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_13_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_14::
# 423 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 425 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 0
	goto_if_eq GalecrestCity_NPC_14_2
# 429 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 430 "data//maps/GalecrestCity/scripts.pory"
	release
# 431 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 432 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 433 "data//maps/GalecrestCity/scripts.pory"
	applymovement 12, GalecrestCity_NPC_14_Movement_0
# 434 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 435 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 436 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_1
# 438 "data//maps/GalecrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECREST_ROBBER, GalecrestCity_NPC_14_Text_2
# 439 "data//maps/GalecrestCity/scripts.pory"
	release
# 440 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_3
# 441 "data//maps/GalecrestCity/scripts.pory"
	release
# 442 "data//maps/GalecrestCity/scripts.pory"
	delay 8
# 443 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_PEARL_STRING
# 444 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_4
# 445 "data//maps/GalecrestCity/scripts.pory"
	release
# 447 "data//maps/GalecrestCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 448 "data//maps/GalecrestCity/scripts.pory"
	removeobject 12
# 449 "data//maps/GalecrestCity/scripts.pory"
	removeobject 36
# 450 "data//maps/GalecrestCity/scripts.pory"
	playse SE_EXIT
# 451 "data//maps/GalecrestCity/scripts.pory"
	waitse
# 452 "data//maps/GalecrestCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 454 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROBBER
# 455 "data//maps/GalecrestCity/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 2
GalecrestCity_NPC_14_1:
# 458 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_14_2:
# 426 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 427 "data//maps/GalecrestCity/scripts.pory"
	release
	goto GalecrestCity_NPC_14_1


GalecrestCity_Nickit::
# 462 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 463 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_NICKIT, CRY_MODE_NORMAL
# 464 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Nickit_Text_0
# 465 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_15::
# 471 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_15_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_16::
# 476 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 477 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_16_Text_0
# 478 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_17::
# 483 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 484 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_17_Text_0
# 485 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_18::
# 490 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 491 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_0
# 492 "data//maps/GalecrestCity/scripts.pory"
	release
# 493 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 495 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_REGRETFULMAN, GalecrestCity_NPC_18_2
# 499 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 500 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_1, MSGBOX_YESNO
# 501 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_NPC_18_5
# 506 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_3
# 507 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_GRIP_CLAW
# 508 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
GalecrestCity_NPC_18_1:
# 511 "data//maps/GalecrestCity/scripts.pory"
	applymovement 16, GalecrestCity_DetectiveMeet_Main_Movement_2
# 512 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_18_2:
# 496 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_18_5:
# 502 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_2
# 503 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_BINDING_BAND
# 504 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
	goto GalecrestCity_NPC_18_1


GalecrestCity_NPC_19::
# 517 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_19_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_20::
# 522 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_20_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_21::
# 527 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_21_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_Ranger::
# 532 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_Ranger_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_Red::
# 538 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_Red_Text_0, MSGBOX_NPC
# 539 "data//maps/GalecrestCity/scripts.pory"
	applymovement 38, GalecrestCity_NPC_Red_Movement_0
# 540 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
	end


# 36 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_OnFrame_Movement_0:
# 36 "data//maps/GalecrestCity/scripts.pory"
	face_right
	step_end

# 77 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_0:
# 77 "data//maps/GalecrestCity/scripts.pory"
	face_right
# 77 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 87 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_1:
# 87 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 87 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 87 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 87 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 109 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger1_Movement_0:
# 109 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 109 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 109 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 132 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger2_Movement_0:
# 132 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 132 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 132 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 132 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 155 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger3_Movement_0:
# 155 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 155 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 155 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 155 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 155 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 177 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_0:
# 177 "data//maps/GalecrestCity/scripts.pory"
	face_down
# 177 "data//maps/GalecrestCity/scripts.pory"
	emote_question_mark
	step_end

# 183 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_1:
# 183 "data//maps/GalecrestCity/scripts.pory"
	face_up
	step_end

# 196 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_2:
# 196 "data//maps/GalecrestCity/scripts.pory"
	face_left
	step_end

# 200 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_3:
# 200 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 200 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 200 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 200 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 200 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 200 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 227 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_4:
# 227 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 227 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 227 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 229 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_5:
# 229 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 229 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 234 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_6:
# 234 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 234 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 234 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 234 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 234 "data//maps/GalecrestCity/scripts.pory"
	walk_down
	step_end

# 433 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_NPC_14_Movement_0:
# 433 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 539 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_NPC_Red_Movement_0:
# 539 "data//maps/GalecrestCity/scripts.pory"
	face_down
	step_end

GalecrestCity_OnFrame_Text_0:
# 38 "data//maps/GalecrestCity/scripts.pory"
	.string "Gabrielle$"

GalecrestCity_OnFrame_Text_1:
# 39 "data//maps/GalecrestCity/scripts.pory"
	.string "...have we left that place?\p"
	.string "Yes! Yes we have! I'm so relieved.\n"
	.string "I've never been so happy to see\l"
	.string "a city before!\p"
	.string "This must be Galecrest City.\n"
	.string "The Detective Academy is here.\l"
	.string "I suppose you'll be headed there.\l"
	.string "Just head north from here...\p"
	.string "...and I'll be going back to Team Somber.\p"
	.string "Sigh...\p"
	.string "...\p"
	.string "{PLAYER}, we're still enemies!\n"
	.string "But you saved me. I owe you one.\p"
	.string "...\p"
	.string "T-thanks. Bye.$"

GalecrestCity_DetectiveMeet_Trigger0_Text_0:
# 82 "data//maps/GalecrestCity/scripts.pory"
	.string "Rue$"

GalecrestCity_DetectiveMeet_Trigger0_Text_1:
# 83 "data//maps/GalecrestCity/scripts.pory"
	.string "{PLAYER}! You're here!\n"
	.string "Where have you been?$"

GalecrestCity_DetectiveMeet_Trigger1_Text_0:
# 105 "data//maps/GalecrestCity/scripts.pory"
	.string "{PLAYER}! Where have you been?$"

GalecrestCity_DetectiveMeet_Main_Text_0:
# 165 "data//maps/GalecrestCity/scripts.pory"
	.string "We heard from Kohla that you went up\n"
	.string "to the peak to stop Team Somber.\p"
	.string "What happened up there?\p"
	.string "...\p"
	.string "...$"

GalecrestCity_DetectiveMeet_Main_Text_1:
# 171 "data//maps/GalecrestCity/scripts.pory"
	.string "What! Is that true? Did all of that\n"
	.string "really happen?\p"
	.string "...\p"
	.string "I'm glad you're safe, {PLAYER}.\n"
	.string "What a series of events!$"

GalecrestCity_DetectiveMeet_Main_Text_2:
# 174 "data//maps/GalecrestCity/scripts.pory"
	.string "Detective$"

GalecrestCity_DetectiveMeet_Main_Text_3:
# 175 "data//maps/GalecrestCity/scripts.pory"
	.string "So the dreamstones transported you to\n"
	.string "another dimension that you couldn't\l"
	.string "recognise? And the Pokémon were\l"
	.string "completely different too?$"

GalecrestCity_DetectiveMeet_Main_Text_4:
# 180 "data//maps/GalecrestCity/scripts.pory"
	.string "Did you know this was possible Rue?$"

GalecrestCity_DetectiveMeet_Main_Text_5:
# 186 "data//maps/GalecrestCity/scripts.pory"
	.string "No, I had no idea. We knew that\n"
	.string "dreamstones absorbed the memories\l"
	.string "of sleeping Pokémon - that's why\l"
	.string "its called a dreamstone!\p"
	.string "But to transport people...$"

GalecrestCity_DetectiveMeet_Main_Text_6:
# 192 "data//maps/GalecrestCity/scripts.pory"
	.string "{PLAYER}, you encountered ancient\n"
	.string "Pokémon there, right?\p"
	.string "I wonder...\p"
	.string "Did the dreamstone take you back\n"
	.string "to the past somehow?\p"
	.string "Incredible...so much we don't yet know...\p"
	.string "I need to do some research.\n"
	.string "I'm going to head back to the lab.\p"
	.string "{PLAYER}, the detectives have some\n"
	.string "updates for you.\p"
	.string "...\p"
	.string "I'm glad you're okay.$"

GalecrestCity_DetectiveMeet_Main_Text_7:
# 211 "data//maps/GalecrestCity/scripts.pory"
	.string "We've uncovered a new lead on Professor\n"
	.string "Tenebris. An agent told us that she was\l"
	.string "spotted in Silversun City.$"

GalecrestCity_DetectiveMeet_Main_Text_8:
# 215 "data//maps/GalecrestCity/scripts.pory"
	.string "There's one issue...Team Somber. They're\n"
	.string "a known and dangerous criminal\l"
	.string "syndicate that aims to wrest power\l"
	.string "from the government.\p"
	.string "Their hideout is confirmed to be\n"
	.string "somewhere around Silversun City too.\p"
	.string "If the Professor, her dreamstone and\n"
	.string "Team Somber are in the same spot,\l"
	.string "things could erupt.\p"
	.string "We have to be there!$"

GalecrestCity_DetectiveMeet_Main_Text_9:
# 220 "data//maps/GalecrestCity/scripts.pory"
	.string "But now that Team Somber is involved,\n"
	.string "it's not safe for you, {PLAYER}.\p"
	.string "You may have handled a couple of\n"
	.string "grunts, but you're still a child.\p"
	.string "So heed these instructions carefully -\n"
	.string "make your way to Silversun City as soon\l"
	.string "as possible and keep a low profile.\p"
	.string "Do NOT engage with any suspicious\n"
	.string "individuals!$"

GalecrestCity_DetectiveMeet_Main_Text_10:
# 231 "data//maps/GalecrestCity/scripts.pory"
	.string "This building is the Detective Academy.\n"
	.string "Your friend Kohla was trained here.\p"
	.string "He knows the plan already.\n"
	.string "Go and talk to him first.$"

GalecrestCity_DetectiveMeet_Main_Text_11:
# 242 "data//maps/GalecrestCity/scripts.pory"
	.string "See you in Silversun City.$"

GalecrestCity_EventScript_Poochyena_Text_0:
# 284 "data//maps/GalecrestCity/scripts.pory"
	.string "POOCHYENA: grr...\p"
	.string "The Poochyena are clearly on edge.\n"
	.string "Better not aggravate them!$"

GalecrestCity_NPC_1_Text_0:
# 306 "data//maps/GalecrestCity/scripts.pory"
	.string "You don't look like you're from here...\p"
	.string "Are you a new student at the\n"
	.string "Detective Academy?$"

GalecrestCity_NPC_2_Text_0:
# 311 "data//maps/GalecrestCity/scripts.pory"
	.string "The city doesn't service our\n"
	.string "neighborhood. That's why these grass\l"
	.string "patches and puddles have come up.$"

GalecrestCity_NPC_3_Text_0:
# 316 "data//maps/GalecrestCity/scripts.pory"
	.string "All the rich kids play at home, but we\n"
	.string "love to splash in these puddles!$"

GalecrestCity_NPC_4_Text_0:
# 321 "data//maps/GalecrestCity/scripts.pory"
	.string "When I grow up, I want to be just\n"
	.string "like my sister!$"

GalecrestCity_Totodile_Text_0:
# 327 "data//maps/GalecrestCity/scripts.pory"
	.string "Totodile is having fun with the\n"
	.string "siblings!$"

GalecrestCity_NPC_5_Text_0:
# 339 "data//maps/GalecrestCity/scripts.pory"
	.string "I need to beat the Galecrest Gym\n"
	.string "Leader to use Rock Smash...$"

GalecrestCity_NPC_5_Text_1:
# 341 "data//maps/GalecrestCity/scripts.pory"
	.string "This rock can be smashed by a Pokémon\n"
	.string "that knows a certain move...I forgot\l"
	.string "which one though! Do you know?$"

GalecrestCity_NPC_5_Text_2:
# 342 "data//maps/GalecrestCity/scripts.pory"
	.string "Rock Blast$"

GalecrestCity_NPC_5_Text_3:
# 342 "data//maps/GalecrestCity/scripts.pory"
	.string "Rock Slide$"

GalecrestCity_NPC_5_Text_4:
# 342 "data//maps/GalecrestCity/scripts.pory"
	.string "Rock Smash$"

GalecrestCity_NPC_5_Text_5:
# 342 "data//maps/GalecrestCity/scripts.pory"
	.string "Stone Edge$"

GalecrestCity_NPC_5_Text_6:
# 344 "data//maps/GalecrestCity/scripts.pory"
	.string "Yes! Now I remember! In fact, I also\n"
	.string "remember that I have the HM for it here.\l"
	.string "Why don't you keep it?$"

GalecrestCity_NPC_5_Text_7:
# 349 "data//maps/GalecrestCity/scripts.pory"
	.string "No...$"

GalecrestCity_NPC_6_Text_0:
# 356 "data//maps/GalecrestCity/scripts.pory"
	.string "If you head west, you enter the elite\n"
	.string "residential neighborhood.\p"
	.string "The area south of here is poorer.$"

GalecrestCity_NPC_7_Text_0:
# 361 "data//maps/GalecrestCity/scripts.pory"
	.string "The city garden is maintained by\n"
	.string "Rotoms! But for some reason, I've\l"
	.string "never seen any of them at work.$"

GalecrestCity_NPC_8_Text_0:
# 366 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm on a date with the girl of my dreams!\n"
	.string "But we can't ever be together. I'm too\l"
	.string "poor for her family.$"

GalecrestCity_NPC_9_Text_0:
# 371 "data//maps/GalecrestCity/scripts.pory"
	.string "I don't care about money! We love each\n"
	.string "other and that's what matters.$"

GalecrestCity_NPC_10_Text_0:
# 376 "data//maps/GalecrestCity/scripts.pory"
	.string "The Detective Academy is the most\n"
	.string "prestigious academy in Cormoria.\l"
	.string "My husband was a teacher there!\l"
	.string "He's retired now but he keeps leaving\l"
	.string "the house...where does he go?$"

GalecrestCity_NPC_11_Text_0:
# 383 "data//maps/GalecrestCity/scripts.pory"
	.string "In the day, Chansey and I like to walk\n"
	.string "in the garden and pick berries.$"

GalecrestCity_NPC_11_Text_1:
# 387 "data//maps/GalecrestCity/scripts.pory"
	.string "I do the night shift at the Pokémon\n"
	.string "Center. In the day, Chansey and I like\l"
	.string "to walk in the garden and pick berries.\p"
	.string "Here, have some of our extra berries!$"

GalecrestCity_NPC_11_Text_2:
# 390 "data//maps/GalecrestCity/scripts.pory"
	.string "They're yummy!$"

GalecrestCity_Chansey_Text_0:
# 400 "data//maps/GalecrestCity/scripts.pory"
	.string "Chansey looks happy to be out in\l"
	.string "the garden!$"

GalecrestCity_NPC_12_Text_0:
# 406 "data//maps/GalecrestCity/scripts.pory"
	.string "If you continue west from here, you'll\n"
	.string "enter Route 5 and the Vilethorn Woods.\l"
	.string "Many years ago, one of the rich folk\l"
	.string "here left to build a cottage deep in\l"
	.string "the woods. Who would want to live in a\l"
	.string "creepy forest like that?\p"
	.string "Rich folk I tell you...$"

GalecrestCity_NPC_13_Text_0:
# 411 "data//maps/GalecrestCity/scripts.pory"
	.string "This part of town is so clean and\n"
	.string "peaceful!$"

GalecrestCity_NPC_14_Text_0:
# 426 "data//maps/GalecrestCity/scripts.pory"
	.string "Hehehe...this was too easy!$"

GalecrestCity_NPC_14_Text_1:
# 436 "data//maps/GalecrestCity/scripts.pory"
	.string "I look suspicious? How dare you!\n"
	.string "I'm just innocently hanging around\l"
	.string "behind this rich house! I don't take\l"
	.string "such accusations lightly!$"

GalecrestCity_NPC_14_Text_2:
# 438 "data//maps/GalecrestCity/scripts.pory"
	.string "I've been caught!$"

GalecrestCity_NPC_14_Text_3:
# 440 "data//maps/GalecrestCity/scripts.pory"
	.string "Fine, you got me! I'm a thief alright?\n"
	.string "I'll give you what I stole. It's not\l"
	.string "worth going to jail for.$"

GalecrestCity_NPC_14_Text_4:
# 444 "data//maps/GalecrestCity/scripts.pory"
	.string "I knew I shouldn't have tried to steal\n"
	.string "anything near the Detective Academy!$"

GalecrestCity_Nickit_Text_0:
# 464 "data//maps/GalecrestCity/scripts.pory"
	.string "Nickit is grinning mischievously.\p"
	.string "What's it up to?$"

GalecrestCity_NPC_15_Text_0:
# 471 "data//maps/GalecrestCity/scripts.pory"
	.string "I really want to visit the Silversun\n"
	.string "Theatre and see a show! But crossing\l"
	.string "Vilethorn Woods isn't a good idea...$"

GalecrestCity_NPC_16_Text_0:
# 477 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm sorry! I won't skip class again!$"

GalecrestCity_NPC_17_Text_0:
# 484 "data//maps/GalecrestCity/scripts.pory"
	.string "One more misdeneanour and I'll have you\n"
	.string "expelled, got it? And then you'll never\l"
	.string "get your Charcadet.$"

GalecrestCity_NPC_18_Text_0:
# 491 "data//maps/GalecrestCity/scripts.pory"
	.string "All my life I've lived in this city. It's\n"
	.string "all I've seen and all I know...and now I'm\l"
	.string "too old to go exploring Cormoria.$"

GalecrestCity_NPC_18_Text_1:
# 500 "data//maps/GalecrestCity/scripts.pory"
	.string "Have you ever felt like I do?$"

GalecrestCity_NPC_18_Text_2:
# 502 "data//maps/GalecrestCity/scripts.pory"
	.string "Experience does not discriminate.\n"
	.string "We all feel regret.\p"
	.string "But you still have time to change.\p"
	.string "Take this as a memento - don't let\n"
	.string "anything bind you!$"

GalecrestCity_NPC_18_Text_3:
# 506 "data//maps/GalecrestCity/scripts.pory"
	.string "You're still innocent. The smile on your\n"
	.string "face is so bright! It lightens my heart.\p"
	.string "Accept this as a memento - hold tightly\n"
	.string "onto that smile of yours!$"

GalecrestCity_NPC_19_Text_0:
# 517 "data//maps/GalecrestCity/scripts.pory"
	.string "I learned something new in class today!\n"
	.string "Some berries reduce the power of\l"
	.string "attacks dealt to them. A Chilan Berry\l"
	.string "for example reduces the power of a\l"
	.string "NORMAL type attack. That'd be useful in\l"
	.string "the gym here, wouldn't it?$"

GalecrestCity_NPC_20_Text_0:
# 522 "data//maps/GalecrestCity/scripts.pory"
	.string "Whaddya want? Thought you'd get\n"
	.string "something by talking to me?\l"
	.string "You poor people are all the same -\l"
	.string "always looking for handouts!$"

GalecrestCity_NPC_21_Text_0:
# 527 "data//maps/GalecrestCity/scripts.pory"
	.string "There's a Dugtrio there that's been\n"
	.string "digging into the ground down there.\l"
	.string "But nobody will do anything because\l"
	.string "this neighborhood is low priority.$"

GalecrestCity_NPC_Ranger_Text_0:
# 532 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm a Pokémon Ranger. What am I doing?\n"
	.string "Ranger duty of course! I'm cleaning up\l"
	.string "the city. There's junk everywhere!$"

GalecrestCity_NPC_Red_Text_0:
# 538 "data//maps/GalecrestCity/scripts.pory"
	.string "The Gym Leader's not in right now.\n"
	.string "He should be back soon. Check out the\l"
	.string "Detective Academy in the meantime!$"
