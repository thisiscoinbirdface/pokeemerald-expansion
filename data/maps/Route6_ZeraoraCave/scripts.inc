Route6_ZeraoraCave_MapScripts::
# 2 "data//maps/Route6_ZeraoraCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route6_ZeraoraCave_SetHoleWarp
	.byte 0


Route6_ZeraoraCave_SetHoleWarp::
# 6 "data//maps/Route6_ZeraoraCave/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 7 "data//maps/Route6_ZeraoraCave/scripts.pory"
	setholewarp MAP_ROUTE6_ZERAORA_CAVE_B1F
	end


Route6_Zeraora::
# 12 "data//maps/Route6_ZeraoraCave/scripts.pory"
	lockall
# 14 "data//maps/Route6_ZeraoraCave/scripts.pory"
	playmoncry SPECIES_ZERAORA, CRY_MODE_NORMAL
# 15 "data//maps/Route6_ZeraoraCave/scripts.pory"
	applymovement 1, Route6_Zeraora_Movement_0
# 16 "data//maps/Route6_ZeraoraCave/scripts.pory"
	waitmovement 0
# 17 "data//maps/Route6_ZeraoraCave/scripts.pory"
	delay 16
# 18 "data//maps/Route6_ZeraoraCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Zeraora_Movement_1
# 19 "data//maps/Route6_ZeraoraCave/scripts.pory"
	applymovement 1, Route6_Zeraora_Movement_2
# 20 "data//maps/Route6_ZeraoraCave/scripts.pory"
	waitmovement 0
# 21 "data//maps/Route6_ZeraoraCave/scripts.pory"
	delay 16
# 23 "data//maps/Route6_ZeraoraCave/scripts.pory"
	playse SE_EXIT
# 24 "data//maps/Route6_ZeraoraCave/scripts.pory"
	removeobject 1
# 25 "data//maps/Route6_ZeraoraCave/scripts.pory"
	waitse
# 28 "data//maps/Route6_ZeraoraCave/scripts.pory"
	setflag FLAG_ZERAORA
# 29 "data//maps/Route6_ZeraoraCave/scripts.pory"
	special InitRoamer
# 30 "data//maps/Route6_ZeraoraCave/scripts.pory"
	setseenmon SPECIES_ZERAORA
	end


# 15 "data//maps/Route6_ZeraoraCave/scripts.pory"
Route6_Zeraora_Movement_0:
# 15 "data//maps/Route6_ZeraoraCave/scripts.pory"
	emote_exclamation_mark
# 15 "data//maps/Route6_ZeraoraCave/scripts.pory"
	jump_in_place_down
	step_end

# 18 "data//maps/Route6_ZeraoraCave/scripts.pory"
Route6_Zeraora_Movement_1:
# 18 "data//maps/Route6_ZeraoraCave/scripts.pory"
	face_down
	step_end

# 19 "data//maps/Route6_ZeraoraCave/scripts.pory"
Route6_Zeraora_Movement_2:
# 19 "data//maps/Route6_ZeraoraCave/scripts.pory"
	jump_2_down
# 19 "data//maps/Route6_ZeraoraCave/scripts.pory"
	jump_2_down
# 19 "data//maps/Route6_ZeraoraCave/scripts.pory"
	jump_2_down
	step_end
