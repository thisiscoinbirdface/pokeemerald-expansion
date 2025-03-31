Route4_MapScripts::
	.byte 0


# 2 "data//maps/Route4/scripts.pory"

# 3 "data//maps/Route4/scripts.pory"
    .set LOCALID_GRUNT1, 12
# 4 "data//maps/Route4/scripts.pory"
    .set LOCALID_GRUNT2, 13

Route4_EventScript_EvilTeam::
# 11 "data//maps/Route4/scripts.pory"
	lockall
# 12 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_0
# 13 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_1
# 14 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_2, MSGBOX_YESNO
# 15 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_EventScript_EvilTeam_2
# 21 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_4
# 22 "data//maps/Route4/scripts.pory"
	release
# 25 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE4_GRUNTS, Route4_EventScript_EvilTeam_Text_5
# 30 "data//maps/Route4/scripts.pory"
	goto Route4_EventScript_EvilTeamDefeated
# 31 "data//maps/Route4/scripts.pory"
	releaseall
	return

Route4_EventScript_EvilTeam_2:
# 16 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_3
# 17 "data//maps/Route4/scripts.pory"
	releaseall
	end


Route4_EventScript_EvilTeamDefeated::
# 36 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_0
# 37 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_1
# 38 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 39 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_2
# 40 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 41 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_0
# 42 "data//maps/Route4/scripts.pory"
	release
# 43 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_3
# 44 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 45 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_1
# 46 "data//maps/Route4/scripts.pory"
	release
# 47 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_4
# 48 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_4
# 49 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 50 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_2
# 51 "data//maps/Route4/scripts.pory"
	release
# 54 "data//maps/Route4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT1
# 56 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT2
# 57 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_EVIL_BATTLE
# 58 "data//maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 59 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_TrainerBattle_Raha::
# 68 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_RAHA, Route4_TrainerBattle_Raha_Text_0, Route4_TrainerBattle_Raha_Text_1
# 69 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Raha_Text_2
# 70 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Cammy::
# 75 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_CAMMY, Route4_TrainerBattle_Cammy_Text_0, Route4_TrainerBattle_Cammy_Text_1
# 76 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Cammy_Text_2
# 77 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Sona::
# 82 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_SONA, Route4_TrainerBattle_Sona_Text_0, Route4_TrainerBattle_Sona_Text_1
# 83 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Sona_Text_2
# 84 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Jenny::
# 89 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_JENNY, Route4_TrainerBattle_Jenny_Text_0, Route4_TrainerBattle_Jenny_Text_1
# 90 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Jenny_Text_2
# 91 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Kid1::
# 97 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID1, Route4_TrainerBattle_Kid1_Text_0, Route4_TrainerBattle_Kid1_Text_1
# 99 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_TrainerBattle_Kid1_2
# 102 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_3
Route4_TrainerBattle_Kid1_1:
# 104 "data//maps/Route4/scripts.pory"
	release
	end

Route4_TrainerBattle_Kid1_2:
# 100 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_2
	goto Route4_TrainerBattle_Kid1_1


Route4_TrainerBattle_Kid2::
# 109 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID2, Route4_TrainerBattle_Kid2_Text_0, Route4_TrainerBattle_Kid2_Text_1
# 110 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid2_Text_2
# 111 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Kid3::
# 116 "data//maps/Route4/scripts.pory"
	lockall
# 117 "data//maps/Route4/scripts.pory"
	faceplayer
# 119 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_KIDGANG, Route4_TrainerBattle_Kid3_2
# 122 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_1
# 123 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE4_KID3, Route4_TrainerBattle_Kid3_Text_2
# 125 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_3
# 126 "data//maps/Route4/scripts.pory"
	giveitem ITEM_POKE_DOLL
# 127 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_KIDGANG
# 128 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_4
Route4_TrainerBattle_Kid3_1:
# 130 "data//maps/Route4/scripts.pory"
	releaseall
	end

Route4_TrainerBattle_Kid3_2:
# 120 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_0
	goto Route4_TrainerBattle_Kid3_1


Route4_Sign_KidsTrio::
# 136 "data//maps/Route4/scripts.pory"
	msgbox Route4_Sign_KidsTrio_Text_0, MSGBOX_SIGN
	end


Route4_Dewpider_Trigger::
# 143 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_DEWPIDER_ATTACK, Route4_Dewpider_Trigger_2
# 144 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_KIDGANG, Route4_Dewpider_Trigger_4
	end

Route4_Dewpider_Trigger_2:
	end

Route4_Dewpider_Trigger_4:
# 145 "data//maps/Route4/scripts.pory"
	lockall
# 146 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Trigger_Text_0
# 147 "data//maps/Route4/scripts.pory"
	release
# 149 "data//maps/Route4/scripts.pory"
	setobjectxyperm 22, 9, 23
# 150 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_ATTACK
# 151 "data//maps/Route4/scripts.pory"
	releaseall
	end


Route4_Dewpider::
# 159 "data//maps/Route4/scripts.pory"
	lockall
# 160 "data//maps/Route4/scripts.pory"
	faceplayer
# 161 "data//maps/Route4/scripts.pory"
	playmoncry SPECIES_DEWPIDER, CRY_MODE_NORMAL
# 162 "data//maps/Route4/scripts.pory"
	delay 16
# 164 "data//maps/Route4/scripts.pory"
	setwildbattle SPECIES_DEWPIDER, 15
# 165 "data//maps/Route4/scripts.pory"
	dowildbattle
# 168 "data//maps/Route4/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 169 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route4_Dewpider_2
Route4_Dewpider_1:
# 174 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route4_Dewpider_5
Route4_Dewpider_4:
# 179 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route4_Dewpider_7
	return

Route4_Dewpider_2:
# 170 "data//maps/Route4/scripts.pory"
	removeobject 22
# 171 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_FINISHED
# 172 "data//maps/Route4/scripts.pory"
	goto Route4_Dewpider_Defeated
	goto Route4_Dewpider_1

Route4_Dewpider_5:
# 175 "data//maps/Route4/scripts.pory"
	removeobject 22
# 176 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_DEWPIDER_FINISHED
# 177 "data//maps/Route4/scripts.pory"
	goto Route4_Dewpider_Defeated
	goto Route4_Dewpider_4

Route4_Dewpider_7:
# 180 "data//maps/Route4/scripts.pory"
	removeobject 22
# 181 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_0
# 182 "data//maps/Route4/scripts.pory"
	release
# 183 "data//maps/Route4/scripts.pory"
	delay 12
# 184 "data//maps/Route4/scripts.pory"
	applymovement 22, Route4_Dewpider_Movement_0
# 185 "data//maps/Route4/scripts.pory"
	delay 12
# 186 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Text_1
# 187 "data//maps/Route4/scripts.pory"
	release
	return


Route4_Dewpider_Defeated::
# 192 "data//maps/Route4/scripts.pory"
	lockall
# 193 "data//maps/Route4/scripts.pory"
	applymovement 1, Route4_Dewpider_Defeated_Movement_0
# 194 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 195 "data//maps/Route4/scripts.pory"
	delay 12
# 196 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Defeated_Text_0
# 197 "data//maps/Route4/scripts.pory"
	release
# 198 "data//maps/Route4/scripts.pory"
	applymovement 1, Route4_Dewpider_Defeated_Movement_1
# 199 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 200 "data//maps/Route4/scripts.pory"
	delay 12
# 201 "data//maps/Route4/scripts.pory"
	msgbox Route4_Dewpider_Defeated_Text_1
# 202 "data//maps/Route4/scripts.pory"
	release
# 204 "data//maps/Route4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 205 "data//maps/Route4/scripts.pory"
	removeobject 1
# 206 "data//maps/Route4/scripts.pory"
	removeobject 2
# 207 "data//maps/Route4/scripts.pory"
	removeobject 3
# 208 "data//maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Route4_NPC_Couple1::
# 214 "data//maps/Route4/scripts.pory"
	lockall
# 215 "data//maps/Route4/scripts.pory"
	faceplayer
# 216 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple1_Text_0
# 217 "data//maps/Route4/scripts.pory"
	releaseall
# 218 "data//maps/Route4/scripts.pory"
	warp MAP_ROUTE4, 19, 40
	return


Route4_NPC_Couple2::
# 222 "data//maps/Route4/scripts.pory"
	lockall
# 223 "data//maps/Route4/scripts.pory"
	faceplayer
# 224 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple2_Text_0
# 225 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_NPC_A::
# 230 "data//maps/Route4/scripts.pory"
	lockall
# 231 "data//maps/Route4/scripts.pory"
	faceplayer
# 232 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_A_Text_0
# 233 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_NPC_B::
# 238 "data//maps/Route4/scripts.pory"
	lockall
# 239 "data//maps/Route4/scripts.pory"
	faceplayer
# 240 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_0
# 241 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_NPC_Cook::
# 246 "data//maps/Route4/scripts.pory"
	lockall
# 247 "data//maps/Route4/scripts.pory"
	faceplayer
# 249 "data//maps/Route4/scripts.pory"
	goto_if_set FLAG_ROUTE4_COOK, Route4_NPC_Cook_2
# 252 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_1, MSGBOX_YESNO
# 253 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_5
Route4_NPC_Cook_1:
# 268 "data//maps/Route4/scripts.pory"
	releaseall
	return

Route4_NPC_Cook_2:
# 250 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_0
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_5:
# 254 "data//maps/Route4/scripts.pory"
	checkitem ITEM_RAWST_BERRY
# 255 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_NPC_Cook_7
	goto Route4_NPC_Cook_1

Route4_NPC_Cook_7:
# 256 "data//maps/Route4/scripts.pory"
	removeitem ITEM_RAWST_BERRY
# 257 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_2, MSGBOX_SIGN
# 258 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_3
# 259 "data//maps/Route4/scripts.pory"
	release
# 260 "data//maps/Route4/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 261 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Cook_Text_0
# 262 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_COOK
	goto Route4_NPC_Cook_1


Route4_NPC_D::
# 273 "data//maps/Route4/scripts.pory"
	lockall
# 274 "data//maps/Route4/scripts.pory"
	faceplayer
# 275 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_D_Text_0
# 276 "data//maps/Route4/scripts.pory"
	releaseall
	return


# 36 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_0:
# 36 "data//maps/Route4/scripts.pory"
	face_right
	step_end

# 37 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_1:
# 37 "data//maps/Route4/scripts.pory"
	face_left
	step_end

# 39 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_2:
# 39 "data//maps/Route4/scripts.pory"
	jump_in_place_right
	step_end

# 43 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_3:
# 43 "data//maps/Route4/scripts.pory"
	jump_in_place_left
	step_end

# 47 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_4:
# 47 "data//maps/Route4/scripts.pory"
	face_down
	step_end

# 184 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Movement_0:
# 184 "data//maps/Route4/scripts.pory"
	face_up
	step_end

# 193 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Defeated_Movement_0:
# 193 "data//maps/Route4/scripts.pory"
	emote_exclamation_mark
# 193 "data//maps/Route4/scripts.pory"
	jump_in_place_down
	step_end

# 198 "data//maps/Route4/scripts.pory"
Route4_Dewpider_Defeated_Movement_1:
# 198 "data//maps/Route4/scripts.pory"
	walk_down
# 198 "data//maps/Route4/scripts.pory"
	jump_in_place_down
# 198 "data//maps/Route4/scripts.pory"
	emote_exclamation_mark
	step_end

Route4_EventScript_EvilTeam_Text_0:
# 12 "data//maps/Route4/scripts.pory"
	.string "Hey kid - this road is closed due\n"
	.string "to...uh...repairs. Yeah. Sorry.$"

Route4_EventScript_EvilTeam_Text_1:
# 13 "data//maps/Route4/scripts.pory"
	.string "We look suspicious? We're\n"
	.string "just...um...construction workers. Sorry.\l"
	.string "Yeah.$"

Route4_EventScript_EvilTeam_Text_2:
# 14 "data//maps/Route4/scripts.pory"
	.string "So you'll step back and let us do our\n"
	.string "work, right?$"

Route4_EventScript_EvilTeam_Text_3:
# 16 "data//maps/Route4/scripts.pory"
	.string "Good. Now scram!$"

Route4_EventScript_EvilTeam_Text_4:
# 21 "data//maps/Route4/scripts.pory"
	.string "You don't want to budge? Grr...alright\n"
	.string "fine, we're not construction workers.\l"
	.string "We're Team Somber! And now we're going\l"
	.string "to teach you a lesson!$"

Route4_EventScript_EvilTeam_Text_5:
# 27 "data//maps/Route4/scripts.pory"
	.string "Stupid kid!$"

Route4_EventScript_EvilTeamDefeated_Text_0:
# 41 "data//maps/Route4/scripts.pory"
	.string "Can't believe we lost to some stupid\n"
	.string "kid...$"

Route4_EventScript_EvilTeamDefeated_Text_1:
# 45 "data//maps/Route4/scripts.pory"
	.string "We gotta tell the boss at CERAM BASE\n"
	.string "CAMP about this!$"

Route4_EventScript_EvilTeamDefeated_Text_2:
# 50 "data//maps/Route4/scripts.pory"
	.string "We'll remember this, kid!$"

Route4_TrainerBattle_Raha_Text_0:
# 68 "data//maps/Route4/scripts.pory"
	.string "My {PKMN} were very expensive! There's no\n"
	.string "way you can beat me!$"

Route4_TrainerBattle_Raha_Text_1:
# 68 "data//maps/Route4/scripts.pory"
	.string "But Father spent so much money!$"

Route4_TrainerBattle_Raha_Text_2:
# 69 "data//maps/Route4/scripts.pory"
	.string "Maybe I should ask Father to buy some\n"
	.string "stronger {PKMN}...or maybe I should try and\l"
	.string "train them myself, like you!$"

Route4_TrainerBattle_Cammy_Text_0:
# 75 "data//maps/Route4/scripts.pory"
	.string "Are you a new trainer? Let this old lady\n"
	.string "teach you some new tricks.$"

Route4_TrainerBattle_Cammy_Text_1:
# 75 "data//maps/Route4/scripts.pory"
	.string "Well fought!$"

Route4_TrainerBattle_Cammy_Text_2:
# 76 "data//maps/Route4/scripts.pory"
	.string "You were the teacher and I was the\n"
	.string "student! Haha!$"

Route4_TrainerBattle_Sona_Text_0:
# 82 "data//maps/Route4/scripts.pory"
	.string "Different {PKMN} inhabit different areas.\n"
	.string "I caught mine right here!$"

Route4_TrainerBattle_Sona_Text_1:
# 82 "data//maps/Route4/scripts.pory"
	.string "Oh no!$"

Route4_TrainerBattle_Sona_Text_2:
# 83 "data//maps/Route4/scripts.pory"
	.string "No matter where they're from, all {PKMN}\n"
	.string "need love and care.$"

Route4_TrainerBattle_Jenny_Text_0:
# 89 "data//maps/Route4/scripts.pory"
	.string "My PANCHAM and I train here every\n"
	.string "morning. We want to become the\l"
	.string "strongest!$"

Route4_TrainerBattle_Jenny_Text_1:
# 89 "data//maps/Route4/scripts.pory"
	.string "We need to train harder!$"

Route4_TrainerBattle_Jenny_Text_2:
# 90 "data//maps/Route4/scripts.pory"
	.string "Pancham and I will become {PKMN} Champions\n"
	.string "one day!$"

Route4_TrainerBattle_Kid1_Text_0:
# 97 "data//maps/Route4/scripts.pory"
	.string "Hah! Bet you didn't see me there, did\n"
	.string "you? You entered our secret hideout\l"
	.string "and now you're going to pay!$"

Route4_TrainerBattle_Kid1_Text_1:
# 97 "data//maps/Route4/scripts.pory"
	.string "Waah!$"

Route4_TrainerBattle_Kid1_Text_2:
# 100 "data//maps/Route4/scripts.pory"
	.string "Eek! It's the DEWPIDER!$"

Route4_TrainerBattle_Kid1_Text_3:
# 102 "data//maps/Route4/scripts.pory"
	.string "It's summer break so we play here all\n"
	.string "day until the sun goes down!$"

Route4_TrainerBattle_Kid2_Text_0:
# 109 "data//maps/Route4/scripts.pory"
	.string "Ooh, you made it this far! But I won't\n"
	.string "let you lay your hands on the boss! I'm\l"
	.string "going to stop you right now!$"

Route4_TrainerBattle_Kid2_Text_1:
# 109 "data//maps/Route4/scripts.pory"
	.string "Boss! Help!$"

Route4_TrainerBattle_Kid2_Text_2:
# 110 "data//maps/Route4/scripts.pory"
	.string "Our secret hideout is really cool, don't\n"
	.string "you think?$"

Route4_TrainerBattle_Kid3_Text_0:
# 120 "data//maps/Route4/scripts.pory"
	.string "I have so much fun with my friends\n"
	.string "here...I hate going back home. I hate my\l"
	.string "family!$"

Route4_TrainerBattle_Kid3_Text_1:
# 122 "data//maps/Route4/scripts.pory"
	.string "Ahem...welcome to our secret hideout,\n"
	.string "old one. You may look down upon us for\l"
	.string "being so small, but let me tell you\l"
	.string "something...Even us kids are strong!$"

Route4_TrainerBattle_Kid3_Text_2:
# 123 "data//maps/Route4/scripts.pory"
	.string "My {PKMN}! Adults are lame!$"

Route4_TrainerBattle_Kid3_Text_3:
# 125 "data//maps/Route4/scripts.pory"
	.string "You have proved your worth, old one. You\n"
	.string "may now accept this reward.$"

Route4_TrainerBattle_Kid3_Text_4:
# 128 "data//maps/Route4/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...when will I go back home?\p"
	.string "Never! I hate my family! They only care\n"
	.string "about my big brother. I'm not scared of\l"
	.string "any DEWPIDERS. I want...I want to be\l"
	.string "outside all day!$"

Route4_Sign_KidsTrio_Text_0:
# 136 "data//maps/Route4/scripts.pory"
	.string "A child has scrawled on this sign.\p"
	.string "THIS IS OUR SECRET BASE. GET OUT OR\n"
	.string "BEWARE!!!!$"

Route4_Dewpider_Trigger_Text_0:
# 146 "data//maps/Route4/scripts.pory"
	.string "Aaahhh!! Help!!!!$"

Route4_Dewpider_Text_0:
# 181 "data//maps/Route4/scripts.pory"
	.string "The DEWPIDER snaps at you before\n"
	.string "turning around.$"

Route4_Dewpider_Text_1:
# 186 "data//maps/Route4/scripts.pory"
	.string "Will the kids just be left like this?$"

Route4_Dewpider_Defeated_Text_0:
# 196 "data//maps/Route4/scripts.pory"
	.string "You saved us! Thank you. We were so\n"
	.string "scared!\p"
	.string "...\p"
	.string "I'll go home. I can't let my friends be\n"
	.string "hurt by the DEWPIDER.$"

Route4_Dewpider_Defeated_Text_1:
# 201 "data//maps/Route4/scripts.pory"
	.string "C'mon gang! Let's go.$"

Route4_NPC_Couple1_Text_0:
# 216 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "The lake is nice too...$"

Route4_NPC_Couple2_Text_0:
# 224 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "It's a shame about her...$"

Route4_NPC_A_Text_0:
# 232 "data//maps/Route4/scripts.pory"
	.string "There's a small tree up ahead blocking\n"
	.string "the path. A {PKMN} with CUT might be able to\l"
	.string "cut it down...but the city management\l"
	.string "needs to think about us civilians. We're\l"
	.string "not all trainers!$"

Route4_NPC_B_Text_0:
# 240 "data//maps/Route4/scripts.pory"
	.string "Mom told me to come here and get my\n"
	.string "little brother. He's such a brat!\l"
	.string "Everyone knows its dangerous to play\l"
	.string "here because of the DEWPIDER. But he\l"
	.string "just runs out and comes here anyway!$"

Route4_NPC_Cook_Text_0:
# 250 "data//maps/Route4/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over CORMORIA. And if you\l"
	.string "ever visit PELLUCA CITY, be sure to\l"
	.string "drop by our restaurant!$"

Route4_NPC_Cook_Text_1:
# 252 "data//maps/Route4/scripts.pory"
	.string "Hello young trainer! I'm a cook from the\n"
	.string "PELLUCA RESTAURANT, all the way on the\l"
	.string "other side of CORMORIA! Why am I here,\l"
	.string "you ask? It's because I travel all\l"
	.string "across CORMORIA to find the best\l"
	.string "ingredients for the restaurant! I'm\l"
	.string "looking for a special berry that only\l"
	.string "grows around MT CERAM. It's called a\l"
	.string "RAWST BERRY. If you happen to have one,\l"
	.string "would you give it to me?$"

Route4_NPC_Cook_Text_2:
# 257 "data//maps/Route4/scripts.pory"
	.string "{PLAYER} gave the cook a RAWST BERRY$"

Route4_NPC_Cook_Text_3:
# 258 "data//maps/Route4/scripts.pory"
	.string "Oh wonderful! This will add a ton of\n"
	.string "flavour to our signature APPLE PIE!\n"
	.string "Thank you trainer. What's your name?\p"
	.string "...\p"
	.string "{PLAYER}, is it? In exchange, please\n"
	.string "take this.$"

Route4_NPC_D_Text_0:
# 275 "data//maps/Route4/scripts.pory"
	.string "There are some grunts blocking the\n"
	.string "path to CERAM BASE CAMP! They remind me\l"
	.string "of my younger days...I used to be in an\l"
	.string "evil team in the HOENN region.$"
