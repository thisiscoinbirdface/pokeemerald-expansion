FennilahlTown_MapScripts::
	.byte 0


FennilahlTown_EventScript_MartEmployeeRoadBlock::
# 4 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 5 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 6 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0
# 7 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	return


FennilahlTown_EventScript_Man::
# 11 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 12 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 13 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Man_Text_0
# 14 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	return


FennilahlTown_EventScript_Woman::
# 18 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 19 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 20 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_0
# 21 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	return


FennilahlTown_EventScript_HikerTunnel::
# 25 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 26 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 27 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, FennilahlTown_EventScript_HikerTunnel_2
# 30 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_1
# 31 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, FennilahlTown_EventScript_HikerTunnel_Movement_0
# 32 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
FennilahlTown_EventScript_HikerTunnel_1:
# 34 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	return

FennilahlTown_EventScript_HikerTunnel_2:
# 28 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_0
	goto FennilahlTown_EventScript_HikerTunnel_1


# 31 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_EventScript_HikerTunnel_Movement_0:
# 31 "data//maps/FennilahlTown/scripts.pory"
	walk_right
# 31 "data//maps/FennilahlTown/scripts.pory"
	face_down
	step_end

FennilahlTown_EventScript_MartEmployeeRoadBlock_Text_0:
# 6 "data//maps/FennilahlTown/scripts.pory"
	.string "I'm the chauffeur for the detectives in\n"
	.string "charge of the Tenebris disappearance.\l"
	.string "They're in Carabrue Town right now\l"
	.string "speaking to the lab staff.$"

FennilahlTown_EventScript_Man_Text_0:
# 13 "data//maps/FennilahlTown/scripts.pory"
	.string "I was watching the news the other day.\n"
	.string "They say that the Pokemon\l"
	.string "Psychologist has gone missing. Who?\l"
	.string "Professor Tenebris of course!$"

FennilahlTown_EventScript_Woman_Text_0:
# 20 "data//maps/FennilahlTown/scripts.pory"
	.string "What a cute little {PKMN} you have with\n"
	.string "you!$"

FennilahlTown_EventScript_HikerTunnel_Text_0:
# 28 "data//maps/FennilahlTown/scripts.pory"
	.string "Sorry - I can't let civilians pass. The\n"
	.string "tunnel ahead is dangerous and only\l"
	.string "prepared {PKMN} trainers are allowed. Oh,\l"
	.string "you have a {PKMN}? So does my gradmother!\l"
	.string "But you need at least a Pokedex.$"

FennilahlTown_EventScript_HikerTunnel_Text_1:
# 30 "data//maps/FennilahlTown/scripts.pory"
	.string "You have a Pokedex? Carry on then.$"
