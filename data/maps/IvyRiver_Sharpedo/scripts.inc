# 1 "data//maps/IvyRiver_Sharpedo/scripts.pory"

# 2 "data//maps/IvyRiver_Sharpedo/scripts.pory"
    .set LOCALID_SHARPEDO, 1
# 3 "data//maps/IvyRiver_Sharpedo/scripts.pory"
    .set LOCALID_JANIA, 2
# 4 "data//maps/IvyRiver_Sharpedo/scripts.pory"
    .set LOCALID_CLAUNCHER, 3
# 5 "data//maps/IvyRiver_Sharpedo/scripts.pory"
    .set LOCALID_GYARADOS, 4

IvyRiver_Sharpedo_MapScripts::
	.byte 0


IvyRiver_Sharpedo_Jania_Trigger0::
# 13 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	lockall
# 14 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 30
# 15 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_JANIA, IvyRiver_Sharpedo_Jania_Trigger0_Movement_0
# 16 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 17 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger0_Text_0
# 18 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 19 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 8
# 21 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
# 22 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger0_Movement_1
# 23 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 24 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 30
# 26 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_JANIA, IvyRiver_Sharpedo_Jania_Trigger0_Movement_2
# 27 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_CLAUNCHER, IvyRiver_Sharpedo_Jania_Trigger0_Movement_2
# 28 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger0_Movement_2
# 29 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 31 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 16
# 33 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger0_Text_1
# 34 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 36 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Sharpedo_Jania_Trigger0_Movement_3
# 37 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 38 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_JANIA, IvyRiver_Sharpedo_Jania_Trigger0_Movement_4
# 39 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_CLAUNCHER, IvyRiver_Sharpedo_Jania_Trigger0_Movement_4
# 40 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger0_Movement_4
# 41 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 43 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	special SpawnCameraObject
# 44 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger0_Movement_3
# 45 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 46 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger0_Text_2
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger0_Movement_5
# 48 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 49 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 51 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger0_Movement_6
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger0_Text_3
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger0_Movement_7
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 56 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 57 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	special RemoveCameraObject
# 59 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	releaseall
	end


# 15 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger0_Movement_0:
# 15 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	jump_in_place_left
	step_end

# 22 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger0_Movement_1:
# 22 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	jump_in_place_right
	step_end

# 26 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger0_Movement_2:
# 26 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	emote_exclamation_mark
# 26 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	jump_in_place_down
	step_end

# 36 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger0_Movement_3:
# 36 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 36 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
	step_end

# 38 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger0_Movement_4:
# 38 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	face_up
	step_end

# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger0_Movement_5:
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
	step_end

# 51 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger0_Movement_6:
# 51 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 51 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
	step_end

# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger0_Movement_7:
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
	step_end

IvyRiver_Sharpedo_Jania_Trigger0_Text_0:
# 17 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: That should do it, Gyarados. Now\n"
	.string "the Mega Sharpedo can't get out.$"

IvyRiver_Sharpedo_Jania_Trigger0_Text_1:
# 33 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: Who're you? How'd you get here?\n"
	.string "Please leave immediately - a dangerous\l"
	.string "Pokemon is nearby.\p"
	.string "...\p"
	.string "???: You know about the Mega Sharpedo?\n"
	.string "Okay. Be careful nonetheless.\p"
	.string "???: See over there?$"

IvyRiver_Sharpedo_Jania_Trigger0_Text_2:
# 46 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: My Gyarados and I have been\n"
	.string "tracking this Mega Sharpedo for weeks.\l"
	.string "I finally found its hideout and managed\l"
	.string "to trap it in these currents.$"

IvyRiver_Sharpedo_Jania_Trigger0_Text_3:
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: This should keep it trapped while\n"
	.string "it calms down and becomes a regular\l"
	.string "Sharpedo again.$"
