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
	setvar VAR_0x800B, LOCALID_NURSE
# 12 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	releaseall
	return

