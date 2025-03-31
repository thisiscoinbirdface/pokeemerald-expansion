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
	playmoncry SPECIES_MARSHTOMP, CRY_MODE_ENCOUNTER
# 46 "data//maps/Route6/scripts.pory"
	waitmoncry
# 48 "data//maps/Route6/scripts.pory"
	setwildbattle SPECIES_MARSHTOMP, 25
# 49 "data//maps/Route6/scripts.pory"
	dowildbattle
# 51 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_MARSHTOMP
# 52 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_A::
# 59 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_A, Route6_Trainer_A_Text_0, Route6_Trainer_A_Text_1
# 60 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_A_Text_2
# 61 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_B::
# 66 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_B, Route6_Trainer_B_Text_0, Route6_Trainer_B_Text_1
# 67 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_B_Text_2
# 68 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C1::
# 73 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C1_Text_0, Route6_Trainer_C1_Text_1
# 74 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C1_Text_2
# 75 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C2::
# 80 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C2_Text_0, Route6_Trainer_C1_Text_1
# 81 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C2_Text_1
# 82 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_D::
# 87 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_D, Route6_Trainer_D_Text_0, Route6_Trainer_D_Text_1
# 88 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_D_Text_2
# 89 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_E::
# 94 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_E, Route6_Trainer_E_Text_0, Route6_Trainer_E_Text_1
# 95 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_E_Text_2
# 96 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_F::
# 101 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_F, Route6_Trainer_F_Text_0, Route6_Trainer_F_Text_1
# 102 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_F_Text_2
# 103 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_G::
# 108 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_G, Route6_Trainer_G_Text_0, Route6_Trainer_G_Text_1
# 109 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_G_Text_2
# 110 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_H::
# 115 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_H, Route6_Trainer_H_Text_0, Route6_Trainer_H_Text_1
# 116 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_H_Text_2
# 117 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_I::
# 122 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_I, Route6_Trainer_I_Text_0, Route6_Trainer_I_Text_1
# 123 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_I_Text_2
# 124 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_J::
# 129 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_J, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 130 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 131 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_K::
# 136 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_K, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 137 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 138 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC1::
# 168 "data//maps/Route6/scripts.pory"
	lockall
# 169 "data//maps/Route6/scripts.pory"
	faceplayer
# 170 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC1_Text_0
# 171 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC2::
# 176 "data//maps/Route6/scripts.pory"
	lockall
# 177 "data//maps/Route6/scripts.pory"
	faceplayer
# 178 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC2_Text_0
# 179 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC3::
# 183 "data//maps/Route6/scripts.pory"
	lockall
# 184 "data//maps/Route6/scripts.pory"
	faceplayer
# 185 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC3_Text_0
# 186 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC4::
# 190 "data//maps/Route6/scripts.pory"
	lockall
# 191 "data//maps/Route6/scripts.pory"
	faceplayer
# 193 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 2
	goto_if_eq Route6_NPC4_2
Route6_NPC4_1:
# 199 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 1
	goto_if_eq Route6_NPC4_5
Route6_NPC4_4:
# 217 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 0
	goto_if_eq Route6_NPC4_8
Route6_NPC4_7:
# 235 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_NPC4_2:
# 194 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_0
# 195 "data//maps/Route6/scripts.pory"
	release
# 196 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_1
	goto Route6_NPC4_1

Route6_NPC4_5:
# 200 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_2, MSGBOX_YESNO
# 202 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_10
	goto Route6_NPC4_4

Route6_NPC4_8:
# 218 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_6, MSGBOX_YESNO
# 219 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_12
# 230 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_10
	goto Route6_NPC4_7

Route6_NPC4_10:
	checkitem ITEM_RED_FLUTE
# 0 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route6_NPC4_15
# 212 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_5
	goto Route6_NPC4_4

Route6_NPC4_12:
# 221 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_7, MSGBOX_YESNO
# 222 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_18
# 227 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_9
	goto Route6_NPC4_7

Route6_NPC4_15:
# 205 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_3
# 206 "data//maps/Route6/scripts.pory"
	release
# 207 "data//maps/Route6/scripts.pory"
	removeitem ITEM_RED_FLUTE
# 208 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_4
# 209 "data//maps/Route6/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 210 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 2
	goto Route6_NPC4_4

Route6_NPC4_18:
# 224 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_8
# 225 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 1
	goto Route6_NPC4_7


Route6_Gabrielle_Trigger::
# 265 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger_2
# 267 "data//maps/Route6/scripts.pory"
	lockall
# 271 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_0
# 272 "data//maps/Route6/scripts.pory"
	delay 24
# 273 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_0
# 274 "data//maps/Route6/scripts.pory"
	release
# 277 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_1
# 278 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 279 "data//maps/Route6/scripts.pory"
	delay 24
# 280 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_2
# 281 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 282 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_3
# 283 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_3
# 285 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_1
# 286 "data//maps/Route6/scripts.pory"
	release
# 287 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_4
# 288 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_4
# 289 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_2
# 290 "data//maps/Route6/scripts.pory"
	release
# 292 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_5
# 293 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_5
# 294 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_6
# 295 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger_Movement_7
# 296 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 298 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return

Route6_Gabrielle_Trigger_2:
	end


Route6_Gabrielle_ChooseDoubleBattleParty::
# 303 "data//maps/Route6/scripts.pory"
	special SavePlayerParty
# 304 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 305 "data//maps/Route6/scripts.pory"
	special ChooseHalfPartyForBattle
# 306 "data//maps/Route6/scripts.pory"
	waitstate
# 307 "data//maps/Route6/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route6_Gabrielle_DoBattle
# 308 "data//maps/Route6/scripts.pory"
	special LoadPlayerParty
# 309 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_HurryUp
	return


Route6_Gabrielle_HurryUp::
# 314 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_HurryUp_Text_0
# 315 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_DoBattle::
# 319 "data//maps/Route6/scripts.pory"
	multi_2_vs_2 TRAINER_ROUTE6_GRUNT1, Route6_Gabrielle_DoBattle_Text_0, TRAINER_ROUTE6_GRUNT2, Route6_Gabrielle_DoBattle_Text_1, PARTNER_ROUTE6_GAB
# 320 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Gabrielle_DoBattle_2
Route6_Gabrielle_DoBattle_1:
# 323 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 324 "data//maps/Route6/scripts.pory"
	special SetCB2WhiteOut
# 325 "data//maps/Route6/scripts.pory"
	waitstate
	return

Route6_Gabrielle_DoBattle_2:
# 321 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Victory
	goto Route6_Gabrielle_DoBattle_1


Route6_Gabrielle_Victory::
# 331 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_0
# 332 "data//maps/Route6/scripts.pory"
	release
# 334 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_0
# 335 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Victory_Movement_1
# 336 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 338 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT1
# 339 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT2
# 341 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_3
# 342 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Victory_Movement_2
# 344 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_1
# 345 "data//maps/Route6/scripts.pory"
	release
# 346 "data//maps/Route6/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 348 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_2
# 349 "data//maps/Route6/scripts.pory"
	release
# 350 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_3
# 351 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 352 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GAB
# 353 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_GABRIELLE_BULLY
# 355 "data//maps/Route6/scripts.pory"
	releaseall
	return


# 271 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_0:
# 271 "data//maps/Route6/scripts.pory"
	jump_in_place_right
	step_end

# 277 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_1:
# 277 "data//maps/Route6/scripts.pory"
	emote_exclamation_mark
	step_end

# 280 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_2:
# 280 "data//maps/Route6/scripts.pory"
	walk_down
# 280 "data//maps/Route6/scripts.pory"
	walk_down
# 280 "data//maps/Route6/scripts.pory"
	walk_left
# 280 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 282 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_3:
# 282 "data//maps/Route6/scripts.pory"
	face_down
	step_end

# 287 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_4:
# 287 "data//maps/Route6/scripts.pory"
	jump_in_place_down
	step_end

# 292 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_5:
# 292 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 294 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_6:
# 294 "data//maps/Route6/scripts.pory"
	walk_right
# 294 "data//maps/Route6/scripts.pory"
	walk_right
# 294 "data//maps/Route6/scripts.pory"
	walk_up
# 294 "data//maps/Route6/scripts.pory"
	walk_up
# 294 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 295 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_7:
# 295 "data//maps/Route6/scripts.pory"
	walk_right
# 295 "data//maps/Route6/scripts.pory"
	walk_right
# 295 "data//maps/Route6/scripts.pory"
	walk_right
# 295 "data//maps/Route6/scripts.pory"
	walk_up
# 295 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 334 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_0:
# 334 "data//maps/Route6/scripts.pory"
	walk_down
# 334 "data//maps/Route6/scripts.pory"
	walk_down
# 334 "data//maps/Route6/scripts.pory"
	walk_left
# 334 "data//maps/Route6/scripts.pory"
	walk_left
# 334 "data//maps/Route6/scripts.pory"
	walk_left
# 334 "data//maps/Route6/scripts.pory"
	walk_down
# 334 "data//maps/Route6/scripts.pory"
	walk_down
# 334 "data//maps/Route6/scripts.pory"
	walk_down
# 334 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 335 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_1:
# 335 "data//maps/Route6/scripts.pory"
	walk_down
# 335 "data//maps/Route6/scripts.pory"
	walk_left
# 335 "data//maps/Route6/scripts.pory"
	walk_left
# 335 "data//maps/Route6/scripts.pory"
	walk_left
# 335 "data//maps/Route6/scripts.pory"
	walk_down
# 335 "data//maps/Route6/scripts.pory"
	walk_down
# 335 "data//maps/Route6/scripts.pory"
	walk_down
# 335 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 342 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_2:
# 342 "data//maps/Route6/scripts.pory"
	face_up
	step_end

# 350 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_3:
# 350 "data//maps/Route6/scripts.pory"
	walk_left
# 350 "data//maps/Route6/scripts.pory"
	walk_down
# 350 "data//maps/Route6/scripts.pory"
	walk_down
# 350 "data//maps/Route6/scripts.pory"
	walk_left
# 350 "data//maps/Route6/scripts.pory"
	walk_left
# 350 "data//maps/Route6/scripts.pory"
	walk_left
# 350 "data//maps/Route6/scripts.pory"
	walk_down
# 350 "data//maps/Route6/scripts.pory"
	walk_down
# 350 "data//maps/Route6/scripts.pory"
	walk_down
# 350 "data//maps/Route6/scripts.pory"
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

Route6_Trainer_A_Text_0:
# 59 "data//maps/Route6/scripts.pory"
	.string "The marshes of Route 6 are teeming with\n"
	.string "life. Let's see how well you handle it!$"

Route6_Trainer_A_Text_1:
# 59 "data//maps/Route6/scripts.pory"
	.string "Impressive!$"

Route6_Trainer_A_Text_2:
# 60 "data//maps/Route6/scripts.pory"
	.string "Looks like you can handle yourself in\n"
	.string "these parts.$"

Route6_Trainer_B_Text_0:
# 66 "data//maps/Route6/scripts.pory"
	.string "The road to Pelluca City is\n"
	.string "long....beating you will give me energy!$"

Route6_Trainer_B_Text_1:
# 66 "data//maps/Route6/scripts.pory"
	.string "I lost even more energy!$"

Route6_Trainer_B_Text_2:
# 67 "data//maps/Route6/scripts.pory"
	.string "Maybe I should take a Corviknight Taxi\n"
	.string "to Pelluca City instead.$"

Route6_Trainer_C1_Text_0:
# 73 "data//maps/Route6/scripts.pory"
	.string "We're from the Pokemon Ranger\n"
	.string "Institute. We're on assignment to\l"
	.string "survey new {PKMN}. Have you got any?$"

Route6_Trainer_C1_Text_1:
# 73 "data//maps/Route6/scripts.pory"
	.string "You do have new {PKMN}$"

Route6_Trainer_C1_Text_2:
# 74 "data//maps/Route6/scripts.pory"
	.string "The Pokemon Ranger Institute is the\n"
	.string "headquarters for us Rangers in\l"
	.string "CORMORIA.$"

Route6_Trainer_C2_Text_0:
# 80 "data//maps/Route6/scripts.pory"
	.string "We're from the Ranger Institute. We're\n"
	.string "on assignment to survey new {PKMN}. Have\l"
	.string "you got any?$"

Route6_Trainer_C2_Text_1:
# 81 "data//maps/Route6/scripts.pory"
	.string "The Ranger Institute gives us newbies\n"
	.string "such hard assignments!$"

Route6_Trainer_D_Text_0:
# 87 "data//maps/Route6/scripts.pory"
	.string "The secret to catching strong Water\n"
	.string "Pokémon? Patience and a CASTING ROD.\l"
	.string "Too bad you don't have one!$"

Route6_Trainer_D_Text_1:
# 87 "data//maps/Route6/scripts.pory"
	.string "I need a Super Rod!$"

Route6_Trainer_D_Text_2:
# 88 "data//maps/Route6/scripts.pory"
	.string "I wonder what {PKMN} I can catch here with\n"
	.string "a Super Rod...$"

Route6_Trainer_E_Text_0:
# 94 "data//maps/Route6/scripts.pory"
	.string "I'm aiming to be the {PKMN} Champion, so\n"
	.string "I've come here to catch rare {PKMN}. Let me\l"
	.string "test them on you!$"

Route6_Trainer_E_Text_1:
# 94 "data//maps/Route6/scripts.pory"
	.string "No - my rare {PKMN}!$"

Route6_Trainer_E_Text_2:
# 95 "data//maps/Route6/scripts.pory"
	.string "Catching good {PKMN} isn't enough. I need\n"
	.string "to train rigorously too.$"

Route6_Trainer_F_Text_0:
# 101 "data//maps/Route6/scripts.pory"
	.string "My CROAGUNK and I love to train here\n"
	.string "because it makes us tough!$"

Route6_Trainer_F_Text_1:
# 101 "data//maps/Route6/scripts.pory"
	.string "We're not tough eonugh!$"

Route6_Trainer_F_Text_2:
# 102 "data//maps/Route6/scripts.pory"
	.string "Wading around in the marshes here works\n"
	.string "your core!$"

Route6_Trainer_G_Text_0:
# 108 "data//maps/Route6/scripts.pory"
	.string "Us BREEDERS like to train one type of\n"
	.string "{PKMN}. I specialise in dogs!$"

Route6_Trainer_G_Text_1:
# 108 "data//maps/Route6/scripts.pory"
	.string "Guess I was more bark than bite!$"

Route6_Trainer_G_Text_2:
# 109 "data//maps/Route6/scripts.pory"
	.string "Dog {PKMN} are rare in CORMORIA! Someone in\n"
	.string "PELLUCA CITY traded me my HOUNDOOR.$"

Route6_Trainer_H_Text_0:
# 115 "data//maps/Route6/scripts.pory"
	.string "This weather is prime for my BUG-type\n"
	.string "{PKMN}! You won't be able to handle it!$"

Route6_Trainer_H_Text_1:
# 115 "data//maps/Route6/scripts.pory"
	.string "The weather is fickle!$"

Route6_Trainer_H_Text_2:
# 116 "data//maps/Route6/scripts.pory"
	.string "Although bugs thrive in marshes, there\n"
	.string "aren't many BUG-type {PKMN} around here.$"

Route6_Trainer_I_Text_0:
# 122 "data//maps/Route6/scripts.pory"
	.string "I heard there was a rare DRAGON-type\n"
	.string "{PKMN} here in Route 6, but I can't find any\l"
	.string "on land!$"

Route6_Trainer_I_Text_1:
# 122 "data//maps/Route6/scripts.pory"
	.string "Why did I find you instead?$"

Route6_Trainer_I_Text_2:
# 123 "data//maps/Route6/scripts.pory"
	.string "If its not on land, then maybe I need to\n"
	.string "try fishing...$"

Route6_Trainer_J_Text_0:
# 129 "data//maps/Route6/scripts.pory"
	.string "Past PELLUCA CITY is the MIRROH BASE\n"
	.string "CAMP and a {PKMN} graveyard. I want to go\l"
	.string "there to commune with the afterlife!$"

Route6_Trainer_J_Text_1:
# 129 "data//maps/Route6/scripts.pory"
	.string "I don't want to commune with you!$"

Route6_Trainer_J_Text_2:
# 130 "data//maps/Route6/scripts.pory"
	.string "If we remember our {PKMN} after they go,\n"
	.string "are they truly gone?$"

Route6_NPC1_Text_0:
# 170 "data//maps/Route6/scripts.pory"
	.string "When I was young, there was no route\n"
	.string "through these marshes. Now ROUTE 6\l"
	.string "connects SILVERSUN CITY to PELLUCA\l"
	.string "CITY.$"

Route6_NPC2_Text_0:
# 178 "data//maps/Route6/scripts.pory"
	.string "I wonder what's over there...if I had a\n"
	.string "{PKMN} that knew SURF, I could swim over!$"

Route6_NPC3_Text_0:
# 185 "data//maps/Route6/scripts.pory"
	.string "I want to go to the PELLUCA\n"
	.string "RESTAURANT! The food is supposed to be\l"
	.string "delicious because the head chef\l"
	.string "travels all of CORMORIA looking for rare\l"
	.string "ingredients.$"

Route6_NPC4_Text_0:
# 194 "data//maps/Route6/scripts.pory"
	.string "I've been practicing real hard! What do\n"
	.string "you think?$"

Route6_NPC4_Text_1:
# 196 "data//maps/Route6/scripts.pory"
	.string "I'm no good, but it's so much fun!$"

Route6_NPC4_Text_2:
# 200 "data//maps/Route6/scripts.pory"
	.string "Have you brought a RED FLUTE?$"

Route6_NPC4_Text_3:
# 205 "data//maps/Route6/scripts.pory"
	.string "Yes, this looks amazing! I can't wait to\n"
	.string "start playing it.$"

Route6_NPC4_Text_4:
# 208 "data//maps/Route6/scripts.pory"
	.string "I suppose I don't need this any more.\n"
	.string "Here, why don't you take it? You could\l"
	.string "start a new hobby too!$"

Route6_NPC4_Text_5:
# 212 "data//maps/Route6/scripts.pory"
	.string "No, it looks like you haven't. You can\n"
	.string "get one in PELLUCA CITY.$"

Route6_NPC4_Text_6:
# 218 "data//maps/Route6/scripts.pory"
	.string "These waters are too fierce to fish\n"
	.string "properly...why am I even fishing here?\l"
	.string "I'm so unfocused these days. Maybe I\l"
	.string "need a new hobby. I'd like to try music,\l"
	.string "but I might be no good. What do you\l"
	.string "think? Should I try music?$"

Route6_NPC4_Text_7:
# 221 "data//maps/Route6/scripts.pory"
	.string "You're right - unless I try, I'll never\n"
	.string "know! Say, can you help me out? Can you\l"
	.string "bring me a RED FLUTE so I can start\l"
	.string "practicing?$"

Route6_NPC4_Text_8:
# 224 "data//maps/Route6/scripts.pory"
	.string "Thank you so much! I think you can buy\n"
	.string "them in PELLUCA CITY. I'll be waiting\l"
	.string "here for you!$"

Route6_NPC4_Text_9:
# 227 "data//maps/Route6/scripts.pory"
	.string "Ahh well, it's back to fishing then.$"

Route6_NPC4_Text_10:
# 230 "data//maps/Route6/scripts.pory"
	.string "Yeah...I suppose I'd be no good. Fishing\n"
	.string "is all I know.$"

Route6_Gabrielle_Trigger_Text_0:
# 273 "data//maps/Route6/scripts.pory"
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
# 285 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: {PLAYER}, it's you! These\n"
	.string "grunts are trying to take my {PKMN} off me\l"
	.string "- you have to help!$"

Route6_Gabrielle_Trigger_Text_2:
# 289 "data//maps/Route6/scripts.pory"
	.string "GRUNT: Have you no shame GABRIELLE?\n"
	.string "The trainer who got you kicked out is\l"
	.string "now helping you?\p"
	.string "Fine by us! Imagine what the boss'll tell\n"
	.string "us when we take your {PKMN} AND beat the\l"
	.string "trainer that's stopped our plans twice!$"

Route6_Gabrielle_HurryUp_Text_0:
# 314 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: What are you doing? They're\n"
	.string "about to attack!$"

Route6_Gabrielle_DoBattle_Text_0:
# 319 "data//maps/Route6/scripts.pory"
	.string "Stupid ZORUA!$"

Route6_Gabrielle_DoBattle_Text_1:
# 319 "data//maps/Route6/scripts.pory"
	.string "I need better {PKMN}!$"

Route6_Gabrielle_Victory_Text_0:
# 331 "data//maps/Route6/scripts.pory"
	.string "GRUNT: You got lucky that {PLAYER}\n"
	.string "was around, GABRIELLE! Next time we'll\l"
	.string "get your ZOROARK for sure!$"

Route6_Gabrielle_Victory_Text_1:
# 344 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: Thank you {PLAYER}. You\n"
	.string "saved me there.\p"
	.string "Let me heal your {PKMN}.$"

Route6_Gabrielle_Victory_Text_2:
# 348 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: I live PELLUCA CITY, just\n"
	.string "past the HOYA RIVER. I was on my way\l"
	.string "home when those grunts ambushed\l"
	.string "me...I'm going there now. See you around.$"
