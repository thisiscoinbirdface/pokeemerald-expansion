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
	setvar VAR_SYS_DIFFICULTY, 0
# 21 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setvar VAR_SYS_EXP_CAP, 1
# 24 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_StartGame_Movement_0
# 25 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_0
# 26 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_1
# 31 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 34 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_1
# 39 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 1
# 42 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_StartGame_Movement_2
# 43 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 44 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 45 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_3
# 46 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 48 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_3
# 49 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 1
# 50 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 51 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_4
# 52 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 53 "data//maps/CarabrueTown_Home1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_5
# 55 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitfanfare
# 56 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 58 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 59 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 61 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 62 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_6
# 63 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 64 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername NULL
# 65 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_7, MSGBOX_POKENAV
# 66 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 67 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 8
# 69 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 70 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_8
# 71 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 74 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setvar VAR_STARTGAME_TV, 1
# 76 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 77 "data//maps/CarabrueTown_Home1F/scripts.pory"
	startquest QUEST_LAB_FIRST_DAY
# 78 "data//maps/CarabrueTown_Home1F/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LAB_FIRST_DAY, SUB_QUEST_1
# 79 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_9, MSGBOX_POKENAV
# 80 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 83 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_4
# 89 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
# 91 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	return


# 95 "data//maps/CarabrueTown_Home1F/scripts.pory"
Player_Face_Up:
# 96 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_up
	step_end

CarabrueTown_Home1F_OnResume::
	return


CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage::
# 104 "data//maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 106 "data//maps/CarabrueTown_Home1F/scripts.pory"
	goto_if_unset FLAG_WELCOMEPACKAGE_GET, CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_2
CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_1:
# 112 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_2:
# 107 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Text_0
# 108 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Movement_0
# 109 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
	goto CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_1


CarabrueTown_Home1F_EventScript_MomGeneric::
# 118 "data//maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 119 "data//maps/CarabrueTown_Home1F/scripts.pory"
	faceplayer
# 120 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 121 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_0
# 122 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 123 "data//maps/CarabrueTown_Home1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 124 "data//maps/CarabrueTown_Home1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 127 "data//maps/CarabrueTown_Home1F/scripts.pory"
	checkitem ITEM_NUZKIT
# 128 "data//maps/CarabrueTown_Home1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CarabrueTown_Home1F_EventScript_MomGeneric_2
CarabrueTown_Home1F_EventScript_MomGeneric_1:
# 174 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 175 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_9
# 176 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 177 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_MomGeneric_Movement_0
# 178 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_MomGeneric_2:
# 130 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 131 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_1, MSGBOX_YESNO
# 132 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 133 "data//maps/CarabrueTown_Home1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CarabrueTown_Home1F_EventScript_MomGeneric_5
# 143 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername NULL
# 144 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_3, MSGBOX_POKENAV
# 146 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 147 "data//maps/CarabrueTown_Home1F/scripts.pory"
	message CarabrueTown_Home1F_EventScript_MomGeneric_Text_4
# 149 "data//maps/CarabrueTown_Home1F/scripts.pory"
	dynmultichoice 17, 8, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, CarabrueTown_Home1F_EventScript_MomGeneric_Text_5, CarabrueTown_Home1F_EventScript_MomGeneric_Text_6
# 151 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 153 "data//maps/CarabrueTown_Home1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CarabrueTown_Home1F_EventScript_MomGeneric_7
# 166 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 167 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_2
# 168 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_MomGeneric_5:
# 134 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 135 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_2
# 136 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 137 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_MomGeneric_Movement_0
# 138 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
# 139 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_MomGeneric_7:
# 154 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 8
# 155 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 156 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_7
# 157 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername NULL
# 159 "data//maps/CarabrueTown_Home1F/scripts.pory"
	giveitem ITEM_NUZKIT
# 161 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 8
# 163 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_8, MSGBOX_POKENAV
# 164 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
	goto CarabrueTown_Home1F_EventScript_MomGeneric_1


# 24 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_0:
# 24 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_up
	step_end

# 34 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_1:
# 35 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_up
# 36 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_right
# 36 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_right
	step_end

# 42 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_2:
# 42 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_left
	step_end

# 48 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_3:
# 48 "data//maps/CarabrueTown_Home1F/scripts.pory"
	emote_exclamation_mark
# 48 "data//maps/CarabrueTown_Home1F/scripts.pory"
	jump_in_place_right
	step_end

# 83 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_4:
# 84 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_left
# 84 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_left
# 85 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_down
# 86 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_right
	step_end

# 108 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Movement_0:
# 108 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_up
	step_end

# 137 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_MomGeneric_Movement_0:
# 137 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_right
	step_end

CarabrueTown_Home1F_EventScript_StartGame_Text_0:
# 25 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "TV$"

CarabrueTown_Home1F_EventScript_StartGame_Text_1:
# 28 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "And in the big news of the day, we have\n"
	.string "a mysterious event to report.\p"
	.string "The famous Professor Tenebris of\n"
	.string "Carabrue Town was reported missing.\p"
	.string "Where could such a renowned Pokémon\n"
	.string "Professor have vanished to? And why?$"

CarabrueTown_Home1F_EventScript_StartGame_Text_2:
# 44 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Mom$"

CarabrueTown_Home1F_EventScript_StartGame_Text_3:
# 45 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "How scary...even in a small town like\n"
	.string "ours, people can go missing.\p"
	.string "And it's your first day working at the\n"
	.string "lab too! Gosh, I'm so scared...be safe\l"
	.string "out there! I'm sure the lab will need all\l"
	.string "the help it can get without the\l"
	.string "Professor, so do your best, okay?$"

CarabrueTown_Home1F_EventScript_StartGame_Text_4:
# 51 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I almost forgot! Here you go - a new\n"
	.string "pair of shoes for a new adventure!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_5:
# 54 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "Running Shoes.$"

CarabrueTown_Home1F_EventScript_StartGame_Text_6:
# 62 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "{PLAYER}, those shoes came with\n"
	.string "instructions: Press the B Button to\l"
	.string "toggle running on and off.$"

CarabrueTown_Home1F_EventScript_StartGame_Text_7:
# 65 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Switch between hold and toggle\n"
	.string "modes in the options menu!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_8:
# 70 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "And before you zip off, don't forget to\n"
	.string "take the Welcome Package the lab sent\l"
	.string "you - it's upstairs in your bedroom!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_9:
# 79 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "You can check active quests in the\n"
	.string "Quest Log via the Start Menu!$"

CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Text_0:
# 107 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I should get my Welcome Package from my\n"
	.string "room before leaving!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_0:
# 121 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I love you! You're looking a bit tired.\n"
	.string "Why don't you rest?$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_1:
# 131 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "My baby is going on an adventure!\n"
	.string "Do you want a care package from Mom?$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_2:
# 135 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I know you can handle yourself.\n"
	.string "Take care, {PLAYER}!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_3:
# 144 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Mom's Nuzkit offers additional\n"
	.string "quality of life features.\l"
	.string "For a classic experience,\l"
	.string "you should go without it!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_4:
# 147 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Do you want a care package from Mom?$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_5:
# 150 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "No Mom...$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_6:
# 150 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Yes please!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_7:
# 156 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Here you go!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_8:
# 163 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "You got Mom's Nuzkit! Thanks Mom!\n"
	.string "Talk to your follower to use it.$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_9:
# 175 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Take care, {PLAYER}!$"
