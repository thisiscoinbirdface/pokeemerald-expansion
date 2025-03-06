CeramBaseCamp_PokemonCenter_MapScripts::
# 2 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeramBaseCamp_PokemonCenter_OnTransition
	.byte 0


CeramBaseCamp_PokemonCenter_OnTransition::
# 6 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CERAM_BASE_CAMP
	return


CeramBaseCamp_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 12 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	releaseall
	return

