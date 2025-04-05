CarabrueTown_Home1F_MapScripts::
# 3 "data//maps/CarabrueTown_Home1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CarabrueTown_Home1F_OnResume
# 4 "data//maps/CarabrueTown_Home1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CarabrueTown_Home1F_OnTransition
# 6 "data//maps/CarabrueTown_Home1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CarabrueTown_Home1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CarabrueTown_Home1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data//maps/CarabrueTown_Home1F/scripts.pory"
	map_script_2 VAR_STARTGAME_TV, 0, CarabrueTown_Home1F_EventScript_StartGame
	.2byte 0


CarabrueTown_Home1F_OnTransition::
# 12 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setrespawn HEAL_LOCATION_CARABRUE_TOWN
	return


CarabrueTown_Home1F_EventScript_StartGame::
# 17 "data//maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 20 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_StartGame_Movement_0
# 21 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_0
# 26 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 29 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_1
# 34 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 1
# 37 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_StartGame_Movement_2
# 38 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 39 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_1
# 40 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 42 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_3
# 43 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 1
# 44 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 45 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 46 "data//maps/CarabrueTown_Home1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_3
# 48 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitfanfare
# 49 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 51 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 52 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 54 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_4
# 55 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_5
# 56 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 59 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setvar VAR_STARTGAME_TV, 1
# 61 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 62 "data//maps/CarabrueTown_Home1F/scripts.pory"
	startquest QUEST_LAB_FIRST_DAY
# 63 "data//maps/CarabrueTown_Home1F/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LAB_FIRST_DAY, SUB_QUEST_1
# 66 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_4
# 72 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
# 74 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	return


# 78 "data//maps/CarabrueTown_Home1F/scripts.pory"
Player_Face_Up:
# 79 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_up
	step_end

CarabrueTown_Home1F_OnResume::
	return


CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage::
# 87 "data//maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 89 "data//maps/CarabrueTown_Home1F/scripts.pory"
	goto_if_unset FLAG_WELCOMEPACKAGE_GET, CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_2
CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_1:
# 95 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_2:
# 90 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Text_0
# 91 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Movement_0
# 92 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
	goto CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_1


CarabrueTown_Home1F_EventScript_MomGeneric::
# 101 "data//maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 102 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_0
# 103 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 104 "data//maps/CarabrueTown_Home1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 105 "data//maps/CarabrueTown_Home1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 106 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_1
# 107 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end


# 20 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_0:
# 20 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_up
	step_end

# 29 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_1:
# 30 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_up
# 31 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_right
# 31 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_right
	step_end

# 37 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_2:
# 37 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_left
	step_end

# 42 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_3:
# 42 "data//maps/CarabrueTown_Home1F/scripts.pory"
	jump_in_place_right
	step_end

# 66 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_4:
# 67 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_left
# 67 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_left
# 68 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_down
# 69 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_right
	step_end

# 91 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Movement_0:
# 91 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_up
	step_end

CarabrueTown_Home1F_EventScript_StartGame_Text_0:
# 23 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "TV: And in the big news of the day, we\n"
	.string "have a mysterious event to report. The\l"
	.string "famous Professor Tenebris of Carabrue\l"
	.string "Town was reported missing. Where could\l"
	.string "such a renowned Pokemon Professor\l"
	.string "have vanished to? And why?$"

CarabrueTown_Home1F_EventScript_StartGame_Text_1:
# 39 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "MOM: How scary...even in a small town\n"
	.string "like ours, people can go missing.\p"
	.string "And it's your first day working at the\n"
	.string "lab too! Gosh, I'm so scared...be safe\l"
	.string "out there! I'm sure the lab will need all\l"
	.string "the help it can get without the\l"
	.string "Professor around, so do your best,\l"
	.string "okay?$"

CarabrueTown_Home1F_EventScript_StartGame_Text_2:
# 44 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "MOM: I almost forgot! Here you go - a\n"
	.string "new pair of shoes for a new adventure!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_3:
# 47 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

CarabrueTown_Home1F_EventScript_StartGame_Text_4:
# 54 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
	.string "instructions: Press the B Button to\l"
	.string "toggle running on and off. Slip on these\l"
	.string "Running Shoes and race in the great\l"
	.string "outdoors!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_5:
# 55 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "MOM: And before you zip off, don't\n"
	.string "forget to take the welcome package\l"
	.string "they sent you - it's upstairs!$"

CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Text_0:
# 90 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I should get my Welcome Package before\n"
	.string "leaving!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_0:
# 102 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Mom: I love you! You're looking a bit\n"
	.string "tired. Why don't you rest?$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_1:
# 106 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Mom: Take care {PLAYER}!$"
