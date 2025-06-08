# 1 "data//maps/Route2_Caves/scripts.pory"

# 2 "data//maps/Route2_Caves/scripts.pory"
    .set LOCALID_CLEFAIRY, 3

Route2_Caves_MapScripts::
	.byte 0


Route2_Caves_EventScript_ClefairyTrigger::
# 8 "data//maps/Route2_Caves/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Route2_Caves_EventScript_ClefairyTrigger_2
# 11 "data//maps/Route2_Caves/scripts.pory"
	lockall
# 12 "data//maps/Route2_Caves/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 13 "data//maps/Route2_Caves/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Caves_EventScript_ClefairyTrigger_Movement_0
# 14 "data//maps/Route2_Caves/scripts.pory"
	waitmovement LOCALID_CLEFAIRY
# 15 "data//maps/Route2_Caves/scripts.pory"
	releaseall
	return

Route2_Caves_EventScript_ClefairyTrigger_2:
	end


Route2_Caves_EventScript_ClefairyBattle::
# 19 "data//maps/Route2_Caves/scripts.pory"
	lockall
# 20 "data//maps/Route2_Caves/scripts.pory"
	setflag FLAG_BATTLE_NO_RUNNING_CATCHING
# 21 "data//maps/Route2_Caves/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 22 "data//maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_0
# 23 "data//maps/Route2_Caves/scripts.pory"
	release
# 25 "data//maps/Route2_Caves/scripts.pory"
	setwildbattle SPECIES_CLEFAIRY, 7
# 26 "data//maps/Route2_Caves/scripts.pory"
	dowildbattle
# 27 "data//maps/Route2_Caves/scripts.pory"
	release
# 29 "data//maps/Route2_Caves/scripts.pory"
	msgbox Route2_Caves_EventScript_ClefairyBattle_Text_1
# 30 "data//maps/Route2_Caves/scripts.pory"
	release
# 31 "data//maps/Route2_Caves/scripts.pory"
	applymovement LOCALID_CLEFAIRY, Route2_Caves_EventScript_ClefairyBattle_Movement_0
# 32 "data//maps/Route2_Caves/scripts.pory"
	waitmovement 0
# 33 "data//maps/Route2_Caves/scripts.pory"
	removeobject LOCALID_CLEFAIRY
# 34 "data//maps/Route2_Caves/scripts.pory"
	giveitem ITEM_STRANGE_ROCK
# 35 "data//maps/Route2_Caves/scripts.pory"
	release
# 37 "data//maps/Route2_Caves/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_GEAR_GET
# 38 "data//maps/Route2_Caves/scripts.pory"
	setvar VAR_FENNILAHL_CLEFAIRY_QUEST, 3
# 39 "data//maps/Route2_Caves/scripts.pory"
	clearflag FLAG_BATTLE_NO_RUNNING_CATCHING
# 41 "data//maps/Route2_Caves/scripts.pory"
	releaseall
	return


# 13 "data//maps/Route2_Caves/scripts.pory"
Route2_Caves_EventScript_ClefairyTrigger_Movement_0:
# 13 "data//maps/Route2_Caves/scripts.pory"
	emote_exclamation_mark
# 13 "data//maps/Route2_Caves/scripts.pory"
	jump_in_place_down
# 13 "data//maps/Route2_Caves/scripts.pory"
	walk_up
# 13 "data//maps/Route2_Caves/scripts.pory"
	walk_up
# 13 "data//maps/Route2_Caves/scripts.pory"
	face_down
	step_end

# 31 "data//maps/Route2_Caves/scripts.pory"
Route2_Caves_EventScript_ClefairyBattle_Movement_0:
# 31 "data//maps/Route2_Caves/scripts.pory"
	walk_fast_up
# 31 "data//maps/Route2_Caves/scripts.pory"
	walk_fast_up
# 31 "data//maps/Route2_Caves/scripts.pory"
	walk_fast_up
# 31 "data//maps/Route2_Caves/scripts.pory"
	walk_fast_up
# 31 "data//maps/Route2_Caves/scripts.pory"
	walk_fast_up
# 31 "data//maps/Route2_Caves/scripts.pory"
	walk_fast_up
	step_end

Route2_Caves_EventScript_ClefairyBattle_Text_0:
# 22 "data//maps/Route2_Caves/scripts.pory"
	.string "A wild Pokémon attacks you!\n"
	.string "It's holding the Strange Rock!$"

Route2_Caves_EventScript_ClefairyBattle_Text_1:
# 29 "data//maps/Route2_Caves/scripts.pory"
	.string "The Clefairy dropped the Strange Rock.\n"
	.string "Stealing is bad, Clefairy!\p"
	.string "...\p"
	.string "It looks dismayed and runs away...$"
