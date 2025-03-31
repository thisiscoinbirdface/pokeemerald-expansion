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
	call Common_EventScript_OutOfCenterPartyHeal
# 38 "data//maps/Route6/scripts.pory"
	msgbox Route6_EventScript_Nurse_Text_1
# 39 "data//maps/Route6/scripts.pory"
	release
	return


Route6_Marshtomp::
# 45 "data//maps/Route6/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_ENCOUNTER
# 46 "data//maps/Route6/scripts.pory"
	delay 40
# 47 "data//maps/Route6/scripts.pory"
	waitmoncry
# 48 "data//maps/Route6/scripts.pory"
	msgbox Route6_Marshtomp_Text_0
# 49 "data//maps/Route6/scripts.pory"
	setwildbattle SPECIES_EXCADRILL, 30
# 50 "data//maps/Route6/scripts.pory"
	dowildbattle
# 53 "data//maps/Route6/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route6_Marshtomp_2
Route6_Marshtomp_1:
# 57 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route6_Marshtomp_5
Route6_Marshtomp_4:
# 60 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route6_Marshtomp_7
	return

Route6_Marshtomp_2:
# 55 "data//maps/Route6/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto Route6_Marshtomp_1

Route6_Marshtomp_5:
# 58 "data//maps/Route6/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto Route6_Marshtomp_4

Route6_Marshtomp_7:
# 61 "data//maps/Route6/scripts.pory"
	msgbox Route6_Marshtomp_Text_1
	return


Route6_Trainer_A::
# 68 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_A, Route6_Trainer_A_Text_0, Route6_Trainer_A_Text_1
# 69 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_A_Text_2
# 70 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_B::
# 75 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_B, Route6_Trainer_B_Text_0, Route6_Trainer_B_Text_1
# 76 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_B_Text_2
# 77 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C1::
# 82 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C1_Text_0, Route6_Trainer_C1_Text_1
# 83 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C1_Text_2
# 84 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C2::
# 89 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C2_Text_0, Route6_Trainer_C1_Text_1
# 90 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C2_Text_1
# 91 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_D::
# 96 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_D, Route6_Trainer_D_Text_0, Route6_Trainer_D_Text_1
# 97 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_D_Text_2
# 98 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_E::
# 103 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_E, Route6_Trainer_E_Text_0, Route6_Trainer_E_Text_1
# 104 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_E_Text_2
# 105 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_F::
# 110 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_F, Route6_Trainer_F_Text_0, Route6_Trainer_F_Text_1
# 111 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_F_Text_2
# 112 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_G::
# 117 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_G, Route6_Trainer_G_Text_0, Route6_Trainer_G_Text_1
# 118 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_G_Text_2
# 119 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_H::
# 124 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_H, Route6_Trainer_H_Text_0, Route6_Trainer_H_Text_1
# 125 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_H_Text_2
# 126 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_I::
# 131 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_I, Route6_Trainer_I_Text_0, Route6_Trainer_I_Text_1
# 132 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_I_Text_2
# 133 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_J::
# 138 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_J, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 139 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 140 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_K::
# 145 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_K, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 146 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 147 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC1::
# 177 "data//maps/Route6/scripts.pory"
	lockall
# 178 "data//maps/Route6/scripts.pory"
	faceplayer
# 179 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC1_Text_0
# 180 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC2::
# 185 "data//maps/Route6/scripts.pory"
	lockall
# 186 "data//maps/Route6/scripts.pory"
	faceplayer
# 187 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC2_Text_0
# 188 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC3::
# 192 "data//maps/Route6/scripts.pory"
	lockall
# 193 "data//maps/Route6/scripts.pory"
	faceplayer
# 194 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC3_Text_0
# 195 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC4::
# 199 "data//maps/Route6/scripts.pory"
	lockall
# 200 "data//maps/Route6/scripts.pory"
	faceplayer
# 202 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 2
	goto_if_eq Route6_NPC4_2
Route6_NPC4_1:
# 208 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 1
	goto_if_eq Route6_NPC4_5
Route6_NPC4_4:
# 226 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 0
	goto_if_eq Route6_NPC4_8
Route6_NPC4_7:
# 244 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_NPC4_2:
# 203 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_0
# 204 "data//maps/Route6/scripts.pory"
	release
# 205 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_1
	goto Route6_NPC4_1

Route6_NPC4_5:
# 209 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_2, MSGBOX_YESNO
# 211 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_10
	goto Route6_NPC4_4

Route6_NPC4_8:
# 227 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_6, MSGBOX_YESNO
# 228 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_12
# 239 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_10
	goto Route6_NPC4_7

Route6_NPC4_10:
	checkitem ITEM_RED_FLUTE
# 0 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route6_NPC4_15
# 221 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_5
	goto Route6_NPC4_4

Route6_NPC4_12:
# 230 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_7, MSGBOX_YESNO
# 231 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_18
# 236 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_9
	goto Route6_NPC4_7

Route6_NPC4_15:
# 214 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_3
# 215 "data//maps/Route6/scripts.pory"
	release
# 216 "data//maps/Route6/scripts.pory"
	removeitem ITEM_RED_FLUTE
# 217 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_4
# 218 "data//maps/Route6/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 219 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 2
	goto Route6_NPC4_4

Route6_NPC4_18:
# 233 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_8
# 234 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 1
	goto Route6_NPC4_7


Route6_Gabrielle_Trigger::
# 274 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger_2
# 276 "data//maps/Route6/scripts.pory"
	lockall
# 280 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_0
# 281 "data//maps/Route6/scripts.pory"
	delay 24
# 282 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_0
# 283 "data//maps/Route6/scripts.pory"
	release
# 286 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_1
# 287 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 288 "data//maps/Route6/scripts.pory"
	delay 24
# 289 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_2
# 290 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 291 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_3
# 292 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_3
# 294 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_1
# 295 "data//maps/Route6/scripts.pory"
	release
# 296 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_4
# 297 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_4
# 298 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_2
# 299 "data//maps/Route6/scripts.pory"
	release
# 301 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_5
# 302 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_5
# 303 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_6
# 304 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger_Movement_7
# 305 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 307 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return

Route6_Gabrielle_Trigger_2:
	end


Route6_Gabrielle_ChooseDoubleBattleParty::
# 312 "data//maps/Route6/scripts.pory"
	special SavePlayerParty
# 313 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 314 "data//maps/Route6/scripts.pory"
	special ChooseHalfPartyForBattle
# 315 "data//maps/Route6/scripts.pory"
	waitstate
# 316 "data//maps/Route6/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route6_Gabrielle_DoBattle
# 317 "data//maps/Route6/scripts.pory"
	special LoadPlayerParty
# 318 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_HurryUp
	return


Route6_Gabrielle_HurryUp::
# 323 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_HurryUp_Text_0
# 324 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_DoBattle::
# 328 "data//maps/Route6/scripts.pory"
	multi_2_vs_2 TRAINER_ROUTE6_GRUNT1, Route6_Gabrielle_DoBattle_Text_0, TRAINER_ROUTE6_GRUNT2, Route6_Gabrielle_DoBattle_Text_1, PARTNER_ROUTE6_GAB
# 329 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Gabrielle_DoBattle_2
Route6_Gabrielle_DoBattle_1:
# 332 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 333 "data//maps/Route6/scripts.pory"
	special SetCB2WhiteOut
# 334 "data//maps/Route6/scripts.pory"
	waitstate
	return

Route6_Gabrielle_DoBattle_2:
# 330 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Victory
	goto Route6_Gabrielle_DoBattle_1


Route6_Gabrielle_Victory::
# 340 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_0
# 341 "data//maps/Route6/scripts.pory"
	release
# 343 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_0
# 344 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Victory_Movement_1
# 345 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 347 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT1
# 348 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT2
# 350 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_3
# 351 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Victory_Movement_2
# 353 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_1
# 354 "data//maps/Route6/scripts.pory"
	release
# 355 "data//maps/Route6/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 357 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_2
# 358 "data//maps/Route6/scripts.pory"
	release
# 359 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_3
# 360 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 361 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GAB
# 362 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_GABRIELLE_BULLY
# 364 "data//maps/Route6/scripts.pory"
	releaseall
	return


# 280 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_0:
# 280 "data//maps/Route6/scripts.pory"
	jump_in_place_right
	step_end

# 286 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_1:
# 286 "data//maps/Route6/scripts.pory"
	emote_exclamation_mark
	step_end

# 289 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_2:
# 289 "data//maps/Route6/scripts.pory"
	walk_down
# 289 "data//maps/Route6/scripts.pory"
	walk_down
# 289 "data//maps/Route6/scripts.pory"
	walk_left
# 289 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 291 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_3:
# 291 "data//maps/Route6/scripts.pory"
	face_down
	step_end

# 296 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_4:
# 296 "data//maps/Route6/scripts.pory"
	jump_in_place_down
	step_end

# 301 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_5:
# 301 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 303 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_6:
# 303 "data//maps/Route6/scripts.pory"
	walk_right
# 303 "data//maps/Route6/scripts.pory"
	walk_right
# 303 "data//maps/Route6/scripts.pory"
	walk_up
# 303 "data//maps/Route6/scripts.pory"
	walk_up
# 303 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 304 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_7:
# 304 "data//maps/Route6/scripts.pory"
	walk_right
# 304 "data//maps/Route6/scripts.pory"
	walk_right
# 304 "data//maps/Route6/scripts.pory"
	walk_right
# 304 "data//maps/Route6/scripts.pory"
	walk_up
# 304 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 343 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_0:
# 343 "data//maps/Route6/scripts.pory"
	walk_down
# 343 "data//maps/Route6/scripts.pory"
	walk_down
# 343 "data//maps/Route6/scripts.pory"
	walk_left
# 343 "data//maps/Route6/scripts.pory"
	walk_left
# 343 "data//maps/Route6/scripts.pory"
	walk_left
# 343 "data//maps/Route6/scripts.pory"
	walk_down
# 343 "data//maps/Route6/scripts.pory"
	walk_down
# 343 "data//maps/Route6/scripts.pory"
	walk_down
# 343 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 344 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_1:
# 344 "data//maps/Route6/scripts.pory"
	walk_down
# 344 "data//maps/Route6/scripts.pory"
	walk_left
# 344 "data//maps/Route6/scripts.pory"
	walk_left
# 344 "data//maps/Route6/scripts.pory"
	walk_left
# 344 "data//maps/Route6/scripts.pory"
	walk_down
# 344 "data//maps/Route6/scripts.pory"
	walk_down
# 344 "data//maps/Route6/scripts.pory"
	walk_down
# 344 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 351 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_2:
# 351 "data//maps/Route6/scripts.pory"
	face_up
	step_end

# 359 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_3:
# 359 "data//maps/Route6/scripts.pory"
	walk_left
# 359 "data//maps/Route6/scripts.pory"
	walk_down
# 359 "data//maps/Route6/scripts.pory"
	walk_down
# 359 "data//maps/Route6/scripts.pory"
	walk_left
# 359 "data//maps/Route6/scripts.pory"
	walk_left
# 359 "data//maps/Route6/scripts.pory"
	walk_left
# 359 "data//maps/Route6/scripts.pory"
	walk_down
# 359 "data//maps/Route6/scripts.pory"
	walk_down
# 359 "data//maps/Route6/scripts.pory"
	walk_down
# 359 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

Route6_Nurse_Demo_Text_0:
# 20 "data//maps/Route6/scripts.pory"
	.string "This area is closed for the demo.$"

Route6_EventScript_Nurse_Text_0:
# 35 "data//maps/Route6/scripts.pory"
	.string "NURSE JOY: Oh I don't know what\n"
	.string "happened! I went out for a walk and\l"
	.string "ended up in this storm! I'm waiting here\l"
	.string "till it passes. CHANSEY can heal your\l"
	.string "{PKMN} meanwhile.$"

Route6_EventScript_Nurse_Text_1:
# 38 "data//maps/Route6/scripts.pory"
	.string "NURSE JOY: Be careful - once you slide\n"
	.string "down this ledge, you won't be able to\l"
	.string "come back!$"

Route6_Marshtomp_Text_0:
# 48 "data//maps/Route6/scripts.pory"
	.string "A wild {PKMN} attacks!$"

Route6_Marshtomp_Text_1:
# 61 "data//maps/Route6/scripts.pory"
	.string "The EXCADRILL retreats back into its\n"
	.string "home. Better not disturb it again!$"

Route6_Trainer_A_Text_0:
# 68 "data//maps/Route6/scripts.pory"
	.string "The marshes of Route 6 are teeming with\n"
	.string "life. Let's see how well you handle it!$"

Route6_Trainer_A_Text_1:
# 68 "data//maps/Route6/scripts.pory"
	.string "Impressive!$"

Route6_Trainer_A_Text_2:
# 69 "data//maps/Route6/scripts.pory"
	.string "Looks like you can handle yourself in\n"
	.string "these parts.$"

Route6_Trainer_B_Text_0:
# 75 "data//maps/Route6/scripts.pory"
	.string "The road to Pelluca City is\n"
	.string "long....beating you will give me energy!$"

Route6_Trainer_B_Text_1:
# 75 "data//maps/Route6/scripts.pory"
	.string "I lost even more energy!$"

Route6_Trainer_B_Text_2:
# 76 "data//maps/Route6/scripts.pory"
	.string "Maybe I should take a Corviknight Taxi\n"
	.string "to Pelluca City instead.$"

Route6_Trainer_C1_Text_0:
# 82 "data//maps/Route6/scripts.pory"
	.string "We're from the Pokemon Ranger\n"
	.string "Institute. We're on assignment to\l"
	.string "survey new {PKMN}. Have you got any?$"

Route6_Trainer_C1_Text_1:
# 82 "data//maps/Route6/scripts.pory"
	.string "You do have new {PKMN}$"

Route6_Trainer_C1_Text_2:
# 83 "data//maps/Route6/scripts.pory"
	.string "The Pokemon Ranger Institute is the\n"
	.string "headquarters for us Rangers in\l"
	.string "CORMORIA.$"

Route6_Trainer_C2_Text_0:
# 89 "data//maps/Route6/scripts.pory"
	.string "We're from the Ranger Institute. We're\n"
	.string "on assignment to survey new {PKMN}. Have\l"
	.string "you got any?$"

Route6_Trainer_C2_Text_1:
# 90 "data//maps/Route6/scripts.pory"
	.string "The Ranger Institute gives us newbies\n"
	.string "such hard assignments!$"

Route6_Trainer_D_Text_0:
# 96 "data//maps/Route6/scripts.pory"
	.string "The secret to catching strong Water\n"
	.string "Pokémon? Patience and a CASTING ROD.\l"
	.string "Too bad you don't have one!$"

Route6_Trainer_D_Text_1:
# 96 "data//maps/Route6/scripts.pory"
	.string "I need a Super Rod!$"

Route6_Trainer_D_Text_2:
# 97 "data//maps/Route6/scripts.pory"
	.string "I wonder what {PKMN} I can catch here with\n"
	.string "a Super Rod...$"

Route6_Trainer_E_Text_0:
# 103 "data//maps/Route6/scripts.pory"
	.string "I'm aiming to be the {PKMN} Champion, so\n"
	.string "I've come here to catch rare {PKMN}. Let me\l"
	.string "test them on you!$"

Route6_Trainer_E_Text_1:
# 103 "data//maps/Route6/scripts.pory"
	.string "No - my rare {PKMN}!$"

Route6_Trainer_E_Text_2:
# 104 "data//maps/Route6/scripts.pory"
	.string "Catching good {PKMN} isn't enough. I need\n"
	.string "to train rigorously too.$"

Route6_Trainer_F_Text_0:
# 110 "data//maps/Route6/scripts.pory"
	.string "My CROAGUNK and I love to train here\n"
	.string "because it makes us tough!$"

Route6_Trainer_F_Text_1:
# 110 "data//maps/Route6/scripts.pory"
	.string "We're not tough eonugh!$"

Route6_Trainer_F_Text_2:
# 111 "data//maps/Route6/scripts.pory"
	.string "Wading around in the marshes here works\n"
	.string "your core!$"

Route6_Trainer_G_Text_0:
# 117 "data//maps/Route6/scripts.pory"
	.string "Us BREEDERS like to train one type of\n"
	.string "{PKMN}. I specialise in dogs!$"

Route6_Trainer_G_Text_1:
# 117 "data//maps/Route6/scripts.pory"
	.string "Guess I was more bark than bite!$"

Route6_Trainer_G_Text_2:
# 118 "data//maps/Route6/scripts.pory"
	.string "Dog {PKMN} are rare in CORMORIA! Someone in\n"
	.string "PELLUCA CITY traded me my HOUNDOOR.$"

Route6_Trainer_H_Text_0:
# 124 "data//maps/Route6/scripts.pory"
	.string "This weather is prime for my BUG-type\n"
	.string "{PKMN}! You won't be able to handle it!$"

Route6_Trainer_H_Text_1:
# 124 "data//maps/Route6/scripts.pory"
	.string "The weather is fickle!$"

Route6_Trainer_H_Text_2:
# 125 "data//maps/Route6/scripts.pory"
	.string "Although bugs thrive in marshes, there\n"
	.string "aren't many BUG-type {PKMN} around here.$"

Route6_Trainer_I_Text_0:
# 131 "data//maps/Route6/scripts.pory"
	.string "I heard there was a rare DRAGON-type\n"
	.string "{PKMN} here in Route 6, but I can't find any\l"
	.string "on land!$"

Route6_Trainer_I_Text_1:
# 131 "data//maps/Route6/scripts.pory"
	.string "Why did I find you instead?$"

Route6_Trainer_I_Text_2:
# 132 "data//maps/Route6/scripts.pory"
	.string "If its not on land, then maybe I need to\n"
	.string "try fishing...$"

Route6_Trainer_J_Text_0:
# 138 "data//maps/Route6/scripts.pory"
	.string "Past PELLUCA CITY is the MIRROH BASE\n"
	.string "CAMP and a {PKMN} graveyard. I want to go\l"
	.string "there to commune with the afterlife!$"

Route6_Trainer_J_Text_1:
# 138 "data//maps/Route6/scripts.pory"
	.string "I don't want to commune with you!$"

Route6_Trainer_J_Text_2:
# 139 "data//maps/Route6/scripts.pory"
	.string "If we remember our {PKMN} after they go,\n"
	.string "are they truly gone?$"

Route6_NPC1_Text_0:
# 179 "data//maps/Route6/scripts.pory"
	.string "When I was young, there was no route\n"
	.string "through these marshes. Now ROUTE 6\l"
	.string "connects SILVERSUN CITY to PELLUCA\l"
	.string "CITY.$"

Route6_NPC2_Text_0:
# 187 "data//maps/Route6/scripts.pory"
	.string "I wonder what's over there...if I had a\n"
	.string "{PKMN} that knew SURF, I could swim over!$"

Route6_NPC3_Text_0:
# 194 "data//maps/Route6/scripts.pory"
	.string "I want to go to the PELLUCA\n"
	.string "RESTAURANT! The food is supposed to be\l"
	.string "delicious because the head chef\l"
	.string "travels all of CORMORIA looking for rare\l"
	.string "ingredients.$"

Route6_NPC4_Text_0:
# 203 "data//maps/Route6/scripts.pory"
	.string "I've been practicing real hard! What do\n"
	.string "you think?$"

Route6_NPC4_Text_1:
# 205 "data//maps/Route6/scripts.pory"
	.string "I'm no good, but it's so much fun!$"

Route6_NPC4_Text_2:
# 209 "data//maps/Route6/scripts.pory"
	.string "Have you brought a RED FLUTE?$"

Route6_NPC4_Text_3:
# 214 "data//maps/Route6/scripts.pory"
	.string "Yes, this looks amazing! I can't wait to\n"
	.string "start playing it.$"

Route6_NPC4_Text_4:
# 217 "data//maps/Route6/scripts.pory"
	.string "I suppose I don't need this any more.\n"
	.string "Here, why don't you take it? You could\l"
	.string "start a new hobby too!$"

Route6_NPC4_Text_5:
# 221 "data//maps/Route6/scripts.pory"
	.string "No, it looks like you haven't. You can\n"
	.string "get one in PELLUCA CITY.$"

Route6_NPC4_Text_6:
# 227 "data//maps/Route6/scripts.pory"
	.string "These waters are too fierce to fish\n"
	.string "properly...why am I even fishing here?\l"
	.string "I'm so unfocused these days. Maybe I\l"
	.string "need a new hobby. I'd like to try music,\l"
	.string "but I might be no good. What do you\l"
	.string "think? Should I try music?$"

Route6_NPC4_Text_7:
# 230 "data//maps/Route6/scripts.pory"
	.string "You're right - unless I try, I'll never\n"
	.string "know! Say, can you help me out? Can you\l"
	.string "bring me a RED FLUTE so I can start\l"
	.string "practicing?$"

Route6_NPC4_Text_8:
# 233 "data//maps/Route6/scripts.pory"
	.string "Thank you so much! I think you can buy\n"
	.string "them in PELLUCA CITY. I'll be waiting\l"
	.string "here for you!$"

Route6_NPC4_Text_9:
# 236 "data//maps/Route6/scripts.pory"
	.string "Ahh well, it's back to fishing then.$"

Route6_NPC4_Text_10:
# 239 "data//maps/Route6/scripts.pory"
	.string "Yeah...I suppose I'd be no good. Fishing\n"
	.string "is all I know.$"

Route6_Gabrielle_Trigger_Text_0:
# 282 "data//maps/Route6/scripts.pory"
	.string "GRUNT: C'mon GABRIELLE - you've got\n"
	.string "nowhere to run. Now give us your {PKMN}!\p"
	.string "GABRILLE: No! They're mine! Why should\n"
	.string "I give you losers anything?\p"
	.string "GRUNTS: They're property of Team\n"
	.string "Somber, and now that you're out, it's\l"
	.string "only fair that you return them.\p"
	.string "Hehe...we've always been eyeing your\n"
	.string "ZORUA, you know? And now it's time to\l"
	.string "collect!\p"
	.string "GABRIELLE: That's not how it works!\p"
	.string "GRUNT: What are you gonna do? Complain\n"
	.string "to the boss? HAHA!$"

Route6_Gabrielle_Trigger_Text_1:
# 294 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: {PLAYER}, it's you! These\n"
	.string "grunts are trying to take my {PKMN} off me\l"
	.string "- you have to help!$"

Route6_Gabrielle_Trigger_Text_2:
# 298 "data//maps/Route6/scripts.pory"
	.string "GRUNT: Have you no shame GABRIELLE?\n"
	.string "The trainer who got you kicked out is\l"
	.string "now helping you?\p"
	.string "Fine by us! Imagine what the boss'll tell\n"
	.string "us when we take your {PKMN} AND beat the\l"
	.string "trainer that's stopped our plans twice!$"

Route6_Gabrielle_HurryUp_Text_0:
# 323 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: What are you doing? They're\n"
	.string "about to attack!$"

Route6_Gabrielle_DoBattle_Text_0:
# 328 "data//maps/Route6/scripts.pory"
	.string "Stupid ZORUA!$"

Route6_Gabrielle_DoBattle_Text_1:
# 328 "data//maps/Route6/scripts.pory"
	.string "I need better {PKMN}!$"

Route6_Gabrielle_Victory_Text_0:
# 340 "data//maps/Route6/scripts.pory"
	.string "GRUNT: You got lucky that {PLAYER}\n"
	.string "was around, GABRIELLE! Next time we'll\l"
	.string "get your ZOROARK for sure!$"

Route6_Gabrielle_Victory_Text_1:
# 353 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: Thank you {PLAYER}. You\n"
	.string "saved me there.\p"
	.string "Let me heal your {PKMN}.$"

Route6_Gabrielle_Victory_Text_2:
# 357 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: I live PELLUCA CITY, just\n"
	.string "past the HOYA RIVER. I was on my way\l"
	.string "home when those grunts ambushed\l"
	.string "me...I'm going there now. See you around.$"
