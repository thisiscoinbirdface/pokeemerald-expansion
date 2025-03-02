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
	goto_if_unset FLAG_FENNILAHL_HIKER_GEAR_GET, FennilahlTown_EventScript_HikerTunnel_2
# 30 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_1
# 31 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_2
# 32 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_3
# 33 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_4
# 34 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_5
# 35 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, FennilahlTown_EventScript_HikerTunnel_Movement_0
# 36 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 37 "data//maps/FennilahlTown/scripts.pory"
	removeobject 5
# 38 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 39 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_HIKING_GEAR
FennilahlTown_EventScript_HikerTunnel_1:
# 41 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	return

FennilahlTown_EventScript_HikerTunnel_2:
# 28 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_0
	goto FennilahlTown_EventScript_HikerTunnel_1


FennilahlTown_Sign_Entrance::
# 46 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Entrance_Text_0, MSGBOX_SIGN
	end


FennilahlTown_Sign_Route2::
# 51 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Route2_Text_0, MSGBOX_SIGN
	end


FennilahlTown_Sign_Route3::
# 56 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Route3_Text_0, MSGBOX_SIGN
	end


# 35 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_EventScript_HikerTunnel_Movement_0:
# 35 "data//maps/FennilahlTown/scripts.pory"
	face_up
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
	.string "I can't go inside the cave without my\n"
	.string "HIKING GEAR! I lost in the caves south\l"
	.string "of town - a small PINK {PKMN} took it and\l"
	.string "ran away! And I don't have any {PKMN} to\l"
	.string "help me get it back! I don't know what\l"
	.string "to do!$"

FennilahlTown_EventScript_HikerTunnel_Text_1:
# 30 "data//maps/FennilahlTown/scripts.pory"
	.string "You brought my HIKING GEAR? Amazing!\n"
	.string "How can I thank you for this?$"

FennilahlTown_EventScript_HikerTunnel_Text_2:
# 31 "data//maps/FennilahlTown/scripts.pory"
	.string "A Clefairy was keeping it? This is the\n"
	.string "Clefairy? And it's been following you\l"
	.string "around because it can't let go?$"

FennilahlTown_EventScript_HikerTunnel_Text_3:
# 32 "data//maps/FennilahlTown/scripts.pory"
	.string "Clefairy: clee!!!$"

FennilahlTown_EventScript_HikerTunnel_Text_4:
# 33 "data//maps/FennilahlTown/scripts.pory"
	.string "Ouch! Clefairy stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "Looks like I found both my HIKING GEAR\l"
	.string "and a hiking partner!$"

FennilahlTown_EventScript_HikerTunnel_Text_5:
# 34 "data//maps/FennilahlTown/scripts.pory"
	.string "We're off then! Thank you trainer! My\n"
	.string "name is Breech. Clefairy and I hope to\l"
	.string "see you again soon.$"

FennilahlTown_Sign_Entrance_Text_0:
# 46 "data//maps/FennilahlTown/scripts.pory"
	.string "FENNILAHL TOWN\n"
	.string "Connecting Mt. Ceram and Vine River.$"

FennilahlTown_Sign_Route2_Text_0:
# 51 "data//maps/FennilahlTown/scripts.pory"
	.string "{DOWN_ARROW}ROUTE 2\n"
	.string "Connecting to Vine River.$"

FennilahlTown_Sign_Route3_Text_0:
# 56 "data//maps/FennilahlTown/scripts.pory"
	.string "{UP_ARROW}UNDERGROUND TUNNEL\n"
	.string "Connecting to Route 3.$"
