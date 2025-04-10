WinterlilyHollow_GymB1F_MapScripts::
# 2 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WinterlilyHollow_GymB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WinterlilyHollow_GymB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto WinterlilyHollow_GymB1F_SetLayout
	return


WinterlilyHollow_GymB1F_Button::
# 11 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 12 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 13 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	warp MAP_WINTERLILY_HOLLOW_GYM_B1F, VAR_TEMP_2, VAR_TEMP_3
# 14 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_GymB1F_SetLayout::
# 19 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_HOLLOW_GYM_LAYOUT, 0
	goto_if_eq WinterlilyHollow_GymB1F_SetLayout_2
# 23 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F_SWITCHED
# 24 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 0
WinterlilyHollow_GymB1F_SetLayout_1:
	return

WinterlilyHollow_GymB1F_SetLayout_2:
# 20 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F
# 21 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 1
	goto WinterlilyHollow_GymB1F_SetLayout_1


WinterlilyHollow_Gym_Trainer_A::
# 32 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_A, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_1
# 33 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_2
# 34 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_B::
# 40 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_B, WinterlilyHollow_Gym_Trainer_B_Text_0, WinterlilyHollow_Gym_Trainer_B_Text_1
# 41 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_B_Text_0
# 42 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_C::
# 48 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_C, WinterlilyHollow_Gym_Trainer_C_Text_0, WinterlilyHollow_Gym_Trainer_C_Text_1
# 49 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_C_Text_2
# 50 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_D::
# 56 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_D, WinterlilyHollow_Gym_Trainer_D_Text_0, WinterlilyHollow_Gym_Trainer_D_Text_1
# 57 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_D_Text_2
# 58 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_E::
# 64 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_E, WinterlilyHollow_Gym_Trainer_E_Text_0, WinterlilyHollow_Gym_Trainer_E_Text_1
# 65 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_E_Text_2
# 66 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_LastTrainer_Trigger::
# 72 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 73 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	applymovement 6, WinterlilyHollow_LastTrainer_Trigger_Movement_0
# 74 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	delay 30
# 75 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_LastTrainer_Trigger_Text_0
	return


WinterlilyHollow_Gym_Trainer_F::
# 80 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_F, WinterlilyHollow_Gym_Trainer_F_Text_0, WinterlilyHollow_Gym_Trainer_F_Text_1
# 81 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_F_Text_2
# 82 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollowGym_LeaderBattle::
# 110 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 111 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 113 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, WinterlilyHollowGym_LeaderBattle_2
# 116 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_1
# 117 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WINTERLILY_HOLLOW_GYM_LEADER, WinterlilyHollowGym_LeaderBattle_Text_1
# 120 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_2
# 121 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 122 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_BADGE05_GET
# 125 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 128 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_3
# 129 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_4
# 130 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 132 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_TM_SUNNY_DAY
# 133 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_5
# 134 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 137 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_6
# 138 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
WinterlilyHollowGym_LeaderBattle_1:
# 142 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	return

WinterlilyHollowGym_LeaderBattle_2:
# 114 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_0
	goto WinterlilyHollowGym_LeaderBattle_1


# 73 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
WinterlilyHollow_LastTrainer_Trigger_Movement_0:
# 73 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	emote_exclamation_mark
# 73 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	jump_in_place_left
	step_end

WinterlilyHollow_Gym_Trainer_A_Text_0:
# 32 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What's a civilian doing here? Leader\n"
	.string "VINIEL's AMPHAROS overloads the\l"
	.string "atmosphere with ions, creating electric\l"
	.string "terrain here. It's dangerous!$"

WinterlilyHollow_Gym_Trainer_A_Text_1:
# 32 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I guess you can!$"

WinterlilyHollow_Gym_Trainer_A_Text_2:
# 33 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader VINIEL's AMPHAROS overloads\n"
	.string "the atmosphere with ions, creating\l"
	.string "electric terrain here.$"

WinterlilyHollow_Gym_Trainer_B_Text_0:
# 40 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "This is a power plant that VINIEL set\n"
	.string "up. While trainers come and go, us\l"
	.string "ELECTRICIANS work around the clock to\l"
	.string "serve Winterlily Hollow!$"

WinterlilyHollow_Gym_Trainer_B_Text_1:
# 40 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Alright, carry on.$"

WinterlilyHollow_Gym_Trainer_C_Text_0:
# 48 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I came up here from the FIGHTING DOJO!\n"
	.string "Are you here to challenge VINIEL too?$"

WinterlilyHollow_Gym_Trainer_C_Text_1:
# 48 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Wow, you're good!$"

WinterlilyHollow_Gym_Trainer_C_Text_2:
# 49 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I wanted to challenge Leader VINIEL,\n"
	.string "but the doors are locked and I can't\l"
	.string "find the switches!$"

WinterlilyHollow_Gym_Trainer_D_Text_0:
# 56 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What - you thought everyone would be a\n"
	.string "lumbering electrician? Someone's gotta\l"
	.string "keep the books too!$"

WinterlilyHollow_Gym_Trainer_D_Text_1:
# 56 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Back to the books then!$"

WinterlilyHollow_Gym_Trainer_D_Text_2:
# 57 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "With so much electricity being\n"
	.string "generated, we do need someone to keep\l"
	.string "track of everything.$"

WinterlilyHollow_Gym_Trainer_E_Text_0:
# 64 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "VINIEL hired me to do some research on\n"
	.string "efficient electricity storage, but all\l"
	.string "I've been doing is battling chums like\l"
	.string "you!$"

WinterlilyHollow_Gym_Trainer_E_Text_1:
# 64 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Another chum I lost to!$"

WinterlilyHollow_Gym_Trainer_E_Text_2:
# 65 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Since Winterlily Hollow gets no\n"
	.string "electricity, we need robust storage\l"
	.string "solutions.$"

WinterlilyHollow_LastTrainer_Trigger_Text_0:
# 75 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Oh, a trainer? Don't worry, I won't fight\n"
	.string "you. I'm just fixing up the wiring here.\l"
	.string "Go on, flip the switch.$"

WinterlilyHollow_Gym_Trainer_F_Text_0:
# 80 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Hah! Sike! I'm about to crush you!$"

WinterlilyHollow_Gym_Trainer_F_Text_1:
# 80 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "You crushed me!$"

WinterlilyHollow_Gym_Trainer_F_Text_2:
# 81 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader VINIEL's right up ahead. He\n"
	.string "stationed me out here to make sure\l"
	.string "weaker trainers don't disturb his\l"
	.string "AMPHAROS.$"

WinterlilyHollowGym_LeaderBattle_Text_0:
# 114 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "That was a great battle. You've earned\n"
	.string "my confidence. Go get 'em, {PLAYER}!$"

WinterlilyHollowGym_LeaderBattle_Text_1:
# 116 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "$"

WinterlilyHollowGym_LeaderBattle_Text_2:
# 120 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "{PLAYER} received the CINDER BADGE\n"
	.string "from Arian.$"

WinterlilyHollowGym_LeaderBattle_Text_3:
# 128 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "The CINDER BADGE increases the ATK of\n"
	.string "all your Pokémon and lets you control\l"
	.string "Pokémon upto lv. 20.$"

WinterlilyHollowGym_LeaderBattle_Text_4:
# 129 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "And I'd also like to give you this.$"

WinterlilyHollowGym_LeaderBattle_Text_5:
# 133 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "This TM will let your Pokémon bring\n"
	.string "sunlight on the battlefield, powering\l"
	.string "up FIRE-type moves!$"

WinterlilyHollowGym_LeaderBattle_Text_6:
# 137 "data/maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "And now it's time for you to set off on\n"
	.string "your journey. I hope you manage to find\l"
	.string "the dreamstone and Professor Tenebris.\l"
	.string "I don't know why Team Somber is after\l"
	.string "the dreamstones, but be careful if you\l"
	.string "run into them!$"
