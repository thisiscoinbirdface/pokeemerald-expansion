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
	trainerbattle_single TRAINER_GALECRESTGYM_B, GalecrestCityGym_Trainer2_Text_0, GalecrestCityGym_Trainer2_Text_1
# 75 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer2_Text_1
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
	call Common_EventScript_SaveGame
# 104 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 105 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 107 "data//maps/GalecrestCityGym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, GalecrestCityGym_Leader_2
# 111 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Text_LeaderIntro
# 113 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECRESTGYM_LEADER, GalecrestCityGym_Text_Defeated
# 117 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_1
# 118 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 121 "data//maps/GalecrestCityGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 122 "data//maps/GalecrestCityGym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 123 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_2
# 126 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_3
# 127 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 128 "data//maps/GalecrestCityGym/scripts.pory"
	delay 16
# 131 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_4
# 132 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 133 "data//maps/GalecrestCityGym/scripts.pory"
	delay 16
# 134 "data//maps/GalecrestCityGym/scripts.pory"
	applymovement 5, GalecrestCityGym_Leader_Movement_0
# 135 "data//maps/GalecrestCityGym/scripts.pory"
	waitmovement 0
# 136 "data//maps/GalecrestCityGym/scripts.pory"
	removeobject 5
GalecrestCityGym_Leader_1:
# 139 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return

GalecrestCityGym_Leader_2:
# 108 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_0
	goto GalecrestCityGym_Leader_1


# 134 "data//maps/GalecrestCityGym/scripts.pory"
GalecrestCityGym_Leader_Movement_0:
# 134 "data//maps/GalecrestCityGym/scripts.pory"
	walk_up
	step_end

GalecrestCityGym_Red_Text_0:
# 27 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Greetings trainer! Good to see you\n"
	.string "again. This Gym is managed by the\l"
	.string "Detective Academy Student Council.\l"
	.string "Most detectives use NORMAL type\l"
	.string "Pokemon that are comfortable in a\l"
	.string "variety of urban situations. FIGHTING\l"
	.string "type Pokemon should do well here!$"

GalecrestCityGym_NPC1_Text_0:
# 33 "data//maps/GalecrestCityGym/scripts.pory"
	.string "This Gym is supposed to be a normal\n"
	.string "type gym...except all the trainers have\l"
	.string "a Charcadet! How is that fair?$"

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

GalecrestCityGym_Trainer1_Text_2:
# 68 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Go through the door that rhymes with\n"
	.string "FIGHT.$"

GalecrestCityGym_Trainer2_Text_0:
# 74 "data//maps/GalecrestCityGym/scripts.pory"
	.string "After our internship here, we can\n"
	.string "evolve our Charcadet into Armarouge!$"

GalecrestCityGym_Trainer2_Text_1:
# 74 "data//maps/GalecrestCityGym/scripts.pory"
	.string "If I keep losing to trainers like you,\n"
	.string "I'll never get an Armarouge! Go through\l"
	.string "the left door if you DON'T like the awful\l"
	.string "Ceruledge.$"

GalecrestCityGym_Trainer3_Text_0:
# 81 "data//maps/GalecrestCityGym/scripts.pory"
	.string "The gym leader is through the next\n"
	.string "door. But you won't make it because\l"
	.string "your journey ends here!$"

GalecrestCityGym_Trainer3_Text_1:
# 81 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You may have beaten me, but you won't\n"
	.string "beat our Gym Leader. He's already\l"
	.string "evolved his Charcadet to Armarouge!\l"
	.string "Don't not go through the door that\l"
	.string "isn't not to the left of the right.$"

GalecrestCityGym_Trainer3_Text_2:
# 82 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Don't not go through the door that\n"
	.string "isn't not to the left of the right.$"

GalecrestCityGym_Leader_Text_0:
# 108 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You win.$"

GalecrestCityGym_Leader_Text_1:
# 117 "data//maps/GalecrestCityGym/scripts.pory"
	.string "KOHLA: This is yours, {PLAYER}.$"

GalecrestCityGym_Leader_Text_2:
# 123 "data//maps/GalecrestCityGym/scripts.pory"
	.string "{PLAYER} received the STOIC BADGE\n"
	.string "from KOHLA.$"

GalecrestCityGym_Leader_Text_3:
# 126 "data//maps/GalecrestCityGym/scripts.pory"
	.string "KOHLA: The Stoic Badge lets you control\n"
	.string "Pokemon upto lv. 30 and lets you use\l"
	.string "the HM move ROCK SMASH outside of\l"
	.string "battle.$"

GalecrestCityGym_Leader_Text_4:
# 131 "data//maps/GalecrestCityGym/scripts.pory"
	.string "KOHLA: {PLAYER}, despite being a\n"
	.string "disrespectful chum, I owe you. You\l"
	.string "showed me my lack of strength. That's\l"
	.string "why I chose Ceruledge as my companion.\l"
	.string "I don't care if other detectives see it\l"
	.string "as bad, because I see it as strong.\p"
	.string "...\p"
	.string "KOHLA: Now enough of this gym business.\n"
	.string "We have to stop Team Somber. I'll see\l"
	.string "you in Silversun City.$"

GalecrestCityGym_Text_LeaderIntro::
# 144 "data//maps/GalecrestCityGym/scripts.pory"
	.string "KOHLA: Yes {PLAYER}, it's me.\n"
	.string "Traditionally, the Ace Rookie of the\l"
	.string "graduating class assumes Gym Leader\l"
	.string "duties for a year after they graduate.\p"
	.string "KOHLA: And this year, that's me!\n"
	.string "Normally I would use the gym standard\l"
	.string "NORMAL Pokemon, but since it's you, I'm\l"
	.string "going to make an exception.\p"
	.string "KOHLA: I'm going to crush you with my\n"
	.string "REAL team!$"

GalecrestCityGym_Text_Defeated::
# 148 "data//maps/GalecrestCityGym/scripts.pory"
	.string "KOHLA: Another defeat...despite\n"
	.string "evolving my Charcadet, I still couldn't\l"
	.string "win. I need more strength...$"
