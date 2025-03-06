# 1 "data//maps/GastreeCity/scripts.pory"

# 2 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_KOHLA, 12

GastreeCity_MapScripts::
# 6 "data//maps/GastreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GastreeCity_OnTransition
	.byte 0


GastreeCity_OnTransition::
# 10 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
	end


GastreeCity_EventScript_KohlaBattle_Trigger0::
# 16 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger0_2
# 20 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_KOHLA
# 23 "data//maps/GastreeCity/scripts.pory"
	lockall
# 24 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0
# 25 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 28 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 29 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 32 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0
# 35 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 36 "data//maps/GastreeCity/scripts.pory"
	release
# 38 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1
# 39 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 42 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 43 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 44 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 45 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 47 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger0_2:
	end


GastreeCity_EventScript_KohlaBattle_Trigger1::
# 52 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger1_2
# 57 "data//maps/GastreeCity/scripts.pory"
	lockall
# 58 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0
# 59 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 62 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 63 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 66 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0
# 69 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 70 "data//maps/GastreeCity/scripts.pory"
	release
# 72 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_1
# 73 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 76 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 77 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 78 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 79 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 81 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger1_2:
	end


# 24 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0:
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_right
	step_end

# 38 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1:
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 38 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 58 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0:
# 58 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 58 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 58 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 58 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 58 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 58 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 58 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 72 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_1:
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0:
# 32 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_KohlaIntro1::
# 84 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! Going to Mt.\l"
	.string "Ceram? There are rocks outside the\l"
	.string "entry, and you'll need a {PKMN} to smash\l"
	.string "them! But I'm far ahead of you, chum!\l"
	.string "I've already beaten this town's\l"
	.string "pathetic Gym Leader who gave me the HM\l"
	.string "I need!$"

GastreeCity_KohlaIntro2::
# 87 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: And I don't mind dishing out a\n"
	.string "second serving either! This is payback\l"
	.string "for one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_KohlaPostBattle::
# 90 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: You may have beaten me this\n"
	.string "time, but you're still just a lazy\l"
	.string "good-for-nothing who lucked into a job\l"
	.string "that I deserve! People are counting on\l"
	.string "us to get the dreamstone and I can't be\l"
	.string "dilly-dallying about with you! Over and\l"
	.string "out, chum!$"
