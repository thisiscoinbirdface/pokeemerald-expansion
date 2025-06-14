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
# 256 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 0
	goto_if_eq Route6_NPC4_8
Route6_NPC4_7:
# 275 "data//maps/Route6/scripts.pory"
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
# 257 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_5, MSGBOX_YESNO
# 258 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_12
# 270 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_9
	goto Route6_NPC4_7

Route6_NPC4_10:
	checkitem ITEM_OLD_GATEAU
# 0 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route6_NPC4_15
# 251 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_4
	goto Route6_NPC4_4

Route6_NPC4_12:
# 260 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_6, MSGBOX_YESNO
# 261 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_18
# 267 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_8
	goto Route6_NPC4_7

Route6_NPC4_15:
# 243 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_2
# 244 "data//maps/Route6/scripts.pory"
	release
# 245 "data//maps/Route6/scripts.pory"
	completequest QUEST_ROUTE6_FISHERMAN
# 246 "data//maps/Route6/scripts.pory"
	removeitem ITEM_OLD_GATEAU
# 247 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_3
# 248 "data//maps/Route6/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 249 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 2
	goto Route6_NPC4_4

Route6_NPC4_18:
# 263 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_7
# 264 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 1
# 265 "data//maps/Route6/scripts.pory"
	startquest QUEST_ROUTE6_FISHERMAN
	goto Route6_NPC4_7


Route6_Gabrielle_SaveGameTrigger::
# 297 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_SaveGameTrigger_2
# 299 "data//maps/Route6/scripts.pory"
	setvar VAR_TEMP_C, 1
# 301 "data//maps/Route6/scripts.pory"
	call Common_EventScript_SaveGameBeforeSomber
# 302 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_Gabrielle_SaveGameTrigger_2:
	end


Route6_Gabrielle_Trigger0::
# 309 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger0_2
# 310 "data//maps/Route6/scripts.pory"
	lockall
# 311 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger0_Movement_0
# 312 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 313 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Main
	return

Route6_Gabrielle_Trigger0_2:
	end


Route6_Gabrielle_Trigger1::
# 316 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger1_2
# 317 "data//maps/Route6/scripts.pory"
	lockall
# 318 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger1_Movement_0
# 319 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 320 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Main
	return

Route6_Gabrielle_Trigger1_2:
	end


Route6_Gabrielle_Main::
# 328 "data//maps/Route6/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 329 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_0
# 330 "data//maps/Route6/scripts.pory"
	delay 24
# 331 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 332 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_1
# 333 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 334 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_3
# 335 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 336 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_4
# 337 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 338 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_5
# 339 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 340 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_6
# 341 "data//maps/Route6/scripts.pory"
	release
# 344 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_1
# 345 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 346 "data//maps/Route6/scripts.pory"
	delay 24
# 347 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_2
# 348 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 349 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_3
# 350 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_3
# 352 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 353 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_7
# 354 "data//maps/Route6/scripts.pory"
	release
# 355 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_4
# 356 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_4
# 357 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 358 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_8
# 359 "data//maps/Route6/scripts.pory"
	release
# 361 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_5
# 362 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_5
# 363 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_6
# 364 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Main_Movement_7
# 365 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 367 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_ChooseDoubleBattleParty::
# 372 "data//maps/Route6/scripts.pory"
	special SavePlayerParty
# 373 "data//maps/Route6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 374 "data//maps/Route6/scripts.pory"
	special ChooseHalfPartyForBattle
# 375 "data//maps/Route6/scripts.pory"
	waitstate
# 376 "data//maps/Route6/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route6_Gabrielle_DoBattle
# 377 "data//maps/Route6/scripts.pory"
	special LoadPlayerParty
# 378 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_HurryUp
	return


Route6_Gabrielle_HurryUp::
# 383 "data//maps/Route6/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 384 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 385 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_HurryUp_Text_0
# 386 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_DoBattle::
# 390 "data//maps/Route6/scripts.pory"
	multi_2_vs_2 TRAINER_ROUTE6_GRUNT1, Route6_Gabrielle_DoBattle_Text_0, TRAINER_ROUTE6_GRUNT2, Route6_Gabrielle_DoBattle_Text_1, PARTNER_ROUTE6_GAB
# 391 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Gabrielle_DoBattle_2
Route6_Gabrielle_DoBattle_1:
# 394 "data//maps/Route6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 395 "data//maps/Route6/scripts.pory"
	special SetCB2WhiteOut
# 396 "data//maps/Route6/scripts.pory"
	waitstate
	return

Route6_Gabrielle_DoBattle_2:
# 392 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Victory
	goto Route6_Gabrielle_DoBattle_1


Route6_Gabrielle_Victory::
# 400 "data//maps/Route6/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 403 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 404 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_0
# 405 "data//maps/Route6/scripts.pory"
	release
# 407 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Victory_Movement_0
# 408 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_1
# 409 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 411 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT1
# 412 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT2
# 414 "data//maps/Route6/scripts.pory"
	fadedefaultbgm
# 416 "data//maps/Route6/scripts.pory"
	delay 16
# 417 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_3
# 418 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Venusaur_Movement_1
# 419 "data//maps/Route6/scripts.pory"
	delay 16
# 420 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 421 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_1
# 422 "data//maps/Route6/scripts.pory"
	release
# 423 "data//maps/Route6/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 425 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 426 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_2
# 427 "data//maps/Route6/scripts.pory"
	release
# 428 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Victory_Movement_2
# 429 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 430 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GAB
# 431 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_GABRIELLE_BULLY
# 433 "data//maps/Route6/scripts.pory"
	releaseall
	return


Route6_Tutor_Weather::
# 461 "data//maps/Route6/scripts.pory"
	lockall
# 462 "data//maps/Route6/scripts.pory"
	faceplayer
# 463 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_Weather_Text_0
# 464 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_Weather_Text_1, MSGBOX_YESNO
# 466 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route6_Tutor_Weather_2
# 472 "data//maps/Route6/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 474 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route6_Tutor_Weather_5
# 480 "data//maps/Route6/scripts.pory"
	message Route6_Tutor_Weather_Text_4
# 481 "data//maps/Route6/scripts.pory"
	waitmessage
# 482 "data//maps/Route6/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route6_Tutor_Weather_Text_5, Route6_Tutor_Weather_Text_6, Route6_Tutor_Weather_Text_7, Route6_Tutor_Weather_Text_8
# 485 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route6_Tutor_Weather_8
Route6_Tutor_Weather_7:
# 489 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Tutor_Weather_11
Route6_Tutor_Weather_10:
# 493 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route6_Tutor_Weather_14
Route6_Tutor_Weather_13:
# 497 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route6_Tutor_Weather_17
Route6_Tutor_Weather_16:
# 501 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_Weather_Text_2, MSGBOX_NPC
# 502 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_Tutor_Weather_2:
# 467 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_Weather_Text_2, MSGBOX_NPC
# 468 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_Tutor_Weather_5:
# 475 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_Weather_Text_3, MSGBOX_NPC
# 476 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_Tutor_Weather_8:
# 486 "data//maps/Route6/scripts.pory"
	setvar VAR_0x8005, MOVE_RAIN_DANCE
# 487 "data//maps/Route6/scripts.pory"
	goto Route6_Tutor_TeachMoveShard
	goto Route6_Tutor_Weather_7

Route6_Tutor_Weather_11:
# 490 "data//maps/Route6/scripts.pory"
	setvar VAR_0x8005, MOVE_SUNNY_DAY
# 491 "data//maps/Route6/scripts.pory"
	goto Route6_Tutor_TeachMoveShard
	goto Route6_Tutor_Weather_10

Route6_Tutor_Weather_14:
# 494 "data//maps/Route6/scripts.pory"
	setvar VAR_0x8005, MOVE_SANDSTORM
# 495 "data//maps/Route6/scripts.pory"
	goto Route6_Tutor_TeachMoveShard
	goto Route6_Tutor_Weather_13

Route6_Tutor_Weather_17:
# 498 "data//maps/Route6/scripts.pory"
	setvar VAR_0x8005, MOVE_SNOWSCAPE
# 499 "data//maps/Route6/scripts.pory"
	goto Route6_Tutor_TeachMoveShard
	goto Route6_Tutor_Weather_16


Route6_Tutor_Fangs::
# 507 "data//maps/Route6/scripts.pory"
	lockall
# 508 "data//maps/Route6/scripts.pory"
	faceplayer
# 510 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_TUTOR_FANGS, Route6_Tutor_Fangs_2
# 516 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_Fangs_Text_1
# 517 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_Fangs_Text_2, MSGBOX_POKENAV
# 518 "data//maps/Route6/scripts.pory"
	message Route6_Tutor_Weather_Text_4
# 519 "data//maps/Route6/scripts.pory"
	waitmessage
# 520 "data//maps/Route6/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route6_Tutor_Fangs_Text_3, Route6_Tutor_Fangs_Text_4, Route6_Tutor_Fangs_Text_5, Route6_Tutor_Fangs_Text_6, Route6_Tutor_Fangs_Text_7
# 523 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route6_Tutor_Fangs_5
Route6_Tutor_Fangs_4:
# 527 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Tutor_Fangs_8
Route6_Tutor_Fangs_7:
# 531 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route6_Tutor_Fangs_11
Route6_Tutor_Fangs_10:
# 535 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route6_Tutor_Fangs_14
Route6_Tutor_Fangs_13:
# 539 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_Weather_Text_2, MSGBOX_NPC
# 540 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_Tutor_Fangs_2:
# 511 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_Fangs_Text_0, MSGBOX_NPC
# 512 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_Tutor_Fangs_5:
# 524 "data//maps/Route6/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
# 525 "data//maps/Route6/scripts.pory"
	goto Route6_Tutor_TeachMove
	goto Route6_Tutor_Fangs_4

Route6_Tutor_Fangs_8:
# 528 "data//maps/Route6/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
# 529 "data//maps/Route6/scripts.pory"
	goto Route6_Tutor_TeachMove
	goto Route6_Tutor_Fangs_7

Route6_Tutor_Fangs_11:
# 532 "data//maps/Route6/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
# 533 "data//maps/Route6/scripts.pory"
	goto Route6_Tutor_TeachMove
	goto Route6_Tutor_Fangs_10

Route6_Tutor_Fangs_14:
# 536 "data//maps/Route6/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
# 537 "data//maps/Route6/scripts.pory"
	goto Route6_Tutor_TeachMove
	goto Route6_Tutor_Fangs_13


Route6_Tutor_TeachMove::
# 545 "data//maps/Route6/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 547 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route6_Tutor_TeachMove_2
# 550 "data//maps/Route6/scripts.pory"
	setflag FLAG_TUTOR_FANGS
# 551 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_TeachMove_Text_0, MSGBOX_NPC
Route6_Tutor_TeachMove_1:
# 554 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_Tutor_TeachMove_2:
# 548 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_Weather_Text_2, MSGBOX_NPC
	goto Route6_Tutor_TeachMove_1


Route6_Tutor_TeachMoveShard::
# 559 "data//maps/Route6/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 561 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route6_Tutor_TeachMoveShard_2
# 564 "data//maps/Route6/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 565 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_TeachMove_Text_0, MSGBOX_NPC
Route6_Tutor_TeachMoveShard_1:
# 568 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_Tutor_TeachMoveShard_2:
# 562 "data//maps/Route6/scripts.pory"
	msgbox Route6_Tutor_Weather_Text_2, MSGBOX_NPC
	goto Route6_Tutor_TeachMoveShard_1


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

# 311 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger0_Movement_0:
# 311 "data//maps/Route6/scripts.pory"
	walk_up
# 311 "data//maps/Route6/scripts.pory"
	walk_right
	step_end

# 318 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger1_Movement_0:
# 318 "data//maps/Route6/scripts.pory"
	walk_up
# 318 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 329 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_0:
# 329 "data//maps/Route6/scripts.pory"
	jump_in_place_right
	step_end

# 344 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_1:
# 344 "data//maps/Route6/scripts.pory"
	emote_exclamation_mark
	step_end

# 347 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_2:
# 347 "data//maps/Route6/scripts.pory"
	walk_down
# 347 "data//maps/Route6/scripts.pory"
	walk_down
# 347 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 349 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_3:
# 349 "data//maps/Route6/scripts.pory"
	face_down
	step_end

# 355 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_4:
# 355 "data//maps/Route6/scripts.pory"
	jump_in_place_down
	step_end

# 361 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_5:
# 361 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 363 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_6:
# 363 "data//maps/Route6/scripts.pory"
	walk_right
# 363 "data//maps/Route6/scripts.pory"
	walk_up
# 363 "data//maps/Route6/scripts.pory"
	walk_up
# 363 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 364 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_7:
# 364 "data//maps/Route6/scripts.pory"
	walk_right
# 364 "data//maps/Route6/scripts.pory"
	walk_right
# 364 "data//maps/Route6/scripts.pory"
	walk_up
# 364 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 407 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_0:
# 407 "data//maps/Route6/scripts.pory"
	walk_down
# 407 "data//maps/Route6/scripts.pory"
	walk_down
# 407 "data//maps/Route6/scripts.pory"
	walk_left
# 407 "data//maps/Route6/scripts.pory"
	walk_left
# 407 "data//maps/Route6/scripts.pory"
	walk_left
# 407 "data//maps/Route6/scripts.pory"
	walk_left
# 407 "data//maps/Route6/scripts.pory"
	walk_up
# 407 "data//maps/Route6/scripts.pory"
	walk_up
# 407 "data//maps/Route6/scripts.pory"
	walk_left
# 407 "data//maps/Route6/scripts.pory"
	walk_left
# 407 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 408 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_1:
# 408 "data//maps/Route6/scripts.pory"
	walk_down
# 408 "data//maps/Route6/scripts.pory"
	walk_left
# 408 "data//maps/Route6/scripts.pory"
	walk_left
# 408 "data//maps/Route6/scripts.pory"
	walk_left
# 408 "data//maps/Route6/scripts.pory"
	walk_left
# 408 "data//maps/Route6/scripts.pory"
	walk_up
# 408 "data//maps/Route6/scripts.pory"
	walk_up
# 408 "data//maps/Route6/scripts.pory"
	walk_left
# 408 "data//maps/Route6/scripts.pory"
	walk_left
# 408 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 428 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_2:
# 428 "data//maps/Route6/scripts.pory"
	walk_left
# 428 "data//maps/Route6/scripts.pory"
	walk_down
# 428 "data//maps/Route6/scripts.pory"
	walk_down
# 428 "data//maps/Route6/scripts.pory"
	walk_left
# 428 "data//maps/Route6/scripts.pory"
	walk_left
# 428 "data//maps/Route6/scripts.pory"
	walk_left
# 428 "data//maps/Route6/scripts.pory"
	walk_left
# 428 "data//maps/Route6/scripts.pory"
	walk_up
# 428 "data//maps/Route6/scripts.pory"
	walk_up
# 428 "data//maps/Route6/scripts.pory"
	walk_left
# 428 "data//maps/Route6/scripts.pory"
	walk_left
# 428 "data//maps/Route6/scripts.pory"
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
	.string "We're from the Ranger Institute.\n"
	.string "We're tracking down a rare Pokémon!$"

Route6_Trainer_A_Text_1:
# 99 "data//maps/Route6/scripts.pory"
	.string "You're so strong!$"

Route6_Trainer_A_Text_2:
# 100 "data//maps/Route6/scripts.pory"
	.string "Apparently the Pokémon we're tracking\n"
	.string "looks like a giant yellow cat!\p"
	.string "Ever seen a Pokémon like that?$"

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
	.string "But until we find that rare Pokémon,\n"
	.string "we'll train with you!$"

Route6_Trainer_C1_Text_1:
# 113 "data//maps/Route6/scripts.pory"
	.string "Good training!$"

Route6_Trainer_C1_Text_2:
# 114 "data//maps/Route6/scripts.pory"
	.string "The Director of the Ranger Institute\n"
	.string "sent us to track the rare Pokémon.$"

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
	.string "I wonder what Pokémon I can catch\n"
	.string "here with a Casting Rod instead...$"

Route6_Trainer_E_Text_0:
# 134 "data//maps/Route6/scripts.pory"
	.string "I'm aiming to be the Pokémon Champion,\n"
	.string "so I'm here to catch rare Pokémon.\l"
	.string "Let me test them out on you!$"

Route6_Trainer_E_Text_1:
# 134 "data//maps/Route6/scripts.pory"
	.string "No - my rare Pokémon!$"

Route6_Trainer_E_Text_2:
# 135 "data//maps/Route6/scripts.pory"
	.string "Catching good Pokémon isn't enough.\n"
	.string "I need to train rigorously too.$"

Route6_Trainer_F_Text_0:
# 141 "data//maps/Route6/scripts.pory"
	.string "My Croagunk and I love to train here\n"
	.string "because it makes us tough!$"

Route6_Trainer_F_Text_1:
# 141 "data//maps/Route6/scripts.pory"
	.string "We're not tough eonugh!$"

Route6_Trainer_F_Text_2:
# 142 "data//maps/Route6/scripts.pory"
	.string "Wading around in the marshes here\n"
	.string "really works your core!$"

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
	.string "I traded for my in Houndoor Pelluca\l"
	.string "City.$"

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
	.string "I heard about a rare DRAGON-type\n"
	.string "Pokémon here, but I can't find it!$"

Route6_Trainer_I_Text_1:
# 162 "data//maps/Route6/scripts.pory"
	.string "Why did I find you instead?$"

Route6_Trainer_I_Text_2:
# 163 "data//maps/Route6/scripts.pory"
	.string "If it's not on land, then perhaps\n"
	.string "I need to try fishing...$"

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
	.string "Now Route 6 connects Silversun City\n"
	.string "to Pelluca City.$"

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
# 247 "data//maps/Route6/scripts.pory"
	.string "I suppose I don't need this any more.\n"
	.string "Here, why don't you take it? You could\l"
	.string "start a new hobby too!$"

Route6_NPC4_Text_4:
# 251 "data//maps/Route6/scripts.pory"
	.string "No, it looks like you haven't. I'll be\n"
	.string "here when you get one.$"

Route6_NPC4_Text_5:
# 257 "data//maps/Route6/scripts.pory"
	.string "These waters are too strong to fish\n"
	.string "properly...why am I even fishing here?\l"
	.string "I'm so unfocused these days.\p"
	.string "Maybe I need a new hobby. I'd like to try\n"
	.string "cooking, but I might be no good.\p"
	.string "What do you say? Should I try cooking?$"

Route6_NPC4_Text_6:
# 260 "data//maps/Route6/scripts.pory"
	.string "Yeah unless I try, I'll never know!\n"
	.string "Say, can you help me out?\p"
	.string "I want to try making an Apple Pie.\n"
	.string "Can you bring me one?$"

Route6_NPC4_Text_7:
# 263 "data//maps/Route6/scripts.pory"
	.string "Thank you so much! I'll be waiting here.$"

Route6_NPC4_Text_8:
# 267 "data//maps/Route6/scripts.pory"
	.string "Ahh well, it's back to fishing then.$"

Route6_NPC4_Text_9:
# 270 "data//maps/Route6/scripts.pory"
	.string "Yeah...I suppose I'd be no good.\n"
	.string "Fishing is all I know.$"

Route6_Gabrielle_Main_Text_0:
# 331 "data//maps/Route6/scripts.pory"
	.string "Grunt$"

Route6_Gabrielle_Main_Text_1:
# 332 "data//maps/Route6/scripts.pory"
	.string "C'mon Gabrielle - you've got nowhere\n"
	.string "to run. Now give us your Pokémon!$"

Route6_Gabrielle_Main_Text_2:
# 333 "data//maps/Route6/scripts.pory"
	.string "Gabrielle$"

Route6_Gabrielle_Main_Text_3:
# 334 "data//maps/Route6/scripts.pory"
	.string "No! Zoroark and I are partners!\n"
	.string "Why should I give you losers anything?$"

Route6_Gabrielle_Main_Text_4:
# 336 "data//maps/Route6/scripts.pory"
	.string "They're property of Team Somber, and\n"
	.string "now that you're out, it's only fair that\l"
	.string "you return them.\p"
	.string "Hehe...we've always eyed your Zoroark,\n"
	.string "you know? And now it's time to collect!$"

Route6_Gabrielle_Main_Text_5:
# 338 "data//maps/Route6/scripts.pory"
	.string "That's not how it works!$"

Route6_Gabrielle_Main_Text_6:
# 340 "data//maps/Route6/scripts.pory"
	.string "What are you gonna do?\n"
	.string "Complain to the boss?\p"
	.string "Haha!$"

Route6_Gabrielle_Main_Text_7:
# 353 "data//maps/Route6/scripts.pory"
	.string "{PLAYER}, it's you! These grunts are\n"
	.string "trying to take my Pokémon off me!\l"
	.string "You have to help!$"

Route6_Gabrielle_Main_Text_8:
# 358 "data//maps/Route6/scripts.pory"
	.string "Have you no shame Gabrielle? The\n"
	.string "trainer who got you kicked out is\l"
	.string "now going to help you?\p"
	.string "Fine by us! Imagine what the boss'll say\n"
	.string "when we take Zoroark AND beat the\l"
	.string "trainer that's foiled our plans twice!$"

Route6_Gabrielle_HurryUp_Text_0:
# 385 "data//maps/Route6/scripts.pory"
	.string "What are you doing? They're about to\n"
	.string "attack!$"

Route6_Gabrielle_DoBattle_Text_0:
# 390 "data//maps/Route6/scripts.pory"
	.string "Stupid Zoroark!$"

Route6_Gabrielle_DoBattle_Text_1:
# 390 "data//maps/Route6/scripts.pory"
	.string "I need better Pokémon!$"

Route6_Gabrielle_Victory_Text_0:
# 404 "data//maps/Route6/scripts.pory"
	.string "You just got lucky that {PLAYER} was\n"
	.string "around, Gabrielle! Next time we'll get\l"
	.string "your Zoroark for sure!$"

Route6_Gabrielle_Victory_Text_1:
# 421 "data//maps/Route6/scripts.pory"
	.string "Thank you {PLAYER}. You saved both\n"
	.string "Zoroark and me there!\p"
	.string "Let me heal your Pokémon.$"

Route6_Gabrielle_Victory_Text_2:
# 426 "data//maps/Route6/scripts.pory"
	.string "I live in Pelluca City, just past the\n"
	.string "Hoya River. I was on my way home when\l"
	.string "those grunts ambushed me...\p"
	.string "It's not fair! I've already been kicked\n"
	.string "out of Team Somber.\p"
	.string "I wish they'd just leave me alone!\p"
	.string "I'm going back home now.\n"
	.string "See you around.$"

Route6_Tutor_Weather_Text_0:
# 463 "data//maps/Route6/scripts.pory"
	.string "I'm part of the Geological Research\n"
	.string "Squad. Our scientists track weather\l"
	.string "patterns while I collect field data! I\l"
	.string "can teach your Pokémon to change the\l"
	.string "weather in battle.$"

Route6_Tutor_Weather_Text_1:
# 464 "data//maps/Route6/scripts.pory"
	.string "In exchange for one Green Shard, should\n"
	.string "I teach a weather move?$"

Route6_Tutor_Weather_Text_2:
# 467 "data//maps/Route6/scripts.pory"
	.string "Come again whenever you like!$"

Route6_Tutor_Weather_Text_3:
# 475 "data//maps/Route6/scripts.pory"
	.string "You don't have a Green Shard.\n"
	.string "Come again when you have one!$"

Route6_Tutor_Weather_Text_4:
# 480 "data//maps/Route6/scripts.pory"
	.string "Which move should I teach?$"

Route6_Tutor_Weather_Text_5:
# 483 "data//maps/Route6/scripts.pory"
	.string "Rain Dance$"

Route6_Tutor_Weather_Text_6:
# 483 "data//maps/Route6/scripts.pory"
	.string "Sunny Day$"

Route6_Tutor_Weather_Text_7:
# 483 "data//maps/Route6/scripts.pory"
	.string "Sandstorm$"

Route6_Tutor_Weather_Text_8:
# 483 "data//maps/Route6/scripts.pory"
	.string "Snowscape$"

Route6_Tutor_Fangs_Text_0:
# 511 "data//maps/Route6/scripts.pory"
	.string "Bare your teeth, Ranger!\p"
	.string "...\p"
	.string "Maybe I should have taught you a\n"
	.string "dentist's phone number instead...$"

Route6_Tutor_Fangs_Text_1:
# 516 "data//maps/Route6/scripts.pory"
	.string "I train new Candidates in raising\n"
	.string "strong partners. I can teach your\l"
	.string "Pokémon some new moves if you like! But\l"
	.string "I can only teach one move per Ranger.$"

Route6_Tutor_Fangs_Text_2:
# 517 "data//maps/Route6/scripts.pory"
	.string "This tutor will only teach a\p"
	.string "move once, so choose carefully!$"

Route6_Tutor_Fangs_Text_3:
# 521 "data//maps/Route6/scripts.pory"
	.string "Fire Fang$"

Route6_Tutor_Fangs_Text_4:
# 521 "data//maps/Route6/scripts.pory"
	.string "Ice Fang$"

Route6_Tutor_Fangs_Text_5:
# 521 "data//maps/Route6/scripts.pory"
	.string "Thunder Fang$"

Route6_Tutor_Fangs_Text_6:
# 521 "data//maps/Route6/scripts.pory"
	.string "Psychic Fangs$"

Route6_Tutor_Fangs_Text_7:
# 521 "data//maps/Route6/scripts.pory"
	.string "Cancel$"

Route6_Tutor_TeachMove_Text_0:
# 551 "data//maps/Route6/scripts.pory"
	.string "Your Pokémon look strong now!\n"
	.string "Good luck, Ranger!$"
