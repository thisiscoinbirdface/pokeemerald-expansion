WinterlilyHollow_GymB1F_MapScripts::
# 2 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WinterlilyHollow_GymB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WinterlilyHollow_GymB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto WinterlilyHollow_GymB1F_SetLayout
	return


WinterlilyHollow_GymB1F_Button::
# 11 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 12 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 13 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	warp MAP_WINTERLILY_HOLLOW_GYM_B1F, VAR_TEMP_2, VAR_TEMP_3
# 14 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_GymB1F_SetLayout::
# 19 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_HOLLOW_GYM_LAYOUT, 0
	goto_if_eq WinterlilyHollow_GymB1F_SetLayout_2
# 23 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F_SWITCHED
# 24 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 0
WinterlilyHollow_GymB1F_SetLayout_1:
	return

WinterlilyHollow_GymB1F_SetLayout_2:
# 20 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F
# 21 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 1
	goto WinterlilyHollow_GymB1F_SetLayout_1


WinterlilyHollow_Gym_Trainer_A::
# 32 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_A, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_1
# 33 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_2
# 34 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_B::
# 40 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_B, WinterlilyHollow_Gym_Trainer_B_Text_0, WinterlilyHollow_Gym_Trainer_B_Text_1
# 41 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_B_Text_0
# 42 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_C::
# 48 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_C, WinterlilyHollow_Gym_Trainer_C_Text_0, WinterlilyHollow_Gym_Trainer_C_Text_1
# 49 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_C_Text_2
# 50 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_D::
# 56 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_D, WinterlilyHollow_Gym_Trainer_D_Text_0, WinterlilyHollow_Gym_Trainer_D_Text_1
# 57 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_D_Text_2
# 58 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_E::
# 64 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_E, WinterlilyHollow_Gym_Trainer_E_Text_0, WinterlilyHollow_Gym_Trainer_E_Text_1
# 65 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_E_Text_2
# 66 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_LastTrainer_Trigger::
# 72 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILY_GYM_TRICK_TRAINER, WinterlilyHollow_LastTrainer_Trigger_2
# 73 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 74 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILY_GYM_TRICK_TRAINER
# 75 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	applymovement 6, WinterlilyHollow_LastTrainer_Trigger_Movement_0
# 76 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	delay 30
# 77 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_LastTrainer_Trigger_Text_0, MSGBOX_NPC
	end

WinterlilyHollow_LastTrainer_Trigger_2:
	end


WinterlilyHollow_Gym_Trainer_F::
# 83 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_F, WinterlilyHollow_Gym_Trainer_F_Text_0, WinterlilyHollow_Gym_Trainer_F_Text_1
# 84 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_F_Text_2
# 85 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollowGym_LeaderBattle::
# 113 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 115 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, WinterlilyHollowGym_LeaderBattle_2
# 119 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_1
# 120 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 121 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_2, MSGBOX_YESNO
# 123 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollowGym_LeaderBattle_6
# 128 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_4
# 130 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WINTERLILY_HOLLOW_GYM_LEADER, WinterlilyHollowGym_LeaderBattle_Text_5
# 133 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	message WinterlilyHollowGym_LeaderBattle_Text_6
# 134 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	waitmessage
# 136 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 138 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_BADGE06_GET
# 141 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_7
# 142 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_8
# 143 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 145 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_RARE_SHARD, 2
# 146 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 149 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_9
# 150 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
WinterlilyHollowGym_LeaderBattle_1:
# 154 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end

WinterlilyHollowGym_LeaderBattle_2:
# 116 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 117 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_0
	goto WinterlilyHollowGym_LeaderBattle_1

WinterlilyHollowGym_LeaderBattle_6:
# 124 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_3, MSGBOX_NPC
	end


WinterlilyHollowGym_Red::
# 166 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, WinterlilyHollowGym_Red_2
# 190 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILYHOLLOWGYM_SPENSER_WATER, WinterlilyHollowGym_Red_8
# 193 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 194 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 195 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_6
# 196 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 197 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_5
# 198 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILYHOLLOWGYM_SPENSER_WATER
# 199 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
WinterlilyHollowGym_Red_1:
	end

WinterlilyHollowGym_Red_2:
# 167 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILYHOLLOWGYM_SPENSER_REWARD, WinterlilyHollowGym_Red_5
# 170 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 171 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 172 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_1
# 173 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, WinterlilyHollowGym_Red_Text_2, WinterlilyHollowGym_Red_Text_3
# 175 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollowGym_Red_12
# 178 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollowGym_Red_15
WinterlilyHollowGym_Red_11:
# 186 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILYHOLLOWGYM_SPENSER_REWARD
# 187 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_4, MSGBOX_NPC
	goto WinterlilyHollowGym_Red_1

WinterlilyHollowGym_Red_5:
# 168 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_0, MSGBOX_NPC
	goto WinterlilyHollowGym_Red_1

WinterlilyHollowGym_Red_8:
# 191 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_5, MSGBOX_NPC
	goto WinterlilyHollowGym_Red_1

WinterlilyHollowGym_Red_12:
# 176 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
	goto WinterlilyHollowGym_Red_11

WinterlilyHollowGym_Red_15:
# 179 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_MAGNET
	goto WinterlilyHollowGym_Red_11


# 75 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
WinterlilyHollow_LastTrainer_Trigger_Movement_0:
# 75 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	emote_exclamation_mark
# 75 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	jump_in_place_left
	step_end

WinterlilyHollow_Gym_Trainer_A_Text_0:
# 32 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What's a civilian doing here? Leader\n"
	.string "VINIEL's AMPHAROS overloads the\l"
	.string "atmosphere with ions, creating electric\l"
	.string "terrain here. It's dangerous!$"

WinterlilyHollow_Gym_Trainer_A_Text_1:
# 32 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I guess you can!$"

WinterlilyHollow_Gym_Trainer_A_Text_2:
# 33 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader VINIEL's AMPHAROS overloads\n"
	.string "the atmosphere with ions, creating\l"
	.string "electric terrain here.$"

WinterlilyHollow_Gym_Trainer_B_Text_0:
# 40 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "This is a power plant that VINIEL set\n"
	.string "up. While trainers come and go, us\l"
	.string "ELECTRICIANS work around the clock to\l"
	.string "serve Winterlily Hollow!$"

WinterlilyHollow_Gym_Trainer_B_Text_1:
# 40 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Alright, carry on.$"

WinterlilyHollow_Gym_Trainer_C_Text_0:
# 48 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I came up here from the FIGHTING DOJO!\n"
	.string "Are you here to challenge VINIEL too?$"

WinterlilyHollow_Gym_Trainer_C_Text_1:
# 48 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Wow, you're good!$"

WinterlilyHollow_Gym_Trainer_C_Text_2:
# 49 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I wanted to challenge Leader VINIEL,\n"
	.string "but the doors are locked and I can't\l"
	.string "find the switches!$"

WinterlilyHollow_Gym_Trainer_D_Text_0:
# 56 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What - you thought everyone would be a\n"
	.string "lumbering electrician? Someone's gotta\l"
	.string "keep the books too!$"

WinterlilyHollow_Gym_Trainer_D_Text_1:
# 56 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Back to the books then!$"

WinterlilyHollow_Gym_Trainer_D_Text_2:
# 57 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "With so much electricity being\n"
	.string "generated, we do need someone to keep\l"
	.string "track of everything.$"

WinterlilyHollow_Gym_Trainer_E_Text_0:
# 64 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "VINIEL hired me to do some research on\n"
	.string "efficient electricity storage, but all\l"
	.string "I've been doing is battling chums like\l"
	.string "you!$"

WinterlilyHollow_Gym_Trainer_E_Text_1:
# 64 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Another chum I lost to!$"

WinterlilyHollow_Gym_Trainer_E_Text_2:
# 65 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Since Winterlily Hollow gets no\n"
	.string "electricity, we need robust storage\l"
	.string "solutions.$"

WinterlilyHollow_LastTrainer_Trigger_Text_0:
# 77 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Oh, a trainer? Don't worry, I won't fight\n"
	.string "you. I'm just fixing up the wiring here.\l"
	.string "Go on, flip the switch.$"

WinterlilyHollow_Gym_Trainer_F_Text_0:
# 83 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Hah! Gotcha! I'm about to crush you!$"

WinterlilyHollow_Gym_Trainer_F_Text_1:
# 83 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "You crushed me!$"

WinterlilyHollow_Gym_Trainer_F_Text_2:
# 84 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader VINIEL's right up ahead. He\n"
	.string "stationed me out here to make sure\l"
	.string "weaker trainers don't disturb his\l"
	.string "AMPHAROS.$"

WinterlilyHollowGym_LeaderBattle_Text_0:
# 117 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "That was a great battle. You've earned\n"
	.string "my confidence. Go get 'em, {PLAYER}!$"

WinterlilyHollowGym_LeaderBattle_Text_1:
# 119 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "VINIEL: Go Ampharos! More! More!\p"
	.string "VINIEL: Wait - it looks like we've got a\n"
	.string "guest.$"

WinterlilyHollowGym_LeaderBattle_Text_2:
# 121 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "VINIEL: Ah, it's you! The enemy of my\n"
	.string "enemy.\p"
	.string "VINIEL: Hmm...\p"
	.string "VINIEL: You still look a little drained\n"
	.string "of energy. Do you really want to battle?$"

WinterlilyHollowGym_LeaderBattle_Text_3:
# 124 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "VINIEL: Come back when you've got the\n"
	.string "spark back in you!$"

WinterlilyHollowGym_LeaderBattle_Text_4:
# 128 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "VINIEL: Excellent! Your internal\n"
	.string "battery is full, then.\p"
	.string "VINIEL: Look around you, {PLAYER}.\n"
	.string "This power plant is the lifeblood of\l"
	.string "Winterlily Hollow. Gym Leaders aren't\l"
	.string "just strong trainers. We're here to do\l"
	.string "the best we can for those who can't.\l"
	.string "That's what makes us, us. Hahaha!\p"
	.string "VINIEL: Back with those Team Somber\n"
	.string "grunts, you showed me that very energy.\p"
	.string "VINIEL: And now, I want you to bring it\n"
	.string "out again!$"

WinterlilyHollowGym_LeaderBattle_Text_5:
# 130 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Sizzling! Crackling! Hahaha!$"

WinterlilyHollowGym_LeaderBattle_Text_6:
# 133 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "{PLAYER} received the Spark Badge\n"
	.string "from Viniel.$"

WinterlilyHollowGym_LeaderBattle_Text_7:
# 141 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "The Spark Badge lets you use HM Surf\n"
	.string "outside of battle. You don't need to\l"
	.string "teach your Pokémon the move - any\l"
	.string "compatible Pokémon can use it out of\l"
	.string "battle!$"

WinterlilyHollowGym_LeaderBattle_Text_8:
# 142 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "And I'd also like you to have this.$"

WinterlilyHollowGym_LeaderBattle_Text_9:
# 149 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "VINIEL: Since you're off the case now,\n"
	.string "I suggest you head back down to\l"
	.string "Pelluca City. You'll find the next gym\l"
	.string "leader, Jania, there. Keep your spirits\l"
	.string "up, {PLAYER}!$"

WinterlilyHollowGym_Red_Text_0:
# 168 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

WinterlilyHollowGym_Red_Text_1:
# 172 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Well done champ-in-the-making! An\n"
	.string "electrifying showdown! In recognition\l"
	.string "of your skills, I'd like to give you\l"
	.string "something. Which of these do you\l"
	.string "fancy?$"

WinterlilyHollowGym_Red_Text_2:
# 173 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Electric Gym$"

WinterlilyHollowGym_Red_Text_3:
# 173 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Magnet$"

WinterlilyHollowGym_Red_Text_4:
# 187 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

WinterlilyHollowGym_Red_Text_5:
# 191 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "The electricity generated in this plant\n"
	.string "ionises the air and creates electric\l"
	.string "terrain! Steer clear of FLYING and\l"
	.string "WATER type Pokémon.$"

WinterlilyHollowGym_Red_Text_6:
# 195 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Welcome to the Winterlily Hollow gym!\n"
	.string "It's not a gym so much as a power plant.\l"
	.string "The leader, Viniel, powers this town with\l"
	.string "his strong ELECTRIC-type Pokémon here\l"
	.string "in this plant. First, hydrate yourself!$"
