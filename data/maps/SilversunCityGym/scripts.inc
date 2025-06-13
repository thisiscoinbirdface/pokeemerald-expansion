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
# 37 "data//maps/SilversunCityGym/scripts.pory"
	goto_if_set FLAG_SILVERSUNGYM_SPENSER_WATER, SilversunCityGym_EventScript_Red_8
# 40 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_3
# 41 "data//maps/SilversunCityGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 42 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_2
# 43 "data//maps/SilversunCityGym/scripts.pory"
	setflag FLAG_SILVERSUNGYM_SPENSER_WATER
SilversunCityGym_EventScript_Red_1:
# 46 "data//maps/SilversunCityGym/scripts.pory"
	releaseall
	end

SilversunCityGym_EventScript_Red_2:
# 30 "data//maps/SilversunCityGym/scripts.pory"
	goto_if_set FLAG_SILVERSUNGYM_SPENSER_REWARD, SilversunCityGym_EventScript_Red_5
# 33 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_1
# 34 "data//maps/SilversunCityGym/scripts.pory"
	goto SilversunCityGym_Red_Reward
	goto SilversunCityGym_EventScript_Red_1

SilversunCityGym_EventScript_Red_5:
# 31 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_0
	goto SilversunCityGym_EventScript_Red_1

SilversunCityGym_EventScript_Red_8:
# 38 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_2
	goto SilversunCityGym_EventScript_Red_1


SilversunCityGym_Red_Reward::
# 51 "data//maps/SilversunCityGym/scripts.pory"
	message SilversunCityGym_Red_Reward_Text_0
# 52 "data//maps/SilversunCityGym/scripts.pory"
	waitmessage
# 53 "data//maps/SilversunCityGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SilversunCityGym_Red_Reward_Text_1, SilversunCityGym_Red_Reward_Text_2
# 54 "data//maps/SilversunCityGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCityGym_Red_Reward_2
SilversunCityGym_Red_Reward_1:
# 55 "data//maps/SilversunCityGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCityGym_Red_Reward_5
SilversunCityGym_Red_Reward_4:
# 56 "data//maps/SilversunCityGym/scripts.pory"
	goto SilversunCityGym_Red_Reward_Give
	return

SilversunCityGym_Red_Reward_2:
# 54 "data//maps/SilversunCityGym/scripts.pory"
	setvar VAR_0x8006, ITEM_GRASS_GEM
	goto SilversunCityGym_Red_Reward_1

SilversunCityGym_Red_Reward_5:
# 55 "data//maps/SilversunCityGym/scripts.pory"
	setvar VAR_0x8006, ITEM_DARK_GEM
	goto SilversunCityGym_Red_Reward_4


SilversunCityGym_Red_Reward_Give::
# 60 "data//maps/SilversunCityGym/scripts.pory"
	showitemdescription
# 61 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_Red_Reward_Give_Text_0, MSGBOX_YESNO
# 62 "data//maps/SilversunCityGym/scripts.pory"
	hideitemdescription
# 63 "data//maps/SilversunCityGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCityGym_Red_Reward_Give_1
# 68 "data//maps/SilversunCityGym/scripts.pory"
	goto SilversunCityGym_Red_Reward
	return

SilversunCityGym_Red_Reward_Give_1:
# 64 "data//maps/SilversunCityGym/scripts.pory"
	giveitem VAR_0x8006
# 65 "data//maps/SilversunCityGym/scripts.pory"
	setflag FLAG_SILVERSUNGYM_SPENSER_REWARD
# 66 "data//maps/SilversunCityGym/scripts.pory"
	goto SilversunCityGym_Red_Reward_End
	return


SilversunCityGym_Red_Reward_End::
# 73 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_Red_Reward_End_Text_0, MSGBOX_NPC
	end


SilversunCityGym_TrainerA::
# 97 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_A, SilversunCityGym_TrainerA_Text_0, SilversunCityGym_TrainerA_Text_1
# 98 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerA_Text_2
# 99 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerB::
# 104 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_B, SilversunCityGym_TrainerB_Text_0, SilversunCityGym_TrainerB_Text_1
# 105 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerB_Text_2
# 106 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerC::
# 111 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_C, SilversunCityGym_TrainerC_Text_0, SilversunCityGym_TrainerC_Text_1
# 112 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerC_Text_2
# 113 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerD::
# 118 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_D, SilversunCityGym_TrainerD_Text_0, SilversunCityGym_TrainerD_Text_1
# 119 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerD_Text_2
# 120 "data//maps/SilversunCityGym/scripts.pory"
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
	.string "this Backstage Pass to tonight's show.$"

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
	.string "I'd like to give you something.$"

SilversunCityGym_EventScript_Red_Text_2:
# 38 "data//maps/SilversunCityGym/scripts.pory"
	.string "When Gloria was appointed leader, she\n"
	.string "took all the funds to set up her gym\l"
	.string "and made a theater studio instead!\p"
	.string "Silversun City is congested, so\n"
	.string "real estate is quite expensive.\p"
	.string "Nobody here is interested in battling,\n"
	.string "but the rules are if you want to be a\l"
	.string "part of Gloria's productions, you have\l"
	.string "to help maintain the gym.$"

SilversunCityGym_EventScript_Red_Text_3:
# 40 "data//maps/SilversunCityGym/scripts.pory"
	.string "Welcome to the Silversun Gym...and\n"
	.string "Theater Studio! First, have some water.$"

SilversunCityGym_Red_Reward_Text_0:
# 51 "data//maps/SilversunCityGym/scripts.pory"
	.string "Which of these do you fancy?$"

SilversunCityGym_Red_Reward_Text_1:
# 53 "data//maps/SilversunCityGym/scripts.pory"
	.string "Grass Gem$"

SilversunCityGym_Red_Reward_Text_2:
# 53 "data//maps/SilversunCityGym/scripts.pory"
	.string "Dark Gem$"

SilversunCityGym_Red_Reward_Give_Text_0:
# 61 "data//maps/SilversunCityGym/scripts.pory"
	.string "Are you sure?$"

SilversunCityGym_Red_Reward_End_Text_0:
# 73 "data//maps/SilversunCityGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

SilversunCityGym_TrainerA_Text_0:
# 97 "data//maps/SilversunCityGym/scripts.pory"
	.string "You're not an actor! Oh, a trainer?\n"
	.string "Sigh...why does Gloria make us do this?$"

SilversunCityGym_TrainerA_Text_1:
# 97 "data//maps/SilversunCityGym/scripts.pory"
	.string "Yay. I lost. Now back to acting!$"

SilversunCityGym_TrainerA_Text_2:
# 98 "data//maps/SilversunCityGym/scripts.pory"
	.string "Acting is a passion and a craft! We\n"
	.string "don't have time to battle.$"

SilversunCityGym_TrainerB_Text_0:
# 104 "data//maps/SilversunCityGym/scripts.pory"
	.string "Get out of the way! I need to practice\n"
	.string "my dance moves or Gloria won't cast me!$"

SilversunCityGym_TrainerB_Text_1:
# 104 "data//maps/SilversunCityGym/scripts.pory"
	.string "Gahh! I wasted time on you that I\n"
	.string "could've used to practice!$"

SilversunCityGym_TrainerB_Text_2:
# 105 "data//maps/SilversunCityGym/scripts.pory"
	.string "We're practicing so that Gloria casts us\n"
	.string "in her next production.$"

SilversunCityGym_TrainerC_Text_0:
# 111 "data//maps/SilversunCityGym/scripts.pory"
	.string "Argh - this isn't a Gym for crying out\n"
	.string "loud! This is Gloria's theater studio. We\l"
	.string "don't have time for battling!$"

SilversunCityGym_TrainerC_Text_1:
# 111 "data//maps/SilversunCityGym/scripts.pory"
	.string "So boring!$"

SilversunCityGym_TrainerC_Text_2:
# 112 "data//maps/SilversunCityGym/scripts.pory"
	.string "Move it!$"

SilversunCityGym_TrainerD_Text_0:
# 118 "data//maps/SilversunCityGym/scripts.pory"
	.string "Nobody here likes the fact that this\n"
	.string "studio is a Gym too - including me!$"

SilversunCityGym_TrainerD_Text_1:
# 118 "data//maps/SilversunCityGym/scripts.pory"
	.string "Nobody here likes you!$"

SilversunCityGym_TrainerD_Text_2:
# 119 "data//maps/SilversunCityGym/scripts.pory"
	.string "Gloria is just glorious!$"
