GastreeCity_House1_MapScripts::
	.byte 0


GastreeCity_House1_NPC1::
# 4 "data//maps/GastreeCity_House1/scripts.pory"
	lockall
# 5 "data//maps/GastreeCity_House1/scripts.pory"
	faceplayer
# 6 "data//maps/GastreeCity_House1/scripts.pory"
	msgbox GastreeCity_House1_NPC1_Text_0
# 7 "data//maps/GastreeCity_House1/scripts.pory"
	release
	return


GastreeCity_House1_NPC1_Text_0:
# 6 "data//maps/GastreeCity_House1/scripts.pory"
	.string "GASTREE CITY sits on hilly terrain,\n"
	.string "connecting the plains to the south, the\l"
	.string "hills to the east, and the mountains to\l"
	.string "the north.$"
