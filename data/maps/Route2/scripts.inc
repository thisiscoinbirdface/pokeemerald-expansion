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
	setvar VAR_FENNILAHL_CLEFAIRY_QUEST, 1
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


Route2_Clefairy_Trigger1::
# 50 "data//maps/Route2/scripts.pory"
	compare VAR_FENNILAHL_CLEFAIRY_QUEST, 3
	goto_if_eq Route2_Clefairy_Trigger1_1
	end

Route2_Clefairy_Trigger1_1:
# 52 "data//maps/Route2/scripts.pory"
	lockall
# 53 "data//maps/Route2/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 56 "data//maps/Route2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 57 "data//maps/Route2/scripts.pory"
	special SpawnCameraObject
# 58 "data//maps/Route2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 7, 24
# 59 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 60 "data//maps/Route2/scripts.pory"
	special RemoveCameraObject
# 61 "data//maps/Route2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 63 "data//maps/Route2/scripts.pory"
	delay 20
# 67 "data//maps/Route2/scripts.pory"
	setobjectxyperm LOCALID_CLEFAIRY_FOLLOW, 6, 24
# 68 "data//maps/Route2/scripts.pory"
	addobject LOCALID_CLEFAIRY_FOLLOW
# 69 "data//maps/Route2/scripts.pory"
	delay 16
# 71 "data//maps/Route2/scripts.pory"
	applymovement LOCALID_CLEFAIRY_FOLLOW, Route2_Clefairy_Trigger1_Movement_0
# 72 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 74 "data//maps/Route2/scripts.pory"
	removeobject LOCALID_CLEFAIRY_FOLLOW
# 77 "data//maps/Route2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data//maps/Route2/scripts.pory"
	special SpawnCameraObject
# 79 "data//maps/Route2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, VAR_TEMP_2, VAR_TEMP_3
# 80 "data//maps/Route2/scripts.pory"
	waitmovement 0
# 81 "data//maps/Route2/scripts.pory"
	special RemoveCameraObject
# 82 "data//maps/Route2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 85 "data//maps/Route2/scripts.pory"
	setvar VAR_FENNILAHL_CLEFAIRY_QUEST, 4
# 87 "data//maps/Route2/scripts.pory"
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

# 71 "data//maps/Route2/scripts.pory"
Route2_Clefairy_Trigger1_Movement_0:
# 71 "data//maps/Route2/scripts.pory"
	walk_down
# 71 "data//maps/Route2/scripts.pory"
	walk_right
# 71 "data//maps/Route2/scripts.pory"
	walk_right
# 71 "data//maps/Route2/scripts.pory"
	walk_right
# 71 "data//maps/Route2/scripts.pory"
	walk_up
# 71 "data//maps/Route2/scripts.pory"
	walk_up
# 71 "data//maps/Route2/scripts.pory"
	walk_up
# 71 "data//maps/Route2/scripts.pory"
	walk_up
# 71 "data//maps/Route2/scripts.pory"
	walk_up
# 71 "data//maps/Route2/scripts.pory"
	walk_up
# 71 "data//maps/Route2/scripts.pory"
	walk_up
# 71 "data//maps/Route2/scripts.pory"
	walk_up
	step_end
