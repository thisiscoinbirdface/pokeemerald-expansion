# 1 "data//maps/IvyRiver_Sharpedo/scripts.pory"

# 2 "data//maps/IvyRiver_Sharpedo/scripts.pory"
    .set LOCALID_SHARPEDO, 1
# 3 "data//maps/IvyRiver_Sharpedo/scripts.pory"
    .set LOCALID_JANIA, 2
# 4 "data//maps/IvyRiver_Sharpedo/scripts.pory"
    .set LOCALID_CLAUNCHER, 3
# 5 "data//maps/IvyRiver_Sharpedo/scripts.pory"
    .set LOCALID_GYARADOS, 4

IvyRiver_Sharpedo_MapScripts::
	.byte 0


IvyRiver_Sharpedo_Jania_Trigger::
# 13 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_SHARPEDO_JANIA, IvyRiver_Sharpedo_Jania_Trigger_2
# 15 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	lockall
# 16 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 30
# 17 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_JANIA, IvyRiver_Sharpedo_Jania_Trigger_Movement_0
# 18 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 19 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger_Text_0
# 20 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 21 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 8
# 23 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
# 24 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger_Movement_1
# 25 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 26 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 30
# 28 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_JANIA, IvyRiver_Sharpedo_Jania_Trigger_Movement_2
# 29 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_CLAUNCHER, IvyRiver_Sharpedo_Jania_Trigger_Movement_2
# 30 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger_Movement_2
# 31 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 33 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 16
# 35 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger_Text_1
# 36 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 38 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Sharpedo_Jania_Trigger_Movement_3
# 39 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 40 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_JANIA, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 41 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_CLAUNCHER, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 42 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 43 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 44 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 8
# 45 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger_Text_2
# 46 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 48 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	special SpawnCameraObject
# 49 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_3
# 50 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 51 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	message IvyRiver_Sharpedo_Jania_Trigger_Text_3
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_5
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmessage
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitbuttonpress
# 56 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 57 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 30
# 58 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_6
# 59 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 60 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	message IvyRiver_Sharpedo_Jania_Trigger_Text_4
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_7
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 63 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmessage
# 64 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitbuttonpress
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 66 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	special RemoveCameraObject
# 67 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 16
# 69 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Sharpedo_Jania_Trigger_Movement_1
# 70 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_JANIA, IvyRiver_Sharpedo_Jania_Trigger_Movement_0
# 71 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_CLAUNCHER, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 72 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 73 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 74 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 16
# 75 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger_Text_5
# 76 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 78 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_CLAUNCHER
# 80 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_GYARADOS
# 81 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_JANIA
# 83 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_IVY_RIVER_SHARPEDO_JANIA
# 85 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 88 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	releaseall
	end

IvyRiver_Sharpedo_Jania_Trigger_2:
	end


IvyRiver_Sharpedo_Encounter::
# 94 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	playmoncry SPECIES_SHARPEDO_MEGA, CRY_MODE_ENCOUNTER
# 95 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmoncry
# 97 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_BATTLE_NO_RUNNING_CATCHING
# 98 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Encounter_Text_0
# 99 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setwildbattle SPECIES_SHARPEDO_MEGA, 45
# 100 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	dowildbattle
# 103 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 104 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq IvyRiver_Sharpedo_Encounter_2
IvyRiver_Sharpedo_Encounter_1:
# 108 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq IvyRiver_Sharpedo_Encounter_5
IvyRiver_Sharpedo_Encounter_4:
# 112 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq IvyRiver_Sharpedo_Encounter_8
IvyRiver_Sharpedo_Encounter_7:
# 116 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	clearflag FLAG_BATTLE_NO_RUNNING_CATCHING
# 117 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	releaseall
	end

IvyRiver_Sharpedo_Encounter_2:
# 105 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_IVY_RIVER_SHARPEDO_MAIN
# 106 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_SHARPEDO
	goto IvyRiver_Sharpedo_Encounter_1

IvyRiver_Sharpedo_Encounter_5:
# 109 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_IVY_RIVER_SHARPEDO_MAIN
# 110 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_SHARPEDO
	goto IvyRiver_Sharpedo_Encounter_4

IvyRiver_Sharpedo_Encounter_8:
# 113 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Encounter_Text_1
	goto IvyRiver_Sharpedo_Encounter_7


# 17 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_0:
# 17 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	face_left
	step_end

# 24 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_1:
# 24 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	face_right
	step_end

# 28 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_2:
# 28 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	emote_exclamation_mark
# 28 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	jump_in_place_down
	step_end

# 38 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_3:
# 38 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 38 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
	step_end

# 40 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_4:
# 40 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	face_up
	step_end

# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_5:
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
	step_end

# 58 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_6:
# 58 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 58 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
	step_end

# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_7:
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
	step_end

IvyRiver_Sharpedo_Jania_Trigger_Text_0:
# 19 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: That should do it, Gyarados. Now\n"
	.string "the Mega Sharpedo can't get out.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_1:
# 35 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: Who're you? How'd you get here?\n"
	.string "Please leave immediately - a dangerous\l"
	.string "Pokemon is nearby.\p"
	.string "...\p"
	.string "???: You know about the Mega Sharpedo?\n"
	.string "Okay. Be careful nonetheless.\p"
	.string "???: Come here.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_2:
# 45 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: See over there?$"

IvyRiver_Sharpedo_Jania_Trigger_Text_3:
# 51 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: My Gyarados and I have been\n"
	.string "tracking this Mega Sharpedo for weeks.\l"
	.string "I finally found its hideout and managed\l"
	.string "to trap it in these currents.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_4:
# 60 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: These currents should keep it at\n"
	.string "bay while it calms down and becomes a\l"
	.string "regular Sharpedo again.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_5:
# 75 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: You can't use Pokeballs on it - it's\n"
	.string "too enraged. So whatever you want to\l"
	.string "do, be careful.\p"
	.string "???: See you.$"

IvyRiver_Sharpedo_Encounter_Text_0:
# 98 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "The Mega Sharpedo attacks!$"

IvyRiver_Sharpedo_Encounter_Text_1:
# 113 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "The Mega Sharpedo glares at you, daring\n"
	.string "you to try again.$"
