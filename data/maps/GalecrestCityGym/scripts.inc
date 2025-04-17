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
	msgbox GalecrestCityGym_Red_Text_7
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
	msgbox GalecrestCityGym_Red_Text_4
	goto GalecrestCityGym_Red_1

GalecrestCityGym_Red_5:
# 30 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_0
	goto GalecrestCityGym_Red_1

GalecrestCityGym_Red_8:
# 50 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_5
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
	lockall
# 65 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 66 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC1_Text_0
# 67 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return


GalecrestCityGym_NPC2::
# 71 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 72 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 73 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC2_Text_0
# 74 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return


GalecrestCityGym_NPC3::
# 78 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 79 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 80 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC3_Text_0
# 81 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return


GalecrestCityGym_Trainer1::
# 100 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_A, GalecrestCityGym_Trainer1_Text_0, GalecrestCityGym_Trainer1_Text_1
# 101 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer1_Text_2
# 102 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer2::
# 107 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_B, GalecrestCityGym_Trainer2_Text_0, GalecrestCityGym_Trainer2_Text_1
# 108 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer2_Text_1
# 109 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer3::
# 114 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_C, GalecrestCityGym_Trainer3_Text_0, GalecrestCityGym_Trainer3_Text_1
# 115 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer3_Text_2
# 116 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Leader::
# 136 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 137 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 139 "data//maps/GalecrestCityGym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, GalecrestCityGym_Leader_2
# 142 "data//maps/GalecrestCityGym/scripts.pory"
	special SaveGame
# 143 "data//maps/GalecrestCityGym/scripts.pory"
	waitstate
# 144 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 147 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Text_LeaderIntro
# 149 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECRESTGYM_LEADER, GalecrestCityGym_Text_Defeated
# 153 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_1
# 154 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 157 "data//maps/GalecrestCityGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 158 "data//maps/GalecrestCityGym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 159 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_2
# 162 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_3
# 163 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 164 "data//maps/GalecrestCityGym/scripts.pory"
	giveitem ITEM_RARE_SHARD, 3
# 165 "data//maps/GalecrestCityGym/scripts.pory"
	delay 16
# 168 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_4
# 169 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 170 "data//maps/GalecrestCityGym/scripts.pory"
	delay 16
# 172 "data//maps/GalecrestCityGym/scripts.pory"
	opendoor 25, 52
# 173 "data//maps/GalecrestCityGym/scripts.pory"
	waitdooranim
# 174 "data//maps/GalecrestCityGym/scripts.pory"
	applymovement 5, GalecrestCityGym_Leader_Movement_0
# 175 "data//maps/GalecrestCityGym/scripts.pory"
	waitmovement 0
# 176 "data//maps/GalecrestCityGym/scripts.pory"
	delay 8
# 177 "data//maps/GalecrestCityGym/scripts.pory"
	removeobject 5
# 178 "data//maps/GalecrestCityGym/scripts.pory"
	delay 8
# 179 "data//maps/GalecrestCityGym/scripts.pory"
	closedoor 25, 52
# 180 "data//maps/GalecrestCityGym/scripts.pory"
	waitdooranim
GalecrestCityGym_Leader_1:
# 184 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return

GalecrestCityGym_Leader_2:
# 140 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_0
	goto GalecrestCityGym_Leader_1


# 174 "data//maps/GalecrestCityGym/scripts.pory"
GalecrestCityGym_Leader_Movement_0:
# 174 "data//maps/GalecrestCityGym/scripts.pory"
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
	.string "urban situations. FIGHTING type\l"
	.string "Pokémon should do well here, and GHOST\l"
	.string "type Pokémon are immune to NORMAL type\l"
	.string "attacks!$"

GalecrestCityGym_NPC1_Text_0:
# 66 "data//maps/GalecrestCityGym/scripts.pory"
	.string "This Gym is supposed to be a normal\n"
	.string "type gym...except all the trainers have\l"
	.string "a Charcadet! How is that fair?$"

GalecrestCityGym_NPC2_Text_0:
# 73 "data//maps/GalecrestCityGym/scripts.pory"
	.string "I'm the detective overseeing the\n"
	.string "cadets. All the best for your gym\l"
	.string "challenge!$"

GalecrestCityGym_NPC3_Text_0:
# 80 "data//maps/GalecrestCityGym/scripts.pory"
	.string "For a bunch of students, these trainers\n"
	.string "sure don't take it easy on you...$"

GalecrestCityGym_Trainer1_Text_0:
# 100 "data//maps/GalecrestCityGym/scripts.pory"
	.string "I'm a first-year at the Academy. But\n"
	.string "don't think I'm a pushover!$"

GalecrestCityGym_Trainer1_Text_1:
# 100 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You're not half bad. Go through the door\n"
	.string "that rhymes with FIGHT.$"

GalecrestCityGym_Trainer1_Text_2:
# 101 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Go through the door that rhymes with\n"
	.string "FIGHT.$"

GalecrestCityGym_Trainer2_Text_0:
# 107 "data//maps/GalecrestCityGym/scripts.pory"
	.string "After our internship here, we can\n"
	.string "evolve our Charcadet into Armarouge!$"

GalecrestCityGym_Trainer2_Text_1:
# 107 "data//maps/GalecrestCityGym/scripts.pory"
	.string "If I keep losing to trainers like you,\n"
	.string "I'll never get an Armarouge! Go through\l"
	.string "the left door if you DON'T like the awful\l"
	.string "Ceruledge.$"

GalecrestCityGym_Trainer3_Text_0:
# 114 "data//maps/GalecrestCityGym/scripts.pory"
	.string "The gym leader is through the next\n"
	.string "door. But you won't make it because\l"
	.string "your journey ends here!$"

GalecrestCityGym_Trainer3_Text_1:
# 114 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You may have beaten me, but you won't\n"
	.string "beat our Gym Leader. He's already\l"
	.string "evolved his Charcadet to Armarouge!\l"
	.string "Don't not go through the door that\l"
	.string "isn't not to the left of the right.$"

GalecrestCityGym_Trainer3_Text_2:
# 115 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Don't not go through the door that\n"
	.string "isn't not to the left of the right.$"

GalecrestCityGym_Leader_Text_0:
# 140 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You win.$"

GalecrestCityGym_Leader_Text_1:
# 153 "data//maps/GalecrestCityGym/scripts.pory"
	.string "KOHLA: This is yours, {PLAYER}.$"

GalecrestCityGym_Leader_Text_2:
# 159 "data//maps/GalecrestCityGym/scripts.pory"
	.string "{PLAYER} received the STOIC BADGE\n"
	.string "from KOHLA.$"

GalecrestCityGym_Leader_Text_3:
# 162 "data//maps/GalecrestCityGym/scripts.pory"
	.string "KOHLA: The Stoic Badge lets you use the\n"
	.string "HM move ROCK SMASH outside of battle.\p"
	.string "...\p"
	.string "KOHLA: And these are yours too.$"

GalecrestCityGym_Leader_Text_4:
# 168 "data//maps/GalecrestCityGym/scripts.pory"
	.string "KOHLA: {PLAYER}, despite being the\n"
	.string "chum you are, I owe you. You showed me\l"
	.string "my lack of strength. That's why I chose\l"
	.string "Ceruledge as my companion. I don't care\l"
	.string "if other detectives see it as bad,\l"
	.string "because I see it as strong.\p"
	.string "...\p"
	.string "KOHLA: Now enough of this gym business.\n"
	.string "We have to stop Team Somber. I'll see\l"
	.string "you in Silversun City.$"

GalecrestCityGym_Text_LeaderIntro::
# 189 "data//maps/GalecrestCityGym/scripts.pory"
	.string "KOHLA: Yes {PLAYER}, it's me.\n"
	.string "Traditionally, the Ace Rookie of the\l"
	.string "graduating class assumes Gym Leader\l"
	.string "duties for a year after they graduate.\p"
	.string "KOHLA: And this year, that's me!\n"
	.string "Normally I would use the gym standard\l"
	.string "NORMAL Pokémon, but since it's you, I'm\l"
	.string "going to make an exception.\p"
	.string "KOHLA: I'm going to crush you with my\n"
	.string "REAL team!$"

GalecrestCityGym_Text_Defeated::
# 193 "data//maps/GalecrestCityGym/scripts.pory"
	.string "KOHLA: Another defeat...despite\n"
	.string "evolving my Charcadet, I still couldn't\l"
	.string "win. I need more strength...$"
