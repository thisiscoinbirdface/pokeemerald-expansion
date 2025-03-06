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
# 13 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger0_2
# 18 "data//maps/GastreeCity/scripts.pory"
	lockall
# 19 "data//maps/GastreeCity/scripts.pory"
	applymovement 12, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0
# 20 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 23 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 24 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 27 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0
# 30 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 31 "data//maps/GastreeCity/scripts.pory"
	release
# 33 "data//maps/GastreeCity/scripts.pory"
	applymovement 12, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1
# 34 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 37 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 38 "data//maps/GastreeCity/scripts.pory"
	removeobject 12
# 39 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 40 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 42 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger0_2:
	end


GastreeCity_EventScript_KohlaBattle_Trigger1::
# 47 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger1_2
# 52 "data//maps/GastreeCity/scripts.pory"
	lockall
# 53 "data//maps/GastreeCity/scripts.pory"
	applymovement 13, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0
# 54 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 57 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 58 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 61 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0
# 64 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 65 "data//maps/GastreeCity/scripts.pory"
	release
# 67 "data//maps/GastreeCity/scripts.pory"
	applymovement 13, GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0
# 68 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 71 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 72 "data//maps/GastreeCity/scripts.pory"
	removeobject 13
# 73 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 74 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 76 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger1_2:
	end


# 19 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0:
# 19 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 19 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 19 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 19 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 19 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 19 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 19 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 33 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1:
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 33 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 67 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0:
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 67 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0:
# 27 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_KohlaIntro1::
# 79 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! Going to Mt.\l"
	.string "Ceram? There are rocks outside the\l"
	.string "entry, and you'll need a {PKMN} to smash\l"
	.string "them! But I'm far ahead of you, chum!\l"
	.string "I've already beaten this town's\l"
	.string "pathetic Gym Leader who gave me the HM\l"
	.string "I need!$"

GastreeCity_KohlaIntro2::
# 82 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: And I don't mind dishing out a\n"
	.string "second serving either! This is payback\l"
	.string "for one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_KohlaPostBattle::
# 85 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: You may have beaten me this\n"
	.string "time, but you're still just a lazy\l"
	.string "good-for-nothing who lucked into a job\l"
	.string "that I deserve! People are counting on\l"
	.string "us to get the dreamstone and I can't be\l"
	.string "dilly-dallying about with you! Over and\l"
	.string "out, chum!$"
