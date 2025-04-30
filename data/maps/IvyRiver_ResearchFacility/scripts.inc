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
# 26 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_2
# 75 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 7
	goto_if_eq IvyRiver_Ranger_FirstQuest_5
# 88 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_11, MSGBOX_NPC
# 90 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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

IvyRiver_Ranger_FirstQuest_5:
# 76 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_8
# 77 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 80 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Text_9
# 81 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 82 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_10, MSGBOX_NPC
	end


IvyRiver_Ranger_FirstQuest_Reward::
# 96 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Reward_Text_0
# 97 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 98 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, IvyRiver_Ranger_FirstQuest_Reward_Text_1, IvyRiver_Ranger_FirstQuest_Reward_Text_2, IvyRiver_Ranger_FirstQuest_Reward_Text_3, IvyRiver_Ranger_FirstQuest_Reward_Text_4, IvyRiver_Ranger_FirstQuest_Reward_Text_5, IvyRiver_Ranger_FirstQuest_Reward_Text_6, IvyRiver_Ranger_FirstQuest_Reward_Text_7, IvyRiver_Ranger_FirstQuest_Reward_Text_8, IvyRiver_Ranger_FirstQuest_Reward_Text_9, IvyRiver_Ranger_FirstQuest_Reward_Text_10, IvyRiver_Ranger_FirstQuest_Reward_Text_11, IvyRiver_Ranger_FirstQuest_Reward_Text_12, IvyRiver_Ranger_FirstQuest_Reward_Text_13, IvyRiver_Ranger_FirstQuest_Reward_Text_14, IvyRiver_Ranger_FirstQuest_Reward_Text_15, IvyRiver_Ranger_FirstQuest_Reward_Text_16, IvyRiver_Ranger_FirstQuest_Reward_Text_17, IvyRiver_Ranger_FirstQuest_Reward_Text_18, IvyRiver_Ranger_FirstQuest_Reward_Text_19, IvyRiver_Ranger_FirstQuest_Reward_Text_20
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_2
IvyRiver_Ranger_FirstQuest_Reward_1:
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_5
IvyRiver_Ranger_FirstQuest_Reward_4:
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_8
IvyRiver_Ranger_FirstQuest_Reward_7:
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_11
IvyRiver_Ranger_FirstQuest_Reward_10:
# 109 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_14
IvyRiver_Ranger_FirstQuest_Reward_13:
# 110 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_17
IvyRiver_Ranger_FirstQuest_Reward_16:
# 111 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_20
IvyRiver_Ranger_FirstQuest_Reward_19:
# 112 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_23
IvyRiver_Ranger_FirstQuest_Reward_22:
# 113 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_26
IvyRiver_Ranger_FirstQuest_Reward_25:
# 114 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_29
IvyRiver_Ranger_FirstQuest_Reward_28:
# 115 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_32
IvyRiver_Ranger_FirstQuest_Reward_31:
# 116 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_35
IvyRiver_Ranger_FirstQuest_Reward_34:
# 117 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_38
IvyRiver_Ranger_FirstQuest_Reward_37:
# 118 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_41
IvyRiver_Ranger_FirstQuest_Reward_40:
# 119 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_44
IvyRiver_Ranger_FirstQuest_Reward_43:
# 120 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_47
IvyRiver_Ranger_FirstQuest_Reward_46:
# 121 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_50
IvyRiver_Ranger_FirstQuest_Reward_49:
# 122 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_53
IvyRiver_Ranger_FirstQuest_Reward_52:
# 123 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 18
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_56
IvyRiver_Ranger_FirstQuest_Reward_55:
# 124 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 19
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_58
	return

IvyRiver_Ranger_FirstQuest_Reward_2:
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_MEDICHAMITE
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_1

IvyRiver_Ranger_FirstQuest_Reward_5:
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_AGGRONITE
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_4

IvyRiver_Ranger_FirstQuest_Reward_8:
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_ALTARIANITE
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_7

IvyRiver_Ranger_FirstQuest_Reward_11:
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_LOPUNNITE
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_10

IvyRiver_Ranger_FirstQuest_Reward_14:
# 109 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_BANETTITE
# 109 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_13

IvyRiver_Ranger_FirstQuest_Reward_17:
# 110 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_ABOMASITE
# 110 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_16

IvyRiver_Ranger_FirstQuest_Reward_20:
# 111 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_GYARADOSITE
# 111 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_19

IvyRiver_Ranger_FirstQuest_Reward_23:
# 112 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_MAWILITE
# 112 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_22

IvyRiver_Ranger_FirstQuest_Reward_26:
# 113 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_GARDEVOIRITE
# 113 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_25

IvyRiver_Ranger_FirstQuest_Reward_29:
# 114 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_GALLADITE
# 114 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_28

IvyRiver_Ranger_FirstQuest_Reward_32:
# 115 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_HOUNDOOMINITE
# 115 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_31

IvyRiver_Ranger_FirstQuest_Reward_35:
# 116 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_METAGROSSITE
# 116 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_34

IvyRiver_Ranger_FirstQuest_Reward_38:
# 117 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_SCIZORITE
# 117 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_37

IvyRiver_Ranger_FirstQuest_Reward_41:
# 118 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_KANGASKHANITE
# 118 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_40

IvyRiver_Ranger_FirstQuest_Reward_44:
# 119 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_PINSIRITE
# 119 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_43

IvyRiver_Ranger_FirstQuest_Reward_47:
# 120 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_SHARPEDONITE
# 120 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_46

IvyRiver_Ranger_FirstQuest_Reward_50:
# 121 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_AMPHAROSITE
# 121 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_49

IvyRiver_Ranger_FirstQuest_Reward_53:
# 122 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_MANECTITE
# 122 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_52

IvyRiver_Ranger_FirstQuest_Reward_56:
# 123 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_ABSOLITE
# 123 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_55

IvyRiver_Ranger_FirstQuest_Reward_58:
# 124 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_LUCARIONITE
# 124 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	return


IvyRiver_Ranger_FirstQuest_Reward_Give::
# 128 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showitemdescription
# 129 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0, MSGBOX_YESNO
# 130 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_Give_1
# 135 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 136 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	return

IvyRiver_Ranger_FirstQuest_Reward_Give_1:
# 131 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 132 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	giveitem VAR_0x8006
# 133 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_RewardEnd
	return


IvyRiver_Ranger_FirstQuest_RewardEnd::
# 143 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0
# 144 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 147 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 4
# 148 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_RANGER, SUB_QUEST_1
# 150 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


IvyRiver_Ranger_TaurosTrigger::
# 170 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosTrigger_2
# 172 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 4
	goto_if_ge IvyRiver_Ranger_TaurosTrigger_5
IvyRiver_Ranger_TaurosTrigger_4:
# 192 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end

IvyRiver_Ranger_TaurosTrigger_2:
	end

IvyRiver_Ranger_TaurosTrigger_5:
# 174 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 175 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_0
# 176 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 178 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_0
# 179 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 180 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Ranger_TaurosTrigger_Movement_1
# 181 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 182 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 12
# 184 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_2
# 185 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 186 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_1
# 187 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 189 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_RANGER_TAUROS_USE
	goto IvyRiver_Ranger_TaurosTrigger_4


IvyRiver_Ranger_TaurosBreeder::
# 197 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosBreeder_2
# 200 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_1, MSGBOX_NPC
IvyRiver_Ranger_TaurosBreeder_1:
	end

IvyRiver_Ranger_TaurosBreeder_2:
# 198 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_0, MSGBOX_NPC
	goto IvyRiver_Ranger_TaurosBreeder_1


IvyRiver_Ranger_Scientist_A::
# 223 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_A, IvyRiver_Ranger_Scientist_A_2
# 229 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_1, MSGBOX_NPC
# 231 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_SHIINOTIC, 10, 3
# 232 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_2, MSGBOX_YESNO
# 233 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 234 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 236 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_A_5
# 241 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 242 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 243 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 244 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 245 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 247 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_SHIINOTIC
	goto_if_eq IvyRiver_Ranger_Scientist_A_7
# 260 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_2:
# 224 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_5:
# 237 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_7:
# 248 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q1, IvyRiver_Ranger_FirstQuest_Movement_1
# 249 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 250 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 251 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4
# 252 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 253 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 254 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5, MSGBOX_NPC
# 255 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 256 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 257 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_A
	end


IvyRiver_Ranger_Scientist_B::
# 267 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_B, IvyRiver_Ranger_Scientist_B_2
# 273 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_1, MSGBOX_NPC
# 275 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_TOEDSCOOL, 10, 3
# 276 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_2, MSGBOX_YESNO
# 277 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 278 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 280 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_B_5
# 285 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 286 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 287 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 288 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 289 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 291 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_TOEDSCOOL
	goto_if_eq IvyRiver_Ranger_Scientist_B_7
# 304 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_2:
# 268 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_5:
# 281 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_7:
# 292 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q2, IvyRiver_Ranger_FirstQuest_Movement_1
# 293 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 294 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 295 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_3
# 296 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 297 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 298 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5, MSGBOX_NPC
# 299 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 300 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 301 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_B
	end


IvyRiver_Ranger_Scientist_C::
# 312 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_C, IvyRiver_Ranger_Scientist_C_2
# 318 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_1, MSGBOX_NPC
# 320 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_LAPRAS, 10, 3
# 321 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_2, MSGBOX_YESNO
# 322 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 323 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 325 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_C_5
# 330 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 331 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 332 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 333 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 334 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 336 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_LAPRAS
	goto_if_eq IvyRiver_Ranger_Scientist_C_7
# 349 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_2:
# 313 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_5:
# 326 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_7:
# 337 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q3, IvyRiver_Ranger_FirstQuest_Movement_1
# 338 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 339 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 340 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_3
# 341 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 342 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 343 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5, MSGBOX_NPC
# 344 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 345 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 346 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_C
	end


IvyRiver_Ranger_NPC_A::
# 362 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_A_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_B::
# 366 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_B_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_C::
# 370 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_C_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_D::
# 374 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_D_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_E::
# 378 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_E_Text_0, MSGBOX_NPC
	end


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

# 175 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_0:
# 175 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	face_up
# 175 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_exclamation_mark
	step_end

# 180 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_1:
# 180 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
# 180 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
	step_end

# 184 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_2:
# 184 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
	.string "Sorry, we're a bare-bones setup here.$"

IvyRiver_Ranger_FirstQuest_Text_7:
# 65 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "How about this? Take your pick from one\n"
	.string "of the items Director Ravine sent us.$"

IvyRiver_Ranger_FirstQuest_Text_8:
# 76 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ah, {PLAYER}! There you are. The\n"
	.string "second floor has reported that your\l"
	.string "performance has been splendid! I\l"
	.string "hereby promote you to the rank of\l"
	.string "Associate!$"

IvyRiver_Ranger_FirstQuest_Text_9:
# 80 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER} was promoted from Candidate\n"
	.string "to Associate!$"

IvyRiver_Ranger_FirstQuest_Text_10:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Director Ravine will be happy to know.\n"
	.string "You should go and see him!$"

IvyRiver_Ranger_FirstQuest_Text_11:
# 88 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER}! I hope you're settling in\n"
	.string "well here.$"

IvyRiver_Ranger_FirstQuest_Reward_Text_0:
# 96 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Choose carefully! You might not get\n"
	.string "another one for a while.$"

IvyRiver_Ranger_FirstQuest_Reward_Text_1:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Medichamite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_2:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Aggronite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_3:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Altarianite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_4:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Lopunnite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_5:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Banettite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_6:
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Abomasite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_7:
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gyaradosite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_8:
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Mawilite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_9:
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gardevoirite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_10:
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Galladite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_11:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Houndoominite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_12:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Metagrossite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_13:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Scizorite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_14:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Kangaskhanite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_15:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Pinsirite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_16:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Sharpedonite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_17:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ampharosite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_18:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Manectricite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_19:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Absolite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_20:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Lucarionite$"

IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0:
# 129 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Are you sure?$"

IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0:
# 143 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
# 178 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey! You're the new Candidate right?\n"
	.string "Come here for a second.$"

IvyRiver_Ranger_TaurosTrigger_Text_1:
# 186 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "See this here Tauros? This is my baby\n"
	.string "right here - raised him all by myself, I\l"
	.string "did! This one's been traiend specially\l"
	.string "to take Rangers up and down Mt. Mirroh\l"
	.string "in a flash! You can head straight to\l"
	.string "Pelluca City or even to the Route 6 HQ\l"
	.string "if you like! All Candidates can use it.$"

IvyRiver_Ranger_TaurosBreeder_Text_0:
# 198 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gotta love the speed on this bull, eh?$"

IvyRiver_Ranger_TaurosBreeder_Text_1:
# 200 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "This here Tauros is my baby! It can take\n"
	.string "you up and down Mt Mirroh...oh, you\l"
	.string "aren't a Candidate yet? Sorry, only\l"
	.string "Candidates are allowed to use it.$"

IvyRiver_Ranger_Scientist_A_Text_0:
# 224 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "The spores are just spores. There's no\n"
	.string "connection to mega evolution. What a\l"
	.string "waste of time! I'll never get published\l"
	.string "like this.$"

IvyRiver_Ranger_Scientist_A_Text_1:
# 229 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Shiinotic emits\n"
	.string "flickering spores that can cause\l"
	.string "drowsiness? I'm studying whether those\l"
	.string "spores may be connected to mega\l"
	.string "evolution somehow. But since we're so\l"
	.string "far away from Vilethorn Woods, it's hard\l"
	.string "to conduct experiments.$"

IvyRiver_Ranger_Scientist_A_Text_2:
# 232 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Shiinotic that I can take\n"
	.string "spore samples of?$"

IvyRiver_Ranger_Scientist_A_Text_3:
# 237 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ah. Come back when you do!$"

IvyRiver_Ranger_Scientist_A_Text_4:
# 251 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Amazing! Such a beautiful, yet\n"
	.string "dangerous, Pokemon.\p"
	.string "Hang on while I take some samples.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_A_Text_5:
# 254 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "And...done!\p"
	.string "Thank you, Candidate. This'll be very\n"
	.string "helpful. Come back later if you want to\l"
	.string "find out the results of my research!$"

IvyRiver_Ranger_Scientist_A_Text_6:
# 260 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Shiinotic! You need to\n"
	.string "work harder, Candidate!$"

IvyRiver_Ranger_Scientist_B_Text_0:
# 268 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There seems to be no correlation\n"
	.string "between mega evolution and regional\l"
	.string "forms. This might be a failed\l"
	.string "experiment, but that's a learning in and\l"
	.string "of itself!$"

IvyRiver_Ranger_Scientist_B_Text_1:
# 273 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Toedscool is a\n"
	.string "regional form of a Pokemon called\l"
	.string "Tentacool? I'm studying whether\l"
	.string "regional forms may be connected to\l"
	.string "mega evolution somehow. But I have no\l"
	.string "idea where to find a Toedscool!$"

IvyRiver_Ranger_Scientist_B_Text_2:
# 276 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Toedscool that I can\n"
	.string "study?$"

IvyRiver_Ranger_Scientist_B_Text_3:
# 295 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Wonderful! Toedscool and Tentacool\n"
	.string "look so similar, yet so different. The\l"
	.string "beauty of nature!\p"
	.string "Hang on while I take some photographs.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_B_Text_4:
# 304 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Toedscool! You need\n"
	.string "to work harder, Candidate!$"

IvyRiver_Ranger_Scientist_C_Text_0:
# 313 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There's no connection between\n"
	.string "gigantamaxing and mega evolution.\p"
	.string "I'm neither happy nor sad. This is the\n"
	.string "nature of the job, after all.$"

IvyRiver_Ranger_Scientist_C_Text_1:
# 318 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that in other regions,\n"
	.string "Lapras can undergo a transformation\l"
	.string "known as Gigantamaxing? I'm studying\l"
	.string "it's connection with mega evolution.\l"
	.string "But a Lapras is hard to come by...$"

IvyRiver_Ranger_Scientist_C_Text_2:
# 321 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Lapras for me to take a\n"
	.string "look at?$"

IvyRiver_Ranger_Scientist_C_Text_3:
# 340 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Oh my! Such an elegant creature!\p"
	.string "Hang on while I make some notes.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_C_Text_4:
# 349 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Lapras! You need to\n"
	.string "work harder, Candidate!$"

IvyRiver_Ranger_NPC_A_Text_0:
# 362 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hello! Are you a Candidate too? I just\n"
	.string "reached here for my first mission.\l"
	.string "They're making me catch wild Dreepy!$"

IvyRiver_Ranger_NPC_B_Text_0:
# 366 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I've come to train my Kangaskhan with\n"
	.string "the CrazyTrain 2.0!$"

IvyRiver_Ranger_NPC_C_Text_0:
# 370 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "The CrazyTrain 2.0 is incredible! And\n"
	.string "you can even retrain your Pokemon any\l"
	.string "time you like!$"

IvyRiver_Ranger_NPC_D_Text_0:
# 374 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "You need to be an Associate to use the\n"
	.string "CrazyTrain 2.0. Come back after\l"
	.string "completing some more missions!$"

IvyRiver_Ranger_NPC_E_Text_0:
# 378 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "It's too stuffy upstairs! Too many\n"
	.string "stuffy scientists who don't know what\l"
	.string "its like to be out in the field.$"
