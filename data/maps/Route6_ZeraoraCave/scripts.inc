Route6_ZeraoraCave_MapScripts::
	.byte 0


Route6_Zeraora::
# 4 "data//maps/Route6_ZeraoraCave/scripts.pory"
	lockall
# 6 "data//maps/Route6_ZeraoraCave/scripts.pory"
	special SaveGame
# 7 "data//maps/Route6_ZeraoraCave/scripts.pory"
	waitstate
# 8 "data//maps/Route6_ZeraoraCave/scripts.pory"
	release
# 11 "data//maps/Route6_ZeraoraCave/scripts.pory"
	faceplayer
# 12 "data//maps/Route6_ZeraoraCave/scripts.pory"
	playmoncry SPECIES_ZERAORA, CRY_MODE_NORMAL
# 13 "data//maps/Route6_ZeraoraCave/scripts.pory"
	waitmoncry
# 14 "data//maps/Route6_ZeraoraCave/scripts.pory"
	setflag FLAG_ZERAORA
# 16 "data//maps/Route6_ZeraoraCave/scripts.pory"
	setwildbattle SPECIES_ZERAORA, 40
# 17 "data//maps/Route6_ZeraoraCave/scripts.pory"
	dowildbattle
# 18 "data//maps/Route6_ZeraoraCave/scripts.pory"
	removeobject 1
# 20 "data//maps/Route6_ZeraoraCave/scripts.pory"
	releaseall
	end

