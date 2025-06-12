GalecrestCity_HousesPoor_MapScripts::
	.byte 0


GalecrestCity_HousesPoor_NPC1::
# 6 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	compare VAR_GALECREST_POORGUY, 2
	goto_if_eq GalecrestCity_HousesPoor_NPC1_2
GalecrestCity_HousesPoor_NPC1_1:
# 10 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	compare VAR_GALECREST_POORGUY, 1
	goto_if_eq GalecrestCity_HousesPoor_NPC1_5
GalecrestCity_HousesPoor_NPC1_4:
# 35 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	compare VAR_GALECREST_POORGUY, 0
	goto_if_eq GalecrestCity_HousesPoor_NPC1_8
GalecrestCity_HousesPoor_NPC1_7:
# 51 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	releaseall
	end

GalecrestCity_HousesPoor_NPC1_2:
# 7 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_0, MSGBOX_NPC
	goto GalecrestCity_HousesPoor_NPC1_1

GalecrestCity_HousesPoor_NPC1_5:
# 11 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_1, MSGBOX_YESNO
# 12 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_HousesPoor_NPC1_10
# 29 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_6
# 30 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	releaseall
	end

GalecrestCity_HousesPoor_NPC1_8:
# 36 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	lockall
# 37 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	faceplayer
# 39 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_7, MSGBOX_YESNO
# 40 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_HousesPoor_NPC1_13
# 48 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_9, MSGBOX_NPC
	goto GalecrestCity_HousesPoor_NPC1_7

GalecrestCity_HousesPoor_NPC1_10:
	checkitem ITEM_BLUE_FLUTE
# 0 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_HousesPoor_NPC1_16
# 26 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_5, MSGBOX_NPC
	goto GalecrestCity_HousesPoor_NPC1_4

GalecrestCity_HousesPoor_NPC1_13:
# 41 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_8
# 42 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	release
# 43 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	setvar VAR_GALECREST_POORGUY, 1
# 44 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	startquest QUEST_GALECREST_POORGUY
# 45 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	releaseall
	end

GalecrestCity_HousesPoor_NPC1_16:
# 15 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_2
# 16 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	removeitem ITEM_BLUE_FLUTE
# 17 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	completequest QUEST_GALECREST_POORGUY
# 18 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_3
# 19 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 21 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	setflag FLAG_GALECREST_POOR_TRADEITEM
# 22 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	setvar VAR_GALECREST_POORGUY, 2
# 24 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC1_Text_4, MSGBOX_NPC
	goto GalecrestCity_HousesPoor_NPC1_4


GalecrestCity_HousesPoor_NPC2::
# 57 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC2_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_Jigglypuff::
# 62 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	playse SE_M_SING
# 63 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_Jigglypuff_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_NPC3::
# 69 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC3_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_NPC4::
# 74 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC4_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_NPC5::
# 79 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC5_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_NPC6::
# 84 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	msgbox GalecrestCity_HousesPoor_NPC6_Text_0, MSGBOX_NPC
	end


GalecrestCity_HousesPoor_NPC1_Text_0:
# 7 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "My wife will be so happy! Music meant a\n"
	.string "lot to her. I wish I could do things over\l"
	.string "and give her all the flutes in the\l"
	.string "world...$"

GalecrestCity_HousesPoor_NPC1_Text_1:
# 11 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "Did you bring a Blue Flute?$"

GalecrestCity_HousesPoor_NPC1_Text_2:
# 15 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "Thank you so much! This will be a\n"
	.string "perfect gift for her.$"

GalecrestCity_HousesPoor_NPC1_Text_3:
# 18 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "I can't offer money, but in exchange, I\n"
	.string "can give you this Amulet Coin. It's\l"
	.string "supposed to bring good fortune...but\l"
	.string "it's never worked for me. I hope it\l"
	.string "brings you luck.$"

GalecrestCity_HousesPoor_NPC1_Text_4:
# 24 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "I think I used up all of my luck on\n"
	.string "finding my wife!\p"
	.string "...\p"
	.string "I wish I could do things over and give\n"
	.string "her all the flutes in the world...$"

GalecrestCity_HousesPoor_NPC1_Text_5:
# 26 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "It looks like you don't have a Blue\n"
	.string "Flute. Come back when you do!$"

GalecrestCity_HousesPoor_NPC1_Text_6:
# 29 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "I'll be here if you get one!$"

GalecrestCity_HousesPoor_NPC1_Text_7:
# 39 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "My wife is a musician. She plays the\n"
	.string "flute. But her flute is old now and we're\l"
	.string "too poor to afford a new flute. I really\l"
	.string "want to see her happy...\p"
	.string "Would you be willing to give me a Blue\n"
	.string "Flute?$"

GalecrestCity_HousesPoor_NPC1_Text_8:
# 41 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "Thank you trainer! I'll be waiting here\n"
	.string "for the Blue Flute.$"

GalecrestCity_HousesPoor_NPC1_Text_9:
# 48 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "I understand. It's out of your way.\p"
	.string "Sigh...I just wish I had more money, you\n"
	.string "know?$"

GalecrestCity_HousesPoor_NPC2_Text_0:
# 57 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "I used to play the flute many years ago.\n"
	.string "Now Jigglypuff brings music into the\l"
	.string "house!$"

GalecrestCity_HousesPoor_Jigglypuff_Text_0:
# 63 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "Jigglypuff is singing happily! Better\n"
	.string "leave before I fall asleep...$"

GalecrestCity_HousesPoor_NPC3_Text_0:
# 69 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "The Poochyena always block the roads.\n"
	.string "They're a menace to society!$"

GalecrestCity_HousesPoor_NPC4_Text_0:
# 74 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "The Poochyena are so cute!\n"
	.string "I'd like to adopt one someday.$"

GalecrestCity_HousesPoor_NPC5_Text_0:
# 79 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "My children play outside all day.\n"
	.string "Let them have their fun!\p"
	.string "Soon they'll be studying all day to\n"
	.string "enter the Detective Academy.$"

GalecrestCity_HousesPoor_NPC6_Text_0:
# 84 "data//maps/GalecrestCity_HousesPoor/scripts.pory"
	.string "My wife has high ambitions for the kids.\n"
	.string "I'll support her, but personally I'll be\l"
	.string "happy as long as they grow up to become\l"
	.string "responsible adults.$"
