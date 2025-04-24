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
	msgbox PellucaGym_Trainer_A_Text_0
# 150 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_CITY_GYM_LEADER, PellucaGym_Trainer_A_Text_0
# 154 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_1
# 155 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
# 158 "data//maps/PellucaCityGym_B1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 159 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_BADGE06_GET
# 160 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_2
# 163 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_3
# 164 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
# 165 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_RARE_SHARD, 2
# 166 "data//maps/PellucaCityGym_B1F/scripts.pory"
	delay 16
# 169 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_4
# 170 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
# 171 "data//maps/PellucaCityGym_B1F/scripts.pory"
	delay 16
# 173 "data//maps/PellucaCityGym_B1F/scripts.pory"
	opendoor 25, 52
# 174 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitdooranim
# 175 "data//maps/PellucaCityGym_B1F/scripts.pory"
	applymovement 5, PellucaGym_Leader_Movement_0
# 176 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitmovement 0
# 177 "data//maps/PellucaCityGym_B1F/scripts.pory"
	delay 8
# 178 "data//maps/PellucaCityGym_B1F/scripts.pory"
	removeobject 5
# 179 "data//maps/PellucaCityGym_B1F/scripts.pory"
	delay 8
# 180 "data//maps/PellucaCityGym_B1F/scripts.pory"
	closedoor 25, 52
# 181 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitdooranim
PellucaGym_Leader_1:
# 185 "data//maps/PellucaCityGym_B1F/scripts.pory"
	releaseall
	return

PellucaGym_Leader_2:
# 141 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_0
	goto PellucaGym_Leader_1


# 175 "data//maps/PellucaCityGym_B1F/scripts.pory"
PellucaGym_Leader_Movement_0:
# 175 "data//maps/PellucaCityGym_B1F/scripts.pory"
	walk_up
	step_end

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
	.string "You win.$"

PellucaGym_Leader_Text_1:
# 154 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "KOHLA: This is yours, {PLAYER}.$"

PellucaGym_Leader_Text_2:
# 160 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "{PLAYER} received the STOIC BADGE\n"
	.string "from KOHLA.$"

PellucaGym_Leader_Text_3:
# 163 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "KOHLA: The Stoic Badge lets you use the\n"
	.string "HM move ROCK SMASH outside of battle.\p"
	.string "...\p"
	.string "KOHLA: And these are yours too.$"

PellucaGym_Leader_Text_4:
# 169 "data//maps/PellucaCityGym_B1F/scripts.pory"
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
