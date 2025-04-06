# 1 "data//maps/Route2/scripts.pory"

# 2 "data//maps/Route2/scripts.pory"
    .set LOCALID_CLEFAIRY, 4

Route2_MapScripts::
	.byte 0


Route2_Clefairy_Trigger0::
# 10 "data//maps/Route2/scripts.pory"
	goto_if_set FLAG_FENNILAHL_CLEFAIRY_FIRST_SIGHTING, Route2_Clefairy_Trigger0_2
# 11 "data//maps/Route2/scripts.pory"
	lockall
# 14 "data//maps/Route2/scripts.pory"
	special SpawnCameraObject
# 15 "data//maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Clefairy_Trigger0_Movement_0
# 16 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 17 "data//maps/Route2/scripts.pory"
	special RemoveCameraObject
# 20 "data//maps/Route2/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Clefairy_Trigger0_Movement_1
# 21 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 22 "data//maps/Route2/scripts.pory"
	delay 36
# 23 "data//maps/Route2/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Clefairy_Trigger0_Movement_2
# 24 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 25 "data//maps/Route2/scripts.pory"
	delay 36
# 26 "data//maps/Route2/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Clefairy_Trigger0_Movement_3
# 27 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 28 "data//maps/Route2/scripts.pory"
	delay 12
# 29 "data//maps/Route2/scripts.pory"
	removeobject LOCALID_CLEFAIRY
# 30 "data//maps/Route2/scripts.pory"
	delay 24
# 32 "data//maps/Route2/scripts.pory"
	setflag FLAG_FENNILAHL_CLEFAIRY_FIRST_SIGHTING
# 35 "data//maps/Route2/scripts.pory"
	special SpawnCameraObject
# 36 "data//maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Clefairy_Trigger0_Movement_4
# 37 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 38 "data//maps/Route2/scripts.pory"
	special RemoveCameraObject
# 40 "data//maps/Route2/scripts.pory"
	releaseall
	end

Route2_Clefairy_Trigger0_2:
	end


Route2_Clefairy_Trigger1::
	return


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

# 20 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_1:
# 20 "data//maps/Route2/scripts.pory"
	face_left
	step_end

# 23 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_2:
# 23 "data//maps/Route2/scripts.pory"
	face_right
	step_end

# 26 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_3:
# 26 "data//maps/Route2/scripts.pory"
	walk_left
# 26 "data//maps/Route2/scripts.pory"
	walk_left
# 26 "data//maps/Route2/scripts.pory"
	walk_up
	step_end

# 36 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_4:
# 36 "data//maps/Route2/scripts.pory"
	walk_up
# 36 "data//maps/Route2/scripts.pory"
	walk_up
# 36 "data//maps/Route2/scripts.pory"
	walk_up
# 36 "data//maps/Route2/scripts.pory"
	walk_up
	step_end
