# 1 "data//maps/AncientMirroh/scripts.pory"

# 2 "data//maps/AncientMirroh/scripts.pory"
    .set LOCALID_KOHLA, 6
# 3 "data//maps/AncientMirroh/scripts.pory"
    .set LOCALID_PROFT, 8

AncientMirroh_MapScripts::
# 8 "data//maps/AncientMirroh/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientMirroh_OnTransition
	.byte 0


AncientMirroh_OnTransition::
# 13 "data//maps/AncientMirroh/scripts.pory"
	setrespawn HEAL_LOCATION_ANCIENT_MIRROH
	end


AncientMirroh_Tenebris_Trigger::
# 19 "data//maps/AncientMirroh/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_PROF_TENEBRIS_OUTSIDE, AncientMirroh_Tenebris_Trigger_2
# 21 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 22 "data//maps/AncientMirroh/scripts.pory"
	special SpawnCameraObject
# 23 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tenebris_Trigger_Movement_0
# 24 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 25 "data//maps/AncientMirroh/scripts.pory"
	special RemoveCameraObject
# 27 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_PROFT, AncientMirroh_Tenebris_Trigger_Movement_1
# 28 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 30 "data//maps/AncientMirroh/scripts.pory"
	removeobject LOCALID_PROFT
# 32 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_PROF_TENEBRIS_OUTSIDE
# 34 "data//maps/AncientMirroh/scripts.pory"
	special SpawnCameraObject
# 35 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tenebris_Trigger_Movement_2
# 36 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 37 "data//maps/AncientMirroh/scripts.pory"
	special RemoveCameraObject
# 39 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_Tenebris_Trigger_2:
	end


AncientMirroh_KolhaMeeting_Trigger::
# 45 "data//maps/AncientMirroh/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_KOHLA_MEETING, AncientMirroh_KolhaMeeting_Trigger_2
# 47 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 49 "data//maps/AncientMirroh/scripts.pory"
	delay 30
# 50 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_0
# 51 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_1
# 52 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 53 "data//maps/AncientMirroh/scripts.pory"
	delay 16
# 54 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_0
# 55 "data//maps/AncientMirroh/scripts.pory"
	release
# 56 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_2
# 57 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 58 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_1
# 59 "data//maps/AncientMirroh/scripts.pory"
	release
# 60 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_3
# 61 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 63 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_2
# 64 "data//maps/AncientMirroh/scripts.pory"
	release
# 65 "data//maps/AncientMirroh/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 52, 38
# 66 "data//maps/AncientMirroh/scripts.pory"
	addobject LOCALID_KOHLA
# 67 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_4
# 68 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_5
# 69 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 71 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_6
# 72 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 73 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_3
# 74 "data//maps/AncientMirroh/scripts.pory"
	release
# 75 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_7
# 76 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_8
# 77 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 79 "data//maps/AncientMirroh/scripts.pory"
	removeobject 7
# 80 "data//maps/AncientMirroh/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 26, 55
# 81 "data//maps/AncientMirroh/scripts.pory"
	setobjectxy LOCALID_KOHLA, 26, 55
# 83 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_KOHLA_MEETING
# 84 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_KolhaMeeting_Trigger_2:
	end


AncientMirroh_KolhaFinal_Trigger::
# 93 "data//maps/AncientMirroh/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_FINAL_KOHLA_TRIGGER, AncientMirroh_KolhaFinal_Trigger_2
# 95 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 96 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaFinal_Trigger_Text_0
# 97 "data//maps/AncientMirroh/scripts.pory"
	release
# 98 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaFinal_Trigger_Movement_0
# 99 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 100 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_FINAL_KOHLA_TRIGGER
# 101 "data//maps/AncientMirroh/scripts.pory"
	goto AncientMirroh_GoBackYesNo
	return

AncientMirroh_KolhaFinal_Trigger_2:
	end


AncientMirroh_GoBackYesNo::
# 105 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_0, MSGBOX_YESNO
# 107 "data//maps/AncientMirroh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AncientMirroh_GoBackYesNo_2
# 133 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_3
AncientMirroh_GoBackYesNo_1:
# 137 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_GoBackYesNo_2:
# 109 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_1
# 110 "data//maps/AncientMirroh/scripts.pory"
	release
# 111 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_GoBackYesNo_Movement_0
# 112 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_GoBackYesNo_Movement_1
# 113 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 114 "data//maps/AncientMirroh/scripts.pory"
	delay 24
# 115 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_2
# 116 "data//maps/AncientMirroh/scripts.pory"
	release
# 117 "data//maps/AncientMirroh/scripts.pory"
	delay 24
# 118 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8004, 2
# 119 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8005, 2
# 120 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8006, 8
# 121 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8007, 5
# 122 "data//maps/AncientMirroh/scripts.pory"
	special ShakeCamera
# 123 "data//maps/AncientMirroh/scripts.pory"
	clearflag FLAG_HIDE_LILY_POND_KOHLA
# 124 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_DONE
# 129 "data//maps/AncientMirroh/scripts.pory"
	fadescreen FADE_TO_BLACK
# 130 "data//maps/AncientMirroh/scripts.pory"
	warp MAP_LILY_POND, 12, 4
	goto AncientMirroh_GoBackYesNo_1


AncientMirroh_Dreamstone::
# 143 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 144 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_Dreamstone_Text_0
# 145 "data//maps/AncientMirroh/scripts.pory"
	release
	end


# 23 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_Tenebris_Trigger_Movement_0:
# 23 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 23 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 23 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 23 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 23 "data//maps/AncientMirroh/scripts.pory"
	walk_left
	step_end

# 27 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_Tenebris_Trigger_Movement_1:
# 27 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 27 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 27 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 27 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

# 35 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_Tenebris_Trigger_Movement_2:
# 35 "data//maps/AncientMirroh/scripts.pory"
	walk_right
# 35 "data//maps/AncientMirroh/scripts.pory"
	walk_right
# 35 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 35 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 35 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

# 50 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_0:
# 50 "data//maps/AncientMirroh/scripts.pory"
	face_left
	step_end

# 51 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_1:
# 51 "data//maps/AncientMirroh/scripts.pory"
	jump_in_place_left
	step_end

# 56 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_2:
# 56 "data//maps/AncientMirroh/scripts.pory"
	jump_in_place_right
# 56 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
	step_end

# 60 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_3:
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_down
	step_end

# 67 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_4:
# 67 "data//maps/AncientMirroh/scripts.pory"
	face_down
	step_end

# 68 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_5:
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

# 71 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_6:
# 71 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
	step_end

# 75 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_7:
# 75 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 75 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 75 "data//maps/AncientMirroh/scripts.pory"
	face_down
	step_end

# 76 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_8:
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_down
	step_end

# 98 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaFinal_Trigger_Movement_0:
# 98 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 98 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 98 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 98 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 98 "data//maps/AncientMirroh/scripts.pory"
	walk_left
	step_end

# 111 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_GoBackYesNo_Movement_0:
# 111 "data//maps/AncientMirroh/scripts.pory"
	face_up
	step_end

# 112 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_GoBackYesNo_Movement_1:
# 112 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 112 "data//maps/AncientMirroh/scripts.pory"
	face_left
	step_end

AncientMirroh_KolhaMeeting_Trigger_Text_0:
# 54 "data//maps/AncientMirroh/scripts.pory"
	.string "GRUNT: Darn! These HEAVY DUTY BOOTS\n"
	.string "are really slowing me down! I gotta\l"
	.string "catch up to boss MELEA!$"

AncientMirroh_KolhaMeeting_Trigger_Text_1:
# 58 "data//maps/AncientMirroh/scripts.pory"
	.string "GRUNT: Oh no, you're here already?\n"
	.string "Gotta go!$"

AncientMirroh_KolhaMeeting_Trigger_Text_2:
# 63 "data//maps/AncientMirroh/scripts.pory"
	.string "???: Hey GRUNT! Wait right there!$"

AncientMirroh_KolhaMeeting_Trigger_Text_3:
# 73 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: {PLAYER}? How'd you get over\n"
	.string "here?\p"
	.string "...\p"
	.string "KOHLA: So that's what happened. I must\n"
	.string "have reached the peak after you did,\l"
	.string "then. When I came, nobody was there. I\l"
	.string "found this big machine and pressed a\l"
	.string "button, and then suddenly got\l"
	.string "transported here!\p"
	.string "...\p"
	.string "KOHLA: Slow as usual, you are. I came\n"
	.string "after you and still managed to catch\l"
	.string "up. Bet you wasted your time exploring\l"
	.string "this area and catching Pokémon while\l"
	.string "MELEA went on to catch the ANCIENT\l"
	.string "TERROR!\p"
	.string "...\p"
	.string "KOHLA: Well I'm here to do the right\n"
	.string "thing, so get out of my way. Go on -\l"
	.string "move!$"

AncientMirroh_KolhaFinal_Trigger_Text_0:
# 96 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: There you are! Hurry up.$"

AncientMirroh_GoBackYesNo_Text_0:
# 105 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: Do you want to take the\n"
	.string "dreamstone back?$"

AncientMirroh_GoBackYesNo_Text_1:
# 109 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: Let's get ready then.$"

AncientMirroh_GoBackYesNo_Text_2:
# 115 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: 3...2...1...$"

AncientMirroh_GoBackYesNo_Text_3:
# 133 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: What are you waiting for?$"

AncientMirroh_Dreamstone_Text_0:
# 144 "data//maps/AncientMirroh/scripts.pory"
	.string "It's a dreamstone...the surface is so\n"
	.string "smooth. It doesn't look natural at all.$"
