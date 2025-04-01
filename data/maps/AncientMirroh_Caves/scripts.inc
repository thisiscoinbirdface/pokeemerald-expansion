AncientMirroh_Caves_MapScripts::
# 2 "data//maps/AncientMirroh_Caves/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientMirroh_Caves_1F_SetHoleWarp
	.byte 0


AncientMirroh_Caves_1F_SetHoleWarp::
# 6 "data//maps/AncientMirroh_Caves/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 7 "data//maps/AncientMirroh_Caves/scripts.pory"
	setholewarp MAP_ANCIENT_MIRROH_CAVES_B1F
	end

