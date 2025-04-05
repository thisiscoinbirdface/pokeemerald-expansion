Route4_MapScripts::
	.byte 0


# 2 "data//maps/Route4/scripts.pory"

# 3 "data//maps/Route4/scripts.pory"
    .set LOCALID_GRUNT1, 12
# 4 "data//maps/Route4/scripts.pory"
    .set LOCALID_GRUNT2, 13

Route4_NurseJoy_OnRoute::
# 9 "data//maps/Route4/scripts.pory"
	lockall
# 10 "data//maps/Route4/scripts.pory"
	faceplayer
# 11 "data//maps/Route4/scripts.pory"
	msgbox Route4_NurseJoy_OnRoute_Text_0
# 12 "data//maps/Route4/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 13 "data//maps/Route4/scripts.pory"
	delay 30
# 14 "data//maps/Route4/scripts.pory"
	releaseall
	end


Route4_EventScript_EvilTeam::
# 22 "data//maps/Route4/scripts.pory"
	lockall
# 23 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_0
# 24 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_1
# 25 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_2, MSGBOX_YESNO
# 26 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_EventScript_EvilTeam_2
# 32 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_4
# 33 "data//maps/Route4/scripts.pory"
	release
# 36 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE4_GRUNTS, Route4_EventScript_EvilTeam_Text_5
# 41 "data//maps/Route4/scripts.pory"
	goto Route4_EventScript_EvilTeamDefeated
# 42 "data//maps/Route4/scripts.pory"
	releaseall
	return

Route4_EventScript_EvilTeam_2:
# 27 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_3
# 28 "data//maps/Route4/scripts.pory"
	releaseall
	end


Route4_EventScript_EvilTeamDefeated::
# 47 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_0
# 48 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_1
# 49 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 50 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_2
# 51 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 52 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_0
# 53 "data//maps/Route4/scripts.pory"
	release
# 54 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_3
# 55 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 56 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_1
# 57 "data//maps/Route4/scripts.pory"
	release
# 58 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_4
# 59 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_4
# 60 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 61 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_2
# 62 "data//maps/Route4/scripts.pory"
	release
# 65 "data//maps/Route4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 66 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT1
# 67 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT2
# 68 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_EVIL_BATTLE
# 69 "data//maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 70 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_TrainerBattle_Raha::
# 79 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_RAHA, Route4_TrainerBattle_Raha_Text_0, Route4_TrainerBattle_Raha_Text_1
# 80 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Raha_Text_2
# 81 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Cammy::
# 86 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_CAMMY, Route4_TrainerBattle_Cammy_Text_0, Route4_TrainerBattle_Cammy_Text_1
# 87 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Cammy_Text_2
# 88 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Sona::
# 93 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_SONA, Route4_TrainerBattle_Sona_Text_0, Route4_TrainerBattle_Sona_Text_1
# 94 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Sona_Text_2
# 95 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Jenny::
# 100 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_JENNY, Route4_TrainerBattle_Jenny_Text_0, Route4_TrainerBattle_Jenny_Text_1
# 101 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Jenny_Text_2
# 102 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Kid1::
# 108 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID1, Route4_TrainerBattle_Kid1_Text_0, Route4_TrainerBattle_Kid1_Text_1
# 110 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_TrainerBattle_Kid1_2
# 113 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_3
Route4_TrainerBattle_Kid1_1:
# 115 "data//maps/Route4/scripts.pory"
	release
	end

Route4_TrainerBattle_Kid1_2:
# 111 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_2
	goto Route4_TrainerBattle_Kid1_1


Route4_TrainerBattle_Kid2::
# 120 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID2, Route4_TrainerBattle_Kid2_Text_0, Route4_TrainerBattle_Kid2_Text_1
# 122 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_TrainerBattle_Kid2_2
# 125 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid2_Text_3
Route4_TrainerBattle_Kid2_1:
# 127 "data//maps/Route4/scripts.pory"
	release
	end

Route4_TrainerBattle_Kid2_2:
# 123 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid2_Text_2
	goto Route4_TrainerBattle_Kid2_1


Route4_TrainerBattle_Kid3::
# 132 "data//maps/Route4/scripts.pory"
	lockall
# 133 "data//maps/Route4/scripts.pory"
	faceplayer
# 135 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_KIDGANG, Route4_TrainerBattle_Kid3_2
# 138 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_1
# 139 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE4_KID3, Route4_TrainerBattle_Kid3_Text_2
# 141 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_3
# 142 "data//maps/Route4/scripts.pory"
	giveitem ITEM_POKE_DOLL
# 143 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_KIDGANG
# 144 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_4
Route4_TrainerBattle_Kid3_1:
# 146 "data//maps/Route4/scripts.pory"
	releaseall
	end

Route4_TrainerBattle_Kid3_2:
# 136 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_0
	goto Route4_TrainerBattle_Kid3_1


Route4_Sign_KidsTrio::
# 152 "data//maps/Route4/scripts.pory"
	msgbox Route4_Sign_KidsTrio_Text_0, MSGBOX_SIGN
	end


Route4_Dewpider_Trigger::
# 159 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_Dewpider_Trigger_2
# 160 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_KIDGANG, Route4_Dewpider_Trigger_4
	end

Route4_Dewpider_Trigger_2:
	end

Route4_Dewpider_Trigger_4:
# 161 "data//maps/Route4/scripts.pory"
	lockall
# 162 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Trigger_Text_0
# 163 "data//maps/Route4/scripts.pory"
	release
# 165 "data//maps/Route4/scripts.pory"
	setobjectxyperm 22, 9, 23
# 166 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_ATTACK
# 167 "data//maps/Route4/scripts.pory"
	releaseall
	end


Route4_Dewpider::
# 175 "data//maps/Route4/scripts.pory"
	lockall
# 176 "data//maps/Route4/scripts.pory"
	faceplayer
# 177 "data//maps/Route4/scripts.pory"
	playmoncry SPECIES_DEWPIDER, CRY_MODE_NORMAL
# 178 "data//maps/Route4/scripts.pory"
	delay 16
# 179 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_0
# 180 "data//maps/Route4/scripts.pory"
	release
# 182 "data//maps/Route4/scripts.pory"
	setwildbattle SPECIES_DEWPIDER, 15
# 183 "data//maps/Route4/scripts.pory"
	dowildbattle
# 186 "data//maps/Route4/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 187 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route4_Dewpider_2
Route4_Dewpider_1:
# 192 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route4_Dewpider_5
Route4_Dewpider_4:
# 197 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route4_Dewpider_7
	return

Route4_Dewpider_2:
# 188 "data//maps/Route4/scripts.pory"
	removeobject 22
# 189 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_FINISHED
# 190 "data//maps/Route4/scripts.pory"
	goto Route4_Dewpider_Defeated
	goto Route4_Dewpider_1

Route4_Dewpider_5:
# 193 "data//maps/Route4/scripts.pory"
	removeobject 22
# 194 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_FINISHED
# 195 "data//maps/Route4/scripts.pory"
	goto Route4_Dewpider_Defeated
	goto Route4_Dewpider_4

Route4_Dewpider_7:
# 198 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_1
# 199 "data//maps/Route4/scripts.pory"
	release
# 200 "data//maps/Route4/scripts.pory"
	delay 12
# 201 "data//maps/Route4/scripts.pory"
	applymovement 22, Route4_Dewpider_Movement_0
# 202 "data//maps/Route4/scripts.pory"
	delay 12
# 203 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_2
# 204 "data//maps/Route4/scripts.pory"
	release
	return


Route4_Dewpider_Defeated::
# 209 "data//maps/Route4/scripts.pory"
	lockall
# 210 "data//maps/Route4/scripts.pory"
	applymovement 1, Route4_Dewpider_Defeated_Movement_0
# 211 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 212 "data//maps/Route4/scripts.pory"
	delay 12
# 213 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Defeated_Text_0
# 214 "data//maps/Route4/scripts.pory"
	release
# 215 "data//maps/Route4/scripts.pory"
	applymovement 1, Route4_Dewpider_Defeated_Movement_1
# 216 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 217 "data//maps/Route4/scripts.pory"
	delay 12
# 218 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Defeated_Text_1
# 219 "data//maps/Route4/scripts.pory"
	release
# 221 "data//maps/Route4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 222 "data//maps/Route4/scripts.pory"
	removeobject 1
# 223 "data//maps/Route4/scripts.pory"
	removeobject 2
# 224 "data//maps/Route4/scripts.pory"
	removeobject 3
# 225 "data//maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Route4_NPC_Couple1::
# 231 "data//maps/Route4/scripts.pory"
	lockall
# 232 "data//maps/Route4/scripts.pory"
	faceplayer
# 233 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple1_Text_0
# 234 "data//maps/Route4/scripts.pory"
	releaseall
# 235 "data//maps/Route4/scripts.pory"
	warp MAP_WINTERLILY_HOLLOW, 13, 20
	return


Route4_NPC_Couple2::
# 239 "data//maps/Route4/scripts.pory"
	lockall
# 240 "data//maps/Route4/scripts.pory"
	faceplayer
# 241 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple2_Text_0
# 242 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_NPC_A::
# 247 "data//maps/Route4/scripts.pory"
	lockall
# 248 "data//maps/Route4/scripts.pory"
	faceplayer
# 249 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_A_Text_0
# 250 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_NPC_B::
# 255 "data//maps/Route4/scripts.pory"
	lockall
# 256 "data//maps/Route4/scripts.pory"
	faceplayer
# 258 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_FINISHED, Route4_NPC_B_2
# 261 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_NPC_B_5
# 264 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_2
Route4_NPC_B_1:
# 268 "data//maps/Route4/scripts.pory"
	releaseall
	return

Route4_NPC_B_2:
# 259 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_0
	goto Route4_NPC_B_1

Route4_NPC_B_5:
# 262 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_1
	goto Route4_NPC_B_1


Route4_NPC_Cook::
# 273 "data//maps/Route4/scripts.pory"
	lockall
# 274 "data//maps/Route4/scripts.pory"
	faceplayer
# 276 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_COOK, Route4_NPC_Cook_2
# 279 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_1, MSGBOX_YESNO
# 280 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_5
# 298 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_7
Route4_NPC_Cook_1:
# 303 "data//maps/Route4/scripts.pory"
	releaseall
	return

Route4_NPC_Cook_2:
# 277 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_0
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_5:
# 281 "data//maps/Route4/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 282 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_8
# 295 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_6
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_8:
# 283 "data//maps/Route4/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 284 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_2, MSGBOX_SIGN
# 285 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_3
# 286 "data//maps/Route4/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route4_NPC_Cook_Text_4, Route4_NPC_Cook_Text_5
# 287 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route4_NPC_Cook_12
# 290 "data//maps/Route4/scripts.pory"
	giveitem ITEM_ADRENALINE_ORB
Route4_NPC_Cook_11:
# 292 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_0
# 293 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_COOK
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_12:
# 288 "data//maps/Route4/scripts.pory"
	giveitem ITEM_SHELL_BELL
	goto Route4_NPC_Cook_11


Route4_NPC_D::
# 308 "data//maps/Route4/scripts.pory"
	lockall
# 309 "data//maps/Route4/scripts.pory"
	faceplayer
# 310 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_D_Text_0
# 311 "data//maps/Route4/scripts.pory"
	releaseall
	return


# 47 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_0:
# 47 "data//maps/Route4/scripts.pory"
	face_right
	step_end

# 48 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_1:
# 48 "data//maps/Route4/scripts.pory"
	face_left
	step_end

# 50 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_2:
# 50 "data//maps/Route4/scripts.pory"
	jump_in_place_right
	step_end

# 54 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_3:
# 54 "data//maps/Route4/scripts.pory"
	jump_in_place_left
	step_end

# 58 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_4:
# 58 "data//maps/Route4/scripts.pory"
	face_down
	step_end

# 201 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Movement_0:
# 201 "data//maps/Route4/scripts.pory"
	face_up
	step_end

# 210 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Defeated_Movement_0:
# 210 "data//maps/Route4/scripts.pory"
	emote_exclamation_mark
# 210 "data//maps/Route4/scripts.pory"
	jump_in_place_down
	step_end

# 215 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Defeated_Movement_1:
# 215 "data//maps/Route4/scripts.pory"
	walk_down
# 215 "data//maps/Route4/scripts.pory"
	jump_in_place_down
# 215 "data//maps/Route4/scripts.pory"
	emote_exclamation_mark
	step_end

Route4_NurseJoy_OnRoute_Text_0:
# 11 "data//maps/Route4/scripts.pory"
	.string "Can you believe this? They put us on\n"
	.string "these rocks. I'm a nurse for crying out\l"
	.string "loud!\p"
	.string "...\p"
	.string "Sigh...$"

Route4_EventScript_EvilTeam_Text_0:
# 23 "data//maps/Route4/scripts.pory"
	.string "Hey kid - this road is closed due\n"
	.string "to...uh...repairs. Yeah. Sorry.$"

Route4_EventScript_EvilTeam_Text_1:
# 24 "data//maps/Route4/scripts.pory"
	.string "We look suspicious? We're\n"
	.string "just...um...construction workers. Sorry.\l"
	.string "Yeah.$"

Route4_EventScript_EvilTeam_Text_2:
# 25 "data//maps/Route4/scripts.pory"
	.string "So you'll step back and let us do our\n"
	.string "work, right?$"

Route4_EventScript_EvilTeam_Text_3:
# 27 "data//maps/Route4/scripts.pory"
	.string "Good. Now scram!$"

Route4_EventScript_EvilTeam_Text_4:
# 32 "data//maps/Route4/scripts.pory"
	.string "You don't want to budge? Grr...alright\n"
	.string "fine, we're not construction workers.\l"
	.string "We're Team Somber! And now we're going\l"
	.string "to teach you a lesson!$"

Route4_EventScript_EvilTeam_Text_5:
# 38 "data//maps/Route4/scripts.pory"
	.string "Stupid kid!$"

Route4_EventScript_EvilTeamDefeated_Text_0:
# 52 "data//maps/Route4/scripts.pory"
	.string "Can't believe we lost to some stupid\n"
	.string "kid...$"

Route4_EventScript_EvilTeamDefeated_Text_1:
# 56 "data//maps/Route4/scripts.pory"
	.string "We gotta tell the boss at Ceram Base\n"
	.string "Camp about this!$"

Route4_EventScript_EvilTeamDefeated_Text_2:
# 61 "data//maps/Route4/scripts.pory"
	.string "We'll remember this, kid!$"

Route4_TrainerBattle_Raha_Text_0:
# 79 "data//maps/Route4/scripts.pory"
	.string "My {PKMN} were very expensive! There's no\n"
	.string "way you can beat me!$"

Route4_TrainerBattle_Raha_Text_1:
# 79 "data//maps/Route4/scripts.pory"
	.string "But Father spent so much money!$"

Route4_TrainerBattle_Raha_Text_2:
# 80 "data//maps/Route4/scripts.pory"
	.string "Maybe I should ask Father to buy some\n"
	.string "stronger {PKMN}...or maybe I should try and\l"
	.string "train them myself, like you!$"

Route4_TrainerBattle_Cammy_Text_0:
# 86 "data//maps/Route4/scripts.pory"
	.string "Are you a new trainer? Let this old lady\n"
	.string "teach you some new tricks.$"

Route4_TrainerBattle_Cammy_Text_1:
# 86 "data//maps/Route4/scripts.pory"
	.string "Well fought!$"

Route4_TrainerBattle_Cammy_Text_2:
# 87 "data//maps/Route4/scripts.pory"
	.string "You were the teacher and I was the\n"
	.string "student! Haha!$"

Route4_TrainerBattle_Sona_Text_0:
# 93 "data//maps/Route4/scripts.pory"
	.string "Different {PKMN} inhabit different areas.\n"
	.string "I caught mine right here!$"

Route4_TrainerBattle_Sona_Text_1:
# 93 "data//maps/Route4/scripts.pory"
	.string "Oh no!$"

Route4_TrainerBattle_Sona_Text_2:
# 94 "data//maps/Route4/scripts.pory"
	.string "No matter where they're from, all {PKMN}\n"
	.string "need love and care.$"

Route4_TrainerBattle_Jenny_Text_0:
# 100 "data//maps/Route4/scripts.pory"
	.string "My PANCHAM and I train here every\n"
	.string "morning. We want to become the\l"
	.string "strongest!$"

Route4_TrainerBattle_Jenny_Text_1:
# 100 "data//maps/Route4/scripts.pory"
	.string "We need to train harder!$"

Route4_TrainerBattle_Jenny_Text_2:
# 101 "data//maps/Route4/scripts.pory"
	.string "Pancham and I will become {PKMN} Champions\n"
	.string "one day!$"

Route4_TrainerBattle_Kid1_Text_0:
# 108 "data//maps/Route4/scripts.pory"
	.string "Hah! Bet you didn't see me there, did\n"
	.string "you? You entered our secret hideout\l"
	.string "and now you're going to pay!$"

Route4_TrainerBattle_Kid1_Text_1:
# 108 "data//maps/Route4/scripts.pory"
	.string "Waah!$"

Route4_TrainerBattle_Kid1_Text_2:
# 111 "data//maps/Route4/scripts.pory"
	.string "Eek! It's the DEWPIDER!$"

Route4_TrainerBattle_Kid1_Text_3:
# 113 "data//maps/Route4/scripts.pory"
	.string "It's summer break so we play here all\n"
	.string "day until the sun goes down!$"

Route4_TrainerBattle_Kid2_Text_0:
# 120 "data//maps/Route4/scripts.pory"
	.string "Ooh, you made it this far! But I won't\n"
	.string "let you lay your hands on the boss! I'm\l"
	.string "going to stop you right now!$"

Route4_TrainerBattle_Kid2_Text_1:
# 120 "data//maps/Route4/scripts.pory"
	.string "Boss! Help!$"

Route4_TrainerBattle_Kid2_Text_2:
# 123 "data//maps/Route4/scripts.pory"
	.string "Someone help the boss! The DEWPIDER is\n"
	.string "attacking him!$"

Route4_TrainerBattle_Kid2_Text_3:
# 125 "data//maps/Route4/scripts.pory"
	.string "Our secret hideout is really cool, don't\n"
	.string "you think?$"

Route4_TrainerBattle_Kid3_Text_0:
# 136 "data//maps/Route4/scripts.pory"
	.string "I have so much fun with my friends\n"
	.string "here...I hate going back home. I hate my\l"
	.string "family!$"

Route4_TrainerBattle_Kid3_Text_1:
# 138 "data//maps/Route4/scripts.pory"
	.string "Ahem...welcome to our secret hideout,\n"
	.string "old one. You may look down upon us for\l"
	.string "being so small, but let me tell you\l"
	.string "something...Even us kids are strong!$"

Route4_TrainerBattle_Kid3_Text_2:
# 139 "data//maps/Route4/scripts.pory"
	.string "My {PKMN}! Adults are lame!$"

Route4_TrainerBattle_Kid3_Text_3:
# 141 "data//maps/Route4/scripts.pory"
	.string "You have proved your worth, old one. You\n"
	.string "may now accept this reward.$"

Route4_TrainerBattle_Kid3_Text_4:
# 144 "data//maps/Route4/scripts.pory"
	.string "...\p"
	.string "...when will I go back home?\p"
	.string "Never! I hate my family! They only care\n"
	.string "about my big brother. I'm not scared of\l"
	.string "any DEWPIDERS. I want...I want to be\l"
	.string "outside all day!$"

Route4_Sign_KidsTrio_Text_0:
# 152 "data//maps/Route4/scripts.pory"
	.string "A child has scrawled on this sign.\p"
	.string "THIS IS OUR SECRET BASE. GET OUT OR\n"
	.string "BEWARE!!!!$"

Route4_Dewpider_Trigger_Text_0:
# 162 "data//maps/Route4/scripts.pory"
	.string "Aaahhh!! Help!!!!$"

Route4_Dewpider_Text_0:
# 179 "data//maps/Route4/scripts.pory"
	.string "It's the DEWPIDER!$"

Route4_Dewpider_Text_1:
# 198 "data//maps/Route4/scripts.pory"
	.string "The DEWPIDER snaps at you before\n"
	.string "turning around.$"

Route4_Dewpider_Text_2:
# 203 "data//maps/Route4/scripts.pory"
	.string "Will the kids just be left like this?$"

Route4_Dewpider_Defeated_Text_0:
# 213 "data//maps/Route4/scripts.pory"
	.string "You saved us! Thank you. We were so\n"
	.string "scared!\p"
	.string "...\p"
	.string "I'll go home. I can't let my friends be\n"
	.string "hurt by the DEWPIDER.$"

Route4_Dewpider_Defeated_Text_1:
# 218 "data//maps/Route4/scripts.pory"
	.string "C'mon gang! Let's go.$"

Route4_NPC_Couple1_Text_0:
# 233 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "The lake is nice too...$"

Route4_NPC_Couple2_Text_0:
# 241 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "It's a shame about her...$"

Route4_NPC_A_Text_0:
# 249 "data//maps/Route4/scripts.pory"
	.string "There's a small tree up ahead blocking\n"
	.string "the path. A {PKMN} with CUT might be able to\l"
	.string "cut it down...but the city management\l"
	.string "needs to think about us civilians. We're\l"
	.string "not all trainers!$"

Route4_NPC_B_Text_0:
# 259 "data//maps/Route4/scripts.pory"
	.string "My brother's gone home now. Finally!$"

Route4_NPC_B_Text_1:
# 262 "data//maps/Route4/scripts.pory"
	.string "What was that cry? It sounded like my\n"
	.string "stupid brother. Hah! He's only getting\l"
	.string "what he deserves.$"

Route4_NPC_B_Text_2:
# 264 "data//maps/Route4/scripts.pory"
	.string "Mom told me to come here and get my\n"
	.string "little brother. He's such a brat!\l"
	.string "Everyone knows its dangerous to play\l"
	.string "here because of the DEWPIDER. But he\l"
	.string "just runs out and comes here anyway!$"

Route4_NPC_Cook_Text_0:
# 277 "data//maps/Route4/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over CORMORIA. And if you\l"
	.string "ever visit Pelluca City, be sure to drop\l"
	.string "by our restaurant!$"

Route4_NPC_Cook_Text_1:
# 279 "data//maps/Route4/scripts.pory"
	.string "Hello young trainer! I'm a cook from the\n"
	.string "Pelluca Restaurant, all the way on the\l"
	.string "other side of CORMORIA! Why am I here,\l"
	.string "you ask? It's because I travel all\l"
	.string "across CORMORIA to find the best\l"
	.string "ingredients for the restaurant! I'm\l"
	.string "looking for a special berry that only\l"
	.string "grows around Mt. Ceram. It's called a\l"
	.string "RAWST BERRY. If you happen to have one,\l"
	.string "would you give it to me?$"

Route4_NPC_Cook_Text_2:
# 284 "data//maps/Route4/scripts.pory"
	.string "{PLAYER} gave the cook a RAWST BERRY$"

Route4_NPC_Cook_Text_3:
# 285 "data//maps/Route4/scripts.pory"
	.string "Oh wonderful! This will add a ton of\n"
	.string "flavour to our signature APPLE PIE!\n"
	.string "Thank you trainer. What's your name?\p"
	.string "...\p"
	.string "{PLAYER}, is it? In exchange for the\n"
	.string "berry, I have a couple of trinkets you\l"
	.string "may like.$"

Route4_NPC_Cook_Text_4:
# 286 "data//maps/Route4/scripts.pory"
	.string "SHELL BELL$"

Route4_NPC_Cook_Text_5:
# 286 "data//maps/Route4/scripts.pory"
	.string "ADRENALINE ORB$"

Route4_NPC_Cook_Text_6:
# 295 "data//maps/Route4/scripts.pory"
	.string "I don't see any RAWST berries on you.\n"
	.string "Come back when you get one!$"

Route4_NPC_Cook_Text_7:
# 298 "data//maps/Route4/scripts.pory"
	.string "A shame! But no matter - I'll continue\n"
	.string "my search.$"

Route4_NPC_D_Text_0:
# 310 "data//maps/Route4/scripts.pory"
	.string "There are some grunts blocking the\n"
	.string "path to Ceram Base Camp! They remind me\l"
	.string "of my younger days...I used to be in an\l"
	.string "evil team in the HOENN region.$"
