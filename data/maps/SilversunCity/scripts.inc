# 1 "data//maps/SilversunCity/scripts.pory"

# 2 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_DET1, 7
# 3 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_DET2, 6
# 4 "data//maps/SilversunCity/scripts.pory"
    .set LICALID_PROF, 8
# 5 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_KOHLA, 9

SilversunCity_MapScripts::
# 10 "data//maps/SilversunCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilversunCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data//maps/SilversunCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SilversunCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SilversunCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data//maps/SilversunCity/scripts.pory"
	call SilversunCity_OnTransition
	return

SilversunCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data//maps/SilversunCity/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SilversunCity_OnFrame
	.2byte 0


SilversunCity_OnTransition::
# 23 "data//maps/SilversunCity/scripts.pory"
	setobjectxyperm LOCALID_PROF, 25, 6
# 24 "data//maps/SilversunCity/scripts.pory"
	setobjectxy LOCALID_PROF, 25, 6
# 25 "data//maps/SilversunCity/scripts.pory"
	setobjectmovementtype LOCALID_PROF, MOVEMENT_TYPE_FACE_UP
	return


SilversunCity_OnFrame::
# 29 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_OnFrame_1
	return

SilversunCity_OnFrame_1:
# 30 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_NEXTQUEST, SilversunCity_OnFrame_3
# 35 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_0
# 36 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_0
# 37 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 38 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 40 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_0
# 45 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_NEXTQUEST
	return

SilversunCity_OnFrame_3:
	return


SilversunCity_EventScript_Detectives::
# 58 "data//maps/SilversunCity/scripts.pory"
	lockall
# 60 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_DETECTIVES_ENTER, SilversunCity_EventScript_Detectives_2
# 66 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_1
# 67 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_0
# 68 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_0
# 69 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 70 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 72 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_2
# 73 "data//maps/SilversunCity/scripts.pory"
	release
# 75 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_EventScript_Detectives_Movement_0
# 76 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 77 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 79 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_3
# 80 "data//maps/SilversunCity/scripts.pory"
	release
# 81 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 82 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_4
# 83 "data//maps/SilversunCity/scripts.pory"
	release
# 86 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_DETECTIVES_ENTER
SilversunCity_EventScript_Detectives_1:
# 89 "data//maps/SilversunCity/scripts.pory"
	releaseall
	return

SilversunCity_EventScript_Detectives_2:
# 61 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_0
	goto SilversunCity_EventScript_Detectives_1


SilversunCity_NPC1::
# 104 "data//maps/SilversunCity/scripts.pory"
	lockall
# 105 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 106 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC1_Text_0
# 107 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC2::
# 111 "data//maps/SilversunCity/scripts.pory"
	lockall
# 112 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 113 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC2_Text_0
# 114 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC3::
# 118 "data//maps/SilversunCity/scripts.pory"
	lockall
# 119 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 120 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC3_Text_0
# 121 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC4::
# 125 "data//maps/SilversunCity/scripts.pory"
	lockall
# 126 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 127 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC4_Text_0
# 128 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC5::
# 132 "data//maps/SilversunCity/scripts.pory"
	lockall
# 133 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 134 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC5_Text_0
# 135 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


# 35 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_0:
# 35 "data//maps/SilversunCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 75 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_Detectives_Movement_0:
# 75 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 75 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 75 "data//maps/SilversunCity/scripts.pory"
	walk_up
	step_end

SilversunCity_OnFrame_Text_0:
# 40 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Professor TENEBRIS! Are\n"
	.string "you okay?\p"
	.string "TENEBRIS: Slightly bruised but alright\n"
	.string "otherwise. The greater damage is yet to\l"
	.string "be seen.\p"
	.string "DETECTIVE: {PLAYER}, this is a\n"
	.string "splendid outcome. You've done a great\l"
	.string "job.$"

SilversunCity_EventScript_Detectives_Text_0:
# 61 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Have you found the\n"
	.string "Professor yet? No? Then what are you\l"
	.string "standing here for?$"

SilversunCity_EventScript_Detectives_Text_1:
# 66 "data//maps/SilversunCity/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...$"

SilversunCity_EventScript_Detectives_Text_2:
# 72 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Can't you see we're in\n"
	.string "disguise, you idiot? You'll attract\l"
	.string "attention!\p"
	.string "Be casual.\n"
	.string "Go admire those flowerpots.$"

SilversunCity_EventScript_Detectives_Text_3:
# 79 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Better. Now tell me - what\n"
	.string "updates have you got?\p"
	.string "...\p"
	.string "DETECTIVE: What!? You saw the\n"
	.string "Professor with a Team Somber grunt?\l"
	.string "The grunt was taking the Prof out of\l"
	.string "VILETHORN WOODS?$"

SilversunCity_EventScript_Detectives_Text_4:
# 82 "data//maps/SilversunCity/scripts.pory"
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
# 106 "data//maps/SilversunCity/scripts.pory"
	.string "GLORIA, the city's Gym Leader is also a\n"
	.string "famous actress! Her work centers\l"
	.string "around the dark and eerie.$"

SilversunCity_NPC2_Text_0:
# 113 "data//maps/SilversunCity/scripts.pory"
	.string "I hear the theater has connections\n"
	.string "with the underground. People have seen\l"
	.string "criminal types walk in and out of the\l"
	.string "backstage area.$"

SilversunCity_NPC3_Text_0:
# 120 "data//maps/SilversunCity/scripts.pory"
	.string "I'm so sad I couldn't get tickets for\n"
	.string "tonights show! It's supposed to be a\l"
	.string "live performance of some sort.$"

SilversunCity_NPC4_Text_0:
# 127 "data//maps/SilversunCity/scripts.pory"
	.string "We keep seeing wild KOFFING and TOXEL\n"
	.string "around...they come from the sewers, I\l"
	.string "bet. Their poison is why there are no\l"
	.string "flowers near the sewers.$"

SilversunCity_NPC5_Text_0:
# 134 "data//maps/SilversunCity/scripts.pory"
	.string "The sewers really stink up this part of\n"
	.string "town!$"
