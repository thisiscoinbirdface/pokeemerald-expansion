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


GastreeCity_NPC1::
# 98 "data//maps/GastreeCity/scripts.pory"
	lockall
# 99 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 100 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC1_Text_0
# 101 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC2::
# 106 "data//maps/GastreeCity/scripts.pory"
	lockall
# 107 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 108 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0
# 109 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC3::
# 113 "data//maps/GastreeCity/scripts.pory"
	lockall
# 114 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 115 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0
# 116 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC4::
# 120 "data//maps/GastreeCity/scripts.pory"
	lockall
# 121 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 122 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0
# 123 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC5::
# 128 "data//maps/GastreeCity/scripts.pory"
	lockall
# 129 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 130 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0
# 131 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC6::
# 136 "data//maps/GastreeCity/scripts.pory"
	lockall
# 137 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 138 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0
# 139 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC7::
# 143 "data//maps/GastreeCity/scripts.pory"
	lockall
# 144 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 145 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0
# 146 "data//maps/GastreeCity/scripts.pory"
	applymovement 16, GastreeCity_NPC7_Movement_0
# 147 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 148 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC8::
# 153 "data//maps/GastreeCity/scripts.pory"
	lockall
# 154 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 155 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0
# 156 "data//maps/GastreeCity/scripts.pory"
	release
# 157 "data//maps/GastreeCity/scripts.pory"
	applymovement 15, GastreeCity_NPC8_Movement_0
# 158 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 159 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1
# 160 "data//maps/GastreeCity/scripts.pory"
	release
	return


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

# 146 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC7_Movement_0:
# 146 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 157 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 157 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0:
# 32 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 100 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from CARABRUE\n"
	.string "TOWN? Woah! I've always wanted to go\l"
	.string "there.$"

GastreeCity_NPC2_Text_0:
# 108 "data//maps/GastreeCity/scripts.pory"
	.string "My SKITTY is missing! I've been looking\n"
	.string "everywhere for her, but I can't find\l"
	.string "her. If you find a SKITTY, please bring\l"
	.string "her to me, okay?$"

GastreeCity_NPC3_Text_0:
# 115 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 122 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 130 "data//maps/GastreeCity/scripts.pory"
	.string "INGWER, this city's Gym Leader, uses\n"
	.string "ROCK types. I should have an advantage\l"
	.string "with my FIGHTING-type {PKMN} right? So\l"
	.string "then why am I getting cold feet?$"

GastreeCity_NPC6_Text_0:
# 138 "data//maps/GastreeCity/scripts.pory"
	.string "GASTREE CITY is famous not just for\n"
	.string "being a connecting Route to Mt. Ceram\l"
	.string "Base Camp, but also for its scenic\l"
	.string "viewpoints and its teahouse!$"

GastreeCity_NPC7_Text_0:
# 145 "data//maps/GastreeCity/scripts.pory"
	.string "I want to have tea too! When I get my\n"
	.string "first {PKMN}, I want it to be SINISTEA or\l"
	.string "POLTCHAGEIST.$"

GastreeCity_NPC8_Text_0:
# 155 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my KECKLEON ROCK\n"
	.string "SMASH so that we can go and explore\l"
	.string "Route 4 together!$"

GastreeCity_NPC8_Text_1:
# 159 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!!$"

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
