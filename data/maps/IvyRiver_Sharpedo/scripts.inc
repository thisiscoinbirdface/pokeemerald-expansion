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
# 35 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	speakername IvyRiver_Sharpedo_Jania_Trigger_Text_0
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
	speakername IvyRiver_Sharpedo_Jania_Trigger_Text_0
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger_Text_3
# 48 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 50 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	special SpawnCameraObject
# 51 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_3
# 52 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 53 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	speakername IvyRiver_Sharpedo_Jania_Trigger_Text_0
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	message IvyRiver_Sharpedo_Jania_Trigger_Text_4
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_5
# 56 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 57 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmessage
# 58 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitbuttonpress
# 59 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 60 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 30
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_6
# 62 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 63 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	speakername IvyRiver_Sharpedo_Jania_Trigger_Text_0
# 64 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	message IvyRiver_Sharpedo_Jania_Trigger_Text_5
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IvyRiver_Sharpedo_Jania_Trigger_Movement_7
# 66 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 67 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmessage
# 68 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitbuttonpress
# 69 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 70 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	special RemoveCameraObject
# 71 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 16
# 73 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Sharpedo_Jania_Trigger_Movement_1
# 74 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_JANIA, IvyRiver_Sharpedo_Jania_Trigger_Movement_0
# 75 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_CLAUNCHER, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 76 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	applymovement LOCALID_GYARADOS, IvyRiver_Sharpedo_Jania_Trigger_Movement_4
# 77 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmovement 0
# 78 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	delay 16
# 79 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	speakername IvyRiver_Sharpedo_Jania_Trigger_Text_0
# 80 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Jania_Trigger_Text_6
# 81 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	release
# 83 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_CLAUNCHER
# 85 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_GYARADOS
# 86 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_JANIA
# 88 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_IVY_RIVER_SHARPEDO_JANIA
# 90 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 93 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	releaseall
	end

IvyRiver_Sharpedo_Jania_Trigger_2:
	end


IvyRiver_Sharpedo_Encounter::
# 99 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	playmoncry SPECIES_SHARPEDO_MEGA, CRY_MODE_ENCOUNTER
# 100 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	waitmoncry
# 102 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_BATTLE_NO_RUNNING_CATCHING
# 103 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	msgbox IvyRiver_Sharpedo_Encounter_Text_0
# 104 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setwildbattle SPECIES_SHARPEDO_MEGA, 45
# 105 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	dowildbattle
# 108 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 109 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq IvyRiver_Sharpedo_Encounter_2
IvyRiver_Sharpedo_Encounter_1:
# 113 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq IvyRiver_Sharpedo_Encounter_5
IvyRiver_Sharpedo_Encounter_4:
# 117 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq IvyRiver_Sharpedo_Encounter_8
IvyRiver_Sharpedo_Encounter_7:
# 121 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	clearflag FLAG_BATTLE_NO_RUNNING_CATCHING
# 122 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	releaseall
	end

IvyRiver_Sharpedo_Encounter_2:
# 110 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_IVY_RIVER_SHARPEDO_MAIN
# 111 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_SHARPEDO
	goto IvyRiver_Sharpedo_Encounter_1

IvyRiver_Sharpedo_Encounter_5:
# 114 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	setflag FLAG_IVY_RIVER_SHARPEDO_MAIN
# 115 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	removeobject LOCALID_SHARPEDO
	goto IvyRiver_Sharpedo_Encounter_4

IvyRiver_Sharpedo_Encounter_8:
# 118 "data//maps/IvyRiver_Sharpedo/scripts.pory"
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

# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_5:
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
# 55 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_up
	step_end

# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_6:
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 61 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
	step_end

# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
IvyRiver_Sharpedo_Jania_Trigger_Movement_7:
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
# 65 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	walk_down
	step_end

IvyRiver_Sharpedo_Jania_Trigger_Text_0:
# 19 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "Jania$"

IvyRiver_Sharpedo_Jania_Trigger_Text_1:
# 20 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "That should do it, Gyarados. Now the\n"
	.string "Mega Sharpedo can't get out.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_2:
# 36 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "It's you, {PLAYER}.\p"
	.string "I must thank you for bringing peace to\n"
	.string "Pelluca City.\p"
	.string "Come here.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_3:
# 47 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "See over there?$"

IvyRiver_Sharpedo_Jania_Trigger_Text_4:
# 54 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "My Gyarados and I finally found its\n"
	.string "hideout and managed to trap it in these\l"
	.string "currents.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_5:
# 64 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "These currents should keep it at bay\n"
	.string "while it calms down.$"

IvyRiver_Sharpedo_Jania_Trigger_Text_6:
# 80 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "You can't use Poké Balls on it - it's too\n"
	.string "enraged. So whatever you want to do, be\l"
	.string "careful.\p"
	.string "I'm heading back to my gym.\n"
	.string "See you.$"

IvyRiver_Sharpedo_Encounter_Text_0:
# 103 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "The Mega Sharpedo attacks!$"

IvyRiver_Sharpedo_Encounter_Text_1:
# 118 "data//maps/IvyRiver_Sharpedo/scripts.pory"
	.string "The Mega Sharpedo glares at you, daring\n"
	.string "you to try again.$"
