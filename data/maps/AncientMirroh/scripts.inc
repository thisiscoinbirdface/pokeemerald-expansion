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
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_0
# 55 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_1
# 56 "data//maps/AncientMirroh/scripts.pory"
	release
# 57 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_2
# 58 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 59 "data//maps/AncientMirroh/scripts.pory"
	delay 16
# 60 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_0
# 61 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_2
# 62 "data//maps/AncientMirroh/scripts.pory"
	release
# 63 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_3
# 64 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 65 "data//maps/AncientMirroh/scripts.pory"
	delay 16
# 66 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_3
# 67 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_4
# 68 "data//maps/AncientMirroh/scripts.pory"
	release
# 69 "data//maps/AncientMirroh/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 52, 38
# 70 "data//maps/AncientMirroh/scripts.pory"
	addobject LOCALID_KOHLA
# 71 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_4
# 72 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_5
# 73 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 75 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_6
# 76 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 77 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_5
# 78 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_6
# 79 "data//maps/AncientMirroh/scripts.pory"
	release
# 80 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_7
# 81 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_8
# 82 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 84 "data//maps/AncientMirroh/scripts.pory"
	removeobject 7
# 85 "data//maps/AncientMirroh/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 26, 55
# 86 "data//maps/AncientMirroh/scripts.pory"
	setobjectxy LOCALID_KOHLA, 26, 55
# 88 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_KOHLA_MEETING
# 89 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_KolhaMeeting_Trigger_2:
	end


AncientMirroh_KolhaFinal_Trigger::
# 98 "data//maps/AncientMirroh/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_FINAL_KOHLA_TRIGGER, AncientMirroh_KolhaFinal_Trigger_2
# 100 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 101 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_5
# 102 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaFinal_Trigger_Text_0
# 103 "data//maps/AncientMirroh/scripts.pory"
	release
# 104 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaFinal_Trigger_Movement_0
# 105 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 106 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_FINAL_KOHLA_TRIGGER
# 107 "data//maps/AncientMirroh/scripts.pory"
	goto AncientMirroh_GoBackYesNo
	return

AncientMirroh_KolhaFinal_Trigger_2:
	end


AncientMirroh_GoBackYesNo::
# 111 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_0, MSGBOX_YESNO
# 113 "data//maps/AncientMirroh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AncientMirroh_GoBackYesNo_2
# 139 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_5
# 140 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_3
AncientMirroh_GoBackYesNo_1:
# 144 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_GoBackYesNo_2:
# 115 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_5
# 116 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_1
# 117 "data//maps/AncientMirroh/scripts.pory"
	release
# 118 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_GoBackYesNo_Movement_0
# 119 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 120 "data//maps/AncientMirroh/scripts.pory"
	delay 24
# 121 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_2
# 122 "data//maps/AncientMirroh/scripts.pory"
	release
# 123 "data//maps/AncientMirroh/scripts.pory"
	delay 24
# 124 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8004, 2
# 125 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8005, 2
# 126 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8006, 8
# 127 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8007, 5
# 128 "data//maps/AncientMirroh/scripts.pory"
	special ShakeCamera
# 129 "data//maps/AncientMirroh/scripts.pory"
	clearflag FLAG_HIDE_LILY_POND_KOHLA
# 130 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_DONE
# 135 "data//maps/AncientMirroh/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 136 "data//maps/AncientMirroh/scripts.pory"
	warp MAP_LILY_POND, 12, 4
	goto AncientMirroh_GoBackYesNo_1


AncientMirroh_Dreamstone::
# 150 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 151 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_Dreamstone_Text_0
# 152 "data//maps/AncientMirroh/scripts.pory"
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

# 57 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_2:
# 57 "data//maps/AncientMirroh/scripts.pory"
	jump_in_place_right
# 57 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
	step_end

# 63 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_3:
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 63 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
	step_end

# 71 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_4:
# 71 "data//maps/AncientMirroh/scripts.pory"
	face_down
	step_end

# 72 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_5:
# 72 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 72 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 72 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 72 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 72 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 72 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 72 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 72 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 72 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

# 75 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_6:
# 75 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
	step_end

# 80 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_7:
# 80 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 80 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 80 "data//maps/AncientMirroh/scripts.pory"
	face_down
	step_end

# 81 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_8:
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 81 "data//maps/AncientMirroh/scripts.pory"
	walk_down
	step_end

# 104 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaFinal_Trigger_Movement_0:
# 104 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 104 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 104 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 104 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 104 "data//maps/AncientMirroh/scripts.pory"
	walk_left
	step_end

# 118 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_GoBackYesNo_Movement_0:
# 118 "data//maps/AncientMirroh/scripts.pory"
	face_up
	step_end

AncientMirroh_KolhaMeeting_Trigger_Text_0:
# 54 "data//maps/AncientMirroh/scripts.pory"
	.string "Grunt$"

AncientMirroh_KolhaMeeting_Trigger_Text_1:
# 55 "data//maps/AncientMirroh/scripts.pory"
	.string "Darn! These Trekking Boots are really\n"
	.string "slowing me down! I gotta catch up to\l"
	.string "Melea!$"

AncientMirroh_KolhaMeeting_Trigger_Text_2:
# 61 "data//maps/AncientMirroh/scripts.pory"
	.string "Oh no, you're here already? Gotta go!$"

AncientMirroh_KolhaMeeting_Trigger_Text_3:
# 66 "data//maps/AncientMirroh/scripts.pory"
	.string "???$"

AncientMirroh_KolhaMeeting_Trigger_Text_4:
# 67 "data//maps/AncientMirroh/scripts.pory"
	.string "Hey grunt! Wait right there!$"

AncientMirroh_KolhaMeeting_Trigger_Text_5:
# 77 "data//maps/AncientMirroh/scripts.pory"
	.string "Kohla$"

AncientMirroh_KolhaMeeting_Trigger_Text_6:
# 78 "data//maps/AncientMirroh/scripts.pory"
	.string "{PLAYER}? How'd you get over here?\p"
	.string "...\p"
	.string "So that's what happened. I must have\n"
	.string "reached the peak after you did, then.\l"
	.string "When I came, nobody was there. I found\l"
	.string "this big machine and pressed a button,\l"
	.string "and then suddenly got transported\l"
	.string "here!\p"
	.string "...\p"
	.string "Slow as usual, you are. I came after you\n"
	.string "and still managed to catch up. Bet you\l"
	.string "wasted your time exploring this area\l"
	.string "and catching Pokémon while Melea went\l"
	.string "on to catch the Ancient Terror!\p"
	.string "...\p"
	.string "Well I'm here to do the right thing, so\n"
	.string "get out of my way. Go on - move!$"

AncientMirroh_KolhaFinal_Trigger_Text_0:
# 102 "data//maps/AncientMirroh/scripts.pory"
	.string "There you are! Hurry up.$"

AncientMirroh_GoBackYesNo_Text_0:
# 111 "data//maps/AncientMirroh/scripts.pory"
	.string "Do you want to take the dreamstone\n"
	.string "back?$"

AncientMirroh_GoBackYesNo_Text_1:
# 116 "data//maps/AncientMirroh/scripts.pory"
	.string "Let's get ready then.$"

AncientMirroh_GoBackYesNo_Text_2:
# 121 "data//maps/AncientMirroh/scripts.pory"
	.string "3...2...1...$"

AncientMirroh_GoBackYesNo_Text_3:
# 140 "data//maps/AncientMirroh/scripts.pory"
	.string "What are you waiting for?$"

AncientMirroh_Dreamstone_Text_0:
# 151 "data//maps/AncientMirroh/scripts.pory"
	.string "It's a dreamstone...the surface is so\n"
	.string "smooth. It doesn't look natural at all.$"
