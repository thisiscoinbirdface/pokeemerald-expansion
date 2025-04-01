AncientMirroh_Caves_MapScripts::
# 2 "data//maps/AncientMirroh_Caves/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientMirroh_Caves_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

AncientMirroh_Caves_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data//maps/AncientMirroh_Caves/scripts.pory"
	AncientMirroh_Caves_1F_SetHoleWarp
	return


AncientMirroh_Caves_1F_SetHoleWarp::
# 8 "data//maps/AncientMirroh_Caves/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 9 "data//maps/AncientMirroh_Caves/scripts.pory"
	setholewarp MAP_ANCIENT_MIRROH_CAVES_B1F
	end

