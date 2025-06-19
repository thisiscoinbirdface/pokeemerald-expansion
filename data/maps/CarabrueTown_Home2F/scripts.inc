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
	playse SE_PC_ON
# 21 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 22 "data//maps/CarabrueTown_Home2F/scripts.pory"
	special BedroomPC
# 23 "data//maps/CarabrueTown_Home2F/scripts.pory"
	waitstate
# 24 "data//maps/CarabrueTown_Home2F/scripts.pory"
	releaseall
	return


CarabrueTown_Home2F_EventScript_GameCube::
# 29 "data//maps/CarabrueTown_Home2F/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, CarabrueTown_Home2F_EventScript_GameCube_2
# 65 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_EventScript_GameCube_Text_3
CarabrueTown_Home2F_EventScript_GameCube_1:
# 68 "data//maps/CarabrueTown_Home2F/scripts.pory"
	releaseall
	end

CarabrueTown_Home2F_EventScript_GameCube_2:
# 30 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_EventScript_GameCube_Text_0, MSGBOX_YESNO
# 31 "data//maps/CarabrueTown_Home2F/scripts.pory"
	release
# 32 "data//maps/CarabrueTown_Home2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CarabrueTown_Home2F_EventScript_GameCube_6
# 35 "data//maps/CarabrueTown_Home2F/scripts.pory"
	playbgm MUS_NONE, FALSE
# 36 "data//maps/CarabrueTown_Home2F/scripts.pory"
	special StartSnake
# 37 "data//maps/CarabrueTown_Home2F/scripts.pory"
	waitstate
# 38 "data//maps/CarabrueTown_Home2F/scripts.pory"
	savebgm MUS_DUMMY
# 39 "data//maps/CarabrueTown_Home2F/scripts.pory"
	fadedefaultbgm
# 42 "data//maps/CarabrueTown_Home2F/scripts.pory"
	compare GAME_CORNER_VAR_WINNINGS, 29
	goto_if_gt CarabrueTown_Home2F_EventScript_GameCube_8
# 62 "data//maps/CarabrueTown_Home2F/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
	goto CarabrueTown_Home2F_EventScript_GameCube_1

CarabrueTown_Home2F_EventScript_GameCube_6:
	end

CarabrueTown_Home2F_EventScript_GameCube_8:
# 43 "data//maps/CarabrueTown_Home2F/scripts.pory"
	playfanfare MUS_RG_PHOTO
# 44 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_EventScript_GameCube_Text_1
# 45 "data//maps/CarabrueTown_Home2F/scripts.pory"
	waitfanfare
# 46 "data//maps/CarabrueTown_Home2F/scripts.pory"
	release
# 47 "data//maps/CarabrueTown_Home2F/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 49 "data//maps/CarabrueTown_Home2F/scripts.pory"
	goto_if_set FLAG_GET_RETRO_DRIVE, CarabrueTown_Home2F_EventScript_GameCube_12
# 51 "data//maps/CarabrueTown_Home2F/scripts.pory"
	release
# 52 "data//maps/CarabrueTown_Home2F/scripts.pory"
	delay 8
# 53 "data//maps/CarabrueTown_Home2F/scripts.pory"
	playse SE_CLICK
# 54 "data//maps/CarabrueTown_Home2F/scripts.pory"
	waitse
# 55 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_EventScript_GameCube_Text_2
# 56 "data//maps/CarabrueTown_Home2F/scripts.pory"
	release
# 57 "data//maps/CarabrueTown_Home2F/scripts.pory"
	giveitem ITEM_RETRO_DRIVE
# 58 "data//maps/CarabrueTown_Home2F/scripts.pory"
	setflag FLAG_GET_RETRO_DRIVE
# 59 "data//maps/CarabrueTown_Home2F/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
	goto CarabrueTown_Home2F_EventScript_GameCube_1

CarabrueTown_Home2F_EventScript_GameCube_12:
	end


CarabrueTown_Home2F_EventScript_TV::
# 74 "data//maps/CarabrueTown_Home2F/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, CarabrueTown_Home2F_EventScript_TV_1
# 79 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_EventScript_TV_Text_1
# 80 "data//maps/CarabrueTown_Home2F/scripts.pory"
	releaseall
	end

CarabrueTown_Home2F_EventScript_TV_1:
# 75 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_EventScript_TV_Text_0
# 76 "data//maps/CarabrueTown_Home2F/scripts.pory"
	releaseall
	end


CarabrueTown_Home2F_Doll::
# 97 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_Doll_Text_0
# 99 "data//maps/CarabrueTown_Home2F/scripts.pory"
	msgbox CarabrueTown_Home2F_Doll_Text_1, MSGBOX_POKENAV
# 101 "data//maps/CarabrueTown_Home2F/scripts.pory"
	message CarabrueTown_Home2F_Doll_Text_2
# 102 "data//maps/CarabrueTown_Home2F/scripts.pory"
	waitmessage
# 103 "data//maps/CarabrueTown_Home2F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, CarabrueTown_Home2F_Doll_Text_3, CarabrueTown_Home2F_Doll_Text_4, CarabrueTown_Home2F_Doll_Text_5, CarabrueTown_Home2F_Doll_Text_6
# 105 "data//maps/CarabrueTown_Home2F/scripts.pory"
	release
# 107 "data//maps/CarabrueTown_Home2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CarabrueTown_Home2F_Doll_2
CarabrueTown_Home2F_Doll_1:
# 112 "data//maps/CarabrueTown_Home2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CarabrueTown_Home2F_Doll_5
CarabrueTown_Home2F_Doll_4:
# 117 "data//maps/CarabrueTown_Home2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CarabrueTown_Home2F_Doll_7
	return

CarabrueTown_Home2F_Doll_2:
# 108 "data//maps/CarabrueTown_Home2F/scripts.pory"
	playse SE_SHOP
# 109 "data//maps/CarabrueTown_Home2F/scripts.pory"
	addmoney 1000000
	goto CarabrueTown_Home2F_Doll_1

CarabrueTown_Home2F_Doll_5:
# 113 "data//maps/CarabrueTown_Home2F/scripts.pory"
	playse SE_SHOP
# 114 "data//maps/CarabrueTown_Home2F/scripts.pory"
	additem ITEM_MASTER_BALL, 99
	goto CarabrueTown_Home2F_Doll_4

CarabrueTown_Home2F_Doll_7:
	return


CarabrueTown_Home2F_EventScript_PickUpBag_Text_0:
# 6 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "The lab sent a Welcome Package\n"
	.string "yesterday. I'm supposed to bring it with\l"
	.string "me without opening it, they said.$"

CarabrueTown_Home2F_EventScript_GameCube_Text_0:
# 30 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "Mom got me a new Retro64, the best\n"
	.string "retro game emulator around!\p"
	.string "Turn it on?$"

CarabrueTown_Home2F_EventScript_GameCube_Text_1:
# 44 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "You got the high score!$"

CarabrueTown_Home2F_EventScript_GameCube_Text_2:
# 55 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "Something fell out of the Retro64!\n"
	.string "What is it?$"

CarabrueTown_Home2F_EventScript_GameCube_Text_3:
# 65 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "My old GameCube...it's broken.$"

CarabrueTown_Home2F_EventScript_TV_Text_0:
# 75 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "The TV is hooked up to the Retro64.$"

CarabrueTown_Home2F_EventScript_TV_Text_1:
# 79 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "The TV is hooked up to the GameCube.$"

CarabrueTown_Home2F_Doll_Text_0:
# 97 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "It's my Gimmighoul doll!$"

CarabrueTown_Home2F_Doll_Text_1:
# 99 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "Using cheats may glitch your game!\n"
	.string "So Gimmighoul can help you out.\l"
	.string "This is not recommended for a\l"
	.string "regular playthrough.$"

CarabrueTown_Home2F_Doll_Text_2:
# 101 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "What would you like to do?$"

CarabrueTown_Home2F_Doll_Text_3:
# 104 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "Max Money$"

CarabrueTown_Home2F_Doll_Text_4:
# 104 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "Master Balls$"

CarabrueTown_Home2F_Doll_Text_5:
# 104 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "100% Shiny$"

CarabrueTown_Home2F_Doll_Text_6:
# 104 "data//maps/CarabrueTown_Home2F/scripts.pory"
	.string "Cancel$"
