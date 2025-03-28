TempCopyMap_MapScripts::
	.byte 0


Common_EventScript_MintVendingMachine::
# 6 "data//maps/TempCopyMap/scripts.pory"
	msgbox Common_EventScript_MintVendingMachine_Text_0, MSGBOX_YESNO
# 7 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_MintVendingMachine_2
# 9 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Common_EventScript_MintVendingMachine_5
# 12 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Common_EventScript_MintVendingMachine_8
# 15 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Common_EventScript_MintVendingMachine_11
# 18 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Common_EventScript_MintVendingMachine_14
# 21 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MintVendingMachine_17
# 24 "data//maps/TempCopyMap/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Common_EventScript_MintVendingMachine_20
# 27 "data//maps/TempCopyMap/scripts.pory"
	goto Mart_Mints_NoBadges
Common_EventScript_MintVendingMachine_4:
# 35 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end

Common_EventScript_MintVendingMachine_2:
	end

Common_EventScript_MintVendingMachine_5:
# 10 "data//maps/TempCopyMap/scripts.pory"
	pokemart Mart_Mints_SixBadges
	goto Common_EventScript_MintVendingMachine_4

Common_EventScript_MintVendingMachine_8:
# 13 "data//maps/TempCopyMap/scripts.pory"
	pokemart Mart_Mints_FiveBadges
	goto Common_EventScript_MintVendingMachine_4

Common_EventScript_MintVendingMachine_11:
# 16 "data//maps/TempCopyMap/scripts.pory"
	pokemart Mart_Mints_FourBadges
	goto Common_EventScript_MintVendingMachine_4

Common_EventScript_MintVendingMachine_14:
# 19 "data//maps/TempCopyMap/scripts.pory"
	pokemart Mart_Mints_ThreeBadges
	goto Common_EventScript_MintVendingMachine_4

Common_EventScript_MintVendingMachine_17:
# 22 "data//maps/TempCopyMap/scripts.pory"
	pokemart Mart_Mints_TwoBadges
	goto Common_EventScript_MintVendingMachine_4

Common_EventScript_MintVendingMachine_20:
# 25 "data//maps/TempCopyMap/scripts.pory"
	pokemart Mart_Mints_OneBadge
	goto Common_EventScript_MintVendingMachine_4


Mart_Mints_NoBadges::
# 42 "data//maps/TempCopyMap/scripts.pory"
	showmoneybox 18, 0
# 43 "data//maps/TempCopyMap/scripts.pory"
	msgbox Mart_Mints_NoBadges_Text_0
# 45 "data//maps/TempCopyMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 21, 0, DYN_MULTICHOICE_CB_NONE, Mart_Mints_NoBadges_Text_1, Mart_Mints_NoBadges_Text_2, Mart_Mints_NoBadges_Text_3, Mart_Mints_NoBadges_Text_4, Mart_Mints_NoBadges_Text_5, Mart_Mints_NoBadges_Text_6, Mart_Mints_NoBadges_Text_7, Mart_Mints_NoBadges_Text_8, Mart_Mints_NoBadges_Text_9, Mart_Mints_NoBadges_Text_10, Mart_Mints_NoBadges_Text_11, Mart_Mints_NoBadges_Text_12, Mart_Mints_NoBadges_Text_13, Mart_Mints_NoBadges_Text_14, Mart_Mints_NoBadges_Text_15, Mart_Mints_NoBadges_Text_16, Mart_Mints_NoBadges_Text_17, Mart_Mints_NoBadges_Text_18, Mart_Mints_NoBadges_Text_19, Mart_Mints_NoBadges_Text_20, Mart_Mints_NoBadges_Text_21
# 51 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_Mints_NoBadges_2
Mart_Mints_NoBadges_1:
# 52 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_Mints_NoBadges_5
Mart_Mints_NoBadges_4:
# 53 "data//maps/TempCopyMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_Mints_NoBadges_7
	return

Mart_Mints_NoBadges_2:
# 51 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Impish
	goto Mart_Mints_NoBadges_1

Mart_Mints_NoBadges_5:
# 52 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Impish
	goto Mart_Mints_NoBadges_4

Mart_Mints_NoBadges_7:
# 53 "data//maps/TempCopyMap/scripts.pory"
	goto MintPurchase_Impish
	return


	.align 2
# 64 "data//maps/TempCopyMap/scripts.pory"
Mart_Mints_OneBadge:
# 65 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 66 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CALM_MINT
# 67 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 68 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 69 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 70 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_NONE

	.align 2
# 73 "data//maps/TempCopyMap/scripts.pory"
Mart_Mints_TwoBadges:
# 74 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 75 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CALM_MINT
# 76 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 77 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 78 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 79 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 80 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 81 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 82 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_NONE

	.align 2
# 85 "data//maps/TempCopyMap/scripts.pory"
Mart_Mints_ThreeBadges:
# 86 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 87 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CALM_MINT
# 88 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 89 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 90 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 91 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 92 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 93 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 94 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 95 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 96 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 97 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_NONE

	.align 2
# 100 "data//maps/TempCopyMap/scripts.pory"
Mart_Mints_FourBadges:
# 101 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 102 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CALM_MINT
# 103 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 104 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 105 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 106 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 107 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 108 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 109 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 110 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 111 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 112 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 113 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 114 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_MILD_MINT
# 115 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_RASH_MINT
	.2byte ITEM_NONE

	.align 2
# 117 "data//maps/TempCopyMap/scripts.pory"
Mart_Mints_FiveBadges:
# 118 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 119 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CALM_MINT
# 120 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 121 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 122 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 123 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 124 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 125 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 126 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 127 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 128 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 129 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 130 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 131 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_MILD_MINT
# 132 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_RASH_MINT
# 133 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 134 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_LAX_MINT
# 135 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_NONE

	.align 2
# 138 "data//maps/TempCopyMap/scripts.pory"
Mart_Mints_SixBadges:
# 139 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 140 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CALM_MINT
# 141 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 142 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 143 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 144 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 145 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 146 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 147 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 148 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 149 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 150 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 151 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 152 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_MILD_MINT
# 153 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_RASH_MINT
# 154 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 155 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_LAX_MINT
# 156 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 157 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 158 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 159 "data//maps/TempCopyMap/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

MintPurchase_Impish::
# 189 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 190 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 191 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_IMPISH_MINT
# 192 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Calm::
# 197 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 198 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 199 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CALM_MINT
# 200 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Relaxed::
# 205 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 206 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 207 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_RELAXED_MINT
# 208 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Modest::
# 213 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 214 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 215 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MODEST_MINT
# 216 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Gentle::
# 221 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 222 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 223 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_GENTLE_MINT
# 224 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Careful::
# 229 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 230 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 231 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_CAREFUL_MINT
# 232 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Sassy::
# 237 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 238 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 239 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SASSY_MINT
# 240 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Naughty::
# 245 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 246 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 247 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT
# 248 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Timid::
# 253 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 254 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 255 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_TIMID_MINT
# 256 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Hasty::
# 261 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 262 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 263 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_HASTY_MINT
# 264 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Brave::
# 269 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 270 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 271 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BRAVE_MINT
# 272 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Bold::
# 277 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 278 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 279 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_BOLD_MINT
# 280 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Adamant::
# 285 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 286 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 287 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
# 288 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Mild::
# 293 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 294 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 295 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 296 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Rash::
# 301 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 302 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 303 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_MILD_MINT
# 304 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Naive::
# 309 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 310 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 311 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_NAIVE_MINT
# 312 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Lax::
# 317 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 318 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 319 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LAX_MINT
# 320 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Lonely::
# 325 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 326 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 327 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_LONELY_MINT
# 328 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Quiet::
# 333 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 334 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 335 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_QUIET_MINT
# 336 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Jolly::
# 341 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 342 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 343 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_JOLLY_MINT
# 344 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


MintPurchase_Serious::
# 349 "data//maps/TempCopyMap/scripts.pory"
	hidemoneybox
# 350 "data//maps/TempCopyMap/scripts.pory"
	removemoney 200
# 351 "data//maps/TempCopyMap/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 352 "data//maps/TempCopyMap/scripts.pory"
	releaseall
	end


Common_EventScript_MintVendingMachine_Text_0:
# 6 "data//maps/TempCopyMap/scripts.pory"
	.string "There's a slot to swipe your TRAINER\n"
	.string "CARD. Swipe?$"

Mart_Mints_NoBadges_Text_0:
# 43 "data//maps/TempCopyMap/scripts.pory"
	.string "TRAINER: {PLAYER}\n"
	.string "BADGES: 0\p"
	.string "All mints are 200. Which one would you\n"
	.string "like to purchase?$"

Mart_Mints_NoBadges_Text_1:
# 46 "data//maps/TempCopyMap/scripts.pory"
	.string "Impish Mint$"

Mart_Mints_NoBadges_Text_2:
# 46 "data//maps/TempCopyMap/scripts.pory"
	.string "Calm Mint$"

Mart_Mints_NoBadges_Text_3:
# 46 "data//maps/TempCopyMap/scripts.pory"
	.string "Relaxed Mint$"

Mart_Mints_NoBadges_Text_4:
# 46 "data//maps/TempCopyMap/scripts.pory"
	.string "Modest Mint$"

Mart_Mints_NoBadges_Text_5:
# 46 "data//maps/TempCopyMap/scripts.pory"
	.string "Gentle Mint$"

Mart_Mints_NoBadges_Text_6:
# 47 "data//maps/TempCopyMap/scripts.pory"
	.string "Careful Mint$"

Mart_Mints_NoBadges_Text_7:
# 47 "data//maps/TempCopyMap/scripts.pory"
	.string "Sassy Mint$"

Mart_Mints_NoBadges_Text_8:
# 47 "data//maps/TempCopyMap/scripts.pory"
	.string "Naughty Mint$"

Mart_Mints_NoBadges_Text_9:
# 47 "data//maps/TempCopyMap/scripts.pory"
	.string "Timid Mint$"

Mart_Mints_NoBadges_Text_10:
# 47 "data//maps/TempCopyMap/scripts.pory"
	.string "Hasty Mint$"

Mart_Mints_NoBadges_Text_11:
# 48 "data//maps/TempCopyMap/scripts.pory"
	.string "Brave Mint$"

Mart_Mints_NoBadges_Text_12:
# 48 "data//maps/TempCopyMap/scripts.pory"
	.string "Bold Mint$"

Mart_Mints_NoBadges_Text_13:
# 48 "data//maps/TempCopyMap/scripts.pory"
	.string "Adamant Mint$"

Mart_Mints_NoBadges_Text_14:
# 48 "data//maps/TempCopyMap/scripts.pory"
	.string "Mild Mint$"

Mart_Mints_NoBadges_Text_15:
# 48 "data//maps/TempCopyMap/scripts.pory"
	.string "Rash Mint$"

Mart_Mints_NoBadges_Text_16:
# 49 "data//maps/TempCopyMap/scripts.pory"
	.string "Naive Mint$"

Mart_Mints_NoBadges_Text_17:
# 49 "data//maps/TempCopyMap/scripts.pory"
	.string "Lax Mint$"

Mart_Mints_NoBadges_Text_18:
# 49 "data//maps/TempCopyMap/scripts.pory"
	.string "Quiet Mint$"

Mart_Mints_NoBadges_Text_19:
# 49 "data//maps/TempCopyMap/scripts.pory"
	.string "Lonely Mint$"

Mart_Mints_NoBadges_Text_20:
# 49 "data//maps/TempCopyMap/scripts.pory"
	.string "Jolly Mint$"

Mart_Mints_NoBadges_Text_21:
# 50 "data//maps/TempCopyMap/scripts.pory"
	.string "Serious Mint$"
