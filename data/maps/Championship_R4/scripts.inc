Championship_R4_MapScripts::
# 2 "data//maps/Championship_R4/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Championship_R4_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data//maps/Championship_R4/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Championship_R4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Championship_R4_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data//maps/Championship_R4/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Championship_R4_OnWarp
	.2byte 0

Championship_R4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data//maps/Championship_R4/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Championship_R4
	.2byte 0


Championship_R4_OnWarp::
# 12 "data//maps/Championship_R4/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


Championship_R4::
# 16 "data//maps/Championship_R4/scripts.pory"
	lockall
# 19 "data//maps/Championship_R4/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data//maps/Championship_R4/scripts.pory"
	setdynamicwarp MAP_CHAMPIONSHIP_R4_LOBBY, 4, 13
# 23 "data//maps/Championship_R4/scripts.pory"
	special SpawnCameraObject
# 25 "data//maps/Championship_R4/scripts.pory"
	setrespawn HEAL_LOCATION_CHAMPIONSHIP_CORRIDOR
# 27 "data//maps/Championship_R4/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Championship_R4_Movement_0
# 28 "data//maps/Championship_R4/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_R4_Movement_1
# 29 "data//maps/Championship_R4/scripts.pory"
	waitmovement 0
# 30 "data//maps/Championship_R4/scripts.pory"
	delay 16
# 32 "data//maps/Championship_R4/scripts.pory"
	msgbox_delay Championship_R4_Text_0, Championship_R4_Text_1
# 34 "data//maps/Championship_R4/scripts.pory"
	applymovement 1, Championship_R4_Movement_2
# 35 "data//maps/Championship_R4/scripts.pory"
	msgbox_delay Championship_R4_Text_2, Championship_R4_Text_3
# 37 "data//maps/Championship_R4/scripts.pory"
	msgbox_delay Championship_R4_Text_0, Championship_R4_Text_4
# 39 "data//maps/Championship_R4/scripts.pory"
	applymovement 1, Championship_R4_Movement_2
# 40 "data//maps/Championship_R4/scripts.pory"
	msgbox_delay Championship_R4_Text_2, Championship_R4_Text_5
# 42 "data//maps/Championship_R4/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPIONSHIP_D, Championship_R4_Text_6
# 45 "data//maps/Championship_R4/scripts.pory"
	applymovement 1, Championship_R4_Movement_2
# 46 "data//maps/Championship_R4/scripts.pory"
	msgbox_delay Championship_R4_Text_2, Championship_R4_Text_7
# 48 "data//maps/Championship_R4/scripts.pory"
	playmoncry SPECIES_PINSIR, CRY_MODE_NORMAL
# 49 "data//maps/Championship_R4/scripts.pory"
	applymovement 2, Championship_R4_Movement_2
# 50 "data//maps/Championship_R4/scripts.pory"
	waitmovement 0
# 51 "data//maps/Championship_R4/scripts.pory"
	delay 24
# 53 "data//maps/Championship_R4/scripts.pory"
	applymovement 1, Championship_R4_Movement_3
# 54 "data//maps/Championship_R4/scripts.pory"
	waitmovement 0
# 56 "data//maps/Championship_R4/scripts.pory"
	applymovement 2, Championship_R4_Movement_4
# 57 "data//maps/Championship_R4/scripts.pory"
	applymovement 1, Championship_R4_Movement_5
# 58 "data//maps/Championship_R4/scripts.pory"
	waitmovement 0
# 59 "data//maps/Championship_R4/scripts.pory"
	removeobject 1
# 61 "data//maps/Championship_R4/scripts.pory"
	applymovement 2, Championship_R4_Movement_6
# 62 "data//maps/Championship_R4/scripts.pory"
	waitmovement 0
# 63 "data//maps/Championship_R4/scripts.pory"
	removeobject 2
# 65 "data//maps/Championship_R4/scripts.pory"
	special SpawnCameraObject
# 66 "data//maps/Championship_R4/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Championship_R4_Movement_7
# 67 "data//maps/Championship_R4/scripts.pory"
	waitmovement 0
# 68 "data//maps/Championship_R4/scripts.pory"
	special RemoveCameraObject
# 70 "data//maps/Championship_R4/scripts.pory"
	setvar VAR_CHAMP_STAGE, 5
# 71 "data//maps/Championship_R4/scripts.pory"
	setflag FLAG_BEAT_R4
# 73 "data//maps/Championship_R4/scripts.pory"
	releaseall
	end


# 27 "data//maps/Championship_R4/scripts.pory"
Championship_R4_Movement_0:
# 27 "data//maps/Championship_R4/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R4/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R4/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R4/scripts.pory"
	walk_up
	step_end

# 28 "data//maps/Championship_R4/scripts.pory"
Championship_R4_Movement_1:
# 28 "data//maps/Championship_R4/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R4/scripts.pory"
	walk_left
# 28 "data//maps/Championship_R4/scripts.pory"
	walk_left
# 28 "data//maps/Championship_R4/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R4/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R4/scripts.pory"
	face_right
	step_end

# 34 "data//maps/Championship_R4/scripts.pory"
Championship_R4_Movement_2:
# 34 "data//maps/Championship_R4/scripts.pory"
	jump_in_place_left
	step_end

# 53 "data//maps/Championship_R4/scripts.pory"
Championship_R4_Movement_3:
# 53 "data//maps/Championship_R4/scripts.pory"
	walk_left
# 53 "data//maps/Championship_R4/scripts.pory"
	walk_down
	step_end

# 56 "data//maps/Championship_R4/scripts.pory"
Championship_R4_Movement_4:
# 56 "data//maps/Championship_R4/scripts.pory"
	walk_left
# 56 "data//maps/Championship_R4/scripts.pory"
	walk_down
# 56 "data//maps/Championship_R4/scripts.pory"
	walk_left
	step_end

# 57 "data//maps/Championship_R4/scripts.pory"
Championship_R4_Movement_5:
# 57 "data//maps/Championship_R4/scripts.pory"
	walk_down
# 57 "data//maps/Championship_R4/scripts.pory"
	walk_left
# 57 "data//maps/Championship_R4/scripts.pory"
	walk_down
	step_end

# 61 "data//maps/Championship_R4/scripts.pory"
Championship_R4_Movement_6:
# 61 "data//maps/Championship_R4/scripts.pory"
	walk_down
	step_end

# 66 "data//maps/Championship_R4/scripts.pory"
Championship_R4_Movement_7:
# 66 "data//maps/Championship_R4/scripts.pory"
	walk_left
# 66 "data//maps/Championship_R4/scripts.pory"
	walk_left
# 66 "data//maps/Championship_R4/scripts.pory"
	walk_down
	step_end

Championship_R4_Text_0:
# 32 "data//maps/Championship_R4/scripts.pory"
	.string "Announcer$"

Championship_R4_Text_1:
# 32 "data//maps/Championship_R4/scripts.pory"
	.string "It's time for the semi-finals!\p"
	.string "Let's hear a huge cheer for the\n"
	.string "trainers! Show your support!$"

Championship_R4_Text_2:
# 35 "data//maps/Championship_R4/scripts.pory"
	.string "Gabrielle$"

Championship_R4_Text_3:
# 35 "data//maps/Championship_R4/scripts.pory"
	.string "This is unexpected...or maybe not.\p"
	.string "You and I have crossed paths so many\n"
	.string "times, I feel like it's almost destiny\l"
	.string "that we're opponents here.$"

Championship_R4_Text_4:
# 37 "data//maps/Championship_R4/scripts.pory"
	.string "Trainers - are you ready?$"

Championship_R4_Text_5:
# 40 "data//maps/Championship_R4/scripts.pory"
	.string "{PLAYER}, we've been through a lot,\n"
	.string "haven't we?\p"
	.string "Not all of it together.\n"
	.string "The first time we teamed up was...\p"
	.string "...Yeah!\p"
	.string "In {COLOR RED}Ancient Cormoria{COLOR DARK_GRAY}, when Moxie and the\n"
	.string "team abandoned me.\p"
	.string "It feels like a lifetime ago...\p"
	.string "{PLAYER} - I'm a different person now.\p"
	.string "After leaving, {COLOR BLUE}Team Somber{COLOR DARK_GRAY}, I've grown\n"
	.string "so much and seen so much!\p"
	.string "It's all because of you.\p"
	.string "No matter who wins today, I'm glad we\n"
	.string "met, {PLAYER}.$"

Championship_R4_Text_6:
# 42 "data//maps/Championship_R4/scripts.pory"
	.string "You're amazing!$"

Championship_R4_Text_7:
# 46 "data//maps/Championship_R4/scripts.pory"
	.string "I've lost to you so many times now...but\n"
	.string "this time, I don't feel too bad.\p"
	.string "I don't know who won the other\n"
	.string "semifinal, but whoever it is - you have\l"
	.string "to promise me that you'll win, okay?\l"
	.string "That way, I can tell everyone I lost to\l"
	.string "the Champion!$"
