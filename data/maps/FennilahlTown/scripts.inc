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
	goto_if_set FLAG_FENNILAHL_CUTEMONGIFT, FennilahlTown_EventScript_Woman_2
# 23 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_1
# 24 "data//maps/FennilahlTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 25 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_CUTEMONGIFT
FennilahlTown_EventScript_Woman_1:
# 27 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	return

FennilahlTown_EventScript_Woman_2:
# 21 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_EventScript_Woman_Text_0
	goto FennilahlTown_EventScript_Woman_1


FennilahlTown_EventScript_HikerTunnel::
# 31 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 32 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
# 34 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_active QUEST_FENNILAHL_HIKER, Fennilahl_Breech_QuestInProgress
# 35 "data//maps/FennilahlTown/scripts.pory"
	goto_if_quest_inactive QUEST_FENNILAHL_HIKER, Fennilahl_Breech_StartQuest
# 37 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end


Fennilahl_Breech_StartQuest::
# 43 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_0, MSGBOX_YESNO
# 45 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Fennilahl_Breech_StartQuest_2
# 50 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_2
Fennilahl_Breech_StartQuest_1:
# 53 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_StartQuest_2:
# 46 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_StartQuest_Text_1
# 48 "data//maps/FennilahlTown/scripts.pory"
	startquest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_StartQuest_1


Fennilahl_Breech_QuestInProgress::
# 59 "data//maps/FennilahlTown/scripts.pory"
	goto_if_set FLAG_FENNILAHL_HIKER_GEAR_GET, Fennilahl_Breech_QuestInProgress_2
# 78 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_5
Fennilahl_Breech_QuestInProgress_1:
# 80 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

Fennilahl_Breech_QuestInProgress_2:
# 60 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_0
# 61 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_1
# 62 "data//maps/FennilahlTown/scripts.pory"
	release
# 63 "data//maps/FennilahlTown/scripts.pory"
	delay 16
# 64 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 65 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_2
# 66 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_3
# 67 "data//maps/FennilahlTown/scripts.pory"
	msgbox Fennilahl_Breech_QuestInProgress_Text_4
# 68 "data//maps/FennilahlTown/scripts.pory"
	release
# 69 "data//maps/FennilahlTown/scripts.pory"
	applymovement 5, Fennilahl_Breech_QuestInProgress_Movement_0
# 70 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 71 "data//maps/FennilahlTown/scripts.pory"
	removeobject 5
# 72 "data//maps/FennilahlTown/scripts.pory"
	setflag FLAG_FENNILAHL_HIKER_BLOCK
# 73 "data//maps/FennilahlTown/scripts.pory"
	removeitem ITEM_STRANGE_ROCK
# 76 "data//maps/FennilahlTown/scripts.pory"
	completequest QUEST_FENNILAHL_HIKER
	goto Fennilahl_Breech_QuestInProgress_1


FennilahlTown_Sign_Entrance::
# 97 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Entrance_Text_0, MSGBOX_SIGN
	end


FennilahlTown_Sign_Route2::
# 102 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Route2_Text_0, MSGBOX_SIGN
	end


FennilahlTown_Sign_Route3::
# 107 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Sign_Route3_Text_0, MSGBOX_SIGN
	end


FennilahlTown_Budew::
# 114 "data//maps/FennilahlTown/scripts.pory"
	lockall
# 115 "data//maps/FennilahlTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 116 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_Movement_0
# 117 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 118 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_Text_0
# 119 "data//maps/FennilahlTown/scripts.pory"
	release
# 121 "data//maps/FennilahlTown/scripts.pory"
	checkitem ITEM_ORAN_BERRY
# 123 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_2
FennilahlTown_Budew_1:
# 142 "data//maps/FennilahlTown/scripts.pory"
	releaseall
	end

FennilahlTown_Budew_2:
# 124 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_Text_1, MSGBOX_YESNO
# 125 "data//maps/FennilahlTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FennilahlTown_Budew_5
	goto FennilahlTown_Budew_1

FennilahlTown_Budew_5:
# 126 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_Movement_1
# 127 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 128 "data//maps/FennilahlTown/scripts.pory"
	delay 12
# 129 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_Text_2, MSGBOX_SIGN
# 130 "data//maps/FennilahlTown/scripts.pory"
	release
# 131 "data//maps/FennilahlTown/scripts.pory"
	applymovement 8, FennilahlTown_Budew_Movement_2
# 132 "data//maps/FennilahlTown/scripts.pory"
	waitmovement 0
# 133 "data//maps/FennilahlTown/scripts.pory"
	msgbox FennilahlTown_Budew_Text_3
# 134 "data//maps/FennilahlTown/scripts.pory"
	release
	goto FennilahlTown_Budew_1


# 69 "data//maps/FennilahlTown/scripts.pory"
Fennilahl_Breech_QuestInProgress_Movement_0:
# 69 "data//maps/FennilahlTown/scripts.pory"
	walk_up
	step_end

# 116 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_Movement_0:
# 116 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 116 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
# 116 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_up
	step_end

# 126 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_Movement_1:
# 126 "data//maps/FennilahlTown/scripts.pory"
	faceplayer
	step_end

# 131 "data//maps/FennilahlTown/scripts.pory"
FennilahlTown_Budew_Movement_2:
# 131 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 131 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
# 131 "data//maps/FennilahlTown/scripts.pory"
	jump_in_place_down
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
# 21 "data//maps/FennilahlTown/scripts.pory"
	.string "If your {PKMN} hold a SOOTHE BELL, they'll\n"
	.string "become attached to you faster!$"

FennilahlTown_EventScript_Woman_Text_1:
# 23 "data//maps/FennilahlTown/scripts.pory"
	.string "My, that's such a cute little {PKMN} you\n"
	.string "have with you! Here, use this and treat\l"
	.string "it with care, okay?$"

Fennilahl_Breech_StartQuest_Text_0:
# 43 "data//maps/FennilahlTown/scripts.pory"
	.string "I found a STRANGE ROCK in the caves\n"
	.string "south of town, but a small PINK {PKMN} took\l"
	.string "it and ran away! And I don't have any\l"
	.string "{PKMN} to help me get it back! I don't want\l"
	.string "to battle - I can't deal with conflict.\p"
	.string "I don't know what to do! Will you help me\n"
	.string "out?$"

Fennilahl_Breech_StartQuest_Text_1:
# 46 "data//maps/FennilahlTown/scripts.pory"
	.string "Amazing! You've answered my prayers. I\n"
	.string "saw the pink {PKMN} run down south,\l"
	.string "towards ROUTE 2. I really liked that\l"
	.string "STRANGE ROCK! Please bring it back.$"

Fennilahl_Breech_StartQuest_Text_2:
# 50 "data//maps/FennilahlTown/scripts.pory"
	.string "Oh, what will I do!$"

Fennilahl_Breech_QuestInProgress_Text_0:
# 60 "data//maps/FennilahlTown/scripts.pory"
	.string "You brought my STRANGE ROCK? Amazing!\n"
	.string "How can I thank you for this?$"

Fennilahl_Breech_QuestInProgress_Text_1:
# 61 "data//maps/FennilahlTown/scripts.pory"
	.string "A CLEFAIRY was keeping it? This is the\n"
	.string "CLEFAIRY? And it's been following you\l"
	.string "around because it can't let go of the\l"
	.string "rock?$"

Fennilahl_Breech_QuestInProgress_Text_2:
# 65 "data//maps/FennilahlTown/scripts.pory"
	.string "CLEFAIRY: clee!!!$"

Fennilahl_Breech_QuestInProgress_Text_3:
# 66 "data//maps/FennilahlTown/scripts.pory"
	.string "Ouch! CLEFAIRY stop! Haha! Alright\n"
	.string "alright, you come along with me then.\l"
	.string "But you're not my {PKMN} okay? I don't like\l"
	.string "battling. You'll be my hiking partner!$"

Fennilahl_Breech_QuestInProgress_Text_4:
# 67 "data//maps/FennilahlTown/scripts.pory"
	.string "Thank you trainer! My name is BREECH.\n"
	.string "I'm just a simple man who loves\l"
	.string "collecting rocks. Even with CLEFAIRY by\l"
	.string "my side, I won't battle. CLEFAIRY and I\l"
	.string "are heading off to explore the\l"
	.string "mountains now. See you again soon!$"

Fennilahl_Breech_QuestInProgress_Text_5:
# 78 "data//maps/FennilahlTown/scripts.pory"
	.string "Why do bad things happen to me?$"

FennilahlTown_Sign_Entrance_Text_0:
# 97 "data//maps/FennilahlTown/scripts.pory"
	.string "FENNILAHL TOWN\n"
	.string "Connecting Mt. Ceram and Vine River.$"

FennilahlTown_Sign_Route2_Text_0:
# 102 "data//maps/FennilahlTown/scripts.pory"
	.string "{DOWN_ARROW}ROUTE 2\n"
	.string "Connecting to Vine River.$"

FennilahlTown_Sign_Route3_Text_0:
# 107 "data//maps/FennilahlTown/scripts.pory"
	.string "{UP_ARROW} UNDERGROUND TUNNEL\n"
	.string "To Route 3 and GASTREE CITY.$"

FennilahlTown_Budew_Text_0:
# 118 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems to want something...$"

FennilahlTown_Budew_Text_1:
# 124 "data//maps/FennilahlTown/scripts.pory"
	.string "Give BUDEW an ORAN BERRY?$"

FennilahlTown_Budew_Text_2:
# 129 "data//maps/FennilahlTown/scripts.pory"
	.string "{PLAYER} gave BUDEW an ORAN BERRY.$"

FennilahlTown_Budew_Text_3:
# 133 "data//maps/FennilahlTown/scripts.pory"
	.string "BUDEW seems happy!$"
