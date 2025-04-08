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
	msgbox Mart_Mints_NoBadges_Text_0
# 70 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3
# 71 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 72 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 73 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_OneBadge::
# 76 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 77 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_OneBadge_Text_0
# 78 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3
# 81 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 82 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 83 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_TwoBadges::
# 86 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 87 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_TwoBadges_Text_0
# 89 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3
# 92 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 93 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 94 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_ThreeBadges::
# 97 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 98 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_ThreeBadges_Text_0
# 100 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3
# 104 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 105 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 106 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FourBadges::
# 109 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 110 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_FourBadges_Text_0
# 112 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3
# 117 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 118 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 119 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FiveBadges::
# 122 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 123 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_FiveBadges_Text_0
# 125 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3
# 130 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 131 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 132 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_SixBadges::
# 135 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 136 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_SixBadges_Text_0
# 138 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3, Mart_Mints_SixBadges_Text_1, Mart_Mints_SixBadges_Text_2, Mart_Mints_SixBadges_Text_3
# 144 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 145 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 146 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
# 148 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 149 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Mart_MintPurchaseDecision::
# 166 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Mart_MintPurchaseDecision_2
Mart_MintPurchaseDecision_1:
# 167 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Mart_MintPurchaseDecision_5
Mart_MintPurchaseDecision_4:
# 168 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq Mart_MintPurchaseDecision_8
Mart_MintPurchaseDecision_7:
# 169 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq Mart_MintPurchaseDecision_11
Mart_MintPurchaseDecision_10:
# 170 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Mart_MintPurchaseDecision_14
Mart_MintPurchaseDecision_13:
# 171 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Mart_MintPurchaseDecision_17
Mart_MintPurchaseDecision_16:
# 172 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_eq Mart_MintPurchaseDecision_20
Mart_MintPurchaseDecision_19:
# 173 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 7
	goto_if_eq Mart_MintPurchaseDecision_23
Mart_MintPurchaseDecision_22:
# 174 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 8
	goto_if_eq Mart_MintPurchaseDecision_26
Mart_MintPurchaseDecision_25:
# 175 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 9
	goto_if_eq Mart_MintPurchaseDecision_29
Mart_MintPurchaseDecision_28:
# 176 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Mart_MintPurchaseDecision_32
Mart_MintPurchaseDecision_31:
# 177 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 11
	goto_if_eq Mart_MintPurchaseDecision_35
Mart_MintPurchaseDecision_34:
# 178 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 12
	goto_if_eq Mart_MintPurchaseDecision_38
Mart_MintPurchaseDecision_37:
# 179 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 13
	goto_if_eq Mart_MintPurchaseDecision_41
Mart_MintPurchaseDecision_40:
# 180 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 14
	goto_if_eq Mart_MintPurchaseDecision_44
Mart_MintPurchaseDecision_43:
# 181 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 15
	goto_if_eq Mart_MintPurchaseDecision_47
Mart_MintPurchaseDecision_46:
# 182 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 16
	goto_if_eq Mart_MintPurchaseDecision_50
Mart_MintPurchaseDecision_49:
# 183 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 17
	goto_if_eq Mart_MintPurchaseDecision_53
Mart_MintPurchaseDecision_52:
# 184 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 18
	goto_if_eq Mart_MintPurchaseDecision_56
Mart_MintPurchaseDecision_55:
# 185 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 19
	goto_if_eq Mart_MintPurchaseDecision_59
Mart_MintPurchaseDecision_58:
# 186 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 20
	goto_if_eq Mart_MintPurchaseDecision_62
Mart_MintPurchaseDecision_61:
# 188 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Mart_MintPurchaseDecision_2:
# 166 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Impish
	goto Mart_MintPurchaseDecision_1

Mart_MintPurchaseDecision_5:
# 167 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Calm
	goto Mart_MintPurchaseDecision_4

Mart_MintPurchaseDecision_8:
# 168 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Relaxed
	goto Mart_MintPurchaseDecision_7

Mart_MintPurchaseDecision_11:
# 169 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Bold
	goto Mart_MintPurchaseDecision_10

Mart_MintPurchaseDecision_14:
# 170 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Gentle
	goto Mart_MintPurchaseDecision_13

Mart_MintPurchaseDecision_17:
# 171 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Careful
	goto Mart_MintPurchaseDecision_16

Mart_MintPurchaseDecision_20:
# 172 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Sassy
	goto Mart_MintPurchaseDecision_19

Mart_MintPurchaseDecision_23:
# 173 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Naughty
	goto Mart_MintPurchaseDecision_22

Mart_MintPurchaseDecision_26:
# 174 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Brave
	goto Mart_MintPurchaseDecision_25

Mart_MintPurchaseDecision_29:
# 175 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Timid
	goto Mart_MintPurchaseDecision_28

Mart_MintPurchaseDecision_32:
# 176 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Hasty
	goto Mart_MintPurchaseDecision_31

Mart_MintPurchaseDecision_35:
# 177 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Adamant
	goto Mart_MintPurchaseDecision_34

Mart_MintPurchaseDecision_38:
# 178 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Mild
	goto Mart_MintPurchaseDecision_37

Mart_MintPurchaseDecision_41:
# 179 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Rash
	goto Mart_MintPurchaseDecision_40

Mart_MintPurchaseDecision_44:
# 180 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Naive
	goto Mart_MintPurchaseDecision_43

Mart_MintPurchaseDecision_47:
# 181 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Lax
	goto Mart_MintPurchaseDecision_46

Mart_MintPurchaseDecision_50:
# 182 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Quiet
	goto Mart_MintPurchaseDecision_49

Mart_MintPurchaseDecision_53:
# 183 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Lonely
	goto Mart_MintPurchaseDecision_52

Mart_MintPurchaseDecision_56:
# 184 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Jolly
	goto Mart_MintPurchaseDecision_55

Mart_MintPurchaseDecision_59:
# 185 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Serious
	goto Mart_MintPurchaseDecision_58

Mart_MintPurchaseDecision_62:
# 186 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Modest
	goto Mart_MintPurchaseDecision_61


MintPurchase_Impish::
# 233 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 234 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_IMPISH_MINT
# 235 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Calm::
# 240 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 241 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CALM_MINT
# 242 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Relaxed::
# 247 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 248 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_RELAXED_MINT
# 249 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Modest::
# 254 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 255 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MODEST_MINT
# 256 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Gentle::
# 261 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 262 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_GENTLE_MINT
# 263 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Careful::
# 268 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 269 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CAREFUL_MINT
# 270 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Sassy::
# 275 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 276 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SASSY_MINT
# 277 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naughty::
# 282 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 283 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT
# 284 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Timid::
# 289 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 290 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_TIMID_MINT
# 291 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Hasty::
# 296 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 297 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_HASTY_MINT
# 298 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Brave::
# 303 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 304 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BRAVE_MINT
# 305 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Bold::
# 310 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 311 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BOLD_MINT
# 312 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Adamant::
# 317 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 318 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
# 319 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Mild::
# 324 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 325 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 326 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Rash::
# 331 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 332 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 333 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naive::
# 338 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 339 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAIVE_MINT
# 340 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lax::
# 345 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 346 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LAX_MINT
# 347 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lonely::
# 352 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 353 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LONELY_MINT
# 354 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Quiet::
# 359 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 360 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_QUIET_MINT
# 361 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Jolly::
# 366 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 367 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_JOLLY_MINT
# 368 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Serious::
# 373 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 374 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 375 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


Common_EventScript_NurseJoyOnRoute::
# 400 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_HEAL_PASS
# 401 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_2
# 420 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_4
# 421 "data//maps/TempCopyMap/scripts.pory"
	release
Common_EventScript_NurseJoyOnRoute_1:
	return

Common_EventScript_NurseJoyOnRoute_2:
# 403 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_0, MSGBOX_YESNO
# 405 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_5
# 414 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_3
# 415 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_NurseJoyOnRoute_1

Common_EventScript_NurseJoyOnRoute_5:
# 406 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_1
# 407 "data//maps/TempCopyMap/scripts.pory"
	release
# 408 "data//maps/TempCopyMap/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 409 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_2
# 410 "data//maps/TempCopyMap/scripts.pory"
	release
# 412 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
	goto Common_EventScript_NurseJoyOnRoute_1


Common_EventScript_ChanseyOnRoute::
# 427 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 428 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 429 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 430 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_ChanseyOnRoute_Text_0
# 431 "data//maps/TempCopyMap/scripts.pory"
	release
# 432 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Route5_Greta_AskToShow::
# 460 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_0, MSGBOX_YESNO
# 461 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_AskToShow_2
Route5_Greta_AskToShow_1:
# 463 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 464 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1
# 465 "data//maps/TempCopyMap/scripts.pory"
	release
# 467 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return

Route5_Greta_AskToShow_2:
# 461 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	goto Route5_Greta_AskToShow_1


Route5_Greta_ShowItemsForSale::
# 471 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 472 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_ShowItemsForSale_Text_0
# 474 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route5_Greta_ShowItemsForSale_Text_1, Route5_Greta_ShowItemsForSale_Text_2, Route5_Greta_ShowItemsForSale_Text_3
# 476 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_ShowItemsForSale_2
Route5_Greta_ShowItemsForSale_1:
# 480 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_ShowItemsForSale_5
Route5_Greta_ShowItemsForSale_4:
# 484 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route5_Greta_ShowItemsForSale_8
Route5_Greta_ShowItemsForSale_7:
# 489 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_AskToShow
	return

Route5_Greta_ShowItemsForSale_2:
# 477 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 478 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_StrangeEgg
	goto Route5_Greta_ShowItemsForSale_1

Route5_Greta_ShowItemsForSale_5:
# 481 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 482 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_MysteriousRock
	goto Route5_Greta_ShowItemsForSale_4

Route5_Greta_ShowItemsForSale_8:
# 485 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 486 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_UglyFish
	goto Route5_Greta_ShowItemsForSale_7


Route5_Greta_StrangeEgg::
# 494 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 10000
# 495 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_StrangeEgg_1
# 500 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_1, MSGBOX_YESNO
# 501 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_StrangeEgg_4
# 509 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_1:
# 496 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 497 "data//maps/TempCopyMap/scripts.pory"
	release
# 498 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_4:
# 502 "data//maps/TempCopyMap/scripts.pory"
	removemoney 10000
# 503 "data//maps/TempCopyMap/scripts.pory"
	giveegg SPECIES_HONEDGE
# 504 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_2, MSGBOX_SIGN
# 505 "data//maps/TempCopyMap/scripts.pory"
	release
# 506 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 507 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_UglyFish::
# 515 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 100
# 516 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_UglyFish_1
# 521 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_0, MSGBOX_YESNO
# 522 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_UglyFish_4
# 530 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_1:
# 517 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 518 "data//maps/TempCopyMap/scripts.pory"
	release
# 519 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_4:
# 523 "data//maps/TempCopyMap/scripts.pory"
	removemoney 100
# 524 "data//maps/TempCopyMap/scripts.pory"
	givemon SPECIES_FEEBAS, 5
# 525 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_1, MSGBOX_SIGN
# 526 "data//maps/TempCopyMap/scripts.pory"
	release
# 527 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 528 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_MysteriousRock::
# 536 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 100
# 537 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_MysteriousRock_1
# 542 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_MysteriousRock_Text_0, MSGBOX_YESNO
# 543 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_MysteriousRock_4
# 549 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_1:
# 538 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 539 "data//maps/TempCopyMap/scripts.pory"
	release
# 540 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_4:
# 544 "data//maps/TempCopyMap/scripts.pory"
	removemoney 100
# 545 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_EVERSTONE
# 546 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 547 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


PellucaCity_Greta_AskToShow::
# 574 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_0, MSGBOX_YESNO
# 575 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_AskToShow_2
PellucaCity_Greta_AskToShow_1:
# 577 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 578 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1
# 579 "data//maps/TempCopyMap/scripts.pory"
	release
# 581 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return

PellucaCity_Greta_AskToShow_2:
# 575 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	goto PellucaCity_Greta_AskToShow_1


PellucaCity_Greta_ShowItemsForSale::
# 585 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 586 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_ShowItemsForSale_Text_0
# 588 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route5_Greta_ShowItemsForSale_Text_1, Route5_Greta_ShowItemsForSale_Text_2, Route5_Greta_ShowItemsForSale_Text_3
# 590 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_2
PellucaCity_Greta_ShowItemsForSale_1:
# 594 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_5
PellucaCity_Greta_ShowItemsForSale_4:
# 598 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_8
PellucaCity_Greta_ShowItemsForSale_7:
# 603 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_AskToShow
	return

PellucaCity_Greta_ShowItemsForSale_2:
# 591 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 592 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_StrangeEgg
	goto PellucaCity_Greta_ShowItemsForSale_1

PellucaCity_Greta_ShowItemsForSale_5:
# 595 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 596 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_MysteriousRock
	goto PellucaCity_Greta_ShowItemsForSale_4

PellucaCity_Greta_ShowItemsForSale_8:
# 599 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 600 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_UglyFish
	goto PellucaCity_Greta_ShowItemsForSale_7


PellucaCity_Greta_StrangeEgg::
# 608 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 10000
# 609 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_StrangeEgg_1
# 614 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_1, MSGBOX_YESNO
# 615 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_StrangeEgg_4
# 623 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_StrangeEgg_1:
# 610 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 611 "data//maps/TempCopyMap/scripts.pory"
	release
# 612 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_StrangeEgg_4:
# 616 "data//maps/TempCopyMap/scripts.pory"
	removemoney 10000
# 617 "data//maps/TempCopyMap/scripts.pory"
	giveegg SPECIES_HONEDGE
# 618 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_2, MSGBOX_SIGN
# 619 "data//maps/TempCopyMap/scripts.pory"
	release
# 620 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 621 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_UglyFish::
# 629 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 100
# 630 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_UglyFish_1
# 635 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_0, MSGBOX_YESNO
# 636 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_UglyFish_4
# 644 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_UglyFish_1:
# 631 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 632 "data//maps/TempCopyMap/scripts.pory"
	release
# 633 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_UglyFish_4:
# 637 "data//maps/TempCopyMap/scripts.pory"
	removemoney 100
# 638 "data//maps/TempCopyMap/scripts.pory"
	givemon SPECIES_FEEBAS, 5
# 639 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_1, MSGBOX_SIGN
# 640 "data//maps/TempCopyMap/scripts.pory"
	release
# 641 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 642 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_MysteriousRock::
# 650 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 100
# 651 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_MysteriousRock_1
# 656 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_MysteriousRock_Text_0, MSGBOX_YESNO
# 657 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_MysteriousRock_4
# 663 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_MysteriousRock_1:
# 652 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 653 "data//maps/TempCopyMap/scripts.pory"
	release
# 654 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_MysteriousRock_4:
# 658 "data//maps/TempCopyMap/scripts.pory"
	removemoney 100
# 659 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_EVERSTONE
# 660 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 661 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


Common_EventScript_SettingsGuy::
# 685 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 686 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 688 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_SettingsGuy_Text_0
# 689 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_SettingsGuy_Text_1, Common_EventScript_SettingsGuy_Text_2
# 691 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_SettingsGuy_2
# 695 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_SYS_EXP_ALL, GEN_3
# 696 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_SettingsGuy_Text_4
Common_EventScript_SettingsGuy_1:
# 699 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_SettingsGuy_2:
# 692 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_SYS_EXP_ALL, GEN_LATEST
# 693 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_SettingsGuy_Text_3
	goto Common_EventScript_SettingsGuy_1


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
	.string "TRAINER: {PLAYER}\n"
	.string "BADGES: 0\p"
	.string "All mints are 200. Which one would you\n"
	.string "like to purchase?$"

Mart_Mints_NoBadges_Text_1:
# 70 "data//maps/TempCopyMap/scripts.pory"
	.string "Impish Mint$"

Mart_Mints_NoBadges_Text_2:
# 70 "data//maps/TempCopyMap/scripts.pory"
	.string "Calm Mint$"

Mart_Mints_NoBadges_Text_3:
# 70 "data//maps/TempCopyMap/scripts.pory"
	.string "Relaxed Mint$"

Mart_Mints_OneBadge_Text_0:
# 77 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}\n"
	.string "BADGES: 1\p"
	.string "All mints are 200. Which one would you\n"
	.string "like to purchase?$"

Mart_Mints_OneBadge_Text_1:
# 79 "data//maps/TempCopyMap/scripts.pory"
	.string "Bold Mint$"

Mart_Mints_OneBadge_Text_2:
# 79 "data//maps/TempCopyMap/scripts.pory"
	.string "Gentle Mint$"

Mart_Mints_OneBadge_Text_3:
# 80 "data//maps/TempCopyMap/scripts.pory"
	.string "Careful Mint$"

Mart_Mints_TwoBadges_Text_0:
# 87 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}\n"
	.string "BADGES: 2\p"
	.string "All mints are 200. Which one would you\n"
	.string "like to purchase?$"

Mart_Mints_TwoBadges_Text_1:
# 91 "data//maps/TempCopyMap/scripts.pory"
	.string "Sassy Mint$"

Mart_Mints_TwoBadges_Text_2:
# 91 "data//maps/TempCopyMap/scripts.pory"
	.string "Naughty Mint$"

Mart_Mints_TwoBadges_Text_3:
# 91 "data//maps/TempCopyMap/scripts.pory"
	.string "Brave Mint$"

Mart_Mints_ThreeBadges_Text_0:
# 98 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}\n"
	.string "BADGES: 3\p"
	.string "All mints are 200. Which one would you\n"
	.string "like to purchase?$"

Mart_Mints_ThreeBadges_Text_1:
# 102 "data//maps/TempCopyMap/scripts.pory"
	.string "Timid Mint$"

Mart_Mints_ThreeBadges_Text_2:
# 103 "data//maps/TempCopyMap/scripts.pory"
	.string "Hasty Mint$"

Mart_Mints_ThreeBadges_Text_3:
# 103 "data//maps/TempCopyMap/scripts.pory"
	.string "Adamant Mint$"

Mart_Mints_FourBadges_Text_0:
# 110 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}\n"
	.string "BADGES: 4\p"
	.string "All mints are 200. Which one would you\n"
	.string "like to purchase?$"

Mart_Mints_FourBadges_Text_1:
# 115 "data//maps/TempCopyMap/scripts.pory"
	.string "Mild Mint$"

Mart_Mints_FourBadges_Text_2:
# 115 "data//maps/TempCopyMap/scripts.pory"
	.string "Rash Mint$"

Mart_Mints_FourBadges_Text_3:
# 116 "data//maps/TempCopyMap/scripts.pory"
	.string "Naive Mint$"

Mart_Mints_FiveBadges_Text_0:
# 123 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}\n"
	.string "BADGES: 5\p"
	.string "All mints are 200. Which one would you\n"
	.string "like to purchase?$"

Mart_Mints_FiveBadges_Text_1:
# 129 "data//maps/TempCopyMap/scripts.pory"
	.string "Lax Mint$"

Mart_Mints_FiveBadges_Text_2:
# 129 "data//maps/TempCopyMap/scripts.pory"
	.string "Quiet Mint$"

Mart_Mints_FiveBadges_Text_3:
# 129 "data//maps/TempCopyMap/scripts.pory"
	.string "Lonely Mint$"

Mart_Mints_SixBadges_Text_0:
# 136 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}\n"
	.string "BADGES: 6\p"
	.string "All mints are 200. Which one would you\n"
	.string "like to purchase?$"

Mart_Mints_SixBadges_Text_1:
# 142 "data//maps/TempCopyMap/scripts.pory"
	.string "Jolly Mint$"

Mart_Mints_SixBadges_Text_2:
# 143 "data//maps/TempCopyMap/scripts.pory"
	.string "Serious Mint$"

Mart_Mints_SixBadges_Text_3:
# 143 "data//maps/TempCopyMap/scripts.pory"
	.string "Modest Mint$"

Common_EventScript_NurseJoyOnRoute_Text_0:
# 403 "data//maps/TempCopyMap/scripts.pory"
	.string "Should I heal your Pokemon? You can\n"
	.string "come back later if you wish.$"

Common_EventScript_NurseJoyOnRoute_Text_1:
# 406 "data//maps/TempCopyMap/scripts.pory"
	.string "Let me heal your Pokemon.$"

Common_EventScript_NurseJoyOnRoute_Text_2:
# 409 "data//maps/TempCopyMap/scripts.pory"
	.string "Stay safe out there!$"

Common_EventScript_NurseJoyOnRoute_Text_3:
# 414 "data//maps/TempCopyMap/scripts.pory"
	.string "Come back any time!$"

Common_EventScript_NurseJoyOnRoute_Text_4:
# 420 "data//maps/TempCopyMap/scripts.pory"
	.string "Sorry, you don't have a HEAL PASS.\n"
	.string "Please visit a POKéMON CENTER to\l"
	.string "receive a HEAL PASS.$"

Common_EventScript_ChanseyOnRoute_Text_0:
# 430 "data//maps/TempCopyMap/scripts.pory"
	.string "CHANSEY is happy as always!$"

Route5_Greta_AskToShow_Text_0:
# 460 "data//maps/TempCopyMap/scripts.pory"
	.string "Wanna buy anything?$"

Route5_Greta_AskToShow_Text_1:
# 464 "data//maps/TempCopyMap/scripts.pory"
	.string "Bummer!$"

Route5_Greta_ShowItemsForSale_Text_0:
# 472 "data//maps/TempCopyMap/scripts.pory"
	.string "The egg is 10,000. The rock is 5,000. The\n"
	.string "fish is only 100!$"

Route5_Greta_ShowItemsForSale_Text_1:
# 474 "data//maps/TempCopyMap/scripts.pory"
	.string "Strange Egg$"

Route5_Greta_ShowItemsForSale_Text_2:
# 474 "data//maps/TempCopyMap/scripts.pory"
	.string "Mysterious Rock$"

Route5_Greta_ShowItemsForSale_Text_3:
# 474 "data//maps/TempCopyMap/scripts.pory"
	.string "Ugly Fish$"

Route5_Greta_StrangeEgg_Text_0:
# 496 "data//maps/TempCopyMap/scripts.pory"
	.string "Hey! You can't afford this!$"

Route5_Greta_StrangeEgg_Text_1:
# 500 "data//maps/TempCopyMap/scripts.pory"
	.string "A discerning choice! You sure?$"

Route5_Greta_StrangeEgg_Text_2:
# 504 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Strange Egg from\n"
	.string "GRETA.$"

Route5_Greta_StrangeEgg_Text_3:
# 506 "data//maps/TempCopyMap/scripts.pory"
	.string "GRETA: Good doing business with you!\n"
	.string "Now, what about -$"

Route5_Greta_UglyFish_Text_0:
# 521 "data//maps/TempCopyMap/scripts.pory"
	.string "A...budget-friendly choice! You sure?$"

Route5_Greta_UglyFish_Text_1:
# 525 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a FEEBAS from\n"
	.string "GRETA.$"

Route5_Greta_MysteriousRock_Text_0:
# 542 "data//maps/TempCopyMap/scripts.pory"
	.string "A reasonable choice! You sure?$"

Common_EventScript_SettingsGuy_Text_0:
# 688 "data//maps/TempCopyMap/scripts.pory"
	.string "Hello! I can enable or disable Exp All. If\n"
	.string "enabled, the Exp Share allows all\l"
	.string "Pokemon to gain experience. If\l"
	.string "disabled, the Exp share will only give\l"
	.string "experience to the Pokemon holding it.\l"
	.string "Would you like to toggle Exp All?$"

Common_EventScript_SettingsGuy_Text_1:
# 689 "data//maps/TempCopyMap/scripts.pory"
	.string "EXP ALL ON$"

Common_EventScript_SettingsGuy_Text_2:
# 689 "data//maps/TempCopyMap/scripts.pory"
	.string "EXP ALL OFF$"

Common_EventScript_SettingsGuy_Text_3:
# 693 "data//maps/TempCopyMap/scripts.pory"
	.string "Exp All is now {COLOR GREEN}ON{COLOR DARK_GRAY}.$"

Common_EventScript_SettingsGuy_Text_4:
# 696 "data//maps/TempCopyMap/scripts.pory"
	.string "Exp All is now {COLOR RED}OFF{COLOR DARK_GRAY}.$"

Common_Text_Greta_Comecome::
# 455 "data//maps/TempCopyMap/scripts.pory"
	.string "Come, come. I've got some really great\n"
	.string "stuff from...well, you can't ask a\l"
	.string "magician to reveal her secrets, can\l"
	.string "you?$"
