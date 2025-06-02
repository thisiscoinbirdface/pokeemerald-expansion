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


Common_EventScript_Follower_Cheat::
# 16 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Follower_Cheat_Text_0
# 17 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 18 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Follower_Cheat_Text_1, Common_EventScript_Follower_Cheat_Text_2, Common_EventScript_Follower_Cheat_Text_3, Common_EventScript_Follower_Cheat_Text_4
# 20 "data//maps/TempCopyMap/scripts.pory"
	release
# 21 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Follower_Cheat_2
Common_EventScript_Follower_Cheat_1:
# 26 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Follower_Cheat_5
Common_EventScript_Follower_Cheat_4:
# 30 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_Follower_Cheat_8
Common_EventScript_Follower_Cheat_7:
# 47 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_Follower_Cheat_2:
# 22 "data//maps/TempCopyMap/scripts.pory"
	special ShowPokemonStorageSystemPC
# 23 "data//maps/TempCopyMap/scripts.pory"
	waitstate
	goto Common_EventScript_Follower_Cheat_1

Common_EventScript_Follower_Cheat_5:
# 27 "data//maps/TempCopyMap/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Common_EventScript_Follower_Cheat_4

Common_EventScript_Follower_Cheat_8:
# 32 "data//maps/TempCopyMap/scripts.pory"
	special ChoosePartyMon
# 33 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 36 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_Follower_Cheat_11
# 42 "data//maps/TempCopyMap/scripts.pory"
	callnative ApplyStatusConditionFromField_Burn
# 43 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Follower_Cheat_Text_5
# 44 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_Follower_Cheat_7

Common_EventScript_Follower_Cheat_11:
# 37 "data//maps/TempCopyMap/scripts.pory"
	release
	end


Common_EventScript_MintVendingMachine::
# 101 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_0, MSGBOX_YESNO
# 102 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_2
# 107 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 200
# 108 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_5
# 113 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	return

Common_EventScript_MintVendingMachine_2:
# 103 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_MintVendingMachine_5:
# 109 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_1
# 110 "data//maps/TempCopyMap/scripts.pory"
	release
	end


MintVendingMachine_CheckBadge::
# 118 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MintVendingMachine_CheckBadge_2
# 121 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MintVendingMachine_CheckBadge_5
# 124 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MintVendingMachine_CheckBadge_8
# 127 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MintVendingMachine_CheckBadge_11
# 130 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MintVendingMachine_CheckBadge_14
# 133 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MintVendingMachine_CheckBadge_17
# 136 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_NoBadges
MintVendingMachine_CheckBadge_1:
# 144 "data//maps/TempCopyMap/scripts.pory"
	release
	end

MintVendingMachine_CheckBadge_2:
# 119 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_SixBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_5:
# 122 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FiveBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_8:
# 125 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FourBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_11:
# 128 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_ThreeBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_14:
# 131 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_TwoBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_17:
# 134 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_OneBadge
	goto MintVendingMachine_CheckBadge_1


Mart_Mints_NoBadges::
# 151 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 152 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_NoBadges_Text_0
# 153 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 154 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3
# 155 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 156 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 157 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_OneBadge::
# 160 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 161 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_OneBadge_Text_0
# 162 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 163 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3
# 166 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 167 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 168 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_TwoBadges::
# 171 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 172 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_TwoBadges_Text_0
# 173 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 174 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3
# 177 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 178 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 179 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_ThreeBadges::
# 182 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 183 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_ThreeBadges_Text_0
# 184 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 185 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3
# 189 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 190 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 191 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FourBadges::
# 194 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 195 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_FourBadges_Text_0
# 196 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 197 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3
# 202 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 203 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 204 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FiveBadges::
# 207 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 208 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_FiveBadges_Text_0
# 209 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 210 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3
# 215 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 216 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 217 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_SixBadges::
# 220 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 221 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_SixBadges_Text_0
# 222 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 223 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3, Mart_Mints_SixBadges_Text_1, Mart_Mints_SixBadges_Text_2, Mart_Mints_SixBadges_Text_3
# 229 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 230 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 231 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
# 233 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 234 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Mart_MintPurchaseDecision::
# 251 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Mart_MintPurchaseDecision_2
Mart_MintPurchaseDecision_1:
# 252 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Mart_MintPurchaseDecision_5
Mart_MintPurchaseDecision_4:
# 253 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq Mart_MintPurchaseDecision_8
Mart_MintPurchaseDecision_7:
# 254 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq Mart_MintPurchaseDecision_11
Mart_MintPurchaseDecision_10:
# 255 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Mart_MintPurchaseDecision_14
Mart_MintPurchaseDecision_13:
# 257 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Mart_MintPurchaseDecision_17
Mart_MintPurchaseDecision_16:
# 258 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_eq Mart_MintPurchaseDecision_20
Mart_MintPurchaseDecision_19:
# 259 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 7
	goto_if_eq Mart_MintPurchaseDecision_23
Mart_MintPurchaseDecision_22:
# 260 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 8
	goto_if_eq Mart_MintPurchaseDecision_26
Mart_MintPurchaseDecision_25:
# 261 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 9
	goto_if_eq Mart_MintPurchaseDecision_29
Mart_MintPurchaseDecision_28:
# 263 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Mart_MintPurchaseDecision_32
Mart_MintPurchaseDecision_31:
# 264 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 11
	goto_if_eq Mart_MintPurchaseDecision_35
Mart_MintPurchaseDecision_34:
# 265 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 12
	goto_if_eq Mart_MintPurchaseDecision_38
Mart_MintPurchaseDecision_37:
# 266 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 13
	goto_if_eq Mart_MintPurchaseDecision_41
Mart_MintPurchaseDecision_40:
# 268 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 14
	goto_if_eq Mart_MintPurchaseDecision_44
Mart_MintPurchaseDecision_43:
# 269 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 15
	goto_if_eq Mart_MintPurchaseDecision_47
Mart_MintPurchaseDecision_46:
# 270 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 16
	goto_if_eq Mart_MintPurchaseDecision_50
Mart_MintPurchaseDecision_49:
# 271 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 17
	goto_if_eq Mart_MintPurchaseDecision_53
Mart_MintPurchaseDecision_52:
# 272 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 18
	goto_if_eq Mart_MintPurchaseDecision_56
Mart_MintPurchaseDecision_55:
# 273 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 19
	goto_if_eq Mart_MintPurchaseDecision_59
Mart_MintPurchaseDecision_58:
# 274 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 20
	goto_if_eq Mart_MintPurchaseDecision_62
Mart_MintPurchaseDecision_61:
# 276 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Mart_MintPurchaseDecision_2:
# 251 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_IMPISH_MINT
# 251 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_1

Mart_MintPurchaseDecision_5:
# 252 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_CALM_MINT
# 252 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_4

Mart_MintPurchaseDecision_8:
# 253 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_RELAXED_MINT
# 253 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_7

Mart_MintPurchaseDecision_11:
# 254 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_BOLD_MINT
# 254 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_10

Mart_MintPurchaseDecision_14:
# 255 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_GENTLE_MINT
# 255 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_13

Mart_MintPurchaseDecision_17:
# 257 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_CAREFUL_MINT
# 257 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_16

Mart_MintPurchaseDecision_20:
# 258 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SASSY_MINT
# 258 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_19

Mart_MintPurchaseDecision_23:
# 259 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SERIOUS_MINT
# 259 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_22

Mart_MintPurchaseDecision_26:
# 260 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_BRAVE_MINT
# 260 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_25

Mart_MintPurchaseDecision_29:
# 261 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_NAIVE_MINT
# 261 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_28

Mart_MintPurchaseDecision_32:
# 263 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_HASTY_MINT
# 263 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_31

Mart_MintPurchaseDecision_35:
# 264 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_LAX_MINT
# 264 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_34

Mart_MintPurchaseDecision_38:
# 265 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_MILD_MINT
# 265 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_37

Mart_MintPurchaseDecision_41:
# 266 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_RASH_MINT
# 266 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_40

Mart_MintPurchaseDecision_44:
# 268 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_TIMID_MINT
# 268 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_43

Mart_MintPurchaseDecision_47:
# 269 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_NAUGHTY_MINT
# 269 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_46

Mart_MintPurchaseDecision_50:
# 270 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_QUIET_MINT
# 270 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_49

Mart_MintPurchaseDecision_53:
# 271 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_LONELY_MINT
# 271 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_52

Mart_MintPurchaseDecision_56:
# 272 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_JOLLY_MINT
# 272 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_55

Mart_MintPurchaseDecision_59:
# 273 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_ADAMANT_MINT
# 273 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_58

Mart_MintPurchaseDecision_62:
# 274 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_MODEST_MINT
# 274 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_61


MintPurchase_Common::
# 316 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 318 "data//maps/TempCopyMap/scripts.pory"
	msgbox MintPurchase_Common_Text_0, MSGBOX_YESNO
# 320 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MintPurchase_Common_2
# 328 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 329 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end

MintPurchase_Common_2:
# 321 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 322 "data//maps/TempCopyMap/scripts.pory"
	giveitem VAR_0x8006
# 323 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 324 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Impish::
# 338 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 340 "data//maps/TempCopyMap/scripts.pory"
	msgbox MintPurchase_Common_Text_0, MSGBOX_YESNO
# 342 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MintPurchase_Impish_2
MintPurchase_Impish_1:
# 346 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end

MintPurchase_Impish_2:
# 343 "data//maps/TempCopyMap/scripts.pory"
	giveitem VAR_0x8006
# 344 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
	goto MintPurchase_Impish_1


MintPurchase_Calm::
# 352 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 353 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CALM_MINT
# 354 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Relaxed::
# 359 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 360 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_RELAXED_MINT
# 361 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Modest::
# 366 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 367 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MODEST_MINT
# 368 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Gentle::
# 373 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 374 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_GENTLE_MINT
# 375 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Careful::
# 380 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 381 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CAREFUL_MINT
# 382 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Sassy::
# 387 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 388 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SASSY_MINT
# 389 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naughty::
# 394 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 395 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT
# 396 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Timid::
# 401 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 402 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_TIMID_MINT
# 403 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Hasty::
# 408 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 409 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_HASTY_MINT
# 410 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Brave::
# 415 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 416 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BRAVE_MINT
# 417 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Bold::
# 422 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 423 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BOLD_MINT
# 424 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Adamant::
# 429 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 430 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
# 431 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Mild::
# 436 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 437 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 438 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Rash::
# 443 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 444 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 445 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naive::
# 450 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 451 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAIVE_MINT
# 452 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lax::
# 457 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 458 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LAX_MINT
# 459 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lonely::
# 464 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 465 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LONELY_MINT
# 466 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Quiet::
# 471 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 472 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_QUIET_MINT
# 473 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Jolly::
# 478 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 479 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_JOLLY_MINT
# 480 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Serious::
# 485 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 486 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 487 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


Common_EventScript_NurseJoyOnRoute::
# 512 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_HEAL_PASS
# 513 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_2
# 542 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_4
# 543 "data//maps/TempCopyMap/scripts.pory"
	release
Common_EventScript_NurseJoyOnRoute_1:
	return

Common_EventScript_NurseJoyOnRoute_2:
# 515 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_0, MSGBOX_YESNO
# 517 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_5
# 536 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_3
# 537 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_NurseJoyOnRoute_1

Common_EventScript_NurseJoyOnRoute_5:
# 518 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 519 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 520 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 521 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 522 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 523 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 524 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 525 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 526 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 527 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 529 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_1
# 530 "data//maps/TempCopyMap/scripts.pory"
	release
# 531 "data//maps/TempCopyMap/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 532 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_2
# 533 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_NurseJoyOnRoute_1


Common_EventScript_ChanseyOnRoute::
# 549 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 550 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 551 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 552 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_ChanseyOnRoute_Text_0
# 553 "data//maps/TempCopyMap/scripts.pory"
	release
# 554 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Route5_Greta_AskToShow::
# 582 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 583 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1, MSGBOX_YESNO
# 584 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_AskToShow_2
Route5_Greta_AskToShow_1:
# 586 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_2
# 587 "data//maps/TempCopyMap/scripts.pory"
	release
# 589 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return

Route5_Greta_AskToShow_2:
# 584 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	goto Route5_Greta_AskToShow_1


Route5_Greta_ShowItemsForSale::
# 593 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 594 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 595 "data//maps/TempCopyMap/scripts.pory"
	message Route5_Greta_ShowItemsForSale_Text_0
# 596 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 598 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route5_Greta_ShowItemsForSale_Text_1, Route5_Greta_ShowItemsForSale_Text_2, Route5_Greta_ShowItemsForSale_Text_3
# 599 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 600 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_ShowItemsForSale_2
Route5_Greta_ShowItemsForSale_1:
# 601 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_ShowItemsForSale_5
Route5_Greta_ShowItemsForSale_4:
# 602 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route5_Greta_ShowItemsForSale_8
Route5_Greta_ShowItemsForSale_7:
# 604 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_AskToShow
	return

Route5_Greta_ShowItemsForSale_2:
# 600 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_StrangeEgg
	goto Route5_Greta_ShowItemsForSale_1

Route5_Greta_ShowItemsForSale_5:
# 601 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_MysteriousRock
	goto Route5_Greta_ShowItemsForSale_4

Route5_Greta_ShowItemsForSale_8:
# 602 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_UglyFish
	goto Route5_Greta_ShowItemsForSale_7


Route5_Greta_StrangeEgg::
# 609 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 10000
# 610 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_StrangeEgg_1
# 616 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 617 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_1, MSGBOX_YESNO
# 618 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_StrangeEgg_4
# 627 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_1:
# 611 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 612 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 613 "data//maps/TempCopyMap/scripts.pory"
	release
# 614 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_4:
# 619 "data//maps/TempCopyMap/scripts.pory"
	removemoney 10000
# 620 "data//maps/TempCopyMap/scripts.pory"
	giveegg SPECIES_HONEDGE
# 621 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_2, MSGBOX_SIGN
# 622 "data//maps/TempCopyMap/scripts.pory"
	release
# 623 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 624 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 625 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_UglyFish::
# 633 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 100
# 634 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_UglyFish_1
# 640 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 641 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_0, MSGBOX_YESNO
# 642 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_UglyFish_4
# 651 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_1:
# 635 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 636 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 637 "data//maps/TempCopyMap/scripts.pory"
	release
# 638 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_4:
# 643 "data//maps/TempCopyMap/scripts.pory"
	removemoney 100
# 644 "data//maps/TempCopyMap/scripts.pory"
	givemon SPECIES_FEEBAS, 5
# 645 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_1, MSGBOX_SIGN
# 646 "data//maps/TempCopyMap/scripts.pory"
	release
# 647 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 648 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 649 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_MysteriousRock::
# 657 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5000
# 658 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_MysteriousRock_1
# 664 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 665 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_MysteriousRock_Text_0, MSGBOX_YESNO
# 666 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_MysteriousRock_4
# 673 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_1:
# 659 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 660 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 661 "data//maps/TempCopyMap/scripts.pory"
	release
# 662 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_4:
# 667 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5000
# 668 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ODD_KEYSTONE
# 669 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 670 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 671 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


PellucaCity_Greta_AskToShow::
# 698 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 699 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1, MSGBOX_YESNO
# 700 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_AskToShow_2
PellucaCity_Greta_AskToShow_1:
# 702 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 703 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 704 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_2
# 705 "data//maps/TempCopyMap/scripts.pory"
	release
# 707 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return

PellucaCity_Greta_AskToShow_2:
# 700 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	goto PellucaCity_Greta_AskToShow_1


PellucaCity_Greta_ShowItemsForSale::
# 711 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 712 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 713 "data//maps/TempCopyMap/scripts.pory"
	message PellucaCity_Greta_ShowItemsForSale_Text_0
# 714 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 716 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Greta_ShowItemsForSale_Text_1, PellucaCity_Greta_ShowItemsForSale_Text_2, PellucaCity_Greta_ShowItemsForSale_Text_3
# 717 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 718 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_2
PellucaCity_Greta_ShowItemsForSale_1:
# 719 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_5
PellucaCity_Greta_ShowItemsForSale_4:
# 720 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_8
PellucaCity_Greta_ShowItemsForSale_7:
# 722 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_AskToShow
	return

PellucaCity_Greta_ShowItemsForSale_2:
# 718 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_A
	goto PellucaCity_Greta_ShowItemsForSale_1

PellucaCity_Greta_ShowItemsForSale_5:
# 719 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_B
	goto PellucaCity_Greta_ShowItemsForSale_4

PellucaCity_Greta_ShowItemsForSale_8:
# 720 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_C
	goto PellucaCity_Greta_ShowItemsForSale_7


PellucaCity_Greta_Item_A::
# 727 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 728 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_A_1
# 734 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SUN_STONE
# 735 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 736 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 737 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_A_Text_0, MSGBOX_YESNO
# 738 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_A_4
# 746 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 747 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_A_1:
# 729 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 730 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 731 "data//maps/TempCopyMap/scripts.pory"
	release
# 732 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_A_4:
# 739 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 740 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 741 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SUN_STONE
# 742 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 743 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 744 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_Item_B::
# 753 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 754 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_B_1
# 760 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_PRISM_SCALE
# 761 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 762 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 763 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_B_Text_0, MSGBOX_YESNO
# 764 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_B_4
# 772 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 773 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_B_1:
# 755 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 756 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 757 "data//maps/TempCopyMap/scripts.pory"
	release
# 758 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_B_4:
# 765 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 766 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 767 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_PRISM_SCALE
# 768 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 769 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 770 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_Item_C::
# 779 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 780 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_C_1
# 786 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_DAWN_STONE
# 787 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 788 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 789 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_C_Text_0, MSGBOX_YESNO
# 790 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_C_4
# 798 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 799 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_C_1:
# 781 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 782 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 783 "data//maps/TempCopyMap/scripts.pory"
	release
# 784 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_C_4:
# 791 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 792 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 793 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 794 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 795 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 796 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


AncientStatue_Gastree::
# 837 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 838 "data//maps/TempCopyMap/scripts.pory"
	release
	end


AncientStatue_Ceram::
# 843 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 844 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_CERAM, AncientStatue_Ceram_2
# 845 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_CERAM
# 845 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Ceram_1:
	end

AncientStatue_Ceram_2:
# 844 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 844 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Ceram_1


AncientStatue_Galecrest::
# 849 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 850 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_GALECREST, AncientStatue_Galecrest_2
# 851 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_GALECREST
# 851 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Galecrest_1:
	end

AncientStatue_Galecrest_2:
# 850 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 850 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Galecrest_1


AncientStatue_Celebi::
# 855 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 856 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_CELEBI, AncientStatue_Celebi_2
# 857 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_CELEBI
# 857 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Celebi_1:
	end

AncientStatue_Celebi_2:
# 856 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 856 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Celebi_1


AncientStatue_Sewers::
# 861 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 862 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_SEWERS, AncientStatue_Sewers_2
# 863 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_SEWERS
# 863 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Sewers_1:
	end

AncientStatue_Sewers_2:
# 862 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 862 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Sewers_1


AncientStatue_Route6::
# 867 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 868 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_ROUTE6, AncientStatue_Route6_2
# 869 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_ROUTE6
# 869 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Route6_1:
	end

AncientStatue_Route6_2:
# 868 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 868 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Route6_1


AncientStatue_Graveyard::
# 873 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 874 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_GRAVEYARD, AncientStatue_Graveyard_2
# 875 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_GRAVEYARD
# 875 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Graveyard_1:
	end

AncientStatue_Graveyard_2:
# 874 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 874 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Graveyard_1


AncientStatue_LilyPond::
# 879 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 880 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_LILYPOND, AncientStatue_LilyPond_2
# 881 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_LILYPOND
# 881 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_LilyPond_1:
	end

AncientStatue_LilyPond_2:
# 880 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 880 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_LilyPond_1


AncientStatue_Route8::
# 885 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 886 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_ROUTE8, AncientStatue_Route8_2
# 887 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_ROUTE8
# 887 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Route8_1:
	end

AncientStatue_Route8_2:
# 886 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 886 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Route8_1


AncientStatue_FirstTime::
# 900 "data//maps/TempCopyMap/scripts.pory"
	addvar VAR_STATUE_COUNT, 1
# 901 "data//maps/TempCopyMap/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STATUE_COUNT
# 902 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_FirstTime_Text_0
# 903 "data//maps/TempCopyMap/scripts.pory"
	playse SE_CLICK
# 904 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_FirstTime_Text_1
# 905 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	return


AncientStatue_CheckRareShard::
# 910 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_RARE_SHARD
# 911 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AncientStatue_CheckRareShard_2
# 916 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_HyperTrainer
	return

AncientStatue_CheckRareShard_2:
# 912 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Common_EventScript_HyperTrainer::
# 922 "data//maps/TempCopyMap/scripts.pory"
	fadenewbgm MUS_B_PYRAMID_TOP
# 924 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_0, MSGBOX_YESNO
# 926 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_2
# 929 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_1
# 930 "data//maps/TempCopyMap/scripts.pory"
	special ChoosePartyMon
# 931 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 932 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_HyperTrainer_5
# 938 "data//maps/TempCopyMap/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 939 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_HyperTrainer_Text_2
# 940 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 941 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_HyperTrainer_Text_3, Common_EventScript_HyperTrainer_Text_4, Common_EventScript_HyperTrainer_Text_5, Common_EventScript_HyperTrainer_Text_6, Common_EventScript_HyperTrainer_Text_7, Common_EventScript_HyperTrainer_Text_8, Common_EventScript_Follower_Cheat_Text_4
# 943 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_9
Common_EventScript_HyperTrainer_8:
# 952 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_HyperTrainer_12
Common_EventScript_HyperTrainer_11:
# 961 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_HyperTrainer_18
Common_EventScript_HyperTrainer_17:
# 970 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_HyperTrainer_24
Common_EventScript_HyperTrainer_23:
# 979 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_HyperTrainer_30
Common_EventScript_HyperTrainer_29:
# 988 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Common_EventScript_HyperTrainer_36
Common_EventScript_HyperTrainer_35:
# 997 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Common_EventScript_HyperTrainer_42
# 1004 "data//maps/TempCopyMap/scripts.pory"
	release
# 1005 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_TO_WHITE
# 1006 "data//maps/TempCopyMap/scripts.pory"
	playse SE_USE_ITEM
# 1007 "data//maps/TempCopyMap/scripts.pory"
	delay 24
# 1008 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 1010 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_RARE_SHARD
# 1011 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_10
# 1012 "data//maps/TempCopyMap/scripts.pory"
	release
Common_EventScript_HyperTrainer_1:
# 1015 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 1016 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_2:
	goto Common_EventScript_HyperTrainer_1

Common_EventScript_HyperTrainer_5:
# 933 "data//maps/TempCopyMap/scripts.pory"
	release
# 934 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 935 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_9:
# 944 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_HP, VAR_0x8004
# 945 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_15
# 950 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto Common_EventScript_HyperTrainer_8

Common_EventScript_HyperTrainer_12:
# 953 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_ATK, VAR_0x8004
# 954 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_21
# 959 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_11

Common_EventScript_HyperTrainer_15:
# 946 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 947 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_18:
# 962 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_DEF, VAR_0x8004
# 963 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_27
# 968 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_17

Common_EventScript_HyperTrainer_21:
# 955 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 956 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_24:
# 971 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPATK, VAR_0x8004
# 972 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_33
# 977 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_23

Common_EventScript_HyperTrainer_27:
# 964 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 965 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_30:
# 980 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPDEF, VAR_0x8004
# 981 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_39
# 986 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_29

Common_EventScript_HyperTrainer_33:
# 973 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 974 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_36:
# 989 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPEED, VAR_0x8004
# 990 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_45
# 995 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto Common_EventScript_HyperTrainer_35

Common_EventScript_HyperTrainer_39:
# 982 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 983 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_42:
# 998 "data//maps/TempCopyMap/scripts.pory"
	release
# 999 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 1000 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_45:
# 991 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 992 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Common_EventScript_DrifblimTravels_ToSilversun::
# 1050 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1051 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1052 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1053 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 1054 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_2
# 1059 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_1, MSGBOX_YESNO
# 1061 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_5
# 1071 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToSilversun_4:
	end

Common_EventScript_DrifblimTravels_ToSilversun_2:
# 1055 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	end

Common_EventScript_DrifblimTravels_ToSilversun_5:
# 1062 "data//maps/TempCopyMap/scripts.pory"
	release
# 1064 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1065 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1066 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1067 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1068 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_SILVERSUN_CITY, 28, 22
	goto Common_EventScript_DrifblimTravels_ToSilversun_4


Common_EventScript_DrifblimTravels_ToPelluca::
# 1077 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1078 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1079 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1080 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 1081 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_2
# 1086 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToPelluca_Text_0, MSGBOX_YESNO
# 1088 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_5
# 1098 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToPelluca_4:
	end

Common_EventScript_DrifblimTravels_ToPelluca_2:
# 1082 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	end

Common_EventScript_DrifblimTravels_ToPelluca_5:
# 1089 "data//maps/TempCopyMap/scripts.pory"
	release
# 1091 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1092 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1093 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1094 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1095 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 14, 28
	goto Common_EventScript_DrifblimTravels_ToPelluca_4


Common_EventScript_Dugtrio_ToRoute3::
# 1112 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1113 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1114 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToRoute3_Text_0, MSGBOX_YESNO
# 1115 "data//maps/TempCopyMap/scripts.pory"
	release
# 1116 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToRoute3_2
Common_EventScript_Dugtrio_ToRoute3_1:
# 1124 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_Dugtrio_ToRoute3_2:
# 1118 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1119 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1120 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 1121 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1122 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE3_UNDERPASS, 43, 26
	goto Common_EventScript_Dugtrio_ToRoute3_1


Common_EventScript_Dugtrio_ToGalecrest::
# 1128 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1129 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1130 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToRoute3_Text_0, MSGBOX_YESNO
# 1131 "data//maps/TempCopyMap/scripts.pory"
	release
# 1132 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToGalecrest_2
Common_EventScript_Dugtrio_ToGalecrest_1:
# 1140 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_Dugtrio_ToGalecrest_2:
# 1134 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1135 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1136 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 1137 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1138 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_GALECREST_CITY, 31, 65
	goto Common_EventScript_Dugtrio_ToGalecrest_1


Common_EventScript_Tauros_IvyRiver::
# 1151 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_IvyRiver_2
# 1159 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_IvyRiver_1:
# 1161 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_IvyRiver_2:
# 1152 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1153 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1154 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_IvyRiver_Text_1, Common_EventScript_Tauros_IvyRiver_Text_2
# 1156 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_IvyRiver_6
Common_EventScript_Tauros_IvyRiver_5:
# 1157 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_IvyRiver_8
	goto Common_EventScript_Tauros_IvyRiver_1

Common_EventScript_Tauros_IvyRiver_6:
# 1156 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_IvyRiver_5

Common_EventScript_Tauros_IvyRiver_8:
# 1157 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	goto Common_EventScript_Tauros_IvyRiver_1


Common_EventScript_Tauros_PellucaCity::
# 1166 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_PellucaCity_2
# 1175 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_PellucaCity_1:
# 1177 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_PellucaCity_2:
# 1167 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1168 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1169 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_2
# 1171 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_PellucaCity_6
Common_EventScript_Tauros_PellucaCity_5:
# 1172 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_PellucaCity_8
	goto Common_EventScript_Tauros_PellucaCity_1

Common_EventScript_Tauros_PellucaCity_6:
# 1171 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_PellucaCity_5

Common_EventScript_Tauros_PellucaCity_8:
# 1172 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	goto Common_EventScript_Tauros_PellucaCity_1


Common_EventScript_Tauros_Route6::
# 1182 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_Route6_2
# 1190 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_Route6_1:
# 1192 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_Route6_2:
# 1183 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1184 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1185 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_1
# 1187 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_Route6_6
Common_EventScript_Tauros_Route6_5:
# 1188 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_Route6_8
	goto Common_EventScript_Tauros_Route6_1

Common_EventScript_Tauros_Route6_6:
# 1187 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_Route6_5

Common_EventScript_Tauros_Route6_8:
# 1188 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_Route6_1


Common_EventScript_Tauros_GotoIvy::
# 1197 "data//maps/TempCopyMap/scripts.pory"
	release
# 1198 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1199 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1200 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1201 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1202 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_IVY_RIVER, 19, 69
	return


Common_EventScript_Tauros_GotoPelluca::
# 1206 "data//maps/TempCopyMap/scripts.pory"
	release
# 1208 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1209 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1210 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1211 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1212 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 10, 33
	return


Common_EventScript_Tauros_GotoRoute6::
# 1216 "data//maps/TempCopyMap/scripts.pory"
	release
# 1218 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1219 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1220 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1221 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1222 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE6, 52, 116
	return


# 1065 "data//maps/TempCopyMap/scripts.pory"
Common_EventScript_DrifblimTravels_ToSilversun_Movement_0:
# 1065 "data//maps/TempCopyMap/scripts.pory"
	face_down
	step_end

Common_EventScript_NurseDemo_Text_0:
# 6 "data//maps/TempCopyMap/scripts.pory"
	.string "This is the end of the demo. Thank you\n"
	.string "for playing! Please drop any feedback\l"
	.string "and bug reports on Discord, and stay\l"
	.string "tuned for further updates!$"

Common_EventScript_Follower_Cheat_Text_0:
# 16 "data//maps/TempCopyMap/scripts.pory"
	.string "What would you like to do?$"

Common_EventScript_Follower_Cheat_Text_1:
# 19 "data//maps/TempCopyMap/scripts.pory"
	.string "Portable PC$"

Common_EventScript_Follower_Cheat_Text_2:
# 19 "data//maps/TempCopyMap/scripts.pory"
	.string "Team Heal$"

Common_EventScript_Follower_Cheat_Text_3:
# 19 "data//maps/TempCopyMap/scripts.pory"
	.string "Apply Status$"

Common_EventScript_Follower_Cheat_Text_4:
# 19 "data//maps/TempCopyMap/scripts.pory"
	.string "Cancel$"

Common_EventScript_Follower_Cheat_Text_5:
# 43 "data//maps/TempCopyMap/scripts.pory"
	.string "burned!$"

Common_EventScript_MintVendingMachine_Text_0:
# 101 "data//maps/TempCopyMap/scripts.pory"
	.string "Swipe your Trainer Card?$"

Common_EventScript_MintVendingMachine_Text_1:
# 109 "data//maps/TempCopyMap/scripts.pory"
	.string "You must have at least 200 to purchase\n"
	.string "any mints.$"

Mart_Mints_NoBadges_Text_0:
# 152 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 0\n"
	.string "All mints are 200.$"

Mart_Mints_NoBadges_Text_1:
# 154 "data//maps/TempCopyMap/scripts.pory"
	.string "Impish Mint$"

Mart_Mints_NoBadges_Text_2:
# 154 "data//maps/TempCopyMap/scripts.pory"
	.string "Calm Mint$"

Mart_Mints_NoBadges_Text_3:
# 154 "data//maps/TempCopyMap/scripts.pory"
	.string "Relaxed Mint$"

Mart_Mints_OneBadge_Text_0:
# 161 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 1\n"
	.string "All mints are 200.$"

Mart_Mints_OneBadge_Text_1:
# 164 "data//maps/TempCopyMap/scripts.pory"
	.string "Bold Mint$"

Mart_Mints_OneBadge_Text_2:
# 164 "data//maps/TempCopyMap/scripts.pory"
	.string "Gentle Mint$"

Mart_Mints_OneBadge_Text_3:
# 165 "data//maps/TempCopyMap/scripts.pory"
	.string "Careful Mint$"

Mart_Mints_TwoBadges_Text_0:
# 172 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 2\n"
	.string "All mints are 200.$"

Mart_Mints_TwoBadges_Text_1:
# 176 "data//maps/TempCopyMap/scripts.pory"
	.string "Sassy Mint$"

Mart_Mints_TwoBadges_Text_2:
# 176 "data//maps/TempCopyMap/scripts.pory"
	.string "Serious Mint$"

Mart_Mints_TwoBadges_Text_3:
# 176 "data//maps/TempCopyMap/scripts.pory"
	.string "Brave Mint$"

Mart_Mints_ThreeBadges_Text_0:
# 183 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 3\n"
	.string "All mints are 200.$"

Mart_Mints_ThreeBadges_Text_1:
# 187 "data//maps/TempCopyMap/scripts.pory"
	.string "Naive Mint$"

Mart_Mints_ThreeBadges_Text_2:
# 188 "data//maps/TempCopyMap/scripts.pory"
	.string "Hasty Mint$"

Mart_Mints_ThreeBadges_Text_3:
# 188 "data//maps/TempCopyMap/scripts.pory"
	.string "Lax Mint$"

Mart_Mints_FourBadges_Text_0:
# 195 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 4\n"
	.string "All mints are 200.$"

Mart_Mints_FourBadges_Text_1:
# 200 "data//maps/TempCopyMap/scripts.pory"
	.string "Mild Mint$"

Mart_Mints_FourBadges_Text_2:
# 200 "data//maps/TempCopyMap/scripts.pory"
	.string "Rash Mint$"

Mart_Mints_FourBadges_Text_3:
# 201 "data//maps/TempCopyMap/scripts.pory"
	.string "Timid Mint$"

Mart_Mints_FiveBadges_Text_0:
# 208 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 5\n"
	.string "All mints are 200.$"

Mart_Mints_FiveBadges_Text_1:
# 214 "data//maps/TempCopyMap/scripts.pory"
	.string "Naughty Mint$"

Mart_Mints_FiveBadges_Text_2:
# 214 "data//maps/TempCopyMap/scripts.pory"
	.string "Quiet Mint$"

Mart_Mints_FiveBadges_Text_3:
# 214 "data//maps/TempCopyMap/scripts.pory"
	.string "Lonely Mint$"

Mart_Mints_SixBadges_Text_0:
# 221 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 6\n"
	.string "All mints are 200.$"

Mart_Mints_SixBadges_Text_1:
# 227 "data//maps/TempCopyMap/scripts.pory"
	.string "Jolly Mint$"

Mart_Mints_SixBadges_Text_2:
# 228 "data//maps/TempCopyMap/scripts.pory"
	.string "Adamant Mint$"

Mart_Mints_SixBadges_Text_3:
# 228 "data//maps/TempCopyMap/scripts.pory"
	.string "Modest Mint$"

MintPurchase_Common_Text_0:
# 318 "data//maps/TempCopyMap/scripts.pory"
	.string "Confirm purchase?$"

Common_EventScript_NurseJoyOnRoute_Text_0:
# 515 "data//maps/TempCopyMap/scripts.pory"
	.string "Should I heal your Pokémon?\n"
	.string "You can come back later if you wish.$"

Common_EventScript_NurseJoyOnRoute_Text_1:
# 529 "data//maps/TempCopyMap/scripts.pory"
	.string "Let me heal your Pokémon.$"

Common_EventScript_NurseJoyOnRoute_Text_2:
# 532 "data//maps/TempCopyMap/scripts.pory"
	.string "Stay safe out there!$"

Common_EventScript_NurseJoyOnRoute_Text_3:
# 536 "data//maps/TempCopyMap/scripts.pory"
	.string "Come back any time!$"

Common_EventScript_NurseJoyOnRoute_Text_4:
# 542 "data//maps/TempCopyMap/scripts.pory"
	.string "Sorry, you don't have a Heal Pass.\n"
	.string "Please visit a Pokémon Center to\l"
	.string "receive a Heal Pass.$"

Common_EventScript_ChanseyOnRoute_Text_0:
# 552 "data//maps/TempCopyMap/scripts.pory"
	.string "Chansey is happy as always!$"

Route5_Greta_AskToShow_Text_0:
# 582 "data//maps/TempCopyMap/scripts.pory"
	.string "Greta$"

Route5_Greta_AskToShow_Text_1:
# 583 "data//maps/TempCopyMap/scripts.pory"
	.string "Wanna buy anything?$"

Route5_Greta_AskToShow_Text_2:
# 586 "data//maps/TempCopyMap/scripts.pory"
	.string "Bummer!$"

Route5_Greta_ShowItemsForSale_Text_0:
# 595 "data//maps/TempCopyMap/scripts.pory"
	.string "The egg is 10,000. The rock is 5,000. The\n"
	.string "fish is only 100!$"

Route5_Greta_ShowItemsForSale_Text_1:
# 598 "data//maps/TempCopyMap/scripts.pory"
	.string "Strange Egg$"

Route5_Greta_ShowItemsForSale_Text_2:
# 598 "data//maps/TempCopyMap/scripts.pory"
	.string "Mysterious Rock$"

Route5_Greta_ShowItemsForSale_Text_3:
# 598 "data//maps/TempCopyMap/scripts.pory"
	.string "Ugly Fish$"

Route5_Greta_StrangeEgg_Text_0:
# 612 "data//maps/TempCopyMap/scripts.pory"
	.string "Hey! You can't afford this!$"

Route5_Greta_StrangeEgg_Text_1:
# 617 "data//maps/TempCopyMap/scripts.pory"
	.string "A discerning choice! You sure?$"

Route5_Greta_StrangeEgg_Text_2:
# 621 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Strange Egg from\n"
	.string "Greta.$"

Route5_Greta_StrangeEgg_Text_3:
# 624 "data//maps/TempCopyMap/scripts.pory"
	.string "Good doing business with you! Now, what\n"
	.string "about -$"

Route5_Greta_UglyFish_Text_0:
# 641 "data//maps/TempCopyMap/scripts.pory"
	.string "A...budget-friendly choice! You sure?$"

Route5_Greta_UglyFish_Text_1:
# 645 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Feebas from\n"
	.string "Greta.$"

Route5_Greta_MysteriousRock_Text_0:
# 665 "data//maps/TempCopyMap/scripts.pory"
	.string "A reasonable choice! You sure?$"

PellucaCity_Greta_ShowItemsForSale_Text_0:
# 713 "data//maps/TempCopyMap/scripts.pory"
	.string "Each stone retails for 6000, but for\n"
	.string "you, I'll do 5200!$"

PellucaCity_Greta_ShowItemsForSale_Text_1:
# 716 "data//maps/TempCopyMap/scripts.pory"
	.string "Sun Stone$"

PellucaCity_Greta_ShowItemsForSale_Text_2:
# 716 "data//maps/TempCopyMap/scripts.pory"
	.string "Prism Scale$"

PellucaCity_Greta_ShowItemsForSale_Text_3:
# 716 "data//maps/TempCopyMap/scripts.pory"
	.string "Dawn Stone$"

PellucaCity_Greta_Item_A_Text_0:
# 737 "data//maps/TempCopyMap/scripts.pory"
	.string "A shining choice! You sure?$"

PellucaCity_Greta_Item_B_Text_0:
# 763 "data//maps/TempCopyMap/scripts.pory"
	.string "A brilliant choice! You sure?$"

PellucaCity_Greta_Item_C_Text_0:
# 789 "data//maps/TempCopyMap/scripts.pory"
	.string "A cool choice! You sure?$"

AncientStatue_Gastree_Text_0:
# 837 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon...$"

AncientStatue_FirstTime_Text_0:
# 902 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon...\p"
	.string "{PLAYER} found {STR_VAR_2} of 10\n"
	.string "statues.\p"
	.string "Scanning the ancient statue\n"
	.string "with the Archaeolens...$"

AncientStatue_FirstTime_Text_1:
# 904 "data//maps/TempCopyMap/scripts.pory"
	.string "Done!$"

Common_EventScript_HyperTrainer_Text_0:
# 924 "data//maps/TempCopyMap/scripts.pory"
	.string "From within the bag, the Rare Shard\n"
	.string "begins to vibrate...\p"
	.string "Take out the Rare Shard from the bag?$"

Common_EventScript_HyperTrainer_Text_1:
# 929 "data//maps/TempCopyMap/scripts.pory"
	.string "The statue begins humming faintly...\p"
	.string "Which Pokémon should hold the Rare\n"
	.string "Shard?$"

Common_EventScript_HyperTrainer_Text_2:
# 939 "data//maps/TempCopyMap/scripts.pory"
	.string "{STR_VAR_1} is absorbing memories\n"
	.string "from the statue...what's it seeing?$"

Common_EventScript_HyperTrainer_Text_3:
# 941 "data//maps/TempCopyMap/scripts.pory"
	.string "HP$"

Common_EventScript_HyperTrainer_Text_4:
# 941 "data//maps/TempCopyMap/scripts.pory"
	.string "Attack$"

Common_EventScript_HyperTrainer_Text_5:
# 941 "data//maps/TempCopyMap/scripts.pory"
	.string "Defence$"

Common_EventScript_HyperTrainer_Text_6:
# 941 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Attack$"

Common_EventScript_HyperTrainer_Text_7:
# 941 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Defence$"

Common_EventScript_HyperTrainer_Text_8:
# 941 "data//maps/TempCopyMap/scripts.pory"
	.string "Speed$"

Common_EventScript_HyperTrainer_Text_9:
# 946 "data//maps/TempCopyMap/scripts.pory"
	.string "{STR_VAR_1} cannot grow any\n"
	.string "stronger in that stat!$"

Common_EventScript_HyperTrainer_Text_10:
# 1011 "data//maps/TempCopyMap/scripts.pory"
	.string "Imbued with the statue's memories,\n"
	.string "{STR_VAR_1} became stronger!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_0:
# 1055 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a Drifblim!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_1:
# 1059 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards Silversun City. Fly there?$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_2:
# 1071 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim looks dejected...$"

Common_EventScript_DrifblimTravels_ToPelluca_Text_0:
# 1086 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards Pelluca City. Fly there?$"

Common_EventScript_Dugtrio_ToRoute3_Text_0:
# 1114 "data//maps/TempCopyMap/scripts.pory"
	.string "Dugtrio is digging into the ground.\n"
	.string "Follow it?$"

Common_EventScript_Tauros_IvyRiver_Text_0:
# 1152 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently.\n"
	.string "Where should Tauros go?$"

Common_EventScript_Tauros_IvyRiver_Text_1:
# 1154 "data//maps/TempCopyMap/scripts.pory"
	.string "Pelluca City$"

Common_EventScript_Tauros_IvyRiver_Text_2:
# 1154 "data//maps/TempCopyMap/scripts.pory"
	.string "Route 6 HQ$"

Common_EventScript_Tauros_IvyRiver_Text_3:
# 1159 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently.$"

Common_EventScript_Tauros_PellucaCity_Text_0:
# 1169 "data//maps/TempCopyMap/scripts.pory"
	.string "Ivy River HQ$"

Common_Text_Greta_Comecome::
# 577 "data//maps/TempCopyMap/scripts.pory"
	.string "Come, come. I've got some great stuff\n"
	.string "from...well, you can't ask a magician to\l"
	.string "reveal her secrets, can you?$"
