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
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_0
# 22 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_1
# 27 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 30 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_1
# 35 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 1
# 38 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_StartGame_Movement_2
# 39 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 40 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 41 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_3
# 42 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 44 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_3
# 45 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 1
# 46 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 47 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_4
# 48 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 49 "data//maps/CarabrueTown_Home1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 50 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_5
# 51 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitfanfare
# 52 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 54 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 55 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 57 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 58 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_6
# 59 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 60 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 8
# 62 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 63 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_7
# 64 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 67 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setvar VAR_STARTGAME_TV, 1
# 69 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 70 "data//maps/CarabrueTown_Home1F/scripts.pory"
	startquest QUEST_LAB_FIRST_DAY
# 71 "data//maps/CarabrueTown_Home1F/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LAB_FIRST_DAY, SUB_QUEST_1
# 72 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_8, MSGBOX_SIGN
# 75 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_4
# 81 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
# 83 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	return


# 87 "data//maps/CarabrueTown_Home1F/scripts.pory"
Player_Face_Up:
# 88 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_up
	step_end

CarabrueTown_Home1F_OnResume::
	return


CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage::
# 96 "data//maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 98 "data//maps/CarabrueTown_Home1F/scripts.pory"
	goto_if_unset FLAG_WELCOMEPACKAGE_GET, CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_2
CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_1:
# 104 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_2:
# 99 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Text_0
# 100 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Movement_0
# 101 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
	goto CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_1


CarabrueTown_Home1F_EventScript_MomGeneric::
# 110 "data//maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 111 "data//maps/CarabrueTown_Home1F/scripts.pory"
	faceplayer
# 112 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 113 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_0
# 114 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 115 "data//maps/CarabrueTown_Home1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 116 "data//maps/CarabrueTown_Home1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 117 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 118 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_1
# 119 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 120 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_MomGeneric_Movement_0
# 121 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end


# 20 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_0:
# 20 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_up
	step_end

# 30 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_1:
# 31 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_up
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_right
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_right
	step_end

# 38 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_2:
# 38 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_left
	step_end

# 44 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_3:
# 44 "data//maps/CarabrueTown_Home1F/scripts.pory"
	emote_exclamation_mark
# 44 "data//maps/CarabrueTown_Home1F/scripts.pory"
	jump_in_place_right
	step_end

# 75 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_4:
# 76 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_left
# 76 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_left
# 77 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_down
# 78 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_right
	step_end

# 100 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Movement_0:
# 100 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_up
	step_end

# 120 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_MomGeneric_Movement_0:
# 120 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_right
	step_end

CarabrueTown_Home1F_EventScript_StartGame_Text_0:
# 21 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "TV$"

CarabrueTown_Home1F_EventScript_StartGame_Text_1:
# 24 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "And in the big news of the day, we have\n"
	.string "a mysterious event to report.\p"
	.string "The famous Professor Tenebris of\n"
	.string "Carabrue Town was reported missing.\p"
	.string "Where could such a renowned Pokémon\n"
	.string "Professor have vanished to? And why?$"

CarabrueTown_Home1F_EventScript_StartGame_Text_2:
# 40 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Mom$"

CarabrueTown_Home1F_EventScript_StartGame_Text_3:
# 41 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "How scary...even in a small town like\n"
	.string "ours, people can go missing.\p"
	.string "And it's your first day working at the\n"
	.string "lab too! Gosh, I'm so scared...be safe\l"
	.string "out there! I'm sure the lab will need all\l"
	.string "the help it can get without the\l"
	.string "Professor, so do your best, okay?$"

CarabrueTown_Home1F_EventScript_StartGame_Text_4:
# 47 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I almost forgot! Here you go - a new\n"
	.string "pair of shoes for a new adventure!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_5:
# 50 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "Running Shoes.$"

CarabrueTown_Home1F_EventScript_StartGame_Text_6:
# 58 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "{PLAYER}, those shoes came with\n"
	.string "instructions: Press the B Button to\l"
	.string "toggle running on and off. Slip on these\l"
	.string "Running Shoes and race in the great\l"
	.string "outdoors!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_7:
# 63 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "And before you zip off, don't forget to\n"
	.string "take the welcome package they sent you\l"
	.string "- it's upstairs!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_8:
# 72 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "You can check active quests in the\n"
	.string "Quest Log via the Start Menu!$"

CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Text_0:
# 99 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I should get my Welcome Package before\n"
	.string "leaving!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_0:
# 113 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I love you! You're looking a bit tired.\n"
	.string "Why don't you rest?$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_1:
# 118 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Take care, {PLAYER}!$"
