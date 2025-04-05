FennilahlTown_House1_MapScripts::
	.byte 0


FennilahlTown_House1_NPC1::
# 4 "data//maps/FennilahlTown_House1/scripts.pory"
	lockall
# 5 "data//maps/FennilahlTown_House1/scripts.pory"
	faceplayer
# 6 "data//maps/FennilahlTown_House1/scripts.pory"
	msgbox FennilahlTown_House1_NPC1_Text_0
# 7 "data//maps/FennilahlTown_House1/scripts.pory"
	releaseall
	return


FennilahlTown_House1_NPC2::
# 11 "data//maps/FennilahlTown_House1/scripts.pory"
	lockall
# 12 "data//maps/FennilahlTown_House1/scripts.pory"
	faceplayer
# 13 "data//maps/FennilahlTown_House1/scripts.pory"
	msgbox FennilahlTown_House1_NPC2_Text_0
# 14 "data//maps/FennilahlTown_House1/scripts.pory"
	releaseall
	return


FennilahlTown_House1_NPC1_Text_0:
# 6 "data//maps/FennilahlTown_House1/scripts.pory"
	.string "This town is too small for me!$"

FennilahlTown_House1_NPC2_Text_0:
# 13 "data//maps/FennilahlTown_House1/scripts.pory"
	.string "My sister wants to visit GASTREE CITY\n"
	.string "but crossing Route 3 isn't so easy.$"
