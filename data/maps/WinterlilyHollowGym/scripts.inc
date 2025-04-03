WinterlilyHollowGym_MapScripts::
# 2 "data//maps/WinterlilyHollowGym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, WinterlilyHollowGym_SetHoleWarp
	.byte 0


WinterlilyHollowGym_SetHoleWarp::
# 7 "data//maps/WinterlilyHollowGym/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 0
# 9 "data//maps/WinterlilyHollowGym/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data//maps/WinterlilyHollowGym/scripts.pory"
	setholewarp MAP_WINTERLILY_HOLLOW_GYM_B1F
	end

