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
# 28 "data//maps/GalecrestCityGym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, GalecrestCityGym_Red_2
# 49 "data//maps/GalecrestCityGym/scripts.pory"
	goto_if_set FLAG_GALECRESTGYM_SPENSER_WATER, GalecrestCityGym_Red_8
# 52 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_6
# 53 "data//maps/GalecrestCityGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 54 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_7, MSGBOX_NPC
# 55 "data//maps/GalecrestCityGym/scripts.pory"
	setflag FLAG_GALECRESTGYM_SPENSER_WATER
GalecrestCityGym_Red_1:
# 58 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	end

GalecrestCityGym_Red_2:
# 29 "data//maps/GalecrestCityGym/scripts.pory"
	goto_if_set FLAG_GALECRESTGYM_SPENSER_REWARD, GalecrestCityGym_Red_5
# 32 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_1
# 33 "data//maps/GalecrestCityGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCityGym_Red_Text_2, GalecrestCityGym_Red_Text_3
# 35 "data//maps/GalecrestCityGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCityGym_Red_12
# 38 "data//maps/GalecrestCityGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCityGym_Red_15
GalecrestCityGym_Red_11:
# 45 "data//maps/GalecrestCityGym/scripts.pory"
	setflag FLAG_GALECRESTGYM_SPENSER_REWARD
# 46 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_4, MSGBOX_NPC
	goto GalecrestCityGym_Red_1

GalecrestCityGym_Red_5:
# 30 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_0, MSGBOX_NPC
	goto GalecrestCityGym_Red_1

GalecrestCityGym_Red_8:
# 50 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_5, MSGBOX_NPC
	goto GalecrestCityGym_Red_1

GalecrestCityGym_Red_12:
# 36 "data//maps/GalecrestCityGym/scripts.pory"
	giveitem ITEM_NORMAL_GEM
	goto GalecrestCityGym_Red_11

GalecrestCityGym_Red_15:
# 39 "data//maps/GalecrestCityGym/scripts.pory"
	giveitem ITEM_SILK_SCARF
	goto GalecrestCityGym_Red_11


GalecrestCityGym_NPC1::
# 64 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC1_Text_0, MSGBOX_NPC
	end


GalecrestCityGym_NPC2::
# 69 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC2_Text_0, MSGBOX_NPC
	end


GalecrestCityGym_NPC3::
# 74 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC3_Text_0, MSGBOX_NPC
	end


GalecrestCityGym_Trainer1::
# 94 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_A, GalecrestCityGym_Trainer1_Text_0, GalecrestCityGym_Trainer1_Text_1
# 95 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer1_Text_2
# 96 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer2::
# 101 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_B, GalecrestCityGym_Trainer2_Text_0, GalecrestCityGym_Trainer2_Text_1
# 102 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer2_Text_1
# 103 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer3::
# 108 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_C, GalecrestCityGym_Trainer3_Text_0, GalecrestCityGym_Trainer3_Text_1
# 109 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer3_Text_2
# 110 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Leader::
# 130 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 131 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 133 "data//maps/GalecrestCityGym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, GalecrestCityGym_Leader_2
# 136 "data//maps/GalecrestCityGym/scripts.pory"
	special SaveGame
# 137 "data//maps/GalecrestCityGym/scripts.pory"
	waitstate
# 138 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 141 "data//maps/GalecrestCityGym/scripts.pory"
	speakername GalecrestCityGym_Leader_Text_1
# 142 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Text_LeaderIntro
# 144 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECRESTGYM_LEADER, GalecrestCityGym_Text_Defeated
# 148 "data//maps/GalecrestCityGym/scripts.pory"
	speakername GalecrestCityGym_Leader_Text_1
# 149 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_2
# 150 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 153 "data//maps/GalecrestCityGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 154 "data//maps/GalecrestCityGym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 155 "data//maps/GalecrestCityGym/scripts.pory"
	speakername GalecrestCityGym_Leader_Text_1
# 156 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_3
# 159 "data//maps/GalecrestCityGym/scripts.pory"
	speakername GalecrestCityGym_Leader_Text_1
# 160 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_4
# 161 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 162 "data//maps/GalecrestCityGym/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 163 "data//maps/GalecrestCityGym/scripts.pory"
	delay 16
# 166 "data//maps/GalecrestCityGym/scripts.pory"
	speakername GalecrestCityGym_Leader_Text_1
# 167 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_5
# 168 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 169 "data//maps/GalecrestCityGym/scripts.pory"
	delay 16
# 171 "data//maps/GalecrestCityGym/scripts.pory"
	opendoor 25, 52
# 172 "data//maps/GalecrestCityGym/scripts.pory"
	waitdooranim
# 173 "data//maps/GalecrestCityGym/scripts.pory"
	applymovement 5, GalecrestCityGym_Leader_Movement_0
# 174 "data//maps/GalecrestCityGym/scripts.pory"
	waitmovement 0
# 175 "data//maps/GalecrestCityGym/scripts.pory"
	delay 8
# 176 "data//maps/GalecrestCityGym/scripts.pory"
	removeobject 5
# 177 "data//maps/GalecrestCityGym/scripts.pory"
	delay 8
# 178 "data//maps/GalecrestCityGym/scripts.pory"
	closedoor 25, 52
# 179 "data//maps/GalecrestCityGym/scripts.pory"
	waitdooranim
GalecrestCityGym_Leader_1:
# 183 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return

GalecrestCityGym_Leader_2:
# 134 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_0
	goto GalecrestCityGym_Leader_1


# 173 "data//maps/GalecrestCityGym/scripts.pory"
GalecrestCityGym_Leader_Movement_0:
# 173 "data//maps/GalecrestCityGym/scripts.pory"
	walk_up
	step_end

GalecrestCityGym_Red_Text_0:
# 30 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

GalecrestCityGym_Red_Text_1:
# 32 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Well done champ-in-the-making! The Gym\n"
	.string "Leader pulled a fast one on you, using\l"
	.string "his real team, and you still made it out!\l"
	.string "In recognition of your victory, I'd like\l"
	.string "to give you something. Which of these\l"
	.string "do you fancy?$"

GalecrestCityGym_Red_Text_2:
# 33 "data//maps/GalecrestCityGym/scripts.pory"
	.string "NORMAL GEM$"

GalecrestCityGym_Red_Text_3:
# 33 "data//maps/GalecrestCityGym/scripts.pory"
	.string "SILK SCARF$"

GalecrestCityGym_Red_Text_4:
# 46 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

GalecrestCityGym_Red_Text_5:
# 50 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Most detectives use NORMAL type\n"
	.string "Pokémon that are comfortable in a\l"
	.string "variety of urban situations. FIGHTING\l"
	.string "type Pokémon should do well here, and\l"
	.string "GHOST type Pokémon are immune to\l"
	.string "NORMAL type attacks!$"

GalecrestCityGym_Red_Text_6:
# 52 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Greetings trainer! Good to see you\n"
	.string "again. First, have some water.$"

GalecrestCityGym_Red_Text_7:
# 54 "data//maps/GalecrestCityGym/scripts.pory"
	.string "This Gym is managed by the Detective\n"
	.string "Academy Student Council. Most\l"
	.string "detectives use NORMAL type Pokémon\l"
	.string "that are comfortable in a variety of\l"
	.string "urban situations.\p"
	.string "FIGHTING type Pokémon should do well\n"
	.string "here, and GHOST type Pokémon are\l"
	.string "immune to NORMAL type attacks!$"

GalecrestCityGym_NPC1_Text_0:
# 64 "data//maps/GalecrestCityGym/scripts.pory"
	.string "This Gym is supposed to be a normal\n"
	.string "type gym...except all the trainers have\l"
	.string "a Charcadet! How is that fair?$"

GalecrestCityGym_NPC2_Text_0:
# 69 "data//maps/GalecrestCityGym/scripts.pory"
	.string "I'm the detective overseeing the\n"
	.string "cadets. All the best for your gym\l"
	.string "challenge!$"

GalecrestCityGym_NPC3_Text_0:
# 74 "data//maps/GalecrestCityGym/scripts.pory"
	.string "For a bunch of students, these trainers\n"
	.string "sure don't take it easy on you...$"

GalecrestCityGym_Trainer1_Text_0:
# 94 "data//maps/GalecrestCityGym/scripts.pory"
	.string "I'm a first-year at the Academy. But\n"
	.string "don't think I'm a pushover!$"

GalecrestCityGym_Trainer1_Text_1:
# 94 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You're not half bad. Go through the door\n"
	.string "that rhymes with FIGHT.$"

GalecrestCityGym_Trainer1_Text_2:
# 95 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Go through the door that rhymes with\n"
	.string "FIGHT.$"

GalecrestCityGym_Trainer2_Text_0:
# 101 "data//maps/GalecrestCityGym/scripts.pory"
	.string "After our internship here, we can\n"
	.string "evolve our Charcadet into Armarouge!$"

GalecrestCityGym_Trainer2_Text_1:
# 101 "data//maps/GalecrestCityGym/scripts.pory"
	.string "If I keep losing to trainers like you,\n"
	.string "I'll never get an Armarouge! Go through\l"
	.string "the left door if you DON'T like the awful\l"
	.string "Ceruledge.$"

GalecrestCityGym_Trainer3_Text_0:
# 108 "data//maps/GalecrestCityGym/scripts.pory"
	.string "The gym leader is through the next\n"
	.string "door. But you won't make it because\l"
	.string "your journey ends here!$"

GalecrestCityGym_Trainer3_Text_1:
# 108 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You may have beaten me, but you won't\n"
	.string "beat our Gym Leader. He's already\l"
	.string "evolved his Charcadet to Armarouge!\l"
	.string "Don't not go through the door that\l"
	.string "isn't not to the left of the right.$"

GalecrestCityGym_Trainer3_Text_2:
# 109 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Don't not go through the door that\n"
	.string "isn't not to the left of the right.$"

GalecrestCityGym_Leader_Text_0:
# 134 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You win.$"

GalecrestCityGym_Leader_Text_1:
# 141 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Kohla$"

GalecrestCityGym_Leader_Text_2:
# 149 "data//maps/GalecrestCityGym/scripts.pory"
	.string "This is yours, {PLAYER}.$"

GalecrestCityGym_Leader_Text_3:
# 156 "data//maps/GalecrestCityGym/scripts.pory"
	.string "{PLAYER} received the Stoic Badge\n"
	.string "from Kohla.$"

GalecrestCityGym_Leader_Text_4:
# 160 "data//maps/GalecrestCityGym/scripts.pory"
	.string "The Stoic Badge lets you use Rock\n"
	.string "Smash outside of battle.\p"
	.string "...\p"
	.string "And this is yours too.$"

GalecrestCityGym_Leader_Text_5:
# 167 "data//maps/GalecrestCityGym/scripts.pory"
	.string "{PLAYER}, despite being the chum you\n"
	.string "are, I owe you. You showed me my lack of\l"
	.string "strength. That's why I chose Ceruledge\l"
	.string "as my companion. I don't care if other\l"
	.string "detectives see it as bad, because I see\l"
	.string "it as strong.\p"
	.string "...\p"
	.string "Now enough of this gym business. We\n"
	.string "have to stop Team Somber. I'll see you\l"
	.string "in Silversun City.$"

GalecrestCityGym_Text_LeaderIntro::
# 188 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Yes {PLAYER}, it's me. Traditionally,\n"
	.string "the Ace Rookie of the graduating class\l"
	.string "assumes Gym Leader duties for a year\l"
	.string "after they graduate.\p"
	.string "And this year, that's me! Normally I\n"
	.string "would use the gym standard NORMAL\l"
	.string "Pokémon, but since it's you, I'm going to\l"
	.string "make an exception.\p"
	.string "I'll crush you with my REAL team!$"

GalecrestCityGym_Text_Defeated::
# 192 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Another defeat...despite evolving my\n"
	.string "Charcadet, I still couldn't win. I need\l"
	.string "more strength...$"
