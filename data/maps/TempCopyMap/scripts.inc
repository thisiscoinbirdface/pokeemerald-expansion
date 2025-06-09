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


Common_EventScript_SaveGameBeforeBattle::
# 12 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_SaveGameBeforeBattle_Text_0
# 13 "data//maps/TempCopyMap/scripts.pory"
	special SaveGame
# 14 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 15 "data//maps/TempCopyMap/scripts.pory"
	release
	return


Common_EventScript_Follower_Cheat::
# 23 "data//maps/TempCopyMap/scripts.pory"
	lock
# 24 "data//maps/TempCopyMap/scripts.pory"
	bufferlivemonnickname 0
# 25 "data//maps/TempCopyMap/scripts.pory"
	playfirstmoncry
# 26 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Follower_Cheat_Text_0
# 27 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 28 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Follower_Cheat_Text_1, Common_EventScript_Follower_Cheat_Text_2, Common_EventScript_Follower_Cheat_Text_3, Common_EventScript_Follower_Cheat_Text_4
# 30 "data//maps/TempCopyMap/scripts.pory"
	release
# 31 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Follower_Cheat_2
Common_EventScript_Follower_Cheat_1:
# 36 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Follower_Cheat_5
Common_EventScript_Follower_Cheat_4:
# 40 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_Follower_Cheat_8
Common_EventScript_Follower_Cheat_7:
# 54 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_Follower_Cheat_2:
# 32 "data//maps/TempCopyMap/scripts.pory"
	special ShowPokemonStorageSystemPC
# 33 "data//maps/TempCopyMap/scripts.pory"
	waitstate
	goto Common_EventScript_Follower_Cheat_1

Common_EventScript_Follower_Cheat_5:
# 37 "data//maps/TempCopyMap/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Common_EventScript_Follower_Cheat_4

Common_EventScript_Follower_Cheat_8:
# 41 "data//maps/TempCopyMap/scripts.pory"
	goto Debug_EventScript_InflictStatus1_Single
# 44 "data//maps/TempCopyMap/scripts.pory"
	special ChoosePartyMon
# 45 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 48 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_Follower_Cheat_10
	goto Common_EventScript_Follower_Cheat_7

Common_EventScript_Follower_Cheat_10:
# 49 "data//maps/TempCopyMap/scripts.pory"
	release
	end


Common_EventScript_MintVendingMachine::
# 108 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_0, MSGBOX_YESNO
# 109 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_2
# 114 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 200
# 115 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_5
# 120 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	return

Common_EventScript_MintVendingMachine_2:
# 110 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_MintVendingMachine_5:
# 116 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_1
# 117 "data//maps/TempCopyMap/scripts.pory"
	release
	end


MintVendingMachine_CheckBadge::
# 125 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MintVendingMachine_CheckBadge_2
# 128 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MintVendingMachine_CheckBadge_5
# 131 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MintVendingMachine_CheckBadge_8
# 134 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MintVendingMachine_CheckBadge_11
# 137 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MintVendingMachine_CheckBadge_14
# 140 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MintVendingMachine_CheckBadge_17
# 143 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_NoBadges
MintVendingMachine_CheckBadge_1:
# 151 "data//maps/TempCopyMap/scripts.pory"
	release
	end

MintVendingMachine_CheckBadge_2:
# 126 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_SixBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_5:
# 129 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FiveBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_8:
# 132 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FourBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_11:
# 135 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_ThreeBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_14:
# 138 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_TwoBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_17:
# 141 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_OneBadge
	goto MintVendingMachine_CheckBadge_1


Mart_Mints_NoBadges::
# 158 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 159 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_NoBadges_Text_0
# 160 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 161 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3
# 162 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 163 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 164 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_OneBadge::
# 167 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 168 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_OneBadge_Text_0
# 169 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 170 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3
# 173 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 174 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 175 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_TwoBadges::
# 178 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 179 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_TwoBadges_Text_0
# 180 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 181 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3
# 184 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 185 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 186 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_ThreeBadges::
# 189 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 190 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_ThreeBadges_Text_0
# 191 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 192 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3
# 196 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 197 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 198 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FourBadges::
# 201 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 202 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_FourBadges_Text_0
# 203 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 204 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3
# 209 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 210 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 211 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FiveBadges::
# 214 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 215 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_FiveBadges_Text_0
# 216 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 217 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3
# 222 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 223 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 224 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_SixBadges::
# 227 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 228 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_SixBadges_Text_0
# 229 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 230 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3, Mart_Mints_SixBadges_Text_1, Mart_Mints_SixBadges_Text_2, Mart_Mints_SixBadges_Text_3
# 236 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 237 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 238 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
# 240 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 241 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Mart_MintPurchaseDecision::
# 258 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Mart_MintPurchaseDecision_2
Mart_MintPurchaseDecision_1:
# 259 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Mart_MintPurchaseDecision_5
Mart_MintPurchaseDecision_4:
# 260 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq Mart_MintPurchaseDecision_8
Mart_MintPurchaseDecision_7:
# 261 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq Mart_MintPurchaseDecision_11
Mart_MintPurchaseDecision_10:
# 262 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Mart_MintPurchaseDecision_14
Mart_MintPurchaseDecision_13:
# 264 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Mart_MintPurchaseDecision_17
Mart_MintPurchaseDecision_16:
# 265 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_eq Mart_MintPurchaseDecision_20
Mart_MintPurchaseDecision_19:
# 266 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 7
	goto_if_eq Mart_MintPurchaseDecision_23
Mart_MintPurchaseDecision_22:
# 267 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 8
	goto_if_eq Mart_MintPurchaseDecision_26
Mart_MintPurchaseDecision_25:
# 268 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 9
	goto_if_eq Mart_MintPurchaseDecision_29
Mart_MintPurchaseDecision_28:
# 270 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Mart_MintPurchaseDecision_32
Mart_MintPurchaseDecision_31:
# 271 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 11
	goto_if_eq Mart_MintPurchaseDecision_35
Mart_MintPurchaseDecision_34:
# 272 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 12
	goto_if_eq Mart_MintPurchaseDecision_38
Mart_MintPurchaseDecision_37:
# 273 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 13
	goto_if_eq Mart_MintPurchaseDecision_41
Mart_MintPurchaseDecision_40:
# 275 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 14
	goto_if_eq Mart_MintPurchaseDecision_44
Mart_MintPurchaseDecision_43:
# 276 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 15
	goto_if_eq Mart_MintPurchaseDecision_47
Mart_MintPurchaseDecision_46:
# 277 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 16
	goto_if_eq Mart_MintPurchaseDecision_50
Mart_MintPurchaseDecision_49:
# 278 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 17
	goto_if_eq Mart_MintPurchaseDecision_53
Mart_MintPurchaseDecision_52:
# 279 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 18
	goto_if_eq Mart_MintPurchaseDecision_56
Mart_MintPurchaseDecision_55:
# 280 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 19
	goto_if_eq Mart_MintPurchaseDecision_59
Mart_MintPurchaseDecision_58:
# 281 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 20
	goto_if_eq Mart_MintPurchaseDecision_62
Mart_MintPurchaseDecision_61:
# 283 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Mart_MintPurchaseDecision_2:
# 258 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_IMPISH_MINT
# 258 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_1

Mart_MintPurchaseDecision_5:
# 259 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_CALM_MINT
# 259 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_4

Mart_MintPurchaseDecision_8:
# 260 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_RELAXED_MINT
# 260 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_7

Mart_MintPurchaseDecision_11:
# 261 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_BOLD_MINT
# 261 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_10

Mart_MintPurchaseDecision_14:
# 262 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_GENTLE_MINT
# 262 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_13

Mart_MintPurchaseDecision_17:
# 264 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_CAREFUL_MINT
# 264 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_16

Mart_MintPurchaseDecision_20:
# 265 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SASSY_MINT
# 265 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_19

Mart_MintPurchaseDecision_23:
# 266 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SERIOUS_MINT
# 266 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_22

Mart_MintPurchaseDecision_26:
# 267 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_BRAVE_MINT
# 267 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_25

Mart_MintPurchaseDecision_29:
# 268 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_NAIVE_MINT
# 268 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_28

Mart_MintPurchaseDecision_32:
# 270 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_HASTY_MINT
# 270 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_31

Mart_MintPurchaseDecision_35:
# 271 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_LAX_MINT
# 271 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_34

Mart_MintPurchaseDecision_38:
# 272 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_MILD_MINT
# 272 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_37

Mart_MintPurchaseDecision_41:
# 273 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_RASH_MINT
# 273 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_40

Mart_MintPurchaseDecision_44:
# 275 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_TIMID_MINT
# 275 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_43

Mart_MintPurchaseDecision_47:
# 276 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_NAUGHTY_MINT
# 276 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_46

Mart_MintPurchaseDecision_50:
# 277 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_QUIET_MINT
# 277 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_49

Mart_MintPurchaseDecision_53:
# 278 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_LONELY_MINT
# 278 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_52

Mart_MintPurchaseDecision_56:
# 279 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_JOLLY_MINT
# 279 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_55

Mart_MintPurchaseDecision_59:
# 280 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_ADAMANT_MINT
# 280 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_58

Mart_MintPurchaseDecision_62:
# 281 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_MODEST_MINT
# 281 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_61


MintPurchase_Common::
# 323 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 325 "data//maps/TempCopyMap/scripts.pory"
	msgbox MintPurchase_Common_Text_0, MSGBOX_YESNO
# 327 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MintPurchase_Common_2
# 337 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 338 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end

MintPurchase_Common_2:
# 328 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 329 "data//maps/TempCopyMap/scripts.pory"
	playse SE_VEND
# 330 "data//maps/TempCopyMap/scripts.pory"
	waitse
# 331 "data//maps/TempCopyMap/scripts.pory"
	giveitem VAR_0x8006
# 332 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 333 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Impish::
# 347 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 349 "data//maps/TempCopyMap/scripts.pory"
	msgbox MintPurchase_Common_Text_0, MSGBOX_YESNO
# 351 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MintPurchase_Impish_2
MintPurchase_Impish_1:
# 355 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end

MintPurchase_Impish_2:
# 352 "data//maps/TempCopyMap/scripts.pory"
	giveitem VAR_0x8006
# 353 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
	goto MintPurchase_Impish_1


MintPurchase_Calm::
# 361 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 362 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CALM_MINT
# 363 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Relaxed::
# 368 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 369 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_RELAXED_MINT
# 370 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Modest::
# 375 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 376 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MODEST_MINT
# 377 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Gentle::
# 382 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 383 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_GENTLE_MINT
# 384 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Careful::
# 389 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 390 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CAREFUL_MINT
# 391 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Sassy::
# 396 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 397 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SASSY_MINT
# 398 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naughty::
# 403 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 404 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT
# 405 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Timid::
# 410 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 411 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_TIMID_MINT
# 412 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Hasty::
# 417 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 418 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_HASTY_MINT
# 419 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Brave::
# 424 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 425 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BRAVE_MINT
# 426 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Bold::
# 431 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 432 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BOLD_MINT
# 433 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Adamant::
# 438 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 439 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
# 440 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Mild::
# 445 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 446 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 447 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Rash::
# 452 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 453 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 454 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naive::
# 459 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 460 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAIVE_MINT
# 461 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lax::
# 466 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 467 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LAX_MINT
# 468 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lonely::
# 473 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 474 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LONELY_MINT
# 475 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Quiet::
# 480 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 481 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_QUIET_MINT
# 482 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Jolly::
# 487 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 488 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_JOLLY_MINT
# 489 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Serious::
# 494 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 495 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 496 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


Common_EventScript_NurseJoyOnRoute::
# 521 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_HEAL_PASS
# 522 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_2
# 551 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_4
# 552 "data//maps/TempCopyMap/scripts.pory"
	release
Common_EventScript_NurseJoyOnRoute_1:
	return

Common_EventScript_NurseJoyOnRoute_2:
# 524 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_0, MSGBOX_YESNO
# 526 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_5
# 545 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_3
# 546 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_NurseJoyOnRoute_1

Common_EventScript_NurseJoyOnRoute_5:
# 527 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 528 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 529 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 530 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 531 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 532 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 533 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 534 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 535 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 536 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 538 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_1
# 539 "data//maps/TempCopyMap/scripts.pory"
	release
# 540 "data//maps/TempCopyMap/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 541 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_2
# 542 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_NurseJoyOnRoute_1


Common_EventScript_ChanseyOnRoute::
# 558 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 559 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 560 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 561 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_ChanseyOnRoute_Text_0
# 562 "data//maps/TempCopyMap/scripts.pory"
	release
# 563 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Route5_Greta_AskToShow::
# 591 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 592 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1, MSGBOX_YESNO
# 593 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_AskToShow_2
Route5_Greta_AskToShow_1:
# 595 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_2
# 596 "data//maps/TempCopyMap/scripts.pory"
	release
# 598 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return

Route5_Greta_AskToShow_2:
# 593 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	goto Route5_Greta_AskToShow_1


Route5_Greta_ShowItemsForSale::
# 602 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 603 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 604 "data//maps/TempCopyMap/scripts.pory"
	message Route5_Greta_ShowItemsForSale_Text_0
# 605 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 607 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route5_Greta_ShowItemsForSale_Text_1, Route5_Greta_ShowItemsForSale_Text_2, Route5_Greta_ShowItemsForSale_Text_3
# 608 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 609 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_ShowItemsForSale_2
Route5_Greta_ShowItemsForSale_1:
# 610 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_ShowItemsForSale_5
Route5_Greta_ShowItemsForSale_4:
# 611 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route5_Greta_ShowItemsForSale_8
Route5_Greta_ShowItemsForSale_7:
# 613 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_AskToShow
	return

Route5_Greta_ShowItemsForSale_2:
# 609 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_StrangeEgg
	goto Route5_Greta_ShowItemsForSale_1

Route5_Greta_ShowItemsForSale_5:
# 610 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_MysteriousRock
	goto Route5_Greta_ShowItemsForSale_4

Route5_Greta_ShowItemsForSale_8:
# 611 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_UglyFish
	goto Route5_Greta_ShowItemsForSale_7


Route5_Greta_StrangeEgg::
# 618 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 10000
# 619 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_StrangeEgg_1
# 625 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 626 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_1, MSGBOX_YESNO
# 627 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_StrangeEgg_4
# 636 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_1:
# 620 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 621 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 622 "data//maps/TempCopyMap/scripts.pory"
	release
# 623 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_4:
# 628 "data//maps/TempCopyMap/scripts.pory"
	removemoney 10000
# 629 "data//maps/TempCopyMap/scripts.pory"
	giveegg SPECIES_HONEDGE
# 630 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_2, MSGBOX_SIGN
# 631 "data//maps/TempCopyMap/scripts.pory"
	release
# 632 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 633 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 634 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_UglyFish::
# 642 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 100
# 643 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_UglyFish_1
# 649 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 650 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_0, MSGBOX_YESNO
# 651 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_UglyFish_4
# 660 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_1:
# 644 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 645 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 646 "data//maps/TempCopyMap/scripts.pory"
	release
# 647 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_4:
# 652 "data//maps/TempCopyMap/scripts.pory"
	removemoney 100
# 653 "data//maps/TempCopyMap/scripts.pory"
	givemon SPECIES_FEEBAS, 5
# 654 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_1, MSGBOX_SIGN
# 655 "data//maps/TempCopyMap/scripts.pory"
	release
# 656 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 657 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 658 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_MysteriousRock::
# 666 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5000
# 667 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_MysteriousRock_1
# 673 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 674 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_MysteriousRock_Text_0, MSGBOX_YESNO
# 675 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_MysteriousRock_4
# 682 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_1:
# 668 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 669 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 670 "data//maps/TempCopyMap/scripts.pory"
	release
# 671 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_4:
# 676 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5000
# 677 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ODD_KEYSTONE
# 678 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 679 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 680 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


PellucaCity_Greta_AskToShow::
# 707 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 708 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1, MSGBOX_YESNO
# 709 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_AskToShow_2
PellucaCity_Greta_AskToShow_1:
# 711 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 712 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 713 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_2
# 714 "data//maps/TempCopyMap/scripts.pory"
	release
# 716 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return

PellucaCity_Greta_AskToShow_2:
# 709 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	goto PellucaCity_Greta_AskToShow_1


PellucaCity_Greta_ShowItemsForSale::
# 720 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 721 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 722 "data//maps/TempCopyMap/scripts.pory"
	message PellucaCity_Greta_ShowItemsForSale_Text_0
# 723 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 725 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Greta_ShowItemsForSale_Text_1, PellucaCity_Greta_ShowItemsForSale_Text_2, PellucaCity_Greta_ShowItemsForSale_Text_3
# 726 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 727 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_2
PellucaCity_Greta_ShowItemsForSale_1:
# 728 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_5
PellucaCity_Greta_ShowItemsForSale_4:
# 729 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_8
PellucaCity_Greta_ShowItemsForSale_7:
# 731 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_AskToShow
	return

PellucaCity_Greta_ShowItemsForSale_2:
# 727 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_A
	goto PellucaCity_Greta_ShowItemsForSale_1

PellucaCity_Greta_ShowItemsForSale_5:
# 728 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_B
	goto PellucaCity_Greta_ShowItemsForSale_4

PellucaCity_Greta_ShowItemsForSale_8:
# 729 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_C
	goto PellucaCity_Greta_ShowItemsForSale_7


PellucaCity_Greta_Item_A::
# 736 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 737 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_A_1
# 743 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_DUSK_STONE
# 744 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 745 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 746 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_A_Text_0, MSGBOX_YESNO
# 747 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_A_4
# 755 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 756 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_A_1:
# 738 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 739 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 740 "data//maps/TempCopyMap/scripts.pory"
	release
# 741 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_A_4:
# 748 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 749 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 750 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_DUSK_STONE
# 751 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 752 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 753 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_Item_B::
# 762 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 763 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_B_1
# 769 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_PRISM_SCALE
# 770 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 771 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 772 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_B_Text_0, MSGBOX_YESNO
# 773 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_B_4
# 781 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 782 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_B_1:
# 764 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 765 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 766 "data//maps/TempCopyMap/scripts.pory"
	release
# 767 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_B_4:
# 774 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 775 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 776 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_PRISM_SCALE
# 777 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 778 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 779 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_Item_C::
# 788 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 789 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_C_1
# 795 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_DAWN_STONE
# 796 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 797 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 798 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_C_Text_0, MSGBOX_YESNO
# 799 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_C_4
# 807 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 808 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_C_1:
# 790 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 791 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 792 "data//maps/TempCopyMap/scripts.pory"
	release
# 793 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_C_4:
# 800 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 801 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 802 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 803 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 804 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 805 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


AncientStatue_Gastree::
# 846 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 847 "data//maps/TempCopyMap/scripts.pory"
	release
	end


AncientStatue_Ceram::
# 852 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 853 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_CERAM, AncientStatue_Ceram_2
# 854 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_CERAM
# 854 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Ceram_1:
	end

AncientStatue_Ceram_2:
# 853 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 853 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Ceram_1


AncientStatue_Galecrest::
# 858 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 859 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_GALECREST, AncientStatue_Galecrest_2
# 860 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_GALECREST
# 860 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Galecrest_1:
	end

AncientStatue_Galecrest_2:
# 859 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 859 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Galecrest_1


AncientStatue_Celebi::
# 864 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 865 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_CELEBI, AncientStatue_Celebi_2
# 866 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_CELEBI
# 866 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Celebi_1:
	end

AncientStatue_Celebi_2:
# 865 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 865 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Celebi_1


AncientStatue_Sewers::
# 870 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 871 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_SEWERS, AncientStatue_Sewers_2
# 872 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_SEWERS
# 872 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Sewers_1:
	end

AncientStatue_Sewers_2:
# 871 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 871 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Sewers_1


AncientStatue_Route6::
# 876 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 877 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_ROUTE6, AncientStatue_Route6_2
# 878 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_ROUTE6
# 878 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Route6_1:
	end

AncientStatue_Route6_2:
# 877 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 877 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Route6_1


AncientStatue_Graveyard::
# 882 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 883 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_GRAVEYARD, AncientStatue_Graveyard_2
# 884 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_GRAVEYARD
# 884 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Graveyard_1:
	end

AncientStatue_Graveyard_2:
# 883 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 883 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Graveyard_1


AncientStatue_LilyPond::
# 888 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 889 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_LILYPOND, AncientStatue_LilyPond_2
# 890 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_LILYPOND
# 890 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_LilyPond_1:
	end

AncientStatue_LilyPond_2:
# 889 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 889 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_LilyPond_1


AncientStatue_Route8::
# 894 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 895 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_ROUTE8, AncientStatue_Route8_2
# 896 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_ROUTE8
# 896 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Route8_1:
	end

AncientStatue_Route8_2:
# 895 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Gastree_Text_0
# 895 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Route8_1


AncientStatue_FirstTime::
# 909 "data//maps/TempCopyMap/scripts.pory"
	addvar VAR_STATUE_COUNT, 1
# 910 "data//maps/TempCopyMap/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STATUE_COUNT
# 911 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_FirstTime_Text_0
# 912 "data//maps/TempCopyMap/scripts.pory"
	playse SE_CLICK
# 913 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_FirstTime_Text_1
# 914 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	return


AncientStatue_CheckRareShard::
# 919 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_RARE_SHARD
# 920 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AncientStatue_CheckRareShard_2
# 925 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_HyperTrainer
	return

AncientStatue_CheckRareShard_2:
# 921 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Common_EventScript_HyperTrainer::
# 931 "data//maps/TempCopyMap/scripts.pory"
	fadenewbgm MUS_B_PYRAMID_TOP
# 933 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_0, MSGBOX_YESNO
# 935 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_2
# 938 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_1
# 939 "data//maps/TempCopyMap/scripts.pory"
	special ChoosePartyMon
# 940 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 941 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_HyperTrainer_5
# 947 "data//maps/TempCopyMap/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 948 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_HyperTrainer_Text_2
# 949 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 950 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_HyperTrainer_Text_3, Common_EventScript_HyperTrainer_Text_4, Common_EventScript_HyperTrainer_Text_5, Common_EventScript_HyperTrainer_Text_6, Common_EventScript_HyperTrainer_Text_7, Common_EventScript_HyperTrainer_Text_8, Common_EventScript_Follower_Cheat_Text_4
# 952 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_9
Common_EventScript_HyperTrainer_8:
# 961 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_HyperTrainer_12
Common_EventScript_HyperTrainer_11:
# 970 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_HyperTrainer_18
Common_EventScript_HyperTrainer_17:
# 979 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_HyperTrainer_24
Common_EventScript_HyperTrainer_23:
# 988 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_HyperTrainer_30
Common_EventScript_HyperTrainer_29:
# 997 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Common_EventScript_HyperTrainer_36
Common_EventScript_HyperTrainer_35:
# 1006 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Common_EventScript_HyperTrainer_42
# 1013 "data//maps/TempCopyMap/scripts.pory"
	release
# 1014 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_TO_WHITE
# 1015 "data//maps/TempCopyMap/scripts.pory"
	playse SE_USE_ITEM
# 1016 "data//maps/TempCopyMap/scripts.pory"
	delay 24
# 1017 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 1019 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_RARE_SHARD
# 1020 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_10
# 1021 "data//maps/TempCopyMap/scripts.pory"
	release
Common_EventScript_HyperTrainer_1:
# 1024 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 1025 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_2:
	goto Common_EventScript_HyperTrainer_1

Common_EventScript_HyperTrainer_5:
# 942 "data//maps/TempCopyMap/scripts.pory"
	release
# 943 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 944 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_9:
# 953 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_HP, VAR_0x8004
# 954 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_15
# 959 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto Common_EventScript_HyperTrainer_8

Common_EventScript_HyperTrainer_12:
# 962 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_ATK, VAR_0x8004
# 963 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_21
# 968 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_11

Common_EventScript_HyperTrainer_15:
# 955 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 956 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_18:
# 971 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_DEF, VAR_0x8004
# 972 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_27
# 977 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_17

Common_EventScript_HyperTrainer_21:
# 964 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 965 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_24:
# 980 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPATK, VAR_0x8004
# 981 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_33
# 986 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_23

Common_EventScript_HyperTrainer_27:
# 973 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 974 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_30:
# 989 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPDEF, VAR_0x8004
# 990 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_39
# 995 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_29

Common_EventScript_HyperTrainer_33:
# 982 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 983 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_36:
# 998 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPEED, VAR_0x8004
# 999 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_45
# 1004 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto Common_EventScript_HyperTrainer_35

Common_EventScript_HyperTrainer_39:
# 991 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 992 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_42:
# 1007 "data//maps/TempCopyMap/scripts.pory"
	release
# 1008 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 1009 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_45:
# 1000 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 1001 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Common_EventScript_DrifblimTravels_ToSilversun::
# 1059 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1060 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1061 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1062 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 1063 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_2
# 1068 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_1, MSGBOX_YESNO
# 1070 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_5
# 1080 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToSilversun_4:
	end

Common_EventScript_DrifblimTravels_ToSilversun_2:
# 1064 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	end

Common_EventScript_DrifblimTravels_ToSilversun_5:
# 1071 "data//maps/TempCopyMap/scripts.pory"
	release
# 1073 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1074 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1075 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1076 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1077 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_SILVERSUN_CITY, 28, 22
	goto Common_EventScript_DrifblimTravels_ToSilversun_4


Common_EventScript_DrifblimTravels_ToPelluca::
# 1086 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1087 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1088 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1089 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 1090 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_2
# 1095 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToPelluca_Text_0, MSGBOX_YESNO
# 1097 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_5
# 1107 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToPelluca_4:
	end

Common_EventScript_DrifblimTravels_ToPelluca_2:
# 1091 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	end

Common_EventScript_DrifblimTravels_ToPelluca_5:
# 1098 "data//maps/TempCopyMap/scripts.pory"
	release
# 1100 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1101 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1102 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1103 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1104 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 14, 28
	goto Common_EventScript_DrifblimTravels_ToPelluca_4


Common_EventScript_Dugtrio_ToRoute3::
# 1121 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1122 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1123 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToRoute3_Text_0, MSGBOX_YESNO
# 1124 "data//maps/TempCopyMap/scripts.pory"
	release
# 1125 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToRoute3_2
Common_EventScript_Dugtrio_ToRoute3_1:
# 1133 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_Dugtrio_ToRoute3_2:
# 1127 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1128 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1129 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 1130 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1131 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE3_UNDERPASS, 43, 26
	goto Common_EventScript_Dugtrio_ToRoute3_1


Common_EventScript_Dugtrio_ToGalecrest::
# 1137 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1138 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1139 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToGalecrest_Text_0, MSGBOX_YESNO
# 1140 "data//maps/TempCopyMap/scripts.pory"
	release
# 1141 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToGalecrest_2
Common_EventScript_Dugtrio_ToGalecrest_1:
# 1149 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_Dugtrio_ToGalecrest_2:
# 1143 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1144 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1145 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 1146 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1147 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_GALECREST_CITY, 31, 65
	goto Common_EventScript_Dugtrio_ToGalecrest_1


Common_EventScript_Tauros_IvyRiver::
# 1160 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_IvyRiver_2
# 1168 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_IvyRiver_1:
# 1170 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_IvyRiver_2:
# 1161 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1162 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1163 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_IvyRiver_Text_1, Common_EventScript_Tauros_IvyRiver_Text_2
# 1165 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_IvyRiver_6
Common_EventScript_Tauros_IvyRiver_5:
# 1166 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_IvyRiver_8
	goto Common_EventScript_Tauros_IvyRiver_1

Common_EventScript_Tauros_IvyRiver_6:
# 1165 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_IvyRiver_5

Common_EventScript_Tauros_IvyRiver_8:
# 1166 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	goto Common_EventScript_Tauros_IvyRiver_1


Common_EventScript_Tauros_PellucaCity::
# 1175 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_PellucaCity_2
# 1184 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_PellucaCity_1:
# 1186 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_PellucaCity_2:
# 1176 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1177 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1178 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_2
# 1180 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_PellucaCity_6
Common_EventScript_Tauros_PellucaCity_5:
# 1181 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_PellucaCity_8
	goto Common_EventScript_Tauros_PellucaCity_1

Common_EventScript_Tauros_PellucaCity_6:
# 1180 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_PellucaCity_5

Common_EventScript_Tauros_PellucaCity_8:
# 1181 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	goto Common_EventScript_Tauros_PellucaCity_1


Common_EventScript_Tauros_Route6::
# 1191 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_Route6_2
# 1199 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_Route6_1:
# 1201 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_Route6_2:
# 1192 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1193 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1194 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_1
# 1196 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_Route6_6
Common_EventScript_Tauros_Route6_5:
# 1197 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_Route6_8
	goto Common_EventScript_Tauros_Route6_1

Common_EventScript_Tauros_Route6_6:
# 1196 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_Route6_5

Common_EventScript_Tauros_Route6_8:
# 1197 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_Route6_1


Common_EventScript_Tauros_GotoIvy::
# 1206 "data//maps/TempCopyMap/scripts.pory"
	release
# 1207 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1208 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1209 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1210 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1211 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_IVY_RIVER, 19, 69
	return


Common_EventScript_Tauros_GotoPelluca::
# 1215 "data//maps/TempCopyMap/scripts.pory"
	release
# 1217 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1218 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1219 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1220 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1221 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 10, 33
	return


Common_EventScript_Tauros_GotoRoute6::
# 1225 "data//maps/TempCopyMap/scripts.pory"
	release
# 1227 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1228 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1229 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1230 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1231 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE6, 52, 116
	return


# 1074 "data//maps/TempCopyMap/scripts.pory"
Common_EventScript_DrifblimTravels_ToSilversun_Movement_0:
# 1074 "data//maps/TempCopyMap/scripts.pory"
	face_down
	step_end

Common_EventScript_NurseDemo_Text_0:
# 6 "data//maps/TempCopyMap/scripts.pory"
	.string "This is the end of the demo. Thank you\n"
	.string "for playing! Please drop any feedback\l"
	.string "and bug reports on Discord, and stay\l"
	.string "tuned for further updates!$"

Common_EventScript_SaveGameBeforeBattle_Text_0:
# 12 "data//maps/TempCopyMap/scripts.pory"
	.string "You're about to battle!$"

Common_EventScript_Follower_Cheat_Text_0:
# 26 "data//maps/TempCopyMap/scripts.pory"
	.string "What would you like to do?$"

Common_EventScript_Follower_Cheat_Text_1:
# 29 "data//maps/TempCopyMap/scripts.pory"
	.string "Portable PC$"

Common_EventScript_Follower_Cheat_Text_2:
# 29 "data//maps/TempCopyMap/scripts.pory"
	.string "Team Heal$"

Common_EventScript_Follower_Cheat_Text_3:
# 29 "data//maps/TempCopyMap/scripts.pory"
	.string "Apply Status$"

Common_EventScript_Follower_Cheat_Text_4:
# 29 "data//maps/TempCopyMap/scripts.pory"
	.string "Cancel$"

Common_EventScript_MintVendingMachine_Text_0:
# 108 "data//maps/TempCopyMap/scripts.pory"
	.string "Swipe your Trainer Card?$"

Common_EventScript_MintVendingMachine_Text_1:
# 116 "data//maps/TempCopyMap/scripts.pory"
	.string "You must have at least ¥200 to\n"
	.string "purchase any mints.$"

Mart_Mints_NoBadges_Text_0:
# 159 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 0\n"
	.string "All mints are ¥200.$"

Mart_Mints_NoBadges_Text_1:
# 161 "data//maps/TempCopyMap/scripts.pory"
	.string "Impish Mint$"

Mart_Mints_NoBadges_Text_2:
# 161 "data//maps/TempCopyMap/scripts.pory"
	.string "Calm Mint$"

Mart_Mints_NoBadges_Text_3:
# 161 "data//maps/TempCopyMap/scripts.pory"
	.string "Relaxed Mint$"

Mart_Mints_OneBadge_Text_0:
# 168 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 1\n"
	.string "All mints are ¥200.$"

Mart_Mints_OneBadge_Text_1:
# 171 "data//maps/TempCopyMap/scripts.pory"
	.string "Bold Mint$"

Mart_Mints_OneBadge_Text_2:
# 171 "data//maps/TempCopyMap/scripts.pory"
	.string "Gentle Mint$"

Mart_Mints_OneBadge_Text_3:
# 172 "data//maps/TempCopyMap/scripts.pory"
	.string "Careful Mint$"

Mart_Mints_TwoBadges_Text_0:
# 179 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 2\n"
	.string "All mints are ¥200.$"

Mart_Mints_TwoBadges_Text_1:
# 183 "data//maps/TempCopyMap/scripts.pory"
	.string "Sassy Mint$"

Mart_Mints_TwoBadges_Text_2:
# 183 "data//maps/TempCopyMap/scripts.pory"
	.string "Serious Mint$"

Mart_Mints_TwoBadges_Text_3:
# 183 "data//maps/TempCopyMap/scripts.pory"
	.string "Brave Mint$"

Mart_Mints_ThreeBadges_Text_0:
# 190 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 3\n"
	.string "All mints are ¥200.$"

Mart_Mints_ThreeBadges_Text_1:
# 194 "data//maps/TempCopyMap/scripts.pory"
	.string "Naive Mint$"

Mart_Mints_ThreeBadges_Text_2:
# 195 "data//maps/TempCopyMap/scripts.pory"
	.string "Hasty Mint$"

Mart_Mints_ThreeBadges_Text_3:
# 195 "data//maps/TempCopyMap/scripts.pory"
	.string "Lax Mint$"

Mart_Mints_FourBadges_Text_0:
# 202 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 4\n"
	.string "All mints are ¥200.$"

Mart_Mints_FourBadges_Text_1:
# 207 "data//maps/TempCopyMap/scripts.pory"
	.string "Mild Mint$"

Mart_Mints_FourBadges_Text_2:
# 207 "data//maps/TempCopyMap/scripts.pory"
	.string "Rash Mint$"

Mart_Mints_FourBadges_Text_3:
# 208 "data//maps/TempCopyMap/scripts.pory"
	.string "Timid Mint$"

Mart_Mints_FiveBadges_Text_0:
# 215 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 5\n"
	.string "All mints are ¥200.$"

Mart_Mints_FiveBadges_Text_1:
# 221 "data//maps/TempCopyMap/scripts.pory"
	.string "Naughty Mint$"

Mart_Mints_FiveBadges_Text_2:
# 221 "data//maps/TempCopyMap/scripts.pory"
	.string "Quiet Mint$"

Mart_Mints_FiveBadges_Text_3:
# 221 "data//maps/TempCopyMap/scripts.pory"
	.string "Lonely Mint$"

Mart_Mints_SixBadges_Text_0:
# 228 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 6\n"
	.string "All mints are ¥200.$"

Mart_Mints_SixBadges_Text_1:
# 234 "data//maps/TempCopyMap/scripts.pory"
	.string "Jolly Mint$"

Mart_Mints_SixBadges_Text_2:
# 235 "data//maps/TempCopyMap/scripts.pory"
	.string "Adamant Mint$"

Mart_Mints_SixBadges_Text_3:
# 235 "data//maps/TempCopyMap/scripts.pory"
	.string "Modest Mint$"

MintPurchase_Common_Text_0:
# 325 "data//maps/TempCopyMap/scripts.pory"
	.string "Confirm purchase?$"

Common_EventScript_NurseJoyOnRoute_Text_0:
# 524 "data//maps/TempCopyMap/scripts.pory"
	.string "Should I heal your Pokémon?\n"
	.string "You can come back later if you wish.$"

Common_EventScript_NurseJoyOnRoute_Text_1:
# 538 "data//maps/TempCopyMap/scripts.pory"
	.string "Let me heal your Pokémon.$"

Common_EventScript_NurseJoyOnRoute_Text_2:
# 541 "data//maps/TempCopyMap/scripts.pory"
	.string "Stay safe out there!$"

Common_EventScript_NurseJoyOnRoute_Text_3:
# 545 "data//maps/TempCopyMap/scripts.pory"
	.string "Come back any time!$"

Common_EventScript_NurseJoyOnRoute_Text_4:
# 551 "data//maps/TempCopyMap/scripts.pory"
	.string "Sorry, you don't have a Heal Pass.\n"
	.string "Please visit a Pokémon Center to\l"
	.string "receive a Heal Pass.$"

Common_EventScript_ChanseyOnRoute_Text_0:
# 561 "data//maps/TempCopyMap/scripts.pory"
	.string "Chansey is happy as always!$"

Route5_Greta_AskToShow_Text_0:
# 591 "data//maps/TempCopyMap/scripts.pory"
	.string "Greta$"

Route5_Greta_AskToShow_Text_1:
# 592 "data//maps/TempCopyMap/scripts.pory"
	.string "Wanna buy anything?$"

Route5_Greta_AskToShow_Text_2:
# 595 "data//maps/TempCopyMap/scripts.pory"
	.string "Bummer!$"

Route5_Greta_ShowItemsForSale_Text_0:
# 604 "data//maps/TempCopyMap/scripts.pory"
	.string "The egg is ¥10,000. The rock is ¥5,000.\n"
	.string "The fish is only ¥100!$"

Route5_Greta_ShowItemsForSale_Text_1:
# 607 "data//maps/TempCopyMap/scripts.pory"
	.string "Strange Egg$"

Route5_Greta_ShowItemsForSale_Text_2:
# 607 "data//maps/TempCopyMap/scripts.pory"
	.string "Mysterious Rock$"

Route5_Greta_ShowItemsForSale_Text_3:
# 607 "data//maps/TempCopyMap/scripts.pory"
	.string "Ugly Fish$"

Route5_Greta_StrangeEgg_Text_0:
# 621 "data//maps/TempCopyMap/scripts.pory"
	.string "Hey! You can't afford this!$"

Route5_Greta_StrangeEgg_Text_1:
# 626 "data//maps/TempCopyMap/scripts.pory"
	.string "A discerning choice! You sure?$"

Route5_Greta_StrangeEgg_Text_2:
# 630 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Strange Egg from\n"
	.string "Greta.$"

Route5_Greta_StrangeEgg_Text_3:
# 633 "data//maps/TempCopyMap/scripts.pory"
	.string "Good doing business with you! Now, what\n"
	.string "about -$"

Route5_Greta_UglyFish_Text_0:
# 650 "data//maps/TempCopyMap/scripts.pory"
	.string "A...budget-friendly choice! You sure?$"

Route5_Greta_UglyFish_Text_1:
# 654 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Feebas from\n"
	.string "Greta.$"

Route5_Greta_MysteriousRock_Text_0:
# 674 "data//maps/TempCopyMap/scripts.pory"
	.string "A reasonable choice! You sure?$"

PellucaCity_Greta_ShowItemsForSale_Text_0:
# 722 "data//maps/TempCopyMap/scripts.pory"
	.string "You won't find these at the Game\n"
	.string "Corner! For you I can do ¥5200.$"

PellucaCity_Greta_ShowItemsForSale_Text_1:
# 725 "data//maps/TempCopyMap/scripts.pory"
	.string "Dusk Stone$"

PellucaCity_Greta_ShowItemsForSale_Text_2:
# 725 "data//maps/TempCopyMap/scripts.pory"
	.string "Prism Scale$"

PellucaCity_Greta_ShowItemsForSale_Text_3:
# 725 "data//maps/TempCopyMap/scripts.pory"
	.string "Dawn Stone$"

PellucaCity_Greta_Item_A_Text_0:
# 746 "data//maps/TempCopyMap/scripts.pory"
	.string "A dark choice! You sure?$"

PellucaCity_Greta_Item_B_Text_0:
# 772 "data//maps/TempCopyMap/scripts.pory"
	.string "A brilliant choice! You sure?$"

PellucaCity_Greta_Item_C_Text_0:
# 798 "data//maps/TempCopyMap/scripts.pory"
	.string "A cool choice! You sure?$"

AncientStatue_Gastree_Text_0:
# 846 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon...$"

AncientStatue_FirstTime_Text_0:
# 911 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon...\p"
	.string "{PLAYER} found {STR_VAR_2} of 10\n"
	.string "statues.\p"
	.string "Scanning the ancient statue\n"
	.string "with the Archaeolens...$"

AncientStatue_FirstTime_Text_1:
# 913 "data//maps/TempCopyMap/scripts.pory"
	.string "Done!$"

Common_EventScript_HyperTrainer_Text_0:
# 933 "data//maps/TempCopyMap/scripts.pory"
	.string "From within the bag, the Rare Shard\n"
	.string "begins to vibrate...\p"
	.string "Take out the Rare Shard from the bag?$"

Common_EventScript_HyperTrainer_Text_1:
# 938 "data//maps/TempCopyMap/scripts.pory"
	.string "The statue begins humming faintly...\p"
	.string "Which Pokémon should hold the Rare\n"
	.string "Shard?$"

Common_EventScript_HyperTrainer_Text_2:
# 948 "data//maps/TempCopyMap/scripts.pory"
	.string "{STR_VAR_1} is absorbing memories\n"
	.string "from the statue...what's it seeing?$"

Common_EventScript_HyperTrainer_Text_3:
# 950 "data//maps/TempCopyMap/scripts.pory"
	.string "HP$"

Common_EventScript_HyperTrainer_Text_4:
# 950 "data//maps/TempCopyMap/scripts.pory"
	.string "Attack$"

Common_EventScript_HyperTrainer_Text_5:
# 950 "data//maps/TempCopyMap/scripts.pory"
	.string "Defence$"

Common_EventScript_HyperTrainer_Text_6:
# 950 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Attack$"

Common_EventScript_HyperTrainer_Text_7:
# 950 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Defence$"

Common_EventScript_HyperTrainer_Text_8:
# 950 "data//maps/TempCopyMap/scripts.pory"
	.string "Speed$"

Common_EventScript_HyperTrainer_Text_9:
# 955 "data//maps/TempCopyMap/scripts.pory"
	.string "{STR_VAR_1} cannot grow any\n"
	.string "stronger in that stat!$"

Common_EventScript_HyperTrainer_Text_10:
# 1020 "data//maps/TempCopyMap/scripts.pory"
	.string "Imbued with the statue's memories,\n"
	.string "{STR_VAR_1} became stronger!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_0:
# 1064 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a Drifblim!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_1:
# 1068 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards Silversun City. Fly there?$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_2:
# 1080 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim looks dejected...$"

Common_EventScript_DrifblimTravels_ToPelluca_Text_0:
# 1095 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards Pelluca City. Fly there?$"

Common_EventScript_Dugtrio_ToRoute3_Text_0:
# 1123 "data//maps/TempCopyMap/scripts.pory"
	.string "Dugtrio is digging into the ground.\n"
	.string "Follow it?$"

Common_EventScript_Dugtrio_ToGalecrest_Text_0:
# 1139 "data//maps/TempCopyMap/scripts.pory"
	.string "Dugtrio is digging back up to the\n"
	.string "surface. Follow it?$"

Common_EventScript_Tauros_IvyRiver_Text_0:
# 1161 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently.\n"
	.string "Where should Tauros go?$"

Common_EventScript_Tauros_IvyRiver_Text_1:
# 1163 "data//maps/TempCopyMap/scripts.pory"
	.string "Pelluca City$"

Common_EventScript_Tauros_IvyRiver_Text_2:
# 1163 "data//maps/TempCopyMap/scripts.pory"
	.string "Route 6 HQ$"

Common_EventScript_Tauros_IvyRiver_Text_3:
# 1168 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently.$"

Common_EventScript_Tauros_PellucaCity_Text_0:
# 1178 "data//maps/TempCopyMap/scripts.pory"
	.string "Ivy River HQ$"

Common_Text_Greta_Comecome::
# 586 "data//maps/TempCopyMap/scripts.pory"
	.string "Come, come. I've got some great stuff\n"
	.string "from...well, you can't ask a magician to\l"
	.string "reveal her secrets, can you?$"
