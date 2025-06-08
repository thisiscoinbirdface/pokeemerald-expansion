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
# 48 "data//maps/TempCopyMap/scripts.pory"
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
# 31 "data//maps/TempCopyMap/scripts.pory"
	goto Debug_EventScript_InflictStatus1_Single
# 34 "data//maps/TempCopyMap/scripts.pory"
	special ChoosePartyMon
# 35 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 38 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_Follower_Cheat_11
# 44 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Follower_Cheat_Text_5
# 45 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_Follower_Cheat_7

Common_EventScript_Follower_Cheat_11:
# 39 "data//maps/TempCopyMap/scripts.pory"
	release
	end


Common_EventScript_MintVendingMachine::
# 102 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_0, MSGBOX_YESNO
# 103 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_2
# 108 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 200
# 109 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_5
# 114 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	return

Common_EventScript_MintVendingMachine_2:
# 104 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_MintVendingMachine_5:
# 110 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_1
# 111 "data//maps/TempCopyMap/scripts.pory"
	release
	end


MintVendingMachine_CheckBadge::
# 119 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MintVendingMachine_CheckBadge_2
# 122 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MintVendingMachine_CheckBadge_5
# 125 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MintVendingMachine_CheckBadge_8
# 128 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MintVendingMachine_CheckBadge_11
# 131 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MintVendingMachine_CheckBadge_14
# 134 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MintVendingMachine_CheckBadge_17
# 137 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_NoBadges
MintVendingMachine_CheckBadge_1:
# 145 "data//maps/TempCopyMap/scripts.pory"
	release
	end

MintVendingMachine_CheckBadge_2:
# 120 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_SixBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_5:
# 123 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FiveBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_8:
# 126 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FourBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_11:
# 129 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_ThreeBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_14:
# 132 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_TwoBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_17:
# 135 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_OneBadge
	goto MintVendingMachine_CheckBadge_1


Mart_Mints_NoBadges::
# 152 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 153 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_NoBadges_Text_0
# 154 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 155 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3
# 156 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 157 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 158 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_OneBadge::
# 161 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 162 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_OneBadge_Text_0
# 163 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 164 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3
# 167 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 168 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 169 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_TwoBadges::
# 172 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 173 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_TwoBadges_Text_0
# 174 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 175 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3
# 178 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 179 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 180 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_ThreeBadges::
# 183 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 184 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_ThreeBadges_Text_0
# 185 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 186 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3
# 190 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 191 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 192 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FourBadges::
# 195 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 196 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_FourBadges_Text_0
# 197 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 198 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3
# 203 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 204 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 205 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FiveBadges::
# 208 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 209 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_FiveBadges_Text_0
# 210 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 211 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3
# 216 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 217 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 218 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_SixBadges::
# 221 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 222 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_SixBadges_Text_0
# 223 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 224 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3, Mart_Mints_SixBadges_Text_1, Mart_Mints_SixBadges_Text_2, Mart_Mints_SixBadges_Text_3
# 230 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 231 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 232 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
# 234 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 235 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Mart_MintPurchaseDecision::
# 252 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Mart_MintPurchaseDecision_2
Mart_MintPurchaseDecision_1:
# 253 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Mart_MintPurchaseDecision_5
Mart_MintPurchaseDecision_4:
# 254 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq Mart_MintPurchaseDecision_8
Mart_MintPurchaseDecision_7:
# 255 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq Mart_MintPurchaseDecision_11
Mart_MintPurchaseDecision_10:
# 256 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Mart_MintPurchaseDecision_14
Mart_MintPurchaseDecision_13:
# 258 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Mart_MintPurchaseDecision_17
Mart_MintPurchaseDecision_16:
# 259 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_eq Mart_MintPurchaseDecision_20
Mart_MintPurchaseDecision_19:
# 260 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 7
	goto_if_eq Mart_MintPurchaseDecision_23
Mart_MintPurchaseDecision_22:
# 261 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 8
	goto_if_eq Mart_MintPurchaseDecision_26
Mart_MintPurchaseDecision_25:
# 262 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 9
	goto_if_eq Mart_MintPurchaseDecision_29
Mart_MintPurchaseDecision_28:
# 264 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Mart_MintPurchaseDecision_32
Mart_MintPurchaseDecision_31:
# 265 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 11
	goto_if_eq Mart_MintPurchaseDecision_35
Mart_MintPurchaseDecision_34:
# 266 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 12
	goto_if_eq Mart_MintPurchaseDecision_38
Mart_MintPurchaseDecision_37:
# 267 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 13
	goto_if_eq Mart_MintPurchaseDecision_41
Mart_MintPurchaseDecision_40:
# 269 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 14
	goto_if_eq Mart_MintPurchaseDecision_44
Mart_MintPurchaseDecision_43:
# 270 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 15
	goto_if_eq Mart_MintPurchaseDecision_47
Mart_MintPurchaseDecision_46:
# 271 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 16
	goto_if_eq Mart_MintPurchaseDecision_50
Mart_MintPurchaseDecision_49:
# 272 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 17
	goto_if_eq Mart_MintPurchaseDecision_53
Mart_MintPurchaseDecision_52:
# 273 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 18
	goto_if_eq Mart_MintPurchaseDecision_56
Mart_MintPurchaseDecision_55:
# 274 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 19
	goto_if_eq Mart_MintPurchaseDecision_59
Mart_MintPurchaseDecision_58:
# 275 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 20
	goto_if_eq Mart_MintPurchaseDecision_62
Mart_MintPurchaseDecision_61:
# 277 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Mart_MintPurchaseDecision_2:
# 252 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_IMPISH_MINT
# 252 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_1

Mart_MintPurchaseDecision_5:
# 253 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_CALM_MINT
# 253 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_4

Mart_MintPurchaseDecision_8:
# 254 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_RELAXED_MINT
# 254 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_7

Mart_MintPurchaseDecision_11:
# 255 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_BOLD_MINT
# 255 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_10

Mart_MintPurchaseDecision_14:
# 256 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_GENTLE_MINT
# 256 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_13

Mart_MintPurchaseDecision_17:
# 258 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_CAREFUL_MINT
# 258 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_16

Mart_MintPurchaseDecision_20:
# 259 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SASSY_MINT
# 259 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_19

Mart_MintPurchaseDecision_23:
# 260 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SERIOUS_MINT
# 260 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_22

Mart_MintPurchaseDecision_26:
# 261 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_BRAVE_MINT
# 261 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_25

Mart_MintPurchaseDecision_29:
# 262 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_NAIVE_MINT
# 262 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_28

Mart_MintPurchaseDecision_32:
# 264 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_HASTY_MINT
# 264 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_31

Mart_MintPurchaseDecision_35:
# 265 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_LAX_MINT
# 265 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_34

Mart_MintPurchaseDecision_38:
# 266 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_MILD_MINT
# 266 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_37

Mart_MintPurchaseDecision_41:
# 267 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_RASH_MINT
# 267 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_40

Mart_MintPurchaseDecision_44:
# 269 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_TIMID_MINT
# 269 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_43

Mart_MintPurchaseDecision_47:
# 270 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_NAUGHTY_MINT
# 270 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_46

Mart_MintPurchaseDecision_50:
# 271 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_QUIET_MINT
# 271 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_49

Mart_MintPurchaseDecision_53:
# 272 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_LONELY_MINT
# 272 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_52

Mart_MintPurchaseDecision_56:
# 273 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_JOLLY_MINT
# 273 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_55

Mart_MintPurchaseDecision_59:
# 274 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_ADAMANT_MINT
# 274 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_58

Mart_MintPurchaseDecision_62:
# 275 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_MODEST_MINT
# 275 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_61


MintPurchase_Common::
# 317 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 319 "data//maps/TempCopyMap/scripts.pory"
	msgbox MintPurchase_Common_Text_0, MSGBOX_YESNO
# 321 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MintPurchase_Common_2
# 329 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 330 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end

MintPurchase_Common_2:
# 322 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 323 "data//maps/TempCopyMap/scripts.pory"
	giveitem VAR_0x8006
# 324 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 325 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Impish::
# 339 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 341 "data//maps/TempCopyMap/scripts.pory"
	msgbox MintPurchase_Common_Text_0, MSGBOX_YESNO
# 343 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MintPurchase_Impish_2
MintPurchase_Impish_1:
# 347 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end

MintPurchase_Impish_2:
# 344 "data//maps/TempCopyMap/scripts.pory"
	giveitem VAR_0x8006
# 345 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
	goto MintPurchase_Impish_1


MintPurchase_Calm::
# 353 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 354 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CALM_MINT
# 355 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Relaxed::
# 360 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 361 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_RELAXED_MINT
# 362 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Modest::
# 367 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 368 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MODEST_MINT
# 369 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Gentle::
# 374 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 375 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_GENTLE_MINT
# 376 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Careful::
# 381 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 382 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CAREFUL_MINT
# 383 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Sassy::
# 388 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 389 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SASSY_MINT
# 390 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naughty::
# 395 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 396 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT
# 397 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Timid::
# 402 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 403 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_TIMID_MINT
# 404 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Hasty::
# 409 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 410 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_HASTY_MINT
# 411 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Brave::
# 416 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 417 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BRAVE_MINT
# 418 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Bold::
# 423 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 424 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BOLD_MINT
# 425 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Adamant::
# 430 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 431 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
# 432 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Mild::
# 437 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 438 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 439 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Rash::
# 444 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 445 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 446 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naive::
# 451 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 452 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAIVE_MINT
# 453 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lax::
# 458 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 459 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LAX_MINT
# 460 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lonely::
# 465 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 466 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LONELY_MINT
# 467 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Quiet::
# 472 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 473 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_QUIET_MINT
# 474 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Jolly::
# 479 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 480 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_JOLLY_MINT
# 481 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Serious::
# 486 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 487 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 488 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


Common_EventScript_NurseJoyOnRoute::
# 513 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_HEAL_PASS
# 514 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_2
# 543 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_4
# 544 "data//maps/TempCopyMap/scripts.pory"
	release
Common_EventScript_NurseJoyOnRoute_1:
	return

Common_EventScript_NurseJoyOnRoute_2:
# 516 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_0, MSGBOX_YESNO
# 518 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_5
# 537 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_3
# 538 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_NurseJoyOnRoute_1

Common_EventScript_NurseJoyOnRoute_5:
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
# 528 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 530 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_1
# 531 "data//maps/TempCopyMap/scripts.pory"
	release
# 532 "data//maps/TempCopyMap/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 533 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_2
# 534 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_NurseJoyOnRoute_1


Common_EventScript_ChanseyOnRoute::
# 550 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 551 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 552 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 553 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_ChanseyOnRoute_Text_0
# 554 "data//maps/TempCopyMap/scripts.pory"
	release
# 555 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Route5_Greta_AskToShow::
# 583 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 584 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1, MSGBOX_YESNO
# 585 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_AskToShow_2
Route5_Greta_AskToShow_1:
# 587 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_2
# 588 "data//maps/TempCopyMap/scripts.pory"
	release
# 590 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return

Route5_Greta_AskToShow_2:
# 585 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	goto Route5_Greta_AskToShow_1


Route5_Greta_ShowItemsForSale::
# 594 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 595 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 596 "data//maps/TempCopyMap/scripts.pory"
	message Route5_Greta_ShowItemsForSale_Text_0
# 597 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 599 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route5_Greta_ShowItemsForSale_Text_1, Route5_Greta_ShowItemsForSale_Text_2, Route5_Greta_ShowItemsForSale_Text_3
# 600 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 601 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_ShowItemsForSale_2
Route5_Greta_ShowItemsForSale_1:
# 602 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_ShowItemsForSale_5
Route5_Greta_ShowItemsForSale_4:
# 603 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route5_Greta_ShowItemsForSale_8
Route5_Greta_ShowItemsForSale_7:
# 605 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_AskToShow
	return

Route5_Greta_ShowItemsForSale_2:
# 601 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_StrangeEgg
	goto Route5_Greta_ShowItemsForSale_1

Route5_Greta_ShowItemsForSale_5:
# 602 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_MysteriousRock
	goto Route5_Greta_ShowItemsForSale_4

Route5_Greta_ShowItemsForSale_8:
# 603 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_UglyFish
	goto Route5_Greta_ShowItemsForSale_7


Route5_Greta_StrangeEgg::
# 610 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 10000
# 611 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_StrangeEgg_1
# 617 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 618 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_1, MSGBOX_YESNO
# 619 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_StrangeEgg_4
# 628 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_1:
# 612 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 613 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 614 "data//maps/TempCopyMap/scripts.pory"
	release
# 615 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_4:
# 620 "data//maps/TempCopyMap/scripts.pory"
	removemoney 10000
# 621 "data//maps/TempCopyMap/scripts.pory"
	giveegg SPECIES_HONEDGE
# 622 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_2, MSGBOX_SIGN
# 623 "data//maps/TempCopyMap/scripts.pory"
	release
# 624 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 625 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 626 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_UglyFish::
# 634 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 100
# 635 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_UglyFish_1
# 641 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 642 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_0, MSGBOX_YESNO
# 643 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_UglyFish_4
# 652 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_1:
# 636 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 637 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 638 "data//maps/TempCopyMap/scripts.pory"
	release
# 639 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_4:
# 644 "data//maps/TempCopyMap/scripts.pory"
	removemoney 100
# 645 "data//maps/TempCopyMap/scripts.pory"
	givemon SPECIES_FEEBAS, 5
# 646 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_1, MSGBOX_SIGN
# 647 "data//maps/TempCopyMap/scripts.pory"
	release
# 648 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 649 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 650 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_MysteriousRock::
# 658 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5000
# 659 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_MysteriousRock_1
# 665 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 666 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_MysteriousRock_Text_0, MSGBOX_YESNO
# 667 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_MysteriousRock_4
# 674 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_1:
# 660 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 661 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 662 "data//maps/TempCopyMap/scripts.pory"
	release
# 663 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_4:
# 668 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5000
# 669 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ODD_KEYSTONE
# 670 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 671 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 672 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


PellucaCity_Greta_AskToShow::
# 699 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 700 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1, MSGBOX_YESNO
# 701 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_AskToShow_2
PellucaCity_Greta_AskToShow_1:
# 703 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 704 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 705 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_2
# 706 "data//maps/TempCopyMap/scripts.pory"
	release
# 708 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return

PellucaCity_Greta_AskToShow_2:
# 701 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	goto PellucaCity_Greta_AskToShow_1


PellucaCity_Greta_ShowItemsForSale::
# 712 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 713 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 714 "data//maps/TempCopyMap/scripts.pory"
	message PellucaCity_Greta_ShowItemsForSale_Text_0
# 715 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 717 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Greta_ShowItemsForSale_Text_1, PellucaCity_Greta_ShowItemsForSale_Text_2, PellucaCity_Greta_ShowItemsForSale_Text_3
# 718 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 719 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_2
PellucaCity_Greta_ShowItemsForSale_1:
# 720 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_5
PellucaCity_Greta_ShowItemsForSale_4:
# 721 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_8
PellucaCity_Greta_ShowItemsForSale_7:
# 723 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_AskToShow
	return

PellucaCity_Greta_ShowItemsForSale_2:
# 719 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_A
	goto PellucaCity_Greta_ShowItemsForSale_1

PellucaCity_Greta_ShowItemsForSale_5:
# 720 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_B
	goto PellucaCity_Greta_ShowItemsForSale_4

PellucaCity_Greta_ShowItemsForSale_8:
# 721 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_C
	goto PellucaCity_Greta_ShowItemsForSale_7


PellucaCity_Greta_Item_A::
# 728 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 729 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_A_1
# 735 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_DUSK_STONE
# 736 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 737 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 738 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_A_Text_0, MSGBOX_YESNO
# 739 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_A_4
# 747 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 748 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_A_1:
# 730 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 731 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 732 "data//maps/TempCopyMap/scripts.pory"
	release
# 733 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_A_4:
# 740 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 741 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 742 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_DUSK_STONE
# 743 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 744 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 745 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_Item_B::
# 754 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 755 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_B_1
# 761 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_PRISM_SCALE
# 762 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 763 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 764 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_B_Text_0, MSGBOX_YESNO
# 765 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_B_4
# 773 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 774 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_B_1:
# 756 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 757 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 758 "data//maps/TempCopyMap/scripts.pory"
	release
# 759 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_B_4:
# 766 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 767 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 768 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_PRISM_SCALE
# 769 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 770 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 771 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_Item_C::
# 780 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 781 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_C_1
# 787 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_DAWN_STONE
# 788 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 789 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 790 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_C_Text_0, MSGBOX_YESNO
# 791 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_C_4
# 799 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 800 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_C_1:
# 782 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 783 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 784 "data//maps/TempCopyMap/scripts.pory"
	release
# 785 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_C_4:
# 792 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 793 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 794 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 795 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 796 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 797 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


AncientStatue_Gastree::
# 838 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 839 "data//maps/TempCopyMap/scripts.pory"
	release
	end


AncientStatue_Ceram::
# 844 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 845 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_CERAM, AncientStatue_Ceram_2
# 846 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_CERAM
# 846 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Ceram_1:
	end

AncientStatue_Ceram_2:
# 845 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 845 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Ceram_1


AncientStatue_Galecrest::
# 850 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 851 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_GALECREST, AncientStatue_Galecrest_2
# 852 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_GALECREST
# 852 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Galecrest_1:
	end

AncientStatue_Galecrest_2:
# 851 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 851 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Galecrest_1


AncientStatue_Celebi::
# 856 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 857 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_CELEBI, AncientStatue_Celebi_2
# 858 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_CELEBI
# 858 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Celebi_1:
	end

AncientStatue_Celebi_2:
# 857 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 857 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Celebi_1


AncientStatue_Sewers::
# 862 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 863 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_SEWERS, AncientStatue_Sewers_2
# 864 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_SEWERS
# 864 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Sewers_1:
	end

AncientStatue_Sewers_2:
# 863 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 863 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Sewers_1


AncientStatue_Route6::
# 868 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 869 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_ROUTE6, AncientStatue_Route6_2
# 870 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_ROUTE6
# 870 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Route6_1:
	end

AncientStatue_Route6_2:
# 869 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 869 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Route6_1


AncientStatue_Graveyard::
# 874 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 875 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_GRAVEYARD, AncientStatue_Graveyard_2
# 876 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_GRAVEYARD
# 876 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Graveyard_1:
	end

AncientStatue_Graveyard_2:
# 875 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 875 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Graveyard_1


AncientStatue_LilyPond::
# 880 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 881 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_LILYPOND, AncientStatue_LilyPond_2
# 882 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_LILYPOND
# 882 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_LilyPond_1:
	end

AncientStatue_LilyPond_2:
# 881 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 881 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_LilyPond_1


AncientStatue_Route8::
# 886 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 887 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_ROUTE8, AncientStatue_Route8_2
# 888 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_ROUTE8
# 888 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Route8_1:
	end

AncientStatue_Route8_2:
# 887 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 887 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Route8_1


AncientStatue_FirstTime::
# 901 "data//maps/TempCopyMap/scripts.pory"
	addvar VAR_STATUE_COUNT, 1
# 902 "data//maps/TempCopyMap/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STATUE_COUNT
# 903 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_FirstTime_Text_0
# 904 "data//maps/TempCopyMap/scripts.pory"
	playse SE_CLICK
# 905 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_FirstTime_Text_1
# 906 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	return


AncientStatue_CheckRareShard::
# 911 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_RARE_SHARD
# 912 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AncientStatue_CheckRareShard_2
# 917 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_HyperTrainer
	return

AncientStatue_CheckRareShard_2:
# 913 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Common_EventScript_HyperTrainer::
# 923 "data//maps/TempCopyMap/scripts.pory"
	fadenewbgm MUS_B_PYRAMID_TOP
# 925 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_0, MSGBOX_YESNO
# 927 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_2
# 930 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_1
# 931 "data//maps/TempCopyMap/scripts.pory"
	special ChoosePartyMon
# 932 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 933 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_HyperTrainer_5
# 939 "data//maps/TempCopyMap/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 940 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_HyperTrainer_Text_2
# 941 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 942 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_HyperTrainer_Text_3, Common_EventScript_HyperTrainer_Text_4, Common_EventScript_HyperTrainer_Text_5, Common_EventScript_HyperTrainer_Text_6, Common_EventScript_HyperTrainer_Text_7, Common_EventScript_HyperTrainer_Text_8, Common_EventScript_Follower_Cheat_Text_4
# 944 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_9
Common_EventScript_HyperTrainer_8:
# 953 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_HyperTrainer_12
Common_EventScript_HyperTrainer_11:
# 962 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_HyperTrainer_18
Common_EventScript_HyperTrainer_17:
# 971 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_HyperTrainer_24
Common_EventScript_HyperTrainer_23:
# 980 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_HyperTrainer_30
Common_EventScript_HyperTrainer_29:
# 989 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Common_EventScript_HyperTrainer_36
Common_EventScript_HyperTrainer_35:
# 998 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Common_EventScript_HyperTrainer_42
# 1005 "data//maps/TempCopyMap/scripts.pory"
	release
# 1006 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_TO_WHITE
# 1007 "data//maps/TempCopyMap/scripts.pory"
	playse SE_USE_ITEM
# 1008 "data//maps/TempCopyMap/scripts.pory"
	delay 24
# 1009 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 1011 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_RARE_SHARD
# 1012 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_10
# 1013 "data//maps/TempCopyMap/scripts.pory"
	release
Common_EventScript_HyperTrainer_1:
# 1016 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 1017 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_2:
	goto Common_EventScript_HyperTrainer_1

Common_EventScript_HyperTrainer_5:
# 934 "data//maps/TempCopyMap/scripts.pory"
	release
# 935 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 936 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_9:
# 945 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_HP, VAR_0x8004
# 946 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_15
# 951 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto Common_EventScript_HyperTrainer_8

Common_EventScript_HyperTrainer_12:
# 954 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_ATK, VAR_0x8004
# 955 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_21
# 960 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_11

Common_EventScript_HyperTrainer_15:
# 947 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 948 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_18:
# 963 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_DEF, VAR_0x8004
# 964 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_27
# 969 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_17

Common_EventScript_HyperTrainer_21:
# 956 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 957 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_24:
# 972 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPATK, VAR_0x8004
# 973 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_33
# 978 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_23

Common_EventScript_HyperTrainer_27:
# 965 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 966 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_30:
# 981 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPDEF, VAR_0x8004
# 982 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_39
# 987 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_29

Common_EventScript_HyperTrainer_33:
# 974 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 975 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_36:
# 990 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPEED, VAR_0x8004
# 991 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_45
# 996 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto Common_EventScript_HyperTrainer_35

Common_EventScript_HyperTrainer_39:
# 983 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 984 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_42:
# 999 "data//maps/TempCopyMap/scripts.pory"
	release
# 1000 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 1001 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_45:
# 992 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 993 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Common_EventScript_DrifblimTravels_ToSilversun::
# 1051 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1052 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1053 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1054 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 1055 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_2
# 1060 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_1, MSGBOX_YESNO
# 1062 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_5
# 1072 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToSilversun_4:
	end

Common_EventScript_DrifblimTravels_ToSilversun_2:
# 1056 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	end

Common_EventScript_DrifblimTravels_ToSilversun_5:
# 1063 "data//maps/TempCopyMap/scripts.pory"
	release
# 1065 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1066 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1067 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1068 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1069 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_SILVERSUN_CITY, 28, 22
	goto Common_EventScript_DrifblimTravels_ToSilversun_4


Common_EventScript_DrifblimTravels_ToPelluca::
# 1078 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1079 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1080 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1081 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 1082 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_2
# 1087 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToPelluca_Text_0, MSGBOX_YESNO
# 1089 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_5
# 1099 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToPelluca_4:
	end

Common_EventScript_DrifblimTravels_ToPelluca_2:
# 1083 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	end

Common_EventScript_DrifblimTravels_ToPelluca_5:
# 1090 "data//maps/TempCopyMap/scripts.pory"
	release
# 1092 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1093 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1094 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1095 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1096 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 14, 28
	goto Common_EventScript_DrifblimTravels_ToPelluca_4


Common_EventScript_Dugtrio_ToRoute3::
# 1113 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1114 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1115 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToRoute3_Text_0, MSGBOX_YESNO
# 1116 "data//maps/TempCopyMap/scripts.pory"
	release
# 1117 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToRoute3_2
Common_EventScript_Dugtrio_ToRoute3_1:
# 1125 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_Dugtrio_ToRoute3_2:
# 1119 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1120 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1121 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 1122 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1123 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE3_UNDERPASS, 43, 26
	goto Common_EventScript_Dugtrio_ToRoute3_1


Common_EventScript_Dugtrio_ToGalecrest::
# 1129 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1130 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1131 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToGalecrest_Text_0, MSGBOX_YESNO
# 1132 "data//maps/TempCopyMap/scripts.pory"
	release
# 1133 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToGalecrest_2
Common_EventScript_Dugtrio_ToGalecrest_1:
# 1141 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_Dugtrio_ToGalecrest_2:
# 1135 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1136 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1137 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 1138 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1139 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_GALECREST_CITY, 31, 65
	goto Common_EventScript_Dugtrio_ToGalecrest_1


Common_EventScript_Tauros_IvyRiver::
# 1152 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_IvyRiver_2
# 1160 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_IvyRiver_1:
# 1162 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_IvyRiver_2:
# 1153 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1154 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1155 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_IvyRiver_Text_1, Common_EventScript_Tauros_IvyRiver_Text_2
# 1157 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_IvyRiver_6
Common_EventScript_Tauros_IvyRiver_5:
# 1158 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_IvyRiver_8
	goto Common_EventScript_Tauros_IvyRiver_1

Common_EventScript_Tauros_IvyRiver_6:
# 1157 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_IvyRiver_5

Common_EventScript_Tauros_IvyRiver_8:
# 1158 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	goto Common_EventScript_Tauros_IvyRiver_1


Common_EventScript_Tauros_PellucaCity::
# 1167 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_PellucaCity_2
# 1176 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_PellucaCity_1:
# 1178 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_PellucaCity_2:
# 1168 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1169 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1170 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_2
# 1172 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_PellucaCity_6
Common_EventScript_Tauros_PellucaCity_5:
# 1173 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_PellucaCity_8
	goto Common_EventScript_Tauros_PellucaCity_1

Common_EventScript_Tauros_PellucaCity_6:
# 1172 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_PellucaCity_5

Common_EventScript_Tauros_PellucaCity_8:
# 1173 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	goto Common_EventScript_Tauros_PellucaCity_1


Common_EventScript_Tauros_Route6::
# 1183 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_Route6_2
# 1191 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_Route6_1:
# 1193 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_Route6_2:
# 1184 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1185 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1186 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_1
# 1188 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_Route6_6
Common_EventScript_Tauros_Route6_5:
# 1189 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_Route6_8
	goto Common_EventScript_Tauros_Route6_1

Common_EventScript_Tauros_Route6_6:
# 1188 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_Route6_5

Common_EventScript_Tauros_Route6_8:
# 1189 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_Route6_1


Common_EventScript_Tauros_GotoIvy::
# 1198 "data//maps/TempCopyMap/scripts.pory"
	release
# 1199 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1200 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1201 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1202 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1203 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_IVY_RIVER, 19, 69
	return


Common_EventScript_Tauros_GotoPelluca::
# 1207 "data//maps/TempCopyMap/scripts.pory"
	release
# 1209 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1210 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1211 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1212 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1213 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 10, 33
	return


Common_EventScript_Tauros_GotoRoute6::
# 1217 "data//maps/TempCopyMap/scripts.pory"
	release
# 1219 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1220 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1221 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1222 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1223 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE6, 52, 116
	return


# 1066 "data//maps/TempCopyMap/scripts.pory"
Common_EventScript_DrifblimTravels_ToSilversun_Movement_0:
# 1066 "data//maps/TempCopyMap/scripts.pory"
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
# 44 "data//maps/TempCopyMap/scripts.pory"
	.string "burned!$"

Common_EventScript_MintVendingMachine_Text_0:
# 102 "data//maps/TempCopyMap/scripts.pory"
	.string "Swipe your Trainer Card?$"

Common_EventScript_MintVendingMachine_Text_1:
# 110 "data//maps/TempCopyMap/scripts.pory"
	.string "You must have at least ¥200 to\n"
	.string "purchase any mints.$"

Mart_Mints_NoBadges_Text_0:
# 153 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 0\n"
	.string "All mints are ¥200.$"

Mart_Mints_NoBadges_Text_1:
# 155 "data//maps/TempCopyMap/scripts.pory"
	.string "Impish Mint$"

Mart_Mints_NoBadges_Text_2:
# 155 "data//maps/TempCopyMap/scripts.pory"
	.string "Calm Mint$"

Mart_Mints_NoBadges_Text_3:
# 155 "data//maps/TempCopyMap/scripts.pory"
	.string "Relaxed Mint$"

Mart_Mints_OneBadge_Text_0:
# 162 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 1\n"
	.string "All mints are ¥200.$"

Mart_Mints_OneBadge_Text_1:
# 165 "data//maps/TempCopyMap/scripts.pory"
	.string "Bold Mint$"

Mart_Mints_OneBadge_Text_2:
# 165 "data//maps/TempCopyMap/scripts.pory"
	.string "Gentle Mint$"

Mart_Mints_OneBadge_Text_3:
# 166 "data//maps/TempCopyMap/scripts.pory"
	.string "Careful Mint$"

Mart_Mints_TwoBadges_Text_0:
# 173 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 2\n"
	.string "All mints are ¥200.$"

Mart_Mints_TwoBadges_Text_1:
# 177 "data//maps/TempCopyMap/scripts.pory"
	.string "Sassy Mint$"

Mart_Mints_TwoBadges_Text_2:
# 177 "data//maps/TempCopyMap/scripts.pory"
	.string "Serious Mint$"

Mart_Mints_TwoBadges_Text_3:
# 177 "data//maps/TempCopyMap/scripts.pory"
	.string "Brave Mint$"

Mart_Mints_ThreeBadges_Text_0:
# 184 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 3\n"
	.string "All mints are ¥200.$"

Mart_Mints_ThreeBadges_Text_1:
# 188 "data//maps/TempCopyMap/scripts.pory"
	.string "Naive Mint$"

Mart_Mints_ThreeBadges_Text_2:
# 189 "data//maps/TempCopyMap/scripts.pory"
	.string "Hasty Mint$"

Mart_Mints_ThreeBadges_Text_3:
# 189 "data//maps/TempCopyMap/scripts.pory"
	.string "Lax Mint$"

Mart_Mints_FourBadges_Text_0:
# 196 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 4\n"
	.string "All mints are ¥200.$"

Mart_Mints_FourBadges_Text_1:
# 201 "data//maps/TempCopyMap/scripts.pory"
	.string "Mild Mint$"

Mart_Mints_FourBadges_Text_2:
# 201 "data//maps/TempCopyMap/scripts.pory"
	.string "Rash Mint$"

Mart_Mints_FourBadges_Text_3:
# 202 "data//maps/TempCopyMap/scripts.pory"
	.string "Timid Mint$"

Mart_Mints_FiveBadges_Text_0:
# 209 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 5\n"
	.string "All mints are ¥200.$"

Mart_Mints_FiveBadges_Text_1:
# 215 "data//maps/TempCopyMap/scripts.pory"
	.string "Naughty Mint$"

Mart_Mints_FiveBadges_Text_2:
# 215 "data//maps/TempCopyMap/scripts.pory"
	.string "Quiet Mint$"

Mart_Mints_FiveBadges_Text_3:
# 215 "data//maps/TempCopyMap/scripts.pory"
	.string "Lonely Mint$"

Mart_Mints_SixBadges_Text_0:
# 222 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 6\n"
	.string "All mints are ¥200.$"

Mart_Mints_SixBadges_Text_1:
# 228 "data//maps/TempCopyMap/scripts.pory"
	.string "Jolly Mint$"

Mart_Mints_SixBadges_Text_2:
# 229 "data//maps/TempCopyMap/scripts.pory"
	.string "Adamant Mint$"

Mart_Mints_SixBadges_Text_3:
# 229 "data//maps/TempCopyMap/scripts.pory"
	.string "Modest Mint$"

MintPurchase_Common_Text_0:
# 319 "data//maps/TempCopyMap/scripts.pory"
	.string "Confirm purchase?$"

Common_EventScript_NurseJoyOnRoute_Text_0:
# 516 "data//maps/TempCopyMap/scripts.pory"
	.string "Should I heal your Pokémon?\n"
	.string "You can come back later if you wish.$"

Common_EventScript_NurseJoyOnRoute_Text_1:
# 530 "data//maps/TempCopyMap/scripts.pory"
	.string "Let me heal your Pokémon.$"

Common_EventScript_NurseJoyOnRoute_Text_2:
# 533 "data//maps/TempCopyMap/scripts.pory"
	.string "Stay safe out there!$"

Common_EventScript_NurseJoyOnRoute_Text_3:
# 537 "data//maps/TempCopyMap/scripts.pory"
	.string "Come back any time!$"

Common_EventScript_NurseJoyOnRoute_Text_4:
# 543 "data//maps/TempCopyMap/scripts.pory"
	.string "Sorry, you don't have a Heal Pass.\n"
	.string "Please visit a Pokémon Center to\l"
	.string "receive a Heal Pass.$"

Common_EventScript_ChanseyOnRoute_Text_0:
# 553 "data//maps/TempCopyMap/scripts.pory"
	.string "Chansey is happy as always!$"

Route5_Greta_AskToShow_Text_0:
# 583 "data//maps/TempCopyMap/scripts.pory"
	.string "Greta$"

Route5_Greta_AskToShow_Text_1:
# 584 "data//maps/TempCopyMap/scripts.pory"
	.string "Wanna buy anything?$"

Route5_Greta_AskToShow_Text_2:
# 587 "data//maps/TempCopyMap/scripts.pory"
	.string "Bummer!$"

Route5_Greta_ShowItemsForSale_Text_0:
# 596 "data//maps/TempCopyMap/scripts.pory"
	.string "The egg is ¥10,000. The rock is ¥5,000.\n"
	.string "The fish is only ¥100!$"

Route5_Greta_ShowItemsForSale_Text_1:
# 599 "data//maps/TempCopyMap/scripts.pory"
	.string "Strange Egg$"

Route5_Greta_ShowItemsForSale_Text_2:
# 599 "data//maps/TempCopyMap/scripts.pory"
	.string "Mysterious Rock$"

Route5_Greta_ShowItemsForSale_Text_3:
# 599 "data//maps/TempCopyMap/scripts.pory"
	.string "Ugly Fish$"

Route5_Greta_StrangeEgg_Text_0:
# 613 "data//maps/TempCopyMap/scripts.pory"
	.string "Hey! You can't afford this!$"

Route5_Greta_StrangeEgg_Text_1:
# 618 "data//maps/TempCopyMap/scripts.pory"
	.string "A discerning choice! You sure?$"

Route5_Greta_StrangeEgg_Text_2:
# 622 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Strange Egg from\n"
	.string "Greta.$"

Route5_Greta_StrangeEgg_Text_3:
# 625 "data//maps/TempCopyMap/scripts.pory"
	.string "Good doing business with you! Now, what\n"
	.string "about -$"

Route5_Greta_UglyFish_Text_0:
# 642 "data//maps/TempCopyMap/scripts.pory"
	.string "A...budget-friendly choice! You sure?$"

Route5_Greta_UglyFish_Text_1:
# 646 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Feebas from\n"
	.string "Greta.$"

Route5_Greta_MysteriousRock_Text_0:
# 666 "data//maps/TempCopyMap/scripts.pory"
	.string "A reasonable choice! You sure?$"

PellucaCity_Greta_ShowItemsForSale_Text_0:
# 714 "data//maps/TempCopyMap/scripts.pory"
	.string "You won't find these at the Game\n"
	.string "Corner! For you I can do ¥5200.$"

PellucaCity_Greta_ShowItemsForSale_Text_1:
# 717 "data//maps/TempCopyMap/scripts.pory"
	.string "Dusk Stone$"

PellucaCity_Greta_ShowItemsForSale_Text_2:
# 717 "data//maps/TempCopyMap/scripts.pory"
	.string "Prism Scale$"

PellucaCity_Greta_ShowItemsForSale_Text_3:
# 717 "data//maps/TempCopyMap/scripts.pory"
	.string "Dawn Stone$"

PellucaCity_Greta_Item_A_Text_0:
# 738 "data//maps/TempCopyMap/scripts.pory"
	.string "A dark choice! You sure?$"

PellucaCity_Greta_Item_B_Text_0:
# 764 "data//maps/TempCopyMap/scripts.pory"
	.string "A brilliant choice! You sure?$"

PellucaCity_Greta_Item_C_Text_0:
# 790 "data//maps/TempCopyMap/scripts.pory"
	.string "A cool choice! You sure?$"

AncientStatue_Gastree_Text_0:
# 838 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon...$"

AncientStatue_FirstTime_Text_0:
# 903 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon...\p"
	.string "{PLAYER} found {STR_VAR_2} of 10\n"
	.string "statues.\p"
	.string "Scanning the ancient statue\n"
	.string "with the Archaeolens...$"

AncientStatue_FirstTime_Text_1:
# 905 "data//maps/TempCopyMap/scripts.pory"
	.string "Done!$"

Common_EventScript_HyperTrainer_Text_0:
# 925 "data//maps/TempCopyMap/scripts.pory"
	.string "From within the bag, the Rare Shard\n"
	.string "begins to vibrate...\p"
	.string "Take out the Rare Shard from the bag?$"

Common_EventScript_HyperTrainer_Text_1:
# 930 "data//maps/TempCopyMap/scripts.pory"
	.string "The statue begins humming faintly...\p"
	.string "Which Pokémon should hold the Rare\n"
	.string "Shard?$"

Common_EventScript_HyperTrainer_Text_2:
# 940 "data//maps/TempCopyMap/scripts.pory"
	.string "{STR_VAR_1} is absorbing memories\n"
	.string "from the statue...what's it seeing?$"

Common_EventScript_HyperTrainer_Text_3:
# 942 "data//maps/TempCopyMap/scripts.pory"
	.string "HP$"

Common_EventScript_HyperTrainer_Text_4:
# 942 "data//maps/TempCopyMap/scripts.pory"
	.string "Attack$"

Common_EventScript_HyperTrainer_Text_5:
# 942 "data//maps/TempCopyMap/scripts.pory"
	.string "Defence$"

Common_EventScript_HyperTrainer_Text_6:
# 942 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Attack$"

Common_EventScript_HyperTrainer_Text_7:
# 942 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Defence$"

Common_EventScript_HyperTrainer_Text_8:
# 942 "data//maps/TempCopyMap/scripts.pory"
	.string "Speed$"

Common_EventScript_HyperTrainer_Text_9:
# 947 "data//maps/TempCopyMap/scripts.pory"
	.string "{STR_VAR_1} cannot grow any\n"
	.string "stronger in that stat!$"

Common_EventScript_HyperTrainer_Text_10:
# 1012 "data//maps/TempCopyMap/scripts.pory"
	.string "Imbued with the statue's memories,\n"
	.string "{STR_VAR_1} became stronger!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_0:
# 1056 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a Drifblim!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_1:
# 1060 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards Silversun City. Fly there?$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_2:
# 1072 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim looks dejected...$"

Common_EventScript_DrifblimTravels_ToPelluca_Text_0:
# 1087 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards Pelluca City. Fly there?$"

Common_EventScript_Dugtrio_ToRoute3_Text_0:
# 1115 "data//maps/TempCopyMap/scripts.pory"
	.string "Dugtrio is digging into the ground.\n"
	.string "Follow it?$"

Common_EventScript_Dugtrio_ToGalecrest_Text_0:
# 1131 "data//maps/TempCopyMap/scripts.pory"
	.string "Dugtrio is digging back up to the\n"
	.string "surface. Follow it?$"

Common_EventScript_Tauros_IvyRiver_Text_0:
# 1153 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently.\n"
	.string "Where should Tauros go?$"

Common_EventScript_Tauros_IvyRiver_Text_1:
# 1155 "data//maps/TempCopyMap/scripts.pory"
	.string "Pelluca City$"

Common_EventScript_Tauros_IvyRiver_Text_2:
# 1155 "data//maps/TempCopyMap/scripts.pory"
	.string "Route 6 HQ$"

Common_EventScript_Tauros_IvyRiver_Text_3:
# 1160 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently.$"

Common_EventScript_Tauros_PellucaCity_Text_0:
# 1170 "data//maps/TempCopyMap/scripts.pory"
	.string "Ivy River HQ$"

Common_Text_Greta_Comecome::
# 578 "data//maps/TempCopyMap/scripts.pory"
	.string "Come, come. I've got some great stuff\n"
	.string "from...well, you can't ask a magician to\l"
	.string "reveal her secrets, can you?$"
