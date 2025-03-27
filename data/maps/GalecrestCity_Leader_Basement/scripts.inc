GalecrestCity_Leader_Basement_MapScripts::
	.byte 0


GalecrestCity_Leader_Basement_Litwick::
# 4 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	setwildbattle SPECIES_LITWICK, 20
# 5 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	dowildbattle
# 6 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	removeobject 1
# 7 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	setflag FLAG_GALECREST_LITWICK
# 8 "data//maps/GalecrestCity_Leader_Basement/scripts.pory"
	releaseall
	end

