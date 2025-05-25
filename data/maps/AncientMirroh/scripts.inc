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
# 26 "data//maps/AncientMirroh/scripts.pory"
	delay 20
# 28 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_PROFT, AncientMirroh_Tenebris_Trigger_Movement_1
# 29 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 31 "data//maps/AncientMirroh/scripts.pory"
	playse SE_EXIT
# 32 "data//maps/AncientMirroh/scripts.pory"
	delay 4
# 33 "data//maps/AncientMirroh/scripts.pory"
	removeobject LOCALID_PROFT
# 34 "data//maps/AncientMirroh/scripts.pory"
	delay 20
# 35 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_PROF_TENEBRIS_OUTSIDE
# 37 "data//maps/AncientMirroh/scripts.pory"
	special SpawnCameraObject
# 38 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tenebris_Trigger_Movement_2
# 39 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 40 "data//maps/AncientMirroh/scripts.pory"
	special RemoveCameraObject
# 42 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_Tenebris_Trigger_2:
	end


AncientMirroh_KolhaMeeting_Trigger::
# 48 "data//maps/AncientMirroh/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_KOHLA_MEETING, AncientMirroh_KolhaMeeting_Trigger_2
# 50 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 52 "data//maps/AncientMirroh/scripts.pory"
	delay 30
# 53 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_0
# 54 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_1
# 55 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 56 "data//maps/AncientMirroh/scripts.pory"
	delay 16
# 57 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_0
# 58 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_1
# 59 "data//maps/AncientMirroh/scripts.pory"
	release
# 60 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_2
# 61 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 62 "data//maps/AncientMirroh/scripts.pory"
	delay 16
# 63 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_0
# 64 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_2
# 65 "data//maps/AncientMirroh/scripts.pory"
	release
# 66 "data//maps/AncientMirroh/scripts.pory"
	playse SE_FLEE
# 67 "data//maps/AncientMirroh/scripts.pory"
	applymovement 7, AncientMirroh_KolhaMeeting_Trigger_Movement_3
# 68 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 69 "data//maps/AncientMirroh/scripts.pory"
	delay 16
# 70 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_3
# 71 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_4
# 72 "data//maps/AncientMirroh/scripts.pory"
	release
# 73 "data//maps/AncientMirroh/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 52, 38
# 74 "data//maps/AncientMirroh/scripts.pory"
	addobject LOCALID_KOHLA
# 75 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_4
# 76 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_5
# 77 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 79 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_6
# 80 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 81 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_5
# 82 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaMeeting_Trigger_Text_6
# 83 "data//maps/AncientMirroh/scripts.pory"
	release
# 84 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaMeeting_Trigger_Movement_7
# 85 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_KolhaMeeting_Trigger_Movement_8
# 86 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 88 "data//maps/AncientMirroh/scripts.pory"
	removeobject 7
# 89 "data//maps/AncientMirroh/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 26, 55
# 90 "data//maps/AncientMirroh/scripts.pory"
	setobjectxy LOCALID_KOHLA, 26, 55
# 92 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_KOHLA_MEETING
# 93 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_KolhaMeeting_Trigger_2:
	end


AncientMirroh_KolhaFinal_Trigger::
# 102 "data//maps/AncientMirroh/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_FINAL_KOHLA_TRIGGER, AncientMirroh_KolhaFinal_Trigger_2
# 104 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 105 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_5
# 106 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KolhaFinal_Trigger_Text_0
# 107 "data//maps/AncientMirroh/scripts.pory"
	release
# 108 "data//maps/AncientMirroh/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_KolhaFinal_Trigger_Movement_0
# 109 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 110 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_FINAL_KOHLA_TRIGGER
# 111 "data//maps/AncientMirroh/scripts.pory"
	goto AncientMirroh_GoBackYesNo
	return

AncientMirroh_KolhaFinal_Trigger_2:
	end


AncientMirroh_GoBackYesNo::
# 115 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_0, MSGBOX_YESNO
# 117 "data//maps/AncientMirroh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AncientMirroh_GoBackYesNo_2
# 143 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_GoBackYesNo_Movement_1
# 144 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 145 "data//maps/AncientMirroh/scripts.pory"
	delay 16
# 146 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_5
# 147 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_3
AncientMirroh_GoBackYesNo_1:
# 151 "data//maps/AncientMirroh/scripts.pory"
	releaseall
	end

AncientMirroh_GoBackYesNo_2:
# 119 "data//maps/AncientMirroh/scripts.pory"
	speakername AncientMirroh_KolhaMeeting_Trigger_Text_5
# 120 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_1
# 121 "data//maps/AncientMirroh/scripts.pory"
	release
# 122 "data//maps/AncientMirroh/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_GoBackYesNo_Movement_0
# 123 "data//maps/AncientMirroh/scripts.pory"
	waitmovement 0
# 124 "data//maps/AncientMirroh/scripts.pory"
	delay 24
# 125 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_GoBackYesNo_Text_2
# 126 "data//maps/AncientMirroh/scripts.pory"
	release
# 127 "data//maps/AncientMirroh/scripts.pory"
	delay 24
# 128 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8004, 2
# 129 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8005, 2
# 130 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8006, 8
# 131 "data//maps/AncientMirroh/scripts.pory"
	setvar VAR_0x8007, 5
# 132 "data//maps/AncientMirroh/scripts.pory"
	special ShakeCamera
# 133 "data//maps/AncientMirroh/scripts.pory"
	clearflag FLAG_HIDE_LILY_POND_KOHLA
# 134 "data//maps/AncientMirroh/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_DONE
# 139 "data//maps/AncientMirroh/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 140 "data//maps/AncientMirroh/scripts.pory"
	warp MAP_LILY_POND, 12, 4
	goto AncientMirroh_GoBackYesNo_1


AncientMirroh_Dreamstone::
# 157 "data//maps/AncientMirroh/scripts.pory"
	lockall
# 158 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_Dreamstone_Text_0
# 159 "data//maps/AncientMirroh/scripts.pory"
	release
	end


AncientMirroh_KohlaGoBack::
# 164 "data//maps/AncientMirroh/scripts.pory"
	msgbox AncientMirroh_KohlaGoBack_Text_0, MSGBOX_NPC
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
	walk_down
# 23 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 23 "data//maps/AncientMirroh/scripts.pory"
	walk_left
	step_end

# 28 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_Tenebris_Trigger_Movement_1:
# 28 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 28 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 28 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 28 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

# 38 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_Tenebris_Trigger_Movement_2:
# 38 "data//maps/AncientMirroh/scripts.pory"
	walk_right
# 38 "data//maps/AncientMirroh/scripts.pory"
	walk_right
# 38 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 38 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 38 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 38 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

# 53 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_0:
# 53 "data//maps/AncientMirroh/scripts.pory"
	face_left
	step_end

# 54 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_1:
# 54 "data//maps/AncientMirroh/scripts.pory"
	jump_in_place_left
	step_end

# 60 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_2:
# 60 "data//maps/AncientMirroh/scripts.pory"
	jump_in_place_right
# 60 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
	step_end

# 67 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_3:
# 67 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 67 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 67 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 67 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 67 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 67 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
# 67 "data//maps/AncientMirroh/scripts.pory"
	walk_fast_down
	step_end

# 75 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_4:
# 75 "data//maps/AncientMirroh/scripts.pory"
	face_down
	step_end

# 76 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_5:
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 76 "data//maps/AncientMirroh/scripts.pory"
	walk_up
	step_end

# 79 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_6:
# 79 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
	step_end

# 84 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_7:
# 84 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 84 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 84 "data//maps/AncientMirroh/scripts.pory"
	face_down
	step_end

# 85 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaMeeting_Trigger_Movement_8:
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_up
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 85 "data//maps/AncientMirroh/scripts.pory"
	walk_down
	step_end

# 108 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_KolhaFinal_Trigger_Movement_0:
# 108 "data//maps/AncientMirroh/scripts.pory"
	walk_down
# 108 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 108 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 108 "data//maps/AncientMirroh/scripts.pory"
	walk_left
# 108 "data//maps/AncientMirroh/scripts.pory"
	walk_left
	step_end

# 122 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_GoBackYesNo_Movement_0:
# 122 "data//maps/AncientMirroh/scripts.pory"
	face_up
	step_end

# 143 "data//maps/AncientMirroh/scripts.pory"
AncientMirroh_GoBackYesNo_Movement_1:
# 143 "data//maps/AncientMirroh/scripts.pory"
	emote_exclamation_mark
# 143 "data//maps/AncientMirroh/scripts.pory"
	jump_in_place_right
	step_end

AncientMirroh_KolhaMeeting_Trigger_Text_0:
# 57 "data//maps/AncientMirroh/scripts.pory"
	.string "Grunt$"

AncientMirroh_KolhaMeeting_Trigger_Text_1:
# 58 "data//maps/AncientMirroh/scripts.pory"
	.string "I gotta catch up to Melea but these\n"
	.string "Trekking Boots are slowing me down!$"

AncientMirroh_KolhaMeeting_Trigger_Text_2:
# 64 "data//maps/AncientMirroh/scripts.pory"
	.string "Oh no, you're here already? Gotta go!$"

AncientMirroh_KolhaMeeting_Trigger_Text_3:
# 70 "data//maps/AncientMirroh/scripts.pory"
	.string "???$"

AncientMirroh_KolhaMeeting_Trigger_Text_4:
# 71 "data//maps/AncientMirroh/scripts.pory"
	.string "Hey grunt! Wait right there!$"

AncientMirroh_KolhaMeeting_Trigger_Text_5:
# 81 "data//maps/AncientMirroh/scripts.pory"
	.string "Kohla$"

AncientMirroh_KolhaMeeting_Trigger_Text_6:
# 82 "data//maps/AncientMirroh/scripts.pory"
	.string "{PLAYER}? How'd you get over here?\p"
	.string "...\p"
	.string "So that's what happened. I must have\n"
	.string "reached the peak after you did, then.\p"
	.string "Nobody was there when I came. I found\n"
	.string "this big machine and pressed a button,\l"
	.string "and then got transported here!\p"
	.string "...\p"
	.string "Slow as usual, you are. I came after you\n"
	.string "and still managed to catch up.\p"
	.string "Bet you wasted your time exploring and\n"
	.string "catching Pokémon while Melea went on to\l"
	.string "catch the Ancient Terror!\p"
	.string "...\p"
	.string "Well I'm here to do the right thing, so\n"
	.string "get out of my way.\p"
	.string "Go on - move!$"

AncientMirroh_KolhaFinal_Trigger_Text_0:
# 106 "data//maps/AncientMirroh/scripts.pory"
	.string "There you are! Hurry up.$"

AncientMirroh_GoBackYesNo_Text_0:
# 115 "data//maps/AncientMirroh/scripts.pory"
	.string "Head back using the dreamstone?$"

AncientMirroh_GoBackYesNo_Text_1:
# 120 "data//maps/AncientMirroh/scripts.pory"
	.string "Let's get ready then.$"

AncientMirroh_GoBackYesNo_Text_2:
# 125 "data//maps/AncientMirroh/scripts.pory"
	.string "3...2...1...$"

AncientMirroh_GoBackYesNo_Text_3:
# 147 "data//maps/AncientMirroh/scripts.pory"
	.string "What are you waiting for?$"

AncientMirroh_Dreamstone_Text_0:
# 158 "data//maps/AncientMirroh/scripts.pory"
	.string "It's a dreamstone...the surface is so\n"
	.string "smooth. It doesn't look natural at all.$"

AncientMirroh_KohlaGoBack_Text_0:
# 164 "data//maps/AncientMirroh/scripts.pory"
	.string "What are you waiting for?\n"
	.string "Let's hurry up and go back!$"
