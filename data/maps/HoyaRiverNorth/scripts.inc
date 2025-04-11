HoyaRiverNorth_MapScripts::
	.byte 0


Route6_Transition_EventScript_SharpedoBlocker::
# 7 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_SharpedoBlocker_Text_0, MSGBOX_NPC
	end


Route6_Transition_Weather_StormTrigger::
# 17 "data//maps/HoyaRiverNorth/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_Weather_StormTrigger_1
# 20 "data//maps/HoyaRiverNorth/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 21 "data//maps/HoyaRiverNorth/scripts.pory"
	doweather
# 22 "data//maps/HoyaRiverNorth/scripts.pory"
	releaseall
	end

Route6_Transition_Weather_StormTrigger_1:
	end


Route6_Transition_KohlaBattle_Trigger0::
# 28 "data//maps/HoyaRiverNorth/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_KohlaBattle_Trigger0_2
# 30 "data//maps/HoyaRiverNorth/scripts.pory"
	lockall
# 31 "data//maps/HoyaRiverNorth/scripts.pory"
	delay 30
# 33 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger0_Movement_0
# 34 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 35 "data//maps/HoyaRiverNorth/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger0_2:
	end


Route6_Transition_KohlaBattle_Trigger1::
# 39 "data//maps/HoyaRiverNorth/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_KohlaBattle_Trigger1_2
# 40 "data//maps/HoyaRiverNorth/scripts.pory"
	lockall
# 41 "data//maps/HoyaRiverNorth/scripts.pory"
	delay 30
# 43 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger1_Movement_0
# 44 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 45 "data//maps/HoyaRiverNorth/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger1_2:
	end


Route6_Transition_EventScript_KohlaBattle::
# 51 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_0
# 52 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 55 "data//maps/HoyaRiverNorth/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE6_KOHLA, Route6_Transition_EventScript_KohlaBattle_Text_1
# 57 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_0
# 58 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 59 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_2
# 60 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_1
# 61 "data//maps/HoyaRiverNorth/scripts.pory"
	delay 24
# 62 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_3
# 63 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 64 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_2
# 65 "data//maps/HoyaRiverNorth/scripts.pory"
	delay 24
# 66 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_4
# 67 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 69 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_3
# 70 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 71 "data//maps/HoyaRiverNorth/scripts.pory"
	removeobject 1
# 74 "data//maps/HoyaRiverNorth/scripts.pory"
	setflag FLAG_ROUTE6_KOHLA_BATTLE
# 75 "data//maps/HoyaRiverNorth/scripts.pory"
	releaseall
	end


# 33 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_KohlaBattle_Trigger0_Movement_0:
# 33 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 33 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 33 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 33 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
	step_end

# 43 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_KohlaBattle_Trigger1_Movement_0:
# 43 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_left
# 43 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 43 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 43 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 43 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
	step_end

# 57 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_0:
# 57 "data//maps/HoyaRiverNorth/scripts.pory"
	emote_exclamation_mark
	step_end

# 60 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_1:
# 60 "data//maps/HoyaRiverNorth/scripts.pory"
	face_right
	step_end

# 64 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_2:
# 64 "data//maps/HoyaRiverNorth/scripts.pory"
	face_up
	step_end

# 69 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_3:
# 69 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 69 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 69 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 69 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 69 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 69 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 69 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
	step_end

Route6_Transition_EventScript_SharpedoBlocker_Text_0:
# 7 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "Stop right there! We're from the\n"
	.string "Pokémon Ranger Institute.\p"
	.string "There's a dangerous Pokémon in the\n"
	.string "Hoya River so we can't let you through.\p"
	.string "What is it?\p"
	.string "Don't be shocked - it's a wild MEGA\n"
	.string "SHARPEDO! It's on its way down south,\l"
	.string "so once it passes, we'll reopen the\l"
	.string "bridge.$"

Route6_Transition_EventScript_KohlaBattle_Text_0:
# 51 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "KOHLA: I've been waiting for you.\p"
	.string "Once again you save the day while I run\n"
	.string "off chasing dead leads. Your stupid\l"
	.string "Professor Rue's lead was bogus!\p"
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
# 55 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "...again...$"

Route6_Transition_EventScript_KohlaBattle_Text_2:
# 59 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "KOHLA: No!! Not again!$"

Route6_Transition_EventScript_KohlaBattle_Text_3:
# 62 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "BOLTUND, you're too weak! You just lost\n"
	.string "me the battle! You need to push\l"
	.string "yourself harder!$"

Route6_Transition_EventScript_KohlaBattle_Text_4:
# 66 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "KOHLA: {PLAYER}, this isn't over. Mark\n"
	.string "my words!$"
