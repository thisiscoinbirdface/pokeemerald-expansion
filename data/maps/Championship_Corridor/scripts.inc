Championship_Corridor_MapScripts::
# 2 "data//maps/Championship_Corridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Championship_Corridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Championship_Corridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/Championship_Corridor/scripts.pory"
	map_script_2 VAR_TEMP_A, 0, Championship_Register
	.2byte 0


Championship_Register::
# 8 "data//maps/Championship_Corridor/scripts.pory"
	lockall
# 10 "data//maps/Championship_Corridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_Register_Movement_0
# 11 "data//maps/Championship_Corridor/scripts.pory"
	waitmovement 0
# 12 "data//maps/Championship_Corridor/scripts.pory"
	applymovement 1, Championship_Register_Movement_1
# 14 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Register_Text_0
# 15 "data//maps/Championship_Corridor/scripts.pory"
	release
# 17 "data//maps/Championship_Corridor/scripts.pory"
	delay 20
# 18 "data//maps/Championship_Corridor/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 19 "data//maps/Championship_Corridor/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 20 "data//maps/Championship_Corridor/scripts.pory"
	delay 40
# 21 "data//maps/Championship_Corridor/scripts.pory"
	setvar VAR_TEMP_A, 1
# 23 "data//maps/Championship_Corridor/scripts.pory"
	special GameClear
# 26 "data//maps/Championship_Corridor/scripts.pory"
	releaseall
	end


# 10 "data//maps/Championship_Corridor/scripts.pory"
Championship_Register_Movement_0:
# 10 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 10 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 10 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 10 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 10 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 10 "data//maps/Championship_Corridor/scripts.pory"
	face_right
	step_end

# 12 "data//maps/Championship_Corridor/scripts.pory"
Championship_Register_Movement_1:
# 12 "data//maps/Championship_Corridor/scripts.pory"
	face_left
	step_end

Championship_Register_Text_0:
# 14 "data//maps/Championship_Corridor/scripts.pory"
	.string "With your defeat to Chara, you have\n"
	.string "been eliminated from the Cormoria\l"
	.string "Pokemon Championship.\p"
	.string "Your final result is: Top 64.\p"
	.string "Congratulations, {PLAYER}!$"
