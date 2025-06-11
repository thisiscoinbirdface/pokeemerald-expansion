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
# 78 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 1
	goto_if_eq GalecrestCity_HousesRich_NPC5_11
GalecrestCity_HousesRich_NPC5_10:
# 83 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 0
	goto_if_eq GalecrestCity_HousesRich_NPC5_17
GalecrestCity_HousesRich_NPC5_16:
# 90 "data//maps/GalecrestCity_HousesRich/scripts.pory"
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
	msgbox GalecrestCity_HousesRich_NPC5_Text_2
# 69 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
# 70 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	completequest QUEST_GALECREST_PEARLS
# 71 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_3
# 72 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
# 73 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	removemoney 500
# 74 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_4, MSGBOX_SIGN
# 75 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 3
	goto GalecrestCity_HousesRich_NPC5_7

GalecrestCity_HousesRich_NPC5_11:
# 79 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_5
# 80 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
	goto GalecrestCity_HousesRich_NPC5_10

GalecrestCity_HousesRich_NPC5_14:
# 64 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_1, MSGBOX_NPC
	end

GalecrestCity_HousesRich_NPC5_17:
# 84 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_6
# 86 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 1
# 87 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	startquest QUEST_GALECREST_PEARLS
	goto GalecrestCity_HousesRich_NPC5_16


GalecrestCity_HousesRich_NPC6::
# 96 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC6_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_NPC7::
# 102 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC7_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_NPC8::
# 108 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC8_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_NPC9::
# 114 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	goto_if_set FLAG_GALECREST_RICH_HOUSECLEANITEM, GalecrestCity_HousesRich_NPC9_2
# 117 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 118 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 119 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_1, MSGBOX_YESNO
# 120 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_HousesRich_NPC9_6
# 126 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_3, MSGBOX_NPC
GalecrestCity_HousesRich_NPC9_5:
# 128 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
GalecrestCity_HousesRich_NPC9_1:
	end

GalecrestCity_HousesRich_NPC9_2:
# 115 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_0, MSGBOX_NPC
	goto GalecrestCity_HousesRich_NPC9_1

GalecrestCity_HousesRich_NPC9_6:
# 121 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_2
# 122 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 123 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setflag FLAG_GALECREST_RICH_HOUSECLEANITEM
# 124 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_0, MSGBOX_NPC
	goto GalecrestCity_HousesRich_NPC9_5


GalecrestCity_HousesRich_Keckleon::
# 135 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	playmoncry SPECIES_CLAUNCHER, CRY_MODE_NORMAL
# 136 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_Keckleon_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_Wingull::
# 141 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 142 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_Wingull_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesRich_NPC1_Text_0:
# 9 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Our older son was the {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY} during\n"
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
	.string "You're dirtying the floor with your\n"
	.string "dirty shoes!$"

GalecrestCity_HousesRich_NPC5_Text_1:
# 64 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Where are my pearls? Did you sell them?\n"
	.string "I bet you sold them, didn't you, you\l"
	.string "fiend! I'll have the detectives\l"
	.string "investigate this!$"

GalecrestCity_HousesRich_NPC5_Text_2:
# 68 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Ahh my beautiful pearls! Thank you\n"
	.string "child, thank you!$"

GalecrestCity_HousesRich_NPC5_Text_3:
# 71 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "But since you took so much time to find\n"
	.string "the pearls, I'll be taking some money\l"
	.string "from you of course. You stressed me out\l"
	.string "and you've got to make amends!$"

GalecrestCity_HousesRich_NPC5_Text_4:
# 74 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "{PLAYER} gave the rich lady 500.$"

GalecrestCity_HousesRich_NPC5_Text_5:
# 79 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Did you find it yet? No? Well what are\n"
	.string "you standing in here for? Hurry up and\l"
	.string "get my pearls, you slacker!$"

GalecrestCity_HousesRich_NPC5_Text_6:
# 84 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Oh my! I can't find my PEARL anywhere! I\n"
	.string "think someone must've stolen it! You,\l"
	.string "child, you look outdoorsy. Your shoes\l"
	.string "are dirty. Would you be a dear and\l"
	.string "search outside for my pearl?$"

GalecrestCity_HousesRich_NPC6_Text_0:
# 96 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I'm a professional cook. It's\n"
	.string "interesting being able to peek into the\l"
	.string "lives of the super rich...I appreciate my\l"
	.string "family more now.$"

GalecrestCity_HousesRich_NPC7_Text_0:
# 102 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I don't know where Mom and Dad are...I've\n"
	.string "been sitting here waiting for dinner.\p"
	.string "We never eat together.$"

GalecrestCity_HousesRich_NPC8_Text_0:
# 108 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Our daughter grew up and is now the Gym\n"
	.string "Leader of {COLOR BLUE}Pelluca City{COLOR DARK_GRAY}. So we live alone\l"
	.string "in this big house now...$"

GalecrestCity_HousesRich_NPC9_Text_0:
# 115 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "You can find tons of unused equipment\n"
	.string "in our basement - although it's dark, so\l"
	.string "don't bang your toes! Feel free to take\l"
	.string "anything you like.$"

GalecrestCity_HousesRich_NPC9_Text_1:
# 119 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I'm trying to organise my daughter's\n"
	.string "belongings. Are you a Pokémon trainer?$"

GalecrestCity_HousesRich_NPC9_Text_2:
# 121 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "So is my daughter. She used these to\n"
	.string "train her Pokémon. They'll be more\l"
	.string "useful in your hands.$"

GalecrestCity_HousesRich_NPC9_Text_3:
# 126 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Ah, then none of this will be of use to\n"
	.string "you.$"

GalecrestCity_HousesRich_Keckleon_Text_0:
# 136 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Clauncher glares intently at you.$"

GalecrestCity_HousesRich_Wingull_Text_0:
# 142 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Wingull is struggling to stay airborne\n"
	.string "inside such a small space. Perhaps it\l"
	.string "wants to keep its trainer company?$"
