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


PellucaCityRestaurant_NPC9::
# 73 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 74 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 75 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC9_Text_0
# 76 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_Cook1::
# 92 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 93 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 94 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook1_Text_0
# 95 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_Cook2::
# 99 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 100 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 101 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook2_Text_0
# 102 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end


PellucaCityRestaurant_Cook3::
# 106 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 107 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 109 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_PELLUCA_COOK, 2
	goto_if_eq PellucaCityRestaurant_Cook3_2
PellucaCityRestaurant_Cook3_1:
# 113 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_PELLUCA_COOK, 1
	goto_if_eq PellucaCityRestaurant_Cook3_5
PellucaCityRestaurant_Cook3_4:
# 134 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_PELLUCA_COOK, 0
	goto_if_eq PellucaCityRestaurant_Cook3_8
PellucaCityRestaurant_Cook3_7:
# 156 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end

PellucaCityRestaurant_Cook3_2:
# 110 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_0
	goto PellucaCityRestaurant_Cook3_1

PellucaCityRestaurant_Cook3_5:
# 114 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_1, MSGBOX_YESNO
# 115 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityRestaurant_Cook3_10
# 130 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_6
	goto PellucaCityRestaurant_Cook3_4

PellucaCityRestaurant_Cook3_8:
# 136 "data//maps/PellucaCityRestaurant/scripts.pory"
	delay 24
# 137 "data//maps/PellucaCityRestaurant/scripts.pory"
	applymovement 12, PellucaCityRestaurant_Cook3_Movement_0
# 138 "data//maps/PellucaCityRestaurant/scripts.pory"
	waitmovement 0
# 139 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_7, MSGBOX_YESNO
# 140 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityRestaurant_Cook3_13
# 152 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_10
	goto PellucaCityRestaurant_Cook3_7

PellucaCityRestaurant_Cook3_10:
# 116 "data//maps/PellucaCityRestaurant/scripts.pory"
	checkitem ITEM_NEVER_MELT_ICE
# 117 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityRestaurant_Cook3_16
# 127 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_5
	goto PellucaCityRestaurant_Cook3_4

PellucaCityRestaurant_Cook3_13:
# 142 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_8
# 143 "data//maps/PellucaCityRestaurant/scripts.pory"
	release
# 144 "data//maps/PellucaCityRestaurant/scripts.pory"
	giveitem ITEM_CABLECAR_PASS
# 145 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_9
# 146 "data//maps/PellucaCityRestaurant/scripts.pory"
	release
# 147 "data//maps/PellucaCityRestaurant/scripts.pory"
	setvar VAR_PELLUCA_COOK, 1
# 149 "data//maps/PellucaCityRestaurant/scripts.pory"
	startquest QUEST_PELLUCA_RESTAURANT
	goto PellucaCityRestaurant_Cook3_7

PellucaCityRestaurant_Cook3_16:
# 119 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_2
# 120 "data//maps/PellucaCityRestaurant/scripts.pory"
	completequest QUEST_PELLUCA_RESTAURANT
# 121 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_3
# 122 "data//maps/PellucaCityRestaurant/scripts.pory"
	release
# 123 "data//maps/PellucaCityRestaurant/scripts.pory"
	givemon SPECIES_APPLIN, 25
# 124 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Cook3_Text_4
# 125 "data//maps/PellucaCityRestaurant/scripts.pory"
	setvar VAR_PELLUCA_COOK, 2
	goto PellucaCityRestaurant_Cook3_4


PellucaCityRestaurant_Appletun::
# 175 "data//maps/PellucaCityRestaurant/scripts.pory"
	playmoncry SPECIES_APPLETUN, CRY_MODE_NORMAL
# 176 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Appletun_Text_0, MSGBOX_NPC
	end


PellucaCityRestaurant_Dipplin::
# 181 "data//maps/PellucaCityRestaurant/scripts.pory"
	playmoncry SPECIES_DIPPLIN, CRY_MODE_NORMAL
# 182 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_Dipplin_Text_0, MSGBOX_NPC
	end


PellucaCityRestaurant_NPC_Trade::
# 210 "data//maps/PellucaCityRestaurant/scripts.pory"
	goto_if_set FLAG_PELLUCA_RESTAURANT_TRADE, PellucaCityRestaurant_NPC_Trade_2
# 216 "data//maps/PellucaCityRestaurant/scripts.pory"
	lockall
# 217 "data//maps/PellucaCityRestaurant/scripts.pory"
	faceplayer
# 218 "data//maps/PellucaCityRestaurant/scripts.pory"
	showmonpic SPECIES_TOXEL, 1, 3
# 219 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_1
# 220 "data//maps/PellucaCityRestaurant/scripts.pory"
	release
# 221 "data//maps/PellucaCityRestaurant/scripts.pory"
	hidemonpic
# 222 "data//maps/PellucaCityRestaurant/scripts.pory"
	delay 24
# 223 "data//maps/PellucaCityRestaurant/scripts.pory"
	showmonpic SPECIES_HOUNDOUR, 1, 3
# 224 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_2, MSGBOX_YESNO
# 225 "data//maps/PellucaCityRestaurant/scripts.pory"
	hidemonpic
# 226 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityRestaurant_NPC_Trade_5
# 270 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_6, MSGBOX_NPC
PellucaCityRestaurant_NPC_Trade_4:
	end

PellucaCityRestaurant_NPC_Trade_2:
# 211 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_0, MSGBOX_NPC
	end

PellucaCityRestaurant_NPC_Trade_5:
# 230 "data//maps/PellucaCityRestaurant/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MEOWTH
# 231 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 233 "data//maps/PellucaCityRestaurant/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 234 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 238 "data//maps/PellucaCityRestaurant/scripts.pory"
	special ChoosePartyMon
# 239 "data//maps/PellucaCityRestaurant/scripts.pory"
	waitstate
# 240 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 243 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PellucaCityRestaurant_NPC_Trade_9
# 249 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 250 "data//maps/PellucaCityRestaurant/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 251 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 252 "data//maps/PellucaCityRestaurant/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq PellucaCityRestaurant_NPC_Trade_11
# 265 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_5, MSGBOX_NPC
	goto PellucaCityRestaurant_NPC_Trade_4

PellucaCityRestaurant_NPC_Trade_9:
# 244 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_3
# 245 "data//maps/PellucaCityRestaurant/scripts.pory"
	releaseall
	end

PellucaCityRestaurant_NPC_Trade_11:
# 254 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 255 "data//maps/PellucaCityRestaurant/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 256 "data//maps/PellucaCityRestaurant/scripts.pory"
	special CreateInGameTradePokemon
# 257 "data//maps/PellucaCityRestaurant/scripts.pory"
	special DoInGameTradeScene
# 258 "data//maps/PellucaCityRestaurant/scripts.pory"
	waitstate
# 259 "data//maps/PellucaCityRestaurant/scripts.pory"
	msgbox PellucaCityRestaurant_NPC_Trade_Text_4
# 260 "data//maps/PellucaCityRestaurant/scripts.pory"
	release
# 261 "data//maps/PellucaCityRestaurant/scripts.pory"
	setflag FLAG_PELLUCA_RESTAURANT_TRADE
	goto PellucaCityRestaurant_NPC_Trade_4


# 137 "data//maps/PellucaCityRestaurant/scripts.pory"
PellucaCityRestaurant_Cook3_Movement_0:
# 137 "data//maps/PellucaCityRestaurant/scripts.pory"
	emote_exclamation_mark
	step_end

PellucaCityRestaurant_NPC1_Text_0:
# 11 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I reconnected with my daughter after\n"
	.string "many years. What do I say to her?$"

PellucaCityRestaurant_NPC2_Text_0:
# 19 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I'm seeing my dad after a long time. It's\n"
	.string "awkward.$"

PellucaCityRestaurant_NPC3_Text_0:
# 27 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I can't choose between the apple pie\n"
	.string "and the apple tart. What should I\l"
	.string "choose?$"

PellucaCityRestaurant_NPC4_Text_0:
# 35 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "This lady is taking forever to decide...$"

PellucaCityRestaurant_NPC5_Text_0:
# 43 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Apparently the staff here all have\n"
	.string "Pokémon from the Applin family to help\l"
	.string "them!$"

PellucaCityRestaurant_NPC6_Text_0:
# 51 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Too many customers! Too many orders!\n"
	.string "Without Dipplin to help, I wouldn't be\l"
	.string "able to manage all these tables.$"

PellucaCityRestaurant_NPC7_Text_0:
# 59 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "My Smeargle cannot resist the apple pie\n"
	.string "here! It's because the head chef uses\l"
	.string "rare ingredients from all over Cormoria.$"

PellucaCityRestaurant_NPC8_Text_0:
# 67 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I come every week from the Ranger\n"
	.string "Institute to have a meal here!$"

PellucaCityRestaurant_NPC9_Text_0:
# 75 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Welcome to the Pelluca Restaurant!\n"
	.string "Unfortunately we're fully booked out\l"
	.string "today.$"

PellucaCityRestaurant_Cook1_Text_0:
# 94 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Our head chef travels all across\n"
	.string "Cormoria to find the rarest\l"
	.string "ingredients...I wish he'd find a Rotom\l"
	.string "Frost to replace our fridge!$"

PellucaCityRestaurant_Cook2_Text_0:
# 101 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Our specialties are our apple-based\n"
	.string "dishes. We spent years crafting our\l"
	.string "recipes!$"

PellucaCityRestaurant_Cook3_Text_0:
# 110 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "How's my favourite trainer and Applin\n"
	.string "doing?$"

PellucaCityRestaurant_Cook3_Text_1:
# 114 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Have you brought the Nevermelt Ice?$"

PellucaCityRestaurant_Cook3_Text_2:
# 119 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Wonderful! This will keep our\n"
	.string "ingredients cool until we can fix the\l"
	.string "fridge.$"

PellucaCityRestaurant_Cook3_Text_3:
# 121 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "My friend, you must accept this.$"

PellucaCityRestaurant_Cook3_Text_4:
# 124 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Take good care of our Applin! Maybe I'll\n"
	.string "see the two of you together the next\l"
	.string "time I go ingredient-hunting.$"

PellucaCityRestaurant_Cook3_Text_5:
# 127 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Hmmm, it doesn't seem like you do. Come\n"
	.string "back when you get it from the Mirroh\l"
	.string "Base Camp!$"

PellucaCityRestaurant_Cook3_Text_6:
# 130 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Come back when you get it from the\n"
	.string "Mirroh Base Camp!$"

PellucaCityRestaurant_Cook3_Text_7:
# 139 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Aha! Why hello there my fellow\n"
	.string "ingredient hunter! It's good to have\l"
	.string "you visit my restaurant. Unfortunately\l"
	.string "today isn't a good day...our fridge has\l"
	.string "broken down! We need something else to\l"
	.string "cool our ingredients or they'll go bad.\l"
	.string "Normally I'd fix it myself, but since\l"
	.string "we're booked out, I need to be cooking.\l"
	.string "Would you be willing to lend a hand,\l"
	.string "{PLAYER}?$"

PellucaCityRestaurant_Cook3_Text_8:
# 142 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I knew I could rely on you!\p"
	.string "Some Nevermelt Ice will do the trick.\n"
	.string "You can buy Nevermelt Ice at the Mirroh\l"
	.string "Base Camp. Head northwest from here\l"
	.string "and use the cable car. You'll need a\l"
	.string "pass, so take this with you.$"

PellucaCityRestaurant_Cook3_Text_9:
# 145 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I'll be waiting here!$"

PellucaCityRestaurant_Cook3_Text_10:
# 152 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Oh no! But I understand. You must be\n"
	.string "busy.$"

PellucaCityRestaurant_Appletun_Text_0:
# 176 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Appletun seems to be wandering around\n"
	.string "aimlessly...is it helping or hindering?$"

PellucaCityRestaurant_Dipplin_Text_0:
# 182 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Dipplin is keeping an eye on the\n"
	.string "customers!$"

PellucaCityRestaurant_NPC_Trade_Text_0:
# 211 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "My sister will be so happy. She's always\n"
	.string "wanted her own Pokémon.$"

PellucaCityRestaurant_NPC_Trade_Text_1:
# 219 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "I've never been to Silversun City, but\n"
	.string "I've always wanted to go to catch a\l"
	.string "Toxel. Now I'm too old to travel so far.$"

PellucaCityRestaurant_NPC_Trade_Text_2:
# 224 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "If you have a Toxel, will you trade it\n"
	.string "for my Houndour?$"

PellucaCityRestaurant_NPC_Trade_Text_3:
# 244 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "If you have one, will you trade it for my\n"
	.string "Houndour?$"

PellucaCityRestaurant_NPC_Trade_Text_4:
# 259 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Thank you! Please take good care of my\n"
	.string "Houndour.$"

PellucaCityRestaurant_NPC_Trade_Text_5:
# 265 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Hey, this isn't a Toxel! I'm not stupid,\n"
	.string "you know?$"

PellucaCityRestaurant_NPC_Trade_Text_6:
# 270 "data//maps/PellucaCityRestaurant/scripts.pory"
	.string "Oh...well, if you change your mind, you\n"
	.string "know where I am!$"
