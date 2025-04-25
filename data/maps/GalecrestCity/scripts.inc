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
	speakername GalecrestCity_OnFrame_Text_0
# 35 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_OnFrame_Text_1
# 36 "data//maps/GalecrestCity/scripts.pory"
	release
# 39 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 40 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_GAB
# 41 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 43 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_POST_ANCIENT
# 44 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_OnFrame_2:
	end


GalecrestCity_DetectiveMeet_Trigger0::
# 62 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger0_2
# 64 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 67 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 68 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 69 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 70 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 71 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 72 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 73 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_1
# 74 "data//maps/GalecrestCity/scripts.pory"
	release
# 77 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger0_Movement_1
# 80 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger0_2:
	end


GalecrestCity_DetectiveMeet_Trigger1::
# 84 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger1_2
# 86 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 89 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 90 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 91 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 92 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 93 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 94 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 95 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_1
# 96 "data//maps/GalecrestCity/scripts.pory"
	release
# 99 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger1_Movement_0
# 100 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 103 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger1_2:
	end


GalecrestCity_DetectiveMeet_Trigger2::
# 107 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger2_2
# 109 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 112 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 113 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 114 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 115 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 116 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 117 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 118 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_1
# 119 "data//maps/GalecrestCity/scripts.pory"
	release
# 122 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger2_Movement_0
# 123 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 126 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger2_2:
	end


GalecrestCity_DetectiveMeet_Trigger3::
# 130 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_DETECTIVE_CONVO, GalecrestCity_DetectiveMeet_Trigger3_2
# 132 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 135 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 136 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 137 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 138 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 139 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 140 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 141 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Trigger0_Text_1
# 142 "data//maps/GalecrestCity/scripts.pory"
	release
# 145 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger3_Movement_0
# 146 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 149 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return

GalecrestCity_DetectiveMeet_Trigger3_2:
	end


GalecrestCity_DetectiveMeet_Main::
# 154 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 155 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_0
# 156 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 157 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 158 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 159 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 160 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 161 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_1
# 162 "data//maps/GalecrestCity/scripts.pory"
	release
# 163 "data//maps/GalecrestCity/scripts.pory"
	delay 8
# 164 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 165 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_3
# 166 "data//maps/GalecrestCity/scripts.pory"
	release
# 167 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_0
# 168 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 169 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 170 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_4
# 171 "data//maps/GalecrestCity/scripts.pory"
	release
# 172 "data//maps/GalecrestCity/scripts.pory"
	delay 8
# 173 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_1
# 174 "data//maps/GalecrestCity/scripts.pory"
	delay 8
# 175 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 176 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_5
# 177 "data//maps/GalecrestCity/scripts.pory"
	release
# 178 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 179 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_OnFrame_Movement_0
# 180 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 181 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Trigger0_Text_0
# 182 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_6
# 183 "data//maps/GalecrestCity/scripts.pory"
	release
# 186 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_2
# 187 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_2
# 188 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 190 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_3
# 191 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 192 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_RUE
# 195 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 196 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 197 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 198 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 199 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_7
# 200 "data//maps/GalecrestCity/scripts.pory"
	release
# 201 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 202 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 203 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_8
# 204 "data//maps/GalecrestCity/scripts.pory"
	release
# 205 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 207 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 208 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_9
# 209 "data//maps/GalecrestCity/scripts.pory"
	release
# 210 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_1
# 211 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_1
# 212 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_1
# 213 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 214 "data//maps/GalecrestCity/scripts.pory"
	special SpawnCameraObject
# 215 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_4
# 216 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 217 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_5
# 218 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 219 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_10
# 220 "data//maps/GalecrestCity/scripts.pory"
	release
# 222 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GalecrestCity_DetectiveMeet_Main_Movement_6
# 223 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 224 "data//maps/GalecrestCity/scripts.pory"
	special RemoveCameraObject
# 225 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 226 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 227 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_2
# 228 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 229 "data//maps/GalecrestCity/scripts.pory"
	speakername GalecrestCity_DetectiveMeet_Main_Text_2
# 230 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_11
# 231 "data//maps/GalecrestCity/scripts.pory"
	release
# 234 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 235 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET1
# 236 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET2
# 237 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 240 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_DETECTIVE_CONVO
# 241 "data//maps/GalecrestCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_3
# 242 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_EventScript_Poochyena::
# 265 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POOCHYENA, GalecrestCity_EventScript_Poochyena_2
# 267 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 268 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_EventScript_Poochyena_Text_0
# 269 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_SYS_EXP_ALL
# 270 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_EventScript_Poochyena_2:
	end


GalecrestCity_NPC_1::
# 290 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_1_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_2::
# 295 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_2_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_3::
# 300 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_3_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_4::
# 305 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_4_Text_0, MSGBOX_NPC
	end


GalecrestCity_Froakie::
# 310 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 311 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 312 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_FROAKIE, CRY_MODE_ENCOUNTER
# 313 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Froakie_Text_0
# 314 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_5::
# 322 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 323 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 325 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_ROCKSMASH, GalecrestCity_NPC_5_2
# 328 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_1
# 329 "data//maps/GalecrestCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_NPC_5_Text_2, GalecrestCity_NPC_5_Text_3, GalecrestCity_NPC_5_Text_4, GalecrestCity_NPC_5_Text_5
# 330 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_NPC_5_5
# 336 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_7, MSGBOX_NPC
GalecrestCity_NPC_5_1:
	end

GalecrestCity_NPC_5_2:
# 326 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_0, MSGBOX_NPC
	goto GalecrestCity_NPC_5_1

GalecrestCity_NPC_5_5:
# 331 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_5_Text_6
# 332 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 333 "data//maps/GalecrestCity/scripts.pory"
	release
# 334 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROCKSMASH
	goto GalecrestCity_NPC_5_1


GalecrestCity_NPC_6::
# 343 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_6_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_7::
# 348 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_7_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_8::
# 353 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_8_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_9::
# 358 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_9_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_10::
# 363 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_10_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_11::
# 369 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_NURSE_BERRY, GalecrestCity_NPC_11_2
# 372 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 373 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 374 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_1
# 375 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_CHILAN_BERRY, 3
# 376 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_NURSE_BERRY
# 377 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_2, MSGBOX_NPC
GalecrestCity_NPC_11_1:
	end

GalecrestCity_NPC_11_2:
# 370 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_11_Text_0, MSGBOX_NPC
	goto GalecrestCity_NPC_11_1


GalecrestCity_Chansey::
# 385 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 386 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Chansey_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_12::
# 392 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_12_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_13::
# 397 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_13_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_14::
# 409 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 411 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 0
	goto_if_eq GalecrestCity_NPC_14_2
# 415 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 416 "data//maps/GalecrestCity/scripts.pory"
	release
# 417 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 418 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 419 "data//maps/GalecrestCity/scripts.pory"
	applymovement 12, GalecrestCity_NPC_14_Movement_0
# 420 "data//maps/GalecrestCity/scripts.pory"
	delay 24
# 421 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_1
# 423 "data//maps/GalecrestCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECREST_ROBBER, GalecrestCity_NPC_14_Text_2
# 424 "data//maps/GalecrestCity/scripts.pory"
	release
# 425 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_3
# 426 "data//maps/GalecrestCity/scripts.pory"
	release
# 427 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_PEARL_STRING
# 428 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_4
# 429 "data//maps/GalecrestCity/scripts.pory"
	release
# 431 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 432 "data//maps/GalecrestCity/scripts.pory"
	removeobject 12
# 433 "data//maps/GalecrestCity/scripts.pory"
	removeobject 36
# 434 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 436 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_ROBBER
# 437 "data//maps/GalecrestCity/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 2
GalecrestCity_NPC_14_1:
# 440 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_NPC_14_2:
# 412 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_14_Text_0
# 413 "data//maps/GalecrestCity/scripts.pory"
	release
	goto GalecrestCity_NPC_14_1


GalecrestCity_Nickit::
# 444 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 445 "data//maps/GalecrestCity/scripts.pory"
	playmoncry SPECIES_NICKIT, CRY_MODE_NORMAL
# 446 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_Nickit_Text_0
# 447 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_15::
# 453 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_15_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_16::
# 458 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 459 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_16_Text_0
# 460 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_17::
# 465 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 466 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_17_Text_0
# 467 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end


GalecrestCity_NPC_18::
# 472 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 473 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_0
# 474 "data//maps/GalecrestCity/scripts.pory"
	release
# 475 "data//maps/GalecrestCity/scripts.pory"
	delay 16
# 477 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_REGRETFULMAN, GalecrestCity_NPC_18_2
# 481 "data//maps/GalecrestCity/scripts.pory"
	faceplayer
# 482 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_1, MSGBOX_YESNO
# 483 "data//maps/GalecrestCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_NPC_18_5
# 488 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_3
# 489 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_GRIP_CLAW
# 490 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
GalecrestCity_NPC_18_1:
# 493 "data//maps/GalecrestCity/scripts.pory"
	applymovement 16, GalecrestCity_DetectiveMeet_Main_Movement_2
# 494 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_18_2:
# 478 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	end

GalecrestCity_NPC_18_5:
# 484 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_18_Text_2
# 485 "data//maps/GalecrestCity/scripts.pory"
	giveitem ITEM_BINDING_BAND
# 486 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_REGRETFULMAN
	goto GalecrestCity_NPC_18_1


GalecrestCity_NPC_19::
# 499 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_19_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_20::
# 504 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_20_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_Ranger::
# 510 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_Ranger_Text_0, MSGBOX_NPC
	end


GalecrestCity_NPC_Red::
# 516 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_NPC_Red_Text_0, MSGBOX_NPC
# 517 "data//maps/GalecrestCity/scripts.pory"
	applymovement 38, GalecrestCity_NPC_Red_Movement_0
# 518 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
	end


# 32 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_OnFrame_Movement_0:
# 32 "data//maps/GalecrestCity/scripts.pory"
	face_right
	step_end

# 67 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_0:
# 67 "data//maps/GalecrestCity/scripts.pory"
	face_right
# 67 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 77 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_1:
# 77 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 77 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 77 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 77 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 99 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger1_Movement_0:
# 99 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 99 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 99 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 122 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger2_Movement_0:
# 122 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 122 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 122 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 122 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 145 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger3_Movement_0:
# 145 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 145 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 145 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 145 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 145 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 167 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_0:
# 167 "data//maps/GalecrestCity/scripts.pory"
	face_down
# 167 "data//maps/GalecrestCity/scripts.pory"
	emote_question_mark
	step_end

# 173 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_1:
# 173 "data//maps/GalecrestCity/scripts.pory"
	face_up
	step_end

# 186 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_2:
# 186 "data//maps/GalecrestCity/scripts.pory"
	face_left
	step_end

# 190 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_3:
# 190 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 190 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 190 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 190 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 190 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 190 "data//maps/GalecrestCity/scripts.pory"
	walk_left
	step_end

# 215 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_4:
# 215 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 215 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 215 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 217 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_5:
# 217 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 217 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 222 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_6:
# 222 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 222 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 222 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 222 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 222 "data//maps/GalecrestCity/scripts.pory"
	walk_down
	step_end

# 419 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_NPC_14_Movement_0:
# 419 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 517 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_NPC_Red_Movement_0:
# 517 "data//maps/GalecrestCity/scripts.pory"
	face_down
	step_end

GalecrestCity_OnFrame_Text_0:
# 34 "data//maps/GalecrestCity/scripts.pory"
	.string "Gabrielle$"

GalecrestCity_OnFrame_Text_1:
# 35 "data//maps/GalecrestCity/scripts.pory"
	.string "...have we left that place?\p"
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
# 72 "data//maps/GalecrestCity/scripts.pory"
	.string "Rue$"

GalecrestCity_DetectiveMeet_Trigger0_Text_1:
# 73 "data//maps/GalecrestCity/scripts.pory"
	.string "{PLAYER}! You're here! Where have you\n"
	.string "been?$"

GalecrestCity_DetectiveMeet_Main_Text_0:
# 155 "data//maps/GalecrestCity/scripts.pory"
	.string "We heard from Kohla that you went up to\n"
	.string "the peak to stop Team Somber. What\l"
	.string "happened up there?\p"
	.string "...\p"
	.string "...$"

GalecrestCity_DetectiveMeet_Main_Text_1:
# 161 "data//maps/GalecrestCity/scripts.pory"
	.string "What! Is that true? Did all of that\n"
	.string "happen?\p"
	.string "...\p"
	.string "I'm glad you're safe, {PLAYER}. What a\n"
	.string "series of events!$"

GalecrestCity_DetectiveMeet_Main_Text_2:
# 164 "data//maps/GalecrestCity/scripts.pory"
	.string "Detective$"

GalecrestCity_DetectiveMeet_Main_Text_3:
# 165 "data//maps/GalecrestCity/scripts.pory"
	.string "So the dreamstones transported you to\n"
	.string "another dimension that you couldn't\l"
	.string "recognise? And the Pokémon were\l"
	.string "completely different too?$"

GalecrestCity_DetectiveMeet_Main_Text_4:
# 170 "data//maps/GalecrestCity/scripts.pory"
	.string "Did you know this was possible Rue?$"

GalecrestCity_DetectiveMeet_Main_Text_5:
# 176 "data//maps/GalecrestCity/scripts.pory"
	.string "No, I had no idea. We knew that\n"
	.string "dreamstones absorbed the memories of\l"
	.string "sleeping Pokémon - that's why its\l"
	.string "called a dreamstone! But to transport\l"
	.string "things and people...$"

GalecrestCity_DetectiveMeet_Main_Text_6:
# 182 "data//maps/GalecrestCity/scripts.pory"
	.string "{PLAYER}, you encountered ancient\n"
	.string "Pokémon there, right? I wonder...\p"
	.string "Did the dreamstone take you back to\n"
	.string "the past somehow?\p"
	.string "Incredible...so much we don't yet know...\p"
	.string "I need to do some research. I'm going to\n"
	.string "head back to the lab.\p"
	.string "{PLAYER}, the detectives have some\n"
	.string "updates for you.\p"
	.string "...\p"
	.string "I'm glad you're okay.$"

GalecrestCity_DetectiveMeet_Main_Text_7:
# 199 "data//maps/GalecrestCity/scripts.pory"
	.string "We've uncovered a new lead on Professor\n"
	.string "Tenebris. An agent told us that she was\l"
	.string "spotted in Silversun City.$"

GalecrestCity_DetectiveMeet_Main_Text_8:
# 203 "data//maps/GalecrestCity/scripts.pory"
	.string "There's one issue...Team Somber. They're\n"
	.string "a known and dangerous criminal\l"
	.string "syndicate that aims to wrest power\l"
	.string "from the government.\p"
	.string "Their hideout is confirmed to be\n"
	.string "somewhere around Silversun City too.\p"
	.string "If the Professor, her dreamstone and\n"
	.string "Team Somber are in the same spot,\l"
	.string "things could erupt. We have to be there!$"

GalecrestCity_DetectiveMeet_Main_Text_9:
# 208 "data//maps/GalecrestCity/scripts.pory"
	.string "But now that we know Team Somber is\n"
	.string "involved, it's not safe for you,\l"
	.string "{PLAYER}. You may have handled a\l"
	.string "couple of grunts, but you're still a\l"
	.string "child.\p"
	.string "So heed these instructions carefully -\n"
	.string "make your way to Silversun City as soon\l"
	.string "as possible and keep a low profile.\p"
	.string "Do NOT engage with any suspicious\n"
	.string "individuals!$"

GalecrestCity_DetectiveMeet_Main_Text_10:
# 219 "data//maps/GalecrestCity/scripts.pory"
	.string "This building is the Detective Academy.\n"
	.string "Your friend Kohla was trained here. He\l"
	.string "knows the plan already. Go and talk to\l"
	.string "him first.$"

GalecrestCity_DetectiveMeet_Main_Text_11:
# 230 "data//maps/GalecrestCity/scripts.pory"
	.string "See you in Silversun City.$"

GalecrestCity_EventScript_Poochyena_Text_0:
# 268 "data//maps/GalecrestCity/scripts.pory"
	.string "POOCHYENA: grr...\p"
	.string "The Poochyena are clearly on edge.\n"
	.string "Better not aggravate them!$"

GalecrestCity_NPC_1_Text_0:
# 290 "data//maps/GalecrestCity/scripts.pory"
	.string "You don't look like someone from\n"
	.string "here...are you a new student at the\l"
	.string "Detective Academy?$"

GalecrestCity_NPC_2_Text_0:
# 295 "data//maps/GalecrestCity/scripts.pory"
	.string "The city doesn't service our\n"
	.string "neighborhood. That's why these grass\l"
	.string "patches and puddles have come up.$"

GalecrestCity_NPC_3_Text_0:
# 300 "data//maps/GalecrestCity/scripts.pory"
	.string "All the rich kids play at home, but me\n"
	.string "and my brother love to splash in these\l"
	.string "puddles!$"

GalecrestCity_NPC_4_Text_0:
# 305 "data//maps/GalecrestCity/scripts.pory"
	.string "When I grow up, I want to be just like my\n"
	.string "sister!$"

GalecrestCity_Froakie_Text_0:
# 313 "data//maps/GalecrestCity/scripts.pory"
	.string "FROAKIE is having fun with the siblings!$"

GalecrestCity_NPC_5_Text_0:
# 326 "data//maps/GalecrestCity/scripts.pory"
	.string "I need to find a Pokémon that can learn\n"
	.string "ROCK SMASH...$"

GalecrestCity_NPC_5_Text_1:
# 328 "data//maps/GalecrestCity/scripts.pory"
	.string "This rock can be smashed by a Pokémon\n"
	.string "that knows a certain move...I forgot\l"
	.string "which one though! Do you know?$"

GalecrestCity_NPC_5_Text_2:
# 329 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK BLAST$"

GalecrestCity_NPC_5_Text_3:
# 329 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK SLIDE$"

GalecrestCity_NPC_5_Text_4:
# 329 "data//maps/GalecrestCity/scripts.pory"
	.string "ROCK SMASH$"

GalecrestCity_NPC_5_Text_5:
# 329 "data//maps/GalecrestCity/scripts.pory"
	.string "STONE EDGE$"

GalecrestCity_NPC_5_Text_6:
# 331 "data//maps/GalecrestCity/scripts.pory"
	.string "Yes! Now I remember! In fact, I also\n"
	.string "remember that I have the HM for it here.\l"
	.string "Why don't you keep it?$"

GalecrestCity_NPC_5_Text_7:
# 336 "data//maps/GalecrestCity/scripts.pory"
	.string "No...$"

GalecrestCity_NPC_6_Text_0:
# 343 "data//maps/GalecrestCity/scripts.pory"
	.string "If you head west, you enter the elite\n"
	.string "residential neighborhood.\p"
	.string "The area south of here is poorer.$"

GalecrestCity_NPC_7_Text_0:
# 348 "data//maps/GalecrestCity/scripts.pory"
	.string "The city garden is maintained by\n"
	.string "Rotoms! But for some reason, I've never\l"
	.string "seen any of them at work.$"

GalecrestCity_NPC_8_Text_0:
# 353 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm on a date with the girl of my dreams!\n"
	.string "But we can't ever be together. I'm too\l"
	.string "poor for her family.$"

GalecrestCity_NPC_9_Text_0:
# 358 "data//maps/GalecrestCity/scripts.pory"
	.string "I don't care about money! We love each\n"
	.string "other and that's what matters.$"

GalecrestCity_NPC_10_Text_0:
# 363 "data//maps/GalecrestCity/scripts.pory"
	.string "The Detective Academy is the most\n"
	.string "prestigious police academy in all of\l"
	.string "Cormoria. My husband helped build it,\l"
	.string "many years ago, when he ran a\l"
	.string "construction business.$"

GalecrestCity_NPC_11_Text_0:
# 370 "data//maps/GalecrestCity/scripts.pory"
	.string "I do the night shift at the Pokémon\n"
	.string "Center. During the day, Chansey and I\l"
	.string "like to walk around the garden and pick\l"
	.string "berries.$"

GalecrestCity_NPC_11_Text_1:
# 374 "data//maps/GalecrestCity/scripts.pory"
	.string "I do the night shift at the Pokémon\n"
	.string "Center. During the day, Chansey and I\l"
	.string "like to walk around the garden and pick\l"
	.string "berries. Here, you can have some of our\l"
	.string "extra berries.$"

GalecrestCity_NPC_11_Text_2:
# 377 "data//maps/GalecrestCity/scripts.pory"
	.string "They're yummy!$"

GalecrestCity_Chansey_Text_0:
# 386 "data//maps/GalecrestCity/scripts.pory"
	.string "CHANSEY looks happy to be out in the\n"
	.string "garden!$"

GalecrestCity_NPC_12_Text_0:
# 392 "data//maps/GalecrestCity/scripts.pory"
	.string "If you continue west from here, you'll\n"
	.string "enter Route 5 and the Vilethorn Woods.\l"
	.string "Many years ago, one of the rich folk\l"
	.string "here left to build a cottage deep in the\l"
	.string "woods. Who would want to live in a\l"
	.string "creepy forest like that?\p"
	.string "Rich folk I tell you...$"

GalecrestCity_NPC_13_Text_0:
# 397 "data//maps/GalecrestCity/scripts.pory"
	.string "This part of town is so clean and\n"
	.string "peaceful!$"

GalecrestCity_NPC_14_Text_0:
# 412 "data//maps/GalecrestCity/scripts.pory"
	.string "Hehehe...this was too easy!$"

GalecrestCity_NPC_14_Text_1:
# 421 "data//maps/GalecrestCity/scripts.pory"
	.string "I look suspicious? How dare you! I'm\n"
	.string "just innocently hanging around behind\l"
	.string "this rich house! I don't take such\l"
	.string "accusations lightly!$"

GalecrestCity_NPC_14_Text_2:
# 423 "data//maps/GalecrestCity/scripts.pory"
	.string "I've been caught!$"

GalecrestCity_NPC_14_Text_3:
# 425 "data//maps/GalecrestCity/scripts.pory"
	.string "Fine, you got me! I'm a thief alright?\n"
	.string "I'll give you what I stole. It's not\l"
	.string "worth going to jail for.$"

GalecrestCity_NPC_14_Text_4:
# 428 "data//maps/GalecrestCity/scripts.pory"
	.string "I knew I shouldn't have tried to steal\n"
	.string "anything near the Detective Academy!$"

GalecrestCity_Nickit_Text_0:
# 446 "data//maps/GalecrestCity/scripts.pory"
	.string "Nickit is grinning mischievously. What's\n"
	.string "it upto?$"

GalecrestCity_NPC_15_Text_0:
# 453 "data//maps/GalecrestCity/scripts.pory"
	.string "I really want to visit the Silversun\n"
	.string "Theatre and see a show! But crossing\l"
	.string "Vilethorn Woods isn't a good idea...$"

GalecrestCity_NPC_16_Text_0:
# 459 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm sorry! I won't skip class again!$"

GalecrestCity_NPC_17_Text_0:
# 466 "data//maps/GalecrestCity/scripts.pory"
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
# 482 "data//maps/GalecrestCity/scripts.pory"
	.string "Have you ever felt like I do?$"

GalecrestCity_NPC_18_Text_2:
# 484 "data//maps/GalecrestCity/scripts.pory"
	.string "Experience does not discriminate. We all\n"
	.string "feel regret.\p"
	.string "But you still have time to change.\p"
	.string "Take this as a memento - don't let\n"
	.string "anything bind you!$"

GalecrestCity_NPC_18_Text_3:
# 488 "data//maps/GalecrestCity/scripts.pory"
	.string "You're still innocent. The smile on your\n"
	.string "face is so bright! It lightens my heart.\p"
	.string "Accept this as a memento - hold tightly\n"
	.string "onto that smile of yours!$"

GalecrestCity_NPC_19_Text_0:
# 499 "data//maps/GalecrestCity/scripts.pory"
	.string "I learned something new in class today!\n"
	.string "Some berries reduce the power of\l"
	.string "attacks dealt to them. A Chilan Berry\l"
	.string "for example reduces the power of a\l"
	.string "NORMAL type attack. That'd be useful in\l"
	.string "the gym here, wouldn't it?$"

GalecrestCity_NPC_20_Text_0:
# 504 "data//maps/GalecrestCity/scripts.pory"
	.string "Whaddya want? Thought you'd get\n"
	.string "something by talking to me? You poor\l"
	.string "people are all the same - always looking\l"
	.string "for handouts!$"

GalecrestCity_NPC_Ranger_Text_0:
# 510 "data//maps/GalecrestCity/scripts.pory"
	.string "I'm a Pokémon Ranger. What am I doing?\n"
	.string "Ranger duty of course! I'm cleaning up\l"
	.string "the city. There's so much junk lying\l"
	.string "around!$"

GalecrestCity_NPC_Red_Text_0:
# 516 "data//maps/GalecrestCity/scripts.pory"
	.string "The Gym Leader's not in right now. He\n"
	.string "should be back soon. Check out the\l"
	.string "Detective Academy in the meantime!$"
