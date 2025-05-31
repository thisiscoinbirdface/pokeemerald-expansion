Championship_R3_MapScripts::
# 2 "data//maps/Championship_R3/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Championship_R3_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data//maps/Championship_R3/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Championship_R3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Championship_R3_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data//maps/Championship_R3/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Championship_R3_OnWarp
	.2byte 0

Championship_R3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data//maps/Championship_R3/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Championship_R3
	.2byte 0


Championship_R3_OnWarp::
# 12 "data//maps/Championship_R3/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


Championship_R3::
# 16 "data//maps/Championship_R3/scripts.pory"
	lockall
# 19 "data//maps/Championship_R3/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data//maps/Championship_R3/scripts.pory"
	setdynamicwarp MAP_CHAMPIONSHIP_R3_LOBBY, 4, 13
# 23 "data//maps/Championship_R3/scripts.pory"
	special SpawnCameraObject
# 25 "data//maps/Championship_R3/scripts.pory"
	setrespawn HEAL_LOCATION_CHAMPIONSHIP_CORRIDOR
# 27 "data//maps/Championship_R3/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Championship_R3_Movement_0
# 28 "data//maps/Championship_R3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_R3_Movement_1
# 29 "data//maps/Championship_R3/scripts.pory"
	waitmovement 0
# 30 "data//maps/Championship_R3/scripts.pory"
	delay 16
# 32 "data//maps/Championship_R3/scripts.pory"
	msgbox_delay Championship_R3_Text_0, Championship_R3_Text_1
# 34 "data//maps/Championship_R3/scripts.pory"
	applymovement 1, Championship_R3_Movement_2
# 35 "data//maps/Championship_R3/scripts.pory"
	msgbox_delay Championship_R3_Text_2, Championship_R3_Text_3
# 37 "data//maps/Championship_R3/scripts.pory"
	msgbox_delay Championship_R3_Text_0, Championship_R3_Text_4
# 39 "data//maps/Championship_R3/scripts.pory"
	applymovement 1, Championship_R3_Movement_2
# 40 "data//maps/Championship_R3/scripts.pory"
	msgbox_delay Championship_R3_Text_2, Championship_R3_Text_3
# 42 "data//maps/Championship_R3/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPIONSHIP_C, Championship_R3_Text_3
# 45 "data//maps/Championship_R3/scripts.pory"
	applymovement 1, Championship_R3_Movement_2
# 46 "data//maps/Championship_R3/scripts.pory"
	msgbox_delay Championship_R3_Text_2, Championship_R3_Text_3
# 48 "data//maps/Championship_R3/scripts.pory"
	playmoncry SPECIES_PINSIR, CRY_MODE_NORMAL
# 49 "data//maps/Championship_R3/scripts.pory"
	applymovement 2, Championship_R3_Movement_2
# 50 "data//maps/Championship_R3/scripts.pory"
	waitmovement 0
# 51 "data//maps/Championship_R3/scripts.pory"
	delay 24
# 53 "data//maps/Championship_R3/scripts.pory"
	applymovement 1, Championship_R3_Movement_3
# 54 "data//maps/Championship_R3/scripts.pory"
	waitmovement 0
# 56 "data//maps/Championship_R3/scripts.pory"
	applymovement 2, Championship_R3_Movement_4
# 57 "data//maps/Championship_R3/scripts.pory"
	applymovement 1, Championship_R3_Movement_5
# 58 "data//maps/Championship_R3/scripts.pory"
	waitmovement 0
# 59 "data//maps/Championship_R3/scripts.pory"
	removeobject 1
# 61 "data//maps/Championship_R3/scripts.pory"
	applymovement 2, Championship_R3_Movement_6
# 62 "data//maps/Championship_R3/scripts.pory"
	waitmovement 0
# 63 "data//maps/Championship_R3/scripts.pory"
	removeobject 2
# 65 "data//maps/Championship_R3/scripts.pory"
	setvar VAR_CHAMP_STAGE, 4
# 66 "data//maps/Championship_R3/scripts.pory"
	setflag FLAG_BEAT_R3
# 68 "data//maps/Championship_R3/scripts.pory"
	releaseall
	end


# 27 "data//maps/Championship_R3/scripts.pory"
Championship_R3_Movement_0:
# 27 "data//maps/Championship_R3/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R3/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R3/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R3/scripts.pory"
	walk_up
	step_end

# 28 "data//maps/Championship_R3/scripts.pory"
Championship_R3_Movement_1:
# 28 "data//maps/Championship_R3/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R3/scripts.pory"
	walk_left
# 28 "data//maps/Championship_R3/scripts.pory"
	walk_left
# 28 "data//maps/Championship_R3/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R3/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R3/scripts.pory"
	face_right
	step_end

# 34 "data//maps/Championship_R3/scripts.pory"
Championship_R3_Movement_2:
# 34 "data//maps/Championship_R3/scripts.pory"
	jump_in_place_left
	step_end

# 53 "data//maps/Championship_R3/scripts.pory"
Championship_R3_Movement_3:
# 53 "data//maps/Championship_R3/scripts.pory"
	walk_left
# 53 "data//maps/Championship_R3/scripts.pory"
	walk_down
	step_end

# 56 "data//maps/Championship_R3/scripts.pory"
Championship_R3_Movement_4:
# 56 "data//maps/Championship_R3/scripts.pory"
	walk_left
# 56 "data//maps/Championship_R3/scripts.pory"
	walk_down
# 56 "data//maps/Championship_R3/scripts.pory"
	walk_left
	step_end

# 57 "data//maps/Championship_R3/scripts.pory"
Championship_R3_Movement_5:
# 57 "data//maps/Championship_R3/scripts.pory"
	walk_down
# 57 "data//maps/Championship_R3/scripts.pory"
	walk_left
# 57 "data//maps/Championship_R3/scripts.pory"
	walk_down
	step_end

# 61 "data//maps/Championship_R3/scripts.pory"
Championship_R3_Movement_6:
# 61 "data//maps/Championship_R3/scripts.pory"
	walk_down
	step_end

Championship_R3_Text_0:
# 32 "data//maps/Championship_R3/scripts.pory"
	.string "Announcer$"

Championship_R3_Text_1:
# 32 "data//maps/Championship_R3/scripts.pory"
	.string "Alright everyone, welcome back!\n"
	.string "The tournament is heating up!\p"
	.string "We're down to the eight best trainers in\n"
	.string "all of Cormoria now!\p"
	.string "Let's hear a huge cheer for the\n"
	.string "trainers! Show your support!\p"
	.string "After a conclusive round of 16 victory,\n"
	.string "Ace Rookie Kohla stands in the lead\l"
	.string "for...$"

Championship_R3_Text_2:
# 35 "data//maps/Championship_R3/scripts.pory"
	.string "Berger$"

Championship_R3_Text_3:
# 35 "data//maps/Championship_R3/scripts.pory"
	.string "!$"

Championship_R3_Text_4:
# 37 "data//maps/Championship_R3/scripts.pory"
	.string "Trainers - are you ready?$"
