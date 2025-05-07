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
	playse SE_CLICK
# 13 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 14 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	warp MAP_WINTERLILY_HOLLOW_GYM_B1F, VAR_TEMP_2, VAR_TEMP_3
# 15 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_GymB1F_SetLayout::
# 20 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_HOLLOW_GYM_LAYOUT, 0
	goto_if_eq WinterlilyHollow_GymB1F_SetLayout_2
# 24 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F_SWITCHED
# 25 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 0
WinterlilyHollow_GymB1F_SetLayout_1:
	return

WinterlilyHollow_GymB1F_SetLayout_2:
# 21 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F
# 22 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 1
	goto WinterlilyHollow_GymB1F_SetLayout_1


WinterlilyHollow_Gym_Trainer_A::
# 33 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_A, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_1
# 34 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_2
# 35 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_B::
# 41 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_B, WinterlilyHollow_Gym_Trainer_B_Text_0, WinterlilyHollow_Gym_Trainer_B_Text_1
# 42 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_B_Text_0
# 43 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_C::
# 49 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_C, WinterlilyHollow_Gym_Trainer_C_Text_0, WinterlilyHollow_Gym_Trainer_C_Text_1
# 50 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_C_Text_2
# 51 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_D::
# 57 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_D, WinterlilyHollow_Gym_Trainer_D_Text_0, WinterlilyHollow_Gym_Trainer_D_Text_1
# 58 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_D_Text_2
# 59 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_E::
# 65 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_E, WinterlilyHollow_Gym_Trainer_E_Text_0, WinterlilyHollow_Gym_Trainer_E_Text_1
# 66 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_E_Text_2
# 67 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_LastTrainer_Trigger::
# 73 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILY_GYM_TRICK_TRAINER, WinterlilyHollow_LastTrainer_Trigger_2
# 74 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 75 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILY_GYM_TRICK_TRAINER
# 76 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	applymovement 6, WinterlilyHollow_LastTrainer_Trigger_Movement_0
# 77 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	delay 30
# 78 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_LastTrainer_Trigger_Text_0, MSGBOX_NPC
	end

WinterlilyHollow_LastTrainer_Trigger_2:
	end


WinterlilyHollow_Gym_Trainer_F::
# 84 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_F, WinterlilyHollow_Gym_Trainer_F_Text_0, WinterlilyHollow_Gym_Trainer_F_Text_1
# 85 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_F_Text_2
# 86 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollowGym_LeaderBattle::
# 114 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 116 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, WinterlilyHollowGym_LeaderBattle_2
# 120 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_1
# 121 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 122 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_2, MSGBOX_YESNO
# 124 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollowGym_LeaderBattle_6
# 129 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_4
# 131 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WINTERLILY_HOLLOW_GYM_LEADER, WinterlilyHollowGym_LeaderBattle_Text_5
# 134 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	message WinterlilyHollowGym_LeaderBattle_Text_6
# 135 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	waitmessage
# 137 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 139 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_BADGE06_GET
# 142 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_7
# 143 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_8
# 144 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 146 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 147 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 150 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_9
# 151 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
WinterlilyHollowGym_LeaderBattle_1:
# 155 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end

WinterlilyHollowGym_LeaderBattle_2:
# 117 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 118 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_0
	goto WinterlilyHollowGym_LeaderBattle_1

WinterlilyHollowGym_LeaderBattle_6:
# 125 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_3, MSGBOX_NPC
	end


WinterlilyHollow_Gym_Ampharos::
# 163 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 164 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Ampharos_Text_0, MSGBOX_NPC
	end


WinterlilyHollowGym_Red::
# 175 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, WinterlilyHollowGym_Red_2
# 199 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILYHOLLOWGYM_SPENSER_WATER, WinterlilyHollowGym_Red_8
# 202 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 203 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 204 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_6
# 205 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 206 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_5
# 207 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILYHOLLOWGYM_SPENSER_WATER
# 208 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
WinterlilyHollowGym_Red_1:
	end

WinterlilyHollowGym_Red_2:
# 176 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILYHOLLOWGYM_SPENSER_REWARD, WinterlilyHollowGym_Red_5
# 179 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 180 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 181 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_1
# 182 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, WinterlilyHollowGym_Red_Text_2, WinterlilyHollowGym_Red_Text_3
# 184 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollowGym_Red_12
# 187 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollowGym_Red_15
WinterlilyHollowGym_Red_11:
# 195 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILYHOLLOWGYM_SPENSER_REWARD
# 196 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_4, MSGBOX_NPC
	goto WinterlilyHollowGym_Red_1

WinterlilyHollowGym_Red_5:
# 177 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_0, MSGBOX_NPC
	goto WinterlilyHollowGym_Red_1

WinterlilyHollowGym_Red_8:
# 200 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_5, MSGBOX_NPC
	goto WinterlilyHollowGym_Red_1

WinterlilyHollowGym_Red_12:
# 185 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
	goto WinterlilyHollowGym_Red_11

WinterlilyHollowGym_Red_15:
# 188 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_MAGNET
	goto WinterlilyHollowGym_Red_11


# 76 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
WinterlilyHollow_LastTrainer_Trigger_Movement_0:
# 76 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	emote_exclamation_mark
# 76 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	jump_in_place_left
	step_end

WinterlilyHollow_Gym_Trainer_A_Text_0:
# 33 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What's a civilian doing here? Viniel's\n"
	.string "Ampharos overloads the atmosphere\l"
	.string "with ions, creating electric terrain\l"
	.string "here. It's dangerous!$"

WinterlilyHollow_Gym_Trainer_A_Text_1:
# 33 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I guess you can stay!$"

WinterlilyHollow_Gym_Trainer_A_Text_2:
# 34 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader Viniel's Ampharos overloads the\n"
	.string "atmosphere with ions, creating electric\l"
	.string "terrain here.$"

WinterlilyHollow_Gym_Trainer_B_Text_0:
# 41 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "This is a power plant that Viniel set up.\n"
	.string "While trainers come and go, us\l"
	.string "Electricians work around the clock to\l"
	.string "serve Winterlily Hollow!$"

WinterlilyHollow_Gym_Trainer_B_Text_1:
# 41 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Alright, carry on.$"

WinterlilyHollow_Gym_Trainer_C_Text_0:
# 49 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Are you here to challenge Viniel too?$"

WinterlilyHollow_Gym_Trainer_C_Text_1:
# 49 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Wow, you're good!$"

WinterlilyHollow_Gym_Trainer_C_Text_2:
# 50 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I wanted to challenge Leader Viniel, but\n"
	.string "the doors are locked and I can't find\l"
	.string "the switches!$"

WinterlilyHollow_Gym_Trainer_D_Text_0:
# 57 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What - you thought everyone would be a\n"
	.string "lumbering electrician? Someone's gotta\l"
	.string "keep the books too!$"

WinterlilyHollow_Gym_Trainer_D_Text_1:
# 57 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Back to the books then!$"

WinterlilyHollow_Gym_Trainer_D_Text_2:
# 58 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "With so much electricity being\n"
	.string "generated, we do need someone to keep\l"
	.string "track of everything.$"

WinterlilyHollow_Gym_Trainer_E_Text_0:
# 65 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Viniel hired me to do some research on\n"
	.string "efficient electricity storage, but all\l"
	.string "I've been doing is battling chums like\l"
	.string "you!$"

WinterlilyHollow_Gym_Trainer_E_Text_1:
# 65 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Another chum I lost to!$"

WinterlilyHollow_Gym_Trainer_E_Text_2:
# 66 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Since Winterlily Hollow gets no\n"
	.string "electricity, we need robust storage\l"
	.string "solutions.$"

WinterlilyHollow_LastTrainer_Trigger_Text_0:
# 78 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Oh, a trainer? Don't worry, I won't fight\n"
	.string "you. I'm just fixing up the wiring here.\l"
	.string "Go on, flip the switch.$"

WinterlilyHollow_Gym_Trainer_F_Text_0:
# 84 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Hah! Gotcha! I'm about to crush you!$"

WinterlilyHollow_Gym_Trainer_F_Text_1:
# 84 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "You crushed me!$"

WinterlilyHollow_Gym_Trainer_F_Text_2:
# 85 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader Viniel's right up ahead. He\n"
	.string "stationed me out here to make sure\l"
	.string "weaker trainers don't disturb his\l"
	.string "Ampharos.$"

WinterlilyHollowGym_LeaderBattle_Text_0:
# 118 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "That was a great battle. You've earned\n"
	.string "my confidence. Go get 'em, {PLAYER}!$"

WinterlilyHollowGym_LeaderBattle_Text_1:
# 120 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "VINIEL: Go Ampharos! More! More!\p"
	.string "VINIEL: Wait - it looks like we've got a\n"
	.string "guest.$"

WinterlilyHollowGym_LeaderBattle_Text_2:
# 122 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "VINIEL: Ah, it's you! The enemy of my\n"
	.string "enemy.\p"
	.string "VINIEL: Hmm...\p"
	.string "VINIEL: You still look a little drained\n"
	.string "of energy. Do you really want to battle?$"

WinterlilyHollowGym_LeaderBattle_Text_3:
# 125 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "VINIEL: Come back when you've got the\n"
	.string "spark back in you!$"

WinterlilyHollowGym_LeaderBattle_Text_4:
# 129 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
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
# 131 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Sizzling! Crackling! Hahaha!$"

WinterlilyHollowGym_LeaderBattle_Text_6:
# 134 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "{PLAYER} received the Spark Badge\n"
	.string "from Viniel.$"

WinterlilyHollowGym_LeaderBattle_Text_7:
# 142 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "The Spark Badge lets you use HM Surf\n"
	.string "outside of battle. You don't need to\l"
	.string "teach your Pokémon the move - any\l"
	.string "compatible Pokémon can use it out of\l"
	.string "battle!$"

WinterlilyHollowGym_LeaderBattle_Text_8:
# 143 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "And I'd also like you to have this.$"

WinterlilyHollowGym_LeaderBattle_Text_9:
# 150 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Since you're off the case now, I\n"
	.string "suggest you head back down to Pelluca\l"
	.string "City. You'll find the next gym leader,\l"
	.string "Jania, there...\p"
	.string "...but that's for another day. This is\n"
	.string "the end of the demo. Thank you for\l"
	.string "playing! Please drop any feedback and\l"
	.string "bug reports on Discord, and stay tuned\l"
	.string "for further updates!$"

WinterlilyHollow_Gym_Ampharos_Text_0:
# 164 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "The air around Ampharos is crackling\n"
	.string "with electricity!$"

WinterlilyHollowGym_Red_Text_0:
# 177 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

WinterlilyHollowGym_Red_Text_1:
# 181 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Well done champ-in-the-making! An\n"
	.string "electrifying showdown! In recognition\l"
	.string "of your skills, I'd like to give you\l"
	.string "something. Which of these do you\l"
	.string "fancy?$"

WinterlilyHollowGym_Red_Text_2:
# 182 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Electric Gym$"

WinterlilyHollowGym_Red_Text_3:
# 182 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Magnet$"

WinterlilyHollowGym_Red_Text_4:
# 196 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

WinterlilyHollowGym_Red_Text_5:
# 200 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "The electricity generated in this plant\n"
	.string "ionises the air and creates electric\l"
	.string "terrain! Steer clear of FLYING and\l"
	.string "WATER type Pokémon.$"

WinterlilyHollowGym_Red_Text_6:
# 204 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Welcome to the Winterlily Hollow gym!\n"
	.string "It's not a gym so much as a power plant.\l"
	.string "The leader, Viniel, powers this town with\l"
	.string "his strong ELECTRIC-type Pokémon here\l"
	.string "in this plant. First, hydrate yourself!$"
