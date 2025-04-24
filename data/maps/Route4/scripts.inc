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
	fadescreen FADE_TO_BLACK
# 71 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT1
# 72 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT2
# 73 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_EVIL_BATTLE
# 74 "data//maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 75 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_TrainerBattle_Raha::
# 84 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_RAHA, Route4_TrainerBattle_Raha_Text_0, Route4_TrainerBattle_Raha_Text_1
# 85 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Raha_Text_2
# 86 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Cammy::
# 91 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_CAMMY, Route4_TrainerBattle_Cammy_Text_0, Route4_TrainerBattle_Cammy_Text_1
# 92 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Cammy_Text_2
# 93 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Sona::
# 98 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_SONA, Route4_TrainerBattle_Sona_Text_0, Route4_TrainerBattle_Sona_Text_1
# 99 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Sona_Text_2
# 100 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Jenny::
# 105 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_JENNY, Route4_TrainerBattle_Jenny_Text_0, Route4_TrainerBattle_Jenny_Text_1
# 106 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Jenny_Text_2
# 107 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Kid1::
# 113 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID1, Route4_TrainerBattle_Kid1_Text_0, Route4_TrainerBattle_Kid1_Text_1
# 115 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_TrainerBattle_Kid1_2
# 118 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_3
Route4_TrainerBattle_Kid1_1:
# 120 "data//maps/Route4/scripts.pory"
	release
	end

Route4_TrainerBattle_Kid1_2:
# 116 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_2
	goto Route4_TrainerBattle_Kid1_1


Route4_TrainerBattle_Kid2::
# 125 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID2, Route4_TrainerBattle_Kid2_Text_0, Route4_TrainerBattle_Kid2_Text_1
# 127 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_TrainerBattle_Kid2_2
# 130 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid2_Text_3
Route4_TrainerBattle_Kid2_1:
# 132 "data//maps/Route4/scripts.pory"
	release
	end

Route4_TrainerBattle_Kid2_2:
# 128 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid2_Text_2
	goto Route4_TrainerBattle_Kid2_1


Route4_TrainerBattle_Kid3::
# 137 "data//maps/Route4/scripts.pory"
	lockall
# 138 "data//maps/Route4/scripts.pory"
	faceplayer
# 140 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_KIDGANG, Route4_TrainerBattle_Kid3_2
# 143 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_1
# 144 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE4_KID3, Route4_TrainerBattle_Kid3_Text_2
# 146 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_3
# 147 "data//maps/Route4/scripts.pory"
	giveitem ITEM_POKE_DOLL
# 148 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_KIDGANG
# 149 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_4
Route4_TrainerBattle_Kid3_1:
# 151 "data//maps/Route4/scripts.pory"
	releaseall
	end

Route4_TrainerBattle_Kid3_2:
# 141 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_0
	goto Route4_TrainerBattle_Kid3_1


Route4_Sign_KidsTrio::
# 157 "data//maps/Route4/scripts.pory"
	msgbox Route4_Sign_KidsTrio_Text_0, MSGBOX_SIGN
	end


Route4_Dewpider_Trigger::
# 164 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_Dewpider_Trigger_2
# 165 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_KIDGANG, Route4_Dewpider_Trigger_4
	end

Route4_Dewpider_Trigger_2:
	end

Route4_Dewpider_Trigger_4:
# 166 "data//maps/Route4/scripts.pory"
	lockall
# 167 "data//maps/Route4/scripts.pory"
	playmoncry SPECIES_DEWPIDER, CRY_MODE_NORMAL
# 168 "data//maps/Route4/scripts.pory"
	waitmoncry
# 169 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Trigger_Text_0
# 170 "data//maps/Route4/scripts.pory"
	release
# 172 "data//maps/Route4/scripts.pory"
	setobjectxyperm LOCALID_DEWPIDER, 9, 23
# 173 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_ATTACK
# 174 "data//maps/Route4/scripts.pory"
	clearflag FLAG_HIDE_ROUTE4_DEWPIDER
# 175 "data//maps/Route4/scripts.pory"
	releaseall
	end


Route4_Dewpider::
# 183 "data//maps/Route4/scripts.pory"
	lockall
# 184 "data//maps/Route4/scripts.pory"
	faceplayer
# 185 "data//maps/Route4/scripts.pory"
	playmoncry SPECIES_DEWPIDER, CRY_MODE_NORMAL
# 186 "data//maps/Route4/scripts.pory"
	delay 16
# 187 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_0
# 188 "data//maps/Route4/scripts.pory"
	release
# 190 "data//maps/Route4/scripts.pory"
	setwildbattle SPECIES_DEWPIDER, 13
# 191 "data//maps/Route4/scripts.pory"
	dowildbattle
# 194 "data//maps/Route4/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 195 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route4_Dewpider_2
Route4_Dewpider_1:
# 201 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route4_Dewpider_5
Route4_Dewpider_4:
# 207 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route4_Dewpider_7
	return

Route4_Dewpider_2:
# 196 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_DEWPIDER
# 197 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_FINISHED
# 198 "data//maps/Route4/scripts.pory"
	setflag FLAG_HIDE_ROUTE4_DEWPIDER
# 199 "data//maps/Route4/scripts.pory"
	goto Route4_Dewpider_Defeated
	goto Route4_Dewpider_1

Route4_Dewpider_5:
# 202 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_DEWPIDER
# 203 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_FINISHED
# 204 "data//maps/Route4/scripts.pory"
	setflag FLAG_HIDE_ROUTE4_DEWPIDER
# 205 "data//maps/Route4/scripts.pory"
	goto Route4_Dewpider_Defeated
	goto Route4_Dewpider_4

Route4_Dewpider_7:
# 208 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_1
# 209 "data//maps/Route4/scripts.pory"
	release
# 210 "data//maps/Route4/scripts.pory"
	delay 12
# 211 "data//maps/Route4/scripts.pory"
	applymovement 22, Route4_Dewpider_Movement_0
# 212 "data//maps/Route4/scripts.pory"
	delay 12
# 213 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_2
# 214 "data//maps/Route4/scripts.pory"
	release
	return


Route4_Dewpider_Defeated::
# 219 "data//maps/Route4/scripts.pory"
	lockall
# 220 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_DEWPIDER
# 221 "data//maps/Route4/scripts.pory"
	applymovement 1, Route4_Dewpider_Defeated_Movement_0
# 222 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 223 "data//maps/Route4/scripts.pory"
	delay 12
# 224 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Defeated_Text_0
# 225 "data//maps/Route4/scripts.pory"
	release
# 226 "data//maps/Route4/scripts.pory"
	applymovement 1, Route4_Dewpider_Defeated_Movement_1
# 227 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 228 "data//maps/Route4/scripts.pory"
	delay 12
# 229 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Defeated_Text_1
# 230 "data//maps/Route4/scripts.pory"
	release
# 232 "data//maps/Route4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 233 "data//maps/Route4/scripts.pory"
	removeobject 1
# 234 "data//maps/Route4/scripts.pory"
	removeobject 2
# 235 "data//maps/Route4/scripts.pory"
	removeobject 3
# 236 "data//maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Route4_NPC_Couple1::
# 242 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple1_Text_0, MSGBOX_NPC
	end


Route4_NPC_Couple2::
# 247 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple2_Text_0, MSGBOX_NPC
	end


Route4_NPC_A::
# 253 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_A_Text_0, MSGBOX_NPC
	end


Route4_NPC_B::
# 259 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_FINISHED, Route4_NPC_B_2
# 262 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_NPC_B_5
# 265 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_2, MSGBOX_NPC
Route4_NPC_B_1:
	end

Route4_NPC_B_2:
# 260 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_0, MSGBOX_NPC
	goto Route4_NPC_B_1

Route4_NPC_B_5:
# 263 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_1, MSGBOX_NPC
	goto Route4_NPC_B_1


Route4_NPC_Cook::
# 275 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_COOK, Route4_NPC_Cook_2
# 279 "data//maps/Route4/scripts.pory"
	lockall
# 280 "data//maps/Route4/scripts.pory"
	faceplayer
# 281 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 282 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_2, MSGBOX_YESNO
# 283 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_5
# 299 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 300 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_6, MSGBOX_NPC
Route4_NPC_Cook_1:
# 305 "data//maps/Route4/scripts.pory"
	releaseall
	end

Route4_NPC_Cook_2:
# 276 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 277 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_1, MSGBOX_NPC
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_5:
# 284 "data//maps/Route4/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 285 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_8
# 295 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 296 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_5, MSGBOX_NPC
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_8:
# 286 "data//maps/Route4/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 287 "data//maps/Route4/scripts.pory"
	speakername NULL
# 288 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_3, MSGBOX_SIGN
# 289 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 290 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_4
# 292 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_Reward
	goto Route4_NPC_Cook_1


Route4_NPC_Cook_Reward::
# 310 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 311 "data//maps/Route4/scripts.pory"
	message Route4_NPC_Cook_Reward_Text_0
# 312 "data//maps/Route4/scripts.pory"
	waitmessage
# 313 "data//maps/Route4/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route4_NPC_Cook_Reward_Text_1, Route4_NPC_Cook_Reward_Text_2
# 314 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route4_NPC_Cook_Reward_1
# 317 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_RewardB
	return

Route4_NPC_Cook_Reward_1:
# 315 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_RewardA
	return


Route4_NPC_Cook_RewardA::
# 322 "data//maps/Route4/scripts.pory"
	setvar VAR_0x8006, ITEM_SHELL_BELL
# 323 "data//maps/Route4/scripts.pory"
	showitemdescription
# 324 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 325 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_RewardA_Text_0, MSGBOX_YESNO
# 326 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_RewardA_1
# 331 "data//maps/Route4/scripts.pory"
	hideitemdescription
# 332 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_Reward
	return

Route4_NPC_Cook_RewardA_1:
# 327 "data//maps/Route4/scripts.pory"
	hideitemdescription
# 328 "data//maps/Route4/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 329 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_RewardEnd
	return


Route4_NPC_Cook_RewardB::
# 337 "data//maps/Route4/scripts.pory"
	setvar VAR_0x8006, ITEM_ADRENALINE_ORB
# 338 "data//maps/Route4/scripts.pory"
	showitemdescription
# 339 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 340 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_RewardA_Text_0, MSGBOX_YESNO
# 341 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_RewardB_1
# 346 "data//maps/Route4/scripts.pory"
	hideitemdescription
# 347 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_Reward
	return

Route4_NPC_Cook_RewardB_1:
# 342 "data//maps/Route4/scripts.pory"
	hideitemdescription
# 343 "data//maps/Route4/scripts.pory"
	giveitem ITEM_ADRENALINE_ORB
# 344 "data//maps/Route4/scripts.pory"
	goto Route4_NPC_Cook_RewardEnd
	return


Route4_NPC_Cook_RewardEnd::
# 352 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_COOK
# 353 "data//maps/Route4/scripts.pory"
	speakername Route4_NPC_Cook_Text_0
# 354 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_1, MSGBOX_NPC
	end


Route4_NPC_D::
# 360 "data//maps/Route4/scripts.pory"
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

# 211 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Movement_0:
# 211 "data//maps/Route4/scripts.pory"
	face_up
	step_end

# 221 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Defeated_Movement_0:
# 221 "data//maps/Route4/scripts.pory"
	emote_exclamation_mark
# 221 "data//maps/Route4/scripts.pory"
	jump_in_place_down
	step_end

# 226 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Defeated_Movement_1:
# 226 "data//maps/Route4/scripts.pory"
	walk_down
# 226 "data//maps/Route4/scripts.pory"
	jump_in_place_down
# 226 "data//maps/Route4/scripts.pory"
	emote_exclamation_mark
	step_end

Route4_NurseJoy_OnRoute_Text_0:
# 14 "data//maps/Route4/scripts.pory"
	.string "Can you believe it? They stationed us\n"
	.string "on these rocks. I'm a nurse for crying\l"
	.string "out loud!\p"
	.string "Sigh...$"

Route4_EventScript_EvilTeam_Text_0:
# 26 "data//maps/Route4/scripts.pory"
	.string "Hey kid - this road is closed due\n"
	.string "to...uh...repairs. Yeah. Sorry.$"

Route4_EventScript_EvilTeam_Text_1:
# 29 "data//maps/Route4/scripts.pory"
	.string "You're saying we look suspicious? We're\n"
	.string "just...um...construction workers. Sorry.\l"
	.string "Yeah.$"

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
	.string "Can't believe we lost to some stupid\n"
	.string "kid...$"

Route4_EventScript_EvilTeamDefeated_Text_1:
# 61 "data//maps/Route4/scripts.pory"
	.string "We gotta tell the boss at Ceram Base\n"
	.string "Camp about this!$"

Route4_EventScript_EvilTeamDefeated_Text_2:
# 66 "data//maps/Route4/scripts.pory"
	.string "We'll remember this, kid!$"

Route4_TrainerBattle_Raha_Text_0:
# 84 "data//maps/Route4/scripts.pory"
	.string "My Pokémon were very expensive!\n"
	.string "There's no way you can beat me!$"

Route4_TrainerBattle_Raha_Text_1:
# 84 "data//maps/Route4/scripts.pory"
	.string "But Father spent so much money!$"

Route4_TrainerBattle_Raha_Text_2:
# 85 "data//maps/Route4/scripts.pory"
	.string "Maybe I should ask Father to buy some\n"
	.string "stronger Pokémon...or maybe I should\l"
	.string "try and train them myself, like you!$"

Route4_TrainerBattle_Cammy_Text_0:
# 91 "data//maps/Route4/scripts.pory"
	.string "Are you a new trainer? Let this old lady\n"
	.string "teach you some new tricks.$"

Route4_TrainerBattle_Cammy_Text_1:
# 91 "data//maps/Route4/scripts.pory"
	.string "Well fought!$"

Route4_TrainerBattle_Cammy_Text_2:
# 92 "data//maps/Route4/scripts.pory"
	.string "You were the teacher and I was the\n"
	.string "student! Haha!$"

Route4_TrainerBattle_Sona_Text_0:
# 98 "data//maps/Route4/scripts.pory"
	.string "Different Pokémon inhabit different\n"
	.string "areas. I caught mine right here!$"

Route4_TrainerBattle_Sona_Text_1:
# 98 "data//maps/Route4/scripts.pory"
	.string "Oh no!$"

Route4_TrainerBattle_Sona_Text_2:
# 99 "data//maps/Route4/scripts.pory"
	.string "No matter where they're from, all\n"
	.string "Pokémon need love and care.$"

Route4_TrainerBattle_Jenny_Text_0:
# 105 "data//maps/Route4/scripts.pory"
	.string "My PANCHAM and I train here every\n"
	.string "morning. We want to become the\l"
	.string "strongest!$"

Route4_TrainerBattle_Jenny_Text_1:
# 105 "data//maps/Route4/scripts.pory"
	.string "We need to train harder!$"

Route4_TrainerBattle_Jenny_Text_2:
# 106 "data//maps/Route4/scripts.pory"
	.string "Pancham and I will become Pokémon\n"
	.string "Champions one day!$"

Route4_TrainerBattle_Kid1_Text_0:
# 113 "data//maps/Route4/scripts.pory"
	.string "Hah! Bet you didn't see me there, did\n"
	.string "you? You entered our secret hideout\l"
	.string "and now you're going to pay!$"

Route4_TrainerBattle_Kid1_Text_1:
# 113 "data//maps/Route4/scripts.pory"
	.string "Waah!$"

Route4_TrainerBattle_Kid1_Text_2:
# 116 "data//maps/Route4/scripts.pory"
	.string "Eek! It's the Dewpider!$"

Route4_TrainerBattle_Kid1_Text_3:
# 118 "data//maps/Route4/scripts.pory"
	.string "It's summer break so we play here all\n"
	.string "day until the sun goes down!$"

Route4_TrainerBattle_Kid2_Text_0:
# 125 "data//maps/Route4/scripts.pory"
	.string "Ooh, you made it this far! But I won't\n"
	.string "let you lay your hands on the boss! I'm\l"
	.string "going to stop you right now!$"

Route4_TrainerBattle_Kid2_Text_1:
# 125 "data//maps/Route4/scripts.pory"
	.string "Boss! Help!$"

Route4_TrainerBattle_Kid2_Text_2:
# 128 "data//maps/Route4/scripts.pory"
	.string "Someone help the boss! The Dewpider is\n"
	.string "attacking him!$"

Route4_TrainerBattle_Kid2_Text_3:
# 130 "data//maps/Route4/scripts.pory"
	.string "Our secret hideout is really cool, don't\n"
	.string "you think?$"

Route4_TrainerBattle_Kid3_Text_0:
# 141 "data//maps/Route4/scripts.pory"
	.string "I have so much fun with my friends\n"
	.string "here...I hate going back home. I hate my\l"
	.string "family!$"

Route4_TrainerBattle_Kid3_Text_1:
# 143 "data//maps/Route4/scripts.pory"
	.string "Ahem...welcome to our secret hideout,\n"
	.string "old one. You may look down upon us for\l"
	.string "being so small, but let me tell you\l"
	.string "something...Even us kids are strong!$"

Route4_TrainerBattle_Kid3_Text_2:
# 144 "data//maps/Route4/scripts.pory"
	.string "My Pokémon! Adults are lame!$"

Route4_TrainerBattle_Kid3_Text_3:
# 146 "data//maps/Route4/scripts.pory"
	.string "You have proved your worth, old one. You\n"
	.string "may now accept this reward.$"

Route4_TrainerBattle_Kid3_Text_4:
# 149 "data//maps/Route4/scripts.pory"
	.string "...\p"
	.string "...when will I go back home?\p"
	.string "Never! I hate my family! They only care\n"
	.string "about my big brother. I'm not scared of\l"
	.string "any Dewpiders. I want...I want to be\l"
	.string "outside all day!$"

Route4_Sign_KidsTrio_Text_0:
# 157 "data//maps/Route4/scripts.pory"
	.string "A child has scrawled on this sign.\p"
	.string "THIS IS OUR SECRET BASE. GET OUT OR\n"
	.string "BEWARE!!!!$"

Route4_Dewpider_Trigger_Text_0:
# 169 "data//maps/Route4/scripts.pory"
	.string "Aaahhh!! Help!!!!$"

Route4_Dewpider_Text_0:
# 187 "data//maps/Route4/scripts.pory"
	.string "It's the Dewpider! It snaps at you and\n"
	.string "attacks!$"

Route4_Dewpider_Text_1:
# 208 "data//maps/Route4/scripts.pory"
	.string "The Dewpider snaps at you before\n"
	.string "turning around.$"

Route4_Dewpider_Text_2:
# 213 "data//maps/Route4/scripts.pory"
	.string "Will the kids just be left like this?$"

Route4_Dewpider_Defeated_Text_0:
# 224 "data//maps/Route4/scripts.pory"
	.string "You saved us! Thank you. We were so\n"
	.string "scared!\p"
	.string "...\p"
	.string "I'll go home. I can't let my friends be\n"
	.string "hurt by the Dewpider.$"

Route4_Dewpider_Defeated_Text_1:
# 229 "data//maps/Route4/scripts.pory"
	.string "C'mon gang! Let's go.$"

Route4_NPC_Couple1_Text_0:
# 242 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "The lake is nice too...$"

Route4_NPC_Couple2_Text_0:
# 247 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "It's a shame about her...$"

Route4_NPC_A_Text_0:
# 253 "data//maps/Route4/scripts.pory"
	.string "I don't understand why they don't just\n"
	.string "build a bridge across to Ceram Base\l"
	.string "Camp. Sure, trainers can cross with HM\l"
	.string "SPLASH, but the city management needs\l"
	.string "to think about us civilians too. We're\l"
	.string "not all trainers!$"

Route4_NPC_B_Text_0:
# 260 "data//maps/Route4/scripts.pory"
	.string "My brother's gone home now. Finally!$"

Route4_NPC_B_Text_1:
# 263 "data//maps/Route4/scripts.pory"
	.string "What was that cry? It sounded like my\n"
	.string "stupid brother. Hah! He's only getting\l"
	.string "what he deserves.$"

Route4_NPC_B_Text_2:
# 265 "data//maps/Route4/scripts.pory"
	.string "Mom told me to come here and get my\n"
	.string "little brother. He's such a brat!\l"
	.string "Everyone knows its dangerous to play\l"
	.string "here because of the Dewpider. But he\l"
	.string "just runs out and comes here anyway!$"

Route4_NPC_Cook_Text_0:
# 276 "data//maps/Route4/scripts.pory"
	.string "Chef$"

Route4_NPC_Cook_Text_1:
# 277 "data//maps/Route4/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over Cormoria. And if you\l"
	.string "ever visit Pelluca City, be sure to drop\l"
	.string "by our restaurant!$"

Route4_NPC_Cook_Text_2:
# 282 "data//maps/Route4/scripts.pory"
	.string "Hello young trainer! I'm a chef from the\n"
	.string "Pelluca Restaurant, all the way on the\l"
	.string "other side of Cormoria! Why am I here,\l"
	.string "you ask? It's because I travel all\l"
	.string "across Cormoria to find the best\l"
	.string "ingredients for the restaurant! I'm\l"
	.string "looking for a special berry that only\l"
	.string "grows around Mt. Ceram. It's called a\l"
	.string "Rawst Berry. If you happen to have one,\l"
	.string "would you give it to me?$"

Route4_NPC_Cook_Text_3:
# 288 "data//maps/Route4/scripts.pory"
	.string "{PLAYER} gave the chef a Rawst Berry.$"

Route4_NPC_Cook_Text_4:
# 290 "data//maps/Route4/scripts.pory"
	.string "Oh wonderful! This will add a ton of\n"
	.string "flavour to our signature apple pie!\n"
	.string "Thank you trainer. What's your name?\p"
	.string "...\p"
	.string "{PLAYER}, is it? In exchange for the\n"
	.string "berry, I have a couple of trinkets you\l"
	.string "may like.$"

Route4_NPC_Cook_Text_5:
# 296 "data//maps/Route4/scripts.pory"
	.string "I don't see any Rawst Berries on you.\n"
	.string "Come back when you get one!$"

Route4_NPC_Cook_Text_6:
# 300 "data//maps/Route4/scripts.pory"
	.string "A shame! But no matter - I'll continue\n"
	.string "my search.$"

Route4_NPC_Cook_Reward_Text_0:
# 311 "data//maps/Route4/scripts.pory"
	.string "Please take one!$"

Route4_NPC_Cook_Reward_Text_1:
# 313 "data//maps/Route4/scripts.pory"
	.string "Shell Bell$"

Route4_NPC_Cook_Reward_Text_2:
# 313 "data//maps/Route4/scripts.pory"
	.string "Adrenaline Orb$"

Route4_NPC_Cook_RewardA_Text_0:
# 325 "data//maps/Route4/scripts.pory"
	.string "Are you sure?$"

Route4_NPC_D_Text_0:
# 360 "data//maps/Route4/scripts.pory"
	.string "There are some grunts blocking the\n"
	.string "path to Ceram Base Camp! They remind me\l"
	.string "of my younger days...I used to be in an\l"
	.string "evil team in the Hoenn region.$"
