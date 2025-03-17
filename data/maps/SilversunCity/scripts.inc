# 1 "data//maps/SilversunCity/scripts.pory"

# 2 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_DET1, 7
# 3 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_DET2, 6
# 4 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_TENEBRIS, 8
# 5 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_KOHLA, 9

SilversunCity_MapScripts::
# 9 "data//maps/SilversunCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SilversunCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SilversunCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data//maps/SilversunCity/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SilversunCity_OnFrame
	.2byte 0


SilversunCity_OnFrame::
# 16 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_OnFrame_1
	return

SilversunCity_OnFrame_1:
# 17 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_NEXTQUEST, SilversunCity_OnFrame_3
# 22 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_OnFrame_Movement_0
# 23 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_1
# 24 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_1
# 25 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 26 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 28 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_0
# 33 "data//maps/SilversunCity/scripts.pory"
	release
# 36 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET1
# 38 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET2
# 39 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_TENEBRIS
# 40 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 43 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_HIDE_SILVERSUN_PROF
# 44 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_NEXTQUEST
# 47 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end

SilversunCity_OnFrame_3:
	return


SilversunCity_EventScript_Detectives::
# 61 "data//maps/SilversunCity/scripts.pory"
	lockall
# 63 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_DETECTIVES_ENTER, SilversunCity_EventScript_Detectives_2
# 69 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_1
# 70 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_1
# 71 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_1
# 72 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 73 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 75 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_2
# 76 "data//maps/SilversunCity/scripts.pory"
	release
# 78 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_EventScript_Detectives_Movement_0
# 79 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 80 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 82 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_3
# 83 "data//maps/SilversunCity/scripts.pory"
	release
# 84 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 85 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_4
# 86 "data//maps/SilversunCity/scripts.pory"
	release
# 89 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_DETECTIVES_ENTER
SilversunCity_EventScript_Detectives_1:
# 92 "data//maps/SilversunCity/scripts.pory"
	releaseall
	return

SilversunCity_EventScript_Detectives_2:
# 64 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_0
	goto SilversunCity_EventScript_Detectives_1


SilversunCity_NPC1::
# 107 "data//maps/SilversunCity/scripts.pory"
	lockall
# 108 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 109 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC1_Text_0
# 110 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC2::
# 114 "data//maps/SilversunCity/scripts.pory"
	lockall
# 115 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 116 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC2_Text_0
# 117 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC3::
# 121 "data//maps/SilversunCity/scripts.pory"
	lockall
# 122 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 123 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC3_Text_0
# 124 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC4::
# 128 "data//maps/SilversunCity/scripts.pory"
	lockall
# 129 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 130 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC4_Text_0
# 131 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC5::
# 135 "data//maps/SilversunCity/scripts.pory"
	lockall
# 136 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 137 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC5_Text_0
# 138 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


# 22 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_0:
# 22 "data//maps/SilversunCity/scripts.pory"
	face_up
	step_end

# 23 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_1:
# 23 "data//maps/SilversunCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 78 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_Detectives_Movement_0:
# 78 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 78 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 78 "data//maps/SilversunCity/scripts.pory"
	walk_up
	step_end

SilversunCity_OnFrame_Text_0:
# 28 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Professor TENEBRIS! Are\n"
	.string "you okay?\p"
	.string "TENEBRIS: Slightly bruised but alright\n"
	.string "otherwise. The greater damage is yet to\l"
	.string "be seen.\p"
	.string "DETECTIVE: {PLAYER}, this is a\n"
	.string "splendid outcome. You've done a great\l"
	.string "job.$"

SilversunCity_EventScript_Detectives_Text_0:
# 64 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Have you found the\n"
	.string "Professor yet? No? Then what are you\l"
	.string "standing here for?$"

SilversunCity_EventScript_Detectives_Text_1:
# 69 "data//maps/SilversunCity/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...$"

SilversunCity_EventScript_Detectives_Text_2:
# 75 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Can't you see we're in\n"
	.string "disguise, you idiot? You'll attract\l"
	.string "attention!\p"
	.string "Be casual.\n"
	.string "Go admire those flowerpots.$"

SilversunCity_EventScript_Detectives_Text_3:
# 82 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Better. Now tell me - what\n"
	.string "updates have you got?\p"
	.string "...\p"
	.string "DETECTIVE: What!? You saw the\n"
	.string "Professor with a Team Somber grunt?\l"
	.string "The grunt was taking the Prof out of\l"
	.string "VILETHORN WOODS?$"

SilversunCity_EventScript_Detectives_Text_4:
# 85 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: This all but confirms our\n"
	.string "suspicions - Team Somber must be\l"
	.string "holding the Professor hostage! That's\l"
	.string "how they learned about the\l"
	.string "dreamstones.\p"
	.string "And if you saw them here, it means the\n"
	.string "Professor is trapped inside their\l"
	.string "headquarters!\p"
	.string "{PLAYER}, it's clear what to do. The\n"
	.string "next task is to find Team Somber's HQ\l"
	.string "and free the Professor.\p"
	.string "RUE has given us a separate lead that\n"
	.string "KOHLA is following up on, so you're on\l"
	.string "your own on this one.\p"
	.string "Good luck.$"

SilversunCity_NPC1_Text_0:
# 109 "data//maps/SilversunCity/scripts.pory"
	.string "GLORIA, the city's Gym Leader is also a\n"
	.string "famous actress! Her work centers\l"
	.string "around the dark and eerie.$"

SilversunCity_NPC2_Text_0:
# 116 "data//maps/SilversunCity/scripts.pory"
	.string "I hear the theater has connections\n"
	.string "with the underground. People have seen\l"
	.string "criminal types walk in and out of the\l"
	.string "backstage area.$"

SilversunCity_NPC3_Text_0:
# 123 "data//maps/SilversunCity/scripts.pory"
	.string "I'm so sad I couldn't get tickets for\n"
	.string "tonights show! It's supposed to be a\l"
	.string "live performance of some sort.$"

SilversunCity_NPC4_Text_0:
# 130 "data//maps/SilversunCity/scripts.pory"
	.string "We keep seeing wild KOFFING and TOXEL\n"
	.string "around...they come from the sewers, I\l"
	.string "bet. Their poison is why there are no\l"
	.string "flowers near the sewers.$"

SilversunCity_NPC5_Text_0:
# 137 "data//maps/SilversunCity/scripts.pory"
	.string "The sewers really stink up this part of\n"
	.string "town!$"
