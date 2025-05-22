AncientCormoriaFinal_MapScripts::
	.byte 0


AncientCormoriaFinal_Dreamstone::
# 4 "data//maps/AncientCormoriaFinal/scripts.pory"
	lockall
# 5 "data//maps/AncientCormoriaFinal/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 4
# 6 "data//maps/AncientCormoriaFinal/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 78, 24
# 7 "data//maps/AncientCormoriaFinal/scripts.pory"
	releaseall
	end


AncientCormoriaFinal_Tenebris::
# 12 "data//maps/AncientCormoriaFinal/scripts.pory"
	msgbox_delay AncientCormoriaFinal_Tenebris_Text_0, AncientCormoriaFinal_Tenebris_Text_1
	end


AncientCormoriaFinal_Tenebris_Text_0:
# 12 "data//maps/AncientCormoriaFinal/scripts.pory"
	.string "Tenebris$"

AncientCormoriaFinal_Tenebris_Text_1:
# 12 "data//maps/AncientCormoriaFinal/scripts.pory"
	.string "Touch the dreamstone whenever you're\n"
	.string "ready!$"
