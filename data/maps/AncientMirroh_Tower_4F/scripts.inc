AncientMirroh_Tower_4F_MapScripts::
# 2 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientMirroh_Tower_4F_SetHoleWarp
	.byte 0


AncientMirroh_Tower_4F_SetHoleWarp::
# 6 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 7 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setholewarp MAP_ANCIENT_MIRROH_TOWER_3F
	end

