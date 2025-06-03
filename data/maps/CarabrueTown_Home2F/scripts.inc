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
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
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


CarabrueTown_Home2F_EventScript_GameCube::
# 27 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_EventScript_GameCube_Text_0, MSGBOX_YESNO
# 28 "data//maps/CarabrueTown_Home2F/scripts.pory"
	release
# 29 "data//maps/CarabrueTown_Home2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CarabrueTown_Home2F_EventScript_GameCube_2
# 32 "data//maps/CarabrueTown_Home2F/scripts.pory"
	playbgm MUS_NONE, FALSE
# 33 "data//maps/CarabrueTown_Home2F/scripts.pory"
	special StartSnake
# 34 "data//maps/CarabrueTown_Home2F/scripts.pory"
	waitstate
# 35 "data//maps/CarabrueTown_Home2F/scripts.pory"
	savebgm MUS_DUMMY
# 36 "data//maps/CarabrueTown_Home2F/scripts.pory"
	fadedefaultbgm
# 39 "data//maps/CarabrueTown_Home2F/scripts.pory"
	compare GAME_CORNER_VAR_WINNINGS, 20
	goto_if_eq CarabrueTown_Home2F_EventScript_GameCube_5
CarabrueTown_Home2F_EventScript_GameCube_4:
# 44 "data//maps/CarabrueTown_Home2F/scripts.pory"
	releaseall
	end

CarabrueTown_Home2F_EventScript_GameCube_2:
	end

CarabrueTown_Home2F_EventScript_GameCube_5:
# 41 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_EventScript_GameCube_Text_1
	goto CarabrueTown_Home2F_EventScript_GameCube_4


CarabrueTown_Home2F_EventScript_TV::
# 49 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_EventScript_TV_Text_0, MSGBOX_YESNO
# 50 "data//maps/CarabrueTown_Home2F/scripts.pory"
	release
# 51 "data//maps/CarabrueTown_Home2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CarabrueTown_Home2F_EventScript_TV_2
CarabrueTown_Home2F_EventScript_TV_1:
# 58 "data//maps/CarabrueTown_Home2F/scripts.pory"
	releaseall
	end

CarabrueTown_Home2F_EventScript_TV_2:
# 52 "data//maps/CarabrueTown_Home2F/scripts.pory"
	playbgm MUS_NONE, FALSE
# 53 "data//maps/CarabrueTown_Home2F/scripts.pory"
	special StartSnake
# 54 "data//maps/CarabrueTown_Home2F/scripts.pory"
	waitstate
# 55 "data//maps/CarabrueTown_Home2F/scripts.pory"
	savebgm MUS_DUMMY
# 56 "data//maps/CarabrueTown_Home2F/scripts.pory"
	fadedefaultbgm
	goto CarabrueTown_Home2F_EventScript_TV_1


CarabrueTown_Home2F_EventScript_PickUpBag_Text_0:
# 6 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "The lab sent a Welcome Package\n"
	.string "yesterday. I'm supposed to bring it with\l"
	.string "me without opening it, they said.$"

CarabrueTown_Home2F_EventScript_GameCube_Text_0:
# 27 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "Mom got me this Retro64, the best retro\n"
	.string "game emulator around!\p"
	.string "Turn it on?$"

CarabrueTown_Home2F_EventScript_GameCube_Text_1:
# 41 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "You got the high score!$"

CarabrueTown_Home2F_EventScript_TV_Text_0:
# 49 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "The TV is hooked up to the Retro64.\p"
	.string "Turn it on?$"
