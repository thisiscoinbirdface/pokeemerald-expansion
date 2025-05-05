# 1 "data//maps/Route3_Underpass_Extended/scripts.pory"

# 2 "data//maps/Route3_Underpass_Extended/scripts.pory"
    .set LOCALID_DIANCIE, 7

Route3_Underpass_Extended_MapScripts::
# 6 "data//maps/Route3_Underpass_Extended/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route3_Underpass_Extended_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route3_Underpass_Extended_MapScripts_MAP_SCRIPT_ON_LOAD:
# 7 "data//maps/Route3_Underpass_Extended/scripts.pory"
	goto Route3_Underpass_Extended_SetLayout
	return


Route3_Underpass_Extended_SetLayout::
# 12 "data//maps/Route3_Underpass_Extended/scripts.pory"
	compare VAR_DIANCIE, 3
	goto_if_eq Route3_Underpass_Extended_SetLayout_2
Route3_Underpass_Extended_SetLayout_1:
	return

Route3_Underpass_Extended_SetLayout_2:
# 13 "data//maps/Route3_Underpass_Extended/scripts.pory"
	setmetatile 33, 4, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 14 "data//maps/Route3_Underpass_Extended/scripts.pory"
	setmetatile 33, 3, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 15 "data//maps/Route3_Underpass_Extended/scripts.pory"
	special DrawWholeMapView
	goto Route3_Underpass_Extended_SetLayout_1


Route3_Ext_NPC1::
# 31 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_NPC1_Text_0, MSGBOX_NPC
	end


Route3_Ext_Trainer_A::
# 36 "data//maps/Route3_Underpass_Extended/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_EXT_C, Route3_Ext_Trainer_A_Text_0, Route3_Ext_Trainer_A_Text_1
# 37 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_Trainer_A_Text_2, MSGBOX_NPC
	return


Route3_Ext_Stone_A::
# 46 "data//maps/Route3_Underpass_Extended/scripts.pory"
	lockall
# 47 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_Stone_A_Text_0
# 49 "data//maps/Route3_Underpass_Extended/scripts.pory"
	checkitem ITEM_SAPPHIRE
# 51 "data//maps/Route3_Underpass_Extended/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route3_Ext_Stone_A_2
Route3_Ext_Stone_A_1:
# 63 "data//maps/Route3_Underpass_Extended/scripts.pory"
	releaseall
	end

Route3_Ext_Stone_A_2:
# 52 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_Stone_A_Text_1, MSGBOX_YESNO
# 53 "data//maps/Route3_Underpass_Extended/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route3_Ext_Stone_A_4
	goto Route3_Ext_Stone_A_1

Route3_Ext_Stone_A_4:
# 54 "data//maps/Route3_Underpass_Extended/scripts.pory"
	removeitem ITEM_SAPPHIRE
# 55 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_Stone_A_Text_2
# 56 "data//maps/Route3_Underpass_Extended/scripts.pory"
	release
# 58 "data//maps/Route3_Underpass_Extended/scripts.pory"
	addvar VAR_DIANCIE, 1
# 59 "data//maps/Route3_Underpass_Extended/scripts.pory"
	compare VAR_DIANCIE, 3
	goto_if_eq Route3_Ext_Stone_A_6
	goto Route3_Ext_Stone_A_1

Route3_Ext_Stone_A_6:
# 59 "data//maps/Route3_Underpass_Extended/scripts.pory"
	goto Route3_Ext_Diancie_OpenDoor
	goto Route3_Ext_Stone_A_1


Route3_Ext_Stone_B::
# 68 "data//maps/Route3_Underpass_Extended/scripts.pory"
	lockall
# 69 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_Stone_B_Text_0
# 71 "data//maps/Route3_Underpass_Extended/scripts.pory"
	checkitem ITEM_RUBY
# 73 "data//maps/Route3_Underpass_Extended/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route3_Ext_Stone_B_2
Route3_Ext_Stone_B_1:
# 85 "data//maps/Route3_Underpass_Extended/scripts.pory"
	releaseall
	end

Route3_Ext_Stone_B_2:
# 74 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_Stone_B_Text_1, MSGBOX_YESNO
# 75 "data//maps/Route3_Underpass_Extended/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route3_Ext_Stone_B_4
	goto Route3_Ext_Stone_B_1

Route3_Ext_Stone_B_4:
# 76 "data//maps/Route3_Underpass_Extended/scripts.pory"
	removeitem ITEM_RUBY
# 77 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_Stone_B_Text_2
# 78 "data//maps/Route3_Underpass_Extended/scripts.pory"
	release
# 80 "data//maps/Route3_Underpass_Extended/scripts.pory"
	addvar VAR_DIANCIE, 1
# 81 "data//maps/Route3_Underpass_Extended/scripts.pory"
	compare VAR_DIANCIE, 3
	goto_if_eq Route3_Ext_Stone_B_6
	goto Route3_Ext_Stone_B_1

Route3_Ext_Stone_B_6:
# 81 "data//maps/Route3_Underpass_Extended/scripts.pory"
	goto Route3_Ext_Diancie_OpenDoor
	goto Route3_Ext_Stone_B_1


Route3_Ext_Stone_C::
# 90 "data//maps/Route3_Underpass_Extended/scripts.pory"
	lockall
# 91 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_Stone_C_Text_0
# 93 "data//maps/Route3_Underpass_Extended/scripts.pory"
	checkitem ITEM_DIAMOND
# 95 "data//maps/Route3_Underpass_Extended/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route3_Ext_Stone_C_2
Route3_Ext_Stone_C_1:
# 107 "data//maps/Route3_Underpass_Extended/scripts.pory"
	releaseall
	end

Route3_Ext_Stone_C_2:
# 96 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_Stone_C_Text_1, MSGBOX_YESNO
# 97 "data//maps/Route3_Underpass_Extended/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route3_Ext_Stone_C_4
	goto Route3_Ext_Stone_C_1

Route3_Ext_Stone_C_4:
# 98 "data//maps/Route3_Underpass_Extended/scripts.pory"
	removeitem ITEM_DIAMOND
# 99 "data//maps/Route3_Underpass_Extended/scripts.pory"
	msgbox Route3_Ext_Stone_C_Text_2
# 100 "data//maps/Route3_Underpass_Extended/scripts.pory"
	release
# 102 "data//maps/Route3_Underpass_Extended/scripts.pory"
	addvar VAR_DIANCIE, 1
# 103 "data//maps/Route3_Underpass_Extended/scripts.pory"
	compare VAR_DIANCIE, 3
	goto_if_eq Route3_Ext_Stone_C_6
	goto Route3_Ext_Stone_C_1

Route3_Ext_Stone_C_6:
# 103 "data//maps/Route3_Underpass_Extended/scripts.pory"
	goto Route3_Ext_Diancie_OpenDoor
	goto Route3_Ext_Stone_C_1


Route3_Ext_Diancie_OpenDoor::
# 121 "data//maps/Route3_Underpass_Extended/scripts.pory"
	setvar VAR_0x8004, 2
# 122 "data//maps/Route3_Underpass_Extended/scripts.pory"
	setvar VAR_0x8005, 2
# 123 "data//maps/Route3_Underpass_Extended/scripts.pory"
	setvar VAR_0x8006, 30
# 124 "data//maps/Route3_Underpass_Extended/scripts.pory"
	setvar VAR_0x8007, 5
# 125 "data//maps/Route3_Underpass_Extended/scripts.pory"
	special ShakeCamera
# 126 "data//maps/Route3_Underpass_Extended/scripts.pory"
	waitstate
# 127 "data//maps/Route3_Underpass_Extended/scripts.pory"
	setmetatile 33, 4, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 128 "data//maps/Route3_Underpass_Extended/scripts.pory"
	setmetatile 33, 3, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 129 "data//maps/Route3_Underpass_Extended/scripts.pory"
	special DrawWholeMapView
# 130 "data//maps/Route3_Underpass_Extended/scripts.pory"
	release
	end


Route3_Ext_Diancie::
# 136 "data//maps/Route3_Underpass_Extended/scripts.pory"
	lockall
# 138 "data//maps/Route3_Underpass_Extended/scripts.pory"
	special SaveGame
# 139 "data//maps/Route3_Underpass_Extended/scripts.pory"
	waitstate
# 140 "data//maps/Route3_Underpass_Extended/scripts.pory"
	release
# 143 "data//maps/Route3_Underpass_Extended/scripts.pory"
	faceplayer
# 144 "data//maps/Route3_Underpass_Extended/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 145 "data//maps/Route3_Underpass_Extended/scripts.pory"
	waitmoncry
# 146 "data//maps/Route3_Underpass_Extended/scripts.pory"
	setflag FLAG_DIANCIE
# 148 "data//maps/Route3_Underpass_Extended/scripts.pory"
	setwildbattle SPECIES_DIANCIE, 50
# 149 "data//maps/Route3_Underpass_Extended/scripts.pory"
	dowildbattle
# 150 "data//maps/Route3_Underpass_Extended/scripts.pory"
	removeobject LOCALID_DIANCIE
# 152 "data//maps/Route3_Underpass_Extended/scripts.pory"
	releaseall
	end


Route3_Ext_NPC1_Text_0:
# 31 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "They say there's a rare Pokémon that\n"
	.string "makes its home down here, but I can't\l"
	.string "find it! Did I come to the wrong place?$"

Route3_Ext_Trainer_A_Text_0:
# 36 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "Hoho! Fancy seeing another explorer!\n"
	.string "But you won't take any of my spoils!$"

Route3_Ext_Trainer_A_Text_1:
# 36 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "I didn't want to explore this!$"

Route3_Ext_Trainer_A_Text_2:
# 37 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "I wonder what secrets lie in these\n"
	.string "caverns...$"

Route3_Ext_Stone_A_Text_0:
# 47 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "There's a crevice in this\n"
	.string "stone...streaks of blue mark the sides...$"

Route3_Ext_Stone_A_Text_1:
# 52 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "The Sapphire fits perfectly!\n"
	.string "Insert Sapphire into crevice?$"

Route3_Ext_Stone_A_Text_2:
# 55 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "{PLAYER} gently slotted the Sapphire\n"
	.string "in the crevice.$"

Route3_Ext_Stone_B_Text_0:
# 69 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "There's a crevice in this stone...pale\n"
	.string "red lines run down the rock...$"

Route3_Ext_Stone_B_Text_1:
# 74 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "The Ruby fits perfectly!\n"
	.string "Insert Ruby into crevice?$"

Route3_Ext_Stone_B_Text_2:
# 77 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "{PLAYER} gently slotted the Ruby in\n"
	.string "the crevice.$"

Route3_Ext_Stone_C_Text_0:
# 91 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "There's a crevice in this stone...there\n"
	.string "are traces of something glittering...$"

Route3_Ext_Stone_C_Text_1:
# 96 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "The Diamond fits perfectly!\n"
	.string "Insert Diamond into crevice?$"

Route3_Ext_Stone_C_Text_2:
# 99 "data//maps/Route3_Underpass_Extended/scripts.pory"
	.string "{PLAYER} gently slotted the Diamond\n"
	.string "in the crevice.$"
