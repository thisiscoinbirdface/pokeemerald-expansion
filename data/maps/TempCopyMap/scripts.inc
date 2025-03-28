TempCopyMap_MapScripts::
	.byte 0


Common_EventScript_MintVendingMachine::
# 6 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_0, MSGBOX_YESNO
# 7 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_2
# 9 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5000
# 10 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_5
# 16 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Common_EventScript_MintVendingMachine_8
# 19 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Common_EventScript_MintVendingMachine_11
# 22 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Common_EventScript_MintVendingMachine_14
# 25 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Common_EventScript_MintVendingMachine_17
# 28 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MintVendingMachine_20
# 31 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Common_EventScript_MintVendingMachine_23
# 34 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_NoBadges
Common_EventScript_MintVendingMachine_7:
# 42 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_MintVendingMachine_2:
	end

Common_EventScript_MintVendingMachine_5:
# 11 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_1
# 12 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_MintVendingMachine_8:
# 17 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_SixBadges
	goto Common_EventScript_MintVendingMachine_7

Common_EventScript_MintVendingMachine_11:
# 20 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FiveBadges
	goto Common_EventScript_MintVendingMachine_7

Common_EventScript_MintVendingMachine_14:
# 23 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FourBadges
	goto Common_EventScript_MintVendingMachine_7

Common_EventScript_MintVendingMachine_17:
# 26 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_ThreeBadges
	goto Common_EventScript_MintVendingMachine_7

Common_EventScript_MintVendingMachine_20:
# 29 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_TwoBadges
	goto Common_EventScript_MintVendingMachine_7

Common_EventScript_MintVendingMachine_23:
# 32 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_OneBadge
	goto Common_EventScript_MintVendingMachine_7


Mart_Mints_NoBadges::
# 49 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 50 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_NoBadges_Text_0
# 52 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3
# 54 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 55 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_OneBadge::
# 58 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 59 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_NoBadges_Text_0
# 61 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_0, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2
# 64 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 65 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_TwoBadges::
# 68 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 69 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_NoBadges_Text_0
# 71 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_0, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_TwoBadges_Text_0, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2
# 74 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 75 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_ThreeBadges::
# 78 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 79 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_NoBadges_Text_0
# 81 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_0, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_TwoBadges_Text_0, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_ThreeBadges_Text_0, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2
# 85 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 86 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FourBadges::
# 89 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 90 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_NoBadges_Text_0
# 92 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_0, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_TwoBadges_Text_0, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_ThreeBadges_Text_0, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_FourBadges_Text_0, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2
# 97 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 98 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FiveBadges::
# 101 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 102 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_NoBadges_Text_0
# 104 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_0, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_TwoBadges_Text_0, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_ThreeBadges_Text_0, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_FourBadges_Text_0, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FiveBadges_Text_0, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2
# 109 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 110 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_SixBadges::
# 113 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 114 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_NoBadges_Text_0
# 116 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_0, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_TwoBadges_Text_0, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_ThreeBadges_Text_0, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_FourBadges_Text_0, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FiveBadges_Text_0, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_SixBadges_Text_0, Mart_Mints_SixBadges_Text_1, Mart_Mints_SixBadges_Text_2
# 122 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 123 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_MintPurchaseDecision::
# 139 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 0
	goto_if_eq Mart_MintPurchaseDecision_2
Mart_MintPurchaseDecision_1:
# 140 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 1
	goto_if_eq Mart_MintPurchaseDecision_5
Mart_MintPurchaseDecision_4:
# 141 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 2
	goto_if_eq Mart_MintPurchaseDecision_8
Mart_MintPurchaseDecision_7:
# 142 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 3
	goto_if_eq Mart_MintPurchaseDecision_11
Mart_MintPurchaseDecision_10:
# 143 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 4
	goto_if_eq Mart_MintPurchaseDecision_14
Mart_MintPurchaseDecision_13:
# 144 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 5
	goto_if_eq Mart_MintPurchaseDecision_17
Mart_MintPurchaseDecision_16:
# 145 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 6
	goto_if_eq Mart_MintPurchaseDecision_20
Mart_MintPurchaseDecision_19:
# 146 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 7
	goto_if_eq Mart_MintPurchaseDecision_23
Mart_MintPurchaseDecision_22:
# 147 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 8
	goto_if_eq Mart_MintPurchaseDecision_26
Mart_MintPurchaseDecision_25:
# 148 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 9
	goto_if_eq Mart_MintPurchaseDecision_29
Mart_MintPurchaseDecision_28:
# 149 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 10
	goto_if_eq Mart_MintPurchaseDecision_32
Mart_MintPurchaseDecision_31:
# 150 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 11
	goto_if_eq Mart_MintPurchaseDecision_35
Mart_MintPurchaseDecision_34:
# 151 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 12
	goto_if_eq Mart_MintPurchaseDecision_38
Mart_MintPurchaseDecision_37:
# 152 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 13
	goto_if_eq Mart_MintPurchaseDecision_41
Mart_MintPurchaseDecision_40:
# 153 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 14
	goto_if_eq Mart_MintPurchaseDecision_44
Mart_MintPurchaseDecision_43:
# 154 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 15
	goto_if_eq Mart_MintPurchaseDecision_47
Mart_MintPurchaseDecision_46:
# 155 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 16
	goto_if_eq Mart_MintPurchaseDecision_50
Mart_MintPurchaseDecision_49:
# 156 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 17
	goto_if_eq Mart_MintPurchaseDecision_53
Mart_MintPurchaseDecision_52:
# 157 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 18
	goto_if_eq Mart_MintPurchaseDecision_56
Mart_MintPurchaseDecision_55:
# 158 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 19
	goto_if_eq Mart_MintPurchaseDecision_59
Mart_MintPurchaseDecision_58:
# 159 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8007, 20
	goto_if_eq Mart_MintPurchaseDecision_62
Mart_MintPurchaseDecision_61:
# 161 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Mart_MintPurchaseDecision_2:
# 139 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Impish
	goto Mart_MintPurchaseDecision_1

Mart_MintPurchaseDecision_5:
# 140 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Calm
	goto Mart_MintPurchaseDecision_4

Mart_MintPurchaseDecision_8:
# 141 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Relaxed
	goto Mart_MintPurchaseDecision_7

Mart_MintPurchaseDecision_11:
# 142 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Bold
	goto Mart_MintPurchaseDecision_10

Mart_MintPurchaseDecision_14:
# 143 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Gentle
	goto Mart_MintPurchaseDecision_13

Mart_MintPurchaseDecision_17:
# 144 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Careful
	goto Mart_MintPurchaseDecision_16

Mart_MintPurchaseDecision_20:
# 145 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Sassy
	goto Mart_MintPurchaseDecision_19

Mart_MintPurchaseDecision_23:
# 146 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Naughty
	goto Mart_MintPurchaseDecision_22

Mart_MintPurchaseDecision_26:
# 147 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Brave
	goto Mart_MintPurchaseDecision_25

Mart_MintPurchaseDecision_29:
# 148 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Timid
	goto Mart_MintPurchaseDecision_28

Mart_MintPurchaseDecision_32:
# 149 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Hasty
	goto Mart_MintPurchaseDecision_31

Mart_MintPurchaseDecision_35:
# 150 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Adamant
	goto Mart_MintPurchaseDecision_34

Mart_MintPurchaseDecision_38:
# 151 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Mild
	goto Mart_MintPurchaseDecision_37

Mart_MintPurchaseDecision_41:
# 152 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Rash
	goto Mart_MintPurchaseDecision_40

Mart_MintPurchaseDecision_44:
# 153 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Naive
	goto Mart_MintPurchaseDecision_43

Mart_MintPurchaseDecision_47:
# 154 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Lax
	goto Mart_MintPurchaseDecision_46

Mart_MintPurchaseDecision_50:
# 155 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Quiet
	goto Mart_MintPurchaseDecision_49

Mart_MintPurchaseDecision_53:
# 156 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Lonely
	goto Mart_MintPurchaseDecision_52

Mart_MintPurchaseDecision_56:
# 157 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Jolly
	goto Mart_MintPurchaseDecision_55

Mart_MintPurchaseDecision_59:
# 158 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Serious
	goto Mart_MintPurchaseDecision_58

Mart_MintPurchaseDecision_62:
# 159 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Modest
	goto Mart_MintPurchaseDecision_61


MintPurchase_Impish::
# 206 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 207 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 208 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_IMPISH_MINT
# 209 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Calm::
# 214 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 215 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 216 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CALM_MINT
# 217 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Relaxed::
# 222 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 223 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 224 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_RELAXED_MINT
# 225 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Modest::
# 230 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 231 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 232 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MODEST_MINT
# 233 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Gentle::
# 238 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 239 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 240 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_GENTLE_MINT
# 241 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Careful::
# 246 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 247 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 248 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CAREFUL_MINT
# 249 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Sassy::
# 254 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 255 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 256 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SASSY_MINT
# 257 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Naughty::
# 262 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 263 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 264 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT
# 265 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Timid::
# 270 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 271 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 272 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_TIMID_MINT
# 273 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Hasty::
# 278 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 279 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 280 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_HASTY_MINT
# 281 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Brave::
# 286 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 287 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 288 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BRAVE_MINT
# 289 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Bold::
# 294 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 295 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 296 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BOLD_MINT
# 297 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Adamant::
# 302 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 303 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 304 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
# 305 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Mild::
# 310 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 311 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 312 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 313 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Rash::
# 318 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 319 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 320 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 321 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Naive::
# 326 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 327 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 328 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAIVE_MINT
# 329 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Lax::
# 334 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 335 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 336 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LAX_MINT
# 337 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Lonely::
# 342 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 343 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 344 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LONELY_MINT
# 345 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Quiet::
# 350 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 351 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 352 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_QUIET_MINT
# 353 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Jolly::
# 358 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 359 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 360 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_JOLLY_MINT
# 361 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Serious::
# 366 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 367 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 368 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 369 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Common_EventScript_MintVendingMachine_Text_0:
# 6 "data//maps/TempCopyMap/scripts.pory"
	.string "There's a slot to swipe your TRAINER\n"
	.string "CARD. Swipe?$"

Common_EventScript_MintVendingMachine_Text_1:
# 11 "data//maps/TempCopyMap/scripts.pory"
	.string "You do not have enough money to\n"
	.string "purchase any mints.$"

Mart_Mints_NoBadges_Text_0:
# 50 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}\n"
	.string "BADGES: 0\p"
	.string "All mints are 200. Which one would you\n"
	.string "like to purchase?$"

Mart_Mints_NoBadges_Text_1:
# 53 "data//maps/TempCopyMap/scripts.pory"
	.string "Impish Mint$"

Mart_Mints_NoBadges_Text_2:
# 53 "data//maps/TempCopyMap/scripts.pory"
	.string "Calm Mint$"

Mart_Mints_NoBadges_Text_3:
# 53 "data//maps/TempCopyMap/scripts.pory"
	.string "Relaxed Mint$"

Mart_Mints_OneBadge_Text_0:
# 62 "data//maps/TempCopyMap/scripts.pory"
	.string "Bold Mint$"

Mart_Mints_OneBadge_Text_1:
# 62 "data//maps/TempCopyMap/scripts.pory"
	.string "Gentle Mint$"

Mart_Mints_OneBadge_Text_2:
# 63 "data//maps/TempCopyMap/scripts.pory"
	.string "Careful Mint$"

Mart_Mints_TwoBadges_Text_0:
# 73 "data//maps/TempCopyMap/scripts.pory"
	.string "Sassy Mint$"

Mart_Mints_TwoBadges_Text_1:
# 73 "data//maps/TempCopyMap/scripts.pory"
	.string "Naughty Mint$"

Mart_Mints_TwoBadges_Text_2:
# 73 "data//maps/TempCopyMap/scripts.pory"
	.string "Brave Mint$"

Mart_Mints_ThreeBadges_Text_0:
# 83 "data//maps/TempCopyMap/scripts.pory"
	.string "Timid Mint$"

Mart_Mints_ThreeBadges_Text_1:
# 84 "data//maps/TempCopyMap/scripts.pory"
	.string "Hasty Mint$"

Mart_Mints_ThreeBadges_Text_2:
# 84 "data//maps/TempCopyMap/scripts.pory"
	.string "Adamant Mint$"

Mart_Mints_FourBadges_Text_0:
# 95 "data//maps/TempCopyMap/scripts.pory"
	.string "Mild Mint$"

Mart_Mints_FourBadges_Text_1:
# 95 "data//maps/TempCopyMap/scripts.pory"
	.string "Rash Mint$"

Mart_Mints_FourBadges_Text_2:
# 96 "data//maps/TempCopyMap/scripts.pory"
	.string "Naive Mint$"

Mart_Mints_FiveBadges_Text_0:
# 108 "data//maps/TempCopyMap/scripts.pory"
	.string "Lax Mint$"

Mart_Mints_FiveBadges_Text_1:
# 108 "data//maps/TempCopyMap/scripts.pory"
	.string "Quiet Mint$"

Mart_Mints_FiveBadges_Text_2:
# 108 "data//maps/TempCopyMap/scripts.pory"
	.string "Lonely Mint$"

Mart_Mints_SixBadges_Text_0:
# 120 "data//maps/TempCopyMap/scripts.pory"
	.string "Jolly Mint$"

Mart_Mints_SixBadges_Text_1:
# 121 "data//maps/TempCopyMap/scripts.pory"
	.string "Serious Mint$"

Mart_Mints_SixBadges_Text_2:
# 121 "data//maps/TempCopyMap/scripts.pory"
	.string "Modest Mint$"
