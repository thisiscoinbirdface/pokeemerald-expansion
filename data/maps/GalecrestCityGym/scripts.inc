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
	msgbox GalecrestCityGym_Trainer1_Text_1
# 69 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer2::
# 74 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_B, GalecrestCityGym_Trainer2_Text_0, GalecrestCityGym_Trainer2_Text_1
# 75 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer2_Text_2
# 76 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer3::
# 81 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_C, GalecrestCityGym_Trainer3_Text_0, GalecrestCityGym_Trainer3_Text_1
# 82 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer3_Text_2
# 83 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Leader::
# 102 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 103 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 105 "data//maps/GalecrestCityGym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, GalecrestCityGym_Leader_1
	return

GalecrestCityGym_Leader_1:
# 106 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_0
	return


CeramBaseCampGym_LeaderBattle::
# 114 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 115 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 117 "data//maps/GalecrestCityGym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeramBaseCampGym_LeaderBattle_2
# 120 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox CeramBaseCampGym_Text_Intro
# 121 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_LEADER, CeramBaseCampGym_Text_Defeated
# 124 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_1
# 125 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 126 "data//maps/GalecrestCityGym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 129 "data//maps/GalecrestCityGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 132 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_2
# 133 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_3
# 134 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 136 "data//maps/GalecrestCityGym/scripts.pory"
	giveitem ITEM_TM_SUNNY_DAY
# 137 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_4
# 138 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 141 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_5
# 142 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
CeramBaseCampGym_LeaderBattle_1:
# 146 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_LeaderBattle_2:
# 118 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_0
	goto CeramBaseCampGym_LeaderBattle_1


GalecrestCityGym_Red_Text_0:
# 27 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Greetings trainer! Good to see you\n"
	.string "again. This Gym is managed by the\l"
	.string "Detective Academy Student Council.\l"
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
	.string "I'm a first-year at the Academy. But\n"
	.string "don't think I'm a pushover!$"

GalecrestCityGym_Trainer1_Text_1:
# 67 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You're not half bad. Go through the door\n"
	.string "that rhymes with FIGHT.$"

GalecrestCityGym_Trainer2_Text_0:
# 74 "data//maps/GalecrestCityGym/scripts.pory"
	.string "After our internship, we can evolve our\n"
	.string "CHARCADET into ARMOROUGE!$"

GalecrestCityGym_Trainer2_Text_1:
# 74 "data//maps/GalecrestCityGym/scripts.pory"
	.string "If I keep losing to trainers like you,\n"
	.string "I'll never get an ARMAROUGE! Go through\l"
	.string "the left door if you like CERULEDGE.$"

GalecrestCityGym_Trainer2_Text_2:
# 75 "data//maps/GalecrestCityGym/scripts.pory"
	.string "If I keep losing to trainers like you,\n"
	.string "I'll never get an ARMAROUGE! Go through\l"
	.string "the left door if you DON'T like\l"
	.string "CERULEDGE.$"

GalecrestCityGym_Trainer3_Text_0:
# 81 "data//maps/GalecrestCityGym/scripts.pory"
	.string "The best student in the Academy is the\n"
	.string "Gym Leader. But you won't make it\l"
	.string "because your journey ends here!$"

GalecrestCityGym_Trainer3_Text_1:
# 81 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You may have beaten me, but you won't\n"
	.string "beat our Gym Leader. He's already\l"
	.string "evolved his CHARCADET to ARMOROUGE!\l"
	.string "Don't not go through the door that\l"
	.string "isn't not right.$"

GalecrestCityGym_Trainer3_Text_2:
# 82 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You may have beaten me, but you won't\n"
	.string "beat our Gym Leader. He's already\l"
	.string "evolved his CHARCADET to ARMOROUGE!\l"
	.string "Don't not go through the door that\l"
	.string "isn't not to the left of the right.$"

GalecrestCityGym_Leader_Text_0:
# 106 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You win.$"

CeramBaseCampGym_LeaderBattle_Text_0:
# 118 "data//maps/GalecrestCityGym/scripts.pory"
	.string "That was a great battle. You've earned\n"
	.string "my confidence. Go get 'em, {PLAYER}!$"

CeramBaseCampGym_LeaderBattle_Text_1:
# 124 "data//maps/GalecrestCityGym/scripts.pory"
	.string "{PLAYER} received the CINDER BADGE\n"
	.string "from ARIAN.$"

CeramBaseCampGym_LeaderBattle_Text_2:
# 132 "data//maps/GalecrestCityGym/scripts.pory"
	.string "The CINDER BADGE increases the ATK of\n"
	.string "all your {PKMN} and lets you control {PKMN}\l"
	.string "upto lv. 20.$"

CeramBaseCampGym_LeaderBattle_Text_3:
# 133 "data//maps/GalecrestCityGym/scripts.pory"
	.string "And I'd also like to give you this.$"

CeramBaseCampGym_LeaderBattle_Text_4:
# 137 "data//maps/GalecrestCityGym/scripts.pory"
	.string "This TM will let your {PKMN} bring sunlight\n"
	.string "on the battlefield, powering up\l"
	.string "FIRE-type moves!$"

CeramBaseCampGym_LeaderBattle_Text_5:
# 141 "data//maps/GalecrestCityGym/scripts.pory"
	.string "And now it's time for you to set off on\n"
	.string "your journey. I hope you manage to find\l"
	.string "the dreamstone and Professor Tenebris.\l"
	.string "I don't know why Team Somber is after\l"
	.string "the dreamstones, but be careful if you\l"
	.string "run into them!$"
