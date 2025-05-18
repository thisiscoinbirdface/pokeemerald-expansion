UnchartedIsland_MapScripts::
	.byte 0


UnchartedIsland_Leader_Caught::
# 5 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_Text_0
# 6 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
# 7 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Inger::
# 10 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Inger_Text_0
# 11 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught
	return


UnchartedIsland_Leader_Caught_Text_0:
# 5 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey! What are you doing here? You\n"
	.string "should be on the S.S. Elegant.$"

UnchartedIsland_Inger_Text_0:
# 10 "data//maps/UnchartedIsland/scripts.pory"
	.string "Inger$"
