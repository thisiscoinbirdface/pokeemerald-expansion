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
# 30 "data//maps/CarabrueTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 32 "data//maps/CarabrueTown/scripts.pory"
	removeitem ITEM_LAB_WELCOMEPACKAGE
# 33 "data//maps/CarabrueTown/scripts.pory"
	setflag FLAG_CARABRUE_POLICE
CarabrueTown_EventScript_PoliceRoadBlock_1:
# 36 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return

CarabrueTown_EventScript_PoliceRoadBlock_2:
# 8 "data//maps/CarabrueTown/scripts.pory"
	speakername CarabrueTown_EventScript_PoliceRoadBlock_Text_0
# 9 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_1
	goto CarabrueTown_EventScript_PoliceRoadBlock_1


CarabrueTown_Sign_ChampionHouse::
# 43 "data//maps/CarabrueTown/scripts.pory"
	compare VAR_SYS_EXP_ALL, 0
	goto_if_eq CarabrueTown_Sign_ChampionHouse_2
CarabrueTown_Sign_ChampionHouse_1:
# 44 "data//maps/CarabrueTown/scripts.pory"
	compare VAR_SYS_EXP_ALL, 1
	goto_if_eq CarabrueTown_Sign_ChampionHouse_5
CarabrueTown_Sign_ChampionHouse_4:
# 45 "data//maps/CarabrueTown/scripts.pory"
	compare VAR_SYS_EXP_ALL, 2
	goto_if_eq CarabrueTown_Sign_ChampionHouse_8
CarabrueTown_Sign_ChampionHouse_7:
# 47 "data//maps/CarabrueTown/scripts.pory"
	releaseall
# 48 "data//maps/CarabrueTown/scripts.pory"
	end
# 50 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 51 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_ChampionHouse_Text_3
# 52 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return

CarabrueTown_Sign_ChampionHouse_2:
# 43 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_ChampionHouse_Text_0
	goto CarabrueTown_Sign_ChampionHouse_1

CarabrueTown_Sign_ChampionHouse_5:
# 44 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_ChampionHouse_Text_1
	goto CarabrueTown_Sign_ChampionHouse_4

CarabrueTown_Sign_ChampionHouse_8:
# 45 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_ChampionHouse_Text_2
	goto CarabrueTown_Sign_ChampionHouse_7


CarabrueTown_EventScript_NPC1::
# 56 "data//maps/CarabrueTown/scripts.pory"
	goto_if_set FLAG_CARABRUE_POLICE, CarabrueTown_EventScript_NPC1_2
# 59 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC1_Text_1, MSGBOX_NPC
CarabrueTown_EventScript_NPC1_1:
	end

CarabrueTown_EventScript_NPC1_2:
# 57 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC1_Text_0, MSGBOX_NPC
	goto CarabrueTown_EventScript_NPC1_1


CarabrueTown_EventScript_NPC2::
# 65 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC2_Text_0, MSGBOX_NPC
	end


CarabrueTown_Chikorita::
# 70 "data//maps/CarabrueTown/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 71 "data//maps/CarabrueTown/scripts.pory"
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
	.string "Hold on - this doesn't look like\n"
	.string "evidence!$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_4:
# 23 "data//maps/CarabrueTown/scripts.pory"
	.string "What's the matter with you guys?\p"
	.string "Can't keep it together without the\n"
	.string "Professor around to help you?$"

CarabrueTown_Sign_ChampionHouse_Text_0:
# 43 "data//maps/CarabrueTown/scripts.pory"
	.string "0$"

CarabrueTown_Sign_ChampionHouse_Text_1:
# 44 "data//maps/CarabrueTown/scripts.pory"
	.string "1$"

CarabrueTown_Sign_ChampionHouse_Text_2:
# 45 "data//maps/CarabrueTown/scripts.pory"
	.string "2$"

CarabrueTown_Sign_ChampionHouse_Text_3:
# 51 "data//maps/CarabrueTown/scripts.pory"
	.string "This house is locked.$"

CarabrueTown_EventScript_NPC1_Text_0:
# 57 "data//maps/CarabrueTown/scripts.pory"
	.string "Looks like the police went away. I hope\n"
	.string "they got the evidence they needed.$"

CarabrueTown_EventScript_NPC1_Text_1:
# 59 "data//maps/CarabrueTown/scripts.pory"
	.string "Psst - {PLAYER}! See those cops over\n"
	.string "there?\p"
	.string "They came all the way from Fennilahl\n"
	.string "Town to investigate the Professor's\l"
	.string "disappearance. They're blocking access\l"
	.string "to Route 1 while they investigate.$"

CarabrueTown_EventScript_NPC2_Text_0:
# 65 "data//maps/CarabrueTown/scripts.pory"
	.string "My Chikorita and I love how cozy\n"
	.string "Carabrue Town is! That's because it's\l"
	.string "nestled deep in the hills of Cormoria.$"

CarabrueTown_Chikorita_Text_0:
# 71 "data//maps/CarabrueTown/scripts.pory"
	.string "Chikorita is happy!$"
