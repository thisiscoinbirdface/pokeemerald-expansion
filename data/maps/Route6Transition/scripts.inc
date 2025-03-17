Route6Transition_MapScripts::
	.byte 0


Route6_Transition_Weather_StormTrigger::
# 5 "data//maps/Route6Transition/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_Weather_StormTrigger_2
# 7 "data//maps/Route6Transition/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 8 "data//maps/Route6Transition/scripts.pory"
	doweather
	return

Route6_Transition_Weather_StormTrigger_2:
	end


Route6_Transition_KohlaBattle_Trigger::
# 12 "data//maps/Route6Transition/scripts.pory"
	lockall
# 15 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_KohlaBattle_Trigger_Movement_0
# 16 "data//maps/Route6Transition/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger_Movement_1
# 17 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_KohlaBattle_Trigger_Text_0
# 18 "data//maps/Route6Transition/scripts.pory"
	release
# 19 "data//maps/Route6Transition/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return


Route6_Transition_EventScript_KohlaBattle::
# 28 "data//maps/Route6Transition/scripts.pory"
	setflag FLAG_ROUTE6_KOHLA_BATTLE
# 29 "data//maps/Route6Transition/scripts.pory"
	releaseall
	end


# 15 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_KohlaBattle_Trigger_Movement_0:
# 15 "data//maps/Route6Transition/scripts.pory"
	face_right
	step_end

# 16 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_KohlaBattle_Trigger_Movement_1:
# 16 "data//maps/Route6Transition/scripts.pory"
	face_left
	step_end

Route6_Transition_KohlaBattle_Trigger_Text_0:
# 17 "data//maps/Route6Transition/scripts.pory"
	.string "KOHLA: Where do you think you're going?$"
