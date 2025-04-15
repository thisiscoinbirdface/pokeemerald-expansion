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
	msgbox Route6_Marshtomp_Text_0
# 51 "data//maps/Route6/scripts.pory"
	playmoncry SPECIES_MARSHTOMP, CRY_MODE_ENCOUNTER
# 52 "data//maps/Route6/scripts.pory"
	waitmoncry
# 54 "data//maps/Route6/scripts.pory"
	setwildbattle SPECIES_MARSHTOMP, 25
# 55 "data//maps/Route6/scripts.pory"
	dowildbattle
# 57 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_MARSHTOMP
# 58 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_A::
# 65 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_A, Route6_Trainer_A_Text_0, Route6_Trainer_A_Text_1
# 66 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_A_Text_2
# 67 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_B::
# 72 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_B, Route6_Trainer_B_Text_0, Route6_Trainer_B_Text_1
# 73 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_B_Text_2
# 74 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C1::
# 79 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C1_Text_0, Route6_Trainer_C1_Text_1
# 80 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C1_Text_2
# 81 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C2::
# 86 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C2_Text_0, Route6_Trainer_C1_Text_1
# 87 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C2_Text_1
# 88 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_D::
# 93 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_D, Route6_Trainer_D_Text_0, Route6_Trainer_D_Text_1
# 94 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_D_Text_2
# 95 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_E::
# 100 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_E, Route6_Trainer_E_Text_0, Route6_Trainer_E_Text_1
# 101 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_E_Text_2
# 102 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_F::
# 107 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_F, Route6_Trainer_F_Text_0, Route6_Trainer_F_Text_1
# 108 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_F_Text_2
# 109 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_G::
# 114 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_G, Route6_Trainer_G_Text_0, Route6_Trainer_G_Text_1
# 115 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_G_Text_2
# 116 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_H::
# 121 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_H, Route6_Trainer_H_Text_0, Route6_Trainer_H_Text_1
# 122 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_H_Text_2
# 123 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_I::
# 128 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_I, Route6_Trainer_I_Text_0, Route6_Trainer_I_Text_1
# 129 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_I_Text_2
# 130 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_J::
# 135 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_J, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 136 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 137 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_K::
# 142 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_K, Route6_Trainer_K_Text_0, Route6_Trainer_K_Text_1
# 143 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_K_Text_2
# 144 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC1::
# 174 "data//maps/Route6/scripts.pory"
	lockall
# 175 "data//maps/Route6/scripts.pory"
	faceplayer
# 176 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC1_Text_0
# 177 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC2::
# 182 "data//maps/Route6/scripts.pory"
	lockall
# 183 "data//maps/Route6/scripts.pory"
	faceplayer
# 184 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC2_Text_0
# 185 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC3::
# 189 "data//maps/Route6/scripts.pory"
	lockall
# 190 "data//maps/Route6/scripts.pory"
	faceplayer
# 191 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC3_Text_0
# 192 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC4::
# 196 "data//maps/Route6/scripts.pory"
	lockall
# 197 "data//maps/Route6/scripts.pory"
	faceplayer
# 199 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 2
	goto_if_eq Route6_NPC4_2
Route6_NPC4_1:
# 203 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 1
	goto_if_eq Route6_NPC4_5
Route6_NPC4_4:
# 221 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 0
	goto_if_eq Route6_NPC4_8
Route6_NPC4_7:
# 239 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_NPC4_2:
# 200 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_0
	goto Route6_NPC4_1

Route6_NPC4_5:
# 204 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_1, MSGBOX_YESNO
# 206 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_10
	goto Route6_NPC4_4

Route6_NPC4_8:
# 222 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_5, MSGBOX_YESNO
# 223 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_12
# 234 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_9
	goto Route6_NPC4_7

Route6_NPC4_10:
	checkitem ITEM_FRESH_START_MOCHI
# 0 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route6_NPC4_15
# 216 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_4
	goto Route6_NPC4_4

Route6_NPC4_12:
# 225 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_6, MSGBOX_YESNO
# 226 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_18
# 231 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_8
	goto Route6_NPC4_7

Route6_NPC4_15:
# 209 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_2
# 210 "data//maps/Route6/scripts.pory"
	release
# 211 "data//maps/Route6/scripts.pory"
	removeitem ITEM_FRESH_START_MOCHI
# 212 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_3
# 213 "data//maps/Route6/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 214 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 2
	goto Route6_NPC4_4

Route6_NPC4_18:
# 228 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_7
# 229 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 1
	goto Route6_NPC4_7


Route6_Gabrielle_Trigger::
# 269 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger_2
# 271 "data//maps/Route6/scripts.pory"
	lockall
# 275 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_0
# 276 "data//maps/Route6/scripts.pory"
	delay 24
# 277 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_0
# 278 "data//maps/Route6/scripts.pory"
	release
# 281 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Marshtomp_Movement_0
# 282 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 283 "data//maps/Route6/scripts.pory"
	delay 24
# 284 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_1
# 285 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 286 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_2
# 287 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_2
# 289 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_1
# 290 "data//maps/Route6/scripts.pory"
	release
# 291 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_3
# 292 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_3
# 293 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_2
# 294 "data//maps/Route6/scripts.pory"
	release
# 296 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_4
# 297 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_4
# 298 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_5
# 299 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger_Movement_6
# 300 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 302 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return

Route6_Gabrielle_Trigger_2:
	end


Route6_Gabrielle_ChooseDoubleBattleParty::
# 307 "data//maps/Route6/scripts.pory"
	special SavePlayerParty
# 308 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 309 "data//maps/Route6/scripts.pory"
	special ChooseHalfPartyForBattle
# 310 "data//maps/Route6/scripts.pory"
	waitstate
# 311 "data//maps/Route6/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route6_Gabrielle_DoBattle
# 312 "data//maps/Route6/scripts.pory"
	special LoadPlayerParty
# 313 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_HurryUp
	return


Route6_Gabrielle_HurryUp::
# 318 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_HurryUp_Text_0
# 319 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_DoBattle::
# 323 "data//maps/Route6/scripts.pory"
	multi_2_vs_2 TRAINER_ROUTE6_GRUNT1, Route6_Gabrielle_DoBattle_Text_0, TRAINER_ROUTE6_GRUNT2, Route6_Gabrielle_DoBattle_Text_1, PARTNER_ROUTE6_GAB
# 324 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Gabrielle_DoBattle_2
Route6_Gabrielle_DoBattle_1:
# 327 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 328 "data//maps/Route6/scripts.pory"
	special SetCB2WhiteOut
# 329 "data//maps/Route6/scripts.pory"
	waitstate
	return

Route6_Gabrielle_DoBattle_2:
# 325 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Victory
	goto Route6_Gabrielle_DoBattle_1


Route6_Gabrielle_Victory::
# 335 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_0
# 336 "data//maps/Route6/scripts.pory"
	release
# 338 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_0
# 339 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Victory_Movement_1
# 340 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 342 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT1
# 343 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT2
# 345 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_2
# 346 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Victory_Movement_2
# 348 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_1
# 349 "data//maps/Route6/scripts.pory"
	release
# 350 "data//maps/Route6/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 352 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_2
# 353 "data//maps/Route6/scripts.pory"
	release
# 354 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_3
# 355 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 356 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GAB
# 357 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_GABRIELLE_BULLY
# 359 "data//maps/Route6/scripts.pory"
	releaseall
	return


# 47 "data//maps/Route6/scripts.pory"
Route6_Marshtomp_Movement_0:
# 47 "data//maps/Route6/scripts.pory"
	emote_exclamation_mark
	step_end

# 275 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_0:
# 275 "data//maps/Route6/scripts.pory"
	jump_in_place_right
	step_end

# 284 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_1:
# 284 "data//maps/Route6/scripts.pory"
	walk_down
# 284 "data//maps/Route6/scripts.pory"
	walk_down
# 284 "data//maps/Route6/scripts.pory"
	walk_left
# 284 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 286 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_2:
# 286 "data//maps/Route6/scripts.pory"
	face_down
	step_end

# 291 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_3:
# 291 "data//maps/Route6/scripts.pory"
	jump_in_place_down
	step_end

# 296 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_4:
# 296 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 298 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_5:
# 298 "data//maps/Route6/scripts.pory"
	walk_right
# 298 "data//maps/Route6/scripts.pory"
	walk_right
# 298 "data//maps/Route6/scripts.pory"
	walk_up
# 298 "data//maps/Route6/scripts.pory"
	walk_up
# 298 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 299 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_6:
# 299 "data//maps/Route6/scripts.pory"
	walk_right
# 299 "data//maps/Route6/scripts.pory"
	walk_right
# 299 "data//maps/Route6/scripts.pory"
	walk_right
# 299 "data//maps/Route6/scripts.pory"
	walk_up
# 299 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 338 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_0:
# 338 "data//maps/Route6/scripts.pory"
	walk_down
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

# 339 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_1:
# 339 "data//maps/Route6/scripts.pory"
	walk_down
# 339 "data//maps/Route6/scripts.pory"
	walk_left
# 339 "data//maps/Route6/scripts.pory"
	walk_left
# 339 "data//maps/Route6/scripts.pory"
	walk_left
# 339 "data//maps/Route6/scripts.pory"
	walk_down
# 339 "data//maps/Route6/scripts.pory"
	walk_down
# 339 "data//maps/Route6/scripts.pory"
	walk_down
# 339 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 346 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_2:
# 346 "data//maps/Route6/scripts.pory"
	face_up
	step_end

# 354 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_3:
# 354 "data//maps/Route6/scripts.pory"
	walk_left
# 354 "data//maps/Route6/scripts.pory"
	walk_down
# 354 "data//maps/Route6/scripts.pory"
	walk_down
# 354 "data//maps/Route6/scripts.pory"
	walk_left
# 354 "data//maps/Route6/scripts.pory"
	walk_left
# 354 "data//maps/Route6/scripts.pory"
	walk_left
# 354 "data//maps/Route6/scripts.pory"
	walk_down
# 354 "data//maps/Route6/scripts.pory"
	walk_down
# 354 "data//maps/Route6/scripts.pory"
	walk_down
# 354 "data//maps/Route6/scripts.pory"
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
	.string "heal your Pokémon meanwhile.$"

Route6_EventScript_Nurse_Text_1:
# 38 "data//maps/Route6/scripts.pory"
	.string "Be careful - once you slide down this\n"
	.string "ledge, you won't be able to come back!$"

Route6_Marshtomp_Text_0:
# 50 "data//maps/Route6/scripts.pory"
	.string "It's a wild Pokémon!$"

Route6_Trainer_A_Text_0:
# 65 "data//maps/Route6/scripts.pory"
	.string "The marshes of Route 6 are teeming with\n"
	.string "life. Let's see how well you handle it!$"

Route6_Trainer_A_Text_1:
# 65 "data//maps/Route6/scripts.pory"
	.string "Impressive!$"

Route6_Trainer_A_Text_2:
# 66 "data//maps/Route6/scripts.pory"
	.string "Looks like you can handle yourself in\n"
	.string "these parts.$"

Route6_Trainer_B_Text_0:
# 72 "data//maps/Route6/scripts.pory"
	.string "The road to Pelluca City is\n"
	.string "long....beating you will give me energy!$"

Route6_Trainer_B_Text_1:
# 72 "data//maps/Route6/scripts.pory"
	.string "I lost even more energy!$"

Route6_Trainer_B_Text_2:
# 73 "data//maps/Route6/scripts.pory"
	.string "Maybe I should take a Corviknight Taxi\n"
	.string "to Pelluca City instead.$"

Route6_Trainer_C1_Text_0:
# 79 "data//maps/Route6/scripts.pory"
	.string "We're from the Pokémon Ranger\n"
	.string "Institute. We're on assignment to\l"
	.string "survey new Pokemon. Have you got any?$"

Route6_Trainer_C1_Text_1:
# 79 "data//maps/Route6/scripts.pory"
	.string "You do have new Pokemon$"

Route6_Trainer_C1_Text_2:
# 80 "data//maps/Route6/scripts.pory"
	.string "The Pokémon Ranger Institute is the\n"
	.string "headquarters for us Rangers in\l"
	.string "Cormoria.$"

Route6_Trainer_C2_Text_0:
# 86 "data//maps/Route6/scripts.pory"
	.string "We're from the Ranger Institute. We're\n"
	.string "on assignment to survey new Pokemon.\l"
	.string "Have you got any?$"

Route6_Trainer_C2_Text_1:
# 87 "data//maps/Route6/scripts.pory"
	.string "The Ranger Institute gives us newbies\n"
	.string "such hard assignments!$"

Route6_Trainer_D_Text_0:
# 93 "data//maps/Route6/scripts.pory"
	.string "The secret to catching strong Water\n"
	.string "Pokémon ? Patience and a CASTING ROD.\l"
	.string "Too bad you don't have one!$"

Route6_Trainer_D_Text_1:
# 93 "data//maps/Route6/scripts.pory"
	.string "You beat me without a rod!$"

Route6_Trainer_D_Text_2:
# 94 "data//maps/Route6/scripts.pory"
	.string "I wonder what Pokémon I can catch here\n"
	.string "with a TROLLING ROD instead...$"

Route6_Trainer_E_Text_0:
# 100 "data//maps/Route6/scripts.pory"
	.string "I'm aiming to be the Pokémon Champion,\n"
	.string "so I've come here to catch rare\l"
	.string "Pokemon. Let me test them on you!$"

Route6_Trainer_E_Text_1:
# 100 "data//maps/Route6/scripts.pory"
	.string "No - my rare Pokemon!$"

Route6_Trainer_E_Text_2:
# 101 "data//maps/Route6/scripts.pory"
	.string "Catching good Pokémon isn't enough. I\n"
	.string "need to train rigorously too.$"

Route6_Trainer_F_Text_0:
# 107 "data//maps/Route6/scripts.pory"
	.string "My CROAGUNK and I love to train here\n"
	.string "because it makes us tough!$"

Route6_Trainer_F_Text_1:
# 107 "data//maps/Route6/scripts.pory"
	.string "We're not tough eonugh!$"

Route6_Trainer_F_Text_2:
# 108 "data//maps/Route6/scripts.pory"
	.string "Wading around in the marshes here works\n"
	.string "your core!$"

Route6_Trainer_G_Text_0:
# 114 "data//maps/Route6/scripts.pory"
	.string "Us BREEDERS like to train one type of\n"
	.string "Pokemon. I specialise in dogs!$"

Route6_Trainer_G_Text_1:
# 114 "data//maps/Route6/scripts.pory"
	.string "Guess I was more bark than bite!$"

Route6_Trainer_G_Text_2:
# 115 "data//maps/Route6/scripts.pory"
	.string "Dog Pokémon are rare in Cormoria!\n"
	.string "Someone in Pelluca City traded me my\l"
	.string "HOUNDOOR.$"

Route6_Trainer_H_Text_0:
# 121 "data//maps/Route6/scripts.pory"
	.string "This weather is prime for my BUG-type\n"
	.string "Pokemon! You won't be able to handle it!$"

Route6_Trainer_H_Text_1:
# 121 "data//maps/Route6/scripts.pory"
	.string "The weather is fickle!$"

Route6_Trainer_H_Text_2:
# 122 "data//maps/Route6/scripts.pory"
	.string "Although bugs thrive in marshes, there\n"
	.string "aren't many BUG-type Pokémon around\l"
	.string "here.$"

Route6_Trainer_I_Text_0:
# 128 "data//maps/Route6/scripts.pory"
	.string "I heard there was a rare DRAGON-type\n"
	.string "Pokémon here in Route 6, but I can't\l"
	.string "find any on land!$"

Route6_Trainer_I_Text_1:
# 128 "data//maps/Route6/scripts.pory"
	.string "Why did I find you instead?$"

Route6_Trainer_I_Text_2:
# 129 "data//maps/Route6/scripts.pory"
	.string "If its not on land, then maybe I need to\n"
	.string "try fishing...$"

Route6_Trainer_J_Text_0:
# 135 "data//maps/Route6/scripts.pory"
	.string "Hold it right there! You think you can\n"
	.string "beat me when I've already got four gym\l"
	.string "badges?$"

Route6_Trainer_J_Text_1:
# 135 "data//maps/Route6/scripts.pory"
	.string "Argh! I need another badge!$"

Route6_Trainer_J_Text_2:
# 136 "data//maps/Route6/scripts.pory"
	.string "Yup! That's right! I'm on my way to\n"
	.string "become the Pokémon Champion!$"

Route6_Trainer_K_Text_0:
# 142 "data//maps/Route6/scripts.pory"
	.string "Past Pelluca City is the Mirroh Base\n"
	.string "Camp and a Pokémon graveyard. I want to\l"
	.string "go there to commune with the afterlife!$"

Route6_Trainer_K_Text_1:
# 142 "data//maps/Route6/scripts.pory"
	.string "I don't want to commune with you!$"

Route6_Trainer_K_Text_2:
# 143 "data//maps/Route6/scripts.pory"
	.string "If we remember our Pokémon after they\n"
	.string "go, are they truly gone?$"

Route6_NPC1_Text_0:
# 176 "data//maps/Route6/scripts.pory"
	.string "When I was young, there was no route\n"
	.string "through these marshes. Now Route 6\l"
	.string "connects Silversun City to Pelluca\l"
	.string "City.$"

Route6_NPC2_Text_0:
# 184 "data//maps/Route6/scripts.pory"
	.string "I wonder what's over there...if I had a\n"
	.string "Pokémon that knew SURF, I could swim\l"
	.string "over!$"

Route6_NPC3_Text_0:
# 191 "data//maps/Route6/scripts.pory"
	.string "I want to go to the Pelluca Restaurant!\n"
	.string "The food is supposed to be delicious\l"
	.string "because the head chef travels all of\l"
	.string "Cormoria looking for rare ingredients.$"

Route6_NPC4_Text_0:
# 200 "data//maps/Route6/scripts.pory"
	.string "I've been too busy eating to cook! I\n"
	.string "guess you can switch the hobby all you\l"
	.string "want, but you have to work on yourself\l"
	.string "to see real change.$"

Route6_NPC4_Text_1:
# 204 "data//maps/Route6/scripts.pory"
	.string "Have you brought a MOCHI?$"

Route6_NPC4_Text_2:
# 209 "data//maps/Route6/scripts.pory"
	.string "Yes, this looks amazing!\p"
	.string "...\p"
	.string "Interesting flavour. I think I can make\n"
	.string "it!$"

Route6_NPC4_Text_3:
# 212 "data//maps/Route6/scripts.pory"
	.string "I suppose I don't need this any more.\n"
	.string "Here, why don't you take it? You could\l"
	.string "start a new hobby too!$"

Route6_NPC4_Text_4:
# 216 "data//maps/Route6/scripts.pory"
	.string "No, it looks like you haven't. I'll be\n"
	.string "here when you get one.$"

Route6_NPC4_Text_5:
# 222 "data//maps/Route6/scripts.pory"
	.string "These waters are too strong to fish\n"
	.string "properly...why am I even fishing here?\l"
	.string "I'm so unfocused these days. Maybe I\l"
	.string "need a new hobby. I'd like to try\l"
	.string "cooking, but I might be no good. What do\l"
	.string "you think? Should I try cooking?$"

Route6_NPC4_Text_6:
# 225 "data//maps/Route6/scripts.pory"
	.string "You're right - unless I try, I'll never\n"
	.string "know! Say, can you help me out? I want\l"
	.string "to try making MOCHI but I don't know\l"
	.string "what it tastes like. Can you bring me\l"
	.string "one?$"

Route6_NPC4_Text_7:
# 228 "data//maps/Route6/scripts.pory"
	.string "Thank you so much! I'll be waiting here\n"
	.string "for you.$"

Route6_NPC4_Text_8:
# 231 "data//maps/Route6/scripts.pory"
	.string "Ahh well, it's back to fishing then.$"

Route6_NPC4_Text_9:
# 234 "data//maps/Route6/scripts.pory"
	.string "Yeah...I suppose I'd be no good. Fishing\n"
	.string "is all I know.$"

Route6_Gabrielle_Trigger_Text_0:
# 277 "data//maps/Route6/scripts.pory"
	.string "GRUNT: C'mon GABRIELLE - you've got\n"
	.string "nowhere to run. Now give us your\l"
	.string "Pokemon!\p"
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
# 289 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: {PLAYER}, it's you! These\n"
	.string "grunts are trying to take my Pokémon\l"
	.string "off me - you have to help!$"

Route6_Gabrielle_Trigger_Text_2:
# 293 "data//maps/Route6/scripts.pory"
	.string "GRUNT: Have you no shame GABRIELLE?\n"
	.string "The trainer who got you kicked out is\l"
	.string "now helping you?\p"
	.string "Fine by us! Imagine what the boss'll tell\n"
	.string "us when we take your Pokémon AND beat\l"
	.string "the trainer that's stopped our plans\l"
	.string "twice!$"

Route6_Gabrielle_HurryUp_Text_0:
# 318 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: What are you doing? They're\n"
	.string "about to attack!$"

Route6_Gabrielle_DoBattle_Text_0:
# 323 "data//maps/Route6/scripts.pory"
	.string "Stupid ZORUA!$"

Route6_Gabrielle_DoBattle_Text_1:
# 323 "data//maps/Route6/scripts.pory"
	.string "I need better Pokemon!$"

Route6_Gabrielle_Victory_Text_0:
# 335 "data//maps/Route6/scripts.pory"
	.string "GRUNT: You got lucky that {PLAYER}\n"
	.string "was around, GABRIELLE! Next time we'll\l"
	.string "get your ZOROARK for sure!$"

Route6_Gabrielle_Victory_Text_1:
# 348 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: Thank you {PLAYER}. You\n"
	.string "saved me there.\p"
	.string "Let me heal your Pokemon.$"

Route6_Gabrielle_Victory_Text_2:
# 352 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: I live Pelluca City, just\n"
	.string "past the Hoya River. I was on my way\l"
	.string "home when those grunts ambushed\l"
	.string "me...I'm going there now. See you around.$"
