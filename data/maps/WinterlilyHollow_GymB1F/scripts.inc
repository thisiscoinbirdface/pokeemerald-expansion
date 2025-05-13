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
# 28 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_HOLLOW_GYM_LAYOUT, 2
	goto_if_eq WinterlilyHollow_GymB1F_SetLayout_6
WinterlilyHollow_GymB1F_SetLayout_5:
	return

WinterlilyHollow_GymB1F_SetLayout_2:
# 21 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F
# 22 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 1
	goto WinterlilyHollow_GymB1F_SetLayout_1

WinterlilyHollow_GymB1F_SetLayout_6:
# 29 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setmaplayoutindex LAYOUT_WINTERLILY_HOLLOW_GYM_B1F_SWITCHED
	goto WinterlilyHollow_GymB1F_SetLayout_5


WinterlilyHollow_GymB1F_SetPermaOpenDoors::
# 36 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 37 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setvar VAR_HOLLOW_GYM_LAYOUT, 2
# 38 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_A::
# 46 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_A, WinterlilyHollow_Gym_Trainer_A_Text_0, WinterlilyHollow_Gym_Trainer_A_Text_1
# 47 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_A_Text_2
# 48 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_B::
# 54 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_B, WinterlilyHollow_Gym_Trainer_B_Text_0, WinterlilyHollow_Gym_Trainer_B_Text_1
# 55 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_B_Text_0
# 56 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_C::
# 62 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_C, WinterlilyHollow_Gym_Trainer_C_Text_0, WinterlilyHollow_Gym_Trainer_C_Text_1
# 63 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_C_Text_2
# 64 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_D::
# 70 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_D, WinterlilyHollow_Gym_Trainer_D_Text_0, WinterlilyHollow_Gym_Trainer_D_Text_1
# 71 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_D_Text_2
# 72 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_Trainer_E::
# 78 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_E, WinterlilyHollow_Gym_Trainer_E_Text_0, WinterlilyHollow_Gym_Trainer_E_Text_1
# 79 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_E_Text_2
# 80 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_LastTrainer_Trigger::
# 86 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILY_GYM_TRICK_TRAINER, WinterlilyHollow_LastTrainer_Trigger_2
# 87 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 88 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILY_GYM_TRICK_TRAINER
# 89 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	applymovement 6, WinterlilyHollow_LastTrainer_Trigger_Movement_0
# 90 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	delay 30
# 91 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_LastTrainer_Trigger_Text_0, MSGBOX_NPC
	end

WinterlilyHollow_LastTrainer_Trigger_2:
	end


WinterlilyHollow_Gym_Trainer_F::
# 97 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_single TRAINER_WINTERLILY_HOLLOW_GYM_F, WinterlilyHollow_Gym_Trainer_F_Text_0, WinterlilyHollow_Gym_Trainer_F_Text_1
# 98 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Trainer_F_Text_2
# 99 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end


WinterlilyHollow_Gym_NPC1::
# 108 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_NPC1_Text_0, MSGBOX_NPC
	end


WinterlilyHollowGym_LeaderBattle::
# 132 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 134 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, WinterlilyHollowGym_LeaderBattle_2
# 139 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 144 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_2
# 145 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 146 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 147 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_3, MSGBOX_YESNO
# 149 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollowGym_LeaderBattle_6
# 154 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 155 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_5
# 157 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WINTERLILY_HOLLOW_GYM_LEADER, WinterlilyHollowGym_LeaderBattle_Text_6
# 160 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	message WinterlilyHollowGym_LeaderBattle_Text_7
# 161 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	waitmessage
# 163 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 165 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_BADGE06_GET
# 166 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_SYS_SURF_ENABLED
# 168 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 169 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_8
# 170 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 172 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 173 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 176 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 177 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_9
# 178 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	release
# 179 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_HM03
# 180 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 181 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_10
WinterlilyHollowGym_LeaderBattle_1:
# 185 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
	end

WinterlilyHollowGym_LeaderBattle_2:
# 135 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 136 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 137 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_1
	goto WinterlilyHollowGym_LeaderBattle_1

WinterlilyHollowGym_LeaderBattle_6:
# 150 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	speakername WinterlilyHollowGym_LeaderBattle_Text_0
# 151 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_LeaderBattle_Text_4, MSGBOX_NPC
	end


WinterlilyHollow_Gym_Ampharos::
# 193 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 194 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollow_Gym_Ampharos_Text_0, MSGBOX_NPC
	end


WinterlilyHollowGym_Red::
# 205 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, WinterlilyHollowGym_Red_2
# 229 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILYHOLLOWGYM_SPENSER_WATER, WinterlilyHollowGym_Red_8
# 232 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 233 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 234 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_6
# 235 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 236 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_5
# 237 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILYHOLLOWGYM_SPENSER_WATER
# 238 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	releaseall
WinterlilyHollowGym_Red_1:
	end

WinterlilyHollowGym_Red_2:
# 206 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	goto_if_set FLAG_WINTERLILYHOLLOWGYM_SPENSER_REWARD, WinterlilyHollowGym_Red_5
# 209 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	lockall
# 210 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	faceplayer
# 211 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_1
# 212 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, WinterlilyHollowGym_Red_Text_2, WinterlilyHollowGym_Red_Text_3
# 214 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollowGym_Red_12
# 217 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollowGym_Red_15
WinterlilyHollowGym_Red_11:
# 225 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	setflag FLAG_WINTERLILYHOLLOWGYM_SPENSER_REWARD
# 226 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_4, MSGBOX_NPC
	goto WinterlilyHollowGym_Red_1

WinterlilyHollowGym_Red_5:
# 207 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_0, MSGBOX_NPC
	goto WinterlilyHollowGym_Red_1

WinterlilyHollowGym_Red_8:
# 230 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	msgbox WinterlilyHollowGym_Red_Text_5, MSGBOX_NPC
	goto WinterlilyHollowGym_Red_1

WinterlilyHollowGym_Red_12:
# 215 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
	goto WinterlilyHollowGym_Red_11

WinterlilyHollowGym_Red_15:
# 218 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	giveitem ITEM_MAGNET
	goto WinterlilyHollowGym_Red_11


# 89 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
WinterlilyHollow_LastTrainer_Trigger_Movement_0:
# 89 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	emote_exclamation_mark
# 89 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	jump_in_place_left
	step_end

WinterlilyHollow_Gym_Trainer_A_Text_0:
# 46 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What's a civilian doing here? Viniel's\n"
	.string "Ampharos overloads the atmosphere\l"
	.string "with ions, creating electric terrain\l"
	.string "here. It's dangerous!$"

WinterlilyHollow_Gym_Trainer_A_Text_1:
# 46 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I guess you can stay!$"

WinterlilyHollow_Gym_Trainer_A_Text_2:
# 47 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader Viniel's Ampharos overloads the\n"
	.string "atmosphere with ions, creating electric\l"
	.string "terrain here.$"

WinterlilyHollow_Gym_Trainer_B_Text_0:
# 54 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "This is a power plant that Viniel set up.\n"
	.string "While trainers come and go, us\l"
	.string "Electricians work around the clock to\l"
	.string "serve Winterlily Hollow!$"

WinterlilyHollow_Gym_Trainer_B_Text_1:
# 54 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Alright, carry on.$"

WinterlilyHollow_Gym_Trainer_C_Text_0:
# 62 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Are you here to challenge Viniel too?$"

WinterlilyHollow_Gym_Trainer_C_Text_1:
# 62 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Wow, you're good!$"

WinterlilyHollow_Gym_Trainer_C_Text_2:
# 63 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "I wanted to challenge Leader Viniel, but\n"
	.string "the doors are locked and I can't find\l"
	.string "the switches!$"

WinterlilyHollow_Gym_Trainer_D_Text_0:
# 70 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "What - you thought everyone would be a\n"
	.string "lumbering electrician? Someone's gotta\l"
	.string "keep the books too!$"

WinterlilyHollow_Gym_Trainer_D_Text_1:
# 70 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Back to the books then!$"

WinterlilyHollow_Gym_Trainer_D_Text_2:
# 71 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "With so much electricity being\n"
	.string "generated, we do need someone to keep\l"
	.string "track of everything.$"

WinterlilyHollow_Gym_Trainer_E_Text_0:
# 78 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Viniel hired me to do some research on\n"
	.string "efficient electricity storage, but all\l"
	.string "I've been doing is battling chums like\l"
	.string "you!$"

WinterlilyHollow_Gym_Trainer_E_Text_1:
# 78 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Another chum I lost to!$"

WinterlilyHollow_Gym_Trainer_E_Text_2:
# 79 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Since Winterlily Hollow gets no\n"
	.string "electricity, we need robust storage\l"
	.string "solutions.$"

WinterlilyHollow_LastTrainer_Trigger_Text_0:
# 91 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Oh, a trainer? Don't worry, I won't fight\n"
	.string "you. I'm just fixing up the wiring here.\l"
	.string "Go on, flip the switch.$"

WinterlilyHollow_Gym_Trainer_F_Text_0:
# 97 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Hah! Gotcha! I'm about to crush you!$"

WinterlilyHollow_Gym_Trainer_F_Text_1:
# 97 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "You crushed me!$"

WinterlilyHollow_Gym_Trainer_F_Text_2:
# 98 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Leader Viniel's right up ahead. He\n"
	.string "stationed me out here to make sure\l"
	.string "weaker trainers don't disturb his\l"
	.string "Ampharos.$"

WinterlilyHollow_Gym_NPC1_Text_0:
# 108 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "This is the door that takes you to\n"
	.string "Viniel, but I can't figure out how to\l"
	.string "reach this when it's open. At this rate,\l"
	.string "I'll never get my gym badge!\p"
	.string "A battle?\p"
	.string "I'm too frustrated to battle!$"

WinterlilyHollowGym_LeaderBattle_Text_0:
# 136 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Viniel$"

WinterlilyHollowGym_LeaderBattle_Text_1:
# 137 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "That was a great battle. You've earned\n"
	.string "my confidence. Go get 'em, {PLAYER}!$"

WinterlilyHollowGym_LeaderBattle_Text_2:
# 144 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Go Ampharos! More! More!\p"
	.string "Wait - it looks like we've got a guest.$"

WinterlilyHollowGym_LeaderBattle_Text_3:
# 147 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Ah, it's you! The enemy of my enemy.\p"
	.string "Hmm...\p"
	.string "You still look a little drained of\n"
	.string "energy. Do you really want to battle?$"

WinterlilyHollowGym_LeaderBattle_Text_4:
# 151 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Come back when you've got the spark\n"
	.string "back in you!$"

WinterlilyHollowGym_LeaderBattle_Text_5:
# 155 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Excellent! Your internal battery is\n"
	.string "full, then.\p"
	.string "Look around you, {PLAYER}. This power\n"
	.string "plant is the lifeblood of Winterlily\l"
	.string "Hollow. Gym Leaders aren't just strong\l"
	.string "trainers. We're here to do the best we\l"
	.string "can for those who can't. That's what\l"
	.string "makes us, us. Hahaha!\p"
	.string "Back with those Team Somber grunts,\n"
	.string "you showed me that very energy.\p"
	.string "And now, I want you to bring it out\n"
	.string "again!$"

WinterlilyHollowGym_LeaderBattle_Text_6:
# 157 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Sizzling! Crackling! Hahaha!$"

WinterlilyHollowGym_LeaderBattle_Text_7:
# 160 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "{PLAYER} received the Spark Badge\n"
	.string "from Viniel.$"

WinterlilyHollowGym_LeaderBattle_Text_8:
# 169 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "And I'd also like you to have this.$"

WinterlilyHollowGym_LeaderBattle_Text_9:
# 177 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Since you're off the case now, I\n"
	.string "suggest you head back down to Pelluca\l"
	.string "City. You'll find the next gym leader,\l"
	.string "Jania, there.\p"
	.string "You can go down the Ivy River...\p"
	.string "...for which you'll need Surf!$"

WinterlilyHollowGym_LeaderBattle_Text_10:
# 181 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Keep your spirits high, {PLAYER}!$"

WinterlilyHollow_Gym_Ampharos_Text_0:
# 194 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "The air around Ampharos is crackling\n"
	.string "with electricity!$"

WinterlilyHollowGym_Red_Text_0:
# 207 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

WinterlilyHollowGym_Red_Text_1:
# 211 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Well done champ-in-the-making! An\n"
	.string "electrifying showdown! In recognition\l"
	.string "of your skills, I'd like to give you\l"
	.string "something. Which of these do you\l"
	.string "fancy?$"

WinterlilyHollowGym_Red_Text_2:
# 212 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Electric Gym$"

WinterlilyHollowGym_Red_Text_3:
# 212 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Magnet$"

WinterlilyHollowGym_Red_Text_4:
# 226 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

WinterlilyHollowGym_Red_Text_5:
# 230 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "The electricity generated in this plant\n"
	.string "ionises the air and creates electric\l"
	.string "terrain! Steer clear of FLYING and\l"
	.string "WATER type Pokémon.$"

WinterlilyHollowGym_Red_Text_6:
# 234 "data//maps/WinterlilyHollow_GymB1F/scripts.pory"
	.string "Welcome to the Winterlily Hollow gym!\n"
	.string "It's not a gym so much as a power plant.\l"
	.string "The leader, Viniel, powers this town with\l"
	.string "his strong ELECTRIC-type Pokémon here\l"
	.string "in this plant. First, hydrate yourself!$"
