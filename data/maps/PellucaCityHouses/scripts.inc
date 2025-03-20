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


PellucaCityHouses_NPC1::
# 38 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 39 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 40 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC1_Text_0
# 41 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCityHouses_NPC2::
# 45 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 46 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 47 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC2_Text_0
# 48 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCityHouses_NPC3::
# 52 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 53 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 54 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC3_Text_0
# 55 "data//maps/PellucaCityHouses/scripts.pory"
	releaseall
	end


PellucaCityHouses_NPC4::
# 59 "data//maps/PellucaCityHouses/scripts.pory"
	lockall
# 60 "data//maps/PellucaCityHouses/scripts.pory"
	faceplayer
# 61 "data//maps/PellucaCityHouses/scripts.pory"
	msgbox PellucaCityHouses_NPC4_Text_0
# 62 "data//maps/PellucaCityHouses/scripts.pory"
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

PellucaCityHouses_NPC1_Text_0:
# 40 "data//maps/PellucaCityHouses/scripts.pory"
	.string "Since PELLUCA CITY sits at the\n"
	.string "intersection of the IVY RIVER and the\l"
	.string "HOYA RIVER, it's split up into several\l"
	.string "small islands.$"

PellucaCityHouses_NPC2_Text_0:
# 47 "data//maps/PellucaCityHouses/scripts.pory"
	.string "We we born here here, fell in love here,\n"
	.string "and grew old here.$"

PellucaCityHouses_NPC3_Text_0:
# 54 "data//maps/PellucaCityHouses/scripts.pory"
	.string "After so long together, one's love gets\n"
	.string "replaced by companionship. But it's\l"
	.string "always there, somewhere beneath the\l"
	.string "surface.$"

PellucaCityHouses_NPC4_Text_0:
# 61 "data//maps/PellucaCityHouses/scripts.pory"
	.string "My DELPHOX doesn't like the river air.\n"
	.string "She prefers the dense fog of VILETHORN\l"
	.string "WOODS, where I caught her.$"
