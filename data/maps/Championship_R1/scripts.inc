Championship_R1_MapScripts::
# 2 "data//maps/Championship_R1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Championship_R1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data//maps/Championship_R1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Championship_R1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Championship_R1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data//maps/Championship_R1/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Championship_R1_OnWarp
	.2byte 0

Championship_R1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data//maps/Championship_R1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Championship_R1
	.2byte 0


Championship_R1_OnWarp::
# 12 "data//maps/Championship_R1/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


Championship_R1::
# 16 "data//maps/Championship_R1/scripts.pory"
	lockall
# 19 "data//maps/Championship_R1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data//maps/Championship_R1/scripts.pory"
	setdynamicwarp MAP_CHAMPIONSHIP_R1_LOBBY, 4, 13
# 22 "data//maps/Championship_R1/scripts.pory"
	special SpawnCameraObject
# 24 "data//maps/Championship_R1/scripts.pory"
	setrespawn HEAL_LOCATION_CHAMPIONSHIP_CORRIDOR
# 26 "data//maps/Championship_R1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Championship_R1_Movement_0
# 27 "data//maps/Championship_R1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_R1_Movement_1
# 28 "data//maps/Championship_R1/scripts.pory"
	waitmovement 0
# 29 "data//maps/Championship_R1/scripts.pory"
	delay 16
# 31 "data//maps/Championship_R1/scripts.pory"
	msgbox_delay Championship_R1_Text_0, Championship_R1_Text_1
# 33 "data//maps/Championship_R1/scripts.pory"
	delay 24
# 35 "data//maps/Championship_R1/scripts.pory"
	applymovement 1, Championship_R1_Movement_2
# 36 "data//maps/Championship_R1/scripts.pory"
	msgbox_delay Championship_R1_Text_2, Championship_R1_Text_3
# 38 "data//maps/Championship_R1/scripts.pory"
	msgbox_delay Championship_R1_Text_0, Championship_R1_Text_4
# 40 "data//maps/Championship_R1/scripts.pory"
	applymovement 1, Championship_R1_Movement_2
# 41 "data//maps/Championship_R1/scripts.pory"
	msgbox_delay Championship_R1_Text_2, Championship_R1_Text_5
# 43 "data//maps/Championship_R1/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPIONSHIP_A, Championship_R1_Text_6
# 46 "data//maps/Championship_R1/scripts.pory"
	applymovement 1, Championship_R1_Movement_2
# 47 "data//maps/Championship_R1/scripts.pory"
	msgbox_delay Championship_R1_Text_2, Championship_R1_Text_7
# 49 "data//maps/Championship_R1/scripts.pory"
	playmoncry SPECIES_ALTARIA, CRY_MODE_NORMAL
# 50 "data//maps/Championship_R1/scripts.pory"
	applymovement 2, Championship_R1_Movement_2
# 51 "data//maps/Championship_R1/scripts.pory"
	waitmovement 0
# 52 "data//maps/Championship_R1/scripts.pory"
	delay 24
# 54 "data//maps/Championship_R1/scripts.pory"
	applymovement 1, Championship_R1_Movement_3
# 55 "data//maps/Championship_R1/scripts.pory"
	waitmovement 0
# 57 "data//maps/Championship_R1/scripts.pory"
	applymovement 2, Championship_R1_Movement_4
# 58 "data//maps/Championship_R1/scripts.pory"
	applymovement 1, Championship_R1_Movement_5
# 59 "data//maps/Championship_R1/scripts.pory"
	waitmovement 0
# 60 "data//maps/Championship_R1/scripts.pory"
	removeobject 1
# 62 "data//maps/Championship_R1/scripts.pory"
	applymovement 2, Championship_R1_Movement_6
# 63 "data//maps/Championship_R1/scripts.pory"
	waitmovement 0
# 64 "data//maps/Championship_R1/scripts.pory"
	removeobject 2
# 66 "data//maps/Championship_R1/scripts.pory"
	setvar VAR_CHAMP_STAGE, 2
# 67 "data//maps/Championship_R1/scripts.pory"
	setflag FLAG_BEAT_R1
# 69 "data//maps/Championship_R1/scripts.pory"
	releaseall
	end


# 26 "data//maps/Championship_R1/scripts.pory"
Championship_R1_Movement_0:
# 26 "data//maps/Championship_R1/scripts.pory"
	walk_up
# 26 "data//maps/Championship_R1/scripts.pory"
	walk_up
# 26 "data//maps/Championship_R1/scripts.pory"
	walk_up
# 26 "data//maps/Championship_R1/scripts.pory"
	walk_up
	step_end

# 27 "data//maps/Championship_R1/scripts.pory"
Championship_R1_Movement_1:
# 27 "data//maps/Championship_R1/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R1/scripts.pory"
	walk_left
# 27 "data//maps/Championship_R1/scripts.pory"
	walk_left
# 27 "data//maps/Championship_R1/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R1/scripts.pory"
	walk_up
# 27 "data//maps/Championship_R1/scripts.pory"
	face_right
	step_end

# 35 "data//maps/Championship_R1/scripts.pory"
Championship_R1_Movement_2:
# 35 "data//maps/Championship_R1/scripts.pory"
	jump_in_place_left
	step_end

# 54 "data//maps/Championship_R1/scripts.pory"
Championship_R1_Movement_3:
# 54 "data//maps/Championship_R1/scripts.pory"
	walk_left
# 54 "data//maps/Championship_R1/scripts.pory"
	walk_down
	step_end

# 57 "data//maps/Championship_R1/scripts.pory"
Championship_R1_Movement_4:
# 57 "data//maps/Championship_R1/scripts.pory"
	walk_left
# 57 "data//maps/Championship_R1/scripts.pory"
	walk_down
# 57 "data//maps/Championship_R1/scripts.pory"
	walk_left
	step_end

# 58 "data//maps/Championship_R1/scripts.pory"
Championship_R1_Movement_5:
# 58 "data//maps/Championship_R1/scripts.pory"
	walk_down
# 58 "data//maps/Championship_R1/scripts.pory"
	walk_left
# 58 "data//maps/Championship_R1/scripts.pory"
	walk_down
	step_end

# 62 "data//maps/Championship_R1/scripts.pory"
Championship_R1_Movement_6:
# 62 "data//maps/Championship_R1/scripts.pory"
	walk_down
	step_end

Championship_R1_Text_0:
# 31 "data//maps/Championship_R1/scripts.pory"
	.string "Announcer$"

Championship_R1_Text_1:
# 31 "data//maps/Championship_R1/scripts.pory"
	.string "Welcome one and all to the Cormoria\n"
	.string "Pokemon Championship!\p"
	.string "The first round, the round of 32, is set\n"
	.string "to begin shortly.\p"
	.string "Let's hear a huge cheer for the\n"
	.string "trainers! Show your support!$"

Championship_R1_Text_2:
# 36 "data//maps/Championship_R1/scripts.pory"
	.string "Chara$"

Championship_R1_Text_3:
# 36 "data//maps/Championship_R1/scripts.pory"
	.string "I bet they're all cheering outside, but\n"
	.string "we can't hear anything here.$"

Championship_R1_Text_4:
# 38 "data//maps/Championship_R1/scripts.pory"
	.string "Trainers - are you ready?$"

Championship_R1_Text_5:
# 41 "data//maps/Championship_R1/scripts.pory"
	.string "Before we start, do you recognise me?\n"
	.string "We met on Route 3.\p"
	.string "Then again at Mt. Mirroh!\n"
	.string "I keep running into you.\p"
	.string "I've been all over Cormoria with my\n"
	.string "Altaria and grown a lot. I've become so\l"
	.string "much stronger than I was back then.\p"
	.string "My sister's watching this match live on\n"
	.string "television. Now I can finally take\l"
	.string "revenge for her!$"

Championship_R1_Text_6:
# 43 "data//maps/Championship_R1/scripts.pory"
	.string "So this is the Pokemon Championship...$"

Championship_R1_Text_7:
# 47 "data//maps/Championship_R1/scripts.pory"
	.string "That was such a tough battle!\n"
	.string "You're a really strong trainer.\p"
	.string "But you know what? I didn't back down\n"
	.string "even one bit! That's enough to make my\l"
	.string "sister proud, right?\p"
	.string "Good luck!$"
