# 1 "data//maps/Route2/scripts.pory"

# 2 "data//maps/Route2/scripts.pory"
    .set LOCALID_CLEFAIRY, 3
# 3 "data//maps/Route2/scripts.pory"
    .set LOCALID_CLEFAIRY_FOLLOW, 4

Route2_MapScripts::
# 7 "data//maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route2_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route2_MapScripts_MAP_SCRIPT_ON_RESUME:
# 7 "data//maps/Route2/scripts.pory"
	setstepcallback STEP_CB_ASH
	return


Route2_Clefairy_Trigger0::
# 14 "data//maps/Route2/scripts.pory"
	compare VAR_FENNILAHL_CLEFAIRY_QUEST, 0
	goto_if_eq Route2_Clefairy_Trigger0_1
	end

Route2_Clefairy_Trigger0_1:
# 17 "data//maps/Route2/scripts.pory"
	special SpawnCameraObject
# 18 "data//maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Clefairy_Trigger0_Movement_0
# 19 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 20 "data//maps/Route2/scripts.pory"
	special RemoveCameraObject
# 21 "data//maps/Route2/scripts.pory"
	delay 16
# 24 "data//maps/Route2/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Clefairy_Trigger0_Movement_1
# 25 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 26 "data//maps/Route2/scripts.pory"
	delay 36
# 27 "data//maps/Route2/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Clefairy_Trigger0_Movement_2
# 28 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 29 "data//maps/Route2/scripts.pory"
	delay 36
# 31 "data//maps/Route2/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 32 "data//maps/Route2/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Clefairy_Trigger0_Movement_3
# 33 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 34 "data//maps/Route2/scripts.pory"
	delay 12
# 35 "data//maps/Route2/scripts.pory"
	removeobject LOCALID_CLEFAIRY
# 36 "data//maps/Route2/scripts.pory"
	playse SE_EXIT
# 37 "data//maps/Route2/scripts.pory"
	delay 24
# 39 "data//maps/Route2/scripts.pory"
	setflag FLAG_FENNILAHL_CLEFAIRY_FIRST_SIGHTING
# 40 "data//maps/Route2/scripts.pory"
	setvar VAR_FENNILAHL_CLEFAIRY_QUEST, 1
# 43 "data//maps/Route2/scripts.pory"
	special SpawnCameraObject
# 44 "data//maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Clefairy_Trigger0_Movement_4
# 45 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 46 "data//maps/Route2/scripts.pory"
	special RemoveCameraObject
# 48 "data//maps/Route2/scripts.pory"
	releaseall
	end


# 18 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_0:
# 18 "data//maps/Route2/scripts.pory"
	walk_down
# 18 "data//maps/Route2/scripts.pory"
	walk_down
# 18 "data//maps/Route2/scripts.pory"
	walk_down
# 18 "data//maps/Route2/scripts.pory"
	walk_down
	step_end

# 24 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_1:
# 24 "data//maps/Route2/scripts.pory"
	face_left
	step_end

# 27 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_2:
# 27 "data//maps/Route2/scripts.pory"
	face_right
	step_end

# 32 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_3:
# 32 "data//maps/Route2/scripts.pory"
	jump_in_place_left
# 32 "data//maps/Route2/scripts.pory"
	walk_left
# 32 "data//maps/Route2/scripts.pory"
	walk_left
# 32 "data//maps/Route2/scripts.pory"
	walk_up
	step_end

# 44 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_4:
# 44 "data//maps/Route2/scripts.pory"
	walk_up
# 44 "data//maps/Route2/scripts.pory"
	walk_up
# 44 "data//maps/Route2/scripts.pory"
	walk_up
# 44 "data//maps/Route2/scripts.pory"
	walk_up
	step_end
