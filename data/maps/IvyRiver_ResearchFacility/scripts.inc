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
# 8 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_TAUROS_RANGER, 13

IvyRiver_ResearchFacility_MapScripts::
	.byte 0


IvyRiver_Ranger_FirstQuest::
# 26 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_2
# 75 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end

IvyRiver_Ranger_FirstQuest_2:
# 29 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 30 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	faceplayer
# 31 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_0
# 32 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 33 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 34 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_0
# 35 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 36 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 37 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_1
# 38 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 39 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	removeitem ITEM_RANGER_PACKAGE
# 40 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 41 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_2
# 42 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 43 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 44 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_1
# 45 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 46 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 47 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_3
# 48 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 49 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 50 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_4
# 51 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 52 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 55 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Text_5
# 56 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 57 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 59 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_6
# 60 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 61 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 62 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_1
# 63 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 64 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 65 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_7
# 66 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 67 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 70 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	end


IvyRiver_Ranger_FirstQuest_Reward::
# 81 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Reward_Text_0
# 82 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 83 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, IvyRiver_Ranger_FirstQuest_Reward_Text_1, IvyRiver_Ranger_FirstQuest_Reward_Text_2, IvyRiver_Ranger_FirstQuest_Reward_Text_3, IvyRiver_Ranger_FirstQuest_Reward_Text_4, IvyRiver_Ranger_FirstQuest_Reward_Text_5, IvyRiver_Ranger_FirstQuest_Reward_Text_6, IvyRiver_Ranger_FirstQuest_Reward_Text_7, IvyRiver_Ranger_FirstQuest_Reward_Text_8, IvyRiver_Ranger_FirstQuest_Reward_Text_9, IvyRiver_Ranger_FirstQuest_Reward_Text_10, IvyRiver_Ranger_FirstQuest_Reward_Text_11, IvyRiver_Ranger_FirstQuest_Reward_Text_12, IvyRiver_Ranger_FirstQuest_Reward_Text_13, IvyRiver_Ranger_FirstQuest_Reward_Text_14, IvyRiver_Ranger_FirstQuest_Reward_Text_15, IvyRiver_Ranger_FirstQuest_Reward_Text_16, IvyRiver_Ranger_FirstQuest_Reward_Text_17, IvyRiver_Ranger_FirstQuest_Reward_Text_18, IvyRiver_Ranger_FirstQuest_Reward_Text_19
# 90 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_2
IvyRiver_Ranger_FirstQuest_Reward_1:
# 91 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_5
IvyRiver_Ranger_FirstQuest_Reward_4:
# 92 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_8
IvyRiver_Ranger_FirstQuest_Reward_7:
# 93 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_11
IvyRiver_Ranger_FirstQuest_Reward_10:
# 94 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_14
IvyRiver_Ranger_FirstQuest_Reward_13:
# 95 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_17
IvyRiver_Ranger_FirstQuest_Reward_16:
# 96 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_20
IvyRiver_Ranger_FirstQuest_Reward_19:
# 97 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_23
IvyRiver_Ranger_FirstQuest_Reward_22:
# 98 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_26
IvyRiver_Ranger_FirstQuest_Reward_25:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_29
IvyRiver_Ranger_FirstQuest_Reward_28:
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_32
IvyRiver_Ranger_FirstQuest_Reward_31:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_35
IvyRiver_Ranger_FirstQuest_Reward_34:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_38
IvyRiver_Ranger_FirstQuest_Reward_37:
# 103 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_41
IvyRiver_Ranger_FirstQuest_Reward_40:
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_44
IvyRiver_Ranger_FirstQuest_Reward_43:
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_47
IvyRiver_Ranger_FirstQuest_Reward_46:
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_50
IvyRiver_Ranger_FirstQuest_Reward_49:
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_53
IvyRiver_Ranger_FirstQuest_Reward_52:
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 18
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_55
	return

IvyRiver_Ranger_FirstQuest_Reward_2:
# 90 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_MEDICHAMITE
# 90 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_1

IvyRiver_Ranger_FirstQuest_Reward_5:
# 91 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_AGGRONITE
# 91 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_4

IvyRiver_Ranger_FirstQuest_Reward_8:
# 92 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_ALTARIANITE
# 92 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_7

IvyRiver_Ranger_FirstQuest_Reward_11:
# 93 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_LOPUNNITE
# 93 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_10

IvyRiver_Ranger_FirstQuest_Reward_14:
# 94 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_BANETTITE
# 94 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_13

IvyRiver_Ranger_FirstQuest_Reward_17:
# 95 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_ABOMASITE
# 95 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_16

IvyRiver_Ranger_FirstQuest_Reward_20:
# 96 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_GYARADOSITE
# 96 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_19

IvyRiver_Ranger_FirstQuest_Reward_23:
# 97 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_MAWILITE
# 97 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_22

IvyRiver_Ranger_FirstQuest_Reward_26:
# 98 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_GARDEVOIRITE
# 98 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_25

IvyRiver_Ranger_FirstQuest_Reward_29:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_GALLADITE
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_28

IvyRiver_Ranger_FirstQuest_Reward_32:
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_HOUNDOOMINITE
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_31

IvyRiver_Ranger_FirstQuest_Reward_35:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_METAGROSSITE
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_34

IvyRiver_Ranger_FirstQuest_Reward_38:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_SCIZORITE
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_37

IvyRiver_Ranger_FirstQuest_Reward_41:
# 103 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_KANGASKHANITE
# 103 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_40

IvyRiver_Ranger_FirstQuest_Reward_44:
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_PINSIRITE
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_43

IvyRiver_Ranger_FirstQuest_Reward_47:
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_SHARPEDONITE
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_46

IvyRiver_Ranger_FirstQuest_Reward_50:
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_AMPHAROSITE
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_49

IvyRiver_Ranger_FirstQuest_Reward_53:
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_MANECTITE
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_52

IvyRiver_Ranger_FirstQuest_Reward_55:
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_ABSOLITE
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	return


IvyRiver_Ranger_FirstQuest_Reward_Give::
# 112 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showitemdescription
# 113 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0, MSGBOX_YESNO
# 114 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_Give_1
# 119 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 120 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	return

IvyRiver_Ranger_FirstQuest_Reward_Give_1:
# 115 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 116 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	giveitem VAR_0x8006
# 117 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_RewardEnd
	return


IvyRiver_Ranger_FirstQuest_RewardEnd::
# 127 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0
# 128 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 131 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 4
# 132 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_RANGER, SUB_QUEST_1
# 134 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


IvyRiver_Ranger_TaurosTrigger::
# 154 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosTrigger_2
# 156 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 4
	goto_if_ge IvyRiver_Ranger_TaurosTrigger_5
IvyRiver_Ranger_TaurosTrigger_4:
# 176 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end

IvyRiver_Ranger_TaurosTrigger_2:
	end

IvyRiver_Ranger_TaurosTrigger_5:
# 158 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 159 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_0
# 160 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 162 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_0
# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 164 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Ranger_TaurosTrigger_Movement_1
# 165 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 166 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 12
# 168 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_2
# 169 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 170 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_1
# 171 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 173 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_RANGER_TAUROS_USE
	goto IvyRiver_Ranger_TaurosTrigger_4


IvyRiver_Ranger_TaurosBreeder::
# 181 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosBreeder_2
# 184 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_1, MSGBOX_NPC
IvyRiver_Ranger_TaurosBreeder_1:
	end

IvyRiver_Ranger_TaurosBreeder_2:
# 182 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_0, MSGBOX_NPC
	goto IvyRiver_Ranger_TaurosBreeder_1


# 34 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_FirstQuest_Movement_0:
# 34 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_question_mark
	step_end

# 44 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_FirstQuest_Movement_1:
# 44 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_exclamation_mark
	step_end

# 159 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_0:
# 159 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	face_up
# 159 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_exclamation_mark
	step_end

# 164 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_1:
# 164 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
# 164 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
	step_end

# 168 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_2:
# 168 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	face_up
	step_end

IvyRiver_Ranger_FirstQuest_Text_0:
# 31 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hmm? A Recruit? Welcome to the Ivy\n"
	.string "River Ranger Institute! We're a tad\l"
	.string "remote - to say the least - but we've\l"
	.string "made this place our home...and yours\l"
	.string "too!\p"
	.string "...$"

IvyRiver_Ranger_FirstQuest_Text_1:
# 37 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hmm? Ravine has a package for me?$"

IvyRiver_Ranger_FirstQuest_Text_2:
# 41 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER} gave the Ranger scientist\n"
	.string "the Ranger Package.$"

IvyRiver_Ranger_FirstQuest_Text_3:
# 47 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
# 50 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
# 55 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER} was promoted from Recruit\n"
	.string "to Candidate!$"

IvyRiver_Ranger_FirstQuest_Text_6:
# 59 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I should also give you a reward...hmm,\n"
	.string "what do we have with us?\p"
	.string "Sorry, we're quite a bare-bones setup\n"
	.string "here.$"

IvyRiver_Ranger_FirstQuest_Text_7:
# 65 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "How about this? Why don't you pick from\n"
	.string "one of the items Director Ravine sent\l"
	.string "us?$"

IvyRiver_Ranger_FirstQuest_Reward_Text_0:
# 81 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Choose carefully! You might not get\n"
	.string "another one for a while.$"

IvyRiver_Ranger_FirstQuest_Reward_Text_1:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Medichamite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_2:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Aggronite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_3:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Altarianite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_4:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Lopunnite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_5:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Banettite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_6:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Abomasite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_7:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gyaradosite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_8:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Mawilite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_9:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gardevoirite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_10:
# 85 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Galladite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_11:
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Houndoominite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_12:
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Metagrossite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_13:
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Scizorite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_14:
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Kangaskhanite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_15:
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Pinsirite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_16:
# 87 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Sharpedonite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_17:
# 87 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ampharosite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_18:
# 87 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Manectricite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_19:
# 87 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Absolite$"

IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0:
# 113 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Are you sure?$"

IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0:
# 127 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
# 162 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey! You're the new Candidate right?\n"
	.string "Come here for a second.$"

IvyRiver_Ranger_TaurosTrigger_Text_1:
# 170 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "See this here Tauros? This is my baby\n"
	.string "right here - raised him all by myself, I\l"
	.string "did! This one's been traiend specially\l"
	.string "to take Rangers up and down Mt. Mirroh\l"
	.string "in a flash! You can head straight to\l"
	.string "Pelluca City or even to the Route 6 HQ\l"
	.string "if you like! All Candidates can use it.$"

IvyRiver_Ranger_TaurosBreeder_Text_0:
# 182 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gotta love the speed on this bull, eh?$"

IvyRiver_Ranger_TaurosBreeder_Text_1:
# 184 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "This here Tauros is my baby! It can take\n"
	.string "you up and down Mt Mirroh...oh, you\l"
	.string "aren't a Candidate yet? Sorry, only\l"
	.string "Candidates are allowed to use it.$"
