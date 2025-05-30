# 1 "data//maps/Route6/scripts.pory"

# 2 "data//maps/Route6/scripts.pory"
    .set LOCALID_GAB, 29
# 3 "data//maps/Route6/scripts.pory"
    .set LOCALID_GRUNT1, 11
# 4 "data//maps/Route6/scripts.pory"
    .set LOCALID_GRUNT2, 10
# 5 "data//maps/Route6/scripts.pory"
    .set LOCALID_VENU, 31

Route6_MapScripts::
	.byte 0


Route6_Nurse_Demo::
# 19 "data//maps/Route6/scripts.pory"
	lockall
# 20 "data//maps/Route6/scripts.pory"
	faceplayer
# 21 "data//maps/Route6/scripts.pory"
	msgbox Route6_Nurse_Demo_Text_0
# 22 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_EventScript_Nurse::
# 34 "data//maps/Route6/scripts.pory"
	lockall
# 35 "data//maps/Route6/scripts.pory"
	faceplayer
# 36 "data//maps/Route6/scripts.pory"
	msgbox Route6_EventScript_Nurse_Text_0
# 37 "data//maps/Route6/scripts.pory"
	release
# 38 "data//maps/Route6/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 39 "data//maps/Route6/scripts.pory"
	release
	return


Route6_Venusaur::
# 45 "data//maps/Route6/scripts.pory"
	lockall
# 47 "data//maps/Route6/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 49 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route6_Venusaur_2
# 58 "data//maps/Route6/scripts.pory"
	msgbox Route6_Venusaur_Text_1, MSGBOX_YESNO
# 60 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Venusaur_5
# 90 "data//maps/Route6/scripts.pory"
	release
Route6_Venusaur_4:
# 92 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_Venusaur_2:
# 50 "data//maps/Route6/scripts.pory"
	msgbox Route6_Venusaur_Text_0
# 51 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_Venusaur_5:
# 61 "data//maps/Route6/scripts.pory"
	fadeoutbgm 1
# 62 "data//maps/Route6/scripts.pory"
	playse MUS_RG_POKE_FLUTE
# 63 "data//maps/Route6/scripts.pory"
	msgbox Route6_Venusaur_Text_2
# 64 "data//maps/Route6/scripts.pory"
	delay 128
# 65 "data//maps/Route6/scripts.pory"
	msgbox Route6_Venusaur_Text_3
# 66 "data//maps/Route6/scripts.pory"
	release
# 67 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_VENU, Route6_Venusaur_Movement_0
# 68 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 69 "data//maps/Route6/scripts.pory"
	delay 16
# 70 "data//maps/Route6/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 71 "data//maps/Route6/scripts.pory"
	msgbox Route6_Venusaur_Text_4
# 72 "data//maps/Route6/scripts.pory"
	setwildbattle SPECIES_VENUSAUR, 48
# 73 "data//maps/Route6/scripts.pory"
	dowildbattle
# 76 "data//maps/Route6/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 77 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route6_Venusaur_9
Route6_Venusaur_8:
# 81 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route6_Venusaur_12
Route6_Venusaur_11:
# 85 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route6_Venusaur_14
	goto Route6_Venusaur_4

Route6_Venusaur_9:
# 78 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_VENU
# 79 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_VENUSAUR
	goto Route6_Venusaur_8

Route6_Venusaur_12:
# 82 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_VENU
# 83 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_VENUSAUR
	goto Route6_Venusaur_11

Route6_Venusaur_14:
# 85 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_VENU, Route6_Venusaur_Movement_1
# 86 "data//maps/Route6/scripts.pory"
	msgbox Route6_Venusaur_Text_5
# 87 "data//maps/Route6/scripts.pory"
	release
	goto Route6_Venusaur_4


Route6_Trainer_A::
# 99 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_A, Route6_Trainer_A_Text_0, Route6_Trainer_A_Text_1
# 100 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_A_Text_2
# 101 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_B::
# 106 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_B, Route6_Trainer_B_Text_0, Route6_Trainer_B_Text_1
# 107 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_B_Text_2
# 108 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C1::
# 113 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C1_Text_0, Route6_Trainer_C1_Text_1
# 114 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C1_Text_2
# 115 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C2::
# 120 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C2_Text_0, Route6_Trainer_C2_Text_1
# 121 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C2_Text_2
# 122 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_D::
# 127 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_D, Route6_Trainer_D_Text_0, Route6_Trainer_D_Text_1
# 128 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_D_Text_2
# 129 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_E::
# 134 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_E, Route6_Trainer_E_Text_0, Route6_Trainer_E_Text_1
# 135 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_E_Text_2
# 136 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_F::
# 141 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_F, Route6_Trainer_F_Text_0, Route6_Trainer_F_Text_1
# 142 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_F_Text_2
# 143 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_G::
# 148 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_G, Route6_Trainer_G_Text_0, Route6_Trainer_G_Text_1
# 149 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_G_Text_2
# 150 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_H::
# 155 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_H, Route6_Trainer_H_Text_0, Route6_Trainer_H_Text_1
# 156 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_H_Text_2
# 157 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_I::
# 162 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_I, Route6_Trainer_I_Text_0, Route6_Trainer_I_Text_1
# 163 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_I_Text_2
# 164 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_J::
# 169 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_J, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 170 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 171 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_K::
# 176 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_K, Route6_Trainer_K_Text_0, Route6_Trainer_K_Text_1
# 177 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_K_Text_2
# 178 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC1::
# 208 "data//maps/Route6/scripts.pory"
	lockall
# 209 "data//maps/Route6/scripts.pory"
	faceplayer
# 210 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC1_Text_0
# 211 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC2::
# 216 "data//maps/Route6/scripts.pory"
	lockall
# 217 "data//maps/Route6/scripts.pory"
	faceplayer
# 218 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC2_Text_0
# 219 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC3::
# 223 "data//maps/Route6/scripts.pory"
	lockall
# 224 "data//maps/Route6/scripts.pory"
	faceplayer
# 225 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC3_Text_0
# 226 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC4::
# 230 "data//maps/Route6/scripts.pory"
	lockall
# 231 "data//maps/Route6/scripts.pory"
	faceplayer
# 233 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 2
	goto_if_eq Route6_NPC4_2
Route6_NPC4_1:
# 237 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 1
	goto_if_eq Route6_NPC4_5
Route6_NPC4_4:
# 255 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 0
	goto_if_eq Route6_NPC4_8
Route6_NPC4_7:
# 273 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_NPC4_2:
# 234 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_0
	goto Route6_NPC4_1

Route6_NPC4_5:
# 238 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_1, MSGBOX_YESNO
# 240 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_10
	goto Route6_NPC4_4

Route6_NPC4_8:
# 256 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_5, MSGBOX_YESNO
# 257 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_12
# 268 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_9
	goto Route6_NPC4_7

Route6_NPC4_10:
	checkitem ITEM_OLD_GATEAU
# 0 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route6_NPC4_15
# 250 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_4
	goto Route6_NPC4_4

Route6_NPC4_12:
# 259 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_6, MSGBOX_YESNO
# 260 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_18
# 265 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_8
	goto Route6_NPC4_7

Route6_NPC4_15:
# 243 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_2
# 244 "data//maps/Route6/scripts.pory"
	release
# 245 "data//maps/Route6/scripts.pory"
	removeitem ITEM_OLD_GATEAU
# 246 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_3
# 247 "data//maps/Route6/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 248 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 2
	goto Route6_NPC4_4

Route6_NPC4_18:
# 262 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_7
# 263 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 1
	goto Route6_NPC4_7


Route6_Gabrielle_SaveGameTrigger::
# 295 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_SaveGameTrigger_2
# 297 "data//maps/Route6/scripts.pory"
	special SaveGame
# 298 "data//maps/Route6/scripts.pory"
	waitstate
# 299 "data//maps/Route6/scripts.pory"
	release
# 301 "data//maps/Route6/scripts.pory"
	setvar VAR_TEMP_C, 1
	end

Route6_Gabrielle_SaveGameTrigger_2:
	end


Route6_Gabrielle_Trigger0::
# 308 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger0_2
# 309 "data//maps/Route6/scripts.pory"
	lockall
# 310 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger0_Movement_0
# 311 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 312 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Main
	return

Route6_Gabrielle_Trigger0_2:
	end


Route6_Gabrielle_Trigger1::
# 315 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger1_2
# 316 "data//maps/Route6/scripts.pory"
	lockall
# 317 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger1_Movement_0
# 318 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 319 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Main
	return

Route6_Gabrielle_Trigger1_2:
	end


Route6_Gabrielle_Main::
# 327 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_0
# 328 "data//maps/Route6/scripts.pory"
	delay 24
# 329 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 330 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_1
# 331 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 332 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_3
# 333 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 334 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_4
# 335 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 336 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_5
# 337 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 338 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_6
# 339 "data//maps/Route6/scripts.pory"
	release
# 342 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_1
# 343 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 344 "data//maps/Route6/scripts.pory"
	delay 24
# 345 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_2
# 346 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 347 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_3
# 348 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_3
# 350 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 351 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_7
# 352 "data//maps/Route6/scripts.pory"
	release
# 353 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_4
# 354 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_4
# 355 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 356 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_8
# 357 "data//maps/Route6/scripts.pory"
	release
# 359 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_5
# 360 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_5
# 361 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_6
# 362 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Main_Movement_7
# 363 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 365 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_ChooseDoubleBattleParty::
# 370 "data//maps/Route6/scripts.pory"
	special SavePlayerParty
# 371 "data//maps/Route6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 372 "data//maps/Route6/scripts.pory"
	special ChooseHalfPartyForBattle
# 373 "data//maps/Route6/scripts.pory"
	waitstate
# 374 "data//maps/Route6/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route6_Gabrielle_DoBattle
# 375 "data//maps/Route6/scripts.pory"
	special LoadPlayerParty
# 376 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_HurryUp
	return


Route6_Gabrielle_HurryUp::
# 381 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 382 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_HurryUp_Text_0
# 383 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_DoBattle::
# 387 "data//maps/Route6/scripts.pory"
	multi_2_vs_2 TRAINER_ROUTE6_GRUNT1, Route6_Gabrielle_DoBattle_Text_0, TRAINER_ROUTE6_GRUNT2, Route6_Gabrielle_DoBattle_Text_1, PARTNER_ROUTE6_GAB
# 388 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Gabrielle_DoBattle_2
Route6_Gabrielle_DoBattle_1:
# 391 "data//maps/Route6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 392 "data//maps/Route6/scripts.pory"
	special SetCB2WhiteOut
# 393 "data//maps/Route6/scripts.pory"
	waitstate
	return

Route6_Gabrielle_DoBattle_2:
# 389 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Victory
	goto Route6_Gabrielle_DoBattle_1


Route6_Gabrielle_Victory::
# 399 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 400 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_0
# 401 "data//maps/Route6/scripts.pory"
	release
# 403 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Victory_Movement_0
# 404 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_1
# 405 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 407 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT1
# 408 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT2
# 410 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_3
# 411 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Venusaur_Movement_1
# 413 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 414 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_1
# 415 "data//maps/Route6/scripts.pory"
	release
# 416 "data//maps/Route6/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 418 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 419 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_2
# 420 "data//maps/Route6/scripts.pory"
	release
# 421 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Victory_Movement_2
# 422 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 423 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GAB
# 424 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_GABRIELLE_BULLY
# 426 "data//maps/Route6/scripts.pory"
	releaseall
	return


# 67 "data//maps/Route6/scripts.pory"
Route6_Venusaur_Movement_0:
# 67 "data//maps/Route6/scripts.pory"
	emote_question_mark
	step_end

# 85 "data//maps/Route6/scripts.pory"
Route6_Venusaur_Movement_1:
# 85 "data//maps/Route6/scripts.pory"
	face_up
	step_end

# 310 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger0_Movement_0:
# 310 "data//maps/Route6/scripts.pory"
	walk_up
# 310 "data//maps/Route6/scripts.pory"
	walk_right
	step_end

# 317 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger1_Movement_0:
# 317 "data//maps/Route6/scripts.pory"
	walk_up
# 317 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 327 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_0:
# 327 "data//maps/Route6/scripts.pory"
	jump_in_place_right
	step_end

# 342 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_1:
# 342 "data//maps/Route6/scripts.pory"
	emote_exclamation_mark
	step_end

# 345 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_2:
# 345 "data//maps/Route6/scripts.pory"
	walk_down
# 345 "data//maps/Route6/scripts.pory"
	walk_down
# 345 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 347 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_3:
# 347 "data//maps/Route6/scripts.pory"
	face_down
	step_end

# 353 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_4:
# 353 "data//maps/Route6/scripts.pory"
	jump_in_place_down
	step_end

# 359 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_5:
# 359 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 361 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_6:
# 361 "data//maps/Route6/scripts.pory"
	walk_right
# 361 "data//maps/Route6/scripts.pory"
	walk_up
# 361 "data//maps/Route6/scripts.pory"
	walk_up
# 361 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 362 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_7:
# 362 "data//maps/Route6/scripts.pory"
	walk_right
# 362 "data//maps/Route6/scripts.pory"
	walk_right
# 362 "data//maps/Route6/scripts.pory"
	walk_up
# 362 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 403 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_0:
# 403 "data//maps/Route6/scripts.pory"
	walk_down
# 403 "data//maps/Route6/scripts.pory"
	walk_down
# 403 "data//maps/Route6/scripts.pory"
	walk_left
# 403 "data//maps/Route6/scripts.pory"
	walk_left
# 403 "data//maps/Route6/scripts.pory"
	walk_left
# 403 "data//maps/Route6/scripts.pory"
	walk_left
# 403 "data//maps/Route6/scripts.pory"
	walk_up
# 403 "data//maps/Route6/scripts.pory"
	walk_up
# 403 "data//maps/Route6/scripts.pory"
	walk_left
# 403 "data//maps/Route6/scripts.pory"
	walk_left
# 403 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 404 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_1:
# 404 "data//maps/Route6/scripts.pory"
	walk_down
# 404 "data//maps/Route6/scripts.pory"
	walk_left
# 404 "data//maps/Route6/scripts.pory"
	walk_left
# 404 "data//maps/Route6/scripts.pory"
	walk_left
# 404 "data//maps/Route6/scripts.pory"
	walk_left
# 404 "data//maps/Route6/scripts.pory"
	walk_up
# 404 "data//maps/Route6/scripts.pory"
	walk_up
# 404 "data//maps/Route6/scripts.pory"
	walk_left
# 404 "data//maps/Route6/scripts.pory"
	walk_left
# 404 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 421 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_2:
# 421 "data//maps/Route6/scripts.pory"
	walk_left
# 421 "data//maps/Route6/scripts.pory"
	walk_down
# 421 "data//maps/Route6/scripts.pory"
	walk_down
# 421 "data//maps/Route6/scripts.pory"
	walk_left
# 421 "data//maps/Route6/scripts.pory"
	walk_left
# 421 "data//maps/Route6/scripts.pory"
	walk_left
# 421 "data//maps/Route6/scripts.pory"
	walk_left
# 421 "data//maps/Route6/scripts.pory"
	walk_up
# 421 "data//maps/Route6/scripts.pory"
	walk_up
# 421 "data//maps/Route6/scripts.pory"
	walk_left
# 421 "data//maps/Route6/scripts.pory"
	walk_left
# 421 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

Route6_Nurse_Demo_Text_0:
# 21 "data//maps/Route6/scripts.pory"
	.string "This area is closed for the demo.$"

Route6_EventScript_Nurse_Text_0:
# 36 "data//maps/Route6/scripts.pory"
	.string "Eek! The bugs! The humidity! I can't\n"
	.string "wait to get back to Pelluca City. These\l"
	.string "Heal Pass assignments are the worst!\p"
	.string "If you have a Heal Pass, Chansey can\n"
	.string "heal your Pokémon meanwhile.$"

Route6_Venusaur_Text_0:
# 50 "data//maps/Route6/scripts.pory"
	.string "It's asleep...$"

Route6_Venusaur_Text_1:
# 58 "data//maps/Route6/scripts.pory"
	.string "It's asleep...use Poké Flute?$"

Route6_Venusaur_Text_2:
# 63 "data//maps/Route6/scripts.pory"
	.string "{PLAYER} played the Poke Flute.$"

Route6_Venusaur_Text_3:
# 65 "data//maps/Route6/scripts.pory"
	.string "...$"

Route6_Venusaur_Text_4:
# 71 "data//maps/Route6/scripts.pory"
	.string "The Venusaur wakes up...it's groggy...$"

Route6_Venusaur_Text_5:
# 86 "data//maps/Route6/scripts.pory"
	.string "The Venusaur grunts and falls back\n"
	.string "asleep. It needs its beauty sleep!$"

Route6_Trainer_A_Text_0:
# 99 "data//maps/Route6/scripts.pory"
	.string "But until we find that rare Pokémon,\n"
	.string "we'll train with you!$"

Route6_Trainer_A_Text_1:
# 99 "data//maps/Route6/scripts.pory"
	.string "Good training!$"

Route6_Trainer_A_Text_2:
# 100 "data//maps/Route6/scripts.pory"
	.string "The Pokémon we're tracking looks like a\n"
	.string "giant yellow cat! Ever seen a Pokémon\l"
	.string "like that?$"

Route6_Trainer_B_Text_0:
# 106 "data//maps/Route6/scripts.pory"
	.string "I was in Silversun City to catch a\n"
	.string "Qwilfish. Now I can join the Qwilsquad!\p"
	.string "What - never heard of 'em? Come to\n"
	.string "Pelluca City and you'll find out!$"

Route6_Trainer_B_Text_1:
# 106 "data//maps/Route6/scripts.pory"
	.string "My Qwilfish lost!$"

Route6_Trainer_B_Text_2:
# 107 "data//maps/Route6/scripts.pory"
	.string "The Qwilsquad are the strongest!$"

Route6_Trainer_C1_Text_0:
# 113 "data//maps/Route6/scripts.pory"
	.string "We're from the Pokémon Ranger\n"
	.string "Institute. We're here to track down a\l"
	.string "rare Pokémon!$"

Route6_Trainer_C1_Text_1:
# 113 "data//maps/Route6/scripts.pory"
	.string "You're so strong!$"

Route6_Trainer_C1_Text_2:
# 114 "data//maps/Route6/scripts.pory"
	.string "The Director of the Pokémon Ranger\n"
	.string "Institute sent us to track the rare\l"
	.string "Pokémon.$"

Route6_Trainer_C2_Text_0:
# 120 "data//maps/Route6/scripts.pory"
	.string "We're from the Ranger Institute. We're\n"
	.string "on assignment to survey new Pokémon.\l"
	.string "Have you got any?$"

Route6_Trainer_C2_Text_1:
# 120 "data//maps/Route6/scripts.pory"
	.string "You do have new Pokémon!$"

Route6_Trainer_C2_Text_2:
# 121 "data//maps/Route6/scripts.pory"
	.string "The Ranger Institute gives us newbies\n"
	.string "such hard assignments!$"

Route6_Trainer_D_Text_0:
# 127 "data//maps/Route6/scripts.pory"
	.string "The secret to catching strong Water\n"
	.string "Pokémon? Patience and a Trolling Rod.\p"
	.string "Too bad you don't have one!$"

Route6_Trainer_D_Text_1:
# 127 "data//maps/Route6/scripts.pory"
	.string "You beat me without a rod!$"

Route6_Trainer_D_Text_2:
# 128 "data//maps/Route6/scripts.pory"
	.string "I wonder what Pokémon I can catch here\n"
	.string "with a Casting Rod instead...$"

Route6_Trainer_E_Text_0:
# 134 "data//maps/Route6/scripts.pory"
	.string "I'm aiming to be the Pokémon Champion,\n"
	.string "so I've come here to catch rare\l"
	.string "Pokémon. Let me test them on you!$"

Route6_Trainer_E_Text_1:
# 134 "data//maps/Route6/scripts.pory"
	.string "No - my rare Pokémon!$"

Route6_Trainer_E_Text_2:
# 135 "data//maps/Route6/scripts.pory"
	.string "Catching good Pokémon isn't enough. I\n"
	.string "need to train rigorously too.$"

Route6_Trainer_F_Text_0:
# 141 "data//maps/Route6/scripts.pory"
	.string "My Croagunk and I love to train here\n"
	.string "because it makes us tough!$"

Route6_Trainer_F_Text_1:
# 141 "data//maps/Route6/scripts.pory"
	.string "We're not tough eonugh!$"

Route6_Trainer_F_Text_2:
# 142 "data//maps/Route6/scripts.pory"
	.string "Wading around in the marshes here works\n"
	.string "your core!$"

Route6_Trainer_G_Text_0:
# 148 "data//maps/Route6/scripts.pory"
	.string "Get ready, because I'm not a regular\n"
	.string "Pokémon Breeder. I'm going to be the\l"
	.string "first Pokémon Breeder Champion!$"

Route6_Trainer_G_Text_1:
# 148 "data//maps/Route6/scripts.pory"
	.string "Guess I was more bark than bite!$"

Route6_Trainer_G_Text_2:
# 149 "data//maps/Route6/scripts.pory"
	.string "Dog Pokémon are rare in Cormoria!\n"
	.string "Someone in Pelluca City traded me my\l"
	.string "Houndoor.$"

Route6_Trainer_H_Text_0:
# 155 "data//maps/Route6/scripts.pory"
	.string "This weather is prime for my BUG-type\n"
	.string "Pokémon! You won't be able to handle it!$"

Route6_Trainer_H_Text_1:
# 155 "data//maps/Route6/scripts.pory"
	.string "The weather is fickle!$"

Route6_Trainer_H_Text_2:
# 156 "data//maps/Route6/scripts.pory"
	.string "Although bugs thrive in marshes, there\n"
	.string "aren't many BUG-type Pokémon around\l"
	.string "here.$"

Route6_Trainer_I_Text_0:
# 162 "data//maps/Route6/scripts.pory"
	.string "I heard there was a rare DRAGON-type\n"
	.string "Pokémon here in Route 6, but I can't\l"
	.string "find any on land!$"

Route6_Trainer_I_Text_1:
# 162 "data//maps/Route6/scripts.pory"
	.string "Why did I find you instead?$"

Route6_Trainer_I_Text_2:
# 163 "data//maps/Route6/scripts.pory"
	.string "If its not on land, then maybe I need to\n"
	.string "try fishing...$"

Route6_Trainer_J_Text_0:
# 169 "data//maps/Route6/scripts.pory"
	.string "Hold it right there! You think you can\n"
	.string "beat me when I've already got four gym\l"
	.string "badges?$"

Route6_Trainer_J_Text_1:
# 169 "data//maps/Route6/scripts.pory"
	.string "Argh! I need another badge!$"

Route6_Trainer_J_Text_2:
# 170 "data//maps/Route6/scripts.pory"
	.string "Yup! That's right! I'm on my way to\n"
	.string "become the Pokémon Champion!$"

Route6_Trainer_K_Text_0:
# 176 "data//maps/Route6/scripts.pory"
	.string "Past Pelluca City is the Mirroh Base\n"
	.string "Camp and a Pokémon graveyard. I want to\l"
	.string "go there to commune with the afterlife!$"

Route6_Trainer_K_Text_1:
# 176 "data//maps/Route6/scripts.pory"
	.string "I don't want to commune with you!$"

Route6_Trainer_K_Text_2:
# 177 "data//maps/Route6/scripts.pory"
	.string "If we remember our Pokémon after they\n"
	.string "go, are they truly gone?$"

Route6_NPC1_Text_0:
# 210 "data//maps/Route6/scripts.pory"
	.string "When I was young, there was no route\n"
	.string "through these marshes.\p"
	.string "Now Route 6 connects Silversun City to\n"
	.string "Pelluca City.$"

Route6_NPC2_Text_0:
# 218 "data//maps/Route6/scripts.pory"
	.string "I wonder what's over there...if I had the\n"
	.string "HM Surf, I could swim over!$"

Route6_NPC3_Text_0:
# 225 "data//maps/Route6/scripts.pory"
	.string "I want to go to the Pelluca Restaurant!\n"
	.string "The food is supposed to be delicious\l"
	.string "because the head chef travels all of\l"
	.string "Cormoria looking for rare ingredients.$"

Route6_NPC4_Text_0:
# 234 "data//maps/Route6/scripts.pory"
	.string "I've been too busy eating to cook! I\n"
	.string "guess you can switch the hobby all you\l"
	.string "want, but you have to work on yourself\l"
	.string "to see real change.$"

Route6_NPC4_Text_1:
# 238 "data//maps/Route6/scripts.pory"
	.string "Have you brought an Apple Pie?$"

Route6_NPC4_Text_2:
# 243 "data//maps/Route6/scripts.pory"
	.string "Yes, this looks amazing!\p"
	.string "...\p"
	.string "Interesting flavour. I think I can make\n"
	.string "it!$"

Route6_NPC4_Text_3:
# 246 "data//maps/Route6/scripts.pory"
	.string "I suppose I don't need this any more.\n"
	.string "Here, why don't you take it? You could\l"
	.string "start a new hobby too!$"

Route6_NPC4_Text_4:
# 250 "data//maps/Route6/scripts.pory"
	.string "No, it looks like you haven't. I'll be\n"
	.string "here when you get one.$"

Route6_NPC4_Text_5:
# 256 "data//maps/Route6/scripts.pory"
	.string "These waters are too strong to fish\n"
	.string "properly...why am I even fishing here?\l"
	.string "I'm so unfocused these days. Maybe I\l"
	.string "need a new hobby. I'd like to try\l"
	.string "cooking, but I might be no good. What do\l"
	.string "you think? Should I try cooking?$"

Route6_NPC4_Text_6:
# 259 "data//maps/Route6/scripts.pory"
	.string "You're right - unless I try, I'll never\n"
	.string "know! Say, can you help me out? I want\l"
	.string "to try making an Apple Pie. Can you\l"
	.string "bring me one?$"

Route6_NPC4_Text_7:
# 262 "data//maps/Route6/scripts.pory"
	.string "Thank you so much! I'll be waiting here\n"
	.string "for you.$"

Route6_NPC4_Text_8:
# 265 "data//maps/Route6/scripts.pory"
	.string "Ahh well, it's back to fishing then.$"

Route6_NPC4_Text_9:
# 268 "data//maps/Route6/scripts.pory"
	.string "Yeah...I suppose I'd be no good. Fishing\n"
	.string "is all I know.$"

Route6_Gabrielle_Main_Text_0:
# 329 "data//maps/Route6/scripts.pory"
	.string "Grunt$"

Route6_Gabrielle_Main_Text_1:
# 330 "data//maps/Route6/scripts.pory"
	.string "C'mon Gabrielle - you've got nowhere to\n"
	.string "run. Now give us your Pokémon!$"

Route6_Gabrielle_Main_Text_2:
# 331 "data//maps/Route6/scripts.pory"
	.string "Gabrielle$"

Route6_Gabrielle_Main_Text_3:
# 332 "data//maps/Route6/scripts.pory"
	.string "No! They're mine! Why should I give you\n"
	.string "losers anything?$"

Route6_Gabrielle_Main_Text_4:
# 334 "data//maps/Route6/scripts.pory"
	.string "They're property of Team Somber, and\n"
	.string "now that you're out, it's only fair that\l"
	.string "you return them.\p"
	.string "Hehe...we've always been eyeing your\n"
	.string "Zorua, you know? And now it's time to\l"
	.string "collect!$"

Route6_Gabrielle_Main_Text_5:
# 336 "data//maps/Route6/scripts.pory"
	.string "That's not how it works!$"

Route6_Gabrielle_Main_Text_6:
# 338 "data//maps/Route6/scripts.pory"
	.string "What are you gonna do? Complain to the\n"
	.string "boss? HAHA!$"

Route6_Gabrielle_Main_Text_7:
# 351 "data//maps/Route6/scripts.pory"
	.string "{PLAYER}, it's you! These grunts are\n"
	.string "trying to take my Pokémon off me - you\l"
	.string "have to help!$"

Route6_Gabrielle_Main_Text_8:
# 356 "data//maps/Route6/scripts.pory"
	.string "Have you no shame Gabrielle? The\n"
	.string "trainer who got you kicked out is now\l"
	.string "helping you?\p"
	.string "Fine by us! Imagine what the boss'll tell\n"
	.string "us when we take your Pokémon AND beat\l"
	.string "the trainer that's stopped our plans\l"
	.string "twice!$"

Route6_Gabrielle_HurryUp_Text_0:
# 382 "data//maps/Route6/scripts.pory"
	.string "What are you doing? They're about to\n"
	.string "attack!$"

Route6_Gabrielle_DoBattle_Text_0:
# 387 "data//maps/Route6/scripts.pory"
	.string "Stupid Zorua!$"

Route6_Gabrielle_DoBattle_Text_1:
# 387 "data//maps/Route6/scripts.pory"
	.string "I need better Pokémon!$"

Route6_Gabrielle_Victory_Text_0:
# 400 "data//maps/Route6/scripts.pory"
	.string "You got lucky that {PLAYER} was\n"
	.string "around, Gabrielle! Next time we'll get\l"
	.string "your Zorua for sure!$"

Route6_Gabrielle_Victory_Text_1:
# 414 "data//maps/Route6/scripts.pory"
	.string "Thank you {PLAYER}. You saved me\n"
	.string "there.\p"
	.string "Let me heal your Pokémon.$"

Route6_Gabrielle_Victory_Text_2:
# 419 "data//maps/Route6/scripts.pory"
	.string "I live in Pelluca City, just past the\n"
	.string "Hoya River. I was on my way home when\l"
	.string "those grunts ambushed me...\p"
	.string "It's not fair! I've already been kicked\n"
	.string "out of Team Somber.\p"
	.string "I wish they'd just leave me alone!\p"
	.string "I'm going back home now.\n"
	.string "See you around.$"
