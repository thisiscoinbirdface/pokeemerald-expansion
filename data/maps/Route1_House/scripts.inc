Route1_House_MapScripts::
	.byte 0


Route1_House_RandomDude::
# 4 "data//maps/Route1_House/scripts.pory"
	goto_if_quest_complete QUEST_ROUTE1_PECHA_BERRY, Route1_House_Quest_Done
# 5 "data//maps/Route1_House/scripts.pory"
	goto_if_quest_active QUEST_ROUTE1_PECHA_BERRY, Route1_House_QuestInProgress
# 6 "data//maps/Route1_House/scripts.pory"
	goto_if_quest_inactive QUEST_ROUTE1_PECHA_BERRY, Route1_House_StartQuest
	end


Route1_House_Quest_Done::
# 11 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Quest_Done_Text_0, MSGBOX_NPC
	end


Route1_House_QuestInProgress::
# 17 "data//maps/Route1_House/scripts.pory"
	lockall
# 18 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 19 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_0, MSGBOX_YESNO
# 20 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_2
# 44 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_6
Route1_House_QuestInProgress_1:
# 47 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_QuestInProgress_2:
# 21 "data//maps/Route1_House/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 22 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_5
# 41 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_5
	goto Route1_House_QuestInProgress_1

Route1_House_QuestInProgress_5:
# 23 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_1
# 24 "data//maps/Route1_House/scripts.pory"
	release
# 25 "data//maps/Route1_House/scripts.pory"
	completequest QUEST_ROUTE1_PECHA_BERRY
# 26 "data//maps/Route1_House/scripts.pory"
	release
# 27 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_QuestInProgress_Movement_0
# 28 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 29 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_2
# 30 "data//maps/Route1_House/scripts.pory"
	release
# 31 "data//maps/Route1_House/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 32 "data//maps/Route1_House/scripts.pory"
	applymovement 2, Route1_House_QuestInProgress_Movement_1
# 33 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_3
# 34 "data//maps/Route1_House/scripts.pory"
	release
# 35 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 36 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_4
# 37 "data//maps/Route1_House/scripts.pory"
	release
# 38 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	goto Route1_House_QuestInProgress_1


Route1_House_Reward::
# 52 "data//maps/Route1_House/scripts.pory"
	message Route1_House_Reward_Text_0
# 53 "data//maps/Route1_House/scripts.pory"
	waitmessage
# 54 "data//maps/Route1_House/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route1_House_Reward_Text_1, Route1_House_Reward_Text_2
# 55 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route1_House_Reward_1
# 58 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardB
	return

Route1_House_Reward_1:
# 56 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardA
	return


Route1_House_RewardA::
# 63 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_SHINY_CHARM
# 64 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 65 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardA_Text_0, MSGBOX_YESNO
# 66 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_RewardA_1
# 71 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 72 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	return

Route1_House_RewardA_1:
# 67 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 68 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 69 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardEnd
	return


Route1_House_RewardB::
# 77 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_CATCHING_CHARM
# 78 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 79 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardA_Text_0, MSGBOX_YESNO
# 80 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_RewardB_1
# 85 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 86 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	return

Route1_House_RewardB_1:
# 81 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 82 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 83 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardEnd
	return


Route1_House_RewardEnd::
# 91 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardEnd_Text_0, MSGBOX_NPC
# 92 "data//maps/Route1_House/scripts.pory"
	releaseall
	end


Route1_House_StartQuest::
# 97 "data//maps/Route1_House/scripts.pory"
	lockall
# 98 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 99 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_0
# 101 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_PECHA_BERRY
# 102 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 103 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_1, MSGBOX_YESNO
# 105 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_StartQuest_2
# 110 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 111 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_3
Route1_House_StartQuest_1:
# 113 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_StartQuest_2:
# 106 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 107 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_2
# 108 "data//maps/Route1_House/scripts.pory"
	startquest QUEST_ROUTE1_PECHA_BERRY
	goto Route1_House_StartQuest_1


Route1_House_Azurill::
# 120 "data//maps/Route1_House/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 121 "data//maps/Route1_House/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ROUTE1_PECHA_BERRY
# 123 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_Azurill_2
# 126 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_1, MSGBOX_NPC
Route1_House_Azurill_1:
	end

Route1_House_Azurill_2:
# 124 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_0, MSGBOX_NPC
	goto Route1_House_Azurill_1


# 27 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_0:
# 27 "data//maps/Route1_House/scripts.pory"
	face_right
	step_end

# 32 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_1:
# 32 "data//maps/Route1_House/scripts.pory"
	jump_in_place_down
	step_end

Route1_House_Quest_Done_Text_0:
# 11 "data//maps/Route1_House/scripts.pory"
	.string "I won't let Azurill eat any bad food\n"
	.string "again!$"

Route1_House_QuestInProgress_Text_0:
# 19 "data//maps/Route1_House/scripts.pory"
	.string "Have you brought a Pecha Berry?$"

Route1_House_QuestInProgress_Text_1:
# 23 "data//maps/Route1_House/scripts.pory"
	.string "Why thank you child. So kind of you.$"

Route1_House_QuestInProgress_Text_2:
# 29 "data//maps/Route1_House/scripts.pory"
	.string "Here sweetheart, this kind trainer has\n"
	.string "brought you a Pecha Berry.$"

Route1_House_QuestInProgress_Text_3:
# 33 "data//maps/Route1_House/scripts.pory"
	.string "AZURILL: zuuu!!!!!\n"
	.string "It seems to have revived!$"

Route1_House_QuestInProgress_Text_4:
# 36 "data//maps/Route1_House/scripts.pory"
	.string "Child, you must have something in\n"
	.string "return. The least I can do.$"

Route1_House_QuestInProgress_Text_5:
# 41 "data//maps/Route1_House/scripts.pory"
	.string "I don't see a Pecha Berry here...please\n"
	.string "come back when you have one.$"

Route1_House_QuestInProgress_Text_6:
# 44 "data//maps/Route1_House/scripts.pory"
	.string "Please hurry - my baby's suffering!$"

Route1_House_Reward_Text_0:
# 52 "data//maps/Route1_House/scripts.pory"
	.string "Which of these would you like?$"

Route1_House_Reward_Text_1:
# 54 "data//maps/Route1_House/scripts.pory"
	.string "SHINY CHARM$"

Route1_House_Reward_Text_2:
# 54 "data//maps/Route1_House/scripts.pory"
	.string "CATCHING CHARM$"

Route1_House_RewardA_Text_0:
# 65 "data//maps/Route1_House/scripts.pory"
	.string "Are you sure?$"

Route1_House_RewardEnd_Text_0:
# 91 "data//maps/Route1_House/scripts.pory"
	.string "Thank you kind trainer! I'm now going to\n"
	.string "go back to loving my baby.$"

Route1_House_StartQuest_Text_0:
# 99 "data//maps/Route1_House/scripts.pory"
	.string "I think my poor baby Azurill ate\n"
	.string "something bad and now has food\l"
	.string "poisoning! I wish I had a Pecha Berry to\l"
	.string "cure her. Say, trainer, good timing.$"

Route1_House_StartQuest_Text_1:
# 103 "data//maps/Route1_House/scripts.pory"
	.string "Would you be willing to find a Pecha\n"
	.string "Berry for my baby?$"

Route1_House_StartQuest_Text_2:
# 107 "data//maps/Route1_House/scripts.pory"
	.string "Oh, thank you so much. You're very kind.\n"
	.string "I'll be waiting here.$"

Route1_House_StartQuest_Text_3:
# 111 "data//maps/Route1_House/scripts.pory"
	.string "You'd watch Azurill suffer? You're so\n"
	.string "cold-hearted!$"

Route1_House_Azurill_Text_0:
# 124 "data//maps/Route1_House/scripts.pory"
	.string "Azurill looks full of joy! Must be the\n"
	.string "love of its trainer...or is it the Pecha\l"
	.string "Berry?$"

Route1_House_Azurill_Text_1:
# 126 "data//maps/Route1_House/scripts.pory"
	.string "Zu...\p"
	.string "Azurill looks quite sick.$"
