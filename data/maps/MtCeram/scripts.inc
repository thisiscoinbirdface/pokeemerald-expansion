# 1 "data/maps/MtCeram/scripts.pory"

# 2 "data/maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTKOHLA, 19
# 3 "data/maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT1, 20
# 4 "data/maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT2, 21
# 5 "data/maps/MtCeram/scripts.pory"
    .set LOCALID_TOPGRUNT1, 10
# 6 "data/maps/MtCeram/scripts.pory"
    .set LOCALID_TOPGRUNT2, 9
# 7 "data/maps/MtCeram/scripts.pory"
    .set LOCALID_TOPKOHLA, 22
# 8 "data/maps/MtCeram/scripts.pory"
    .set LOCALID_GAB, 5

MtCeram_MapScripts::
	.byte 0


MtCeram_Charizard::
# 18 "data/maps/MtCeram/scripts.pory"
	lockall
# 22 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_0
# 23 "data/maps/MtCeram/scripts.pory"
	releaseall
# 24 "data/maps/MtCeram/scripts.pory"
	end
# 29 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_1, MSGBOX_YESNO
# 31 "data/maps/MtCeram/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtCeram_Charizard_2
# 67 "data/maps/MtCeram/scripts.pory"
	release
MtCeram_Charizard_1:
# 69 "data/maps/MtCeram/scripts.pory"
	releaseall
	end

MtCeram_Charizard_2:
# 33 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_2
# 34 "data/maps/MtCeram/scripts.pory"
	release
# 35 "data/maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_0
# 36 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 37 "data/maps/MtCeram/scripts.pory"
	delay 30
# 38 "data/maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_1
# 39 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 40 "data/maps/MtCeram/scripts.pory"
	delay 60
# 41 "data/maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_2
# 42 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 43 "data/maps/MtCeram/scripts.pory"
	delay 60
# 44 "data/maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_3
# 45 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 46 "data/maps/MtCeram/scripts.pory"
	delay 16
# 47 "data/maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 48 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_3
# 49 "data/maps/MtCeram/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 48
# 50 "data/maps/MtCeram/scripts.pory"
	dowildbattle
# 53 "data/maps/MtCeram/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtCeram_Charizard_6
MtCeram_Charizard_5:
# 58 "data/maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtCeram_Charizard_9
MtCeram_Charizard_8:
# 62 "data/maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtCeram_Charizard_11
	goto MtCeram_Charizard_1

MtCeram_Charizard_6:
# 55 "data/maps/MtCeram/scripts.pory"
	removeobject 18
# 56 "data/maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_5

MtCeram_Charizard_9:
# 59 "data/maps/MtCeram/scripts.pory"
	removeobject 18
# 60 "data/maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_8

MtCeram_Charizard_11:
# 63 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_4
# 64 "data/maps/MtCeram/scripts.pory"
	release
	goto MtCeram_Charizard_1


MtCeram_Eavesdrop_Trigger0::
# 80 "data/maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger0_2
# 81 "data/maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 82 "data/maps/MtCeram/scripts.pory"
	lockall
# 83 "data/maps/MtCeram/scripts.pory"
	delay 16
# 84 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 85 "data/maps/MtCeram/scripts.pory"
	delay 16
# 87 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 88 "data/maps/MtCeram/scripts.pory"
	release
# 90 "data/maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger0_Movement_1
# 91 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 93 "data/maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger0_2:
	end


MtCeram_Eavesdrop_Trigger1::
# 98 "data/maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger1_2
# 99 "data/maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 100 "data/maps/MtCeram/scripts.pory"
	lockall
# 101 "data/maps/MtCeram/scripts.pory"
	delay 16
# 102 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 103 "data/maps/MtCeram/scripts.pory"
	delay 16
# 105 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 106 "data/maps/MtCeram/scripts.pory"
	release
# 108 "data/maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger1_Movement_0
# 109 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 111 "data/maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger1_2:
	end


MtCeram_Eavesdrop_Trigger2::
# 116 "data/maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger2_2
# 117 "data/maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 118 "data/maps/MtCeram/scripts.pory"
	lockall
# 119 "data/maps/MtCeram/scripts.pory"
	delay 16
# 120 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 121 "data/maps/MtCeram/scripts.pory"
	delay 16
# 123 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 124 "data/maps/MtCeram/scripts.pory"
	release
# 126 "data/maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger2_Movement_0
# 127 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 129 "data/maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger2_2:
	end


MtCeram_Eavesdrop_Trigger3::
# 134 "data/maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger3_2
# 135 "data/maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 136 "data/maps/MtCeram/scripts.pory"
	lockall
# 137 "data/maps/MtCeram/scripts.pory"
	delay 16
# 138 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 139 "data/maps/MtCeram/scripts.pory"
	delay 16
# 141 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 142 "data/maps/MtCeram/scripts.pory"
	release
# 144 "data/maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger3_Movement_0
# 145 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 147 "data/maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger3_2:
	end


MtCeram_EventScript_Eavesdrop::
# 153 "data/maps/MtCeram/scripts.pory"
	lockall
# 154 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_0
# 156 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_0
# 157 "data/maps/MtCeram/scripts.pory"
	release
# 159 "data/maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 160 "data/maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_1
# 161 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 162 "data/maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 165 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 166 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 167 "data/maps/MtCeram/scripts.pory"
	delay 30
# 168 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_1
# 169 "data/maps/MtCeram/scripts.pory"
	release
# 170 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 171 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_2
# 172 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 173 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_3
# 174 "data/maps/MtCeram/scripts.pory"
	release
# 175 "data/maps/MtCeram/scripts.pory"
	delay 16
# 176 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_4
# 177 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 178 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_4
# 179 "data/maps/MtCeram/scripts.pory"
	release
# 182 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_5
# 183 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_5
# 184 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 187 "data/maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT1
# 188 "data/maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT2
# 190 "data/maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 191 "data/maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_6
# 192 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 193 "data/maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 196 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_7
# 197 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_5
# 198 "data/maps/MtCeram/scripts.pory"
	release
# 201 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_8
# 202 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 203 "data/maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 205 "data/maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 207 "data/maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 210 "data/maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_BeforePeak_Trigger0::
# 239 "data/maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger0_2
# 240 "data/maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 241 "data/maps/MtCeram/scripts.pory"
	lockall
# 242 "data/maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger0_Movement_0
# 243 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 244 "data/maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger0_2:
	end


MtCeram_BeforePeak_Trigger1::
# 249 "data/maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger1_2
# 251 "data/maps/MtCeram/scripts.pory"
	lockall
# 252 "data/maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 253 "data/maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger1_Movement_0
# 254 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 255 "data/maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger1_2:
	end


MtCeram_EventScript_BeforePeakBattle::
# 262 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_0
# 263 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 264 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_0
# 265 "data/maps/MtCeram/scripts.pory"
	release
# 266 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 267 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 268 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 269 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_1
# 270 "data/maps/MtCeram/scripts.pory"
	release
# 271 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 272 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 273 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_2
# 274 "data/maps/MtCeram/scripts.pory"
	release
# 275 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 276 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 277 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 278 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_3
# 279 "data/maps/MtCeram/scripts.pory"
	release
# 280 "data/maps/MtCeram/scripts.pory"
	delay 16
# 282 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 283 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 284 "data/maps/MtCeram/scripts.pory"
	delay 16
# 285 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_Charizard_Movement_0
# 286 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_Charizard_Movement_0
# 287 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 288 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 289 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_4
# 290 "data/maps/MtCeram/scripts.pory"
	release
# 293 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_5
# 294 "data/maps/MtCeram/scripts.pory"
	release
# 295 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_2
# 296 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 297 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_6
# 298 "data/maps/MtCeram/scripts.pory"
	release
# 299 "data/maps/MtCeram/scripts.pory"
	fadeoutbgm 0
# 302 "data/maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 303 "data/maps/MtCeram/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 304 "data/maps/MtCeram/scripts.pory"
	waitse
# 305 "data/maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 306 "data/maps/MtCeram/scripts.pory"
	waitmoncry
# 307 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_7
# 308 "data/maps/MtCeram/scripts.pory"
	release
# 309 "data/maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 310 "data/maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 312 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_3
# 313 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 317 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_8
# 318 "data/maps/MtCeram/scripts.pory"
	release
# 319 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_4
# 320 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 321 "data/maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPKOHLA
# 324 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 325 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 326 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 327 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_9
# 328 "data/maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_5
# 329 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 330 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_10
# 331 "data/maps/MtCeram/scripts.pory"
	release
# 333 "data/maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_EventScript_BeforePeakBattle_Movement_6
# 334 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 337 "data/maps/MtCeram/scripts.pory"
	trainerbattle_no_intro TRAINER_MTCERAM_GRUNT_DOUBLE, MtCeram_EventScript_BeforePeakBattle_Text_11
# 342 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_12
# 343 "data/maps/MtCeram/scripts.pory"
	release
# 347 "data/maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 348 "data/maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT1
# 349 "data/maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT2
# 350 "data/maps/MtCeram/scripts.pory"
	removeobject LOCALID_GAB
# 351 "data/maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 353 "data/maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 356 "data/maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_PEAK
# 358 "data/maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_TrainerBattle_A::
# 376 "data/maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_A, MtCeram_TrainerBattle_A_Text_0, MtCeram_TrainerBattle_A_Text_1
# 377 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_A_Text_2
# 378 "data/maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_B::
# 384 "data/maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_B, MtCeram_TrainerBattle_B_Text_0, MtCeram_TrainerBattle_B_Text_1
# 385 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_B_Text_2
# 386 "data/maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_C::
# 392 "data/maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_C, MtCeram_TrainerBattle_C_Text_0, MtCeram_TrainerBattle_C_Text_1
# 393 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_C_Text_2
# 394 "data/maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_D::
# 400 "data/maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_D, MtCeram_TrainerBattle_D_Text_0, MtCeram_TrainerBattle_D_Text_1
# 401 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_D_Text_2
# 402 "data/maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT1::
# 407 "data/maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT1, MtCeram_TrainerBattle_GRUNT1_Text_0, MtCeram_TrainerBattle_GRUNT1_Text_1
# 408 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT1_Text_2
# 409 "data/maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT2::
# 415 "data/maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT2, MtCeram_TrainerBattle_GRUNT2_Text_0, MtCeram_TrainerBattle_GRUNT2_Text_1
# 416 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT2_Text_2
# 417 "data/maps/MtCeram/scripts.pory"
	release
	end


MtCeram_EventScript_NPC1::
# 439 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC1_Text_0, MSGBOX_NPC
	end


MtCeram_EventScript_NPC2::
# 445 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC2_Text_0, MSGBOX_NPC
	end


MtCeram_EventScript_NPC3::
# 451 "data/maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_FRESH_WATER, MtCeram_EventScript_NPC3_2
# 454 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_1, MSGBOX_NPC
# 455 "data/maps/MtCeram/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 456 "data/maps/MtCeram/scripts.pory"
	release
# 457 "data/maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_FRESH_WATER
MtCeram_EventScript_NPC3_1:
	end

MtCeram_EventScript_NPC3_2:
# 452 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_0, MSGBOX_NPC
	goto MtCeram_EventScript_NPC3_1


MtCeram_EventScript_NPCNurse::
# 466 "data/maps/MtCeram/scripts.pory"
	lockall
# 467 "data/maps/MtCeram/scripts.pory"
	faceplayer
# 469 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_0
# 470 "data/maps/MtCeram/scripts.pory"
	release
# 471 "data/maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 472 "data/maps/MtCeram/scripts.pory"
	applymovement 24, MtCeram_EventScript_NPCNurse_Movement_0
# 473 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 474 "data/maps/MtCeram/scripts.pory"
	delay 24
# 475 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_1
# 476 "data/maps/MtCeram/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 478 "data/maps/MtCeram/scripts.pory"
	releaseall
	end


MtCeram_EventScript_Gabrielle::
# 483 "data/maps/MtCeram/scripts.pory"
	lockall
# 484 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_0
# 485 "data/maps/MtCeram/scripts.pory"
	release
# 486 "data/maps/MtCeram/scripts.pory"
	delay 30
# 487 "data/maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_Charizard_Movement_0
# 488 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 489 "data/maps/MtCeram/scripts.pory"
	release
# 490 "data/maps/MtCeram/scripts.pory"
	faceplayer
# 491 "data/maps/MtCeram/scripts.pory"
	delay 20
# 492 "data/maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_1
# 493 "data/maps/MtCeram/scripts.pory"
	release
# 494 "data/maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_EventScript_Gabrielle_Movement_0
# 495 "data/maps/MtCeram/scripts.pory"
	waitmovement 0
# 496 "data/maps/MtCeram/scripts.pory"
	releaseall
	return


# 35 "data/maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_0:
# 35 "data/maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 38 "data/maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_1:
# 38 "data/maps/MtCeram/scripts.pory"
	emote_question_mark
# 38 "data/maps/MtCeram/scripts.pory"
	face_left
	step_end

# 41 "data/maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_2:
# 41 "data/maps/MtCeram/scripts.pory"
	emote_question_mark
# 41 "data/maps/MtCeram/scripts.pory"
	face_right
	step_end

# 44 "data/maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_3:
# 44 "data/maps/MtCeram/scripts.pory"
	face_down
# 44 "data/maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 84 "data/maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_0:
# 84 "data/maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 84 "data/maps/MtCeram/scripts.pory"
	face_down
	step_end

# 90 "data/maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_1:
# 90 "data/maps/MtCeram/scripts.pory"
	walk_up
# 90 "data/maps/MtCeram/scripts.pory"
	walk_left
# 90 "data/maps/MtCeram/scripts.pory"
	walk_left
# 90 "data/maps/MtCeram/scripts.pory"
	walk_up
# 90 "data/maps/MtCeram/scripts.pory"
	face_right
	step_end

# 108 "data/maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger1_Movement_0:
# 108 "data/maps/MtCeram/scripts.pory"
	walk_up
# 108 "data/maps/MtCeram/scripts.pory"
	walk_left
# 108 "data/maps/MtCeram/scripts.pory"
	walk_left
# 108 "data/maps/MtCeram/scripts.pory"
	walk_left
# 108 "data/maps/MtCeram/scripts.pory"
	walk_up
# 108 "data/maps/MtCeram/scripts.pory"
	face_right
	step_end

# 126 "data/maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger2_Movement_0:
# 126 "data/maps/MtCeram/scripts.pory"
	walk_up
# 126 "data/maps/MtCeram/scripts.pory"
	walk_left
# 126 "data/maps/MtCeram/scripts.pory"
	walk_left
# 126 "data/maps/MtCeram/scripts.pory"
	walk_left
# 126 "data/maps/MtCeram/scripts.pory"
	walk_left
# 126 "data/maps/MtCeram/scripts.pory"
	walk_up
# 126 "data/maps/MtCeram/scripts.pory"
	face_right
	step_end

# 144 "data/maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger3_Movement_0:
# 144 "data/maps/MtCeram/scripts.pory"
	walk_up
# 144 "data/maps/MtCeram/scripts.pory"
	walk_left
# 144 "data/maps/MtCeram/scripts.pory"
	walk_left
# 144 "data/maps/MtCeram/scripts.pory"
	walk_left
# 144 "data/maps/MtCeram/scripts.pory"
	walk_left
# 144 "data/maps/MtCeram/scripts.pory"
	walk_left
# 144 "data/maps/MtCeram/scripts.pory"
	walk_up
# 144 "data/maps/MtCeram/scripts.pory"
	face_right
	step_end

# 154 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_0:
# 154 "data/maps/MtCeram/scripts.pory"
	face_right
	step_end

# 160 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_1:
# 160 "data/maps/MtCeram/scripts.pory"
	walk_right
# 160 "data/maps/MtCeram/scripts.pory"
	walk_right
# 160 "data/maps/MtCeram/scripts.pory"
	walk_up
# 160 "data/maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 165 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_2:
# 165 "data/maps/MtCeram/scripts.pory"
	jump_in_place_right
	step_end

# 170 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_3:
# 170 "data/maps/MtCeram/scripts.pory"
	emote_question_mark
	step_end

# 176 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_4:
# 176 "data/maps/MtCeram/scripts.pory"
	jump_in_place_left
	step_end

# 182 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_5:
# 182 "data/maps/MtCeram/scripts.pory"
	walk_right
# 182 "data/maps/MtCeram/scripts.pory"
	walk_right
# 182 "data/maps/MtCeram/scripts.pory"
	walk_right
# 182 "data/maps/MtCeram/scripts.pory"
	walk_right
# 182 "data/maps/MtCeram/scripts.pory"
	walk_right
# 182 "data/maps/MtCeram/scripts.pory"
	walk_right
# 182 "data/maps/MtCeram/scripts.pory"
	walk_right
# 182 "data/maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 191 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_6:
# 191 "data/maps/MtCeram/scripts.pory"
	walk_down
# 191 "data/maps/MtCeram/scripts.pory"
	walk_down
# 191 "data/maps/MtCeram/scripts.pory"
	walk_left
# 191 "data/maps/MtCeram/scripts.pory"
	walk_left
	step_end

# 196 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_7:
# 196 "data/maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 196 "data/maps/MtCeram/scripts.pory"
	face_left
	step_end

# 201 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_8:
# 201 "data/maps/MtCeram/scripts.pory"
	walk_down
# 201 "data/maps/MtCeram/scripts.pory"
	walk_right
# 201 "data/maps/MtCeram/scripts.pory"
	walk_right
# 201 "data/maps/MtCeram/scripts.pory"
	walk_right
# 201 "data/maps/MtCeram/scripts.pory"
	walk_right
# 201 "data/maps/MtCeram/scripts.pory"
	walk_up
# 201 "data/maps/MtCeram/scripts.pory"
	walk_up
# 201 "data/maps/MtCeram/scripts.pory"
	walk_right
# 201 "data/maps/MtCeram/scripts.pory"
	walk_right
# 201 "data/maps/MtCeram/scripts.pory"
	walk_right
# 201 "data/maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 242 "data/maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger0_Movement_0:
# 242 "data/maps/MtCeram/scripts.pory"
	walk_up
# 242 "data/maps/MtCeram/scripts.pory"
	walk_up
# 242 "data/maps/MtCeram/scripts.pory"
	walk_up
# 242 "data/maps/MtCeram/scripts.pory"
	walk_left
# 242 "data/maps/MtCeram/scripts.pory"
	walk_left
# 242 "data/maps/MtCeram/scripts.pory"
	face_up
	step_end

# 253 "data/maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger1_Movement_0:
# 253 "data/maps/MtCeram/scripts.pory"
	walk_up
# 253 "data/maps/MtCeram/scripts.pory"
	walk_up
# 253 "data/maps/MtCeram/scripts.pory"
	walk_up
# 253 "data/maps/MtCeram/scripts.pory"
	walk_left
# 253 "data/maps/MtCeram/scripts.pory"
	walk_left
# 253 "data/maps/MtCeram/scripts.pory"
	walk_left
# 253 "data/maps/MtCeram/scripts.pory"
	face_up
	step_end

# 262 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_0:
# 262 "data/maps/MtCeram/scripts.pory"
	jump_in_place_up
	step_end

# 282 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_1:
# 282 "data/maps/MtCeram/scripts.pory"
	face_down
	step_end

# 295 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_2:
# 295 "data/maps/MtCeram/scripts.pory"
	face_up
	step_end

# 312 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_3:
# 312 "data/maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 319 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_4:
# 319 "data/maps/MtCeram/scripts.pory"
	walk_down
# 319 "data/maps/MtCeram/scripts.pory"
	walk_right
# 319 "data/maps/MtCeram/scripts.pory"
	walk_right
# 319 "data/maps/MtCeram/scripts.pory"
	walk_down
# 319 "data/maps/MtCeram/scripts.pory"
	walk_down
# 319 "data/maps/MtCeram/scripts.pory"
	walk_down
# 319 "data/maps/MtCeram/scripts.pory"
	walk_down
# 319 "data/maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 328 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_5:
# 328 "data/maps/MtCeram/scripts.pory"
	jump_in_place_down
# 328 "data/maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 333 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_6:
# 333 "data/maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 472 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_NPCNurse_Movement_0:
# 472 "data/maps/MtCeram/scripts.pory"
	jump_in_place_up
# 472 "data/maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 494 "data/maps/MtCeram/scripts.pory"
MtCeram_EventScript_Gabrielle_Movement_0:
# 494 "data/maps/MtCeram/scripts.pory"
	face_left
	step_end

MtCeram_Charizard_Text_0:
# 22 "data/maps/MtCeram/scripts.pory"
	.string "It's asleep...$"

MtCeram_Charizard_Text_1:
# 29 "data/maps/MtCeram/scripts.pory"
	.string "It's asleep...wake it up?$"

MtCeram_Charizard_Text_2:
# 33 "data/maps/MtCeram/scripts.pory"
	.string "...$"

MtCeram_Charizard_Text_3:
# 48 "data/maps/MtCeram/scripts.pory"
	.string "The CHARIZARD is furious!$"

MtCeram_Charizard_Text_4:
# 63 "data/maps/MtCeram/scripts.pory"
	.string "The CHARIZARD grunts and falls back\n"
	.string "asleep. Better not disturb it again!$"

MtCeram_Eavesdrop_Trigger0_Text_0:
# 87 "data/maps/MtCeram/scripts.pory"
	.string "KOHLA: {PLAYER} - what are you doing?\n"
	.string "Come here, you idiot!$"

MtCeram_EventScript_Eavesdrop_Text_0:
# 156 "data/maps/MtCeram/scripts.pory"
	.string "KOHLA: I've been spying on those two\n"
	.string "Team Somber Grunts. Don't make a sound!$"

MtCeram_EventScript_Eavesdrop_Text_1:
# 168 "data/maps/MtCeram/scripts.pory"
	.string "GRUNT 1: ...so the boss told us to be\n"
	.string "EXTRA careful not to let anyone up the\l"
	.string "mountain.$"

MtCeram_EventScript_Eavesdrop_Text_2:
# 171 "data/maps/MtCeram/scripts.pory"
	.string "GRUNT 2: But where is the boss? And\n"
	.string "GABRIELLE?$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 173 "data/maps/MtCeram/scripts.pory"
	.string "GRUNT 1: The boss found the dreamstone\n"
	.string "on top of the mountain! He's trying to\l"
	.string "climb it right now.\p"
	.string "As for Gabrielle...well, after her\n"
	.string "punishment for losing to that Tenebris\l"
	.string "Lab trainer twice...she's been a little\l"
	.string "down.$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 178 "data/maps/MtCeram/scripts.pory"
	.string "GRUNT 2: Serves her right for losing!\n"
	.string "Team Somber doesn't need any losers!\p"
	.string "GRUNT 1: Yeah what a loser she is! Now\n"
	.string "lets go stand guard. We can't let anyone\l"
	.string "pass until the boss gets the\l"
	.string "dreamstone at the peak!$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 197 "data/maps/MtCeram/scripts.pory"
	.string "KOHLA: Heard that? I've got to get that\n"
	.string "dreamstone before Team Somber! That's\l"
	.string "called responsibility - something you\l"
	.string "wouldn't know about.\p"
	.string "KOHLA: What? You're coming too? Hah!\n"
	.string "We're not buddies, {PLAYER}. I'm the\l"
	.string "one and only ACE ROOKIE, and I've told\l"
	.string "you before - I'm strong enough alone. I\l"
	.string "don't need your help, chum!$"

MtCeram_EventScript_BeforePeakBattle_Text_0:
# 264 "data/maps/MtCeram/scripts.pory"
	.string "KOHLA: That's enough of your mischief\n"
	.string "Team Somber! You're getting in the way\l"
	.string "of police business!$"

MtCeram_EventScript_BeforePeakBattle_Text_1:
# 269 "data/maps/MtCeram/scripts.pory"
	.string "GRUNT 2: You're just a kid. Where's the\n"
	.string "police?$"

MtCeram_EventScript_BeforePeakBattle_Text_2:
# 273 "data/maps/MtCeram/scripts.pory"
	.string "KOHLA: I'm not a kid! I'm the ACE ROOKIE\n"
	.string "of the Detective Academy, and I'm not\l"
	.string "going to let you steal the dreamstone!$"

MtCeram_EventScript_BeforePeakBattle_Text_3:
# 278 "data/maps/MtCeram/scripts.pory"
	.string "GRUNT 1: You alone against the two of\n"
	.string "us?$"

MtCeram_EventScript_BeforePeakBattle_Text_4:
# 289 "data/maps/MtCeram/scripts.pory"
	.string "GRUNT 2: The help arrives. But you're\n"
	.string "both just kids! Hahaha!$"

MtCeram_EventScript_BeforePeakBattle_Text_5:
# 293 "data/maps/MtCeram/scripts.pory"
	.string "KOHLA: I told you I don't need your\n"
	.string "help! You'll just get in the way.$"

MtCeram_EventScript_BeforePeakBattle_Text_6:
# 297 "data/maps/MtCeram/scripts.pory"
	.string "KOHLA: Now come on Team Somber! Bring\n"
	.string "it on!$"

MtCeram_EventScript_BeforePeakBattle_Text_7:
# 307 "data/maps/MtCeram/scripts.pory"
	.string "KOHLA: No! CHARCADET!\p"
	.string "GRUNT 1: Hahaha! Your ace was a\n"
	.string "pushover, ACE ROOKE!$"

MtCeram_EventScript_BeforePeakBattle_Text_8:
# 317 "data/maps/MtCeram/scripts.pory"
	.string "KOHLA: My Pokemon...I have to go and\n"
	.string "heal them...I couldn't stop Team\l"
	.string "Somber...$"

MtCeram_EventScript_BeforePeakBattle_Text_9:
# 327 "data/maps/MtCeram/scripts.pory"
	.string "GRUNT 1: And you? You want a beating\n"
	.string "too?$"

MtCeram_EventScript_BeforePeakBattle_Text_10:
# 330 "data/maps/MtCeram/scripts.pory"
	.string "GRUNT 2: Hey, aren't you the trainer\n"
	.string "that beat Gabrielle?\p"
	.string "GRUNT 1: Yes you are! Let's see what\n"
	.string "you've got!$"

MtCeram_EventScript_BeforePeakBattle_Text_11:
# 337 "data/maps/MtCeram/scripts.pory"
	.string "Argh! You stupid kid!$"

MtCeram_EventScript_BeforePeakBattle_Text_12:
# 342 "data/maps/MtCeram/scripts.pory"
	.string "GRUNT 1: How could you beat us?\p"
	.string "GRUNT 2: We-we've got to tell the\n"
	.string "boss...GRUNT 1: Yeah...c'mon let's hurry.\l"
	.string "{PLAYER} - you may have beaten us\l"
	.string "but you can't stop Team Somber from\l"
	.string "achieving its goal!\p"
	.string "We're warning you - DON'T follow us up\n"
	.string "the mountain peak, or you'll be sorry!$"

MtCeram_TrainerBattle_A_Text_0:
# 376 "data/maps/MtCeram/scripts.pory"
	.string "These mountains are the perfect\n"
	.string "training spot. Don't you agree?$"

MtCeram_TrainerBattle_A_Text_1:
# 376 "data/maps/MtCeram/scripts.pory"
	.string "It's never enough!$"

MtCeram_TrainerBattle_A_Text_2:
# 377 "data/maps/MtCeram/scripts.pory"
	.string "Since its so hot here, you sweat more.\n"
	.string "And sweat is good!$"

MtCeram_TrainerBattle_B_Text_0:
# 384 "data/maps/MtCeram/scripts.pory"
	.string "I love collecting rare Pokemon. Bet your\n"
	.string "eyes will pop when you see what I\l"
	.string "caught here!$"

MtCeram_TrainerBattle_B_Text_1:
# 384 "data/maps/MtCeram/scripts.pory"
	.string "Is rarity not enough?$"

MtCeram_TrainerBattle_B_Text_2:
# 385 "data/maps/MtCeram/scripts.pory"
	.string "I love my Pokémon as friends and\n"
	.string "partners...and collectibles!$"

MtCeram_TrainerBattle_C_Text_0:
# 392 "data/maps/MtCeram/scripts.pory"
	.string "My SIZZLEPEDE loves preying on the\n"
	.string "VENIPEDE around here!$"

MtCeram_TrainerBattle_C_Text_1:
# 392 "data/maps/MtCeram/scripts.pory"
	.string "You sizzle too much!$"

MtCeram_TrainerBattle_C_Text_2:
# 393 "data/maps/MtCeram/scripts.pory"
	.string "SIZZLEPEDE and VENIPEDE are sworn\n"
	.string "enemies, much like their evolutions.$"

MtCeram_TrainerBattle_D_Text_0:
# 400 "data/maps/MtCeram/scripts.pory"
	.string "I brought my sheep Pokémon here but\n"
	.string "their hair is getting singed in the\l"
	.string "heat!$"

MtCeram_TrainerBattle_D_Text_1:
# 400 "data/maps/MtCeram/scripts.pory"
	.string "I should go back down.$"

MtCeram_TrainerBattle_D_Text_2:
# 401 "data/maps/MtCeram/scripts.pory"
	.string "Most Pokémon Breeders specialise in a\n"
	.string "single group. I specialise in rearing\l"
	.string "sheep!$"

MtCeram_TrainerBattle_GRUNT1_Text_0:
# 407 "data/maps/MtCeram/scripts.pory"
	.string "Hey kid, you're not supposed to be here.\n"
	.string "Why? Stop asking questions and get\l"
	.string "lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_1:
# 407 "data/maps/MtCeram/scripts.pory"
	.string "Fine! Don't get lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_2:
# 408 "data/maps/MtCeram/scripts.pory"
	.string "Team Somber has control of this\n"
	.string "mountain for now! Well except for you.$"

MtCeram_TrainerBattle_GRUNT2_Text_0:
# 415 "data/maps/MtCeram/scripts.pory"
	.string "We're going to get the dreamstone and\n"
	.string "Team Somber will reward us! Wait, you're\l"
	.string "not a grunt. Get out of here!$"

MtCeram_TrainerBattle_GRUNT2_Text_1:
# 415 "data/maps/MtCeram/scripts.pory"
	.string "I'm going to be punished for this!$"

MtCeram_TrainerBattle_GRUNT2_Text_2:
# 416 "data/maps/MtCeram/scripts.pory"
	.string "I love Team Somber! No wait...I love\n"
	.string "money!$"

MtCeram_EventScript_NPC1_Text_0:
# 439 "data/maps/MtCeram/scripts.pory"
	.string "If I jump over this ledge, I won't be\n"
	.string "able to return! So I do my jogging here.$"

MtCeram_EventScript_NPC2_Text_0:
# 445 "data/maps/MtCeram/scripts.pory"
	.string "I saw a Larvesta here the other day!\n"
	.string "But they're very rare. The constant\l"
	.string "Sizzlipede and Venipede fighting scare\l"
	.string "them away.$"

MtCeram_EventScript_NPC3_Text_0:
# 452 "data/maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot!$"

MtCeram_EventScript_NPC3_Text_1:
# 454 "data/maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot! Don't\n"
	.string "forget to stay hydrated!$"

MtCeram_EventScript_NPCNurse_Text_0:
# 469 "data/maps/MtCeram/scripts.pory"
	.string "CHANSEY and I have been hiding from\n"
	.string "these thugs behind this tree...although\l"
	.string "CHANSEY's not able to hide herself too\l"
	.string "well.$"

MtCeram_EventScript_NPCNurse_Text_1:
# 475 "data/maps/MtCeram/scripts.pory"
	.string "Don't worry, CHANSEY! We're safe here.\n"
	.string "Meanwhile, if you have a HEAL PASS, I\l"
	.string "can heal your Pokemon!$"

MtCeram_EventScript_Gabrielle_Text_0:
# 484 "data/maps/MtCeram/scripts.pory"
	.string "GABRIELLE: Why do I have to be\n"
	.string "punished every time? I'm trying my\l"
	.string "best! I don't want to steal other\l"
	.string "people's stuff but I'm still doing it for\l"
	.string "the team. It's not fair!\p"
	.string "...$"

MtCeram_EventScript_Gabrielle_Text_1:
# 492 "data/maps/MtCeram/scripts.pory"
	.string "GABRIELLE: Don't look at me like that!\n"
	.string "You don't know what its like...$"
