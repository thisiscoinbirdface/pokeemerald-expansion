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


Route6_Transition_KohlaBattle_Trigger0::
# 16 "data//maps/Route6Transition/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_KohlaBattle_Trigger0_2
# 18 "data//maps/Route6Transition/scripts.pory"
	lockall
# 19 "data//maps/Route6Transition/scripts.pory"
	delay 30
# 21 "data//maps/Route6Transition/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger0_Movement_0
# 22 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 23 "data//maps/Route6Transition/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger0_2:
	end


Route6_Transition_KohlaBattle_Trigger1::
# 27 "data//maps/Route6Transition/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_KohlaBattle_Trigger1_2
# 28 "data//maps/Route6Transition/scripts.pory"
	lockall
# 29 "data//maps/Route6Transition/scripts.pory"
	delay 30
# 31 "data//maps/Route6Transition/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger1_Movement_0
# 32 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 33 "data//maps/Route6Transition/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger1_2:
	end


Route6_Transition_EventScript_KohlaBattle::
# 39 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_0
# 40 "data//maps/Route6Transition/scripts.pory"
	release
# 43 "data//maps/Route6Transition/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE6_KOHLA, Route6_Transition_EventScript_KohlaBattle_Text_1
# 45 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_0
# 46 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 47 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_2
# 48 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_1
# 49 "data//maps/Route6Transition/scripts.pory"
	delay 24
# 50 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_3
# 51 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_2
# 52 "data//maps/Route6Transition/scripts.pory"
	delay 24
# 53 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_4
# 54 "data//maps/Route6Transition/scripts.pory"
	release
# 56 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_3
# 57 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 58 "data//maps/Route6Transition/scripts.pory"
	removeobject 1
# 61 "data//maps/Route6Transition/scripts.pory"
	setflag FLAG_ROUTE6_KOHLA_BATTLE
# 62 "data//maps/Route6Transition/scripts.pory"
	releaseall
	end


# 21 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_KohlaBattle_Trigger0_Movement_0:
# 21 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 21 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 21 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 21 "data//maps/Route6Transition/scripts.pory"
	walk_down
	step_end

# 31 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_KohlaBattle_Trigger1_Movement_0:
# 31 "data//maps/Route6Transition/scripts.pory"
	walk_left
# 31 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 31 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 31 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 31 "data//maps/Route6Transition/scripts.pory"
	walk_down
	step_end

# 45 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_0:
# 45 "data//maps/Route6Transition/scripts.pory"
	emote_exclamation_mark
	step_end

# 48 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_1:
# 48 "data//maps/Route6Transition/scripts.pory"
	face_right
	step_end

# 51 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_2:
# 51 "data//maps/Route6Transition/scripts.pory"
	face_up
	step_end

# 56 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_3:
# 56 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 56 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 56 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 56 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 56 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 56 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 56 "data//maps/Route6Transition/scripts.pory"
	walk_down
	step_end

Route6_Transition_EventScript_KohlaBattle_Text_0:
# 39 "data//maps/Route6Transition/scripts.pory"
	.string "KOHLA: I've been waiting for you.\p"
	.string "Once again you save the day while I run\n"
	.string "off chasing dead leads. Your stupid\l"
	.string "Professor RUE's lead was bogus!\p"
	.string "It's like the world is telling me that I'm\n"
	.string "not as good as you, {PLAYER}. But you\l"
	.string "and I know the truth. You lucked your\l"
	.string "way into this journey, while I worked\l"
	.string "hard all my life...to get nothing.\p"
	.string "...\p"
	.string "I want you to know that I don't like\n"
	.string "you. And even if nobody else knows, I\l"
	.string "want you to know that I will NEVER be\l"
	.string "inferior to you!$"

Route6_Transition_EventScript_KohlaBattle_Text_1:
# 43 "data//maps/Route6Transition/scripts.pory"
	.string "...again...$"

Route6_Transition_EventScript_KohlaBattle_Text_2:
# 47 "data//maps/Route6Transition/scripts.pory"
	.string "KOHLA: No!! Not again!$"

Route6_Transition_EventScript_KohlaBattle_Text_3:
# 50 "data//maps/Route6Transition/scripts.pory"
	.string "BOLTUND, you're too weak! You just lost\n"
	.string "me the battle! You need to push\l"
	.string "yourself harder!$"

Route6_Transition_EventScript_KohlaBattle_Text_4:
# 53 "data//maps/Route6Transition/scripts.pory"
	.string "KOHLA: {PLAYER}, this isn't over. Mark\n"
	.string "my words!$"
