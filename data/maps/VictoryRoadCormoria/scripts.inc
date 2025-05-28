VictoryRoadCormoria_MapScripts::
	.byte 0


VR_SetWeather_Normal::
# 5 "data//maps/VictoryRoadCormoria/scripts.pory"
	setweather WEATHER_NONE
# 6 "data//maps/VictoryRoadCormoria/scripts.pory"
	doweather
# 7 "data//maps/VictoryRoadCormoria/scripts.pory"
	releaseall
	end


VR_SetWeather_Shade::
# 11 "data//maps/VictoryRoadCormoria/scripts.pory"
	setweather WEATHER_SHADE
# 12 "data//maps/VictoryRoadCormoria/scripts.pory"
	doweather
# 13 "data//maps/VictoryRoadCormoria/scripts.pory"
	releaseall
	end


VR_SetWeather_Rain::
# 17 "data//maps/VictoryRoadCormoria/scripts.pory"
	setweather WEATHER_RAIN
# 18 "data//maps/VictoryRoadCormoria/scripts.pory"
	doweather
# 19 "data//maps/VictoryRoadCormoria/scripts.pory"
	releaseall
	end


VR_Trainer_A::
# 31 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_A, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 32 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_B::
# 37 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_B, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 38 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_C::
# 43 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_C, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 44 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_D::
# 49 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_D, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 50 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_E::
# 55 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_E, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 56 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_F::
# 61 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_F, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 62 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_G::
# 67 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_G, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 68 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_H::
# 73 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_H, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 74 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_I::
# 79 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_I, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 80 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_J::
# 85 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_J, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 86 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_A_Text_0:
# 31 "data//maps/VictoryRoadCormoria/scripts.pory"
	.string "$"
