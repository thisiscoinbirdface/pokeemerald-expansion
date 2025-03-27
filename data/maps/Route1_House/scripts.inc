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


Route1_House_Quest_Done::
# 15 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Quest_Done_Text_0
	return


Route1_House_QuestInProgress::
# 20 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_0, MSGBOX_YESNO
# 21 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_2
# 40 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_6
Route1_House_QuestInProgress_1:
# 43 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_QuestInProgress_2:
# 22 "data//maps/Route1_House/scripts.pory"
	checkitem ITEM_PECHA_BERRY
# 23 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_QuestInProgress_5
# 37 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_5
	goto Route1_House_QuestInProgress_1

Route1_House_QuestInProgress_5:
# 24 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_1
# 25 "data//maps/Route1_House/scripts.pory"
	release
# 26 "data//maps/Route1_House/scripts.pory"
	completequest QUEST_ROUTE1_PECHA_BERRY
# 27 "data//maps/Route1_House/scripts.pory"
	release
# 28 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_QuestInProgress_Movement_0
# 29 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 30 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_2
# 31 "data//maps/Route1_House/scripts.pory"
	release
# 32 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 33 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_3
# 34 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_TM_RETURN
# 35 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_QuestInProgress_Text_4
	goto Route1_House_QuestInProgress_1


Route1_House_StartQuest::
# 48 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_0, MSGBOX_YESNO
# 50 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_StartQuest_2
# 54 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_2
Route1_House_StartQuest_1:
# 56 "data//maps/Route1_House/scripts.pory"
	releaseall
	end

Route1_House_StartQuest_2:
# 51 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_StartQuest_Text_1
# 52 "data//maps/Route1_House/scripts.pory"
	startquest QUEST_ROUTE1_PECHA_BERRY
	goto Route1_House_StartQuest_1


Route1_House_Azurill::
# 63 "data//maps/Route1_House/scripts.pory"
	lockall
# 64 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_0
# 65 "data//maps/Route1_House/scripts.pory"
	releaseall
	return


# 28 "data//maps/Route1_House/scripts.pory"
Route1_House_QuestInProgress_Movement_0:
# 28 "data//maps/Route1_House/scripts.pory"
	face_right
	step_end

Route1_House_Quest_Done_Text_0:
# 15 "data//maps/Route1_House/scripts.pory"
	.string "I won't let AZURILL eat any bad food\n"
	.string "again!$"

Route1_House_QuestInProgress_Text_0:
# 20 "data//maps/Route1_House/scripts.pory"
	.string "Have you brought a PECHA BERRY?$"

Route1_House_QuestInProgress_Text_1:
# 24 "data//maps/Route1_House/scripts.pory"
	.string "Why thank you child. So kind of you.$"

Route1_House_QuestInProgress_Text_2:
# 30 "data//maps/Route1_House/scripts.pory"
	.string "Here sweetheart, this kind trainer has\n"
	.string "brought you a PECHA BERRY.\p"
	.string "AZURILL: zuuu!!!!!\n"
	.string "It seems to have revived!$"

Route1_House_QuestInProgress_Text_3:
# 33 "data//maps/Route1_House/scripts.pory"
	.string "Here child, you must have this. The\n"
	.string "least I can do.$"

Route1_House_QuestInProgress_Text_4:
# 35 "data//maps/Route1_House/scripts.pory"
	.string "This contains the TM RETURN. It does\n"
	.string "more damage the stronger the bond\l"
	.string "between you and your {PKMN} is, just like\l"
	.string "me and AZURILL!$"

Route1_House_QuestInProgress_Text_5:
# 37 "data//maps/Route1_House/scripts.pory"
	.string "I don't see a PECHA BERRY here...please\n"
	.string "come back when you have one.$"

Route1_House_QuestInProgress_Text_6:
# 40 "data//maps/Route1_House/scripts.pory"
	.string "Please hurry - my baby's suffering!$"

Route1_House_StartQuest_Text_0:
# 48 "data//maps/Route1_House/scripts.pory"
	.string "I think my poor baby AZURILL ate\n"
	.string "something bad and now has food\l"
	.string "poisoning! I wish I had a PECHA BERRY to\l"
	.string "cure her. Say, trainer, good timing.\l"
	.string "Would you be willing to find a PECHA\l"
	.string "BERRY for my baby?$"

Route1_House_StartQuest_Text_1:
# 51 "data//maps/Route1_House/scripts.pory"
	.string "Oh, thank you so much. You're very kind.\n"
	.string "I'll be waiting here.$"

Route1_House_StartQuest_Text_2:
# 54 "data//maps/Route1_House/scripts.pory"
	.string "You'd watch AZURILL suffer? You're so\n"
	.string "cold-hearted!$"

Route1_House_Azurill_Text_0:
# 64 "data//maps/Route1_House/scripts.pory"
	.string "AZURILL: zu...\p"
	.string "AZURILL looks quite sick.$"
