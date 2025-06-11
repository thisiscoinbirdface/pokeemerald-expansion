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
# 36 "data//maps/GalecrestCityGym/scripts.pory"
	goto_if_set FLAG_GALECRESTGYM_SPENSER_WATER, GalecrestCityGym_Red_8
# 39 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_3
# 40 "data//maps/GalecrestCityGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 41 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_4, MSGBOX_NPC
# 42 "data//maps/GalecrestCityGym/scripts.pory"
	setflag FLAG_GALECRESTGYM_SPENSER_WATER
GalecrestCityGym_Red_1:
# 45 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	end

GalecrestCityGym_Red_2:
# 29 "data//maps/GalecrestCityGym/scripts.pory"
	goto_if_set FLAG_GALECRESTGYM_SPENSER_REWARD, GalecrestCityGym_Red_5
# 32 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_1
# 33 "data//maps/GalecrestCityGym/scripts.pory"
	goto GalecrestCityGym_Red_Reward
	goto GalecrestCityGym_Red_1

GalecrestCityGym_Red_5:
# 30 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_0, MSGBOX_NPC
	goto GalecrestCityGym_Red_1

GalecrestCityGym_Red_8:
# 37 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Text_2, MSGBOX_NPC
	goto GalecrestCityGym_Red_1


GalecrestCityGym_Red_Reward::
# 50 "data//maps/GalecrestCityGym/scripts.pory"
	message GalecrestCityGym_Red_Reward_Text_0
# 51 "data//maps/GalecrestCityGym/scripts.pory"
	waitmessage
# 52 "data//maps/GalecrestCityGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCityGym_Red_Reward_Text_1, GalecrestCityGym_Red_Reward_Text_2
# 53 "data//maps/GalecrestCityGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCityGym_Red_Reward_2
GalecrestCityGym_Red_Reward_1:
# 54 "data//maps/GalecrestCityGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCityGym_Red_Reward_5
GalecrestCityGym_Red_Reward_4:
# 55 "data//maps/GalecrestCityGym/scripts.pory"
	goto GalecrestCityGym_Red_Reward_Give
	return

GalecrestCityGym_Red_Reward_2:
# 53 "data//maps/GalecrestCityGym/scripts.pory"
	setvar VAR_0x8006, ITEM_NORMAL_GEM
	goto GalecrestCityGym_Red_Reward_1

GalecrestCityGym_Red_Reward_5:
# 54 "data//maps/GalecrestCityGym/scripts.pory"
	setvar VAR_0x8006, ITEM_SILK_SCARF
	goto GalecrestCityGym_Red_Reward_4


GalecrestCityGym_Red_Reward_Give::
# 59 "data//maps/GalecrestCityGym/scripts.pory"
	showitemdescription
# 60 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Reward_Give_Text_0, MSGBOX_YESNO
# 61 "data//maps/GalecrestCityGym/scripts.pory"
	hideitemdescription
# 62 "data//maps/GalecrestCityGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCityGym_Red_Reward_Give_1
# 67 "data//maps/GalecrestCityGym/scripts.pory"
	goto GalecrestCityGym_Red_Reward
	return

GalecrestCityGym_Red_Reward_Give_1:
# 63 "data//maps/GalecrestCityGym/scripts.pory"
	giveitem VAR_0x8006
# 64 "data//maps/GalecrestCityGym/scripts.pory"
	setflag FLAG_GALECRESTGYM_SPENSER_REWARD
# 65 "data//maps/GalecrestCityGym/scripts.pory"
	goto GalecrestCityGym_Red_Reward_End
	return


GalecrestCityGym_Red_Reward_End::
# 72 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Red_Reward_End_Text_0, MSGBOX_NPC
	end


GalecrestCityGym_NPC1::
# 98 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC1_Text_0, MSGBOX_NPC
	end


GalecrestCityGym_NPC2::
# 103 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC2_Text_0, MSGBOX_NPC
	end


GalecrestCityGym_NPC3::
# 108 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_NPC3_Text_0, MSGBOX_NPC
	end


GalecrestCityGym_Trainer1::
# 128 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_A, GalecrestCityGym_Trainer1_Text_0, GalecrestCityGym_Trainer1_Text_1
# 129 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer1_Text_2
# 130 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer2::
# 135 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_B, GalecrestCityGym_Trainer2_Text_0, GalecrestCityGym_Trainer2_Text_1
# 136 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer2_Text_1
# 137 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Trainer3::
# 142 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_single TRAINER_GALECRESTGYM_C, GalecrestCityGym_Trainer3_Text_0, GalecrestCityGym_Trainer3_Text_1
# 143 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Trainer3_Text_2
# 144 "data//maps/GalecrestCityGym/scripts.pory"
	release
	end


GalecrestCityGym_Leader::
# 164 "data//maps/GalecrestCityGym/scripts.pory"
	lockall
# 165 "data//maps/GalecrestCityGym/scripts.pory"
	faceplayer
# 167 "data//maps/GalecrestCityGym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, GalecrestCityGym_Leader_2
# 170 "data//maps/GalecrestCityGym/scripts.pory"
	call Common_EventScript_SaveGameBeforeBattle
# 173 "data//maps/GalecrestCityGym/scripts.pory"
	speakername GalecrestCityGym_Leader_Text_1
# 174 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Text_LeaderIntro
# 176 "data//maps/GalecrestCityGym/scripts.pory"
	trainerbattle_no_intro TRAINER_GALECRESTGYM_LEADER, GalecrestCityGym_Text_Defeated
# 180 "data//maps/GalecrestCityGym/scripts.pory"
	speakername GalecrestCityGym_Leader_Text_1
# 181 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_2
# 182 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 185 "data//maps/GalecrestCityGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 186 "data//maps/GalecrestCityGym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 187 "data//maps/GalecrestCityGym/scripts.pory"
	speakername GalecrestCityGym_Leader_Text_1
# 188 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_3
# 191 "data//maps/GalecrestCityGym/scripts.pory"
	speakername GalecrestCityGym_Leader_Text_1
# 192 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_4
# 193 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 194 "data//maps/GalecrestCityGym/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 195 "data//maps/GalecrestCityGym/scripts.pory"
	delay 16
# 198 "data//maps/GalecrestCityGym/scripts.pory"
	speakername GalecrestCityGym_Leader_Text_1
# 199 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_5
# 200 "data//maps/GalecrestCityGym/scripts.pory"
	release
# 201 "data//maps/GalecrestCityGym/scripts.pory"
	delay 16
# 203 "data//maps/GalecrestCityGym/scripts.pory"
	opendoor 25, 52
# 204 "data//maps/GalecrestCityGym/scripts.pory"
	waitdooranim
# 205 "data//maps/GalecrestCityGym/scripts.pory"
	applymovement 5, GalecrestCityGym_Leader_Movement_0
# 206 "data//maps/GalecrestCityGym/scripts.pory"
	waitmovement 0
# 207 "data//maps/GalecrestCityGym/scripts.pory"
	delay 8
# 208 "data//maps/GalecrestCityGym/scripts.pory"
	removeobject 5
# 209 "data//maps/GalecrestCityGym/scripts.pory"
	delay 8
# 210 "data//maps/GalecrestCityGym/scripts.pory"
	closedoor 25, 52
# 211 "data//maps/GalecrestCityGym/scripts.pory"
	waitdooranim
GalecrestCityGym_Leader_1:
# 215 "data//maps/GalecrestCityGym/scripts.pory"
	releaseall
	return

GalecrestCityGym_Leader_2:
# 168 "data//maps/GalecrestCityGym/scripts.pory"
	msgbox GalecrestCityGym_Leader_Text_0
	goto GalecrestCityGym_Leader_1


# 205 "data//maps/GalecrestCityGym/scripts.pory"
GalecrestCityGym_Leader_Movement_0:
# 205 "data//maps/GalecrestCityGym/scripts.pory"
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
	.string "to give you something.$"

GalecrestCityGym_Red_Text_2:
# 37 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Most detectives use NORMAL type\n"
	.string "Pokémon that are comfortable in a\l"
	.string "variety of urban situations. FIGHTING\l"
	.string "type Pokémon should do well here, and\l"
	.string "GHOST type Pokémon are immune to\l"
	.string "NORMAL type attacks!$"

GalecrestCityGym_Red_Text_3:
# 39 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Greetings trainer! Good to see you\n"
	.string "again. First, have some water.$"

GalecrestCityGym_Red_Text_4:
# 41 "data//maps/GalecrestCityGym/scripts.pory"
	.string "This Gym is managed by the Detective\n"
	.string "Academy Student Council. Most\l"
	.string "detectives use NORMAL type Pokémon\l"
	.string "that are comfortable in a variety of\l"
	.string "urban situations.\p"
	.string "FIGHTING type Pokémon should do well\n"
	.string "here, and GHOST type Pokémon are\l"
	.string "immune to NORMAL type attacks!$"

GalecrestCityGym_Red_Reward_Text_0:
# 50 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Which of these do you fancy?$"

GalecrestCityGym_Red_Reward_Text_1:
# 52 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Normal Gem$"

GalecrestCityGym_Red_Reward_Text_2:
# 52 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Silk Scarf$"

GalecrestCityGym_Red_Reward_Give_Text_0:
# 60 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Are you sure?$"

GalecrestCityGym_Red_Reward_End_Text_0:
# 72 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

GalecrestCityGym_NPC1_Text_0:
# 98 "data//maps/GalecrestCityGym/scripts.pory"
	.string "This Gym is supposed to be a normal\n"
	.string "type gym...except all the trainers have\l"
	.string "a Charcadet! How is that fair?$"

GalecrestCityGym_NPC2_Text_0:
# 103 "data//maps/GalecrestCityGym/scripts.pory"
	.string "I'm the detective overseeing the\n"
	.string "cadets. All the best for your gym\l"
	.string "challenge!$"

GalecrestCityGym_NPC3_Text_0:
# 108 "data//maps/GalecrestCityGym/scripts.pory"
	.string "For a bunch of students, these trainers\n"
	.string "sure don't take it easy on you...$"

GalecrestCityGym_Trainer1_Text_0:
# 128 "data//maps/GalecrestCityGym/scripts.pory"
	.string "I'm a first-year at the Academy. But\n"
	.string "don't think I'm a pushover!$"

GalecrestCityGym_Trainer1_Text_1:
# 128 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You're not half bad. Go through the door\n"
	.string "that rhymes with FIGHT.$"

GalecrestCityGym_Trainer1_Text_2:
# 129 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Go through the door that rhymes with\n"
	.string "FIGHT.$"

GalecrestCityGym_Trainer2_Text_0:
# 135 "data//maps/GalecrestCityGym/scripts.pory"
	.string "After our internship here, we can\n"
	.string "evolve our Charcadet into Armarouge!$"

GalecrestCityGym_Trainer2_Text_1:
# 135 "data//maps/GalecrestCityGym/scripts.pory"
	.string "If I keep losing to trainers like you,\n"
	.string "I'll never get an Armarouge! Go through\l"
	.string "the left door if you DON'T like the awful\l"
	.string "Ceruledge.$"

GalecrestCityGym_Trainer3_Text_0:
# 142 "data//maps/GalecrestCityGym/scripts.pory"
	.string "The gym leader is through the next\n"
	.string "door. But you won't make it because\l"
	.string "your journey ends here!$"

GalecrestCityGym_Trainer3_Text_1:
# 142 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You may have beaten me, but you won't\n"
	.string "beat our Gym Leader. He's already\l"
	.string "evolved his Charcadet to Armarouge!\l"
	.string "Don't not go through the door that\l"
	.string "isn't not to the left of the right.$"

GalecrestCityGym_Trainer3_Text_2:
# 143 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Don't not go through the door that\n"
	.string "isn't not to the left of the right.$"

GalecrestCityGym_Leader_Text_0:
# 168 "data//maps/GalecrestCityGym/scripts.pory"
	.string "You win.$"

GalecrestCityGym_Leader_Text_1:
# 173 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Kohla$"

GalecrestCityGym_Leader_Text_2:
# 181 "data//maps/GalecrestCityGym/scripts.pory"
	.string "This is yours, {PLAYER}.$"

GalecrestCityGym_Leader_Text_3:
# 188 "data//maps/GalecrestCityGym/scripts.pory"
	.string "{PLAYER} received the Stoic Badge\n"
	.string "from {COLOR GREEN}Kohla{COLOR DARK_GRAY}.$"

GalecrestCityGym_Leader_Text_4:
# 192 "data//maps/GalecrestCityGym/scripts.pory"
	.string "The Stoic Badge lets you use Rock\n"
	.string "Smash outside of battle.\p"
	.string "...\p"
	.string "And this is yours too.$"

GalecrestCityGym_Leader_Text_5:
# 199 "data//maps/GalecrestCityGym/scripts.pory"
	.string "{PLAYER}, despite being the chum you\n"
	.string "are, I owe you. You showed me my lack of\l"
	.string "strength. That's why I chose Ceruledge\l"
	.string "as my companion. I don't care if other\l"
	.string "detectives see it as bad, because I see\l"
	.string "it as strong.\p"
	.string "...\p"
	.string "Now enough of this gym business. We\n"
	.string "have to stop {COLOR BLUE}Team Somber{COLOR DARK_GRAY}. I'll see you\l"
	.string "in {COLOR BLUE}Silversun City{COLOR DARK_GRAY}.$"

GalecrestCityGym_Text_LeaderIntro::
# 220 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Yes {PLAYER}, it's me. Traditionally,\n"
	.string "the {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY} of the graduating class\l"
	.string "assumes Gym Leader duties for a year\l"
	.string "after they graduate.\p"
	.string "And this year, that's me! Normally I\n"
	.string "would use the gym standard NORMAL\l"
	.string "Pokémon, but since it's you, I'm going to\l"
	.string "make an exception.\p"
	.string "I'll crush you with my REAL team!$"

GalecrestCityGym_Text_Defeated::
# 224 "data//maps/GalecrestCityGym/scripts.pory"
	.string "Another defeat...despite evolving my\n"
	.string "Charcadet, I still couldn't win. I need\l"
	.string "more strength...$"
