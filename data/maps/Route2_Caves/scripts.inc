# 1 "data/maps/Route2_Caves/scripts.pory"

# 2 "data/maps/Route2_Caves/scripts.pory"
    .set LOCALID_CLEFAIRY, 3

Route2_Caves_MapScripts::
	.byte 0


Route2_Caves_EventScript_ClefairyTrigger::
# 8 "data/maps/Route2_Caves/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Route2_Caves_EventScript_ClefairyTrigger_2
# 11 "data/maps/Route2_Caves/scripts.pory"
	lockall
# 12 "data/maps/Route2_Caves/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Caves_EventScript_ClefairyTrigger_Movement_0
# 13 "data/maps/Route2_Caves/scripts.pory"
	waitmovement LOCALID_CLEFAIRY
# 14 "data/maps/Route2_Caves/scripts.pory"
	releaseall
	return

Route2_Caves_EventScript_ClefairyTrigger_2:
	end


Route2_Caves_EventScript_ClefairyBattle::
# 18 "data/maps/Route2_Caves/scripts.pory"
	lockall
# 19 "data/maps/Route2_Caves/scripts.pory"
	setflag FLAG_BATTLE_NO_RUNNING_CATCHING
# 20 "data/maps/Route2_Caves/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 21 "data/maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_0
# 22 "data/maps/Route2_Caves/scripts.pory"
	release
# 24 "data/maps/Route2_Caves/scripts.pory"
	setwildbattle SPECIES_CLEFAIRY, 7
# 25 "data/maps/Route2_Caves/scripts.pory"
	dowildbattle
# 26 "data/maps/Route2_Caves/scripts.pory"
	release
# 28 "data/maps/Route2_Caves/scripts.pory"
	removeobject LOCALID_CLEFAIRY
# 29 "data/maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_1
# 30 "data/maps/Route2_Caves/scripts.pory"
	release
# 31 "data/maps/Route2_Caves/scripts.pory"
	giveitem ITEM_STRANGE_ROCK
# 32 "data/maps/Route2_Caves/scripts.pory"
	release
# 34 "data/maps/Route2_Caves/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_GEAR_GET
# 35 "data/maps/Route2_Caves/scripts.pory"
	setvar VAR_FENNILAHL_CLEFAIRY_QUEST, 3
# 36 "data/maps/Route2_Caves/scripts.pory"
	clearflag FLAG_BATTLE_NO_RUNNING_CATCHING
# 38 "data/maps/Route2_Caves/scripts.pory"
	releaseall
	return


# 12 "data/maps/Route2_Caves/scripts.pory"
Route2_Caves_EventScript_ClefairyTrigger_Movement_0:
# 12 "data/maps/Route2_Caves/scripts.pory"
	walk_up
# 12 "data/maps/Route2_Caves/scripts.pory"
	walk_up
# 12 "data/maps/Route2_Caves/scripts.pory"
	face_down
	step_end

Route2_Caves_EventScript_ClefairyBattle_Text_0:
# 21 "data/maps/Route2_Caves/scripts.pory"
	.string "A wild Pokémon attacks you! It's\n"
	.string "holding the STRANGE ROCK!$"

Route2_Caves_EventScript_ClefairyBattle_Text_1:
# 29 "data/maps/Route2_Caves/scripts.pory"
	.string "The Clefairy dropped the STRANGE ROCK.\n"
	.string "Stealing is bad, Clefairy!\p"
	.string "...\p"
	.string "It looks dismayed and runs away...$"
