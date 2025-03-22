Route6Transition_MapScripts::
	.byte 0


Route6_Transition_EventScript_SharpedoBlocker::
# 7 "data//maps/Route6Transition/scripts.pory"
	lockall
# 8 "data//maps/Route6Transition/scripts.pory"
	faceplayer
# 9 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_SharpedoBlocker_Text_0
	return


Route6_Transition_Weather_StormTrigger::
# 18 "data//maps/Route6Transition/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_Weather_StormTrigger_1
# 21 "data//maps/Route6Transition/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 22 "data//maps/Route6Transition/scripts.pory"
	doweather
# 23 "data//maps/Route6Transition/scripts.pory"
	releaseall
	end

Route6_Transition_Weather_StormTrigger_1:
	end


Route6_Transition_KohlaBattle_Trigger0::
# 29 "data//maps/Route6Transition/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_KohlaBattle_Trigger0_2
# 31 "data//maps/Route6Transition/scripts.pory"
	lockall
# 32 "data//maps/Route6Transition/scripts.pory"
	delay 30
# 34 "data//maps/Route6Transition/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger0_Movement_0
# 35 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 36 "data//maps/Route6Transition/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger0_2:
	end


Route6_Transition_KohlaBattle_Trigger1::
# 40 "data//maps/Route6Transition/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_KohlaBattle_Trigger1_2
# 41 "data//maps/Route6Transition/scripts.pory"
	lockall
# 42 "data//maps/Route6Transition/scripts.pory"
	delay 30
# 44 "data//maps/Route6Transition/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger1_Movement_0
# 45 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 46 "data//maps/Route6Transition/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger1_2:
	end


Route6_Transition_EventScript_KohlaBattle::
# 52 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_0
# 53 "data//maps/Route6Transition/scripts.pory"
	release
# 56 "data//maps/Route6Transition/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE6_KOHLA, Route6_Transition_EventScript_KohlaBattle_Text_1
# 58 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_0
# 59 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 60 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_2
# 61 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_1
# 62 "data//maps/Route6Transition/scripts.pory"
	delay 24
# 63 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_3
# 64 "data//maps/Route6Transition/scripts.pory"
	release
# 65 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_2
# 66 "data//maps/Route6Transition/scripts.pory"
	delay 24
# 67 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_4
# 68 "data//maps/Route6Transition/scripts.pory"
	release
# 70 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_3
# 71 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 72 "data//maps/Route6Transition/scripts.pory"
	removeobject 1
# 75 "data//maps/Route6Transition/scripts.pory"
	setflag FLAG_ROUTE6_KOHLA_BATTLE
# 76 "data//maps/Route6Transition/scripts.pory"
	releaseall
	end


# 34 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_KohlaBattle_Trigger0_Movement_0:
# 34 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 34 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 34 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 34 "data//maps/Route6Transition/scripts.pory"
	walk_down
	step_end

# 44 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_KohlaBattle_Trigger1_Movement_0:
# 44 "data//maps/Route6Transition/scripts.pory"
	walk_left
# 44 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 44 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 44 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 44 "data//maps/Route6Transition/scripts.pory"
	walk_down
	step_end

# 58 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_0:
# 58 "data//maps/Route6Transition/scripts.pory"
	emote_exclamation_mark
	step_end

# 61 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_1:
# 61 "data//maps/Route6Transition/scripts.pory"
	face_right
	step_end

# 65 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_2:
# 65 "data//maps/Route6Transition/scripts.pory"
	face_up
	step_end

# 70 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_3:
# 70 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 70 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 70 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 70 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 70 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 70 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 70 "data//maps/Route6Transition/scripts.pory"
	walk_down
	step_end

Route6_Transition_EventScript_SharpedoBlocker_Text_0:
# 9 "data//maps/Route6Transition/scripts.pory"
	.string "Stop right there! We're from the\n"
	.string "Pokemon Ranger Institute.\p"
	.string "There's a dangerous {PKMN} in the HOYA\n"
	.string "RIVER so we can't let you through.\p"
	.string "What is it?\p"
	.string "don't be shocked - it's a wild MEGA\n"
	.string "SHARPEDO! It's on its way down south,\l"
	.string "so once it passes, we'll reopen the\l"
	.string "bridge.$"

Route6_Transition_EventScript_KohlaBattle_Text_0:
# 52 "data//maps/Route6Transition/scripts.pory"
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
# 56 "data//maps/Route6Transition/scripts.pory"
	.string "...again...$"

Route6_Transition_EventScript_KohlaBattle_Text_2:
# 60 "data//maps/Route6Transition/scripts.pory"
	.string "KOHLA: No!! Not again!$"

Route6_Transition_EventScript_KohlaBattle_Text_3:
# 63 "data//maps/Route6Transition/scripts.pory"
	.string "BOLTUND, you're too weak! You just lost\n"
	.string "me the battle! You need to push\l"
	.string "yourself harder!$"

Route6_Transition_EventScript_KohlaBattle_Text_4:
# 67 "data//maps/Route6Transition/scripts.pory"
	.string "KOHLA: {PLAYER}, this isn't over. Mark\n"
	.string "my words!$"
