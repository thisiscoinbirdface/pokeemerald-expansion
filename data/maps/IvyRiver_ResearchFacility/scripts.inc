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
# 74 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
	release
# 60 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 61 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_1
# 62 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 63 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 64 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_7
# 65 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 66 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 69 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	end


IvyRiver_Ranger_FirstQuest_Reward::
# 80 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Reward_Text_0
# 81 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 82 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	dynmultichoice 0, 0, TRUE, 21, 0, DYN_MULTICHOICE_CB_NONE, IvyRiver_Ranger_FirstQuest_Reward_Text_1, IvyRiver_Ranger_FirstQuest_Reward_Text_2, IvyRiver_Ranger_FirstQuest_Reward_Text_3, IvyRiver_Ranger_FirstQuest_Reward_Text_4, IvyRiver_Ranger_FirstQuest_Reward_Text_5, IvyRiver_Ranger_FirstQuest_Reward_Text_6, IvyRiver_Ranger_FirstQuest_Reward_Text_7, IvyRiver_Ranger_FirstQuest_Reward_Text_8, IvyRiver_Ranger_FirstQuest_Reward_Text_9, IvyRiver_Ranger_FirstQuest_Reward_Text_10, IvyRiver_Ranger_FirstQuest_Reward_Text_11, IvyRiver_Ranger_FirstQuest_Reward_Text_12, IvyRiver_Ranger_FirstQuest_Reward_Text_13, IvyRiver_Ranger_FirstQuest_Reward_Text_14, IvyRiver_Ranger_FirstQuest_Reward_Text_15, IvyRiver_Ranger_FirstQuest_Reward_Text_16, IvyRiver_Ranger_FirstQuest_Reward_Text_17, IvyRiver_Ranger_FirstQuest_Reward_Text_18, IvyRiver_Ranger_FirstQuest_Reward_Text_19
# 89 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_2
IvyRiver_Ranger_FirstQuest_Reward_1:
# 90 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_5
IvyRiver_Ranger_FirstQuest_Reward_4:
# 91 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_8
IvyRiver_Ranger_FirstQuest_Reward_7:
# 92 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_11
IvyRiver_Ranger_FirstQuest_Reward_10:
# 93 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_14
IvyRiver_Ranger_FirstQuest_Reward_13:
# 94 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_17
IvyRiver_Ranger_FirstQuest_Reward_16:
# 95 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_20
IvyRiver_Ranger_FirstQuest_Reward_19:
# 96 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_23
IvyRiver_Ranger_FirstQuest_Reward_22:
# 97 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_26
IvyRiver_Ranger_FirstQuest_Reward_25:
# 98 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_29
IvyRiver_Ranger_FirstQuest_Reward_28:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_32
IvyRiver_Ranger_FirstQuest_Reward_31:
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_35
IvyRiver_Ranger_FirstQuest_Reward_34:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_38
IvyRiver_Ranger_FirstQuest_Reward_37:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_41
IvyRiver_Ranger_FirstQuest_Reward_40:
# 103 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_44
IvyRiver_Ranger_FirstQuest_Reward_43:
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_47
IvyRiver_Ranger_FirstQuest_Reward_46:
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_50
IvyRiver_Ranger_FirstQuest_Reward_49:
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_53
IvyRiver_Ranger_FirstQuest_Reward_52:
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 18
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_55
	return

IvyRiver_Ranger_FirstQuest_Reward_2:
# 89 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_MEDICHAMITE
# 89 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_1

IvyRiver_Ranger_FirstQuest_Reward_5:
# 90 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_AGGRONITE
# 90 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_4

IvyRiver_Ranger_FirstQuest_Reward_8:
# 91 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_ALTARIANITE
# 91 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_7

IvyRiver_Ranger_FirstQuest_Reward_11:
# 92 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_LOPUNNITE
# 92 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_10

IvyRiver_Ranger_FirstQuest_Reward_14:
# 93 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_BANETTITE
# 93 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_13

IvyRiver_Ranger_FirstQuest_Reward_17:
# 94 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_ABOMASITE
# 94 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_16

IvyRiver_Ranger_FirstQuest_Reward_20:
# 95 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_GYARADOSITE
# 95 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_19

IvyRiver_Ranger_FirstQuest_Reward_23:
# 96 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_MAWILITE
# 96 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_22

IvyRiver_Ranger_FirstQuest_Reward_26:
# 97 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_GARDEVOIRITE
# 97 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_25

IvyRiver_Ranger_FirstQuest_Reward_29:
# 98 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_GALLADITE
# 98 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_28

IvyRiver_Ranger_FirstQuest_Reward_32:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_HOUNDOOMINITE
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_31

IvyRiver_Ranger_FirstQuest_Reward_35:
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_METAGROSSITE
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_34

IvyRiver_Ranger_FirstQuest_Reward_38:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_SCIZORITE
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_37

IvyRiver_Ranger_FirstQuest_Reward_41:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_KANGASKHANITE
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_40

IvyRiver_Ranger_FirstQuest_Reward_44:
# 103 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_PINSIRITE
# 103 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_43

IvyRiver_Ranger_FirstQuest_Reward_47:
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_SHARPEDONITE
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_46

IvyRiver_Ranger_FirstQuest_Reward_50:
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_AMPHAROSITE
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_49

IvyRiver_Ranger_FirstQuest_Reward_53:
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_MANECTRICITE
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_52

IvyRiver_Ranger_FirstQuest_Reward_55:
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_ABSOLITE
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	return


IvyRiver_Ranger_FirstQuest_Reward_Give::
# 111 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showitemdescription
# 112 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0, MSGBOX_YESNO
# 113 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_Give_1
# 118 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 119 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	return

IvyRiver_Ranger_FirstQuest_Reward_Give_1:
# 114 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 115 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	giveitem VAR_0x8006
# 116 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_RewardEnd
	return


IvyRiver_Ranger_FirstQuest_RewardEnd::
# 126 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0
# 129 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 4
# 130 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_RANGER, SUB_QUEST_1
# 132 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
	.string "Ranger Institute studies Pokémon mega\l"
	.string "evolutions. To maintain a robust\l"
	.string "Pokémon ecosystem, we need to know as\l"
	.string "much as we can about these abnormal\l"
	.string "evolutions. This has become\l"
	.string "particularly important since the Mega\l"
	.string "Sharpedo sighting...$"

IvyRiver_Ranger_FirstQuest_Text_4:
# 49 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Director Ravine sent us a collection of\n"
	.string "items that induce mega evolution in\l"
	.string "certain Pokémon. We've been waiting for\l"
	.string "this for a long time!\p"
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
# 64 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "How about this? Why don't you pick from\n"
	.string "one of the items Director Ravine sent\l"
	.string "us?$"

IvyRiver_Ranger_FirstQuest_Reward_Text_0:
# 80 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Choose carefully! You might not get\n"
	.string "another one for a while.$"

IvyRiver_Ranger_FirstQuest_Reward_Text_1:
# 83 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Medichamite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_2:
# 83 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Aggronite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_3:
# 83 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Altarianite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_4:
# 83 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Lopunnite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_5:
# 83 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Banettite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_6:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Abomasite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_7:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gyaradosite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_8:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Mawilite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_9:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gardevoirite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_10:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Galladite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_11:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Houndoominite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_12:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Metagrossite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_13:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Scizorite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_14:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Kangaskhanite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_15:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Pinsirite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_16:
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Sharpedonite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_17:
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ampharosite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_18:
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Manectricite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_19:
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Absolite$"

IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0:
# 112 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Are you sure?$"

IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0:
# 126 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Great!\p"
	.string "You'll be eyeing the rank of Associate\n"
	.string "next. And for that, you'll need to clear\l"
	.string "one more mission.\p"
	.string "For your second mission, I'll have you\n"
	.string "help out our second floor for a while. We\l"
	.string "rely heavily on outside help for our\l"
	.string "research, so you'll be a huge help.\p"
	.string "Go upstairs and help out!$"
