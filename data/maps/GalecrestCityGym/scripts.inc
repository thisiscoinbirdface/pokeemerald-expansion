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


GalecrestCityGym_Red::
# 25 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 26 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 27 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_0
# 28 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return


GalecrestCityGym_NPC1::
# 31 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 32 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 33 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC1_Text_0
# 34 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return


GalecrestCityGym_NPC2::
# 38 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 39 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 40 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC2_Text_0
# 41 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return


GalecrestCityGym_NPC3::
# 45 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 46 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 47 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC3_Text_0
# 48 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return


GalecrestCityGym_Trainer1::
# 67 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_A, GalecrestCityGym_Trainer1_Text_0, GalecrestCityGym_Trainer1_Text_1
# 68 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer1_Text_2
# 69 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer2::
# 74 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_B, GalecrestCityGym_Trainer2_Text_0, GalecrestCityGym_Trainer1_Text_1
# 75 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer1_Text_2
# 76 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer3::
# 81 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_C, GalecrestCityGym_Trainer3_Text_0, GalecrestCityGym_Trainer1_Text_1
# 82 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer1_Text_2
# 83 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Leader::
# 103 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_JACO, GalecrestCityGym_Trainer3_Text_0, GalecrestCityGym_Trainer1_Text_1
# 104 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer1_Text_2
# 105 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Red_Text_0:
# 27 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Greetings trainer! Good to see you\n"
	.string "again. This Gym is managed by the\l"
	.string "Detective Academy student Council.\l"
	.string "Most detectives use NORMAL type {PKMN}\l"
	.string "that are comfortable in a variety of\l"
	.string "urban situations. FIGHTING type {PKMN}\l"
	.string "should do well here!$"

GalecrestCityGym_NPC1_Text_0:
# 33 "data//maps/GalecrestCityGym/scripts.pory"
	.string "This Gym is supposed to be a normal\n"
	.string "type gym...except all the trainers have\l"
	.string "a CHARCADET! How is that fair?$"

GalecrestCityGym_NPC2_Text_0:
# 40 "data//maps/GalecrestCityGym/scripts.pory"
	.string "I'm the detective overseeing the\n"
	.string "cadets. All the best for your gym\l"
	.string "challenge!$"

GalecrestCityGym_NPC3_Text_0:
# 47 "data//maps/GalecrestCityGym/scripts.pory"
	.string "For a bunch of students, these trainers\n"
	.string "sure don't take it easy on you...$"

GalecrestCityGym_Trainer1_Text_0:
# 67 "data//maps/GalecrestCityGym/scripts.pory"
	.string "I'm a first-year at the Academy.\n,But don't think I'm a pushover!$"

GalecrestCityGym_Trainer1_Text_1:
# 67 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Ouch, that hurt!$"

GalecrestCityGym_Trainer1_Text_2:
# 68 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You're not half bad after all.$"

GalecrestCityGym_Trainer2_Text_0:
# 74 "data//maps/GalecrestCityGym/scripts.pory"
	.string "After our internship, we can evolve\nour CHARCADET into ARMOROUGE!$"

GalecrestCityGym_Trainer3_Text_0:
# 81 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Hah! So you found the fake wall.$"
