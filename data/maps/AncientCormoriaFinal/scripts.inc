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
	msgbox AncientCormoriaFinal_Dreamstone_Text_0, MSGBOX_YESNO
# 11 "data//maps/AncientCormoriaFinal/scripts.pory"
	release
# 12 "data//maps/AncientCormoriaFinal/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AncientCormoriaFinal_Dreamstone_2
# 14 "data//maps/AncientCormoriaFinal/scripts.pory"
	lockall
# 15 "data//maps/AncientCormoriaFinal/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 4
# 16 "data//maps/AncientCormoriaFinal/scripts.pory"
	setflag FLAG_HIDE_TENEBRIS_FINALE
# 17 "data//maps/AncientCormoriaFinal/scripts.pory"
	clearflag FLAG_HIDE_ISLAND_FINALE
# 18 "data//maps/AncientCormoriaFinal/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 78, 24
# 19 "data//maps/AncientCormoriaFinal/scripts.pory"
	releaseall
	end

AncientCormoriaFinal_Dreamstone_2:
	end


AncientCormoriaFinal_Tenebris::
# 24 "data//maps/AncientCormoriaFinal/scripts.pory"
	msgbox_delay AncientCormoriaFinal_Tenebris_Text_0, AncientCormoriaFinal_Tenebris_Text_1
	end


AncientCormoriaFinal_Dreamstone_Text_0:
# 10 "data//maps/AncientCormoriaFinal/scripts.pory"
	.string "Go back to the present?$"

AncientCormoriaFinal_Tenebris_Text_0:
# 24 "data//maps/AncientCormoriaFinal/scripts.pory"
	.string "Tenebris$"

AncientCormoriaFinal_Tenebris_Text_1:
# 24 "data//maps/AncientCormoriaFinal/scripts.pory"
	.string "Touch the dreamstone whenever you're\n"
	.string "ready!$"
