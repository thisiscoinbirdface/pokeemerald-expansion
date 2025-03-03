GastreeCity_MapScripts::
	.byte 0


GastreeCity_PokemonCenter_EventScript_Nurse::
# 4 "data//maps/GastreeCity/scripts.pory"
	lockall
# 5 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 6 "data//maps/GastreeCity/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 7 "data//maps/GastreeCity/scripts.pory"
	waitmessage
# 8 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return


GastreeCity_EventScript_KohlaBattle_Trigger0::
# 12 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger0_2
# 16 "data//maps/GastreeCity/scripts.pory"
	lockall
# 17 "data//maps/GastreeCity/scripts.pory"
	applymovement 13, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0
# 18 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 19 "data//maps/GastreeCity/scripts.pory"
	release
# 21 "data//maps/GastreeCity/scripts.pory"
	goto GastreeCity_EventScript_KohlaBattle
# 22 "data//maps/GastreeCity/scripts.pory"
	waitmessage
# 24 "data//maps/GastreeCity/scripts.pory"
	applymovement 13, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1
# 25 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 28 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 29 "data//maps/GastreeCity/scripts.pory"
	removeobject 13
# 30 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 31 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 33 "data//maps/GastreeCity/scripts.pory"
	release
	return

GastreeCity_EventScript_KohlaBattle_Trigger0_2:
	end


GastreeCity_EventScript_KohlaBattle_Trigger1::
# 37 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger1_2
# 41 "data//maps/GastreeCity/scripts.pory"
	lockall
# 42 "data//maps/GastreeCity/scripts.pory"
	applymovement 13, GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0
# 43 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 44 "data//maps/GastreeCity/scripts.pory"
	goto GastreeCity_EventScript_KohlaBattle
# 45 "data//maps/GastreeCity/scripts.pory"
	waitmessage
# 47 "data//maps/GastreeCity/scripts.pory"
	applymovement 13, GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_1
# 48 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 51 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 52 "data//maps/GastreeCity/scripts.pory"
	removeobject 13
# 53 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 54 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 56 "data//maps/GastreeCity/scripts.pory"
	release
	return

GastreeCity_EventScript_KohlaBattle_Trigger1_2:
	end


GastreeCity_EventScript_KohlaBattle::
# 62 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_KohlaBattle_Text_0
# 63 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_KohlaBattle_Text_1
# 65 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Text_2
# 68 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_KohlaBattle_Text_3
# 69 "data//maps/GastreeCity/scripts.pory"
	waitmessage
	return


# 17 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0:
# 17 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 17 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 17 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 17 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 17 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 17 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 24 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1:
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 24 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 42 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0:
# 42 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 42 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 42 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 42 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 42 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 42 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 42 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 47 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_1:
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

GastreeCity_EventScript_KohlaBattle_Text_0:
# 62 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! Going to Mt.\l"
	.string "Ceram? There are rocks outside the\l"
	.string "entry, and you'll need a {PKMN} to smash\l"
	.string "them! But I'm far ahead of you, chum!\l"
	.string "I've already beaten this town's\l"
	.string "pathetic Gym Leader who gave me the HM\l"
	.string "I need!$"

GastreeCity_EventScript_KohlaBattle_Text_1:
# 63 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: And I don't mind dishing out a\n"
	.string "second serving either! This is payback\l"
	.string "for one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_EventScript_KohlaBattle_Text_2:
# 65 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_EventScript_KohlaBattle_Text_3:
# 68 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: You may have beaten me this\n"
	.string "time, but you're still just a lazy\l"
	.string "good-for-nothing who lucked into a job\l"
	.string "that I deserve! People are counting on\l"
	.string "us to get the dreamstone and I can't be\l"
	.string "dilly-dallying about with you! Over and\l"
	.string "out, chum!$"
