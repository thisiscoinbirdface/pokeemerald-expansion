GalecrestCity_HousesRich_MapScripts::
	.byte 0


GalecrestCity_HousesRich_NPC1::
# 9 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC1_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_NPC2::
# 15 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC2_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_NPC3::
# 21 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC3_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_NPC4::
# 27 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC4_Text_0, MSGBOX_NPC
# 29 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 3
	goto_if_eq GalecrestCity_HousesRich_NPC4_2
GalecrestCity_HousesRich_NPC4_1:
	end

GalecrestCity_HousesRich_NPC4_2:
# 30 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 31 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 32 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC4_Text_1
# 33 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	giveitem ITEM_DIAMOND
# 34 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 4
# 35 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC4_Text_2, MSGBOX_NPC
	goto GalecrestCity_HousesRich_NPC4_1


GalecrestCity_HousesRich_NPC5::
# 43 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 44 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 52 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 3
	goto_if_eq GalecrestCity_HousesRich_NPC5_2
GalecrestCity_HousesRich_NPC5_1:
# 56 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 4
	goto_if_eq GalecrestCity_HousesRich_NPC5_5
GalecrestCity_HousesRich_NPC5_4:
# 61 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 2
	goto_if_eq GalecrestCity_HousesRich_NPC5_8
GalecrestCity_HousesRich_NPC5_7:
# 86 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 1
	goto_if_eq GalecrestCity_HousesRich_NPC5_11
GalecrestCity_HousesRich_NPC5_10:
# 92 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 0
	goto_if_eq GalecrestCity_HousesRich_NPC5_17
GalecrestCity_HousesRich_NPC5_16:
# 99 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	end

GalecrestCity_HousesRich_NPC5_2:
# 53 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_0
# 54 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
	goto GalecrestCity_HousesRich_NPC5_1

GalecrestCity_HousesRich_NPC5_5:
# 57 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_0
# 58 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
	goto GalecrestCity_HousesRich_NPC5_4

GalecrestCity_HousesRich_NPC5_8:
# 62 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	checkitem ITEM_PEARL_STRING
# 63 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_HousesRich_NPC5_14
# 67 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	removeitem ITEM_PEARL_STRING
# 68 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 69 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	message GalecrestCity_HousesRich_NPC5_Text_2
# 70 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	waitfanfare
# 71 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
# 72 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	delay 8
# 73 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_3
# 74 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
# 75 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	completequest QUEST_GALECREST_PEARLS
# 76 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	delay 8
# 77 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_4
# 78 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
# 79 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	removemoney 500
# 80 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 81 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	message GalecrestCity_HousesRich_NPC5_Text_5
# 82 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	waitfanfare
# 83 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 3
	goto GalecrestCity_HousesRich_NPC5_7

GalecrestCity_HousesRich_NPC5_11:
# 87 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 88 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_6
# 89 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
	goto GalecrestCity_HousesRich_NPC5_10

GalecrestCity_HousesRich_NPC5_14:
# 64 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_1, MSGBOX_NPC
	end

GalecrestCity_HousesRich_NPC5_17:
# 93 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_7
# 95 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 1
# 96 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	startquest QUEST_GALECREST_PEARLS
	goto GalecrestCity_HousesRich_NPC5_16


GalecrestCity_HousesRich_NPC6::
# 105 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC6_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_NPC7::
# 111 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC7_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_NPC8::
# 117 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC8_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_NPC9::
# 123 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	goto_if_set FLAG_GALECREST_RICH_HOUSECLEANITEM, GalecrestCity_HousesRich_NPC9_2
# 126 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 127 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 128 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_1, MSGBOX_YESNO
# 129 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_HousesRich_NPC9_6
# 135 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_4, MSGBOX_NPC
GalecrestCity_HousesRich_NPC9_5:
# 137 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
GalecrestCity_HousesRich_NPC9_1:
	end

GalecrestCity_HousesRich_NPC9_2:
# 124 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_0, MSGBOX_NPC
	goto GalecrestCity_HousesRich_NPC9_1

GalecrestCity_HousesRich_NPC9_6:
# 130 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_2
# 131 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 132 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setflag FLAG_GALECREST_RICH_HOUSECLEANITEM
# 133 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_3, MSGBOX_NPC
	goto GalecrestCity_HousesRich_NPC9_5


GalecrestCity_HousesRich_Keckleon::
# 144 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	playmoncry SPECIES_CLAUNCHER, CRY_MODE_NORMAL
# 145 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_Keckleon_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_Wingull::
# 150 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 151 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_Wingull_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_NPC1_Text_0:
# 9 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Our older son was the Ace Rookie during\n"
	.string "his final year at the Detective\l"
	.string "Academy. He's the pride of the family!$"

GalecrestCity_HousesRich_NPC2_Text_0:
# 15 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I can only hope my younger son takes\n"
	.string "after his brother.$"

GalecrestCity_HousesRich_NPC3_Text_0:
# 21 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "My parents only care about my big\n"
	.string "brother. They're always mean to me!$"

GalecrestCity_HousesRich_NPC4_Text_0:
# 27 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I work so hard and my wife spends all\n"
	.string "the money on jewellery!$"

GalecrestCity_HousesRich_NPC4_Text_1:
# 32 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "You found her pearls, did you? And she\n"
	.string "took your money? Sigh...$"

GalecrestCity_HousesRich_NPC4_Text_2:
# 35 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "A good deed shouldn't go unrewarded.\n"
	.string "But next time, you need to protect and\l"
	.string "stand up for yourself!$"

GalecrestCity_HousesRich_NPC5_Text_0:
# 53 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Get out - you're dirtying the floor with\n"
	.string "your dirty shoes!$"

GalecrestCity_HousesRich_NPC5_Text_1:
# 64 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Where are my pearls? Did you sell them?\n"
	.string "I bet you sold them, didn't you, you\l"
	.string "fiend! I'll have the detectives\l"
	.string "investigate this!$"

GalecrestCity_HousesRich_NPC5_Text_2:
# 69 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "{PLAYER} gave the rich lady\n"
	.string "her Pearl String.$"

GalecrestCity_HousesRich_NPC5_Text_3:
# 73 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "My beautiful pearls! Thank you dear!$"

GalecrestCity_HousesRich_NPC5_Text_4:
# 77 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "But since you took so much time to find\n"
	.string "the pearls, I'll be taking some money\l"
	.string "from you of course. You stressed me out\l"
	.string "and you've got to make amends!$"

GalecrestCity_HousesRich_NPC5_Text_5:
# 81 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "{PLAYER} gave the rich lady ¥500.$"

GalecrestCity_HousesRich_NPC5_Text_6:
# 88 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Did you find my pearls yet?\p"
	.string "No?\p"
	.string "Well what are you standing here for?\n"
	.string "Hurry up and get my pearls back!$"

GalecrestCity_HousesRich_NPC5_Text_7:
# 93 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Oh my! I can't find my pearls anywhere!\n"
	.string "I think someone must've stolen it!\l"
	.string "You, child, you look outdoorsy. Your\l"
	.string "shoes are dirty. Would you be a dear and\l"
	.string "search outside for my pearl?$"

GalecrestCity_HousesRich_NPC6_Text_0:
# 105 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I'm a private cook. It's interesting to\n"
	.string "peek into the lives of the super rich...\l"
	.string "I appreciate my family more now.$"

GalecrestCity_HousesRich_NPC7_Text_0:
# 111 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I don't know where Mom and Dad are...\n"
	.string "I've been sitting here waiting for them.\p"
	.string "We never eat together.$"

GalecrestCity_HousesRich_NPC8_Text_0:
# 117 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Our daughter grew up and is now the\n"
	.string "Gym Leader of Pelluca City!\l"
	.string "We live alone in this big house now...$"

GalecrestCity_HousesRich_NPC9_Text_0:
# 124 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "You can find tons of unused equipment\n"
	.string "in our basement - although it's dark,\l"
	.string "so try not to bang your toes!\l"
	.string "Feel free to take anything you like.$"

GalecrestCity_HousesRich_NPC9_Text_1:
# 128 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I'm trying to organise my daughter's\n"
	.string "belongings. Are you a Pokémon trainer?$"

GalecrestCity_HousesRich_NPC9_Text_2:
# 130 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "So is my daughter. She used to give this\n"
	.string "to her Pokémon.\n"
	.string "It'll be more useful in your hands.$"

GalecrestCity_HousesRich_NPC9_Text_3:
# 133 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "You can find tons of unused equipment\n"
	.string "in our basement - although it's dark, so\l"
	.string "don't bang your toes! Feel free to take\l"
	.string "anything you like.$"

GalecrestCity_HousesRich_NPC9_Text_4:
# 135 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Ah, then this won't be of use to you.$"

GalecrestCity_HousesRich_Keckleon_Text_0:
# 145 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Clauncher glares intently at you.$"

GalecrestCity_HousesRich_Wingull_Text_0:
# 151 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Wingull is struggling to stay airborne\n"
	.string "inside such a small space. Perhaps it\l"
	.string "wants to keep its trainer company?$"
