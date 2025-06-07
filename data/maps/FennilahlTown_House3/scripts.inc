FennilahlTown_House3_MapScripts::
	.byte 0


FennilahlTown_House3_NPC1::
# 5 "data//maps/FennilahlTown_House3/scripts.pory"
	msgbox FennilahlTown_House3_NPC1_Text_0, MSGBOX_NPC
	end


FennilahlTown_House3_NPC2::
# 11 "data//maps/FennilahlTown_House3/scripts.pory"
	msgbox FennilahlTown_House3_NPC2_Text_0, MSGBOX_NPC
	end


FennilahlTown_House3_Rockruff::
# 16 "data//maps/FennilahlTown_House3/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 17 "data//maps/FennilahlTown_House3/scripts.pory"
	msgbox FennilahlTown_House3_Rockruff_Text_0, MSGBOX_NPC
	end


FennilahlTown_House3_Mawile::
# 23 "data//maps/FennilahlTown_House3/scripts.pory"
	playmoncry SPECIES_MAWILE, CRY_MODE_NORMAL
# 24 "data//maps/FennilahlTown_House3/scripts.pory"
	msgbox FennilahlTown_House3_Mawile_Text_0, MSGBOX_NPC
	end


FennilahlTown_House3_NPC1_Text_0:
# 5 "data//maps/FennilahlTown_House3/scripts.pory"
	.string "Did you know that there are Pokémon\n"
	.string "that can mega evolve?$"

FennilahlTown_House3_NPC2_Text_0:
# 11 "data//maps/FennilahlTown_House3/scripts.pory"
	.string "My Rockruff's ability is Own Tempo!\n"
	.string "I met it on Route 2, south of here.$"

FennilahlTown_House3_Rockruff_Text_0:
# 17 "data//maps/FennilahlTown_House3/scripts.pory"
	.string "Rockruff is living life at its own pace!$"

FennilahlTown_House3_Mawile_Text_0:
# 24 "data//maps/FennilahlTown_House3/scripts.pory"
	.string "Mawile is holding a weird glowing\n"
	.string "stone...I wonder what it does?$"
