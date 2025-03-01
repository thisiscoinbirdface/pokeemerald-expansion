Route2_Caves_MapScripts::
	.byte 0


Route2_Caves_EventScript_ClefairyTrigger::
# 4 "data//maps/Route2_Caves/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Route2_Caves_EventScript_ClefairyTrigger_2
# 7 "data//maps/Route2_Caves/scripts.pory"
	lockall
# 8 "data//maps/Route2_Caves/scripts.pory"
	applymovement 1, Route2_Caves_EventScript_ClefairyTrigger_Movement_0
# 9 "data//maps/Route2_Caves/scripts.pory"
	waitmovement 1
# 10 "data//maps/Route2_Caves/scripts.pory"
	releaseall
	return

Route2_Caves_EventScript_ClefairyTrigger_2:
	end


Route2_Caves_EventScript_ClefairyBattle::
# 14 "data//maps/Route2_Caves/scripts.pory"
	lockall
# 15 "data//maps/Route2_Caves/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 16 "data//maps/Route2_Caves/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 18 "data//maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_0
# 19 "data//maps/Route2_Caves/scripts.pory"
	release
# 21 "data//maps/Route2_Caves/scripts.pory"
	setwildbattle SPECIES_CLEFAIRY, 10
# 22 "data//maps/Route2_Caves/scripts.pory"
	dowildbattle
# 23 "data//maps/Route2_Caves/scripts.pory"
	release
# 25 "data//maps/Route2_Caves/scripts.pory"
	removeobject 1
# 26 "data//maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_1
# 27 "data//maps/Route2_Caves/scripts.pory"
	release
# 28 "data//maps/Route2_Caves/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 29 "data//maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_2
# 30 "data//maps/Route2_Caves/scripts.pory"
	waitfanfare
# 31 "data//maps/Route2_Caves/scripts.pory"
	release
# 32 "data//maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_3
# 33 "data//maps/Route2_Caves/scripts.pory"
	release
# 35 "data//maps/Route2_Caves/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_GEAR_GET
# 36 "data//maps/Route2_Caves/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 37 "data//maps/Route2_Caves/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 39 "data//maps/Route2_Caves/scripts.pory"
	releaseall
	return


# 8 "data//maps/Route2_Caves/scripts.pory"
Route2_Caves_EventScript_ClefairyTrigger_Movement_0:
# 8 "data//maps/Route2_Caves/scripts.pory"
	walk_up
# 8 "data//maps/Route2_Caves/scripts.pory"
	walk_up
# 8 "data//maps/Route2_Caves/scripts.pory"
	face_down
	step_end

Route2_Caves_EventScript_ClefairyBattle_Text_0:
# 18 "data//maps/Route2_Caves/scripts.pory"
	.string "A wild Pokemon attacks you! It's\n"
	.string "holding the HIKING GEAR!$"

Route2_Caves_EventScript_ClefairyBattle_Text_1:
# 26 "data//maps/Route2_Caves/scripts.pory"
	.string "The Clefairy dropped the HIKING GEAR.\n"
	.string "Looks like it was just trying to guard\l"
	.string "its home...$"

Route2_Caves_EventScript_ClefairyBattle_Text_2:
# 29 "data//maps/Route2_Caves/scripts.pory"
	.string "{PLAYER} got the HIKING GEAR!$"

Route2_Caves_EventScript_ClefairyBattle_Text_3:
# 32 "data//maps/Route2_Caves/scripts.pory"
	.string "It seems like this Clefairy is attached\n"
	.string "to the HIKING GEAR for some\l"
	.string "reason...its following you around.$"
