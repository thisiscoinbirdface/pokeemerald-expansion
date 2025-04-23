IvyRiver_Main_MapScripts::
	.byte 0


IvyRiver_Main_Fisherman_AssembleTrigger::
# 4 "data//maps/IvyRiver_Main/scripts.pory"
	lockall
# 5 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 6 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 7 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 3, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0
# 8 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 10 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 11 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_1
# 12 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 13 "data//maps/IvyRiver_Main/scripts.pory"
	delay 16
# 14 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Main_Fisherman_AssembleTrigger_Text_0
# 15 "data//maps/IvyRiver_Main/scripts.pory"
	release
# 19 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_2
# 20 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_2
# 21 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 3, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_2
# 22 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 23 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 24 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 3
# 26 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3
# 27 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 2, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_4
# 28 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 29 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 30 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 2
# 32 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 1, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_5
# 33 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 34 "data//maps/IvyRiver_Main/scripts.pory"
	delay 8
# 35 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 1
# 37 "data//maps/IvyRiver_Main/scripts.pory"
	applymovement 4, IvyRiver_Main_Fisherman_AssembleTrigger_Movement_6
# 38 "data//maps/IvyRiver_Main/scripts.pory"
	waitmovement 0
# 39 "data//maps/IvyRiver_Main/scripts.pory"
	removeobject 4
# 43 "data//maps/IvyRiver_Main/scripts.pory"
	setflag FLAG_HIDE_IVYRIVER_FISHERMEN
# 44 "data//maps/IvyRiver_Main/scripts.pory"
	releaseall
	end


# 5 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_0:
# 5 "data//maps/IvyRiver_Main/scripts.pory"
	face_right
# 5 "data//maps/IvyRiver_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 11 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_1:
# 11 "data//maps/IvyRiver_Main/scripts.pory"
	jump_in_place_right
	step_end

# 19 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_2:
# 19 "data//maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 26 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_3:
# 26 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 26 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 26 "data//maps/IvyRiver_Main/scripts.pory"
	face_down
	step_end

# 27 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_4:
# 27 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 27 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 27 "data//maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 32 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_5:
# 32 "data//maps/IvyRiver_Main/scripts.pory"
	walk_down
# 32 "data//maps/IvyRiver_Main/scripts.pory"
	face_left
	step_end

# 37 "data//maps/IvyRiver_Main/scripts.pory"
IvyRiver_Main_Fisherman_AssembleTrigger_Movement_6:
# 37 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 37 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 37 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
# 37 "data//maps/IvyRiver_Main/scripts.pory"
	walk_left
	step_end

IvyRiver_Main_Fisherman_AssembleTrigger_Text_0:
# 14 "data//maps/IvyRiver_Main/scripts.pory"
	.string "{PLAYER}! You came! Let's start our\n"
	.string "search...but after so many years, we\l"
	.string "don't remember that day too clearly.\p"
	.string "The only thing we remember that day is\n"
	.string "that it was really cold and we were all\l"
	.string "dressed in green. Let's spread out and\l"
	.string "search the river for anything we can\l"
	.string "find!$"
