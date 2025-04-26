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
	speakername Route5_Greta_AskToShow_Text_0
# 500 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1, MSGBOX_YESNO
# 501 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_AskToShow_2
Route5_Greta_AskToShow_1:
# 503 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_2
# 504 "data//maps/TempCopyMap/scripts.pory"
	release
# 506 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return

Route5_Greta_AskToShow_2:
# 501 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	goto Route5_Greta_AskToShow_1


Route5_Greta_ShowItemsForSale::
# 510 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 511 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 512 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_ShowItemsForSale_Text_0
# 514 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route5_Greta_ShowItemsForSale_Text_1, Route5_Greta_ShowItemsForSale_Text_2, Route5_Greta_ShowItemsForSale_Text_3
# 516 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_ShowItemsForSale_2
Route5_Greta_ShowItemsForSale_1:
# 520 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_ShowItemsForSale_5
Route5_Greta_ShowItemsForSale_4:
# 524 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route5_Greta_ShowItemsForSale_8
Route5_Greta_ShowItemsForSale_7:
# 529 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 530 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_AskToShow
	return

Route5_Greta_ShowItemsForSale_2:
# 517 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 518 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_StrangeEgg
	goto Route5_Greta_ShowItemsForSale_1

Route5_Greta_ShowItemsForSale_5:
# 521 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 522 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_MysteriousRock
	goto Route5_Greta_ShowItemsForSale_4

Route5_Greta_ShowItemsForSale_8:
# 525 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 526 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_UglyFish
	goto Route5_Greta_ShowItemsForSale_7


Route5_Greta_StrangeEgg::
# 535 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 10000
# 536 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_StrangeEgg_1
# 542 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 543 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_1, MSGBOX_YESNO
# 544 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_StrangeEgg_4
# 553 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_1:
# 537 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 538 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 539 "data//maps/TempCopyMap/scripts.pory"
	release
# 540 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_4:
# 545 "data//maps/TempCopyMap/scripts.pory"
	removemoney 10000
# 546 "data//maps/TempCopyMap/scripts.pory"
	giveegg SPECIES_HONEDGE
# 547 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_2, MSGBOX_SIGN
# 548 "data//maps/TempCopyMap/scripts.pory"
	release
# 549 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 550 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 551 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_UglyFish::
# 559 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 100
# 560 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_UglyFish_1
# 566 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 567 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_0, MSGBOX_YESNO
# 568 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_UglyFish_4
# 577 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_1:
# 561 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 562 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 563 "data//maps/TempCopyMap/scripts.pory"
	release
# 564 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_4:
# 569 "data//maps/TempCopyMap/scripts.pory"
	removemoney 100
# 570 "data//maps/TempCopyMap/scripts.pory"
	givemon SPECIES_FEEBAS, 5
# 571 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_1, MSGBOX_SIGN
# 572 "data//maps/TempCopyMap/scripts.pory"
	release
# 573 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 574 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 575 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_MysteriousRock::
# 583 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5000
# 584 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_MysteriousRock_1
# 590 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 591 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_MysteriousRock_Text_0, MSGBOX_YESNO
# 592 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_MysteriousRock_4
# 599 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_1:
# 585 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 586 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 587 "data//maps/TempCopyMap/scripts.pory"
	release
# 588 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_4:
# 593 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5000
# 594 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 595 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 596 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 597 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


PellucaCity_Greta_AskToShow::
# 624 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 625 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1, MSGBOX_YESNO
# 626 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_AskToShow_2
PellucaCity_Greta_AskToShow_1:
# 628 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 629 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 630 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_2
# 631 "data//maps/TempCopyMap/scripts.pory"
	release
# 633 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return

PellucaCity_Greta_AskToShow_2:
# 626 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	goto PellucaCity_Greta_AskToShow_1


PellucaCity_Greta_ShowItemsForSale::
# 637 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 638 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 639 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_ShowItemsForSale_Text_0
# 641 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Greta_ShowItemsForSale_Text_1, PellucaCity_Greta_ShowItemsForSale_Text_2, PellucaCity_Greta_ShowItemsForSale_Text_3
# 643 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_2
PellucaCity_Greta_ShowItemsForSale_1:
# 647 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_5
PellucaCity_Greta_ShowItemsForSale_4:
# 651 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_8
PellucaCity_Greta_ShowItemsForSale_7:
# 656 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_AskToShow
	return

PellucaCity_Greta_ShowItemsForSale_2:
# 644 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 645 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_A
	goto PellucaCity_Greta_ShowItemsForSale_1

PellucaCity_Greta_ShowItemsForSale_5:
# 648 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 649 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_B
	goto PellucaCity_Greta_ShowItemsForSale_4

PellucaCity_Greta_ShowItemsForSale_8:
# 652 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 653 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_C
	goto PellucaCity_Greta_ShowItemsForSale_7


PellucaCity_Greta_Item_A::
# 661 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 662 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_A_1
# 668 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SUN_STONe
# 669 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 670 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 671 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_A_Text_0, MSGBOX_YESNO
# 672 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_A_4
# 680 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 681 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_A_1:
# 663 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 664 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 665 "data//maps/TempCopyMap/scripts.pory"
	release
# 666 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_A_4:
# 673 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 674 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 675 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SUN_STONe
# 676 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 677 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 678 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_Item_B::
# 687 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 688 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_B_1
# 694 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_PRISM_SCALE
# 695 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 696 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 697 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_B_Text_0, MSGBOX_YESNO
# 698 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_B_4
# 706 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 707 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_B_1:
# 689 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 690 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 691 "data//maps/TempCopyMap/scripts.pory"
	release
# 692 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_B_4:
# 699 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 700 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 701 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_PRISM_SCALE
# 702 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 703 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 704 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_Item_C::
# 713 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 714 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_C_1
# 720 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_DAWN_STONE
# 721 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 722 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 723 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_C_Text_0, MSGBOX_YESNO
# 724 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_C_4
# 732 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 733 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_C_1:
# 715 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 716 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 717 "data//maps/TempCopyMap/scripts.pory"
	release
# 718 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_C_4:
# 725 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 726 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 727 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 728 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 729 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 730 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


Common_EventScript_HyperTrainer::
# 755 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 756 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 758 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_RARE_SHARD
# 759 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_2
# 764 "data//maps/TempCopyMap/scripts.pory"
	fadenewbgm MUS_B_PYRAMID_TOP
# 766 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_1, MSGBOX_YESNO
# 768 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_5
# 771 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_2
# 772 "data//maps/TempCopyMap/scripts.pory"
	special ChoosePartyMon
# 773 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 774 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_HyperTrainer_8
# 777 "data//maps/TempCopyMap/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 778 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_3
# 779 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_HyperTrainer_Text_4, Common_EventScript_HyperTrainer_Text_5, Common_EventScript_HyperTrainer_Text_6, Common_EventScript_HyperTrainer_Text_7, Common_EventScript_HyperTrainer_Text_8, Common_EventScript_HyperTrainer_Text_9
# 781 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_12
Common_EventScript_HyperTrainer_11:
# 782 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_HyperTrainer_15
Common_EventScript_HyperTrainer_14:
# 783 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_HyperTrainer_18
Common_EventScript_HyperTrainer_17:
# 784 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_HyperTrainer_21
Common_EventScript_HyperTrainer_20:
# 785 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_HyperTrainer_24
Common_EventScript_HyperTrainer_23:
# 786 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Common_EventScript_HyperTrainer_27
Common_EventScript_HyperTrainer_26:
# 788 "data//maps/TempCopyMap/scripts.pory"
	release
# 789 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_TO_WHITE
# 790 "data//maps/TempCopyMap/scripts.pory"
	playse SE_USE_ITEM
# 791 "data//maps/TempCopyMap/scripts.pory"
	delay 24
# 792 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 794 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_10
# 795 "data//maps/TempCopyMap/scripts.pory"
	release
# 796 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
Common_EventScript_HyperTrainer_4:
# 799 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_HyperTrainer_2:
# 760 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_0, MSGBOX_NPC
	end

Common_EventScript_HyperTrainer_5:
	goto Common_EventScript_HyperTrainer_4

Common_EventScript_HyperTrainer_8:
# 775 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_HyperTrainer_4

Common_EventScript_HyperTrainer_12:
# 781 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto Common_EventScript_HyperTrainer_11

Common_EventScript_HyperTrainer_15:
# 782 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_14

Common_EventScript_HyperTrainer_18:
# 783 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_17

Common_EventScript_HyperTrainer_21:
# 784 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_20

Common_EventScript_HyperTrainer_24:
# 785 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_23

Common_EventScript_HyperTrainer_27:
# 786 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto Common_EventScript_HyperTrainer_26


Common_EventScript_DrifblimTravels_ToSilversun::
# 833 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 834 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 835 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 836 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 837 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_2
# 842 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_1, MSGBOX_YESNO
# 844 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_5
# 854 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToSilversun_4:
	end

Common_EventScript_DrifblimTravels_ToSilversun_2:
# 838 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	end

Common_EventScript_DrifblimTravels_ToSilversun_5:
# 845 "data//maps/TempCopyMap/scripts.pory"
	release
# 847 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 848 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 849 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 850 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 851 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_SILVERSUN_CITY, 28, 22
	goto Common_EventScript_DrifblimTravels_ToSilversun_4


Common_EventScript_DrifblimTravels_ToPelluca::
# 860 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 861 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 862 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 863 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 864 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_2
# 869 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToPelluca_Text_0, MSGBOX_YESNO
# 871 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_5
# 881 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToPelluca_4:
	end

Common_EventScript_DrifblimTravels_ToPelluca_2:
# 865 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	end

Common_EventScript_DrifblimTravels_ToPelluca_5:
# 872 "data//maps/TempCopyMap/scripts.pory"
	release
# 874 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 875 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 876 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 877 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 878 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 13, 16
	goto Common_EventScript_DrifblimTravels_ToPelluca_4


Common_EventScript_Dugtrio_ToRoute3::
# 895 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 896 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 897 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToRoute3_Text_0, MSGBOX_YESNO
# 899 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToRoute3_1
	return

Common_EventScript_Dugtrio_ToRoute3_1:
# 900 "data//maps/TempCopyMap/scripts.pory"
	release
# 902 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 903 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 904 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 905 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 906 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE3_UNDERPASS, 9, 26
	return


Common_EventScript_Dugtrio_ToGalecrest::
# 911 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 912 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 913 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToRoute3_Text_0, MSGBOX_YESNO
# 915 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToGalecrest_1
	return

Common_EventScript_Dugtrio_ToGalecrest_1:
# 916 "data//maps/TempCopyMap/scripts.pory"
	release
# 918 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 919 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 920 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 921 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 922 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_GALECREST_CITY, 31, 64
	return


Common_EventScript_Tauros_IvyRiver::
# 933 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_IvyRiver_2
# 941 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_IvyRiver_1:
# 943 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_IvyRiver_2:
# 934 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 935 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 936 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_IvyRiver_Text_1, Common_EventScript_Tauros_IvyRiver_Text_2
# 938 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_IvyRiver_6
Common_EventScript_Tauros_IvyRiver_5:
# 939 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_IvyRiver_8
	goto Common_EventScript_Tauros_IvyRiver_1

Common_EventScript_Tauros_IvyRiver_6:
# 938 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_IvyRiver_5

Common_EventScript_Tauros_IvyRiver_8:
# 939 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	goto Common_EventScript_Tauros_IvyRiver_1


Common_EventScript_Tauros_PellucaCity::
# 948 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_PellucaCity_2
# 957 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_PellucaCity_1:
# 959 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_PellucaCity_2:
# 949 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 950 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 951 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_2
# 953 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_PellucaCity_6
Common_EventScript_Tauros_PellucaCity_5:
# 954 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_PellucaCity_8
	goto Common_EventScript_Tauros_PellucaCity_1

Common_EventScript_Tauros_PellucaCity_6:
# 953 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_PellucaCity_5

Common_EventScript_Tauros_PellucaCity_8:
# 954 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	goto Common_EventScript_Tauros_PellucaCity_1


Common_EventScript_Tauros_Route6::
# 964 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_Route6_2
# 972 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_Route6_1:
# 974 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_Route6_2:
# 965 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 966 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 967 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_1
# 969 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_Route6_6
Common_EventScript_Tauros_Route6_5:
# 970 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_Route6_8
	goto Common_EventScript_Tauros_Route6_1

Common_EventScript_Tauros_Route6_6:
# 969 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_Route6_5

Common_EventScript_Tauros_Route6_8:
# 970 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_Route6_1


Common_EventScript_Tauros_GotoIvy::
# 979 "data//maps/TempCopyMap/scripts.pory"
	release
# 980 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 981 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 982 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 983 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 984 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_IVY_RIVER, 19, 69
	return


Common_EventScript_Tauros_GotoPelluca::
# 988 "data//maps/TempCopyMap/scripts.pory"
	release
# 990 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 991 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 992 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 993 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 994 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 15, 24
	return


Common_EventScript_Tauros_GotoRoute6::
# 998 "data//maps/TempCopyMap/scripts.pory"
	release
# 1000 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1001 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1002 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1003 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1004 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE6, 52, 116
	return


# 848 "data//maps/TempCopyMap/scripts.pory"
Common_EventScript_DrifblimTravels_ToSilversun_Movement_0:
# 848 "data//maps/TempCopyMap/scripts.pory"
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
	.string "Greta$"

Route5_Greta_AskToShow_Text_1:
# 500 "data//maps/TempCopyMap/scripts.pory"
	.string "Wanna buy anything?$"

Route5_Greta_AskToShow_Text_2:
# 503 "data//maps/TempCopyMap/scripts.pory"
	.string "Bummer!$"

Route5_Greta_ShowItemsForSale_Text_0:
# 512 "data//maps/TempCopyMap/scripts.pory"
	.string "The egg is 10,000. The rock is 5,000. The\n"
	.string "fish is only 100!$"

Route5_Greta_ShowItemsForSale_Text_1:
# 514 "data//maps/TempCopyMap/scripts.pory"
	.string "Strange Egg$"

Route5_Greta_ShowItemsForSale_Text_2:
# 514 "data//maps/TempCopyMap/scripts.pory"
	.string "Mysterious Rock$"

Route5_Greta_ShowItemsForSale_Text_3:
# 514 "data//maps/TempCopyMap/scripts.pory"
	.string "Ugly Fish$"

Route5_Greta_StrangeEgg_Text_0:
# 538 "data//maps/TempCopyMap/scripts.pory"
	.string "Hey! You can't afford this!$"

Route5_Greta_StrangeEgg_Text_1:
# 543 "data//maps/TempCopyMap/scripts.pory"
	.string "A discerning choice! You sure?$"

Route5_Greta_StrangeEgg_Text_2:
# 547 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Strange Egg from\n"
	.string "Greta.$"

Route5_Greta_StrangeEgg_Text_3:
# 550 "data//maps/TempCopyMap/scripts.pory"
	.string "Good doing business with you! Now, what\n"
	.string "about -$"

Route5_Greta_UglyFish_Text_0:
# 567 "data//maps/TempCopyMap/scripts.pory"
	.string "A...budget-friendly choice! You sure?$"

Route5_Greta_UglyFish_Text_1:
# 571 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Feebas from\n"
	.string "Greta.$"

Route5_Greta_MysteriousRock_Text_0:
# 591 "data//maps/TempCopyMap/scripts.pory"
	.string "A reasonable choice! You sure?$"

PellucaCity_Greta_ShowItemsForSale_Text_0:
# 639 "data//maps/TempCopyMap/scripts.pory"
	.string "Each stone retails for 6000, but for\n"
	.string "you, I'll do 5200!$"

PellucaCity_Greta_ShowItemsForSale_Text_1:
# 641 "data//maps/TempCopyMap/scripts.pory"
	.string "Sun Stone$"

PellucaCity_Greta_ShowItemsForSale_Text_2:
# 641 "data//maps/TempCopyMap/scripts.pory"
	.string "Prism Scale$"

PellucaCity_Greta_ShowItemsForSale_Text_3:
# 641 "data//maps/TempCopyMap/scripts.pory"
	.string "Dawn Stone$"

PellucaCity_Greta_Item_A_Text_0:
# 671 "data//maps/TempCopyMap/scripts.pory"
	.string "A shining choice! You sure?$"

PellucaCity_Greta_Item_B_Text_0:
# 697 "data//maps/TempCopyMap/scripts.pory"
	.string "A brilliant choice! You sure?$"

PellucaCity_Greta_Item_C_Text_0:
# 723 "data//maps/TempCopyMap/scripts.pory"
	.string "A cool choice! You sure?$"

Common_EventScript_HyperTrainer_Text_0:
# 760 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon.$"

Common_EventScript_HyperTrainer_Text_1:
# 766 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon...\p"
	.string "From within the bag, the Rare Shard\n"
	.string "begins to vibrate...\p"
	.string "Take out the Rare Shard from the bag?$"

Common_EventScript_HyperTrainer_Text_2:
# 771 "data//maps/TempCopyMap/scripts.pory"
	.string "The statue begins humming faintly...\p"
	.string "Which Pokémon should hold the Rare\n"
	.string "Shard?$"

Common_EventScript_HyperTrainer_Text_3:
# 778 "data//maps/TempCopyMap/scripts.pory"
	.string "{STR_VAR_1} is absorbing memories\n"
	.string "from the statue...what's it seeing?$"

Common_EventScript_HyperTrainer_Text_4:
# 779 "data//maps/TempCopyMap/scripts.pory"
	.string "HP$"

Common_EventScript_HyperTrainer_Text_5:
# 779 "data//maps/TempCopyMap/scripts.pory"
	.string "Attack$"

Common_EventScript_HyperTrainer_Text_6:
# 779 "data//maps/TempCopyMap/scripts.pory"
	.string "Defence$"

Common_EventScript_HyperTrainer_Text_7:
# 779 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Attack$"

Common_EventScript_HyperTrainer_Text_8:
# 779 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Defence$"

Common_EventScript_HyperTrainer_Text_9:
# 779 "data//maps/TempCopyMap/scripts.pory"
	.string "Speed$"

Common_EventScript_HyperTrainer_Text_10:
# 794 "data//maps/TempCopyMap/scripts.pory"
	.string "Imbued with the shrine's memories,\n"
	.string "{STR_VAR_1} became stronger!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_0:
# 838 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a Drifblim!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_1:
# 842 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards Silversun City. Fly there?$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_2:
# 854 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim looks dejected...$"

Common_EventScript_DrifblimTravels_ToPelluca_Text_0:
# 869 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards Pelluca City. Fly there?$"

Common_EventScript_Dugtrio_ToRoute3_Text_0:
# 897 "data//maps/TempCopyMap/scripts.pory"
	.string "Dugtrio is digging into the ground.\n"
	.string "Follow it?$"

Common_EventScript_Tauros_IvyRiver_Text_0:
# 934 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently.\n"
	.string "Where should Tauros go?$"

Common_EventScript_Tauros_IvyRiver_Text_1:
# 936 "data//maps/TempCopyMap/scripts.pory"
	.string "Pelluca City$"

Common_EventScript_Tauros_IvyRiver_Text_2:
# 936 "data//maps/TempCopyMap/scripts.pory"
	.string "Route 6 HQ$"

Common_EventScript_Tauros_IvyRiver_Text_3:
# 941 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently.$"

Common_EventScript_Tauros_PellucaCity_Text_0:
# 951 "data//maps/TempCopyMap/scripts.pory"
	.string "Ivy River HQ$"

Common_Text_Greta_Comecome::
# 494 "data//maps/TempCopyMap/scripts.pory"
	.string "Come, come. I've got some great stuff\n"
	.string "from...well, you can't ask a magician to\l"
	.string "reveal her secrets, can you?$"
