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
# 21 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_HOLLOW_GYM_LAYOUT, 0
	goto_if_eq WinterlilyHollow_GymB1F_SetLayout_2
# 25 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F_SWITCHED
# 26 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 0
WinterlilyHollow_GymB1F_SetLayout_1:
	return

WinterlilyHollow_GymB1F_SetLayout_2:
# 22 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F
# 23 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 1
	goto WinterlilyHollow_GymB1F_SetLayout_1


WinterlilyHollow_Gym_Trainer_A::
# 36 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_A, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_1
# 37 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_2
# 38 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_B::
# 44 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_B, WinterlilyHollow_Gym_Trainer_B_Text_0, WinterlilyHollow_Gym_Trainer_B_Text_1
# 45 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_B_Text_0
# 46 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_C::
# 52 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_C, WinterlilyHollow_Gym_Trainer_C_Text_0, WinterlilyHollow_Gym_Trainer_C_Text_1
# 53 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_C_Text_2
# 54 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_D::
# 60 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_D, WinterlilyHollow_Gym_Trainer_D_Text_0, WinterlilyHollow_Gym_Trainer_D_Text_1
# 61 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_D_Text_2
# 62 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_E::
# 68 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_E, WinterlilyHollow_Gym_Trainer_E_Text_0, WinterlilyHollow_Gym_Trainer_E_Text_1
# 69 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_E_Text_2
# 70 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_LastTrainer_Trigger::
# 76 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 77 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	applymovement 6, WinterlilyHollow_LastTrainer_Trigger_Movement_0
# 78 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	delay 30
# 79 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_LastTrainer_Trigger_Text_0
	return


WinterlilyHollow_Gym_Trainer_F::
# 84 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_F, WinterlilyHollow_Gym_Trainer_F_Text_0, WinterlilyHollow_Gym_Trainer_F_Text_1
# 85 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_F_Text_2
# 86 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


# 77 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
WinterlilyHollow_LastTrainer_Trigger_Movement_0:
# 77 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	emote_exclamation_mark
# 77 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	jump_in_place_left
	step_end

WinterlilyHollow_Gym_Trainer_A_Text_0:
# 36 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What's a civilian doing here? Leader\n"
	.string "VINIEL's AMPHAROS overloads the\l"
	.string "atmosphere with ions, creating electric\l"
	.string "terrain here. It's dangerous!$"

WinterlilyHollow_Gym_Trainer_A_Text_1:
# 36 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I guess you can!$"

WinterlilyHollow_Gym_Trainer_A_Text_2:
# 37 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader VINIEL's AMPHAROS overloads\n"
	.string "the atmosphere with ions, creating\l"
	.string "electric terrain here.$"

WinterlilyHollow_Gym_Trainer_B_Text_0:
# 44 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "This is a power plant that VINIEL set\n"
	.string "up. While trainers come and go, us\l"
	.string "ELECTRICIANS work around the clock to\l"
	.string "serve WINTERLILY HOLLOW!$"

WinterlilyHollow_Gym_Trainer_B_Text_1:
# 44 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Alright, carry on.$"

WinterlilyHollow_Gym_Trainer_C_Text_0:
# 52 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I came up here from the FIGHTING DOJO!\n"
	.string "Are you here to challenge VINIEL too?$"

WinterlilyHollow_Gym_Trainer_C_Text_1:
# 52 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Wow, you're good!$"

WinterlilyHollow_Gym_Trainer_C_Text_2:
# 53 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I wanted to challenge Leader VINIEL,\n"
	.string "but the doors are locked and I can't\l"
	.string "find the switches!$"

WinterlilyHollow_Gym_Trainer_D_Text_0:
# 60 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What - you thought everyone would be a\n"
	.string "lumbering electrician? Someone's gotta\l"
	.string "keep the books too!$"

WinterlilyHollow_Gym_Trainer_D_Text_1:
# 60 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Back to the books then!$"

WinterlilyHollow_Gym_Trainer_D_Text_2:
# 61 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "With so much electricity being\n"
	.string "generated, we do need someone to keep\l"
	.string "track of everything.$"

WinterlilyHollow_Gym_Trainer_E_Text_0:
# 68 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "VINIEL hired me to do some research on\n"
	.string "efficient electricity storage, but all\l"
	.string "I've been doing is battling chums like\l"
	.string "you!$"

WinterlilyHollow_Gym_Trainer_E_Text_1:
# 68 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Another chum I lost to!$"

WinterlilyHollow_Gym_Trainer_E_Text_2:
# 69 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Since WINTERLILY HOLLOW gets no\n"
	.string "electricity, we need robust storage\l"
	.string "solutions.$"

WinterlilyHollow_LastTrainer_Trigger_Text_0:
# 79 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Oh, a trainer? Don't worry, I won't fight\n"
	.string "you. I'm just fixing up the wiring here.\l"
	.string "Go on, flip the switch.$"

WinterlilyHollow_Gym_Trainer_F_Text_0:
# 84 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Hah! Sike! I'm about to crush you!$"

WinterlilyHollow_Gym_Trainer_F_Text_1:
# 84 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "You crushed me!$"

WinterlilyHollow_Gym_Trainer_F_Text_2:
# 85 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader VINIEL's right up ahead. He\n"
	.string "stationed me out here to make sure\l"
	.string "weaker trainers don't disturb his\l"
	.string "AMPHAROS.$"
