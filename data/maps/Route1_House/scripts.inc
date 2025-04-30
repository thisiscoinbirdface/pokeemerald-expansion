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
	msgbox Route1_House_QuestInProgress_Text_0, MSGBOX_NPC
# 18 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_1, MSGBOX_YESNO
# 19 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_2
# 43 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_7, MSGBOX_NPC
Route1_House_QuestInProgress_1:
# 46 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_QuestInProgress_2:
# 20 "data//maps/Route1_House/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 21 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_5
# 40 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_6, MSGBOX_NPC
	goto Route1_House_QuestInProgress_1

Route1_House_QuestInProgress_5:
# 22 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_2
# 23 "data//maps/Route1_House/scripts.pory"
	release
# 24 "data//maps/Route1_House/scripts.pory"
	completequest QUEST_ROUTE1_PECHA_BERRY
# 25 "data//maps/Route1_House/scripts.pory"
	release
# 26 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_QuestInProgress_Movement_0
# 27 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 28 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_3
# 29 "data//maps/Route1_House/scripts.pory"
	release
# 30 "data//maps/Route1_House/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 31 "data//maps/Route1_House/scripts.pory"
	applymovement 2, Route1_House_QuestInProgress_Movement_1
# 32 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_4
# 33 "data//maps/Route1_House/scripts.pory"
	release
# 34 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 35 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_5
# 36 "data//maps/Route1_House/scripts.pory"
	release
# 37 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	goto Route1_House_QuestInProgress_1


Route1_House_Reward::
# 51 "data//maps/Route1_House/scripts.pory"
	message Route1_House_Reward_Text_0
# 52 "data//maps/Route1_House/scripts.pory"
	waitmessage
# 53 "data//maps/Route1_House/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route1_House_Reward_Text_1, Route1_House_Reward_Text_2
# 54 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route1_House_Reward_1
# 57 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardB
	return

Route1_House_Reward_1:
# 55 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardA
	return


Route1_House_RewardA::
# 62 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_SHINY_CHARM
# 63 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 64 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardA_Text_0, MSGBOX_YESNO
# 65 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_RewardA_1
# 70 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 71 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	return

Route1_House_RewardA_1:
# 66 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 67 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 68 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardEnd
	return


Route1_House_RewardB::
# 76 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_CATCHING_CHARM
# 77 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 78 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardA_Text_0, MSGBOX_YESNO
# 79 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_RewardB_1
# 84 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 85 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	return

Route1_House_RewardB_1:
# 80 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 81 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 82 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardEnd
	return


Route1_House_RewardEnd::
# 90 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardEnd_Text_0, MSGBOX_NPC
# 91 "data//maps/Route1_House/scripts.pory"
	releaseall
	end


Route1_House_StartQuest::
# 96 "data//maps/Route1_House/scripts.pory"
	lockall
# 97 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 98 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_0
# 100 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_PECHA_BERRY
# 101 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 102 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_1, MSGBOX_YESNO
# 104 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_StartQuest_2
# 109 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 110 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_3
Route1_House_StartQuest_1:
# 112 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_StartQuest_2:
# 105 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 106 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_2
# 107 "data//maps/Route1_House/scripts.pory"
	startquest QUEST_ROUTE1_PECHA_BERRY
	goto Route1_House_StartQuest_1


Route1_House_Azurill::
# 119 "data//maps/Route1_House/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 120 "data//maps/Route1_House/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ROUTE1_PECHA_BERRY
# 122 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_Azurill_2
# 125 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_1, MSGBOX_NPC
Route1_House_Azurill_1:
	end

Route1_House_Azurill_2:
# 123 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_0, MSGBOX_NPC
	goto Route1_House_Azurill_1


# 26 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_0:
# 26 "data//maps/Route1_House/scripts.pory"
	face_right
	step_end

# 31 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_1:
# 31 "data//maps/Route1_House/scripts.pory"
	jump_in_place_down
	step_end

Route1_House_Quest_Done_Text_0:
# 11 "data//maps/Route1_House/scripts.pory"
	.string "I won't let Azurill eat any bad food\n"
	.string "again!$"

Route1_House_QuestInProgress_Text_0:
# 17 "data//maps/Route1_House/scripts.pory"
	.string "Ah, trainer, welcome back! Azurill and I\n"
	.string "have been waiting for you.$"

Route1_House_QuestInProgress_Text_1:
# 18 "data//maps/Route1_House/scripts.pory"
	.string "Have you brought a Pecha Berry?$"

Route1_House_QuestInProgress_Text_2:
# 22 "data//maps/Route1_House/scripts.pory"
	.string "Why thank you child. So kind of you.$"

Route1_House_QuestInProgress_Text_3:
# 28 "data//maps/Route1_House/scripts.pory"
	.string "Here sweetheart, this kind trainer has\n"
	.string "brought you a Pecha Berry.$"

Route1_House_QuestInProgress_Text_4:
# 32 "data//maps/Route1_House/scripts.pory"
	.string "Zuuu!!!!!\n"
	.string "Azurill has revived!$"

Route1_House_QuestInProgress_Text_5:
# 35 "data//maps/Route1_House/scripts.pory"
	.string "Child, you must have something in\n"
	.string "return. The least I can do.$"

Route1_House_QuestInProgress_Text_6:
# 40 "data//maps/Route1_House/scripts.pory"
	.string "I don't see a Pecha Berry here...please\n"
	.string "come back when you have one.$"

Route1_House_QuestInProgress_Text_7:
# 43 "data//maps/Route1_House/scripts.pory"
	.string "Please hurry - my baby's suffering!$"

Route1_House_Reward_Text_0:
# 51 "data//maps/Route1_House/scripts.pory"
	.string "Which of these would you like?$"

Route1_House_Reward_Text_1:
# 53 "data//maps/Route1_House/scripts.pory"
	.string "Shiny Charm$"

Route1_House_Reward_Text_2:
# 53 "data//maps/Route1_House/scripts.pory"
	.string "Catching Charm$"

Route1_House_RewardA_Text_0:
# 64 "data//maps/Route1_House/scripts.pory"
	.string "Are you sure?$"

Route1_House_RewardEnd_Text_0:
# 90 "data//maps/Route1_House/scripts.pory"
	.string "Thank you kind trainer! I'm now going to\n"
	.string "go back to loving my baby.$"

Route1_House_StartQuest_Text_0:
# 98 "data//maps/Route1_House/scripts.pory"
	.string "I think my poor baby Azurill ate\n"
	.string "something bad and now has food\l"
	.string "poisoning! I wish I had a Pecha Berry.\p"
	.string "Say, trainer, good timing!$"

Route1_House_StartQuest_Text_1:
# 102 "data//maps/Route1_House/scripts.pory"
	.string "Would you be willing to find a Pecha\n"
	.string "Berry for my baby?$"

Route1_House_StartQuest_Text_2:
# 106 "data//maps/Route1_House/scripts.pory"
	.string "Oh, thank you so much. You're very kind.\n"
	.string "I'll be waiting here.$"

Route1_House_StartQuest_Text_3:
# 110 "data//maps/Route1_House/scripts.pory"
	.string "You'd watch Azurill suffer? You're so\n"
	.string "cold-hearted!$"

Route1_House_Azurill_Text_0:
# 123 "data//maps/Route1_House/scripts.pory"
	.string "Azurill looks full of joy! Must be the\n"
	.string "love of its trainer...or is it the Pecha\l"
	.string "Berry?$"

Route1_House_Azurill_Text_1:
# 125 "data//maps/Route1_House/scripts.pory"
	.string "Zu...\p"
	.string "Azurill looks quite sick.$"
