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


HoyaRiverNorth_SaveGameTrigger::
# 27 "data//maps/HoyaRiverNorth/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, HoyaRiverNorth_SaveGameTrigger_2
# 29 "data//maps/HoyaRiverNorth/scripts.pory"
	setvar VAR_TEMP_C, 1
# 31 "data//maps/HoyaRiverNorth/scripts.pory"
	call Common_EventScript_SaveGameBeforeSomber
# 32 "data//maps/HoyaRiverNorth/scripts.pory"
	releaseall
	end

HoyaRiverNorth_SaveGameTrigger_2:
	end


Route6_Transition_KohlaBattle_Trigger0::
# 39 "data//maps/HoyaRiverNorth/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_KohlaBattle_Trigger0_2
# 41 "data//maps/HoyaRiverNorth/scripts.pory"
	lockall
# 42 "data//maps/HoyaRiverNorth/scripts.pory"
	fadeoutbgm 0
# 43 "data//maps/HoyaRiverNorth/scripts.pory"
	delay 30
# 45 "data//maps/HoyaRiverNorth/scripts.pory"
	special SpawnCameraObject
# 46 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route6_Transition_KohlaBattle_Trigger0_Movement_0
# 47 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 50 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 51 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_KohlaBattle_Trigger0_Text_1
# 52 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 55 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger0_Movement_0
# 56 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 57 "data//maps/HoyaRiverNorth/scripts.pory"
	special RemoveCameraObject
# 59 "data//maps/HoyaRiverNorth/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger0_2:
	end


Route6_Transition_KohlaBattle_Trigger1::
# 63 "data//maps/HoyaRiverNorth/scripts.pory"
	goto_if_set FLAG_ROUTE6_KOHLA_BATTLE, Route6_Transition_KohlaBattle_Trigger1_2
# 65 "data//maps/HoyaRiverNorth/scripts.pory"
	lockall
# 66 "data//maps/HoyaRiverNorth/scripts.pory"
	fadeoutbgm 0
# 67 "data//maps/HoyaRiverNorth/scripts.pory"
	delay 30
# 69 "data//maps/HoyaRiverNorth/scripts.pory"
	special SpawnCameraObject
# 70 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route6_Transition_KohlaBattle_Trigger1_Movement_0
# 71 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 74 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 75 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_KohlaBattle_Trigger0_Text_1
# 76 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 79 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Transition_KohlaBattle_Trigger1_Movement_0
# 80 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 81 "data//maps/HoyaRiverNorth/scripts.pory"
	special RemoveCameraObject
# 83 "data//maps/HoyaRiverNorth/scripts.pory"
	call Route6_Transition_EventScript_KohlaBattle
	return

Route6_Transition_KohlaBattle_Trigger1_2:
	end


Route6_Transition_EventScript_KohlaBattle::
# 89 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 90 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_0
# 91 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 94 "data//maps/HoyaRiverNorth/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE6_KOHLA, Route6_Transition_EventScript_KohlaBattle_Text_1
# 96 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_0
# 97 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 98 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 99 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_2
# 100 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_1
# 101 "data//maps/HoyaRiverNorth/scripts.pory"
	delay 24
# 102 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 103 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_3
# 104 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 105 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_2
# 106 "data//maps/HoyaRiverNorth/scripts.pory"
	delay 24
# 107 "data//maps/HoyaRiverNorth/scripts.pory"
	speakername Route6_Transition_KohlaBattle_Trigger0_Text_0
# 108 "data//maps/HoyaRiverNorth/scripts.pory"
	msgbox Route6_Transition_EventScript_KohlaBattle_Text_4
# 109 "data//maps/HoyaRiverNorth/scripts.pory"
	release
# 111 "data//maps/HoyaRiverNorth/scripts.pory"
	applymovement 1, Route6_Transition_EventScript_KohlaBattle_Movement_3
# 112 "data//maps/HoyaRiverNorth/scripts.pory"
	waitmovement 0
# 113 "data//maps/HoyaRiverNorth/scripts.pory"
	removeobject 1
# 116 "data//maps/HoyaRiverNorth/scripts.pory"
	setflag FLAG_ROUTE6_KOHLA_BATTLE
# 117 "data//maps/HoyaRiverNorth/scripts.pory"
	releaseall
	end


# 46 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_KohlaBattle_Trigger0_Movement_0:
# 46 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 46 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 46 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 46 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
	step_end

# 70 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_KohlaBattle_Trigger1_Movement_0:
# 70 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_left
# 70 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 70 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 70 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 70 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
	step_end

# 96 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_0:
# 96 "data//maps/HoyaRiverNorth/scripts.pory"
	emote_exclamation_mark
	step_end

# 100 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_1:
# 100 "data//maps/HoyaRiverNorth/scripts.pory"
	face_right
	step_end

# 105 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_2:
# 105 "data//maps/HoyaRiverNorth/scripts.pory"
	face_up
	step_end

# 111 "data//maps/HoyaRiverNorth/scripts.pory"
Route6_Transition_EventScript_KohlaBattle_Movement_3:
# 111 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 111 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 111 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 111 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 111 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 111 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
# 111 "data//maps/HoyaRiverNorth/scripts.pory"
	walk_down
	step_end

Route6_Transition_EventScript_SharpedoBlocker_Text_0:
# 7 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "There's a dangerous Pokémon in the\n"
	.string "Hoya River - it smashed into the\l"
	.string "riverbank and threw these boulders up!\p"
	.string "What is it?\p"
	.string "Don't be shocked when I tell you -\n"
	.string "it's a wild Mega Sharpedo!$"

Route6_Transition_KohlaBattle_Trigger0_Text_0:
# 50 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "Kohla$"

Route6_Transition_KohlaBattle_Trigger0_Text_1:
# 51 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "I've been waiting for you.$"

Route6_Transition_EventScript_KohlaBattle_Text_0:
# 90 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "Once again you save the day while I run\n"
	.string "off chasing dead leads. Your stupid\l"
	.string "Professor Rue's lead was bogus!\p"
	.string "It's like the world is telling me that\n"
	.string "I'm not as good as you, {PLAYER}.\l"
	.string "But you and I know the truth.\l"
	.string "You lucked your way into this journey,\l"
	.string "while I worked hard all my life...\p"
	.string "...to get nothing.\p"
	.string "...\p"
	.string "I want you to know that I don't like\n"
	.string "you. And even if nobody else knows,\l"
	.string "I want you to know that I will NEVER\l"
	.string "be inferior to you!$"

Route6_Transition_EventScript_KohlaBattle_Text_1:
# 94 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "...again...$"

Route6_Transition_EventScript_KohlaBattle_Text_2:
# 99 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "No!! Not again!$"

Route6_Transition_EventScript_KohlaBattle_Text_3:
# 103 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "Boltund, you're too weak!\n"
	.string "You just lost me the battle!\l"
	.string "You need to push yourself harder!$"

Route6_Transition_EventScript_KohlaBattle_Text_4:
# 108 "data//maps/HoyaRiverNorth/scripts.pory"
	.string "{PLAYER}, this isn't over.\p"
	.string "Mark my words!$"
