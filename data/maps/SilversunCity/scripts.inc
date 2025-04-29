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
	msgbox SilversunCity_OnFrame_Text_6
# 44 "data//maps/SilversunCity/scripts.pory"
	release
# 45 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 46 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 47 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_7
# 48 "data//maps/SilversunCity/scripts.pory"
	release
# 49 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_2
# 50 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_2
# 51 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 52 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_8
# 53 "data//maps/SilversunCity/scripts.pory"
	release
# 54 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 55 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 56 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_9
# 57 "data//maps/SilversunCity/scripts.pory"
	release
# 60 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_TENEBRIS, SilversunCity_OnFrame_Movement_3
# 61 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 62 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_TENEBRIS
# 63 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_OnFrame_Movement_4
# 64 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 65 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_10
# 66 "data//maps/SilversunCity/scripts.pory"
	release
# 74 "data//maps/SilversunCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 75 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET1
# 76 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET2
# 77 "data//maps/SilversunCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 80 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_HIDE_SILVERSUN_PROF
# 81 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_NEXTQUEST
# 82 "data//maps/SilversunCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_5
# 85 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end

SilversunCity_OnFrame_3:
	return


SilversunCity_EventScript_Detectives::
# 95 "data//maps/SilversunCity/scripts.pory"
	lockall
# 97 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_DETECTIVES_ENTER, SilversunCity_EventScript_Detectives_2
# 104 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 105 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_1
# 106 "data//maps/SilversunCity/scripts.pory"
	release
# 107 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_1
# 108 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_1
# 109 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 110 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 112 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 113 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_2
# 114 "data//maps/SilversunCity/scripts.pory"
	release
# 116 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_EventScript_Detectives_Movement_0
# 117 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 118 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 120 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 121 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_3
# 122 "data//maps/SilversunCity/scripts.pory"
	release
# 123 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 124 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 125 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_4
# 126 "data//maps/SilversunCity/scripts.pory"
	release
# 129 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_DETECTIVES_ENTER
# 130 "data//maps/SilversunCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_4
SilversunCity_EventScript_Detectives_1:
# 133 "data//maps/SilversunCity/scripts.pory"
	releaseall
	return

SilversunCity_EventScript_Detectives_2:
# 98 "data//maps/SilversunCity/scripts.pory"
	speakername SilversunCity_OnFrame_Text_0
# 99 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_0
	goto SilversunCity_EventScript_Detectives_1


SilversunCity_NPC1::
# 151 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC1_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC2::
# 155 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC2_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC3::
# 159 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC3_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC4::
# 163 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC4_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC5::
# 168 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC5_Text_0, MSGBOX_NPC
	end


SilversunCity_NPC6::
# 173 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC6_Text_0, MSGBOX_NPC
	end


SilversunCity_Murkrow::
# 178 "data//maps/SilversunCity/scripts.pory"
	lockall
# 179 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 180 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 181 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Murkrow_Text_0
# 182 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_Meowth::
# 187 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 188 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Meowth_Text_0, MSGBOX_NPC
	end


SilversunCity_Vivillon::
# 193 "data//maps/SilversunCity/scripts.pory"
	lockall
# 194 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 195 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_VIVILLON, CRY_MODE_NORMAL
# 197 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_VIVILLON, SilversunCity_Vivillon_2
# 200 "data//maps/SilversunCity/scripts.pory"
	checkitem ITEM_LAVA_COOKIE
# 201 "data//maps/SilversunCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Vivillon_5
# 214 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_0
SilversunCity_Vivillon_1:
# 217 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end

SilversunCity_Vivillon_2:
# 198 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_0
	goto SilversunCity_Vivillon_1

SilversunCity_Vivillon_5:
# 202 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_1, MSGBOX_YESNO
# 203 "data//maps/SilversunCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Vivillon_8
# 211 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_4
	goto SilversunCity_Vivillon_1

SilversunCity_Vivillon_8:
# 204 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_VIVILLON, CRY_MODE_NORMAL
# 205 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_2
# 206 "data//maps/SilversunCity/scripts.pory"
	giveitem ITEM_SILVER_POWDER
# 207 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_3
# 208 "data//maps/SilversunCity/scripts.pory"
	release
# 209 "data//maps/SilversunCity/scripts.pory"
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

# 60 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_3:
# 60 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 60 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 60 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 60 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 60 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 60 "data//maps/SilversunCity/scripts.pory"
	walk_down
# 60 "data//maps/SilversunCity/scripts.pory"
	walk_down
	step_end

# 63 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_4:
# 63 "data//maps/SilversunCity/scripts.pory"
	walk_left
# 63 "data//maps/SilversunCity/scripts.pory"
	face_up
	step_end

# 116 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_Detectives_Movement_0:
# 116 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 116 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 116 "data//maps/SilversunCity/scripts.pory"
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
# 43 "data//maps/SilversunCity/scripts.pory"
	.string "Rue: Oh, it was terrible! They barged\n"
	.string "into our lab and started threatening\l"
	.string "everyone unless we handed over the\l"
	.string "Dreamalyser blueprints! I managed to\l"
	.string "hold them off while the other research\l"
	.string "associates escaped, but they\l"
	.string "overpowered me and forced me to hand\l"
	.string "over the blueprints...$"

SilversunCity_OnFrame_Text_7:
# 47 "data//maps/SilversunCity/scripts.pory"
	.string "Spilt milk. Don't fret over what can't be\n"
	.string "changed. What do they want to do with\l"
	.string "the Dreamalyser?\p"
	.string "RUE: Just like we heard from {PLAYER}\n"
	.string "about being transported to Ancient\l"
	.string "Cormoria, they heard about it from their\l"
	.string "grunt who went too. I think they called\l"
	.string "her GABRIELLE. And now they want to\l"
	.string "use the Dreamalyser to control the\l"
	.string "power of the dreamstone! Then they'll\l"
	.string "be able to enter the past and...what\l"
	.string "exactly they want to do there - I have\l"
	.string "no clue.$"

SilversunCity_OnFrame_Text_8:
# 52 "data//maps/SilversunCity/scripts.pory"
	.string "So they want to build a Dreamalyser and\n"
	.string "use it to go to Ancient Cormoria?\p"
	.string "RUE: Yes.\p"
	.string "There must be something we're missing.\n"
	.string "What's there in the past? What could\l"
	.string "they want?\p"
	.string "...\p"
	.string "...\p"
	.string "...and where's KOHLA when we need him?\n"
	.string "Rue, he was chasing your leads. He's\l"
	.string "nowhere to be seen now. Sigh...what good\l"
	.string "is an ace rookie if he's not even around\l"
	.string "when we need him?$"

SilversunCity_OnFrame_Text_9:
# 56 "data//maps/SilversunCity/scripts.pory"
	.string "Rue - go back home. You've had a hard\n"
	.string "time. Take care of yourself.\p"
	.string "RUE: Y-yes, I better...see you all soon.\n"
	.string "Thanks again {PLAYER}.$"

SilversunCity_OnFrame_Text_10:
# 65 "data//maps/SilversunCity/scripts.pory"
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
	.string "Seriously, where is KOHLA? He should be\n"
	.string "done chasing Rue's leads by now...we've\l"
	.string "got to go find him.$"

SilversunCity_EventScript_Detectives_Text_0:
# 99 "data//maps/SilversunCity/scripts.pory"
	.string "Have you found the Professor yet? No?\n"
	.string "Then what are you standing here for?$"

SilversunCity_EventScript_Detectives_Text_1:
# 105 "data//maps/SilversunCity/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...$"

SilversunCity_EventScript_Detectives_Text_2:
# 113 "data//maps/SilversunCity/scripts.pory"
	.string "Can't you see we're in disguise, you\n"
	.string "idiot? You'll attract attention!\p"
	.string "Be casual.\n"
	.string "Go admire those flowerpots.$"

SilversunCity_EventScript_Detectives_Text_3:
# 121 "data//maps/SilversunCity/scripts.pory"
	.string "Better. Now tell me - what updates have\n"
	.string "you got?\p"
	.string "...\p"
	.string "What!? You overheard a Team Somber\n"
	.string "grunt talking about the Pofessor?$"

SilversunCity_EventScript_Detectives_Text_4:
# 125 "data//maps/SilversunCity/scripts.pory"
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
# 151 "data//maps/SilversunCity/scripts.pory"
	.string "Gloria, the city's Gym Leader is also a\n"
	.string "famous actress! Her work centers\l"
	.string "around the dark and eerie.$"

SilversunCity_NPC2_Text_0:
# 155 "data//maps/SilversunCity/scripts.pory"
	.string "I hear the theater has connections\n"
	.string "with the underground. People have seen\l"
	.string "criminal types walk in and out of the\l"
	.string "backstage area.$"

SilversunCity_NPC3_Text_0:
# 159 "data//maps/SilversunCity/scripts.pory"
	.string "I'm so sad I couldn't get tickets for\n"
	.string "tonights show! It's supposed to be a\l"
	.string "live performance of some sort.$"

SilversunCity_NPC4_Text_0:
# 163 "data//maps/SilversunCity/scripts.pory"
	.string "We keep seeing wild Koffing and Toxel\n"
	.string "around...they come from the sewers, I\l"
	.string "bet.$"

SilversunCity_NPC5_Text_0:
# 168 "data//maps/SilversunCity/scripts.pory"
	.string "There's a reason nobody lives near the\n"
	.string "sewers - and not because it stinks!\p"
	.string "They say a demon Pokémon haunts the\n"
	.string "sewers. It's even scarier than all the\l"
	.string "POISON-type Pokémon down there! They\l"
	.string "call it the SEWER SCOURGE, and\l"
	.string "apparently, before it attacks you, you\l"
	.string "can hear a spooky engine revving! How\l"
	.string "scary is that?\p"
	.string "...but its probably just someone's\n"
	.string "imagination.$"

SilversunCity_NPC6_Text_0:
# 173 "data//maps/SilversunCity/scripts.pory"
	.string "I caught my Vivillon in Mt. Mirroh! It's\n"
	.string "always hungry and keeps eating my Lava\l"
	.string "Cookies...$"

SilversunCity_Murkrow_Text_0:
# 181 "data//maps/SilversunCity/scripts.pory"
	.string "Murkrow glares at you. It's as if its\n"
	.string "saying, 'Get out of the way!'$"

SilversunCity_Meowth_Text_0:
# 188 "data//maps/SilversunCity/scripts.pory"
	.string "Meowth is skulking around the back of\n"
	.string "the Silversun Theater. It looks angry -\l"
	.string "better be careful!$"

SilversunCity_Vivillon_Text_0:
# 198 "data//maps/SilversunCity/scripts.pory"
	.string "Vivillon looks hungry! It's eyeing your\n"
	.string "bag...better move away quickly!$"

SilversunCity_Vivillon_Text_1:
# 202 "data//maps/SilversunCity/scripts.pory"
	.string "Vivillon looks hungry! It's eyeing your\n"
	.string "bag...\p"
	.string "Give Vivillon a Lava Cookie?$"

SilversunCity_Vivillon_Text_2:
# 205 "data//maps/SilversunCity/scripts.pory"
	.string "Vivillon chomped the cookie down!\p"
	.string "It flutters towards you and puts\n"
	.string "something in your bag...$"

SilversunCity_Vivillon_Text_3:
# 207 "data//maps/SilversunCity/scripts.pory"
	.string "Thanks Vivillon!$"

SilversunCity_Vivillon_Text_4:
# 211 "data//maps/SilversunCity/scripts.pory"
	.string "Better move away quickly!$"
