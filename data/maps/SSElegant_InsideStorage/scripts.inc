SSElegant_InsideStorage_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, InsideStorage_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, InsideStorage_OnResume
	.byte 0

InsideStorage_OnLoad:
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end

InsideStorage_OnResume:
	setstepcallback STEP_CB_TRUCK
	end

InsideStorage_SetFlags::
	lockall
	setdynamicwarp MAP_SSELEGANT_STORAGE, 1, 2
	releaseall
	end

