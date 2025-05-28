Route6_ZeraoraCave_MapScripts::
	.byte 0


Route6_Zeraora::
# 4 "data//maps/Route6_ZeraoraCave/scripts.pory"
	lockall
# 6 "data//maps/Route6_ZeraoraCave/scripts.pory"
	playmoncry SPECIES_ZERAORA, CRY_MODE_NORMAL
# 7 "data//maps/Route6_ZeraoraCave/scripts.pory"
	applymovement 1, Route6_Zeraora_Movement_0
# 8 "data//maps/Route6_ZeraoraCave/scripts.pory"
	waitmovement 0
# 9 "data//maps/Route6_ZeraoraCave/scripts.pory"
	delay 16
# 10 "data//maps/Route6_ZeraoraCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Zeraora_Movement_1
# 11 "data//maps/Route6_ZeraoraCave/scripts.pory"
	applymovement 1, Route6_Zeraora_Movement_2
# 12 "data//maps/Route6_ZeraoraCave/scripts.pory"
	waitmovement 0
# 13 "data//maps/Route6_ZeraoraCave/scripts.pory"
	delay 16
# 15 "data//maps/Route6_ZeraoraCave/scripts.pory"
	playse SE_EXIT
# 16 "data//maps/Route6_ZeraoraCave/scripts.pory"
	removeobject 1
# 17 "data//maps/Route6_ZeraoraCave/scripts.pory"
	waitse
# 20 "data//maps/Route6_ZeraoraCave/scripts.pory"
	setflag FLAG_ZERAORA
# 21 "data//maps/Route6_ZeraoraCave/scripts.pory"
	special InitRoamer
# 22 "data//maps/Route6_ZeraoraCave/scripts.pory"
	setseenmon SPECIES_ZERAORA
	end


# 7 "data//maps/Route6_ZeraoraCave/scripts.pory"
Route6_Zeraora_Movement_0:
# 7 "data//maps/Route6_ZeraoraCave/scripts.pory"
	emote_exclamation_mark
# 7 "data//maps/Route6_ZeraoraCave/scripts.pory"
	jump_in_place_down
	step_end

# 10 "data//maps/Route6_ZeraoraCave/scripts.pory"
Route6_Zeraora_Movement_1:
# 10 "data//maps/Route6_ZeraoraCave/scripts.pory"
	face_down
	step_end

# 11 "data//maps/Route6_ZeraoraCave/scripts.pory"
Route6_Zeraora_Movement_2:
# 11 "data//maps/Route6_ZeraoraCave/scripts.pory"
	jump_2_down
# 11 "data//maps/Route6_ZeraoraCave/scripts.pory"
	jump_2_down
# 11 "data//maps/Route6_ZeraoraCave/scripts.pory"
	jump_2_down
	step_end
