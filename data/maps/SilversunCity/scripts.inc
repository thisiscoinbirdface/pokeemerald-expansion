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
# 12 "data//maps/SilversunCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilversunCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data//maps/SilversunCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SilversunCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SilversunCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_VISITED_SILVERSUN_CITY
	return

SilversunCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data//maps/SilversunCity/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SilversunCity_OnFrame
	.2byte 0


SilversunCity_OnFrame::
# 19 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_OnFrame_1
	return

SilversunCity_OnFrame_1:
# 20 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_NEXTQUEST, SilversunCity_OnFrame_3
# 25 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_OnFrame_Movement_0
# 26 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_1
# 27 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_1
# 28 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 29 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 31 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 32 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_1
# 33 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_2
# 34 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_3
# 35 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 36 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_4
# 37 "data//maps/SilversunCity/scripts.pory"
	release
# 38 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_2
# 39 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_2
# 40 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 41 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 42 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_5
# 43 "data//maps/SilversunCity/scripts.pory"
	release
# 44 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_TENEBRIS, SilversunCity_OnFrame_Movement_1
# 45 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 46 "data//maps/SilversunCity/scripts.pory"
	delay 16
# 47 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_2
# 48 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_6
# 49 "data//maps/SilversunCity/scripts.pory"
	release
# 50 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 51 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 52 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_7
# 53 "data//maps/SilversunCity/scripts.pory"
	release
# 54 "data//maps/SilversunCity/scripts.pory"
	delay 16
# 55 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_2
# 56 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_8
# 57 "data//maps/SilversunCity/scripts.pory"
	release
# 58 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_2
# 59 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_2
# 60 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 61 "data//maps/SilversunCity/scripts.pory"
	delay 16
# 62 "data//maps/SilversunCity/scripts.pory"
	msgbox_delay SilversunCity_OnFrame_Text_0, SilversunCity_OnFrame_Text_9
# 63 "data//maps/SilversunCity/scripts.pory"
	release
# 64 "data//maps/SilversunCity/scripts.pory"
	delay 16
# 65 "data//maps/SilversunCity/scripts.pory"
	msgbox_delay SilversunCity_OnFrame_Text_2, SilversunCity_OnFrame_Text_10
# 66 "data//maps/SilversunCity/scripts.pory"
	msgbox_delay SilversunCity_OnFrame_Text_0, SilversunCity_OnFrame_Text_11
# 67 "data//maps/SilversunCity/scripts.pory"
	delay 16
# 68 "data//maps/SilversunCity/scripts.pory"
	msgbox_delay SilversunCity_OnFrame_Text_0, SilversunCity_OnFrame_Text_12
# 69 "data//maps/SilversunCity/scripts.pory"
	release
# 70 "data//maps/SilversunCity/scripts.pory"
	delay 16
# 71 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_2
# 72 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_13
# 73 "data//maps/SilversunCity/scripts.pory"
	release
# 76 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_TENEBRIS, SilversunCity_OnFrame_Movement_3
# 77 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 78 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_TENEBRIS
# 79 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_OnFrame_Movement_4
# 80 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 81 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_14
# 82 "data//maps/SilversunCity/scripts.pory"
	release
# 85 "data//maps/SilversunCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 86 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET1
# 87 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET2
# 88 "data//maps/SilversunCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 91 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_HIDE_SILVERSUN_PROF
# 92 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_NEXTQUEST
# 93 "data//maps/SilversunCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_5
# 96 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end

SilversunCity_OnFrame_3:
	return


SilversunCity_EventScript_Detectives::
# 106 "data//maps/SilversunCity/scripts.pory"
	lockall
# 108 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_DETECTIVES_ENTER, SilversunCity_EventScript_Detectives_2
# 115 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 116 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_1
# 117 "data//maps/SilversunCity/scripts.pory"
	release
# 118 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_1
# 119 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_1
# 120 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 121 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 123 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 124 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_2
# 125 "data//maps/SilversunCity/scripts.pory"
	release
# 127 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_EventScript_Detectives_Movement_0
# 128 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 129 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 131 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 132 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_3
# 133 "data//maps/SilversunCity/scripts.pory"
	release
# 134 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 135 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 136 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_4
# 137 "data//maps/SilversunCity/scripts.pory"
	release
# 140 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_DETECTIVES_ENTER
# 141 "data//maps/SilversunCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_4
SilversunCity_EventScript_Detectives_1:
# 144 "data//maps/SilversunCity/scripts.pory"
	releaseall
	return

SilversunCity_EventScript_Detectives_2:
# 109 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 110 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_0
	goto SilversunCity_EventScript_Detectives_1


SilversunCity_NPC1::
# 162 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC1_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC2::
# 166 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC2_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC3::
# 170 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC3_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC4::
# 174 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC4_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC5::
# 179 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC5_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC6::
# 184 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC6_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC7::
# 189 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC7_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC8::
# 194 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC8_Text_0, MSGBOX_NPC
	end


SilversunCity_Murkrow::
# 199 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 200 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Murkrow_Text_0, MSGBOX_NPC
	end


SilversunCity_Meowth::
# 205 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 206 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Meowth_Text_0, MSGBOX_NPC
	end


SilversunCity_Vivillon::
# 211 "data//maps/SilversunCity/scripts.pory"
	lockall
# 212 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 213 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_VIVILLON, CRY_MODE_NORMAL
# 215 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_VIVILLON, SilversunCity_Vivillon_2
# 218 "data//maps/SilversunCity/scripts.pory"
	checkitem ITEM_LAVA_COOKIE
# 219 "data//maps/SilversunCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Vivillon_5
# 232 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_0
SilversunCity_Vivillon_1:
# 235 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end

SilversunCity_Vivillon_2:
# 216 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_0
	goto SilversunCity_Vivillon_1

SilversunCity_Vivillon_5:
# 220 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_1, MSGBOX_YESNO
# 221 "data//maps/SilversunCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Vivillon_8
# 229 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_4
	goto SilversunCity_Vivillon_1

SilversunCity_Vivillon_8:
# 222 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_VIVILLON, CRY_MODE_NORMAL
# 223 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_2
# 224 "data//maps/SilversunCity/scripts.pory"
	giveitem ITEM_SILVER_POWDER
# 225 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_3
# 226 "data//maps/SilversunCity/scripts.pory"
	release
# 227 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_VIVILLON
	goto SilversunCity_Vivillon_1


# 25 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_0:
# 25 "data//maps/SilversunCity/scripts.pory"
	face_up
	step_end

# 26 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_1:
# 26 "data//maps/SilversunCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 38 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_2:
# 38 "data//maps/SilversunCity/scripts.pory"
	emote_question_mark
	step_end

# 76 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_3:
# 76 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 76 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 76 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 76 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 76 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 76 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 76 "data//maps/SilversunCity/scripts.pory"
	walk_down
	step_end

# 79 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_4:
# 79 "data//maps/SilversunCity/scripts.pory"
	walk_left
# 79 "data//maps/SilversunCity/scripts.pory"
	face_up
	step_end

# 127 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_Detectives_Movement_0:
# 127 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 127 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 127 "data//maps/SilversunCity/scripts.pory"
	walk_up
	step_end

SilversunCity_OnFrame_Text_0:
# 31 "data//maps/SilversunCity/scripts.pory"
	.string "Detective$"

SilversunCity_OnFrame_Text_1:
# 32 "data//maps/SilversunCity/scripts.pory"
	.string "Asst. Prof. Rue!? Are you okay?$"

SilversunCity_OnFrame_Text_2:
# 33 "data//maps/SilversunCity/scripts.pory"
	.string "Rue$"

SilversunCity_OnFrame_Text_3:
# 34 "data//maps/SilversunCity/scripts.pory"
	.string "All well, thanks to {PLAYER}.$"

SilversunCity_OnFrame_Text_4:
# 36 "data//maps/SilversunCity/scripts.pory"
	.string "We...we thought it was Professor\n"
	.string "Tenebris with them, not you! At any\l"
	.string "rate, {PLAYER}, this is a splendid\l"
	.string "outcome. You saved your Assistant\l"
	.string "Professor from any harm.$"

SilversunCity_OnFrame_Text_5:
# 42 "data//maps/SilversunCity/scripts.pory"
	.string "How did they get to you, Rue?$"

SilversunCity_OnFrame_Text_6:
# 48 "data//maps/SilversunCity/scripts.pory"
	.string "Oh, it was terrible! They barged into our\n"
	.string "lab and started threatening everyone\l"
	.string "unless we handed over the Dreamalyser\l"
	.string "blueprints! I managed to hold them off\l"
	.string "while the other research associates\l"
	.string "escaped, but they overpowered me and\l"
	.string "forced me to hand over the blueprints...$"

SilversunCity_OnFrame_Text_7:
# 52 "data//maps/SilversunCity/scripts.pory"
	.string "Spilt milk. Don't fret over what can't be\n"
	.string "changed. What do they want to do with\l"
	.string "the Dreamalyser?$"

SilversunCity_OnFrame_Text_8:
# 56 "data//maps/SilversunCity/scripts.pory"
	.string "Just like we heard from {PLAYER}\n"
	.string "about being transported to Ancient\l"
	.string "Cormoria, they heard about it from their\l"
	.string "grunt who went too. I think they called\l"
	.string "her Gabrielle. And now they want to use\l"
	.string "the Dreamalyser to control the power of\l"
	.string "the dreamstone! Then they'll be able to\l"
	.string "enter the past and...what exactly they\l"
	.string "want to do there - I have no clue.$"

SilversunCity_OnFrame_Text_9:
# 62 "data//maps/SilversunCity/scripts.pory"
	.string "So they want to build a Dreamalyser and\n"
	.string "use it to go to Ancient Cormoria?$"

SilversunCity_OnFrame_Text_10:
# 65 "data//maps/SilversunCity/scripts.pory"
	.string "Yes.$"

SilversunCity_OnFrame_Text_11:
# 66 "data//maps/SilversunCity/scripts.pory"
	.string "There must be something we're missing.\n"
	.string "What's there in the past?\n"
	.string "What could they want?\p"
	.string "...\p"
	.string "...\p"
	.string "...and where's Kohla when we need him?\n"
	.string "Rue, he was chasing your leads. He's\l"
	.string "nowhere to be seen now. Sigh...what good\l"
	.string "is an ace rookie if he's not even around\l"
	.string "when we need him?$"

SilversunCity_OnFrame_Text_12:
# 68 "data//maps/SilversunCity/scripts.pory"
	.string "Rue - go back home. You've had a hard\n"
	.string "time. Take care of yourself.$"

SilversunCity_OnFrame_Text_13:
# 72 "data//maps/SilversunCity/scripts.pory"
	.string "Y-yes, I better...see you all soon.\n"
	.string "Thanks again {PLAYER}.$"

SilversunCity_OnFrame_Text_14:
# 81 "data//maps/SilversunCity/scripts.pory"
	.string "{PLAYER} - to find out what Team\n"
	.string "Somber wants with the past, we need to\l"
	.string "find out more about Ancient Cormoria.\p"
	.string "I have an old acquaintance at the\n"
	.string "Mirroh Base Camp. She was a reputed\l"
	.string "historian in her time and now manages\l"
	.string "the graveyard at the base camp.\p"
	.string "Please go there and tell her everything\n"
	.string "you know.\p"
	.string "Got it? Head to the Mirroh Base Camp,\n"
	.string "talk to the lady who manages the\l"
	.string "graveyard, and find out what Team\l"
	.string "Somber seeks in Ancient Cormoria.\p"
	.string "Now get on it, pronto!\p"
	.string "...\p"
	.string "Seriously, where is Kohla? He should be\n"
	.string "done chasing Rue's leads by now...we've\l"
	.string "got to go find him.$"

SilversunCity_EventScript_Detectives_Text_0:
# 110 "data//maps/SilversunCity/scripts.pory"
	.string "Have you found the Professor yet? No?\n"
	.string "Then what are you standing here for?$"

SilversunCity_EventScript_Detectives_Text_1:
# 116 "data//maps/SilversunCity/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...$"

SilversunCity_EventScript_Detectives_Text_2:
# 124 "data//maps/SilversunCity/scripts.pory"
	.string "Can't you see we're in disguise, you\n"
	.string "idiot? You'll attract attention!\p"
	.string "Be casual.\n"
	.string "Go admire those flowerpots.$"

SilversunCity_EventScript_Detectives_Text_3:
# 132 "data//maps/SilversunCity/scripts.pory"
	.string "Better. Now tell me - what updates have\n"
	.string "you got?\p"
	.string "...\p"
	.string "What!? You overheard a Team Somber\n"
	.string "grunt talking about the Pofessor?$"

SilversunCity_EventScript_Detectives_Text_4:
# 136 "data//maps/SilversunCity/scripts.pory"
	.string "This all but confirms our suspicions -\n"
	.string "Team Somber must be holding the\l"
	.string "Professor hostage! That's how they\l"
	.string "learned about the dreamstones.\p"
	.string "And if you saw them here, it means the\n"
	.string "Professor is trapped inside their\l"
	.string "headquarters!\p"
	.string "{PLAYER}, it's clear what to do. The\n"
	.string "next task is to find Team Somber's HQ\l"
	.string "and free the Professor.\p"
	.string "Rue has given us a separate lead that\n"
	.string "Kohla is following up on, so you're on\l"
	.string "your own on this one.\p"
	.string "Good luck.$"

SilversunCity_NPC1_Text_0:
# 162 "data//maps/SilversunCity/scripts.pory"
	.string "Gloria, the city's Gym Leader is also a\n"
	.string "famous actress! Her work centers\l"
	.string "around the dark and eerie.$"

SilversunCity_NPC2_Text_0:
# 166 "data//maps/SilversunCity/scripts.pory"
	.string "I hear the theater has connections\n"
	.string "with the underground. People have seen\l"
	.string "criminal types walk in and out of the\l"
	.string "backstage area.$"

SilversunCity_NPC3_Text_0:
# 170 "data//maps/SilversunCity/scripts.pory"
	.string "I'm so sad I couldn't get tickets for\n"
	.string "tonights show! It's supposed to be a\l"
	.string "live performance of some sort.$"

SilversunCity_NPC4_Text_0:
# 174 "data//maps/SilversunCity/scripts.pory"
	.string "We keep seeing wild Koffing and Toxel\n"
	.string "around...they come from the sewers, I\l"
	.string "bet.$"

SilversunCity_NPC5_Text_0:
# 179 "data//maps/SilversunCity/scripts.pory"
	.string "There's a reason nobody lives near the\n"
	.string "sewers - and not because it stinks!\p"
	.string "They say a demon Pokémon haunts the\n"
	.string "sewers. It's even scarier than all the\l"
	.string "POISON-type Pokémon down there!\p"
	.string "They call it the SEWER SCOURGE, and\n"
	.string "apparently, before it attacks you, you\l"
	.string "can hear a spooky engine revving!\p"
	.string "How scary is that?\p"
	.string "...but its probably just someone's\n"
	.string "imagination.$"

SilversunCity_NPC6_Text_0:
# 184 "data//maps/SilversunCity/scripts.pory"
	.string "I caught my Vivillon in Mt. Mirroh! It's\n"
	.string "always hungry and keeps eating my Lava\l"
	.string "Cookies...$"

SilversunCity_NPC7_Text_0:
# 189 "data//maps/SilversunCity/scripts.pory"
	.string "Silversun City has a lovely theater but\n"
	.string "no fine dining! I'd love a fancy spot\l"
	.string "like the Pelluca Restaurant here.$"

SilversunCity_NPC8_Text_0:
# 194 "data//maps/SilversunCity/scripts.pory"
	.string "Did you hear about the Mega Sharpedo in\n"
	.string "Hoya River? Apparently its headed to\l"
	.string "Pelluca City.$"

SilversunCity_Murkrow_Text_0:
# 200 "data//maps/SilversunCity/scripts.pory"
	.string "Murkrow glares at you. It's as if its\n"
	.string "saying, 'Get out of the way!'$"

SilversunCity_Meowth_Text_0:
# 206 "data//maps/SilversunCity/scripts.pory"
	.string "Meowth is skulking around the back of\n"
	.string "the Silversun Theater. It looks angry -\l"
	.string "better be careful!$"

SilversunCity_Vivillon_Text_0:
# 216 "data//maps/SilversunCity/scripts.pory"
	.string "Vivillon looks hungry! It's eyeing your\n"
	.string "bag...better move away quickly!$"

SilversunCity_Vivillon_Text_1:
# 220 "data//maps/SilversunCity/scripts.pory"
	.string "Vivillon looks hungry! It's eyeing your\n"
	.string "bag...\p"
	.string "Give Vivillon a Lava Cookie?$"

SilversunCity_Vivillon_Text_2:
# 223 "data//maps/SilversunCity/scripts.pory"
	.string "Vivillon chomped the cookie down!\p"
	.string "It flutters towards you and puts\n"
	.string "something in your bag...$"

SilversunCity_Vivillon_Text_3:
# 225 "data//maps/SilversunCity/scripts.pory"
	.string "Thanks Vivillon!$"

SilversunCity_Vivillon_Text_4:
# 229 "data//maps/SilversunCity/scripts.pory"
	.string "Better move away quickly!$"
