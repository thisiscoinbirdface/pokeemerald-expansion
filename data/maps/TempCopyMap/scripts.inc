TempCopyMap_MapScripts::
	.byte 0


Common_EventScript_NurseDemo::
# 4 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 5 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 6 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseDemo_Text_0
# 7 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Common_EventScript_MintVendingMachine::
# 17 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_0, MSGBOX_YESNO
# 18 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_2
# 23 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 200
# 24 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_5
# 29 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	return

Common_EventScript_MintVendingMachine_2:
# 19 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_MintVendingMachine_5:
# 25 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_1
# 26 "data//maps/TempCopyMap/scripts.pory"
	release
	end


MintVendingMachine_CheckBadge::
# 35 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MintVendingMachine_CheckBadge_2
# 38 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MintVendingMachine_CheckBadge_5
# 41 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MintVendingMachine_CheckBadge_8
# 44 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MintVendingMachine_CheckBadge_11
# 47 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MintVendingMachine_CheckBadge_14
# 50 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MintVendingMachine_CheckBadge_17
# 53 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_NoBadges
MintVendingMachine_CheckBadge_1:
# 61 "data//maps/TempCopyMap/scripts.pory"
	release
	end

MintVendingMachine_CheckBadge_2:
# 36 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_SixBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_5:
# 39 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FiveBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_8:
# 42 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FourBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_11:
# 45 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_ThreeBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_14:
# 48 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_TwoBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_17:
# 51 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_OneBadge
	goto MintVendingMachine_CheckBadge_1


Mart_Mints_NoBadges::
# 68 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 69 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_NoBadges_Text_0
# 70 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 71 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3
# 72 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 73 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 74 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_OneBadge::
# 77 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 78 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_OneBadge_Text_0
# 79 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 80 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3
# 83 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 84 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 85 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_TwoBadges::
# 88 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 89 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_TwoBadges_Text_0
# 90 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 91 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3
# 94 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 95 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 96 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_ThreeBadges::
# 99 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 100 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_ThreeBadges_Text_0
# 101 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 102 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3
# 106 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 107 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 108 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FourBadges::
# 111 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 112 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_FourBadges_Text_0
# 113 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 114 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3
# 119 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 120 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 121 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FiveBadges::
# 124 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 125 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_FiveBadges_Text_0
# 126 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 127 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3
# 132 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 133 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 134 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_SixBadges::
# 137 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 138 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_SixBadges_Text_0
# 139 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 140 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3, Mart_Mints_SixBadges_Text_1, Mart_Mints_SixBadges_Text_2, Mart_Mints_SixBadges_Text_3
# 146 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 147 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 148 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
# 150 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 151 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Mart_MintPurchaseDecision::
# 168 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Mart_MintPurchaseDecision_2
Mart_MintPurchaseDecision_1:
# 169 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Mart_MintPurchaseDecision_5
Mart_MintPurchaseDecision_4:
# 170 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq Mart_MintPurchaseDecision_8
Mart_MintPurchaseDecision_7:
# 171 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq Mart_MintPurchaseDecision_11
Mart_MintPurchaseDecision_10:
# 172 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Mart_MintPurchaseDecision_14
Mart_MintPurchaseDecision_13:
# 174 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Mart_MintPurchaseDecision_17
Mart_MintPurchaseDecision_16:
# 175 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_eq Mart_MintPurchaseDecision_20
Mart_MintPurchaseDecision_19:
# 176 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 7
	goto_if_eq Mart_MintPurchaseDecision_23
Mart_MintPurchaseDecision_22:
# 177 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 8
	goto_if_eq Mart_MintPurchaseDecision_26
Mart_MintPurchaseDecision_25:
# 178 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 9
	goto_if_eq Mart_MintPurchaseDecision_29
Mart_MintPurchaseDecision_28:
# 180 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Mart_MintPurchaseDecision_32
Mart_MintPurchaseDecision_31:
# 181 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 11
	goto_if_eq Mart_MintPurchaseDecision_35
Mart_MintPurchaseDecision_34:
# 182 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 12
	goto_if_eq Mart_MintPurchaseDecision_38
Mart_MintPurchaseDecision_37:
# 183 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 13
	goto_if_eq Mart_MintPurchaseDecision_41
Mart_MintPurchaseDecision_40:
# 185 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 14
	goto_if_eq Mart_MintPurchaseDecision_44
Mart_MintPurchaseDecision_43:
# 186 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 15
	goto_if_eq Mart_MintPurchaseDecision_47
Mart_MintPurchaseDecision_46:
# 187 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 16
	goto_if_eq Mart_MintPurchaseDecision_50
Mart_MintPurchaseDecision_49:
# 188 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 17
	goto_if_eq Mart_MintPurchaseDecision_53
Mart_MintPurchaseDecision_52:
# 189 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 18
	goto_if_eq Mart_MintPurchaseDecision_56
Mart_MintPurchaseDecision_55:
# 190 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 19
	goto_if_eq Mart_MintPurchaseDecision_59
Mart_MintPurchaseDecision_58:
# 191 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 20
	goto_if_eq Mart_MintPurchaseDecision_62
Mart_MintPurchaseDecision_61:
# 193 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Mart_MintPurchaseDecision_2:
# 168 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_IMPISH_MINT
# 168 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_1

Mart_MintPurchaseDecision_5:
# 169 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_CALM_MINT
# 169 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_4

Mart_MintPurchaseDecision_8:
# 170 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_RELAXED_MINT
# 170 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_7

Mart_MintPurchaseDecision_11:
# 171 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_BOLD_MINT
# 171 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_10

Mart_MintPurchaseDecision_14:
# 172 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_GENTLE_MINT
# 172 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_13

Mart_MintPurchaseDecision_17:
# 174 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_CAREFUL_MINT
# 174 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_16

Mart_MintPurchaseDecision_20:
# 175 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SASSY_MINT
# 175 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_19

Mart_MintPurchaseDecision_23:
# 176 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SERIOUS_MINT
# 176 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_22

Mart_MintPurchaseDecision_26:
# 177 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_BRAVE_MINT
# 177 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_25

Mart_MintPurchaseDecision_29:
# 178 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_NAIVE_MINT
# 178 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_28

Mart_MintPurchaseDecision_32:
# 180 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_HASTY_MINT
# 180 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_31

Mart_MintPurchaseDecision_35:
# 181 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_LAX_MINT
# 181 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_34

Mart_MintPurchaseDecision_38:
# 182 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_MILD_MINT
# 182 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_37

Mart_MintPurchaseDecision_41:
# 183 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_RASH_MINT
# 183 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_40

Mart_MintPurchaseDecision_44:
# 185 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_TIMID_MINT
# 185 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_43

Mart_MintPurchaseDecision_47:
# 186 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_NAUGHTY_MINT
# 186 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_46

Mart_MintPurchaseDecision_50:
# 187 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_QUIET_MINT
# 187 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_49

Mart_MintPurchaseDecision_53:
# 188 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_LONELY_MINT
# 188 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_52

Mart_MintPurchaseDecision_56:
# 189 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_JOLLY_MINT
# 189 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_55

Mart_MintPurchaseDecision_59:
# 190 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_ADAMANT_MINT
# 190 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_58

Mart_MintPurchaseDecision_62:
# 191 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_MODEST_MINT
# 191 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_61


MintPurchase_Common::
# 233 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 235 "data//maps/TempCopyMap/scripts.pory"
	msgbox MintPurchase_Common_Text_0, MSGBOX_YESNO
# 237 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MintPurchase_Common_2
# 245 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 246 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end

MintPurchase_Common_2:
# 238 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 239 "data//maps/TempCopyMap/scripts.pory"
	giveitem VAR_0x8006
# 240 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 241 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Impish::
# 255 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 257 "data//maps/TempCopyMap/scripts.pory"
	msgbox MintPurchase_Common_Text_0, MSGBOX_YESNO
# 259 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MintPurchase_Impish_2
MintPurchase_Impish_1:
# 263 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end

MintPurchase_Impish_2:
# 260 "data//maps/TempCopyMap/scripts.pory"
	giveitem VAR_0x8006
# 261 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
	goto MintPurchase_Impish_1


MintPurchase_Calm::
# 269 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 270 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CALM_MINT
# 271 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Relaxed::
# 276 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 277 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_RELAXED_MINT
# 278 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Modest::
# 283 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 284 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MODEST_MINT
# 285 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Gentle::
# 290 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 291 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_GENTLE_MINT
# 292 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Careful::
# 297 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 298 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CAREFUL_MINT
# 299 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Sassy::
# 304 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 305 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SASSY_MINT
# 306 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naughty::
# 311 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 312 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT
# 313 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Timid::
# 318 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 319 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_TIMID_MINT
# 320 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Hasty::
# 325 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 326 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_HASTY_MINT
# 327 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Brave::
# 332 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 333 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BRAVE_MINT
# 334 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Bold::
# 339 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 340 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BOLD_MINT
# 341 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Adamant::
# 346 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 347 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
# 348 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Mild::
# 353 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 354 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 355 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Rash::
# 360 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 361 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 362 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naive::
# 367 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 368 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAIVE_MINT
# 369 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lax::
# 374 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 375 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LAX_MINT
# 376 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lonely::
# 381 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 382 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LONELY_MINT
# 383 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Quiet::
# 388 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 389 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_QUIET_MINT
# 390 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Jolly::
# 395 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 396 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_JOLLY_MINT
# 397 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Serious::
# 402 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 403 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 404 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


Common_EventScript_NurseJoyOnRoute::
# 429 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_HEAL_PASS
# 430 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_2
# 459 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_4
# 460 "data//maps/TempCopyMap/scripts.pory"
	release
Common_EventScript_NurseJoyOnRoute_1:
	return

Common_EventScript_NurseJoyOnRoute_2:
# 432 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_0, MSGBOX_YESNO
# 434 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_5
# 453 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_3
# 454 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_NurseJoyOnRoute_1

Common_EventScript_NurseJoyOnRoute_5:
# 435 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 436 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 437 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 438 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 439 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 440 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 441 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 442 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 443 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 444 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 446 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_1
# 447 "data//maps/TempCopyMap/scripts.pory"
	release
# 448 "data//maps/TempCopyMap/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 449 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_2
# 450 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_NurseJoyOnRoute_1


Common_EventScript_ChanseyOnRoute::
# 466 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 467 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 468 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 469 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_ChanseyOnRoute_Text_0
# 470 "data//maps/TempCopyMap/scripts.pory"
	release
# 471 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Route5_Greta_AskToShow::
# 499 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_0, MSGBOX_YESNO
# 500 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_AskToShow_2
Route5_Greta_AskToShow_1:
# 502 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1
# 503 "data//maps/TempCopyMap/scripts.pory"
	release
# 505 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return

Route5_Greta_AskToShow_2:
# 500 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	goto Route5_Greta_AskToShow_1


Route5_Greta_ShowItemsForSale::
# 509 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 510 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_ShowItemsForSale_Text_0
# 512 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route5_Greta_ShowItemsForSale_Text_1, Route5_Greta_ShowItemsForSale_Text_2, Route5_Greta_ShowItemsForSale_Text_3
# 514 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_ShowItemsForSale_2
Route5_Greta_ShowItemsForSale_1:
# 518 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_ShowItemsForSale_5
Route5_Greta_ShowItemsForSale_4:
# 522 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route5_Greta_ShowItemsForSale_8
Route5_Greta_ShowItemsForSale_7:
# 527 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 528 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_AskToShow
	return

Route5_Greta_ShowItemsForSale_2:
# 515 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 516 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_StrangeEgg
	goto Route5_Greta_ShowItemsForSale_1

Route5_Greta_ShowItemsForSale_5:
# 519 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 520 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_MysteriousRock
	goto Route5_Greta_ShowItemsForSale_4

Route5_Greta_ShowItemsForSale_8:
# 523 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 524 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_UglyFish
	goto Route5_Greta_ShowItemsForSale_7


Route5_Greta_StrangeEgg::
# 533 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 10000
# 534 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_StrangeEgg_1
# 539 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_1, MSGBOX_YESNO
# 540 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_StrangeEgg_4
# 548 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_1:
# 535 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 536 "data//maps/TempCopyMap/scripts.pory"
	release
# 537 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_4:
# 541 "data//maps/TempCopyMap/scripts.pory"
	removemoney 10000
# 542 "data//maps/TempCopyMap/scripts.pory"
	giveegg SPECIES_HONEDGE
# 543 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_2, MSGBOX_SIGN
# 544 "data//maps/TempCopyMap/scripts.pory"
	release
# 545 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 546 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_UglyFish::
# 554 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 100
# 555 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_UglyFish_1
# 560 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_0, MSGBOX_YESNO
# 561 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_UglyFish_4
# 569 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_1:
# 556 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 557 "data//maps/TempCopyMap/scripts.pory"
	release
# 558 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_4:
# 562 "data//maps/TempCopyMap/scripts.pory"
	removemoney 100
# 563 "data//maps/TempCopyMap/scripts.pory"
	givemon SPECIES_FEEBAS, 5
# 564 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_1, MSGBOX_SIGN
# 565 "data//maps/TempCopyMap/scripts.pory"
	release
# 566 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 567 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_MysteriousRock::
# 575 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5000
# 576 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_MysteriousRock_1
# 581 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_MysteriousRock_Text_0, MSGBOX_YESNO
# 582 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_MysteriousRock_4
# 588 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_1:
# 577 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 578 "data//maps/TempCopyMap/scripts.pory"
	release
# 579 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_4:
# 583 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5000
# 584 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 585 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 586 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


PellucaCity_Greta_AskToShow::
# 613 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_0, MSGBOX_YESNO
# 614 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_AskToShow_2
PellucaCity_Greta_AskToShow_1:
# 616 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 617 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1
# 618 "data//maps/TempCopyMap/scripts.pory"
	release
# 620 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return

PellucaCity_Greta_AskToShow_2:
# 614 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	goto PellucaCity_Greta_AskToShow_1


PellucaCity_Greta_ShowItemsForSale::
# 624 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 625 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_ShowItemsForSale_Text_0
# 627 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Greta_ShowItemsForSale_Text_1, PellucaCity_Greta_ShowItemsForSale_Text_2, PellucaCity_Greta_ShowItemsForSale_Text_3
# 629 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_2
PellucaCity_Greta_ShowItemsForSale_1:
# 633 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_5
PellucaCity_Greta_ShowItemsForSale_4:
# 637 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_8
PellucaCity_Greta_ShowItemsForSale_7:
# 642 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_AskToShow
	return

PellucaCity_Greta_ShowItemsForSale_2:
# 630 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 631 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_FireStone
	goto PellucaCity_Greta_ShowItemsForSale_1

PellucaCity_Greta_ShowItemsForSale_5:
# 634 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 635 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShinyStone
	goto PellucaCity_Greta_ShowItemsForSale_4

PellucaCity_Greta_ShowItemsForSale_8:
# 638 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 639 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_WaterStone
	goto PellucaCity_Greta_ShowItemsForSale_7


PellucaCity_Greta_FireStone::
# 647 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 648 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_FireStone_1
# 653 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_FIRE_STONE
# 654 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 655 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_FireStone_Text_0, MSGBOX_YESNO
# 656 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_FireStone_4
# 663 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 664 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_FireStone_1:
# 649 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 650 "data//maps/TempCopyMap/scripts.pory"
	release
# 651 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_FireStone_4:
# 657 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 658 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 659 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 660 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 661 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_ShinyStone::
# 670 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 671 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_ShinyStone_1
# 676 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SHINY_STONE
# 677 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 678 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_ShinyStone_Text_0, MSGBOX_YESNO
# 679 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_ShinyStone_4
# 686 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 687 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_ShinyStone_1:
# 672 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 673 "data//maps/TempCopyMap/scripts.pory"
	release
# 674 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_ShinyStone_4:
# 680 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 681 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 682 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SHINY_STONE
# 683 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 684 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_WaterStone::
# 693 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 694 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_WaterStone_1
# 699 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_WATER_STONE
# 700 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 701 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_WaterStone_Text_0, MSGBOX_YESNO
# 702 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_WaterStone_4
# 709 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 710 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_WaterStone_1:
# 695 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 696 "data//maps/TempCopyMap/scripts.pory"
	release
# 697 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_WaterStone_4:
# 703 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 704 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 705 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_WATER_STONE
# 706 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 707 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


Common_EventScript_HyperTrainer::
# 732 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 733 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 735 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_RARE_SHARD
# 736 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_2
# 741 "data//maps/TempCopyMap/scripts.pory"
	fadenewbgm MUS_B_PYRAMID_TOP
# 743 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_1, MSGBOX_YESNO
# 745 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_5
# 748 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_2
# 749 "data//maps/TempCopyMap/scripts.pory"
	special ChoosePartyMon
# 750 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 751 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_HyperTrainer_8
# 754 "data//maps/TempCopyMap/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 755 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_3
# 756 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_HyperTrainer_Text_4, Common_EventScript_HyperTrainer_Text_5, Common_EventScript_HyperTrainer_Text_6, Common_EventScript_HyperTrainer_Text_7, Common_EventScript_HyperTrainer_Text_8, Common_EventScript_HyperTrainer_Text_9
# 758 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_12
Common_EventScript_HyperTrainer_11:
# 759 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_HyperTrainer_15
Common_EventScript_HyperTrainer_14:
# 760 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_HyperTrainer_18
Common_EventScript_HyperTrainer_17:
# 761 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_HyperTrainer_21
Common_EventScript_HyperTrainer_20:
# 762 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_HyperTrainer_24
Common_EventScript_HyperTrainer_23:
# 763 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Common_EventScript_HyperTrainer_27
Common_EventScript_HyperTrainer_26:
# 765 "data//maps/TempCopyMap/scripts.pory"
	release
# 766 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_TO_WHITE
# 767 "data//maps/TempCopyMap/scripts.pory"
	playse SE_USE_ITEM
# 768 "data//maps/TempCopyMap/scripts.pory"
	delay 24
# 769 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 771 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_10
# 772 "data//maps/TempCopyMap/scripts.pory"
	release
# 773 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
Common_EventScript_HyperTrainer_4:
# 776 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_HyperTrainer_2:
# 737 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_0, MSGBOX_NPC
	end

Common_EventScript_HyperTrainer_5:
	goto Common_EventScript_HyperTrainer_4

Common_EventScript_HyperTrainer_8:
# 752 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_HyperTrainer_4

Common_EventScript_HyperTrainer_12:
# 758 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto Common_EventScript_HyperTrainer_11

Common_EventScript_HyperTrainer_15:
# 759 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_14

Common_EventScript_HyperTrainer_18:
# 760 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_17

Common_EventScript_HyperTrainer_21:
# 761 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_20

Common_EventScript_HyperTrainer_24:
# 762 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_23

Common_EventScript_HyperTrainer_27:
# 763 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto Common_EventScript_HyperTrainer_26


Common_EventScript_DrifblimTravels_ToSilversun::
# 810 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 811 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 812 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 813 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 814 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_2
Common_EventScript_DrifblimTravels_ToSilversun_1:
# 818 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_1, MSGBOX_YESNO
# 820 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_5
# 830 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToSilversun_4:
	end

Common_EventScript_DrifblimTravels_ToSilversun_2:
# 815 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	goto Common_EventScript_DrifblimTravels_ToSilversun_1

Common_EventScript_DrifblimTravels_ToSilversun_5:
# 821 "data//maps/TempCopyMap/scripts.pory"
	release
# 823 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 824 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 825 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 826 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 827 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_SILVERSUN_CITY, 28, 22
	goto Common_EventScript_DrifblimTravels_ToSilversun_4


Common_EventScript_DrifblimTravels_ToPelluca::
# 836 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 837 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 838 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 839 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 840 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_2
Common_EventScript_DrifblimTravels_ToPelluca_1:
# 844 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToPelluca_Text_0, MSGBOX_YESNO
# 846 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_5
# 856 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToPelluca_4:
	end

Common_EventScript_DrifblimTravels_ToPelluca_2:
# 841 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	goto Common_EventScript_DrifblimTravels_ToPelluca_1

Common_EventScript_DrifblimTravels_ToPelluca_5:
# 847 "data//maps/TempCopyMap/scripts.pory"
	release
# 849 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 850 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 851 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 852 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 853 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 13, 16
	goto Common_EventScript_DrifblimTravels_ToPelluca_4


Common_EventScript_Dugtrio_ToRoute3::
# 870 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 871 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 872 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToRoute3_Text_0, MSGBOX_YESNO
# 874 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToRoute3_1
	return

Common_EventScript_Dugtrio_ToRoute3_1:
# 875 "data//maps/TempCopyMap/scripts.pory"
	release
# 877 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 878 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 879 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 880 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 881 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE3_UNDERPASS, 9, 26
	return


Common_EventScript_Dugtrio_ToGalecrest::
# 886 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 887 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 888 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToRoute3_Text_0, MSGBOX_YESNO
# 890 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToGalecrest_1
	return

Common_EventScript_Dugtrio_ToGalecrest_1:
# 891 "data//maps/TempCopyMap/scripts.pory"
	release
# 893 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 894 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 895 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 896 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 897 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_GALECREST_CITY, 31, 64
	return


Common_EventScript_Tauros_IvyRiver::
# 908 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_IvyRiver_1
# 922 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_4, MSGBOX_NPC
	return

Common_EventScript_Tauros_IvyRiver_1:
# 909 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_0, MSGBOX_YESNO
# 911 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_IvyRiver_4
	return

Common_EventScript_Tauros_IvyRiver_4:
# 913 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_1
# 914 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 915 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_IvyRiver_Text_2, Common_EventScript_Tauros_IvyRiver_Text_3
# 917 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_IvyRiver_7
Common_EventScript_Tauros_IvyRiver_6:
# 918 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_IvyRiver_9
	return

Common_EventScript_Tauros_IvyRiver_7:
# 917 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_IvyRiver_6

Common_EventScript_Tauros_IvyRiver_9:
# 918 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	return


Common_EventScript_Tauros_PellucaCity::
# 927 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_PellucaCity_1
# 941 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_4, MSGBOX_NPC
	return

Common_EventScript_Tauros_PellucaCity_1:
# 928 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_0, MSGBOX_YESNO
# 930 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_PellucaCity_4
	return

Common_EventScript_Tauros_PellucaCity_4:
# 932 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_1
# 933 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 934 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_3
# 936 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_PellucaCity_7
Common_EventScript_Tauros_PellucaCity_6:
# 937 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_PellucaCity_9
	return

Common_EventScript_Tauros_PellucaCity_7:
# 936 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_PellucaCity_6

Common_EventScript_Tauros_PellucaCity_9:
# 937 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	return


Common_EventScript_Tauros_Route6::
# 946 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_Route6_1
# 959 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_4, MSGBOX_NPC
	return

Common_EventScript_Tauros_Route6_1:
# 947 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_0, MSGBOX_YESNO
# 949 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_Route6_4
	return

Common_EventScript_Tauros_Route6_4:
# 950 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_1
# 951 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 952 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_2
# 954 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_Route6_7
Common_EventScript_Tauros_Route6_6:
# 955 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_Route6_9
	return

Common_EventScript_Tauros_Route6_7:
# 954 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_Route6_6

Common_EventScript_Tauros_Route6_9:
# 955 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	return


Common_EventScript_Tauros_GotoIvy::
# 964 "data//maps/TempCopyMap/scripts.pory"
	release
# 965 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 966 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 967 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 968 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 969 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_IVY_RIVER, 19, 69
	return


Common_EventScript_Tauros_GotoPelluca::
# 973 "data//maps/TempCopyMap/scripts.pory"
	release
# 975 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 976 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 977 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 978 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 979 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 15, 24
	return


Common_EventScript_Tauros_GotoRoute6::
# 983 "data//maps/TempCopyMap/scripts.pory"
	release
# 985 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 986 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 987 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 988 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 989 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE6, 52, 116
	return


# 824 "data//maps/TempCopyMap/scripts.pory"
Common_EventScript_DrifblimTravels_ToSilversun_Movement_0:
# 824 "data//maps/TempCopyMap/scripts.pory"
	face_down
	step_end

Common_EventScript_NurseDemo_Text_0:
# 6 "data//maps/TempCopyMap/scripts.pory"
	.string "This is the end of the demo. Thank you\n"
	.string "for playing! Please drop any feedback\l"
	.string "and bug reports on Discord, and stay\l"
	.string "tuned for further updates!$"

Common_EventScript_MintVendingMachine_Text_0:
# 17 "data//maps/TempCopyMap/scripts.pory"
	.string "There's a slot to swipe your TRAINER\n"
	.string "CARD. Swipe?$"

Common_EventScript_MintVendingMachine_Text_1:
# 25 "data//maps/TempCopyMap/scripts.pory"
	.string "You must have at least 200 to purchase\n"
	.string "any mints.$"

Mart_Mints_NoBadges_Text_0:
# 69 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 0\n"
	.string "All mints are 200.$"

Mart_Mints_NoBadges_Text_1:
# 71 "data//maps/TempCopyMap/scripts.pory"
	.string "Impish Mint$"

Mart_Mints_NoBadges_Text_2:
# 71 "data//maps/TempCopyMap/scripts.pory"
	.string "Calm Mint$"

Mart_Mints_NoBadges_Text_3:
# 71 "data//maps/TempCopyMap/scripts.pory"
	.string "Relaxed Mint$"

Mart_Mints_OneBadge_Text_0:
# 78 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 1\n"
	.string "All mints are 200.$"

Mart_Mints_OneBadge_Text_1:
# 81 "data//maps/TempCopyMap/scripts.pory"
	.string "Bold Mint$"

Mart_Mints_OneBadge_Text_2:
# 81 "data//maps/TempCopyMap/scripts.pory"
	.string "Gentle Mint$"

Mart_Mints_OneBadge_Text_3:
# 82 "data//maps/TempCopyMap/scripts.pory"
	.string "Careful Mint$"

Mart_Mints_TwoBadges_Text_0:
# 89 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 2\n"
	.string "All mints are 200.$"

Mart_Mints_TwoBadges_Text_1:
# 93 "data//maps/TempCopyMap/scripts.pory"
	.string "Sassy Mint$"

Mart_Mints_TwoBadges_Text_2:
# 93 "data//maps/TempCopyMap/scripts.pory"
	.string "Serious Mint$"

Mart_Mints_TwoBadges_Text_3:
# 93 "data//maps/TempCopyMap/scripts.pory"
	.string "Brave Mint$"

Mart_Mints_ThreeBadges_Text_0:
# 100 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 3\n"
	.string "All mints are 200.$"

Mart_Mints_ThreeBadges_Text_1:
# 104 "data//maps/TempCopyMap/scripts.pory"
	.string "Naive Mint$"

Mart_Mints_ThreeBadges_Text_2:
# 105 "data//maps/TempCopyMap/scripts.pory"
	.string "Hasty Mint$"

Mart_Mints_ThreeBadges_Text_3:
# 105 "data//maps/TempCopyMap/scripts.pory"
	.string "Lax Mint$"

Mart_Mints_FourBadges_Text_0:
# 112 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 4\n"
	.string "All mints are 200.$"

Mart_Mints_FourBadges_Text_1:
# 117 "data//maps/TempCopyMap/scripts.pory"
	.string "Mild Mint$"

Mart_Mints_FourBadges_Text_2:
# 117 "data//maps/TempCopyMap/scripts.pory"
	.string "Rash Mint$"

Mart_Mints_FourBadges_Text_3:
# 118 "data//maps/TempCopyMap/scripts.pory"
	.string "Timid Mint$"

Mart_Mints_FiveBadges_Text_0:
# 125 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 5\n"
	.string "All mints are 200.$"

Mart_Mints_FiveBadges_Text_1:
# 131 "data//maps/TempCopyMap/scripts.pory"
	.string "Naughty Mint$"

Mart_Mints_FiveBadges_Text_2:
# 131 "data//maps/TempCopyMap/scripts.pory"
	.string "Quiet Mint$"

Mart_Mints_FiveBadges_Text_3:
# 131 "data//maps/TempCopyMap/scripts.pory"
	.string "Lonely Mint$"

Mart_Mints_SixBadges_Text_0:
# 138 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 6\n"
	.string "All mints are 200.$"

Mart_Mints_SixBadges_Text_1:
# 144 "data//maps/TempCopyMap/scripts.pory"
	.string "Jolly Mint$"

Mart_Mints_SixBadges_Text_2:
# 145 "data//maps/TempCopyMap/scripts.pory"
	.string "Adamant Mint$"

Mart_Mints_SixBadges_Text_3:
# 145 "data//maps/TempCopyMap/scripts.pory"
	.string "Modest Mint$"

MintPurchase_Common_Text_0:
# 235 "data//maps/TempCopyMap/scripts.pory"
	.string "Confirm purchase?$"

Common_EventScript_NurseJoyOnRoute_Text_0:
# 432 "data//maps/TempCopyMap/scripts.pory"
	.string "Should I heal your Pokémon? You can\n"
	.string "come back later if you wish.$"

Common_EventScript_NurseJoyOnRoute_Text_1:
# 446 "data//maps/TempCopyMap/scripts.pory"
	.string "Let me heal your Pokémon.$"

Common_EventScript_NurseJoyOnRoute_Text_2:
# 449 "data//maps/TempCopyMap/scripts.pory"
	.string "Stay safe out there!$"

Common_EventScript_NurseJoyOnRoute_Text_3:
# 453 "data//maps/TempCopyMap/scripts.pory"
	.string "Come back any time!$"

Common_EventScript_NurseJoyOnRoute_Text_4:
# 459 "data//maps/TempCopyMap/scripts.pory"
	.string "Sorry, you don't have a HEAL PASS.\n"
	.string "Please visit a Pokémon CENTER to\l"
	.string "receive a HEAL PASS.$"

Common_EventScript_ChanseyOnRoute_Text_0:
# 469 "data//maps/TempCopyMap/scripts.pory"
	.string "CHANSEY is happy as always!$"

Route5_Greta_AskToShow_Text_0:
# 499 "data//maps/TempCopyMap/scripts.pory"
	.string "Wanna buy anything?$"

Route5_Greta_AskToShow_Text_1:
# 502 "data//maps/TempCopyMap/scripts.pory"
	.string "Bummer!$"

Route5_Greta_ShowItemsForSale_Text_0:
# 510 "data//maps/TempCopyMap/scripts.pory"
	.string "The egg is 10,000. The rock is 5,000. The\n"
	.string "fish is only 100!$"

Route5_Greta_ShowItemsForSale_Text_1:
# 512 "data//maps/TempCopyMap/scripts.pory"
	.string "Strange Egg$"

Route5_Greta_ShowItemsForSale_Text_2:
# 512 "data//maps/TempCopyMap/scripts.pory"
	.string "Mysterious Rock$"

Route5_Greta_ShowItemsForSale_Text_3:
# 512 "data//maps/TempCopyMap/scripts.pory"
	.string "Ugly Fish$"

Route5_Greta_StrangeEgg_Text_0:
# 535 "data//maps/TempCopyMap/scripts.pory"
	.string "Hey! You can't afford this!$"

Route5_Greta_StrangeEgg_Text_1:
# 539 "data//maps/TempCopyMap/scripts.pory"
	.string "A discerning choice! You sure?$"

Route5_Greta_StrangeEgg_Text_2:
# 543 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Strange Egg from\n"
	.string "Greta.$"

Route5_Greta_StrangeEgg_Text_3:
# 545 "data//maps/TempCopyMap/scripts.pory"
	.string "GRETA: Good doing business with you!\n"
	.string "Now, what about -$"

Route5_Greta_UglyFish_Text_0:
# 560 "data//maps/TempCopyMap/scripts.pory"
	.string "A...budget-friendly choice! You sure?$"

Route5_Greta_UglyFish_Text_1:
# 564 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Feebas from\n"
	.string "Greta.$"

Route5_Greta_MysteriousRock_Text_0:
# 581 "data//maps/TempCopyMap/scripts.pory"
	.string "A reasonable choice! You sure?$"

PellucaCity_Greta_ShowItemsForSale_Text_0:
# 625 "data//maps/TempCopyMap/scripts.pory"
	.string "Each stone retails for 6000, but for\n"
	.string "you, I'll do 5200!$"

PellucaCity_Greta_ShowItemsForSale_Text_1:
# 627 "data//maps/TempCopyMap/scripts.pory"
	.string "Fire Stone$"

PellucaCity_Greta_ShowItemsForSale_Text_2:
# 627 "data//maps/TempCopyMap/scripts.pory"
	.string "Shiny Stone$"

PellucaCity_Greta_ShowItemsForSale_Text_3:
# 627 "data//maps/TempCopyMap/scripts.pory"
	.string "Water Stone$"

PellucaCity_Greta_FireStone_Text_0:
# 655 "data//maps/TempCopyMap/scripts.pory"
	.string "A fiery choice! You sure?$"

PellucaCity_Greta_ShinyStone_Text_0:
# 678 "data//maps/TempCopyMap/scripts.pory"
	.string "A natural choice! You sure?$"

PellucaCity_Greta_WaterStone_Text_0:
# 701 "data//maps/TempCopyMap/scripts.pory"
	.string "A cool choice! You sure?$"

Common_EventScript_HyperTrainer_Text_0:
# 737 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon.$"

Common_EventScript_HyperTrainer_Text_1:
# 743 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon...\p"
	.string "From within the bag, the Rare Shard\n"
	.string "begins to vibrate...\p"
	.string "Take out the Rare Shard from the bag?$"

Common_EventScript_HyperTrainer_Text_2:
# 748 "data//maps/TempCopyMap/scripts.pory"
	.string "The statue begins humming faintly...\p"
	.string "Which Pokémon should hold the Rare\n"
	.string "Shard?$"

Common_EventScript_HyperTrainer_Text_3:
# 755 "data//maps/TempCopyMap/scripts.pory"
	.string "{STR_VAR_1} is absorbing memories\n"
	.string "from the statue...what's it seeing?$"

Common_EventScript_HyperTrainer_Text_4:
# 756 "data//maps/TempCopyMap/scripts.pory"
	.string "HP$"

Common_EventScript_HyperTrainer_Text_5:
# 756 "data//maps/TempCopyMap/scripts.pory"
	.string "Attack$"

Common_EventScript_HyperTrainer_Text_6:
# 756 "data//maps/TempCopyMap/scripts.pory"
	.string "Defence$"

Common_EventScript_HyperTrainer_Text_7:
# 756 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Attack$"

Common_EventScript_HyperTrainer_Text_8:
# 756 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Defence$"

Common_EventScript_HyperTrainer_Text_9:
# 756 "data//maps/TempCopyMap/scripts.pory"
	.string "Speed$"

Common_EventScript_HyperTrainer_Text_10:
# 771 "data//maps/TempCopyMap/scripts.pory"
	.string "Imbued with the shrine's memories,\n"
	.string "{STR_VAR_1} became stronger!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_0:
# 815 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a Drifblim!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_1:
# 818 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards Silversun City. Fly there?$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_2:
# 830 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim looks dejected...$"

Common_EventScript_DrifblimTravels_ToPelluca_Text_0:
# 844 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards Pelluca City. Fly there?$"

Common_EventScript_Dugtrio_ToRoute3_Text_0:
# 872 "data//maps/TempCopyMap/scripts.pory"
	.string "Dugtrio is digging into the ground.\n"
	.string "Follow it?$"

Common_EventScript_Tauros_IvyRiver_Text_0:
# 909 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently. Ride it?$"

Common_EventScript_Tauros_IvyRiver_Text_1:
# 913 "data//maps/TempCopyMap/scripts.pory"
	.string "Where should Tauros go?$"

Common_EventScript_Tauros_IvyRiver_Text_2:
# 915 "data//maps/TempCopyMap/scripts.pory"
	.string "Pelluca City$"

Common_EventScript_Tauros_IvyRiver_Text_3:
# 915 "data//maps/TempCopyMap/scripts.pory"
	.string "Route 6 HQ$"

Common_EventScript_Tauros_IvyRiver_Text_4:
# 922 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently.$"

Common_EventScript_Tauros_PellucaCity_Text_0:
# 934 "data//maps/TempCopyMap/scripts.pory"
	.string "Ivy River HQ$"

Common_Text_Greta_Comecome::
# 494 "data//maps/TempCopyMap/scripts.pory"
	.string "Come, come. I've got some great stuff\n"
	.string "from...well, you can't ask a magician to\l"
	.string "reveal her secrets, can you?$"
