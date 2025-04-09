Route1_House_MapScripts::
	.byte 0


Route1_House_RandomDude::
# 4 "data//maps/Route1_House/scripts.pory"
	lockall
# 5 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 7 "data//maps/Route1_House/scripts.pory"
	goto_if_quest_complete QUEST_ROUTE1_PECHA_BERRY, Route1_House_Quest_Done
# 8 "data//maps/Route1_House/scripts.pory"
	goto_if_quest_active QUEST_ROUTE1_PECHA_BERRY, Route1_House_QuestInProgress
# 9 "data//maps/Route1_House/scripts.pory"
	goto_if_quest_inactive QUEST_ROUTE1_PECHA_BERRY, Route1_House_StartQuest
# 11 "data//maps/Route1_House/scripts.pory"
	releaseall
	end


Route1_House_Quest_Done::
# 16 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Quest_Done_Text_0
# 17 "data//maps/Route1_House/scripts.pory"
	releaseall
	end


Route1_House_QuestInProgress::
# 23 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_0, MSGBOX_YESNO
# 24 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_2
# 54 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_9
Route1_House_QuestInProgress_1:
# 57 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_QuestInProgress_2:
# 25 "data//maps/Route1_House/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 26 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_5
# 51 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_8
	goto Route1_House_QuestInProgress_1

Route1_House_QuestInProgress_5:
# 27 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_1
# 28 "data//maps/Route1_House/scripts.pory"
	release
# 29 "data//maps/Route1_House/scripts.pory"
	completequest QUEST_ROUTE1_PECHA_BERRY
# 30 "data//maps/Route1_House/scripts.pory"
	release
# 31 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_QuestInProgress_Movement_0
# 32 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 33 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_2
# 34 "data//maps/Route1_House/scripts.pory"
	release
# 35 "data//maps/Route1_House/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 36 "data//maps/Route1_House/scripts.pory"
	applymovement 2, Route1_House_QuestInProgress_Movement_1
# 37 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_3
# 38 "data//maps/Route1_House/scripts.pory"
	release
# 39 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 40 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_4
# 41 "data//maps/Route1_House/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route1_House_QuestInProgress_Text_5, Route1_House_QuestInProgress_Text_6
# 42 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route1_House_QuestInProgress_9
# 45 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
Route1_House_QuestInProgress_8:
# 47 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_7
# 48 "data//maps/Route1_House/scripts.pory"
	release
	goto Route1_House_QuestInProgress_1

Route1_House_QuestInProgress_9:
# 43 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_SHINY_CHARM
	goto Route1_House_QuestInProgress_8


Route1_House_StartQuest::
# 62 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_0, MSGBOX_YESNO
# 64 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_StartQuest_2
# 68 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_2
Route1_House_StartQuest_1:
# 70 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_StartQuest_2:
# 65 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_1
# 66 "data//maps/Route1_House/scripts.pory"
	startquest QUEST_ROUTE1_PECHA_BERRY
	goto Route1_House_StartQuest_1


Route1_House_Azurill::
# 77 "data//maps/Route1_House/scripts.pory"
	lockall
# 78 "data//maps/Route1_House/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 79 "data//maps/Route1_House/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ROUTE1_PECHA_BERRY
# 81 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_Azurill_2
# 84 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_1
Route1_House_Azurill_1:
# 86 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_Azurill_2:
# 82 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_0
	goto Route1_House_Azurill_1


# 31 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_0:
# 31 "data//maps/Route1_House/scripts.pory"
	face_right
	step_end

# 36 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_1:
# 36 "data//maps/Route1_House/scripts.pory"
	jump_in_place_down
	step_end

Route1_House_Quest_Done_Text_0:
# 16 "data//maps/Route1_House/scripts.pory"
	.string "I won't let AZURILL eat any bad food\n"
	.string "again!$"

Route1_House_QuestInProgress_Text_0:
# 23 "data//maps/Route1_House/scripts.pory"
	.string "Have you brought a PECHA BERRY?$"

Route1_House_QuestInProgress_Text_1:
# 27 "data//maps/Route1_House/scripts.pory"
	.string "Why thank you child. So kind of you.$"

Route1_House_QuestInProgress_Text_2:
# 33 "data//maps/Route1_House/scripts.pory"
	.string "Here sweetheart, this kind trainer has\n"
	.string "brought you a PECHA BERRY.$"

Route1_House_QuestInProgress_Text_3:
# 37 "data//maps/Route1_House/scripts.pory"
	.string "AZURILL: zuuu!!!!!\n"
	.string "It seems to have revived!$"

Route1_House_QuestInProgress_Text_4:
# 40 "data//maps/Route1_House/scripts.pory"
	.string "Child, you must have something in\n"
	.string "return. The least I can do. Which of\l"
	.string "these would you like? The Shiny Charm\l"
	.string "increases your chances of catching a\l"
	.string "shiny Pokemon, and the Catching Charm\l"
	.string "increases your chances of catching a\l"
	.string "Pokemon on the first bounce!$"

Route1_House_QuestInProgress_Text_5:
# 41 "data//maps/Route1_House/scripts.pory"
	.string "SHINY CHARM$"

Route1_House_QuestInProgress_Text_6:
# 41 "data//maps/Route1_House/scripts.pory"
	.string "CATCHING CHARM$"

Route1_House_QuestInProgress_Text_7:
# 47 "data//maps/Route1_House/scripts.pory"
	.string "Thank you kind trainer! I'm now going to\n"
	.string "go back to loving my baby.$"

Route1_House_QuestInProgress_Text_8:
# 51 "data//maps/Route1_House/scripts.pory"
	.string "I don't see a PECHA BERRY here...please\n"
	.string "come back when you have one.$"

Route1_House_QuestInProgress_Text_9:
# 54 "data//maps/Route1_House/scripts.pory"
	.string "Please hurry - my baby's suffering!$"

Route1_House_StartQuest_Text_0:
# 62 "data//maps/Route1_House/scripts.pory"
	.string "I think my poor baby AZURILL ate\n"
	.string "something bad and now has food\l"
	.string "poisoning! I wish I had a PECHA BERRY to\l"
	.string "cure her. Say, trainer, good timing.\l"
	.string "Would you be willing to find a PECHA\l"
	.string "BERRY for my baby?$"

Route1_House_StartQuest_Text_1:
# 65 "data//maps/Route1_House/scripts.pory"
	.string "Oh, thank you so much. You're very kind.\n"
	.string "I'll be waiting here.$"

Route1_House_StartQuest_Text_2:
# 68 "data//maps/Route1_House/scripts.pory"
	.string "You'd watch AZURILL suffer? You're so\n"
	.string "cold-hearted!$"

Route1_House_Azurill_Text_0:
# 82 "data//maps/Route1_House/scripts.pory"
	.string "AZURILL looks full of joy! Must be the\n"
	.string "love of its trainer...or is it my PECHA\l"
	.string "BERRY?$"

Route1_House_Azurill_Text_1:
# 84 "data//maps/Route1_House/scripts.pory"
	.string "AZURILL: zu...\p"
	.string "AZURILL looks quite sick.$"
