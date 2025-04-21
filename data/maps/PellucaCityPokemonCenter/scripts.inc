PellucaCityPokemonCenter_MapScripts::
# 2 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PellucaCity_PokemonCenter_OnTransition
	.byte 0


PellucaCity_PokemonCenter_OnTransition::
# 6 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PELLUCA_CITY
	return


PellucaCity_PokemonCenter_EventScript_Nurse::
# 10 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	lockall
# 11 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmessage
# 14 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	releaseall
	return


PellucaCity_PokemonCenter_Nurse1::
# 18 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse1_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Nurse2::
# 22 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse2_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Nurse3::
# 26 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse3_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Nurse4::
# 30 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse4_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Chansey::
# 34 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 35 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Chansey_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Nurse1_Text_0:
# 18 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "We've had enough of the Heal Pass\n"
	.string "system. We're unionising!$"

PellucaCity_PokemonCenter_Nurse2_Text_0:
# 22 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Down with Heal Passes! Or at least\n"
	.string "station us in decent spots!$"

PellucaCity_PokemonCenter_Nurse3_Text_0:
# 26 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "We've all got it bad, but the worst is\n"
	.string "the nurse up in Winterlily Hollow! I'm\l"
	.string "going up there with these Chanseys to\l"
	.string "help her out.$"

PellucaCity_PokemonCenter_Nurse4_Text_0:
# 30 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "The nurse in Winterlily Hollow requested\n"
	.string "for some extra help. Since the\l"
	.string "higher-ups don't care, we're going to\l"
	.string "look out for our sisters!$"

PellucaCity_PokemonCenter_Chansey_Text_0:
# 35 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "CHANSEY: seeyyy!!\p"
	.string "Chansey wants to unionise too!$"
