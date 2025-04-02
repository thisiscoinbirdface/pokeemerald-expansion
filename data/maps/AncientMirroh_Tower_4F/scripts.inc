# 1 "data//maps/AncientMirroh_Tower_4F/scripts.pory"

# 2 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
    .set LOCALID_KOHLA, 5
# 3 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
    .set LOCALID_MELEA, 2

AncientMirroh_Tower_4F_MapScripts::
# 7 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientMirroh_Tower_4F_SetHoleWarp
	.byte 0


AncientMirroh_Tower_4F_SetHoleWarp::
# 11 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 12 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setholewarp MAP_ANCIENT_MIRROH_TOWER_3F
	end


AncientMirroh_Tower_4F_MainTrigger::
# 17 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_KORAIDON, AncientMirroh_Tower_4F_MainTrigger_2
# 19 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	lockall
# 20 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 60
# 21 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_Tower_4F_MainTrigger_Movement_0
# 22 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 24 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special SpawnCameraObject
# 25 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tower_4F_MainTrigger_Movement_0
# 26 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 27 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special RemoveCameraObject
# 29 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 31 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_Tower_4F_MainTrigger_Movement_1
# 32 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 33 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 34 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_0
# 36 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_1
# 37 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 39 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_1
# 40 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 41 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 43 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special SpawnCameraObject
# 44 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tower_4F_MainTrigger_Movement_2
# 45 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 46 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special RemoveCameraObject
# 48 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 50 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_3
# 51 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 53 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_2
# 54 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 55 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 57 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 58 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 59 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_3
# 60 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 63 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_Tower_4F_MainTrigger_Movement_5
# 64 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 65 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 66 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_4
# 67 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 69 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_5
# 70 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 71 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_5
# 72 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 74 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_5
# 75 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 76 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 77 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_6
# 78 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 83 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8004, 2
# 84 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8005, 2
# 85 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 86 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 87 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special ShakeCamera
# 88 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_1
# 89 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 90 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_7
# 91 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 102 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_KORAIDON
# 103 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	releaseall
	end

AncientMirroh_Tower_4F_MainTrigger_2:
	end


# 21 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_0:
# 21 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_up
# 21 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_up
# 21 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_up
	step_end

# 31 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_1:
# 31 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	emote_exclamation_mark
	step_end

# 44 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_2:
# 44 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
# 44 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
	step_end

# 50 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_3:
# 50 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	face_down
	step_end

# 57 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_4:
# 57 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	jump_in_place_down
	step_end

# 63 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_5:
# 63 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	emote_question_mark
	step_end

AncientMirroh_Tower_4F_MainTrigger_Text_0:
# 34 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "KOHLA: Wait right there, TEAM SOMBER!\n"
	.string "The ACE ROOKIE is here now, so stop\l"
	.string "your dastardly -$"

AncientMirroh_Tower_4F_MainTrigger_Text_1:
# 39 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: Shh! It's sleeping. If you wake\n"
	.string "it up, we'll all be goners!$"

AncientMirroh_Tower_4F_MainTrigger_Text_2:
# 53 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: Beautiful, isn't it? How\n"
	.string "incredible it is that we're here now,\l"
	.string "today.\p"
	.string "Your PROFESSOR TENEBRIS unlocked the\n"
	.string "latent potential within the dreams and\l"
	.string "memories of {PKMN} today and created a way\l"
	.string "to visit the past!\p"
	.string "MELEA: It's like science\n"
	.string "fiction...LEADER was right all along...$"

AncientMirroh_Tower_4F_MainTrigger_Text_3:
# 59 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: But your stupid Professor had\n"
	.string "no idea what she'd uncovered! Stuck in\l"
	.string "her books and research, she wasn't the\l"
	.string "mind capable of understanding what\l"
	.string "could be done with her discovery.\p"
	.string "MELEA: But there were other minds who\n"
	.string "did understand the greatness, the\l"
	.string "potential, the power!\p"
	.string "And that's why TEAM SOMBER exists.$"

AncientMirroh_Tower_4F_MainTrigger_Text_4:
# 66 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "KOHLA: I don't get it! What do you\n"
	.string "people even plan to do?$"

AncientMirroh_Tower_4F_MainTrigger_Text_5:
# 71 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: Us? What do we want? Power,\n"
	.string "obviously. You're asking the wrong\l"
	.string "question.\p"
	.string "MELEA: Forgivable, considering your\n"
	.string "age.\p"
	.string "MELEA: The question you should be\n"
	.string "asking...is why.$"

AncientMirroh_Tower_4F_MainTrigger_Text_6:
# 77 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "GRUNT: Yeah, boss. Even I wanna know\n"
	.string "why.$"

AncientMirroh_Tower_4F_MainTrigger_Text_7:
# 90 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: SILENCE!\p"
	.string "MELEA: How dare you interrupt me?$"
