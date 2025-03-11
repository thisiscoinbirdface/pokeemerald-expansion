# 1 "data//maps/GalecrestCity/scripts.pory"

# 2 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_GAB, 17
# 3 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_DET1, 24
# 4 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_DET2, 25
# 5 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_RUE, 26

GalecrestCity_MapScripts::
# 9 "data//maps/GalecrestCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GalecrestCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GalecrestCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data//maps/GalecrestCity/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, GalecrestCity_OnFrame
	.2byte 0


GalecrestCity_OnFrame::
# 40 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POST_ANCIENT, GalecrestCity_OnFrame_2
# 44 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 45 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_OnFrame_Movement_0
# 46 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 47 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_OnFrame_Text_0
# 48 "data//maps/GalecrestCity/scripts.pory"
	release
# 51 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 52 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_GAB
# 53 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 63 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_POST_ANCIENT
# 64 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_OnFrame_2:
	end


# 45 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_OnFrame_Movement_0:
# 45 "data//maps/GalecrestCity/scripts.pory"
	face_right
	step_end

GalecrestCity_OnFrame_Text_0:
# 47 "data//maps/GalecrestCity/scripts.pory"
	.string "GABRIELLE: I've never been so happy to\n"
	.string "see a city before! This must be\l"
	.string "GALECREST CITY.\p"
	.string "...\p"
	.string "{PLAYER}, we're still enemies! But you\n"
	.string "saved me. I owe you one.\p"
	.string "...\p"
	.string "T-thanks. Bye.\p"
	.string "$"
