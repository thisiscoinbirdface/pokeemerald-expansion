CarabrueTown_MapScripts::
# 5 "data//maps/CarabrueTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CarabrueTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CarabrueTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data//maps/CarabrueTown/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, CarabrueTown_PostGame
	.2byte 0


CarabrueTown_PostGame::
# 13 "data//maps/CarabrueTown/scripts.pory"
	setvar VAR_TEMP_0, 1
# 14 "data//maps/CarabrueTown/scripts.pory"
	goto_if_set FLAG_SKIP_POSTGAME_MSG, CarabrueTown_PostGame_2
# 15 "data//maps/CarabrueTown/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CarabrueTown_PostGame_4
	return

CarabrueTown_PostGame_2:
# 14 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	end

CarabrueTown_PostGame_4:
# 17 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_PostGame_Text_0, MSGBOX_POKENAV
# 19 "data//maps/CarabrueTown/scripts.pory"
	setflag FLAG_SKIP_POSTGAME_MSG
# 20 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	end


CarabrueTown_EventScript_PoliceRoadBlock::
# 29 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 31 "data//maps/CarabrueTown/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_EventScript_PoliceRoadBlock_2
# 35 "data//maps/CarabrueTown/scripts.pory"
	speakername CarabrueTown_EventScript_PoliceRoadBlock_Text_0
# 36 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_2
# 37 "data//maps/CarabrueTown/scripts.pory"
	release
# 38 "data//maps/CarabrueTown/scripts.pory"
	applymovement 1, CarabrueTown_EventScript_PoliceRoadBlock_Movement_0
# 39 "data//maps/CarabrueTown/scripts.pory"
	applymovement 2, CarabrueTown_EventScript_PoliceRoadBlock_Movement_0
# 40 "data//maps/CarabrueTown/scripts.pory"
	delay 20
# 41 "data//maps/CarabrueTown/scripts.pory"
	speakername CarabrueTown_EventScript_PoliceRoadBlock_Text_0
# 42 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_3
# 43 "data//maps/CarabrueTown/scripts.pory"
	release
# 45 "data//maps/CarabrueTown/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 46 "data//maps/CarabrueTown/scripts.pory"
	speakername CarabrueTown_EventScript_PoliceRoadBlock_Text_0
# 47 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_4
# 48 "data//maps/CarabrueTown/scripts.pory"
	release
# 49 "data//maps/CarabrueTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 51 "data//maps/CarabrueTown/scripts.pory"
	removeobject 1
# 52 "data//maps/CarabrueTown/scripts.pory"
	removeobject 2
# 53 "data//maps/CarabrueTown/scripts.pory"
	playse SE_EXIT
# 54 "data//maps/CarabrueTown/scripts.pory"
	delay 16
# 55 "data//maps/CarabrueTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 57 "data//maps/CarabrueTown/scripts.pory"
	removeitem ITEM_LAB_WELCOMEPACKAGE
# 58 "data//maps/CarabrueTown/scripts.pory"
	setflag FLAG_CARABRUE_POLICE
CarabrueTown_EventScript_PoliceRoadBlock_1:
# 61 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return

CarabrueTown_EventScript_PoliceRoadBlock_2:
# 32 "data//maps/CarabrueTown/scripts.pory"
	speakername CarabrueTown_EventScript_PoliceRoadBlock_Text_0
# 33 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_1
	goto CarabrueTown_EventScript_PoliceRoadBlock_1


CarabrueTown_Sign_ChampionHouse::
# 69 "data//maps/CarabrueTown/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CarabrueTown_Sign_ChampionHouse_2
# 79 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 80 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_ChampionHouse_Text_1
# 81 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	end

CarabrueTown_Sign_ChampionHouse_2:
# 70 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_ChampionHouse_Text_0, MSGBOX_YESNO
# 71 "data//maps/CarabrueTown/scripts.pory"
	release
# 72 "data//maps/CarabrueTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CarabrueTown_Sign_ChampionHouse_5
# 73 "data//maps/CarabrueTown/scripts.pory"
	playse SE_DOOR
# 74 "data//maps/CarabrueTown/scripts.pory"
	warp MAP_THE_OTHER_HOUSE, 2, 8
# 75 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	end

CarabrueTown_Sign_ChampionHouse_5:
	end


CarabrueTown_EventScript_NPC1::
# 86 "data//maps/CarabrueTown/scripts.pory"
	goto_if_set FLAG_CARABRUE_POLICE, CarabrueTown_EventScript_NPC1_2
# 89 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC1_Text_1, MSGBOX_NPC
CarabrueTown_EventScript_NPC1_1:
	end

CarabrueTown_EventScript_NPC1_2:
# 87 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC1_Text_0, MSGBOX_NPC
	goto CarabrueTown_EventScript_NPC1_1


CarabrueTown_EventScript_NPC2::
# 95 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC2_Text_0, MSGBOX_NPC
	end


CarabrueTown_Chikorita::
# 100 "data//maps/CarabrueTown/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 101 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Chikorita_Text_0, MSGBOX_NPC
	end


# 38 "data//maps/CarabrueTown/scripts.pory"
CarabrueTown_EventScript_PoliceRoadBlock_Movement_0:
# 38 "data//maps/CarabrueTown/scripts.pory"
	emote_exclamation_mark
	step_end

CarabrueTown_PostGame_Text_0:
# 17 "data//maps/CarabrueTown/scripts.pory"
	.string "Thank you for playing Pokémon\n"
	.string "Dreamstone Mysteries and\l"
	.string "congratulations on becoming\l"
	.string "the Champion of Cormoria!\p"
	.string "But tell me - is a Champion truly a\n"
	.string "Champion unless they've explored\l"
	.string "all of Cormoria?\p"
	.string "In this game, completing the\n"
	.string "Pokédex is not possible.\p"
	.string "Why don't you try completing\n"
	.string "the side-quests and catching\l"
	.string "the 4 Mythical Pokémon available?$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_0:
# 32 "data//maps/CarabrueTown/scripts.pory"
	.string "Detective$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_1:
# 33 "data//maps/CarabrueTown/scripts.pory"
	.string "Sorry, this road is temporarily closed.\n"
	.string "We're investigating Professor Tenebris'\l"
	.string "disappearance.$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_2:
# 36 "data//maps/CarabrueTown/scripts.pory"
	.string "Is this the evidence from the lab?\n"
	.string "Thanks, kid. We'll take it from here.\p"
	.string "...$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_3:
# 42 "data//maps/CarabrueTown/scripts.pory"
	.string "Hold on - this isn't evidence!$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_4:
# 47 "data//maps/CarabrueTown/scripts.pory"
	.string "What's the matter with you guys?\p"
	.string "Can't keep it together without the\n"
	.string "Professor around to help you?\p"
	.string "Well thanks anyway, kid. See you.$"

CarabrueTown_Sign_ChampionHouse_Text_0:
# 70 "data//maps/CarabrueTown/scripts.pory"
	.string "There's no lock. Open the door?$"

CarabrueTown_Sign_ChampionHouse_Text_1:
# 80 "data//maps/CarabrueTown/scripts.pory"
	.string "This house is locked.$"

CarabrueTown_EventScript_NPC1_Text_0:
# 87 "data//maps/CarabrueTown/scripts.pory"
	.string "Looks like the police went away. I hope\n"
	.string "they got the evidence they needed!$"

CarabrueTown_EventScript_NPC1_Text_1:
# 89 "data//maps/CarabrueTown/scripts.pory"
	.string "Psst - {PLAYER}! See those\n"
	.string "detectives standing over there?\p"
	.string "They came all the way from Fennilahl\n"
	.string "Town to investigate the Professor's\l"
	.string "disappearance. They're blocking access\l"
	.string "to Route 1 while they investigate.$"

CarabrueTown_EventScript_NPC2_Text_0:
# 95 "data//maps/CarabrueTown/scripts.pory"
	.string "My Chikorita and I love how cozy\n"
	.string "Carabrue Town is! That's because it's\l"
	.string "nestled deep in the hills of Cormoria.$"

CarabrueTown_Chikorita_Text_0:
# 101 "data//maps/CarabrueTown/scripts.pory"
	.string "Chikorita is happy!$"
