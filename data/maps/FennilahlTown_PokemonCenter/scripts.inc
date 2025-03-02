FennilahlTown_PokemonCenter_MapScripts::
	.byte 0


FennilahlTown_PokemonCenter_EventScript_Nurse::
# 5 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	lockall
# 6 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 7 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 8 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	waitmessage
# 9 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 10 "data//maps/FennilahlTown_PokemonCenter/scripts.pory"
	releaseall
	return

