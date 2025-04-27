# 1 "data//maps/Route2/scripts.pory"

# 2 "data//maps/Route2/scripts.pory"
    .set LOCALID_CLEFAIRY, 4
# 3 "data//maps/Route2/scripts.pory"
    .set LOCALID_CLEFAIRY_FOLLOW, 5

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
# 27 "data//maps/Route2/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Clefairy_Trigger0_Movement_3
# 28 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 29 "data//maps/Route2/scripts.pory"
	delay 12
# 30 "data//maps/Route2/scripts.pory"
	removeobject LOCALID_CLEFAIRY
# 31 "data//maps/Route2/scripts.pory"
	playse SE_EXIT
# 32 "data//maps/Route2/scripts.pory"
	delay 24
# 34 "data//maps/Route2/scripts.pory"
	setvar VAR_FENNILAHL_CLEFAIRY_QUEST, 1
# 37 "data//maps/Route2/scripts.pory"
	special SpawnCameraObject
# 38 "data//maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Clefairy_Trigger0_Movement_4
# 39 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 40 "data//maps/Route2/scripts.pory"
	special RemoveCameraObject
# 42 "data//maps/Route2/scripts.pory"
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

# 27 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_3:
# 27 "data//maps/Route2/scripts.pory"
	walk_left
# 27 "data//maps/Route2/scripts.pory"
	walk_left
# 27 "data//maps/Route2/scripts.pory"
	walk_up
	step_end

# 38 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger0_Movement_4:
# 38 "data//maps/Route2/scripts.pory"
	walk_up
# 38 "data//maps/Route2/scripts.pory"
	walk_up
# 38 "data//maps/Route2/scripts.pory"
	walk_up
# 38 "data//maps/Route2/scripts.pory"
	walk_up
	step_end
