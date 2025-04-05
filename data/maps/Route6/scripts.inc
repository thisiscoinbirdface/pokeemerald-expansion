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
	msgbox Route6_EventScript_Nurse_Text_1
# 39 "data//maps/Route6/scripts.pory"
	release
	return


Route6_Marshtomp::
# 45 "data//maps/Route6/scripts.pory"
	lockall
# 46 "data//maps/Route6/scripts.pory"
	faceplayer
# 47 "data//maps/Route6/scripts.pory"
	applymovement 32, Route6_Marshtomp_Movement_0
# 48 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 49 "data//maps/Route6/scripts.pory"
	delay 16
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
	trainerbattle_single TRAINER_ROUTE6_K, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 142 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
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
	checkitem ITEM_FRESH_START_MOCHI
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
	removeitem ITEM_FRESH_START_MOCHI
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


Route6_Gabrielle_Trigger::
# 268 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger_2
# 270 "data//maps/Route6/scripts.pory"
	lockall
# 274 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_0
# 275 "data//maps/Route6/scripts.pory"
	delay 24
# 276 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_0
# 277 "data//maps/Route6/scripts.pory"
	release
# 280 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Marshtomp_Movement_0
# 281 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 282 "data//maps/Route6/scripts.pory"
	delay 24
# 283 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_1
# 284 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 285 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_2
# 286 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_2
# 288 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_1
# 289 "data//maps/Route6/scripts.pory"
	release
# 290 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_3
# 291 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_3
# 292 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_2
# 293 "data//maps/Route6/scripts.pory"
	release
# 295 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_4
# 296 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_4
# 297 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_5
# 298 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger_Movement_6
# 299 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 301 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return

Route6_Gabrielle_Trigger_2:
	end


Route6_Gabrielle_ChooseDoubleBattleParty::
# 306 "data//maps/Route6/scripts.pory"
	special SavePlayerParty
# 307 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 308 "data//maps/Route6/scripts.pory"
	special ChooseHalfPartyForBattle
# 309 "data//maps/Route6/scripts.pory"
	waitstate
# 310 "data//maps/Route6/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route6_Gabrielle_DoBattle
# 311 "data//maps/Route6/scripts.pory"
	special LoadPlayerParty
# 312 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_HurryUp
	return


Route6_Gabrielle_HurryUp::
# 317 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_HurryUp_Text_0
# 318 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_DoBattle::
# 322 "data//maps/Route6/scripts.pory"
	multi_2_vs_2 TRAINER_ROUTE6_GRUNT1, Route6_Gabrielle_DoBattle_Text_0, TRAINER_ROUTE6_GRUNT2, Route6_Gabrielle_DoBattle_Text_1, PARTNER_ROUTE6_GAB
# 323 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Gabrielle_DoBattle_2
Route6_Gabrielle_DoBattle_1:
# 326 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 327 "data//maps/Route6/scripts.pory"
	special SetCB2WhiteOut
# 328 "data//maps/Route6/scripts.pory"
	waitstate
	return

Route6_Gabrielle_DoBattle_2:
# 324 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Victory
	goto Route6_Gabrielle_DoBattle_1


Route6_Gabrielle_Victory::
# 334 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_0
# 335 "data//maps/Route6/scripts.pory"
	release
# 337 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_0
# 338 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Victory_Movement_1
# 339 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 341 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT1
# 342 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT2
# 344 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_2
# 345 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Victory_Movement_2
# 347 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_1
# 348 "data//maps/Route6/scripts.pory"
	release
# 349 "data//maps/Route6/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 351 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_2
# 352 "data//maps/Route6/scripts.pory"
	release
# 353 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_3
# 354 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 355 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GAB
# 356 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_GABRIELLE_BULLY
# 358 "data//maps/Route6/scripts.pory"
	releaseall
	return


# 47 "data//maps/Route6/scripts.pory"
Route6_Marshtomp_Movement_0:
# 47 "data//maps/Route6/scripts.pory"
	emote_exclamation_mark
	step_end

# 274 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_0:
# 274 "data//maps/Route6/scripts.pory"
	jump_in_place_right
	step_end

# 283 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_1:
# 283 "data//maps/Route6/scripts.pory"
	walk_down
# 283 "data//maps/Route6/scripts.pory"
	walk_down
# 283 "data//maps/Route6/scripts.pory"
	walk_left
# 283 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 285 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_2:
# 285 "data//maps/Route6/scripts.pory"
	face_down
	step_end

# 290 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_3:
# 290 "data//maps/Route6/scripts.pory"
	jump_in_place_down
	step_end

# 295 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_4:
# 295 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 297 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_5:
# 297 "data//maps/Route6/scripts.pory"
	walk_right
# 297 "data//maps/Route6/scripts.pory"
	walk_right
# 297 "data//maps/Route6/scripts.pory"
	walk_up
# 297 "data//maps/Route6/scripts.pory"
	walk_up
# 297 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 298 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_6:
# 298 "data//maps/Route6/scripts.pory"
	walk_right
# 298 "data//maps/Route6/scripts.pory"
	walk_right
# 298 "data//maps/Route6/scripts.pory"
	walk_right
# 298 "data//maps/Route6/scripts.pory"
	walk_up
# 298 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 337 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_0:
# 337 "data//maps/Route6/scripts.pory"
	walk_down
# 337 "data//maps/Route6/scripts.pory"
	walk_down
# 337 "data//maps/Route6/scripts.pory"
	walk_left
# 337 "data//maps/Route6/scripts.pory"
	walk_left
# 337 "data//maps/Route6/scripts.pory"
	walk_left
# 337 "data//maps/Route6/scripts.pory"
	walk_down
# 337 "data//maps/Route6/scripts.pory"
	walk_down
# 337 "data//maps/Route6/scripts.pory"
	walk_down
# 337 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 338 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_1:
# 338 "data//maps/Route6/scripts.pory"
	walk_down
# 338 "data//maps/Route6/scripts.pory"
	walk_left
# 338 "data//maps/Route6/scripts.pory"
	walk_left
# 338 "data//maps/Route6/scripts.pory"
	walk_left
# 338 "data//maps/Route6/scripts.pory"
	walk_down
# 338 "data//maps/Route6/scripts.pory"
	walk_down
# 338 "data//maps/Route6/scripts.pory"
	walk_down
# 338 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 345 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_2:
# 345 "data//maps/Route6/scripts.pory"
	face_up
	step_end

# 353 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_3:
# 353 "data//maps/Route6/scripts.pory"
	walk_left
# 353 "data//maps/Route6/scripts.pory"
	walk_down
# 353 "data//maps/Route6/scripts.pory"
	walk_down
# 353 "data//maps/Route6/scripts.pory"
	walk_left
# 353 "data//maps/Route6/scripts.pory"
	walk_left
# 353 "data//maps/Route6/scripts.pory"
	walk_left
# 353 "data//maps/Route6/scripts.pory"
	walk_down
# 353 "data//maps/Route6/scripts.pory"
	walk_down
# 353 "data//maps/Route6/scripts.pory"
	walk_down
# 353 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

Route6_Nurse_Demo_Text_0:
# 20 "data//maps/Route6/scripts.pory"
	.string "This area is closed for the demo.$"

Route6_EventScript_Nurse_Text_0:
# 35 "data//maps/Route6/scripts.pory"
	.string "Oh I don't know what happened! I went\n"
	.string "out for a walk and ended up in this\l"
	.string "storm! I'm waiting here till it passes.\l"
	.string "If you have a HEAL PASS, CHANSEY can\l"
	.string "heal your {PKMN} meanwhile.$"

Route6_EventScript_Nurse_Text_1:
# 38 "data//maps/Route6/scripts.pory"
	.string "Be careful - once you slide down this\n"
	.string "ledge, you won't be able to come back!$"

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
	.string "We're from the Pokemon Ranger\n"
	.string "Institute. We're on assignment to\l"
	.string "survey new {PKMN}. Have you got any?$"

Route6_Trainer_C1_Text_1:
# 78 "data//maps/Route6/scripts.pory"
	.string "You do have new {PKMN}$"

Route6_Trainer_C1_Text_2:
# 79 "data//maps/Route6/scripts.pory"
	.string "The Pokemon Ranger Institute is the\n"
	.string "headquarters for us Rangers in\l"
	.string "CORMORIA.$"

Route6_Trainer_C2_Text_0:
# 85 "data//maps/Route6/scripts.pory"
	.string "We're from the Ranger Institute. We're\n"
	.string "on assignment to survey new {PKMN}. Have\l"
	.string "you got any?$"

Route6_Trainer_C2_Text_1:
# 86 "data//maps/Route6/scripts.pory"
	.string "The Ranger Institute gives us newbies\n"
	.string "such hard assignments!$"

Route6_Trainer_D_Text_0:
# 92 "data//maps/Route6/scripts.pory"
	.string "The secret to catching strong Water\n"
	.string "Pokémon? Patience and a CASTING ROD.\l"
	.string "Too bad you don't have one!$"

Route6_Trainer_D_Text_1:
# 92 "data//maps/Route6/scripts.pory"
	.string "You beat me without a rod!$"

Route6_Trainer_D_Text_2:
# 93 "data//maps/Route6/scripts.pory"
	.string "I wonder what {PKMN} I can catch here with\n"
	.string "a TROLLING ROD instead...$"

Route6_Trainer_E_Text_0:
# 99 "data//maps/Route6/scripts.pory"
	.string "I'm aiming to be the {PKMN} Champion, so\n"
	.string "I've come here to catch rare {PKMN}. Let me\l"
	.string "test them on you!$"

Route6_Trainer_E_Text_1:
# 99 "data//maps/Route6/scripts.pory"
	.string "No - my rare {PKMN}!$"

Route6_Trainer_E_Text_2:
# 100 "data//maps/Route6/scripts.pory"
	.string "Catching good {PKMN} isn't enough. I need\n"
	.string "to train rigorously too.$"

Route6_Trainer_F_Text_0:
# 106 "data//maps/Route6/scripts.pory"
	.string "My CROAGUNK and I love to train here\n"
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
	.string "Us BREEDERS like to train one type of\n"
	.string "{PKMN}. I specialise in dogs!$"

Route6_Trainer_G_Text_1:
# 113 "data//maps/Route6/scripts.pory"
	.string "Guess I was more bark than bite!$"

Route6_Trainer_G_Text_2:
# 114 "data//maps/Route6/scripts.pory"
	.string "Dog {PKMN} are rare in CORMORIA! Someone in\n"
	.string "Pelluca City traded me my HOUNDOOR.$"

Route6_Trainer_H_Text_0:
# 120 "data//maps/Route6/scripts.pory"
	.string "This weather is prime for my BUG-type\n"
	.string "{PKMN}! You won't be able to handle it!$"

Route6_Trainer_H_Text_1:
# 120 "data//maps/Route6/scripts.pory"
	.string "The weather is fickle!$"

Route6_Trainer_H_Text_2:
# 121 "data//maps/Route6/scripts.pory"
	.string "Although bugs thrive in marshes, there\n"
	.string "aren't many BUG-type {PKMN} around here.$"

Route6_Trainer_I_Text_0:
# 127 "data//maps/Route6/scripts.pory"
	.string "I heard there was a rare DRAGON-type\n"
	.string "{PKMN} here in Route 6, but I can't find any\l"
	.string "on land!$"

Route6_Trainer_I_Text_1:
# 127 "data//maps/Route6/scripts.pory"
	.string "Why did I find you instead?$"

Route6_Trainer_I_Text_2:
# 128 "data//maps/Route6/scripts.pory"
	.string "If its not on land, then maybe I need to\n"
	.string "try fishing...$"

Route6_Trainer_J_Text_0:
# 134 "data//maps/Route6/scripts.pory"
	.string "Past Pelluca City is the Mirroh Base\n"
	.string "Camp and a {PKMN} graveyard. I want to go\l"
	.string "there to commune with the afterlife!$"

Route6_Trainer_J_Text_1:
# 134 "data//maps/Route6/scripts.pory"
	.string "I don't want to commune with you!$"

Route6_Trainer_J_Text_2:
# 135 "data//maps/Route6/scripts.pory"
	.string "If we remember our {PKMN} after they go,\n"
	.string "are they truly gone?$"

Route6_NPC1_Text_0:
# 175 "data//maps/Route6/scripts.pory"
	.string "When I was young, there was no route\n"
	.string "through these marshes. Now Route 6\l"
	.string "connects Silversun City to Pelluca\l"
	.string "City.$"

Route6_NPC2_Text_0:
# 183 "data//maps/Route6/scripts.pory"
	.string "I wonder what's over there...if I had a\n"
	.string "{PKMN} that knew SURF, I could swim over!$"

Route6_NPC3_Text_0:
# 190 "data//maps/Route6/scripts.pory"
	.string "I want to go to the Pelluca Restaurant!\n"
	.string "The food is supposed to be delicious\l"
	.string "because the head chef travels all of\l"
	.string "CORMORIA looking for rare ingredients.$"

Route6_NPC4_Text_0:
# 199 "data//maps/Route6/scripts.pory"
	.string "I've been too busy eating to cook! I\n"
	.string "guess you can switch the hobby all you\l"
	.string "want, but you have to work on yourself\l"
	.string "to see real change.$"

Route6_NPC4_Text_1:
# 203 "data//maps/Route6/scripts.pory"
	.string "Have you brought a MOCHI?$"

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
	.string "to try making MOCHI but I don't know\l"
	.string "what it tastes like. Can you bring me\l"
	.string "one?$"

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

Route6_Gabrielle_Trigger_Text_0:
# 276 "data//maps/Route6/scripts.pory"
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
# 288 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: {PLAYER}, it's you! These\n"
	.string "grunts are trying to take my {PKMN} off me\l"
	.string "- you have to help!$"

Route6_Gabrielle_Trigger_Text_2:
# 292 "data//maps/Route6/scripts.pory"
	.string "GRUNT: Have you no shame GABRIELLE?\n"
	.string "The trainer who got you kicked out is\l"
	.string "now helping you?\p"
	.string "Fine by us! Imagine what the boss'll tell\n"
	.string "us when we take your {PKMN} AND beat the\l"
	.string "trainer that's stopped our plans twice!$"

Route6_Gabrielle_HurryUp_Text_0:
# 317 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: What are you doing? They're\n"
	.string "about to attack!$"

Route6_Gabrielle_DoBattle_Text_0:
# 322 "data//maps/Route6/scripts.pory"
	.string "Stupid ZORUA!$"

Route6_Gabrielle_DoBattle_Text_1:
# 322 "data//maps/Route6/scripts.pory"
	.string "I need better {PKMN}!$"

Route6_Gabrielle_Victory_Text_0:
# 334 "data//maps/Route6/scripts.pory"
	.string "GRUNT: You got lucky that {PLAYER}\n"
	.string "was around, GABRIELLE! Next time we'll\l"
	.string "get your ZOROARK for sure!$"

Route6_Gabrielle_Victory_Text_1:
# 347 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: Thank you {PLAYER}. You\n"
	.string "saved me there.\p"
	.string "Let me heal your {PKMN}.$"

Route6_Gabrielle_Victory_Text_2:
# 351 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: I live Pelluca City, just\n"
	.string "past the Hoya River. I was on my way\l"
	.string "home when those grunts ambushed\l"
	.string "me...I'm going there now. See you around.$"
