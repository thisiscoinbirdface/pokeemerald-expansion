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
# 8 "data//maps/CarabrueTown_Home1F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, CarabrueTown_Home1F_EventScript_EndGame
	.2byte 0


CarabrueTown_Home1F_OnTransition::
# 13 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setrespawn HEAL_LOCATION_CARABRUE_TOWN
	return


CarabrueTown_Home1F_EventScript_EndGame::
# 17 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 19 "data//maps/CarabrueTown_Home1F/scripts.pory"
	goto_if_set FLAG_POSTGAME_MOM_TALK, CarabrueTown_Home1F_EventScript_EndGame_2
# 21 "data//maps/CarabrueTown_Home1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CarabrueTown_Home1F_EventScript_EndGame_4
	return

CarabrueTown_Home1F_EventScript_EndGame_2:
# 19 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_EndGame_4:
# 23 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_EndGame_Movement_0
# 24 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 20
# 25 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox_delay CarabrueTown_Home1F_EventScript_EndGame_Text_0, CarabrueTown_Home1F_EventScript_EndGame_Text_1
# 26 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_EndGame_Movement_1
# 27 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
# 28 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 24
# 29 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_EndGame_Movement_1
# 30 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
# 31 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 24
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_EndGame_Movement_2
# 33 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
# 34 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_EndGame_Movement_3
# 35 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 24
# 36 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox_delay CarabrueTown_Home1F_EventScript_EndGame_Text_0, CarabrueTown_Home1F_EventScript_EndGame_Text_2
# 37 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, CarabrueTown_Home1F_EventScript_EndGame_Movement_4
# 38 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
# 39 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 16
# 40 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox_delay CarabrueTown_Home1F_EventScript_EndGame_Text_0, CarabrueTown_Home1F_EventScript_EndGame_Text_3
# 41 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 30
# 42 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox_delay CarabrueTown_Home1F_EventScript_EndGame_Text_0, CarabrueTown_Home1F_EventScript_EndGame_Text_4
# 43 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 30
# 44 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox_delay CarabrueTown_Home1F_EventScript_EndGame_Text_0, CarabrueTown_Home1F_EventScript_EndGame_Text_5
# 46 "data//maps/CarabrueTown_Home1F/scripts.pory"
	playfanfare MUS_SLOTS_WIN
# 47 "data//maps/CarabrueTown_Home1F/scripts.pory"
	message CarabrueTown_Home1F_EventScript_EndGame_Text_6
# 48 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitfanfare
# 49 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 52 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_POSTGAME_MOM_TALK
# 53 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end


CarabrueTown_Home1F_EventScript_StartGame::
# 61 "data//maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 64 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setvar VAR_SYS_DIFFICULTY, 0
# 65 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setvar VAR_SYS_EXP_CAP, 1
# 68 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_EndGame_Movement_3
# 69 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_StartGame_Text_0
# 70 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_1
# 75 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 78 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_0
# 83 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 1
# 86 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_StartGame_Movement_1
# 87 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 88 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_EndGame_Text_0
# 89 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_2
# 90 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 92 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_EndGame_Movement_0
# 93 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 1
# 94 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_EndGame_Text_0
# 95 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_3
# 96 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 97 "data//maps/CarabrueTown_Home1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 98 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_4
# 99 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitfanfare
# 100 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 102 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 103 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 105 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_EndGame_Text_0
# 106 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_5
# 107 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 108 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername NULL
# 109 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_6, MSGBOX_POKENAV
# 110 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 111 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 8
# 113 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_EndGame_Text_0
# 114 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_7
# 115 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 118 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setvar VAR_STARTGAME_TV, 1
# 120 "data//maps/CarabrueTown_Home1F/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 121 "data//maps/CarabrueTown_Home1F/scripts.pory"
	startquest QUEST_LAB_FIRST_DAY
# 122 "data//maps/CarabrueTown_Home1F/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LAB_FIRST_DAY, SUB_QUEST_1
# 123 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_StartGame_Text_8, MSGBOX_POKENAV
# 124 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 127 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_StartGame_Movement_2
# 133 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
# 135 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	return


# 139 "data//maps/CarabrueTown_Home1F/scripts.pory"
Player_Face_Up:
# 140 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_up
	step_end

CarabrueTown_Home1F_OnResume::
	return


CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage::
# 148 "data//maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 150 "data//maps/CarabrueTown_Home1F/scripts.pory"
	goto_if_unset FLAG_WELCOMEPACKAGE_GET, CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_2
CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_1:
# 156 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_2:
# 151 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Text_0
# 152 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_Home1F_EventScript_EndGame_Movement_1
# 153 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
	goto CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_1


CarabrueTown_Home1F_EventScript_MomGeneric::
# 162 "data//maps/CarabrueTown_Home1F/scripts.pory"
	lockall
# 163 "data//maps/CarabrueTown_Home1F/scripts.pory"
	faceplayer
# 164 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_EndGame_Text_0
# 165 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_0
# 166 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 167 "data//maps/CarabrueTown_Home1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 168 "data//maps/CarabrueTown_Home1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 171 "data//maps/CarabrueTown_Home1F/scripts.pory"
	checkitem ITEM_NUZKIT
# 172 "data//maps/CarabrueTown_Home1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CarabrueTown_Home1F_EventScript_MomGeneric_2
CarabrueTown_Home1F_EventScript_MomGeneric_1:
# 218 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_EndGame_Text_0
# 219 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_9
# 220 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 221 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_MomGeneric_Movement_0
# 222 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_MomGeneric_2:
# 174 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_EndGame_Text_0
# 175 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_1, MSGBOX_YESNO
# 176 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 177 "data//maps/CarabrueTown_Home1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CarabrueTown_Home1F_EventScript_MomGeneric_5
# 187 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername NULL
# 188 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_3, MSGBOX_POKENAV
# 190 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_EndGame_Text_0
# 191 "data//maps/CarabrueTown_Home1F/scripts.pory"
	message CarabrueTown_Home1F_EventScript_MomGeneric_Text_4
# 193 "data//maps/CarabrueTown_Home1F/scripts.pory"
	dynmultichoice 17, 8, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, CarabrueTown_Home1F_EventScript_MomGeneric_Text_5, CarabrueTown_Home1F_EventScript_MomGeneric_Text_6
# 195 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 197 "data//maps/CarabrueTown_Home1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CarabrueTown_Home1F_EventScript_MomGeneric_7
# 210 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_EndGame_Text_0
# 211 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_2
# 212 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_MomGeneric_5:
# 178 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_EndGame_Text_0
# 179 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_2
# 180 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
# 181 "data//maps/CarabrueTown_Home1F/scripts.pory"
	applymovement 1, CarabrueTown_Home1F_EventScript_MomGeneric_Movement_0
# 182 "data//maps/CarabrueTown_Home1F/scripts.pory"
	waitmovement 0
# 183 "data//maps/CarabrueTown_Home1F/scripts.pory"
	releaseall
	end

CarabrueTown_Home1F_EventScript_MomGeneric_7:
# 198 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 8
# 199 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername CarabrueTown_Home1F_EventScript_EndGame_Text_0
# 200 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_7
# 201 "data//maps/CarabrueTown_Home1F/scripts.pory"
	speakername NULL
# 203 "data//maps/CarabrueTown_Home1F/scripts.pory"
	giveitem ITEM_NUZKIT
# 205 "data//maps/CarabrueTown_Home1F/scripts.pory"
	delay 8
# 207 "data//maps/CarabrueTown_Home1F/scripts.pory"
	msgbox CarabrueTown_Home1F_EventScript_MomGeneric_Text_8, MSGBOX_POKENAV
# 208 "data//maps/CarabrueTown_Home1F/scripts.pory"
	release
	goto CarabrueTown_Home1F_EventScript_MomGeneric_1


# 23 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_EndGame_Movement_0:
# 23 "data//maps/CarabrueTown_Home1F/scripts.pory"
	emote_exclamation_mark
# 23 "data//maps/CarabrueTown_Home1F/scripts.pory"
	jump_in_place_right
	step_end

# 26 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_EndGame_Movement_1:
# 26 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_up
	step_end

# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_EndGame_Movement_2:
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_fast_up
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_fast_up
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_fast_left
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_fast_left
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_fast_left
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_fast_left
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_fast_left
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_fast_left
# 32 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_down
	step_end

# 34 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_EndGame_Movement_3:
# 34 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_up
	step_end

# 37 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_EndGame_Movement_4:
# 37 "data//maps/CarabrueTown_Home1F/scripts.pory"
	jump_in_place_down
# 37 "data//maps/CarabrueTown_Home1F/scripts.pory"
	jump_in_place_down
	step_end

# 78 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_0:
# 79 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_up
# 80 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_right
# 80 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_right
	step_end

# 86 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_1:
# 86 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_left
	step_end

# 127 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_StartGame_Movement_2:
# 128 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_left
# 128 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_left
# 129 "data//maps/CarabrueTown_Home1F/scripts.pory"
	walk_down
# 130 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_right
	step_end

# 181 "data//maps/CarabrueTown_Home1F/scripts.pory"
CarabrueTown_Home1F_EventScript_MomGeneric_Movement_0:
# 181 "data//maps/CarabrueTown_Home1F/scripts.pory"
	face_right
	step_end

CarabrueTown_Home1F_EventScript_EndGame_Text_0:
# 25 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Mom$"

CarabrueTown_Home1F_EventScript_EndGame_Text_1:
# 25 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "{PLAYER}! You're finally home!\n"
	.string "Oh, come here you!$"

CarabrueTown_Home1F_EventScript_EndGame_Text_2:
# 36 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Look at you, {PLAYER}!\n"
	.string "You've grown so much, I can hardly\l"
	.string "recognise you any more!\l"
	.string "And look at your Pokemon too!$"

CarabrueTown_Home1F_EventScript_EndGame_Text_3:
# 40 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Well I must say that the internship at\n"
	.string "the lab really did you a world of good!\l"
	.string "I'll be recommending it to our new\l"
	.string "neighbours when they come...they\l"
	.string "have a child around your age too.\l"
	.string "Apparently she loves gaming all day!\n"
	.string "I bet some real-world experience will do\l"
	.string "her some good too.\p"
	.string "Speaking of which, {PLAYER}, I have a\n"
	.string "surprise! I got you a Retro64!\l"
	.string "The console you always wanted!\l"
	.string "It's the least I can do for my baby,\l"
	.string "the Champion of Cormoria!$"

CarabrueTown_Home1F_EventScript_EndGame_Text_4:
# 42 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Sniff...my baby, the Champion of\n"
	.string "Cormoria...Dad would be proud...$"

CarabrueTown_Home1F_EventScript_EndGame_Text_5:
# 44 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I love you, {PLAYER}.$"

CarabrueTown_Home1F_EventScript_EndGame_Text_6:
# 47 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "The secret quest Make Mom Cry\n"
	.string "is now complete! Well done!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_0:
# 69 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "TV$"

CarabrueTown_Home1F_EventScript_StartGame_Text_1:
# 72 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "And in the big news of the day, we have\n"
	.string "a mysterious event to report.\p"
	.string "The famous Professor Tenebris of\n"
	.string "Carabrue Town was reported missing.\p"
	.string "Where could such a renowned Pokémon\n"
	.string "Professor have vanished to? And why?$"

CarabrueTown_Home1F_EventScript_StartGame_Text_2:
# 89 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "How scary...even in a small town like\n"
	.string "ours, people can go missing.\p"
	.string "And it's your first day working at the\n"
	.string "lab too! Gosh, I'm so scared...be safe\l"
	.string "out there! I'm sure the lab will need all\l"
	.string "the help it can get without the\l"
	.string "Professor, so do your best, okay?$"

CarabrueTown_Home1F_EventScript_StartGame_Text_3:
# 95 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I almost forgot! Here you go - a new\n"
	.string "pair of shoes for a new adventure!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_4:
# 98 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "Running Shoes.$"

CarabrueTown_Home1F_EventScript_StartGame_Text_5:
# 106 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "{PLAYER}, those shoes came with\n"
	.string "instructions: Press the B Button to\l"
	.string "toggle running on and off.$"

CarabrueTown_Home1F_EventScript_StartGame_Text_6:
# 109 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Switch between hold and toggle\n"
	.string "modes in the options menu!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_7:
# 114 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "And before you zip off, don't forget to\n"
	.string "take the Welcome Package the lab sent\l"
	.string "you - it's upstairs in your bedroom!$"

CarabrueTown_Home1F_EventScript_StartGame_Text_8:
# 123 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "You can check active quests in the\n"
	.string "Quest Log via the Start Menu!$"

CarabrueTown_Home1F_EventScript_LeaveWithoutWelcomePackage_Text_0:
# 151 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I should get my Welcome Package from my\n"
	.string "room before leaving!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_0:
# 165 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I love you! You're looking a bit tired.\n"
	.string "Why don't you rest?$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_1:
# 175 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "My baby is going on an adventure!\n"
	.string "Do you want a care package from Mom?$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_2:
# 179 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "I know you can handle yourself.\n"
	.string "Take care, {PLAYER}!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_3:
# 188 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Mom's Nuzkit offers additional\n"
	.string "quality of life features.\l"
	.string "For a classic experience,\l"
	.string "you should go without it!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_4:
# 191 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Do you want a care package from Mom?$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_5:
# 194 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "No Mom...$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_6:
# 194 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Yes please!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_7:
# 200 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Here you go!$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_8:
# 207 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "You got Mom's Nuzkit! Thanks Mom!\n"
	.string "Talk to your follower to use it.$"

CarabrueTown_Home1F_EventScript_MomGeneric_Text_9:
# 219 "data//maps/CarabrueTown_Home1F/scripts.pory"
	.string "Take care, {PLAYER}!$"
