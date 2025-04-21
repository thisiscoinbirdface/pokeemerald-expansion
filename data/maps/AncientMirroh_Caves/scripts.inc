AncientMirroh_Caves_MapScripts::
# 2 "data//maps/AncientMirroh_Caves/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientMirroh_Caves_1F_SetHoleWarp
	.byte 0


AncientMirroh_Caves_1F_SetHoleWarp::
# 6 "data//maps/AncientMirroh_Caves/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 7 "data//maps/AncientMirroh_Caves/scripts.pory"
	setholewarp MAP_ANCIENT_MIRROH_CAVES_B1F
	end


AncientMirroh_Tenebris_Caves_Trigger::
# 13 "data//maps/AncientMirroh_Caves/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_PROF_TENEBRIS_INSIDE, AncientMirroh_Tenebris_Caves_Trigger_2
# 15 "data//maps/AncientMirroh_Caves/scripts.pory"
	lockall
# 16 "data//maps/AncientMirroh_Caves/scripts.pory"
	special SpawnCameraObject
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tenebris_Caves_Trigger_Movement_0
# 18 "data//maps/AncientMirroh_Caves/scripts.pory"
	waitmovement 0
# 19 "data//maps/AncientMirroh_Caves/scripts.pory"
	special RemoveCameraObject
# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
	applymovement 2, AncientMirroh_Tenebris_Caves_Trigger_Movement_1
# 22 "data//maps/AncientMirroh_Caves/scripts.pory"
	waitmovement 0
# 24 "data//maps/AncientMirroh_Caves/scripts.pory"
	removeobject 2
# 26 "data//maps/AncientMirroh_Caves/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_PROF_TENEBRIS_INSIDE
# 28 "data//maps/AncientMirroh_Caves/scripts.pory"
	special SpawnCameraObject
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tenebris_Caves_Trigger_Movement_2
# 30 "data//maps/AncientMirroh_Caves/scripts.pory"
	waitmovement 0
# 31 "data//maps/AncientMirroh_Caves/scripts.pory"
	special RemoveCameraObject
# 33 "data//maps/AncientMirroh_Caves/scripts.pory"
	releaseall
	end

AncientMirroh_Tenebris_Caves_Trigger_2:
	end


# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
AncientMirroh_Tenebris_Caves_Trigger_Movement_0:
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
	step_end

# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
AncientMirroh_Tenebris_Caves_Trigger_Movement_1:
# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
	step_end

# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
AncientMirroh_Tenebris_Caves_Trigger_Movement_2:
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_up
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_up
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_up
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_up
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_up
	step_end
