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
# 20 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_0, MSGBOX_YESNO
# 21 "data//maps/Route1_House/scripts.pory"
	release
# 22 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_2
# 50 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_QuestInProgress_Movement_0
# 51 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 52 "data//maps/Route1_House/scripts.pory"
	delay 16
# 53 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_6, MSGBOX_NPC
Route1_House_QuestInProgress_1:
# 56 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_QuestInProgress_2:
# 23 "data//maps/Route1_House/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 24 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_5
# 47 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_5, MSGBOX_NPC
	goto Route1_House_QuestInProgress_1

Route1_House_QuestInProgress_5:
# 25 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_QuestInProgress_Movement_0
# 26 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 27 "data//maps/Route1_House/scripts.pory"
	delay 16
# 29 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_1
# 30 "data//maps/Route1_House/scripts.pory"
	release
# 31 "data//maps/Route1_House/scripts.pory"
	completequest QUEST_ROUTE1_PECHA_BERRY
# 32 "data//maps/Route1_House/scripts.pory"
	release
# 33 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_QuestInProgress_Movement_1
# 34 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 35 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_2
# 36 "data//maps/Route1_House/scripts.pory"
	release
# 37 "data//maps/Route1_House/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 38 "data//maps/Route1_House/scripts.pory"
	applymovement 2, Route1_House_QuestInProgress_Movement_2
# 39 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_3
# 40 "data//maps/Route1_House/scripts.pory"
	release
# 41 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 42 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_4
# 43 "data//maps/Route1_House/scripts.pory"
	release
# 44 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	goto Route1_House_QuestInProgress_1


Route1_House_Reward::
# 61 "data//maps/Route1_House/scripts.pory"
	message Route1_House_Reward_Text_0
# 62 "data//maps/Route1_House/scripts.pory"
	waitmessage
# 63 "data//maps/Route1_House/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route1_House_Reward_Text_1, Route1_House_Reward_Text_2
# 64 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route1_House_Reward_1
# 67 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardB
	return

Route1_House_Reward_1:
# 65 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardA
	return


Route1_House_RewardA::
# 72 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_SHINY_CHARM
# 73 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 74 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardA_Text_0, MSGBOX_YESNO
# 75 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_RewardA_1
# 80 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 81 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	return

Route1_House_RewardA_1:
# 76 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 77 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 78 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardEnd
	return


Route1_House_RewardB::
# 86 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_CATCHING_CHARM
# 87 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 88 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardA_Text_0, MSGBOX_YESNO
# 89 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_RewardB_1
# 94 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 95 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_Reward
	return

Route1_House_RewardB_1:
# 90 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 91 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 92 "data//maps/Route1_House/scripts.pory"
	goto Route1_House_RewardEnd
	return


Route1_House_RewardEnd::
# 100 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RewardEnd_Text_0, MSGBOX_NPC
# 101 "data//maps/Route1_House/scripts.pory"
	releaseall
	end


Route1_House_StartQuest::
# 106 "data//maps/Route1_House/scripts.pory"
	lockall
# 107 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 108 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_0
# 110 "data//maps/Route1_House/scripts.pory"
	setvar VAR_0x8006, ITEM_PECHA_BERRY
# 111 "data//maps/Route1_House/scripts.pory"
	showitemdescription
# 112 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_1, MSGBOX_YESNO
# 114 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_StartQuest_2
# 119 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 120 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_3
Route1_House_StartQuest_1:
# 122 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_StartQuest_2:
# 115 "data//maps/Route1_House/scripts.pory"
	hideitemdescription
# 116 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_2
# 117 "data//maps/Route1_House/scripts.pory"
	startquest QUEST_ROUTE1_PECHA_BERRY
	goto Route1_House_StartQuest_1


Route1_House_Azurill::
# 129 "data//maps/Route1_House/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 130 "data//maps/Route1_House/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ROUTE1_PECHA_BERRY
# 132 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_Azurill_2
# 135 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_1, MSGBOX_NPC
Route1_House_Azurill_1:
	end

Route1_House_Azurill_2:
# 133 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_0, MSGBOX_NPC
	goto Route1_House_Azurill_1


# 25 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_0:
# 25 "data//maps/Route1_House/scripts.pory"
	emote_exclamation_mark
	step_end

# 33 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_1:
# 33 "data//maps/Route1_House/scripts.pory"
	face_right
	step_end

# 38 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_2:
# 38 "data//maps/Route1_House/scripts.pory"
	jump_in_place_down
	step_end

Route1_House_Quest_Done_Text_0:
# 11 "data//maps/Route1_House/scripts.pory"
	.string "I won't let Azurill eat any bad food\n"
	.string "again!$"

Route1_House_QuestInProgress_Text_0:
# 20 "data//maps/Route1_House/scripts.pory"
	.string "Have you brought a Pecha Berry?$"

Route1_House_QuestInProgress_Text_1:
# 29 "data//maps/Route1_House/scripts.pory"
	.string "Why thank you child. So kind of you.$"

Route1_House_QuestInProgress_Text_2:
# 35 "data//maps/Route1_House/scripts.pory"
	.string "Here sweetheart, this kind trainer has\n"
	.string "brought you a Pecha Berry.$"

Route1_House_QuestInProgress_Text_3:
# 39 "data//maps/Route1_House/scripts.pory"
	.string "Zuuu!!!!!\n"
	.string "Azurill has revived!$"

Route1_House_QuestInProgress_Text_4:
# 42 "data//maps/Route1_House/scripts.pory"
	.string "Child, you must have something in\n"
	.string "return. The least I can do.$"

Route1_House_QuestInProgress_Text_5:
# 47 "data//maps/Route1_House/scripts.pory"
	.string "I don't see a Pecha Berry here...please\n"
	.string "come back when you have one.$"

Route1_House_QuestInProgress_Text_6:
# 53 "data//maps/Route1_House/scripts.pory"
	.string "Please hurry - my baby's suffering!$"

Route1_House_Reward_Text_0:
# 61 "data//maps/Route1_House/scripts.pory"
	.string "Which of these would you like?$"

Route1_House_Reward_Text_1:
# 63 "data//maps/Route1_House/scripts.pory"
	.string "Shiny Charm$"

Route1_House_Reward_Text_2:
# 63 "data//maps/Route1_House/scripts.pory"
	.string "Catching Charm$"

Route1_House_RewardA_Text_0:
# 74 "data//maps/Route1_House/scripts.pory"
	.string "Are you sure?$"

Route1_House_RewardEnd_Text_0:
# 100 "data//maps/Route1_House/scripts.pory"
	.string "Thank you kind trainer! I'm going to\n"
	.string "go back to loving my baby.$"

Route1_House_StartQuest_Text_0:
# 108 "data//maps/Route1_House/scripts.pory"
	.string "I think my poor baby Azurill ate\n"
	.string "something bad and now has food\l"
	.string "poisoning! I wish I had a Pecha Berry.\p"
	.string "Say, trainer, good timing!$"

Route1_House_StartQuest_Text_1:
# 112 "data//maps/Route1_House/scripts.pory"
	.string "Would you be willing to find a Pecha\n"
	.string "Berry for my baby?$"

Route1_House_StartQuest_Text_2:
# 116 "data//maps/Route1_House/scripts.pory"
	.string "Oh, thank you so much. You're so kind!\n"
	.string "Azurill and I will be waiting here.$"

Route1_House_StartQuest_Text_3:
# 120 "data//maps/Route1_House/scripts.pory"
	.string "You'd watch Azurill suffer? You're so\n"
	.string "cold-hearted!$"

Route1_House_Azurill_Text_0:
# 133 "data//maps/Route1_House/scripts.pory"
	.string "Azurill looks happy! Must be the love of\n"
	.string "its trainer...or is it the Pecha Berry?$"

Route1_House_Azurill_Text_1:
# 135 "data//maps/Route1_House/scripts.pory"
	.string "Zu...\p"
	.string "Azurill looks quite sick.$"
