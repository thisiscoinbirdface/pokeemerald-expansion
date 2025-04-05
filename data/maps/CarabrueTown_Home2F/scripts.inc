CarabrueTown_Home2F_MapScripts::
	.byte 0


CarabrueTown_Home2F_EventScript_PickUpBag::
# 5 "data//maps/CarabrueTown_Home2F/scripts.pory"
	lockall
# 6 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_EventScript_PickUpBag_Text_0
# 7 "data//maps/CarabrueTown_Home2F/scripts.pory"
	release
# 9 "data//maps/CarabrueTown_Home2F/scripts.pory"
	giveitem ITEM_LAB_WELCOMEPACKAGE
# 10 "data//maps/CarabrueTown_Home2F/scripts.pory"
	setflag FLAG_TENEBRIS_POLICE_PRESCENCE
# 11 "data//maps/CarabrueTown_Home2F/scripts.pory"
	removeobject 1
# 13 "data//maps/CarabrueTown_Home2F/scripts.pory"
	releaseall
	return


CarabrueTown_Home2F_EventScript_PC::
# 17 "data//maps/CarabrueTown_Home2F/scripts.pory"
	lockall
# 18 "data//maps/CarabrueTown_Home2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 19 "data//maps/CarabrueTown_Home2F/scripts.pory"
	special DoPCTurnOnEffect
# 20 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 21 "data//maps/CarabrueTown_Home2F/scripts.pory"
	special BedroomPC
# 22 "data//maps/CarabrueTown_Home2F/scripts.pory"
	waitstate
# 23 "data//maps/CarabrueTown_Home2F/scripts.pory"
	releaseall
	return


CarabrueTown_Home2F_EventScript_PickUpBag_Text_0:
# 6 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "The lab sent a Welcome Package\n"
	.string "yesterday. I'm supposed to bring it with\l"
	.string "me without opening it, they said.$"
