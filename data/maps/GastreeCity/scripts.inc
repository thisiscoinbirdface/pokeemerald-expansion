# 1 "data//maps/GastreeCity/scripts.pory"

# 2 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_KOHLA, 12

GastreeCity_MapScripts::
# 6 "data//maps/GastreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GastreeCity_OnTransition
	.byte 0


GastreeCity_OnTransition::
# 10 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_GASTREE_KOHLA_BATTLE
# 11 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
	end


GastreeCity_EventScript_KohlaBattle_Trigger0::
# 17 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger0_2
# 21 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_KOHLA
# 24 "data//maps/GastreeCity/scripts.pory"
	lockall
# 25 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0
# 26 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 29 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 30 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 33 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0
# 36 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 37 "data//maps/GastreeCity/scripts.pory"
	release
# 39 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1
# 40 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 43 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 44 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 45 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 46 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 48 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger0_2:
	end


GastreeCity_EventScript_KohlaBattle_Trigger1::
# 53 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger1_2
# 58 "data//maps/GastreeCity/scripts.pory"
	lockall
# 59 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0
# 60 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 63 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 64 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 67 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0
# 70 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 71 "data//maps/GastreeCity/scripts.pory"
	release
# 73 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_1
# 74 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 77 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 78 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 79 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 80 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 82 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger1_2:
	end


# 25 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0:
# 25 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 25 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 25 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 25 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 25 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 25 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 25 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 25 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 25 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 25 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 25 "data//maps/GastreeCity/scripts.pory"
	walk_right
	step_end

# 39 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1:
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 59 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0:
# 59 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 59 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 59 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 59 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 59 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 59 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 59 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 73 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_1:
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 73 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0:
# 33 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_KohlaIntro1::
# 85 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! Going to Mt.\l"
	.string "Ceram? There are rocks outside the\l"
	.string "entry, and you'll need a {PKMN} to smash\l"
	.string "them! But I'm far ahead of you, chum!\l"
	.string "I've already beaten this town's\l"
	.string "pathetic Gym Leader who gave me the HM\l"
	.string "I need!$"

GastreeCity_KohlaIntro2::
# 88 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: And I don't mind dishing out a\n"
	.string "second serving either! This is payback\l"
	.string "for one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_KohlaPostBattle::
# 91 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: You may have beaten me this\n"
	.string "time, but you're still just a lazy\l"
	.string "good-for-nothing who lucked into a job\l"
	.string "that I deserve! People are counting on\l"
	.string "us to get the dreamstone and I can't be\l"
	.string "dilly-dallying about with you! Over and\l"
	.string "out, chum!$"
