# 1 "data//maps/Route6/scripts.pory"

# 2 "data//maps/Route6/scripts.pory"
    .set LOCALID_GAB, 29
# 3 "data//maps/Route6/scripts.pory"
    .set LOCALID_GRUNT1, 11
# 4 "data//maps/Route6/scripts.pory"
    .set LOCALID_GRUNT2, 10

Route6_MapScripts::
	.byte 0


Route6_EventScript_Nurse::
# 12 "data//maps/Route6/scripts.pory"
	lockall
# 13 "data//maps/Route6/scripts.pory"
	faceplayer
# 14 "data//maps/Route6/scripts.pory"
	msgbox Route6_EventScript_Nurse_Text_0
# 15 "data//maps/Route6/scripts.pory"
	release
# 16 "data//maps/Route6/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 17 "data//maps/Route6/scripts.pory"
	msgbox Route6_EventScript_Nurse_Text_1
# 18 "data//maps/Route6/scripts.pory"
	release
	return


Route6_Trainer_A::
# 23 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_A, Route6_Trainer_A_Text_0, Route6_Trainer_A_Text_1
# 24 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_A_Text_2
# 25 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_B::
# 30 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_B, Route6_Trainer_B_Text_0, Route6_Trainer_B_Text_1
# 31 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_B_Text_2
# 32 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C1::
# 37 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C1_Text_0, Route6_Trainer_C1_Text_1
# 38 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C1_Text_2
# 39 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_C2::
# 44 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_C, Route6_Trainer_C2_Text_0, Route6_Trainer_C1_Text_1
# 45 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_C2_Text_1
# 46 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_D::
# 51 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_D, Route6_Trainer_D_Text_0, Route6_Trainer_D_Text_1
# 52 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_D_Text_2
# 53 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_E::
# 58 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_E, Route6_Trainer_E_Text_0, Route6_Trainer_E_Text_1
# 59 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_E_Text_2
# 60 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_F::
# 65 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_F, Route6_Trainer_F_Text_0, Route6_Trainer_F_Text_1
# 66 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_F_Text_2
# 67 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_G::
# 72 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_G, Route6_Trainer_G_Text_0, Route6_Trainer_G_Text_1
# 73 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_G_Text_2
# 74 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_H::
# 79 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_H, Route6_Trainer_H_Text_0, Route6_Trainer_H_Text_1
# 80 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_H_Text_2
# 81 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_I::
# 86 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_I, Route6_Trainer_I_Text_0, Route6_Trainer_I_Text_1
# 87 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_I_Text_2
# 88 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_J::
# 93 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_J, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 94 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 95 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_Trainer_K::
# 100 "data//maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_K, Route6_Trainer_J_Text_0, Route6_Trainer_J_Text_1
# 101 "data//maps/Route6/scripts.pory"
	msgbox Route6_Trainer_J_Text_2
# 102 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC1::
# 132 "data//maps/Route6/scripts.pory"
	lockall
# 133 "data//maps/Route6/scripts.pory"
	faceplayer
# 134 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC1_Text_0
# 135 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC2::
# 140 "data//maps/Route6/scripts.pory"
	lockall
# 141 "data//maps/Route6/scripts.pory"
	faceplayer
# 142 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC2_Text_0
# 143 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC3::
# 147 "data//maps/Route6/scripts.pory"
	lockall
# 148 "data//maps/Route6/scripts.pory"
	faceplayer
# 149 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC3_Text_0
# 150 "data//maps/Route6/scripts.pory"
	releaseall
	end


Route6_NPC4::
# 154 "data//maps/Route6/scripts.pory"
	lockall
# 155 "data//maps/Route6/scripts.pory"
	faceplayer
# 157 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 2
	goto_if_eq Route6_NPC4_2
Route6_NPC4_1:
# 163 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 1
	goto_if_eq Route6_NPC4_5
Route6_NPC4_4:
# 181 "data//maps/Route6/scripts.pory"
	compare VAR_ROUTE6_FISHERMAN, 0
	goto_if_eq Route6_NPC4_8
Route6_NPC4_7:
# 199 "data//maps/Route6/scripts.pory"
	releaseall
	end

Route6_NPC4_2:
# 158 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_0
# 159 "data//maps/Route6/scripts.pory"
	release
# 160 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_1
	goto Route6_NPC4_1

Route6_NPC4_5:
# 164 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_2, MSGBOX_YESNO
# 166 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_10
	goto Route6_NPC4_4

Route6_NPC4_8:
# 182 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_6, MSGBOX_YESNO
# 183 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_12
# 194 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_10
	goto Route6_NPC4_7

Route6_NPC4_10:
	checkitem ITEM_RED_FLUTE
# 0 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route6_NPC4_15
# 176 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_5
	goto Route6_NPC4_4

Route6_NPC4_12:
# 185 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_7, MSGBOX_YESNO
# 186 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_NPC4_18
# 191 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_9
	goto Route6_NPC4_7

Route6_NPC4_15:
# 169 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_3
# 170 "data//maps/Route6/scripts.pory"
	release
# 171 "data//maps/Route6/scripts.pory"
	removeitem ITEM_RED_FLUTE
# 172 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_4
# 173 "data//maps/Route6/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 174 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 2
	goto Route6_NPC4_4

Route6_NPC4_18:
# 188 "data//maps/Route6/scripts.pory"
	msgbox Route6_NPC4_Text_8
# 189 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_FISHERMAN, 1
	goto Route6_NPC4_7


Route6_Gabrielle_Trigger::
# 229 "data//maps/Route6/scripts.pory"
	goto_if_set FLAG_ROUTE6_GABRIELLE_BULLY, Route6_Gabrielle_Trigger_2
# 231 "data//maps/Route6/scripts.pory"
	lockall
# 235 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_0
# 236 "data//maps/Route6/scripts.pory"
	delay 24
# 237 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_0
# 238 "data//maps/Route6/scripts.pory"
	release
# 241 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_1
# 242 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 243 "data//maps/Route6/scripts.pory"
	delay 24
# 244 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_2
# 245 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 246 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_3
# 247 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_3
# 249 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_1
# 250 "data//maps/Route6/scripts.pory"
	release
# 251 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_4
# 252 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_4
# 253 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Trigger_Text_2
# 254 "data//maps/Route6/scripts.pory"
	release
# 256 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Trigger_Movement_5
# 257 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Trigger_Movement_5
# 258 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_6
# 259 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Trigger_Movement_7
# 260 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 262 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return

Route6_Gabrielle_Trigger_2:
	end


Route6_Gabrielle_ChooseDoubleBattleParty::
# 267 "data//maps/Route6/scripts.pory"
	special SavePlayerParty
# 268 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 269 "data//maps/Route6/scripts.pory"
	special ChooseHalfPartyForBattle
# 270 "data//maps/Route6/scripts.pory"
	waitstate
# 271 "data//maps/Route6/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route6_Gabrielle_DoBattle
# 272 "data//maps/Route6/scripts.pory"
	special LoadPlayerParty
# 273 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_HurryUp
	return


Route6_Gabrielle_HurryUp::
# 278 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_HurryUp_Text_0
# 279 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_ChooseDoubleBattleParty
	return


Route6_Gabrielle_DoBattle::
# 283 "data//maps/Route6/scripts.pory"
	multi_2_vs_2 TRAINER_ROUTE6_GRUNT1, Route6_Gabrielle_DoBattle_Text_0, TRAINER_ROUTE6_GRUNT2, Route6_Gabrielle_DoBattle_Text_1, PARTNER_ROUTE6_GAB
# 284 "data//maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route6_Gabrielle_DoBattle_2
Route6_Gabrielle_DoBattle_1:
# 287 "data//maps/Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 288 "data//maps/Route6/scripts.pory"
	special SetCB2WhiteOut
# 289 "data//maps/Route6/scripts.pory"
	waitstate
	return

Route6_Gabrielle_DoBattle_2:
# 285 "data//maps/Route6/scripts.pory"
	goto Route6_Gabrielle_Victory
	goto Route6_Gabrielle_DoBattle_1


Route6_Gabrielle_Victory::
# 295 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_0
# 296 "data//maps/Route6/scripts.pory"
	release
# 298 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_0
# 299 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT2, Route6_Gabrielle_Victory_Movement_1
# 300 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 302 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT1
# 303 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GRUNT2
# 305 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GAB, Route6_Gabrielle_Trigger_Movement_3
# 306 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Gabrielle_Victory_Movement_2
# 308 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_1
# 309 "data//maps/Route6/scripts.pory"
	release
# 310 "data//maps/Route6/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 312 "data//maps/Route6/scripts.pory"
	msgbox Route6_Gabrielle_Victory_Text_2
# 313 "data//maps/Route6/scripts.pory"
	release
# 314 "data//maps/Route6/scripts.pory"
	applymovement LOCALID_GRUNT1, Route6_Gabrielle_Victory_Movement_3
# 315 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 316 "data//maps/Route6/scripts.pory"
	removeobject LOCALID_GAB
# 317 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_GABRIELLE_BULLY
# 319 "data//maps/Route6/scripts.pory"
	releaseall
	return


# 235 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_0:
# 235 "data//maps/Route6/scripts.pory"
	jump_in_place_right
	step_end

# 241 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_1:
# 241 "data//maps/Route6/scripts.pory"
	emote_exclamation_mark
	step_end

# 244 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_2:
# 244 "data//maps/Route6/scripts.pory"
	walk_down
# 244 "data//maps/Route6/scripts.pory"
	walk_down
# 244 "data//maps/Route6/scripts.pory"
	walk_left
# 244 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 246 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_3:
# 246 "data//maps/Route6/scripts.pory"
	face_down
	step_end

# 251 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_4:
# 251 "data//maps/Route6/scripts.pory"
	jump_in_place_down
	step_end

# 256 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_5:
# 256 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 258 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_6:
# 258 "data//maps/Route6/scripts.pory"
	walk_right
# 258 "data//maps/Route6/scripts.pory"
	walk_right
# 258 "data//maps/Route6/scripts.pory"
	walk_up
# 258 "data//maps/Route6/scripts.pory"
	walk_up
# 258 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 259 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Trigger_Movement_7:
# 259 "data//maps/Route6/scripts.pory"
	walk_right
# 259 "data//maps/Route6/scripts.pory"
	walk_right
# 259 "data//maps/Route6/scripts.pory"
	walk_right
# 259 "data//maps/Route6/scripts.pory"
	walk_up
# 259 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 298 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_0:
# 298 "data//maps/Route6/scripts.pory"
	walk_down
# 298 "data//maps/Route6/scripts.pory"
	walk_down
# 298 "data//maps/Route6/scripts.pory"
	walk_left
# 298 "data//maps/Route6/scripts.pory"
	walk_left
# 298 "data//maps/Route6/scripts.pory"
	walk_left
# 298 "data//maps/Route6/scripts.pory"
	walk_down
# 298 "data//maps/Route6/scripts.pory"
	walk_down
# 298 "data//maps/Route6/scripts.pory"
	walk_down
# 298 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 299 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_1:
# 299 "data//maps/Route6/scripts.pory"
	walk_down
# 299 "data//maps/Route6/scripts.pory"
	walk_left
# 299 "data//maps/Route6/scripts.pory"
	walk_left
# 299 "data//maps/Route6/scripts.pory"
	walk_left
# 299 "data//maps/Route6/scripts.pory"
	walk_down
# 299 "data//maps/Route6/scripts.pory"
	walk_down
# 299 "data//maps/Route6/scripts.pory"
	walk_down
# 299 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

# 306 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_2:
# 306 "data//maps/Route6/scripts.pory"
	face_up
	step_end

# 314 "data//maps/Route6/scripts.pory"
Route6_Gabrielle_Victory_Movement_3:
# 314 "data//maps/Route6/scripts.pory"
	walk_left
# 314 "data//maps/Route6/scripts.pory"
	walk_down
# 314 "data//maps/Route6/scripts.pory"
	walk_down
# 314 "data//maps/Route6/scripts.pory"
	walk_left
# 314 "data//maps/Route6/scripts.pory"
	walk_left
# 314 "data//maps/Route6/scripts.pory"
	walk_left
# 314 "data//maps/Route6/scripts.pory"
	walk_down
# 314 "data//maps/Route6/scripts.pory"
	walk_down
# 314 "data//maps/Route6/scripts.pory"
	walk_down
# 314 "data//maps/Route6/scripts.pory"
	walk_down
	step_end

Route6_EventScript_Nurse_Text_0:
# 14 "data//maps/Route6/scripts.pory"
	.string "NURSE JOY: Oh I don't know what\n"
	.string "happened! I went out for a walk and\l"
	.string "ended up in this storm! I'm waiting here\l"
	.string "till it passes. CHANSEY can heal your\l"
	.string "{PKMN} meanwhile.$"

Route6_EventScript_Nurse_Text_1:
# 17 "data//maps/Route6/scripts.pory"
	.string "NURSE JOY: Be careful - once you slide\n"
	.string "down this ledge, you won't be able to\l"
	.string "come back!$"

Route6_Trainer_A_Text_0:
# 23 "data//maps/Route6/scripts.pory"
	.string "The marshes of Route 6 are teeming with\n"
	.string "life. Let's see how well you handle it!$"

Route6_Trainer_A_Text_1:
# 23 "data//maps/Route6/scripts.pory"
	.string "Impressive!$"

Route6_Trainer_A_Text_2:
# 24 "data//maps/Route6/scripts.pory"
	.string "Looks like you can handle yourself in\n"
	.string "these parts.$"

Route6_Trainer_B_Text_0:
# 30 "data//maps/Route6/scripts.pory"
	.string "The road to Pelluca City is\n"
	.string "long....beating you will give me energy!$"

Route6_Trainer_B_Text_1:
# 30 "data//maps/Route6/scripts.pory"
	.string "I lost even more energy!$"

Route6_Trainer_B_Text_2:
# 31 "data//maps/Route6/scripts.pory"
	.string "Maybe I should take a Corviknight Taxi\n"
	.string "to Pelluca City instead.$"

Route6_Trainer_C1_Text_0:
# 37 "data//maps/Route6/scripts.pory"
	.string "We're from the Pokemon Ranger\n"
	.string "Institute. We're on assignment to\l"
	.string "survey new {PKMN}. Have you got any?$"

Route6_Trainer_C1_Text_1:
# 37 "data//maps/Route6/scripts.pory"
	.string "You do have new {PKMN}$"

Route6_Trainer_C1_Text_2:
# 38 "data//maps/Route6/scripts.pory"
	.string "The Pokemon Ranger Institute is the\n"
	.string "headquarters for us Rangers in\l"
	.string "Cormoria.$"

Route6_Trainer_C2_Text_0:
# 44 "data//maps/Route6/scripts.pory"
	.string "We're from the Ranger Institute. We're\n"
	.string "on assignment to survey new {PKMN}. Have\l"
	.string "you got any?$"

Route6_Trainer_C2_Text_1:
# 45 "data//maps/Route6/scripts.pory"
	.string "The Ranger Institute gives us newbies\n"
	.string "such hard assignments!$"

Route6_Trainer_D_Text_0:
# 51 "data//maps/Route6/scripts.pory"
	.string "The secret to catching strong Water\n"
	.string "Pokémon? Patience and a good rod. Too\l"
	.string "bad you don't have one!$"

Route6_Trainer_D_Text_1:
# 51 "data//maps/Route6/scripts.pory"
	.string "I need a Super Rod!$"

Route6_Trainer_D_Text_2:
# 52 "data//maps/Route6/scripts.pory"
	.string "I wonder what {PKMN} I can catch here with\n"
	.string "a Super Rod...$"

Route6_Trainer_E_Text_0:
# 58 "data//maps/Route6/scripts.pory"
	.string "I'm aiming to be the {PKMN} Champion, so\n"
	.string "I've come here to catch rare {PKMN}. Let me\l"
	.string "test them on you!$"

Route6_Trainer_E_Text_1:
# 58 "data//maps/Route6/scripts.pory"
	.string "No - my rare {PKMN}!$"

Route6_Trainer_E_Text_2:
# 59 "data//maps/Route6/scripts.pory"
	.string "Catching good {PKMN} isn't enough. I need\n"
	.string "to train rigorously too.$"

Route6_Trainer_F_Text_0:
# 65 "data//maps/Route6/scripts.pory"
	.string "My CROAGUNK and I love to train here\n"
	.string "because it makes us tough!$"

Route6_Trainer_F_Text_1:
# 65 "data//maps/Route6/scripts.pory"
	.string "We're not tough eonugh!$"

Route6_Trainer_F_Text_2:
# 66 "data//maps/Route6/scripts.pory"
	.string "Wading around in the marshes here works\n"
	.string "your core!$"

Route6_Trainer_G_Text_0:
# 72 "data//maps/Route6/scripts.pory"
	.string "Us BREEDERS like to train one type of\n"
	.string "{PKMN}. I specialise in dogs!$"

Route6_Trainer_G_Text_1:
# 72 "data//maps/Route6/scripts.pory"
	.string "Guess I was more bark than bite!$"

Route6_Trainer_G_Text_2:
# 73 "data//maps/Route6/scripts.pory"
	.string "Dog {PKMN} are rare in Cormoria! Someone in\n"
	.string "PELLUCA CITY traded me my HOUNDOOR.$"

Route6_Trainer_H_Text_0:
# 79 "data//maps/Route6/scripts.pory"
	.string "This weather is prime for my BUG-type\n"
	.string "{PKMN}! You won't be able to handle it!$"

Route6_Trainer_H_Text_1:
# 79 "data//maps/Route6/scripts.pory"
	.string "The weather is fickle!$"

Route6_Trainer_H_Text_2:
# 80 "data//maps/Route6/scripts.pory"
	.string "Although bugs thrive in marshes, there\n"
	.string "aren't many BUG-type {PKMN} around here.$"

Route6_Trainer_I_Text_0:
# 86 "data//maps/Route6/scripts.pory"
	.string "I heard there was a rare DRAGON-type\n"
	.string "{PKMN} here in Route 6, but I can't find any\l"
	.string "on land!$"

Route6_Trainer_I_Text_1:
# 86 "data//maps/Route6/scripts.pory"
	.string "Why did I find you instead?$"

Route6_Trainer_I_Text_2:
# 87 "data//maps/Route6/scripts.pory"
	.string "If its not on land, then maybe I need to\n"
	.string "try fishing...$"

Route6_Trainer_J_Text_0:
# 93 "data//maps/Route6/scripts.pory"
	.string "Past PELLUCA CITY is the MIRROH BASE\n"
	.string "CAMP and a {PKMN} graveyard. I want to go\l"
	.string "there to commune with the afterlife!$"

Route6_Trainer_J_Text_1:
# 93 "data//maps/Route6/scripts.pory"
	.string "I don't want to commune with you!$"

Route6_Trainer_J_Text_2:
# 94 "data//maps/Route6/scripts.pory"
	.string "If we remember our {PKMN} after they go,\n"
	.string "are they truly gone?$"

Route6_NPC1_Text_0:
# 134 "data//maps/Route6/scripts.pory"
	.string "When I was young, there was no route\n"
	.string "through these marshes. Now ROUTE 6\l"
	.string "connects SILVERSUN CITY to PELLUCA\l"
	.string "CITY.$"

Route6_NPC2_Text_0:
# 142 "data//maps/Route6/scripts.pory"
	.string "I wonder what's over there...if I had a\n"
	.string "{PKMN} that knew SURF, I could swim over!$"

Route6_NPC3_Text_0:
# 149 "data//maps/Route6/scripts.pory"
	.string "I want to go to the PELLUCA\n"
	.string "RESTAURANT! The food is supposed to be\l"
	.string "delicious because the head chef\l"
	.string "travels all of Cormoria looking for rare\l"
	.string "ingredients.$"

Route6_NPC4_Text_0:
# 158 "data//maps/Route6/scripts.pory"
	.string "I've been practicing real hard! What do\n"
	.string "you think?$"

Route6_NPC4_Text_1:
# 160 "data//maps/Route6/scripts.pory"
	.string "I'm no good, but it's so much fun!$"

Route6_NPC4_Text_2:
# 164 "data//maps/Route6/scripts.pory"
	.string "Have you brought a RED FLUTE?$"

Route6_NPC4_Text_3:
# 169 "data//maps/Route6/scripts.pory"
	.string "Yes, this looks amazing! I can't wait to\n"
	.string "start playing it.$"

Route6_NPC4_Text_4:
# 172 "data//maps/Route6/scripts.pory"
	.string "I suppose I don't need this any more.\n"
	.string "Here, why don't you take it? You could\l"
	.string "start a new hobby too!$"

Route6_NPC4_Text_5:
# 176 "data//maps/Route6/scripts.pory"
	.string "No, it looks like you haven't. You can\n"
	.string "get one in PELLUCA CITY.$"

Route6_NPC4_Text_6:
# 182 "data//maps/Route6/scripts.pory"
	.string "These waters are too fierce to fish\n"
	.string "properly...why am I even fishing here?\l"
	.string "I'm so unfocused these days. Maybe I\l"
	.string "need a new hobby. I'd like to try music,\l"
	.string "but I might be no good. What do you\l"
	.string "think? Should I try music?$"

Route6_NPC4_Text_7:
# 185 "data//maps/Route6/scripts.pory"
	.string "You're right - unless I try, I'll never\n"
	.string "know! Say, can you help me out? Can you\l"
	.string "bring me a RED FLUTE so I can start\l"
	.string "practicing?$"

Route6_NPC4_Text_8:
# 188 "data//maps/Route6/scripts.pory"
	.string "Thank you so much! I think you can buy\n"
	.string "them in PELLUCA CITY. I'll be waiting\l"
	.string "here for you!$"

Route6_NPC4_Text_9:
# 191 "data//maps/Route6/scripts.pory"
	.string "Ahh well, it's back to fishing then.$"

Route6_NPC4_Text_10:
# 194 "data//maps/Route6/scripts.pory"
	.string "Yeah...I suppose I'd be no good. Fishing\n"
	.string "is all I know.$"

Route6_Gabrielle_Trigger_Text_0:
# 237 "data//maps/Route6/scripts.pory"
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
# 249 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: {PLAYER}, it's you! These\n"
	.string "grunts are trying to take my {PKMN} off me\l"
	.string "- you have to help!$"

Route6_Gabrielle_Trigger_Text_2:
# 253 "data//maps/Route6/scripts.pory"
	.string "GRUNT: Have you no shame GABRIELLE?\n"
	.string "The trainer who got you kicked out is\l"
	.string "now helping you?\p"
	.string "Fine by us! Imagine what the boss'll tell\n"
	.string "us when we take your {PKMN} AND beat the\l"
	.string "trainer that's stopped our plans twice!$"

Route6_Gabrielle_HurryUp_Text_0:
# 278 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: What are you doing? They're\n"
	.string "about to attack!$"

Route6_Gabrielle_DoBattle_Text_0:
# 283 "data//maps/Route6/scripts.pory"
	.string "Stupid ZORUA!$"

Route6_Gabrielle_DoBattle_Text_1:
# 283 "data//maps/Route6/scripts.pory"
	.string "I need better {PKMN}!$"

Route6_Gabrielle_Victory_Text_0:
# 295 "data//maps/Route6/scripts.pory"
	.string "GRUNT: You got lucky that {PLAYER}\n"
	.string "was around, GABRIELLE! Next time we'll\l"
	.string "get your ZOROARK for sure!$"

Route6_Gabrielle_Victory_Text_1:
# 308 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: Thank you {PLAYER}. You\n"
	.string "saved me there.\p"
	.string "Let me heal your {PKMN}.$"

Route6_Gabrielle_Victory_Text_2:
# 312 "data//maps/Route6/scripts.pory"
	.string "GABRIELLE: I live PELLUCA CITY, just\n"
	.string "past the HOYA RIVER. I was on my way\l"
	.string "home when those grunts ambushed\l"
	.string "me...I'm going there now. See you around.$"
