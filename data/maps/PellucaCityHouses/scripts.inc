PellucaCityHouses_MapScripts::
	.byte 0


PellucaCityHouses_GabSibling1::
# 8 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 9 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 10 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling1_Text_0
# 11 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCityHouses_GabSibling2::
# 15 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 16 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 17 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling2_Text_0
# 18 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCityHouses_GabSibling3::
# 22 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 23 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 24 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling3_Text_0
# 25 "data//maps/PellucaCityHouses/scripts.pory"
	release
# 26 "data//maps/PellucaCityHouses/scripts.pory"
	showmonpic SPECIES_JANGMO_O, 10, 3
# 27 "data//maps/PellucaCityHouses/scripts.pory"
	delay 120
# 28 "data//maps/PellucaCityHouses/scripts.pory"
	hidemonpic
# 29 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_GabSibling3_Text_1
# 30 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCityHouses_GabSibling1_Text_0:
# 10 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Yay! Big Sis is back! Big Bro got her a\n"
	.string "present too!$"

PellucaCityHouses_GabSibling2_Text_0:
# 17 "data//maps/PellucaCityHouses/scripts.pory"
	.string "I wish Big Sis stayed with us all the\n"
	.string "time!$"

PellucaCityHouses_GabSibling3_Text_0:
# 24 "data//maps/PellucaCityHouses/scripts.pory"
	.string "GABRIELLE keeps us afloat. Without her,\n"
	.string "I wouldn't be able to afford to study. I\l"
	.string "got her a gift.$"

PellucaCityHouses_GabSibling3_Text_1:
# 29 "data//maps/PellucaCityHouses/scripts.pory"
	.string "It's the least I can do for her.$"
