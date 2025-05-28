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
# 36 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_B, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 37 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_C::
# 41 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_C, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 42 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_D::
# 46 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_D, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 47 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_E::
# 51 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_E, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 52 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_F::
# 56 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_F, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 57 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_G::
# 61 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_G, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 62 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_H::
# 66 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_H, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 67 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_I::
# 71 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_I, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 72 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_J::
# 76 "data//maps/VictoryRoadCormoria/scripts.pory"
	trainerbattle_single TRAINER_VICTORY_ROAD_J, VR_Trainer_A_Text_0, VR_Trainer_A_Text_0
# 77 "data//maps/VictoryRoadCormoria/scripts.pory"
	msgbox VR_Trainer_A_Text_0
	end


VR_Trainer_A_Text_0:
# 31 "data//maps/VictoryRoadCormoria/scripts.pory"
	.string "$"
