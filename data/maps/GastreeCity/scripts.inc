GastreeCity_MapScripts::
	.byte 0


GastreeCity_EventScript_KohlaBattle_Trigger0::
# 4 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger0_2
# 8 "data//maps/GastreeCity/scripts.pory"
	lockall
# 9 "data//maps/GastreeCity/scripts.pory"
	applymovement 13, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0
# 10 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 11 "data//maps/GastreeCity/scripts.pory"
	release
# 13 "data//maps/GastreeCity/scripts.pory"
	goto GastreeCity_EventScript_KohlaBattle
# 14 "data//maps/GastreeCity/scripts.pory"
	waitmessage
# 16 "data//maps/GastreeCity/scripts.pory"
	applymovement 13, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1
# 17 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 20 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 21 "data//maps/GastreeCity/scripts.pory"
	removeobject 13
# 22 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 23 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 25 "data//maps/GastreeCity/scripts.pory"
	release
	return

GastreeCity_EventScript_KohlaBattle_Trigger0_2:
	end


GastreeCity_EventScript_KohlaBattle_Trigger1::
# 29 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger1_2
# 33 "data//maps/GastreeCity/scripts.pory"
	lockall
# 34 "data//maps/GastreeCity/scripts.pory"
	applymovement 13, GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0
# 35 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 36 "data//maps/GastreeCity/scripts.pory"
	goto GastreeCity_EventScript_KohlaBattle
# 37 "data//maps/GastreeCity/scripts.pory"
	waitmessage
# 39 "data//maps/GastreeCity/scripts.pory"
	applymovement 13, GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_1
# 40 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 43 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 44 "data//maps/GastreeCity/scripts.pory"
	removeobject 13
# 45 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 46 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 48 "data//maps/GastreeCity/scripts.pory"
	release
	return

GastreeCity_EventScript_KohlaBattle_Trigger1_2:
	end


GastreeCity_EventScript_KohlaBattle::
# 54 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_KohlaBattle_Text_0
# 55 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_KohlaBattle_Text_1
# 57 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Text_2
# 60 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_KohlaBattle_Text_3
# 61 "data//maps/GastreeCity/scripts.pory"
	waitmessage
	return


# 9 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0:
# 9 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 9 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 9 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 9 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 9 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 9 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 16 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1:
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 16 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 34 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0:
# 34 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 34 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 34 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 34 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 34 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 34 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 34 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 39 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_1:
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

GastreeCity_EventScript_KohlaBattle_Text_0:
# 54 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! Going to Mt.\l"
	.string "Ceram? There are rocks outside the\l"
	.string "entry, and you'll need a {PKMN} to smash\l"
	.string "them! But I'm far ahead of you, chum!\l"
	.string "I've already beaten this town's\l"
	.string "pathetic Gym Leader who gave me the HM\l"
	.string "I need!$"

GastreeCity_EventScript_KohlaBattle_Text_1:
# 55 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: And I don't mind dishing out a\n"
	.string "second serving either! This is payback\l"
	.string "for one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_EventScript_KohlaBattle_Text_2:
# 57 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_EventScript_KohlaBattle_Text_3:
# 60 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: You may have beaten me this\n"
	.string "time, but you're still just a lazy\l"
	.string "good-for-nothing who lucked into a job\l"
	.string "that I deserve! People are counting on\l"
	.string "us to get the dreamstone and I can't be\l"
	.string "dilly-dallying about with you! Over and\l"
	.string "out, chum!$"
