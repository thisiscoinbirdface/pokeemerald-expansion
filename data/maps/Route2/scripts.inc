# 1 "data//maps/Route2/scripts.pory"

# 2 "data//maps/Route2/scripts.pory"
    .set LOCALID_CLEFAIRY, 3
# 3 "data//maps/Route2/scripts.pory"
    .set LOCALID_CLEFAIRY_FOLLOW, 4

Route2_MapScripts::
	.byte 0


Route2_Clefairy_Trigger0::
# 11 "data//maps/Route2/scripts.pory"
	compare VAR_FENNILAHL_CLEFAIRY_QUEST, 0
	goto_if_eq Route2_Clefairy_Trigger0_1
	end

Route2_Clefairy_Trigger0_1:
# 14 "data//maps/Route2/scripts.pory"
	special SpawnCameraObject
# 15 "data//maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Clefairy_Trigger0_Movement_0
# 16 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 17 "data//maps/Route2/scripts.pory"
	special RemoveCameraObject
# 18 "data//maps/Route2/scripts.pory"
	delay 16
# 21 "data//maps/Route2/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Clefairy_Trigger0_Movement_1
# 22 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 23 "data//maps/Route2/scripts.pory"
	delay 36
# 24 "data//maps/Route2/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Clefairy_Trigger0_Movement_2
# 25 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 26 "data//maps/Route2/scripts.pory"
	delay 36
# 28 "data//maps/Route2/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 29 "data//maps/Route2/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Clefairy_Trigger0_Movement_3
# 30 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 31 "data//maps/Route2/scripts.pory"
	delay 12
# 32 "data//maps/Route2/scripts.pory"
	removeobject LOCALID_CLEFAIRY
# 33 "data//maps/Route2/scripts.pory"
	playse SE_EXIT
# 34 "data//maps/Route2/scripts.pory"
	delay 24
# 36 "data//maps/Route2/scripts.pory"
	setflag FLAG_FENNILAHL_CLEFAIRY_FIRST_SIGHTING
# 37 "data//maps/Route2/scripts.pory"
	setvar VAR_FENNILAHL_CLEFAIRY_QUEST, 1
# 40 "data//maps/Route2/scripts.pory"
	special SpawnCameraObject
# 41 "data//maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Clefairy_Trigger0_Movement_4
# 42 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 43 "data//maps/Route2/scripts.pory"
	special RemoveCameraObject
# 45 "data//maps/Route2/scripts.pory"
	releaseall
	end


# 15 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_0:
# 15 "data//maps/Route2/scripts.pory"
	walk_down
# 15 "data//maps/Route2/scripts.pory"
	walk_down
# 15 "data//maps/Route2/scripts.pory"
	walk_down
# 15 "data//maps/Route2/scripts.pory"
	walk_down
	step_end

# 21 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_1:
# 21 "data//maps/Route2/scripts.pory"
	face_left
	step_end

# 24 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_2:
# 24 "data//maps/Route2/scripts.pory"
	face_right
	step_end

# 29 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_3:
# 29 "data//maps/Route2/scripts.pory"
	jump_in_place_left
# 29 "data//maps/Route2/scripts.pory"
	walk_left
# 29 "data//maps/Route2/scripts.pory"
	walk_left
# 29 "data//maps/Route2/scripts.pory"
	walk_up
	step_end

# 41 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_4:
# 41 "data//maps/Route2/scripts.pory"
	walk_up
# 41 "data//maps/Route2/scripts.pory"
	walk_up
# 41 "data//maps/Route2/scripts.pory"
	walk_up
# 41 "data//maps/Route2/scripts.pory"
	walk_up
	step_end
