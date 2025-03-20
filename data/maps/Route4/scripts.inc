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
# 29 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE4_GRUNTS, Route4_EventScript_EvilTeam_Text_5
# 33 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route4_EventScript_EvilTeam_5
Route4_EventScript_EvilTeam_4:
# 36 "data//maps/Route4/scripts.pory"
	releaseall
	return

Route4_EventScript_EvilTeam_2:
# 16 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_3
# 17 "data//maps/Route4/scripts.pory"
	releaseall
	end

Route4_EventScript_EvilTeam_5:
# 34 "data//maps/Route4/scripts.pory"
	goto Route4_EventScript_EvilTeamDefeated
	goto Route4_EventScript_EvilTeam_4


Route4_EventScript_EvilTeamDefeated::
# 41 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_0
# 42 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_1
# 43 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 44 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_2
# 45 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 46 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_0
# 47 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_3
# 48 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 49 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_1
# 50 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeamDefeated_Movement_4
# 51 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeamDefeated_Movement_4
# 52 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 53 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeamDefeated_Text_2
# 54 "data//maps/Route4/scripts.pory"
	release
# 57 "data//maps/Route4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT1
# 59 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT2
# 60 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_EVIL_BATTLE
# 61 "data//maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_TrainerBattle_Raha::
# 71 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_RAHA, Route4_TrainerBattle_Raha_Text_0, Route4_TrainerBattle_Raha_Text_1
# 72 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Raha_Text_2
# 73 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Cammy::
# 78 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_CAMMY, Route4_TrainerBattle_Cammy_Text_0, Route4_TrainerBattle_Cammy_Text_1
# 79 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Cammy_Text_2
# 80 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Sona::
# 85 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_SONA, Route4_TrainerBattle_Sona_Text_0, Route4_TrainerBattle_Sona_Text_1
# 86 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Sona_Text_2
# 87 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Jenny::
# 92 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_JENNY, Route4_TrainerBattle_Jenny_Text_0, Route4_TrainerBattle_Jenny_Text_1
# 93 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Jenny_Text_2
# 94 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Kid1::
# 100 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID1, Route4_TrainerBattle_Kid1_Text_0, Route4_TrainerBattle_Kid1_Text_1
# 101 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_2
# 102 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Kid2::
# 107 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID2, Route4_TrainerBattle_Kid2_Text_0, Route4_TrainerBattle_Kid2_Text_1
# 108 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid2_Text_2
# 109 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Kid3::
# 114 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID3, Route4_TrainerBattle_Kid3_Text_0, Route4_TrainerBattle_Kid3_Text_1
# 115 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_2
# 116 "data//maps/Route4/scripts.pory"
	release
	end


Route4_Sign_KidsTrio::
# 122 "data//maps/Route4/scripts.pory"
	msgbox Route4_Sign_KidsTrio_Text_0, MSGBOX_SIGN
	end


Route4_NPC_Couple1::
# 132 "data//maps/Route4/scripts.pory"
	lockall
# 133 "data//maps/Route4/scripts.pory"
	faceplayer
# 134 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple1_Text_0
# 135 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_NPC_Couple2::
# 139 "data//maps/Route4/scripts.pory"
	lockall
# 140 "data//maps/Route4/scripts.pory"
	faceplayer
# 141 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_Couple2_Text_0
# 142 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_NPC_A::
# 147 "data//maps/Route4/scripts.pory"
	lockall
# 148 "data//maps/Route4/scripts.pory"
	faceplayer
# 149 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_A_Text_0
# 150 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_NPC_B::
# 155 "data//maps/Route4/scripts.pory"
	lockall
# 156 "data//maps/Route4/scripts.pory"
	faceplayer
# 157 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_B_Text_0
# 158 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_NPC_C::
# 163 "data//maps/Route4/scripts.pory"
	lockall
# 164 "data//maps/Route4/scripts.pory"
	faceplayer
# 165 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_C_Text_0
# 166 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_NPC_D::
# 171 "data//maps/Route4/scripts.pory"
	lockall
# 172 "data//maps/Route4/scripts.pory"
	faceplayer
# 173 "data//maps/Route4/scripts.pory"
	msgbox Route4_NPC_D_Text_0
# 174 "data//maps/Route4/scripts.pory"
	releaseall
	return


# 41 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_0:
# 41 "data//maps/Route4/scripts.pory"
	face_right
	step_end

# 42 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_1:
# 42 "data//maps/Route4/scripts.pory"
	face_left
	step_end

# 44 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_2:
# 44 "data//maps/Route4/scripts.pory"
	jump_in_place_right
	step_end

# 47 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_3:
# 47 "data//maps/Route4/scripts.pory"
	jump_in_place_left
	step_end

# 50 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeamDefeated_Movement_4:
# 50 "data//maps/Route4/scripts.pory"
	face_down
	step_end

Route4_EventScript_EvilTeam_Text_0:
# 12 "data//maps/Route4/scripts.pory"
	.string "Hey kid - this road is closed due\n"
	.string "to...uh...repairs. Yeah. Sorry.$"

Route4_EventScript_EvilTeam_Text_1:
# 13 "data//maps/Route4/scripts.pory"
	.string "You've saying we look suspicious? We're\n"
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
# 31 "data//maps/Route4/scripts.pory"
	.string "Stupid kid!$"

Route4_EventScript_EvilTeamDefeated_Text_0:
# 46 "data//maps/Route4/scripts.pory"
	.string "I can't believe we lost to some stupid\n"
	.string "kid...$"

Route4_EventScript_EvilTeamDefeated_Text_1:
# 49 "data//maps/Route4/scripts.pory"
	.string "We gotta go tell the boss at the CERAM\n"
	.string "BASE CAMP about this!$"

Route4_EventScript_EvilTeamDefeated_Text_2:
# 53 "data//maps/Route4/scripts.pory"
	.string "We'll remember this kid!$"

Route4_TrainerBattle_Raha_Text_0:
# 71 "data//maps/Route4/scripts.pory"
	.string "My {PKMN} were very expensive!\p"
	.string "There's no way you can beat me!$"

Route4_TrainerBattle_Raha_Text_1:
# 71 "data//maps/Route4/scripts.pory"
	.string "But Father spent so much money!$"

Route4_TrainerBattle_Raha_Text_2:
# 72 "data//maps/Route4/scripts.pory"
	.string "Maybe I should ask Father to buy some\n"
	.string "stronger {PKMN}...or maybe I should try and\l"
	.string "train them myself, like you!$"

Route4_TrainerBattle_Cammy_Text_0:
# 78 "data//maps/Route4/scripts.pory"
	.string "Are you a new trainer? Let\p"
	.string "this old lady teach you some new tricks.$"

Route4_TrainerBattle_Cammy_Text_1:
# 78 "data//maps/Route4/scripts.pory"
	.string "Well fought!$"

Route4_TrainerBattle_Cammy_Text_2:
# 79 "data//maps/Route4/scripts.pory"
	.string "You were the teacher and I was the\n"
	.string "student! Haha!$"

Route4_TrainerBattle_Sona_Text_0:
# 85 "data//maps/Route4/scripts.pory"
	.string "Different {PKMN} inhabit different\p"
	.string "areas. Mine were caught on Route 3!$"

Route4_TrainerBattle_Sona_Text_1:
# 85 "data//maps/Route4/scripts.pory"
	.string "Oh no!$"

Route4_TrainerBattle_Sona_Text_2:
# 86 "data//maps/Route4/scripts.pory"
	.string "No matter where they're from, all {PKMN}\n"
	.string "need love and care.$"

Route4_TrainerBattle_Jenny_Text_0:
# 92 "data//maps/Route4/scripts.pory"
	.string "My Pancham and I train here every\n"
	.string "morning.\p"
	.string "We want to become the strongest!$"

Route4_TrainerBattle_Jenny_Text_1:
# 92 "data//maps/Route4/scripts.pory"
	.string "We need to train harder!$"

Route4_TrainerBattle_Jenny_Text_2:
# 93 "data//maps/Route4/scripts.pory"
	.string "Pancham and I will become {PKMN} Champions\n"
	.string "one day!$"

Route4_TrainerBattle_Kid1_Text_0:
# 100 "data//maps/Route4/scripts.pory"
	.string "Hah! Bet you didn't see me there,\n"
	.string "did you?\p"
	.string "You entered our secret hideout\n"
	.string "and now you're going to pay!$"

Route4_TrainerBattle_Kid1_Text_1:
# 100 "data//maps/Route4/scripts.pory"
	.string "Waah!$"

Route4_TrainerBattle_Kid1_Text_2:
# 101 "data//maps/Route4/scripts.pory"
	.string "It's summer break so we play here all\n"
	.string "day until the sun goes down!$"

Route4_TrainerBattle_Kid2_Text_0:
# 107 "data//maps/Route4/scripts.pory"
	.string "Ooh, you made it this far!\n"
	.string "But I won't let you lay your\n"
	.string "hands on the boss!\p"
	.string "I'm going to stop you right now!$"

Route4_TrainerBattle_Kid2_Text_1:
# 107 "data//maps/Route4/scripts.pory"
	.string "Boss! Help!$"

Route4_TrainerBattle_Kid2_Text_2:
# 108 "data//maps/Route4/scripts.pory"
	.string "Our secret hideout is really cool, don't\n"
	.string "you think?$"

Route4_TrainerBattle_Kid3_Text_0:
# 114 "data//maps/Route4/scripts.pory"
	.string "Ahem...welcome to our secret hideout,\n"
	.string "old one. You may look down upon us\n"
	.string "for being so small, but let me\n"
	.string "tell you something...\p"
	.string "Even us kids are strong!$"

Route4_TrainerBattle_Kid3_Text_1:
# 114 "data//maps/Route4/scripts.pory"
	.string "My {PKMN}! Adults are lame!$"

Route4_TrainerBattle_Kid3_Text_2:
# 115 "data//maps/Route4/scripts.pory"
	.string "I have so much fun with my friends\n"
	.string "here...I hate going back home. I hate my\l"
	.string "family!$"

Route4_Sign_KidsTrio_Text_0:
# 122 "data//maps/Route4/scripts.pory"
	.string "A child has scrawled on this sign.\p"
	.string "THIS IS OUR SECRET BASE. GET OUT OR\n"
	.string "BEWARE!!!!$"

Route4_NPC_Couple1_Text_0:
# 134 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "The lake is nice too...$"

Route4_NPC_Couple2_Text_0:
# 141 "data//maps/Route4/scripts.pory"
	.string "What a lovely view!\p"
	.string "It's a shame about her...$"

Route4_NPC_A_Text_0:
# 149 "data//maps/Route4/scripts.pory"
	.string "There's a small tree up ahead blocking\n"
	.string "the path. A {PKMN} with CUT might be able to\l"
	.string "cut it down...but the city management\l"
	.string "needs to think about us civilians. We're\l"
	.string "not all trainers!$"

Route4_NPC_B_Text_0:
# 157 "data//maps/Route4/scripts.pory"
	.string "Mom told me to come here and get my\n"
	.string "little brother. He's such a brat! He\l"
	.string "plays outside all day and comes home\l"
	.string "late every evening.$"

Route4_NPC_C_Text_0:
# 165 "data//maps/Route4/scripts.pory"
	.string "I heard there were FINNEON and GOLDEEN\n"
	.string "in this lake, but I chose the wrong\l"
	.string "fishing spot...I can't hook a single {PKMN}!$"

Route4_NPC_D_Text_0:
# 173 "data//maps/Route4/scripts.pory"
	.string "There are some thugs blocking the path\n"
	.string "to Mt. Ceram Base Camp! They remind me\l"
	.string "of my younger days...I used to be in an\l"
	.string "evil team in the Hoenn region.$"
