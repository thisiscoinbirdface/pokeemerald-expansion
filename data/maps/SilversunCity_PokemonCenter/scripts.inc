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
	msgbox SilversunCity_PokemonCenter_NPC1_Text_0, MSGBOX_NPC
	end


SilversunCity_PokemonCenter_NPC2::
# 23 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	msgbox SilversunCity_PokemonCenter_NPC2_Text_0, MSGBOX_NPC
	end


SilversunCity_PokemonCenter_NPC1_Text_0:
# 18 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	.string "They've blocked off the Hoya River\n"
	.string "North Crossing because they saw a\l"
	.string "Mega Sharpedo in the wild! So I'm\l"
	.string "waiting here until it's safe to cross\l"
	.string "again.$"

SilversunCity_PokemonCenter_NPC2_Text_0:
# 23 "data//maps/SilversunCity_PokemonCenter/scripts.pory"
	.string "This year is the year of the Pokémon\n"
	.string "Championships! It happens only once\l"
	.string "every four years - should I take part?$"
