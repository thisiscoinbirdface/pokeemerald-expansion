Championship_R2_MapScripts::
# 2 "data//maps/Championship_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Championship_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data//maps/Championship_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Championship_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Championship_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data//maps/Championship_R2/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Championship_R2_OnWarp
	.2byte 0

Championship_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data//maps/Championship_R2/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Championship_R2
	.2byte 0


Championship_R2_OnWarp::
# 12 "data//maps/Championship_R2/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


Championship_R2::
# 16 "data//maps/Championship_R2/scripts.pory"
	lockall
# 19 "data//maps/Championship_R2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data//maps/Championship_R2/scripts.pory"
	setdynamicwarp MAP_CHAMPIONSHIP_R2_LOBBY, 4, 13
# 23 "data//maps/Championship_R2/scripts.pory"
	special SpawnCameraObject
# 25 "data//maps/Championship_R2/scripts.pory"
	setrespawn HEAL_LOCATION_CHAMPIONSHIP_CORRIDOR
# 27 "data//maps/Championship_R2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Championship_R2_Movement_0
# 28 "data//maps/Championship_R2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_R2_Movement_1
# 29 "data//maps/Championship_R2/scripts.pory"
	waitmovement 0
# 30 "data//maps/Championship_R2/scripts.pory"
	delay 16
# 32 "data//maps/Championship_R2/scripts.pory"
	msgbox_delay Championship_R2_Text_0, Championship_R2_Text_1
# 34 "data//maps/Championship_R2/scripts.pory"
	delay 24
# 36 "data//maps/Championship_R2/scripts.pory"
	applymovement 1, Championship_R2_Movement_2
# 37 "data//maps/Championship_R2/scripts.pory"
	msgbox_delay Championship_R2_Text_2, Championship_R2_Text_3
# 39 "data//maps/Championship_R2/scripts.pory"
	msgbox_delay Championship_R2_Text_0, Championship_R2_Text_4
# 41 "data//maps/Championship_R2/scripts.pory"
	applymovement 1, Championship_R2_Movement_2
# 42 "data//maps/Championship_R2/scripts.pory"
	msgbox_delay Championship_R2_Text_2, Championship_R2_Text_5
# 44 "data//maps/Championship_R2/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPIONSHIP_B, Championship_R2_Text_6
# 47 "data//maps/Championship_R2/scripts.pory"
	applymovement 1, Championship_R2_Movement_2
# 48 "data//maps/Championship_R2/scripts.pory"
	msgbox_delay Championship_R2_Text_2, Championship_R2_Text_7
# 50 "data//maps/Championship_R2/scripts.pory"
	playmoncry SPECIES_PINSIR, CRY_MODE_NORMAL
# 51 "data//maps/Championship_R2/scripts.pory"
	applymovement 2, Championship_R2_Movement_2
# 52 "data//maps/Championship_R2/scripts.pory"
	waitmovement 0
# 53 "data//maps/Championship_R2/scripts.pory"
	delay 24
# 55 "data//maps/Championship_R2/scripts.pory"
	applymovement 1, Championship_R2_Movement_3
# 56 "data//maps/Championship_R2/scripts.pory"
	waitmovement 0
# 58 "data//maps/Championship_R2/scripts.pory"
	applymovement 2, Championship_R2_Movement_4
# 59 "data//maps/Championship_R2/scripts.pory"
	applymovement 1, Championship_R2_Movement_5
# 60 "data//maps/Championship_R2/scripts.pory"
	waitmovement 0
# 61 "data//maps/Championship_R2/scripts.pory"
	removeobject 1
# 63 "data//maps/Championship_R2/scripts.pory"
	applymovement 2, Championship_R2_Movement_4
# 64 "data//maps/Championship_R2/scripts.pory"
	waitmovement 0
# 65 "data//maps/Championship_R2/scripts.pory"
	removeobject 2
# 67 "data//maps/Championship_R2/scripts.pory"
	setvar VAR_CHAMP_STAGE, 3
# 68 "data//maps/Championship_R2/scripts.pory"
	setflag FLAG_BEAT_R1
# 70 "data//maps/Championship_R2/scripts.pory"
	releaseall
	end


# 27 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_0:
# 27 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R2/scripts.pory"
	walk_up
	step_end

# 28 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_1:
# 28 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R2/scripts.pory"
	walk_left
# 28 "data//maps/Championship_R2/scripts.pory"
	walk_left
# 28 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 28 "data//maps/Championship_R2/scripts.pory"
	face_right
	step_end

# 36 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_2:
# 36 "data//maps/Championship_R2/scripts.pory"
	jump_in_place_left
	step_end

# 55 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_3:
# 55 "data//maps/Championship_R2/scripts.pory"
	walk_left
# 55 "data//maps/Championship_R2/scripts.pory"
	walk_down
	step_end

# 58 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_4:
# 58 "data//maps/Championship_R2/scripts.pory"
	walk_left
# 58 "data//maps/Championship_R2/scripts.pory"
	walk_down
# 58 "data//maps/Championship_R2/scripts.pory"
	walk_left
	step_end

# 59 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_5:
# 59 "data//maps/Championship_R2/scripts.pory"
	walk_down
# 59 "data//maps/Championship_R2/scripts.pory"
	walk_left
# 59 "data//maps/Championship_R2/scripts.pory"
	walk_down
	step_end

Championship_R2_Text_0:
# 32 "data//maps/Championship_R2/scripts.pory"
	.string "Announcer$"

Championship_R2_Text_1:
# 32 "data//maps/Championship_R2/scripts.pory"
	.string "We're back with the round of 16 in the\n"
	.string "Cormoria Pokemon Championship!\p"
	.string "Let's hear a huge cheer for the\n"
	.string "trainers! Show your support!\p"
	.string "The previous round featured some\n"
	.string "explosive matches, with crowd\l"
	.string "favourite Kohla bulldozing...$"

Championship_R2_Text_2:
# 37 "data//maps/Championship_R2/scripts.pory"
	.string "Stanja$"

Championship_R2_Text_3:
# 37 "data//maps/Championship_R2/scripts.pory"
	.string "How pointless - praising an early\n"
	.string "victory when the only thing that\l"
	.string "matters is who finishes as the\l"
	.string "Champion!$"

Championship_R2_Text_4:
# 39 "data//maps/Championship_R2/scripts.pory"
	.string "Trainers - are you ready?$"

Championship_R2_Text_5:
# 42 "data//maps/Championship_R2/scripts.pory"
	.string "I'm Stanja, the ultimate Bug Maniac!\p"
	.string "My goal was to become a Gym Leader, but\n"
	.string "then do you know what happened?\p"
	.string "I beat them all! And then I realised I've\n"
	.string "got what it takes to become the\l"
	.string "Champion.\p"
	.string "I know you. I've lost to you before - in\n"
	.string "Vilethorn Woods.\p"
	.string "But this battle is different. Thes\n"
	.string "stakes are different.\p"
	.string "I'M different!$"

Championship_R2_Text_6:
# 44 "data//maps/Championship_R2/scripts.pory"
	.string "I was so close!$"

Championship_R2_Text_7:
# 48 "data//maps/Championship_R2/scripts.pory"
	.string "Fine. Fine! FINE!\p"
	.string "I know when I'm beat.\n"
	.string "You were the better trainer.\p"
	.string "I've beaten countless trainers with my\n"
	.string "Pinsir, but this time, we couldn't pull\l"
	.string "through.\p"
	.string "I guess this is the caliber of the\n"
	.string "Pokemon Championship...\p"
	.string "Good luck, {PLAYER}. You're tough -\n"
	.string "I'm rooting for you!$"
