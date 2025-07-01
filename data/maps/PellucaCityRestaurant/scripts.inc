PellucaCityRestaurant_MapScripts::
	.byte 0


PellucaCityRestaurant_NPC1::
# 9 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 10 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 11 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC1_Text_0
# 12 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_NPC2::
# 17 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 18 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 19 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC2_Text_0
# 20 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_NPC3::
# 25 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 26 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 27 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC3_Text_0
# 28 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_NPC4::
# 33 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 34 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 35 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC4_Text_0
# 36 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_NPC5::
# 41 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 42 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 43 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC5_Text_0
# 44 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_NPC6::
# 49 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 50 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 51 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC6_Text_0
# 52 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_NPC7::
# 57 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 58 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 59 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC7_Text_0
# 60 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_NPC8::
# 65 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 66 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 67 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC8_Text_0
# 68 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_Cashier::
# 73 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 74 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 75 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cashier_Text_0
# 76 "data//maps/PellucaCityRestaurant/scripts.pory"
	message PellucaCityRestaurant_Cashier_Text_1
# 77 "data//maps/PellucaCityRestaurant/scripts.pory"
	waitmessage
# 78 "data//maps/PellucaCityRestaurant/scripts.pory"
	pokemart Pelluca_Restaurant_Inventory
# 79 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 80 "data//maps/PellucaCityRestaurant/scripts.pory"
	release
	end


	.align 2
# 84 "data//maps/PellucaCityRestaurant/scripts.pory"
Pelluca_Restaurant_Inventory:
# 85 "data//maps/PellucaCityRestaurant/scripts.pory"
	.2byte ITEM_LEMONADE
# 86 "data//maps/PellucaCityRestaurant/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 87 "data//maps/PellucaCityRestaurant/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 88 "data//maps/PellucaCityRestaurant/scripts.pory"
	.2byte ITEM_TART_APPLE
# 89 "data//maps/PellucaCityRestaurant/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

PellucaCityRestaurant_Cook1::
# 103 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 104 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 105 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook1_Text_0
# 106 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_Cook2::
# 110 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 111 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 112 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook2_Text_0
# 113 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_Cook3::
# 117 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 118 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 120 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_PELLUCA_COOK, 2
	goto_if_eq PellucaCityRestaurant_Cook3_2
PellucaCityRestaurant_Cook3_1:
# 125 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_PELLUCA_COOK, 1
	goto_if_eq PellucaCityRestaurant_Cook3_5
PellucaCityRestaurant_Cook3_4:
# 152 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_PELLUCA_COOK, 0
	goto_if_eq PellucaCityRestaurant_Cook3_8
PellucaCityRestaurant_Cook3_7:
# 174 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end

PellucaCityRestaurant_Cook3_2:
# 121 "data//maps/PellucaCityRestaurant/scripts.pory"
	speakername PellucaCityRestaurant_Cook3_Text_0
# 122 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_1
	goto PellucaCityRestaurant_Cook3_1

PellucaCityRestaurant_Cook3_5:
# 126 "data//maps/PellucaCityRestaurant/scripts.pory"
	speakername PellucaCityRestaurant_Cook3_Text_0
# 127 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_2, MSGBOX_YESNO
# 128 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityRestaurant_Cook3_10
# 147 "data//maps/PellucaCityRestaurant/scripts.pory"
	speakername PellucaCityRestaurant_Cook3_Text_0
# 148 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_7
	goto PellucaCityRestaurant_Cook3_4

PellucaCityRestaurant_Cook3_8:
# 154 "data//maps/PellucaCityRestaurant/scripts.pory"
	delay 24
# 155 "data//maps/PellucaCityRestaurant/scripts.pory"
	applymovement 12, PellucaCityRestaurant_Cook3_Movement_0
# 156 "data//maps/PellucaCityRestaurant/scripts.pory"
	waitmovement 0
# 157 "data//maps/PellucaCityRestaurant/scripts.pory"
	speakername PellucaCityRestaurant_Cook3_Text_0
# 158 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_8, MSGBOX_YESNO
# 159 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityRestaurant_Cook3_13
# 169 "data//maps/PellucaCityRestaurant/scripts.pory"
	speakername PellucaCityRestaurant_Cook3_Text_0
# 170 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_10
	goto PellucaCityRestaurant_Cook3_7

PellucaCityRestaurant_Cook3_10:
# 129 "data//maps/PellucaCityRestaurant/scripts.pory"
	checkitem ITEM_NEVER_MELT_ICE
# 130 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityRestaurant_Cook3_16
# 143 "data//maps/PellucaCityRestaurant/scripts.pory"
	speakername PellucaCityRestaurant_Cook3_Text_0
# 144 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_6
	goto PellucaCityRestaurant_Cook3_4

PellucaCityRestaurant_Cook3_13:
# 161 "data//maps/PellucaCityRestaurant/scripts.pory"
	speakername PellucaCityRestaurant_Cook3_Text_0
# 162 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_9
# 163 "data//maps/PellucaCityRestaurant/scripts.pory"
	release
# 164 "data//maps/PellucaCityRestaurant/scripts.pory"
	setvar VAR_PELLUCA_COOK, 1
# 166 "data//maps/PellucaCityRestaurant/scripts.pory"
	startquest QUEST_PELLUCA_RESTAURANT
	goto PellucaCityRestaurant_Cook3_7

PellucaCityRestaurant_Cook3_16:
# 132 "data//maps/PellucaCityRestaurant/scripts.pory"
	speakername PellucaCityRestaurant_Cook3_Text_0
# 133 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_3
# 134 "data//maps/PellucaCityRestaurant/scripts.pory"
	completequest QUEST_PELLUCA_RESTAURANT
# 135 "data//maps/PellucaCityRestaurant/scripts.pory"
	speakername PellucaCityRestaurant_Cook3_Text_0
# 136 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_4
# 137 "data//maps/PellucaCityRestaurant/scripts.pory"
	release
# 138 "data//maps/PellucaCityRestaurant/scripts.pory"
	givemon SPECIES_APPLIN, 25
# 139 "data//maps/PellucaCityRestaurant/scripts.pory"
	speakername PellucaCityRestaurant_Cook3_Text_0
# 140 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_5
# 141 "data//maps/PellucaCityRestaurant/scripts.pory"
	setvar VAR_PELLUCA_COOK, 2
	goto PellucaCityRestaurant_Cook3_4


PellucaCityRestaurant_Appletun::
# 193 "data//maps/PellucaCityRestaurant/scripts.pory"
	playmoncry SPECIES_APPLETUN, CRY_MODE_NORMAL
# 194 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Appletun_Text_0, MSGBOX_NPC
	end


PellucaCityRestaurant_Dipplin::
# 199 "data//maps/PellucaCityRestaurant/scripts.pory"
	playmoncry SPECIES_DIPPLIN, CRY_MODE_NORMAL
# 200 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Dipplin_Text_0, MSGBOX_NPC
	end


PellucaCityRestaurant_NPC_Trade::
# 228 "data//maps/PellucaCityRestaurant/scripts.pory"
	goto_if_set FLAG_PELLUCA_RESTAURANT_TRADE, PellucaCityRestaurant_NPC_Trade_2
# 234 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 235 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 236 "data//maps/PellucaCityRestaurant/scripts.pory"
	showmonpic SPECIES_TOXEL, 1, 3
# 237 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_1
# 238 "data//maps/PellucaCityRestaurant/scripts.pory"
	release
# 239 "data//maps/PellucaCityRestaurant/scripts.pory"
	hidemonpic
# 240 "data//maps/PellucaCityRestaurant/scripts.pory"
	delay 24
# 241 "data//maps/PellucaCityRestaurant/scripts.pory"
	showmonpic SPECIES_HOUNDOUR, 1, 3
# 242 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_2, MSGBOX_YESNO
# 243 "data//maps/PellucaCityRestaurant/scripts.pory"
	hidemonpic
# 244 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityRestaurant_NPC_Trade_5
# 287 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_6, MSGBOX_NPC
PellucaCityRestaurant_NPC_Trade_4:
	end

PellucaCityRestaurant_NPC_Trade_2:
# 229 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_0, MSGBOX_NPC
	end

PellucaCityRestaurant_NPC_Trade_5:
# 248 "data//maps/PellucaCityRestaurant/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MEOWTH
# 249 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 251 "data//maps/PellucaCityRestaurant/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 252 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 256 "data//maps/PellucaCityRestaurant/scripts.pory"
	special ChoosePartyMon
# 257 "data//maps/PellucaCityRestaurant/scripts.pory"
	waitstate
# 258 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 261 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PellucaCityRestaurant_NPC_Trade_9
# 266 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 267 "data//maps/PellucaCityRestaurant/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 268 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 269 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq PellucaCityRestaurant_NPC_Trade_11
# 282 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_5, MSGBOX_NPC
	goto PellucaCityRestaurant_NPC_Trade_4

PellucaCityRestaurant_NPC_Trade_9:
# 262 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_3, MSGBOX_NPC
	end

PellucaCityRestaurant_NPC_Trade_11:
# 271 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 272 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 273 "data//maps/PellucaCityRestaurant/scripts.pory"
	special CreateInGameTradePokemon
# 274 "data//maps/PellucaCityRestaurant/scripts.pory"
	special DoInGameTradeScene
# 275 "data//maps/PellucaCityRestaurant/scripts.pory"
	waitstate
# 276 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_4
# 277 "data//maps/PellucaCityRestaurant/scripts.pory"
	release
# 278 "data//maps/PellucaCityRestaurant/scripts.pory"
	setflag FLAG_PELLUCA_RESTAURANT_TRADE
	goto PellucaCityRestaurant_NPC_Trade_4


# 155 "data//maps/PellucaCityRestaurant/scripts.pory"
PellucaCityRestaurant_Cook3_Movement_0:
# 155 "data//maps/PellucaCityRestaurant/scripts.pory"
	emote_exclamation_mark
	step_end

PellucaCityRestaurant_NPC1_Text_0:
# 11 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "My daughter only thinks about the\n"
	.string "Pokémon Championship. She doesn't live\l"
	.string "in the moment!$"

PellucaCityRestaurant_NPC2_Text_0:
# 19 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "They're closing down the Mirroh Base\n"
	.string "Camp Gym! If I dont get the badge, how\l"
	.string "will I enter the Pokémon Championship?$"

PellucaCityRestaurant_NPC3_Text_0:
# 27 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I can't choose between the apple pie\n"
	.string "and the apple tart. It's too hard!$"

PellucaCityRestaurant_NPC4_Text_0:
# 35 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "This lady is taking forever to decide...$"

PellucaCityRestaurant_NPC5_Text_0:
# 43 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I hope the Qwilsquad does a better job\n"
	.string "than the mayor...but they're just a\l"
	.string "bunch of mean people with strong\l"
	.string "Pokémon.$"

PellucaCityRestaurant_NPC6_Text_0:
# 51 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Too many customers! Too many orders!\n"
	.string "Without Dipplin to help, I wouldn't be\l"
	.string "able to manage all these tables.$"

PellucaCityRestaurant_NPC7_Text_0:
# 59 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "My Smeargle cannot resist the apple pie\n"
	.string "here! It's because the head chef uses\l"
	.string "rare ingredients from all over Cormoria.\p"
	.string "...\p"
	.string "Where's my Smeargle?\p"
	.string "Fine! I'm the one who cannot resist.\n"
	.string "Happy?$"

PellucaCityRestaurant_NPC8_Text_0:
# 67 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I come every week from the Ranger\n"
	.string "Institute to have a meal here!$"

PellucaCityRestaurant_Cashier_Text_0:
# 75 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Welcome to the Pelluca Restaurant!\n"
	.string "Sorry, we're fully booked out today.$"

PellucaCityRestaurant_Cashier_Text_1:
# 76 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "But you can still order something to\n"
	.string "take away!$"

PellucaCityRestaurant_Cook1_Text_0:
# 105 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Our head chef travels all across\n"
	.string "Cormoria to find the rarest\l"
	.string "ingredients...I wish he'd find a Rotom\l"
	.string "Frost to replace our fridge!$"

PellucaCityRestaurant_Cook2_Text_0:
# 112 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "We specialise in apple-based dishes.\n"
	.string "We spent years crafting our recipes!$"

PellucaCityRestaurant_Cook3_Text_0:
# 121 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Chef$"

PellucaCityRestaurant_Cook3_Text_1:
# 122 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "How's my favourite trainer and Applin\n"
	.string "doing?$"

PellucaCityRestaurant_Cook3_Text_2:
# 127 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Have you brought the Nevermelt Ice?$"

PellucaCityRestaurant_Cook3_Text_3:
# 133 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Wonderful! This will keep our\n"
	.string "ingredients cool until we can fix the\l"
	.string "fridge.$"

PellucaCityRestaurant_Cook3_Text_4:
# 136 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "My friend, you must accept this.$"

PellucaCityRestaurant_Cook3_Text_5:
# 140 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Take good care of our Applin! Maybe I'll\n"
	.string "see the two of you together the next\l"
	.string "time I go ingredient-hunting.$"

PellucaCityRestaurant_Cook3_Text_6:
# 144 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Hmmm, it doesn't seem like you do. Come\n"
	.string "back when you get it from the Mirroh\l"
	.string "Base Camp!$"

PellucaCityRestaurant_Cook3_Text_7:
# 148 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Come back when you get it from the\n"
	.string "Mirroh Base Camp!$"

PellucaCityRestaurant_Cook3_Text_8:
# 158 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Aha! It's my favourite fellow ingredient\n"
	.string "hunter! It's good to have you visit my\l"
	.string "restaurant. Unfortunately today isn't\l"
	.string "a good day...our fridge has broken down!\l"
	.string "We need something else to cool our\l"
	.string "ingredients or they'll go bad.\l"
	.string "Normally I'd fix it myself, but since\l"
	.string "we're booked out, I need to be cooking.\p"
	.string "Would you lend a hand, {PLAYER}?$"

PellucaCityRestaurant_Cook3_Text_9:
# 162 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I knew I could rely on you!\p"
	.string "Some Nevermelt Ice will do the trick.\n"
	.string "You can buy Nevermelt Ice at the Mirroh\l"
	.string "Base Camp. Head northwest from here\l"
	.string "and use the cable car.\p"
	.string "I'll be waiting here!$"

PellucaCityRestaurant_Cook3_Text_10:
# 170 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Oh no! But I understand.\p"
	.string "Take care!$"

PellucaCityRestaurant_Appletun_Text_0:
# 194 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Appletun seems to be wandering around\n"
	.string "aimlessly...is it helping or hindering?$"

PellucaCityRestaurant_Dipplin_Text_0:
# 200 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Dipplin is keeping an eye on the\n"
	.string "customers!$"

PellucaCityRestaurant_NPC_Trade_Text_0:
# 229 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "My sister will be so happy. She's always\n"
	.string "wanted her own Pokémon.$"

PellucaCityRestaurant_NPC_Trade_Text_1:
# 237 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I've never been to Silversun City, but\n"
	.string "I've always wanted to go to catch a\l"
	.string "Toxel. Now I'm too old to travel so far.$"

PellucaCityRestaurant_NPC_Trade_Text_2:
# 242 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "If you have a Toxel, will you trade it\n"
	.string "for my Houndour?$"

PellucaCityRestaurant_NPC_Trade_Text_3:
# 262 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Oh...well, if you change your mind,\n"
	.string "you know where I am!$"

PellucaCityRestaurant_NPC_Trade_Text_4:
# 276 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Thank you! Please take good care of my\n"
	.string "Houndour.$"

PellucaCityRestaurant_NPC_Trade_Text_5:
# 282 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Hey, this isn't a Toxel, you rascal!$"

PellucaCityRestaurant_NPC_Trade_Text_6:
# 287 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "A shame. I can't catch one\n"
	.string "myself at my age.$"
