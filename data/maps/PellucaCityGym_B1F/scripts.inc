PellucaCityGym_B1F_MapScripts::
	.byte 0


PellucaGym_Gabrielle_Trigger0::
# 6 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_PELLUCA_GYM_GABRIELLE_BATTLE, PellucaGym_Gabrielle_Trigger0_2
# 9 "data//maps/PellucaCityGym_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GIRL, FALSE
# 10 "data//maps/PellucaCityGym_B1F/scripts.pory"
	applymovement 4, PellucaGym_Gabrielle_Trigger0_Movement_0
# 11 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitmovement 0
# 12 "data//maps/PellucaCityGym_B1F/scripts.pory"
	delay 48
# 13 "data//maps/PellucaCityGym_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaGym_Gabrielle_Trigger0_Movement_1
# 14 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitmovement 0
# 17 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Gabrielle_Trigger0_Text_0
# 18 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaCity_Gym_Text_Gab_Intro
# 19 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_CITY_GYM_A, PellucaCity_Gym_Text_Gab_Defeat
# 20 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaCity_Gym_Text_Gab_PostDefeat
# 22 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_PELLUCA_GYM_GABRIELLE_BATTLE
# 25 "data//maps/PellucaCityGym_B1F/scripts.pory"
	releaseall
	end

PellucaGym_Gabrielle_Trigger0_2:
	end


PellucaGym_Gabrielle_Trigger1::
# 29 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_PELLUCA_GYM_GABRIELLE_BATTLE, PellucaGym_Gabrielle_Trigger1_2
# 32 "data//maps/PellucaCityGym_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GIRL, FALSE
# 33 "data//maps/PellucaCityGym_B1F/scripts.pory"
	applymovement 4, PellucaGym_Gabrielle_Trigger0_Movement_0
# 34 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitmovement 0
# 35 "data//maps/PellucaCityGym_B1F/scripts.pory"
	delay 48
# 36 "data//maps/PellucaCityGym_B1F/scripts.pory"
	applymovement 4, PellucaGym_Gabrielle_Trigger1_Movement_0
# 37 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitmovement 0
# 38 "data//maps/PellucaCityGym_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaGym_Gabrielle_Trigger0_Movement_1
# 39 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitmovement 0
# 42 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Gabrielle_Trigger0_Text_0
# 43 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaCity_Gym_Text_Gab_Intro
# 44 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_CITY_GYM_A, PellucaCity_Gym_Text_Gab_Defeat
# 45 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaCity_Gym_Text_Gab_PostDefeat
# 47 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_PELLUCA_GYM_GABRIELLE_BATTLE
# 50 "data//maps/PellucaCityGym_B1F/scripts.pory"
	releaseall
	end

PellucaGym_Gabrielle_Trigger1_2:
	end


PellucaGym_Gabrielle_Trigger2::
# 54 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_PELLUCA_GYM_GABRIELLE_BATTLE, PellucaGym_Gabrielle_Trigger2_2
# 57 "data//maps/PellucaCityGym_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GIRL, FALSE
# 58 "data//maps/PellucaCityGym_B1F/scripts.pory"
	applymovement 4, PellucaGym_Gabrielle_Trigger0_Movement_0
# 59 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitmovement 0
# 60 "data//maps/PellucaCityGym_B1F/scripts.pory"
	applymovement 4, PellucaGym_Gabrielle_Trigger2_Movement_0
# 61 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitmovement 0
# 62 "data//maps/PellucaCityGym_B1F/scripts.pory"
	delay 48
# 63 "data//maps/PellucaCityGym_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaGym_Gabrielle_Trigger0_Movement_1
# 64 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitmovement 0
# 67 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Gabrielle_Trigger0_Text_0
# 68 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaCity_Gym_Text_Gab_Intro
# 69 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_CITY_GYM_A, PellucaCity_Gym_Text_Gab_Defeat
# 70 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaCity_Gym_Text_Gab_PostDefeat
# 72 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_PELLUCA_GYM_GABRIELLE_BATTLE
# 75 "data//maps/PellucaCityGym_B1F/scripts.pory"
	releaseall
	end

PellucaGym_Gabrielle_Trigger2_2:
	end


PellucaGym_Trainer_Gabrielle::
# 88 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_Gabrielle_Text_0, MSGBOX_NPC
	end


PellucaGym_Trainer_B::
# 93 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_B, PellucaGym_Trainer_B_Text_0, PellucaGym_Trainer_B_Text_1
# 94 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_B_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_C::
# 100 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_C, PellucaGym_Trainer_C_Text_0, PellucaGym_Trainer_C_Text_1
# 101 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_C_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_D::
# 106 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_D, PellucaGym_Trainer_D_Text_0, PellucaGym_Trainer_D_Text_1
# 107 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_D_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_E::
# 112 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_E, PellucaGym_Trainer_E_Text_0, PellucaGym_Trainer_E_Text_1
# 113 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_E_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_F::
# 118 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_F, PellucaGym_Trainer_F_Text_0, PellucaGym_Trainer_F_Text_1
# 119 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_F_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_G::
# 124 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_G, PellucaGym_Trainer_G_Text_0, PellucaGym_Trainer_F_Text_1
# 125 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_G_Text_1, MSGBOX_NPC
	end


PellucaGym_Trainer_H::
# 131 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_H, PellucaGym_Trainer_H_Text_0, PellucaGym_Trainer_H_Text_0
# 132 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_H_Text_0, MSGBOX_NPC
	end


PellucaGym_Trainer_I::
# 137 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_PELLUCA_CITY_GYM_I, PellucaGym_Trainer_H_Text_0, PellucaGym_Trainer_H_Text_0
# 138 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_H_Text_0, MSGBOX_NPC
	end


PellucaGym_Red::
# 164 "data//maps/PellucaCityGym_B1F/scripts.pory"
	lockall
# 165 "data//maps/PellucaCityGym_B1F/scripts.pory"
	faceplayer
# 167 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PellucaGym_Red_2
# 175 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_PELLUCAGYM_SPENSER_WATER, PellucaGym_Red_8
# 178 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_3
# 179 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 180 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_4
# 181 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_PELLUCAGYM_SPENSER_WATER
PellucaGym_Red_1:
# 184 "data//maps/PellucaCityGym_B1F/scripts.pory"
	releaseall
	end

PellucaGym_Red_2:
# 168 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_PELLUCAGYM_SPENSER_REWARD, PellucaGym_Red_5
# 171 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_1
# 172 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto PellucaCityGym_Red_Reward
	goto PellucaGym_Red_1

PellucaGym_Red_5:
# 169 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_0
	goto PellucaGym_Red_1

PellucaGym_Red_8:
# 176 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Red_Text_2
	goto PellucaGym_Red_1


PellucaCityGym_Red_Reward::
# 189 "data//maps/PellucaCityGym_B1F/scripts.pory"
	message PellucaCityGym_Red_Reward_Text_0
# 190 "data//maps/PellucaCityGym_B1F/scripts.pory"
	waitmessage
# 191 "data//maps/PellucaCityGym_B1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCityGym_Red_Reward_Text_1, PellucaCityGym_Red_Reward_Text_2
# 192 "data//maps/PellucaCityGym_B1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCityGym_Red_Reward_2
PellucaCityGym_Red_Reward_1:
# 193 "data//maps/PellucaCityGym_B1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityGym_Red_Reward_5
PellucaCityGym_Red_Reward_4:
# 194 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto PellucaCityGym_Red_Reward_Give
	return

PellucaCityGym_Red_Reward_2:
# 192 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setvar VAR_0x8006, ITEM_WATER_GEM
	goto PellucaCityGym_Red_Reward_1

PellucaCityGym_Red_Reward_5:
# 193 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setvar VAR_0x8006, ITEM_MYSTIC_WATER
	goto PellucaCityGym_Red_Reward_4


PellucaCityGym_Red_Reward_Give::
# 198 "data//maps/PellucaCityGym_B1F/scripts.pory"
	showitemdescription
# 199 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaCityGym_Red_Reward_Give_Text_0, MSGBOX_YESNO
# 200 "data//maps/PellucaCityGym_B1F/scripts.pory"
	hideitemdescription
# 201 "data//maps/PellucaCityGym_B1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityGym_Red_Reward_Give_1
# 206 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto PellucaCityGym_Red_Reward
	return

PellucaCityGym_Red_Reward_Give_1:
# 202 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem VAR_0x8006
# 203 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_PELLUCAGYM_SPENSER_REWARD
# 204 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto PellucaCityGym_Red_Reward_End
	return


PellucaCityGym_Red_Reward_End::
# 211 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaCityGym_Red_Reward_End_Text_0, MSGBOX_NPC
	end


PellucaGym_Leader::
# 245 "data//maps/PellucaCityGym_B1F/scripts.pory"
	lockall
# 246 "data//maps/PellucaCityGym_B1F/scripts.pory"
	faceplayer
# 247 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setrespawn HEAL_LOCATION_PELLUCA_CITY
# 249 "data//maps/PellucaCityGym_B1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PellucaGym_Leader_2
# 252 "data//maps/PellucaCityGym_B1F/scripts.pory"
	call Common_EventScript_SaveGameBeforeBattle
# 255 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Leader_Text_1
# 256 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_2
# 258 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_CITY_GYM_LEADER, PellucaGym_Leader_Text_3
# 262 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Leader_Text_1
# 263 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_4
# 264 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
# 267 "data//maps/PellucaCityGym_B1F/scripts.pory"
	message PellucaGym_Leader_Text_5
# 268 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername NULL
# 269 "data//maps/PellucaCityGym_B1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 270 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_BADGE07_GET
# 271 "data//maps/PellucaCityGym_B1F/scripts.pory"
	setflag FLAG_SYS_WHIRLPOOL_ENABLED
# 274 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox_delay PellucaGym_Leader_Text_1, PellucaGym_Leader_Text_6
# 275 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_HM05
# 276 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox_delay PellucaGym_Leader_Text_1, PellucaGym_Leader_Text_7
# 277 "data//maps/PellucaCityGym_B1F/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 278 "data//maps/PellucaCityGym_B1F/scripts.pory"
	delay 16
# 281 "data//maps/PellucaCityGym_B1F/scripts.pory"
	clearflag FLAG_ZARUDE
# 284 "data//maps/PellucaCityGym_B1F/scripts.pory"
	speakername PellucaGym_Leader_Text_1
# 285 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_8
# 286 "data//maps/PellucaCityGym_B1F/scripts.pory"
	release
PellucaGym_Leader_1:
# 289 "data//maps/PellucaCityGym_B1F/scripts.pory"
	releaseall
	return

PellucaGym_Leader_2:
# 250 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Leader_Text_0
	goto PellucaGym_Leader_1


# 10 "data//maps/PellucaCityGym_B1F/scripts.pory"
PellucaGym_Gabrielle_Trigger0_Movement_0:
# 10 "data//maps/PellucaCityGym_B1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 13 "data//maps/PellucaCityGym_B1F/scripts.pory"
PellucaGym_Gabrielle_Trigger0_Movement_1:
# 13 "data//maps/PellucaCityGym_B1F/scripts.pory"
	face_right
	step_end

# 36 "data//maps/PellucaCityGym_B1F/scripts.pory"
PellucaGym_Gabrielle_Trigger1_Movement_0:
# 36 "data//maps/PellucaCityGym_B1F/scripts.pory"
	walk_left
	step_end

# 60 "data//maps/PellucaCityGym_B1F/scripts.pory"
PellucaGym_Gabrielle_Trigger2_Movement_0:
# 60 "data//maps/PellucaCityGym_B1F/scripts.pory"
	walk_left
# 60 "data//maps/PellucaCityGym_B1F/scripts.pory"
	walk_left
	step_end

PellucaGym_Gabrielle_Trigger0_Text_0:
# 17 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Gabrielle$"

PellucaGym_Trainer_Gabrielle_Text_0:
# 88 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania's a really strong leader.\n"
	.string "But you might stand a chance!$"

PellucaGym_Trainer_B_Text_0:
# 93 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "What's a wimp like you doing here? This\n"
	.string "is a tough gym for elite trainers only!$"

PellucaGym_Trainer_B_Text_1:
# 93 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "You're not a wimp!$"

PellucaGym_Trainer_B_Text_2:
# 94 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania uses strong WATER type Pokémon.\n"
	.string "You'd better be prepared!\p"
	.string "...\p"
	.string "Why am I using FIRE types then?\p"
	.string "None of your business!$"

PellucaGym_Trainer_C_Text_0:
# 100 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "I've been training with {COLOR BLUE}Jania{COLOR DARK_GRAY} to\n"
	.string "withstand these strong currents.\p"
	.string "You could use some training too!$"

PellucaGym_Trainer_C_Text_1:
# 100 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "You don't need training!$"

PellucaGym_Trainer_C_Text_2:
# 101 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania won't go easy on anyone!$"

PellucaGym_Trainer_D_Text_0:
# 106 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Getting lost in the currents, are we?$"

PellucaGym_Trainer_D_Text_1:
# 106 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "I'm lost too!$"

PellucaGym_Trainer_D_Text_2:
# 107 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania beat me earlier and now I can't\n"
	.string "find my way out of this gym!$"

PellucaGym_Trainer_E_Text_0:
# 112 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Gloria rejected me from her Theatre\n"
	.string "Studio! So I'm going to get all eight\l"
	.string "badges and challenge her for ownership!$"

PellucaGym_Trainer_E_Text_1:
# 112 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "I couldn't even challenge you!$"

PellucaGym_Trainer_E_Text_2:
# 113 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Once I beat {COLOR BLUE}Gloria{COLOR DARK_GRAY}, I'll be the new owner\n"
	.string "of the Silversun Theatre Studio!\p"
	.string "...\p"
	.string "You're saying that's not how ownership\n"
	.string "works?$"

PellucaGym_Trainer_F_Text_0:
# 118 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Yeah! By low-level, we mean you!$"

PellucaGym_Trainer_F_Text_1:
# 118 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Twin down!$"

PellucaGym_Trainer_F_Text_2:
# 119 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Want a tip?\p"
	.string "Jania's Pelipper sets up the rain so you\n"
	.string "need to work around that!$"

PellucaGym_Trainer_G_Text_0:
# 124 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "We're the Rain Twins! {COLOR BLUE}Jania{COLOR DARK_GRAY}'s selected\n"
	.string "us to keep low-level trainers away.$"

PellucaGym_Trainer_G_Text_1:
# 125 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Want a tip?\p"
	.string "Jania's Toxapex is scary!$"

PellucaGym_Trainer_H_Text_0:
# 131 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "$"

PellucaGym_Red_Text_0:
# 169 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "All the best, champ-in-the-making!$"

PellucaGym_Red_Text_1:
# 171 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Well done champ-in-the-making! You\n"
	.string "went face-to-face with the waves,\l"
	.string "stood firm and came out on top! In\l"
	.string "recognition of your victory, I'd like to\l"
	.string "give you something.$"

PellucaGym_Red_Text_2:
# 176 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania's Gyarados isn't her only threat!\n"
	.string "Her Clawitzer wears Choice Specs, which\l"
	.string "means it hits harder, but it can only\l"
	.string "use one move. Could you use that to\l"
	.string "turn the tables?$"

PellucaGym_Red_Text_3:
# 178 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Greetings champ-in-the-making! Good\n"
	.string "to see you again.\p"
	.string "First, have some water.$"

PellucaGym_Red_Text_4:
# 180 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania built this massive underground\n"
	.string "cave to let her Gyarados go wild in\l"
	.string "battles! But Gyarados isn't her only\l"
	.string "threat! Her Clawitzer wears Choice\l"
	.string "Specs, which means it hits harder, but\l"
	.string "it can only use one move. Could you use\l"
	.string "that to turn the tables?$"

PellucaCityGym_Red_Reward_Text_0:
# 189 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Which of these do you fancy?$"

PellucaCityGym_Red_Reward_Text_1:
# 191 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Water Gem$"

PellucaCityGym_Red_Reward_Text_2:
# 191 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Mystic Water$"

PellucaCityGym_Red_Reward_Give_Text_0:
# 199 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Are you sure?$"

PellucaCityGym_Red_Reward_End_Text_0:
# 211 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

PellucaGym_Leader_Text_0:
# 250 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "The tides of time wait for nobody. Do\n"
	.string "what you have to do!$"

PellucaGym_Leader_Text_1:
# 255 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Jania$"

PellucaGym_Leader_Text_2:
# 256 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Hello {PLAYER}. Welcome to the\n"
	.string "Pelluca City Gym.\p"
	.string "The flow of water is calm, but never\n"
	.string "underestimate its strength. Let's see\l"
	.string "if you can ride the wave to victory!$"

PellucaGym_Leader_Text_3:
# 258 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "You're one with the tides!$"

PellucaGym_Leader_Text_4:
# 263 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "{PLAYER}, that was a spectacular\n"
	.string "battle. You've earned this.$"

PellucaGym_Leader_Text_5:
# 267 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "{PLAYER} received the River Badge\n"
	.string "from {COLOR BLUE}Jania{COLOR DARK_GRAY}.$"

PellucaGym_Leader_Text_6:
# 274 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Take this too.$"

PellucaGym_Leader_Text_7:
# 276 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "With it, you can surf across strong\n"
	.string "currents like the ones in this gym.\p"
	.string "Lastly, I must give you this.$"

PellucaGym_Leader_Text_8:
# 285 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "The road to the Pokémon Championship\n"
	.string "is hard, but you're nearly there.\p"
	.string "The eighth and last Gym Badge is given\n"
	.string "by {COLOR RED}Raazi{COLOR DARK_GRAY} of {COLOR RED}Rivetshore City{COLOR DARK_GRAY}.\p"
	.string "Head south from here down the river.\p"
	.string "Good luck, {PLAYER}.$"

PellucaCity_Gym_Text_Gab_Intro::
# 78 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "{PLAYER}! Are you here to challenge\n"
	.string "{COLOR BLUE}Jania{COLOR DARK_GRAY} too? I've decided on my next goal\l"
	.string "- to collect all eight badges and\l"
	.string "become the Pokémon Champion!$"

PellucaCity_Gym_Text_Gab_Defeat::
# 81 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "I was so close!$"

PellucaCity_Gym_Text_Gab_PostDefeat::
# 84 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Adjusting to life after {COLOR BLUE}Team Somber{COLOR DARK_GRAY}\n"
	.string "hasn't been easy. But battling trainers\l"
	.string "and getting badges has given me and\l"
	.string "Zorua something to focus on!\p"
	.string "We didn't win today, but mark my words -\n"
	.string "we'll beat you at the Pokémon\l"
	.string "Championships, {PLAYER}!$"
