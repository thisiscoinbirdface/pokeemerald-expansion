# 1 "data//maps/AncientMirroh/scripts.pory"

# 2 "data//maps/AncientMirroh/scripts.pory"
    .set LOCALID_KOHLA, 6

AncientMirroh_MapScripts::
	.byte 0


AncientMirroh_KolhaMeeting_Trigger::
# 10 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 11 "data//maps/AncientMirroh/scripts.pory"
	delay 30
# 12 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_0
# 13 "data//maps/AncientMirroh/scripts.pory"
	release
# 14 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_0
# 15 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 16 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_1
# 17 "data//maps/AncientMirroh/scripts.pory"
	release
# 18 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_1
# 19 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 21 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_2
# 22 "data//maps/AncientMirroh/scripts.pory"
	release
# 23 "data//maps/AncientMirroh/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 52, 38
# 24 "data//maps/AncientMirroh/scripts.pory"
	addobject LOCALID_KOHLA
# 25 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_2
# 26 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 30 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end


# 14 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_0:
# 14 "data//maps/AncientMirroh/scripts.pory"
	jump_in_place_right
# 14 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
	step_end

# 18 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_1:
# 18 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 18 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 18 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 18 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 18 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 18 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 18 "data//maps/AncientMirroh/scripts.pory"
	walk_down
	step_end

# 25 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_2:
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 25 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

AncientMirroh_KolhaMeeting_Trigger_Text_0:
# 12 "data//maps/AncientMirroh/scripts.pory"
	.string "GRUNT: Darn! These HEAVY DUTY BOOTS\n"
	.string "are really slowing me down! I gotta\l"
	.string "catch up to boss MELEA!$"

AncientMirroh_KolhaMeeting_Trigger_Text_1:
# 16 "data//maps/AncientMirroh/scripts.pory"
	.string "GRUNT: Oh no, you're here already?\n"
	.string "Gotta go!$"

AncientMirroh_KolhaMeeting_Trigger_Text_2:
# 21 "data//maps/AncientMirroh/scripts.pory"
	.string "???: Hey GRUNT! Wait right there!$"
