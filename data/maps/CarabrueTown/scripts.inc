CarabrueTown_MapScripts::
	.byte 0


CarabrueTown_EventScript_PoliceRoadBlock::
# 5 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 7 "data//maps/CarabrueTown/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, CarabrueTown_EventScript_PoliceRoadBlock_2
# 10 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_1
# 11 "data//maps/CarabrueTown/scripts.pory"
	release
# 12 "data//maps/CarabrueTown/scripts.pory"
	applymovement 1, CarabrueTown_EventScript_PoliceRoadBlock_Movement_0
# 13 "data//maps/CarabrueTown/scripts.pory"
	applymovement 2, CarabrueTown_EventScript_PoliceRoadBlock_Movement_0
# 14 "data//maps/CarabrueTown/scripts.pory"
	delay 20
# 15 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_2
# 16 "data//maps/CarabrueTown/scripts.pory"
	release
# 18 "data//maps/CarabrueTown/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 20 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_3
# 21 "data//maps/CarabrueTown/scripts.pory"
	release
# 22 "data//maps/CarabrueTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data//maps/CarabrueTown/scripts.pory"
	removeobject 1
# 25 "data//maps/CarabrueTown/scripts.pory"
	removeobject 2
# 27 "data//maps/CarabrueTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 29 "data//maps/CarabrueTown/scripts.pory"
	removeitem ITEM_LAB_WELCOMEPACKAGE
# 30 "data//maps/CarabrueTown/scripts.pory"
	setflag FLAG_CARABRUE_POLICE
CarabrueTown_EventScript_PoliceRoadBlock_1:
# 33 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return

CarabrueTown_EventScript_PoliceRoadBlock_2:
# 8 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_0
	goto CarabrueTown_EventScript_PoliceRoadBlock_1


CarabrueTown_Sign_ChampionHouse::
# 40 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 41 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_ChampionHouse_Text_0
# 42 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return


CarabrueTown_EventScript_NPC1::
# 46 "data//maps/CarabrueTown/scripts.pory"
	goto_if_set FLAG_CARABRUE_POLICE, CarabrueTown_EventScript_NPC1_2
# 49 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC1_Text_1, MSGBOX_NPC
CarabrueTown_EventScript_NPC1_1:
	end

CarabrueTown_EventScript_NPC1_2:
# 47 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC1_Text_0, MSGBOX_NPC
	goto CarabrueTown_EventScript_NPC1_1


CarabrueTown_EventScript_NPC2::
# 55 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC2_Text_0, MSGBOX_NPC
	end


CarabrueTown_Chikorita::
# 60 "data//maps/CarabrueTown/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 61 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Chikorita_Text_0, MSGBOX_NPC
	end


# 12 "data//maps/CarabrueTown/scripts.pory"
CarabrueTown_EventScript_PoliceRoadBlock_Movement_0:
# 12 "data//maps/CarabrueTown/scripts.pory"
	emote_exclamation_mark
	step_end

CarabrueTown_EventScript_PoliceRoadBlock_Text_0:
# 8 "data//maps/CarabrueTown/scripts.pory"
	.string "DETECTIVE: Sorry, this road is\n"
	.string "temporarily closed. We're investigating\l"
	.string "Professor Tenebris' disappearance.$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_1:
# 10 "data//maps/CarabrueTown/scripts.pory"
	.string "DETECTIVE: Is this the evidence from\n"
	.string "the lab? Perfect. Thanks, kid. We'll take\l"
	.string "it from here.\p"
	.string "...$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_2:
# 15 "data//maps/CarabrueTown/scripts.pory"
	.string "DETECTIVE: Hold on - this doesn't look\n"
	.string "like evidence!$"

CarabrueTown_EventScript_PoliceRoadBlock_Text_3:
# 20 "data//maps/CarabrueTown/scripts.pory"
	.string "DETECTIVE: What's the matter with you\n"
	.string "guys? Can't keep it together without\l"
	.string "the Professor?$"

CarabrueTown_Sign_ChampionHouse_Text_0:
# 41 "data//maps/CarabrueTown/scripts.pory"
	.string "This house is locked.$"

CarabrueTown_EventScript_NPC1_Text_0:
# 47 "data//maps/CarabrueTown/scripts.pory"
	.string "Looks like the police went away. I hope\n"
	.string "they got the evidence they needed.$"

CarabrueTown_EventScript_NPC1_Text_1:
# 49 "data//maps/CarabrueTown/scripts.pory"
	.string "Psst - {PLAYER}! See those cops over\n"
	.string "there? They came all the way from\l"
	.string "Fennilahl Town to investigate the\l"
	.string "Professor's disappearance. They're\l"
	.string "blocking access to Route 1 while they\l"
	.string "investigate.$"

CarabrueTown_EventScript_NPC2_Text_0:
# 55 "data//maps/CarabrueTown/scripts.pory"
	.string "My Chikorita and I love how cozy\n"
	.string "Carabrue Town is! That's because it's\l"
	.string "nestled deep in the southern hills of\l"
	.string "Cormoria.$"

CarabrueTown_Chikorita_Text_0:
# 61 "data//maps/CarabrueTown/scripts.pory"
	.string "Chikorita is happy!$"
