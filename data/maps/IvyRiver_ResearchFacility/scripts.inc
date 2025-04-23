# 1 "data//maps/IvyRiver_ResearchFacility/scripts.pory"

# 2 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_MAIN, 4
# 3 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q1, 5
# 4 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q2, 6
# 5 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q3, 7
# 6 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q4, 8
# 7 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_EV, 1

IvyRiver_ResearchFacility_MapScripts::
	.byte 0


IvyRiver_Ranger_FirstQuest::
# 25 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_2
# 73 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end

IvyRiver_Ranger_FirstQuest_2:
# 28 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 29 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	faceplayer
# 30 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_0
# 31 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 32 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 33 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_0
# 34 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 35 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 36 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_1
# 37 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 38 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	removeitem ITEM_RANGER_PACKAGE
# 39 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 40 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_2
# 41 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 42 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 43 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_1
# 44 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 45 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 46 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_3
# 47 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 48 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 49 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_4
# 50 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 51 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 54 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Text_5
# 55 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 56 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 58 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_6
# 59 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 60 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_1
# 61 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 62 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 63 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_7
# 64 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 65 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 68 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	end


IvyRiver_Ranger_FirstQuest_Reward::
# 79 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Reward_Text_0
# 80 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 81 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IvyRiver_Ranger_FirstQuest_Reward_Text_1, IvyRiver_Ranger_FirstQuest_Reward_Text_2, IvyRiver_Ranger_FirstQuest_Reward_Text_2
# 83 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_2
IvyRiver_Ranger_FirstQuest_Reward_1:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_5
IvyRiver_Ranger_FirstQuest_Reward_4:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_7
	return

IvyRiver_Ranger_FirstQuest_Reward_2:
# 83 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_A
	goto IvyRiver_Ranger_FirstQuest_Reward_1

IvyRiver_Ranger_FirstQuest_Reward_5:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_B
	goto IvyRiver_Ranger_FirstQuest_Reward_4

IvyRiver_Ranger_FirstQuest_Reward_7:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_C
	return


IvyRiver_Ranger_FirstQuest_Reward_A::
# 89 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_PEAT_BLOCK
# 90 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showitemdescription
# 91 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Reward_A_Text_0, MSGBOX_YESNO
# 92 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_A_1
# 97 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 98 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	return

IvyRiver_Ranger_FirstQuest_Reward_A_1:
# 93 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 94 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	giveitem ITEM_PEAT_BLOCK
# 95 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_RewardEnd
	return


IvyRiver_Ranger_FirstQuest_Reward_B::
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_PEAT_BLOCK
# 103 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showitemdescription
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Reward_A_Text_0, MSGBOX_YESNO
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_B_1
# 110 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 111 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	return

IvyRiver_Ranger_FirstQuest_Reward_B_1:
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	giveitem ITEM_PEAT_BLOCK
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_RewardEnd
	return


IvyRiver_Ranger_FirstQuest_Reward_C::
# 115 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_PEAT_BLOCK
# 116 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showitemdescription
# 117 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Reward_A_Text_0, MSGBOX_YESNO
# 118 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_C_1
# 123 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 124 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	return

IvyRiver_Ranger_FirstQuest_Reward_C_1:
# 119 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 120 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	giveitem ITEM_PEAT_BLOCK
# 121 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_RewardEnd
	return


IvyRiver_Ranger_FirstQuest_RewardEnd::
# 131 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0
# 134 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 4
# 135 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_RANGER, SUB_QUEST_1
# 137 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


# 33 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_FirstQuest_Movement_0:
# 33 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_question_mark
	step_end

# 43 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_FirstQuest_Movement_1:
# 43 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_exclamation_mark
	step_end

IvyRiver_Ranger_FirstQuest_Text_0:
# 30 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hmm? A Recruit? Welcome to the Ivy\n"
	.string "River Ranger Institute! We're a tad\l"
	.string "remote - to say the least - but we've\l"
	.string "made this place our home...and yours\l"
	.string "too!\p"
	.string "...$"

IvyRiver_Ranger_FirstQuest_Text_1:
# 36 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hmm? Ravine has a package for me?$"

IvyRiver_Ranger_FirstQuest_Text_2:
# 40 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER} gave the Ranger scientist\n"
	.string "the Ranger Package.$"

IvyRiver_Ranger_FirstQuest_Text_3:
# 46 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ahh, yes, yes. The supplies have\n"
	.string "arrived! Excellent!\p"
	.string "Exciting stuff indeed.\p"
	.string "You see, {PLAYER}, the Ivy River\n"
	.string "Ranger Institute studies Pokémon\l"
	.string "evolutions. To maintain a robust\l"
	.string "Pokémon ecosystem, we need to know as\l"
	.string "much as we can about how Pokémon\l"
	.string "evolve, when they evolve, and what\l"
	.string "changes that might cause in its\l"
	.string "surroundings.$"

IvyRiver_Ranger_FirstQuest_Text_4:
# 49 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Director Ravine sent us a collection of\n"
	.string "items that induce evolution in certain\l"
	.string "Pokémon. We've been waiting for this for\l"
	.string "a long time!\p"
	.string "Thank you, {PLAYER}!\p"
	.string "And am I correct in assuming that this\n"
	.string "is your first mission?\p"
	.string "...\p"
	.string "In that case, I officially declare that\n"
	.string "you've cleared your first mission and I\l"
	.string "now promote you to the rank of\l"
	.string "Candidate!$"

IvyRiver_Ranger_FirstQuest_Text_5:
# 54 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER} was promoted from Recruit\n"
	.string "to Candidate!$"

IvyRiver_Ranger_FirstQuest_Text_6:
# 58 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I should also give you a reward...hmm,\n"
	.string "what do we have with us?\p"
	.string "Sorry, we're quite a bare-bones setup\n"
	.string "here.$"

IvyRiver_Ranger_FirstQuest_Text_7:
# 63 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "How about this? Why don't you pick from\n"
	.string "one of the evolution items Director\l"
	.string "Ravine sent us?$"

IvyRiver_Ranger_FirstQuest_Reward_Text_0:
# 79 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Anything you'd like to take?$"

IvyRiver_Ranger_FirstQuest_Reward_Text_1:
# 81 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Peat Block$"

IvyRiver_Ranger_FirstQuest_Reward_Text_2:
# 81 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "??$"

IvyRiver_Ranger_FirstQuest_Reward_A_Text_0:
# 91 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Are you sure?$"

IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0:
# 131 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Great!\p"
	.string "Now, as a Candidate, you'll be eyeing the\n"
	.string "rank of Associate next. And for that,\l"
	.string "you'll need to clear one more mission.\p"
	.string "For your second mission, I'll have you\n"
	.string "help out our second floor for a while. We\l"
	.string "rely heavily on outside help for our\l"
	.string "research, so you'll be a huge help.\p"
	.string "Go upstairs and help out!$"
