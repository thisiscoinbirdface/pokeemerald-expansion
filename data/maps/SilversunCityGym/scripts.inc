SilversunCityGym_MapScripts::
	.byte 0


SilversunCityGym_EventScript_BackstagePass::
# 10 "data//maps/SilversunCityGym/scripts.pory"
	lockall
# 11 "data//maps/SilversunCityGym/scripts.pory"
	faceplayer
# 12 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_EventScript_BackstagePass_Text_0
# 13 "data//maps/SilversunCityGym/scripts.pory"
	releaseall
	return


SilversunCityGym_TrainerA::
# 25 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_A, SilversunCityGym_TrainerA_Text_0, SilversunCityGym_TrainerA_Text_0
# 26 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerA_Text_0
# 27 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerB::
# 32 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_B, SilversunCityGym_TrainerA_Text_0, SilversunCityGym_TrainerA_Text_0
# 33 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerA_Text_0
# 34 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerC::
# 39 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_C, SilversunCityGym_TrainerA_Text_0, SilversunCityGym_TrainerA_Text_0
# 40 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerA_Text_0
# 41 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_TrainerD::
# 46 "data//maps/SilversunCityGym/scripts.pory"
	trainerbattle_single TRAINER_SILVERSUNGYM_D, SilversunCityGym_TrainerA_Text_0, SilversunCityGym_TrainerA_Text_0
# 47 "data//maps/SilversunCityGym/scripts.pory"
	msgbox SilversunCityGym_TrainerA_Text_0
# 48 "data//maps/SilversunCityGym/scripts.pory"
	release
	end


SilversunCityGym_EventScript_BackstagePass_Text_0:
# 12 "data//maps/SilversunCityGym/scripts.pory"
	.string "Congratulations! The other actors and\n"
	.string "actresses have approved your skills.\l"
	.string "Unfortunately the Gym Leader is\l"
	.string "performing at the Silversun Theater\l"
	.string "tonight, so the Gym Challenge is on\l"
	.string "hold. As compensation, please accept\l"
	.string "this BACKSTAGE PASS to tonight's show.$"

SilversunCityGym_TrainerA_Text_0:
# 25 "data//maps/SilversunCityGym/scripts.pory"
	.string "$"
