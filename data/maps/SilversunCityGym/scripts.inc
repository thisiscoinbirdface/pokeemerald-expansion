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
# 28 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_Red_Text_0
# 29 "data//maps/SilversunCityGym/scripts.pory"
	releaseall
	end


SilversunCityGym_TrainerA::
# 36 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_A, SilversunCityGym_TrainerA_Text_0, SilversunCityGym_TrainerA_Text_1
# 37 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerA_Text_2
# 38 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerB::
# 43 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_B, SilversunCityGym_TrainerB_Text_0, SilversunCityGym_TrainerB_Text_1
# 44 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerB_Text_2
# 45 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerC::
# 50 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_C, SilversunCityGym_TrainerC_Text_0, SilversunCityGym_TrainerC_Text_1
# 51 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerC_Text_2
# 52 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerD::
# 57 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_D, SilversunCityGym_TrainerD_Text_0, SilversunCityGym_TrainerD_Text_1
# 58 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerD_Text_2
# 59 "data//maps/SilversunCityGym/scripts.pory"
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
# 28 "data//maps/SilversunCityGym/scripts.pory"
	.string "Welcome to the Silversun Gym...and\n"
	.string "Theater Studio!\p"
	.string "When Gloria was appointed leader, she\n"
	.string "took all the funds to set up her gym and\l"
	.string "made a theater studio instead!\l"
	.string "Silversun City is congested, so space is\l"
	.string "expensive.\p"
	.string "Nobody here is interested in battling,\n"
	.string "but those are the rules! If you wanna\l"
	.string "be a part of Gloria's productions, you\l"
	.string "have to help maintain the gym.$"

SilversunCityGym_TrainerA_Text_0:
# 36 "data//maps/SilversunCityGym/scripts.pory"
	.string "Hey, you're not an actor! Oh, you're a\n"
	.string "trainer? Sigh...why does Gloria make us\l"
	.string "do this?$"

SilversunCityGym_TrainerA_Text_1:
# 36 "data//maps/SilversunCityGym/scripts.pory"
	.string "Yay. I lost. Now back to acting!$"

SilversunCityGym_TrainerA_Text_2:
# 37 "data//maps/SilversunCityGym/scripts.pory"
	.string "Acting is a passion and a craft! We\n"
	.string "don't have time to battle.$"

SilversunCityGym_TrainerB_Text_0:
# 43 "data//maps/SilversunCityGym/scripts.pory"
	.string "Get out of the way! I need to practice\n"
	.string "my dance moves or Gloria won't cast me!$"

SilversunCityGym_TrainerB_Text_1:
# 43 "data//maps/SilversunCityGym/scripts.pory"
	.string "$"

SilversunCityGym_TrainerB_Text_2:
# 44 "data//maps/SilversunCityGym/scripts.pory"
	.string "We're practicing so that Gloria casts us\n"
	.string "in her next production.$"

SilversunCityGym_TrainerC_Text_0:
# 50 "data//maps/SilversunCityGym/scripts.pory"
	.string "Argh - this isn't a Gym for crying out\n"
	.string "loud! This is Gloria's theater studio. We\l"
	.string "don't have time for battling!$"

SilversunCityGym_TrainerC_Text_1:
# 50 "data//maps/SilversunCityGym/scripts.pory"
	.string "So boring!$"

SilversunCityGym_TrainerC_Text_2:
# 51 "data//maps/SilversunCityGym/scripts.pory"
	.string "Move it!$"

SilversunCityGym_TrainerD_Text_0:
# 57 "data//maps/SilversunCityGym/scripts.pory"
	.string "Nobody here likes the fact that this\n"
	.string "studio is a Gym too - including me!$"

SilversunCityGym_TrainerD_Text_1:
# 57 "data//maps/SilversunCityGym/scripts.pory"
	.string "Nobody here likes you!$"

SilversunCityGym_TrainerD_Text_2:
# 58 "data//maps/SilversunCityGym/scripts.pory"
	.string "Gloria is just glorious!$"
