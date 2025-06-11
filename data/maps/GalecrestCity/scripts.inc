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


GalecrestCity_DetectiveMeet_Trigger0::
# 66 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger0_2
# 68 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 71 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 72 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 73 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 74 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 75 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 76 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 77 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_1
# 78 "data//maps/GalecrestCity/scripts.pory"
	release
# 81 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger0_Movement_1
# 84 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger0_2:
	end


GalecrestCity_DetectiveMeet_Trigger1::
# 88 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger1_2
# 90 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 93 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 94 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 95 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 96 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 97 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 98 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 99 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_1
# 100 "data//maps/GalecrestCity/scripts.pory"
	release
# 103 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger1_Movement_0
# 104 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 107 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger1_2:
	end


GalecrestCity_DetectiveMeet_Trigger2::
# 111 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger2_2
# 113 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 116 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 117 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 118 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 119 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 120 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 121 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 122 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_1
# 123 "data//maps/GalecrestCity/scripts.pory"
	release
# 126 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger2_Movement_0
# 127 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 130 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger2_2:
	end


GalecrestCity_DetectiveMeet_Trigger3::
# 134 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger3_2
# 136 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 139 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 140 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 141 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 142 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 143 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 144 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 145 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_1
# 146 "data//maps/GalecrestCity/scripts.pory"
	release
# 149 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger3_Movement_0
# 150 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 153 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger3_2:
	end


GalecrestCity_DetectiveMeet_Main::
# 158 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 159 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_0
# 160 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 161 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 162 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 163 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 164 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 165 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_1
# 166 "data//maps/GalecrestCity/scripts.pory"
	release
# 167 "data//maps/GalecrestCity/scripts.pory"
	delay 8
# 168 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 169 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_3
# 170 "data//maps/GalecrestCity/scripts.pory"
	release
# 171 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_0
# 172 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 173 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 174 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_4
# 175 "data//maps/GalecrestCity/scripts.pory"
	release
# 176 "data//maps/GalecrestCity/scripts.pory"
	delay 8
# 177 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_1
# 178 "data//maps/GalecrestCity/scripts.pory"
	delay 8
# 179 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 180 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_5
# 181 "data//maps/GalecrestCity/scripts.pory"
	release
# 182 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 183 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_OnFrame_Movement_0
# 184 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 185 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 186 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_6
# 187 "data//maps/GalecrestCity/scripts.pory"
	release
# 190 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_2
# 191 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_2
# 192 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 194 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_3
# 195 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 196 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_RUE
# 199 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 200 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 201 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 202 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 203 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_7
# 204 "data//maps/GalecrestCity/scripts.pory"
	release
# 205 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 206 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 207 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_8
# 208 "data//maps/GalecrestCity/scripts.pory"
	release
# 209 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 211 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 212 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_9
# 213 "data//maps/GalecrestCity/scripts.pory"
	release
# 214 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_1
# 215 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_1
# 216 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_1
# 217 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 218 "data//maps/GalecrestCity/scripts.pory"
	special SpawnCameraObject
# 219 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_4
# 220 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 221 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_5
# 222 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 223 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_10
# 224 "data//maps/GalecrestCity/scripts.pory"
	release
# 226 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_6
# 227 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 228 "data//maps/GalecrestCity/scripts.pory"
	special RemoveCameraObject
# 229 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 230 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 231 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 232 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 233 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 234 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_11
# 235 "data//maps/GalecrestCity/scripts.pory"
	release
# 238 "data//maps/GalecrestCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 239 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET1
# 240 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET2
# 241 "data//maps/GalecrestCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 244 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_DETECTIVE_CONVO
# 245 "data//maps/GalecrestCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_3
# 246 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_EventScript_Poochyena::
# 269 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POOCHYENA, GalecrestCity_EventScript_Poochyena_2
# 271 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 272 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_EventScript_Poochyena_Text_0
# 273 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_SYS_EXP_ALL
# 274 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_EventScript_Poochyena_2:
	end


GalecrestCity_NPC_1::
# 294 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_1_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_2::
# 299 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_2_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_3::
# 304 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_3_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_4::
# 309 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_4_Text_0, MSGBOX_NPC
	end


GalecrestCity_Totodile::
# 314 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 315 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Totodile_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_5::
# 323 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 324 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 326 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_ROCKSMASH, GalecrestCity_NPC_5_2
# 329 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_1
# 330 "data//maps/GalecrestCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_NPC_5_Text_2, GalecrestCity_NPC_5_Text_3, GalecrestCity_NPC_5_Text_4, GalecrestCity_NPC_5_Text_5
# 331 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_NPC_5_5
# 337 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_7, MSGBOX_NPC
GalecrestCity_NPC_5_1:
	end

GalecrestCity_NPC_5_2:
# 327 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_0, MSGBOX_NPC
	goto GalecrestCity_NPC_5_1

GalecrestCity_NPC_5_5:
# 332 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_6
# 333 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 334 "data//maps/GalecrestCity/scripts.pory"
	release
# 335 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROCKSMASH
	goto GalecrestCity_NPC_5_1


GalecrestCity_NPC_6::
# 344 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_6_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_7::
# 349 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_7_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_8::
# 354 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_8_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_9::
# 359 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_9_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_10::
# 364 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_10_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_11::
# 370 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_NURSE_BERRY, GalecrestCity_NPC_11_2
# 373 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 374 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 375 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_1
# 376 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_CHILAN_BERRY, 3
# 377 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_NURSE_BERRY
# 378 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_2, MSGBOX_NPC
GalecrestCity_NPC_11_1:
# 380 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_11_2:
# 371 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_0, MSGBOX_NPC
	goto GalecrestCity_NPC_11_1


GalecrestCity_Chansey::
# 387 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 388 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Chansey_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_12::
# 394 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_12_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_13::
# 399 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_13_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_14::
# 411 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 413 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 0
	goto_if_eq GalecrestCity_NPC_14_2
# 417 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 418 "data//maps/GalecrestCity/scripts.pory"
	release
# 419 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 420 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 421 "data//maps/GalecrestCity/scripts.pory"
	applymovement 12, GalecrestCity_NPC_14_Movement_0
# 422 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 423 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_1
# 425 "data//maps/GalecrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECREST_ROBBER, GalecrestCity_NPC_14_Text_2
# 426 "data//maps/GalecrestCity/scripts.pory"
	release
# 427 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_3
# 428 "data//maps/GalecrestCity/scripts.pory"
	release
# 429 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_PEARL_STRING
# 430 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_4
# 431 "data//maps/GalecrestCity/scripts.pory"
	release
# 433 "data//maps/GalecrestCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 434 "data//maps/GalecrestCity/scripts.pory"
	removeobject 12
# 435 "data//maps/GalecrestCity/scripts.pory"
	removeobject 36
# 436 "data//maps/GalecrestCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 438 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROBBER
# 439 "data//maps/GalecrestCity/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 2
GalecrestCity_NPC_14_1:
# 442 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_14_2:
# 414 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 415 "data//maps/GalecrestCity/scripts.pory"
	release
	goto GalecrestCity_NPC_14_1


GalecrestCity_Nickit::
# 446 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 447 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_NICKIT, CRY_MODE_NORMAL
# 448 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Nickit_Text_0
# 449 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_15::
# 455 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_15_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_16::
# 460 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 461 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_16_Text_0
# 462 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_17::
# 467 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 468 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_17_Text_0
# 469 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_18::
# 474 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 475 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_0
# 476 "data//maps/GalecrestCity/scripts.pory"
	release
# 477 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 479 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_REGRETFULMAN, GalecrestCity_NPC_18_2
# 483 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 484 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_1, MSGBOX_YESNO
# 485 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_NPC_18_5
# 490 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_3
# 491 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_GRIP_CLAW
# 492 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
GalecrestCity_NPC_18_1:
# 495 "data//maps/GalecrestCity/scripts.pory"
	applymovement 16, GalecrestCity_DetectiveMeet_Main_Movement_2
# 496 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_18_2:
# 480 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_18_5:
# 486 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_2
# 487 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_BINDING_BAND
# 488 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
	goto GalecrestCity_NPC_18_1


GalecrestCity_NPC_19::
# 501 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_19_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_20::
# 506 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_20_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_21::
# 511 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_21_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_Ranger::
# 516 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_Ranger_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_Red::
# 522 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_Red_Text_0, MSGBOX_NPC
# 523 "data//maps/GalecrestCity/scripts.pory"
	applymovement 38, GalecrestCity_NPC_Red_Movement_0
# 524 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
	end


# 36 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_OnFrame_Movement_0:
# 36 "data//maps/GalecrestCity/scripts.pory"
	face_right
	step_end

# 71 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_0:
# 71 "data//maps/GalecrestCity/scripts.pory"
	face_right
# 71 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 81 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_1:
# 81 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 81 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 81 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 81 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 103 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger1_Movement_0:
# 103 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 103 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 103 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 126 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger2_Movement_0:
# 126 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 126 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 126 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 126 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 149 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger3_Movement_0:
# 149 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 149 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 149 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 149 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 149 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 171 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_0:
# 171 "data//maps/GalecrestCity/scripts.pory"
	face_down
# 171 "data//maps/GalecrestCity/scripts.pory"
	emote_question_mark
	step_end

# 177 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_1:
# 177 "data//maps/GalecrestCity/scripts.pory"
	face_up
	step_end

# 190 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_2:
# 190 "data//maps/GalecrestCity/scripts.pory"
	face_left
	step_end

# 194 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_3:
# 194 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 194 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 194 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 194 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 194 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 194 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 219 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_4:
# 219 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 219 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 219 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 221 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_5:
# 221 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 221 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 226 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_6:
# 226 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 226 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 226 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 226 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 226 "data//maps/GalecrestCity/scripts.pory"
	walk_down
	step_end

# 421 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_NPC_14_Movement_0:
# 421 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 523 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_NPC_Red_Movement_0:
# 523 "data//maps/GalecrestCity/scripts.pory"
	face_down
	step_end

GalecrestCity_OnFrame_Text_0:
# 38 "data//maps/GalecrestCity/scripts.pory"
	.string "Gabrielle$"

GalecrestCity_OnFrame_Text_1:
# 39 "data//maps/GalecrestCity/scripts.pory"
	.string "...have we left that place?\p"
	.string "Yes! Yes we have! I'm so relieved. I've\n"
	.string "never been so happy to see a city\l"
	.string "before!\p"
	.string "This must be {COLOR GREEN}Galecrest City{COLOR DARK_GRAY}. The\n"
	.string "Detective Academy is here. I suppose\l"
	.string "you'll be headed there. Just head north\l"
	.string "from here...\p"
	.string "...and I'll be going back to {COLOR BLUE}Team Somber{COLOR DARK_GRAY}.\p"
	.string "Sigh...\p"
	.string "...\p"
	.string "{PLAYER}, we're still enemies! But you\n"
	.string "saved me. I owe you one.\p"
	.string "...\p"
	.string "T-thanks. Bye.$"

GalecrestCity_DetectiveMeet_Trigger0_Text_0:
# 76 "data//maps/GalecrestCity/scripts.pory"
	.string "Rue$"

GalecrestCity_DetectiveMeet_Trigger0_Text_1:
# 77 "data//maps/GalecrestCity/scripts.pory"
	.string "{PLAYER}! You're here! Where have you\n"
	.string "been?$"

GalecrestCity_DetectiveMeet_Main_Text_0:
# 159 "data//maps/GalecrestCity/scripts.pory"
	.string "We heard from {COLOR GREEN}Kohla{COLOR DARK_GRAY} that you went up to\n"
	.string "the peak to stop {COLOR BLUE}Team Somber{COLOR DARK_GRAY}.\p"
	.string "What happened up there?\p"
	.string "...\p"
	.string "...$"

GalecrestCity_DetectiveMeet_Main_Text_1:
# 165 "data//maps/GalecrestCity/scripts.pory"
	.string "What! Is that true? Did all of that\n"
	.string "happen?\p"
	.string "...\p"
	.string "I'm glad you're safe, {PLAYER}.\n"
	.string "What a series of events!$"

GalecrestCity_DetectiveMeet_Main_Text_2:
# 168 "data//maps/GalecrestCity/scripts.pory"
	.string "Detective$"

GalecrestCity_DetectiveMeet_Main_Text_3:
# 169 "data//maps/GalecrestCity/scripts.pory"
	.string "So the dreamstones transported you to\n"
	.string "another dimension that you couldn't\l"
	.string "recognise? And the Pokémon were\l"
	.string "completely different too?$"

GalecrestCity_DetectiveMeet_Main_Text_4:
# 174 "data//maps/GalecrestCity/scripts.pory"
	.string "Did you know this was possible {COLOR BLUE}Rue{COLOR DARK_GRAY}?$"

GalecrestCity_DetectiveMeet_Main_Text_5:
# 180 "data//maps/GalecrestCity/scripts.pory"
	.string "No, I had no idea. We knew that\n"
	.string "dreamstones absorbed the memories of\l"
	.string "sleeping Pokémon - that's why its\l"
	.string "called a dreamstone! But to transport\l"
	.string "things and people...$"

GalecrestCity_DetectiveMeet_Main_Text_6:
# 186 "data//maps/GalecrestCity/scripts.pory"
	.string "{PLAYER}, you encountered ancient\n"
	.string "Pokémon there, right?\p"
	.string "I wonder...\p"
	.string "Did the dreamstone take you back to\n"
	.string "the past somehow?\p"
	.string "Incredible...so much we don't yet know...\p"
	.string "I need to do some research.\n"
	.string "I'm going to head back to the lab.\p"
	.string "{PLAYER}, the detectives have some\n"
	.string "updates for you.\p"
	.string "...\p"
	.string "I'm glad you're okay.$"

GalecrestCity_DetectiveMeet_Main_Text_7:
# 203 "data//maps/GalecrestCity/scripts.pory"
	.string "We've uncovered a new lead on Professor\n"
	.string "{COLOR GREEN} Tenebris{COLOR DARK_GRAY}. An agent told us that she was\l"
	.string "spotted in {COLOR BLUE}Silversun City{COLOR DARK_GRAY}.$"

GalecrestCity_DetectiveMeet_Main_Text_8:
# 207 "data//maps/GalecrestCity/scripts.pory"
	.string "There's one issue...{COLOR BLUE}Team Somber{COLOR DARK_GRAY}. They're\n"
	.string "a known and dangerous criminal\l"
	.string "syndicate that aims to wrest power\l"
	.string "from the government.\p"
	.string "Their hideout is confirmed to be\n"
	.string "somewhere around {COLOR BLUE}Silversun City{COLOR DARK_GRAY} too.\p"
	.string "If the Professor, her dreamstone and\n"
	.string "{COLOR BLUE}Team Somber{COLOR DARK_GRAY} are in the same spot,\l"
	.string "things could erupt.\p"
	.string "We have to be there!$"

GalecrestCity_DetectiveMeet_Main_Text_9:
# 212 "data//maps/GalecrestCity/scripts.pory"
	.string "But now that {COLOR BLUE}Team Somber{COLOR DARK_GRAY} is involved,\n"
	.string "it's not safe for you, {PLAYER}.\p"
	.string "You may have handled a couple of\n"
	.string "grunts, but you're still a child.\p"
	.string "So heed these instructions carefully -\n"
	.string "make your way to {COLOR BLUE}Silversun City{COLOR DARK_GRAY} as soon\l"
	.string "as possible and keep a low profile.\p"
	.string "Do NOT engage with any suspicious\n"
	.string "individuals!$"

GalecrestCity_DetectiveMeet_Main_Text_10:
# 223 "data//maps/GalecrestCity/scripts.pory"
	.string "This building is the Detective Academy.\n"
	.string "Your friend {COLOR GREEN}Kohla{COLOR DARK_GRAY} was trained here.\p"
	.string "He knows the plan already. Go and talk\n"
	.string "to him first.$"

GalecrestCity_DetectiveMeet_Main_Text_11:
# 234 "data//maps/GalecrestCity/scripts.pory"
	.string "See you in {COLOR BLUE}Silversun City{COLOR DARK_GRAY}.$"

GalecrestCity_EventScript_Poochyena_Text_0:
# 272 "data//maps/GalecrestCity/scripts.pory"
	.string "POOCHYENA: grr...\p"
	.string "The Poochyena are clearly on edge.\n"
	.string "Better not aggravate them!$"

GalecrestCity_NPC_1_Text_0:
# 294 "data//maps/GalecrestCity/scripts.pory"
	.string "You don't look like someone from\n"
	.string "here...are you a new student at the\l"
	.string "Detective Academy?$"

GalecrestCity_NPC_2_Text_0:
# 299 "data//maps/GalecrestCity/scripts.pory"
	.string "The city doesn't service our\n"
	.string "neighborhood. That's why these grass\l"
	.string "patches and puddles have come up.$"

GalecrestCity_NPC_3_Text_0:
# 304 "data//maps/GalecrestCity/scripts.pory"
	.string "All the rich kids play at home, but me\n"
	.string "and my brother love to splash in these\l"
	.string "puddles!$"

GalecrestCity_NPC_4_Text_0:
# 309 "data//maps/GalecrestCity/scripts.pory"
	.string "When I grow up, I want to be just like my\n"
	.string "sister!$"

GalecrestCity_Totodile_Text_0:
# 315 "data//maps/GalecrestCity/scripts.pory"
	.string "Totodile is having fun with the\n"
	.string "siblings!$"

GalecrestCity_NPC_5_Text_0:
# 327 "data//maps/GalecrestCity/scripts.pory"
	.string "I need to beat the Galecrest Gym\n"
	.string "Leader to use Rock Smash...$"

GalecrestCity_NPC_5_Text_1:
# 329 "data//maps/GalecrestCity/scripts.pory"
	.string "This rock can be smashed by a Pokémon\n"
	.string "that knows a certain move...I forgot\l"
	.string "which one though! Do you know?$"

GalecrestCity_NPC_5_Text_2:
# 330 "data//maps/GalecrestCity/scripts.pory"
	.string "Rock Blast$"

GalecrestCity_NPC_5_Text_3:
# 330 "data//maps/GalecrestCity/scripts.pory"
	.string "Rock Slide$"

GalecrestCity_NPC_5_Text_4:
# 330 "data//maps/GalecrestCity/scripts.pory"
	.string "Rock Smash$"

GalecrestCity_NPC_5_Text_5:
# 330 "data//maps/GalecrestCity/scripts.pory"
	.string "Stone Edge$"

GalecrestCity_NPC_5_Text_6:
# 332 "data//maps/GalecrestCity/scripts.pory"
	.string "Yes! Now I remember! In fact, I also\n"
	.string "remember that I have the HM for it here.\l"
	.string "Why don't you keep it?$"

GalecrestCity_NPC_5_Text_7:
# 337 "data//maps/GalecrestCity/scripts.pory"
	.string "No...$"

GalecrestCity_NPC_6_Text_0:
# 344 "data//maps/GalecrestCity/scripts.pory"
	.string "If you head west, you enter the elite\n"
	.string "residential neighborhood.\p"
	.string "The area south of here is poorer.$"

GalecrestCity_NPC_7_Text_0:
# 349 "data//maps/GalecrestCity/scripts.pory"
	.string "The city garden is maintained by\n"
	.string "Rotoms! But for some reason, I've never\l"
	.string "seen any of them at work.$"

GalecrestCity_NPC_8_Text_0:
# 354 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm on a date with the girl of my dreams!\n"
	.string "But we can't ever be together. I'm too\l"
	.string "poor for her family.$"

GalecrestCity_NPC_9_Text_0:
# 359 "data//maps/GalecrestCity/scripts.pory"
	.string "I don't care about money! We love each\n"
	.string "other and that's what matters.$"

GalecrestCity_NPC_10_Text_0:
# 364 "data//maps/GalecrestCity/scripts.pory"
	.string "The Detective Academy is the most\n"
	.string "prestigious police academy in all of\l"
	.string "Cormoria. My husband was a teacher\l"
	.string "there! He's retired now but he keeps\l"
	.string "leaving the house...where does he go?$"

GalecrestCity_NPC_11_Text_0:
# 371 "data//maps/GalecrestCity/scripts.pory"
	.string "During the day, Chansey and I like to\n"
	.string "walk around the garden and pick\l"
	.string "berries.$"

GalecrestCity_NPC_11_Text_1:
# 375 "data//maps/GalecrestCity/scripts.pory"
	.string "I do the night shift at the Pokémon\n"
	.string "Center. During the day, Chansey and I\l"
	.string "like to walk around the garden and pick\l"
	.string "berries. Here, you can have some of our\l"
	.string "extra berries.$"

GalecrestCity_NPC_11_Text_2:
# 378 "data//maps/GalecrestCity/scripts.pory"
	.string "They're yummy!$"

GalecrestCity_Chansey_Text_0:
# 388 "data//maps/GalecrestCity/scripts.pory"
	.string "Chansey looks happy to be out in the\n"
	.string "garden!$"

GalecrestCity_NPC_12_Text_0:
# 394 "data//maps/GalecrestCity/scripts.pory"
	.string "If you continue west from here, you'll\n"
	.string "enter {COLOR BLUE}Route 5{COLOR DARK_GRAY} and the {COLOR RED}Vilethorn Woods{COLOR DARK_GRAY}.\l"
	.string "Many years ago, one of the rich folk\l"
	.string "here left to build a cottage deep in the\l"
	.string "woods. Who would want to live in a\l"
	.string "creepy forest like that?\p"
	.string "Rich folk I tell you...$"

GalecrestCity_NPC_13_Text_0:
# 399 "data//maps/GalecrestCity/scripts.pory"
	.string "This part of town is so clean and\n"
	.string "peaceful!$"

GalecrestCity_NPC_14_Text_0:
# 414 "data//maps/GalecrestCity/scripts.pory"
	.string "Hehehe...this was too easy!$"

GalecrestCity_NPC_14_Text_1:
# 423 "data//maps/GalecrestCity/scripts.pory"
	.string "I look suspicious? How dare you! I'm\n"
	.string "just innocently hanging around behind\l"
	.string "this rich house! I don't take such\l"
	.string "accusations lightly!$"

GalecrestCity_NPC_14_Text_2:
# 425 "data//maps/GalecrestCity/scripts.pory"
	.string "I've been caught!$"

GalecrestCity_NPC_14_Text_3:
# 427 "data//maps/GalecrestCity/scripts.pory"
	.string "Fine, you got me! I'm a thief alright?\n"
	.string "I'll give you what I stole. It's not\l"
	.string "worth going to jail for.$"

GalecrestCity_NPC_14_Text_4:
# 430 "data//maps/GalecrestCity/scripts.pory"
	.string "I knew I shouldn't have tried to steal\n"
	.string "anything near the Detective Academy!$"

GalecrestCity_Nickit_Text_0:
# 448 "data//maps/GalecrestCity/scripts.pory"
	.string "Nickit is grinning mischievously.\p"
	.string "What's it up to?$"

GalecrestCity_NPC_15_Text_0:
# 455 "data//maps/GalecrestCity/scripts.pory"
	.string "I really want to visit the Silversun\n"
	.string "Theatre and see a show! But crossing\l"
	.string "{COLOR RED}Vilethorn Woods{COLOR DARK_GRAY} isn't a good idea...$"

GalecrestCity_NPC_16_Text_0:
# 461 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm sorry! I won't skip class again!$"

GalecrestCity_NPC_17_Text_0:
# 468 "data//maps/GalecrestCity/scripts.pory"
	.string "One more misdeneanour and I'll have you\n"
	.string "expelled, got it? And then you'll never\l"
	.string "get your Charcadet.$"

GalecrestCity_NPC_18_Text_0:
# 475 "data//maps/GalecrestCity/scripts.pory"
	.string "All my life I've lived in this\n"
	.string "neighbourhood. It's all I've seen and all\l"
	.string "I know...and now I'm too old to go\l"
	.string "exploring Cormoria.$"

GalecrestCity_NPC_18_Text_1:
# 484 "data//maps/GalecrestCity/scripts.pory"
	.string "Have you ever felt like I do?$"

GalecrestCity_NPC_18_Text_2:
# 486 "data//maps/GalecrestCity/scripts.pory"
	.string "Experience does not discriminate.\n"
	.string "We all feel regret.\p"
	.string "But you still have time to change.\p"
	.string "Take this as a memento - don't let\n"
	.string "anything bind you!$"

GalecrestCity_NPC_18_Text_3:
# 490 "data//maps/GalecrestCity/scripts.pory"
	.string "You're still innocent. The smile on your\n"
	.string "face is so bright! It lightens my heart.\p"
	.string "Accept this as a memento - hold tightly\n"
	.string "onto that smile of yours!$"

GalecrestCity_NPC_19_Text_0:
# 501 "data//maps/GalecrestCity/scripts.pory"
	.string "I learned something new in class today!\n"
	.string "Some berries reduce the power of\l"
	.string "attacks dealt to them. A Chilan Berry\l"
	.string "for example reduces the power of a\l"
	.string "NORMAL type attack. That'd be useful in\l"
	.string "the gym here, wouldn't it?$"

GalecrestCity_NPC_20_Text_0:
# 506 "data//maps/GalecrestCity/scripts.pory"
	.string "Whaddya want? Thought you'd get\n"
	.string "something by talking to me? You poor\l"
	.string "people are all the same - always looking\l"
	.string "for handouts!$"

GalecrestCity_NPC_21_Text_0:
# 511 "data//maps/GalecrestCity/scripts.pory"
	.string "There's a Dugtrio there that's been\n"
	.string "digging into the ground down there.\l"
	.string "It threw up all these rocks!\l"
	.string "Nobody will do anything because\l"
	.string "this neighborhood is low priority.$"

GalecrestCity_NPC_Ranger_Text_0:
# 516 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm a Pokémon Ranger. What am I doing?\n"
	.string "Ranger duty of course! I'm cleaning up\l"
	.string "the city. There's so much junk lying\l"
	.string "around!$"

GalecrestCity_NPC_Red_Text_0:
# 522 "data//maps/GalecrestCity/scripts.pory"
	.string "The Gym Leader's not in right now. He\n"
	.string "should be back soon. Check out the\l"
	.string "Detective Academy in the meantime!$"
