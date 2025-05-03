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
	special SpawnCameraObject
# 34 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route6_Transition_KohlaBattle_Trigger0_Movement_0
# 35 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 38 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 39 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_KohlaBattle_Trigger0_Text_1
# 40 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 43 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger0_Movement_0
# 44 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 45 "data//maps/HoyaRiverNorth/scripts.pory"
	special RemoveCameraObject
# 47 "data//maps/HoyaRiverNorth/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger0_2:
	end


Route6_Transition_KohlaBattle_Trigger1::
# 51 "data//maps/HoyaRiverNorth/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_KohlaBattle_Trigger1_2
# 53 "data//maps/HoyaRiverNorth/scripts.pory"
	lockall
# 54 "data//maps/HoyaRiverNorth/scripts.pory"
	delay 30
# 56 "data//maps/HoyaRiverNorth/scripts.pory"
	special SpawnCameraObject
# 57 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route6_Transition_KohlaBattle_Trigger1_Movement_0
# 58 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 61 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 62 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_KohlaBattle_Trigger0_Text_1
# 63 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 66 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger1_Movement_0
# 67 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 68 "data//maps/HoyaRiverNorth/scripts.pory"
	special RemoveCameraObject
# 70 "data//maps/HoyaRiverNorth/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger1_2:
	end


Route6_Transition_EventScript_KohlaBattle::
# 76 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 77 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_0
# 78 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 81 "data//maps/HoyaRiverNorth/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE6_KOHLA, Route6_Transition_EventScript_KohlaBattle_Text_1
# 83 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_0
# 84 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 85 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 86 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_2
# 87 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_1
# 88 "data//maps/HoyaRiverNorth/scripts.pory"
	delay 24
# 89 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 90 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_3
# 91 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 92 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_2
# 93 "data//maps/HoyaRiverNorth/scripts.pory"
	delay 24
# 94 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 95 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_4
# 96 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 98 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_3
# 99 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 100 "data//maps/HoyaRiverNorth/scripts.pory"
	removeobject 1
# 103 "data//maps/HoyaRiverNorth/scripts.pory"
	setflag FLAG_ROUTE6_KOHLA_BATTLE
# 104 "data//maps/HoyaRiverNorth/scripts.pory"
	releaseall
	end


# 34 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_KohlaBattle_Trigger0_Movement_0:
# 34 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 34 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 34 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 34 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
	step_end

# 57 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_KohlaBattle_Trigger1_Movement_0:
# 57 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_left
# 57 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 57 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 57 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 57 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
	step_end

# 83 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_0:
# 83 "data//maps/HoyaRiverNorth/scripts.pory"
	emote_exclamation_mark
	step_end

# 87 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_1:
# 87 "data//maps/HoyaRiverNorth/scripts.pory"
	face_right
	step_end

# 92 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_2:
# 92 "data//maps/HoyaRiverNorth/scripts.pory"
	face_up
	step_end

# 98 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_3:
# 98 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 98 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 98 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 98 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 98 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 98 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 98 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
	step_end

Route6_Transition_EventScript_SharpedoBlocker_Text_0:
# 7 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "I'm from the Pokémon Ranger Institute.\p"
	.string "There's a dangerous Pokémon in the\n"
	.string "Hoya River - it smashed into the\l"
	.string "riverbank and threw these boulders up!\p"
	.string "What is it?\p"
	.string "Don't be shocked - it's a wild Mega\n"
	.string "Sharpedo!$"

Route6_Transition_KohlaBattle_Trigger0_Text_0:
# 38 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "Kohla$"

Route6_Transition_KohlaBattle_Trigger0_Text_1:
# 39 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "I've been waiting for you.$"

Route6_Transition_EventScript_KohlaBattle_Text_0:
# 77 "data//maps/HoyaRiverNorth/scripts.pory"
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
# 81 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "...again...$"

Route6_Transition_EventScript_KohlaBattle_Text_2:
# 86 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "No!! Not again!$"

Route6_Transition_EventScript_KohlaBattle_Text_3:
# 90 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "Boltund, you're too weak! You just lost\n"
	.string "me the battle! You need to push\l"
	.string "yourself harder!$"

Route6_Transition_EventScript_KohlaBattle_Text_4:
# 95 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "{PLAYER}, this isn't over. Mark my\n"
	.string "words!$"
