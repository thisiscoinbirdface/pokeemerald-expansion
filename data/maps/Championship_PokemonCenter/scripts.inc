Championship_PokemonCenter_MapScripts::
# 2 "data//maps/Championship_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Championship_PokemonCenter_OnTransition
	.byte 0


Championship_PokemonCenter_OnTransition::
# 6 "data//maps/Championship_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_VICTORY_CAPE
	return


Championship_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/Championship_PokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/Championship_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/Championship_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/Championship_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/Championship_PokemonCenter/scripts.pory"
	releaseall
	return


Championship_PokemonCenter_NPC1::
# 19 "data//maps/Championship_PokemonCenter/scripts.pory"
	msgbox Championship_PokemonCenter_NPC1_Text_0, MSGBOX_NPC
	end


Championship_PokemonCenter_NPC2::
# 24 "data//maps/Championship_PokemonCenter/scripts.pory"
	msgbox Championship_PokemonCenter_NPC2_Text_0, MSGBOX_NPC
	end


Championship_PokemonCenter_NPC1_Text_0:
# 19 "data//maps/Championship_PokemonCenter/scripts.pory"
	.string "This city's Gym Leader is Inger, the\n"
	.string "ROCK specialist. He's a local hero!\p"
	.string "His trainers call him Inger the King, or\n"
	.string "Inger for short.\p"
	.string "Hehe! I'd like a nickname like that.$"

Championship_PokemonCenter_NPC2_Text_0:
# 24 "data//maps/Championship_PokemonCenter/scripts.pory"
	.string "Down south is the giant Vine River. It's\n"
	.string "one of the three great rivers!\p"
	.string "The other two are the Ivy and Hoya\n"
	.string "Rivers, further out west.$"
