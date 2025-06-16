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


WinterlilyHollow_GymB1F_FinalButton::
# 20 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 21 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_GymB1F_FinalButton_Text_0
# 22 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	playse SE_CLICK
# 23 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 24 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	warp MAP_WINTERLILY_HOLLOW_GYM_B1F, VAR_TEMP_2, VAR_TEMP_3
# 25 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_GymB1F_SetLayout::
# 30 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_HOLLOW_GYM_LAYOUT, 2
	goto_if_eq WinterlilyHollow_GymB1F_SetLayout_2
# 35 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_HOLLOW_GYM_LAYOUT, 0
	goto_if_eq WinterlilyHollow_GymB1F_SetLayout_5
# 39 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F_SWITCHED
# 40 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 0
WinterlilyHollow_GymB1F_SetLayout_4:
	return

WinterlilyHollow_GymB1F_SetLayout_2:
# 31 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F_OPEN
	return

WinterlilyHollow_GymB1F_SetLayout_5:
# 36 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F
# 37 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 1
	goto WinterlilyHollow_GymB1F_SetLayout_4


WinterlilyHollow_GymB1F_SetPermaOpenDoors::
# 47 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 48 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 2
# 49 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_A::
# 57 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_A, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_1
# 58 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_2
# 59 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_B::
# 65 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_B, WinterlilyHollow_Gym_Trainer_B_Text_0, WinterlilyHollow_Gym_Trainer_B_Text_1
# 66 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_B_Text_0
# 67 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_C::
# 73 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_C, WinterlilyHollow_Gym_Trainer_C_Text_0, WinterlilyHollow_Gym_Trainer_C_Text_1
# 74 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_C_Text_2
# 75 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_D::
# 81 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_D, WinterlilyHollow_Gym_Trainer_D_Text_0, WinterlilyHollow_Gym_Trainer_D_Text_1
# 82 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_D_Text_2
# 83 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_E::
# 89 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_E, WinterlilyHollow_Gym_Trainer_E_Text_0, WinterlilyHollow_Gym_Trainer_E_Text_1
# 90 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_E_Text_2
# 91 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_LastTrainer_Trigger::
# 97 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILY_GYM_TRICK_TRAINER, WinterlilyHollow_LastTrainer_Trigger_2
# 98 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 99 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILY_GYM_TRICK_TRAINER
# 100 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	applymovement 6, WinterlilyHollow_LastTrainer_Trigger_Movement_0
# 101 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	delay 30
# 102 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_LastTrainer_Trigger_Text_0, MSGBOX_NPC
	end

WinterlilyHollow_LastTrainer_Trigger_2:
	end


WinterlilyHollow_Gym_Trainer_F::
# 108 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_F, WinterlilyHollow_Gym_Trainer_F_Text_0, WinterlilyHollow_Gym_Trainer_F_Text_1
# 109 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_F_Text_2
# 110 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_NPC1::
# 119 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_HOLLOW_GYM_LAYOUT, 0
	goto_if_eq WinterlilyHollow_Gym_NPC1_2
# 122 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_NPC1_Text_1, MSGBOX_NPC
WinterlilyHollow_Gym_NPC1_1:
	end

WinterlilyHollow_Gym_NPC1_2:
# 120 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_NPC1_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_Gym_NPC1_1


WinterlilyHollowGym_LeaderBattle::
# 147 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 149 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, WinterlilyHollowGym_LeaderBattle_2
# 155 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	call Common_EventScript_SaveGameBeforeBattle
# 157 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 158 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_2
# 159 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 160 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 161 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_3, MSGBOX_YESNO
# 163 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollowGym_LeaderBattle_6
# 168 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 169 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_5
# 171 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WINTERLILY_HOLLOW_GYM_LEADER, WinterlilyHollowGym_LeaderBattle_Text_6
# 174 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	message WinterlilyHollowGym_LeaderBattle_Text_7
# 175 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	waitmessage
# 177 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 179 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_BADGE06_GET
# 180 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_SYS_SURF_ENABLED
# 182 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 183 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_8
# 184 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 186 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 187 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 190 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 191 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_9
# 192 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 193 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_HM03
# 194 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 195 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_10
# 197 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	settrainerflag TRAINER_WINTERLILY_HOLLOW_GYM_A
# 198 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	settrainerflag TRAINER_WINTERLILY_HOLLOW_GYM_B
# 199 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	settrainerflag TRAINER_WINTERLILY_HOLLOW_GYM_C
# 200 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	settrainerflag TRAINER_WINTERLILY_HOLLOW_GYM_D
# 201 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	settrainerflag TRAINER_WINTERLILY_HOLLOW_GYM_E
# 202 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	settrainerflag TRAINER_WINTERLILY_HOLLOW_GYM_F
WinterlilyHollowGym_LeaderBattle_1:
# 206 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end

WinterlilyHollowGym_LeaderBattle_2:
# 150 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 151 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 152 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_1
	goto WinterlilyHollowGym_LeaderBattle_1

WinterlilyHollowGym_LeaderBattle_6:
# 164 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 165 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_4, MSGBOX_NPC
	end


WinterlilyHollow_Gym_Manectric::
# 214 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
# 215 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Manectric_Text_0, MSGBOX_NPC
	end


WinterlilyHollowGym_Red::
# 226 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, WinterlilyHollowGym_Red_2
# 236 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILYHOLLOWGYM_SPENSER_WATER, WinterlilyHollowGym_Red_8
# 239 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 240 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 241 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_3
# 242 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 243 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_2
# 244 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILYHOLLOWGYM_SPENSER_WATER
# 245 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
WinterlilyHollowGym_Red_1:
	end

WinterlilyHollowGym_Red_2:
# 227 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILYHOLLOWGYM_SPENSER_REWARD, WinterlilyHollowGym_Red_5
# 230 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 231 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 232 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_1
# 233 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto WinterlilyHollowGym_Red_Reward
	goto WinterlilyHollowGym_Red_1

WinterlilyHollowGym_Red_5:
# 228 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_0, MSGBOX_NPC
	goto WinterlilyHollowGym_Red_1

WinterlilyHollowGym_Red_8:
# 237 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_2, MSGBOX_NPC
	goto WinterlilyHollowGym_Red_1


WinterlilyHollowGym_Red_Reward::
# 252 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	message WinterlilyHollowGym_Red_Reward_Text_0
# 253 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	waitmessage
# 254 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, WinterlilyHollowGym_Red_Reward_Text_1, WinterlilyHollowGym_Red_Reward_Text_2
# 255 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollowGym_Red_Reward_2
WinterlilyHollowGym_Red_Reward_1:
# 256 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollowGym_Red_Reward_5
WinterlilyHollowGym_Red_Reward_4:
# 257 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto WinterlilyHollowGym_Red_Reward_Give
	return

WinterlilyHollowGym_Red_Reward_2:
# 255 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_0x8006, ITEM_ELECTRIC_GEM
	goto WinterlilyHollowGym_Red_Reward_1

WinterlilyHollowGym_Red_Reward_5:
# 256 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_0x8006, ITEM_MAGNET
	goto WinterlilyHollowGym_Red_Reward_4


WinterlilyHollowGym_Red_Reward_Give::
# 261 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	showitemdescription
# 262 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Reward_Give_Text_0, MSGBOX_YESNO
# 263 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	hideitemdescription
# 264 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollowGym_Red_Reward_Give_1
# 269 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto WinterlilyHollowGym_Red_Reward
	return

WinterlilyHollowGym_Red_Reward_Give_1:
# 265 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem VAR_0x8006
# 266 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILYHOLLOWGYM_SPENSER_REWARD
# 267 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto WinterlilyHollowGym_Red_Reward_End
	return


WinterlilyHollowGym_Red_Reward_End::
# 274 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Reward_End_Text_0, MSGBOX_NPC
	end


# 100 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
WinterlilyHollow_LastTrainer_Trigger_Movement_0:
# 100 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	emote_exclamation_mark
# 100 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	jump_in_place_left
	step_end

WinterlilyHollow_GymB1F_FinalButton_Text_0:
# 21 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "{PLAYER} found the master switch!\n"
	.string "This will open all the doors.$"

WinterlilyHollow_Gym_Trainer_A_Text_0:
# 57 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What's a civilian doing here?\n"
	.string "The Electric Terrain is dangerous!$"

WinterlilyHollow_Gym_Trainer_A_Text_1:
# 57 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I guess you're okay!$"

WinterlilyHollow_Gym_Trainer_A_Text_2:
# 58 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader Viniel's Manectric overloads the\n"
	.string "atmosphere with ions, creating electric\l"
	.string "terrain here.$"

WinterlilyHollow_Gym_Trainer_B_Text_0:
# 65 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "This is a power plant that Viniel set up.\n"
	.string "While trainers come and go, us\l"
	.string "Electricians work around the clock to\l"
	.string "serve Winterlily Hollow!$"

WinterlilyHollow_Gym_Trainer_B_Text_1:
# 65 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Alright, carry on.$"

WinterlilyHollow_Gym_Trainer_C_Text_0:
# 73 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Challenge Viniel? Pah!\n"
	.string "My Pokémon are rarer than his!$"

WinterlilyHollow_Gym_Trainer_C_Text_1:
# 73 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Wow, you're good!$"

WinterlilyHollow_Gym_Trainer_C_Text_2:
# 74 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I wanted to show my Qwilfish off to\n"
	.string "Viniel, but I can't find the right\l"
	.string "switches!$"

WinterlilyHollow_Gym_Trainer_D_Text_0:
# 81 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What - you thought everyone would be a\n"
	.string "lumbering electrician? Someone's gotta\l"
	.string "keep the books too!$"

WinterlilyHollow_Gym_Trainer_D_Text_1:
# 81 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Back to the books then!$"

WinterlilyHollow_Gym_Trainer_D_Text_2:
# 82 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "With so much electricity being\n"
	.string "generated, we do need someone to keep\l"
	.string "track of everything.$"

WinterlilyHollow_Gym_Trainer_E_Text_0:
# 89 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Viniel hired me to research efficient\n"
	.string "electricity storage, but all I've been\l"
	.string "doing is battling trainers like you!$"

WinterlilyHollow_Gym_Trainer_E_Text_1:
# 89 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Another trainer I lost to!$"

WinterlilyHollow_Gym_Trainer_E_Text_2:
# 90 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "We need more robust electricity\n"
	.string "storage solutions.$"

WinterlilyHollow_LastTrainer_Trigger_Text_0:
# 102 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Oh, a trainer?\p"
	.string "Don't worry, I won't fight you.\n"
	.string "I'm just fixing up the wiring here.\p"
	.string "Go on, flip the switch.$"

WinterlilyHollow_Gym_Trainer_F_Text_0:
# 108 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Hah! Gotcha! I'm about to crush you!$"

WinterlilyHollow_Gym_Trainer_F_Text_1:
# 108 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "You crushed me!$"

WinterlilyHollow_Gym_Trainer_F_Text_2:
# 109 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader Viniel's right up ahead.\n"
	.string "He put me here to make sure weak\l"
	.string "trainers don't disturb his Manectric.$"

WinterlilyHollow_Gym_NPC1_Text_0:
# 120 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "You opened the door to Viniel!\p"
	.string "I'll only come once I figure the switch\n"
	.string "order out on my own.$"

WinterlilyHollow_Gym_NPC1_Text_1:
# 122 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "This door takes you to Viniel, but I\n"
	.string "don't know how to get here when it's\l"
	.string "open.\p"
	.string "At this rate, I'll never get my badge!\p"
	.string "A battle?\p"
	.string "I'm too frustrated to battle!$"

WinterlilyHollowGym_LeaderBattle_Text_0:
# 151 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Viniel$"

WinterlilyHollowGym_LeaderBattle_Text_1:
# 152 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "That was a great battle. You've earned\n"
	.string "my confidence. Go get 'em, {PLAYER}!$"

WinterlilyHollowGym_LeaderBattle_Text_2:
# 158 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Go Manectric! More! More!\p"
	.string "Wait - it looks like we've got a guest.$"

WinterlilyHollowGym_LeaderBattle_Text_3:
# 161 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Ah, it's you! The enemy of my enemy.\p"
	.string "Hmm...\p"
	.string "You still look a little drained.\n"
	.string "Do you really want to battle?$"

WinterlilyHollowGym_LeaderBattle_Text_4:
# 165 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Come again when you've got the\n"
	.string "spark back in you!$"

WinterlilyHollowGym_LeaderBattle_Text_5:
# 169 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Excellent! I can hear your internal\n"
	.string "battery crackling with energy.\p"
	.string "Look around you, {PLAYER}. This power\n"
	.string "plant is the lifeblood of Winterlily\l"
	.string "Hollow. Gym Leaders aren't just strong\l"
	.string "trainers. We're here to do the best we\l"
	.string "can for those who can't.\p"
	.string "That's what makes us, us.\n"
	.string "Hahaha!\p"
	.string "Back with those Team Somber grunts,\n"
	.string "you showed me the same spirit.\p"
	.string "And now, I want to see you to bring it\n"
	.string "out again!$"

WinterlilyHollowGym_LeaderBattle_Text_6:
# 171 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Sizzling! Crackling! Hahaha!$"

WinterlilyHollowGym_LeaderBattle_Text_7:
# 174 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "{PLAYER} received the Charge Badge\n"
	.string "from Viniel.$"

WinterlilyHollowGym_LeaderBattle_Text_8:
# 183 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "And I'd also like you to have this.$"

WinterlilyHollowGym_LeaderBattle_Text_9:
# 191 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Since you're off the case now, why don't\n"
	.string "you take part in the Pokémon\l"
	.string "Championship this year? You need two\l"
	.string "more badges - but I warn you! Jania and\l"
	.string "Raazi are the strongest Gym Leaders in\l"
	.string "all of Cormoria!\p"
	.string "If you want to try, I suggest you head\n"
	.string "back down to Pelluca City.\l"
	.string "You'll find the next gym there.\p"
	.string "You can go down the Ivy River...\p"
	.string "...for which you'll need Surf!$"

WinterlilyHollowGym_LeaderBattle_Text_10:
# 195 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Keep your spirits high, {PLAYER}!$"

WinterlilyHollow_Gym_Manectric_Text_0:
# 215 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "The air around Manectric is crackling\n"
	.string "with electricity!$"

WinterlilyHollowGym_Red_Text_0:
# 228 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

WinterlilyHollowGym_Red_Text_1:
# 232 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Well done champ-in-the-making! An\n"
	.string "electrifying showdown! In recognition\l"
	.string "of your skills, I'd like to give you\l"
	.string "something.$"

WinterlilyHollowGym_Red_Text_2:
# 237 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "The electricity generated in this plant\n"
	.string "ionises the air and creates electric\l"
	.string "terrain!\p"
	.string "Some trainers even bring Electric Seeds\n"
	.string "to boost their Pokémon in battle.\p"
	.string "Now go get 'em, champ-in-the-making!$"

WinterlilyHollowGym_Red_Text_3:
# 241 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Welcome to the Winterlily Hollow gym!\n"
	.string "It's not a gym so much as a power plant.\l"
	.string "The leader, Viniel, powers this town with\l"
	.string "his strong ELECTRIC-type Pokémon here\l"
	.string "in this plant. First, hydrate yourself!$"

WinterlilyHollowGym_Red_Reward_Text_0:
# 252 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Which of these do you fancy?$"

WinterlilyHollowGym_Red_Reward_Text_1:
# 254 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Electric Gem$"

WinterlilyHollowGym_Red_Reward_Text_2:
# 254 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Magnet$"

WinterlilyHollowGym_Red_Reward_Give_Text_0:
# 262 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Are you sure?$"

WinterlilyHollowGym_Red_Reward_End_Text_0:
# 274 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"
