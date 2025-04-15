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
	msgbox Route4_EventScript_EvilTeam_Text_1
# 28 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_2, MSGBOX_YESNO
# 29 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_EventScript_EvilTeam_2
# 35 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_4
# 36 "data//maps/Route4/scripts.pory"
	release
# 39 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE4_GRUNTS, Route4_EventScript_EvilTeam_Text_5
# 44 "data//maps/Route4/scripts.pory"
	goto Route4_EventScript_EvilTeamDefeated
# 45 "data//maps/Route4/scripts.pory"
	releaseall
	return

Route4_EventScript_EvilTeam_2:
# 30 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_3
# 31 "data//maps/Route4/scripts.pory"
	releaseall
	end


Route4_EventScript_EvilTeamDefeated::
# 50 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_0
# 51 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_1
# 52 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 53 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_2
# 54 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 55 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_0
# 56 "data//maps/Route4/scripts.pory"
	release
# 57 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_3
# 58 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 59 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_1
# 60 "data//maps/Route4/scripts.pory"
	release
# 61 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_4
# 62 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_4
# 63 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 64 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_2
# 65 "data//maps/Route4/scripts.pory"
	release
# 68 "data//maps/Route4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT1
# 70 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT2
# 71 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_EVIL_BATTLE
# 72 "data//maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 73 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_TrainerBattle_Raha::
# 82 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_RAHA, Route4_TrainerBattle_Raha_Text_0, Route4_TrainerBattle_Raha_Text_1
# 83 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Raha_Text_2
# 84 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Cammy::
# 89 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_CAMMY, Route4_TrainerBattle_Cammy_Text_0, Route4_TrainerBattle_Cammy_Text_1
# 90 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Cammy_Text_2
# 91 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Sona::
# 96 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_SONA, Route4_TrainerBattle_Sona_Text_0, Route4_TrainerBattle_Sona_Text_1
# 97 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Sona_Text_2
# 98 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Jenny::
# 103 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_JENNY, Route4_TrainerBattle_Jenny_Text_0, Route4_TrainerBattle_Jenny_Text_1
# 104 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Jenny_Text_2
# 105 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Kid1::
# 111 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID1, Route4_TrainerBattle_Kid1_Text_0, Route4_TrainerBattle_Kid1_Text_1
# 113 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_TrainerBattle_Kid1_2
# 116 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_3
Route4_TrainerBattle_Kid1_1:
# 118 "data//maps/Route4/scripts.pory"
	release
	end

Route4_TrainerBattle_Kid1_2:
# 114 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_2
	goto Route4_TrainerBattle_Kid1_1


Route4_TrainerBattle_Kid2::
# 123 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID2, Route4_TrainerBattle_Kid2_Text_0, Route4_TrainerBattle_Kid2_Text_1
# 125 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_TrainerBattle_Kid2_2
# 128 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid2_Text_3
Route4_TrainerBattle_Kid2_1:
# 130 "data//maps/Route4/scripts.pory"
	release
	end

Route4_TrainerBattle_Kid2_2:
# 126 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid2_Text_2
	goto Route4_TrainerBattle_Kid2_1


Route4_TrainerBattle_Kid3::
# 135 "data//maps/Route4/scripts.pory"
	lockall
# 136 "data//maps/Route4/scripts.pory"
	faceplayer
# 138 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_KIDGANG, Route4_TrainerBattle_Kid3_2
# 141 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_1
# 142 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE4_KID3, Route4_TrainerBattle_Kid3_Text_2
# 144 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_3
# 145 "data//maps/Route4/scripts.pory"
	giveitem ITEM_POKE_DOLL
# 146 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_KIDGANG
# 147 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_4
Route4_TrainerBattle_Kid3_1:
# 149 "data//maps/Route4/scripts.pory"
	releaseall
	end

Route4_TrainerBattle_Kid3_2:
# 139 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_0
	goto Route4_TrainerBattle_Kid3_1


Route4_Sign_KidsTrio::
# 155 "data//maps/Route4/scripts.pory"
	msgbox Route4_Sign_KidsTrio_Text_0, MSGBOX_SIGN
	end


Route4_Dewpider_Trigger::
# 162 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_Dewpider_Trigger_2
# 163 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_KIDGANG, Route4_Dewpider_Trigger_4
	end

Route4_Dewpider_Trigger_2:
	end

Route4_Dewpider_Trigger_4:
# 164 "data//maps/Route4/scripts.pory"
	lockall
# 165 "data//maps/Route4/scripts.pory"
	playmoncry SPECIES_DEWPIDER, CRY_MODE_NORMAL
# 166 "data//maps/Route4/scripts.pory"
	waitmoncry
# 167 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Trigger_Text_0
# 168 "data//maps/Route4/scripts.pory"
	release
# 170 "data//maps/Route4/scripts.pory"
	setobjectxyperm LOCALID_DEWPIDER, 9, 23
# 171 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_ATTACK
# 172 "data//maps/Route4/scripts.pory"
	clearflag FLAG_HIDE_ROUTE4_DEWPIDER
# 173 "data//maps/Route4/scripts.pory"
	releaseall
	end


Route4_Dewpider::
# 181 "data//maps/Route4/scripts.pory"
	lockall
# 182 "data//maps/Route4/scripts.pory"
	faceplayer
# 183 "data//maps/Route4/scripts.pory"
	playmoncry SPECIES_DEWPIDER, CRY_MODE_NORMAL
# 184 "data//maps/Route4/scripts.pory"
	delay 16
# 185 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_0
# 186 "data//maps/Route4/scripts.pory"
	release
# 188 "data//maps/Route4/scripts.pory"
	setwildbattle SPECIES_DEWPIDER, 13
# 189 "data//maps/Route4/scripts.pory"
	dowildbattle
# 192 "data//maps/Route4/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 193 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route4_Dewpider_2
Route4_Dewpider_1:
# 199 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route4_Dewpider_5
Route4_Dewpider_4:
# 205 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route4_Dewpider_7
	return

Route4_Dewpider_2:
# 194 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_DEWPIDER
# 195 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_FINISHED
# 196 "data//maps/Route4/scripts.pory"
	setflag FLAG_HIDE_ROUTE4_DEWPIDER
# 197 "data//maps/Route4/scripts.pory"
	goto Route4_Dewpider_Defeated
	goto Route4_Dewpider_1

Route4_Dewpider_5:
# 200 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_DEWPIDER
# 201 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_FINISHED
# 202 "data//maps/Route4/scripts.pory"
	setflag FLAG_HIDE_ROUTE4_DEWPIDER
# 203 "data//maps/Route4/scripts.pory"
	goto Route4_Dewpider_Defeated
	goto Route4_Dewpider_4

Route4_Dewpider_7:
# 206 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_1
# 207 "data//maps/Route4/scripts.pory"
	release
# 208 "data//maps/Route4/scripts.pory"
	delay 12
# 209 "data//maps/Route4/scripts.pory"
	applymovement 22, Route4_Dewpider_Movement_0
# 210 "data//maps/Route4/scripts.pory"
	delay 12
# 211 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_2
# 212 "data//maps/Route4/scripts.pory"
	release
	return


Route4_Dewpider_Defeated::
# 217 "data//maps/Route4/scripts.pory"
	lockall
# 218 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_DEWPIDER
# 219 "data//maps/Route4/scripts.pory"
	applymovement 1, Route4_Dewpider_Defeated_Movement_0
# 220 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 221 "data//maps/Route4/scripts.pory"
	delay 12
# 222 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Defeated_Text_0
# 223 "data//maps/Route4/scripts.pory"
	release
# 224 "data//maps/Route4/scripts.pory"
	applymovement 1, Route4_Dewpider_Defeated_Movement_1
# 225 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 226 "data//maps/Route4/scripts.pory"
	delay 12
# 227 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Defeated_Text_1
# 228 "data//maps/Route4/scripts.pory"
	release
# 230 "data//maps/Route4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 231 "data//maps/Route4/scripts.pory"
	removeobject 1
# 232 "data//maps/Route4/scripts.pory"
	removeobject 2
# 233 "data//maps/Route4/scripts.pory"
	removeobject 3
# 234 "data//maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Route4_NPC_Couple1::
# 240 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple1_Text_0, MSGBOX_NPC
	end


Route4_NPC_Couple2::
# 245 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple2_Text_0, MSGBOX_NPC
	end


Route4_NPC_A::
# 251 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_A_Text_0, MSGBOX_NPC
	end


Route4_NPC_B::
# 257 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_FINISHED, Route4_NPC_B_2
# 260 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_NPC_B_5
# 263 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_2, MSGBOX_NPC
Route4_NPC_B_1:
	end

Route4_NPC_B_2:
# 258 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_0, MSGBOX_NPC
	goto Route4_NPC_B_1

Route4_NPC_B_5:
# 261 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_1, MSGBOX_NPC
	goto Route4_NPC_B_1


Route4_NPC_Cook::
# 273 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_COOK, Route4_NPC_Cook_2
# 276 "data//maps/Route4/scripts.pory"
	lockall
# 277 "data//maps/Route4/scripts.pory"
	faceplayer
# 278 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_1, MSGBOX_YESNO
# 279 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_5
# 297 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_7, MSGBOX_NPC
Route4_NPC_Cook_1:
# 302 "data//maps/Route4/scripts.pory"
	releaseall
	return

Route4_NPC_Cook_2:
# 274 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_0, MSGBOX_NPC
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_5:
# 280 "data//maps/Route4/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 281 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_8
# 294 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_6, MSGBOX_NPC
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_8:
# 282 "data//maps/Route4/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 283 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_2, MSGBOX_SIGN
# 284 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_3
# 285 "data//maps/Route4/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route4_NPC_Cook_Text_4, Route4_NPC_Cook_Text_5
# 286 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route4_NPC_Cook_12
# 289 "data//maps/Route4/scripts.pory"
	giveitem ITEM_ADRENALINE_ORB
Route4_NPC_Cook_11:
# 291 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_0, MSGBOX_NPC
# 292 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_COOK
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_12:
# 287 "data//maps/Route4/scripts.pory"
	giveitem ITEM_SHELL_BELL
	goto Route4_NPC_Cook_11


Route4_NPC_D::
# 307 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_D_Text_0, MSGBOX_NPC
	end


# 50 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_0:
# 50 "data//maps/Route4/scripts.pory"
	face_right
	step_end

# 51 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_1:
# 51 "data//maps/Route4/scripts.pory"
	face_left
	step_end

# 53 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_2:
# 53 "data//maps/Route4/scripts.pory"
	jump_in_place_right
	step_end

# 57 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_3:
# 57 "data//maps/Route4/scripts.pory"
	jump_in_place_left
	step_end

# 61 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_4:
# 61 "data//maps/Route4/scripts.pory"
	face_down
	step_end

# 209 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Movement_0:
# 209 "data//maps/Route4/scripts.pory"
	face_up
	step_end

# 219 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Defeated_Movement_0:
# 219 "data//maps/Route4/scripts.pory"
	emote_exclamation_mark
# 219 "data//maps/Route4/scripts.pory"
	jump_in_place_down
	step_end

# 224 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Defeated_Movement_1:
# 224 "data//maps/Route4/scripts.pory"
	walk_down
# 224 "data//maps/Route4/scripts.pory"
	jump_in_place_down
# 224 "data//maps/Route4/scripts.pory"
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
# 27 "data//maps/Route4/scripts.pory"
	.string "We look suspicious? We're\n"
	.string "just...um...construction workers. Sorry.\l"
	.string "Yeah.$"

Route4_EventScript_EvilTeam_Text_2:
# 28 "data//maps/Route4/scripts.pory"
	.string "So you'll step back and let us do our\n"
	.string "work, right?$"

Route4_EventScript_EvilTeam_Text_3:
# 30 "data//maps/Route4/scripts.pory"
	.string "Good. Now scram!$"

Route4_EventScript_EvilTeam_Text_4:
# 35 "data//maps/Route4/scripts.pory"
	.string "You don't want to budge? Grr...alright\n"
	.string "fine, we're not construction workers.\l"
	.string "We're Team Somber! And now we're going\l"
	.string "to teach you a lesson!$"

Route4_EventScript_EvilTeam_Text_5:
# 41 "data//maps/Route4/scripts.pory"
	.string "Stupid kid!$"

Route4_EventScript_EvilTeamDefeated_Text_0:
# 55 "data//maps/Route4/scripts.pory"
	.string "Can't believe we lost to some stupid\n"
	.string "kid...$"

Route4_EventScript_EvilTeamDefeated_Text_1:
# 59 "data//maps/Route4/scripts.pory"
	.string "We gotta tell the boss at Ceram Base\n"
	.string "Camp about this!$"

Route4_EventScript_EvilTeamDefeated_Text_2:
# 64 "data//maps/Route4/scripts.pory"
	.string "We'll remember this, kid!$"

Route4_TrainerBattle_Raha_Text_0:
# 82 "data//maps/Route4/scripts.pory"
	.string "My Pokémon were very expensive!\n"
	.string "There's no way you can beat me!$"

Route4_TrainerBattle_Raha_Text_1:
# 82 "data//maps/Route4/scripts.pory"
	.string "But Father spent so much money!$"

Route4_TrainerBattle_Raha_Text_2:
# 83 "data//maps/Route4/scripts.pory"
	.string "Maybe I should ask Father to buy some\n"
	.string "stronger Pokémon...or maybe I should\l"
	.string "try and train them myself, like you!$"

Route4_TrainerBattle_Cammy_Text_0:
# 89 "data//maps/Route4/scripts.pory"
	.string "Are you a new trainer? Let this old lady\n"
	.string "teach you some new tricks.$"

Route4_TrainerBattle_Cammy_Text_1:
# 89 "data//maps/Route4/scripts.pory"
	.string "Well fought!$"

Route4_TrainerBattle_Cammy_Text_2:
# 90 "data//maps/Route4/scripts.pory"
	.string "You were the teacher and I was the\n"
	.string "student! Haha!$"

Route4_TrainerBattle_Sona_Text_0:
# 96 "data//maps/Route4/scripts.pory"
	.string "Different Pokémon inhabit different\n"
	.string "areas. I caught mine right here!$"

Route4_TrainerBattle_Sona_Text_1:
# 96 "data//maps/Route4/scripts.pory"
	.string "Oh no!$"

Route4_TrainerBattle_Sona_Text_2:
# 97 "data//maps/Route4/scripts.pory"
	.string "No matter where they're from, all\n"
	.string "Pokémon need love and care.$"

Route4_TrainerBattle_Jenny_Text_0:
# 103 "data//maps/Route4/scripts.pory"
	.string "My PANCHAM and I train here every\n"
	.string "morning. We want to become the\l"
	.string "strongest!$"

Route4_TrainerBattle_Jenny_Text_1:
# 103 "data//maps/Route4/scripts.pory"
	.string "We need to train harder!$"

Route4_TrainerBattle_Jenny_Text_2:
# 104 "data//maps/Route4/scripts.pory"
	.string "Pancham and I will become Pokémon\n"
	.string "Champions one day!$"

Route4_TrainerBattle_Kid1_Text_0:
# 111 "data//maps/Route4/scripts.pory"
	.string "Hah! Bet you didn't see me there, did\n"
	.string "you? You entered our secret hideout\l"
	.string "and now you're going to pay!$"

Route4_TrainerBattle_Kid1_Text_1:
# 111 "data//maps/Route4/scripts.pory"
	.string "Waah!$"

Route4_TrainerBattle_Kid1_Text_2:
# 114 "data//maps/Route4/scripts.pory"
	.string "Eek! It's the DEWPIDER!$"

Route4_TrainerBattle_Kid1_Text_3:
# 116 "data//maps/Route4/scripts.pory"
	.string "It's summer break so we play here all\n"
	.string "day until the sun goes down!$"

Route4_TrainerBattle_Kid2_Text_0:
# 123 "data//maps/Route4/scripts.pory"
	.string "Ooh, you made it this far! But I won't\n"
	.string "let you lay your hands on the boss! I'm\l"
	.string "going to stop you right now!$"

Route4_TrainerBattle_Kid2_Text_1:
# 123 "data//maps/Route4/scripts.pory"
	.string "Boss! Help!$"

Route4_TrainerBattle_Kid2_Text_2:
# 126 "data//maps/Route4/scripts.pory"
	.string "Someone help the boss! The Dewpider is\n"
	.string "attacking him!$"

Route4_TrainerBattle_Kid2_Text_3:
# 128 "data//maps/Route4/scripts.pory"
	.string "Our secret hideout is really cool, don't\n"
	.string "you think?$"

Route4_TrainerBattle_Kid3_Text_0:
# 139 "data//maps/Route4/scripts.pory"
	.string "I have so much fun with my friends\n"
	.string "here...I hate going back home. I hate my\l"
	.string "family!$"

Route4_TrainerBattle_Kid3_Text_1:
# 141 "data//maps/Route4/scripts.pory"
	.string "Ahem...welcome to our secret hideout,\n"
	.string "old one. You may look down upon us for\l"
	.string "being so small, but let me tell you\l"
	.string "something...Even us kids are strong!$"

Route4_TrainerBattle_Kid3_Text_2:
# 142 "data//maps/Route4/scripts.pory"
	.string "My Pokémon! Adults are lame!$"

Route4_TrainerBattle_Kid3_Text_3:
# 144 "data//maps/Route4/scripts.pory"
	.string "You have proved your worth, old one. You\n"
	.string "may now accept this reward.$"

Route4_TrainerBattle_Kid3_Text_4:
# 147 "data//maps/Route4/scripts.pory"
	.string "...\p"
	.string "...when will I go back home?\p"
	.string "Never! I hate my family! They only care\n"
	.string "about my big brother. I'm not scared of\l"
	.string "any DEWPIDERS. I want...I want to be\l"
	.string "outside all day!$"

Route4_Sign_KidsTrio_Text_0:
# 155 "data//maps/Route4/scripts.pory"
	.string "A child has scrawled on this sign.\p"
	.string "THIS IS OUR SECRET BASE. GET OUT OR\n"
	.string "BEWARE!!!!$"

Route4_Dewpider_Trigger_Text_0:
# 167 "data//maps/Route4/scripts.pory"
	.string "Aaahhh!! Help!!!!$"

Route4_Dewpider_Text_0:
# 185 "data//maps/Route4/scripts.pory"
	.string "It's the Dewpider! It snaps at you and\n"
	.string "attacks!$"

Route4_Dewpider_Text_1:
# 206 "data//maps/Route4/scripts.pory"
	.string "The Dewpider snaps at you before\n"
	.string "turning around.$"

Route4_Dewpider_Text_2:
# 211 "data//maps/Route4/scripts.pory"
	.string "Will the kids just be left like this?$"

Route4_Dewpider_Defeated_Text_0:
# 222 "data//maps/Route4/scripts.pory"
	.string "You saved us! Thank you. We were so\n"
	.string "scared!\p"
	.string "...\p"
	.string "I'll go home. I can't let my friends be\n"
	.string "hurt by the DEWPIDER.$"

Route4_Dewpider_Defeated_Text_1:
# 227 "data//maps/Route4/scripts.pory"
	.string "C'mon gang! Let's go.$"

Route4_NPC_Couple1_Text_0:
# 240 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "The lake is nice too...$"

Route4_NPC_Couple2_Text_0:
# 245 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "It's a shame about her...$"

Route4_NPC_A_Text_0:
# 251 "data//maps/Route4/scripts.pory"
	.string "I don't understand why they don't just\n"
	.string "build a bridge across to Ceram Base\l"
	.string "Camp. Sure, trainers can cross with HM\l"
	.string "SPLASH, but the city management needs\l"
	.string "to think about us civilians too. We're\l"
	.string "not all trainers!$"

Route4_NPC_B_Text_0:
# 258 "data//maps/Route4/scripts.pory"
	.string "My brother's gone home now. Finally!$"

Route4_NPC_B_Text_1:
# 261 "data//maps/Route4/scripts.pory"
	.string "What was that cry? It sounded like my\n"
	.string "stupid brother. Hah! He's only getting\l"
	.string "what he deserves.$"

Route4_NPC_B_Text_2:
# 263 "data//maps/Route4/scripts.pory"
	.string "Mom told me to come here and get my\n"
	.string "little brother. He's such a brat!\l"
	.string "Everyone knows its dangerous to play\l"
	.string "here because of the Dewpider. But he\l"
	.string "just runs out and comes here anyway!$"

Route4_NPC_Cook_Text_0:
# 274 "data//maps/Route4/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over Cormoria. And if you\l"
	.string "ever visit Pelluca City, be sure to drop\l"
	.string "by our restaurant!$"

Route4_NPC_Cook_Text_1:
# 278 "data//maps/Route4/scripts.pory"
	.string "Hello young trainer! I'm a cook from the\n"
	.string "Pelluca Restaurant, all the way on the\l"
	.string "other side of Cormoria! Why am I here,\l"
	.string "you ask? It's because I travel all\l"
	.string "across Cormoria to find the best\l"
	.string "ingredients for the restaurant! I'm\l"
	.string "looking for a special berry that only\l"
	.string "grows around Mt. Ceram. It's called a\l"
	.string "RAWST BERRY. If you happen to have one,\l"
	.string "would you give it to me?$"

Route4_NPC_Cook_Text_2:
# 283 "data//maps/Route4/scripts.pory"
	.string "{PLAYER} gave the chef a RAWST\n"
	.string "BERRY.$"

Route4_NPC_Cook_Text_3:
# 284 "data//maps/Route4/scripts.pory"
	.string "Oh wonderful! This will add a ton of\n"
	.string "flavour to our signature APPLE PIE!\n"
	.string "Thank you trainer. What's your name?\p"
	.string "...\p"
	.string "{PLAYER}, is it? In exchange for the\n"
	.string "berry, I have a couple of trinkets you\l"
	.string "may like.$"

Route4_NPC_Cook_Text_4:
# 285 "data//maps/Route4/scripts.pory"
	.string "SHELL BELL$"

Route4_NPC_Cook_Text_5:
# 285 "data//maps/Route4/scripts.pory"
	.string "ADRENALINE ORB$"

Route4_NPC_Cook_Text_6:
# 294 "data//maps/Route4/scripts.pory"
	.string "I don't see any RAWST berries on you.\n"
	.string "Come back when you get one!$"

Route4_NPC_Cook_Text_7:
# 297 "data//maps/Route4/scripts.pory"
	.string "A shame! But no matter - I'll continue\n"
	.string "my search.$"

Route4_NPC_D_Text_0:
# 307 "data//maps/Route4/scripts.pory"
	.string "There are some grunts blocking the\n"
	.string "path to Ceram Base Camp! They remind me\l"
	.string "of my younger days...I used to be in an\l"
	.string "evil team in the Hoenn region.$"
