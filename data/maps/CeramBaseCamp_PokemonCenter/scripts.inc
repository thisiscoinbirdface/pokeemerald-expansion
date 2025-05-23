CeramBaseCamp_PokemonCenter_MapScripts::
# 2 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeramBaseCamp_PokemonCenter_OnTransition
	.byte 0


CeramBaseCamp_PokemonCenter_OnTransition::
# 6 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CERAM_BASE_CAMP
	return


CeramBaseCamp_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	releaseall
	return


CeramBaseCamp_PokemonCenter_NPC1::
# 18 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	msgbox CeramBaseCamp_PokemonCenter_NPC1_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_PokemonCenter_Pineco::
# 23 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	playmoncry SPECIES_PINECO, CRY_MODE_NORMAL
# 24 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	msgbox CeramBaseCamp_PokemonCenter_Pineco_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_PokemonCenter_NPC2::
# 29 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	msgbox CeramBaseCamp_PokemonCenter_NPC2_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_PokemonCenter_NPC1_Text_0:
# 18 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	.string "The selection of books here is great!$"

CeramBaseCamp_PokemonCenter_Pineco_Text_0:
# 24 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	.string "Pineco is browsing the books.$"

CeramBaseCamp_PokemonCenter_NPC2_Text_0:
# 29 "data//maps/CeramBaseCamp_PokemonCenter/scripts.pory"
	.string "Apparently you can't meet Ariana, the\n"
	.string "Gym Leader, without getting an\l"
	.string "appointment first.$"
