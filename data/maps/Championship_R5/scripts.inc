Championship_R5_MapScripts::
# 2 "data//maps/Championship_R5/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Championship_R5_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data//maps/Championship_R5/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Championship_R5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Championship_R5_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data//maps/Championship_R5/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Championship_R5_OnWarp
	.2byte 0

Championship_R5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data//maps/Championship_R5/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Championship_R5
	.2byte 0


Championship_R5_OnWarp::
# 12 "data//maps/Championship_R5/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


Championship_R5::
# 16 "data//maps/Championship_R5/scripts.pory"
	lockall
# 19 "data//maps/Championship_R5/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data//maps/Championship_R5/scripts.pory"
	setdynamicwarp MAP_CHAMPIONSHIP_R2_LOBBY, 4, 13
# 23 "data//maps/Championship_R5/scripts.pory"
	special SpawnCameraObject
# 25 "data//maps/Championship_R5/scripts.pory"
	setrespawn HEAL_LOCATION_CHAMPIONSHIP_CORRIDOR
# 27 "data//maps/Championship_R5/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Championship_R5_Movement_0
# 28 "data//maps/Championship_R5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_R5_Movement_1
# 29 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 31 "data//maps/Championship_R5/scripts.pory"
	delay 16
# 33 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_0, Championship_R5_Text_1
# 34 "data//maps/Championship_R5/scripts.pory"
	playse SE_APPLAUSE
# 35 "data//maps/Championship_R5/scripts.pory"
	waitse
# 36 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_0, Championship_R5_Text_2
# 38 "data//maps/Championship_R5/scripts.pory"
	applymovement 1, Championship_R5_Movement_2
# 39 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_3, Championship_R5_Text_4
# 41 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_3, Championship_R5_Text_5
# 43 "data//maps/Championship_R5/scripts.pory"
	playse SE_APPLAUSE
# 44 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_0, Championship_R5_Text_6
# 46 "data//maps/Championship_R5/scripts.pory"
	applymovement 1, Championship_R5_Movement_3
# 47 "data//maps/Championship_R5/scripts.pory"
	applymovement 2, Championship_R5_Movement_3
# 48 "data//maps/Championship_R5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_R5_Movement_4
# 49 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 51 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_3, Championship_R5_Text_7
# 53 "data//maps/Championship_R5/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPIONSHIP_E, Championship_R5_Text_8
# 56 "data//maps/Championship_R5/scripts.pory"
	special SpawnCameraObject
# 57 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_3, Championship_R5_Text_9
# 59 "data//maps/Championship_R5/scripts.pory"
	applymovement 1, Championship_R5_Movement_4
# 60 "data//maps/Championship_R5/scripts.pory"
	applymovement 2, Championship_R5_Movement_5
# 61 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 63 "data//maps/Championship_R5/scripts.pory"
	applymovement 1, Championship_R5_Movement_6
# 64 "data//maps/Championship_R5/scripts.pory"
	applymovement 2, Championship_R5_Movement_7
# 65 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 66 "data//maps/Championship_R5/scripts.pory"
	removeobject 1
# 68 "data//maps/Championship_R5/scripts.pory"
	applymovement 2, Championship_R5_Movement_8
# 69 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 70 "data//maps/Championship_R5/scripts.pory"
	removeobject 2
# 72 "data//maps/Championship_R5/scripts.pory"
	setvar VAR_CHAMP_STAGE, 6
# 73 "data//maps/Championship_R5/scripts.pory"
	setflag FLAG_BEAT_FINALS
# 76 "data//maps/Championship_R5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_R5_Movement_9
# 77 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_0, Championship_R5_Text_10
# 79 "data//maps/Championship_R5/scripts.pory"
	playse SE_APPLAUSE
# 80 "data//maps/Championship_R5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data//maps/Championship_R5/scripts.pory"
	setflag FLAG_GAME_CLEAR
# 82 "data//maps/Championship_R5/scripts.pory"
	special GameClear
# 84 "data//maps/Championship_R5/scripts.pory"
	releaseall
	end


# 27 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_0:
# 27 "data//maps/Championship_R5/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R5/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R5/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R5/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 27 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 27 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 27 "data//maps/Championship_R5/scripts.pory"
	walk_right
	step_end

# 28 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_1:
# 28 "data//maps/Championship_R5/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R5/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R5/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R5/scripts.pory"
	face_right
	step_end

# 38 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_2:
# 38 "data//maps/Championship_R5/scripts.pory"
	jump_in_place_left
	step_end

# 46 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_3:
# 46 "data//maps/Championship_R5/scripts.pory"
	walk_left
# 46 "data//maps/Championship_R5/scripts.pory"
	walk_left
	step_end

# 48 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_4:
# 48 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 48 "data//maps/Championship_R5/scripts.pory"
	walk_right
	step_end

# 60 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_5:
# 60 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 60 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 60 "data//maps/Championship_R5/scripts.pory"
	face_left
	step_end

# 63 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_6:
# 63 "data//maps/Championship_R5/scripts.pory"
	walk_down
# 63 "data//maps/Championship_R5/scripts.pory"
	walk_down
# 63 "data//maps/Championship_R5/scripts.pory"
	walk_down
	step_end

# 64 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_7:
# 64 "data//maps/Championship_R5/scripts.pory"
	walk_left
# 64 "data//maps/Championship_R5/scripts.pory"
	walk_down
# 64 "data//maps/Championship_R5/scripts.pory"
	walk_down
	step_end

# 68 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_8:
# 68 "data//maps/Championship_R5/scripts.pory"
	walk_down
	step_end

# 76 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_9:
# 76 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 76 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 76 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 76 "data//maps/Championship_R5/scripts.pory"
	face_down
	step_end

Championship_R5_Text_0:
# 33 "data//maps/Championship_R5/scripts.pory"
	.string "Announcer$"

Championship_R5_Text_1:
# 33 "data//maps/Championship_R5/scripts.pory"
	.string "This is it, everyone!\p"
	.string "After countless tough battles, we're\n"
	.string "finally here with the two strongest\l"
	.string "trainers in all of Cormoria!\p"
	.string "Let's hear a huge cheer for the grand\n"
	.string "finalists!$"

Championship_R5_Text_2:
# 36 "data//maps/Championship_R5/scripts.pory"
	.string "On the right, we have the overwhelming\n"
	.string "cword favourite and this year's\l"
	.string "frontrunner for Champion - the fiery\l"
	.string "Ace Rookie from the Galecrest Decetive\l"
	.string "Academy - Kohla!\p"
	.string "With his partner Ceruledge, he's been\n"
	.string "dominant in the...$"

Championship_R5_Text_3:
# 39 "data//maps/Championship_R5/scripts.pory"
	.string "Kohla$"

Championship_R5_Text_4:
# 39 "data//maps/Championship_R5/scripts.pory"
	.string "It had to be you, {PLAYER}.$"

Championship_R5_Text_5:
# 41 "data//maps/Championship_R5/scripts.pory"
	.string "In the end, it was you.\p"
	.string "While the world will give me all the\n"
	.string "credit, I know the truth.\p"
	.string "I can't deny the truth.\p"
	.string "You were the one who stopped Rue and\n"
	.string "Team Somber.$"

Championship_R5_Text_6:
# 44 "data//maps/Championship_R5/scripts.pory"
	.string "Trainers, to your positions!$"

Championship_R5_Text_7:
# 51 "data//maps/Championship_R5/scripts.pory"
	.string "When I look at you, I see everything I\n"
	.string "don't have.\p"
	.string "Everything I deserve, but don't have.\p"
	.string "But I'm still the Ace Rookie!\n"
	.string "I'm the one who put it all on the line\l"
	.string "against Team Somber! I'm the one who\l"
	.string "reached the finals of the Pokemon\l"
	.string "Championship!\p"
	.string "And today, right here, right now,...\p"
	.string "...I'm going to get what I deserve!$"

Championship_R5_Text_8:
# 53 "data//maps/Championship_R5/scripts.pory"
	.string "Argh! No!$"

Championship_R5_Text_9:
# 57 "data//maps/Championship_R5/scripts.pory"
	.string "...$"

Championship_R5_Text_10:
# 77 "data//maps/Championship_R5/scripts.pory"
	.string "To everyone watching this show in the\n"
	.string "stands and all across Cormoria...you're\l"
	.string "looking at the new Pokemon Champion!$"
