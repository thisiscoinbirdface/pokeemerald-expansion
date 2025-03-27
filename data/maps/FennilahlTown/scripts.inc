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
# 32 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_1
# 33 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_2
# 34 "data//maps/FennilahlTown/scripts.pory"
	release
# 35 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 36 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 37 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_3
# 38 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_4
# 39 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_5
# 40 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, FennilahlTown_EventScript_HikerTunnel_Movement_0
# 41 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 42 "data//maps/FennilahlTown/scripts.pory"
	removeobject 5
# 43 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 44 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_STRANGE_ROCK
# 47 "data//maps/FennilahlTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_FENNILAHL_HIKER
FennilahlTown_EventScript_HikerTunnel_1:
# 49 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	return

FennilahlTown_EventScript_HikerTunnel_2:
# 28 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_HikerTunnel_Text_0
# 30 "data//maps/FennilahlTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_FENNILAHL_HIKER
	goto FennilahlTown_EventScript_HikerTunnel_1


FennilahlTown_Sign_Entrance::
# 54 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Entrance_Text_0, MSGBOX_SIGN
	end


FennilahlTown_Sign_Route2::
# 59 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Route2_Text_0, MSGBOX_SIGN
	end


FennilahlTown_Sign_Route3::
# 64 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Route3_Text_0, MSGBOX_SIGN
	end


# 40 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_EventScript_HikerTunnel_Movement_0:
# 40 "data//maps/FennilahlTown/scripts.pory"
	walk_up
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
	.string "I found a STRANGE ROCK in the caves\n"
	.string "south of town, but a small PINK {PKMN} took\l"
	.string "it and ran away! And I don't have any\l"
	.string "{PKMN} to help me get it back! I don't want\l"
	.string "to battle - I can't deal with conflict.\n"
	.string "I don't know what to do!$"

FennilahlTown_EventScript_HikerTunnel_Text_1:
# 32 "data//maps/FennilahlTown/scripts.pory"
	.string "You brought my STRANGE ROCK? Amazing!\n"
	.string "How can I thank you for this?$"

FennilahlTown_EventScript_HikerTunnel_Text_2:
# 33 "data//maps/FennilahlTown/scripts.pory"
	.string "A CLEFAIRY was keeping it? This is the\n"
	.string "CLEFAIRY? And it's been following you\l"
	.string "around because it can't let go of the\l"
	.string "rock?$"

FennilahlTown_EventScript_HikerTunnel_Text_3:
# 37 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!$"

FennilahlTown_EventScript_HikerTunnel_Text_4:
# 38 "data//maps/FennilahlTown/scripts.pory"
	.string "Ouch! CLEFAIRY stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "But you're not my {PKMN} okay? I don't like\l"
	.string "battling. You'll be my hiking partner!$"

FennilahlTown_EventScript_HikerTunnel_Text_5:
# 39 "data//maps/FennilahlTown/scripts.pory"
	.string "Thank you trainer! My name is Breech.\n"
	.string "I'm just a simple man who loves\l"
	.string "collecting rocks. Even with CLEFAIRY by\l"
	.string "my side, I won't battle. CLEFAIRY and I\l"
	.string "are heading off to explore the\l"
	.string "mountains now. See you again soon!$"

FennilahlTown_Sign_Entrance_Text_0:
# 54 "data//maps/FennilahlTown/scripts.pory"
	.string "FENNILAHL TOWN\n"
	.string "Connecting Mt. Ceram and Vine River.$"

FennilahlTown_Sign_Route2_Text_0:
# 59 "data//maps/FennilahlTown/scripts.pory"
	.string "{DOWN_ARROW}ROUTE 2\n"
	.string "Connecting to Vine River.$"

FennilahlTown_Sign_Route3_Text_0:
# 64 "data//maps/FennilahlTown/scripts.pory"
	.string "{UP_ARROW} UNDERGROUND TUNNEL\n"
	.string "To Route 3 and GASTREE CITY.$"
