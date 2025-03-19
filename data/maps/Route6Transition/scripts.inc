Route6Transition_MapScripts::
	.byte 0


Route6_Transition_Weather_StormTrigger::
# 5 "data//maps/Route6Transition/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_Weather_StormTrigger_1
# 8 "data//maps/Route6Transition/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 9 "data//maps/Route6Transition/scripts.pory"
	doweather
# 10 "data//maps/Route6Transition/scripts.pory"
	releaseall
	end

Route6_Transition_Weather_StormTrigger_1:
	end


Route6_Transition_KohlaBattle_Trigger::
# 16 "data//maps/Route6Transition/scripts.pory"
	lockall
# 17 "data//maps/Route6Transition/scripts.pory"
	warp MAP_ROUTE7, 15, 15
# 20 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_KohlaBattle_Trigger_Movement_0
# 21 "data//maps/Route6Transition/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger_Movement_1
# 22 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_KohlaBattle_Trigger_Text_0
# 23 "data//maps/Route6Transition/scripts.pory"
	release
# 24 "data//maps/Route6Transition/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return


Route6_Transition_EventScript_KohlaBattle::
# 32 "data//maps/Route6Transition/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 33 "data//maps/Route6Transition/scripts.pory"
	setflag FLAG_ROUTE6_KOHLA_BATTLE
# 34 "data//maps/Route6Transition/scripts.pory"
	releaseall
	end


# 20 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_KohlaBattle_Trigger_Movement_0:
# 20 "data//maps/Route6Transition/scripts.pory"
	face_right
	step_end

# 21 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_KohlaBattle_Trigger_Movement_1:
# 21 "data//maps/Route6Transition/scripts.pory"
	face_left
	step_end

Route6_Transition_KohlaBattle_Trigger_Text_0:
# 22 "data//maps/Route6Transition/scripts.pory"
	.string "KOHLA: Where do you think you're going?$"
