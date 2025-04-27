GastreeCity_House2_MapScripts::
	.byte 0


GastreeCity_House2_NPC1::
# 5 "data//maps/GastreeCity_House2/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SHOAL_SALT, GastreeCity_House2_NPC1_2
# 9 "data//maps/GastreeCity_House2/scripts.pory"
	msgbox GastreeCity_House2_NPC1_Text_1, MSGBOX_NPC
# 10 "data//maps/GastreeCity_House2/scripts.pory"
	release
# 11 "data//maps/GastreeCity_House2/scripts.pory"
	setflag FLAG_GASTREE_NPC_SHOAL_SALT
# 12 "data//maps/GastreeCity_House2/scripts.pory"
	giveitem ITEM_SHOAL_SALT
GastreeCity_House2_NPC1_1:
# 14 "data//maps/GastreeCity_House2/scripts.pory"
	releaseall
	return

GastreeCity_House2_NPC1_2:
# 6 "data//maps/GastreeCity_House2/scripts.pory"
	msgbox GastreeCity_House2_NPC1_Text_0, MSGBOX_NPC
# 7 "data//maps/GastreeCity_House2/scripts.pory"
	release
	goto GastreeCity_House2_NPC1_1


GastreeCity_House2_NPC2::
# 19 "data//maps/GastreeCity_House2/scripts.pory"
	msgbox GastreeCity_House2_NPC2_Text_0, MSGBOX_NPC
	end


GastreeCity_House2_NPC1_Text_0:
# 6 "data//maps/GastreeCity_House2/scripts.pory"
	.string "Too much salt raises your blood\n"
	.string "pressure!$"

GastreeCity_House2_NPC1_Text_1:
# 9 "data//maps/GastreeCity_House2/scripts.pory"
	.string "I don't want to put too much salt on the\n"
	.string "food I cook for the childen.\p"
	.string "Here, why don't you take some of my\n"
	.string "extra salt?$"

GastreeCity_House2_NPC2_Text_0:
# 19 "data//maps/GastreeCity_House2/scripts.pory"
	.string "Mom cares a lot about eating\n"
	.string "healthy...but the food is somewhat\l"
	.string "bland.\p"
	.string "I just don't want to tell her or else\n"
	.string "she'll think I'm ungrateful.$"
