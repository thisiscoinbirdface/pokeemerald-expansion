FennilahlTown_PokemonCenter_MapScripts::
# 2 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FennilahlTown_PokemonCenter_OnTransition
	.byte 0


FennilahlTown_PokemonCenter_OnTransition::
# 6 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_FENNILAHL_TOWN
	return


FennilahlTown_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	releaseall
	return


FennilahlTown_PokemonCenter_NPC1::
# 19 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, FennilahlTown_PokemonCenter_NPC1_2
# 22 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	msgbox FennilahlTown_PokemonCenter_NPC1_Text_1, MSGBOX_NPC
FennilahlTown_PokemonCenter_NPC1_1:
	end

FennilahlTown_PokemonCenter_NPC1_2:
# 20 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	msgbox FennilahlTown_PokemonCenter_NPC1_Text_0, MSGBOX_NPC
	goto FennilahlTown_PokemonCenter_NPC1_1


FennilahlTown_PokemonCenter_NPC2::
# 28 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	msgbox FennilahlTown_PokemonCenter_NPC2_Text_0, MSGBOX_NPC
	end


FennilahlTown_PokemonCenter_Rattata::
# 33 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 34 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	msgbox FennilahlTown_PokemonCenter_Rattata_Text_0, MSGBOX_NPC
	end


FennilahlTown_PokemonCenter_NPC1_Text_0:
# 20 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	.string "You're the one who stopped the\n"
	.string "pickpocketing Clefairy? Well done!$"

FennilahlTown_PokemonCenter_NPC1_Text_1:
# 22 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	.string "There's been an increase in\n"
	.string "pickpocketing recently. Personally,\l"
	.string "I'm sure it's a nearby Pokémon!$"

FennilahlTown_PokemonCenter_NPC2_Text_0:
# 28 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	.string "You just got your first Pokémon too?\n"
	.string "Cubone and I are gonna be Pokémon\l"
	.string "Champions one day!$"

FennilahlTown_PokemonCenter_Rattata_Text_0:
# 34 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	.string "Cubone is raring to go!$"
