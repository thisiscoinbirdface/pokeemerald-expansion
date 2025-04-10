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
	startquest QUEST_GASTREE_TEA
# 60 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	return


GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest::
# 64 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 65 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_0
# 66 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
	checkitem ITEM_REVIVAL_HERB
# 0 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_2
GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_1:
# 82 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_1
# 83 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 84 "data//maps/GastreeCity_TeaHouse/scripts.pory"
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
# 73 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_SHOAL_SALT
# 74 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_REVIVAL_HERB
# 75 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_ENERGY_POWDER
# 77 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_1


GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward::
# 88 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 90 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0
# 91 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 92 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_0
# 93 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 94 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	completequest QUEST_GASTREE_TEA
# 95 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	delay 16
# 99 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_1
# 100 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_2, GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_3
# 102 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_2
# 115 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	givemon SPECIES_SINISTEA, 10
# 117 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	showmonpic SPECIES_SINISTEA, 10, 3
# 118 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_6
# 120 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	hidemonpic
# 121 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	call NicknamePartyMon
# 122 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 123 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	delay 12
# 124 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_7
# 125 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_1:
# 129 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	setvar VAR_GASTREE_TEASHOP_QUEST, 2
# 131 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	end

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_2:
# 103 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	givemon SPECIES_POLTCHAGEIST, 10
# 105 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	showmonpic SPECIES_POLTCHAGEIST, 10, 3
# 106 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 107 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_4
# 108 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	hidemonpic
# 109 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	call NicknamePartyMon
# 110 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 111 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	delay 12
# 112 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_5
# 113 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_1


GastreeCity_TeaHouse_EventScript_NPC1::
# 137 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC1_Text_0, MSGBOX_NPC
	end


GastreeCity_TeaHouse_EventScript_NPC2::
# 143 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC2_Text_0, MSGBOX_NPC
	end


GastreeCity_TeaHouse_EventScript_NPC3::
# 149 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC3_Text_0, MSGBOX_NPC
	end


GastreeCity_TeaHouse_EventScript_NPC4::
# 155 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 156 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	faceplayer
# 157 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC4_Text_0
# 158 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 159 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	delay 16
# 160 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto_if_set FLAG_GASTREE_TEAHOUSE_BERRIES, GastreeCity_TeaHouse_EventScript_NPC4_2
# 164 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC4_Text_1
# 165 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	giveitem ITEM_PERSIM_BERRY, 2
# 166 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	setflag FLAG_GASTREE_TEAHOUSE_BERRIES
# 168 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	end

GastreeCity_TeaHouse_EventScript_NPC4_2:
# 161 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	end


GastreeCity_TeaHouse_Snorunt::
# 172 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	playmoncry SPECIES_SNORUNT, CRY_MODE_NORMAL
# 173 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_Snorunt_Text_0, MSGBOX_NPC
	end


GastreeCity_TeaHouse_Sinistea::
# 178 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 179 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	playmoncry SPECIES_SINISTEA, CRY_MODE_NORMAL
# 180 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_Sinistea_Text_0
# 181 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	end


# 29 "data//maps/GastreeCity_TeaHouse/scripts.pory"
GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0:
# 29 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	emote_exclamation_mark
	step_end

GastreeCity_TeaHouse_EventScript_OldLady_Text_0:
# 16 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "How are you doing, {PLAYER}? You\n"
	.string "know, my brother runs a restaurant\l"
	.string "further out west, in Pelluca City. You\l"
	.string "should visit sometime.$"

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
	.string "1 Energy Powder...\p"
	.string "...1 Shoal Salt...\p"
	.string "...and...\p"
	.string "...1 Revival Herb! I'll be waiting here.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_0:
# 65 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Welcome to...oh, it's you! My eyes aren't\n"
	.string "what they used to be.\p"
	.string "Have you brought the ingredients I\n"
	.string "need?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_1:
# 82 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Seems like you don't have everything\n"
	.string "yet. Come back when you do!$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_0:
# 92 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Oh how wonderful! I'm so excited to\n"
	.string "start brewing.\p"
	.string "Thank you, young one. You have done me\n"
	.string "a great service.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_1:
# 99 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Now - I must reward you somehow.\p"
	.string "No no! I insist. The kitchen is managed\n"
	.string "by my staff of Poltchageist and\l"
	.string "Sinistea. But for some of them, working\l"
	.string "the same job has become dreary. They\l"
	.string "need to go out and see the world, don't\l"
	.string "you think?\p"
	.string "Would you like to take one of them as a\n"
	.string "companion?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_2:
# 100 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Poltchageist$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_3:
# 100 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Sinistea$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_4:
# 107 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "The Tea House Owner has gifted you a\n"
	.string "Poltchageist!$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_5:
# 112 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "This one's a keeper - extremely\n"
	.string "well-trained and hospitable. I'm sure\l"
	.string "you two will have a great time together.\l"
	.string "I'll miss you, Poltchageist!$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_6:
# 119 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "The Tea House Owner has gifted you a\n"
	.string "Sinistea!$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_7:
# 124 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "This one's a keeper - extremely\n"
	.string "well-trained and hospitable. I'm sure\l"
	.string "you two will have a great time together.\l"
	.string "I'll miss you, Sinistea!$"

GastreeCity_TeaHouse_EventScript_NPC1_Text_0:
# 137 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "At my age, a hot cup of tea is the best\n"
	.string "medicine. The Poltchageist and Sinistea\l"
	.string "do great work!$"

GastreeCity_TeaHouse_EventScript_NPC2_Text_0:
# 143 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I always come here after a stressful\n"
	.string "business meeting. Gotta destress after\l"
	.string "making all this money!$"

GastreeCity_TeaHouse_EventScript_NPC3_Text_0:
# 149 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I find that the tea here feeds my\n"
	.string "creative energies.$"

GastreeCity_TeaHouse_EventScript_NPC4_Text_0:
# 157 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I invited my date here because I\n"
	.string "thought it'd be more unique than taking\l"
	.string "him to a trendy spot...but he still\l"
	.string "hasn't arrived. Luckily my SNORUNT is\l"
	.string "here to give me company!$"

GastreeCity_TeaHouse_EventScript_NPC4_Text_1:
# 164 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I got this plate of berries but since my\n"
	.string "date hasn't come, why don't you have\l"
	.string "some?$"

GastreeCity_TeaHouse_Snorunt_Text_0:
# 173 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Snorunt is sniffing the tea. Does it\n"
	.string "like it?$"

GastreeCity_TeaHouse_Sinistea_Text_0:
# 180 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Sinistea is busy serving tea. Better\n"
	.string "not disturb it!$"
