# 1 "data//maps/Route6/scripts.pory"

# 2 "data//maps/Route6/scripts.pory"
    .set LOCALID_GAB, 29
# 3 "data//maps/Route6/scripts.pory"
    .set LOCALID_GRUNT1, 11
# 4 "data//maps/Route6/scripts.pory"
    .set LOCALID_GRUNT2, 10

Route6_MapScripts::
	.byte 0


Route6_Nurse_Demo::
# 18 "data//maps/Route6/scripts.pory"
	lockall
# 19 "data//maps/Route6/scripts.pory"
	faceplayer
# 20 "data//maps/Route6/scripts.pory"
	msgbox Route6_Nurse_Demo_Text_0
# 21 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_EventScript_Nurse::
# 33 "data//maps/Route6/scripts.pory"
	lockall
# 34 "data//maps/Route6/scripts.pory"
	faceplayer
# 35 "data//maps/Route6/scripts.pory"
	msgbox Route6_EventScript_Nurse_Text_0
# 36 "data//maps/Route6/scripts.pory"
	release
# 37 "data//maps/Route6/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 38 "data//maps/Route6/scripts.pory"
	release
	return


Route6_Venusaur::
# 44 "data//maps/Route6/scripts.pory"
	lockall
# 47 "data//maps/Route6/scripts.pory"
	msgbox Route6_Venusaur_Text_0
# 48 "data//maps/Route6/scripts.pory"
	releaseall
# 49 "data//maps/Route6/scripts.pory"
	end
# 54 "data//maps/Route6/scripts.pory"
	msgbox Route6_Venusaur_Text_1, MSGBOX_YESNO
# 56 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Venusaur_2
# 92 "data//maps/Route6/scripts.pory"
	release
Route6_Venusaur_1:
# 94 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_Venusaur_2:
# 58 "data//maps/Route6/scripts.pory"
	msgbox Route6_Venusaur_Text_2
# 59 "data//maps/Route6/scripts.pory"
	release
# 60 "data//maps/Route6/scripts.pory"
	applymovement 18, Route6_Venusaur_Movement_0
# 61 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 62 "data//maps/Route6/scripts.pory"
	delay 30
# 63 "data//maps/Route6/scripts.pory"
	applymovement 18, Route6_Venusaur_Movement_1
# 64 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 65 "data//maps/Route6/scripts.pory"
	delay 60
# 66 "data//maps/Route6/scripts.pory"
	applymovement 18, Route6_Venusaur_Movement_2
# 67 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 68 "data//maps/Route6/scripts.pory"
	delay 60
# 69 "data//maps/Route6/scripts.pory"
	applymovement 18, Route6_Venusaur_Movement_3
# 70 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 71 "data//maps/Route6/scripts.pory"
	delay 16
# 72 "data//maps/Route6/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 73 "data//maps/Route6/scripts.pory"
	msgbox Route6_Venusaur_Text_3
# 74 "data//maps/Route6/scripts.pory"
	setwildbattle SPECIES_VENUSAUR, 48
# 75 "data//maps/Route6/scripts.pory"
	dowildbattle
# 78 "data//maps/Route6/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 79 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route6_Venusaur_6
Route6_Venusaur_5:
# 83 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route6_Venusaur_9
Route6_Venusaur_8:
# 87 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route6_Venusaur_11
	goto Route6_Venusaur_1

Route6_Venusaur_6:
# 80 "data//maps/Route6/scripts.pory"
	removeobject 18
# 81 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_VENUSAUR
	goto Route6_Venusaur_5

Route6_Venusaur_9:
# 84 "data//maps/Route6/scripts.pory"
	removeobject 18
# 85 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_VENUSAUR
	goto Route6_Venusaur_8

Route6_Venusaur_11:
# 88 "data//maps/Route6/scripts.pory"
	msgbox Route6_Venusaur_Text_4
# 89 "data//maps/Route6/scripts.pory"
	release
	goto Route6_Venusaur_1


Route6_Trainer_A::
# 101 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_A, Route6_Trainer_A_Text_0, Route6_Trainer_A_Text_1
# 102 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_A_Text_2
# 103 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_B::
# 108 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_B, Route6_Trainer_B_Text_0, Route6_Trainer_B_Text_1
# 109 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_B_Text_2
# 110 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C1::
# 115 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C1_Text_0, Route6_Trainer_C1_Text_1
# 116 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C1_Text_2
# 117 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C2::
# 122 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C2_Text_0, Route6_Trainer_C1_Text_1
# 123 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C2_Text_1
# 124 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_D::
# 129 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_D, Route6_Trainer_D_Text_0, Route6_Trainer_D_Text_1
# 130 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_D_Text_2
# 131 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_E::
# 136 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_E, Route6_Trainer_E_Text_0, Route6_Trainer_E_Text_1
# 137 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_E_Text_2
# 138 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_F::
# 143 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_F, Route6_Trainer_F_Text_0, Route6_Trainer_F_Text_1
# 144 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_F_Text_2
# 145 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_G::
# 150 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_G, Route6_Trainer_G_Text_0, Route6_Trainer_G_Text_1
# 151 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_G_Text_2
# 152 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_H::
# 157 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_H, Route6_Trainer_H_Text_0, Route6_Trainer_H_Text_1
# 158 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_H_Text_2
# 159 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_I::
# 164 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_I, Route6_Trainer_I_Text_0, Route6_Trainer_I_Text_1
# 165 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_I_Text_2
# 166 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_J::
# 171 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_J, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 172 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 173 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_K::
# 178 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_K, Route6_Trainer_K_Text_0, Route6_Trainer_K_Text_1
# 179 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_K_Text_2
# 180 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC1::
# 210 "data//maps/Route6/scripts.pory"
	lockall
# 211 "data//maps/Route6/scripts.pory"
	faceplayer
# 212 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC1_Text_0
# 213 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC2::
# 218 "data//maps/Route6/scripts.pory"
	lockall
# 219 "data//maps/Route6/scripts.pory"
	faceplayer
# 220 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC2_Text_0
# 221 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC3::
# 225 "data//maps/Route6/scripts.pory"
	lockall
# 226 "data//maps/Route6/scripts.pory"
	faceplayer
# 227 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC3_Text_0
# 228 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC4::
# 232 "data//maps/Route6/scripts.pory"
	lockall
# 233 "data//maps/Route6/scripts.pory"
	faceplayer
# 235 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 2
	goto_if_eq Route6_NPC4_2
Route6_NPC4_1:
# 239 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 1
	goto_if_eq Route6_NPC4_5
Route6_NPC4_4:
# 257 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 0
	goto_if_eq Route6_NPC4_8
Route6_NPC4_7:
# 275 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_NPC4_2:
# 236 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_0
	goto Route6_NPC4_1

Route6_NPC4_5:
# 240 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_1, MSGBOX_YESNO
# 242 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_10
	goto Route6_NPC4_4

Route6_NPC4_8:
# 258 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_5, MSGBOX_YESNO
# 259 "data//maps/Route6/scripts.pory"
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
# 252 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_4
	goto Route6_NPC4_4

Route6_NPC4_12:
# 261 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_6, MSGBOX_YESNO
# 262 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_18
# 267 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_8
	goto Route6_NPC4_7

Route6_NPC4_15:
# 245 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_2
# 246 "data//maps/Route6/scripts.pory"
	release
# 247 "data//maps/Route6/scripts.pory"
	removeitem ITEM_OLD_GATEAU
# 248 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_3
# 249 "data//maps/Route6/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 250 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 2
	goto Route6_NPC4_4

Route6_NPC4_18:
# 264 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_7
# 265 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 1
	goto Route6_NPC4_7


Route6_Gabrielle_SaveGameTrigger::
# 297 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_SaveGameTrigger_2
# 299 "data//maps/Route6/scripts.pory"
	special SaveGame
# 300 "data//maps/Route6/scripts.pory"
	waitstate
# 301 "data//maps/Route6/scripts.pory"
	release
# 303 "data//maps/Route6/scripts.pory"
	setvar VAR_TEMP_C, 1
	end

Route6_Gabrielle_SaveGameTrigger_2:
	end


Route6_Gabrielle_Trigger0::
# 310 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger0_2
# 311 "data//maps/Route6/scripts.pory"
	lockall
# 312 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger0_Movement_0
# 313 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 314 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Main
	return

Route6_Gabrielle_Trigger0_2:
	end


Route6_Gabrielle_Trigger1::
# 317 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger1_2
# 318 "data//maps/Route6/scripts.pory"
	lockall
# 319 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger1_Movement_0
# 320 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 321 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Main
	return

Route6_Gabrielle_Trigger1_2:
	end


Route6_Gabrielle_Main::
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
	applymovement LOCALID_GAB, Route6_Venusaur_Movement_0
# 345 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 346 "data//maps/Route6/scripts.pory"
	delay 24
# 347 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_1
# 348 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 349 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_2
# 350 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_2
# 352 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 353 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_7
# 354 "data//maps/Route6/scripts.pory"
	release
# 355 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_3
# 356 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_3
# 357 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 358 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_8
# 359 "data//maps/Route6/scripts.pory"
	release
# 361 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_4
# 362 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_4
# 363 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_5
# 364 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Main_Movement_6
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
	speakername Route6_Gabrielle_Main_Text_2
# 384 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_HurryUp_Text_0
# 385 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_DoBattle::
# 389 "data//maps/Route6/scripts.pory"
	multi_2_vs_2 TRAINER_ROUTE6_GRUNT1, Route6_Gabrielle_DoBattle_Text_0, TRAINER_ROUTE6_GRUNT2, Route6_Gabrielle_DoBattle_Text_1, PARTNER_ROUTE6_GAB
# 390 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Gabrielle_DoBattle_2
Route6_Gabrielle_DoBattle_1:
# 393 "data//maps/Route6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 394 "data//maps/Route6/scripts.pory"
	special SetCB2WhiteOut
# 395 "data//maps/Route6/scripts.pory"
	waitstate
	return

Route6_Gabrielle_DoBattle_2:
# 391 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Victory
	goto Route6_Gabrielle_DoBattle_1


Route6_Gabrielle_Victory::
# 401 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 402 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_0
# 403 "data//maps/Route6/scripts.pory"
	release
# 405 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Victory_Movement_0
# 406 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_1
# 407 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 409 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT1
# 410 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT2
# 412 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_2
# 413 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Victory_Movement_2
# 415 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 416 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_1
# 417 "data//maps/Route6/scripts.pory"
	release
# 418 "data//maps/Route6/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 420 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 421 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_2
# 422 "data//maps/Route6/scripts.pory"
	release
# 423 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Victory_Movement_3
# 424 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 425 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GAB
# 426 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_GABRIELLE_BULLY
# 428 "data//maps/Route6/scripts.pory"
	releaseall
	return


# 60 "data//maps/Route6/scripts.pory"
Route6_Venusaur_Movement_0:
# 60 "data//maps/Route6/scripts.pory"
	emote_exclamation_mark
	step_end

# 63 "data//maps/Route6/scripts.pory"
Route6_Venusaur_Movement_1:
# 63 "data//maps/Route6/scripts.pory"
	emote_question_mark
# 63 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 66 "data//maps/Route6/scripts.pory"
Route6_Venusaur_Movement_2:
# 66 "data//maps/Route6/scripts.pory"
	emote_question_mark
# 66 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 69 "data//maps/Route6/scripts.pory"
Route6_Venusaur_Movement_3:
# 69 "data//maps/Route6/scripts.pory"
	face_down
# 69 "data//maps/Route6/scripts.pory"
	emote_exclamation_mark
	step_end

# 312 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger0_Movement_0:
# 312 "data//maps/Route6/scripts.pory"
	walk_up
# 312 "data//maps/Route6/scripts.pory"
	walk_right
	step_end

# 319 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger1_Movement_0:
# 319 "data//maps/Route6/scripts.pory"
	walk_up
# 319 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 329 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_0:
# 329 "data//maps/Route6/scripts.pory"
	jump_in_place_right
	step_end

# 347 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_1:
# 347 "data//maps/Route6/scripts.pory"
	walk_down
# 347 "data//maps/Route6/scripts.pory"
	walk_down
# 347 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 349 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_2:
# 349 "data//maps/Route6/scripts.pory"
	face_down
	step_end

# 355 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_3:
# 355 "data//maps/Route6/scripts.pory"
	jump_in_place_down
	step_end

# 361 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_4:
# 361 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 363 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_5:
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
Route6_Gabrielle_Main_Movement_6:
# 364 "data//maps/Route6/scripts.pory"
	walk_right
# 364 "data//maps/Route6/scripts.pory"
	walk_right
# 364 "data//maps/Route6/scripts.pory"
	walk_up
# 364 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 405 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_0:
# 405 "data//maps/Route6/scripts.pory"
	walk_down
# 405 "data//maps/Route6/scripts.pory"
	walk_down
# 405 "data//maps/Route6/scripts.pory"
	walk_left
# 405 "data//maps/Route6/scripts.pory"
	walk_left
# 405 "data//maps/Route6/scripts.pory"
	walk_left
# 405 "data//maps/Route6/scripts.pory"
	walk_left
# 405 "data//maps/Route6/scripts.pory"
	walk_up
# 405 "data//maps/Route6/scripts.pory"
	walk_up
# 405 "data//maps/Route6/scripts.pory"
	walk_left
# 405 "data//maps/Route6/scripts.pory"
	walk_left
# 405 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 406 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_1:
# 406 "data//maps/Route6/scripts.pory"
	walk_down
# 406 "data//maps/Route6/scripts.pory"
	walk_left
# 406 "data//maps/Route6/scripts.pory"
	walk_left
# 406 "data//maps/Route6/scripts.pory"
	walk_left
# 406 "data//maps/Route6/scripts.pory"
	walk_left
# 406 "data//maps/Route6/scripts.pory"
	walk_up
# 406 "data//maps/Route6/scripts.pory"
	walk_up
# 406 "data//maps/Route6/scripts.pory"
	walk_left
# 406 "data//maps/Route6/scripts.pory"
	walk_left
# 406 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 413 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_2:
# 413 "data//maps/Route6/scripts.pory"
	face_up
	step_end

# 423 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_3:
# 423 "data//maps/Route6/scripts.pory"
	walk_left
# 423 "data//maps/Route6/scripts.pory"
	walk_down
# 423 "data//maps/Route6/scripts.pory"
	walk_down
# 423 "data//maps/Route6/scripts.pory"
	walk_left
# 423 "data//maps/Route6/scripts.pory"
	walk_left
# 423 "data//maps/Route6/scripts.pory"
	walk_left
# 423 "data//maps/Route6/scripts.pory"
	walk_left
# 423 "data//maps/Route6/scripts.pory"
	walk_up
# 423 "data//maps/Route6/scripts.pory"
	walk_up
# 423 "data//maps/Route6/scripts.pory"
	walk_left
# 423 "data//maps/Route6/scripts.pory"
	walk_left
# 423 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

Route6_Nurse_Demo_Text_0:
# 20 "data//maps/Route6/scripts.pory"
	.string "This area is closed for the demo.$"

Route6_EventScript_Nurse_Text_0:
# 35 "data//maps/Route6/scripts.pory"
	.string "Eek! The bugs! The humidity! I can't\n"
	.string "wait to get back to Pelluca City. These\l"
	.string "Heal Pass assignments are the worst!\p"
	.string "If you have a Heal Pass, Chansey can\n"
	.string "heal your Pokémon meanwhile.$"

Route6_Venusaur_Text_0:
# 47 "data//maps/Route6/scripts.pory"
	.string "It's asleep...$"

Route6_Venusaur_Text_1:
# 54 "data//maps/Route6/scripts.pory"
	.string "It's asleep...wake it up?$"

Route6_Venusaur_Text_2:
# 58 "data//maps/Route6/scripts.pory"
	.string "...$"

Route6_Venusaur_Text_3:
# 73 "data//maps/Route6/scripts.pory"
	.string "The Venusaur wakes up...it's groggy..$"

Route6_Venusaur_Text_4:
# 88 "data//maps/Route6/scripts.pory"
	.string "The Venusaur grunts and falls back\n"
	.string "asleep. It needs its beauty sleep!$"

Route6_Trainer_A_Text_0:
# 101 "data//maps/Route6/scripts.pory"
	.string "The marshes of Route 6 are teeming with\n"
	.string "life. Let's see how well you handle it!$"

Route6_Trainer_A_Text_1:
# 101 "data//maps/Route6/scripts.pory"
	.string "Impressive!$"

Route6_Trainer_A_Text_2:
# 102 "data//maps/Route6/scripts.pory"
	.string "Looks like you can handle yourself in\n"
	.string "these parts.$"

Route6_Trainer_B_Text_0:
# 108 "data//maps/Route6/scripts.pory"
	.string "The road to Pelluca City is\n"
	.string "long....beating you will give me energy!$"

Route6_Trainer_B_Text_1:
# 108 "data//maps/Route6/scripts.pory"
	.string "I lost even more energy!$"

Route6_Trainer_B_Text_2:
# 109 "data//maps/Route6/scripts.pory"
	.string "Maybe I should take a Corviknight Taxi\n"
	.string "to Pelluca City instead.$"

Route6_Trainer_C1_Text_0:
# 115 "data//maps/Route6/scripts.pory"
	.string "We're from the Pokémon Ranger\n"
	.string "Institute. We're on assignment to\l"
	.string "survey new Pokémon. Have you got any?$"

Route6_Trainer_C1_Text_1:
# 115 "data//maps/Route6/scripts.pory"
	.string "You do have new Pokémon!$"

Route6_Trainer_C1_Text_2:
# 116 "data//maps/Route6/scripts.pory"
	.string "The Pokémon Ranger Institute is the\n"
	.string "headquarters for us Rangers in\l"
	.string "Cormoria.$"

Route6_Trainer_C2_Text_0:
# 122 "data//maps/Route6/scripts.pory"
	.string "We're from the Ranger Institute. We're\n"
	.string "on assignment to survey new Pokémon.\l"
	.string "Have you got any?$"

Route6_Trainer_C2_Text_1:
# 123 "data//maps/Route6/scripts.pory"
	.string "The Ranger Institute gives us newbies\n"
	.string "such hard assignments!$"

Route6_Trainer_D_Text_0:
# 129 "data//maps/Route6/scripts.pory"
	.string "The secret to catching strong Water\n"
	.string "Pokémon ? Patience and a Trolling Rod.\p"
	.string "Too bad you don't have one!$"

Route6_Trainer_D_Text_1:
# 129 "data//maps/Route6/scripts.pory"
	.string "You beat me without a rod!$"

Route6_Trainer_D_Text_2:
# 130 "data//maps/Route6/scripts.pory"
	.string "I wonder what Pokémon I can catch here\n"
	.string "with a Casting Rod instead...$"

Route6_Trainer_E_Text_0:
# 136 "data//maps/Route6/scripts.pory"
	.string "I'm aiming to be the Pokémon Champion,\n"
	.string "so I've come here to catch rare\l"
	.string "Pokémon. Let me test them on you!$"

Route6_Trainer_E_Text_1:
# 136 "data//maps/Route6/scripts.pory"
	.string "No - my rare Pokémon!$"

Route6_Trainer_E_Text_2:
# 137 "data//maps/Route6/scripts.pory"
	.string "Catching good Pokémon isn't enough. I\n"
	.string "need to train rigorously too.$"

Route6_Trainer_F_Text_0:
# 143 "data//maps/Route6/scripts.pory"
	.string "My Croagunk and I love to train here\n"
	.string "because it makes us tough!$"

Route6_Trainer_F_Text_1:
# 143 "data//maps/Route6/scripts.pory"
	.string "We're not tough eonugh!$"

Route6_Trainer_F_Text_2:
# 144 "data//maps/Route6/scripts.pory"
	.string "Wading around in the marshes here works\n"
	.string "your core!$"

Route6_Trainer_G_Text_0:
# 150 "data//maps/Route6/scripts.pory"
	.string "Get ready, because I'm not a regular\n"
	.string "Pokémon Breeder. I'm going to be the\l"
	.string "first Pokémon Breeder Champion!$"

Route6_Trainer_G_Text_1:
# 150 "data//maps/Route6/scripts.pory"
	.string "Guess I was more bark than bite!$"

Route6_Trainer_G_Text_2:
# 151 "data//maps/Route6/scripts.pory"
	.string "Dog Pokémon are rare in Cormoria!\n"
	.string "Someone in Pelluca City traded me my\l"
	.string "Houndoor.$"

Route6_Trainer_H_Text_0:
# 157 "data//maps/Route6/scripts.pory"
	.string "This weather is prime for my BUG-type\n"
	.string "Pokémon! You won't be able to handle it!$"

Route6_Trainer_H_Text_1:
# 157 "data//maps/Route6/scripts.pory"
	.string "The weather is fickle!$"

Route6_Trainer_H_Text_2:
# 158 "data//maps/Route6/scripts.pory"
	.string "Although bugs thrive in marshes, there\n"
	.string "aren't many BUG-type Pokémon around\l"
	.string "here.$"

Route6_Trainer_I_Text_0:
# 164 "data//maps/Route6/scripts.pory"
	.string "I heard there was a rare DRAGON-type\n"
	.string "Pokémon here in Route 6, but I can't\l"
	.string "find any on land!$"

Route6_Trainer_I_Text_1:
# 164 "data//maps/Route6/scripts.pory"
	.string "Why did I find you instead?$"

Route6_Trainer_I_Text_2:
# 165 "data//maps/Route6/scripts.pory"
	.string "If its not on land, then maybe I need to\n"
	.string "try fishing...$"

Route6_Trainer_J_Text_0:
# 171 "data//maps/Route6/scripts.pory"
	.string "Hold it right there! You think you can\n"
	.string "beat me when I've already got four gym\l"
	.string "badges?$"

Route6_Trainer_J_Text_1:
# 171 "data//maps/Route6/scripts.pory"
	.string "Argh! I need another badge!$"

Route6_Trainer_J_Text_2:
# 172 "data//maps/Route6/scripts.pory"
	.string "Yup! That's right! I'm on my way to\n"
	.string "become the Pokémon Champion!$"

Route6_Trainer_K_Text_0:
# 178 "data//maps/Route6/scripts.pory"
	.string "Past Pelluca City is the Mirroh Base\n"
	.string "Camp and a Pokémon graveyard. I want to\l"
	.string "go there to commune with the afterlife!$"

Route6_Trainer_K_Text_1:
# 178 "data//maps/Route6/scripts.pory"
	.string "I don't want to commune with you!$"

Route6_Trainer_K_Text_2:
# 179 "data//maps/Route6/scripts.pory"
	.string "If we remember our Pokémon after they\n"
	.string "go, are they truly gone?$"

Route6_NPC1_Text_0:
# 212 "data//maps/Route6/scripts.pory"
	.string "When I was young, there was no route\n"
	.string "through these marshes.\p"
	.string "Now Route 6 connects Silversun City to\n"
	.string "Pelluca City.$"

Route6_NPC2_Text_0:
# 220 "data//maps/Route6/scripts.pory"
	.string "I wonder what's over there...if I had the\n"
	.string "HM Surf, I could swim over!$"

Route6_NPC3_Text_0:
# 227 "data//maps/Route6/scripts.pory"
	.string "I want to go to the Pelluca Restaurant!\n"
	.string "The food is supposed to be delicious\l"
	.string "because the head chef travels all of\l"
	.string "Cormoria looking for rare ingredients.$"

Route6_NPC4_Text_0:
# 236 "data//maps/Route6/scripts.pory"
	.string "I've been too busy eating to cook! I\n"
	.string "guess you can switch the hobby all you\l"
	.string "want, but you have to work on yourself\l"
	.string "to see real change.$"

Route6_NPC4_Text_1:
# 240 "data//maps/Route6/scripts.pory"
	.string "Have you brought an Apple Pie?$"

Route6_NPC4_Text_2:
# 245 "data//maps/Route6/scripts.pory"
	.string "Yes, this looks amazing!\p"
	.string "...\p"
	.string "Interesting flavour. I think I can make\n"
	.string "it!$"

Route6_NPC4_Text_3:
# 248 "data//maps/Route6/scripts.pory"
	.string "I suppose I don't need this any more.\n"
	.string "Here, why don't you take it? You could\l"
	.string "start a new hobby too!$"

Route6_NPC4_Text_4:
# 252 "data//maps/Route6/scripts.pory"
	.string "No, it looks like you haven't. I'll be\n"
	.string "here when you get one.$"

Route6_NPC4_Text_5:
# 258 "data//maps/Route6/scripts.pory"
	.string "These waters are too strong to fish\n"
	.string "properly...why am I even fishing here?\l"
	.string "I'm so unfocused these days. Maybe I\l"
	.string "need a new hobby. I'd like to try\l"
	.string "cooking, but I might be no good. What do\l"
	.string "you think? Should I try cooking?$"

Route6_NPC4_Text_6:
# 261 "data//maps/Route6/scripts.pory"
	.string "You're right - unless I try, I'll never\n"
	.string "know! Say, can you help me out? I want\l"
	.string "to try making an Apple Pie. Can you\l"
	.string "bring me one?$"

Route6_NPC4_Text_7:
# 264 "data//maps/Route6/scripts.pory"
	.string "Thank you so much! I'll be waiting here\n"
	.string "for you.$"

Route6_NPC4_Text_8:
# 267 "data//maps/Route6/scripts.pory"
	.string "Ahh well, it's back to fishing then.$"

Route6_NPC4_Text_9:
# 270 "data//maps/Route6/scripts.pory"
	.string "Yeah...I suppose I'd be no good. Fishing\n"
	.string "is all I know.$"

Route6_Gabrielle_Main_Text_0:
# 331 "data//maps/Route6/scripts.pory"
	.string "Grunt$"

Route6_Gabrielle_Main_Text_1:
# 332 "data//maps/Route6/scripts.pory"
	.string "C'mon Gabrielle - you've got nowhere to\n"
	.string "run. Now give us your Pokémon!$"

Route6_Gabrielle_Main_Text_2:
# 333 "data//maps/Route6/scripts.pory"
	.string "Gabrielle$"

Route6_Gabrielle_Main_Text_3:
# 334 "data//maps/Route6/scripts.pory"
	.string "No! They're mine! Why should I give you\n"
	.string "losers anything?$"

Route6_Gabrielle_Main_Text_4:
# 336 "data//maps/Route6/scripts.pory"
	.string "They're property of Team Somber, and\n"
	.string "now that you're out, it's only fair that\l"
	.string "you return them.\p"
	.string "Hehe...we've always been eyeing your\n"
	.string "Zorua, you know? And now it's time to\l"
	.string "collect!$"

Route6_Gabrielle_Main_Text_5:
# 338 "data//maps/Route6/scripts.pory"
	.string "That's not how it works!$"

Route6_Gabrielle_Main_Text_6:
# 340 "data//maps/Route6/scripts.pory"
	.string "What are you gonna do? Complain to the\n"
	.string "boss? HAHA!$"

Route6_Gabrielle_Main_Text_7:
# 353 "data//maps/Route6/scripts.pory"
	.string "{PLAYER}, it's you! These grunts are\n"
	.string "trying to take my Pokémon off me - you\l"
	.string "have to help!$"

Route6_Gabrielle_Main_Text_8:
# 358 "data//maps/Route6/scripts.pory"
	.string "Have you no shame Gabrielle? The\n"
	.string "trainer who got you kicked out is now\l"
	.string "helping you?\p"
	.string "Fine by us! Imagine what the boss'll tell\n"
	.string "us when we take your Pokémon AND beat\l"
	.string "the trainer that's stopped our plans\l"
	.string "twice!$"

Route6_Gabrielle_HurryUp_Text_0:
# 384 "data//maps/Route6/scripts.pory"
	.string "What are you doing? They're about to\n"
	.string "attack!$"

Route6_Gabrielle_DoBattle_Text_0:
# 389 "data//maps/Route6/scripts.pory"
	.string "Stupid Zorua!$"

Route6_Gabrielle_DoBattle_Text_1:
# 389 "data//maps/Route6/scripts.pory"
	.string "I need better Pokémon!$"

Route6_Gabrielle_Victory_Text_0:
# 402 "data//maps/Route6/scripts.pory"
	.string "You got lucky that {PLAYER} was\n"
	.string "around, Gabrielle! Next time we'll get\l"
	.string "your Zorua for sure!$"

Route6_Gabrielle_Victory_Text_1:
# 416 "data//maps/Route6/scripts.pory"
	.string "Thank you {PLAYER}. You saved me\n"
	.string "there.\p"
	.string "Let me heal your Pokémon.$"

Route6_Gabrielle_Victory_Text_2:
# 421 "data//maps/Route6/scripts.pory"
	.string "I live in Pelluca City, just past the\n"
	.string "Hoya River. I was on my way home when\l"
	.string "those grunts ambushed me...\p"
	.string "It's not fair! I've already been kicked\n"
	.string "out of Team Somber.\p"
	.string "I wish they'd just leave me alone!\p"
	.string "I'm going back home now.\n"
	.string "See you around.$"
