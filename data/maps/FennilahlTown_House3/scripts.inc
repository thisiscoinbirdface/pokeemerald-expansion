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


FennilahlTown_House3_Rockruff::
# 20 "data//maps/FennilahlTown_House3/scripts.pory"
	lockall
# 21 "data//maps/FennilahlTown_House3/scripts.pory"
	faceplayer
# 22 "data//maps/FennilahlTown_House3/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 23 "data//maps/FennilahlTown_House3/scripts.pory"
	msgbox FennilahlTown_House3_Rockruff_Text_0
# 24 "data//maps/FennilahlTown_House3/scripts.pory"
	releaseall
	return


FennilahlTown_House3_Mawile::
# 29 "data//maps/FennilahlTown_House3/scripts.pory"
	lockall
# 30 "data//maps/FennilahlTown_House3/scripts.pory"
	faceplayer
# 31 "data//maps/FennilahlTown_House3/scripts.pory"
	playmoncry SPECIES_MAWILE, CRY_MODE_NORMAL
# 32 "data//maps/FennilahlTown_House3/scripts.pory"
	msgbox FennilahlTown_House3_Mawile_Text_0
# 33 "data//maps/FennilahlTown_House3/scripts.pory"
	releaseall
	return


FennilahlTown_House3_NPC1_Text_0:
# 7 "data//maps/FennilahlTown_House3/scripts.pory"
	.string "Did you know that some Pokemon can\n"
	.string "Mega evolve?$"

FennilahlTown_House3_NPC2_Text_0:
# 15 "data//maps/FennilahlTown_House3/scripts.pory"
	.string "My Rockruff's ability is OWN TEMPO! I\n"
	.string "caught it on Route 2, south of here.$"

FennilahlTown_House3_Rockruff_Text_0:
# 23 "data//maps/FennilahlTown_House3/scripts.pory"
	.string "Rockruff is living life at its own pace!$"

FennilahlTown_House3_Mawile_Text_0:
# 32 "data//maps/FennilahlTown_House3/scripts.pory"
	.string "Mawile is holding a weird glowing\n"
	.string "stone...I wonder what it does?$"
