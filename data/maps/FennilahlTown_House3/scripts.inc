FennilahlTown_House3_MapScripts::
	.byte 0


FennilahlTown_House3_NPC1::
# 5 "data//maps/FennilahlTown_House3/scripts.pory"
	lockall
# 6 "data//maps/FennilahlTown_House3/scripts.pory"
	faceplayer
# 7 "data//maps/FennilahlTown_House3/scripts.pory"
	msgbox FennilahlTown_House3_NPC1_Text_0
# 8 "data//maps/FennilahlTown_House3/scripts.pory"
	releaseall
	return


FennilahlTown_House3_NPC2::
# 13 "data//maps/FennilahlTown_House3/scripts.pory"
	lockall
# 14 "data//maps/FennilahlTown_House3/scripts.pory"
	faceplayer
# 15 "data//maps/FennilahlTown_House3/scripts.pory"
	msgbox FennilahlTown_House3_NPC2_Text_0
# 16 "data//maps/FennilahlTown_House3/scripts.pory"
	releaseall
	return


FennilahlTown_House3_NPC1_Text_0:
# 7 "data//maps/FennilahlTown_House3/scripts.pory"
	.string "Did you know that some {PKMN} can Mega\n"
	.string "evolve?$"

FennilahlTown_House3_NPC2_Text_0:
# 15 "data//maps/FennilahlTown_House3/scripts.pory"
	.string "There are no WATER type {PKMN} in these\n"
	.string "parts.$"
