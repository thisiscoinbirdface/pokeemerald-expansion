PellucaCityGym_B1F_MapScripts::
	.byte 0


PellucaGym_Trainer_A::
# 6 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_A, PellucaGym_Trainer_A_Text_0, PellucaGym_Trainer_A_Text_1
# 7 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_A_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_B::
# 12 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_B, PellucaGym_Trainer_B_Text_0, PellucaGym_Trainer_B_Text_1
# 13 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_B_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_C::
# 18 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_C, PellucaGym_Trainer_C_Text_0, PellucaGym_Trainer_C_Text_1
# 19 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_C_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_D::
# 24 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_D, PellucaGym_Trainer_D_Text_0, PellucaGym_Trainer_D_Text_1
# 25 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_D_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_E::
# 29 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_E, PellucaGym_Trainer_E_Text_0, PellucaGym_Trainer_E_Text_1
# 30 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_E_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_F::
# 35 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_F, PellucaGym_Trainer_F_Text_0, PellucaGym_Trainer_F_Text_1
# 36 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_F_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_G::
# 41 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_G, PellucaGym_Trainer_G_Text_0, PellucaGym_Trainer_G_Text_1
# 42 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_G_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_H::
# 47 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_H, PellucaGym_Trainer_H_Text_0, PellucaGym_Trainer_H_Text_1
# 48 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_H_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_I::
# 52 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_I, PellucaGym_Trainer_I_Text_0, PellucaGym_Trainer_I_Text_1
# 53 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_I_Text_2, MSGBOX_NPC
	end


PellucaGym_Red::
# 79 "data//maps/PellucaCityGym_B1F/scripts.pory"
	lockall
# 80 "data//maps/PellucaCityGym_B1F/scripts.pory"
	faceplayer
# 82 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PellucaGym_Red_2
# 103 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_PELLUCAGYM_SPENSER_WATER, PellucaGym_Red_8
# 106 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_6
# 107 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 108 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_7
# 109 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_PELLUCAGYM_SPENSER_WATER
PellucaGym_Red_1:
# 112 "data//maps/PellucaCityGym_B1F/scripts.pory"
	releaseall
	end

PellucaGym_Red_2:
# 83 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_PELLUCAGYM_SPENSER_REWARD, PellucaGym_Red_5
# 86 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_1
# 87 "data//maps/PellucaCityGym_B1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PellucaGym_Red_Text_2, PellucaGym_Red_Text_3
# 89 "data//maps/PellucaCityGym_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaGym_Red_12
# 92 "data//maps/PellucaCityGym_B1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaGym_Red_15
PellucaGym_Red_11:
# 99 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_PELLUCAGYM_SPENSER_REWARD
# 100 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_4
	goto PellucaGym_Red_1

PellucaGym_Red_5:
# 84 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_0
	goto PellucaGym_Red_1

PellucaGym_Red_8:
# 104 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_5
	goto PellucaGym_Red_1

PellucaGym_Red_12:
# 90 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_NORMAL_GEM
	goto PellucaGym_Red_11

PellucaGym_Red_15:
# 93 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_SILK_SCARF
	goto PellucaGym_Red_11


PellucaGym_Leader::
# 141 "data//maps/PellucaCityGym_B1F/scripts.pory"
	lockall
# 142 "data//maps/PellucaCityGym_B1F/scripts.pory"
	faceplayer
# 144 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PellucaGym_Leader_2
# 147 "data//maps/PellucaCityGym_B1F/scripts.pory"
	special SaveGame
# 148 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitstate
# 149 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
# 152 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Leader_Text_1
# 153 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_2
# 155 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_CITY_GYM_LEADER, PellucaGym_Leader_Text_3
# 159 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Leader_Text_1
# 160 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_4
# 161 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
# 164 "data//maps/PellucaCityGym_B1F/scripts.pory"
	message PellucaGym_Leader_Text_5
# 165 "data//maps/PellucaCityGym_B1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 166 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_BADGE06_GET
# 169 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_6
# 170 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
# 171 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 172 "data//maps/PellucaCityGym_B1F/scripts.pory"
	delay 16
# 175 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Leader_Text_1
# 176 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_7
# 177 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
PellucaGym_Leader_1:
# 180 "data//maps/PellucaCityGym_B1F/scripts.pory"
	releaseall
	return

PellucaGym_Leader_2:
# 145 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_0
	goto PellucaGym_Leader_1


PellucaGym_Trainer_A_Text_0:
# 6 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "{PLAYER}! It's you! Have you come to\n"
	.string "challenge Jania?\p"
	.string "I'm here to get the badge too. My new\n"
	.string "goal is to collect all eight badges and\l"
	.string "become the Pokemon Champion!\p"
	.string "Shall we battle? As fellow trainers this\n"
	.string "time!$"

PellucaGym_Trainer_A_Text_1:
# 6 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Another defeat!$"

PellucaGym_Trainer_A_Text_2:
# 7 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "It's not easy adjusting to life as a\n"
	.string "normal trainer. But I'm going to keep\l"
	.string "trying!$"

PellucaGym_Trainer_B_Text_0:
# 12 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "All firefighters are sent here to train\n"
	.string "with Jania!$"

PellucaGym_Trainer_B_Text_1:
# 12 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "I need more training!$"

PellucaGym_Trainer_B_Text_2:
# 13 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "If Jania were part of the firefighting\n"
	.string "squad, we'd have no fires!$"

PellucaGym_Trainer_C_Text_0:
# 18 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Are you really here to get the badge?\p"
	.string "...you just don't look the type.$"

PellucaGym_Trainer_C_Text_1:
# 18 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "You don't look it, but you're strong!$"

PellucaGym_Trainer_C_Text_2:
# 19 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Getting Jania's badge is almost as hard\n"
	.string "as getting Raazi's badge!$"

PellucaGym_Trainer_D_Text_0:
# 24 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania's my heroine. I'm going to be the\n"
	.string "Jania of the next generation!$"

PellucaGym_Trainer_D_Text_1:
# 24 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "No!$"

PellucaGym_Trainer_D_Text_2:
# 25 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Did you know that Jania paints in her\n"
	.string "free time?$"

PellucaGym_Trainer_E_Text_0:
# 29 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "The water underground is freezing! A\n"
	.string "battle will warm me up!$"

PellucaGym_Trainer_E_Text_1:
# 29 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "I'm still freezing!$"

PellucaGym_Trainer_E_Text_2:
# 30 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania constructed this underground\n"
	.string "chamber and channeled the water of the\l"
	.string "two rivers in.$"

PellucaGym_Trainer_F_Text_0:
# 35 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "These currents are too confusing!$"

PellucaGym_Trainer_F_Text_1:
# 35 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Your strength is confusing!$"

PellucaGym_Trainer_F_Text_2:
# 36 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "I've been swimming in circles for hours!$"

PellucaGym_Trainer_G_Text_0:
# 41 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania would rather train alone than\n"
	.string "waste time battling weaker trainers. No\l"
	.string "offence!$"

PellucaGym_Trainer_G_Text_1:
# 41 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "I gotta watch out for you!$"

PellucaGym_Trainer_G_Text_2:
# 42 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "You're tough, but Jania's beaten\n"
	.string "hundreds of tough trainers.$"

PellucaGym_Trainer_H_Text_0:
# 47 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Nobody gets to Jania without getting\n"
	.string "through us first!$"

PellucaGym_Trainer_H_Text_1:
# 47 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "You got through!$"

PellucaGym_Trainer_H_Text_2:
# 48 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "First time challenge?\p"
	.string "I'll give you a hint - watch out for her\n"
	.string "last Pokemon!$"

PellucaGym_Trainer_I_Text_0:
# 52 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "We're here to make sure no lousy\n"
	.string "trainers waste Jania's time. Are you\l"
	.string "lousy?$"

PellucaGym_Trainer_I_Text_1:
# 52 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "You're not lousy!$"

PellucaGym_Trainer_I_Text_2:
# 53 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "There are items that boost your\n"
	.string "Pokemon if they get hit by a WATER type\l"
	.string "move. You should use those against\l"
	.string "Jania.$"

PellucaGym_Red_Text_0:
# 84 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

PellucaGym_Red_Text_1:
# 86 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Well done champ-in-the-making! The Gym\n"
	.string "Leader pulled a fast one on you, using\l"
	.string "his real team, and you still made it out!\l"
	.string "In recognition of your victory, I'd like\l"
	.string "to give you something. Which of these\l"
	.string "do you fancy?$"

PellucaGym_Red_Text_2:
# 87 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "NORMAL GEM$"

PellucaGym_Red_Text_3:
# 87 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "SILK SCARF$"

PellucaGym_Red_Text_4:
# 100 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

PellucaGym_Red_Text_5:
# 104 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Most detectives use NORMAL type\n"
	.string "Pokémon that are comfortable in a\l"
	.string "variety of urban situations. FIGHTING\l"
	.string "type Pokémon should do well here, and\l"
	.string "GHOST type Pokémon are immune to\l"
	.string "NORMAL type attacks!$"

PellucaGym_Red_Text_6:
# 106 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Greetings trainer! Good to see you\n"
	.string "again. First, have some water.$"

PellucaGym_Red_Text_7:
# 108 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "This Gym is managed by the Detective\n"
	.string "Academy Student Council. Most\l"
	.string "detectives use NORMAL type Pokémon\l"
	.string "that are comfortable in a variety of\l"
	.string "urban situations. FIGHTING type\l"
	.string "Pokémon should do well here, and GHOST\l"
	.string "type Pokémon are immune to NORMAL type\l"
	.string "attacks!$"

PellucaGym_Leader_Text_0:
# 145 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "The tides of time wait for nobody. Do\n"
	.string "what you have to do!$"

PellucaGym_Leader_Text_1:
# 152 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania$"

PellucaGym_Leader_Text_2:
# 153 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Welcome, trainer, to the Pelluca City\n"
	.string "Gym. My name is Jania and I am the\l"
	.string "leader.\p"
	.string "The flow of water is calm, but never\n"
	.string "underestimate its strength. Let's see\l"
	.string "if you can ride the wave to victory!$"

PellucaGym_Leader_Text_3:
# 155 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "You're one with the tides!$"

PellucaGym_Leader_Text_4:
# 160 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "{PLAYER}, that was a spectacular\n"
	.string "battle. You've earned this.$"

PellucaGym_Leader_Text_5:
# 164 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "{PLAYER} received the River Badge\n"
	.string "from Jania.$"

PellucaGym_Leader_Text_6:
# 169 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "And I must also give you this.$"

PellucaGym_Leader_Text_7:
# 176 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "The eighth and last Gym Badge is given\n"
	.string "by Raazi of Rivetshore City. Head south\l"
	.string "from here down the river.\p"
	.string "Good luck, {PLAYER}.$"
