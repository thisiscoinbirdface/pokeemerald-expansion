RivetshoreCity_PokemonCenter_MapScripts::
# 2 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RivetshoreCity_PokemonCenter_OnTransition
	.byte 0


RivetshoreCity_PokemonCenter_OnTransition::
# 6 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_RIVETSHORE_CITY
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


RivetshoreCity_PokemonCenter_NPC2::
# 24 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	msgbox RivetshoreCity_PokemonCenter_NPC2_Text_0, MSGBOX_NPC
	end


RivetshoreCity_PokemonCenter_NPC1_Text_0:
# 18 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	.string "I once met a strange lady here. She\n"
	.string "tried to sell me all these rare items! I\l"
	.string "could never find her again...$"

RivetshoreCity_PokemonCenter_NPC2_Text_0:
# 24 "data//maps/RivetshoreCity_PokemonCenter/scripts.pory"
	.string "We had a heatwave yesterday.\n"
	.string "It's not natural, I tell you!$"
