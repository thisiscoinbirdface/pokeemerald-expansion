PellucaCityGym_B1F_MapScripts::
	.byte 0


PellucaGym_Trainer_A::
# 6 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_A, PellucaGym_Trainer_A_Text_0, PellucaGym_Trainer_A_Text_0
# 7 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_A_Text_0, MSGBOX_NPC
	end


PellucaGym_Trainer_B::
# 12 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_B, PellucaGym_Trainer_A_Text_0, PellucaGym_Trainer_A_Text_0
# 13 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_A_Text_0, MSGBOX_NPC
	end


PellucaGym_Trainer_C::
# 18 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_C, PellucaGym_Trainer_A_Text_0, PellucaGym_Trainer_A_Text_0
# 19 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_A_Text_0, MSGBOX_NPC
	end


PellucaGym_Trainer_D::
# 23 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_D, PellucaGym_Trainer_A_Text_0, PellucaGym_Trainer_A_Text_0
# 24 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_A_Text_0, MSGBOX_NPC
	end


PellucaGym_Trainer_E::
# 28 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_E, PellucaGym_Trainer_A_Text_0, PellucaGym_Trainer_A_Text_0
# 29 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_A_Text_0, MSGBOX_NPC
	end


PellucaGym_Trainer_F::
# 33 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_F, PellucaGym_Trainer_A_Text_0, PellucaGym_Trainer_A_Text_0
# 34 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_A_Text_0, MSGBOX_NPC
	end


PellucaGym_Trainer_G::
# 38 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_G, PellucaGym_Trainer_A_Text_0, PellucaGym_Trainer_A_Text_0
# 39 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_A_Text_0, MSGBOX_NPC
	end


PellucaGym_Trainer_H::
# 43 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_H, PellucaGym_Trainer_A_Text_0, PellucaGym_Trainer_A_Text_0
# 44 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_A_Text_0, MSGBOX_NPC
	end


PellucaGym_Trainer_I::
# 48 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_I, PellucaGym_Trainer_A_Text_0, PellucaGym_Trainer_A_Text_0
# 49 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_A_Text_0, MSGBOX_NPC
	end


PellucaGym_Red::
# 75 "data//maps/PellucaCityGym_B1F/scripts.pory"
	lockall
# 76 "data//maps/PellucaCityGym_B1F/scripts.pory"
	faceplayer
# 78 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PellucaGym_Red_2
# 99 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_PELLUCAGYM_SPENSER_WATER, PellucaGym_Red_8
# 102 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_6
# 103 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 104 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_7
# 105 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_PELLUCAGYM_SPENSER_WATER
PellucaGym_Red_1:
# 108 "data//maps/PellucaCityGym_B1F/scripts.pory"
	releaseall
	end

PellucaGym_Red_2:
# 79 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_PELLUCAGYM_SPENSER_REWARD, PellucaGym_Red_5
# 82 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_1
# 83 "data//maps/PellucaCityGym_B1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PellucaGym_Red_Text_2, PellucaGym_Red_Text_3
# 85 "data//maps/PellucaCityGym_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaGym_Red_12
# 88 "data//maps/PellucaCityGym_B1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaGym_Red_15
PellucaGym_Red_11:
# 95 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_PELLUCAGYM_SPENSER_REWARD
# 96 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_4
	goto PellucaGym_Red_1

PellucaGym_Red_5:
# 80 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_0
	goto PellucaGym_Red_1

PellucaGym_Red_8:
# 100 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_5
	goto PellucaGym_Red_1

PellucaGym_Red_12:
# 86 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_NORMAL_GEM
	goto PellucaGym_Red_11

PellucaGym_Red_15:
# 89 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_SILK_SCARF
	goto PellucaGym_Red_11


PellucaGym_Leader::
# 137 "data//maps/PellucaCityGym_B1F/scripts.pory"
	lockall
# 138 "data//maps/PellucaCityGym_B1F/scripts.pory"
	faceplayer
# 140 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PellucaGym_Leader_2
# 143 "data//maps/PellucaCityGym_B1F/scripts.pory"
	special SaveGame
# 144 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitstate
# 145 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
# 148 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Leader_Text_1
# 149 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_2
# 151 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_CITY_GYM_LEADER, PellucaGym_Leader_Text_3
# 155 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Leader_Text_1
# 156 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_4
# 157 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
# 160 "data//maps/PellucaCityGym_B1F/scripts.pory"
	message PellucaGym_Leader_Text_5
# 161 "data//maps/PellucaCityGym_B1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 162 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_BADGE06_GET
# 165 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_6
# 166 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
# 167 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 168 "data//maps/PellucaCityGym_B1F/scripts.pory"
	delay 16
# 171 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Leader_Text_1
# 172 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_7
# 173 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
PellucaGym_Leader_1:
# 176 "data//maps/PellucaCityGym_B1F/scripts.pory"
	releaseall
	return

PellucaGym_Leader_2:
# 141 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_0
	goto PellucaGym_Leader_1


PellucaGym_Trainer_A_Text_0:
# 6 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "$"

PellucaGym_Red_Text_0:
# 80 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

PellucaGym_Red_Text_1:
# 82 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Well done champ-in-the-making! The Gym\n"
	.string "Leader pulled a fast one on you, using\l"
	.string "his real team, and you still made it out!\l"
	.string "In recognition of your victory, I'd like\l"
	.string "to give you something. Which of these\l"
	.string "do you fancy?$"

PellucaGym_Red_Text_2:
# 83 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "NORMAL GEM$"

PellucaGym_Red_Text_3:
# 83 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "SILK SCARF$"

PellucaGym_Red_Text_4:
# 96 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

PellucaGym_Red_Text_5:
# 100 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Most detectives use NORMAL type\n"
	.string "Pokémon that are comfortable in a\l"
	.string "variety of urban situations. FIGHTING\l"
	.string "type Pokémon should do well here, and\l"
	.string "GHOST type Pokémon are immune to\l"
	.string "NORMAL type attacks!$"

PellucaGym_Red_Text_6:
# 102 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Greetings trainer! Good to see you\n"
	.string "again. First, have some water.$"

PellucaGym_Red_Text_7:
# 104 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "This Gym is managed by the Detective\n"
	.string "Academy Student Council. Most\l"
	.string "detectives use NORMAL type Pokémon\l"
	.string "that are comfortable in a variety of\l"
	.string "urban situations. FIGHTING type\l"
	.string "Pokémon should do well here, and GHOST\l"
	.string "type Pokémon are immune to NORMAL type\l"
	.string "attacks!$"

PellucaGym_Leader_Text_0:
# 141 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "The tides of time wait for nobody. Do\n"
	.string "what you have to do!$"

PellucaGym_Leader_Text_1:
# 148 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania$"

PellucaGym_Leader_Text_2:
# 149 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Welcome, trainer, to the Pelluca City\n"
	.string "Gym. My name is Jania and I am the\l"
	.string "leader.\p"
	.string "The flow of water is calm, but never\n"
	.string "underestimate its strength. Let's see\l"
	.string "if you can ride the wave to victory!$"

PellucaGym_Leader_Text_3:
# 151 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "You're one with the tides!$"

PellucaGym_Leader_Text_4:
# 156 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "{PLAYER}, that was a spectacular\n"
	.string "battle. You've earned this.$"

PellucaGym_Leader_Text_5:
# 160 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "{PLAYER} received the River Badge\n"
	.string "from Jania.$"

PellucaGym_Leader_Text_6:
# 165 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "And I must also give you this.$"

PellucaGym_Leader_Text_7:
# 172 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "The eighth and last Gym Badge is given\n"
	.string "by Raazi of Rivetshore City. Head south\l"
	.string "from here down the river.\p"
	.string "Good luck, {PLAYER}.$"
