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
# 58 "data//maps/Championship_R5/scripts.pory"
	special SpawnCameraObject
# 59 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_3, Championship_R5_Text_8
# 61 "data//maps/Championship_R5/scripts.pory"
	applymovement 1, Championship_R5_Movement_4
# 62 "data//maps/Championship_R5/scripts.pory"
	applymovement 2, Championship_R5_Movement_5
# 63 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 65 "data//maps/Championship_R5/scripts.pory"
	applymovement 1, Championship_R5_Movement_6
# 66 "data//maps/Championship_R5/scripts.pory"
	applymovement 2, Championship_R5_Movement_7
# 67 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 68 "data//maps/Championship_R5/scripts.pory"
	removeobject 1
# 70 "data//maps/Championship_R5/scripts.pory"
	applymovement 2, Championship_R5_Movement_8
# 71 "data//maps/Championship_R5/scripts.pory"
	waitmovement 0
# 72 "data//maps/Championship_R5/scripts.pory"
	removeobject 2
# 74 "data//maps/Championship_R5/scripts.pory"
	setvar VAR_CHAMP_STAGE, 6
# 75 "data//maps/Championship_R5/scripts.pory"
	setflag FLAG_BEAT_FINALS
# 78 "data//maps/Championship_R5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_R5_Movement_9
# 79 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_0, Championship_R5_Text_9
# 81 "data//maps/Championship_R5/scripts.pory"
	playse SE_APPLAUSE
# 82 "data//maps/Championship_R5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data//maps/Championship_R5/scripts.pory"
	fadenewbgm MUS_DUMMY
# 87 "data//maps/Championship_R5/scripts.pory"
	setflag FLAG_GAME_CLEAR
# 88 "data//maps/Championship_R5/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 90 "data//maps/Championship_R5/scripts.pory"
	waitse
# 91 "data//maps/Championship_R5/scripts.pory"
	delay 24
# 94 "data//maps/Championship_R5/scripts.pory"
	playse SE_POKENAV_CALL
# 95 "data//maps/Championship_R5/scripts.pory"
	waitse
# 96 "data//maps/Championship_R5/scripts.pory"
	playse SE_CLICK
# 98 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_3, Championship_R5_Text_10
# 99 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_11, Championship_R5_Text_12
# 100 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_3, Championship_R5_Text_13
# 102 "data//maps/Championship_R5/scripts.pory"
	delay 30
# 104 "data//maps/Championship_R5/scripts.pory"
	msgbox_delay Championship_R5_Text_14, Championship_R5_Text_15
# 105 "data//maps/Championship_R5/scripts.pory"
	release
# 107 "data//maps/Championship_R5/scripts.pory"
	delay 30
# 110 "data//maps/Championship_R5/scripts.pory"
	special GameClear
# 113 "data//maps/Championship_R5/scripts.pory"
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

# 62 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_5:
# 62 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 62 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 62 "data//maps/Championship_R5/scripts.pory"
	face_left
	step_end

# 65 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_6:
# 65 "data//maps/Championship_R5/scripts.pory"
	walk_down
# 65 "data//maps/Championship_R5/scripts.pory"
	walk_down
# 65 "data//maps/Championship_R5/scripts.pory"
	walk_down
	step_end

# 66 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_7:
# 66 "data//maps/Championship_R5/scripts.pory"
	walk_left
# 66 "data//maps/Championship_R5/scripts.pory"
	walk_down
# 66 "data//maps/Championship_R5/scripts.pory"
	walk_down
	step_end

# 70 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_8:
# 70 "data//maps/Championship_R5/scripts.pory"
	walk_down
	step_end

# 78 "data//maps/Championship_R5/scripts.pory"
Championship_R5_Movement_9:
# 78 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 78 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 78 "data//maps/Championship_R5/scripts.pory"
	walk_right
# 78 "data//maps/Championship_R5/scripts.pory"
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
	.string "Let's hear a huge cheer for the\n"
	.string "two grand finalists!$"

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
	.string "You were the one who stopped\n"
	.string "Rue and Team Somber.$"

Championship_R5_Text_6:
# 44 "data//maps/Championship_R5/scripts.pory"
	.string "Trainers, to your positions!$"

Championship_R5_Text_7:
# 51 "data//maps/Championship_R5/scripts.pory"
	.string "When I look at you, {PLAYER}, xI see\n"
	.string "everything I don't have.\p"
	.string "Everything I deserve, but don't have.\p"
	.string "But I'm still the Ace Rookie!\n"
	.string "I chased Team Somber as hard as you\l"
	.string "did! Harder! I'm the one who should\l"
	.string "have...I...\p"
	.string "But do you see me now, {PLAYER}?\n"
	.string "In spite of everything, I've reached\l"
	.string "the finals of the Pokemon\l"
	.string "Championship!\p"
	.string "And today, right here, right now...\p"
	.string "...I'm going to get what I deserve!$"

Championship_R5_Text_8:
# 59 "data//maps/Championship_R5/scripts.pory"
	.string "...$"

Championship_R5_Text_9:
# 79 "data//maps/Championship_R5/scripts.pory"
	.string "To everyone watching this show in the\n"
	.string "stands and all across Cormoria...you're\l"
	.string "looking at the new Pokemon Champion!$"

Championship_R5_Text_10:
# 98 "data//maps/Championship_R5/scripts.pory"
	.string "Hello? Who is this?$"

Championship_R5_Text_11:
# 99 "data//maps/Championship_R5/scripts.pory"
	.string "???$"

Championship_R5_Text_12:
# 99 "data//maps/Championship_R5/scripts.pory"
	.string "Hello...enemy of my enemy.$"

Championship_R5_Text_13:
# 100 "data//maps/Championship_R5/scripts.pory"
	.string "Moxie? Melea? How'd you get my number?$"

Championship_R5_Text_14:
# 104 "data//maps/Championship_R5/scripts.pory"
	.string "Rue$"

Championship_R5_Text_15:
# 104 "data//maps/Championship_R5/scripts.pory"
	.string "No...It's Rue.$"
