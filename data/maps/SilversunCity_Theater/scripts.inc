SilversunCity_Theater_MapScripts::
	.byte 0


SilversunCity_Theater_Leader::
# 12 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 13 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_0
# 17 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 20 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_0
# 21 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 24 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end


# 16 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_0:
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	face_right
	step_end

SilversunCity_Theater_Leader_Text_0:
# 20 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: Now, {PLAYER}, enthrall me\n"
	.string "with your danse macabre!$"
