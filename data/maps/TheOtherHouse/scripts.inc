TheOtherHouse_MapScripts::
# 2 "data//maps/TheOtherHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TheOtherHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TheOtherHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/TheOtherHouse/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TheOtherHouse_SetWarp
# 4 "data//maps/TheOtherHouse/scripts.pory"
	map_script_2 VAR_THE_OTHER_HOUSE, 0, TheOtherHouse_Start
	.2byte 0


TheOtherHouse_SetWarp::
# 9 "data//maps/TheOtherHouse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 10 "data//maps/TheOtherHouse/scripts.pory"
	setdynamicwarp MAP_CARABRUE_TOWN, 13, 9
	return


TheOtherHouse_Start::
# 14 "data//maps/TheOtherHouse/scripts.pory"
	lockall
# 15 "data//maps/TheOtherHouse/scripts.pory"
	setvar VAR_THE_OTHER_HOUSE, 1
# 17 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Start_Text_0
# 18 "data//maps/TheOtherHouse/scripts.pory"
	releaseall
	end


TheOtherHouse_TV::
# 25 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_TV_Text_0
# 26 "data//maps/TheOtherHouse/scripts.pory"
	releaseall
	end


TheOtherHouse_Game::
# 32 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_THE_OTHER_HOUSE, 4
	goto_if_eq TheOtherHouse_Game_2
TheOtherHouse_Game_1:
# 34 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_0
# 35 "data//maps/TheOtherHouse/scripts.pory"
	release
# 37 "data//maps/TheOtherHouse/scripts.pory"
	setvar VAR_THE_OTHER_HOUSE, 1
# 40 "data//maps/TheOtherHouse/scripts.pory"
	checkitem ITEM_RETRO_DRIVE
# 41 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TheOtherHouse_Game_5
TheOtherHouse_Game_4:
# 54 "data//maps/TheOtherHouse/scripts.pory"
	checkitem ITEM_SWAP_DRIVE
# 55 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TheOtherHouse_Game_8
TheOtherHouse_Game_7:
# 68 "data//maps/TheOtherHouse/scripts.pory"
	checkitem ITEM_POCKET_DRIVE
# 69 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TheOtherHouse_Game_14
TheOtherHouse_Game_13:
# 82 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_THE_OTHER_HOUSE, 1
	goto_if_eq TheOtherHouse_Game_20
# 88 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_THE_OTHER_HOUSE, 4
	goto_if_lt TheOtherHouse_Game_26
# 95 "data//maps/TheOtherHouse/scripts.pory"
	removeitem ITEM_POCKET_DRIVE
# 96 "data//maps/TheOtherHouse/scripts.pory"
	removeitem ITEM_SWAP_DRIVE
# 97 "data//maps/TheOtherHouse/scripts.pory"
	removeitem ITEM_RETRO_DRIVE
# 99 "data//maps/TheOtherHouse/scripts.pory"
	goto TheOtherHouse_GameStart
	return

TheOtherHouse_Game_2:
# 32 "data//maps/TheOtherHouse/scripts.pory"
	goto TheOtherHouse_GameStart
	goto TheOtherHouse_Game_1

TheOtherHouse_Game_5:
# 42 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_1, MSGBOX_YESNO
# 43 "data//maps/TheOtherHouse/scripts.pory"
	release
# 44 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TheOtherHouse_Game_11
# 46 "data//maps/TheOtherHouse/scripts.pory"
	playse SE_CLICK
# 47 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_2
# 48 "data//maps/TheOtherHouse/scripts.pory"
	release
# 49 "data//maps/TheOtherHouse/scripts.pory"
	addvar VAR_THE_OTHER_HOUSE, 1
	goto TheOtherHouse_Game_4

TheOtherHouse_Game_8:
# 56 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_3, MSGBOX_YESNO
# 57 "data//maps/TheOtherHouse/scripts.pory"
	release
# 58 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TheOtherHouse_Game_17
# 60 "data//maps/TheOtherHouse/scripts.pory"
	playse SE_CLICK
# 61 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_4
# 62 "data//maps/TheOtherHouse/scripts.pory"
	release
# 63 "data//maps/TheOtherHouse/scripts.pory"
	addvar VAR_THE_OTHER_HOUSE, 1
	goto TheOtherHouse_Game_7

TheOtherHouse_Game_11:
	end

TheOtherHouse_Game_14:
# 70 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_5, MSGBOX_YESNO
# 71 "data//maps/TheOtherHouse/scripts.pory"
	release
# 72 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TheOtherHouse_Game_23
# 74 "data//maps/TheOtherHouse/scripts.pory"
	playse SE_CLICK
# 75 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_6
# 76 "data//maps/TheOtherHouse/scripts.pory"
	release
# 77 "data//maps/TheOtherHouse/scripts.pory"
	addvar VAR_THE_OTHER_HOUSE, 1
	goto TheOtherHouse_Game_13

TheOtherHouse_Game_17:
	end

TheOtherHouse_Game_20:
# 83 "data//maps/TheOtherHouse/scripts.pory"
	releaseall
	end

TheOtherHouse_Game_23:
	end

TheOtherHouse_Game_26:
# 89 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_7
# 90 "data//maps/TheOtherHouse/scripts.pory"
	releaseall
	end


TheOtherHouse_GameStart::
# 103 "data//maps/TheOtherHouse/scripts.pory"
	playse SE_PC_ON
# 104 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_GameStart_Text_0
# 105 "data//maps/TheOtherHouse/scripts.pory"
	release
# 107 "data//maps/TheOtherHouse/scripts.pory"
	warp MAP_LEGENDS, 7, 119
	return


TheOtherHouse_Start_Text_0:
# 17 "data//maps/TheOtherHouse/scripts.pory"
	.string "Looks like nobody's lived here\n"
	.string "for a really long time...$"

TheOtherHouse_TV_Text_0:
# 25 "data//maps/TheOtherHouse/scripts.pory"
	.string "It's hooked up to the console.$"

TheOtherHouse_Game_Text_0:
# 34 "data//maps/TheOtherHouse/scripts.pory"
	.string "It's a gaming console!\p"
	.string "But it's not a recognisable one. There\n"
	.string "are no brand or manufacturer details...\p"
	.string "There's a drive slot, a port slot and\n"
	.string "a chip slot.$"

TheOtherHouse_Game_Text_1:
# 42 "data//maps/TheOtherHouse/scripts.pory"
	.string "Fit in the Retro Drive?$"

TheOtherHouse_Game_Text_2:
# 47 "data//maps/TheOtherHouse/scripts.pory"
	.string "It fits perfectly in the drive slot!$"

TheOtherHouse_Game_Text_3:
# 56 "data//maps/TheOtherHouse/scripts.pory"
	.string "Slot in the Swap Chip?$"

TheOtherHouse_Game_Text_4:
# 61 "data//maps/TheOtherHouse/scripts.pory"
	.string "It fits perfectly in the chip slot!$"

TheOtherHouse_Game_Text_5:
# 70 "data//maps/TheOtherHouse/scripts.pory"
	.string "Pop in the Pocket Port?$"

TheOtherHouse_Game_Text_6:
# 75 "data//maps/TheOtherHouse/scripts.pory"
	.string "It fits perfectly in the port slot!$"

TheOtherHouse_Game_Text_7:
# 89 "data//maps/TheOtherHouse/scripts.pory"
	.string "But it probably needs all 3 drives...$"

TheOtherHouse_GameStart_Text_0:
# 104 "data//maps/TheOtherHouse/scripts.pory"
	.string "The console turned on!\p"
	.string "...\p"
	.string "What a weird game...$"
