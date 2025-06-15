PellucaCityHouses_MapScripts::
	.byte 0


PellucaCityHouses_MayorQuestStart::
# 26 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 27 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 29 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 10
	goto_if_eq PellucaCityHouses_MayorQuestStart_2
# 35 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 2
	goto_if_eq PellucaCityHouses_MayorQuestStart_5
PellucaCityHouses_MayorQuestStart_4:
# 41 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCityHouses_MayorQuestStart_8
PellucaCityHouses_MayorQuestStart_7:
# 57 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 1
	goto_if_eq PellucaCityHouses_MayorQuestStart_11
PellucaCityHouses_MayorQuestStart_10:
# 83 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end

PellucaCityHouses_MayorQuestStart_2:
# 30 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 31 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_1, MSGBOX_NPC
	end

PellucaCityHouses_MayorQuestStart_5:
# 36 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 37 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_2
# 38 "data//maps/PellucaCityHouses/scripts.pory"
	release
	goto PellucaCityHouses_MayorQuestStart_4

PellucaCityHouses_MayorQuestStart_8:
# 42 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 43 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_3
# 44 "data//maps/PellucaCityHouses/scripts.pory"
	speakername NULL
# 45 "data//maps/PellucaCityHouses/scripts.pory"
	giveitem ITEM_DRIFBLIM_TRAVELS_PASS
# 46 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 47 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_4
# 48 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 49 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 50 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 51 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_5
# 52 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 54 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 1
	goto PellucaCityHouses_MayorQuestStart_7

PellucaCityHouses_MayorQuestStart_11:
# 58 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 59 "data//maps/PellucaCityHouses/scripts.pory"
	message PellucaCityHouses_MayorQuestStart_Text_6
# 60 "data//maps/PellucaCityHouses/scripts.pory"
	waitmessage
# 61 "data//maps/PellucaCityHouses/scripts.pory"
	dynmultichoice 15, 8, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCityHouses_MayorQuestStart_Text_7, PellucaCityHouses_MayorQuestStart_Text_8
# 63 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCityHouses_MayorQuestStart_14
PellucaCityHouses_MayorQuestStart_13:
# 68 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityHouses_MayorQuestStart_16
	goto PellucaCityHouses_MayorQuestStart_10

PellucaCityHouses_MayorQuestStart_14:
# 64 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 65 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_9
# 66 "data//maps/PellucaCityHouses/scripts.pory"
	release
	goto PellucaCityHouses_MayorQuestStart_13

PellucaCityHouses_MayorQuestStart_16:
# 69 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 70 "data//maps/PellucaCityHouses/scripts.pory"
	applymovement 7, PellucaCityHouses_MayorQuestStart_Movement_0
# 71 "data//maps/PellucaCityHouses/scripts.pory"
	waitmovement 0
# 72 "data//maps/PellucaCityHouses/scripts.pory"
	delay 16
# 73 "data//maps/PellucaCityHouses/scripts.pory"
	speakername PellucaCityHouses_MayorQuestStart_Text_0
# 74 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_MayorQuestStart_Text_10
# 75 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 77 "data//maps/PellucaCityHouses/scripts.pory"
	startquest QUEST_PELLUCA_CITY
# 78 "data//maps/PellucaCityHouses/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_PELLUCA_CITY, SUB_QUEST_1
# 79 "data//maps/PellucaCityHouses/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 2
	goto PellucaCityHouses_MayorQuestStart_10


PellucaCityHouses_GabSibling1::
# 110 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling1_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_GabSibling2::
# 114 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling2_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_GabSibling3::
# 118 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 119 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 120 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling3_Text_0
# 121 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 122 "data//maps/PellucaCityHouses/scripts.pory"
	showmonpic SPECIES_JANGMO_O, 10, 3
# 123 "data//maps/PellucaCityHouses/scripts.pory"
	playmoncry SPECIES_JANGMO_O, CRY_MODE_NORMAL
# 124 "data//maps/PellucaCityHouses/scripts.pory"
	waitmoncry
# 125 "data//maps/PellucaCityHouses/scripts.pory"
	delay 40
# 126 "data//maps/PellucaCityHouses/scripts.pory"
	hidemonpic
# 127 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling3_Text_1, MSGBOX_NPC
# 128 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCityHouses_GameCube::
# 132 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GameCube_Text_0, MSGBOX_YESNO
# 133 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 134 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCityHouses_GameCube_2
# 137 "data//maps/PellucaCityHouses/scripts.pory"
	playbgm MUS_NONE, FALSE
# 138 "data//maps/PellucaCityHouses/scripts.pory"
	special StartBlockStacker
# 139 "data//maps/PellucaCityHouses/scripts.pory"
	waitstate
# 140 "data//maps/PellucaCityHouses/scripts.pory"
	savebgm MUS_DUMMY
# 141 "data//maps/PellucaCityHouses/scripts.pory"
	fadedefaultbgm
# 144 "data//maps/PellucaCityHouses/scripts.pory"
	compare GAME_CORNER_VAR_WINNINGS, 20
	goto_if_gt PellucaCityHouses_GameCube_5
PellucaCityHouses_GameCube_4:
# 159 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end

PellucaCityHouses_GameCube_2:
	end

PellucaCityHouses_GameCube_5:
# 145 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GameCube_Text_1
# 147 "data//maps/PellucaCityHouses/scripts.pory"
	goto_if_set FLAG_GET_SWAP_DRIVE, PellucaCityHouses_GameCube_8
# 149 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 150 "data//maps/PellucaCityHouses/scripts.pory"
	delay 8
# 151 "data//maps/PellucaCityHouses/scripts.pory"
	playse SE_CLICK
# 152 "data//maps/PellucaCityHouses/scripts.pory"
	waitse
# 153 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GameCube_Text_2
# 154 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 155 "data//maps/PellucaCityHouses/scripts.pory"
	giveitem ITEM_SWAP_DRIVE
# 156 "data//maps/PellucaCityHouses/scripts.pory"
	setflag FLAG_GET_SWAP_DRIVE
	goto PellucaCityHouses_GameCube_4

PellucaCityHouses_GameCube_8:
	end


PellucaCityHouses_TV::
# 164 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_TV_Text_0
# 165 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCity_Clauncher::
# 269 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 270 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 272 "data//maps/PellucaCityHouses/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 6
	goto_if_eq PellucaCity_Clauncher_2
PellucaCity_Clauncher_1:
# 280 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_2
# 281 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 282 "data//maps/PellucaCityHouses/scripts.pory"
	fadescreen FADE_TO_BLACK
# 283 "data//maps/PellucaCityHouses/scripts.pory"
	removeobject VAR_LAST_TALKED
# 284 "data//maps/PellucaCityHouses/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 285 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_3
# 287 "data//maps/PellucaCityHouses/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 289 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end

PellucaCity_Clauncher_2:
# 273 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_0
# 274 "data//maps/PellucaCityHouses/scripts.pory"
	setwildbattle SPECIES_CURSOLA, 28
# 275 "data//maps/PellucaCityHouses/scripts.pory"
	dowildbattle
# 276 "data//maps/PellucaCityHouses/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 277 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCity_Clauncher_Text_1
	goto PellucaCity_Clauncher_1


PellucaCityHouses_NPC2::
# 320 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_NPC3::
# 324 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_NPC4::
# 328 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCityHouses_Delphox::
# 336 "data//maps/PellucaCityHouses/scripts.pory"
	playmoncry SPECIES_DELPHOX, CRY_MODE_NORMAL
# 337 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_Delphox_Text_0, MSGBOX_NPC
	end


# 70 "data//maps/PellucaCityHouses/scripts.pory"
PellucaCityHouses_MayorQuestStart_Movement_0:
# 70 "data//maps/PellucaCityHouses/scripts.pory"
	emote_exclamation_mark
	step_end

PellucaCityHouses_MayorQuestStart_Text_0:
# 30 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Mayor$"

PellucaCityHouses_MayorQuestStart_Text_1:
# 31 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Now that we've teamed up, we're doing\n"
	.string "much better!$"

PellucaCityHouses_MayorQuestStart_Text_2:
# 37 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Have you managed to do something\n"
	.string "about the Qwilsquad yet?\p"
	.string "No?\p"
	.string "Sigh...I was foolish to ask a child.$"

PellucaCityHouses_MayorQuestStart_Text_3:
# 43 "data//maps/PellucaCityHouses/scripts.pory"
	.string "What now? I just can't -\p"
	.string "Oh, it's you. The trainer at the bridge.\p"
	.string "How has your stay at Pelluca City\n"
	.string "been so far?\p"
	.string "We hope you enjoy the cool riverside\n"
	.string "breeze while munching on one of our\l"
	.string "famous Apple Pies!\p"
	.string "And...and please accept this\n"
	.string "complimentary Drifblim Pass!$"

PellucaCityHouses_MayorQuestStart_Text_4:
# 47 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Using this, you'll be able to use the\n"
	.string "Drifblim outside our Pokémon Center\l"
	.string "to fly to other cities in Cormoria!\p"
	.string "Convenient access for all tourists!\p"
	.string "...\p"
	.string "After what you've seen, there's no\n"
	.string "point in selling you the city, is there?$"

PellucaCityHouses_MayorQuestStart_Text_5:
# 51 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Oh, what am I supposed to do?\n"
	.string "Everything was fine until one day,\l"
	.string "the Qwilsquad showed up out of nowhere\l"
	.string "and bullied their way into power!\p"
	.string "And then they started harrassing\n"
	.string "everyone and ruining this city's image.\p"
	.string "I'm not a trainer - I'm a politician!\p"
	.string "There's no way I can battle them.$"

PellucaCityHouses_MayorQuestStart_Text_6:
# 59 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I just don't know what to do about\n"
	.string "the Qwilsquad...$"

PellucaCityHouses_MayorQuestStart_Text_7:
# 61 "data//maps/PellucaCityHouses/scripts.pory"
	.string "That's too bad$"

PellucaCityHouses_MayorQuestStart_Text_8:
# 61 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Can I help?$"

PellucaCityHouses_MayorQuestStart_Text_9:
# 65 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Sigh...thanks for hearing me out.\n"
	.string "I do hope you enjoy your stay here.$"

PellucaCityHouses_MayorQuestStart_Text_10:
# 74 "data//maps/PellucaCityHouses/scripts.pory"
	.string "C-can you? The Qwilsquad will only\n"
	.string "listen if you speak in their language.\l"
	.string "Do you think you can stand up to the\l"
	.string "Qwilsquad and their boss?\p"
	.string "They're all holed up in the abandoned\n"
	.string "riverside shack to the west.\p"
	.string "Please - go there and convince them\n"
	.string "to get out of the city!$"

PellucaCityHouses_GabSibling1_Text_0:
# 110 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Big Sis is back! She got me a Swap 2.\n"
	.string "I'm not playing it because I'm gonna\l"
	.string "play with her. You wanna play it?$"

PellucaCityHouses_GabSibling2_Text_0:
# 114 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I wish Big Sis stayed home all the time!$"

PellucaCityHouses_GabSibling3_Text_0:
# 120 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Gabrielle keeps us afloat. Without her,\n"
	.string "I wouldn't be able to afford to study.\p"
	.string "I got her a gift.$"

PellucaCityHouses_GabSibling3_Text_1:
# 127 "data//maps/PellucaCityHouses/scripts.pory"
	.string "A traveling merchant sold it to me.\n"
	.string "It's the least I can do for her.$"

PellucaCityHouses_GameCube_Text_0:
# 132 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It's a Swap 2, the popular gaming\n"
	.string "console!\p"
	.string "Turn it on?$"

PellucaCityHouses_GameCube_Text_1:
# 145 "data//maps/PellucaCityHouses/scripts.pory"
	.string "You got the high score!$"

PellucaCityHouses_GameCube_Text_2:
# 153 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Something fell out of the Swap 2!\n"
	.string "What is it?$"

PellucaCityHouses_TV_Text_0:
# 164 "data//maps/PellucaCityHouses/scripts.pory"
	.string "The TV is hooked up to the Swap 2.$"

PellucaCity_Clauncher_Text_0:
# 273 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It's a Corsola!\p"
	.string "...\p"
	.string "Wait, it doesn't look like a Corsola...it's\n"
	.string "a little paler...a little less cute...$"

PellucaCity_Clauncher_Text_1:
# 277 "data//maps/PellucaCityHouses/scripts.pory"
	.string "That's five Corsolas...one way or\n"
	.string "another! Better get back to the mayor.$"

PellucaCity_Clauncher_Text_2:
# 280 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It's a Corsola! It's looking disoriented.\p"
	.string "{PLAYER} gently lifts the Corsola and\n"
	.string "tosses it back into the river.$"

PellucaCity_Clauncher_Text_3:
# 285 "data//maps/PellucaCityHouses/scripts.pory"
	.string "See you Corsola!$"

PellucaCityHouses_NPC2_Text_0:
# 320 "data//maps/PellucaCityHouses/scripts.pory"
	.string "We we born here here, fell in love here,\n"
	.string "and grew old here.$"

PellucaCityHouses_NPC3_Text_0:
# 324 "data//maps/PellucaCityHouses/scripts.pory"
	.string "After so long together, love gets\n"
	.string "replaced by companionship. But it's\l"
	.string "always there, somewhere beneath the\l"
	.string "surface.$"

PellucaCityHouses_NPC4_Text_0:
# 328 "data//maps/PellucaCityHouses/scripts.pory"
	.string "My Delphox doesn't like the river air.\n"
	.string "She prefers the dense fog of Vilethorn\l"
	.string "Woods, where I first met her.$"

PellucaCityHouses_Delphox_Text_0:
# 337 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Delphox looks wistful...$"
