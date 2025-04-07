FennilahlTown_PokemonCenter_MapScripts::
# 2 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FennilahlTown_PokemonCenter_OnTransition
	.byte 0


FennilahlTown_PokemonCenter_OnTransition::
# 6 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_FENNILAHL_TOWN
	return


FennilahlTown_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	releaseall
	return


FennilahlTown_PokemonCenter_NPC1::
# 19 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	lockall
# 20 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	faceplayer
# 22 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, FennilahlTown_PokemonCenter_NPC1_2
# 25 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	msgbox FennilahlTown_PokemonCenter_NPC1_Text_1
FennilahlTown_PokemonCenter_NPC1_1:
# 28 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	releaseall
	return

FennilahlTown_PokemonCenter_NPC1_2:
# 23 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	msgbox FennilahlTown_PokemonCenter_NPC1_Text_0
	goto FennilahlTown_PokemonCenter_NPC1_1


FennilahlTown_PokemonCenter_NPC1_Text_0:
# 23 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	.string "You're the one who stopped the\n"
	.string "pickpocketing CLEFAIRY? Well done!$"

FennilahlTown_PokemonCenter_NPC1_Text_1:
# 25 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	.string "We've had an increase in pickpocketing\n"
	.string "recently. We suspect it's a nearby\l"
	.string "Pokemon.$"
