FennilahlTown_House2_MapScripts::
	.byte 0


FennilahlTown_House2_NPC::
# 5 "data//maps/FennilahlTown_House2/scripts.pory"
	lockall
# 6 "data//maps/FennilahlTown_House2/scripts.pory"
	faceplayer
# 7 "data//maps/FennilahlTown_House2/scripts.pory"
	msgbox FennilahlTown_House2_NPC_Text_0
# 8 "data//maps/FennilahlTown_House2/scripts.pory"
	releaseall
	return


FennilahlTown_House2_NPC_Text_0:
# 7 "data//maps/FennilahlTown_House2/scripts.pory"
	.string "I just moved into my dream retirement\n"
	.string "house! But my furniture hasn't arrived\l"
	.string "yet.$"
