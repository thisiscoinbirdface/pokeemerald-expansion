GastreeCity_PokemonCenter_MapScripts::
# 2 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GastreeCity_PokemonCenter_OnTransition
	.byte 0


GastreeCity_PokemonCenter_OnTransition::
# 6 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_GASTREE_CITY
	return


GastreeCity_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	releaseall
	return


GastreeCity_PokemonCenter_NPC1::
# 19 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	lockall
# 20 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	faceplayer
# 21 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	msgbox GastreeCity_PokemonCenter_NPC1_Text_0
# 22 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	releaseall
	return


GastreeCity_PokemonCenter_NPC2::
# 26 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	lockall
# 27 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	faceplayer
# 28 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	msgbox GastreeCity_PokemonCenter_NPC2_Text_0
# 29 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	releaseall
	return


GastreeCity_PokemonCenter_NPC1_Text_0:
# 21 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	.string "This city's Gym Leader is INGER, the\n"
	.string "ROCK specialist. He's a local hero!$"

GastreeCity_PokemonCenter_NPC2_Text_0:
# 28 "data//maps/GastreeCity_PokemonCenter/scripts.pory"
	.string "Up north is MT CERAM and down south is\n"
	.string "the giant VINE RIVER.$"
