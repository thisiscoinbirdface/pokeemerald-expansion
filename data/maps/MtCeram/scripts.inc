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


MtCeram_Eavesdrop_Trigger0::
# 25 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger0_2
# 27 "data//maps/MtCeram/scripts.pory"
	lockall
# 28 "data//maps/MtCeram/scripts.pory"
	delay 16
# 29 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 30 "data//maps/MtCeram/scripts.pory"
	delay 16
# 32 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 33 "data//maps/MtCeram/scripts.pory"
	release
# 35 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger0_Movement_1
# 36 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 38 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger0_2:
	end


MtCeram_Eavesdrop_Trigger1::
# 43 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger1_2
# 45 "data//maps/MtCeram/scripts.pory"
	lockall
# 46 "data//maps/MtCeram/scripts.pory"
	delay 16
# 47 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 48 "data//maps/MtCeram/scripts.pory"
	delay 16
# 50 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 51 "data//maps/MtCeram/scripts.pory"
	release
# 53 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger1_Movement_0
# 54 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 56 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger1_2:
	end


MtCeram_Eavesdrop_Trigger2::
# 61 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger2_2
# 63 "data//maps/MtCeram/scripts.pory"
	lockall
# 64 "data//maps/MtCeram/scripts.pory"
	delay 16
# 65 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 66 "data//maps/MtCeram/scripts.pory"
	delay 16
# 68 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 69 "data//maps/MtCeram/scripts.pory"
	release
# 71 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger2_Movement_0
# 72 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 74 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger2_2:
	end


MtCeram_Eavesdrop_Trigger3::
# 79 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger3_2
# 81 "data//maps/MtCeram/scripts.pory"
	lockall
# 82 "data//maps/MtCeram/scripts.pory"
	delay 16
# 83 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 84 "data//maps/MtCeram/scripts.pory"
	delay 16
# 86 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 87 "data//maps/MtCeram/scripts.pory"
	release
# 89 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger3_Movement_0
# 90 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 92 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger3_2:
	end


MtCeram_EventScript_Eavesdrop::
# 98 "data//maps/MtCeram/scripts.pory"
	lockall
# 99 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_0
# 101 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_0
# 102 "data//maps/MtCeram/scripts.pory"
	release
# 104 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 105 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_1
# 106 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 107 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 110 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 111 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 112 "data//maps/MtCeram/scripts.pory"
	delay 30
# 113 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_1
# 114 "data//maps/MtCeram/scripts.pory"
	release
# 115 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 116 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_2
# 117 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 118 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_3
# 119 "data//maps/MtCeram/scripts.pory"
	release
# 120 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_4
# 121 "data//maps/MtCeram/scripts.pory"
	release
# 124 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_4
# 125 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_4
# 126 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 129 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT1
# 130 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT2
# 132 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 133 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_5
# 134 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 135 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 138 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_6
# 139 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_5
# 140 "data//maps/MtCeram/scripts.pory"
	release
# 143 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_7
# 144 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 145 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 148 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 151 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_BeforePeak_Trigger0::
# 180 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger0_2
# 182 "data//maps/MtCeram/scripts.pory"
	lockall
# 183 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger0_Movement_0
# 184 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 185 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger0_2:
	end


MtCeram_BeforePeak_Trigger1::
# 190 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger1_2
# 192 "data//maps/MtCeram/scripts.pory"
	lockall
# 193 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger1_Movement_0
# 194 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 195 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger1_2:
	end


MtCeram_EventScript_BeforePeakBattle::
# 202 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_0
# 203 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 204 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_0
# 205 "data//maps/MtCeram/scripts.pory"
	release
# 206 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 207 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 208 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 209 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_1
# 210 "data//maps/MtCeram/scripts.pory"
	release
# 211 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 212 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 213 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_2
# 214 "data//maps/MtCeram/scripts.pory"
	release
# 215 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 216 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 217 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 218 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_3
# 219 "data//maps/MtCeram/scripts.pory"
	release
# 222 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_2
# 223 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 224 "data//maps/MtCeram/scripts.pory"
	delay 16
# 225 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 226 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 227 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 228 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 229 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_4
# 230 "data//maps/MtCeram/scripts.pory"
	release
# 233 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_5
# 234 "data//maps/MtCeram/scripts.pory"
	release
# 235 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_3
# 236 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 237 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_6
# 238 "data//maps/MtCeram/scripts.pory"
	release
# 241 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 242 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_7
# 243 "data//maps/MtCeram/scripts.pory"
	release
# 244 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 245 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_4
# 246 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 250 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_8
# 251 "data//maps/MtCeram/scripts.pory"
	release
# 252 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_5
# 253 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 254 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPKOHLA
# 257 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 258 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 259 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 260 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_9
# 261 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_6
# 262 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 263 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_10
# 264 "data//maps/MtCeram/scripts.pory"
	release
# 266 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_EventScript_BeforePeakBattle_Movement_7
# 267 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 270 "data//maps/MtCeram/scripts.pory"
	trainerbattle_no_intro TRAINER_MTCERAM_GRUNT_DOUBLE, MtCeram_EventScript_BeforePeakBattle_Text_11
# 275 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_12
# 276 "data//maps/MtCeram/scripts.pory"
	release
# 280 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 281 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT1
# 282 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT2
# 283 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_GAB
# 284 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 288 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_PEAK
# 290 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_TrainerBattle_A::
# 308 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_A, MtCeram_TrainerBattle_A_Text_0, MtCeram_TrainerBattle_A_Text_1
# 309 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_A_Text_2
# 310 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_B::
# 316 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_B, MtCeram_TrainerBattle_B_Text_0, MtCeram_TrainerBattle_B_Text_1
# 317 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_B_Text_2
# 318 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_C::
# 324 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_C, MtCeram_TrainerBattle_C_Text_0, MtCeram_TrainerBattle_C_Text_1
# 325 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_C_Text_2
# 326 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_D::
# 332 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_D, MtCeram_TrainerBattle_D_Text_0, MtCeram_TrainerBattle_D_Text_1
# 333 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_D_Text_2
# 334 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT1::
# 339 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT1, MtCeram_TrainerBattle_GRUNT1_Text_0, MtCeram_TrainerBattle_GRUNT1_Text_1
# 340 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT1_Text_2
# 341 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT2::
# 347 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT1, MtCeram_TrainerBattle_GRUNT2_Text_0, MtCeram_TrainerBattle_GRUNT2_Text_1
# 348 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT2_Text_2
# 349 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_EventScript_NPC1::
# 371 "data//maps/MtCeram/scripts.pory"
	lockall
# 372 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 373 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC1_Text_0
# 374 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_EventScript_NPC2::
# 378 "data//maps/MtCeram/scripts.pory"
	lockall
# 379 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 380 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC2_Text_0
# 381 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_EventScript_NPC3::
# 385 "data//maps/MtCeram/scripts.pory"
	lockall
# 386 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 387 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_FRESH_WATER, MtCeram_EventScript_NPC3_2
# 390 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_1
# 391 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 392 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_FRESH_WATER
MtCeram_EventScript_NPC3_1:
# 395 "data//maps/MtCeram/scripts.pory"
	releaseall
	return

MtCeram_EventScript_NPC3_2:
# 388 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_0
	goto MtCeram_EventScript_NPC3_1


MtCeram_EventScript_NPCNurse::
# 401 "data//maps/MtCeram/scripts.pory"
	lockall
# 403 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_NURSE, MtCeram_EventScript_NPCNurse_2
# 406 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_1
# 407 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_2
# 408 "data//maps/MtCeram/scripts.pory"
	release
# 409 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_REVIVE
# 410 "data//maps/MtCeram/scripts.pory"
	release
# 411 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 412 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_NURSE
MtCeram_EventScript_NPCNurse_1:
# 415 "data//maps/MtCeram/scripts.pory"
	releaseall
	return

MtCeram_EventScript_NPCNurse_2:
# 404 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_0
	goto MtCeram_EventScript_NPCNurse_1


MtCeram_EventScript_Gabrielle::
# 419 "data//maps/MtCeram/scripts.pory"
	lockall
# 420 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_0
# 421 "data//maps/MtCeram/scripts.pory"
	release
# 422 "data//maps/MtCeram/scripts.pory"
	delay 30
# 423 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 424 "data//maps/MtCeram/scripts.pory"
	release
# 425 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 426 "data//maps/MtCeram/scripts.pory"
	delay 20
# 427 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_1
# 428 "data//maps/MtCeram/scripts.pory"
	release
# 429 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_EventScript_Gabrielle_Movement_0
# 430 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 431 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


# 29 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_0:
# 29 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 29 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 35 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_1:
# 35 "data//maps/MtCeram/scripts.pory"
	walk_up
# 35 "data//maps/MtCeram/scripts.pory"
	walk_left
# 35 "data//maps/MtCeram/scripts.pory"
	walk_left
# 35 "data//maps/MtCeram/scripts.pory"
	walk_up
# 35 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 53 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger1_Movement_0:
# 53 "data//maps/MtCeram/scripts.pory"
	walk_up
# 53 "data//maps/MtCeram/scripts.pory"
	walk_left
# 53 "data//maps/MtCeram/scripts.pory"
	walk_left
# 53 "data//maps/MtCeram/scripts.pory"
	walk_left
# 53 "data//maps/MtCeram/scripts.pory"
	walk_up
# 53 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 71 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger2_Movement_0:
# 71 "data//maps/MtCeram/scripts.pory"
	walk_up
# 71 "data//maps/MtCeram/scripts.pory"
	walk_left
# 71 "data//maps/MtCeram/scripts.pory"
	walk_left
# 71 "data//maps/MtCeram/scripts.pory"
	walk_left
# 71 "data//maps/MtCeram/scripts.pory"
	walk_left
# 71 "data//maps/MtCeram/scripts.pory"
	walk_up
# 71 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 89 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger3_Movement_0:
# 89 "data//maps/MtCeram/scripts.pory"
	walk_up
# 89 "data//maps/MtCeram/scripts.pory"
	walk_left
# 89 "data//maps/MtCeram/scripts.pory"
	walk_left
# 89 "data//maps/MtCeram/scripts.pory"
	walk_left
# 89 "data//maps/MtCeram/scripts.pory"
	walk_left
# 89 "data//maps/MtCeram/scripts.pory"
	walk_left
# 89 "data//maps/MtCeram/scripts.pory"
	walk_up
# 89 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 99 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_0:
# 99 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 105 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_1:
# 105 "data//maps/MtCeram/scripts.pory"
	walk_right
# 105 "data//maps/MtCeram/scripts.pory"
	walk_right
# 105 "data//maps/MtCeram/scripts.pory"
	walk_up
# 105 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 110 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_2:
# 110 "data//maps/MtCeram/scripts.pory"
	jump_in_place_right
	step_end

# 115 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_3:
# 115 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
	step_end

# 124 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_4:
# 124 "data//maps/MtCeram/scripts.pory"
	walk_right
# 124 "data//maps/MtCeram/scripts.pory"
	walk_right
# 124 "data//maps/MtCeram/scripts.pory"
	walk_right
# 124 "data//maps/MtCeram/scripts.pory"
	walk_right
# 124 "data//maps/MtCeram/scripts.pory"
	walk_right
# 124 "data//maps/MtCeram/scripts.pory"
	walk_right
# 124 "data//maps/MtCeram/scripts.pory"
	walk_right
# 124 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 133 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_5:
# 133 "data//maps/MtCeram/scripts.pory"
	walk_down
# 133 "data//maps/MtCeram/scripts.pory"
	walk_down
# 133 "data//maps/MtCeram/scripts.pory"
	walk_left
# 133 "data//maps/MtCeram/scripts.pory"
	walk_left
	step_end

# 138 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_6:
# 138 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 138 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 143 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_7:
# 143 "data//maps/MtCeram/scripts.pory"
	walk_down
# 143 "data//maps/MtCeram/scripts.pory"
	walk_right
# 143 "data//maps/MtCeram/scripts.pory"
	walk_right
# 143 "data//maps/MtCeram/scripts.pory"
	walk_right
# 143 "data//maps/MtCeram/scripts.pory"
	walk_right
# 143 "data//maps/MtCeram/scripts.pory"
	walk_up
# 143 "data//maps/MtCeram/scripts.pory"
	walk_up
# 143 "data//maps/MtCeram/scripts.pory"
	walk_right
# 143 "data//maps/MtCeram/scripts.pory"
	walk_right
# 143 "data//maps/MtCeram/scripts.pory"
	walk_right
# 143 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 183 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger0_Movement_0:
# 183 "data//maps/MtCeram/scripts.pory"
	walk_up
# 183 "data//maps/MtCeram/scripts.pory"
	walk_up
# 183 "data//maps/MtCeram/scripts.pory"
	walk_up
# 183 "data//maps/MtCeram/scripts.pory"
	walk_left
# 183 "data//maps/MtCeram/scripts.pory"
	walk_left
# 183 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 193 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger1_Movement_0:
# 193 "data//maps/MtCeram/scripts.pory"
	walk_up
# 193 "data//maps/MtCeram/scripts.pory"
	walk_up
# 193 "data//maps/MtCeram/scripts.pory"
	walk_up
# 193 "data//maps/MtCeram/scripts.pory"
	walk_left
# 193 "data//maps/MtCeram/scripts.pory"
	walk_left
# 193 "data//maps/MtCeram/scripts.pory"
	walk_left
# 193 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 202 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_0:
# 202 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
	step_end

# 211 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_1:
# 211 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 222 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_2:
# 222 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 235 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_3:
# 235 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 245 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_4:
# 245 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 252 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_5:
# 252 "data//maps/MtCeram/scripts.pory"
	walk_down
# 252 "data//maps/MtCeram/scripts.pory"
	walk_right
# 252 "data//maps/MtCeram/scripts.pory"
	walk_right
# 252 "data//maps/MtCeram/scripts.pory"
	walk_down
# 252 "data//maps/MtCeram/scripts.pory"
	walk_down
# 252 "data//maps/MtCeram/scripts.pory"
	walk_down
# 252 "data//maps/MtCeram/scripts.pory"
	walk_down
# 252 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 261 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_6:
# 261 "data//maps/MtCeram/scripts.pory"
	jump_in_place_down
# 261 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 266 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_7:
# 266 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 429 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Gabrielle_Movement_0:
# 429 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

MtCeram_Eavesdrop_Trigger0_Text_0:
# 32 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: {PLAYER} - what are you doing?\n"
	.string "Come here, you idiot!$"

MtCeram_EventScript_Eavesdrop_Text_0:
# 101 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I've been spying on those two\n"
	.string "Team Somber Grunts. Don't make a sound!$"

MtCeram_EventScript_Eavesdrop_Text_1:
# 113 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: ...so the boss told us\n"
	.string "to be EXTRA careful not to let anyone\l"
	.string "up the mountain.$"

MtCeram_EventScript_Eavesdrop_Text_2:
# 116 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: But where is the boss?\n"
	.string "And GABRIELLE?$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 118 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: The boss found the\n"
	.string "dreamstone on top of the mountain!\l"
	.string "She's trying to climb it right now.\p"
	.string "As for GABRIELLE...well, after her\n"
	.string "punishment for losing to that Tenebris\l"
	.string "Lab trainer twice...she's been a little\l"
	.string "down.$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 120 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: Serves her right for\n"
	.string "losing! TEAM SOMBER doesn't need any\l"
	.string "losers!\p"
	.string "SOMBER GRUNT 1: Yeah what a loser she\n"
	.string "is! Now lets go stand guard. We can't let\l"
	.string "anyone pass until the boss gets the\l"
	.string "dreamstone at the peak!$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 139 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: Heard that? I've got to get that\n"
	.string "dreamstone before Team Somber! That's\l"
	.string "called responsibility - something you\l"
	.string "wouldn't know about.\p"
	.string "What? You're coming too? Hah! We're not\n"
	.string "buddies, {PLAYER}. I'm the one and\l"
	.string "only ACE ROOKIE, and I've told you\l"
	.string "before - I don't need your help, chum!$"

MtCeram_EventScript_BeforePeakBattle_Text_0:
# 204 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: That's enough of your mischief\n"
	.string "Team Somber! You're getting in the way\l"
	.string "of police business!$"

MtCeram_EventScript_BeforePeakBattle_Text_1:
# 209 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: You're just a kid.\n"
	.string "Where's the police?$"

MtCeram_EventScript_BeforePeakBattle_Text_2:
# 213 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I'm not a kid! I'm the ACE ROOKIE\n"
	.string "of the detective school, and I'm not\l"
	.string "going to let you steal the dreamstone!$"

MtCeram_EventScript_BeforePeakBattle_Text_3:
# 218 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: You alone against the\n"
	.string "two of us?$"

MtCeram_EventScript_BeforePeakBattle_Text_4:
# 229 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: The help arrives. But\n"
	.string "you're both just kids! Hahaha!$"

MtCeram_EventScript_BeforePeakBattle_Text_5:
# 233 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I told you I don't need your\n"
	.string "help! You'll just get in the way.$"

MtCeram_EventScript_BeforePeakBattle_Text_6:
# 237 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: Now come on TEAM SOMBER! Bring\n"
	.string "it on!$"

MtCeram_EventScript_BeforePeakBattle_Text_7:
# 242 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: No! CHARCADET!\p"
	.string "SOMBER GRUNT 1: Hahaha! Your ace was a\n"
	.string "pushover, ACE ROOKE!$"

MtCeram_EventScript_BeforePeakBattle_Text_8:
# 250 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: My {PKMN}...I have to go and heal\n"
	.string "them...I couldn't stop Team Somber...$"

MtCeram_EventScript_BeforePeakBattle_Text_9:
# 260 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: And you? You want a\n"
	.string "beating too?$"

MtCeram_EventScript_BeforePeakBattle_Text_10:
# 263 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: Hey, aren't you the\n"
	.string "trainer that beat GABRIELLE?\p"
	.string "SOMBER GRUNT 1: Yes you are! Let's see\n"
	.string "what you've got!$"

MtCeram_EventScript_BeforePeakBattle_Text_11:
# 270 "data//maps/MtCeram/scripts.pory"
	.string "Argh! You stupid kid!$"

MtCeram_EventScript_BeforePeakBattle_Text_12:
# 275 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: How could you beat us?\p"
	.string "SOMBER GRUNT 2: We-we've got to tell\n"
	.string "the boss...SOMBER GRUNT 1: Yeah...c'mon\l"
	.string "let's hurry. {PLAYER} - you may have\l"
	.string "beaten us but you can't stop Team\l"
	.string "Somber from achieving our goal!$"

MtCeram_TrainerBattle_A_Text_0:
# 308 "data//maps/MtCeram/scripts.pory"
	.string "These mountains are the perfect\n"
	.string "training spot. Don't you agree?$"

MtCeram_TrainerBattle_A_Text_1:
# 308 "data//maps/MtCeram/scripts.pory"
	.string "It's never enough!$"

MtCeram_TrainerBattle_A_Text_2:
# 309 "data//maps/MtCeram/scripts.pory"
	.string "Since its so hot here, you sweat more.\n"
	.string "And sweat is good!$"

MtCeram_TrainerBattle_B_Text_0:
# 316 "data//maps/MtCeram/scripts.pory"
	.string "I love collecting rare {PKMN}. Bet your\n"
	.string "eyes will pop when you see what I\l"
	.string "caught here!$"

MtCeram_TrainerBattle_B_Text_1:
# 316 "data//maps/MtCeram/scripts.pory"
	.string "Is rarity not enough?$"

MtCeram_TrainerBattle_B_Text_2:
# 317 "data//maps/MtCeram/scripts.pory"
	.string "I love my {PKMN} as friends and\n"
	.string "partners...and collectibles!$"

MtCeram_TrainerBattle_C_Text_0:
# 324 "data//maps/MtCeram/scripts.pory"
	.string "My SIZZLEPEDE loves preying on the\n"
	.string "VENIPEDE around here!$"

MtCeram_TrainerBattle_C_Text_1:
# 324 "data//maps/MtCeram/scripts.pory"
	.string "You sizzle too much!$"

MtCeram_TrainerBattle_C_Text_2:
# 325 "data//maps/MtCeram/scripts.pory"
	.string "SIZZLEPEDE and VENIPEDE are sworn\n"
	.string "enemies, much like their evolutions.$"

MtCeram_TrainerBattle_D_Text_0:
# 332 "data//maps/MtCeram/scripts.pory"
	.string "I brought my sheep {PKMN} here but their\n"
	.string "hair is getting singed in the heat!$"

MtCeram_TrainerBattle_D_Text_1:
# 332 "data//maps/MtCeram/scripts.pory"
	.string "I should go back down.$"

MtCeram_TrainerBattle_D_Text_2:
# 333 "data//maps/MtCeram/scripts.pory"
	.string "Most {PKMN} Breeders specialise in a single\n"
	.string "group. I specialise in rearing sheep!$"

MtCeram_TrainerBattle_GRUNT1_Text_0:
# 339 "data//maps/MtCeram/scripts.pory"
	.string "Hey kid, you're not supposed to be here.\n"
	.string "Why? Stop asking questions and get\l"
	.string "lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_1:
# 339 "data//maps/MtCeram/scripts.pory"
	.string "Fine! Don't get lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_2:
# 340 "data//maps/MtCeram/scripts.pory"
	.string "Team Somber has control of this\n"
	.string "mountain for now! Well except for you.$"

MtCeram_TrainerBattle_GRUNT2_Text_0:
# 347 "data//maps/MtCeram/scripts.pory"
	.string "We're going to get the dreamstone and\n"
	.string "Team Somber will reward us! Wait, you're\l"
	.string "not a grunt. Get out of here!$"

MtCeram_TrainerBattle_GRUNT2_Text_1:
# 347 "data//maps/MtCeram/scripts.pory"
	.string "I'm going to be punished for this!$"

MtCeram_TrainerBattle_GRUNT2_Text_2:
# 348 "data//maps/MtCeram/scripts.pory"
	.string "I love Team Somber! No wait...I love\n"
	.string "money!$"

MtCeram_EventScript_NPC1_Text_0:
# 373 "data//maps/MtCeram/scripts.pory"
	.string "If I jump over this ledge, I won't be\n"
	.string "able to return! So I do my jogging here.$"

MtCeram_EventScript_NPC2_Text_0:
# 380 "data//maps/MtCeram/scripts.pory"
	.string "I saw a LARVESTA here the other day!\n"
	.string "But they're very rare. The constant\l"
	.string "SIZZLIPEDE and VENIPEDE fighting\l"
	.string "scare them away.$"

MtCeram_EventScript_NPC3_Text_0:
# 388 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot!$"

MtCeram_EventScript_NPC3_Text_1:
# 390 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot! Don't\n"
	.string "forget to stay hydrated!$"

MtCeram_EventScript_NPCNurse_Text_0:
# 404 "data//maps/MtCeram/scripts.pory"
	.string "NURSE JOY: I wish I'd brought CHANSEY\n"
	.string "with me.$"

MtCeram_EventScript_NPCNurse_Text_1:
# 406 "data//maps/MtCeram/scripts.pory"
	.string "NURSE JOY: I didn't bring CHANSEY with\n"
	.string "me so I've been hiding from these thugs\l"
	.string "behind this tree.$"

MtCeram_EventScript_NPCNurse_Text_2:
# 407 "data//maps/MtCeram/scripts.pory"
	.string "NURSE JOY: I can't heal your {PKMN} but I\n"
	.string "do have these. Hope they come in handy!$"

MtCeram_EventScript_Gabrielle_Text_0:
# 420 "data//maps/MtCeram/scripts.pory"
	.string "GABRIELLE: Why do I have to be\n"
	.string "punished every time? I'm trying my\l"
	.string "best! I don't want to steal other\l"
	.string "people's stuff but I'm still doing it for\l"
	.string "the team. It's not fair!\p"
	.string "...$"

MtCeram_EventScript_Gabrielle_Text_1:
# 427 "data//maps/MtCeram/scripts.pory"
	.string "GABRIELLE: Don't look at me like that!\n"
	.string "You don't know what its like...$"
