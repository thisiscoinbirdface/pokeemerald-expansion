Route4_MapScripts::
	.byte 0


# 2 "data//maps/Route4/scripts.pory"

# 3 "data//maps/Route4/scripts.pory"
    .set LOCALID_GRUNT1, 14
# 4 "data//maps/Route4/scripts.pory"
    .set LOCALID_GRUNT2, 15

Route4_EventScript_EvilTeam::
# 11 "data//maps/Route4/scripts.pory"
	lockall
# 12 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_0
# 13 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_1
# 14 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_2
# 15 "data//maps/Route4/scripts.pory"
	release
# 22 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE4_GRUNTS, Route4_EventScript_EvilTeam_Text_3
# 28 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeam_Movement_0
# 29 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeam_Movement_1
# 30 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 31 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeam_Movement_2
# 32 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 33 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_4
# 34 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeam_Movement_3
# 35 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 36 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_5
# 37 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT1, Route4_EventScript_EvilTeam_Movement_4
# 38 "data//maps/Route4/scripts.pory"
	applymovement LOCALID_GRUNT2, Route4_EventScript_EvilTeam_Movement_4
# 39 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 40 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_EvilTeam_Text_6
# 41 "data//maps/Route4/scripts.pory"
	release
# 44 "data//maps/Route4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT1
# 46 "data//maps/Route4/scripts.pory"
	removeobject LOCALID_GRUNT2
# 47 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_EVIL_BATTLE
# 48 "data//maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 49 "data//maps/Route4/scripts.pory"
	releaseall
	return


Route4_TrainerBattle_Raha::
# 59 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_RAHA, Route4_TrainerBattle_Raha_Text_0, Route4_TrainerBattle_Raha_Text_1
# 60 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Raha_Text_2
# 61 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Cammy::
# 66 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_CAMMY, Route4_TrainerBattle_Cammy_Text_0, Route4_TrainerBattle_Cammy_Text_1
# 67 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Cammy_Text_2
# 68 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Sona::
# 73 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_SONA, Route4_TrainerBattle_Sona_Text_0, Route4_TrainerBattle_Sona_Text_1
# 74 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Sona_Text_2
# 75 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Jenny::
# 80 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_JENNY, Route4_TrainerBattle_Jenny_Text_0, Route4_TrainerBattle_Jenny_Text_1
# 81 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Jenny_Text_2
# 82 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Kid1::
# 88 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID1, Route4_TrainerBattle_Kid1_Text_0, Route4_TrainerBattle_Kid1_Text_1
# 89 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid1_Text_2
# 90 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Kid2::
# 95 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID2, Route4_TrainerBattle_Kid2_Text_0, Route4_TrainerBattle_Kid2_Text_1
# 96 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid2_Text_2
# 97 "data//maps/Route4/scripts.pory"
	release
	end


Route4_TrainerBattle_Kid3::
# 102 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE4_KID3, Route4_TrainerBattle_Kid3_Text_0, Route4_TrainerBattle_Kid3_Text_1
# 103 "data//maps/Route4/scripts.pory"
	msgbox Route4_TrainerBattle_Kid3_Text_2
# 104 "data//maps/Route4/scripts.pory"
	release
	end


Route4_Sign_KidsTrio::
# 110 "data//maps/Route4/scripts.pory"
	msgbox Route4_Sign_KidsTrio_Text_0, MSGBOX_SIGN
	end


# 28 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeam_Movement_0:
# 28 "data//maps/Route4/scripts.pory"
	face_right
	step_end

# 29 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeam_Movement_1:
# 29 "data//maps/Route4/scripts.pory"
	face_left
	step_end

# 31 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeam_Movement_2:
# 31 "data//maps/Route4/scripts.pory"
	jump_in_place_right
	step_end

# 34 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeam_Movement_3:
# 34 "data//maps/Route4/scripts.pory"
	jump_in_place_left
	step_end

# 37 "data//maps/Route4/scripts.pory"
Route4_EventScript_EvilTeam_Movement_4:
# 37 "data//maps/Route4/scripts.pory"
	face_down
	step_end

Route4_EventScript_EvilTeam_Text_0:
# 12 "data//maps/Route4/scripts.pory"
	.string "Hey kid - this road is closed due\n"
	.string "to...uh...repairs. Yeah. Sorry.$"

Route4_EventScript_EvilTeam_Text_1:
# 13 "data//maps/Route4/scripts.pory"
	.string "You've saying we look suspicious? We're\n"
	.string "just...um...construction workers. Go tell\l"
	.string "the boss.$"

Route4_EventScript_EvilTeam_Text_2:
# 14 "data//maps/Route4/scripts.pory"
	.string "You don't want to budge? Grr...alright\n"
	.string "fine, we're not construction workers.\l"
	.string "You're messing with the wrong group of\l"
	.string "people, kid. And now we're going to\l"
	.string "teach you a lesson!$"

Route4_EventScript_EvilTeam_Text_3:
# 24 "data//maps/Route4/scripts.pory"
	.string "Stupid kid!$"

Route4_EventScript_EvilTeam_Text_4:
# 33 "data//maps/Route4/scripts.pory"
	.string "I can't believe we lost to some stupid\n"
	.string "kid...$"

Route4_EventScript_EvilTeam_Text_5:
# 36 "data//maps/Route4/scripts.pory"
	.string "We gotta go tell the boss at the CERAM\n"
	.string "BASE CAMP about this!$"

Route4_EventScript_EvilTeam_Text_6:
# 40 "data//maps/Route4/scripts.pory"
	.string "We'll remember this kid!$"

Route4_TrainerBattle_Raha_Text_0:
# 59 "data//maps/Route4/scripts.pory"
	.string "My {PKMN} were very expensive! There's no\n"
	.string "way you can beat me!$"

Route4_TrainerBattle_Raha_Text_1:
# 59 "data//maps/Route4/scripts.pory"
	.string "But Father spent so much money!$"

Route4_TrainerBattle_Raha_Text_2:
# 60 "data//maps/Route4/scripts.pory"
	.string "Maybe I should ask Father to buy some\n"
	.string "stronger {PKMN}...or maybe I should try and\l"
	.string "train them myself, like you!$"

Route4_TrainerBattle_Cammy_Text_0:
# 66 "data//maps/Route4/scripts.pory"
	.string "Are you a new trainer? Let this old lady\n"
	.string "teach you some new tricks.$"

Route4_TrainerBattle_Cammy_Text_1:
# 66 "data//maps/Route4/scripts.pory"
	.string "Well fought!$"

Route4_TrainerBattle_Cammy_Text_2:
# 67 "data//maps/Route4/scripts.pory"
	.string "You were the teacher and I was the\n"
	.string "student! Haha!$"

Route4_TrainerBattle_Sona_Text_0:
# 73 "data//maps/Route4/scripts.pory"
	.string "Different {PKMN} inhabit different areas.\n"
	.string "Mine were caught on Route 3!$"

Route4_TrainerBattle_Sona_Text_1:
# 73 "data//maps/Route4/scripts.pory"
	.string "Oh no!$"

Route4_TrainerBattle_Sona_Text_2:
# 74 "data//maps/Route4/scripts.pory"
	.string "No matter where they're from, all {PKMN}\n"
	.string "need love and care.$"

Route4_TrainerBattle_Jenny_Text_0:
# 80 "data//maps/Route4/scripts.pory"
	.string "My Pancham and I train here every\n"
	.string "morning. We share the same goal - to\l"
	.string "become the strongest!$"

Route4_TrainerBattle_Jenny_Text_1:
# 80 "data//maps/Route4/scripts.pory"
	.string "We need to train harder!$"

Route4_TrainerBattle_Jenny_Text_2:
# 81 "data//maps/Route4/scripts.pory"
	.string "Pancham and I will become {PKMN} Champions\n"
	.string "one day!$"

Route4_TrainerBattle_Kid1_Text_0:
# 88 "data//maps/Route4/scripts.pory"
	.string "Hah! Bet you didn't see me there, did\n"
	.string "you? You entered our secret hideout -\l"
	.string "now you're going to pay!$"

Route4_TrainerBattle_Kid1_Text_1:
# 88 "data//maps/Route4/scripts.pory"
	.string "Waah!$"

Route4_TrainerBattle_Kid1_Text_2:
# 89 "data//maps/Route4/scripts.pory"
	.string "It's summer break so we play here all\n"
	.string "day until the sun goes down!$"

Route4_TrainerBattle_Kid2_Text_0:
# 95 "data//maps/Route4/scripts.pory"
	.string "Ooh, you made it this far! But I won't\n"
	.string "let you lay your hands on the boss! I'm\l"
	.string "going to stop you right now!$"

Route4_TrainerBattle_Kid2_Text_1:
# 95 "data//maps/Route4/scripts.pory"
	.string "Boss! Help!$"

Route4_TrainerBattle_Kid2_Text_2:
# 96 "data//maps/Route4/scripts.pory"
	.string "Our secret hideout is really cool, don't\n"
	.string "you think?$"

Route4_TrainerBattle_Kid3_Text_0:
# 102 "data//maps/Route4/scripts.pory"
	.string "Ahem...welcome to our secret hideout,\n"
	.string "old one. You may look down upon us for\l"
	.string "being so small, but let me tell you\l"
	.string "something - even us kids should be\l"
	.string "taken seriously!$"

Route4_TrainerBattle_Kid3_Text_1:
# 102 "data//maps/Route4/scripts.pory"
	.string "My {PKMN}! Adults are lame!$"

Route4_TrainerBattle_Kid3_Text_2:
# 103 "data//maps/Route4/scripts.pory"
	.string "I have so much fun with my friends\n"
	.string "here...I hate going back home. I hate my\l"
	.string "parents!$"

Route4_Sign_KidsTrio_Text_0:
# 110 "data//maps/Route4/scripts.pory"
	.string "A child has scrawled on this sign.\p"
	.string "THIS IS OUR SECRET BASE. GET OUT OR\n"
	.string "BEWARE!!!!$"
