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
# 25 "data//maps/PellucaCity/scripts.pory"
	lockall
# 28 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 29 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_MayorFight_Trigger_Movement_0
# 30 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 31 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 34 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_1
# 35 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 36 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 37 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 38 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_1
# 39 "data//maps/PellucaCity/scripts.pory"
	release
# 40 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 42 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_2
# 43 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 44 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 45 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 46 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_3
# 47 "data//maps/PellucaCity/scripts.pory"
	release
# 48 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 50 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 51 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 52 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 53 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 54 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_4
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
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 62 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_6
# 63 "data//maps/PellucaCity/scripts.pory"
	release
# 64 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 66 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_5
# 67 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 68 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 69 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 70 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_7
# 71 "data//maps/PellucaCity/scripts.pory"
	release
# 72 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 74 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_6
# 75 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_6
# 76 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 77 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 78 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_8
# 79 "data//maps/PellucaCity/scripts.pory"
	release
# 80 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 82 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_7
# 83 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 84 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 85 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 86 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_9
# 87 "data//maps/PellucaCity/scripts.pory"
	release
# 88 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 90 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_7
# 91 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 92 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 93 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_8
# 94 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 95 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 97 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 98 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_10
# 99 "data//maps/PellucaCity/scripts.pory"
	release
# 100 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 102 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_6
# 103 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_6
# 104 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 105 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 106 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_11
# 107 "data//maps/PellucaCity/scripts.pory"
	release
# 108 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 110 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_7
# 111 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 112 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 113 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 114 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_12
# 115 "data//maps/PellucaCity/scripts.pory"
	release
# 116 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 119 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 120 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 121 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 122 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_10
# 123 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 124 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 125 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_9
# 126 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_11
# 127 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 128 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_12
# 129 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_12
# 130 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_12
# 131 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 136 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_13
# 137 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 138 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 139 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 140 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_13
# 141 "data//maps/PellucaCity/scripts.pory"
	release
# 142 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 144 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_14
# 145 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 146 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 147 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 148 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_14
# 149 "data//maps/PellucaCity/scripts.pory"
	release
# 150 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 151 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_15
# 152 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 153 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 157 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 158 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_MayorFight_Trigger_Movement_16
# 159 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 160 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 162 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_MAYOR
# 163 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S1
# 164 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S2
# 165 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S3
# 166 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_MAYOR_FIGHT
# 168 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_MayorFight_Trigger_2:
	end


PellucaCity_Greta_Trigger0::
# 212 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger0_2
# 214 "data//maps/PellucaCity/scripts.pory"
	lockall
# 215 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger0_Movement_0
# 216 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 217 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger0_Movement_1
# 218 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 219 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger0_2:
	end


PellucaCity_Greta_Trigger1::
# 223 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger1_2
# 225 "data//maps/PellucaCity/scripts.pory"
	lockall
# 226 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger1_Movement_0
# 227 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 228 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger1_Movement_1
# 229 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 230 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger1_2:
	end


PellucaCity_Greta_Trigger2::
# 234 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger2_2
# 236 "data//maps/PellucaCity/scripts.pory"
	lockall
# 237 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger2_Movement_0
# 238 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 239 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger1_Movement_1
# 240 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 241 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger2_2:
	end


PellucaCity_Greta_Main::
# 247 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 248 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_Main_Text_1
# 249 "data//maps/PellucaCity/scripts.pory"
	release
# 250 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 251 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 252 "data//maps/PellucaCity/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 253 "data//maps/PellucaCity/scripts.pory"
	release
# 254 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 256 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 260 "data//maps/PellucaCity/scripts.pory"
	release
# 261 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_MayorFight_Trigger_Movement_7
# 262 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 263 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 264 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 265 "data//maps/PellucaCity/scripts.pory"
	release
# 266 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 267 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 268 "data//maps/PellucaCity/scripts.pory"
	removeobject 27
# 269 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 270 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 272 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 292 "data//maps/PellucaCity/scripts.pory"
	lockall
# 293 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_2
# 299 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 300 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2
# 301 "data//maps/PellucaCity/scripts.pory"
	release
# 302 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 303 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 304 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 305 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 306 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3, MSGBOX_YESNO
# 307 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_6
# 316 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 317 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 318 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 319 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_5:
# 321 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 322 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 323 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 324 "data//maps/PellucaCity/scripts.pory"
	release
# 325 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 326 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 327 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 328 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 329 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 330 "data//maps/PellucaCity/scripts.pory"
	release
# 331 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 332 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 333 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_8
# 334 "data//maps/PellucaCity/scripts.pory"
	release
# 335 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 336 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 337 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
PellucaCity_EventScripts_Gabrielle_1:
# 339 "data//maps/PellucaCity/scripts.pory"
	releaseall
	return

PellucaCity_EventScripts_Gabrielle_2:
# 294 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 295 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 296 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_1

PellucaCity_EventScripts_Gabrielle_6:
# 309 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 310 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 311 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 312 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 313 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_5


PellucaCity_Zorua::
# 344 "data//maps/PellucaCity/scripts.pory"
	lockall
# 345 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 346 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_NORMAL
# 347 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 348 "data//maps/PellucaCity/scripts.pory"
	release
# 349 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCity_Greta_Trigger1_Movement_1
# 350 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 351 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 367 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 368 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC1::
# 381 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC2::
# 386 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC3::
# 391 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC4::
# 396 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC5::
# 401 "data//maps/PellucaCity/scripts.pory"
	lockall
# 402 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 403 "data//maps/PellucaCity/scripts.pory"
	release
# 404 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 405 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 406 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 407 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 408 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_1
# 409 "data//maps/PellucaCity/scripts.pory"
	release
# 410 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 411 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 412 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 413 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 414 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_2, MSGBOX_NPC
# 415 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 420 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC7::
# 425 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC8::
# 430 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_Sealeo::
# 435 "data//maps/PellucaCity/scripts.pory"
	lockall
# 436 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 437 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 438 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0, MSGBOX_NPC
# 439 "data//maps/PellucaCity/scripts.pory"
	release
# 440 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_MayorFight_Trigger_Movement_4
# 441 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 442 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 450 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullGirl::
# 459 "data//maps/PellucaCity/scripts.pory"
	lock
# 460 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 461 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 462 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 464 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 478 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5, MSGBOX_NPC
PellucaCity_WingullGirl_1:
# 481 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 466 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_MayorFight_Trigger_Movement_5
# 467 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 468 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 469 "data//maps/PellucaCity/scripts.pory"
	release
# 470 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_MayorFight_Trigger_Movement_7
# 471 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_MayorFight_Trigger_Movement_7
# 472 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 473 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 474 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 475 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 476 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 486 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullCritique::
# 491 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC10::
# 504 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC10_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC11::
# 510 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_CITY_TM_GIVER, PellucaCity_NPC11_2
# 515 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_1, MSGBOX_NPC
# 516 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_TM01
# 517 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_CITY_TM_GIVER
# 518 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_2, MSGBOX_NPC
	end

PellucaCity_NPC11_2:
# 511 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC12::
# 524 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC12_Text_0, MSGBOX_NPC
	end


PellucaCity_Stantler::
# 529 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 530 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Stantler_Text_0, MSGBOX_NPC
	end


# 29 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_0:
# 29 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 29 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 29 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 29 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 34 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_1:
# 34 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 34 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 42 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_2:
# 42 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 42 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 50 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_3:
# 50 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 58 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_4:
# 58 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 66 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_5:
# 66 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 74 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_6:
# 74 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 82 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_7:
# 82 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 93 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_8:
# 93 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 93 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 119 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_9:
# 119 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 122 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_10:
# 122 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 126 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_11:
# 126 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 128 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_12:
# 128 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 128 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 128 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 128 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 128 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 128 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 128 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 128 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 128 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 136 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_13:
# 136 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 136 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 144 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_14:
# 144 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 144 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 144 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 144 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 144 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 144 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 151 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_15:
# 151 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 151 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 151 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 151 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 151 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 151 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 158 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_16:
# 158 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 158 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 158 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 158 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 215 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_0:
# 215 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 215 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 215 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 215 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 215 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 215 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 215 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 217 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_1:
# 217 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 226 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_0:
# 226 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 226 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 226 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 226 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 226 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 226 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 226 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 226 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 228 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_1:
# 228 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 237 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger2_Movement_0:
# 237 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 237 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 237 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 237 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 237 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 237 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 237 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 266 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
# 266 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 266 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 266 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 266 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 266 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 266 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 266 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 266 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 405 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 405 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 405 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 405 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 405 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 405 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 405 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 405 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 411 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 411 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 411 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 411 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 411 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 411 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 411 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 411 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

PellucaCity_MayorFight_Trigger_Text_0:
# 37 "data//maps/PellucaCity/scripts.pory"
	.string "Mayor$"

PellucaCity_MayorFight_Trigger_Text_1:
# 38 "data//maps/PellucaCity/scripts.pory"
	.string "But you can't be doing this to our\n"
	.string "citizens! This is our city!$"

PellucaCity_MayorFight_Trigger_Text_2:
# 45 "data//maps/PellucaCity/scripts.pory"
	.string "Q-squad Boss$"

PellucaCity_MayorFight_Trigger_Text_3:
# 46 "data//maps/PellucaCity/scripts.pory"
	.string "I've told you a hundred times, you\n"
	.string "paper-pushing wimp! Don't you dare mess\l"
	.string "with the Qwilsquad!\p"
	.string "This is our turf - we don't give a hoot\n"
	.string "about you and your title!$"

PellucaCity_MayorFight_Trigger_Text_4:
# 54 "data//maps/PellucaCity/scripts.pory"
	.string "No! Enough is enough! I'm putting my\n"
	.string "foot down.\p"
	.string "You and your lot lot aren't allowed in\n"
	.string "Pelluca City any more!$"

PellucaCity_MayorFight_Trigger_Text_5:
# 61 "data//maps/PellucaCity/scripts.pory"
	.string "Q-squad Grunt$"

PellucaCity_MayorFight_Trigger_Text_6:
# 62 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! What a lame mayor!$"

PellucaCity_MayorFight_Trigger_Text_7:
# 70 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah! He really thinks he can tell us\n"
	.string "what to do!$"

PellucaCity_MayorFight_Trigger_Text_8:
# 78 "data//maps/PellucaCity/scripts.pory"
	.string "Go on boss - teach him a lesson!$"

PellucaCity_MayorFight_Trigger_Text_9:
# 86 "data//maps/PellucaCity/scripts.pory"
	.string "You heard 'em Mayor. Looks like my boys\n"
	.string "want me to prove that we own this city!\p"
	.string "Wanna try me? Right here?$"

PellucaCity_MayorFight_Trigger_Text_10:
# 98 "data//maps/PellucaCity/scripts.pory"
	.string "Nono - see, I'm not - look, I'm just\n"
	.string "asking for a little cooperation and -$"

PellucaCity_MayorFight_Trigger_Text_11:
# 106 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! Look at the wimp! Poor guy.$"

PellucaCity_MayorFight_Trigger_Text_12:
# 114 "data//maps/PellucaCity/scripts.pory"
	.string "Got it, mayor? You're not in charge - I\n"
	.string "am! And this town belongs to the\l"
	.string "Qwilsquad!$"

PellucaCity_MayorFight_Trigger_Text_13:
# 140 "data//maps/PellucaCity/scripts.pory"
	.string "Oh trainer! Were you standing there the\n"
	.string "whole time?\p"
	.string "...\p"
	.string "I'm sorry you had to witness that.\n"
	.string "Y-you know, the restaurant here is\l"
	.string "famous! You should give it a try.$"

PellucaCity_MayorFight_Trigger_Text_14:
# 148 "data//maps/PellucaCity/scripts.pory"
	.string "Sigh..what will I do?$"

PellucaCity_Greta_Main_Text_0:
# 247 "data//maps/PellucaCity/scripts.pory"
	.string "Greta$"

PellucaCity_Greta_Main_Text_1:
# 248 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, it's you again, {PLAYER}! Fancy\n"
	.string "seeing you in these parts. Route 6 was a\l"
	.string "tough trek, eh?$"

PellucaCity_Greta_GottaGo_Text_0:
# 264 "data//maps/PellucaCity/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 294 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 295 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh, I love the smell of the river!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 300 "data//maps/PellucaCity/scripts.pory"
	.string "I grew up here on this cliff without my\n"
	.string "parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "Those grunts were really vicious to me.\n"
	.string "I was so scared I would lose Zorua!$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 306 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the Clefairy?$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 312 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah...I doubt he'd ever forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 318 "data//maps/PellucaCity/scripts.pory"
	.string "You're just trying to make me feel\n"
	.string "better, aren't you? I don't need your\l"
	.string "pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 323 "data//maps/PellucaCity/scripts.pory"
	.string "After getting kicked out of Team\n"
	.string "Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 329 "data//maps/PellucaCity/scripts.pory"
	.string "I want you to have this. As a thank you.\n"
	.string "For saving me - not just once, but so\l"
	.string "many times. You're a strong trainer, but\l"
	.string "more importantly - you're a good person.\l"
	.string "I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_8:
# 333 "data//maps/PellucaCity/scripts.pory"
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
# 347 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle's Zorua looks content. Life is\n"
	.string "more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 368 "data//maps/PellucaCity/scripts.pory"
	.string "Lycanroc is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 381 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 386 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "Pelluca Restaurant?$"

PellucaCity_NPC3_Text_0:
# 391 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in Mt. Mirroh but I\n"
	.string "can't go there without a Cable Car Pass.\l"
	.string "So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 396 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge is too small. It's nothing\n"
	.string "like the cycling roads in other regions!\l"
	.string "Why does the mayor even let us cycle\l"
	.string "then?$"

PellucaCity_NPC5_Text_0:
# 402 "data//maps/PellucaCity/scripts.pory"
	.string "Look over there...$"

PellucaCity_NPC5_Text_1:
# 408 "data//maps/PellucaCity/scripts.pory"
	.string "The Gym Leader of Pelluca City had her\n"
	.string "gym constructed on a separate island.$"

PellucaCity_NPC5_Text_2:
# 414 "data//maps/PellucaCity/scripts.pory"
	.string "Talk about entitlement!$"

PellucaCity_NPC6_Text_0:
# 420 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the Mirroh Base Camp?\n"
	.string "You'll have to take the cable car just\l"
	.string "past the Poké Mart.\p"
	.string "I heard they're closing the gym there\n"
	.string "though.$"

PellucaCity_NPC7_Text_0:
# 425 "data//maps/PellucaCity/scripts.pory"
	.string "There are no free tables at the\n"
	.string "restaurant! I should've made a\l"
	.string "reservation.$"

PellucaCity_NPC8_Text_0:
# 430 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "Mega Sharpedo's going to scare all the\l"
	.string "fish away? I wish our mayor would do\l"
	.string "something about it.$"

PellucaCity_Sealeo_Text_0:
# 438 "data//maps/PellucaCity/scripts.pory"
	.string "Sealeo wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 450 "data//maps/PellucaCity/scripts.pory"
	.string "This is the Pelluca Fishery! But it's\n"
	.string "closed due to the Mega Sharpedo\l"
	.string "attacks.$"

PellucaCity_WingullGirl_Text_0:
# 461 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "Wingulls over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 462 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 462 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 468 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a Wingull!$"

PellucaCity_WingullGirl_Text_4:
# 474 "data//maps/PellucaCity/scripts.pory"
	.string "The Wingull gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 478 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 486 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "Wingulls. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 491 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at Pokémon...that's poor\l"
	.string "parenting. The mayor should really do\l"
	.string "something but he's too incompetent.$"

PellucaCity_NPC10_Text_0:
# 504 "data//maps/PellucaCity/scripts.pory"
	.string "I ate too many apple tarts! I'm too full.\n"
	.string "Whoever said people have a second\l"
	.string "stomach for dessert was lying!$"

PellucaCity_NPC11_Text_0:
# 511 "data//maps/PellucaCity/scripts.pory"
	.string "Life is too short to worry!$"

PellucaCity_NPC11_Text_1:
# 515 "data//maps/PellucaCity/scripts.pory"
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
# 518 "data//maps/PellucaCity/scripts.pory"
	.string "It's time for me to let go.$"

PellucaCity_NPC12_Text_0:
# 524 "data//maps/PellucaCity/scripts.pory"
	.string "The mayor isn't maintaining the city one\n"
	.string "bit! My Stantler eating the overgrown\l"
	.string "flowers is actually contributing to\l"
	.string "city maintenance.$"

PellucaCity_Stantler_Text_0:
# 530 "data//maps/PellucaCity/scripts.pory"
	.string "Stantler is nonchalantly chomping on\n"
	.string "the flowers.$"
