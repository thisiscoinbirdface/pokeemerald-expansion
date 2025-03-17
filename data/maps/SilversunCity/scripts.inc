# 1 "data//maps/SilversunCity/scripts.pory"

# 2 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_DET1, 11
# 3 "data//maps/SilversunCity/scripts.pory"
    .set LOCALID_DET2, 12

SilversunCity_MapScripts::
	.byte 0


SilversunCity_EventScript_Detectives::
# 18 "data//maps/SilversunCity/scripts.pory"
	lockall
# 22 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_0
# 23 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_EventScript_Detectives_Movement_0
# 24 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_EventScript_Detectives_Movement_0
# 25 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 26 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 28 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_1
# 29 "data//maps/SilversunCity/scripts.pory"
	release
# 31 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_EventScript_Detectives_Movement_1
# 32 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 33 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 35 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_2
# 36 "data//maps/SilversunCity/scripts.pory"
	release
# 37 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 38 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_3
# 39 "data//maps/SilversunCity/scripts.pory"
	release
# 42 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET1
# 44 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET2
# 45 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 48 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_DETECTIVES_ENTER
# 50 "data//maps/SilversunCity/scripts.pory"
	releaseall
	return


SilversunCity_NPC1::
# 65 "data//maps/SilversunCity/scripts.pory"
	lockall
# 66 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 67 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC1_Text_0
# 68 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC2::
# 72 "data//maps/SilversunCity/scripts.pory"
	lockall
# 73 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 74 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC2_Text_0
# 75 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC3::
# 79 "data//maps/SilversunCity/scripts.pory"
	lockall
# 80 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 81 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC3_Text_0
# 82 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC4::
# 86 "data//maps/SilversunCity/scripts.pory"
	lockall
# 87 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 88 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC4_Text_0
# 89 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC5::
# 93 "data//maps/SilversunCity/scripts.pory"
	lockall
# 94 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 95 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC5_Text_0
# 96 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


# 23 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_Detectives_Movement_0:
# 23 "data//maps/SilversunCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 31 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_Detectives_Movement_1:
# 31 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 31 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 31 "data//maps/SilversunCity/scripts.pory"
	walk_up
	step_end

SilversunCity_EventScript_Detectives_Text_0:
# 22 "data//maps/SilversunCity/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...$"

SilversunCity_EventScript_Detectives_Text_1:
# 28 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Can't you see we're in\n"
	.string "disguise, you idiot? You'll attract\l"
	.string "attention!\p"
	.string "Be casual.\n"
	.string "Go admire those flowerpots.$"

SilversunCity_EventScript_Detectives_Text_2:
# 35 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Better. Now tell me - what\n"
	.string "updates have you got?\p"
	.string "...\p"
	.string "DETECTIVE: What!? You saw the\n"
	.string "Professor with a Team Somber grunt?\l"
	.string "The grunt was taking the Prof out of\l"
	.string "VILETHORN WOODS?$"

SilversunCity_EventScript_Detectives_Text_3:
# 38 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: This all but confirms our\n"
	.string "suspicions - Team Somber must be\l"
	.string "holding the Professor hostage! That's\l"
	.string "how they learned about the\l"
	.string "dreamstones.\p"
	.string "And if you saw them here, it means the\n"
	.string "Professor is trapped inside their\l"
	.string "headquarters!\p"
	.string "But we still don't know where their\n"
	.string "headquarters are...\p"
	.string "{PLAYER}, it's clear what to do. The\n"
	.string "next task is to find Team Somber's HQ.\l"
	.string "Explore all of SILVERSUN CITY. Don't\l"
	.string "leave any stone unturned! RUE has\l"
	.string "given us a separate lead that KOHLA is\l"
	.string "following up on, so you're on your own on\l"
	.string "this one.\p"
	.string "Good luck.$"

SilversunCity_NPC1_Text_0:
# 67 "data//maps/SilversunCity/scripts.pory"
	.string "GLORIA, the city's Gym Leader is also a\n"
	.string "famous actress! Her work centers\l"
	.string "around the dark and eerie.$"

SilversunCity_NPC2_Text_0:
# 74 "data//maps/SilversunCity/scripts.pory"
	.string "I hear the theater has connections\n"
	.string "with the underground. People have seen\l"
	.string "criminal types walk in and out of the\l"
	.string "backstage area.$"

SilversunCity_NPC3_Text_0:
# 81 "data//maps/SilversunCity/scripts.pory"
	.string "I'm so sad I couldn't get tickets for\n"
	.string "tonights show! It's supposed to be a\l"
	.string "live performance of some sort.$"

SilversunCity_NPC4_Text_0:
# 88 "data//maps/SilversunCity/scripts.pory"
	.string "We keep seeing wild KOFFING and TOXEL\n"
	.string "around...they come from the sewers, I\l"
	.string "bet. Their poison is why there are no\l"
	.string "flowers near the sewers.$"

SilversunCity_NPC5_Text_0:
# 95 "data//maps/SilversunCity/scripts.pory"
	.string "The sewers really stink up this part of\n"
	.string "town!$"
