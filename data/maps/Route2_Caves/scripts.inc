Route2_Caves_MapScripts::
	.byte 0


Route2_Caves_EventScript_ClefairyTrigger::
# 4 "data/maps/Route2_Caves/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Route2_Caves_EventScript_ClefairyTrigger_2
# 8 "data/maps/Route2_Caves/scripts.pory"
	lockall
# 9 "data/maps/Route2_Caves/scripts.pory"
	applymovement 1, walk_up * 2 face_down
# 10 "data/maps/Route2_Caves/scripts.pory"
	release
	return

Route2_Caves_EventScript_ClefairyTrigger_2:
	end


Route2_Caves_EventScript_ClefairyBattle::
# 14 "data/maps/Route2_Caves/scripts.pory"
	lockall
# 15 "data/maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_0
# 16 "data/maps/Route2_Caves/scripts.pory"
	release
# 18 "data/maps/Route2_Caves/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 19 "data/maps/Route2_Caves/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 20 "data/maps/Route2_Caves/scripts.pory"
	setwildbattle SPECIES_CLEFAIRY, 10
# 21 "data/maps/Route2_Caves/scripts.pory"
	dowildbattle
# 22 "data/maps/Route2_Caves/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 23 "data/maps/Route2_Caves/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 25 "data/maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_1
# 26 "data/maps/Route2_Caves/scripts.pory"
	release
# 27 "data/maps/Route2_Caves/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 28 "data/maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_2
# 29 "data/maps/Route2_Caves/scripts.pory"
	waitfanfare
# 30 "data/maps/Route2_Caves/scripts.pory"
	release
# 31 "data/maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_3
# 33 "data/maps/Route2_Caves/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_GEAR_GET
	return


Route2_Caves_EventScript_ClefairyBattle_Text_0:
# 15 "data/maps/Route2_Caves/scripts.pory"
	.string "A wild Pokemon attacks you! It's\n"
	.string "holding the HIKING GEAR!$"

Route2_Caves_EventScript_ClefairyBattle_Text_1:
# 25 "data/maps/Route2_Caves/scripts.pory"
	.string "The Clefairy dropped the HIKING GEAR.\n"
	.string "Looks like it was just trying to guard\l"
	.string "its home...$"

Route2_Caves_EventScript_ClefairyBattle_Text_2:
# 28 "data/maps/Route2_Caves/scripts.pory"
	.string "{PLAYER} got the HIKING GEAR!$"

Route2_Caves_EventScript_ClefairyBattle_Text_3:
# 31 "data/maps/Route2_Caves/scripts.pory"
	.string "It seems like this Clefairy is attached\n"
	.string "to the HIKING GEAR for some\l"
	.string "reason...its following you around.$"
