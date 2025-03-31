# 1 "data//maps/MtCeram/scripts.pory"

# 2 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTKOHLA, 19
# 3 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT1, 20
# 4 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT2, 21
# 5 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_TOPGRUNT1, 10
# 6 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_TOPGRUNT2, 9
# 7 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_TOPKOHLA, 22
# 8 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_GAB, 5

MtCeram_MapScripts::
	.byte 0


MtCeram_Charizard::
# 18 "data//maps/MtCeram/scripts.pory"
	lockall
# 19 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_0, MSGBOX_YESNO
# 21 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtCeram_Charizard_2
# 59 "data//maps/MtCeram/scripts.pory"
	release
MtCeram_Charizard_1:
# 61 "data//maps/MtCeram/scripts.pory"
	releaseall
	end

MtCeram_Charizard_2:
# 23 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_1
# 24 "data//maps/MtCeram/scripts.pory"
	release
# 25 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_0
# 26 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 27 "data//maps/MtCeram/scripts.pory"
	delay 30
# 28 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_1
# 29 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 30 "data//maps/MtCeram/scripts.pory"
	delay 30
# 31 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_2
# 32 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 33 "data//maps/MtCeram/scripts.pory"
	delay 30
# 34 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_3
# 35 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 36 "data//maps/MtCeram/scripts.pory"
	delay 16
# 37 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 38 "data//maps/MtCeram/scripts.pory"
	delay 40
# 39 "data//maps/MtCeram/scripts.pory"
	waitmoncry
# 40 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_2
# 41 "data//maps/MtCeram/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 50
# 42 "data//maps/MtCeram/scripts.pory"
	dowildbattle
# 45 "data//maps/MtCeram/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 46 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtCeram_Charizard_6
MtCeram_Charizard_5:
# 50 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtCeram_Charizard_9
MtCeram_Charizard_8:
# 54 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtCeram_Charizard_11
	goto MtCeram_Charizard_1

MtCeram_Charizard_6:
# 47 "data//maps/MtCeram/scripts.pory"
	removeobject 18
# 48 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_5

MtCeram_Charizard_9:
# 51 "data//maps/MtCeram/scripts.pory"
	removeobject 18
# 52 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_8

MtCeram_Charizard_11:
# 55 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_3
# 56 "data//maps/MtCeram/scripts.pory"
	release
	goto MtCeram_Charizard_1


MtCeram_Eavesdrop_Trigger0::
# 72 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger0_2
# 74 "data//maps/MtCeram/scripts.pory"
	lockall
# 75 "data//maps/MtCeram/scripts.pory"
	delay 16
# 76 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 77 "data//maps/MtCeram/scripts.pory"
	delay 16
# 79 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 80 "data//maps/MtCeram/scripts.pory"
	release
# 82 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger0_Movement_1
# 83 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 85 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger0_2:
	end


MtCeram_Eavesdrop_Trigger1::
# 90 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger1_2
# 92 "data//maps/MtCeram/scripts.pory"
	lockall
# 93 "data//maps/MtCeram/scripts.pory"
	delay 16
# 94 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 95 "data//maps/MtCeram/scripts.pory"
	delay 16
# 97 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 98 "data//maps/MtCeram/scripts.pory"
	release
# 100 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger1_Movement_0
# 101 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 103 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger1_2:
	end


MtCeram_Eavesdrop_Trigger2::
# 108 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger2_2
# 110 "data//maps/MtCeram/scripts.pory"
	lockall
# 111 "data//maps/MtCeram/scripts.pory"
	delay 16
# 112 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 113 "data//maps/MtCeram/scripts.pory"
	delay 16
# 115 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 116 "data//maps/MtCeram/scripts.pory"
	release
# 118 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger2_Movement_0
# 119 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 121 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger2_2:
	end


MtCeram_Eavesdrop_Trigger3::
# 126 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger3_2
# 128 "data//maps/MtCeram/scripts.pory"
	lockall
# 129 "data//maps/MtCeram/scripts.pory"
	delay 16
# 130 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 131 "data//maps/MtCeram/scripts.pory"
	delay 16
# 133 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 134 "data//maps/MtCeram/scripts.pory"
	release
# 136 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger3_Movement_0
# 137 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 139 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger3_2:
	end


MtCeram_EventScript_Eavesdrop::
# 145 "data//maps/MtCeram/scripts.pory"
	lockall
# 146 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Charizard_Movement_2
# 148 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_0
# 149 "data//maps/MtCeram/scripts.pory"
	release
# 151 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 152 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_0
# 153 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 154 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 157 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_1
# 158 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 159 "data//maps/MtCeram/scripts.pory"
	delay 30
# 160 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_1
# 161 "data//maps/MtCeram/scripts.pory"
	release
# 162 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 163 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_2
# 164 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_1
# 165 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_3
# 166 "data//maps/MtCeram/scripts.pory"
	release
# 167 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_4
# 168 "data//maps/MtCeram/scripts.pory"
	release
# 171 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 172 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 173 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 176 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT1
# 177 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT2
# 179 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 180 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_4
# 181 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 182 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 185 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_5
# 186 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_5
# 187 "data//maps/MtCeram/scripts.pory"
	release
# 190 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_6
# 191 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 192 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 195 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 198 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_BeforePeak_Trigger0::
# 227 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger0_2
# 229 "data//maps/MtCeram/scripts.pory"
	lockall
# 230 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger0_Movement_0
# 231 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 232 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger0_2:
	end


MtCeram_BeforePeak_Trigger1::
# 237 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger1_2
# 239 "data//maps/MtCeram/scripts.pory"
	lockall
# 240 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger1_Movement_0
# 241 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 242 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger1_2:
	end


MtCeram_EventScript_BeforePeakBattle::
# 249 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_0
# 250 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 251 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_0
# 252 "data//maps/MtCeram/scripts.pory"
	release
# 253 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 254 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 255 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 256 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_1
# 257 "data//maps/MtCeram/scripts.pory"
	release
# 258 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 259 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 260 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_2
# 261 "data//maps/MtCeram/scripts.pory"
	release
# 262 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 263 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 264 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 265 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_3
# 266 "data//maps/MtCeram/scripts.pory"
	release
# 269 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_3
# 270 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 271 "data//maps/MtCeram/scripts.pory"
	delay 16
# 272 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_Charizard_Movement_0
# 273 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_Charizard_Movement_0
# 274 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 275 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 276 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_4
# 277 "data//maps/MtCeram/scripts.pory"
	release
# 280 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_5
# 281 "data//maps/MtCeram/scripts.pory"
	release
# 282 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 283 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 284 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_6
# 285 "data//maps/MtCeram/scripts.pory"
	release
# 288 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 289 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_7
# 290 "data//maps/MtCeram/scripts.pory"
	release
# 291 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 292 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_2
# 293 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 297 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_8
# 298 "data//maps/MtCeram/scripts.pory"
	release
# 299 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_3
# 300 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 301 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPKOHLA
# 304 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 305 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 306 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 307 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_9
# 308 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_4
# 309 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 310 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_10
# 311 "data//maps/MtCeram/scripts.pory"
	release
# 313 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_EventScript_BeforePeakBattle_Movement_5
# 314 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 317 "data//maps/MtCeram/scripts.pory"
	trainerbattle_no_intro TRAINER_MTCERAM_GRUNT_DOUBLE, MtCeram_EventScript_BeforePeakBattle_Text_11
# 322 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_12
# 323 "data//maps/MtCeram/scripts.pory"
	release
# 327 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 328 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT1
# 329 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT2
# 330 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_GAB
# 331 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 335 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_PEAK
# 337 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_TrainerBattle_A::
# 355 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_A, MtCeram_TrainerBattle_A_Text_0, MtCeram_TrainerBattle_A_Text_1
# 356 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_A_Text_2
# 357 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_B::
# 363 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_B, MtCeram_TrainerBattle_B_Text_0, MtCeram_TrainerBattle_B_Text_1
# 364 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_B_Text_2
# 365 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_C::
# 371 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_C, MtCeram_TrainerBattle_C_Text_0, MtCeram_TrainerBattle_C_Text_1
# 372 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_C_Text_2
# 373 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_D::
# 379 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_D, MtCeram_TrainerBattle_D_Text_0, MtCeram_TrainerBattle_D_Text_1
# 380 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_D_Text_2
# 381 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT1::
# 386 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT1, MtCeram_TrainerBattle_GRUNT1_Text_0, MtCeram_TrainerBattle_GRUNT1_Text_1
# 387 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT1_Text_2
# 388 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT2::
# 394 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT1, MtCeram_TrainerBattle_GRUNT2_Text_0, MtCeram_TrainerBattle_GRUNT2_Text_1
# 395 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT2_Text_2
# 396 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_EventScript_NPC1::
# 418 "data//maps/MtCeram/scripts.pory"
	lockall
# 419 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 420 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC1_Text_0
# 421 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_EventScript_NPC2::
# 425 "data//maps/MtCeram/scripts.pory"
	lockall
# 426 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 427 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC2_Text_0
# 428 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_EventScript_NPC3::
# 432 "data//maps/MtCeram/scripts.pory"
	lockall
# 433 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 434 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_FRESH_WATER, MtCeram_EventScript_NPC3_2
# 437 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_1
# 438 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 439 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_FRESH_WATER
MtCeram_EventScript_NPC3_1:
# 442 "data//maps/MtCeram/scripts.pory"
	releaseall
	return

MtCeram_EventScript_NPC3_2:
# 435 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_0
	goto MtCeram_EventScript_NPC3_1


MtCeram_EventScript_NPCNurse::
# 448 "data//maps/MtCeram/scripts.pory"
	lockall
# 450 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_NURSE, MtCeram_EventScript_NPCNurse_2
# 453 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_1
# 454 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_2
# 455 "data//maps/MtCeram/scripts.pory"
	release
# 456 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_REVIVE
# 457 "data//maps/MtCeram/scripts.pory"
	release
# 458 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 459 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_NURSE
MtCeram_EventScript_NPCNurse_1:
# 462 "data//maps/MtCeram/scripts.pory"
	releaseall
	return

MtCeram_EventScript_NPCNurse_2:
# 451 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_0
	goto MtCeram_EventScript_NPCNurse_1


MtCeram_EventScript_Gabrielle::
# 466 "data//maps/MtCeram/scripts.pory"
	lockall
# 467 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_0
# 468 "data//maps/MtCeram/scripts.pory"
	release
# 469 "data//maps/MtCeram/scripts.pory"
	delay 30
# 470 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_Charizard_Movement_0
# 471 "data//maps/MtCeram/scripts.pory"
	release
# 472 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 473 "data//maps/MtCeram/scripts.pory"
	delay 20
# 474 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_1
# 475 "data//maps/MtCeram/scripts.pory"
	release
# 476 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_Charizard_Movement_1
# 477 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 478 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


# 25 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_0:
# 25 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 28 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_1:
# 28 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 31 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_2:
# 31 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 34 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_3:
# 34 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 76 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_0:
# 76 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 76 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 82 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_1:
# 82 "data//maps/MtCeram/scripts.pory"
	walk_up
# 82 "data//maps/MtCeram/scripts.pory"
	walk_left
# 82 "data//maps/MtCeram/scripts.pory"
	walk_left
# 82 "data//maps/MtCeram/scripts.pory"
	walk_up
# 82 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 100 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger1_Movement_0:
# 100 "data//maps/MtCeram/scripts.pory"
	walk_up
# 100 "data//maps/MtCeram/scripts.pory"
	walk_left
# 100 "data//maps/MtCeram/scripts.pory"
	walk_left
# 100 "data//maps/MtCeram/scripts.pory"
	walk_left
# 100 "data//maps/MtCeram/scripts.pory"
	walk_up
# 100 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 118 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger2_Movement_0:
# 118 "data//maps/MtCeram/scripts.pory"
	walk_up
# 118 "data//maps/MtCeram/scripts.pory"
	walk_left
# 118 "data//maps/MtCeram/scripts.pory"
	walk_left
# 118 "data//maps/MtCeram/scripts.pory"
	walk_left
# 118 "data//maps/MtCeram/scripts.pory"
	walk_left
# 118 "data//maps/MtCeram/scripts.pory"
	walk_up
# 118 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 136 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger3_Movement_0:
# 136 "data//maps/MtCeram/scripts.pory"
	walk_up
# 136 "data//maps/MtCeram/scripts.pory"
	walk_left
# 136 "data//maps/MtCeram/scripts.pory"
	walk_left
# 136 "data//maps/MtCeram/scripts.pory"
	walk_left
# 136 "data//maps/MtCeram/scripts.pory"
	walk_left
# 136 "data//maps/MtCeram/scripts.pory"
	walk_left
# 136 "data//maps/MtCeram/scripts.pory"
	walk_up
# 136 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 152 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_0:
# 152 "data//maps/MtCeram/scripts.pory"
	walk_right
# 152 "data//maps/MtCeram/scripts.pory"
	walk_right
# 152 "data//maps/MtCeram/scripts.pory"
	walk_up
# 152 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 157 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_1:
# 157 "data//maps/MtCeram/scripts.pory"
	jump_in_place_right
	step_end

# 162 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_2:
# 162 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
	step_end

# 171 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_3:
# 171 "data//maps/MtCeram/scripts.pory"
	walk_right
# 171 "data//maps/MtCeram/scripts.pory"
	walk_right
# 171 "data//maps/MtCeram/scripts.pory"
	walk_right
# 171 "data//maps/MtCeram/scripts.pory"
	walk_right
# 171 "data//maps/MtCeram/scripts.pory"
	walk_right
# 171 "data//maps/MtCeram/scripts.pory"
	walk_right
# 171 "data//maps/MtCeram/scripts.pory"
	walk_right
# 171 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 180 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_4:
# 180 "data//maps/MtCeram/scripts.pory"
	walk_down
# 180 "data//maps/MtCeram/scripts.pory"
	walk_down
# 180 "data//maps/MtCeram/scripts.pory"
	walk_left
# 180 "data//maps/MtCeram/scripts.pory"
	walk_left
	step_end

# 185 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_5:
# 185 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 185 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 190 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_6:
# 190 "data//maps/MtCeram/scripts.pory"
	walk_down
# 190 "data//maps/MtCeram/scripts.pory"
	walk_right
# 190 "data//maps/MtCeram/scripts.pory"
	walk_right
# 190 "data//maps/MtCeram/scripts.pory"
	walk_right
# 190 "data//maps/MtCeram/scripts.pory"
	walk_right
# 190 "data//maps/MtCeram/scripts.pory"
	walk_up
# 190 "data//maps/MtCeram/scripts.pory"
	walk_up
# 190 "data//maps/MtCeram/scripts.pory"
	walk_right
# 190 "data//maps/MtCeram/scripts.pory"
	walk_right
# 190 "data//maps/MtCeram/scripts.pory"
	walk_right
# 190 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 230 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger0_Movement_0:
# 230 "data//maps/MtCeram/scripts.pory"
	walk_up
# 230 "data//maps/MtCeram/scripts.pory"
	walk_up
# 230 "data//maps/MtCeram/scripts.pory"
	walk_up
# 230 "data//maps/MtCeram/scripts.pory"
	walk_left
# 230 "data//maps/MtCeram/scripts.pory"
	walk_left
# 230 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 240 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger1_Movement_0:
# 240 "data//maps/MtCeram/scripts.pory"
	walk_up
# 240 "data//maps/MtCeram/scripts.pory"
	walk_up
# 240 "data//maps/MtCeram/scripts.pory"
	walk_up
# 240 "data//maps/MtCeram/scripts.pory"
	walk_left
# 240 "data//maps/MtCeram/scripts.pory"
	walk_left
# 240 "data//maps/MtCeram/scripts.pory"
	walk_left
# 240 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 249 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_0:
# 249 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
	step_end

# 282 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_1:
# 282 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 292 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_2:
# 292 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 299 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_3:
# 299 "data//maps/MtCeram/scripts.pory"
	walk_down
# 299 "data//maps/MtCeram/scripts.pory"
	walk_right
# 299 "data//maps/MtCeram/scripts.pory"
	walk_right
# 299 "data//maps/MtCeram/scripts.pory"
	walk_down
# 299 "data//maps/MtCeram/scripts.pory"
	walk_down
# 299 "data//maps/MtCeram/scripts.pory"
	walk_down
# 299 "data//maps/MtCeram/scripts.pory"
	walk_down
# 299 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 308 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_4:
# 308 "data//maps/MtCeram/scripts.pory"
	jump_in_place_down
# 308 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 313 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_5:
# 313 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

MtCeram_Charizard_Text_0:
# 19 "data//maps/MtCeram/scripts.pory"
	.string "It's asleep...wake it up?$"

MtCeram_Charizard_Text_1:
# 23 "data//maps/MtCeram/scripts.pory"
	.string "...$"

MtCeram_Charizard_Text_2:
# 40 "data//maps/MtCeram/scripts.pory"
	.string "The CHARIZARD is furious!$"

MtCeram_Charizard_Text_3:
# 55 "data//maps/MtCeram/scripts.pory"
	.string "The CHARIZARD grunts and falls back\n"
	.string "asleep. Better not disturb it again!$"

MtCeram_Eavesdrop_Trigger0_Text_0:
# 79 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: {PLAYER} - what are you doing?\n"
	.string "Come here, you idiot!$"

MtCeram_EventScript_Eavesdrop_Text_0:
# 148 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I've been spying on those two\n"
	.string "Team Somber Grunts. Don't make a sound!$"

MtCeram_EventScript_Eavesdrop_Text_1:
# 160 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: ...so the boss told us\n"
	.string "to be EXTRA careful not to let anyone\l"
	.string "up the mountain.$"

MtCeram_EventScript_Eavesdrop_Text_2:
# 163 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: But where is the boss?\n"
	.string "And GABRIELLE?$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 165 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: The boss found the\n"
	.string "dreamstone on top of the mountain!\l"
	.string "She's trying to climb it right now.\p"
	.string "As for GABRIELLE...well, after her\n"
	.string "punishment for losing to that Tenebris\l"
	.string "Lab trainer twice...she's been a little\l"
	.string "down.$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 167 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: Serves her right for\n"
	.string "losing! TEAM SOMBER doesn't need any\l"
	.string "losers!\p"
	.string "SOMBER GRUNT 1: Yeah what a loser she\n"
	.string "is! Now lets go stand guard. We can't let\l"
	.string "anyone pass until the boss gets the\l"
	.string "dreamstone at the peak!$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 186 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: Heard that? I've got to get that\n"
	.string "dreamstone before Team Somber! That's\l"
	.string "called responsibility - something you\l"
	.string "wouldn't know about.\p"
	.string "What? You're coming too? Hah! We're not\n"
	.string "buddies, {PLAYER}. I'm the one and\l"
	.string "only ACE ROOKIE, and I've told you\l"
	.string "before - I don't need your help, chum!$"

MtCeram_EventScript_BeforePeakBattle_Text_0:
# 251 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: That's enough of your mischief\n"
	.string "Team Somber! You're getting in the way\l"
	.string "of police business!$"

MtCeram_EventScript_BeforePeakBattle_Text_1:
# 256 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: You're just a kid.\n"
	.string "Where's the police?$"

MtCeram_EventScript_BeforePeakBattle_Text_2:
# 260 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I'm not a kid! I'm the ACE ROOKIE\n"
	.string "of the detective school, and I'm not\l"
	.string "going to let you steal the dreamstone!$"

MtCeram_EventScript_BeforePeakBattle_Text_3:
# 265 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: You alone against the\n"
	.string "two of us?$"

MtCeram_EventScript_BeforePeakBattle_Text_4:
# 276 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: The help arrives. But\n"
	.string "you're both just kids! Hahaha!$"

MtCeram_EventScript_BeforePeakBattle_Text_5:
# 280 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I told you I don't need your\n"
	.string "help! You'll just get in the way.$"

MtCeram_EventScript_BeforePeakBattle_Text_6:
# 284 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: Now come on TEAM SOMBER! Bring\n"
	.string "it on!$"

MtCeram_EventScript_BeforePeakBattle_Text_7:
# 289 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: No! CHARCADET!\p"
	.string "SOMBER GRUNT 1: Hahaha! Your ace was a\n"
	.string "pushover, ACE ROOKE!$"

MtCeram_EventScript_BeforePeakBattle_Text_8:
# 297 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: My {PKMN}...I have to go and heal\n"
	.string "them...I couldn't stop Team Somber...$"

MtCeram_EventScript_BeforePeakBattle_Text_9:
# 307 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: And you? You want a\n"
	.string "beating too?$"

MtCeram_EventScript_BeforePeakBattle_Text_10:
# 310 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: Hey, aren't you the\n"
	.string "trainer that beat GABRIELLE?\p"
	.string "SOMBER GRUNT 1: Yes you are! Let's see\n"
	.string "what you've got!$"

MtCeram_EventScript_BeforePeakBattle_Text_11:
# 317 "data//maps/MtCeram/scripts.pory"
	.string "Argh! You stupid kid!$"

MtCeram_EventScript_BeforePeakBattle_Text_12:
# 322 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: How could you beat us?\p"
	.string "SOMBER GRUNT 2: We-we've got to tell\n"
	.string "the boss...SOMBER GRUNT 1: Yeah...c'mon\l"
	.string "let's hurry. {PLAYER} - you may have\l"
	.string "beaten us but you can't stop Team\l"
	.string "Somber from achieving our goal!$"

MtCeram_TrainerBattle_A_Text_0:
# 355 "data//maps/MtCeram/scripts.pory"
	.string "These mountains are the perfect\n"
	.string "training spot. Don't you agree?$"

MtCeram_TrainerBattle_A_Text_1:
# 355 "data//maps/MtCeram/scripts.pory"
	.string "It's never enough!$"

MtCeram_TrainerBattle_A_Text_2:
# 356 "data//maps/MtCeram/scripts.pory"
	.string "Since its so hot here, you sweat more.\n"
	.string "And sweat is good!$"

MtCeram_TrainerBattle_B_Text_0:
# 363 "data//maps/MtCeram/scripts.pory"
	.string "I love collecting rare {PKMN}. Bet your\n"
	.string "eyes will pop when you see what I\l"
	.string "caught here!$"

MtCeram_TrainerBattle_B_Text_1:
# 363 "data//maps/MtCeram/scripts.pory"
	.string "Is rarity not enough?$"

MtCeram_TrainerBattle_B_Text_2:
# 364 "data//maps/MtCeram/scripts.pory"
	.string "I love my {PKMN} as friends and\n"
	.string "partners...and collectibles!$"

MtCeram_TrainerBattle_C_Text_0:
# 371 "data//maps/MtCeram/scripts.pory"
	.string "My SIZZLEPEDE loves preying on the\n"
	.string "VENIPEDE around here!$"

MtCeram_TrainerBattle_C_Text_1:
# 371 "data//maps/MtCeram/scripts.pory"
	.string "You sizzle too much!$"

MtCeram_TrainerBattle_C_Text_2:
# 372 "data//maps/MtCeram/scripts.pory"
	.string "SIZZLEPEDE and VENIPEDE are sworn\n"
	.string "enemies, much like their evolutions.$"

MtCeram_TrainerBattle_D_Text_0:
# 379 "data//maps/MtCeram/scripts.pory"
	.string "I brought my sheep {PKMN} here but their\n"
	.string "hair is getting singed in the heat!$"

MtCeram_TrainerBattle_D_Text_1:
# 379 "data//maps/MtCeram/scripts.pory"
	.string "I should go back down.$"

MtCeram_TrainerBattle_D_Text_2:
# 380 "data//maps/MtCeram/scripts.pory"
	.string "Most {PKMN} Breeders specialise in a single\n"
	.string "group. I specialise in rearing sheep!$"

MtCeram_TrainerBattle_GRUNT1_Text_0:
# 386 "data//maps/MtCeram/scripts.pory"
	.string "Hey kid, you're not supposed to be here.\n"
	.string "Why? Stop asking questions and get\l"
	.string "lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_1:
# 386 "data//maps/MtCeram/scripts.pory"
	.string "Fine! Don't get lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_2:
# 387 "data//maps/MtCeram/scripts.pory"
	.string "Team Somber has control of this\n"
	.string "mountain for now! Well except for you.$"

MtCeram_TrainerBattle_GRUNT2_Text_0:
# 394 "data//maps/MtCeram/scripts.pory"
	.string "We're going to get the dreamstone and\n"
	.string "Team Somber will reward us! Wait, you're\l"
	.string "not a grunt. Get out of here!$"

MtCeram_TrainerBattle_GRUNT2_Text_1:
# 394 "data//maps/MtCeram/scripts.pory"
	.string "I'm going to be punished for this!$"

MtCeram_TrainerBattle_GRUNT2_Text_2:
# 395 "data//maps/MtCeram/scripts.pory"
	.string "I love Team Somber! No wait...I love\n"
	.string "money!$"

MtCeram_EventScript_NPC1_Text_0:
# 420 "data//maps/MtCeram/scripts.pory"
	.string "If I jump over this ledge, I won't be\n"
	.string "able to return! So I do my jogging here.$"

MtCeram_EventScript_NPC2_Text_0:
# 427 "data//maps/MtCeram/scripts.pory"
	.string "I saw a LARVESTA here the other day!\n"
	.string "But they're very rare. The constant\l"
	.string "SIZZLIPEDE and VENIPEDE fighting\l"
	.string "scare them away.$"

MtCeram_EventScript_NPC3_Text_0:
# 435 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot!$"

MtCeram_EventScript_NPC3_Text_1:
# 437 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot! Don't\n"
	.string "forget to stay hydrated!$"

MtCeram_EventScript_NPCNurse_Text_0:
# 451 "data//maps/MtCeram/scripts.pory"
	.string "NURSE JOY: I wish I'd brought CHANSEY\n"
	.string "with me.$"

MtCeram_EventScript_NPCNurse_Text_1:
# 453 "data//maps/MtCeram/scripts.pory"
	.string "NURSE JOY: I didn't bring CHANSEY with\n"
	.string "me so I've been hiding from these thugs\l"
	.string "behind this tree.$"

MtCeram_EventScript_NPCNurse_Text_2:
# 454 "data//maps/MtCeram/scripts.pory"
	.string "NURSE JOY: I can't heal your {PKMN} but I\n"
	.string "do have these. Hope they come in handy!$"

MtCeram_EventScript_Gabrielle_Text_0:
# 467 "data//maps/MtCeram/scripts.pory"
	.string "GABRIELLE: Why do I have to be\n"
	.string "punished every time? I'm trying my\l"
	.string "best! I don't want to steal other\l"
	.string "people's stuff but I'm still doing it for\l"
	.string "the team. It's not fair!\p"
	.string "...$"

MtCeram_EventScript_Gabrielle_Text_1:
# 474 "data//maps/MtCeram/scripts.pory"
	.string "GABRIELLE: Don't look at me like that!\n"
	.string "You don't know what its like...$"
