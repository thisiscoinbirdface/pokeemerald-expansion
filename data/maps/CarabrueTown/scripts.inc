CarabrueTown_MapScripts::
	.byte 0


CarabrueTown_EventScript_PoliceRoadBlock::
# 5 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 7 "data//maps/CarabrueTown/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_EventScript_PoliceRoadBlock_2
# 14 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_1
# 19 "data//maps/CarabrueTown/scripts.pory"
	release
# 21 "data//maps/CarabrueTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data//maps/CarabrueTown/scripts.pory"
	removeobject 1
# 24 "data//maps/CarabrueTown/scripts.pory"
	removeobject 2
# 26 "data//maps/CarabrueTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 28 "data//maps/CarabrueTown/scripts.pory"
	removeitem ITEM_LAB_WELCOMEPACKAGE
# 29 "data//maps/CarabrueTown/scripts.pory"
	setflag FLAG_CARABRUE_POLICE
CarabrueTown_EventScript_PoliceRoadBlock_1:
# 32 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return

CarabrueTown_EventScript_PoliceRoadBlock_2:
# 8 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_0
	goto CarabrueTown_EventScript_PoliceRoadBlock_1


CarabrueTown_Sign_Main::
# 37 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_Main_Text_0, MSGBOX_SIGN
	end


CarabrueTown_Sign_TenebrisLab::
# 42 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_TenebrisLab_Text_0, MSGBOX_SIGN
	end


CarabrueTown_Sign_ChampionHouse::
# 47 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 48 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_ChampionHouse_Text_0
# 49 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return


CarabrueTown_EventScript_NPC1::
# 53 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 54 "data//maps/CarabrueTown/scripts.pory"
	faceplayer
# 55 "data//maps/CarabrueTown/scripts.pory"
	goto_if_set FLAG_CARABRUE_POLICE, CarabrueTown_EventScript_NPC1_2
# 58 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC1_Text_1
CarabrueTown_EventScript_NPC1_1:
# 60 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return

CarabrueTown_EventScript_NPC1_2:
# 56 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC1_Text_0
	goto CarabrueTown_EventScript_NPC1_1


CarabrueTown_EventScript_NPC2::
# 64 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 65 "data//maps/CarabrueTown/scripts.pory"
	faceplayer
# 66 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC2_Text_0
# 67 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return


CarabrueTown_Chikorita::
# 71 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 72 "data//maps/CarabrueTown/scripts.pory"
	faceplayer
# 73 "data//maps/CarabrueTown/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 74 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return


CarabrueTown_EventScript_PoliceRoadBlock_Text_0:
# 10 "data//maps/CarabrueTown/scripts.pory"
	.string "Sorry, this road is temporarily closed.\n"
	.string "We're investigating Professor Tenebris'\l"
	.string "disappearance.$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_1:
# 16 "data//maps/CarabrueTown/scripts.pory"
	.string "Is this the evidence from the lab?\n"
	.string "Perfect. Thanks, kid. We'll take it from\l"
	.string "here.$"

CarabrueTown_Sign_Main_Text_0:
# 37 "data//maps/CarabrueTown/scripts.pory"
	.string "CARABRUE TOWN\n"
	.string "An idyllic hill station.$"

CarabrueTown_Sign_TenebrisLab_Text_0:
# 42 "data//maps/CarabrueTown/scripts.pory"
	.string "THE TENEBRIS LABORATORY\n"
	.string "Pokemon psychology research hub.$"

CarabrueTown_Sign_ChampionHouse_Text_0:
# 48 "data//maps/CarabrueTown/scripts.pory"
	.string "This house is locked.$"

CarabrueTown_EventScript_NPC1_Text_0:
# 56 "data//maps/CarabrueTown/scripts.pory"
	.string "Looks like the police went away. I hope\n"
	.string "they got the evidence they needed.$"

CarabrueTown_EventScript_NPC1_Text_1:
# 58 "data//maps/CarabrueTown/scripts.pory"
	.string "Psst - {PLAYER}! See those cops over\n"
	.string "there? They came all the way from\l"
	.string "Fennilahl Town to investigate the\l"
	.string "Professor's disappearance. They're\l"
	.string "blocking access to Route 1 while they\l"
	.string "investigate.$"

CarabrueTown_EventScript_NPC2_Text_0:
# 66 "data//maps/CarabrueTown/scripts.pory"
	.string "My CHIKORITA and I love how cosy\n"
	.string "CARABRUE TOWN is! That's because it's\l"
	.string "nestled deep in the southern hills of\l"
	.string "CORMORIA.$"
