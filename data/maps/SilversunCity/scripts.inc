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
# 30 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_2
# 31 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_2
# 32 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 33 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_1
# 34 "data//maps/SilversunCity/scripts.pory"
	release
# 35 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_TENEBRIS, SilversunCity_OnFrame_Movement_1
# 36 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 37 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_2
# 38 "data//maps/SilversunCity/scripts.pory"
	release
# 39 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 40 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_3
# 41 "data//maps/SilversunCity/scripts.pory"
	release
# 42 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_2
# 43 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_2
# 44 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_4
# 45 "data//maps/SilversunCity/scripts.pory"
	release
# 46 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 47 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_5
# 48 "data//maps/SilversunCity/scripts.pory"
	release
# 51 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 52 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_TENEBRIS
# 53 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 55 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_OnFrame_Text_6
# 56 "data//maps/SilversunCity/scripts.pory"
	release
# 64 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 65 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET1
# 66 "data//maps/SilversunCity/scripts.pory"
	removeobject LOCALID_DET2
# 67 "data//maps/SilversunCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 70 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_HIDE_SILVERSUN_PROF
# 71 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_NEXTQUEST
# 72 "data//maps/SilversunCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_5
# 75 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end

SilversunCity_OnFrame_3:
	return


SilversunCity_EventScript_Detectives::
# 89 "data//maps/SilversunCity/scripts.pory"
	lockall
# 91 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_DETECTIVES_ENTER, SilversunCity_EventScript_Detectives_2
# 97 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_1
# 98 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET1, SilversunCity_OnFrame_Movement_1
# 99 "data//maps/SilversunCity/scripts.pory"
	applymovement LOCALID_DET2, SilversunCity_OnFrame_Movement_1
# 100 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 101 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 103 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_2
# 104 "data//maps/SilversunCity/scripts.pory"
	release
# 106 "data//maps/SilversunCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_EventScript_Detectives_Movement_0
# 107 "data//maps/SilversunCity/scripts.pory"
	waitmovement 0
# 108 "data//maps/SilversunCity/scripts.pory"
	delay 24
# 110 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_3
# 111 "data//maps/SilversunCity/scripts.pory"
	release
# 112 "data//maps/SilversunCity/scripts.pory"
	delay 30
# 113 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_4
# 114 "data//maps/SilversunCity/scripts.pory"
	release
# 117 "data//maps/SilversunCity/scripts.pory"
	setflag FLAG_SILVERSUN_DETECTIVES_ENTER
# 118 "data//maps/SilversunCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_4
SilversunCity_EventScript_Detectives_1:
# 121 "data//maps/SilversunCity/scripts.pory"
	releaseall
	return

SilversunCity_EventScript_Detectives_2:
# 92 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_EventScript_Detectives_Text_0
	goto SilversunCity_EventScript_Detectives_1


SilversunCity_NPC1::
# 139 "data//maps/SilversunCity/scripts.pory"
	lockall
# 140 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 141 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC1_Text_0
# 142 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC2::
# 146 "data//maps/SilversunCity/scripts.pory"
	lockall
# 147 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 148 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC2_Text_0
# 149 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC3::
# 153 "data//maps/SilversunCity/scripts.pory"
	lockall
# 154 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 155 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC3_Text_0
# 156 "data//maps/SilversunCity/scripts.pory"
	giveitem ITEM_OLD_ROD
# 158 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC4::
# 162 "data//maps/SilversunCity/scripts.pory"
	lockall
# 163 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 164 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC4_Text_0
# 165 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC5::
# 170 "data//maps/SilversunCity/scripts.pory"
	lockall
# 171 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 172 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC5_Text_0
# 173 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_NPC6::
# 178 "data//maps/SilversunCity/scripts.pory"
	lockall
# 179 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 180 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_NPC6_Text_0
# 181 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_Murkrow::
# 186 "data//maps/SilversunCity/scripts.pory"
	lockall
# 187 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 188 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 189 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Murkrow_Text_0
# 190 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_Meowth::
# 195 "data//maps/SilversunCity/scripts.pory"
	lockall
# 196 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 197 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 198 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Meowth_Text_0
# 199 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end


SilversunCity_Vivillon::
# 204 "data//maps/SilversunCity/scripts.pory"
	lockall
# 205 "data//maps/SilversunCity/scripts.pory"
	faceplayer
# 206 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_VIVILLON, CRY_MODE_NORMAL
# 208 "data//maps/SilversunCity/scripts.pory"
	goto_if_set FLAG_SILVERSUN_VIVILLON, SilversunCity_Vivillon_2
# 211 "data//maps/SilversunCity/scripts.pory"
	checkitem ITEM_LAVA_COOKIE
# 212 "data//maps/SilversunCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Vivillon_5
# 225 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_0
SilversunCity_Vivillon_1:
# 228 "data//maps/SilversunCity/scripts.pory"
	releaseall
	end

SilversunCity_Vivillon_2:
# 209 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_0
	goto SilversunCity_Vivillon_1

SilversunCity_Vivillon_5:
# 213 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_1, MSGBOX_YESNO
# 214 "data//maps/SilversunCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Vivillon_8
# 222 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_4
	goto SilversunCity_Vivillon_1

SilversunCity_Vivillon_8:
# 215 "data//maps/SilversunCity/scripts.pory"
	playmoncry SPECIES_VIVILLON, CRY_MODE_NORMAL
# 216 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_2
# 217 "data//maps/SilversunCity/scripts.pory"
	giveitem ITEM_SILVER_POWDER
# 218 "data//maps/SilversunCity/scripts.pory"
	msgbox SilversunCity_Vivillon_Text_3
# 219 "data//maps/SilversunCity/scripts.pory"
	release
# 220 "data//maps/SilversunCity/scripts.pory"
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

# 30 "data//maps/SilversunCity/scripts.pory"
SilversunCity_OnFrame_Movement_2:
# 30 "data//maps/SilversunCity/scripts.pory"
	emote_question_mark
	step_end

# 106 "data//maps/SilversunCity/scripts.pory"
SilversunCity_EventScript_Detectives_Movement_0:
# 106 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 106 "data//maps/SilversunCity/scripts.pory"
	walk_right
# 106 "data//maps/SilversunCity/scripts.pory"
	walk_up
	step_end

SilversunCity_OnFrame_Text_0:
# 28 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: ASST PROF RUE!? Are you\n"
	.string "okay?\p"
	.string "RUE: All well, thanks to {PLAYER}.\p"
	.string "DETECTIVE: We...we thought it was\n"
	.string "PROFESSOR TENEBRIS with them, not you!\l"
	.string "At any rate, {PLAYER}, this is a\l"
	.string "splendid outcome. You saved your\l"
	.string "Assistant Professor from any harm.$"

SilversunCity_OnFrame_Text_1:
# 33 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: How did they get to you,\n"
	.string "RUE?$"

SilversunCity_OnFrame_Text_2:
# 37 "data//maps/SilversunCity/scripts.pory"
	.string "RUE: Oh, it was terrible! they barged\n"
	.string "into our lab and started threatening\l"
	.string "everyone unless we handed over the\l"
	.string "DREAMALYSER blueprints! I managed to\l"
	.string "hold them off while the other research\l"
	.string "associates escaped, but they\l"
	.string "overpowered me and forced me to hand\l"
	.string "over the blueprints...$"

SilversunCity_OnFrame_Text_3:
# 40 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Spilt milk. Don't fret over\n"
	.string "what can't be changed. What do they\l"
	.string "want to do with the DREAMALYSER?\p"
	.string "RUE: Just like we heard from {PLAYER}\n"
	.string "about being transported to ANCIENT\l"
	.string "CORMORIA, they heard about it from\l"
	.string "their grunt who went too. I think they\l"
	.string "called her GABRIELLE. And now they want\l"
	.string "to use the DREAMALYSER to control the\l"
	.string "power of the dreamstone! Then they'll\l"
	.string "be able to enter the past and...what\l"
	.string "exactly they want to do there - I have\l"
	.string "no clue.$"

SilversunCity_OnFrame_Text_4:
# 44 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: So they want to build a\n"
	.string "DREAMALYSER and use it to go to\l"
	.string "ANCIENT CORMORIA?\p"
	.string "RUE: Yes.\p"
	.string "DETECTIVE: There must be something\n"
	.string "we're missing. What's there in the past?\l"
	.string "What could they want?\p"
	.string "...\p"
	.string "...\p"
	.string "...and where's KOHLA when we need him?\n"
	.string "RUE, he was chasing your leads. He's\l"
	.string "nowhere to be seen now. Sigh...what good\l"
	.string "is an ace rookie if he's not even around\l"
	.string "when we need him?$"

SilversunCity_OnFrame_Text_5:
# 47 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: RUE - go back home. You've\n"
	.string "had a hard time. Take care of yourself.\p"
	.string "RUE: Y-yes, I better...see you al soon.\n"
	.string "Thanks again {PLAYER}.$"

SilversunCity_OnFrame_Text_6:
# 55 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: {PLAYER} - to find out\n"
	.string "what Team Somber wants with the past,\l"
	.string "we need to find out about ANCIENT\l"
	.string "CORMORIA. I have an old acquaintance\l"
	.string "at the MIRROH BASE CAMP. She was a\l"
	.string "reputed historian in her time and now\l"
	.string "manages the graveyard there. Please\l"
	.string "tell her everything you know.\p"
	.string "Got it? Head to the MIRROH BASE CAMP,\n"
	.string "talk to the lady who manages the\l"
	.string "graveyard, and find out what Team\l"
	.string "Somber seeks in ANCIENT CORMORIA.\p"
	.string "Now get on it, pronto!\p"
	.string "...\p"
	.string "Seriously, where is KOHLA? He should be\n"
	.string "done chasing RUE's leads by now...we've\l"
	.string "got to go find him.$"

SilversunCity_EventScript_Detectives_Text_0:
# 92 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Have you found the\n"
	.string "Professor yet? No? Then what are you\l"
	.string "standing here for?$"

SilversunCity_EventScript_Detectives_Text_1:
# 97 "data//maps/SilversunCity/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...$"

SilversunCity_EventScript_Detectives_Text_2:
# 103 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Can't you see we're in\n"
	.string "disguise, you idiot? You'll attract\l"
	.string "attention!\p"
	.string "Be casual.\n"
	.string "Go admire those flowerpots.$"

SilversunCity_EventScript_Detectives_Text_3:
# 110 "data//maps/SilversunCity/scripts.pory"
	.string "DETECTIVE: Better. Now tell me - what\n"
	.string "updates have you got?\p"
	.string "...\p"
	.string "DETECTIVE: What!? You saw the\n"
	.string "Professor with a Team Somber grunt?\l"
	.string "The grunt was taking the Prof out of\l"
	.string "VILETHORN WOODS?$"

SilversunCity_EventScript_Detectives_Text_4:
# 113 "data//maps/SilversunCity/scripts.pory"
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
# 141 "data//maps/SilversunCity/scripts.pory"
	.string "GLORIA, the city's Gym Leader is also a\n"
	.string "famous actress! Her work centers\l"
	.string "around the dark and eerie.$"

SilversunCity_NPC2_Text_0:
# 148 "data//maps/SilversunCity/scripts.pory"
	.string "I hear the theater has connections\n"
	.string "with the underground. People have seen\l"
	.string "criminal types walk in and out of the\l"
	.string "backstage area.$"

SilversunCity_NPC3_Text_0:
# 155 "data//maps/SilversunCity/scripts.pory"
	.string "I'm so sad I couldn't get tickets for\n"
	.string "tonights show! It's supposed to be a\l"
	.string "live performance of some sort.$"

SilversunCity_NPC4_Text_0:
# 164 "data//maps/SilversunCity/scripts.pory"
	.string "We keep seeing wild KOFFING and TOXEL\n"
	.string "around...they come from the sewers, I\l"
	.string "bet.$"

SilversunCity_NPC5_Text_0:
# 172 "data//maps/SilversunCity/scripts.pory"
	.string "There's a reason nobody lives near the\n"
	.string "sewers - and not because it stinks!\p"
	.string "They say a demon {PKMN} haunts the sewers.\n"
	.string "It's even scarier than all the\l"
	.string "POISON-type {PKMN} down there! They call\l"
	.string "it the SEWER SCOURGE, and apparently,\l"
	.string "before it attacks you, you can hear a\l"
	.string "spooky engine revving! How scary is\l"
	.string "that?\p"
	.string "...but its probably just someone's\n"
	.string "imagination.$"

SilversunCity_NPC6_Text_0:
# 180 "data//maps/SilversunCity/scripts.pory"
	.string "I caught my VIVILLON in MT MIRROH! It's\n"
	.string "always hungry and keeps eating my LAVA\l"
	.string "COOKIES...$"

SilversunCity_Murkrow_Text_0:
# 189 "data//maps/SilversunCity/scripts.pory"
	.string "MURKROW glares at you. It's as if its\n"
	.string "saying, 'Get out of the way!'$"

SilversunCity_Meowth_Text_0:
# 198 "data//maps/SilversunCity/scripts.pory"
	.string "MEOWTH is skulking around the back of\n"
	.string "the SILVERSUN THEATER. It looks angry\l"
	.string "- better be careful!$"

SilversunCity_Vivillon_Text_0:
# 209 "data//maps/SilversunCity/scripts.pory"
	.string "VIVILLON looks hungry! It's eyeing your\n"
	.string "bag...better move away quickly!$"

SilversunCity_Vivillon_Text_1:
# 213 "data//maps/SilversunCity/scripts.pory"
	.string "VIVILLON looks hungry! It's eyeing your\n"
	.string "bag...\p"
	.string "Give VIVILLON a LAVA COOKIE?$"

SilversunCity_Vivillon_Text_2:
# 216 "data//maps/SilversunCity/scripts.pory"
	.string "VIVILLON chomped the cookie down!\p"
	.string "It flutters towards you and puts\n"
	.string "something in your bag...$"

SilversunCity_Vivillon_Text_3:
# 218 "data//maps/SilversunCity/scripts.pory"
	.string "Thanks VIVILLON!$"

SilversunCity_Vivillon_Text_4:
# 222 "data//maps/SilversunCity/scripts.pory"
	.string "Better move away quickly!$"
