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
	setflag FLAG_SILVERSUN_BACKSTAGEPASS_GET
SilversunCityGym_EventScript_BackstagePass_1:
# 19 "data//maps/SilversunCityGym/scripts.pory"
	releaseall
	return

SilversunCityGym_EventScript_BackstagePass_2:
# 13 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_BackstagePass_Text_0
	goto SilversunCityGym_EventScript_BackstagePass_1


SilversunCityGym_TrainerA::
# 31 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_A, SilversunCityGym_TrainerA_Text_0, SilversunCityGym_TrainerA_Text_0
# 32 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerA_Text_0
# 33 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerB::
# 38 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_B, SilversunCityGym_TrainerA_Text_0, SilversunCityGym_TrainerA_Text_0
# 39 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerA_Text_0
# 40 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerC::
# 45 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_C, SilversunCityGym_TrainerA_Text_0, SilversunCityGym_TrainerA_Text_0
# 46 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerA_Text_0
# 47 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerD::
# 52 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_D, SilversunCityGym_TrainerA_Text_0, SilversunCityGym_TrainerA_Text_0
# 53 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerA_Text_0
# 54 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_EventScript_BackstagePass_Text_0:
# 13 "data//maps/SilversunCityGym/scripts.pory"
	.string "Hope you enjoy the show!$"

SilversunCityGym_EventScript_BackstagePass_Text_1:
# 15 "data//maps/SilversunCityGym/scripts.pory"
	.string "Congratulations! The other actors and\n"
	.string "actresses have approved your skills.\l"
	.string "Unfortunately the Gym Leader is\l"
	.string "performing at the Silversun Theater\l"
	.string "tonight, so the Gym Challenge is on\l"
	.string "hold. As compensation, please accept\l"
	.string "this BACKSTAGE PASS to tonight's show.$"

SilversunCityGym_TrainerA_Text_0:
# 31 "data//maps/SilversunCityGym/scripts.pory"
	.string "$"
