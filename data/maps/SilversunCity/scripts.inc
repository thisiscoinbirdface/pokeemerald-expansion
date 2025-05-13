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
	speakername SilversunCity_OnFrame_Text_0
# 29 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_1
# 30 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_2
# 31 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_3
# 32 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 33 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_4
# 34 "data//maps/SilversunCity/scripts.pory"
	release
# 35 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_2
# 36 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_2
# 37 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 38 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 39 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_5
# 40 "data//maps/SilversunCity/scripts.pory"
	release
# 41 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_TENEBRIS, SilversunCity_OnFrame_Movement_1
# 42 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 43 "data//maps/SilversunCity/scripts.pory"
	delay 16
# 44 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_2
# 45 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_6
# 46 "data//maps/SilversunCity/scripts.pory"
	release
# 47 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 48 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 49 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_7
# 50 "data//maps/SilversunCity/scripts.pory"
	release
# 51 "data//maps/SilversunCity/scripts.pory"
	delay 16
# 52 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_2
# 53 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_8
# 54 "data//maps/SilversunCity/scripts.pory"
	release
# 55 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_2
# 56 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_2
# 57 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 58 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_9
# 59 "data//maps/SilversunCity/scripts.pory"
	release
# 60 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 61 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 62 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_10
# 63 "data//maps/SilversunCity/scripts.pory"
	release
# 64 "data//maps/SilversunCity/scripts.pory"
	delay 16
# 65 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_2
# 66 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_11
# 67 "data//maps/SilversunCity/scripts.pory"
	release
# 70 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_TENEBRIS, SilversunCity_OnFrame_Movement_3
# 71 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 72 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_TENEBRIS
# 73 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_OnFrame_Movement_4
# 74 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 75 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_12
# 76 "data//maps/SilversunCity/scripts.pory"
	release
# 84 "data//maps/SilversunCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 85 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET1
# 86 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET2
# 87 "data//maps/SilversunCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 90 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_HIDE_SILVERSUN_PROF
# 91 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_NEXTQUEST
# 92 "data//maps/SilversunCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_5
# 95 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end

SilversunCity_OnFrame_3:
	return


SilversunCity_EventScript_Detectives::
# 105 "data//maps/SilversunCity/scripts.pory"
	lockall
# 107 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_DETECTIVES_ENTER, SilversunCity_EventScript_Detectives_2
# 114 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 115 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_1
# 116 "data//maps/SilversunCity/scripts.pory"
	release
# 117 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_1
# 118 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_1
# 119 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 120 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 122 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 123 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_2
# 124 "data//maps/SilversunCity/scripts.pory"
	release
# 126 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_EventScript_Detectives_Movement_0
# 127 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 128 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 130 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 131 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_3
# 132 "data//maps/SilversunCity/scripts.pory"
	release
# 133 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 134 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 135 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_4
# 136 "data//maps/SilversunCity/scripts.pory"
	release
# 139 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_DETECTIVES_ENTER
# 140 "data//maps/SilversunCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_4
SilversunCity_EventScript_Detectives_1:
# 143 "data//maps/SilversunCity/scripts.pory"
	releaseall
	return

SilversunCity_EventScript_Detectives_2:
# 108 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 109 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_0
	goto SilversunCity_EventScript_Detectives_1


SilversunCity_NPC1::
# 161 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC1_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC2::
# 165 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC2_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC3::
# 169 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC3_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC4::
# 173 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC4_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC5::
# 178 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC5_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC6::
# 183 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC6_Text_0, MSGBOX_NPC
	end


SilversunCity_Murkrow::
# 188 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 189 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Murkrow_Text_0, MSGBOX_NPC
	end


SilversunCity_Meowth::
# 194 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 195 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Meowth_Text_0, MSGBOX_NPC
	end


SilversunCity_Vivillon::
# 200 "data//maps/SilversunCity/scripts.pory"
	lockall
# 201 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 202 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_VIVILLON, CRY_MODE_NORMAL
# 204 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_VIVILLON, SilversunCity_Vivillon_2
# 207 "data//maps/SilversunCity/scripts.pory"
	checkitem ITEM_LAVA_COOKIE
# 208 "data//maps/SilversunCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Vivillon_5
# 221 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_0
SilversunCity_Vivillon_1:
# 224 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end

SilversunCity_Vivillon_2:
# 205 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_0
	goto SilversunCity_Vivillon_1

SilversunCity_Vivillon_5:
# 209 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_1, MSGBOX_YESNO
# 210 "data//maps/SilversunCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Vivillon_8
# 218 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_4
	goto SilversunCity_Vivillon_1

SilversunCity_Vivillon_8:
# 211 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_VIVILLON, CRY_MODE_NORMAL
# 212 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_2
# 213 "data//maps/SilversunCity/scripts.pory"
	giveitem ITEM_SILVER_POWDER
# 214 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_3
# 215 "data//maps/SilversunCity/scripts.pory"
	release
# 216 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_VIVILLON
	goto SilversunCity_Vivillon_1


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

# 35 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_2:
# 35 "data//maps/SilversunCity/scripts.pory"
	emote_question_mark
	step_end

# 70 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_3:
# 70 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 70 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 70 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 70 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 70 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 70 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 70 "data//maps/SilversunCity/scripts.pory"
	walk_down
	step_end

# 73 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_4:
# 73 "data//maps/SilversunCity/scripts.pory"
	walk_left
# 73 "data//maps/SilversunCity/scripts.pory"
	face_up
	step_end

# 126 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_Detectives_Movement_0:
# 126 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 126 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 126 "data//maps/SilversunCity/scripts.pory"
	walk_up
	step_end

SilversunCity_OnFrame_Text_0:
# 28 "data//maps/SilversunCity/scripts.pory"
	.string "Detective$"

SilversunCity_OnFrame_Text_1:
# 29 "data//maps/SilversunCity/scripts.pory"
	.string "Asst. Prof. Rue!? Are you okay?$"

SilversunCity_OnFrame_Text_2:
# 30 "data//maps/SilversunCity/scripts.pory"
	.string "Rue$"

SilversunCity_OnFrame_Text_3:
# 31 "data//maps/SilversunCity/scripts.pory"
	.string "All well, thanks to {PLAYER}.$"

SilversunCity_OnFrame_Text_4:
# 33 "data//maps/SilversunCity/scripts.pory"
	.string "We...we thought it was Professor\n"
	.string "Tenebris with them, not you! At any\l"
	.string "rate, {PLAYER}, this is a splendid\l"
	.string "outcome. You saved your Assistant\l"
	.string "Professor from any harm.$"

SilversunCity_OnFrame_Text_5:
# 39 "data//maps/SilversunCity/scripts.pory"
	.string "How did they get to you, Rue?$"

SilversunCity_OnFrame_Text_6:
# 45 "data//maps/SilversunCity/scripts.pory"
	.string "Oh, it was terrible! They barged into our\n"
	.string "lab and started threatening everyone\l"
	.string "unless we handed over the Dreamalyser\l"
	.string "blueprints! I managed to hold them off\l"
	.string "while the other research associates\l"
	.string "escaped, but they overpowered me and\l"
	.string "forced me to hand over the blueprints...$"

SilversunCity_OnFrame_Text_7:
# 49 "data//maps/SilversunCity/scripts.pory"
	.string "Spilt milk. Don't fret over what can't be\n"
	.string "changed. What do they want to do with\l"
	.string "the Dreamalyser?$"

SilversunCity_OnFrame_Text_8:
# 53 "data//maps/SilversunCity/scripts.pory"
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
# 58 "data//maps/SilversunCity/scripts.pory"
	.string "So they want to build a Dreamalyser and\n"
	.string "use it to go to Ancient Cormoria?\p"
	.string "RUE: Yes.\p"
	.string "There must be something we're missing.\n"
	.string "What's there in the past? What could\l"
	.string "they want?\p"
	.string "...\p"
	.string "...\p"
	.string "...and where's Kohla when we need him?\n"
	.string "Rue, he was chasing your leads. He's\l"
	.string "nowhere to be seen now. Sigh...what good\l"
	.string "is an ace rookie if he's not even around\l"
	.string "when we need him?$"

SilversunCity_OnFrame_Text_10:
# 62 "data//maps/SilversunCity/scripts.pory"
	.string "Rue - go back home. You've had a hard\n"
	.string "time. Take care of yourself.$"

SilversunCity_OnFrame_Text_11:
# 66 "data//maps/SilversunCity/scripts.pory"
	.string "Y-yes, I better...see you all soon.\n"
	.string "Thanks again {PLAYER}.$"

SilversunCity_OnFrame_Text_12:
# 75 "data//maps/SilversunCity/scripts.pory"
	.string "{PLAYER} - to find out what Team\n"
	.string "Somber wants with the past, we need to\l"
	.string "find out about Ancient Cormoria. I have\l"
	.string "an old acquaintance at the Mirroh Base\l"
	.string "Camp. She was a reputed historian in her\l"
	.string "time and now manages the graveyard\l"
	.string "there. Please tell her everything you\l"
	.string "know.\p"
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
# 109 "data//maps/SilversunCity/scripts.pory"
	.string "Have you found the Professor yet? No?\n"
	.string "Then what are you standing here for?$"

SilversunCity_EventScript_Detectives_Text_1:
# 115 "data//maps/SilversunCity/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...$"

SilversunCity_EventScript_Detectives_Text_2:
# 123 "data//maps/SilversunCity/scripts.pory"
	.string "Can't you see we're in disguise, you\n"
	.string "idiot? You'll attract attention!\p"
	.string "Be casual.\n"
	.string "Go admire those flowerpots.$"

SilversunCity_EventScript_Detectives_Text_3:
# 131 "data//maps/SilversunCity/scripts.pory"
	.string "Better. Now tell me - what updates have\n"
	.string "you got?\p"
	.string "...\p"
	.string "What!? You overheard a Team Somber\n"
	.string "grunt talking about the Pofessor?$"

SilversunCity_EventScript_Detectives_Text_4:
# 135 "data//maps/SilversunCity/scripts.pory"
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
# 161 "data//maps/SilversunCity/scripts.pory"
	.string "Gloria, the city's Gym Leader is also a\n"
	.string "famous actress! Her work centers\l"
	.string "around the dark and eerie.$"

SilversunCity_NPC2_Text_0:
# 165 "data//maps/SilversunCity/scripts.pory"
	.string "I hear the theater has connections\n"
	.string "with the underground. People have seen\l"
	.string "criminal types walk in and out of the\l"
	.string "backstage area.$"

SilversunCity_NPC3_Text_0:
# 169 "data//maps/SilversunCity/scripts.pory"
	.string "I'm so sad I couldn't get tickets for\n"
	.string "tonights show! It's supposed to be a\l"
	.string "live performance of some sort.$"

SilversunCity_NPC4_Text_0:
# 173 "data//maps/SilversunCity/scripts.pory"
	.string "We keep seeing wild Koffing and Toxel\n"
	.string "around...they come from the sewers, I\l"
	.string "bet.$"

SilversunCity_NPC5_Text_0:
# 178 "data//maps/SilversunCity/scripts.pory"
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
# 183 "data//maps/SilversunCity/scripts.pory"
	.string "I caught my Vivillon in Mt. Mirroh! It's\n"
	.string "always hungry and keeps eating my Lava\l"
	.string "Cookies...$"

SilversunCity_Murkrow_Text_0:
# 189 "data//maps/SilversunCity/scripts.pory"
	.string "Murkrow glares at you. It's as if its\n"
	.string "saying, 'Get out of the way!'$"

SilversunCity_Meowth_Text_0:
# 195 "data//maps/SilversunCity/scripts.pory"
	.string "Meowth is skulking around the back of\n"
	.string "the Silversun Theater. It looks angry -\l"
	.string "better be careful!$"

SilversunCity_Vivillon_Text_0:
# 205 "data//maps/SilversunCity/scripts.pory"
	.string "Vivillon looks hungry! It's eyeing your\n"
	.string "bag...better move away quickly!$"

SilversunCity_Vivillon_Text_1:
# 209 "data//maps/SilversunCity/scripts.pory"
	.string "Vivillon looks hungry! It's eyeing your\n"
	.string "bag...\p"
	.string "Give Vivillon a Lava Cookie?$"

SilversunCity_Vivillon_Text_2:
# 212 "data//maps/SilversunCity/scripts.pory"
	.string "Vivillon chomped the cookie down!\p"
	.string "It flutters towards you and puts\n"
	.string "something in your bag...$"

SilversunCity_Vivillon_Text_3:
# 214 "data//maps/SilversunCity/scripts.pory"
	.string "Thanks Vivillon!$"

SilversunCity_Vivillon_Text_4:
# 218 "data//maps/SilversunCity/scripts.pory"
	.string "Better move away quickly!$"
