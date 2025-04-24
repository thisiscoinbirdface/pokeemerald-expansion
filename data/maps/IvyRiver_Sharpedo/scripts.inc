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
	speakername IvyRiver_Sharpedo_Jania_Trigger_Text_0
# 20 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger_Text_1
# 21 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 22 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 8
# 24 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
# 25 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger_Movement_1
# 26 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 27 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 30
# 29 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_JANIA, IvyRiver_Sharpedo_Jania_Trigger_Movement_2
# 30 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_CLAUNCHER, IvyRiver_Sharpedo_Jania_Trigger_Movement_2
# 31 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger_Movement_2
# 32 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 34 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 16
# 36 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger_Text_2
# 37 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 39 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Sharpedo_Jania_Trigger_Movement_3
# 40 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 41 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_JANIA, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 42 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_CLAUNCHER, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 43 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 44 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 45 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 8
# 46 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger_Text_3
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 49 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	special SpawnCameraObject
# 50 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_3
# 51 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	message IvyRiver_Sharpedo_Jania_Trigger_Text_4
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_5
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmessage
# 56 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitbuttonpress
# 57 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 58 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 30
# 59 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_6
# 60 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	message IvyRiver_Sharpedo_Jania_Trigger_Text_5
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_7
# 63 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 64 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmessage
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitbuttonpress
# 66 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 67 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	special RemoveCameraObject
# 68 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 16
# 70 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Sharpedo_Jania_Trigger_Movement_1
# 71 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_JANIA, IvyRiver_Sharpedo_Jania_Trigger_Movement_0
# 72 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_CLAUNCHER, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 73 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 74 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 75 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 16
# 76 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger_Text_6
# 77 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 79 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_CLAUNCHER
# 81 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_GYARADOS
# 82 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_JANIA
# 84 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_IVY_RIVER_SHARPEDO_JANIA
# 86 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 89 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	releaseall
	end

IvyRiver_Sharpedo_Jania_Trigger_2:
	end


IvyRiver_Sharpedo_Encounter::
# 95 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	playmoncry SPECIES_SHARPEDO_MEGA, CRY_MODE_ENCOUNTER
# 96 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmoncry
# 98 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_BATTLE_NO_RUNNING_CATCHING
# 99 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Encounter_Text_0
# 100 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setwildbattle SPECIES_SHARPEDO_MEGA, 45
# 101 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	dowildbattle
# 104 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 105 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq IvyRiver_Sharpedo_Encounter_2
IvyRiver_Sharpedo_Encounter_1:
# 109 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq IvyRiver_Sharpedo_Encounter_5
IvyRiver_Sharpedo_Encounter_4:
# 113 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq IvyRiver_Sharpedo_Encounter_8
IvyRiver_Sharpedo_Encounter_7:
# 117 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	clearflag FLAG_BATTLE_NO_RUNNING_CATCHING
# 118 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	releaseall
	end

IvyRiver_Sharpedo_Encounter_2:
# 106 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_IVY_RIVER_SHARPEDO_MAIN
# 107 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_SHARPEDO
	goto IvyRiver_Sharpedo_Encounter_1

IvyRiver_Sharpedo_Encounter_5:
# 110 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_IVY_RIVER_SHARPEDO_MAIN
# 111 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_SHARPEDO
	goto IvyRiver_Sharpedo_Encounter_4

IvyRiver_Sharpedo_Encounter_8:
# 114 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Encounter_Text_1
	goto IvyRiver_Sharpedo_Encounter_7


# 17 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_0:
# 17 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	face_left
	step_end

# 25 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_1:
# 25 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	face_right
	step_end

# 29 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_2:
# 29 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	emote_exclamation_mark
# 29 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	jump_in_place_down
	step_end

# 39 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_3:
# 39 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 39 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
	step_end

# 41 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_4:
# 41 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	face_up
	step_end

# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_5:
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
	step_end

# 59 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_6:
# 59 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 59 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
	step_end

# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_7:
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
	step_end

IvyRiver_Sharpedo_Jania_Trigger_Text_0:
# 19 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "Jaina$"

IvyRiver_Sharpedo_Jania_Trigger_Text_1:
# 20 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: That should do it, Gyarados. Now\n"
	.string "the Mega Sharpedo can't get out.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_2:
# 36 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: Who're you? How'd you get here?\n"
	.string "Please leave immediately - a dangerous\l"
	.string "Pokemon is nearby.\p"
	.string "...\p"
	.string "???: You know about the Mega Sharpedo?\n"
	.string "Okay. Be careful nonetheless.\p"
	.string "???: Come here.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_3:
# 46 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: See over there?$"

IvyRiver_Sharpedo_Jania_Trigger_Text_4:
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: My Gyarados and I have been\n"
	.string "tracking this Mega Sharpedo for weeks.\l"
	.string "I finally found its hideout and managed\l"
	.string "to trap it in these currents.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_5:
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: These currents should keep it at\n"
	.string "bay while it calms down and becomes a\l"
	.string "regular Sharpedo again.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_6:
# 76 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "???: You can't use Pokeballs on it - it's\n"
	.string "too enraged. So whatever you want to\l"
	.string "do, be careful.\p"
	.string "???: See you.$"

IvyRiver_Sharpedo_Encounter_Text_0:
# 99 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "The Mega Sharpedo attacks!$"

IvyRiver_Sharpedo_Encounter_Text_1:
# 114 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "The Mega Sharpedo glares at you, daring\n"
	.string "you to try again.$"
