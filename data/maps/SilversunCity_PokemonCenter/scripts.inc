SilversunCity_PokemonCenter_MapScripts::
# 2 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilversunCity_PokemonCenter_OnTransition
	.byte 0


SilversunCity_PokemonCenter_OnTransition::
# 6 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SILVERSUN_CITY
	return


SilversunCity_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	releaseall
	return


SilversunCity_PokemonCenter_NPC1::
# 18 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	lockall
# 19 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	faceplayer
# 20 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	msgbox SilversunCity_PokemonCenter_NPC1_Text_0
# 21 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	releaseall
	return


SilversunCity_PokemonCenter_NPC1_Text_0:
# 20 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	.string "Apparently you can't meet ARIAN, the\n"
	.string "Gym Leader, without getting an\l"
	.string "appointment first.$"
