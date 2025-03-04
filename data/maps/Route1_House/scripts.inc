Route1_House_MapScripts::
	.byte 0


Route1_House_RandomDude::
# 4 "data//maps/Route1_House/scripts.pory"
	lockall
# 5 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RandomDude_Text_0
# 6 "data//maps/Route1_House/scripts.pory"
	releaseall
	return


Route1_House_Azurill::
# 10 "data//maps/Route1_House/scripts.pory"
	lockall
# 11 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_0
# 12 "data//maps/Route1_House/scripts.pory"
	releaseall
	return


Route1_House_RandomDude_Text_0:
# 5 "data//maps/Route1_House/scripts.pory"
	.string "I think Azurill ate something bad and\n"
	.string "now has food poisoning! I wish I had a\l"
	.string "PECHA BERRY to cure her.$"

Route1_House_Azurill_Text_0:
# 11 "data//maps/Route1_House/scripts.pory"
	.string "Azurill: zu~~\p"
	.string "Azurill looks quite sick.$"
