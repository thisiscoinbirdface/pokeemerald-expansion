GastreeCity_TeaHouse_MapScripts::
	.byte 0


GastreeCity_TeaHouse_EventScript_OldLady::
# 11 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_GASTREE_TEASHOP_QUEST, 0
	goto_if_eq GastreeCity_TeaHouse_EventScript_OldLady_2
GastreeCity_TeaHouse_EventScript_OldLady_1:
# 13 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_GASTREE_TEASHOP_QUEST, 1
	goto_if_eq GastreeCity_TeaHouse_EventScript_OldLady_5
GastreeCity_TeaHouse_EventScript_OldLady_4:
# 15 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_GASTREE_TEASHOP_QUEST, 2
	goto_if_eq GastreeCity_TeaHouse_EventScript_OldLady_7
	return

GastreeCity_TeaHouse_EventScript_OldLady_2:
# 11 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt
	goto GastreeCity_TeaHouse_EventScript_OldLady_1

GastreeCity_TeaHouse_EventScript_OldLady_5:
# 13 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest
	goto GastreeCity_TeaHouse_EventScript_OldLady_4

GastreeCity_TeaHouse_EventScript_OldLady_7:
# 16 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_OldLady_Text_0
# 17 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
	return


GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt::
# 22 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 23 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	faceplayer
# 25 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_0
# 26 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 27 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_1
# 28 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 29 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0
# 30 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 31 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_2
# 32 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 35 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_3, MSGBOX_YESNO
# 37 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_RESULT, 1
# 39 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto_if_eq GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest
# 42 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_4
# 43 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	return


GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest::
# 49 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 50 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0
# 51 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 52 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Text_0
# 53 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 56 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	setvar VAR_GASTREE_TEASHOP_QUEST, 1
# 57 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	return


GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest::
# 61 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 62 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_0
# 63 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
	checkitem ITEM_REVIVAL_HERB
# 0 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_2
GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_1:
# 79 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_1
# 80 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 81 "data//maps/GastreeCity_TeaHouse/scripts.pory"
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
# 70 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_SHOAL_SALT
# 71 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_REVIVAL_HERB
# 72 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_ENERGY_POWDER
# 74 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_1


GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward::
# 85 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 87 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0
# 88 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 89 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_0
# 90 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 91 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_1
# 92 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 95 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	givemon SPECIES_POLTCHAGEIST, 10
# 96 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_2
# 99 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 100 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_3
# 101 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	call NicknamePartyMon
# 102 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 104 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_4
# 105 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 108 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	setvar VAR_GASTREE_TEASHOP_QUEST, 2
# 109 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	return


GastreeCity_TeaHouse_EventScript_NPC1::
# 114 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 115 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	faceplayer
# 116 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC1_Text_0
	return


GastreeCity_TeaHouse_EventScript_NPC2::
# 121 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 122 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	faceplayer
# 123 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC2_Text_0
	return


GastreeCity_TeaHouse_EventScript_NPC3::
# 128 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 129 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	faceplayer
# 130 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC3_Text_0
	return


GastreeCity_TeaHouse_EventScript_NPC4::
# 135 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 136 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	faceplayer
# 137 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC4_Text_0
	return


# 29 "data//maps/GastreeCity_TeaHouse/scripts.pory"
GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0:
# 29 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	emote_exclamation_mark
	step_end

GastreeCity_TeaHouse_EventScript_OldLady_Text_0:
# 16 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "OWNER: My brother runs a tea shop\n"
	.string "further out west, in Brixas City.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_0:
# 25 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "OWNER: Welcome to our tea shop, young\n"
	.string "one. Please enjoy a selection of our\l"
	.string "finely crafted traditional\l"
	.string "matchas...you don't want anything\l"
	.string "traditional?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_1:
# 27 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Sigh...you young ones just have no\n"
	.string "taste.\p"
	.string "Well...times are changing I suppose, and\n"
	.string "our business should change with them.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_2:
# 31 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "OWNER: Yes, I'd like to try crafting a\n"
	.string "modern tea. Something with zing and\l"
	.string "zap! Like those energy drinks.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_3:
# 35 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Young one, will you help me?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_4:
# 42 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I understand. Please come back if you'd\n"
	.string "like to help me out.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Text_0:
# 52 "data//maps/GastreeCity_TeaHouse/scripts.pory"
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
# 62 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Welcome to...oh, it's you! My eyes aren't\n"
	.string "what they used to me.\p"
	.string "Have you brought the ingredients I\n"
	.string "need?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_1:
# 79 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Seems like you don't have everything\n"
	.string "yet. Come back when you do!$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_0:
# 89 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Oh how wonderful! I'm so excited to\n"
	.string "start brewing.\p"
	.string "Thank you, young one. You have done me\n"
	.string "a great service. I must repay you...$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_1:
# 91 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Why don't I give you a reward of some\n"
	.string "sort?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_2:
# 96 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "The kitchen is managed by my staff of\n"
	.string "POLTCHAGEIST. But for some of them,\l"
	.string "working the same job has become dreary.\l"
	.string "They need to go out and see the world,\l"
	.string "don't you think?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_3:
# 100 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "The Tea House Owner has gifted you a\n"
	.string "POLTCHAGEIST!$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_4:
# 104 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "This one's a keeper - extremely\n"
	.string "well-trained and hospitable. I'm sure\l"
	.string "you two will have a great time together.\l"
	.string "I'll miss you, POLTEAGEIST!$"

GastreeCity_TeaHouse_EventScript_NPC1_Text_0:
# 116 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "At my age, a hot cup of tea is the best\n"
	.string "medicine. The Poltchageist in the\l"
	.string "kitchen do great work!$"

GastreeCity_TeaHouse_EventScript_NPC2_Text_0:
# 123 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I always come here after a stressful\n"
	.string "business meeting. Gotta destress after\l"
	.string "making all this money!$"

GastreeCity_TeaHouse_EventScript_NPC3_Text_0:
# 130 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I find that the tea here feeds my\n"
	.string "creative energies.$"

GastreeCity_TeaHouse_EventScript_NPC4_Text_0:
# 137 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I invited my date here because I\n"
	.string "thought it'd be more unique than taking\l"
	.string "him to a trendy spot...but he still\l"
	.string "hasn't arrived.$"
