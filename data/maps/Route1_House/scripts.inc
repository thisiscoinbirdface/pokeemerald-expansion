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
	return


Route1_House_QuestInProgress::
# 15 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_0, MSGBOX_YESNO
# 16 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_1
# 35 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_6
	return

Route1_House_QuestInProgress_1:
# 17 "data//maps/Route1_House/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 18 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_4
# 32 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_5
	return

Route1_House_QuestInProgress_4:
# 19 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_1
# 20 "data//maps/Route1_House/scripts.pory"
	release
# 21 "data//maps/Route1_House/scripts.pory"
	completequest QUEST_ROUTE1_PECHA_BERRY
# 22 "data//maps/Route1_House/scripts.pory"
	release
# 23 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_QuestInProgress_Movement_0
# 24 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 25 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_2
# 26 "data//maps/Route1_House/scripts.pory"
	release
# 27 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 28 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_3
# 29 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_TM_RETURN
# 30 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_4
	return


Route1_House_StartQuest::
# 40 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_0, MSGBOX_YESNO
# 42 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_StartQuest_2
# 46 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_2
Route1_House_StartQuest_1:
# 48 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_StartQuest_2:
# 43 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_1
# 44 "data//maps/Route1_House/scripts.pory"
	startquest QUEST_ROUTE1_PECHA_BERRY
	goto Route1_House_StartQuest_1


Route1_House_Azurill::
# 55 "data//maps/Route1_House/scripts.pory"
	lockall
# 56 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_0
# 57 "data//maps/Route1_House/scripts.pory"
	releaseall
	return


# 23 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_0:
# 23 "data//maps/Route1_House/scripts.pory"
	face_right
	step_end

Route1_House_QuestInProgress_Text_0:
# 15 "data//maps/Route1_House/scripts.pory"
	.string "Have you brought a PECHA BERRY?$"

Route1_House_QuestInProgress_Text_1:
# 19 "data//maps/Route1_House/scripts.pory"
	.string "Why thank you child. So kind of you.$"

Route1_House_QuestInProgress_Text_2:
# 25 "data//maps/Route1_House/scripts.pory"
	.string "Here sweetheart, this kind trainer has\n"
	.string "brought you a PECHA BERRY.\p"
	.string "AZURILL: zuuu!!!!!\p"
	.string "It seems to have revived$"

Route1_House_QuestInProgress_Text_3:
# 28 "data//maps/Route1_House/scripts.pory"
	.string "Here child, you must have this. The\n"
	.string "least I can do.$"

Route1_House_QuestInProgress_Text_4:
# 30 "data//maps/Route1_House/scripts.pory"
	.string "This contains the TM RETURN. It does\n"
	.string "more damage the stronger the bond\l"
	.string "between you and your {PKMN} is, just like\l"
	.string "me and AZURILL!$"

Route1_House_QuestInProgress_Text_5:
# 32 "data//maps/Route1_House/scripts.pory"
	.string "I don't see a PECHA BERRY here...please\n"
	.string "come back when you have one.$"

Route1_House_QuestInProgress_Text_6:
# 35 "data//maps/Route1_House/scripts.pory"
	.string "Please hurry - my baby's suffering!$"

Route1_House_StartQuest_Text_0:
# 40 "data//maps/Route1_House/scripts.pory"
	.string "I think my poor baby AZURILL ate\n"
	.string "something bad and now has food\l"
	.string "poisoning! I wish I had a PECHA BERRY to\l"
	.string "cure her. Say, trainer, good timing.\l"
	.string "Would you be willing to find a PECHA\l"
	.string "BERRY for my baby?$"

Route1_House_StartQuest_Text_1:
# 43 "data//maps/Route1_House/scripts.pory"
	.string "Oh, thank you so much. You're very kind.\n"
	.string "I'll be waiting here.$"

Route1_House_StartQuest_Text_2:
# 46 "data//maps/Route1_House/scripts.pory"
	.string "You'd watch AZURILL suffer? You're so\n"
	.string "cold-hearted!$"

Route1_House_Azurill_Text_0:
# 56 "data//maps/Route1_House/scripts.pory"
	.string "AZURILL: zu...\p"
	.string "AZURILL looks quite sick.$"
