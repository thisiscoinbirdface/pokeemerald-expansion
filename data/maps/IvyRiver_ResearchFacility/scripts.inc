# 1 "data//maps/IvyRiver_ResearchFacility/scripts.pory"

# 2 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_MAIN, 4
# 3 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q1, 6
# 4 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q2, 7
# 5 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q3, 8
# 6 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_EV, 9
# 7 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_TAUROS_RANGER, 13

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
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, IvyRiver_Ranger_FirstQuest_Reward_Text_1, IvyRiver_Ranger_FirstQuest_Reward_Text_2, IvyRiver_Ranger_FirstQuest_Reward_Text_3, IvyRiver_Ranger_FirstQuest_Reward_Text_4, IvyRiver_Ranger_FirstQuest_Reward_Text_5, IvyRiver_Ranger_FirstQuest_Reward_Text_6, IvyRiver_Ranger_FirstQuest_Reward_Text_7, IvyRiver_Ranger_FirstQuest_Reward_Text_8, IvyRiver_Ranger_FirstQuest_Reward_Text_9, IvyRiver_Ranger_FirstQuest_Reward_Text_10, IvyRiver_Ranger_FirstQuest_Reward_Text_11, IvyRiver_Ranger_FirstQuest_Reward_Text_12, IvyRiver_Ranger_FirstQuest_Reward_Text_13, IvyRiver_Ranger_FirstQuest_Reward_Text_14, IvyRiver_Ranger_FirstQuest_Reward_Text_15, IvyRiver_Ranger_FirstQuest_Reward_Text_16, IvyRiver_Ranger_FirstQuest_Reward_Text_17, IvyRiver_Ranger_FirstQuest_Reward_Text_18, IvyRiver_Ranger_FirstQuest_Reward_Text_19
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
	setvar VAR_0x8006, ITEM_MANECTITE
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
# 127 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 130 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 4
# 131 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_RANGER, SUB_QUEST_1
# 133 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


IvyRiver_Ranger_TaurosTrigger::
# 153 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosTrigger_2
# 155 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 4
	goto_if_ge IvyRiver_Ranger_TaurosTrigger_5
IvyRiver_Ranger_TaurosTrigger_4:
# 175 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end

IvyRiver_Ranger_TaurosTrigger_2:
	end

IvyRiver_Ranger_TaurosTrigger_5:
# 157 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 158 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_0
# 159 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 161 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_0
# 162 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Ranger_TaurosTrigger_Movement_1
# 164 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 165 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 12
# 167 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_2
# 168 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 169 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_1
# 170 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 172 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_RANGER_TAUROS_USE
	goto IvyRiver_Ranger_TaurosTrigger_4


IvyRiver_Ranger_TaurosBreeder::
# 180 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosBreeder_2
# 183 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_1, MSGBOX_NPC
IvyRiver_Ranger_TaurosBreeder_1:
	end

IvyRiver_Ranger_TaurosBreeder_2:
# 181 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_0, MSGBOX_NPC
	goto IvyRiver_Ranger_TaurosBreeder_1


IvyRiver_Ranger_Scientist_A::
# 206 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_A, IvyRiver_Ranger_Scientist_A_2
# 212 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_1, MSGBOX_NPC
# 214 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_SHIINOTIC, 10, 3
# 215 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_2, MSGBOX_YESNO
# 216 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 217 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 219 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_A_5
# 224 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 225 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 226 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 227 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 228 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 230 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_SHIINOTIC
	goto_if_eq IvyRiver_Ranger_Scientist_A_7
# 243 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_2:
# 207 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_5:
# 220 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_7:
# 231 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q1, IvyRiver_Ranger_FirstQuest_Movement_1
# 232 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 233 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 234 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4
# 235 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 236 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 237 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5, MSGBOX_NPC
# 238 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 239 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 240 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_A
	end


IvyRiver_Ranger_Scientist_B::
# 250 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_B, IvyRiver_Ranger_Scientist_B_2
# 256 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_1, MSGBOX_NPC
# 258 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_TOEDSCOOL, 10, 3
# 259 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_2, MSGBOX_YESNO
# 260 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 261 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 263 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_B_5
# 268 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 269 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 270 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 271 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 272 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 274 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_TOEDSCOOL
	goto_if_eq IvyRiver_Ranger_Scientist_B_7
# 287 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_2:
# 251 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_5:
# 264 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_7:
# 275 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q2, IvyRiver_Ranger_FirstQuest_Movement_1
# 276 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 277 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 278 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_3
# 279 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 280 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 281 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5, MSGBOX_NPC
# 282 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 283 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 284 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_B
	end


IvyRiver_Ranger_Scientist_C::
# 295 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_C, IvyRiver_Ranger_Scientist_C_2
# 301 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_1, MSGBOX_NPC
# 303 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_LAPRAS, 10, 3
# 304 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_2, MSGBOX_YESNO
# 305 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 306 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 308 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_C_5
# 313 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 314 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 315 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 316 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 317 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 319 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_LAPRAS
	goto_if_eq IvyRiver_Ranger_Scientist_C_7
# 332 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_2:
# 296 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_5:
# 309 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_7:
# 320 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q3, IvyRiver_Ranger_FirstQuest_Movement_1
# 321 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 322 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 323 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_3
# 324 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 325 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 326 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5, MSGBOX_NPC
# 327 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 328 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 329 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_C
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

# 158 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_0:
# 158 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	face_up
# 158 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_exclamation_mark
	step_end

# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_1:
# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
	step_end

# 167 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_2:
# 167 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	face_up
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
	.string "Sorry, we're a bare-bones setup here.$"

IvyRiver_Ranger_FirstQuest_Text_7:
# 64 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "How about this? Take your pick from one\n"
	.string "of the items Director Ravine sent us.$"

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
	.string "You'll be eyeing the rank of Associate\n"
	.string "next. And for that, you'll need to clear\l"
	.string "one more mission.\p"
	.string "For your next mission, I'll have you help\n"
	.string "out our second floor. Three of our\l"
	.string "researchers need someone on the field\l"
	.string "and we're short on hands.\p"
	.string "Go upstairs, find the three researchers\n"
	.string "and complete their tasks!$"

IvyRiver_Ranger_TaurosTrigger_Text_0:
# 161 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey! You're the new Candidate right?\n"
	.string "Come here for a second.$"

IvyRiver_Ranger_TaurosTrigger_Text_1:
# 169 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "See this here Tauros? This is my baby\n"
	.string "right here - raised him all by myself, I\l"
	.string "did! This one's been traiend specially\l"
	.string "to take Rangers up and down Mt. Mirroh\l"
	.string "in a flash! You can head straight to\l"
	.string "Pelluca City or even to the Route 6 HQ\l"
	.string "if you like! All Candidates can use it.$"

IvyRiver_Ranger_TaurosBreeder_Text_0:
# 181 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gotta love the speed on this bull, eh?$"

IvyRiver_Ranger_TaurosBreeder_Text_1:
# 183 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "This here Tauros is my baby! It can take\n"
	.string "you up and down Mt Mirroh...oh, you\l"
	.string "aren't a Candidate yet? Sorry, only\l"
	.string "Candidates are allowed to use it.$"

IvyRiver_Ranger_Scientist_A_Text_0:
# 207 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "The spores are just spores. There's no\n"
	.string "connection to mega evolution. What a\l"
	.string "waste of time! I'll never get published\l"
	.string "like this.$"

IvyRiver_Ranger_Scientist_A_Text_1:
# 212 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Shiinotic emits\n"
	.string "flickering spores that can cause\l"
	.string "drowsiness? I'm studying whether those\l"
	.string "spores may be connected to mega\l"
	.string "evolution somehow. But since we're so\l"
	.string "far away from Vilethorn Woods, it's hard\l"
	.string "to conduct experiments.$"

IvyRiver_Ranger_Scientist_A_Text_2:
# 215 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Shiinotic that I can take\n"
	.string "spore samples of?$"

IvyRiver_Ranger_Scientist_A_Text_3:
# 220 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ah. Come back when you do!$"

IvyRiver_Ranger_Scientist_A_Text_4:
# 234 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Amazing! Such a beautiful, yet\n"
	.string "dangerous, Pokemon.\p"
	.string "Hang on while I take some samples.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_A_Text_5:
# 237 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "And...done!\p"
	.string "Thank you, Candidate. This'll be very\n"
	.string "helpful. Come back later if you want to\l"
	.string "find out the results of my research!$"

IvyRiver_Ranger_Scientist_A_Text_6:
# 243 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Shiinotic! You need to\n"
	.string "work harder, Candidate!$"

IvyRiver_Ranger_Scientist_B_Text_0:
# 251 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There seems to be no correlation\n"
	.string "between mega evolution and regional\l"
	.string "forms. This might be a failed\l"
	.string "experiment, but that's a learning in and\l"
	.string "of itself!$"

IvyRiver_Ranger_Scientist_B_Text_1:
# 256 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Toedscool is a\n"
	.string "regional form of a Pokemon called\l"
	.string "Tentacool? I'm studying whether\l"
	.string "regional forms may be connected to\l"
	.string "mega evolution somehow. But I have no\l"
	.string "idea where to find a Toedscool!$"

IvyRiver_Ranger_Scientist_B_Text_2:
# 259 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Toedscool that I can\n"
	.string "study?$"

IvyRiver_Ranger_Scientist_B_Text_3:
# 278 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Wonderful! Toedscool and Tentacool\n"
	.string "look so similar, yet so different. The\l"
	.string "beauty of nature!\p"
	.string "Hang on while I take some photographs.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_B_Text_4:
# 287 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Toedscool! You need\n"
	.string "to work harder, Candidate!$"

IvyRiver_Ranger_Scientist_C_Text_0:
# 296 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There's no connection between\n"
	.string "gigantamaxing and mega evolution.\p"
	.string "I'm neither happy nor sad. This is the\n"
	.string "nature of the job, after all.$"

IvyRiver_Ranger_Scientist_C_Text_1:
# 301 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that in other regions,\n"
	.string "Lapras can undergo a transformation\l"
	.string "known as Gigantamaxing? I'm studying\l"
	.string "it's connection with mega evolution.\l"
	.string "But a Lapras is hard to come by...$"

IvyRiver_Ranger_Scientist_C_Text_2:
# 304 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Lapras for me to take a\n"
	.string "look at?$"

IvyRiver_Ranger_Scientist_C_Text_3:
# 323 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Oh my! Such an elegant creature!\p"
	.string "Hang on while I make some notes.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_C_Text_4:
# 332 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Lapras! You need to\n"
	.string "work harder, Candidate!$"
