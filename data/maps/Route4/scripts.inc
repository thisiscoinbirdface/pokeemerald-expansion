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
	removeobject LOCALID_GRUNT1
# 47 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_EVIL_BATTLE
# 48 "data//maps/Route4/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 49 "data//maps/Route4/scripts.pory"
	releaseall
	return


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
