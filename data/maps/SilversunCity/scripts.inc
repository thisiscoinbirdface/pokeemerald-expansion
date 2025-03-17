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
# 29 "data//maps/SilversunCity/scripts.pory"
	release
# 32 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET1
# 34 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET2
# 35 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_TENEBRIS
# 36 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 39 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_HIDE_SILVERSUN_PROF
# 40 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_NEXTQUEST
# 43 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end

SilversunCity_OnFrame_3:
	return


SilversunCity_EventScript_Detectives::
# 57 "data//maps/SilversunCity/scripts.pory"
	lockall
# 59 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_DETECTIVES_ENTER, SilversunCity_EventScript_Detectives_2
# 65 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_1
# 66 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_1
# 67 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_1
# 68 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 69 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 71 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_2
# 72 "data//maps/SilversunCity/scripts.pory"
	release
# 74 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_EventScript_Detectives_Movement_0
# 75 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 76 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 78 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_3
# 79 "data//maps/SilversunCity/scripts.pory"
	release
# 80 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 81 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_4
# 82 "data//maps/SilversunCity/scripts.pory"
	release
# 85 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_DETECTIVES_ENTER
SilversunCity_EventScript_Detectives_1:
# 88 "data//maps/SilversunCity/scripts.pory"
	releaseall
	return

SilversunCity_EventScript_Detectives_2:
# 60 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_0
	goto SilversunCity_EventScript_Detectives_1


SilversunCity_KohlaBattleTrigger0::
# 103 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_KOHLA_BATTLE, SilversunCity_KohlaBattleTrigger0_2
# 104 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_NEXTQUEST, SilversunCity_KohlaBattleTrigger0_4
	end

SilversunCity_KohlaBattleTrigger0_2:
	end

SilversunCity_KohlaBattleTrigger0_4:
# 105 "data//maps/SilversunCity/scripts.pory"
	lockall
# 106 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_KohlaBattleTrigger0_Text_0
# 107 "data//maps/SilversunCity/scripts.pory"
	release
# 108 "data//maps/SilversunCity/scripts.pory"
	setobjectxy LOCALID_KOHLA, 11, 30
# 109 "data//maps/SilversunCity/scripts.pory"
	call SilversunCity_EventScript_KohlaBattle
	return


SilversunCity_KohlaBattleTrigger1::
# 113 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_KOHLA_BATTLE, SilversunCity_KohlaBattleTrigger1_2
# 114 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_NEXTQUEST, SilversunCity_KohlaBattleTrigger1_4
	end

SilversunCity_KohlaBattleTrigger1_2:
	end

SilversunCity_KohlaBattleTrigger1_4:
# 115 "data//maps/SilversunCity/scripts.pory"
	lockall
# 116 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_KohlaBattleTrigger0_Text_0
# 117 "data//maps/SilversunCity/scripts.pory"
	release
# 118 "data//maps/SilversunCity/scripts.pory"
	setobjectxy LOCALID_KOHLA, 12, 30
# 119 "data//maps/SilversunCity/scripts.pory"
	call SilversunCity_EventScript_KohlaBattle
	return


SilversunCity_KohlaBattleTrigger2::
# 123 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_KOHLA_BATTLE, SilversunCity_KohlaBattleTrigger2_2
# 124 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_NEXTQUEST, SilversunCity_KohlaBattleTrigger2_4
	end

SilversunCity_KohlaBattleTrigger2_2:
	end

SilversunCity_KohlaBattleTrigger2_4:
# 125 "data//maps/SilversunCity/scripts.pory"
	lockall
# 126 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_KohlaBattleTrigger0_Text_0
# 127 "data//maps/SilversunCity/scripts.pory"
	release
# 128 "data//maps/SilversunCity/scripts.pory"
	setobjectxy LOCALID_KOHLA, 13, 30
# 129 "data//maps/SilversunCity/scripts.pory"
	call SilversunCity_EventScript_KohlaBattle
	return


SilversunCity_KohlaBattleTrigger3::
# 133 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_KOHLA_BATTLE, SilversunCity_KohlaBattleTrigger3_2
# 134 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_NEXTQUEST, SilversunCity_KohlaBattleTrigger3_4
	end

SilversunCity_KohlaBattleTrigger3_2:
	end

SilversunCity_KohlaBattleTrigger3_4:
# 135 "data//maps/SilversunCity/scripts.pory"
	lockall
# 136 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_KohlaBattleTrigger0_Text_0
# 137 "data//maps/SilversunCity/scripts.pory"
	release
# 138 "data//maps/SilversunCity/scripts.pory"
	setobjectxy LOCALID_KOHLA, 14, 30
# 139 "data//maps/SilversunCity/scripts.pory"
	call SilversunCity_EventScript_KohlaBattle
	return


SilversunCity_EventScript_KohlaBattle::
# 144 "data//maps/SilversunCity/scripts.pory"
	lockall
# 145 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_KOHLA, SilversunCity_EventScript_KohlaBattle_Movement_0
# 146 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 148 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC1::
# 163 "data//maps/SilversunCity/scripts.pory"
	lockall
# 164 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 165 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC1_Text_0
# 166 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC2::
# 170 "data//maps/SilversunCity/scripts.pory"
	lockall
# 171 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 172 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC2_Text_0
# 173 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC3::
# 177 "data//maps/SilversunCity/scripts.pory"
	lockall
# 178 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 179 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC3_Text_0
# 180 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC4::
# 184 "data//maps/SilversunCity/scripts.pory"
	lockall
# 185 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 186 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC4_Text_0
# 187 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC5::
# 191 "data//maps/SilversunCity/scripts.pory"
	lockall
# 192 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 193 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC5_Text_0
# 194 "data//maps/SilversunCity/scripts.pory"
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

# 74 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_Detectives_Movement_0:
# 74 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 74 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 74 "data//maps/SilversunCity/scripts.pory"
	walk_up
	step_end

# 145 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_KohlaBattle_Movement_0:
# 145 "data//maps/SilversunCity/scripts.pory"
	walk_left
# 145 "data//maps/SilversunCity/scripts.pory"
	walk_left
# 145 "data//maps/SilversunCity/scripts.pory"
	walk_left
# 145 "data//maps/SilversunCity/scripts.pory"
	walk_left
# 145 "data//maps/SilversunCity/scripts.pory"
	walk_left
# 145 "data//maps/SilversunCity/scripts.pory"
	walk_left
# 145 "data//maps/SilversunCity/scripts.pory"
	walk_left
# 145 "data//maps/SilversunCity/scripts.pory"
	walk_left
	step_end

SilversunCity_OnFrame_Text_0:
# 28 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Professor TENEBRIS! Are\n"
	.string "you okay?\p"
	.string "TENEBRIS: All well, thanks to\n"
	.string "{PLAYER}.\p"
	.string "DETECTIVE: {PLAYER}, this is a\n"
	.string "splendid outcome. KOHLA is still chasing\l"
	.string "the leads from RUE.\p"
	.string "DETECTIVE: So Professor, you hid the\n"
	.string "dreamstone from FENNILAHL TOWN on MT\l"
	.string "MIRROH?\p"
	.string "TENEBRIS: Yes. I began to suspect that\n"
	.string "someone might be after it, so I took the\l"
	.string "dreamstone and disappeared. But they\l"
	.string "found me...and the dreamstone's\l"
	.string "location.\p"
	.string "DETECTIVE: What's done is done. If\n"
	.string "you're safe and sound, we can close the\l"
	.string "case.\p"
	.string "DETECTIVE: But while the case is\n"
	.string "closed, the job is not yet done.\l"
	.string "{PLAYER}, we must stop them from\l"
	.string "obtaining the dreamstone! Head to MT\l"
	.string "MIRROH as soon as possible.\p"
	.string "TENEBRIS: I must return to the lab then\n"
	.string "and talk to RUE. Thank you again\l"
	.string "{PLAYER}.$"

SilversunCity_EventScript_Detectives_Text_0:
# 60 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Have you found the\n"
	.string "Professor yet? No? Then what are you\l"
	.string "standing here for?$"

SilversunCity_EventScript_Detectives_Text_1:
# 65 "data//maps/SilversunCity/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...$"

SilversunCity_EventScript_Detectives_Text_2:
# 71 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Can't you see we're in\n"
	.string "disguise, you idiot? You'll attract\l"
	.string "attention!\p"
	.string "Be casual.\n"
	.string "Go admire those flowerpots.$"

SilversunCity_EventScript_Detectives_Text_3:
# 78 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Better. Now tell me - what\n"
	.string "updates have you got?\p"
	.string "...\p"
	.string "DETECTIVE: What!? You saw the\n"
	.string "Professor with a Team Somber grunt?\l"
	.string "The grunt was taking the Prof out of\l"
	.string "VILETHORN WOODS?$"

SilversunCity_EventScript_Detectives_Text_4:
# 81 "data//maps/SilversunCity/scripts.pory"
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

SilversunCity_KohlaBattleTrigger0_Text_0:
# 106 "data//maps/SilversunCity/scripts.pory"
	.string "KOHLA: Wait right there!$"

SilversunCity_NPC1_Text_0:
# 165 "data//maps/SilversunCity/scripts.pory"
	.string "GLORIA, the city's Gym Leader is also a\n"
	.string "famous actress! Her work centers\l"
	.string "around the dark and eerie.$"

SilversunCity_NPC2_Text_0:
# 172 "data//maps/SilversunCity/scripts.pory"
	.string "I hear the theater has connections\n"
	.string "with the underground. People have seen\l"
	.string "criminal types walk in and out of the\l"
	.string "backstage area.$"

SilversunCity_NPC3_Text_0:
# 179 "data//maps/SilversunCity/scripts.pory"
	.string "I'm so sad I couldn't get tickets for\n"
	.string "tonights show! It's supposed to be a\l"
	.string "live performance of some sort.$"

SilversunCity_NPC4_Text_0:
# 186 "data//maps/SilversunCity/scripts.pory"
	.string "We keep seeing wild KOFFING and TOXEL\n"
	.string "around...they come from the sewers, I\l"
	.string "bet. Their poison is why there are no\l"
	.string "flowers near the sewers.$"

SilversunCity_NPC5_Text_0:
# 193 "data//maps/SilversunCity/scripts.pory"
	.string "The sewers really stink up this part of\n"
	.string "town!$"
