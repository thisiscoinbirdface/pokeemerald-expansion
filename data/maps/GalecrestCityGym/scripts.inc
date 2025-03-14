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
	goto_if_set FLAG_BADGE03_GET, GalecrestCityGym_Leader_2
# 109 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Text_LeaderIntro
# 111 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECRESTGYM_LEADER, GalecrestCityGym_Text_Defeated
# 115 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_1
# 116 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 117 "data//maps/GalecrestCityGym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 120 "data//maps/GalecrestCityGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 123 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_2
# 124 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 127 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_3
# 129 "data//maps/GalecrestCityGym/scripts.pory"
	applymovement 5, GalecrestCityGym_Leader_Movement_0
# 130 "data//maps/GalecrestCityGym/scripts.pory"
	waitmovement 0
# 131 "data//maps/GalecrestCityGym/scripts.pory"
	removeobject 5
GalecrestCityGym_Leader_1:
# 134 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return

GalecrestCityGym_Leader_2:
# 106 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_0
	goto GalecrestCityGym_Leader_1


# 129 "data//maps/GalecrestCityGym/scripts.pory"
GalecrestCityGym_Leader_Movement_0:
# 129 "data//maps/GalecrestCityGym/scripts.pory"
	walk_up
# 129 "data//maps/GalecrestCityGym/scripts.pory"
	walk_up
	step_end

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
	.string "the left door if you DON'T like the awful\l"
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

GalecrestCityGym_Leader_Text_1:
# 115 "data//maps/GalecrestCityGym/scripts.pory"
	.string "{PLAYER} received the STOIC BADGE\n"
	.string "from KOHLA.$"

GalecrestCityGym_Leader_Text_2:
# 123 "data//maps/GalecrestCityGym/scripts.pory"
	.string "The STOIC BADGE lets you control {PKMN}\n"
	.string "upto lv. 30 and lets you use the HM move\l"
	.string "ROCK SMASH outside of battle.$"

GalecrestCityGym_Leader_Text_3:
# 127 "data//maps/GalecrestCityGym/scripts.pory"
	.string "{PLAYER}, despite being a\n"
	.string "disrespectful chum, I owe you. You\l"
	.string "showed me my lack of strength. That's\l"
	.string "why I chose CERULEDGE as my companion.\l"
	.string "I don't care if other detectives see it\l"
	.string "as evil, because I see it as strong.\p"
	.string "Now enough of this gym business. We\n"
	.string "have to stop Team Somber. I'll see you\l"
	.string "in Silversun City.$"

GalecrestCityGym_Text_LeaderIntro::
# 139 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Yes {PLAYER}, it's me. Traditionally,\n"
	.string "the Ace Rookie of the graduating class\l"
	.string "assumes Gym Leader duties for a year\l"
	.string "after they graduate. And this year,\l"
	.string "that's me! Normally I would use the gym\l"
	.string "standard NORMAL {PKMN}, but since it's you,\l"
	.string "I'm going to make an exception. I'm\l"
	.string "going to crush you with my REAL team!$"

GalecrestCityGym_Text_Defeated::
# 143 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Another defeat...despite evolving my\n"
	.string "CHARCADET, I still couldn't win. I need\l"
	.string "strength. This is yours, {PLAYER}$"
