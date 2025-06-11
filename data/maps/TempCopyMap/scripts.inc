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


Common_EventScript_SaveGameBeforeSomber::
# 20 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_SaveGameBeforeSomber_Text_0
# 21 "data//maps/TempCopyMap/scripts.pory"
	special SaveGame
# 22 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 23 "data//maps/TempCopyMap/scripts.pory"
	release
	return


Common_EventScript_SaveGameBeforeLegendary::
# 28 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_SaveGameBeforeLegendary_Text_0
# 29 "data//maps/TempCopyMap/scripts.pory"
	special SaveGame
# 30 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 31 "data//maps/TempCopyMap/scripts.pory"
	release
	return


Common_EventScript_Follower_Cheat::
# 39 "data//maps/TempCopyMap/scripts.pory"
	lock
# 40 "data//maps/TempCopyMap/scripts.pory"
	bufferlivemonnickname 0
# 41 "data//maps/TempCopyMap/scripts.pory"
	playfirstmoncry
# 42 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Follower_Cheat_Text_0
# 43 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 44 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Follower_Cheat_Text_1, Common_EventScript_Follower_Cheat_Text_2, Common_EventScript_Follower_Cheat_Text_3, Common_EventScript_Follower_Cheat_Text_4
# 46 "data//maps/TempCopyMap/scripts.pory"
	release
# 47 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Follower_Cheat_2
Common_EventScript_Follower_Cheat_1:
# 52 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Follower_Cheat_5
Common_EventScript_Follower_Cheat_4:
# 56 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_Follower_Cheat_8
Common_EventScript_Follower_Cheat_7:
# 70 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_Follower_Cheat_2:
# 48 "data//maps/TempCopyMap/scripts.pory"
	special ShowPokemonStorageSystemPC
# 49 "data//maps/TempCopyMap/scripts.pory"
	waitstate
	goto Common_EventScript_Follower_Cheat_1

Common_EventScript_Follower_Cheat_5:
# 53 "data//maps/TempCopyMap/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Common_EventScript_Follower_Cheat_4

Common_EventScript_Follower_Cheat_8:
# 57 "data//maps/TempCopyMap/scripts.pory"
	goto Debug_EventScript_InflictStatus1_Single
# 60 "data//maps/TempCopyMap/scripts.pory"
	special ChoosePartyMon
# 61 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 64 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_Follower_Cheat_10
	goto Common_EventScript_Follower_Cheat_7

Common_EventScript_Follower_Cheat_10:
# 65 "data//maps/TempCopyMap/scripts.pory"
	release
	end


Common_EventScript_MintVendingMachine::
# 124 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_0, MSGBOX_YESNO
# 125 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_2
# 130 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 200
# 131 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_5
# 136 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	return

Common_EventScript_MintVendingMachine_2:
# 126 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_MintVendingMachine_5:
# 132 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_1
# 133 "data//maps/TempCopyMap/scripts.pory"
	release
	end


MintVendingMachine_CheckBadge::
# 141 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MintVendingMachine_CheckBadge_2
# 144 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MintVendingMachine_CheckBadge_5
# 147 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MintVendingMachine_CheckBadge_8
# 150 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MintVendingMachine_CheckBadge_11
# 153 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MintVendingMachine_CheckBadge_14
# 156 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MintVendingMachine_CheckBadge_17
# 159 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_NoBadges
MintVendingMachine_CheckBadge_1:
# 167 "data//maps/TempCopyMap/scripts.pory"
	release
	end

MintVendingMachine_CheckBadge_2:
# 142 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_SixBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_5:
# 145 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FiveBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_8:
# 148 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_FourBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_11:
# 151 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_ThreeBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_14:
# 154 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_TwoBadges
	goto MintVendingMachine_CheckBadge_1

MintVendingMachine_CheckBadge_17:
# 157 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_OneBadge
	goto MintVendingMachine_CheckBadge_1


Mart_Mints_NoBadges::
# 174 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 175 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_NoBadges_Text_0
# 176 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 177 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3
# 178 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 179 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 180 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_OneBadge::
# 183 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 184 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_OneBadge_Text_0
# 185 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 186 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3
# 189 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 190 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 191 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_TwoBadges::
# 194 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 195 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_TwoBadges_Text_0
# 196 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 197 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3
# 200 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 201 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 202 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_ThreeBadges::
# 205 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 206 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_ThreeBadges_Text_0
# 207 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 208 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3
# 212 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 213 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 214 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FourBadges::
# 217 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 218 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_FourBadges_Text_0
# 219 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 220 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3
# 225 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 226 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 227 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_FiveBadges::
# 230 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 231 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_FiveBadges_Text_0
# 232 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 233 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3
# 238 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 239 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 240 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
	return


Mart_Mints_SixBadges::
# 243 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 244 "data//maps/TempCopyMap/scripts.pory"
	message Mart_Mints_SixBadges_Text_0
# 245 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 246 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_OneBadge_Text_1, Mart_Mints_OneBadge_Text_2, Mart_Mints_OneBadge_Text_3, Mart_Mints_TwoBadges_Text_1, Mart_Mints_TwoBadges_Text_2, Mart_Mints_TwoBadges_Text_3, Mart_Mints_ThreeBadges_Text_1, Mart_Mints_ThreeBadges_Text_2, Mart_Mints_ThreeBadges_Text_3, Mart_Mints_FourBadges_Text_1, Mart_Mints_FourBadges_Text_2, Mart_Mints_FourBadges_Text_3, Mart_Mints_FiveBadges_Text_1, Mart_Mints_FiveBadges_Text_2, Mart_Mints_FiveBadges_Text_3, Mart_Mints_SixBadges_Text_1, Mart_Mints_SixBadges_Text_2, Mart_Mints_SixBadges_Text_3
# 252 "data//maps/TempCopyMap/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 253 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 254 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_MintPurchaseDecision
# 256 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 257 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Mart_MintPurchaseDecision::
# 274 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Mart_MintPurchaseDecision_2
Mart_MintPurchaseDecision_1:
# 275 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Mart_MintPurchaseDecision_5
Mart_MintPurchaseDecision_4:
# 276 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq Mart_MintPurchaseDecision_8
Mart_MintPurchaseDecision_7:
# 277 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq Mart_MintPurchaseDecision_11
Mart_MintPurchaseDecision_10:
# 278 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Mart_MintPurchaseDecision_14
Mart_MintPurchaseDecision_13:
# 280 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Mart_MintPurchaseDecision_17
Mart_MintPurchaseDecision_16:
# 281 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_eq Mart_MintPurchaseDecision_20
Mart_MintPurchaseDecision_19:
# 282 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 7
	goto_if_eq Mart_MintPurchaseDecision_23
Mart_MintPurchaseDecision_22:
# 283 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 8
	goto_if_eq Mart_MintPurchaseDecision_26
Mart_MintPurchaseDecision_25:
# 284 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 9
	goto_if_eq Mart_MintPurchaseDecision_29
Mart_MintPurchaseDecision_28:
# 286 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Mart_MintPurchaseDecision_32
Mart_MintPurchaseDecision_31:
# 287 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 11
	goto_if_eq Mart_MintPurchaseDecision_35
Mart_MintPurchaseDecision_34:
# 288 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 12
	goto_if_eq Mart_MintPurchaseDecision_38
Mart_MintPurchaseDecision_37:
# 289 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 13
	goto_if_eq Mart_MintPurchaseDecision_41
Mart_MintPurchaseDecision_40:
# 291 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 14
	goto_if_eq Mart_MintPurchaseDecision_44
Mart_MintPurchaseDecision_43:
# 292 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 15
	goto_if_eq Mart_MintPurchaseDecision_47
Mart_MintPurchaseDecision_46:
# 293 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 16
	goto_if_eq Mart_MintPurchaseDecision_50
Mart_MintPurchaseDecision_49:
# 294 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 17
	goto_if_eq Mart_MintPurchaseDecision_53
Mart_MintPurchaseDecision_52:
# 295 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 18
	goto_if_eq Mart_MintPurchaseDecision_56
Mart_MintPurchaseDecision_55:
# 296 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 19
	goto_if_eq Mart_MintPurchaseDecision_59
Mart_MintPurchaseDecision_58:
# 297 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_TEMP_3, 20
	goto_if_eq Mart_MintPurchaseDecision_62
Mart_MintPurchaseDecision_61:
# 299 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Mart_MintPurchaseDecision_2:
# 274 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_IMPISH_MINT
# 274 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_1

Mart_MintPurchaseDecision_5:
# 275 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_CALM_MINT
# 275 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_4

Mart_MintPurchaseDecision_8:
# 276 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_RELAXED_MINT
# 276 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_7

Mart_MintPurchaseDecision_11:
# 277 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_BOLD_MINT
# 277 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_10

Mart_MintPurchaseDecision_14:
# 278 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_GENTLE_MINT
# 278 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_13

Mart_MintPurchaseDecision_17:
# 280 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_CAREFUL_MINT
# 280 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_16

Mart_MintPurchaseDecision_20:
# 281 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SASSY_MINT
# 281 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_19

Mart_MintPurchaseDecision_23:
# 282 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_SERIOUS_MINT
# 282 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_22

Mart_MintPurchaseDecision_26:
# 283 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_BRAVE_MINT
# 283 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_25

Mart_MintPurchaseDecision_29:
# 284 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_NAIVE_MINT
# 284 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_28

Mart_MintPurchaseDecision_32:
# 286 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_HASTY_MINT
# 286 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_31

Mart_MintPurchaseDecision_35:
# 287 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_LAX_MINT
# 287 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_34

Mart_MintPurchaseDecision_38:
# 288 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_MILD_MINT
# 288 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_37

Mart_MintPurchaseDecision_41:
# 289 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_RASH_MINT
# 289 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_40

Mart_MintPurchaseDecision_44:
# 291 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_TIMID_MINT
# 291 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_43

Mart_MintPurchaseDecision_47:
# 292 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_NAUGHTY_MINT
# 292 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_46

Mart_MintPurchaseDecision_50:
# 293 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_QUIET_MINT
# 293 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_49

Mart_MintPurchaseDecision_53:
# 294 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_LONELY_MINT
# 294 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_52

Mart_MintPurchaseDecision_56:
# 295 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_JOLLY_MINT
# 295 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_55

Mart_MintPurchaseDecision_59:
# 296 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_ADAMANT_MINT
# 296 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_58

Mart_MintPurchaseDecision_62:
# 297 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_MODEST_MINT
# 297 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Common
	goto Mart_MintPurchaseDecision_61


MintPurchase_Common::
# 339 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 341 "data//maps/TempCopyMap/scripts.pory"
	msgbox MintPurchase_Common_Text_0, MSGBOX_YESNO
# 343 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MintPurchase_Common_2
# 353 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 354 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end

MintPurchase_Common_2:
# 344 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 345 "data//maps/TempCopyMap/scripts.pory"
	playse SE_VEND
# 346 "data//maps/TempCopyMap/scripts.pory"
	waitse
# 347 "data//maps/TempCopyMap/scripts.pory"
	giveitem VAR_0x8006
# 348 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 349 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Impish::
# 363 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 365 "data//maps/TempCopyMap/scripts.pory"
	msgbox MintPurchase_Common_Text_0, MSGBOX_YESNO
# 367 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MintPurchase_Impish_2
MintPurchase_Impish_1:
# 371 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end

MintPurchase_Impish_2:
# 368 "data//maps/TempCopyMap/scripts.pory"
	giveitem VAR_0x8006
# 369 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
	goto MintPurchase_Impish_1


MintPurchase_Calm::
# 377 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 378 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CALM_MINT
# 379 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Relaxed::
# 384 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 385 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_RELAXED_MINT
# 386 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Modest::
# 391 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 392 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MODEST_MINT
# 393 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Gentle::
# 398 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 399 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_GENTLE_MINT
# 400 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Careful::
# 405 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 406 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CAREFUL_MINT
# 407 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Sassy::
# 412 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 413 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SASSY_MINT
# 414 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naughty::
# 419 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 420 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT
# 421 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Timid::
# 426 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 427 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_TIMID_MINT
# 428 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Hasty::
# 433 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 434 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_HASTY_MINT
# 435 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Brave::
# 440 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 441 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BRAVE_MINT
# 442 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Bold::
# 447 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 448 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BOLD_MINT
# 449 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Adamant::
# 454 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 455 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
# 456 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Mild::
# 461 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 462 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 463 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Rash::
# 468 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 469 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 470 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Naive::
# 475 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 476 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAIVE_MINT
# 477 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lax::
# 482 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 483 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LAX_MINT
# 484 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Lonely::
# 489 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 490 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LONELY_MINT
# 491 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Quiet::
# 496 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 497 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_QUIET_MINT
# 498 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Jolly::
# 503 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 504 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_JOLLY_MINT
# 505 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


MintPurchase_Serious::
# 510 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 511 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 512 "data//maps/TempCopyMap/scripts.pory"
	goto MintVendingMachine_CheckBadge
	end


Common_EventScript_NurseJoyOnRoute::
# 537 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_HEAL_PASS
# 538 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_2
# 567 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_4
# 568 "data//maps/TempCopyMap/scripts.pory"
	release
Common_EventScript_NurseJoyOnRoute_1:
	return

Common_EventScript_NurseJoyOnRoute_2:
# 540 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_0, MSGBOX_YESNO
# 542 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_NurseJoyOnRoute_5
# 561 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_3
# 562 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_NurseJoyOnRoute_1

Common_EventScript_NurseJoyOnRoute_5:
# 543 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 544 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 545 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 546 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 547 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 548 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 549 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 550 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 551 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 552 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_HEAL_PASS
# 554 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_1
# 555 "data//maps/TempCopyMap/scripts.pory"
	release
# 556 "data//maps/TempCopyMap/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 557 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_NurseJoyOnRoute_Text_2
# 558 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_NurseJoyOnRoute_1


Common_EventScript_ChanseyOnRoute::
# 574 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 575 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 576 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 577 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_ChanseyOnRoute_Text_0
# 578 "data//maps/TempCopyMap/scripts.pory"
	release
# 579 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Route5_Greta_AskToShow::
# 607 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 608 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1, MSGBOX_YESNO
# 609 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_AskToShow_2
Route5_Greta_AskToShow_1:
# 611 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_2
# 612 "data//maps/TempCopyMap/scripts.pory"
	release
# 614 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return

Route5_Greta_AskToShow_2:
# 609 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	goto Route5_Greta_AskToShow_1


Route5_Greta_ShowItemsForSale::
# 618 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 619 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 620 "data//maps/TempCopyMap/scripts.pory"
	message Route5_Greta_ShowItemsForSale_Text_0
# 621 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 623 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route5_Greta_ShowItemsForSale_Text_1, Route5_Greta_ShowItemsForSale_Text_2, Route5_Greta_ShowItemsForSale_Text_3
# 624 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 625 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_ShowItemsForSale_2
Route5_Greta_ShowItemsForSale_1:
# 626 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_ShowItemsForSale_5
Route5_Greta_ShowItemsForSale_4:
# 627 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route5_Greta_ShowItemsForSale_8
Route5_Greta_ShowItemsForSale_7:
# 629 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_AskToShow
	return

Route5_Greta_ShowItemsForSale_2:
# 625 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_StrangeEgg
	goto Route5_Greta_ShowItemsForSale_1

Route5_Greta_ShowItemsForSale_5:
# 626 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_MysteriousRock
	goto Route5_Greta_ShowItemsForSale_4

Route5_Greta_ShowItemsForSale_8:
# 627 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_UglyFish
	goto Route5_Greta_ShowItemsForSale_7


Route5_Greta_StrangeEgg::
# 634 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 10000
# 635 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_StrangeEgg_1
# 641 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 642 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_1, MSGBOX_YESNO
# 643 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_StrangeEgg_4
# 652 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_1:
# 636 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 637 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 638 "data//maps/TempCopyMap/scripts.pory"
	release
# 639 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_4:
# 644 "data//maps/TempCopyMap/scripts.pory"
	removemoney 10000
# 645 "data//maps/TempCopyMap/scripts.pory"
	giveegg SPECIES_HONEDGE
# 646 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_2, MSGBOX_SIGN
# 647 "data//maps/TempCopyMap/scripts.pory"
	release
# 648 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 649 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 650 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_UglyFish::
# 658 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 100
# 659 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_UglyFish_1
# 665 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 666 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_0, MSGBOX_YESNO
# 667 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_UglyFish_4
# 676 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_1:
# 660 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 661 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 662 "data//maps/TempCopyMap/scripts.pory"
	release
# 663 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_4:
# 668 "data//maps/TempCopyMap/scripts.pory"
	removemoney 100
# 669 "data//maps/TempCopyMap/scripts.pory"
	givemon SPECIES_FEEBAS, 5
# 670 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_1, MSGBOX_SIGN
# 671 "data//maps/TempCopyMap/scripts.pory"
	release
# 672 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 673 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 674 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_MysteriousRock::
# 682 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5000
# 683 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_MysteriousRock_1
# 689 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 690 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_MysteriousRock_Text_0, MSGBOX_YESNO
# 691 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_MysteriousRock_4
# 698 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_1:
# 684 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 685 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 686 "data//maps/TempCopyMap/scripts.pory"
	release
# 687 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_4:
# 692 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5000
# 693 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ODD_KEYSTONE
# 694 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 695 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 696 "data//maps/TempCopyMap/scripts.pory"
	goto Route5_Greta_GottaGo
	return


PellucaCity_Greta_AskToShow::
# 723 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 724 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1, MSGBOX_YESNO
# 725 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_AskToShow_2
PellucaCity_Greta_AskToShow_1:
# 727 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 728 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 729 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_2
# 730 "data//maps/TempCopyMap/scripts.pory"
	release
# 732 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return

PellucaCity_Greta_AskToShow_2:
# 725 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	goto PellucaCity_Greta_AskToShow_1


PellucaCity_Greta_ShowItemsForSale::
# 736 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 737 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 738 "data//maps/TempCopyMap/scripts.pory"
	message PellucaCity_Greta_ShowItemsForSale_Text_0
# 739 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 741 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Greta_ShowItemsForSale_Text_1, PellucaCity_Greta_ShowItemsForSale_Text_2, PellucaCity_Greta_ShowItemsForSale_Text_3
# 742 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 743 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_2
PellucaCity_Greta_ShowItemsForSale_1:
# 744 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_5
PellucaCity_Greta_ShowItemsForSale_4:
# 745 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_Greta_ShowItemsForSale_8
PellucaCity_Greta_ShowItemsForSale_7:
# 747 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_AskToShow
	return

PellucaCity_Greta_ShowItemsForSale_2:
# 743 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_A
	goto PellucaCity_Greta_ShowItemsForSale_1

PellucaCity_Greta_ShowItemsForSale_5:
# 744 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_B
	goto PellucaCity_Greta_ShowItemsForSale_4

PellucaCity_Greta_ShowItemsForSale_8:
# 745 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_Item_C
	goto PellucaCity_Greta_ShowItemsForSale_7


PellucaCity_Greta_Item_A::
# 752 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 753 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_A_1
# 759 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_DUSK_STONE
# 760 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 761 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 762 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_A_Text_0, MSGBOX_YESNO
# 763 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_A_4
# 771 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 772 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_A_1:
# 754 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 755 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 756 "data//maps/TempCopyMap/scripts.pory"
	release
# 757 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_A_4:
# 764 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 765 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 766 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_DUSK_STONE
# 767 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 768 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 769 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_Item_B::
# 778 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 779 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_B_1
# 785 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_PRISM_SCALE
# 786 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 787 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 788 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_B_Text_0, MSGBOX_YESNO
# 789 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_B_4
# 797 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 798 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_B_1:
# 780 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 781 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 782 "data//maps/TempCopyMap/scripts.pory"
	release
# 783 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_B_4:
# 790 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 791 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 792 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_PRISM_SCALE
# 793 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 794 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 795 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


PellucaCity_Greta_Item_C::
# 804 "data//maps/TempCopyMap/scripts.pory"
	checkmoney 5200
# 805 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Greta_Item_C_1
# 811 "data//maps/TempCopyMap/scripts.pory"
	setvar VAR_0x8006, ITEM_DAWN_STONE
# 812 "data//maps/TempCopyMap/scripts.pory"
	showitemdescription
# 813 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 814 "data//maps/TempCopyMap/scripts.pory"
	msgbox PellucaCity_Greta_Item_C_Text_0, MSGBOX_YESNO
# 815 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Greta_Item_C_4
# 823 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 824 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_C_1:
# 806 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 807 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 808 "data//maps/TempCopyMap/scripts.pory"
	release
# 809 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return

PellucaCity_Greta_Item_C_4:
# 816 "data//maps/TempCopyMap/scripts.pory"
	hideitemdescription
# 817 "data//maps/TempCopyMap/scripts.pory"
	removemoney 5200
# 818 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 819 "data//maps/TempCopyMap/scripts.pory"
	speakername Route5_Greta_AskToShow_Text_0
# 820 "data//maps/TempCopyMap/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 821 "data//maps/TempCopyMap/scripts.pory"
	goto PellucaCity_Greta_GottaGo
	return


AncientStatue_Route1::
# 862 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 863 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_ROUTE1, AncientStatue_Route1_2
# 864 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_ROUTE1
# 864 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Route1_1:
	end

AncientStatue_Route1_2:
# 863 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Route1_Text_0
# 863 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Route1_1


AncientStatue_Gastree::
# 869 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Route1_Text_0
# 870 "data//maps/TempCopyMap/scripts.pory"
	release
	end


AncientStatue_Ceram::
# 875 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 876 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_CERAM, AncientStatue_Ceram_2
# 877 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_CERAM
# 877 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Ceram_1:
	end

AncientStatue_Ceram_2:
# 876 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Route1_Text_0
# 876 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Ceram_1


AncientStatue_Galecrest::
# 881 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 882 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_GALECREST, AncientStatue_Galecrest_2
# 883 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_GALECREST
# 883 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Galecrest_1:
	end

AncientStatue_Galecrest_2:
# 882 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Route1_Text_0
# 882 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Galecrest_1


AncientStatue_Celebi::
# 887 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 888 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_CELEBI, AncientStatue_Celebi_2
# 889 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_CELEBI
# 889 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Celebi_1:
	end

AncientStatue_Celebi_2:
# 888 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Route1_Text_0
# 888 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Celebi_1


AncientStatue_Sewers::
# 893 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 894 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_SEWERS, AncientStatue_Sewers_2
# 895 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_SEWERS
# 895 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Sewers_1:
	end

AncientStatue_Sewers_2:
# 894 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Route1_Text_0
# 894 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Sewers_1


AncientStatue_Route6::
# 899 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 900 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_ROUTE6, AncientStatue_Route6_2
# 901 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_ROUTE6
# 901 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Route6_1:
	end

AncientStatue_Route6_2:
# 900 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Route1_Text_0
# 900 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Route6_1


AncientStatue_Graveyard::
# 905 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 906 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_GRAVEYARD, AncientStatue_Graveyard_2
# 907 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_GRAVEYARD
# 907 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Graveyard_1:
	end

AncientStatue_Graveyard_2:
# 906 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Route1_Text_0
# 906 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Graveyard_1


AncientStatue_LilyPond::
# 911 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 912 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_LILYPOND, AncientStatue_LilyPond_2
# 913 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_LILYPOND
# 913 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_LilyPond_1:
	end

AncientStatue_LilyPond_2:
# 912 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Route1_Text_0
# 912 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_LilyPond_1


AncientStatue_Route8::
# 917 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 918 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_STATUE_ROUTE8, AncientStatue_Route8_2
# 919 "data//maps/TempCopyMap/scripts.pory"
	setflag FLAG_STATUE_ROUTE8
# 919 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_FirstTime
AncientStatue_Route8_1:
	end

AncientStatue_Route8_2:
# 918 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_Route1_Text_0
# 918 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	goto AncientStatue_Route8_1


AncientStatue_FirstTime::
# 932 "data//maps/TempCopyMap/scripts.pory"
	addvar VAR_STATUE_COUNT, 1
# 933 "data//maps/TempCopyMap/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STATUE_COUNT
# 934 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_FirstTime_Text_0
# 935 "data//maps/TempCopyMap/scripts.pory"
	playse SE_CLICK
# 936 "data//maps/TempCopyMap/scripts.pory"
	msgbox AncientStatue_FirstTime_Text_1
# 937 "data//maps/TempCopyMap/scripts.pory"
	goto AncientStatue_CheckRareShard
	return


AncientStatue_CheckRareShard::
# 942 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_RARE_SHARD
# 943 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AncientStatue_CheckRareShard_2
# 948 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_HyperTrainer
	return

AncientStatue_CheckRareShard_2:
# 944 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Common_EventScript_HyperTrainer::
# 953 "data//maps/TempCopyMap/scripts.pory"
	fadenewbgm MUS_B_PYRAMID_TOP
# 955 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_0, MSGBOX_YESNO
# 957 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_2
# 960 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_1
# 961 "data//maps/TempCopyMap/scripts.pory"
	special ChoosePartyMon
# 962 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 963 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_HyperTrainer_5
# 969 "data//maps/TempCopyMap/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 970 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_HyperTrainer_Text_2
# 971 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 972 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_HyperTrainer_Text_3, Common_EventScript_HyperTrainer_Text_4, Common_EventScript_HyperTrainer_Text_5, Common_EventScript_HyperTrainer_Text_6, Common_EventScript_HyperTrainer_Text_7, Common_EventScript_HyperTrainer_Text_8, Common_EventScript_Follower_Cheat_Text_4
# 974 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_9
Common_EventScript_HyperTrainer_8:
# 983 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_HyperTrainer_12
Common_EventScript_HyperTrainer_11:
# 992 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_HyperTrainer_18
Common_EventScript_HyperTrainer_17:
# 1001 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_HyperTrainer_24
Common_EventScript_HyperTrainer_23:
# 1010 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_HyperTrainer_30
Common_EventScript_HyperTrainer_29:
# 1019 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Common_EventScript_HyperTrainer_36
Common_EventScript_HyperTrainer_35:
# 1028 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Common_EventScript_HyperTrainer_42
# 1035 "data//maps/TempCopyMap/scripts.pory"
	release
# 1036 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_TO_WHITE
# 1037 "data//maps/TempCopyMap/scripts.pory"
	playse SE_USE_ITEM
# 1038 "data//maps/TempCopyMap/scripts.pory"
	delay 24
# 1039 "data//maps/TempCopyMap/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 1041 "data//maps/TempCopyMap/scripts.pory"
	removeitem ITEM_RARE_SHARD
# 1042 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_10
# 1043 "data//maps/TempCopyMap/scripts.pory"
	release
Common_EventScript_HyperTrainer_1:
# 1046 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 1047 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_2:
	goto Common_EventScript_HyperTrainer_1

Common_EventScript_HyperTrainer_5:
# 964 "data//maps/TempCopyMap/scripts.pory"
	release
# 965 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 966 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_9:
# 975 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_HP, VAR_0x8004
# 976 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_15
# 981 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto Common_EventScript_HyperTrainer_8

Common_EventScript_HyperTrainer_12:
# 984 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_ATK, VAR_0x8004
# 985 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_21
# 990 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_11

Common_EventScript_HyperTrainer_15:
# 977 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 978 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_18:
# 993 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_DEF, VAR_0x8004
# 994 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_27
# 999 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_17

Common_EventScript_HyperTrainer_21:
# 986 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 987 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_24:
# 1002 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPATK, VAR_0x8004
# 1003 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_33
# 1008 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto Common_EventScript_HyperTrainer_23

Common_EventScript_HyperTrainer_27:
# 995 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 996 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_30:
# 1011 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPDEF, VAR_0x8004
# 1012 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_39
# 1017 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
	goto Common_EventScript_HyperTrainer_29

Common_EventScript_HyperTrainer_33:
# 1004 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 1005 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_36:
# 1020 "data//maps/TempCopyMap/scripts.pory"
	canhypertrain STAT_SPEED, VAR_0x8004
# 1021 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_HyperTrainer_45
# 1026 "data//maps/TempCopyMap/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto Common_EventScript_HyperTrainer_35

Common_EventScript_HyperTrainer_39:
# 1013 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 1014 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_42:
# 1029 "data//maps/TempCopyMap/scripts.pory"
	release
# 1030 "data//maps/TempCopyMap/scripts.pory"
	fadedefaultbgm
# 1031 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_HyperTrainer_45:
# 1022 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_HyperTrainer_Text_9
# 1023 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Common_EventScript_DrifblimTravels_ToSilversun::
# 1081 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1082 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1083 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1084 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 1085 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_2
# 1090 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_1, MSGBOX_YESNO
# 1092 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToSilversun_5
# 1102 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToSilversun_4:
	end

Common_EventScript_DrifblimTravels_ToSilversun_2:
# 1086 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	end

Common_EventScript_DrifblimTravels_ToSilversun_5:
# 1093 "data//maps/TempCopyMap/scripts.pory"
	release
# 1095 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1096 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1097 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1098 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1099 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_SILVERSUN_CITY, 28, 22
	goto Common_EventScript_DrifblimTravels_ToSilversun_4


Common_EventScript_DrifblimTravels_ToPelluca::
# 1108 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1109 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1110 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1111 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 1112 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_2
# 1117 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToPelluca_Text_0, MSGBOX_YESNO
# 1119 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_ToPelluca_5
# 1129 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_ToPelluca_4:
	end

Common_EventScript_DrifblimTravels_ToPelluca_2:
# 1113 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	end

Common_EventScript_DrifblimTravels_ToPelluca_5:
# 1120 "data//maps/TempCopyMap/scripts.pory"
	release
# 1122 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1123 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1124 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1125 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1126 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 14, 28
	goto Common_EventScript_DrifblimTravels_ToPelluca_4


Common_EventScript_DrifblimTravels_All::
# 1138 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1139 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1140 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 1141 "data//maps/TempCopyMap/scripts.pory"
	checkitem ITEM_DRIFBLIM_TRAVELS_PASS
# 1142 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_DrifblimTravels_All_2
# 1145 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_All_Text_0, MSGBOX_YESNO
# 1147 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_DrifblimTravels_All_5
# 1155 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_2, MSGBOX_NPC
Common_EventScript_DrifblimTravels_All_1:
# 1158 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_DrifblimTravels_All_2:
# 1143 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_DrifblimTravels_ToSilversun_Text_0, MSGBOX_NPC
	goto Common_EventScript_DrifblimTravels_All_1

Common_EventScript_DrifblimTravels_All_5:
# 1148 "data//maps/TempCopyMap/scripts.pory"
	release
# 1150 "data//maps/TempCopyMap/scripts.pory"
	special StartFly
# 1151 "data//maps/TempCopyMap/scripts.pory"
	waitstate
# 1152 "data//maps/TempCopyMap/scripts.pory"
	release
	goto Common_EventScript_DrifblimTravels_All_1


Common_EventScript_Dugtrio_ToRoute3::
# 1168 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1169 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1170 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToRoute3_Text_0, MSGBOX_YESNO
# 1171 "data//maps/TempCopyMap/scripts.pory"
	release
# 1172 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToRoute3_2
Common_EventScript_Dugtrio_ToRoute3_1:
# 1180 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_Dugtrio_ToRoute3_2:
# 1174 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1175 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1176 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 1177 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1178 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE3_UNDERPASS, 43, 26
	goto Common_EventScript_Dugtrio_ToRoute3_1


Common_EventScript_Dugtrio_ToGalecrest::
# 1184 "data//maps/TempCopyMap/scripts.pory"
	lockall
# 1185 "data//maps/TempCopyMap/scripts.pory"
	faceplayer
# 1186 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Dugtrio_ToGalecrest_Text_0, MSGBOX_YESNO
# 1187 "data//maps/TempCopyMap/scripts.pory"
	release
# 1188 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Dugtrio_ToGalecrest_2
Common_EventScript_Dugtrio_ToGalecrest_1:
# 1196 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_Dugtrio_ToGalecrest_2:
# 1190 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1191 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1192 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_NORMAL
# 1193 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1194 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_GALECREST_CITY, 31, 65
	goto Common_EventScript_Dugtrio_ToGalecrest_1


Common_EventScript_Tauros_IvyRiver::
# 1207 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_IvyRiver_2
# 1215 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_IvyRiver_1:
# 1217 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_IvyRiver_2:
# 1208 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1209 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1210 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_IvyRiver_Text_1, Common_EventScript_Tauros_IvyRiver_Text_2
# 1212 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_IvyRiver_6
Common_EventScript_Tauros_IvyRiver_5:
# 1213 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_IvyRiver_8
	goto Common_EventScript_Tauros_IvyRiver_1

Common_EventScript_Tauros_IvyRiver_6:
# 1212 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_IvyRiver_5

Common_EventScript_Tauros_IvyRiver_8:
# 1213 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	goto Common_EventScript_Tauros_IvyRiver_1


Common_EventScript_Tauros_PellucaCity::
# 1222 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_PellucaCity_2
# 1231 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_PellucaCity_1:
# 1233 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_PellucaCity_2:
# 1223 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1224 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1225 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_2
# 1227 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_PellucaCity_6
Common_EventScript_Tauros_PellucaCity_5:
# 1228 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_PellucaCity_8
	goto Common_EventScript_Tauros_PellucaCity_1

Common_EventScript_Tauros_PellucaCity_6:
# 1227 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_PellucaCity_5

Common_EventScript_Tauros_PellucaCity_8:
# 1228 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	goto Common_EventScript_Tauros_PellucaCity_1


Common_EventScript_Tauros_Route6::
# 1238 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_Route6_2
# 1246 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_Route6_1:
# 1248 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_Route6_2:
# 1239 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1240 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1241 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_PellucaCity_Text_0, Common_EventScript_Tauros_IvyRiver_Text_1
# 1243 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_Route6_6
Common_EventScript_Tauros_Route6_5:
# 1244 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_Route6_8
	goto Common_EventScript_Tauros_Route6_1

Common_EventScript_Tauros_Route6_6:
# 1243 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoIvy
	goto Common_EventScript_Tauros_Route6_5

Common_EventScript_Tauros_Route6_8:
# 1244 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_Route6_1


Common_EventScript_Tauros_Rivetshore::
# 1253 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, Common_EventScript_Tauros_Rivetshore_2
# 1261 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_Tauros_IvyRiver_Text_3, MSGBOX_NPC
Common_EventScript_Tauros_Rivetshore_1:
# 1263 "data//maps/TempCopyMap/scripts.pory"
	release
	end

Common_EventScript_Tauros_Rivetshore_2:
# 1254 "data//maps/TempCopyMap/scripts.pory"
	message Common_EventScript_Tauros_IvyRiver_Text_0
# 1255 "data//maps/TempCopyMap/scripts.pory"
	waitmessage
# 1256 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_Tauros_IvyRiver_Text_1, Common_EventScript_Tauros_IvyRiver_Text_2
# 1258 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Tauros_Rivetshore_6
Common_EventScript_Tauros_Rivetshore_5:
# 1259 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Tauros_Rivetshore_8
	goto Common_EventScript_Tauros_Rivetshore_1

Common_EventScript_Tauros_Rivetshore_6:
# 1258 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoPelluca
	goto Common_EventScript_Tauros_Rivetshore_5

Common_EventScript_Tauros_Rivetshore_8:
# 1259 "data//maps/TempCopyMap/scripts.pory"
	goto Common_EventScript_Tauros_GotoRoute6
	goto Common_EventScript_Tauros_Rivetshore_1


Common_EventScript_Tauros_GotoIvy::
# 1268 "data//maps/TempCopyMap/scripts.pory"
	release
# 1269 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1270 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1271 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1272 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1273 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_IVY_RIVER, 19, 69
	return


Common_EventScript_Tauros_GotoPelluca::
# 1277 "data//maps/TempCopyMap/scripts.pory"
	release
# 1279 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1280 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1281 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1282 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1283 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_PELLUCA_CITY, 10, 33
	return


Common_EventScript_Tauros_GotoRoute6::
# 1287 "data//maps/TempCopyMap/scripts.pory"
	release
# 1289 "data//maps/TempCopyMap/scripts.pory"
	hidefollower
# 1290 "data//maps/TempCopyMap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_EventScript_DrifblimTravels_ToSilversun_Movement_0
# 1291 "data//maps/TempCopyMap/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 1292 "data//maps/TempCopyMap/scripts.pory"
	delay 30
# 1293 "data//maps/TempCopyMap/scripts.pory"
	warp MAP_ROUTE6, 52, 116
	return


# 1096 "data//maps/TempCopyMap/scripts.pory"
Common_EventScript_DrifblimTravels_ToSilversun_Movement_0:
# 1096 "data//maps/TempCopyMap/scripts.pory"
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
	.string "A formidable challenge awaits...$"

Common_EventScript_SaveGameBeforeSomber_Text_0:
# 20 "data//maps/TempCopyMap/scripts.pory"
	.string "Tension fills the air...$"

Common_EventScript_SaveGameBeforeLegendary_Text_0:
# 28 "data//maps/TempCopyMap/scripts.pory"
	.string "A once-in-a-lifetime chance...$"

Common_EventScript_Follower_Cheat_Text_0:
# 42 "data//maps/TempCopyMap/scripts.pory"
	.string "What would you like to do?$"

Common_EventScript_Follower_Cheat_Text_1:
# 45 "data//maps/TempCopyMap/scripts.pory"
	.string "Portable PC$"

Common_EventScript_Follower_Cheat_Text_2:
# 45 "data//maps/TempCopyMap/scripts.pory"
	.string "Team Heal$"

Common_EventScript_Follower_Cheat_Text_3:
# 45 "data//maps/TempCopyMap/scripts.pory"
	.string "Apply Status$"

Common_EventScript_Follower_Cheat_Text_4:
# 45 "data//maps/TempCopyMap/scripts.pory"
	.string "Cancel$"

Common_EventScript_MintVendingMachine_Text_0:
# 124 "data//maps/TempCopyMap/scripts.pory"
	.string "Swipe your Trainer Card?$"

Common_EventScript_MintVendingMachine_Text_1:
# 132 "data//maps/TempCopyMap/scripts.pory"
	.string "You must have at least ¥200 to\n"
	.string "purchase any mints.$"

Mart_Mints_NoBadges_Text_0:
# 175 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 0\n"
	.string "All mints are ¥200.$"

Mart_Mints_NoBadges_Text_1:
# 177 "data//maps/TempCopyMap/scripts.pory"
	.string "Impish Mint$"

Mart_Mints_NoBadges_Text_2:
# 177 "data//maps/TempCopyMap/scripts.pory"
	.string "Calm Mint$"

Mart_Mints_NoBadges_Text_3:
# 177 "data//maps/TempCopyMap/scripts.pory"
	.string "Relaxed Mint$"

Mart_Mints_OneBadge_Text_0:
# 184 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 1\n"
	.string "All mints are ¥200.$"

Mart_Mints_OneBadge_Text_1:
# 187 "data//maps/TempCopyMap/scripts.pory"
	.string "Bold Mint$"

Mart_Mints_OneBadge_Text_2:
# 187 "data//maps/TempCopyMap/scripts.pory"
	.string "Gentle Mint$"

Mart_Mints_OneBadge_Text_3:
# 188 "data//maps/TempCopyMap/scripts.pory"
	.string "Careful Mint$"

Mart_Mints_TwoBadges_Text_0:
# 195 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 2\n"
	.string "All mints are ¥200.$"

Mart_Mints_TwoBadges_Text_1:
# 199 "data//maps/TempCopyMap/scripts.pory"
	.string "Sassy Mint$"

Mart_Mints_TwoBadges_Text_2:
# 199 "data//maps/TempCopyMap/scripts.pory"
	.string "Serious Mint$"

Mart_Mints_TwoBadges_Text_3:
# 199 "data//maps/TempCopyMap/scripts.pory"
	.string "Brave Mint$"

Mart_Mints_ThreeBadges_Text_0:
# 206 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 3\n"
	.string "All mints are ¥200.$"

Mart_Mints_ThreeBadges_Text_1:
# 210 "data//maps/TempCopyMap/scripts.pory"
	.string "Naive Mint$"

Mart_Mints_ThreeBadges_Text_2:
# 211 "data//maps/TempCopyMap/scripts.pory"
	.string "Hasty Mint$"

Mart_Mints_ThreeBadges_Text_3:
# 211 "data//maps/TempCopyMap/scripts.pory"
	.string "Lax Mint$"

Mart_Mints_FourBadges_Text_0:
# 218 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 4\n"
	.string "All mints are ¥200.$"

Mart_Mints_FourBadges_Text_1:
# 223 "data//maps/TempCopyMap/scripts.pory"
	.string "Mild Mint$"

Mart_Mints_FourBadges_Text_2:
# 223 "data//maps/TempCopyMap/scripts.pory"
	.string "Rash Mint$"

Mart_Mints_FourBadges_Text_3:
# 224 "data//maps/TempCopyMap/scripts.pory"
	.string "Timid Mint$"

Mart_Mints_FiveBadges_Text_0:
# 231 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 5\n"
	.string "All mints are ¥200.$"

Mart_Mints_FiveBadges_Text_1:
# 237 "data//maps/TempCopyMap/scripts.pory"
	.string "Naughty Mint$"

Mart_Mints_FiveBadges_Text_2:
# 237 "data//maps/TempCopyMap/scripts.pory"
	.string "Quiet Mint$"

Mart_Mints_FiveBadges_Text_3:
# 237 "data//maps/TempCopyMap/scripts.pory"
	.string "Lonely Mint$"

Mart_Mints_SixBadges_Text_0:
# 244 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}. BADGES: 6\n"
	.string "All mints are ¥200.$"

Mart_Mints_SixBadges_Text_1:
# 250 "data//maps/TempCopyMap/scripts.pory"
	.string "Jolly Mint$"

Mart_Mints_SixBadges_Text_2:
# 251 "data//maps/TempCopyMap/scripts.pory"
	.string "Adamant Mint$"

Mart_Mints_SixBadges_Text_3:
# 251 "data//maps/TempCopyMap/scripts.pory"
	.string "Modest Mint$"

MintPurchase_Common_Text_0:
# 341 "data//maps/TempCopyMap/scripts.pory"
	.string "Confirm purchase?$"

Common_EventScript_NurseJoyOnRoute_Text_0:
# 540 "data//maps/TempCopyMap/scripts.pory"
	.string "Should I heal your Pokémon?\n"
	.string "You can come back later if you wish.$"

Common_EventScript_NurseJoyOnRoute_Text_1:
# 554 "data//maps/TempCopyMap/scripts.pory"
	.string "Let me heal your Pokémon.$"

Common_EventScript_NurseJoyOnRoute_Text_2:
# 557 "data//maps/TempCopyMap/scripts.pory"
	.string "Stay safe out there!$"

Common_EventScript_NurseJoyOnRoute_Text_3:
# 561 "data//maps/TempCopyMap/scripts.pory"
	.string "Come back any time!$"

Common_EventScript_NurseJoyOnRoute_Text_4:
# 567 "data//maps/TempCopyMap/scripts.pory"
	.string "Sorry, you don't have a Heal Pass.\n"
	.string "Please visit a Pokémon Center to\l"
	.string "receive a Heal Pass.$"

Common_EventScript_ChanseyOnRoute_Text_0:
# 577 "data//maps/TempCopyMap/scripts.pory"
	.string "Chansey is happy as always!$"

Route5_Greta_AskToShow_Text_0:
# 607 "data//maps/TempCopyMap/scripts.pory"
	.string "Greta$"

Route5_Greta_AskToShow_Text_1:
# 608 "data//maps/TempCopyMap/scripts.pory"
	.string "Wanna buy anything?$"

Route5_Greta_AskToShow_Text_2:
# 611 "data//maps/TempCopyMap/scripts.pory"
	.string "Bummer!$"

Route5_Greta_ShowItemsForSale_Text_0:
# 620 "data//maps/TempCopyMap/scripts.pory"
	.string "The egg is ¥10,000. The rock is ¥5,000.\n"
	.string "The fish is only ¥100!$"

Route5_Greta_ShowItemsForSale_Text_1:
# 623 "data//maps/TempCopyMap/scripts.pory"
	.string "Strange Egg$"

Route5_Greta_ShowItemsForSale_Text_2:
# 623 "data//maps/TempCopyMap/scripts.pory"
	.string "Mysterious Rock$"

Route5_Greta_ShowItemsForSale_Text_3:
# 623 "data//maps/TempCopyMap/scripts.pory"
	.string "Ugly Fish$"

Route5_Greta_StrangeEgg_Text_0:
# 637 "data//maps/TempCopyMap/scripts.pory"
	.string "Hey! You can't afford this!$"

Route5_Greta_StrangeEgg_Text_1:
# 642 "data//maps/TempCopyMap/scripts.pory"
	.string "A discerning choice! You sure?$"

Route5_Greta_StrangeEgg_Text_2:
# 646 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Strange Egg from\n"
	.string "Greta.$"

Route5_Greta_StrangeEgg_Text_3:
# 649 "data//maps/TempCopyMap/scripts.pory"
	.string "Good doing business with you! Now, what\n"
	.string "about -$"

Route5_Greta_UglyFish_Text_0:
# 666 "data//maps/TempCopyMap/scripts.pory"
	.string "A...budget-friendly choice! You sure?$"

Route5_Greta_UglyFish_Text_1:
# 670 "data//maps/TempCopyMap/scripts.pory"
	.string "{PLAYER} received a Feebas from\n"
	.string "Greta.$"

Route5_Greta_MysteriousRock_Text_0:
# 690 "data//maps/TempCopyMap/scripts.pory"
	.string "A reasonable choice! You sure?$"

PellucaCity_Greta_ShowItemsForSale_Text_0:
# 738 "data//maps/TempCopyMap/scripts.pory"
	.string "You won't find these at the Game\n"
	.string "Corner! For you I can do ¥5200.$"

PellucaCity_Greta_ShowItemsForSale_Text_1:
# 741 "data//maps/TempCopyMap/scripts.pory"
	.string "Dusk Stone$"

PellucaCity_Greta_ShowItemsForSale_Text_2:
# 741 "data//maps/TempCopyMap/scripts.pory"
	.string "Prism Scale$"

PellucaCity_Greta_ShowItemsForSale_Text_3:
# 741 "data//maps/TempCopyMap/scripts.pory"
	.string "Dawn Stone$"

PellucaCity_Greta_Item_A_Text_0:
# 762 "data//maps/TempCopyMap/scripts.pory"
	.string "A dark choice! You sure?$"

PellucaCity_Greta_Item_B_Text_0:
# 788 "data//maps/TempCopyMap/scripts.pory"
	.string "A brilliant choice! You sure?$"

PellucaCity_Greta_Item_C_Text_0:
# 814 "data//maps/TempCopyMap/scripts.pory"
	.string "A cool choice! You sure?$"

AncientStatue_Route1_Text_0:
# 863 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon...$"

AncientStatue_FirstTime_Text_0:
# 934 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a statue of an ancient Pokémon...\p"
	.string "{PLAYER} found {STR_VAR_2} of 10\n"
	.string "statues.\p"
	.string "Scanning the ancient statue\n"
	.string "with the Archaeolens...$"

AncientStatue_FirstTime_Text_1:
# 936 "data//maps/TempCopyMap/scripts.pory"
	.string "Done!$"

Common_EventScript_HyperTrainer_Text_0:
# 955 "data//maps/TempCopyMap/scripts.pory"
	.string "From within the bag, the Rare Shard\n"
	.string "begins to vibrate...\p"
	.string "Take out the Rare Shard from the bag?$"

Common_EventScript_HyperTrainer_Text_1:
# 960 "data//maps/TempCopyMap/scripts.pory"
	.string "The statue begins humming faintly...\p"
	.string "Which Pokémon should hold the Rare\n"
	.string "Shard?$"

Common_EventScript_HyperTrainer_Text_2:
# 970 "data//maps/TempCopyMap/scripts.pory"
	.string "{STR_VAR_1} is absorbing memories\n"
	.string "from the statue...what's it seeing?$"

Common_EventScript_HyperTrainer_Text_3:
# 972 "data//maps/TempCopyMap/scripts.pory"
	.string "HP$"

Common_EventScript_HyperTrainer_Text_4:
# 972 "data//maps/TempCopyMap/scripts.pory"
	.string "Attack$"

Common_EventScript_HyperTrainer_Text_5:
# 972 "data//maps/TempCopyMap/scripts.pory"
	.string "Defence$"

Common_EventScript_HyperTrainer_Text_6:
# 972 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Attack$"

Common_EventScript_HyperTrainer_Text_7:
# 972 "data//maps/TempCopyMap/scripts.pory"
	.string "Special Defence$"

Common_EventScript_HyperTrainer_Text_8:
# 972 "data//maps/TempCopyMap/scripts.pory"
	.string "Speed$"

Common_EventScript_HyperTrainer_Text_9:
# 977 "data//maps/TempCopyMap/scripts.pory"
	.string "{STR_VAR_1} cannot grow any\n"
	.string "stronger in that stat!$"

Common_EventScript_HyperTrainer_Text_10:
# 1042 "data//maps/TempCopyMap/scripts.pory"
	.string "Imbued with the statue's memories,\n"
	.string "{STR_VAR_1} became stronger!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_0:
# 1086 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a Drifblim!$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_1:
# 1090 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards {COLOR BLUE}Silversun City{COLOR DARK_GRAY}. Fly there?$"

Common_EventScript_DrifblimTravels_ToSilversun_Text_2:
# 1102 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim looks dejected...$"

Common_EventScript_DrifblimTravels_ToPelluca_Text_0:
# 1117 "data//maps/TempCopyMap/scripts.pory"
	.string "Drifblim opens a map and gestures\n"
	.string "towards {COLOR BLUE}Pelluca City{COLOR DARK_GRAY}. Fly there?$"

Common_EventScript_DrifblimTravels_All_Text_0:
# 1145 "data//maps/TempCopyMap/scripts.pory"
	.string "It's a Drifblim! Fly somewhere?$"

Common_EventScript_Dugtrio_ToRoute3_Text_0:
# 1170 "data//maps/TempCopyMap/scripts.pory"
	.string "Dugtrio is digging into the ground.\n"
	.string "Follow it?$"

Common_EventScript_Dugtrio_ToGalecrest_Text_0:
# 1186 "data//maps/TempCopyMap/scripts.pory"
	.string "Dugtrio is digging back up to the\n"
	.string "surface. Follow it?$"

Common_EventScript_Tauros_IvyRiver_Text_0:
# 1208 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently.\n"
	.string "Where should Tauros go?$"

Common_EventScript_Tauros_IvyRiver_Text_1:
# 1210 "data//maps/TempCopyMap/scripts.pory"
	.string "{COLOR BLUE}Pelluca City{COLOR DARK_GRAY}$"

Common_EventScript_Tauros_IvyRiver_Text_2:
# 1210 "data//maps/TempCopyMap/scripts.pory"
	.string "Route 6 HQ$"

Common_EventScript_Tauros_IvyRiver_Text_3:
# 1215 "data//maps/TempCopyMap/scripts.pory"
	.string "Tauros is grazing impatiently.$"

Common_EventScript_Tauros_PellucaCity_Text_0:
# 1225 "data//maps/TempCopyMap/scripts.pory"
	.string "{COLOR BLUE}Ivy River{COLOR DARK_GRAY} HQ$"

Common_Text_Greta_Comecome::
# 602 "data//maps/TempCopyMap/scripts.pory"
	.string "Come, come. I've got some great stuff\n"
	.string "from...well, you can't ask a magician to\l"
	.string "reveal her secrets, can you?$"
