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
# 30 "data//maps/Championship_R5/scripts.pory"
	delay 16
# 32 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_0, Championship_R5_Text_1
# 33 "data//maps/Championship_R5/scripts.pory"
	playse SE_APPLAUSE
# 34 "data//maps/Championship_R5/scripts.pory"
	waitse
# 35 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_0, Championship_R5_Text_2
# 38 "data//maps/Championship_R5/scripts.pory"
	applymovement 1, Championship_R5_Movement_2
# 39 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_3, Championship_R5_Text_4
# 41 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_0, Championship_R5_Text_5
# 43 "data//maps/Championship_R5/scripts.pory"
	applymovement 1, Championship_R5_Movement_2
# 44 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_3, Championship_R5_Text_6
# 46 "data//maps/Championship_R5/scripts.pory"
	playse SE_APPLAUSE
# 47 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_0, Championship_R5_Text_7
# 49 "data//maps/Championship_R5/scripts.pory"
	applymovement 1, Championship_R5_Movement_3
# 50 "data//maps/Championship_R5/scripts.pory"
	applymovement 2, Championship_R5_Movement_3
# 51 "data//maps/Championship_R5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_R5_Movement_4
# 52 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 54 "data//maps/Championship_R5/scripts.pory"
	fadenewbgm MUS_DUMMY
# 55 "data//maps/Championship_R5/scripts.pory"
	playse SE_APPLAUSE
# 56 "data//maps/Championship_R5/scripts.pory"
	waitse
# 57 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_0, Championship_R5_Text_8
# 59 "data//maps/Championship_R5/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPIONSHIP_E, Championship_R5_Text_9
# 62 "data//maps/Championship_R5/scripts.pory"
	special SpawnCameraObject
# 63 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_3, Championship_R5_Text_10
# 65 "data//maps/Championship_R5/scripts.pory"
	applymovement 1, Championship_R5_Movement_4
# 66 "data//maps/Championship_R5/scripts.pory"
	applymovement 2, Championship_R5_Movement_5
# 67 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 69 "data//maps/Championship_R5/scripts.pory"
	applymovement 1, Championship_R5_Movement_6
# 70 "data//maps/Championship_R5/scripts.pory"
	applymovement 2, Championship_R5_Movement_7
# 71 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 72 "data//maps/Championship_R5/scripts.pory"
	removeobject 1
# 74 "data//maps/Championship_R5/scripts.pory"
	applymovement 2, Championship_R5_Movement_8
# 75 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 76 "data//maps/Championship_R5/scripts.pory"
	removeobject 2
# 78 "data//maps/Championship_R5/scripts.pory"
	setvar VAR_CHAMP_STAGE, 6
# 79 "data//maps/Championship_R5/scripts.pory"
	setflag FLAG_BEAT_FINALS
# 82 "data//maps/Championship_R5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_R5_Movement_9
# 83 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_0, Championship_R5_Text_11
# 85 "data//maps/Championship_R5/scripts.pory"
	playse SE_APPLAUSE
# 86 "data//maps/Championship_R5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 87 "data//maps/Championship_R5/scripts.pory"
	special GameClear
# 89 "data//maps/Championship_R5/scripts.pory"
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

# 49 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_3:
# 49 "data//maps/Championship_R5/scripts.pory"
	walk_left
# 49 "data//maps/Championship_R5/scripts.pory"
	walk_left
	step_end

# 51 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_4:
# 51 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 51 "data//maps/Championship_R5/scripts.pory"
	walk_right
	step_end

# 66 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_5:
# 66 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 66 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 66 "data//maps/Championship_R5/scripts.pory"
	face_left
	step_end

# 69 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_6:
# 69 "data//maps/Championship_R5/scripts.pory"
	walk_down
# 69 "data//maps/Championship_R5/scripts.pory"
	walk_down
# 69 "data//maps/Championship_R5/scripts.pory"
	walk_down
	step_end

# 70 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_7:
# 70 "data//maps/Championship_R5/scripts.pory"
	walk_left
# 70 "data//maps/Championship_R5/scripts.pory"
	walk_down
# 70 "data//maps/Championship_R5/scripts.pory"
	walk_down
	step_end

# 74 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_8:
# 74 "data//maps/Championship_R5/scripts.pory"
	walk_down
	step_end

# 82 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_9:
# 82 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 82 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 82 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 82 "data//maps/Championship_R5/scripts.pory"
	face_down
	step_end

Championship_R5_Text_0:
# 32 "data//maps/Championship_R5/scripts.pory"
	.string "Announcer$"

Championship_R5_Text_1:
# 32 "data//maps/Championship_R5/scripts.pory"
	.string "This is it, everyone!\p"
	.string "After countless tough battles, we're\n"
	.string "finally here with the two strongest\l"
	.string "trainers in all of Cormoria!\p"
	.string "Let's hear a huge cheer for the grand\n"
	.string "finalists!$"

Championship_R5_Text_2:
# 35 "data//maps/Championship_R5/scripts.pory"
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
	.string "It had to be you, {PLAYER}.\p"
	.string "Poetic.$"

Championship_R5_Text_5:
# 41 "data//maps/Championship_R5/scripts.pory"
	.string "Trainers - are you ready?$"

Championship_R5_Text_6:
# 44 "data//maps/Championship_R5/scripts.pory"
	.string "What?\p"
	.string "Why did I take you off the case?\p"
	.string "Why did I leave you alone with Moxie and\n"
	.string "Melea back at the island?\p"
	.string "Because I hate you, {PLAYER}.\p"
	.string "I resent you. I despise you.\p"
	.string "And I will never ever let you upstage me\n"
	.string "again, {PLAYER}!$"

Championship_R5_Text_7:
# 47 "data//maps/Championship_R5/scripts.pory"
	.string "Trainers, at position!$"

Championship_R5_Text_8:
# 57 "data//maps/Championship_R5/scripts.pory"
	.string "3...\p"
	.string "2...\p"
	.string "1...\p"
	.string "Battle!$"

Championship_R5_Text_9:
# 59 "data//maps/Championship_R5/scripts.pory"
	.string "Argh! No!$"

Championship_R5_Text_10:
# 63 "data//maps/Championship_R5/scripts.pory"
	.string "...$"

Championship_R5_Text_11:
# 83 "data//maps/Championship_R5/scripts.pory"
	.string "To everyone watching this show in the\n"
	.string "stands and all across Cormoria...you're\l"
	.string "looking at the new Pokemon Champion!$"
