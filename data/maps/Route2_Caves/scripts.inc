Route2_Caves_MapScripts::
	.byte 0


Route2_Caves_EventScript_ClefairyTrigger::
# 4 "data//maps/Route2_Caves/scripts.pory"
	lockall
# 5 "data//maps/Route2_Caves/scripts.pory"
	applymovement 1, Route2_Caves_EventScript_ClefairyTrigger_Movement_0
# 6 "data//maps/Route2_Caves/scripts.pory"
	releaseall
	return


Route2_Caves_EventScript_ClefairyBattle::
# 10 "data//maps/Route2_Caves/scripts.pory"
	lockall
# 11 "data//maps/Route2_Caves/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 12 "data//maps/Route2_Caves/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 14 "data//maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_0
# 15 "data//maps/Route2_Caves/scripts.pory"
	release
# 17 "data//maps/Route2_Caves/scripts.pory"
	setwildbattle SPECIES_CLEFAIRY, 10
# 18 "data//maps/Route2_Caves/scripts.pory"
	dowildbattle
# 19 "data//maps/Route2_Caves/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 20 "data//maps/Route2_Caves/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 22 "data//maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_1
# 23 "data//maps/Route2_Caves/scripts.pory"
	release
# 24 "data//maps/Route2_Caves/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data//maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_2
# 26 "data//maps/Route2_Caves/scripts.pory"
	waitfanfare
# 27 "data//maps/Route2_Caves/scripts.pory"
	release
# 28 "data//maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_3
# 29 "data//maps/Route2_Caves/scripts.pory"
	release
# 30 "data//maps/Route2_Caves/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_GEAR_GET
# 32 "data//maps/Route2_Caves/scripts.pory"
	releaseall
	return


# 5 "data//maps/Route2_Caves/scripts.pory"
Route2_Caves_EventScript_ClefairyTrigger_Movement_0:
# 5 "data//maps/Route2_Caves/scripts.pory"
	walk_up
# 5 "data//maps/Route2_Caves/scripts.pory"
	walk_up
# 5 "data//maps/Route2_Caves/scripts.pory"
	face_down
	step_end

Route2_Caves_EventScript_ClefairyBattle_Text_0:
# 14 "data//maps/Route2_Caves/scripts.pory"
	.string "A wild Pokemon attacks you! It's\n"
	.string "holding the HIKING GEAR!$"

Route2_Caves_EventScript_ClefairyBattle_Text_1:
# 22 "data//maps/Route2_Caves/scripts.pory"
	.string "The Clefairy dropped the HIKING GEAR.\n"
	.string "Looks like it was just trying to guard\l"
	.string "its home...$"

Route2_Caves_EventScript_ClefairyBattle_Text_2:
# 25 "data//maps/Route2_Caves/scripts.pory"
	.string "{PLAYER} got the HIKING GEAR!$"

Route2_Caves_EventScript_ClefairyBattle_Text_3:
# 28 "data//maps/Route2_Caves/scripts.pory"
	.string "It seems like this Clefairy is attached\n"
	.string "to the HIKING GEAR for some\l"
	.string "reason...its following you around.$"
