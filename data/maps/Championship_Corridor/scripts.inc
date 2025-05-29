Championship_Corridor_MapScripts::
# 2 "data//maps/Championship_Corridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Championship_Corridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Championship_Corridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/Championship_Corridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Championship_Register
	.2byte 0


Championship_Register::
# 8 "data//maps/Championship_Corridor/scripts.pory"
	lockall
# 9 "data//maps/Championship_Corridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 11 "data//maps/Championship_Corridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_Register_Movement_0
# 12 "data//maps/Championship_Corridor/scripts.pory"
	waitmovement 0
# 14 "data//maps/Championship_Corridor/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 15 "data//maps/Championship_Corridor/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 16 "data//maps/Championship_Corridor/scripts.pory"
	special GameClear
# 18 "data//maps/Championship_Corridor/scripts.pory"
	releaseall
	end


# 11 "data//maps/Championship_Corridor/scripts.pory"
Championship_Register_Movement_0:
# 11 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 11 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 11 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 11 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 11 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
	step_end
