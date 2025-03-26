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


Route6_Trainer_A::
# 44 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_A, Route6_Trainer_A_Text_0, Route6_Trainer_A_Text_1
# 45 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_A_Text_2
# 46 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_B::
# 51 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_B, Route6_Trainer_B_Text_0, Route6_Trainer_B_Text_1
# 52 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_B_Text_2
# 53 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C1::
# 58 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C1_Text_0, Route6_Trainer_C1_Text_1
# 59 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C1_Text_2
# 60 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C2::
# 65 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C2_Text_0, Route6_Trainer_C1_Text_1
# 66 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C2_Text_1
# 67 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_D::
# 72 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_D, Route6_Trainer_D_Text_0, Route6_Trainer_D_Text_1
# 73 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_D_Text_2
# 74 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_E::
# 79 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_E, Route6_Trainer_E_Text_0, Route6_Trainer_E_Text_1
# 80 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_E_Text_2
# 81 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_F::
# 86 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_F, Route6_Trainer_F_Text_0, Route6_Trainer_F_Text_1
# 87 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_F_Text_2
# 88 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_G::
# 93 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_G, Route6_Trainer_G_Text_0, Route6_Trainer_G_Text_1
# 94 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_G_Text_2
# 95 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_H::
# 100 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_H, Route6_Trainer_H_Text_0, Route6_Trainer_H_Text_1
# 101 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_H_Text_2
# 102 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_I::
# 107 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_I, Route6_Trainer_I_Text_0, Route6_Trainer_I_Text_1
# 108 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_I_Text_2
# 109 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_J::
# 114 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_J, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 115 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 116 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_K::
# 121 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_K, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 122 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 123 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC1::
# 153 "data//maps/Route6/scripts.pory"
	lockall
# 154 "data//maps/Route6/scripts.pory"
	faceplayer
# 155 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC1_Text_0
# 156 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC2::
# 161 "data//maps/Route6/scripts.pory"
	lockall
# 162 "data//maps/Route6/scripts.pory"
	faceplayer
# 163 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC2_Text_0
# 164 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC3::
# 168 "data//maps/Route6/scripts.pory"
	lockall
# 169 "data//maps/Route6/scripts.pory"
	faceplayer
# 170 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC3_Text_0
# 171 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC4::
# 175 "data//maps/Route6/scripts.pory"
	lockall
# 176 "data//maps/Route6/scripts.pory"
	faceplayer
# 178 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 2
	goto_if_eq Route6_NPC4_2
Route6_NPC4_1:
# 184 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 1
	goto_if_eq Route6_NPC4_5
Route6_NPC4_4:
# 202 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 0
	goto_if_eq Route6_NPC4_8
Route6_NPC4_7:
# 220 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_NPC4_2:
# 179 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_0
# 180 "data//maps/Route6/scripts.pory"
	release
# 181 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_1
	goto Route6_NPC4_1

Route6_NPC4_5:
# 185 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_2, MSGBOX_YESNO
# 187 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_10
	goto Route6_NPC4_4

Route6_NPC4_8:
# 203 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_6, MSGBOX_YESNO
# 204 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_12
# 215 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_10
	goto Route6_NPC4_7

Route6_NPC4_10:
	checkitem ITEM_RED_FLUTE
# 0 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route6_NPC4_15
# 197 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_5
	goto Route6_NPC4_4

Route6_NPC4_12:
# 206 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_7, MSGBOX_YESNO
# 207 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_18
# 212 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_9
	goto Route6_NPC4_7

Route6_NPC4_15:
# 190 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_3
# 191 "data//maps/Route6/scripts.pory"
	release
# 192 "data//maps/Route6/scripts.pory"
	removeitem ITEM_RED_FLUTE
# 193 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_4
# 194 "data//maps/Route6/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 195 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 2
	goto Route6_NPC4_4

Route6_NPC4_18:
# 209 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_8
# 210 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 1
	goto Route6_NPC4_7


Route6_Gabrielle_Trigger::
# 250 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger_2
# 252 "data//maps/Route6/scripts.pory"
	lockall
# 256 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_0
# 257 "data//maps/Route6/scripts.pory"
	delay 24
# 258 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_0
# 259 "data//maps/Route6/scripts.pory"
	release
# 262 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_1
# 263 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 264 "data//maps/Route6/scripts.pory"
	delay 24
# 265 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_2
# 266 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 267 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_3
# 268 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_3
# 270 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_1
# 271 "data//maps/Route6/scripts.pory"
	release
# 272 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_4
# 273 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_4
# 274 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_2
# 275 "data//maps/Route6/scripts.pory"
	release
# 277 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_5
# 278 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_5
# 279 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_6
# 280 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger_Movement_7
# 281 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 283 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return

Route6_Gabrielle_Trigger_2:
	end


Route6_Gabrielle_ChooseDoubleBattleParty::
# 288 "data//maps/Route6/scripts.pory"
	special SavePlayerParty
# 289 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 290 "data//maps/Route6/scripts.pory"
	special ChooseHalfPartyForBattle
# 291 "data//maps/Route6/scripts.pory"
	waitstate
# 292 "data//maps/Route6/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route6_Gabrielle_DoBattle
# 293 "data//maps/Route6/scripts.pory"
	special LoadPlayerParty
# 294 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_HurryUp
	return


Route6_Gabrielle_HurryUp::
# 299 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_HurryUp_Text_0
# 300 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_DoBattle::
# 304 "data//maps/Route6/scripts.pory"
	multi_2_vs_2 TRAINER_ROUTE6_GRUNT1, Route6_Gabrielle_DoBattle_Text_0, TRAINER_ROUTE6_GRUNT2, Route6_Gabrielle_DoBattle_Text_1, PARTNER_ROUTE6_GAB
# 305 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Gabrielle_DoBattle_2
Route6_Gabrielle_DoBattle_1:
# 308 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 309 "data//maps/Route6/scripts.pory"
	special SetCB2WhiteOut
# 310 "data//maps/Route6/scripts.pory"
	waitstate
	return

Route6_Gabrielle_DoBattle_2:
# 306 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Victory
	goto Route6_Gabrielle_DoBattle_1


Route6_Gabrielle_Victory::
# 316 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_0
# 317 "data//maps/Route6/scripts.pory"
	release
# 319 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_0
# 320 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Victory_Movement_1
# 321 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 323 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT1
# 324 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT2
# 326 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_3
# 327 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Victory_Movement_2
# 329 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_1
# 330 "data//maps/Route6/scripts.pory"
	release
# 331 "data//maps/Route6/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 333 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_2
# 334 "data//maps/Route6/scripts.pory"
	release
# 335 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_3
# 336 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 337 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GAB
# 338 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_GABRIELLE_BULLY
# 340 "data//maps/Route6/scripts.pory"
	releaseall
	return


# 256 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_0:
# 256 "data//maps/Route6/scripts.pory"
	jump_in_place_right
	step_end

# 262 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_1:
# 262 "data//maps/Route6/scripts.pory"
	emote_exclamation_mark
	step_end

# 265 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_2:
# 265 "data//maps/Route6/scripts.pory"
	walk_down
# 265 "data//maps/Route6/scripts.pory"
	walk_down
# 265 "data//maps/Route6/scripts.pory"
	walk_left
# 265 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 267 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_3:
# 267 "data//maps/Route6/scripts.pory"
	face_down
	step_end

# 272 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_4:
# 272 "data//maps/Route6/scripts.pory"
	jump_in_place_down
	step_end

# 277 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_5:
# 277 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 279 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_6:
# 279 "data//maps/Route6/scripts.pory"
	walk_right
# 279 "data//maps/Route6/scripts.pory"
	walk_right
# 279 "data//maps/Route6/scripts.pory"
	walk_up
# 279 "data//maps/Route6/scripts.pory"
	walk_up
# 279 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 280 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_7:
# 280 "data//maps/Route6/scripts.pory"
	walk_right
# 280 "data//maps/Route6/scripts.pory"
	walk_right
# 280 "data//maps/Route6/scripts.pory"
	walk_right
# 280 "data//maps/Route6/scripts.pory"
	walk_up
# 280 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 319 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_0:
# 319 "data//maps/Route6/scripts.pory"
	walk_down
# 319 "data//maps/Route6/scripts.pory"
	walk_down
# 319 "data//maps/Route6/scripts.pory"
	walk_left
# 319 "data//maps/Route6/scripts.pory"
	walk_left
# 319 "data//maps/Route6/scripts.pory"
	walk_left
# 319 "data//maps/Route6/scripts.pory"
	walk_down
# 319 "data//maps/Route6/scripts.pory"
	walk_down
# 319 "data//maps/Route6/scripts.pory"
	walk_down
# 319 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 320 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_1:
# 320 "data//maps/Route6/scripts.pory"
	walk_down
# 320 "data//maps/Route6/scripts.pory"
	walk_left
# 320 "data//maps/Route6/scripts.pory"
	walk_left
# 320 "data//maps/Route6/scripts.pory"
	walk_left
# 320 "data//maps/Route6/scripts.pory"
	walk_down
# 320 "data//maps/Route6/scripts.pory"
	walk_down
# 320 "data//maps/Route6/scripts.pory"
	walk_down
# 320 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 327 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_2:
# 327 "data//maps/Route6/scripts.pory"
	face_up
	step_end

# 335 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_3:
# 335 "data//maps/Route6/scripts.pory"
	walk_left
# 335 "data//maps/Route6/scripts.pory"
	walk_down
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
# 44 "data//maps/Route6/scripts.pory"
	.string "The marshes of Route 6 are teeming with\n"
	.string "life. Let's see how well you handle it!$"

Route6_Trainer_A_Text_1:
# 44 "data//maps/Route6/scripts.pory"
	.string "Impressive!$"

Route6_Trainer_A_Text_2:
# 45 "data//maps/Route6/scripts.pory"
	.string "Looks like you can handle yourself in\n"
	.string "these parts.$"

Route6_Trainer_B_Text_0:
# 51 "data//maps/Route6/scripts.pory"
	.string "The road to Pelluca City is\n"
	.string "long....beating you will give me energy!$"

Route6_Trainer_B_Text_1:
# 51 "data//maps/Route6/scripts.pory"
	.string "I lost even more energy!$"

Route6_Trainer_B_Text_2:
# 52 "data//maps/Route6/scripts.pory"
	.string "Maybe I should take a Corviknight Taxi\n"
	.string "to Pelluca City instead.$"

Route6_Trainer_C1_Text_0:
# 58 "data//maps/Route6/scripts.pory"
	.string "We're from the Pokemon Ranger\n"
	.string "Institute. We're on assignment to\l"
	.string "survey new {PKMN}. Have you got any?$"

Route6_Trainer_C1_Text_1:
# 58 "data//maps/Route6/scripts.pory"
	.string "You do have new {PKMN}$"

Route6_Trainer_C1_Text_2:
# 59 "data//maps/Route6/scripts.pory"
	.string "The Pokemon Ranger Institute is the\n"
	.string "headquarters for us Rangers in\l"
	.string "CORMORIA.$"

Route6_Trainer_C2_Text_0:
# 65 "data//maps/Route6/scripts.pory"
	.string "We're from the Ranger Institute. We're\n"
	.string "on assignment to survey new {PKMN}. Have\l"
	.string "you got any?$"

Route6_Trainer_C2_Text_1:
# 66 "data//maps/Route6/scripts.pory"
	.string "The Ranger Institute gives us newbies\n"
	.string "such hard assignments!$"

Route6_Trainer_D_Text_0:
# 72 "data//maps/Route6/scripts.pory"
	.string "The secret to catching strong Water\n"
	.string "Pokémon? Patience and a CASTING ROD.\l"
	.string "Too bad you don't have one!$"

Route6_Trainer_D_Text_1:
# 72 "data//maps/Route6/scripts.pory"
	.string "I need a Super Rod!$"

Route6_Trainer_D_Text_2:
# 73 "data//maps/Route6/scripts.pory"
	.string "I wonder what {PKMN} I can catch here with\n"
	.string "a Super Rod...$"

Route6_Trainer_E_Text_0:
# 79 "data//maps/Route6/scripts.pory"
	.string "I'm aiming to be the {PKMN} Champion, so\n"
	.string "I've come here to catch rare {PKMN}. Let me\l"
	.string "test them on you!$"

Route6_Trainer_E_Text_1:
# 79 "data//maps/Route6/scripts.pory"
	.string "No - my rare {PKMN}!$"

Route6_Trainer_E_Text_2:
# 80 "data//maps/Route6/scripts.pory"
	.string "Catching good {PKMN} isn't enough. I need\n"
	.string "to train rigorously too.$"

Route6_Trainer_F_Text_0:
# 86 "data//maps/Route6/scripts.pory"
	.string "My CROAGUNK and I love to train here\n"
	.string "because it makes us tough!$"

Route6_Trainer_F_Text_1:
# 86 "data//maps/Route6/scripts.pory"
	.string "We're not tough eonugh!$"

Route6_Trainer_F_Text_2:
# 87 "data//maps/Route6/scripts.pory"
	.string "Wading around in the marshes here works\n"
	.string "your core!$"

Route6_Trainer_G_Text_0:
# 93 "data//maps/Route6/scripts.pory"
	.string "Us BREEDERS like to train one type of\n"
	.string "{PKMN}. I specialise in dogs!$"

Route6_Trainer_G_Text_1:
# 93 "data//maps/Route6/scripts.pory"
	.string "Guess I was more bark than bite!$"

Route6_Trainer_G_Text_2:
# 94 "data//maps/Route6/scripts.pory"
	.string "Dog {PKMN} are rare in CORMORIA! Someone in\n"
	.string "PELLUCA CITY traded me my HOUNDOOR.$"

Route6_Trainer_H_Text_0:
# 100 "data//maps/Route6/scripts.pory"
	.string "This weather is prime for my BUG-type\n"
	.string "{PKMN}! You won't be able to handle it!$"

Route6_Trainer_H_Text_1:
# 100 "data//maps/Route6/scripts.pory"
	.string "The weather is fickle!$"

Route6_Trainer_H_Text_2:
# 101 "data//maps/Route6/scripts.pory"
	.string "Although bugs thrive in marshes, there\n"
	.string "aren't many BUG-type {PKMN} around here.$"

Route6_Trainer_I_Text_0:
# 107 "data//maps/Route6/scripts.pory"
	.string "I heard there was a rare DRAGON-type\n"
	.string "{PKMN} here in Route 6, but I can't find any\l"
	.string "on land!$"

Route6_Trainer_I_Text_1:
# 107 "data//maps/Route6/scripts.pory"
	.string "Why did I find you instead?$"

Route6_Trainer_I_Text_2:
# 108 "data//maps/Route6/scripts.pory"
	.string "If its not on land, then maybe I need to\n"
	.string "try fishing...$"

Route6_Trainer_J_Text_0:
# 114 "data//maps/Route6/scripts.pory"
	.string "Past PELLUCA CITY is the MIRROH BASE\n"
	.string "CAMP and a {PKMN} graveyard. I want to go\l"
	.string "there to commune with the afterlife!$"

Route6_Trainer_J_Text_1:
# 114 "data//maps/Route6/scripts.pory"
	.string "I don't want to commune with you!$"

Route6_Trainer_J_Text_2:
# 115 "data//maps/Route6/scripts.pory"
	.string "If we remember our {PKMN} after they go,\n"
	.string "are they truly gone?$"

Route6_NPC1_Text_0:
# 155 "data//maps/Route6/scripts.pory"
	.string "When I was young, there was no route\n"
	.string "through these marshes. Now ROUTE 6\l"
	.string "connects SILVERSUN CITY to PELLUCA\l"
	.string "CITY.$"

Route6_NPC2_Text_0:
# 163 "data//maps/Route6/scripts.pory"
	.string "I wonder what's over there...if I had a\n"
	.string "{PKMN} that knew SURF, I could swim over!$"

Route6_NPC3_Text_0:
# 170 "data//maps/Route6/scripts.pory"
	.string "I want to go to the PELLUCA\n"
	.string "RESTAURANT! The food is supposed to be\l"
	.string "delicious because the head chef\l"
	.string "travels all of CORMORIA looking for rare\l"
	.string "ingredients.$"

Route6_NPC4_Text_0:
# 179 "data//maps/Route6/scripts.pory"
	.string "I've been practicing real hard! What do\n"
	.string "you think?$"

Route6_NPC4_Text_1:
# 181 "data//maps/Route6/scripts.pory"
	.string "I'm no good, but it's so much fun!$"

Route6_NPC4_Text_2:
# 185 "data//maps/Route6/scripts.pory"
	.string "Have you brought a RED FLUTE?$"

Route6_NPC4_Text_3:
# 190 "data//maps/Route6/scripts.pory"
	.string "Yes, this looks amazing! I can't wait to\n"
	.string "start playing it.$"

Route6_NPC4_Text_4:
# 193 "data//maps/Route6/scripts.pory"
	.string "I suppose I don't need this any more.\n"
	.string "Here, why don't you take it? You could\l"
	.string "start a new hobby too!$"

Route6_NPC4_Text_5:
# 197 "data//maps/Route6/scripts.pory"
	.string "No, it looks like you haven't. You can\n"
	.string "get one in PELLUCA CITY.$"

Route6_NPC4_Text_6:
# 203 "data//maps/Route6/scripts.pory"
	.string "These waters are too fierce to fish\n"
	.string "properly...why am I even fishing here?\l"
	.string "I'm so unfocused these days. Maybe I\l"
	.string "need a new hobby. I'd like to try music,\l"
	.string "but I might be no good. What do you\l"
	.string "think? Should I try music?$"

Route6_NPC4_Text_7:
# 206 "data//maps/Route6/scripts.pory"
	.string "You're right - unless I try, I'll never\n"
	.string "know! Say, can you help me out? Can you\l"
	.string "bring me a RED FLUTE so I can start\l"
	.string "practicing?$"

Route6_NPC4_Text_8:
# 209 "data//maps/Route6/scripts.pory"
	.string "Thank you so much! I think you can buy\n"
	.string "them in PELLUCA CITY. I'll be waiting\l"
	.string "here for you!$"

Route6_NPC4_Text_9:
# 212 "data//maps/Route6/scripts.pory"
	.string "Ahh well, it's back to fishing then.$"

Route6_NPC4_Text_10:
# 215 "data//maps/Route6/scripts.pory"
	.string "Yeah...I suppose I'd be no good. Fishing\n"
	.string "is all I know.$"

Route6_Gabrielle_Trigger_Text_0:
# 258 "data//maps/Route6/scripts.pory"
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
# 270 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: {PLAYER}, it's you! These\n"
	.string "grunts are trying to take my {PKMN} off me\l"
	.string "- you have to help!$"

Route6_Gabrielle_Trigger_Text_2:
# 274 "data//maps/Route6/scripts.pory"
	.string "GRUNT: Have you no shame GABRIELLE?\n"
	.string "The trainer who got you kicked out is\l"
	.string "now helping you?\p"
	.string "Fine by us! Imagine what the boss'll tell\n"
	.string "us when we take your {PKMN} AND beat the\l"
	.string "trainer that's stopped our plans twice!$"

Route6_Gabrielle_HurryUp_Text_0:
# 299 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: What are you doing? They're\n"
	.string "about to attack!$"

Route6_Gabrielle_DoBattle_Text_0:
# 304 "data//maps/Route6/scripts.pory"
	.string "Stupid ZORUA!$"

Route6_Gabrielle_DoBattle_Text_1:
# 304 "data//maps/Route6/scripts.pory"
	.string "I need better {PKMN}!$"

Route6_Gabrielle_Victory_Text_0:
# 316 "data//maps/Route6/scripts.pory"
	.string "GRUNT: You got lucky that {PLAYER}\n"
	.string "was around, GABRIELLE! Next time we'll\l"
	.string "get your ZOROARK for sure!$"

Route6_Gabrielle_Victory_Text_1:
# 329 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: Thank you {PLAYER}. You\n"
	.string "saved me there.\p"
	.string "Let me heal your {PKMN}.$"

Route6_Gabrielle_Victory_Text_2:
# 333 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: I live PELLUCA CITY, just\n"
	.string "past the HOYA RIVER. I was on my way\l"
	.string "home when those grunts ambushed\l"
	.string "me...I'm going there now. See you around.$"
