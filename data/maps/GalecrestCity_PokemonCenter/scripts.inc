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
	msgbox GalecrestCity_PokemonCenter_NPC1_Text_0, MSGBOX_NPC
	end


GalecrestCity_PokemonCenter_NPC2::
# 24 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	msgbox GalecrestCity_PokemonCenter_NPC2_Text_0, MSGBOX_NPC
	end


GalecrestCity_PokemonCenter_NPC1_Text_0:
# 19 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	.string "Nobody goes into Vilethorn Woods - it's\n"
	.string "too creepy and easy to get lost in!\p"
	.string "...\p"
	.string "...well, nobody sane.$"

GalecrestCity_PokemonCenter_NPC2_Text_0:
# 24 "data//maps/GalecrestCity_PokemonCenter/scripts.pory"
	.string "Do you know about the Pokémon\n"
	.string "Championships? Every four years, the\l"
	.string "best trainers in Cormoria compete in a\l"
	.string "tournament to decide who's the\l"
	.string "strongest! You need all eight gym\l"
	.string "badges to enter...which means regular\l"
	.string "people like me can never make it!$"
