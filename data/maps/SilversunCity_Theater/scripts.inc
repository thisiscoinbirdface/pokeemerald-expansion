SilversunCiy_Theater_MapScripts::
	.byte 0


SilversunCity_Theater_Leader::
# 12 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_0
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 19 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_0
	return


# 15 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_0:
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	face_right
	step_end

SilversunCity_Theater_Leader_Text_0:
# 19 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: Show me your danse macabre!$"
