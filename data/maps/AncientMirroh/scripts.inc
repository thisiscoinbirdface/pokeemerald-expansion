# 1 "data//maps/AncientMirroh/scripts.pory"

# 2 "data//maps/AncientMirroh/scripts.pory"
    .set LOCALID_KOHLA, 6

AncientMirroh_MapScripts::
	.byte 0


AncientMirroh_KolhaMeeting_Trigger::
# 10 "data//maps/AncientMirroh/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_KOHLA_MEETING, AncientMirroh_KolhaMeeting_Trigger_2
# 12 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 14 "data//maps/AncientMirroh/scripts.pory"
	delay 30
# 15 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_0
# 16 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_1
# 17 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 18 "data//maps/AncientMirroh/scripts.pory"
	delay 16
# 19 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_0
# 20 "data//maps/AncientMirroh/scripts.pory"
	release
# 21 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_2
# 22 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 23 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_1
# 24 "data//maps/AncientMirroh/scripts.pory"
	release
# 25 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_3
# 26 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 28 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_2
# 29 "data//maps/AncientMirroh/scripts.pory"
	release
# 30 "data//maps/AncientMirroh/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 52, 38
# 31 "data//maps/AncientMirroh/scripts.pory"
	addobject LOCALID_KOHLA
# 32 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_4
# 33 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_5
# 34 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 36 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_6
# 37 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 38 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_3
# 39 "data//maps/AncientMirroh/scripts.pory"
	release
# 40 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_7
# 41 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_8
# 42 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 44 "data//maps/AncientMirroh/scripts.pory"
	removeobject 7
# 45 "data//maps/AncientMirroh/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 26, 55
# 46 "data//maps/AncientMirroh/scripts.pory"
	setobjectxy LOCALID_KOHLA, 26, 55
# 48 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_KOHLA_MEETING
# 49 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_KolhaMeeting_Trigger_2:
	end


AncientMirroh_KolhaFinal_Trigger::
# 58 "data//maps/AncientMirroh/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_FINAL_KOHLA_TRIGGER, AncientMirroh_KolhaFinal_Trigger_2
# 60 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 61 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaFinal_Trigger_Text_0
# 62 "data//maps/AncientMirroh/scripts.pory"
	release
# 63 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaFinal_Trigger_Movement_0
# 64 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 65 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_FINAL_KOHLA_TRIGGER
# 66 "data//maps/AncientMirroh/scripts.pory"
	goto AncientMirroh_GoBackYesNo
	return

AncientMirroh_KolhaFinal_Trigger_2:
	end


AncientMirroh_GoBackYesNo::
# 70 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_0, MSGBOX_YESNO
# 72 "data//maps/AncientMirroh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AncientMirroh_GoBackYesNo_2
# 98 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_3
AncientMirroh_GoBackYesNo_1:
# 102 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_GoBackYesNo_2:
# 74 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_1
# 75 "data//maps/AncientMirroh/scripts.pory"
	release
# 76 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_GoBackYesNo_Movement_0
# 77 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_GoBackYesNo_Movement_1
# 78 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 79 "data//maps/AncientMirroh/scripts.pory"
	delay 24
# 80 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_2
# 81 "data//maps/AncientMirroh/scripts.pory"
	release
# 82 "data//maps/AncientMirroh/scripts.pory"
	delay 24
# 83 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8004, 2
# 84 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8005, 2
# 85 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8006, 8
# 86 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8007, 5
# 87 "data//maps/AncientMirroh/scripts.pory"
	special ShakeCamera
# 88 "data//maps/AncientMirroh/scripts.pory"
	clearflag FLAG_HIDE_LILY_POND_KOHLA
# 89 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_DONE
# 94 "data//maps/AncientMirroh/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data//maps/AncientMirroh/scripts.pory"
	warp MAP_LILY_POND, 12, 4
	goto AncientMirroh_GoBackYesNo_1


AncientMirroh_Dreamstone::
# 108 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 109 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_Dreamstone_Text_0
# 110 "data//maps/AncientMirroh/scripts.pory"
	release
	end


# 15 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_0:
# 15 "data//maps/AncientMirroh/scripts.pory"
	face_left
	step_end

# 16 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_1:
# 16 "data//maps/AncientMirroh/scripts.pory"
	jump_in_place_left
	step_end

# 21 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_2:
# 21 "data//maps/AncientMirroh/scripts.pory"
	jump_in_place_right
# 21 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
	step_end

# 25 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_3:
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_down
	step_end

# 32 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_4:
# 32 "data//maps/AncientMirroh/scripts.pory"
	face_down
	step_end

# 33 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_5:
# 33 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 33 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 33 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 33 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 33 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 33 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 33 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 33 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 33 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

# 36 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_6:
# 36 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
	step_end

# 40 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_7:
# 40 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 40 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 40 "data//maps/AncientMirroh/scripts.pory"
	face_down
	step_end

# 41 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_8:
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 41 "data//maps/AncientMirroh/scripts.pory"
	walk_down
	step_end

# 63 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaFinal_Trigger_Movement_0:
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_left
	step_end

# 76 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_GoBackYesNo_Movement_0:
# 76 "data//maps/AncientMirroh/scripts.pory"
	face_up
	step_end

# 77 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_GoBackYesNo_Movement_1:
# 77 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 77 "data//maps/AncientMirroh/scripts.pory"
	face_left
	step_end

AncientMirroh_KolhaMeeting_Trigger_Text_0:
# 19 "data//maps/AncientMirroh/scripts.pory"
	.string "GRUNT: Darn! These HEAVY DUTY BOOTS\n"
	.string "are really slowing me down! I gotta\l"
	.string "catch up to boss MELEA!$"

AncientMirroh_KolhaMeeting_Trigger_Text_1:
# 23 "data//maps/AncientMirroh/scripts.pory"
	.string "GRUNT: Oh no, you're here already?\n"
	.string "Gotta go!$"

AncientMirroh_KolhaMeeting_Trigger_Text_2:
# 28 "data//maps/AncientMirroh/scripts.pory"
	.string "???: Hey GRUNT! Wait right there!$"

AncientMirroh_KolhaMeeting_Trigger_Text_3:
# 38 "data//maps/AncientMirroh/scripts.pory"
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
	.string "this area and catching Pokemon while\l"
	.string "MELEA went on to catch the ANCIENT\l"
	.string "TERROR!\p"
	.string "...\p"
	.string "KOHLA: Well I'm here to do the right\n"
	.string "thing, so get out of my way. Go on -\l"
	.string "move!$"

AncientMirroh_KolhaFinal_Trigger_Text_0:
# 61 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: There you are! Hurry up.$"

AncientMirroh_GoBackYesNo_Text_0:
# 70 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: Do you want to take the\n"
	.string "dreamstone back?$"

AncientMirroh_GoBackYesNo_Text_1:
# 74 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: Let's get ready then.$"

AncientMirroh_GoBackYesNo_Text_2:
# 80 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: 3...2...1...$"

AncientMirroh_GoBackYesNo_Text_3:
# 98 "data//maps/AncientMirroh/scripts.pory"
	.string "KOHLA: What are you waiting for?$"

AncientMirroh_Dreamstone_Text_0:
# 109 "data//maps/AncientMirroh/scripts.pory"
	.string "It's a dreamstone...the surface is so\n"
	.string "smooth. It doesn't look natural at all.$"
