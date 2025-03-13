GalecrestCity_HousesRich_MapScripts::
	.byte 0


GalecrestCity_HousesRich_NPC1::
# 7 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 8 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 9 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC1_Text_0
# 10 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC2::
# 15 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 16 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 17 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC2_Text_0
# 18 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC3::
# 23 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 24 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 25 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC3_Text_0
# 26 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC4::
# 31 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 32 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 33 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC4_Text_0
# 34 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
# 36 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 3
	goto_if_eq GalecrestCity_HousesRich_NPC4_2
GalecrestCity_HousesRich_NPC4_1:
# 42 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return

GalecrestCity_HousesRich_NPC4_2:
# 37 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC4_Text_1
# 38 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 39 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 4
# 40 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC4_Text_2
	goto GalecrestCity_HousesRich_NPC4_1


GalecrestCity_HousesRich_NPC5::
# 47 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 48 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 56 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 3
	goto_if_eq GalecrestCity_HousesRich_NPC5_2
GalecrestCity_HousesRich_NPC5_1:
# 60 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 4
	goto_if_eq GalecrestCity_HousesRich_NPC5_5
GalecrestCity_HousesRich_NPC5_4:
# 65 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 0
	goto_if_eq GalecrestCity_HousesRich_NPC5_8
GalecrestCity_HousesRich_NPC5_7:
# 70 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 1
	goto_if_eq GalecrestCity_HousesRich_NPC5_11
GalecrestCity_HousesRich_NPC5_10:
# 74 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_GALECREST_RICH_PEARLS, 2
	goto_if_eq GalecrestCity_HousesRich_NPC5_14
GalecrestCity_HousesRich_NPC5_13:
# 83 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return

GalecrestCity_HousesRich_NPC5_2:
# 57 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_0
# 58 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
	goto GalecrestCity_HousesRich_NPC5_1

GalecrestCity_HousesRich_NPC5_5:
# 61 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_0
# 62 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
	goto GalecrestCity_HousesRich_NPC5_4

GalecrestCity_HousesRich_NPC5_8:
# 66 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_1
# 68 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 1
	goto GalecrestCity_HousesRich_NPC5_7

GalecrestCity_HousesRich_NPC5_11:
# 71 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_2
# 72 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
	goto GalecrestCity_HousesRich_NPC5_10

GalecrestCity_HousesRich_NPC5_14:
# 75 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC5_Text_3
# 76 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	release
# 77 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	removemoney 500
# 78 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setvar VAR_GALECREST_RICH_PEARLS, 3
	goto GalecrestCity_HousesRich_NPC5_13


GalecrestCity_HousesRich_NPC6::
# 88 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 89 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 90 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC6_Text_0
# 91 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC7::
# 96 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 97 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 98 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC7_Text_0
# 99 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC8::
# 104 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 105 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 106 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC8_Text_0
# 107 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC9::
# 112 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 113 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 115 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	goto_if_set FLAG_GALECREST_RICH_HOUSECLEANITEM, GalecrestCity_HousesRich_NPC9_2
# 118 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_0, MSGBOX_YESNO
# 119 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_HousesRich_NPC9_5
# 124 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_2
GalecrestCity_HousesRich_NPC9_1:
# 127 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return

GalecrestCity_HousesRich_NPC9_2:
	goto GalecrestCity_HousesRich_NPC9_1

GalecrestCity_HousesRich_NPC9_5:
# 120 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_NPC9_Text_1
# 121 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 122 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	setflag FLAG_GALECREST_RICH_HOUSECLEANITEM
	goto GalecrestCity_HousesRich_NPC9_1


GalecrestCity_HousesRich_Keckleon::
# 132 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	lockall
# 133 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	faceplayer
# 134 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	msgbox GalecrestCity_HousesRich_Keckleon_Text_0
# 135 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	releaseall
	return


GalecrestCity_HousesRich_NPC1_Text_0:
# 9 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Our older son has joined the Detective\n"
	.string "Academy. He's the pride of the family!$"

GalecrestCity_HousesRich_NPC2_Text_0:
# 17 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I can only hope my younger son takes\n"
	.string "after his brother.$"

GalecrestCity_HousesRich_NPC3_Text_0:
# 25 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "My parents only care about big bro.\n"
	.string "They're always mean to me!$"

GalecrestCity_HousesRich_NPC4_Text_0:
# 33 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I work so hard and my wife spends all\n"
	.string "the money on jewellery!$"

GalecrestCity_HousesRich_NPC4_Text_1:
# 37 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "You found her pearls, did you? And she\n"
	.string "took your money? Sigh...$"

GalecrestCity_HousesRich_NPC4_Text_2:
# 40 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "A good deed shouldn't go unrewarded.\n"
	.string "But next time, you need to stand up for\l"
	.string "yourself!$"

GalecrestCity_HousesRich_NPC5_Text_0:
# 57 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "You're dirtying the floor with your\n"
	.string "dirty shoes!$"

GalecrestCity_HousesRich_NPC5_Text_1:
# 66 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Oh my! I can't find my PEARL anywhere! I\n"
	.string "think someone must've stolen it! You,\l"
	.string "child, you look outdoorsy. Your shoes\l"
	.string "are dirty. Would you be a dear and\l"
	.string "search outside for my pearl?$"

GalecrestCity_HousesRich_NPC5_Text_2:
# 71 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Did you find it yet? No? Well what are\n"
	.string "you standing in here for? Hurry up and\l"
	.string "get my pearls, boy!$"

GalecrestCity_HousesRich_NPC5_Text_3:
# 75 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Ahh my beautiful pearls! Thank you\n"
	.string "child, thank you! Since you took so much\l"
	.string "time to find the pearls, I'll be taking\l"
	.string "some money from you of course. You\l"
	.string "stressed me out and you've got to make\l"
	.string "amends!$"

GalecrestCity_HousesRich_NPC6_Text_0:
# 90 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I'm a professional cook. It's\n"
	.string "interesting being able to peek into the\l"
	.string "lives of the super rich...I appreciate my\l"
	.string "family more now.$"

GalecrestCity_HousesRich_NPC7_Text_0:
# 98 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I don't know where Mom and Dad are...I've\n"
	.string "been sitting here waiting for dinner. We\l"
	.string "never eat together.$"

GalecrestCity_HousesRich_NPC8_Text_0:
# 106 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "Our daughter grew up and is now the Gym\n"
	.string "Leader of Silversun City. So we live\l"
	.string "alone in this big house now...$"

GalecrestCity_HousesRich_NPC9_Text_0:
# 118 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "I'm trying to organise my daughter's\n"
	.string "belongings. Are you a {PKMN} trainer?$"

GalecrestCity_HousesRich_NPC9_Text_1:
# 120 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "So is my daughter. She used these to\n"
	.string "train her {PKMN}. They'll be more useful in\l"
	.string "your hands.$"

GalecrestCity_HousesRich_NPC9_Text_2:
# 124 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "My daughter is a trainer so she has lots\n"
	.string "of training equipment.$"

GalecrestCity_HousesRich_Keckleon_Text_0:
# 134 "data//maps/GalecrestCity_HousesRich/scripts.pory"
	.string "KECKLEON glares intently at you.$"
