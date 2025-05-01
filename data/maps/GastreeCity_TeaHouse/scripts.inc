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
	goto_if_eq GastreeCity_TeaHouse_EventScript_OldLady_8
GastreeCity_TeaHouse_EventScript_OldLady_7:
	end

GastreeCity_TeaHouse_EventScript_OldLady_2:
# 11 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt
	goto GastreeCity_TeaHouse_EventScript_OldLady_1

GastreeCity_TeaHouse_EventScript_OldLady_5:
# 13 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest
	goto GastreeCity_TeaHouse_EventScript_OldLady_4

GastreeCity_TeaHouse_EventScript_OldLady_8:
# 16 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_OldLady_Text_0, MSGBOX_NPC
	goto GastreeCity_TeaHouse_EventScript_OldLady_7


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
	delay 8
# 30 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0
# 31 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 32 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	delay 16
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
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0
# 53 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 54 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Text_0
# 55 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 58 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	setvar VAR_GASTREE_TEASHOP_QUEST, 1
# 59 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	startquest QUEST_GASTREE_TEA
# 62 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	return


GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest::
# 66 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 67 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	faceplayer
# 68 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_0
# 69 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
	checkitem ITEM_REVIVAL_HERB
# 0 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_2
GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_1:
# 85 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_1, MSGBOX_NPC
# 86 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	end

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
# 76 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_SHOAL_SALT
# 77 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_REVIVAL_HERB
# 78 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	removeitem ITEM_ENERGY_POWDER
# 80 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_1


GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward::
# 91 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 93 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_0, MSGBOX_SIGN
# 94 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 95 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0
# 96 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 97 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	delay 12
# 98 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_1
# 99 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 100 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	completequest QUEST_GASTREE_TEA
# 101 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	delay 16
# 105 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	message GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_2
# 106 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmessage
# 107 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_3, GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_4
# 109 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_2
# 122 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	givemon SPECIES_SINISTEA_ANTIQUE, 10
# 124 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	showmonpic SPECIES_SINISTEA_ANTIQUE, 10, 3
# 125 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 126 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_7
# 127 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	hidemonpic
# 128 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 129 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	delay 12
# 130 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_8
# 131 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_1:
# 135 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	setvar VAR_GASTREE_TEASHOP_QUEST, 2
# 137 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	end

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_2:
# 110 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	givemon SPECIES_POLTCHAGEIST_ARTISAN, 10
# 112 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	showmonpic SPECIES_POLTCHAGEIST_ARTISAN, 10, 3
# 113 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 114 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_5
# 115 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	hidemonpic
# 116 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	call NicknamePartyMon
# 117 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 118 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	delay 12
# 119 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_6
# 120 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
	goto GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_1


GastreeCity_TeaHouse_EventScript_NPC1::
# 143 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC1_Text_0, MSGBOX_NPC
	end


GastreeCity_TeaHouse_EventScript_NPC2::
# 149 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC2_Text_0, MSGBOX_NPC
	end


GastreeCity_TeaHouse_EventScript_NPC3::
# 155 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC3_Text_0, MSGBOX_NPC
	end


GastreeCity_TeaHouse_EventScript_NPC4::
# 161 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 162 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	faceplayer
# 163 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC4_Text_0
# 164 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 165 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	delay 16
# 166 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto_if_set FLAG_GASTREE_TEAHOUSE_BERRIES, GastreeCity_TeaHouse_EventScript_NPC4_2
# 170 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_NPC4_Text_1
# 171 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	giveitem ITEM_PERSIM_BERRY, 2
# 172 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	setflag FLAG_GASTREE_TEAHOUSE_BERRIES
# 174 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	end

GastreeCity_TeaHouse_EventScript_NPC4_2:
# 167 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	end


GastreeCity_TeaHouse_Snorunt::
# 178 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	playmoncry SPECIES_SNORUNT, CRY_MODE_NORMAL
# 179 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_Snorunt_Text_0, MSGBOX_NPC
	end


GastreeCity_TeaHouse_Sinistea::
# 184 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	playmoncry SPECIES_SINISTEA, CRY_MODE_NORMAL
# 185 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_Sinistea_Text_0, MSGBOX_NPC
	end


# 30 "data//maps/GastreeCity_TeaHouse/scripts.pory"
GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0:
# 30 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	emote_exclamation_mark
	step_end

GastreeCity_TeaHouse_EventScript_OldLady_Text_0:
# 16 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "How are you doing, {PLAYER}? You\n"
	.string "know, my brother runs a restaurant\l"
	.string "further out west, in Pelluca City.\p"
	.string "You should visit sometime.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_0:
# 25 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Welcome to our tea shop, young one.\n"
	.string "Please enjoy a selection of our finely\l"
	.string "crafted traditional matchas...you don't\l"
	.string "want anything traditional?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_1:
# 27 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Sigh...all you young ones just have no\n"
	.string "taste.\p"
	.string "Well, times are changing I suppose, and\n"
	.string "our business should change with them.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_2:
# 33 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Yes, I'd like to try crafting a modern\n"
	.string "tea. Something with zing and zap!\p"
	.string "Like those energy drinks.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_3:
# 37 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Young one, will you help me?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_4:
# 44 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "No taste and no grace! What's happening\n"
	.string "to society?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Text_0:
# 54 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "You breathe new life into these old\n"
	.string "bones, young one!\p"
	.string "For the tea, I'll need...hmm...let's see...\p"
	.string "1 Energy Powder...\p"
	.string "...1 Shoal Salt...\p"
	.string "...and...\p"
	.string "...1 Revival Herb! I'll be waiting here.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_0:
# 68 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Welcome to...oh, it's you! Sorry, my eyes\n"
	.string "aren't what they used to be.\p"
	.string "Have you brought the ingredients?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_CheckQuest_Text_1:
# 85 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Seems like you don't have everything\n"
	.string "yet. Come back when you do!$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_0:
# 93 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "{PLAYER} handed over the\n"
	.string "ingredients.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_1:
# 98 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Oh how wonderful! I'm so excited to\n"
	.string "start brewing.\p"
	.string "Thank you, young one. You've done me a\n"
	.string "great service.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_2:
# 105 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Now - I must reward you somehow.\p"
	.string "No no! I insist.\p"
	.string "The kitchen is managed by my staff of\n"
	.string "Poltchageist and Sinistea. But for some\l"
	.string "of them, working the same job has\l"
	.string "become dreary. They need to go out and\l"
	.string "see the world, don't you think?\p"
	.string "Would you like to take one of them as a\n"
	.string "companion?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_3:
# 107 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Poltchageist$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_4:
# 107 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Sinistea$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_5:
# 114 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "The Tea House Owner has gifted you a\n"
	.string "Poltchageist!$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_6:
# 119 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "This one's a keeper - extremely\n"
	.string "well-trained and hospitable. I'm sure\l"
	.string "you two will have a great time together.\l"
	.string "I'll miss you, Poltchageist!$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_7:
# 126 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "The Tea House Owner has gifted you a\n"
	.string "Sinistea!$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveReward_Text_8:
# 130 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "This one's a keeper - extremely\n"
	.string "well-trained and hospitable. I'm sure\l"
	.string "you two will have a great time together.\l"
	.string "I'll miss you, Sinistea!$"

GastreeCity_TeaHouse_EventScript_NPC1_Text_0:
# 143 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "At my age, a hot cup of tea is the best\n"
	.string "medicine. The Poltchageist and Sinistea\l"
	.string "do great work!$"

GastreeCity_TeaHouse_EventScript_NPC2_Text_0:
# 149 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I always come here after a stressful\n"
	.string "business meeting. Gotta destress after\l"
	.string "making all this money!$"

GastreeCity_TeaHouse_EventScript_NPC3_Text_0:
# 155 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I find that the tea here feeds my\n"
	.string "creative energies.$"

GastreeCity_TeaHouse_EventScript_NPC4_Text_0:
# 163 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I invited my date here because I\n"
	.string "thought it'd be more unique than taking\l"
	.string "him to a trendy spot...but he still\l"
	.string "hasn't arrived. Luckily my Snorunt is\l"
	.string "here to give me company!$"

GastreeCity_TeaHouse_EventScript_NPC4_Text_1:
# 170 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I got this plate of berries but since my\n"
	.string "date hasn't come, why don't you have\l"
	.string "some?$"

GastreeCity_TeaHouse_Snorunt_Text_0:
# 179 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Snorunt is sniffing the tea. Does it\n"
	.string "like it?$"

GastreeCity_TeaHouse_Sinistea_Text_0:
# 185 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Sinistea is busy serving tea. Better\n"
	.string "not disturb it!$"
