GastreeCity_House2_MapScripts::
	.byte 0


GastreeCity_House2_NPC1::
# 5 "data//maps/GastreeCity_House2/scripts.pory"
	lockall
# 6 "data//maps/GastreeCity_House2/scripts.pory"
	faceplayer
# 8 "data//maps/GastreeCity_House2/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SHOAL_SALT, GastreeCity_House2_NPC1_2
# 12 "data//maps/GastreeCity_House2/scripts.pory"
	msgbox GastreeCity_House2_NPC1_Text_1
# 13 "data//maps/GastreeCity_House2/scripts.pory"
	release
# 14 "data//maps/GastreeCity_House2/scripts.pory"
	setflag FLAG_GASTREE_NPC_SHOAL_SALT
# 15 "data//maps/GastreeCity_House2/scripts.pory"
	giveitem ITEM_SHOAL_SALT
GastreeCity_House2_NPC1_1:
# 18 "data//maps/GastreeCity_House2/scripts.pory"
	releaseall
	return

GastreeCity_House2_NPC1_2:
# 9 "data//maps/GastreeCity_House2/scripts.pory"
	msgbox GastreeCity_House2_NPC1_Text_0
# 10 "data//maps/GastreeCity_House2/scripts.pory"
	release
	goto GastreeCity_House2_NPC1_1


GastreeCity_House2_NPC2::
# 23 "data//maps/GastreeCity_House2/scripts.pory"
	lockall
# 24 "data//maps/GastreeCity_House2/scripts.pory"
	faceplayer
# 25 "data//maps/GastreeCity_House2/scripts.pory"
	msgbox GastreeCity_House2_NPC2_Text_0
# 26 "data//maps/GastreeCity_House2/scripts.pory"
	release
	return


GastreeCity_House2_NPC1_Text_0:
# 9 "data//maps/GastreeCity_House2/scripts.pory"
	.string "Too much salt raises your blood\n"
	.string "pressure!$"

GastreeCity_House2_NPC1_Text_1:
# 12 "data//maps/GastreeCity_House2/scripts.pory"
	.string "I don't want to put too much salt on my\n"
	.string "food. Here, why don't you take my extra\l"
	.string "salt?$"

GastreeCity_House2_NPC2_Text_0:
# 25 "data//maps/GastreeCity_House2/scripts.pory"
	.string "My mother cares a lot about eating\n"
	.string "healthy...but the food is somewhat\l"
	.string "bland. I just don't want to tell her or\l"
	.string "she'll think I'm ungrateful.$"
