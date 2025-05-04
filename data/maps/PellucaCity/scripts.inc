# 1 "data//maps/PellucaCity/scripts.pory"

# 2 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_GAB, 5
# 3 "data//maps/PellucaCity/scripts.pory"

# 4 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_MAYOR, 39
# 5 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_S1, 40
# 6 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_S2, 41
# 7 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_S3, 42

PellucaCity_MapScripts::
	.byte 0


PellucaCity_MayorFight_Trigger::
# 23 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_MAYOR_FIGHT, PellucaCity_MayorFight_Trigger_2
# 26 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_0
# 27 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 28 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 29 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 30 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_1
# 31 "data//maps/PellucaCity/scripts.pory"
	release
# 32 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 34 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_1
# 35 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 36 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 37 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 38 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_3
# 39 "data//maps/PellucaCity/scripts.pory"
	release
# 40 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 42 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_2
# 43 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 44 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 45 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 46 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_4
# 47 "data//maps/PellucaCity/scripts.pory"
	release
# 48 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 50 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_3
# 51 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 52 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 53 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 54 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_6
# 55 "data//maps/PellucaCity/scripts.pory"
	release
# 56 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 58 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_4
# 59 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 60 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 61 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_7
# 62 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_8
# 63 "data//maps/PellucaCity/scripts.pory"
	release
# 64 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 66 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_5
# 67 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_5
# 68 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 69 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_9
# 70 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_10
# 71 "data//maps/PellucaCity/scripts.pory"
	release
# 72 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 77 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_MAYOR
# 78 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S1
# 79 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S2
# 80 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S3
# 81 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_MAYOR_FIGHT
# 83 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_MayorFight_Trigger_2:
	end


PellucaCity_Greta_Trigger0::
# 99 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger0_2
# 101 "data//maps/PellucaCity/scripts.pory"
	lockall
# 102 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger0_Movement_0
# 103 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 104 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger0_Movement_1
# 105 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 106 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger0_2:
	end


PellucaCity_Greta_Trigger1::
# 110 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger1_2
# 112 "data//maps/PellucaCity/scripts.pory"
	lockall
# 113 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger1_Movement_0
# 114 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 115 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger1_Movement_1
# 116 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 117 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger1_2:
	end


PellucaCity_Greta_Trigger2::
# 121 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger2_2
# 123 "data//maps/PellucaCity/scripts.pory"
	lockall
# 124 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger2_Movement_0
# 125 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 126 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger1_Movement_1
# 127 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 128 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger2_2:
	end


PellucaCity_Greta_Main::
# 134 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 135 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_Main_Text_1
# 136 "data//maps/PellucaCity/scripts.pory"
	release
# 137 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 138 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 139 "data//maps/PellucaCity/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 140 "data//maps/PellucaCity/scripts.pory"
	release
# 141 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 143 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 147 "data//maps/PellucaCity/scripts.pory"
	release
# 148 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 149 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 150 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 151 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 152 "data//maps/PellucaCity/scripts.pory"
	release
# 153 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_1
# 154 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 155 "data//maps/PellucaCity/scripts.pory"
	removeobject 27
# 156 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 157 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 159 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 179 "data//maps/PellucaCity/scripts.pory"
	lockall
# 180 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_2
# 186 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 187 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2
# 188 "data//maps/PellucaCity/scripts.pory"
	release
# 189 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 190 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 191 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 192 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 193 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3, MSGBOX_YESNO
# 194 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_6
# 203 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 204 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 205 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 206 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_5:
# 208 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 209 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 210 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 211 "data//maps/PellucaCity/scripts.pory"
	release
# 212 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 213 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 214 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 215 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 216 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 217 "data//maps/PellucaCity/scripts.pory"
	release
# 218 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 219 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 220 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_8
# 221 "data//maps/PellucaCity/scripts.pory"
	release
# 222 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 223 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 224 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
PellucaCity_EventScripts_Gabrielle_1:
# 226 "data//maps/PellucaCity/scripts.pory"
	releaseall
	return

PellucaCity_EventScripts_Gabrielle_2:
# 181 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 182 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 183 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_1

PellucaCity_EventScripts_Gabrielle_6:
# 196 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 197 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 198 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 199 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 200 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_5


PellucaCity_Zorua::
# 231 "data//maps/PellucaCity/scripts.pory"
	lockall
# 232 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 233 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_NORMAL
# 234 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 235 "data//maps/PellucaCity/scripts.pory"
	release
# 236 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCity_Greta_Trigger1_Movement_1
# 237 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 238 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 254 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 255 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC1::
# 268 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC2::
# 273 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC3::
# 278 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC4::
# 283 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC5::
# 288 "data//maps/PellucaCity/scripts.pory"
	lockall
# 289 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 290 "data//maps/PellucaCity/scripts.pory"
	release
# 291 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 292 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 293 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 294 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 295 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_1
# 296 "data//maps/PellucaCity/scripts.pory"
	release
# 297 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 298 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 299 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 300 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 301 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_2, MSGBOX_NPC
# 302 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 307 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC7::
# 312 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC8::
# 317 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_Sealeo::
# 322 "data//maps/PellucaCity/scripts.pory"
	lockall
# 323 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 324 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 325 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0, MSGBOX_NPC
# 326 "data//maps/PellucaCity/scripts.pory"
	release
# 327 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_Sealeo_Movement_0
# 328 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 329 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 337 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullGirl::
# 346 "data//maps/PellucaCity/scripts.pory"
	lock
# 347 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 348 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 349 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 351 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 365 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5, MSGBOX_NPC
PellucaCity_WingullGirl_1:
# 368 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 353 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_WingullGirl_Movement_0
# 354 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_WingullGirl_Movement_0
# 355 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 356 "data//maps/PellucaCity/scripts.pory"
	release
# 357 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_Greta_GottaGo_Movement_0
# 358 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_Greta_GottaGo_Movement_0
# 359 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 360 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 361 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 362 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 363 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 373 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullCritique::
# 378 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC10::
# 391 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC10_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC11::
# 397 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_CITY_TM_GIVER, PellucaCity_NPC11_2
# 402 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_1, MSGBOX_NPC
# 403 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_TM01
# 404 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_CITY_TM_GIVER
# 405 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_2, MSGBOX_NPC
	end

PellucaCity_NPC11_2:
# 398 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC12::
# 411 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC12_Text_0, MSGBOX_NPC
	end


PellucaCity_Stantler::
# 416 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 417 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Stantler_Text_0, MSGBOX_NPC
	end


# 26 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_0:
# 26 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 26 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 34 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_1:
# 34 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 34 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 42 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_2:
# 42 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 50 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_3:
# 50 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 50 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_down
	step_end

# 58 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_4:
# 58 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 58 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_up
	step_end

# 66 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_5:
# 66 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 102 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_0:
# 102 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 102 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 102 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 102 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 102 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 102 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 102 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 104 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_1:
# 104 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 113 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_0:
# 113 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 113 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 113 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 113 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 113 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 113 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 113 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 113 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 115 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_1:
# 115 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 124 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger2_Movement_0:
# 124 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 124 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 124 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 124 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 124 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 124 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 124 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 148 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
# 148 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 153 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_1:
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 292 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 292 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 292 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 292 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 292 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 292 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 292 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 292 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 298 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 298 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

# 327 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Sealeo_Movement_0:
# 327 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 353 "data//maps/PellucaCity/scripts.pory"
PellucaCity_WingullGirl_Movement_0:
# 353 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

PellucaCity_MayorFight_Trigger_Text_0:
# 29 "data//maps/PellucaCity/scripts.pory"
	.string "Mayor$"

PellucaCity_MayorFight_Trigger_Text_1:
# 30 "data//maps/PellucaCity/scripts.pory"
	.string "But you can't be doing this! This is our\n"
	.string "city!$"

PellucaCity_MayorFight_Trigger_Text_2:
# 37 "data//maps/PellucaCity/scripts.pory"
	.string "Qwilsquad Boss$"

PellucaCity_MayorFight_Trigger_Text_3:
# 38 "data//maps/PellucaCity/scripts.pory"
	.string "I've told you a hundred times, you\n"
	.string "paper-pushing wimp! Don't mess with the\l"
	.string "Qwilsquad! This is our turf - we don't\l"
	.string "give a hoot about you and your title!$"

PellucaCity_MayorFight_Trigger_Text_4:
# 46 "data//maps/PellucaCity/scripts.pory"
	.string "No! I'm putting my foot down. You and\n"
	.string "your lot lot aren't allowed in Pelluca\l"
	.string "City any more!$"

PellucaCity_MayorFight_Trigger_Text_5:
# 53 "data//maps/PellucaCity/scripts.pory"
	.string "Qwilsquad B$"

PellucaCity_MayorFight_Trigger_Text_6:
# 54 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! What a lame mayor!$"

PellucaCity_MayorFight_Trigger_Text_7:
# 61 "data//maps/PellucaCity/scripts.pory"
	.string "Qwilsquad C$"

PellucaCity_MayorFight_Trigger_Text_8:
# 62 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah! He really thinks he can tell us\n"
	.string "what to do!$"

PellucaCity_MayorFight_Trigger_Text_9:
# 69 "data//maps/PellucaCity/scripts.pory"
	.string "Qwilsquad A$"

PellucaCity_MayorFight_Trigger_Text_10:
# 70 "data//maps/PellucaCity/scripts.pory"
	.string "Go on boss - teach him a lesson!$"

PellucaCity_Greta_Main_Text_0:
# 134 "data//maps/PellucaCity/scripts.pory"
	.string "Greta$"

PellucaCity_Greta_Main_Text_1:
# 135 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, it's you again, {PLAYER}! Fancy\n"
	.string "seeing you in these parts. Route 6 was a\l"
	.string "tough trek, eh?$"

PellucaCity_Greta_GottaGo_Text_0:
# 151 "data//maps/PellucaCity/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 181 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 182 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh, I love the smell of the river!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 187 "data//maps/PellucaCity/scripts.pory"
	.string "I grew up here on this cliff without my\n"
	.string "parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "Those grunts were really vicious to me.\n"
	.string "I was so scared I would lose Zorua!$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 193 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the Clefairy?$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 199 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah...I doubt he'd ever forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 205 "data//maps/PellucaCity/scripts.pory"
	.string "You're just trying to make me feel\n"
	.string "better, aren't you? I don't need your\l"
	.string "pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 210 "data//maps/PellucaCity/scripts.pory"
	.string "After getting kicked out of Team\n"
	.string "Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 216 "data//maps/PellucaCity/scripts.pory"
	.string "I want you to have this. As a thank you.\n"
	.string "For saving me - not just once, but so\l"
	.string "many times. You're a strong trainer, but\l"
	.string "more importantly - you're a good person.\l"
	.string "I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_8:
# 220 "data//maps/PellucaCity/scripts.pory"
	.string "Who we are is defined by the chocies we\n"
	.string "make, and once we lock in, we can't\l"
	.string "change.\p"
	.string "I can't erase what I've done, but I'm\n"
	.string "going to make a better choice this time.\p"
	.string "I suppose you're going to head to the\n"
	.string "Mirroh Base Camp from here? Team\l"
	.string "Somber must've reached there already.\l"
	.string "Best of luck, {PLAYER}.$"

PellucaCity_Zorua_Text_0:
# 234 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle's Zorua looks content. Life is\n"
	.string "more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 255 "data//maps/PellucaCity/scripts.pory"
	.string "Lycanroc is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 268 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 273 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "Pelluca Restaurant?$"

PellucaCity_NPC3_Text_0:
# 278 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in Mt. Mirroh but I\n"
	.string "can't go there without a Cable Car Pass.\l"
	.string "So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 283 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge is too small. It's nothing\n"
	.string "like the cycling roads in other regions!\l"
	.string "Why does the mayor even let us cycle\l"
	.string "then?$"

PellucaCity_NPC5_Text_0:
# 289 "data//maps/PellucaCity/scripts.pory"
	.string "Look over there...$"

PellucaCity_NPC5_Text_1:
# 295 "data//maps/PellucaCity/scripts.pory"
	.string "The Gym Leader of Pelluca City had her\n"
	.string "gym constructed on a separate island.$"

PellucaCity_NPC5_Text_2:
# 301 "data//maps/PellucaCity/scripts.pory"
	.string "Talk about entitlement!$"

PellucaCity_NPC6_Text_0:
# 307 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the Mirroh Base Camp?\n"
	.string "You'll have to take the cable car just\l"
	.string "past the Poké Mart.\p"
	.string "I heard they're closing the gym there\n"
	.string "though.$"

PellucaCity_NPC7_Text_0:
# 312 "data//maps/PellucaCity/scripts.pory"
	.string "There are no free tables at the\n"
	.string "restaurant! I should've made a\l"
	.string "reservation.$"

PellucaCity_NPC8_Text_0:
# 317 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "Mega Sharpedo's going to scare all the\l"
	.string "fish away? I wish our mayor would do\l"
	.string "something about it.$"

PellucaCity_Sealeo_Text_0:
# 325 "data//maps/PellucaCity/scripts.pory"
	.string "Sealeo wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 337 "data//maps/PellucaCity/scripts.pory"
	.string "This is the Pelluca Fishery! But it's\n"
	.string "closed due to the Mega Sharpedo\l"
	.string "attacks.$"

PellucaCity_WingullGirl_Text_0:
# 348 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "Wingulls over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 349 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 349 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 355 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a Wingull!$"

PellucaCity_WingullGirl_Text_4:
# 361 "data//maps/PellucaCity/scripts.pory"
	.string "The Wingull gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 365 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 373 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "Wingulls. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 378 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at Pokémon...that's poor\l"
	.string "parenting. The mayor should really do\l"
	.string "something but he's too incompetent.$"

PellucaCity_NPC10_Text_0:
# 391 "data//maps/PellucaCity/scripts.pory"
	.string "I ate too many apple tarts! I'm too full.\n"
	.string "Whoever said people have a second\l"
	.string "stomach for dessert was lying!$"

PellucaCity_NPC11_Text_0:
# 398 "data//maps/PellucaCity/scripts.pory"
	.string "Life is too short to worry!$"

PellucaCity_NPC11_Text_1:
# 402 "data//maps/PellucaCity/scripts.pory"
	.string "The Pelluca Gym is across the\n"
	.string "water...when I was younger, I tried to\l"
	.string "challenge Jania many times, but I could\l"
	.string "never win. She was my classmate, you\l"
	.string "know? We grew up in Galecrest City\l"
	.string "together. She went on to become a big\l"
	.string "Gym Leader and I moved here too, with a\l"
	.string "regular family and a regular job.\l"
	.string "Whenever I look off at the gym, I\l"
	.string "wonder...\p"
	.string "I don't battle anymore. Maybe you might\n"
	.string "like to use this.$"

PellucaCity_NPC11_Text_2:
# 405 "data//maps/PellucaCity/scripts.pory"
	.string "It's time for me to let go.$"

PellucaCity_NPC12_Text_0:
# 411 "data//maps/PellucaCity/scripts.pory"
	.string "The mayor isn't maintaining the city one\n"
	.string "bit! My Stantler eating the overgrown\l"
	.string "flowers is actually contributing to\l"
	.string "city maintenance.$"

PellucaCity_Stantler_Text_0:
# 417 "data//maps/PellucaCity/scripts.pory"
	.string "Stantler is nonchalantly chomping on\n"
	.string "the flowers.$"
