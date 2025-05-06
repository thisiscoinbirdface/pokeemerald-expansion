RivetshoreCity_PokemonCenter_MapScripts::
# 2 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RivetshoreCity_PokemonCenter_OnTransition
	.byte 0


RivetshoreCity_PokemonCenter_OnTransition::
# 6 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SILVERSUN_CITY
	return


RivetshoreCity_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	releaseall
	return


RivetshoreCity_PokemonCenter_NPC1::
# 18 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	msgbox RivetshoreCity_PokemonCenter_NPC1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_PokemonCenter_NPC1_Text_0:
# 18 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	.string "They've blocked off the Hoya River\n"
	.string "North Crossing because they saw a Mega\l"
	.string "Sharpedo in the wild! So I'm waiting here\l"
	.string "until it's safe to cross again.$"
