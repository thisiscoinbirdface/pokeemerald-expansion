GalecrestCity_Leader_Basement_MapScripts::
# 2 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GalecrestCity_Leader_Basement_Litwick_OnTransition
	.byte 0


GalecrestCity_Leader_Basement_Litwick_OnTransition::
# 6 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	setflashlevel 7
	end


GalecrestCity_Leader_Basement_Litwick::
# 11 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	setflag FLAG_GALECREST_LITWICK
# 12 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	animateflash 5
# 13 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	delay 20
# 14 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	setwildbattle SPECIES_LITWICK, 20
# 15 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	dowildbattle
# 16 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	removeobject 1
# 17 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	releaseall
	end

