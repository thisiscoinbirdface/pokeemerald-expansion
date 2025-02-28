Route1_House_MapScripts::
	.byte 0


Route1_House_RandomDude::
# 4 "data//maps/Route1_House/scripts.pory"
	lockall
# 5 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RandomDude_Text_0
# 10 "data//maps/Route1_House/scripts.pory"
	releaseall
	return


Route1_House_RandomDude_Text_0:
# 7 "data//maps/Route1_House/scripts.pory"
	.string "Did you know that Pokemon hide in the\n"
	.string "grass? Be careful!$"
