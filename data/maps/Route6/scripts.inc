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


Route6_Marshtomp::
# 44 "data//maps/Route6/scripts.pory"
	lockall
# 45 "data//maps/Route6/scripts.pory"
	faceplayer
# 46 "data//maps/Route6/scripts.pory"
	applymovement 32, Route6_Marshtomp_Movement_0
# 47 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 48 "data//maps/Route6/scripts.pory"
	delay 16
# 49 "data//maps/Route6/scripts.pory"
	msgbox Route6_Marshtomp_Text_0
# 50 "data//maps/Route6/scripts.pory"
	playmoncry SPECIES_MARSHTOMP, CRY_MODE_ENCOUNTER
# 51 "data//maps/Route6/scripts.pory"
	waitmoncry
# 53 "data//maps/Route6/scripts.pory"
	setwildbattle SPECIES_MARSHTOMP, 25
# 54 "data//maps/Route6/scripts.pory"
	dowildbattle
# 56 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_MARSHTOMP
# 57 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_A::
# 64 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_A, Route6_Trainer_A_Text_0, Route6_Trainer_A_Text_1
# 65 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_A_Text_2
# 66 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_B::
# 71 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_B, Route6_Trainer_B_Text_0, Route6_Trainer_B_Text_1
# 72 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_B_Text_2
# 73 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C1::
# 78 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C1_Text_0, Route6_Trainer_C1_Text_1
# 79 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C1_Text_2
# 80 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C2::
# 85 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C2_Text_0, Route6_Trainer_C1_Text_1
# 86 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C2_Text_1
# 87 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_D::
# 92 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_D, Route6_Trainer_D_Text_0, Route6_Trainer_D_Text_1
# 93 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_D_Text_2
# 94 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_E::
# 99 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_E, Route6_Trainer_E_Text_0, Route6_Trainer_E_Text_1
# 100 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_E_Text_2
# 101 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_F::
# 106 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_F, Route6_Trainer_F_Text_0, Route6_Trainer_F_Text_1
# 107 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_F_Text_2
# 108 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_G::
# 113 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_G, Route6_Trainer_G_Text_0, Route6_Trainer_G_Text_1
# 114 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_G_Text_2
# 115 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_H::
# 120 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_H, Route6_Trainer_H_Text_0, Route6_Trainer_H_Text_1
# 121 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_H_Text_2
# 122 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_I::
# 127 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_I, Route6_Trainer_I_Text_0, Route6_Trainer_I_Text_1
# 128 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_I_Text_2
# 129 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_J::
# 134 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_J, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 135 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 136 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_K::
# 141 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_K, Route6_Trainer_K_Text_0, Route6_Trainer_K_Text_1
# 142 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_K_Text_2
# 143 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC1::
# 173 "data//maps/Route6/scripts.pory"
	lockall
# 174 "data//maps/Route6/scripts.pory"
	faceplayer
# 175 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC1_Text_0
# 176 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC2::
# 181 "data//maps/Route6/scripts.pory"
	lockall
# 182 "data//maps/Route6/scripts.pory"
	faceplayer
# 183 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC2_Text_0
# 184 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC3::
# 188 "data//maps/Route6/scripts.pory"
	lockall
# 189 "data//maps/Route6/scripts.pory"
	faceplayer
# 190 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC3_Text_0
# 191 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC4::
# 195 "data//maps/Route6/scripts.pory"
	lockall
# 196 "data//maps/Route6/scripts.pory"
	faceplayer
# 198 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 2
	goto_if_eq Route6_NPC4_2
Route6_NPC4_1:
# 202 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 1
	goto_if_eq Route6_NPC4_5
Route6_NPC4_4:
# 220 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 0
	goto_if_eq Route6_NPC4_8
Route6_NPC4_7:
# 238 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_NPC4_2:
# 199 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_0
	goto Route6_NPC4_1

Route6_NPC4_5:
# 203 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_1, MSGBOX_YESNO
# 205 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_10
	goto Route6_NPC4_4

Route6_NPC4_8:
# 221 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_5, MSGBOX_YESNO
# 222 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_12
# 233 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_9
	goto Route6_NPC4_7

Route6_NPC4_10:
	checkitem ITEM_OLD_GATEAU
# 0 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route6_NPC4_15
# 215 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_4
	goto Route6_NPC4_4

Route6_NPC4_12:
# 224 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_6, MSGBOX_YESNO
# 225 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_18
# 230 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_8
	goto Route6_NPC4_7

Route6_NPC4_15:
# 208 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_2
# 209 "data//maps/Route6/scripts.pory"
	release
# 210 "data//maps/Route6/scripts.pory"
	removeitem ITEM_OLD_GATEAU
# 211 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_3
# 212 "data//maps/Route6/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 213 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 2
	goto Route6_NPC4_4

Route6_NPC4_18:
# 227 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_7
# 228 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 1
	goto Route6_NPC4_7


Route6_Gabrielle_SaveGameTrigger::
# 260 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_SaveGameTrigger_2
# 262 "data//maps/Route6/scripts.pory"
	special SaveGame
# 263 "data//maps/Route6/scripts.pory"
	waitstate
# 264 "data//maps/Route6/scripts.pory"
	release
# 266 "data//maps/Route6/scripts.pory"
	setvar VAR_TEMP_C, 1
	end

Route6_Gabrielle_SaveGameTrigger_2:
	end


Route6_Gabrielle_Trigger0::
# 273 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger0_2
# 274 "data//maps/Route6/scripts.pory"
	lockall
# 275 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger0_Movement_0
# 276 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 277 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Main
	return

Route6_Gabrielle_Trigger0_2:
	end


Route6_Gabrielle_Trigger1::
# 280 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger1_2
# 281 "data//maps/Route6/scripts.pory"
	lockall
# 282 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger1_Movement_0
# 283 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 284 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Main
	return

Route6_Gabrielle_Trigger1_2:
	end


Route6_Gabrielle_Main::
# 292 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_0
# 293 "data//maps/Route6/scripts.pory"
	delay 24
# 294 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 295 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_1
# 296 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 297 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_3
# 298 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 299 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_4
# 300 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 301 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_5
# 302 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 303 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_6
# 304 "data//maps/Route6/scripts.pory"
	release
# 307 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Marshtomp_Movement_0
# 308 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 309 "data//maps/Route6/scripts.pory"
	delay 24
# 310 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_1
# 311 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 312 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_2
# 313 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_2
# 315 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 316 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_7
# 317 "data//maps/Route6/scripts.pory"
	release
# 318 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_3
# 319 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_3
# 320 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 321 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Main_Text_8
# 322 "data//maps/Route6/scripts.pory"
	release
# 324 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Main_Movement_4
# 325 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Main_Movement_4
# 326 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_5
# 327 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Main_Movement_6
# 328 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 330 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_ChooseDoubleBattleParty::
# 335 "data//maps/Route6/scripts.pory"
	special SavePlayerParty
# 336 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 337 "data//maps/Route6/scripts.pory"
	special ChooseHalfPartyForBattle
# 338 "data//maps/Route6/scripts.pory"
	waitstate
# 339 "data//maps/Route6/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route6_Gabrielle_DoBattle
# 340 "data//maps/Route6/scripts.pory"
	special LoadPlayerParty
# 341 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_HurryUp
	return


Route6_Gabrielle_HurryUp::
# 346 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 347 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_HurryUp_Text_0
# 348 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_DoBattle::
# 352 "data//maps/Route6/scripts.pory"
	multi_2_vs_2 TRAINER_ROUTE6_GRUNT1, Route6_Gabrielle_DoBattle_Text_0, TRAINER_ROUTE6_GRUNT2, Route6_Gabrielle_DoBattle_Text_1, PARTNER_ROUTE6_GAB
# 353 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Gabrielle_DoBattle_2
Route6_Gabrielle_DoBattle_1:
# 356 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 357 "data//maps/Route6/scripts.pory"
	special SetCB2WhiteOut
# 358 "data//maps/Route6/scripts.pory"
	waitstate
	return

Route6_Gabrielle_DoBattle_2:
# 354 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Victory
	goto Route6_Gabrielle_DoBattle_1


Route6_Gabrielle_Victory::
# 364 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_0
# 365 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_0
# 366 "data//maps/Route6/scripts.pory"
	release
# 368 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_0
# 369 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Victory_Movement_1
# 370 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 372 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT1
# 373 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT2
# 375 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Main_Movement_2
# 376 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Victory_Movement_2
# 378 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 379 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_1
# 380 "data//maps/Route6/scripts.pory"
	release
# 381 "data//maps/Route6/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 383 "data//maps/Route6/scripts.pory"
	speakername Route6_Gabrielle_Main_Text_2
# 384 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_2
# 385 "data//maps/Route6/scripts.pory"
	release
# 386 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_3
# 387 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 388 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GAB
# 389 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_GABRIELLE_BULLY
# 391 "data//maps/Route6/scripts.pory"
	releaseall
	return


# 46 "data//maps/Route6/scripts.pory"
Route6_Marshtomp_Movement_0:
# 46 "data//maps/Route6/scripts.pory"
	emote_exclamation_mark
	step_end

# 275 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger0_Movement_0:
# 275 "data//maps/Route6/scripts.pory"
	walk_up
# 275 "data//maps/Route6/scripts.pory"
	walk_right
	step_end

# 282 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger1_Movement_0:
# 282 "data//maps/Route6/scripts.pory"
	walk_up
# 282 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 292 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_0:
# 292 "data//maps/Route6/scripts.pory"
	jump_in_place_right
	step_end

# 310 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_1:
# 310 "data//maps/Route6/scripts.pory"
	walk_down
# 310 "data//maps/Route6/scripts.pory"
	walk_down
# 310 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 312 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_2:
# 312 "data//maps/Route6/scripts.pory"
	face_down
	step_end

# 318 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_3:
# 318 "data//maps/Route6/scripts.pory"
	jump_in_place_down
	step_end

# 324 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_4:
# 324 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 326 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_5:
# 326 "data//maps/Route6/scripts.pory"
	walk_right
# 326 "data//maps/Route6/scripts.pory"
	walk_up
# 326 "data//maps/Route6/scripts.pory"
	walk_up
# 326 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 327 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Main_Movement_6:
# 327 "data//maps/Route6/scripts.pory"
	walk_right
# 327 "data//maps/Route6/scripts.pory"
	walk_right
# 327 "data//maps/Route6/scripts.pory"
	walk_up
# 327 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 368 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_0:
# 368 "data//maps/Route6/scripts.pory"
	walk_down
# 368 "data//maps/Route6/scripts.pory"
	walk_down
# 368 "data//maps/Route6/scripts.pory"
	walk_left
# 368 "data//maps/Route6/scripts.pory"
	walk_left
# 368 "data//maps/Route6/scripts.pory"
	walk_left
# 368 "data//maps/Route6/scripts.pory"
	walk_down
# 368 "data//maps/Route6/scripts.pory"
	walk_down
# 368 "data//maps/Route6/scripts.pory"
	walk_down
# 368 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 369 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_1:
# 369 "data//maps/Route6/scripts.pory"
	walk_down
# 369 "data//maps/Route6/scripts.pory"
	walk_left
# 369 "data//maps/Route6/scripts.pory"
	walk_left
# 369 "data//maps/Route6/scripts.pory"
	walk_left
# 369 "data//maps/Route6/scripts.pory"
	walk_down
# 369 "data//maps/Route6/scripts.pory"
	walk_down
# 369 "data//maps/Route6/scripts.pory"
	walk_down
# 369 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 376 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_2:
# 376 "data//maps/Route6/scripts.pory"
	face_up
	step_end

# 386 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_3:
# 386 "data//maps/Route6/scripts.pory"
	walk_left
# 386 "data//maps/Route6/scripts.pory"
	walk_down
# 386 "data//maps/Route6/scripts.pory"
	walk_down
# 386 "data//maps/Route6/scripts.pory"
	walk_left
# 386 "data//maps/Route6/scripts.pory"
	walk_left
# 386 "data//maps/Route6/scripts.pory"
	walk_left
# 386 "data//maps/Route6/scripts.pory"
	walk_down
# 386 "data//maps/Route6/scripts.pory"
	walk_down
# 386 "data//maps/Route6/scripts.pory"
	walk_down
# 386 "data//maps/Route6/scripts.pory"
	walk_down
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

Route6_Marshtomp_Text_0:
# 49 "data//maps/Route6/scripts.pory"
	.string "It's a wild Pokémon!$"

Route6_Trainer_A_Text_0:
# 64 "data//maps/Route6/scripts.pory"
	.string "The marshes of Route 6 are teeming with\n"
	.string "life. Let's see how well you handle it!$"

Route6_Trainer_A_Text_1:
# 64 "data//maps/Route6/scripts.pory"
	.string "Impressive!$"

Route6_Trainer_A_Text_2:
# 65 "data//maps/Route6/scripts.pory"
	.string "Looks like you can handle yourself in\n"
	.string "these parts.$"

Route6_Trainer_B_Text_0:
# 71 "data//maps/Route6/scripts.pory"
	.string "The road to Pelluca City is\n"
	.string "long....beating you will give me energy!$"

Route6_Trainer_B_Text_1:
# 71 "data//maps/Route6/scripts.pory"
	.string "I lost even more energy!$"

Route6_Trainer_B_Text_2:
# 72 "data//maps/Route6/scripts.pory"
	.string "Maybe I should take a Corviknight Taxi\n"
	.string "to Pelluca City instead.$"

Route6_Trainer_C1_Text_0:
# 78 "data//maps/Route6/scripts.pory"
	.string "We're from the Pokémon Ranger\n"
	.string "Institute. We're on assignment to\l"
	.string "survey new Pokémon. Have you got any?$"

Route6_Trainer_C1_Text_1:
# 78 "data//maps/Route6/scripts.pory"
	.string "You do have new Pokémon!$"

Route6_Trainer_C1_Text_2:
# 79 "data//maps/Route6/scripts.pory"
	.string "The Pokémon Ranger Institute is the\n"
	.string "headquarters for us Rangers in\l"
	.string "Cormoria.$"

Route6_Trainer_C2_Text_0:
# 85 "data//maps/Route6/scripts.pory"
	.string "We're from the Ranger Institute. We're\n"
	.string "on assignment to survey new Pokémon.\l"
	.string "Have you got any?$"

Route6_Trainer_C2_Text_1:
# 86 "data//maps/Route6/scripts.pory"
	.string "The Ranger Institute gives us newbies\n"
	.string "such hard assignments!$"

Route6_Trainer_D_Text_0:
# 92 "data//maps/Route6/scripts.pory"
	.string "The secret to catching strong Water\n"
	.string "Pokémon ? Patience and a Casting Rod.\l"
	.string "Too bad you don't have one!$"

Route6_Trainer_D_Text_1:
# 92 "data//maps/Route6/scripts.pory"
	.string "You beat me without a rod!$"

Route6_Trainer_D_Text_2:
# 93 "data//maps/Route6/scripts.pory"
	.string "I wonder what Pokémon I can catch here\n"
	.string "with a Trolling Rod instead...$"

Route6_Trainer_E_Text_0:
# 99 "data//maps/Route6/scripts.pory"
	.string "I'm aiming to be the Pokémon Champion,\n"
	.string "so I've come here to catch rare\l"
	.string "Pokémon. Let me test them on you!$"

Route6_Trainer_E_Text_1:
# 99 "data//maps/Route6/scripts.pory"
	.string "No - my rare Pokémon!$"

Route6_Trainer_E_Text_2:
# 100 "data//maps/Route6/scripts.pory"
	.string "Catching good Pokémon isn't enough. I\n"
	.string "need to train rigorously too.$"

Route6_Trainer_F_Text_0:
# 106 "data//maps/Route6/scripts.pory"
	.string "My Croagunk and I love to train here\n"
	.string "because it makes us tough!$"

Route6_Trainer_F_Text_1:
# 106 "data//maps/Route6/scripts.pory"
	.string "We're not tough eonugh!$"

Route6_Trainer_F_Text_2:
# 107 "data//maps/Route6/scripts.pory"
	.string "Wading around in the marshes here works\n"
	.string "your core!$"

Route6_Trainer_G_Text_0:
# 113 "data//maps/Route6/scripts.pory"
	.string "Get ready, because I'm not a regular\n"
	.string "Pokémon Breeder. I'm going to be the\l"
	.string "first Pokémon Breeder Champion!$"

Route6_Trainer_G_Text_1:
# 113 "data//maps/Route6/scripts.pory"
	.string "Guess I was more bark than bite!$"

Route6_Trainer_G_Text_2:
# 114 "data//maps/Route6/scripts.pory"
	.string "Dog Pokémon are rare in Cormoria!\n"
	.string "Someone in Pelluca City traded me my\l"
	.string "Houndoor.$"

Route6_Trainer_H_Text_0:
# 120 "data//maps/Route6/scripts.pory"
	.string "This weather is prime for my BUG-type\n"
	.string "Pokémon! You won't be able to handle it!$"

Route6_Trainer_H_Text_1:
# 120 "data//maps/Route6/scripts.pory"
	.string "The weather is fickle!$"

Route6_Trainer_H_Text_2:
# 121 "data//maps/Route6/scripts.pory"
	.string "Although bugs thrive in marshes, there\n"
	.string "aren't many BUG-type Pokémon around\l"
	.string "here.$"

Route6_Trainer_I_Text_0:
# 127 "data//maps/Route6/scripts.pory"
	.string "I heard there was a rare DRAGON-type\n"
	.string "Pokémon here in Route 6, but I can't\l"
	.string "find any on land!$"

Route6_Trainer_I_Text_1:
# 127 "data//maps/Route6/scripts.pory"
	.string "Why did I find you instead?$"

Route6_Trainer_I_Text_2:
# 128 "data//maps/Route6/scripts.pory"
	.string "If its not on land, then maybe I need to\n"
	.string "try fishing...$"

Route6_Trainer_J_Text_0:
# 134 "data//maps/Route6/scripts.pory"
	.string "Hold it right there! You think you can\n"
	.string "beat me when I've already got four gym\l"
	.string "badges?$"

Route6_Trainer_J_Text_1:
# 134 "data//maps/Route6/scripts.pory"
	.string "Argh! I need another badge!$"

Route6_Trainer_J_Text_2:
# 135 "data//maps/Route6/scripts.pory"
	.string "Yup! That's right! I'm on my way to\n"
	.string "become the Pokémon Champion!$"

Route6_Trainer_K_Text_0:
# 141 "data//maps/Route6/scripts.pory"
	.string "Past Pelluca City is the Mirroh Base\n"
	.string "Camp and a Pokémon graveyard. I want to\l"
	.string "go there to commune with the afterlife!$"

Route6_Trainer_K_Text_1:
# 141 "data//maps/Route6/scripts.pory"
	.string "I don't want to commune with you!$"

Route6_Trainer_K_Text_2:
# 142 "data//maps/Route6/scripts.pory"
	.string "If we remember our Pokémon after they\n"
	.string "go, are they truly gone?$"

Route6_NPC1_Text_0:
# 175 "data//maps/Route6/scripts.pory"
	.string "When I was young, there was no route\n"
	.string "through these marshes. Now Route 6\l"
	.string "connects Silversun City to Pelluca\l"
	.string "City.$"

Route6_NPC2_Text_0:
# 183 "data//maps/Route6/scripts.pory"
	.string "I wonder what's over there...if I had a\n"
	.string "Pokémon that knew SURF, I could swim\l"
	.string "over!$"

Route6_NPC3_Text_0:
# 190 "data//maps/Route6/scripts.pory"
	.string "I want to go to the Pelluca Restaurant!\n"
	.string "The food is supposed to be delicious\l"
	.string "because the head chef travels all of\l"
	.string "Cormoria looking for rare ingredients.$"

Route6_NPC4_Text_0:
# 199 "data//maps/Route6/scripts.pory"
	.string "I've been too busy eating to cook! I\n"
	.string "guess you can switch the hobby all you\l"
	.string "want, but you have to work on yourself\l"
	.string "to see real change.$"

Route6_NPC4_Text_1:
# 203 "data//maps/Route6/scripts.pory"
	.string "Have you brought an Apple Pie?$"

Route6_NPC4_Text_2:
# 208 "data//maps/Route6/scripts.pory"
	.string "Yes, this looks amazing!\p"
	.string "...\p"
	.string "Interesting flavour. I think I can make\n"
	.string "it!$"

Route6_NPC4_Text_3:
# 211 "data//maps/Route6/scripts.pory"
	.string "I suppose I don't need this any more.\n"
	.string "Here, why don't you take it? You could\l"
	.string "start a new hobby too!$"

Route6_NPC4_Text_4:
# 215 "data//maps/Route6/scripts.pory"
	.string "No, it looks like you haven't. I'll be\n"
	.string "here when you get one.$"

Route6_NPC4_Text_5:
# 221 "data//maps/Route6/scripts.pory"
	.string "These waters are too strong to fish\n"
	.string "properly...why am I even fishing here?\l"
	.string "I'm so unfocused these days. Maybe I\l"
	.string "need a new hobby. I'd like to try\l"
	.string "cooking, but I might be no good. What do\l"
	.string "you think? Should I try cooking?$"

Route6_NPC4_Text_6:
# 224 "data//maps/Route6/scripts.pory"
	.string "You're right - unless I try, I'll never\n"
	.string "know! Say, can you help me out? I want\l"
	.string "to try making an Apple Pie. Can you\l"
	.string "bring me one?$"

Route6_NPC4_Text_7:
# 227 "data//maps/Route6/scripts.pory"
	.string "Thank you so much! I'll be waiting here\n"
	.string "for you.$"

Route6_NPC4_Text_8:
# 230 "data//maps/Route6/scripts.pory"
	.string "Ahh well, it's back to fishing then.$"

Route6_NPC4_Text_9:
# 233 "data//maps/Route6/scripts.pory"
	.string "Yeah...I suppose I'd be no good. Fishing\n"
	.string "is all I know.$"

Route6_Gabrielle_Main_Text_0:
# 294 "data//maps/Route6/scripts.pory"
	.string "Grunt$"

Route6_Gabrielle_Main_Text_1:
# 295 "data//maps/Route6/scripts.pory"
	.string "C'mon Gabrielle - you've got nowhere to\n"
	.string "run. Now give us your Pokémon!$"

Route6_Gabrielle_Main_Text_2:
# 296 "data//maps/Route6/scripts.pory"
	.string "Gabrielle$"

Route6_Gabrielle_Main_Text_3:
# 297 "data//maps/Route6/scripts.pory"
	.string "No! They're mine! Why should I give you\n"
	.string "losers anything?$"

Route6_Gabrielle_Main_Text_4:
# 299 "data//maps/Route6/scripts.pory"
	.string "They're property of Team Somber, and\n"
	.string "now that you're out, it's only fair that\l"
	.string "you return them.\p"
	.string "Hehe...we've always been eyeing your\n"
	.string "Zorua, you know? And now it's time to\l"
	.string "collect!$"

Route6_Gabrielle_Main_Text_5:
# 301 "data//maps/Route6/scripts.pory"
	.string "That's not how it works!$"

Route6_Gabrielle_Main_Text_6:
# 303 "data//maps/Route6/scripts.pory"
	.string "What are you gonna do? Complain to the\n"
	.string "boss? HAHA!$"

Route6_Gabrielle_Main_Text_7:
# 316 "data//maps/Route6/scripts.pory"
	.string "{PLAYER}, it's you! These grunts are\n"
	.string "trying to take my Pokémon off me - you\l"
	.string "have to help!$"

Route6_Gabrielle_Main_Text_8:
# 321 "data//maps/Route6/scripts.pory"
	.string "Have you no shame Gabrielle? The\n"
	.string "trainer who got you kicked out is now\l"
	.string "helping you?\p"
	.string "Fine by us! Imagine what the boss'll tell\n"
	.string "us when we take your Pokémon AND beat\l"
	.string "the trainer that's stopped our plans\l"
	.string "twice!$"

Route6_Gabrielle_HurryUp_Text_0:
# 347 "data//maps/Route6/scripts.pory"
	.string "What are you doing? They're about to\n"
	.string "attack!$"

Route6_Gabrielle_DoBattle_Text_0:
# 352 "data//maps/Route6/scripts.pory"
	.string "Stupid Zorua!$"

Route6_Gabrielle_DoBattle_Text_1:
# 352 "data//maps/Route6/scripts.pory"
	.string "I need better Pokemon!$"

Route6_Gabrielle_Victory_Text_0:
# 365 "data//maps/Route6/scripts.pory"
	.string "You got lucky that {PLAYER} was\n"
	.string "around, Gabrielle! Next time we'll get\l"
	.string "your Zorua for sure!$"

Route6_Gabrielle_Victory_Text_1:
# 379 "data//maps/Route6/scripts.pory"
	.string "Thank you {PLAYER}. You saved me\n"
	.string "there.\p"
	.string "Let me heal your Pokemon.$"

Route6_Gabrielle_Victory_Text_2:
# 384 "data//maps/Route6/scripts.pory"
	.string "I live Pelluca City, just past the Hoya\n"
	.string "River. I was on my way home when those\l"
	.string "grunts ambushed me...I'm going there\l"
	.string "now. See you around.$"
