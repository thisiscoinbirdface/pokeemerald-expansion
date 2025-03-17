# 1 "data//maps/SilversunCity/scripts.pory"

# 2 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_DET1, 8
# 3 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_DET2, 7
# 4 "data//maps/SilversunCity/scripts.pory"
    .set LICALID_PROF, 9
# 5 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_KOHLA, 10

SilversunCity_MapScripts::
# 9 "data//maps/SilversunCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SilversunCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SilversunCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data//maps/SilversunCity/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SilversunCity_OnFrame
	.2byte 0


SilversunCity_OnFrame::
# 17 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_OnFrame_1
	return

SilversunCity_OnFrame_1:
# 20 "data//maps/SilversunCity/scripts.pory"
	setobjectxy LOCALID_PROF, 25, 6
	return


SilversunCity_EventScript_Detectives::
# 33 "data//maps/SilversunCity/scripts.pory"
	lockall
# 35 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_DETECTIVES_ENTER, SilversunCity_EventScript_Detectives_2
# 41 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_1
# 42 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_EventScript_Detectives_Movement_0
# 43 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_EventScript_Detectives_Movement_0
# 44 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 45 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 47 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_2
# 48 "data//maps/SilversunCity/scripts.pory"
	release
# 50 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_EventScript_Detectives_Movement_1
# 51 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 52 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 54 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_3
# 55 "data//maps/SilversunCity/scripts.pory"
	release
# 56 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 57 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_4
# 58 "data//maps/SilversunCity/scripts.pory"
	release
# 61 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET1
# 63 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET2
# 64 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 67 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_DETECTIVES_ENTER
SilversunCity_EventScript_Detectives_1:
# 70 "data//maps/SilversunCity/scripts.pory"
	releaseall
	return

SilversunCity_EventScript_Detectives_2:
# 36 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_0
	goto SilversunCity_EventScript_Detectives_1


SilversunCity_NPC1::
# 85 "data//maps/SilversunCity/scripts.pory"
	lockall
# 86 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 87 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC1_Text_0
# 88 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC2::
# 92 "data//maps/SilversunCity/scripts.pory"
	lockall
# 93 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 94 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC2_Text_0
# 95 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC3::
# 99 "data//maps/SilversunCity/scripts.pory"
	lockall
# 100 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 101 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC3_Text_0
# 102 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC4::
# 106 "data//maps/SilversunCity/scripts.pory"
	lockall
# 107 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 108 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC4_Text_0
# 109 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC5::
# 113 "data//maps/SilversunCity/scripts.pory"
	lockall
# 114 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 115 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC5_Text_0
# 116 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


# 42 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_Detectives_Movement_0:
# 42 "data//maps/SilversunCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 50 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_Detectives_Movement_1:
# 50 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 50 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 50 "data//maps/SilversunCity/scripts.pory"
	walk_up
	step_end

SilversunCity_EventScript_Detectives_Text_0:
# 36 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Have you found the\n"
	.string "Professor yet? No? Then what are you\l"
	.string "standing here for?$"

SilversunCity_EventScript_Detectives_Text_1:
# 41 "data//maps/SilversunCity/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...$"

SilversunCity_EventScript_Detectives_Text_2:
# 47 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Can't you see we're in\n"
	.string "disguise, you idiot? You'll attract\l"
	.string "attention!\p"
	.string "Be casual.\n"
	.string "Go admire those flowerpots.$"

SilversunCity_EventScript_Detectives_Text_3:
# 54 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Better. Now tell me - what\n"
	.string "updates have you got?\p"
	.string "...\p"
	.string "DETECTIVE: What!? You saw the\n"
	.string "Professor with a Team Somber grunt?\l"
	.string "The grunt was taking the Prof out of\l"
	.string "VILETHORN WOODS?$"

SilversunCity_EventScript_Detectives_Text_4:
# 57 "data//maps/SilversunCity/scripts.pory"
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
# 87 "data//maps/SilversunCity/scripts.pory"
	.string "GLORIA, the city's Gym Leader is also a\n"
	.string "famous actress! Her work centers\l"
	.string "around the dark and eerie.$"

SilversunCity_NPC2_Text_0:
# 94 "data//maps/SilversunCity/scripts.pory"
	.string "I hear the theater has connections\n"
	.string "with the underground. People have seen\l"
	.string "criminal types walk in and out of the\l"
	.string "backstage area.$"

SilversunCity_NPC3_Text_0:
# 101 "data//maps/SilversunCity/scripts.pory"
	.string "I'm so sad I couldn't get tickets for\n"
	.string "tonights show! It's supposed to be a\l"
	.string "live performance of some sort.$"

SilversunCity_NPC4_Text_0:
# 108 "data//maps/SilversunCity/scripts.pory"
	.string "We keep seeing wild KOFFING and TOXEL\n"
	.string "around...they come from the sewers, I\l"
	.string "bet. Their poison is why there are no\l"
	.string "flowers near the sewers.$"

SilversunCity_NPC5_Text_0:
# 115 "data//maps/SilversunCity/scripts.pory"
	.string "The sewers really stink up this part of\n"
	.string "town!$"
