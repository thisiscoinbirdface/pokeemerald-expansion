Route6Transition_MapScripts::
	.byte 0


Route6_Transition_EventScript_SharpedoBlocker::
# 7 "data//maps/Route6Transition/scripts.pory"
	lockall
# 8 "data//maps/Route6Transition/scripts.pory"
	faceplayer
# 9 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_SharpedoBlocker_Text_0
# 10 "data//maps/Route6Transition/scripts.pory"
	releaseall
	end


Route6_Transition_Weather_StormTrigger::
# 20 "data//maps/Route6Transition/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_Weather_StormTrigger_1
# 23 "data//maps/Route6Transition/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 24 "data//maps/Route6Transition/scripts.pory"
	doweather
# 25 "data//maps/Route6Transition/scripts.pory"
	releaseall
	end

Route6_Transition_Weather_StormTrigger_1:
	end


Route6_Transition_KohlaBattle_Trigger0::
# 31 "data//maps/Route6Transition/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_KohlaBattle_Trigger0_2
# 33 "data//maps/Route6Transition/scripts.pory"
	lockall
# 34 "data//maps/Route6Transition/scripts.pory"
	delay 30
# 36 "data//maps/Route6Transition/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger0_Movement_0
# 37 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 38 "data//maps/Route6Transition/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger0_2:
	end


Route6_Transition_KohlaBattle_Trigger1::
# 42 "data//maps/Route6Transition/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_KohlaBattle_Trigger1_2
# 43 "data//maps/Route6Transition/scripts.pory"
	lockall
# 44 "data//maps/Route6Transition/scripts.pory"
	delay 30
# 46 "data//maps/Route6Transition/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger1_Movement_0
# 47 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 48 "data//maps/Route6Transition/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger1_2:
	end


Route6_Transition_EventScript_KohlaBattle::
# 54 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_0
# 55 "data//maps/Route6Transition/scripts.pory"
	release
# 58 "data//maps/Route6Transition/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE6_KOHLA, Route6_Transition_EventScript_KohlaBattle_Text_1
# 60 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_0
# 61 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 62 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_2
# 63 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_1
# 64 "data//maps/Route6Transition/scripts.pory"
	delay 24
# 65 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_3
# 66 "data//maps/Route6Transition/scripts.pory"
	release
# 67 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_2
# 68 "data//maps/Route6Transition/scripts.pory"
	delay 24
# 69 "data//maps/Route6Transition/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_4
# 70 "data//maps/Route6Transition/scripts.pory"
	release
# 72 "data//maps/Route6Transition/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_3
# 73 "data//maps/Route6Transition/scripts.pory"
	waitmovement 0
# 74 "data//maps/Route6Transition/scripts.pory"
	removeobject 1
# 77 "data//maps/Route6Transition/scripts.pory"
	setflag FLAG_ROUTE6_KOHLA_BATTLE
# 78 "data//maps/Route6Transition/scripts.pory"
	releaseall
	end


# 36 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_KohlaBattle_Trigger0_Movement_0:
# 36 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 36 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 36 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 36 "data//maps/Route6Transition/scripts.pory"
	walk_down
	step_end

# 46 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_KohlaBattle_Trigger1_Movement_0:
# 46 "data//maps/Route6Transition/scripts.pory"
	walk_left
# 46 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 46 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 46 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 46 "data//maps/Route6Transition/scripts.pory"
	walk_down
	step_end

# 60 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_0:
# 60 "data//maps/Route6Transition/scripts.pory"
	emote_exclamation_mark
	step_end

# 63 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_1:
# 63 "data//maps/Route6Transition/scripts.pory"
	face_right
	step_end

# 67 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_2:
# 67 "data//maps/Route6Transition/scripts.pory"
	face_up
	step_end

# 72 "data//maps/Route6Transition/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_3:
# 72 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 72 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 72 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 72 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 72 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 72 "data//maps/Route6Transition/scripts.pory"
	walk_down
# 72 "data//maps/Route6Transition/scripts.pory"
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
# 54 "data//maps/Route6Transition/scripts.pory"
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
# 58 "data//maps/Route6Transition/scripts.pory"
	.string "...again...$"

Route6_Transition_EventScript_KohlaBattle_Text_2:
# 62 "data//maps/Route6Transition/scripts.pory"
	.string "KOHLA: No!! Not again!$"

Route6_Transition_EventScript_KohlaBattle_Text_3:
# 65 "data//maps/Route6Transition/scripts.pory"
	.string "BOLTUND, you're too weak! You just lost\n"
	.string "me the battle! You need to push\l"
	.string "yourself harder!$"

Route6_Transition_EventScript_KohlaBattle_Text_4:
# 69 "data//maps/Route6Transition/scripts.pory"
	.string "KOHLA: {PLAYER}, this isn't over. Mark\n"
	.string "my words!$"
