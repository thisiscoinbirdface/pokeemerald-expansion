GalecrestCity_HousesRich_MapScripts::
	.byte 0


GalecrestCity_HousesRich_NPC1::
# 9 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 10 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 11 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC1_Text_0
# 12 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	end


GalecrestCity_HousesRich_NPC2::
# 18 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 19 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 20 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC2_Text_0
# 21 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	end


GalecrestCity_HousesRich_NPC3::
# 27 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 28 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 29 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC3_Text_0
# 30 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC4::
# 35 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 36 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 37 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC4_Text_0
# 38 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
# 40 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 3
	goto_if_eq GalecrestCity_HousesRich_NPC4_2
GalecrestCity_HousesRich_NPC4_1:
# 46 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return

GalecrestCity_HousesRich_NPC4_2:
# 41 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC4_Text_1
# 42 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 43 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 4
# 44 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC4_Text_2
	goto GalecrestCity_HousesRich_NPC4_1


GalecrestCity_HousesRich_NPC5::
# 51 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 52 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 60 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 3
	goto_if_eq GalecrestCity_HousesRich_NPC5_2
GalecrestCity_HousesRich_NPC5_1:
# 64 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 4
	goto_if_eq GalecrestCity_HousesRich_NPC5_5
GalecrestCity_HousesRich_NPC5_4:
# 69 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 2
	goto_if_eq GalecrestCity_HousesRich_NPC5_8
GalecrestCity_HousesRich_NPC5_7:
# 80 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 1
	goto_if_eq GalecrestCity_HousesRich_NPC5_11
GalecrestCity_HousesRich_NPC5_10:
# 85 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 0
	goto_if_eq GalecrestCity_HousesRich_NPC5_14
GalecrestCity_HousesRich_NPC5_13:
# 92 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return

GalecrestCity_HousesRich_NPC5_2:
# 61 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_0
# 62 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
	goto GalecrestCity_HousesRich_NPC5_1

GalecrestCity_HousesRich_NPC5_5:
# 65 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_0
# 66 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
	goto GalecrestCity_HousesRich_NPC5_4

GalecrestCity_HousesRich_NPC5_8:
# 70 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_1
# 71 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
# 72 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	completequest QUEST_GALECREST_PEARLS
# 73 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_2
# 74 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
# 75 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	removemoney 500
# 76 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_3, MSGBOX_SIGN
# 77 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 3
	goto GalecrestCity_HousesRich_NPC5_7

GalecrestCity_HousesRich_NPC5_11:
# 81 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_4
# 82 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
	goto GalecrestCity_HousesRich_NPC5_10

GalecrestCity_HousesRich_NPC5_14:
# 86 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_5
# 88 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 1
# 89 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	startquest QUEST_GALECREST_PEARLS
	goto GalecrestCity_HousesRich_NPC5_13


GalecrestCity_HousesRich_NPC6::
# 97 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 98 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 99 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC6_Text_0
# 100 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC7::
# 105 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 106 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 107 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC7_Text_0
# 108 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC8::
# 113 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 114 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 115 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC8_Text_0
# 116 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC9::
# 121 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 122 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 124 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	goto_if_set FLAG_GALECREST_RICH_HOUSECLEANITEM, GalecrestCity_HousesRich_NPC9_2
# 127 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_1, MSGBOX_YESNO
# 128 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_HousesRich_NPC9_5
# 134 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_3
GalecrestCity_HousesRich_NPC9_1:
# 137 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	end

GalecrestCity_HousesRich_NPC9_2:
# 125 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_0
	goto GalecrestCity_HousesRich_NPC9_1

GalecrestCity_HousesRich_NPC9_5:
# 129 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_2
# 130 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 131 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setflag FLAG_GALECREST_RICH_HOUSECLEANITEM
# 132 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_0
	goto GalecrestCity_HousesRich_NPC9_1


GalecrestCity_HousesRich_Keckleon::
# 143 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 144 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 145 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	playmoncry SPECIES_GLALIE, CRY_MODE_NORMAL
# 146 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_Keckleon_Text_0
# 147 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC1_Text_0:
# 11 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Our older son has joined the Detective\n"
	.string "Academy. He's the pride of the family!$"

GalecrestCity_HousesRich_NPC2_Text_0:
# 20 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I can only hope my younger son takes\n"
	.string "after his brother.$"

GalecrestCity_HousesRich_NPC3_Text_0:
# 29 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "My parents only care about big bro.\n"
	.string "They're always mean to me!$"

GalecrestCity_HousesRich_NPC4_Text_0:
# 37 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I work so hard and my wife spends all\n"
	.string "the money on jewellery!$"

GalecrestCity_HousesRich_NPC4_Text_1:
# 41 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "You found her pearls, did you? And she\n"
	.string "took your money? Sigh...$"

GalecrestCity_HousesRich_NPC4_Text_2:
# 44 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "A good deed shouldn't go unrewarded.\n"
	.string "But next time, you need to stand up for\l"
	.string "yourself!$"

GalecrestCity_HousesRich_NPC5_Text_0:
# 61 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "You're dirtying the floor with your\n"
	.string "dirty shoes!$"

GalecrestCity_HousesRich_NPC5_Text_1:
# 70 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Ahh my beautiful pearls! Thank you\n"
	.string "child, thank you!$"

GalecrestCity_HousesRich_NPC5_Text_2:
# 73 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "But since you took so much time to find\n"
	.string "the pearls, I'll be taking some money\l"
	.string "from you of course. You stressed me out\l"
	.string "and you've got to make amends!$"

GalecrestCity_HousesRich_NPC5_Text_3:
# 76 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "{PLAYER} gave the rich lady 500.$"

GalecrestCity_HousesRich_NPC5_Text_4:
# 81 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Did you find it yet? No? Well what are\n"
	.string "you standing in here for? Hurry up and\l"
	.string "get my pearls, you slacker!$"

GalecrestCity_HousesRich_NPC5_Text_5:
# 86 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Oh my! I can't find my PEARL anywhere! I\n"
	.string "think someone must've stolen it! You,\l"
	.string "child, you look outdoorsy. Your shoes\l"
	.string "are dirty. Would you be a dear and\l"
	.string "search outside for my pearl?$"

GalecrestCity_HousesRich_NPC6_Text_0:
# 99 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I'm a professional cook. It's\n"
	.string "interesting being able to peek into the\l"
	.string "lives of the super rich...I appreciate my\l"
	.string "family more now.$"

GalecrestCity_HousesRich_NPC7_Text_0:
# 107 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I don't know where Mom and Dad are...I've\n"
	.string "been sitting here waiting for dinner. We\l"
	.string "never eat together.$"

GalecrestCity_HousesRich_NPC8_Text_0:
# 115 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Our daughter grew up and is now the Gym\n"
	.string "Leader of Pelluca City. So we live alone\l"
	.string "in this big house now...$"

GalecrestCity_HousesRich_NPC9_Text_0:
# 125 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "You can find tons of unused equipment\n"
	.string "in our basement - although it's dark, so\l"
	.string "don't bang your toes! Feel free to take\l"
	.string "anything you like.$"

GalecrestCity_HousesRich_NPC9_Text_1:
# 127 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I'm trying to organise my daughter's\n"
	.string "belongings. Are you a Pokemon trainer?$"

GalecrestCity_HousesRich_NPC9_Text_2:
# 129 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "So is my daughter. She used these to\n"
	.string "train her Pokemon. They'll be more\l"
	.string "useful in your hands.$"

GalecrestCity_HousesRich_NPC9_Text_3:
# 134 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Ah, then none of this will be of use to\n"
	.string "you.$"

GalecrestCity_HousesRich_Keckleon_Text_0:
# 146 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Glalie glares intently at you.$"
