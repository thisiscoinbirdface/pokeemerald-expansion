# 1 "data//maps/Route4/scripts.pory"

# 2 "data//maps/Route4/scripts.pory"
    .set LOCALID_GRUNT1, 12
# 3 "data//maps/Route4/scripts.pory"
    .set LOCALID_GRUNT2, 13
# 4 "data//maps/Route4/scripts.pory"
    .set LOCALID_DEWPIDER, 21

Route4_MapScripts::
	.byte 0


Route4_NurseJoy_OnRoute::
# 12 "data//maps/Route4/scripts.pory"
	lockall
# 13 "data//maps/Route4/scripts.pory"
	faceplayer
# 14 "data//maps/Route4/scripts.pory"
	msgbox Route4_NurseJoy_OnRoute_Text_0
# 15 "data//maps/Route4/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 16 "data//maps/Route4/scripts.pory"
	delay 16
# 17 "data//maps/Route4/scripts.pory"
	releaseall
	end


Route4_EventScript_EvilTeam::
# 25 "data//maps/Route4/scripts.pory"
	lockall
# 26 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_0
# 27 "data//maps/Route4/scripts.pory"
	release
# 28 "data//maps/Route4/scripts.pory"
	delay 8
# 29 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_1
# 30 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_2, MSGBOX_YESNO
# 31 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_EventScript_EvilTeam_2
# 37 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_4
# 38 "data//maps/Route4/scripts.pory"
	release
# 41 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE4_GRUNTS, Route4_EventScript_EvilTeam_Text_5
# 46 "data//maps/Route4/scripts.pory"
	goto Route4_EventScript_EvilTeamDefeated
# 47 "data//maps/Route4/scripts.pory"
	releaseall
	return

Route4_EventScript_EvilTeam_2:
# 32 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_3
# 33 "data//maps/Route4/scripts.pory"
	releaseall
	end


Route4_EventScript_EvilTeamDefeated::
# 52 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_0
# 53 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_1
# 54 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 55 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_2
# 56 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 57 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_0
# 58 "data//maps/Route4/scripts.pory"
	release
# 59 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_3
# 60 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 61 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_1
# 62 "data//maps/Route4/scripts.pory"
	release
# 63 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_4
# 64 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_4
# 65 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 66 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_2
# 67 "data//maps/Route4/scripts.pory"
	release
# 70 "data//maps/Route4/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 71 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT1
# 72 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT2
# 73 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_EVIL_BATTLE
# 74 "data//maps/Route4/scripts.pory"
	playse SE_EXIT
# 75 "data//maps/Route4/scripts.pory"
	waitse
# 76 "data//maps/Route4/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 77 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_TrainerBattle_Raha::
# 86 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_RAHA, Route4_TrainerBattle_Raha_Text_0, Route4_TrainerBattle_Raha_Text_1
# 87 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Raha_Text_2
# 88 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Cammy::
# 93 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_CAMMY, Route4_TrainerBattle_Cammy_Text_0, Route4_TrainerBattle_Cammy_Text_1
# 94 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Cammy_Text_2
# 95 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Sona::
# 100 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_SONA, Route4_TrainerBattle_Sona_Text_0, Route4_TrainerBattle_Sona_Text_1
# 101 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Sona_Text_2
# 102 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Jenny::
# 107 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_JENNY, Route4_TrainerBattle_Jenny_Text_0, Route4_TrainerBattle_Jenny_Text_1
# 108 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Jenny_Text_2
# 109 "data//maps/Route4/scripts.pory"
	release
	end


Route4_Kids_ClearFlag::
# 115 "data//maps/Route4/scripts.pory"
	clearflag FLAG_ROUTE4_DEWPIDER_FINISHED
	end


Route4_TrainerBattle_Kid1::
# 120 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID1, Route4_TrainerBattle_Kid1_Text_0, Route4_TrainerBattle_Kid1_Text_1, Route4_Kids_ClearFlag
# 123 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_TrainerBattle_Kid1_2
# 126 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_3
Route4_TrainerBattle_Kid1_1:
# 128 "data//maps/Route4/scripts.pory"
	release
	end

Route4_TrainerBattle_Kid1_2:
# 124 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_2
	goto Route4_TrainerBattle_Kid1_1


Route4_TrainerBattle_Kid2::
# 133 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID2, Route4_TrainerBattle_Kid2_Text_0, Route4_TrainerBattle_Kid2_Text_1, Route4_Kids_ClearFlag
# 135 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_TrainerBattle_Kid2_2
# 138 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid2_Text_3
Route4_TrainerBattle_Kid2_1:
# 140 "data//maps/Route4/scripts.pory"
	release
	end

Route4_TrainerBattle_Kid2_2:
# 136 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid2_Text_2
	goto Route4_TrainerBattle_Kid2_1


Route4_TrainerBattle_Kid3::
# 145 "data//maps/Route4/scripts.pory"
	lockall
# 146 "data//maps/Route4/scripts.pory"
	faceplayer
# 148 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_KIDGANG, Route4_TrainerBattle_Kid3_2
# 156 "data//maps/Route4/scripts.pory"
	clearflag FLAG_ROUTE4_DEWPIDER_FINISHED
# 157 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_2
# 158 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE4_KID3, Route4_TrainerBattle_Kid3_Text_3
# 160 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_4
# 161 "data//maps/Route4/scripts.pory"
	giveitem ITEM_POKE_DOLL
# 162 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_KIDGANG
# 163 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_5
Route4_TrainerBattle_Kid3_1:
# 165 "data//maps/Route4/scripts.pory"
	releaseall
	end

Route4_TrainerBattle_Kid3_2:
# 150 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_TrainerBattle_Kid3_5
# 153 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_1
	goto Route4_TrainerBattle_Kid3_1

Route4_TrainerBattle_Kid3_5:
# 151 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_0, MSGBOX_NPC
	goto Route4_TrainerBattle_Kid3_1


Route4_Sign_KidsTrio::
# 171 "data//maps/Route4/scripts.pory"
	msgbox Route4_Sign_KidsTrio_Text_0, MSGBOX_SIGN
	end


Route4_Dewpider_Trigger::
# 178 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_Dewpider_Trigger_2
# 179 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_KIDGANG, Route4_Dewpider_Trigger_4
	end

Route4_Dewpider_Trigger_2:
	end

Route4_Dewpider_Trigger_4:
# 180 "data//maps/Route4/scripts.pory"
	lockall
# 181 "data//maps/Route4/scripts.pory"
	playmoncry SPECIES_DEWPIDER, CRY_MODE_NORMAL
# 182 "data//maps/Route4/scripts.pory"
	waitmoncry
# 183 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Trigger_Text_0
# 184 "data//maps/Route4/scripts.pory"
	release
# 186 "data//maps/Route4/scripts.pory"
	setobjectxyperm LOCALID_DEWPIDER, 9, 23
# 187 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_ATTACK
# 188 "data//maps/Route4/scripts.pory"
	clearflag FLAG_HIDE_ROUTE4_DEWPIDER
# 189 "data//maps/Route4/scripts.pory"
	releaseall
	end


Route4_Dewpider::
# 197 "data//maps/Route4/scripts.pory"
	lockall
# 198 "data//maps/Route4/scripts.pory"
	faceplayer
# 199 "data//maps/Route4/scripts.pory"
	playmoncry SPECIES_DEWPIDER, CRY_MODE_NORMAL
# 200 "data//maps/Route4/scripts.pory"
	delay 16
# 201 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_0
# 202 "data//maps/Route4/scripts.pory"
	release
# 204 "data//maps/Route4/scripts.pory"
	setwildbattle SPECIES_DEWPIDER, 13
# 205 "data//maps/Route4/scripts.pory"
	dowildbattle
# 208 "data//maps/Route4/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 209 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route4_Dewpider_2
Route4_Dewpider_1:
# 215 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route4_Dewpider_5
Route4_Dewpider_4:
# 221 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route4_Dewpider_7
	return

Route4_Dewpider_2:
# 210 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_DEWPIDER
# 211 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_FINISHED
# 212 "data//maps/Route4/scripts.pory"
	setflag FLAG_HIDE_ROUTE4_DEWPIDER
# 213 "data//maps/Route4/scripts.pory"
	goto Route4_Dewpider_Defeated
	goto Route4_Dewpider_1

Route4_Dewpider_5:
# 216 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_DEWPIDER
# 217 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_FINISHED
# 218 "data//maps/Route4/scripts.pory"
	setflag FLAG_HIDE_ROUTE4_DEWPIDER
# 219 "data//maps/Route4/scripts.pory"
	goto Route4_Dewpider_Defeated
	goto Route4_Dewpider_4

Route4_Dewpider_7:
# 222 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_1
# 223 "data//maps/Route4/scripts.pory"
	release
# 224 "data//maps/Route4/scripts.pory"
	delay 12
# 225 "data//maps/Route4/scripts.pory"
	applymovement 22, Route4_Dewpider_Movement_0
# 226 "data//maps/Route4/scripts.pory"
	delay 12
# 227 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_2
# 228 "data//maps/Route4/scripts.pory"
	release
	return


Route4_Dewpider_Defeated::
# 233 "data//maps/Route4/scripts.pory"
	lockall
# 234 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_DEWPIDER
# 235 "data//maps/Route4/scripts.pory"
	applymovement 1, Route4_Dewpider_Defeated_Movement_0
# 236 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 237 "data//maps/Route4/scripts.pory"
	delay 12
# 238 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Defeated_Text_0
# 239 "data//maps/Route4/scripts.pory"
	release
# 240 "data//maps/Route4/scripts.pory"
	applymovement 1, Route4_Dewpider_Defeated_Movement_1
# 241 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 242 "data//maps/Route4/scripts.pory"
	delay 12
# 243 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Defeated_Text_1
# 244 "data//maps/Route4/scripts.pory"
	release
# 246 "data//maps/Route4/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 247 "data//maps/Route4/scripts.pory"
	removeobject 1
# 248 "data//maps/Route4/scripts.pory"
	removeobject 2
# 249 "data//maps/Route4/scripts.pory"
	removeobject 3
# 250 "data//maps/Route4/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	return


Route4_NPC_Couple1::
# 256 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple1_Text_0, MSGBOX_NPC
	end


Route4_NPC_Couple2::
# 261 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple2_Text_0, MSGBOX_NPC
	end


Route4_NPC_A::
# 267 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_A_Text_0, MSGBOX_NPC
	end


Route4_NPC_B::
# 273 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_FINISHED, Route4_NPC_B_2
# 276 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_NPC_B_5
# 279 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_2, MSGBOX_NPC
Route4_NPC_B_1:
	end

Route4_NPC_B_2:
# 274 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_0, MSGBOX_NPC
	goto Route4_NPC_B_1

Route4_NPC_B_5:
# 277 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_1, MSGBOX_NPC
	goto Route4_NPC_B_1


Route4_NPC_Cook::
# 289 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_COOK, Route4_NPC_Cook_2
# 293 "data//maps/Route4/scripts.pory"
	lockall
# 294 "data//maps/Route4/scripts.pory"
	faceplayer
# 295 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 296 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_2, MSGBOX_YESNO
# 297 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_5
# 318 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 319 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_6, MSGBOX_NPC
Route4_NPC_Cook_1:
# 324 "data//maps/Route4/scripts.pory"
	releaseall
	end

Route4_NPC_Cook_2:
# 290 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 291 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_1, MSGBOX_NPC
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_5:
# 298 "data//maps/Route4/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 299 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_8
# 314 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 315 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_5, MSGBOX_NPC
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_8:
# 300 "data//maps/Route4/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 301 "data//maps/Route4/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 302 "data//maps/Route4/scripts.pory"
	speakername NULL
# 303 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_3, MSGBOX_SIGN
# 304 "data//maps/Route4/scripts.pory"
	waitfanfare
# 306 "data//maps/Route4/scripts.pory"
	delay 8
# 307 "data//maps/Route4/scripts.pory"
	faceplayer
# 308 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 309 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_4
# 311 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_Reward
	goto Route4_NPC_Cook_1


Route4_NPC_Cook_Reward::
# 329 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 330 "data//maps/Route4/scripts.pory"
	message Route4_NPC_Cook_Reward_Text_0
# 331 "data//maps/Route4/scripts.pory"
	waitmessage
# 332 "data//maps/Route4/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route4_NPC_Cook_Reward_Text_1, Route4_NPC_Cook_Reward_Text_2
# 333 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route4_NPC_Cook_Reward_1
# 336 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_RewardB
	return

Route4_NPC_Cook_Reward_1:
# 334 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_RewardA
	return


Route4_NPC_Cook_RewardA::
# 341 "data//maps/Route4/scripts.pory"
	setvar VAR_0x8006, ITEM_SHELL_BELL
# 342 "data//maps/Route4/scripts.pory"
	showitemdescription
# 343 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 344 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_RewardA_Text_0, MSGBOX_YESNO
# 345 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_RewardA_1
# 350 "data//maps/Route4/scripts.pory"
	hideitemdescription
# 351 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_Reward
	return

Route4_NPC_Cook_RewardA_1:
# 346 "data//maps/Route4/scripts.pory"
	hideitemdescription
# 347 "data//maps/Route4/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 348 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_RewardEnd
	return


Route4_NPC_Cook_RewardB::
# 356 "data//maps/Route4/scripts.pory"
	setvar VAR_0x8006, ITEM_ADRENALINE_ORB
# 357 "data//maps/Route4/scripts.pory"
	showitemdescription
# 358 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 359 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_RewardA_Text_0, MSGBOX_YESNO
# 360 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_RewardB_1
# 365 "data//maps/Route4/scripts.pory"
	hideitemdescription
# 366 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_Reward
	return

Route4_NPC_Cook_RewardB_1:
# 361 "data//maps/Route4/scripts.pory"
	hideitemdescription
# 362 "data//maps/Route4/scripts.pory"
	giveitem ITEM_ADRENALINE_ORB
# 363 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_RewardEnd
	return


Route4_NPC_Cook_RewardEnd::
# 371 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_COOK
# 372 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 373 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_1, MSGBOX_NPC
	end


Route4_NPC_D::
# 379 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_D_Text_0, MSGBOX_NPC
	end


# 52 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_0:
# 52 "data//maps/Route4/scripts.pory"
	face_right
	step_end

# 53 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_1:
# 53 "data//maps/Route4/scripts.pory"
	face_left
	step_end

# 55 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_2:
# 55 "data//maps/Route4/scripts.pory"
	jump_in_place_right
	step_end

# 59 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_3:
# 59 "data//maps/Route4/scripts.pory"
	jump_in_place_left
	step_end

# 63 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_4:
# 63 "data//maps/Route4/scripts.pory"
	face_down
	step_end

# 225 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Movement_0:
# 225 "data//maps/Route4/scripts.pory"
	face_up
	step_end

# 235 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Defeated_Movement_0:
# 235 "data//maps/Route4/scripts.pory"
	emote_exclamation_mark
# 235 "data//maps/Route4/scripts.pory"
	jump_in_place_down
	step_end

# 240 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Defeated_Movement_1:
# 240 "data//maps/Route4/scripts.pory"
	walk_down
# 240 "data//maps/Route4/scripts.pory"
	jump_in_place_down
# 240 "data//maps/Route4/scripts.pory"
	emote_exclamation_mark
	step_end

Route4_NurseJoy_OnRoute_Text_0:
# 14 "data//maps/Route4/scripts.pory"
	.string "Can you believe it?\n"
	.string "They stationed us on these rocks.\l"
	.string "I'm a nurse for crying out loud!\p"
	.string "Sigh...$"

Route4_EventScript_EvilTeam_Text_0:
# 26 "data//maps/Route4/scripts.pory"
	.string "Hey kid - this road is closed due\n"
	.string "to...uh...repairs. Yeah. Sorry.$"

Route4_EventScript_EvilTeam_Text_1:
# 29 "data//maps/Route4/scripts.pory"
	.string "Huh? We're suspicious? We're just...um...\n"
	.string "...construction workers. Sorry. Yeah.$"

Route4_EventScript_EvilTeam_Text_2:
# 30 "data//maps/Route4/scripts.pory"
	.string "So you'll step back and let us do our\n"
	.string "work, right?$"

Route4_EventScript_EvilTeam_Text_3:
# 32 "data//maps/Route4/scripts.pory"
	.string "Good. Now scram!$"

Route4_EventScript_EvilTeam_Text_4:
# 37 "data//maps/Route4/scripts.pory"
	.string "You don't want to budge? Grr...alright\n"
	.string "fine, we're not construction workers.\l"
	.string "We're Team Somber! And now we're going\l"
	.string "to teach you a lesson!$"

Route4_EventScript_EvilTeam_Text_5:
# 43 "data//maps/Route4/scripts.pory"
	.string "Stupid kid!$"

Route4_EventScript_EvilTeamDefeated_Text_0:
# 57 "data//maps/Route4/scripts.pory"
	.string "Can't believe we lost to a stupid kid...$"

Route4_EventScript_EvilTeamDefeated_Text_1:
# 61 "data//maps/Route4/scripts.pory"
	.string "C'mon - we gotta tell the boss at\n"
	.string "Ceram Base Camp about this!$"

Route4_EventScript_EvilTeamDefeated_Text_2:
# 66 "data//maps/Route4/scripts.pory"
	.string "We'll remember this, kid!$"

Route4_TrainerBattle_Raha_Text_0:
# 86 "data//maps/Route4/scripts.pory"
	.string "My Pokémon were very expensive!\n"
	.string "There's no way you can beat me!$"

Route4_TrainerBattle_Raha_Text_1:
# 86 "data//maps/Route4/scripts.pory"
	.string "But Father spent so much money!$"

Route4_TrainerBattle_Raha_Text_2:
# 87 "data//maps/Route4/scripts.pory"
	.string "Maybe I should ask Father to buy some\n"
	.string "stronger Pokémon...or maybe I should\l"
	.string "try and train them myself, like you!$"

Route4_TrainerBattle_Cammy_Text_0:
# 93 "data//maps/Route4/scripts.pory"
	.string "Are you a new trainer? Let this old lady\n"
	.string "teach you some new tricks!$"

Route4_TrainerBattle_Cammy_Text_1:
# 93 "data//maps/Route4/scripts.pory"
	.string "You know a trick or two yourself!$"

Route4_TrainerBattle_Cammy_Text_2:
# 94 "data//maps/Route4/scripts.pory"
	.string "You were the teacher and I was the\n"
	.string "student! Haha!$"

Route4_TrainerBattle_Sona_Text_0:
# 100 "data//maps/Route4/scripts.pory"
	.string "Different Pokémon inhabit different\n"
	.string "areas. I caught mine right here!$"

Route4_TrainerBattle_Sona_Text_1:
# 100 "data//maps/Route4/scripts.pory"
	.string "Oh no!$"

Route4_TrainerBattle_Sona_Text_2:
# 101 "data//maps/Route4/scripts.pory"
	.string "No matter where they're from, all\n"
	.string "Pokémon need love and care.$"

Route4_TrainerBattle_Jenny_Text_0:
# 107 "data//maps/Route4/scripts.pory"
	.string "Oof! It's getting hotter and hotter.\n"
	.string "Where's the air conditioning?$"

Route4_TrainerBattle_Jenny_Text_1:
# 107 "data//maps/Route4/scripts.pory"
	.string "You're too hot!$"

Route4_TrainerBattle_Jenny_Text_2:
# 108 "data//maps/Route4/scripts.pory"
	.string "Buneary, Chikorita and I can't stand\n"
	.string "the heat of the volcano!$"

Route4_TrainerBattle_Kid1_Text_0:
# 120 "data//maps/Route4/scripts.pory"
	.string "Hah! Bet you didn't see me there, did\n"
	.string "you? You entered our secret hideout\l"
	.string "and now you're going to pay!$"

Route4_TrainerBattle_Kid1_Text_1:
# 120 "data//maps/Route4/scripts.pory"
	.string "Waah!$"

Route4_TrainerBattle_Kid1_Text_2:
# 124 "data//maps/Route4/scripts.pory"
	.string "Eek! It's the Dewpider!$"

Route4_TrainerBattle_Kid1_Text_3:
# 126 "data//maps/Route4/scripts.pory"
	.string "It's summer break so we play here all\n"
	.string "day until the sun goes down!$"

Route4_TrainerBattle_Kid2_Text_0:
# 133 "data//maps/Route4/scripts.pory"
	.string "Ooh, you made it this far! But I won't\n"
	.string "let you lay your hands on the boss! I'm\l"
	.string "going to stop you right now!$"

Route4_TrainerBattle_Kid2_Text_1:
# 133 "data//maps/Route4/scripts.pory"
	.string "Boss! Help!$"

Route4_TrainerBattle_Kid2_Text_2:
# 136 "data//maps/Route4/scripts.pory"
	.string "Someone help the boss!$"

Route4_TrainerBattle_Kid2_Text_3:
# 138 "data//maps/Route4/scripts.pory"
	.string "Our secret hideout is really cool,\n"
	.string "don't you think?$"

Route4_TrainerBattle_Kid3_Text_0:
# 151 "data//maps/Route4/scripts.pory"
	.string "It's you! The old one! Please get\n"
	.string "Dewpider away from me!$"

Route4_TrainerBattle_Kid3_Text_1:
# 153 "data//maps/Route4/scripts.pory"
	.string "I have so much fun with my friends\n"
	.string "here...I hate going back home. I hate my\l"
	.string "family!$"

Route4_TrainerBattle_Kid3_Text_2:
# 157 "data//maps/Route4/scripts.pory"
	.string "Ahem...welcome to our secret hideout,\n"
	.string "old one. You may look down upon us for\l"
	.string "being so small, but let me tell you\l"
	.string "something...Even us kids are strong!$"

Route4_TrainerBattle_Kid3_Text_3:
# 158 "data//maps/Route4/scripts.pory"
	.string "My Pokémon! Adults are lame!$"

Route4_TrainerBattle_Kid3_Text_4:
# 160 "data//maps/Route4/scripts.pory"
	.string "You have proved your worth, old one.\n"
	.string "You may now accept this reward.$"

Route4_TrainerBattle_Kid3_Text_5:
# 163 "data//maps/Route4/scripts.pory"
	.string "...\p"
	.string "...when will I go back home?\p"
	.string "Never! I hate my family! They only care\n"
	.string "about my big brother. I'm not scared of\l"
	.string "any Dewpiders. I want...I want to be\l"
	.string "outside all day!$"

Route4_Sign_KidsTrio_Text_0:
# 171 "data//maps/Route4/scripts.pory"
	.string "A child has scrawled on this sign.\p"
	.string "THIS IS OUR SECRET BASE.\n"
	.string "GET OUT OR BEWARE!!!!$"

Route4_Dewpider_Trigger_Text_0:
# 183 "data//maps/Route4/scripts.pory"
	.string "Aaahhh!! Help!!!!$"

Route4_Dewpider_Text_0:
# 201 "data//maps/Route4/scripts.pory"
	.string "Oh no - it's the Dewpider!\n"
	.string "It snaps at you and attacks!$"

Route4_Dewpider_Text_1:
# 222 "data//maps/Route4/scripts.pory"
	.string "The Dewpider snaps at you before\n"
	.string "turning around.$"

Route4_Dewpider_Text_2:
# 227 "data//maps/Route4/scripts.pory"
	.string "Will the kids just be left like this?$"

Route4_Dewpider_Defeated_Text_0:
# 238 "data//maps/Route4/scripts.pory"
	.string "You saved us! Thank you.\n"
	.string "We were so scared!\p"
	.string "...\p"
	.string "I'll go home. I can't let my friends be\n"
	.string "hurt by the Dewpider.$"

Route4_Dewpider_Defeated_Text_1:
# 243 "data//maps/Route4/scripts.pory"
	.string "C'mon gang! Let's go.$"

Route4_NPC_Couple1_Text_0:
# 256 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "The lake is nice too...$"

Route4_NPC_Couple2_Text_0:
# 261 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "It's a shame about her...$"

Route4_NPC_A_Text_0:
# 267 "data//maps/Route4/scripts.pory"
	.string "I don't understand why they don't just\n"
	.string "build a bridge to Ceram Base Camp.\p"
	.string "Sure, trainers can cross with HM Splash,\n"
	.string "but the city management needs to think\l"
	.string "about us civilians too.\p"
	.string "We're not all trainers!$"

Route4_NPC_B_Text_0:
# 274 "data//maps/Route4/scripts.pory"
	.string "My brother's gone home now. Finally!$"

Route4_NPC_B_Text_1:
# 277 "data//maps/Route4/scripts.pory"
	.string "What was that cry? It sounded like my\n"
	.string "stupid brother. Hah! He's only getting\l"
	.string "what he deserves.$"

Route4_NPC_B_Text_2:
# 279 "data//maps/Route4/scripts.pory"
	.string "Mom told me to come here and get my\n"
	.string "little brother. He's such a brat!\l"
	.string "Everyone knows its dangerous to play\l"
	.string "here because of the Dewpider. But he\l"
	.string "just runs out and comes here anyway!$"

Route4_NPC_Cook_Text_0:
# 290 "data//maps/Route4/scripts.pory"
	.string "Chef$"

Route4_NPC_Cook_Text_1:
# 291 "data//maps/Route4/scripts.pory"
	.string "Maybe I'll see you somewhere else,\n"
	.string "since I travel all over Cormoria.\l"
	.string "And if you ever visit Pelluca City,\l"
	.string "be sure to drop by our restaurant!$"

Route4_NPC_Cook_Text_2:
# 296 "data//maps/Route4/scripts.pory"
	.string "I'm a chef from the Pelluca Restaurant.\n"
	.string "It's in Pelluca City, far out west!\l"
	.string "Why am I here? I travel all across\l"
	.string "Cormoria to find the best ingredients\l"
	.string "for the restaurant!\p"
	.string "I'm looking for a special berry that\n"
	.string "only grows around Mt. Ceram. It's called\l"
	.string "a Rawst Berry.\p"
	.string "If you have one, will you give it to me?$"

Route4_NPC_Cook_Text_3:
# 303 "data//maps/Route4/scripts.pory"
	.string "{PLAYER} gave the chef a Rawst Berry.$"

Route4_NPC_Cook_Text_4:
# 309 "data//maps/Route4/scripts.pory"
	.string "Oh wonderful! This will add a ton of\n"
	.string "flavour to our signature apple pie!\l"
	.string "Thank you trainer. What's your name?\p"
	.string "...\p"
	.string "{PLAYER}, is it? In exchange, I have a\n"
	.string "couple of trinkets you may like.$"

Route4_NPC_Cook_Text_5:
# 315 "data//maps/Route4/scripts.pory"
	.string "I don't see any Rawst Berries on you.\n"
	.string "Come back when you get one!$"

Route4_NPC_Cook_Text_6:
# 319 "data//maps/Route4/scripts.pory"
	.string "A shame! I must continue my search.$"

Route4_NPC_Cook_Reward_Text_0:
# 330 "data//maps/Route4/scripts.pory"
	.string "Please take one!$"

Route4_NPC_Cook_Reward_Text_1:
# 332 "data//maps/Route4/scripts.pory"
	.string "Shell Bell$"

Route4_NPC_Cook_Reward_Text_2:
# 332 "data//maps/Route4/scripts.pory"
	.string "Adrenaline Orb$"

Route4_NPC_Cook_RewardA_Text_0:
# 344 "data//maps/Route4/scripts.pory"
	.string "Are you sure?$"

Route4_NPC_D_Text_0:
# 379 "data//maps/Route4/scripts.pory"
	.string "There are some grunts blocking the\n"
	.string "path to Ceram Base Camp! They remind me\l"
	.string "of my younger days...I used to be in an\l"
	.string "evil team in the Hoenn region.$"
