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
# 57 "data//maps/MtCeram/scripts.pory"
	release
MtCeram_Charizard_1:
# 59 "data//maps/MtCeram/scripts.pory"
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
	delay 60
# 31 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_2
# 32 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 33 "data//maps/MtCeram/scripts.pory"
	delay 60
# 34 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_3
# 35 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 36 "data//maps/MtCeram/scripts.pory"
	delay 16
# 37 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 38 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_2
# 39 "data//maps/MtCeram/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 48
# 40 "data//maps/MtCeram/scripts.pory"
	dowildbattle
# 43 "data//maps/MtCeram/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtCeram_Charizard_6
MtCeram_Charizard_5:
# 48 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtCeram_Charizard_9
MtCeram_Charizard_8:
# 52 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtCeram_Charizard_11
	goto MtCeram_Charizard_1

MtCeram_Charizard_6:
# 45 "data//maps/MtCeram/scripts.pory"
	removeobject 18
# 46 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_5

MtCeram_Charizard_9:
# 49 "data//maps/MtCeram/scripts.pory"
	removeobject 18
# 50 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_8

MtCeram_Charizard_11:
# 53 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_3
# 54 "data//maps/MtCeram/scripts.pory"
	release
	goto MtCeram_Charizard_1


MtCeram_Eavesdrop_Trigger0::
# 70 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger0_2
# 71 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 72 "data//maps/MtCeram/scripts.pory"
	lockall
# 73 "data//maps/MtCeram/scripts.pory"
	delay 16
# 74 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 75 "data//maps/MtCeram/scripts.pory"
	delay 16
# 77 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 78 "data//maps/MtCeram/scripts.pory"
	release
# 80 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger0_Movement_1
# 81 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 83 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger0_2:
	end


MtCeram_Eavesdrop_Trigger1::
# 88 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger1_2
# 89 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 90 "data//maps/MtCeram/scripts.pory"
	lockall
# 91 "data//maps/MtCeram/scripts.pory"
	delay 16
# 92 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 93 "data//maps/MtCeram/scripts.pory"
	delay 16
# 95 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 96 "data//maps/MtCeram/scripts.pory"
	release
# 98 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger1_Movement_0
# 99 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 101 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger1_2:
	end


MtCeram_Eavesdrop_Trigger2::
# 106 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger2_2
# 107 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 108 "data//maps/MtCeram/scripts.pory"
	lockall
# 109 "data//maps/MtCeram/scripts.pory"
	delay 16
# 110 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 111 "data//maps/MtCeram/scripts.pory"
	delay 16
# 113 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 114 "data//maps/MtCeram/scripts.pory"
	release
# 116 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger2_Movement_0
# 117 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 119 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger2_2:
	end


MtCeram_Eavesdrop_Trigger3::
# 124 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger3_2
# 125 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 126 "data//maps/MtCeram/scripts.pory"
	lockall
# 127 "data//maps/MtCeram/scripts.pory"
	delay 16
# 128 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 129 "data//maps/MtCeram/scripts.pory"
	delay 16
# 131 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 132 "data//maps/MtCeram/scripts.pory"
	release
# 134 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger3_Movement_0
# 135 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 137 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger3_2:
	end


MtCeram_EventScript_Eavesdrop::
# 143 "data//maps/MtCeram/scripts.pory"
	lockall
# 144 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_0
# 146 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_0
# 147 "data//maps/MtCeram/scripts.pory"
	release
# 149 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 150 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_1
# 151 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 152 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 155 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 156 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 157 "data//maps/MtCeram/scripts.pory"
	delay 30
# 158 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_1
# 159 "data//maps/MtCeram/scripts.pory"
	release
# 160 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 161 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_2
# 162 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 163 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_3
# 164 "data//maps/MtCeram/scripts.pory"
	release
# 165 "data//maps/MtCeram/scripts.pory"
	delay 16
# 166 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_4
# 167 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 168 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_4
# 169 "data//maps/MtCeram/scripts.pory"
	release
# 172 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_5
# 173 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_5
# 174 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 177 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT1
# 178 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT2
# 180 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 181 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_6
# 182 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 183 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 186 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_7
# 187 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_5
# 188 "data//maps/MtCeram/scripts.pory"
	release
# 191 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_8
# 192 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 193 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 195 "data//maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 197 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 200 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_BeforePeak_Trigger0::
# 229 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger0_2
# 230 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 231 "data//maps/MtCeram/scripts.pory"
	lockall
# 232 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger0_Movement_0
# 233 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 234 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger0_2:
	end


MtCeram_BeforePeak_Trigger1::
# 239 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger1_2
# 241 "data//maps/MtCeram/scripts.pory"
	lockall
# 242 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 243 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger1_Movement_0
# 244 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 245 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger1_2:
	end


MtCeram_EventScript_BeforePeakBattle::
# 252 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_0
# 253 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 254 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_0
# 255 "data//maps/MtCeram/scripts.pory"
	release
# 256 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 257 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 258 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 259 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_1
# 260 "data//maps/MtCeram/scripts.pory"
	release
# 261 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 262 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 263 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_2
# 264 "data//maps/MtCeram/scripts.pory"
	release
# 265 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 266 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 267 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 268 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_3
# 269 "data//maps/MtCeram/scripts.pory"
	release
# 270 "data//maps/MtCeram/scripts.pory"
	delay 16
# 272 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 273 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 274 "data//maps/MtCeram/scripts.pory"
	delay 16
# 275 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_Charizard_Movement_0
# 276 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_Charizard_Movement_0
# 277 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 278 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 279 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_4
# 280 "data//maps/MtCeram/scripts.pory"
	release
# 283 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_5
# 284 "data//maps/MtCeram/scripts.pory"
	release
# 285 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_2
# 286 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 287 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_6
# 288 "data//maps/MtCeram/scripts.pory"
	release
# 289 "data//maps/MtCeram/scripts.pory"
	fadeoutbgm 0
# 292 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 293 "data//maps/MtCeram/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 294 "data//maps/MtCeram/scripts.pory"
	waitse
# 295 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 296 "data//maps/MtCeram/scripts.pory"
	waitmoncry
# 297 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_7
# 298 "data//maps/MtCeram/scripts.pory"
	release
# 299 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 300 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 302 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_3
# 303 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 307 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_8
# 308 "data//maps/MtCeram/scripts.pory"
	release
# 309 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_4
# 310 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 311 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPKOHLA
# 314 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 315 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 316 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 317 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_9
# 318 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_5
# 319 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 320 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_10
# 321 "data//maps/MtCeram/scripts.pory"
	release
# 323 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_EventScript_BeforePeakBattle_Movement_6
# 324 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 327 "data//maps/MtCeram/scripts.pory"
	trainerbattle_no_intro TRAINER_MTCERAM_GRUNT_DOUBLE, MtCeram_EventScript_BeforePeakBattle_Text_11
# 332 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_12
# 333 "data//maps/MtCeram/scripts.pory"
	release
# 337 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 338 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT1
# 339 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT2
# 340 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_GAB
# 341 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 343 "data//maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 346 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_PEAK
# 348 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_TrainerBattle_A::
# 366 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_A, MtCeram_TrainerBattle_A_Text_0, MtCeram_TrainerBattle_A_Text_1
# 367 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_A_Text_2
# 368 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_B::
# 374 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_B, MtCeram_TrainerBattle_B_Text_0, MtCeram_TrainerBattle_B_Text_1
# 375 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_B_Text_2
# 376 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_C::
# 382 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_C, MtCeram_TrainerBattle_C_Text_0, MtCeram_TrainerBattle_C_Text_1
# 383 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_C_Text_2
# 384 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_D::
# 390 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_D, MtCeram_TrainerBattle_D_Text_0, MtCeram_TrainerBattle_D_Text_1
# 391 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_D_Text_2
# 392 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT1::
# 397 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT1, MtCeram_TrainerBattle_GRUNT1_Text_0, MtCeram_TrainerBattle_GRUNT1_Text_1
# 398 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT1_Text_2
# 399 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT2::
# 405 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT2, MtCeram_TrainerBattle_GRUNT2_Text_0, MtCeram_TrainerBattle_GRUNT2_Text_1
# 406 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT2_Text_2
# 407 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_EventScript_NPC1::
# 429 "data//maps/MtCeram/scripts.pory"
	lockall
# 430 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 431 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC1_Text_0
# 432 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_EventScript_NPC2::
# 436 "data//maps/MtCeram/scripts.pory"
	lockall
# 437 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 438 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC2_Text_0
# 439 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_EventScript_NPC3::
# 443 "data//maps/MtCeram/scripts.pory"
	lockall
# 444 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 445 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_FRESH_WATER, MtCeram_EventScript_NPC3_2
# 448 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_1
# 449 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 450 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_FRESH_WATER
MtCeram_EventScript_NPC3_1:
# 453 "data//maps/MtCeram/scripts.pory"
	releaseall
	return

MtCeram_EventScript_NPC3_2:
# 446 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_0
	goto MtCeram_EventScript_NPC3_1


MtCeram_EventScript_NPCNurse::
# 459 "data//maps/MtCeram/scripts.pory"
	lockall
# 460 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 462 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_0
# 463 "data//maps/MtCeram/scripts.pory"
	release
# 464 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 465 "data//maps/MtCeram/scripts.pory"
	applymovement 24, MtCeram_EventScript_NPCNurse_Movement_0
# 466 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 467 "data//maps/MtCeram/scripts.pory"
	delay 24
# 468 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_1
# 469 "data//maps/MtCeram/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 471 "data//maps/MtCeram/scripts.pory"
	releaseall
	end


MtCeram_EventScript_Gabrielle::
# 476 "data//maps/MtCeram/scripts.pory"
	lockall
# 477 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_0
# 478 "data//maps/MtCeram/scripts.pory"
	release
# 479 "data//maps/MtCeram/scripts.pory"
	delay 30
# 480 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_Charizard_Movement_0
# 481 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 482 "data//maps/MtCeram/scripts.pory"
	release
# 483 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 484 "data//maps/MtCeram/scripts.pory"
	delay 20
# 485 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_1
# 486 "data//maps/MtCeram/scripts.pory"
	release
# 487 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_EventScript_Gabrielle_Movement_0
# 488 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 489 "data//maps/MtCeram/scripts.pory"
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
	emote_question_mark
# 28 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 31 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_2:
# 31 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
# 31 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 34 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_3:
# 34 "data//maps/MtCeram/scripts.pory"
	face_down
# 34 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 74 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_0:
# 74 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 74 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 80 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_1:
# 80 "data//maps/MtCeram/scripts.pory"
	walk_up
# 80 "data//maps/MtCeram/scripts.pory"
	walk_left
# 80 "data//maps/MtCeram/scripts.pory"
	walk_left
# 80 "data//maps/MtCeram/scripts.pory"
	walk_up
# 80 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 98 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger1_Movement_0:
# 98 "data//maps/MtCeram/scripts.pory"
	walk_up
# 98 "data//maps/MtCeram/scripts.pory"
	walk_left
# 98 "data//maps/MtCeram/scripts.pory"
	walk_left
# 98 "data//maps/MtCeram/scripts.pory"
	walk_left
# 98 "data//maps/MtCeram/scripts.pory"
	walk_up
# 98 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 116 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger2_Movement_0:
# 116 "data//maps/MtCeram/scripts.pory"
	walk_up
# 116 "data//maps/MtCeram/scripts.pory"
	walk_left
# 116 "data//maps/MtCeram/scripts.pory"
	walk_left
# 116 "data//maps/MtCeram/scripts.pory"
	walk_left
# 116 "data//maps/MtCeram/scripts.pory"
	walk_left
# 116 "data//maps/MtCeram/scripts.pory"
	walk_up
# 116 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 134 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger3_Movement_0:
# 134 "data//maps/MtCeram/scripts.pory"
	walk_up
# 134 "data//maps/MtCeram/scripts.pory"
	walk_left
# 134 "data//maps/MtCeram/scripts.pory"
	walk_left
# 134 "data//maps/MtCeram/scripts.pory"
	walk_left
# 134 "data//maps/MtCeram/scripts.pory"
	walk_left
# 134 "data//maps/MtCeram/scripts.pory"
	walk_left
# 134 "data//maps/MtCeram/scripts.pory"
	walk_up
# 134 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 144 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_0:
# 144 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 150 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_1:
# 150 "data//maps/MtCeram/scripts.pory"
	walk_right
# 150 "data//maps/MtCeram/scripts.pory"
	walk_right
# 150 "data//maps/MtCeram/scripts.pory"
	walk_up
# 150 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 155 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_2:
# 155 "data//maps/MtCeram/scripts.pory"
	jump_in_place_right
	step_end

# 160 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_3:
# 160 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
	step_end

# 166 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_4:
# 166 "data//maps/MtCeram/scripts.pory"
	jump_in_place_left
	step_end

# 172 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_5:
# 172 "data//maps/MtCeram/scripts.pory"
	walk_right
# 172 "data//maps/MtCeram/scripts.pory"
	walk_right
# 172 "data//maps/MtCeram/scripts.pory"
	walk_right
# 172 "data//maps/MtCeram/scripts.pory"
	walk_right
# 172 "data//maps/MtCeram/scripts.pory"
	walk_right
# 172 "data//maps/MtCeram/scripts.pory"
	walk_right
# 172 "data//maps/MtCeram/scripts.pory"
	walk_right
# 172 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 181 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_6:
# 181 "data//maps/MtCeram/scripts.pory"
	walk_down
# 181 "data//maps/MtCeram/scripts.pory"
	walk_down
# 181 "data//maps/MtCeram/scripts.pory"
	walk_left
# 181 "data//maps/MtCeram/scripts.pory"
	walk_left
	step_end

# 186 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_7:
# 186 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 186 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 191 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_8:
# 191 "data//maps/MtCeram/scripts.pory"
	walk_down
# 191 "data//maps/MtCeram/scripts.pory"
	walk_right
# 191 "data//maps/MtCeram/scripts.pory"
	walk_right
# 191 "data//maps/MtCeram/scripts.pory"
	walk_right
# 191 "data//maps/MtCeram/scripts.pory"
	walk_right
# 191 "data//maps/MtCeram/scripts.pory"
	walk_up
# 191 "data//maps/MtCeram/scripts.pory"
	walk_up
# 191 "data//maps/MtCeram/scripts.pory"
	walk_right
# 191 "data//maps/MtCeram/scripts.pory"
	walk_right
# 191 "data//maps/MtCeram/scripts.pory"
	walk_right
# 191 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 232 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger0_Movement_0:
# 232 "data//maps/MtCeram/scripts.pory"
	walk_up
# 232 "data//maps/MtCeram/scripts.pory"
	walk_up
# 232 "data//maps/MtCeram/scripts.pory"
	walk_up
# 232 "data//maps/MtCeram/scripts.pory"
	walk_left
# 232 "data//maps/MtCeram/scripts.pory"
	walk_left
# 232 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 243 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger1_Movement_0:
# 243 "data//maps/MtCeram/scripts.pory"
	walk_up
# 243 "data//maps/MtCeram/scripts.pory"
	walk_up
# 243 "data//maps/MtCeram/scripts.pory"
	walk_up
# 243 "data//maps/MtCeram/scripts.pory"
	walk_left
# 243 "data//maps/MtCeram/scripts.pory"
	walk_left
# 243 "data//maps/MtCeram/scripts.pory"
	walk_left
# 243 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 252 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_0:
# 252 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
	step_end

# 272 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_1:
# 272 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 285 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_2:
# 285 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 302 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_3:
# 302 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 309 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_4:
# 309 "data//maps/MtCeram/scripts.pory"
	walk_down
# 309 "data//maps/MtCeram/scripts.pory"
	walk_right
# 309 "data//maps/MtCeram/scripts.pory"
	walk_right
# 309 "data//maps/MtCeram/scripts.pory"
	walk_down
# 309 "data//maps/MtCeram/scripts.pory"
	walk_down
# 309 "data//maps/MtCeram/scripts.pory"
	walk_down
# 309 "data//maps/MtCeram/scripts.pory"
	walk_down
# 309 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 318 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_5:
# 318 "data//maps/MtCeram/scripts.pory"
	jump_in_place_down
# 318 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 323 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_6:
# 323 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 465 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_NPCNurse_Movement_0:
# 465 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
# 465 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 487 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Gabrielle_Movement_0:
# 487 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

MtCeram_Charizard_Text_0:
# 19 "data//maps/MtCeram/scripts.pory"
	.string "It's asleep...wake it up?$"

MtCeram_Charizard_Text_1:
# 23 "data//maps/MtCeram/scripts.pory"
	.string "...$"

MtCeram_Charizard_Text_2:
# 38 "data//maps/MtCeram/scripts.pory"
	.string "The CHARIZARD is furious!$"

MtCeram_Charizard_Text_3:
# 53 "data//maps/MtCeram/scripts.pory"
	.string "The CHARIZARD grunts and falls back\n"
	.string "asleep. Better not disturb it again!$"

MtCeram_Eavesdrop_Trigger0_Text_0:
# 77 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: {PLAYER} - what are you doing?\n"
	.string "Come here, you idiot!$"

MtCeram_EventScript_Eavesdrop_Text_0:
# 146 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I've been spying on those two\n"
	.string "Team Somber Grunts. Don't make a sound!$"

MtCeram_EventScript_Eavesdrop_Text_1:
# 158 "data//maps/MtCeram/scripts.pory"
	.string "GRUNT 1: ...so the boss told us to be\n"
	.string "EXTRA careful not to let anyone up the\l"
	.string "mountain.$"

MtCeram_EventScript_Eavesdrop_Text_2:
# 161 "data//maps/MtCeram/scripts.pory"
	.string "GRUNT 2: But where is the boss? And\n"
	.string "GABRIELLE?$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 163 "data//maps/MtCeram/scripts.pory"
	.string "GRUNT 1: The boss found the dreamstone\n"
	.string "on top of the mountain! He's trying to\l"
	.string "climb it right now.\p"
	.string "As for Gabrielle...well, after her\n"
	.string "punishment for losing to that Tenebris\l"
	.string "Lab trainer twice...she's been a little\l"
	.string "down.$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 168 "data//maps/MtCeram/scripts.pory"
	.string "GRUNT 2: Serves her right for losing!\n"
	.string "Team Somber doesn't need any losers!\p"
	.string "GRUNT 1: Yeah what a loser she is! Now\n"
	.string "lets go stand guard. We can't let anyone\l"
	.string "pass until the boss gets the\l"
	.string "dreamstone at the peak!$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 187 "data//maps/MtCeram/scripts.pory"
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
# 254 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: That's enough of your mischief\n"
	.string "Team Somber! You're getting in the way\l"
	.string "of police business!$"

MtCeram_EventScript_BeforePeakBattle_Text_1:
# 259 "data//maps/MtCeram/scripts.pory"
	.string "GRUNT 2: You're just a kid. Where's the\n"
	.string "police?$"

MtCeram_EventScript_BeforePeakBattle_Text_2:
# 263 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I'm not a kid! I'm the ACE ROOKIE\n"
	.string "of the Detective Academy, and I'm not\l"
	.string "going to let you steal the dreamstone!$"

MtCeram_EventScript_BeforePeakBattle_Text_3:
# 268 "data//maps/MtCeram/scripts.pory"
	.string "GRUNT 1: You alone against the two of\n"
	.string "us?$"

MtCeram_EventScript_BeforePeakBattle_Text_4:
# 279 "data//maps/MtCeram/scripts.pory"
	.string "GRUNT 2: The help arrives. But you're\n"
	.string "both just kids! Hahaha!$"

MtCeram_EventScript_BeforePeakBattle_Text_5:
# 283 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I told you I don't need your\n"
	.string "help! You'll just get in the way.$"

MtCeram_EventScript_BeforePeakBattle_Text_6:
# 287 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: Now come on Team Somber! Bring\n"
	.string "it on!$"

MtCeram_EventScript_BeforePeakBattle_Text_7:
# 297 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: No! CHARCADET!\p"
	.string "GRUNT 1: Hahaha! Your ace was a\n"
	.string "pushover, ACE ROOKE!$"

MtCeram_EventScript_BeforePeakBattle_Text_8:
# 307 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: My Pokemon...I have to go and\n"
	.string "heal them...I couldn't stop Team\l"
	.string "Somber...$"

MtCeram_EventScript_BeforePeakBattle_Text_9:
# 317 "data//maps/MtCeram/scripts.pory"
	.string "GRUNT 1: And you? You want a beating\n"
	.string "too?$"

MtCeram_EventScript_BeforePeakBattle_Text_10:
# 320 "data//maps/MtCeram/scripts.pory"
	.string "GRUNT 2: Hey, aren't you the trainer\n"
	.string "that beat Gabrielle?\p"
	.string "GRUNT 1: Yes you are! Let's see what\n"
	.string "you've got!$"

MtCeram_EventScript_BeforePeakBattle_Text_11:
# 327 "data//maps/MtCeram/scripts.pory"
	.string "Argh! You stupid kid!$"

MtCeram_EventScript_BeforePeakBattle_Text_12:
# 332 "data//maps/MtCeram/scripts.pory"
	.string "GRUNT 1: How could you beat us?\p"
	.string "GRUNT 2: We-we've got to tell the\n"
	.string "boss...GRUNT 1: Yeah...c'mon let's hurry.\l"
	.string "{PLAYER} - you may have beaten us\l"
	.string "but you can't stop Team Somber from\l"
	.string "achieving its goal!\p"
	.string "We're warning you - DON'T follow us up\n"
	.string "the mountain peak, or you'll be sorry!$"

MtCeram_TrainerBattle_A_Text_0:
# 366 "data//maps/MtCeram/scripts.pory"
	.string "These mountains are the perfect\n"
	.string "training spot. Don't you agree?$"

MtCeram_TrainerBattle_A_Text_1:
# 366 "data//maps/MtCeram/scripts.pory"
	.string "It's never enough!$"

MtCeram_TrainerBattle_A_Text_2:
# 367 "data//maps/MtCeram/scripts.pory"
	.string "Since its so hot here, you sweat more.\n"
	.string "And sweat is good!$"

MtCeram_TrainerBattle_B_Text_0:
# 374 "data//maps/MtCeram/scripts.pory"
	.string "I love collecting rare Pokemon. Bet your\n"
	.string "eyes will pop when you see what I\l"
	.string "caught here!$"

MtCeram_TrainerBattle_B_Text_1:
# 374 "data//maps/MtCeram/scripts.pory"
	.string "Is rarity not enough?$"

MtCeram_TrainerBattle_B_Text_2:
# 375 "data//maps/MtCeram/scripts.pory"
	.string "I love my Pokemon as friends and\n"
	.string "partners...and collectibles!$"

MtCeram_TrainerBattle_C_Text_0:
# 382 "data//maps/MtCeram/scripts.pory"
	.string "My SIZZLEPEDE loves preying on the\n"
	.string "VENIPEDE around here!$"

MtCeram_TrainerBattle_C_Text_1:
# 382 "data//maps/MtCeram/scripts.pory"
	.string "You sizzle too much!$"

MtCeram_TrainerBattle_C_Text_2:
# 383 "data//maps/MtCeram/scripts.pory"
	.string "SIZZLEPEDE and VENIPEDE are sworn\n"
	.string "enemies, much like their evolutions.$"

MtCeram_TrainerBattle_D_Text_0:
# 390 "data//maps/MtCeram/scripts.pory"
	.string "I brought my sheep Pokemon here but\n"
	.string "their hair is getting singed in the\l"
	.string "heat!$"

MtCeram_TrainerBattle_D_Text_1:
# 390 "data//maps/MtCeram/scripts.pory"
	.string "I should go back down.$"

MtCeram_TrainerBattle_D_Text_2:
# 391 "data//maps/MtCeram/scripts.pory"
	.string "Most Pokemon Breeders specialise in a\n"
	.string "single group. I specialise in rearing\l"
	.string "sheep!$"

MtCeram_TrainerBattle_GRUNT1_Text_0:
# 397 "data//maps/MtCeram/scripts.pory"
	.string "Hey kid, you're not supposed to be here.\n"
	.string "Why? Stop asking questions and get\l"
	.string "lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_1:
# 397 "data//maps/MtCeram/scripts.pory"
	.string "Fine! Don't get lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_2:
# 398 "data//maps/MtCeram/scripts.pory"
	.string "Team Somber has control of this\n"
	.string "mountain for now! Well except for you.$"

MtCeram_TrainerBattle_GRUNT2_Text_0:
# 405 "data//maps/MtCeram/scripts.pory"
	.string "We're going to get the dreamstone and\n"
	.string "Team Somber will reward us! Wait, you're\l"
	.string "not a grunt. Get out of here!$"

MtCeram_TrainerBattle_GRUNT2_Text_1:
# 405 "data//maps/MtCeram/scripts.pory"
	.string "I'm going to be punished for this!$"

MtCeram_TrainerBattle_GRUNT2_Text_2:
# 406 "data//maps/MtCeram/scripts.pory"
	.string "I love Team Somber! No wait...I love\n"
	.string "money!$"

MtCeram_EventScript_NPC1_Text_0:
# 431 "data//maps/MtCeram/scripts.pory"
	.string "If I jump over this ledge, I won't be\n"
	.string "able to return! So I do my jogging here.$"

MtCeram_EventScript_NPC2_Text_0:
# 438 "data//maps/MtCeram/scripts.pory"
	.string "I saw a LARVESTA here the other day!\n"
	.string "But they're very rare. The constant\l"
	.string "SIZZLIPEDE and VENIPEDE fighting\l"
	.string "scare them away.$"

MtCeram_EventScript_NPC3_Text_0:
# 446 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot!$"

MtCeram_EventScript_NPC3_Text_1:
# 448 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot! Don't\n"
	.string "forget to stay hydrated!$"

MtCeram_EventScript_NPCNurse_Text_0:
# 462 "data//maps/MtCeram/scripts.pory"
	.string "CHANSEY and I have been hiding from\n"
	.string "these thugs behind this tree...although\l"
	.string "CHANSEY's not able to hide herself too\l"
	.string "well.$"

MtCeram_EventScript_NPCNurse_Text_1:
# 468 "data//maps/MtCeram/scripts.pory"
	.string "Don't worry, CHANSEY! We're safe here.\n"
	.string "Meanwhile, if you have a HEAL PASS, I\l"
	.string "can heal your Pokemon!$"

MtCeram_EventScript_Gabrielle_Text_0:
# 477 "data//maps/MtCeram/scripts.pory"
	.string "GABRIELLE: Why do I have to be\n"
	.string "punished every time? I'm trying my\l"
	.string "best! I don't want to steal other\l"
	.string "people's stuff but I'm still doing it for\l"
	.string "the team. It's not fair!\p"
	.string "...$"

MtCeram_EventScript_Gabrielle_Text_1:
# 485 "data//maps/MtCeram/scripts.pory"
	.string "GABRIELLE: Don't look at me like that!\n"
	.string "You don't know what its like...$"
