VilethornHouse_MapScripts::
	.byte 0


VilethornHouse_NPC1::
# 5 "data//maps/VilethornHouse/scripts.pory"
	lockall
# 6 "data//maps/VilethornHouse/scripts.pory"
	faceplayer
# 7 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC1_Text_0
# 8 "data//maps/VilethornHouse/scripts.pory"
	releaseall
	return


VilethornHouse_NPC2::
# 12 "data//maps/VilethornHouse/scripts.pory"
	lockall
# 13 "data//maps/VilethornHouse/scripts.pory"
	faceplayer
# 14 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC2_Text_0
# 15 "data//maps/VilethornHouse/scripts.pory"
	releaseall
	return


VilethornHouse_NPC1_Text_0:
# 7 "data//maps/VilethornHouse/scripts.pory"
	.string "We moved out of the city long ago. It\n"
	.string "was too noisy!$"

VilethornHouse_NPC2_Text_0:
# 14 "data//maps/VilethornHouse/scripts.pory"
	.string "Nobody disturbs us deep in these woods.\n"
	.string "It's a peaceful lifestyle.$"
