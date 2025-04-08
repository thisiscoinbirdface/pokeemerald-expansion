GalecrestCity_PokemonCenter_MapScripts::
# 2 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GalecrestCity_PokemonCenter_OnTransition
	.byte 0


GalecrestCity_PokemonCenter_OnTransition::
# 6 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_GALECREST_CITY
	return


GalecrestCity_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	releaseall
	return


GalecrestCity_PokemonCenter_NPC1::
# 19 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	lockall
# 20 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	faceplayer
# 21 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	msgbox GalecrestCity_PokemonCenter_NPC1_Text_0
# 22 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	releaseall
	return


GalecrestCity_PokemonCenter_NPC2::
# 26 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	lockall
# 27 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	faceplayer
# 28 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	msgbox GalecrestCity_PokemonCenter_NPC2_Text_0
# 29 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	releaseall
	return


GalecrestCity_PokemonCenter_NPC1_Text_0:
# 21 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	.string "Nobody goes into Vilethorn Woods - it's\n"
	.string "too creepy and easy to get lost in!\p"
	.string "...\p"
	.string "...well, nobody sane.$"

GalecrestCity_PokemonCenter_NPC2_Text_0:
# 28 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	.string "Galecrest City has really become quite\n"
	.string "unmaintained. I keep finding Bottle\l"
	.string "Caps lying around!$"
