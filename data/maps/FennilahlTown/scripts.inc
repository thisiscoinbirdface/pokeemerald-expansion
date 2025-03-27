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
# 28 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_active QUEST_FENNILAHL_HIKER, Fennilahl_Breech_QuestInProgress
# 29 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_inactive QUEST_FENNILAHL_HIKER, Fennilahl_Breech_StartQuest
# 31 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end


Fennilahl_Breech_StartQuest::
# 37 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_0, MSGBOX_YESNO
# 39 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Fennilahl_Breech_StartQuest_2
# 44 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_2
Fennilahl_Breech_StartQuest_1:
# 47 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_StartQuest_2:
# 40 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_1
# 42 "data//maps/FennilahlTown/scripts.pory"
	startquest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_StartQuest_1


Fennilahl_Breech_QuestInProgress::
# 53 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Fennilahl_Breech_QuestInProgress_2
# 72 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_5
Fennilahl_Breech_QuestInProgress_1:
# 74 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_QuestInProgress_2:
# 54 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_0
# 55 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_1
# 56 "data//maps/FennilahlTown/scripts.pory"
	release
# 57 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 58 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 59 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_2
# 60 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_3
# 61 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_4
# 62 "data//maps/FennilahlTown/scripts.pory"
	release
# 63 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, Fennilahl_Breech_QuestInProgress_Movement_0
# 64 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 65 "data//maps/FennilahlTown/scripts.pory"
	removeobject 5
# 66 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 67 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_STRANGE_ROCK
# 70 "data//maps/FennilahlTown/scripts.pory"
	completequest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_QuestInProgress_1


FennilahlTown_Sign_Entrance::
# 91 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Entrance_Text_0, MSGBOX_SIGN
	end


FennilahlTown_Sign_Route2::
# 96 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Route2_Text_0, MSGBOX_SIGN
	end


FennilahlTown_Sign_Route3::
# 101 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Route3_Text_0, MSGBOX_SIGN
	end


# 63 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_0:
# 63 "data//maps/FennilahlTown/scripts.pory"
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

Fennilahl_Breech_StartQuest_Text_0:
# 37 "data//maps/FennilahlTown/scripts.pory"
	.string "I found a STRANGE ROCK in the caves\n"
	.string "south of town, but a small PINK {PKMN} took\l"
	.string "it and ran away! And I don't have any\l"
	.string "{PKMN} to help me get it back! I don't want\l"
	.string "to battle - I can't deal with conflict.\p"
	.string "I don't know what to do! Will you help me\n"
	.string "out?$"

Fennilahl_Breech_StartQuest_Text_1:
# 40 "data//maps/FennilahlTown/scripts.pory"
	.string "Amazing! You've answered my prayers. I\n"
	.string "saw the pink {PKMN} run down south,\l"
	.string "towards ROUTE 2. I really liked that\l"
	.string "STRANGE ROCK! Please bring it back.$"

Fennilahl_Breech_StartQuest_Text_2:
# 44 "data//maps/FennilahlTown/scripts.pory"
	.string "Oh, what will I do!$"

Fennilahl_Breech_QuestInProgress_Text_0:
# 54 "data//maps/FennilahlTown/scripts.pory"
	.string "You brought my STRANGE ROCK? Amazing!\n"
	.string "How can I thank you for this?$"

Fennilahl_Breech_QuestInProgress_Text_1:
# 55 "data//maps/FennilahlTown/scripts.pory"
	.string "A CLEFAIRY was keeping it? This is the\n"
	.string "CLEFAIRY? And it's been following you\l"
	.string "around because it can't let go of the\l"
	.string "rock?$"

Fennilahl_Breech_QuestInProgress_Text_2:
# 59 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!$"

Fennilahl_Breech_QuestInProgress_Text_3:
# 60 "data//maps/FennilahlTown/scripts.pory"
	.string "Ouch! CLEFAIRY stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "But you're not my {PKMN} okay? I don't like\l"
	.string "battling. You'll be my hiking partner!$"

Fennilahl_Breech_QuestInProgress_Text_4:
# 61 "data//maps/FennilahlTown/scripts.pory"
	.string "Thank you trainer! My name is BREECH.\n"
	.string "I'm just a simple man who loves\l"
	.string "collecting rocks. Even with CLEFAIRY by\l"
	.string "my side, I won't battle. CLEFAIRY and I\l"
	.string "are heading off to explore the\l"
	.string "mountains now. See you again soon!$"

Fennilahl_Breech_QuestInProgress_Text_5:
# 72 "data//maps/FennilahlTown/scripts.pory"
	.string "Why do bad things happen to me?$"

FennilahlTown_Sign_Entrance_Text_0:
# 91 "data//maps/FennilahlTown/scripts.pory"
	.string "FENNILAHL TOWN\n"
	.string "Connecting Mt. Ceram and Vine River.$"

FennilahlTown_Sign_Route2_Text_0:
# 96 "data//maps/FennilahlTown/scripts.pory"
	.string "{DOWN_ARROW}ROUTE 2\n"
	.string "Connecting to Vine River.$"

FennilahlTown_Sign_Route3_Text_0:
# 101 "data//maps/FennilahlTown/scripts.pory"
	.string "{UP_ARROW} UNDERGROUND TUNNEL\n"
	.string "To Route 3 and GASTREE CITY.$"
