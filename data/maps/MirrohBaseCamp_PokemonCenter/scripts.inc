MirrohBaseCamp_PokemonCenter_MapScripts::
# 2 "data//maps/MirrohBaseCamp_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MirrohBaseCamp_PokemonCenter_OnTransition
	.byte 0


MirrohBaseCamp_PokemonCenter_OnTransition::
# 6 "data//maps/MirrohBaseCamp_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_MIRROH_BASE_CAMP
	return


MirrohBaseCamp_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/MirrohBaseCamp_PokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/MirrohBaseCamp_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/MirrohBaseCamp_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/MirrohBaseCamp_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/MirrohBaseCamp_PokemonCenter/scripts.pory"
	releaseall
	return

