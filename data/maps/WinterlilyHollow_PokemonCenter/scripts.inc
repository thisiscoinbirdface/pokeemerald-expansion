WinterlilyHollow_PokemonCenter_MapScripts::
# 2 "data//maps/WinterlilyHollow_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WinterlilyHollow_PokemonCenter_OnTransition
	.byte 0


WinterlilyHollow_PokemonCenter_OnTransition::
# 6 "data//maps/WinterlilyHollow_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_WINTERLILY_HOLLOW
	return


WinterlilyHollow_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/WinterlilyHollow_PokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/WinterlilyHollow_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/WinterlilyHollow_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/WinterlilyHollow_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/WinterlilyHollow_PokemonCenter/scripts.pory"
	releaseall
	return

