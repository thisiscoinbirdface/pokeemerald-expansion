CarabrueTown_Home1F_MapScripts::
# 3 "data/maps/CarabrueTown_Home1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CarabrueTown_Home1F_OnResume
# 5 "data/maps/CarabrueTown_Home1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CarabrueTown_Home1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CarabrueTown_Home1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/CarabrueTown_Home1F/scripts.pory"
	map_script_2 VAR_STARTGAME_TV, 0, CarabrueTown_Home1F_EventScript_StartGame
	.2byte 0


CarabrueTown_Home1F_EventScript_StartGame::
# 12 "data/maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 15 "data/maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_StartGame_Movement_0
# 16 "data/maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_0
# 21 "data/maps/CarabrueTown_Home1F/scripts.pory"
	release
# 24 "data/maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_1
# 29 "data/maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 1
# 32 "data/maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_StartGame_Movement_2
# 33 "data/maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 34 "data/maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_1
# 35 "data/maps/CarabrueTown_Home1F/scripts.pory"
	release
# 37 "data/maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_3
# 38 "data/maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 1
# 39 "data/maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 40 "data/maps/CarabrueTown_Home1F/scripts.pory"
	release
# 41 "data/maps/CarabrueTown_Home1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 42 "data/maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_3
# 43 "data/maps/CarabrueTown_Home1F/scripts.pory"
	waitfanfare
# 44 "data/maps/CarabrueTown_Home1F/scripts.pory"
	release
# 46 "data/maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 47 "data/maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 49 "data/maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_4
# 52 "data/maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_5
# 55 "data/maps/CarabrueTown_Home1F/scripts.pory"
	setvar VAR_STARTGAME_TV, 1
# 60 "data/maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	return


# 64 "data/maps/CarabrueTown_Home1F/scripts.pory"
Player_Face_Up:
# 65 "data/maps/CarabrueTown_Home1F/scripts.pory"
	face_up
	step_end

CarabrueTown_Home1F_OnResume::
	return


CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage::
# 73 "data/maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 75 "data/maps/CarabrueTown_Home1F/scripts.pory"
	goto_if_unset FLAG_WELCOMEPACKAGE_GET, CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_2
CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_1:
# 81 "data/maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_2:
# 76 "data/maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Text_0
# 77 "data/maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Movement_0
# 78 "data/maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
	goto CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_1


CarabrueTown_Home1F_EventScript_MomGeneric::
# 87 "data/maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 88 "data/maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_0
# 89 "data/maps/CarabrueTown_Home1F/scripts.pory"
	release
# 90 "data/maps/CarabrueTown_Home1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 91 "data/maps/CarabrueTown_Home1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 92 "data/maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_1
# 93 "data/maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end


# 15 "data/maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_0:
# 15 "data/maps/CarabrueTown_Home1F/scripts.pory"
	face_up
	step_end

# 24 "data/maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_1:
# 25 "data/maps/CarabrueTown_Home1F/scripts.pory"
	walk_up
# 26 "data/maps/CarabrueTown_Home1F/scripts.pory"
	walk_right
# 26 "data/maps/CarabrueTown_Home1F/scripts.pory"
	walk_right
	step_end

# 32 "data/maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_2:
# 32 "data/maps/CarabrueTown_Home1F/scripts.pory"
	face_left
	step_end

# 37 "data/maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_3:
# 37 "data/maps/CarabrueTown_Home1F/scripts.pory"
	jump_in_place_right
	step_end

# 77 "data/maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Movement_0:
# 77 "data/maps/CarabrueTown_Home1F/scripts.pory"
	walk_up
	step_end

CarabrueTown_Home1F_EventScript_StartGame_Text_0:
# 18 "data/maps/CarabrueTown_Home1F/scripts.pory"
	.string "And in the big news of the day, we have\n"
	.string "a mysterious event to report. The\l"
	.string "famous Professor Tenebris of Carabrue\l"
	.string "Town was reported missing. Where could\l"
	.string "such a renowned Pokemon Professor\l"
	.string "have vanished to? And why?$"

CarabrueTown_Home1F_EventScript_StartGame_Text_1:
# 34 "data/maps/CarabrueTown_Home1F/scripts.pory"
	.string "Mom: How scary...even in a small town\n"
	.string "like ours, people can go missing. And\l"
	.string "it's your first day working at the lab\l"
	.string "too! Gosh, I'm so scared...be safe out\l"
	.string "there! I'm sure the lab will need all the\l"
	.string "help it can get without the Professor\l"
	.string "around, so make sure you do your best,\l"
	.string "okay?$"

CarabrueTown_Home1F_EventScript_StartGame_Text_2:
# 39 "data/maps/CarabrueTown_Home1F/scripts.pory"
	.string "I almost forgot! Here you go - a new\n"
	.string "pair of shoes for a new adventure!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_3:
# 42 "data/maps/CarabrueTown_Home1F/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

CarabrueTown_Home1F_EventScript_StartGame_Text_4:
# 49 "data/maps/CarabrueTown_Home1F/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
	.string "instructions: Press the B Button to\l"
	.string "toggle running on and off. Slip on these\l"
	.string "RUNNING SHOES and race in the great\l"
	.string "outdoors!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_5:
# 52 "data/maps/CarabrueTown_Home1F/scripts.pory"
	.string "And before you zip off, don't forget to\n"
	.string "take the welcome package they sent you\l"
	.string "- it's upstairs!$"

CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Text_0:
# 76 "data/maps/CarabrueTown_Home1F/scripts.pory"
	.string "I should get my welcome package before\n"
	.string "leaving!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_0:
# 88 "data/maps/CarabrueTown_Home1F/scripts.pory"
	.string "Mom: I love you! You're looking a bit\n"
	.string "tired. Why don't you rest?$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_1:
# 92 "data/maps/CarabrueTown_Home1F/scripts.pory"
	.string "Mom: Take care {PLAYER}!$"
