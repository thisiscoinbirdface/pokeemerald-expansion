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
	msgbox Route1_House_QuestInProgress_Text_0, MSGBOX_YESNO
# 18 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_2
# 46 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_QuestInProgress_Movement_0
# 47 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 48 "data//maps/Route1_House/scripts.pory"
	delay 16
# 49 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_6, MSGBOX_NPC
Route1_House_QuestInProgress_1:
# 52 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_QuestInProgress_2:
# 19 "data//maps/Route1_House/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 20 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_5
# 43 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_5, MSGBOX_NPC
	goto Route1_House_QuestInProgress_1

Route1_House_QuestInProgress_5:
# 21 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_QuestInProgress_Movement_0
# 22 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 23 "data//maps/Route1_House/scripts.pory"
	delay 16
# 25 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_1
# 26 "data//maps/Route1_House/scripts.pory"
	release
# 27 "data//maps/Route1_House/scripts.pory"
	completequest QUEST_ROUTE1_PECHA_BERRY
# 28 "data//maps/Route1_House/scripts.pory"
	release
# 29 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_QuestInProgress_Movement_1
# 30 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 31 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_2
# 32 "data//maps/Route1_House/scripts.pory"
	release
# 33 "data//maps/Route1_House/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 34 "data//maps/Route1_House/scripts.pory"
	applymovement 2, Route1_House_QuestInProgress_Movement_0
# 35 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_3
# 36 "data//maps/Route1_House/scripts.pory"
	release
# 37 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 38 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_4
# 39 "data//maps/Route1_House/scripts.pory"
	release
# 40 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	goto Route1_House_QuestInProgress_1


Route1_House_Reward::
# 57 "data//maps/Route1_House/scripts.pory"
	message Route1_House_Reward_Text_0
# 58 "data//maps/Route1_House/scripts.pory"
	waitmessage
# 59 "data//maps/Route1_House/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route1_House_Reward_Text_1, Route1_House_Reward_Text_2
# 60 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route1_House_Reward_1
# 63 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardB
	return

Route1_House_Reward_1:
# 61 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardA
	return


Route1_House_RewardA::
# 68 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_SHINY_CHARM
# 69 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 70 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardA_Text_0, MSGBOX_YESNO
# 71 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_RewardA_1
# 76 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 77 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	return

Route1_House_RewardA_1:
# 72 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 73 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 74 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardEnd
	return


Route1_House_RewardB::
# 82 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_CATCHING_CHARM
# 83 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 84 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardA_Text_0, MSGBOX_YESNO
# 85 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_RewardB_1
# 90 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 91 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	return

Route1_House_RewardB_1:
# 86 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 87 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 88 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardEnd
	return


Route1_House_RewardEnd::
# 96 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardEnd_Text_0, MSGBOX_NPC
# 97 "data//maps/Route1_House/scripts.pory"
	releaseall
	end


Route1_House_StartQuest::
# 102 "data//maps/Route1_House/scripts.pory"
	lockall
# 103 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 104 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_0
# 106 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_PECHA_BERRY
# 107 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 108 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_1, MSGBOX_YESNO
# 110 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_StartQuest_2
# 115 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 116 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_3
Route1_House_StartQuest_1:
# 118 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_StartQuest_2:
# 111 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 112 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_2
# 113 "data//maps/Route1_House/scripts.pory"
	startquest QUEST_ROUTE1_PECHA_BERRY
	goto Route1_House_StartQuest_1


Route1_House_Azurill::
# 125 "data//maps/Route1_House/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 126 "data//maps/Route1_House/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ROUTE1_PECHA_BERRY
# 128 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_Azurill_2
# 131 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_1, MSGBOX_NPC
Route1_House_Azurill_1:
	end

Route1_House_Azurill_2:
# 129 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_0, MSGBOX_NPC
	goto Route1_House_Azurill_1


# 21 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_0:
# 21 "data//maps/Route1_House/scripts.pory"
	jump_in_place_down
	step_end

# 29 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_1:
# 29 "data//maps/Route1_House/scripts.pory"
	face_right
	step_end

Route1_House_Quest_Done_Text_0:
# 11 "data//maps/Route1_House/scripts.pory"
	.string "I won't let Azurill eat any bad food\n"
	.string "again!$"

Route1_House_QuestInProgress_Text_0:
# 17 "data//maps/Route1_House/scripts.pory"
	.string "Have you brought a Pecha Berry?$"

Route1_House_QuestInProgress_Text_1:
# 25 "data//maps/Route1_House/scripts.pory"
	.string "Why thank you child. So kind of you.$"

Route1_House_QuestInProgress_Text_2:
# 31 "data//maps/Route1_House/scripts.pory"
	.string "Here sweetheart, this kind trainer has\n"
	.string "brought you a Pecha Berry.$"

Route1_House_QuestInProgress_Text_3:
# 35 "data//maps/Route1_House/scripts.pory"
	.string "Zuuu!!!!!\n"
	.string "Azurill has revived!$"

Route1_House_QuestInProgress_Text_4:
# 38 "data//maps/Route1_House/scripts.pory"
	.string "Child, you must have something in\n"
	.string "return. The least I can do.$"

Route1_House_QuestInProgress_Text_5:
# 43 "data//maps/Route1_House/scripts.pory"
	.string "I don't see a Pecha Berry here...please\n"
	.string "come back when you have one.$"

Route1_House_QuestInProgress_Text_6:
# 49 "data//maps/Route1_House/scripts.pory"
	.string "Please hurry - my baby's suffering!$"

Route1_House_Reward_Text_0:
# 57 "data//maps/Route1_House/scripts.pory"
	.string "Which of these would you like?$"

Route1_House_Reward_Text_1:
# 59 "data//maps/Route1_House/scripts.pory"
	.string "Shiny Charm$"

Route1_House_Reward_Text_2:
# 59 "data//maps/Route1_House/scripts.pory"
	.string "Catching Charm$"

Route1_House_RewardA_Text_0:
# 70 "data//maps/Route1_House/scripts.pory"
	.string "Are you sure?$"

Route1_House_RewardEnd_Text_0:
# 96 "data//maps/Route1_House/scripts.pory"
	.string "Thank you kind trainer! I'm now going to\n"
	.string "go back to loving my baby.$"

Route1_House_StartQuest_Text_0:
# 104 "data//maps/Route1_House/scripts.pory"
	.string "I think my poor baby Azurill ate\n"
	.string "something bad and now has food\l"
	.string "poisoning! I wish I had a Pecha Berry.\p"
	.string "Say, trainer, good timing!$"

Route1_House_StartQuest_Text_1:
# 108 "data//maps/Route1_House/scripts.pory"
	.string "Would you be willing to find a Pecha\n"
	.string "Berry for my baby?$"

Route1_House_StartQuest_Text_2:
# 112 "data//maps/Route1_House/scripts.pory"
	.string "Oh, thank you so much. You're so kind!\n"
	.string "Azurill and I will be waiting here.$"

Route1_House_StartQuest_Text_3:
# 116 "data//maps/Route1_House/scripts.pory"
	.string "You'd watch Azurill suffer? You're so\n"
	.string "cold-hearted!$"

Route1_House_Azurill_Text_0:
# 129 "data//maps/Route1_House/scripts.pory"
	.string "Azurill looks full of joy! Must be the\n"
	.string "love of its trainer...or is it the Pecha\l"
	.string "Berry?$"

Route1_House_Azurill_Text_1:
# 131 "data//maps/Route1_House/scripts.pory"
	.string "Zu...\p"
	.string "Azurill looks quite sick.$"
