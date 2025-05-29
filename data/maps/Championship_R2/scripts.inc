Championship_R2_MapScripts::
# 2 "data//maps/Championship_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Championship_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data//maps/Championship_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Championship_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Championship_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data//maps/Championship_R2/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Championship_R2_OnWarp
	.2byte 0

Championship_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data//maps/Championship_R2/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Championship_R2
	.2byte 0


Championship_R2_OnWarp::
# 12 "data//maps/Championship_R2/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


Championship_R2::
# 16 "data//maps/Championship_R2/scripts.pory"
	lockall
# 17 "data//maps/Championship_R2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 19 "data//maps/Championship_R2/scripts.pory"
	special SpawnCameraObject
# 21 "data//maps/Championship_R2/scripts.pory"
	setrespawn HEAL_LOCATION_CHAMPIONSHIP_CORRIDOR
# 23 "data//maps/Championship_R2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Championship_R2_Movement_0
# 24 "data//maps/Championship_R2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_R2_Movement_1
# 25 "data//maps/Championship_R2/scripts.pory"
	waitmovement 0
# 26 "data//maps/Championship_R2/scripts.pory"
	delay 16
# 28 "data//maps/Championship_R2/scripts.pory"
	msgbox_delay Championship_R2_Text_0, Championship_R2_Text_1
# 30 "data//maps/Championship_R2/scripts.pory"
	delay 24
# 32 "data//maps/Championship_R2/scripts.pory"
	applymovement 1, Championship_R2_Movement_2
# 33 "data//maps/Championship_R2/scripts.pory"
	msgbox_delay Championship_R2_Text_2, Championship_R2_Text_3
# 35 "data//maps/Championship_R2/scripts.pory"
	msgbox_delay Championship_R2_Text_0, Championship_R2_Text_4
# 37 "data//maps/Championship_R2/scripts.pory"
	applymovement 1, Championship_R2_Movement_2
# 38 "data//maps/Championship_R2/scripts.pory"
	msgbox_delay Championship_R2_Text_2, Championship_R2_Text_5
# 40 "data//maps/Championship_R2/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPIONSHIP_B, Championship_R2_Text_6
# 43 "data//maps/Championship_R2/scripts.pory"
	applymovement 1, Championship_R2_Movement_2
# 44 "data//maps/Championship_R2/scripts.pory"
	msgbox_delay Championship_R2_Text_2, Championship_R2_Text_7
# 46 "data//maps/Championship_R2/scripts.pory"
	playmoncry SPECIES_ALTARIA, CRY_MODE_NORMAL
# 47 "data//maps/Championship_R2/scripts.pory"
	applymovement 2, Championship_R2_Movement_2
# 48 "data//maps/Championship_R2/scripts.pory"
	waitmovement 0
# 49 "data//maps/Championship_R2/scripts.pory"
	delay 24
# 51 "data//maps/Championship_R2/scripts.pory"
	applymovement 1, Championship_R2_Movement_3
# 52 "data//maps/Championship_R2/scripts.pory"
	waitmovement 0
# 54 "data//maps/Championship_R2/scripts.pory"
	applymovement 2, Championship_R2_Movement_4
# 55 "data//maps/Championship_R2/scripts.pory"
	applymovement 1, Championship_R2_Movement_5
# 56 "data//maps/Championship_R2/scripts.pory"
	waitmovement 0
# 57 "data//maps/Championship_R2/scripts.pory"
	removeobject 1
# 59 "data//maps/Championship_R2/scripts.pory"
	applymovement 2, Championship_R2_Movement_4
# 60 "data//maps/Championship_R2/scripts.pory"
	waitmovement 0
# 61 "data//maps/Championship_R2/scripts.pory"
	removeobject 2
# 63 "data//maps/Championship_R2/scripts.pory"
	setflag FLAG_BEAT_R1
# 65 "data//maps/Championship_R2/scripts.pory"
	releaseall
	end


# 23 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_0:
# 23 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 23 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 23 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 23 "data//maps/Championship_R2/scripts.pory"
	walk_up
	step_end

# 24 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_1:
# 24 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 24 "data//maps/Championship_R2/scripts.pory"
	walk_left
# 24 "data//maps/Championship_R2/scripts.pory"
	walk_left
# 24 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 24 "data//maps/Championship_R2/scripts.pory"
	walk_up
# 24 "data//maps/Championship_R2/scripts.pory"
	face_right
	step_end

# 32 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_2:
# 32 "data//maps/Championship_R2/scripts.pory"
	jump_in_place_left
	step_end

# 51 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_3:
# 51 "data//maps/Championship_R2/scripts.pory"
	walk_left
# 51 "data//maps/Championship_R2/scripts.pory"
	walk_down
	step_end

# 54 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_4:
# 54 "data//maps/Championship_R2/scripts.pory"
	walk_left
# 54 "data//maps/Championship_R2/scripts.pory"
	walk_down
# 54 "data//maps/Championship_R2/scripts.pory"
	walk_left
	step_end

# 55 "data//maps/Championship_R2/scripts.pory"
Championship_R2_Movement_5:
# 55 "data//maps/Championship_R2/scripts.pory"
	walk_down
# 55 "data//maps/Championship_R2/scripts.pory"
	walk_left
# 55 "data//maps/Championship_R2/scripts.pory"
	walk_down
	step_end

Championship_R2_Text_0:
# 28 "data//maps/Championship_R2/scripts.pory"
	.string "Announcer$"

Championship_R2_Text_1:
# 28 "data//maps/Championship_R2/scripts.pory"
	.string "Welcome one and all to the Cormoria\n"
	.string "Pokemon Championship!\p"
	.string "The first round, the round of 64, is set\n"
	.string "to begin shortly.\p"
	.string "Let's hear a huge cheer for the\n"
	.string "trainers! Show your support!$"

Championship_R2_Text_2:
# 33 "data//maps/Championship_R2/scripts.pory"
	.string "Chara$"

Championship_R2_Text_3:
# 33 "data//maps/Championship_R2/scripts.pory"
	.string "I bet they're all cheering outside, but\n"
	.string "we can't hear anything here.$"

Championship_R2_Text_4:
# 35 "data//maps/Championship_R2/scripts.pory"
	.string "Trainers - are you ready?$"

Championship_R2_Text_5:
# 38 "data//maps/Championship_R2/scripts.pory"
	.string "Hey - before we start, do you recognise\n"
	.string "me? We met on Route 3.\p"
	.string "Then again at Mt. Mirroh!\n"
	.string "I keep running into you.\p"
	.string "I've been all over Cormoria with my\n"
	.string "Altaria and grown a lot. I've become so\l"
	.string "much stronger than I was back then.\p"
	.string "My sister's watching this match live on\n"
	.string "television. Now I can finally take\l"
	.string "revenge for her!$"

Championship_R2_Text_6:
# 40 "data//maps/Championship_R2/scripts.pory"
	.string "So this is the Pokemon Championship...$"

Championship_R2_Text_7:
# 44 "data//maps/Championship_R2/scripts.pory"
	.string "That was such a tough battle!\n"
	.string "You're a really strong trainer.\p"
	.string "But I didn't back down even one bit!\n"
	.string "That's enough to make sister proud,\l"
	.string "right?\p"
	.string "Good luck!$"
