GalecrestCity_HousesPoor_MapScripts::
	.byte 0


GalecrestCity_HousesPoor_NPC1::
# 6 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	goto_if_set FLAG_GALECREST_POOR_TRADEITEM, GalecrestCity_HousesPoor_NPC1_2
# 9 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	lockall
# 10 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	faceplayer
# 12 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_1, MSGBOX_YESNO
# 15 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_HousesPoor_NPC1_5
# 27 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_5, MSGBOX_NPC
GalecrestCity_HousesPoor_NPC1_1:
	end

GalecrestCity_HousesPoor_NPC1_2:
# 7 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_0, MSGBOX_NPC
	goto GalecrestCity_HousesPoor_NPC1_1

GalecrestCity_HousesPoor_NPC1_5:
	checkitem ITEM_BLUE_FLUTE
# 0 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_HousesPoor_NPC1_8
# 24 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_4, MSGBOX_NPC
	goto GalecrestCity_HousesPoor_NPC1_1

GalecrestCity_HousesPoor_NPC1_8:
# 18 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_2
# 19 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	removeitem ITEM_BLUE_FLUTE
# 20 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 21 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	setflag FLAG_GALECREST_POOR_TRADEITEM
# 22 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_3, MSGBOX_NPC
	goto GalecrestCity_HousesPoor_NPC1_1


GalecrestCity_HousesPoor_NPC2::
# 36 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC2_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_Jigglypuff::
# 41 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_NORMAL
# 42 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_Jigglypuff_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_NPC3::
# 48 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC3_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_NPC4::
# 53 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC4_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_NPC5::
# 58 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC5_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_NPC6::
# 63 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC6_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_NPC1_Text_0:
# 7 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "My wife will be so happy! Music meant a\n"
	.string "lot to her. I wish I could do things over\l"
	.string "and give her all the flutes in the\l"
	.string "world...$"

GalecrestCity_HousesPoor_NPC1_Text_1:
# 12 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "My wife is a musician. She plays the\n"
	.string "flute. But her flute is old now and we're\l"
	.string "too poor to afford a new flute. I really\l"
	.string "want to see her happy...\p"
	.string "Would you be willing to give me a Blue\n"
	.string "Flute? I can't offer money, but in\l"
	.string "exchange, I can give you this Amulet\l"
	.string "Coin. It's supposed to bring you good\l"
	.string "fortune...but it's never worked for me.$"

GalecrestCity_HousesPoor_NPC1_Text_2:
# 18 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "Thank you so much! This will be a\n"
	.string "perfect gift for her.\p"
	.string "Here, take this Amulet Coin. Not like it\n"
	.string "ever did me any good. I hope it brings\l"
	.string "you luck.$"

GalecrestCity_HousesPoor_NPC1_Text_3:
# 22 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "I wish I could do things over and give\n"
	.string "her all the flutes in the world...$"

GalecrestCity_HousesPoor_NPC1_Text_4:
# 24 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "It looks like you don't have a Blue\n"
	.string "Flute. Come back when you do!$"

GalecrestCity_HousesPoor_NPC1_Text_5:
# 27 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "I understand. It's out of your way.\p"
	.string "Sigh...I just wish I had more money, you\n"
	.string "know?$"

GalecrestCity_HousesPoor_NPC2_Text_0:
# 36 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "I used to play the flute many years ago.\n"
	.string "Now Jigglypuff brings music into the\l"
	.string "house!$"

GalecrestCity_HousesPoor_Jigglypuff_Text_0:
# 42 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "Jigglypuff is singing happily! Better\n"
	.string "leave before I fall asleep...$"

GalecrestCity_HousesPoor_NPC3_Text_0:
# 48 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "The Poochyena regularly block the\n"
	.string "roads here. They're a menace to\l"
	.string "society!$"

GalecrestCity_HousesPoor_NPC4_Text_0:
# 53 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "The Poochyena are so cute! I'd like to\n"
	.string "adopt one someday.$"

GalecrestCity_HousesPoor_NPC5_Text_0:
# 58 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "My children play outside all day. Let\n"
	.string "them have their fun! Soon they'll be\l"
	.string "studying all day to enter the Detective\l"
	.string "Academy.$"

GalecrestCity_HousesPoor_NPC6_Text_0:
# 63 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "My wife has high ambitions for the kids.\n"
	.string "I'll support her, but personally I'll be\l"
	.string "happy as long as they grow up to become\l"
	.string "responsible adults.$"
