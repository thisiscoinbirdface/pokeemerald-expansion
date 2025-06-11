TheOtherHouse_MapScripts::
# 2 "data//maps/TheOtherHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TheOtherHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TheOtherHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/TheOtherHouse/scripts.pory"
	map_script_2 VAR_THE_OTHER_HOUSE, 0, TheOtherHouse_Start
	.2byte 0


TheOtherHouse_Start::
# 8 "data//maps/TheOtherHouse/scripts.pory"
	lockall
# 9 "data//maps/TheOtherHouse/scripts.pory"
	setvar VAR_THE_OTHER_HOUSE, 1
# 11 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Start_Text_0
# 12 "data//maps/TheOtherHouse/scripts.pory"
	releaseall
	end


TheOtherHouse_TV::
# 17 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_TV_Text_0
# 18 "data//maps/TheOtherHouse/scripts.pory"
	releaseall
	end


TheOtherHouse_Game::
# 23 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_0
# 24 "data//maps/TheOtherHouse/scripts.pory"
	release
# 26 "data//maps/TheOtherHouse/scripts.pory"
	setvar VAR_THE_OTHER_HOUSE, 1
# 29 "data//maps/TheOtherHouse/scripts.pory"
	checkitem ITEM_RETRO_DRIVE
# 30 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TheOtherHouse_Game_2
TheOtherHouse_Game_1:
# 43 "data//maps/TheOtherHouse/scripts.pory"
	checkitem ITEM_SWAP_DRIVE
# 44 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TheOtherHouse_Game_5
TheOtherHouse_Game_4:
# 57 "data//maps/TheOtherHouse/scripts.pory"
	checkitem ITEM_POCKET_DRIVE
# 58 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TheOtherHouse_Game_11
TheOtherHouse_Game_10:
# 71 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_THE_OTHER_HOUSE, 1
	goto_if_eq TheOtherHouse_Game_17
# 77 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_THE_OTHER_HOUSE, 3
	goto_if_lt TheOtherHouse_Game_23
# 84 "data//maps/TheOtherHouse/scripts.pory"
	removeitem ITEM_POCKET_DRIVE
# 85 "data//maps/TheOtherHouse/scripts.pory"
	removeitem ITEM_SWAP_DRIVE
# 86 "data//maps/TheOtherHouse/scripts.pory"
	removeitem ITEM_RETRO_DRIVE
# 88 "data//maps/TheOtherHouse/scripts.pory"
	playse SE_PC_ON
# 89 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_8
# 90 "data//maps/TheOtherHouse/scripts.pory"
	release
# 92 "data//maps/TheOtherHouse/scripts.pory"
	warp MAP_LEGENDS, 7, 119
	return

TheOtherHouse_Game_2:
# 31 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_1, MSGBOX_YESNO
# 32 "data//maps/TheOtherHouse/scripts.pory"
	release
# 33 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TheOtherHouse_Game_8
# 35 "data//maps/TheOtherHouse/scripts.pory"
	playse SE_CLICK
# 36 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_2
# 37 "data//maps/TheOtherHouse/scripts.pory"
	release
# 38 "data//maps/TheOtherHouse/scripts.pory"
	addvar VAR_THE_OTHER_HOUSE, 1
	goto TheOtherHouse_Game_1

TheOtherHouse_Game_5:
# 45 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_3, MSGBOX_YESNO
# 46 "data//maps/TheOtherHouse/scripts.pory"
	release
# 47 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TheOtherHouse_Game_14
# 49 "data//maps/TheOtherHouse/scripts.pory"
	playse SE_CLICK
# 50 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_4
# 51 "data//maps/TheOtherHouse/scripts.pory"
	release
# 52 "data//maps/TheOtherHouse/scripts.pory"
	addvar VAR_THE_OTHER_HOUSE, 1
	goto TheOtherHouse_Game_4

TheOtherHouse_Game_8:
	end

TheOtherHouse_Game_11:
# 59 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_5, MSGBOX_YESNO
# 60 "data//maps/TheOtherHouse/scripts.pory"
	release
# 61 "data//maps/TheOtherHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TheOtherHouse_Game_20
# 63 "data//maps/TheOtherHouse/scripts.pory"
	playse SE_CLICK
# 64 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_6
# 65 "data//maps/TheOtherHouse/scripts.pory"
	release
# 66 "data//maps/TheOtherHouse/scripts.pory"
	addvar VAR_THE_OTHER_HOUSE, 1
	goto TheOtherHouse_Game_10

TheOtherHouse_Game_14:
	end

TheOtherHouse_Game_17:
# 72 "data//maps/TheOtherHouse/scripts.pory"
	releaseall
	end

TheOtherHouse_Game_20:
	end

TheOtherHouse_Game_23:
# 78 "data//maps/TheOtherHouse/scripts.pory"
	msgbox TheOtherHouse_Game_Text_7
# 79 "data//maps/TheOtherHouse/scripts.pory"
	releaseall
	end


TheOtherHouse_Start_Text_0:
# 11 "data//maps/TheOtherHouse/scripts.pory"
	.string "Looks like nobody's lived here\n"
	.string "for a really long time...$"

TheOtherHouse_TV_Text_0:
# 17 "data//maps/TheOtherHouse/scripts.pory"
	.string "It's hooked up to the console.$"

TheOtherHouse_Game_Text_0:
# 23 "data//maps/TheOtherHouse/scripts.pory"
	.string "It's a gaming console!\p"
	.string "But it's not a recognisable one. There\n"
	.string "are no brand or manufacturer details...\p"
	.string "There's a drive slot, a port slot and a\n"
	.string "chip slot.$"

TheOtherHouse_Game_Text_1:
# 31 "data//maps/TheOtherHouse/scripts.pory"
	.string "Fit in the Retro Drive?$"

TheOtherHouse_Game_Text_2:
# 36 "data//maps/TheOtherHouse/scripts.pory"
	.string "It fits perfectly in the drive slot!$"

TheOtherHouse_Game_Text_3:
# 45 "data//maps/TheOtherHouse/scripts.pory"
	.string "Slot in the Swap Chip?$"

TheOtherHouse_Game_Text_4:
# 50 "data//maps/TheOtherHouse/scripts.pory"
	.string "It fits perfectly in the chip slot!$"

TheOtherHouse_Game_Text_5:
# 59 "data//maps/TheOtherHouse/scripts.pory"
	.string "Pop in the Pocket Port?$"

TheOtherHouse_Game_Text_6:
# 64 "data//maps/TheOtherHouse/scripts.pory"
	.string "It fits perfectly in the port slot!$"

TheOtherHouse_Game_Text_7:
# 78 "data//maps/TheOtherHouse/scripts.pory"
	.string "But it probably needs all 3 drives...$"

TheOtherHouse_Game_Text_8:
# 89 "data//maps/TheOtherHouse/scripts.pory"
	.string "The console turned on!\p"
	.string "...\p"
	.string "What a weird game...$"
