CarabrueTown_MapScripts::
	.byte 0


CarabrueTown_EventScript_PoliceRoadBlock::
# 5 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 7 "data//maps/CarabrueTown/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_EventScript_PoliceRoadBlock_2
# 11 "data//maps/CarabrueTown/scripts.pory"
	speakername CarabrueTown_EventScript_PoliceRoadBlock_Text_0
# 12 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_2
# 13 "data//maps/CarabrueTown/scripts.pory"
	release
# 14 "data//maps/CarabrueTown/scripts.pory"
	applymovement 1, CarabrueTown_EventScript_PoliceRoadBlock_Movement_0
# 15 "data//maps/CarabrueTown/scripts.pory"
	applymovement 2, CarabrueTown_EventScript_PoliceRoadBlock_Movement_0
# 16 "data//maps/CarabrueTown/scripts.pory"
	delay 20
# 17 "data//maps/CarabrueTown/scripts.pory"
	speakername CarabrueTown_EventScript_PoliceRoadBlock_Text_0
# 18 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_3
# 19 "data//maps/CarabrueTown/scripts.pory"
	release
# 21 "data//maps/CarabrueTown/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 22 "data//maps/CarabrueTown/scripts.pory"
	speakername CarabrueTown_EventScript_PoliceRoadBlock_Text_0
# 23 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_4
# 24 "data//maps/CarabrueTown/scripts.pory"
	release
# 25 "data//maps/CarabrueTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 27 "data//maps/CarabrueTown/scripts.pory"
	removeobject 1
# 28 "data//maps/CarabrueTown/scripts.pory"
	removeobject 2
# 29 "data//maps/CarabrueTown/scripts.pory"
	playse SE_EXIT
# 30 "data//maps/CarabrueTown/scripts.pory"
	delay 16
# 31 "data//maps/CarabrueTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 33 "data//maps/CarabrueTown/scripts.pory"
	removeitem ITEM_LAB_WELCOMEPACKAGE
# 34 "data//maps/CarabrueTown/scripts.pory"
	setflag FLAG_CARABRUE_POLICE
CarabrueTown_EventScript_PoliceRoadBlock_1:
# 37 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return

CarabrueTown_EventScript_PoliceRoadBlock_2:
# 8 "data//maps/CarabrueTown/scripts.pory"
	speakername CarabrueTown_EventScript_PoliceRoadBlock_Text_0
# 9 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_1
	goto CarabrueTown_EventScript_PoliceRoadBlock_1


CarabrueTown_Sign_ChampionHouse::
# 45 "data//maps/CarabrueTown/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CarabrueTown_Sign_ChampionHouse_2
# 55 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 56 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_ChampionHouse_Text_1
# 57 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	end

CarabrueTown_Sign_ChampionHouse_2:
# 46 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_ChampionHouse_Text_0, MSGBOX_YESNO
# 47 "data//maps/CarabrueTown/scripts.pory"
	release
# 48 "data//maps/CarabrueTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CarabrueTown_Sign_ChampionHouse_5
# 49 "data//maps/CarabrueTown/scripts.pory"
	playse SE_DOOR
# 50 "data//maps/CarabrueTown/scripts.pory"
	warp MAP_THE_OTHER_HOUSE, 2, 8
# 51 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	end

CarabrueTown_Sign_ChampionHouse_5:
	end


CarabrueTown_EventScript_NPC1::
# 62 "data//maps/CarabrueTown/scripts.pory"
	goto_if_set FLAG_CARABRUE_POLICE, CarabrueTown_EventScript_NPC1_2
# 65 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC1_Text_1, MSGBOX_NPC
CarabrueTown_EventScript_NPC1_1:
	end

CarabrueTown_EventScript_NPC1_2:
# 63 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC1_Text_0, MSGBOX_NPC
	goto CarabrueTown_EventScript_NPC1_1


CarabrueTown_EventScript_NPC2::
# 71 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC2_Text_0, MSGBOX_NPC
	end


CarabrueTown_Chikorita::
# 76 "data//maps/CarabrueTown/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 77 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Chikorita_Text_0, MSGBOX_NPC
	end


# 14 "data//maps/CarabrueTown/scripts.pory"
CarabrueTown_EventScript_PoliceRoadBlock_Movement_0:
# 14 "data//maps/CarabrueTown/scripts.pory"
	emote_exclamation_mark
	step_end

CarabrueTown_EventScript_PoliceRoadBlock_Text_0:
# 8 "data//maps/CarabrueTown/scripts.pory"
	.string "Detective$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_1:
# 9 "data//maps/CarabrueTown/scripts.pory"
	.string "Sorry, this road is temporarily closed.\n"
	.string "We're investigating Professor Tenebris'\l"
	.string "disappearance.$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_2:
# 12 "data//maps/CarabrueTown/scripts.pory"
	.string "Is this the evidence from the lab?\n"
	.string "Thanks, kid. We'll take it from here.\p"
	.string "...$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_3:
# 18 "data//maps/CarabrueTown/scripts.pory"
	.string "Hold on - this isn't evidence!$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_4:
# 23 "data//maps/CarabrueTown/scripts.pory"
	.string "What's the matter with you guys?\p"
	.string "Can't keep it together without the\n"
	.string "Professor around to help you?\p"
	.string "Well thanks anyway, kid. See you.$"

CarabrueTown_Sign_ChampionHouse_Text_0:
# 46 "data//maps/CarabrueTown/scripts.pory"
	.string "There's no lock. Open the door?$"

CarabrueTown_Sign_ChampionHouse_Text_1:
# 56 "data//maps/CarabrueTown/scripts.pory"
	.string "This house is locked.$"

CarabrueTown_EventScript_NPC1_Text_0:
# 63 "data//maps/CarabrueTown/scripts.pory"
	.string "Looks like the police went away. I hope\n"
	.string "they got the evidence they needed!$"

CarabrueTown_EventScript_NPC1_Text_1:
# 65 "data//maps/CarabrueTown/scripts.pory"
	.string "Psst - {PLAYER}! See those\n"
	.string "detectives standing over there?\p"
	.string "They came all the way from Fennilahl\n"
	.string "Town to investigate the Professor's\l"
	.string "disappearance. They're blocking access\l"
	.string "to Route 1 while they investigate.$"

CarabrueTown_EventScript_NPC2_Text_0:
# 71 "data//maps/CarabrueTown/scripts.pory"
	.string "My Chikorita and I love how cozy\n"
	.string "Carabrue Town is! That's because it's\l"
	.string "nestled deep in the hills of Cormoria.$"

CarabrueTown_Chikorita_Text_0:
# 77 "data//maps/CarabrueTown/scripts.pory"
	.string "Chikorita is happy!$"
