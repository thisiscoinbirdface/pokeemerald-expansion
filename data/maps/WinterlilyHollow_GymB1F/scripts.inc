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
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_A, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_0
# 37 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_0
# 38 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_B::
# 44 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_B, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_0
# 45 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_0
# 46 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_C::
# 52 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_C, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_0
# 53 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_0
# 54 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_D::
# 60 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_D, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_0
# 61 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_0
# 62 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_E::
# 68 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_E, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_0
# 69 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_0
# 70 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_F::
# 76 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_F, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_0
# 77 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_0
# 78 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_A_Text_0:
# 36 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "$"
