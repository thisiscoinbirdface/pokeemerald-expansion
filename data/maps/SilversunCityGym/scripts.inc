SilversunCityGym_MapScripts::
	.byte 0


SilversunCityGym_EventScript_BackstagePass::
# 10 "data//maps/SilversunCityGym/scripts.pory"
	lockall
# 11 "data//maps/SilversunCityGym/scripts.pory"
	faceplayer
# 12 "data//maps/SilversunCityGym/scripts.pory"
	goto_if_set FLAG_SILVERSUN_BACKSTAGEPASS_GET, SilversunCityGym_EventScript_BackstagePass_2
# 15 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_BackstagePass_Text_1
# 16 "data//maps/SilversunCityGym/scripts.pory"
	release
# 17 "data//maps/SilversunCityGym/scripts.pory"
	setflag FLAG_SILVERSUN_BACKSTAGEPASS_GET
# 18 "data//maps/SilversunCityGym/scripts.pory"
	giveitem ITEM_BACKSTAGE_PASS
SilversunCityGym_EventScript_BackstagePass_1:
# 21 "data//maps/SilversunCityGym/scripts.pory"
	releaseall
	return

SilversunCityGym_EventScript_BackstagePass_2:
# 13 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_BackstagePass_Text_0
	goto SilversunCityGym_EventScript_BackstagePass_1


SilversunCityGym_EventScript_Red::
# 26 "data//maps/SilversunCityGym/scripts.pory"
	lockall
# 27 "data//maps/SilversunCityGym/scripts.pory"
	faceplayer
# 29 "data//maps/SilversunCityGym/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCityGym_EventScript_Red_2
# 50 "data//maps/SilversunCityGym/scripts.pory"
	goto_if_set FLAG_GALECRESTGYM_SPENSER_WATER, SilversunCityGym_EventScript_Red_8
# 53 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_6
# 54 "data//maps/SilversunCityGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 55 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_5
# 56 "data//maps/SilversunCityGym/scripts.pory"
	setflag FLAG_GALECRESTGYM_SPENSER_WATER
SilversunCityGym_EventScript_Red_1:
# 59 "data//maps/SilversunCityGym/scripts.pory"
	releaseall
	end

SilversunCityGym_EventScript_Red_2:
# 30 "data//maps/SilversunCityGym/scripts.pory"
	goto_if_set FLAG_GALECRESTGYM_SPENSER_REWARD, SilversunCityGym_EventScript_Red_5
# 33 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_1
# 34 "data//maps/SilversunCityGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, SilversunCityGym_EventScript_Red_Text_2, SilversunCityGym_EventScript_Red_Text_3
# 36 "data//maps/SilversunCityGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCityGym_EventScript_Red_12
# 39 "data//maps/SilversunCityGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCityGym_EventScript_Red_15
SilversunCityGym_EventScript_Red_11:
# 46 "data//maps/SilversunCityGym/scripts.pory"
	setflag FLAG_GALECRESTGYM_SPENSER_REWARD
# 47 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_4
	goto SilversunCityGym_EventScript_Red_1

SilversunCityGym_EventScript_Red_5:
# 31 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_0
	goto SilversunCityGym_EventScript_Red_1

SilversunCityGym_EventScript_Red_8:
# 51 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_5
	goto SilversunCityGym_EventScript_Red_1

SilversunCityGym_EventScript_Red_12:
# 37 "data//maps/SilversunCityGym/scripts.pory"
	giveitem ITEM_GRASS_GEM
	goto SilversunCityGym_EventScript_Red_11

SilversunCityGym_EventScript_Red_15:
# 40 "data//maps/SilversunCityGym/scripts.pory"
	giveitem ITEM_DARK_GEM
	goto SilversunCityGym_EventScript_Red_11


SilversunCityGym_TrainerA::
# 66 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_A, SilversunCityGym_TrainerA_Text_0, SilversunCityGym_TrainerA_Text_1
# 67 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerA_Text_2
# 68 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerB::
# 73 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_B, SilversunCityGym_TrainerB_Text_0, SilversunCityGym_TrainerB_Text_1
# 74 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerB_Text_2
# 75 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerC::
# 80 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_C, SilversunCityGym_TrainerC_Text_0, SilversunCityGym_TrainerC_Text_1
# 81 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerC_Text_2
# 82 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerD::
# 87 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_D, SilversunCityGym_TrainerD_Text_0, SilversunCityGym_TrainerD_Text_1
# 88 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerD_Text_2
# 89 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_EventScript_BackstagePass_Text_0:
# 13 "data//maps/SilversunCityGym/scripts.pory"
	.string "Hope you enjoy the show!$"

SilversunCityGym_EventScript_BackstagePass_Text_1:
# 15 "data//maps/SilversunCityGym/scripts.pory"
	.string "Unfortunately the Gym Leader is\n"
	.string "performing at the Silversun Theater\l"
	.string "tonight, so the Gym Challenge is on\l"
	.string "hold. As compensation, please accept\l"
	.string "this BACKSTAGE PASS to tonight's show.$"

SilversunCityGym_EventScript_Red_Text_0:
# 31 "data//maps/SilversunCityGym/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

SilversunCityGym_EventScript_Red_Text_1:
# 33 "data//maps/SilversunCityGym/scripts.pory"
	.string "Well done champ-in-the-making! Giving\n"
	.string "it your all in front of a huge crowd...and\l"
	.string "winning! In recognition of your victory,\l"
	.string "I'd like to give you something. Which of\l"
	.string "these do you fancy?$"

SilversunCityGym_EventScript_Red_Text_2:
# 34 "data//maps/SilversunCityGym/scripts.pory"
	.string "GRASS GEM$"

SilversunCityGym_EventScript_Red_Text_3:
# 34 "data//maps/SilversunCityGym/scripts.pory"
	.string "DARK GEM$"

SilversunCityGym_EventScript_Red_Text_4:
# 47 "data//maps/SilversunCityGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

SilversunCityGym_EventScript_Red_Text_5:
# 51 "data//maps/SilversunCityGym/scripts.pory"
	.string "When Gloria was appointed leader, she\n"
	.string "took all the funds to set up her gym and\l"
	.string "made a theater studio instead!\l"
	.string "Silversun City is congested, so space is\l"
	.string "expensive.\p"
	.string "Nobody here is interested in battling,\n"
	.string "but the rules are if you want to be a\l"
	.string "part of Gloria's productions, you have\l"
	.string "to help maintain the gym.$"

SilversunCityGym_EventScript_Red_Text_6:
# 53 "data//maps/SilversunCityGym/scripts.pory"
	.string "Welcome to the Silversun Gym...and\n"
	.string "Theater Studio! First, have some water.$"

SilversunCityGym_TrainerA_Text_0:
# 66 "data//maps/SilversunCityGym/scripts.pory"
	.string "Hey, you're not an actor! Oh, you're a\n"
	.string "trainer? Sigh...why does Gloria make us\l"
	.string "do this?$"

SilversunCityGym_TrainerA_Text_1:
# 66 "data//maps/SilversunCityGym/scripts.pory"
	.string "Yay. I lost. Now back to acting!$"

SilversunCityGym_TrainerA_Text_2:
# 67 "data//maps/SilversunCityGym/scripts.pory"
	.string "Acting is a passion and a craft! We\n"
	.string "don't have time to battle.$"

SilversunCityGym_TrainerB_Text_0:
# 73 "data//maps/SilversunCityGym/scripts.pory"
	.string "Get out of the way! I need to practice\n"
	.string "my dance moves or Gloria won't cast me!$"

SilversunCityGym_TrainerB_Text_1:
# 73 "data//maps/SilversunCityGym/scripts.pory"
	.string "Gahh! I wasted time on you that I\n"
	.string "could've used to practice!$"

SilversunCityGym_TrainerB_Text_2:
# 74 "data//maps/SilversunCityGym/scripts.pory"
	.string "We're practicing so that Gloria casts us\n"
	.string "in her next production.$"

SilversunCityGym_TrainerC_Text_0:
# 80 "data//maps/SilversunCityGym/scripts.pory"
	.string "Argh - this isn't a Gym for crying out\n"
	.string "loud! This is Gloria's theater studio. We\l"
	.string "don't have time for battling!$"

SilversunCityGym_TrainerC_Text_1:
# 80 "data//maps/SilversunCityGym/scripts.pory"
	.string "So boring!$"

SilversunCityGym_TrainerC_Text_2:
# 81 "data//maps/SilversunCityGym/scripts.pory"
	.string "Move it!$"

SilversunCityGym_TrainerD_Text_0:
# 87 "data//maps/SilversunCityGym/scripts.pory"
	.string "Nobody here likes the fact that this\n"
	.string "studio is a Gym too - including me!$"

SilversunCityGym_TrainerD_Text_1:
# 87 "data//maps/SilversunCityGym/scripts.pory"
	.string "Nobody here likes you!$"

SilversunCityGym_TrainerD_Text_2:
# 88 "data//maps/SilversunCityGym/scripts.pory"
	.string "Gloria is just glorious!$"
