CarabrueTown_Home2F_MapScripts::
	.byte 0


CarabrueTown_Home2F_EventScript_PickUpBag::
# 6 "data//maps/CarabrueTown_Home2F/scripts.pory"
	lockall
# 7 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_EventScript_PickUpBag_Text_0
# 12 "data//maps/CarabrueTown_Home2F/scripts.pory"
	release
# 14 "data//maps/CarabrueTown_Home2F/scripts.pory"
	giveitem ITEM_LAB_WELCOMEPACKAGE
# 16 "data//maps/CarabrueTown_Home2F/scripts.pory"
	removeobject 1
# 18 "data//maps/CarabrueTown_Home2F/scripts.pory"
	releaseall
	return


CarabrueTown_Home2F_EventScript_PickUpBag_Text_0:
# 9 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "The lab sent a welcome package\n"
	.string "yesterday. I'm supposed to bring it with\l"
	.string "me without opening it, they said.$"
