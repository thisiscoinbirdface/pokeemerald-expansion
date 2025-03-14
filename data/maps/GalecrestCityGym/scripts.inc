GalecrestCityGym_MapScripts::
	.byte 0


GalecrestCityGym_Test::
# 5 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 6 "data//maps/GalecrestCityGym/scripts.pory"
	multichoicegrid 5, 5, MULTI_NUMBER_INPUT, 5, TRUE
# 7 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return


GalecrestCityGym_NPC1::
# 25 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 26 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 27 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC1_Text_0
# 28 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_NPC2::
# 33 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 34 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 35 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC1_Text_0
# 36 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_NPC3::
# 41 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 42 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 43 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC1_Text_0
# 44 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer1::
# 65 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_JACO, GalecrestCityGym_Trainer1_Text_0, GalecrestCityGym_Trainer1_Text_1
# 66 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer1_Text_2
# 67 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer2::
# 74 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_JACO, GalecrestCityGym_Trainer1_Text_0, GalecrestCityGym_Trainer1_Text_1
# 75 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer1_Text_2
# 76 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer3::
# 83 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_JACO, GalecrestCityGym_Trainer1_Text_0, GalecrestCityGym_Trainer1_Text_1
# 84 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer1_Text_2
# 85 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Leader::
# 106 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_JACO, GalecrestCityGym_Trainer1_Text_0, GalecrestCityGym_Trainer1_Text_1
# 107 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer1_Text_2
# 108 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_NPC1_Text_0:
# 27 "data//maps/GalecrestCityGym/scripts.pory"
	.string "$"

GalecrestCityGym_Trainer1_Text_0:
# 65 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Hah! So you found the fake wall.$"

GalecrestCityGym_Trainer1_Text_1:
# 65 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Ouch, that hurt!$"

GalecrestCityGym_Trainer1_Text_2:
# 66 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You're not half bad after all.$"
