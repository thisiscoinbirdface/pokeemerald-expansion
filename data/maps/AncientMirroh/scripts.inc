# 1 "data//maps/AncientMirroh/scripts.pory"

# 2 "data//maps/AncientMirroh/scripts.pory"
    .set LOCALID_KOHLA, 6
# 3 "data//maps/AncientMirroh/scripts.pory"
    .set LOCALID_PROFT, 8

AncientMirroh_MapScripts::
	.byte 0


AncientMirroh_Tenebris_Trigger::
# 11 "data//maps/AncientMirroh/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_PROF_TENEBRIS_OUTSIDE, AncientMirroh_Tenebris_Trigger_2
# 13 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 14 "data//maps/AncientMirroh/scripts.pory"
	special SpawnCameraObject
# 15 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tenebris_Trigger_Movement_0
# 16 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 17 "data//maps/AncientMirroh/scripts.pory"
	special RemoveCameraObject
# 19 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_PROFT, AncientMirroh_Tenebris_Trigger_Movement_1
# 20 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 22 "data//maps/AncientMirroh/scripts.pory"
	removeobject LOCALID_PROFT
# 24 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_PROF_TENEBRIS_OUTSIDE
# 26 "data//maps/AncientMirroh/scripts.pory"
	special SpawnCameraObject
# 27 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tenebris_Trigger_Movement_2
# 28 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 29 "data//maps/AncientMirroh/scripts.pory"
	special RemoveCameraObject
# 31 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_Tenebris_Trigger_2:
	end


AncientMirroh_KolhaMeeting_Trigger::
# 37 "data//maps/AncientMirroh/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_KOHLA_MEETING, AncientMirroh_KolhaMeeting_Trigger_2
# 39 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 41 "data//maps/AncientMirroh/scripts.pory"
	delay 30
# 42 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_0
# 43 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_1
# 44 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 45 "data//maps/AncientMirroh/scripts.pory"
	delay 16
# 46 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_0
# 47 "data//maps/AncientMirroh/scripts.pory"
	release
# 48 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_2
# 49 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 50 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_1
# 51 "data//maps/AncientMirroh/scripts.pory"
	release
# 52 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_3
# 53 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 55 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_2
# 56 "data//maps/AncientMirroh/scripts.pory"
	release
# 57 "data//maps/AncientMirroh/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 52, 38
# 58 "data//maps/AncientMirroh/scripts.pory"
	addobject LOCALID_KOHLA
# 59 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_4
# 60 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_5
# 61 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 63 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_6
# 64 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 65 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_3
# 66 "data//maps/AncientMirroh/scripts.pory"
	release
# 67 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_7
# 68 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_8
# 69 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 71 "data//maps/AncientMirroh/scripts.pory"
	removeobject 7
# 72 "data//maps/AncientMirroh/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 26, 55
# 73 "data//maps/AncientMirroh/scripts.pory"
	setobjectxy LOCALID_KOHLA, 26, 55
# 75 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_KOHLA_MEETING
# 76 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_KolhaMeeting_Trigger_2:
	end


AncientMirroh_KolhaFinal_Trigger::
# 85 "data//maps/AncientMirroh/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_FINAL_KOHLA_TRIGGER, AncientMirroh_KolhaFinal_Trigger_2
# 87 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 88 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaFinal_Trigger_Text_0
# 89 "data//maps/AncientMirroh/scripts.pory"
	release
# 90 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaFinal_Trigger_Movement_0
# 91 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 92 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_FINAL_KOHLA_TRIGGER
# 93 "data//maps/AncientMirroh/scripts.pory"
	goto AncientMirroh_GoBackYesNo
	return

AncientMirroh_KolhaFinal_Trigger_2:
	end


AncientMirroh_GoBackYesNo::
# 97 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_0, MSGBOX_YESNO
# 99 "data//maps/AncientMirroh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AncientMirroh_GoBackYesNo_2
# 125 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_3
AncientMirroh_GoBackYesNo_1:
# 129 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_GoBackYesNo_2:
# 101 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_1
# 102 "data//maps/AncientMirroh/scripts.pory"
	release
# 103 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_GoBackYesNo_Movement_0
# 104 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_GoBackYesNo_Movement_1
# 105 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 106 "data//maps/AncientMirroh/scripts.pory"
	delay 24
# 107 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_2
# 108 "data//maps/AncientMirroh/scripts.pory"
	release
# 109 "data//maps/AncientMirroh/scripts.pory"
	delay 24
# 110 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8004, 2
# 111 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8005, 2
# 112 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8006, 8
# 113 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8007, 5
# 114 "data//maps/AncientMirroh/scripts.pory"
	special ShakeCamera
# 115 "data//maps/AncientMirroh/scripts.pory"
	clearflag FLAG_HIDE_LILY_POND_KOHLA
# 116 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_DONE
# 121 "data//maps/AncientMirroh/scripts.pory"
	fadescreen FADE_TO_BLACK
# 122 "data//maps/AncientMirroh/scripts.pory"
	warp MAP_LILY_POND, 12, 4
	goto AncientMirroh_GoBackYesNo_1


AncientMirroh_Dreamstone::
# 135 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 136 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_Dreamstone_Text_0
# 137 "data//maps/AncientMirroh/scripts.pory"
	release
	end


# 15 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_Tenebris_Trigger_Movement_0:
# 15 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 15 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 15 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 15 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 15 "data//maps/AncientMirroh/scripts.pory"
	walk_left
	step_end

# 19 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_Tenebris_Trigger_Movement_1:
# 19 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 19 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 19 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 19 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

# 27 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_Tenebris_Trigger_Movement_2:
# 27 "data//maps/AncientMirroh/scripts.pory"
	walk_right
# 27 "data//maps/AncientMirroh/scripts.pory"
	walk_right
# 27 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 27 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 27 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

# 42 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_0:
# 42 "data//maps/AncientMirroh/scripts.pory"
	face_left
	step_end

# 43 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_1:
# 43 "data//maps/AncientMirroh/scripts.pory"
	jump_in_place_left
	step_end

# 48 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_2:
# 48 "data//maps/AncientMirroh/scripts.pory"
	jump_in_place_right
# 48 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
	step_end

# 52 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_3:
# 52 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 52 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 52 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 52 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 52 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 52 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 52 "data//maps/AncientMirroh/scripts.pory"
	walk_down
	step_end

# 59 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_4:
# 59 "data//maps/AncientMirroh/scripts.pory"
	face_down
	step_end

# 60 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_5:
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 60 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

# 63 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_6:
# 63 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
	step_end

# 67 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_7:
# 67 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 67 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 67 "data//maps/AncientMirroh/scripts.pory"
	face_down
	step_end

# 68 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_8:
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 68 "data//maps/AncientMirroh/scripts.pory"
	walk_down
	step_end

# 90 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaFinal_Trigger_Movement_0:
# 90 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 90 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 90 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 90 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 90 "data//maps/AncientMirroh/scripts.pory"
	walk_left
	step_end

# 103 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_GoBackYesNo_Movement_0:
# 103 "data//maps/AncientMirroh/scripts.pory"
	face_up
	step_end

# 104 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_GoBackYesNo_Movement_1:
# 104 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 104 "data//maps/AncientMirroh/scripts.pory"
	face_left
	step_end

AncientMirroh_KolhaMeeting_Trigger_Text_0:
# 46 "data//maps/AncientMirroh/scripts.pory"
	.string "GRUNT: Darn! These HEAVY DUTY BOOTS\n"
	.string "are really slowing me down! I gotta\l"
	.string "catch up to boss MELEA!$"

AncientMirroh_KolhaMeeting_Trigger_Text_1:
# 50 "data//maps/AncientMirroh/scripts.pory"
	.string "GRUNT: Oh no, you're here already?\n"
	.string "Gotta go!$"

AncientMirroh_KolhaMeeting_Trigger_Text_2:
# 55 "data//maps/AncientMirroh/scripts.pory"
	.string "???: Hey GRUNT! Wait right there!$"

AncientMirroh_KolhaMeeting_Trigger_Text_3:
# 65 "data//maps/AncientMirroh/scripts.pory"
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
# 88 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: There you are! Hurry up.$"

AncientMirroh_GoBackYesNo_Text_0:
# 97 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: Do you want to take the\n"
	.string "dreamstone back?$"

AncientMirroh_GoBackYesNo_Text_1:
# 101 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: Let's get ready then.$"

AncientMirroh_GoBackYesNo_Text_2:
# 107 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: 3...2...1...$"

AncientMirroh_GoBackYesNo_Text_3:
# 125 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: What are you waiting for?$"

AncientMirroh_Dreamstone_Text_0:
# 136 "data//maps/AncientMirroh/scripts.pory"
	.string "It's a dreamstone...the surface is so\n"
	.string "smooth. It doesn't look natural at all.$"
