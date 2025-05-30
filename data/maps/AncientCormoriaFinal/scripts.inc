AncientCormoriaFinal_MapScripts::
# 2 "data//maps/AncientCormoriaFinal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientCormoria_OnTransition
	.byte 0


AncientCormoria_OnTransition::
# 6 "data//maps/AncientCormoriaFinal/scripts.pory"
	setrespawn HEAL_LOCATION_ANCIENT_CORMORIA_FINAL_ISLAND
	end


AncientCormoriaFinal_Dreamstone::
# 10 "data//maps/AncientCormoriaFinal/scripts.pory"
	lockall
# 11 "data//maps/AncientCormoriaFinal/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 4
# 12 "data//maps/AncientCormoriaFinal/scripts.pory"
	setflag FLAG_HIDE_TENEBRIS_FINALE
# 13 "data//maps/AncientCormoriaFinal/scripts.pory"
	clearflag FLAG_HIDE_ISLAND_FINALE
# 14 "data//maps/AncientCormoriaFinal/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 78, 24
# 15 "data//maps/AncientCormoriaFinal/scripts.pory"
	releaseall
	end


AncientCormoriaFinal_Tenebris::
# 20 "data//maps/AncientCormoriaFinal/scripts.pory"
	msgbox_delay AncientCormoriaFinal_Tenebris_Text_0, AncientCormoriaFinal_Tenebris_Text_1
	end


AncientCormoriaFinal_Tenebris_Text_0:
# 20 "data//maps/AncientCormoriaFinal/scripts.pory"
	.string "Tenebris$"

AncientCormoriaFinal_Tenebris_Text_1:
# 20 "data//maps/AncientCormoriaFinal/scripts.pory"
	.string "Touch the dreamstone whenever you're\n"
	.string "ready!$"
