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
	applymovement 1, CarabrueTown_EventScript_PoliceRoadBlock_Movement_0
# 22 "data//maps/CarabrueTown/scripts.pory"
	applymovement 2, CarabrueTown_EventScript_PoliceRoadBlock_Movement_0
# 23 "data//maps/CarabrueTown/scripts.pory"
	waitmovement 2
# 24 "data//maps/CarabrueTown/scripts.pory"
	applymovement 1, CarabrueTown_EventScript_PoliceRoadBlock_Movement_1
# 25 "data//maps/CarabrueTown/scripts.pory"
	applymovement 2, CarabrueTown_EventScript_PoliceRoadBlock_Movement_1
# 26 "data//maps/CarabrueTown/scripts.pory"
	waitmovement 2
# 28 "data//maps/CarabrueTown/scripts.pory"
	removeobject 1
# 29 "data//maps/CarabrueTown/scripts.pory"
	removeobject 2
# 31 "data//maps/CarabrueTown/scripts.pory"
	removeitem ITEM_LAB_WELCOMEPACKAGE
# 32 "data//maps/CarabrueTown/scripts.pory"
	setflag FLAG_CARABRUE_POLICE
CarabrueTown_EventScript_PoliceRoadBlock_1:
# 35 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return

CarabrueTown_EventScript_PoliceRoadBlock_2:
# 8 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_PoliceRoadBlock_Text_0
	goto CarabrueTown_EventScript_PoliceRoadBlock_1


CarabrueTown_Sign_Main::
# 40 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_Main_Text_0, MSGBOX_SIGN
	end


CarabrueTown_Sign_TenebrisLab::
# 45 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_Sign_TenebrisLab_Text_0, MSGBOX_SIGN
	end


CarabrueTown_EventScript_NPC1::
# 50 "data//maps/CarabrueTown/scripts.pory"
	lockall
# 51 "data//maps/CarabrueTown/scripts.pory"
	faceplayer
# 52 "data//maps/CarabrueTown/scripts.pory"
	msgbox CarabrueTown_EventScript_NPC1_Text_0
# 53 "data//maps/CarabrueTown/scripts.pory"
	releaseall
	return


# 21 "data//maps/CarabrueTown/scripts.pory"
CarabrueTown_EventScript_PoliceRoadBlock_Movement_0:
# 21 "data//maps/CarabrueTown/scripts.pory"
	face_right
	step_end

# 24 "data//maps/CarabrueTown/scripts.pory"
CarabrueTown_EventScript_PoliceRoadBlock_Movement_1:
# 24 "data//maps/CarabrueTown/scripts.pory"
	walk_right
# 24 "data//maps/CarabrueTown/scripts.pory"
	walk_right
# 24 "data//maps/CarabrueTown/scripts.pory"
	walk_right
# 24 "data//maps/CarabrueTown/scripts.pory"
	walk_right
# 24 "data//maps/CarabrueTown/scripts.pory"
	walk_right
# 24 "data//maps/CarabrueTown/scripts.pory"
	walk_right
# 24 "data//maps/CarabrueTown/scripts.pory"
	walk_right
# 24 "data//maps/CarabrueTown/scripts.pory"
	walk_right
# 24 "data//maps/CarabrueTown/scripts.pory"
	walk_right
	step_end

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
# 40 "data//maps/CarabrueTown/scripts.pory"
	.string "CARABRUE TOWN\n"
	.string "An idyllic hill station.$"

CarabrueTown_Sign_TenebrisLab_Text_0:
# 45 "data//maps/CarabrueTown/scripts.pory"
	.string "THE TENEBRIS LABORATORY\n"
	.string "Pokemon psychology research hub.$"

CarabrueTown_EventScript_NPC1_Text_0:
# 52 "data//maps/CarabrueTown/scripts.pory"
	.string "Psst - {PLAYER}! See those cops over\n"
	.string "there? They came all the way from\l"
	.string "Fennilahl Town to investigate the\l"
	.string "Professor's disappearance. They're\l"
	.string "blocking access to Route 1 while they\l"
	.string "investigate.$"
