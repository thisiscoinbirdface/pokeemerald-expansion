WinterlilyHollowGym_MapScripts::
# 2 "data//maps/WinterlilyHollowGym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, WinterlilyHollowGym_SetHoleWarp
	.byte 0


WinterlilyHollowGym_SetHoleWarp::
# 7 "data//maps/WinterlilyHollowGym/scripts.pory"
	compare VAR_HOLLOW_GYM_LAYOUT, 1
	goto_if_eq WinterlilyHollowGym_SetHoleWarp_2
WinterlilyHollowGym_SetHoleWarp_1:
# 9 "data//maps/WinterlilyHollowGym/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data//maps/WinterlilyHollowGym/scripts.pory"
	setholewarp MAP_WINTERLILY_HOLLOW_GYM_B1F
	end

WinterlilyHollowGym_SetHoleWarp_2:
# 7 "data//maps/WinterlilyHollowGym/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 0
	goto WinterlilyHollowGym_SetHoleWarp_1

