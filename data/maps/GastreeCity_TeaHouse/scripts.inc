GastreeCity_TeaHouse_MapScripts::
	.byte 0


GastreeCity_TeaHouse_EventScript_NPC1::
# 9 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 10 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	giveitem ITEM_REVIVAL_HERB
# 11 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
	return


GastreeCity_TeaHouse_EventScript_OldLady::
# 16 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_GASTREE_TEASHOP_QUEST, 0
	goto_if_eq GastreeCity_TeaHouse_EventScript_OldLady_2
GastreeCity_TeaHouse_EventScript_OldLady_1:
# 18 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_GASTREE_TEASHOP_QUEST, 1
	goto_if_eq GastreeCity_TeaHouse_EventScript_OldLady_5
GastreeCity_TeaHouse_EventScript_OldLady_4:
# 20 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_GASTREE_TEASHOP_QUEST, 2
	goto_if_eq GastreeCity_TeaHouse_EventScript_OldLady_7
	return

GastreeCity_TeaHouse_EventScript_OldLady_2:
# 16 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt
	goto GastreeCity_TeaHouse_EventScript_OldLady_1

GastreeCity_TeaHouse_EventScript_OldLady_5:
# 18 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest
	goto GastreeCity_TeaHouse_EventScript_OldLady_4

GastreeCity_TeaHouse_EventScript_OldLady_7:
	return


GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt::
# 24 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 25 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	faceplayer
# 27 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_0
# 28 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 29 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_1
# 30 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 31 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0
# 32 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 33 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_2
# 34 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 37 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_3, MSGBOX_YESNO
# 39 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_RESULT, 1
# 41 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto_if_eq GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest
# 44 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_4
# 45 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	return


GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest::
# 51 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 52 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Movement_0
# 53 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 54 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Text_0
# 55 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 58 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	setvar VAR_GASTREE_TEASHOP_QUEST, 1
# 59 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	return


GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest::
# 63 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 64 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_0
# 65 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
	checkitem ITEM_REVIVAL_HERB
# 0 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_2
GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_1:
# 81 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_1
# 82 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 83 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	return

GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_2:
	checkitem ITEM_ENERGY_POWDER
# 0 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_4
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_1

GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_4:
	checkitem ITEM_SHOAL_SALT
# 0 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_6
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_1

GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_6:
# 72 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_SHOAL_SALT
# 73 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_REVIVAL_HERB
# 74 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_ENERGY_POWDER
# 76 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_1


GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward::
# 87 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 89 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Movement_0
# 90 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 91 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_0
# 92 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 93 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_1, MSGBOX_YESNO
# 94 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 97 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	givemon SPECIES_POLTEAGEIST, 10
# 103 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	setvar VAR_GASTREE_TEASHOP_QUEST, 2
# 104 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	return


# 31 "data//maps/GastreeCity_TeaHouse/scripts.pory"
GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0:
# 31 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	emote_exclamation_mark
	step_end

# 52 "data//maps/GastreeCity_TeaHouse/scripts.pory"
GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Movement_0:
# 52 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	jump_in_place_down
	step_end

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_0:
# 27 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "OWNER: Welcome to our tea shop, young\n"
	.string "one. Please enjoy a selection of our\l"
	.string "finely crafted traditional\l"
	.string "matchas...you don't want anything\l"
	.string "traditional?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_1:
# 29 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Sigh...you young ones just have no\n"
	.string "taste.\p"
	.string "Well...times are changing I suppose, and\n"
	.string "our business should change with them.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_2:
# 33 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "OWNER: Yes, I'd like to try crafting a\n"
	.string "modern tea. Something with zing and\l"
	.string "zap! Like those energy drinks.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_3:
# 37 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Young one, will you help me?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_4:
# 44 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I understand. Please come back if you'd\n"
	.string "like to help me out.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Text_0:
# 54 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "You breathe new life into these old\n"
	.string "bones, young one!\p"
	.string "For the tea, I'll need...hmm...let's see...\p"
	.string "1 ENERGY POWDER...\p"
	.string "...1 SHOAL SALT...\p"
	.string "...and...\p"
	.string "...1 REVIVAL HERB! You should be able to\n"
	.string "find some REVIVAL HERBs in our back\l"
	.string "garden, but you'll have to find the rest\l"
	.string "yourself.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_0:
# 64 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Welcome to...oh, it's you! My eyes aren't\n"
	.string "what they used to me.\p"
	.string "Have you brought the ingredients I\n"
	.string "need?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_1:
# 81 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Seems like you don't have everything\n"
	.string "yet. Come back when you do!$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_0:
# 91 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Oh how wonderful! I'm so excited to\n"
	.string "start brewing.\p"
	.string "Thank you, young one. You have done me\n"
	.string "a great service. I must repay you...$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_1:
# 93 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Why don't I give you a reward of some\n"
	.string "sort?$"
