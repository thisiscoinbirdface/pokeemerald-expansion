PellucaCityPokemonCenter_MapScripts::
# 2 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PellucaCity_PokemonCenter_OnTransition
	.byte 0


PellucaCity_PokemonCenter_OnTransition::
# 6 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PELLUCA_CITY
	return


PellucaCity_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	releaseall
	return

