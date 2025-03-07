# 1 "data//maps/GastreeCity/scripts.pory"

# 2 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_KOHLA, 12

GastreeCity_MapScripts::
# 6 "data//maps/GastreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GastreeCity_OnTransition
	.byte 0


GastreeCity_OnTransition::
# 12 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 13 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
	return


GastreeCity_EventScript_KohlaBattle_Trigger0::
# 18 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger0_2
# 22 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_KOHLA
# 25 "data//maps/GastreeCity/scripts.pory"
	lockall
# 26 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0
# 27 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 30 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 31 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 34 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0
# 37 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 38 "data//maps/GastreeCity/scripts.pory"
	release
# 40 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1
# 41 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 44 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 45 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 46 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 47 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 49 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger0_2:
	end


GastreeCity_EventScript_KohlaBattle_Trigger1::
# 54 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger1_2
# 59 "data//maps/GastreeCity/scripts.pory"
	lockall
# 60 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0
# 61 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 64 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 65 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 68 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0
# 71 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 72 "data//maps/GastreeCity/scripts.pory"
	release
# 74 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_1
# 75 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 78 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 79 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 80 "data//maps/GastreeCity/scripts.pory"
	removeobject 1
# 81 "data//maps/GastreeCity/scripts.pory"
	removeobject 2
# 83 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger1_2:
	end


GastreeCity_NPC1::
# 100 "data//maps/GastreeCity/scripts.pory"
	lockall
# 101 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 102 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC1_Text_0
# 103 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC3::
# 107 "data//maps/GastreeCity/scripts.pory"
	lockall
# 108 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 109 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0
# 110 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC4::
# 114 "data//maps/GastreeCity/scripts.pory"
	lockall
# 115 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 116 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0
# 117 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC5::
# 122 "data//maps/GastreeCity/scripts.pory"
	lockall
# 123 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 124 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0
# 125 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC6::
# 130 "data//maps/GastreeCity/scripts.pory"
	lockall
# 131 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 132 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0
# 133 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC7::
# 138 "data//maps/GastreeCity/scripts.pory"
	lockall
# 139 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 140 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0
# 141 "data//maps/GastreeCity/scripts.pory"
	applymovement 16, GastreeCity_NPC7_Movement_0
# 142 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 143 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC8::
# 148 "data//maps/GastreeCity/scripts.pory"
	lockall
# 149 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 150 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0
# 151 "data//maps/GastreeCity/scripts.pory"
	release
# 152 "data//maps/GastreeCity/scripts.pory"
	applymovement 15, GastreeCity_NPC8_Movement_0
# 153 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 154 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1
# 155 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC_Keckleon::
# 158 "data//maps/GastreeCity/scripts.pory"
	lockall
# 159 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 160 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0
# 161 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC9::
# 166 "data//maps/GastreeCity/scripts.pory"
	lockall
# 167 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 168 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 169 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC2::
# 175 "data//maps/GastreeCity/scripts.pory"
	lockall
# 176 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 178 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
	checkitem ITEM_SKITTY
# 0 "data//maps/GastreeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GastreeCity_NPC2_5
# 187 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
GastreeCity_NPC2_1:
# 191 "data//maps/GastreeCity/scripts.pory"
	release
	return

GastreeCity_NPC2_2:
# 179 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 182 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 183 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 184 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
# 185 "data//maps/GastreeCity/scripts.pory"
	addobject 17
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger::
# 196 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_EventScripts_SkittyTrigger_2
# 198 "data//maps/GastreeCity/scripts.pory"
	lockall
# 199 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger_Text_0, MSGBOX_YESNO
# 200 "data//maps/GastreeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GastreeCity_EventScripts_SkittyTrigger_5
GastreeCity_EventScripts_SkittyTrigger_4:
# 208 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScripts_SkittyTrigger_2:
	end

GastreeCity_EventScripts_SkittyTrigger_5:
# 201 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger_Text_1
# 202 "data//maps/GastreeCity/scripts.pory"
	release
# 203 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_SKITTY
# 204 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
	goto GastreeCity_EventScripts_SkittyTrigger_4


GastreeCity_NPC_Skitty::
# 213 "data//maps/GastreeCity/scripts.pory"
	lockall
# 214 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 215 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 216 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return


# 26 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_0:
# 26 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 26 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 26 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 26 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 26 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 26 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 26 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 26 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 26 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 26 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 26 "data//maps/GastreeCity/scripts.pory"
	walk_right
	step_end

# 40 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger0_Movement_1:
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 40 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 60 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_0:
# 60 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 60 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 60 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 60 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 60 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 60 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 60 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 74 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger1_Movement_1:
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 74 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 141 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC7_Movement_0:
# 141 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 152 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 152 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger0_Text_0:
# 34 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 102 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from CARABRUE\n"
	.string "TOWN? Woah! I've always wanted to go\l"
	.string "there.$"

GastreeCity_NPC3_Text_0:
# 109 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 116 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 124 "data//maps/GastreeCity/scripts.pory"
	.string "INGWER, this city's Gym Leader, uses\n"
	.string "ROCK types. I should have an advantage\l"
	.string "with my FIGHTING-type {PKMN} right? So\l"
	.string "then why am I getting cold feet?$"

GastreeCity_NPC6_Text_0:
# 132 "data//maps/GastreeCity/scripts.pory"
	.string "GASTREE CITY is famous not just for\n"
	.string "being a connecting Route to Mt. Ceram\l"
	.string "Base Camp, but also for its scenic\l"
	.string "viewpoints and its teahouse!$"

GastreeCity_NPC7_Text_0:
# 140 "data//maps/GastreeCity/scripts.pory"
	.string "I want to have tea too! When I get my\n"
	.string "first {PKMN}, I want it to be SINISTEA or\l"
	.string "POLTCHAGEIST.$"

GastreeCity_NPC8_Text_0:
# 150 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my KECKLEON ROCK\n"
	.string "SMASH so that we can go and explore\l"
	.string "Route 4 together!$"

GastreeCity_NPC8_Text_1:
# 154 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!!$"

GastreeCity_NPC_Keckleon_Text_0:
# 160 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!\p"
	.string "It's trying hard to learn ROCK SMASH. Go\n"
	.string "KECKLEON!$"

GastreeCity_NPC9_Text_0:
# 168 "data//maps/GastreeCity/scripts.pory"
	.string "$"

GastreeCity_NPC2_Text_0:
# 179 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY ran away because she got\n"
	.string "bored...maybe I should catch a PURRLOIN\l"
	.string "or MEOWTH for her to play with.$"

GastreeCity_NPC2_Text_1:
# 182 "data//maps/GastreeCity/scripts.pory"
	.string "Is that my SKITTY? Oh it is! Thank you\n"
	.string "trainer! Thank you so much! Come here\l"
	.string "SKITTY.\p"
	.string "SKITTY: skiiii!!!\p"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_2:
# 187 "data//maps/GastreeCity/scripts.pory"
	.string "My SKITTY is missing! I've been looking\n"
	.string "everywhere for her, but I can't find\l"
	.string "her. If you find a SKITTY, please bring\l"
	.string "her to me, okay?$"

GastreeCity_EventScripts_SkittyTrigger_Text_0:
# 199 "data//maps/GastreeCity/scripts.pory"
	.string "There's something up in the branches of\n"
	.string "this tree.\p"
	.string "Shake it?$"

GastreeCity_EventScripts_SkittyTrigger_Text_1:
# 201 "data//maps/GastreeCity/scripts.pory"
	.string "A SKITTY dropped down from the tree! It\n"
	.string "looks scared. Who is its owner?$"

GastreeCity_NPC_Skitty_Text_0:
# 215 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skee~~$"

GastreeCity_KohlaIntro1::
# 86 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! Going to Mt.\l"
	.string "Ceram? There are rocks outside the\l"
	.string "entry, and you'll need a {PKMN} to smash\l"
	.string "them! But I'm far ahead of you, chum!\l"
	.string "I've already beaten this town's\l"
	.string "pathetic Gym Leader who gave me the HM\l"
	.string "I need!$"

GastreeCity_KohlaIntro2::
# 89 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: And I don't mind dishing out a\n"
	.string "second serving either! This is payback\l"
	.string "for one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_KohlaPostBattle::
# 92 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: You may have beaten me this\n"
	.string "time, but you're still just a lazy\l"
	.string "good-for-nothing who lucked into a job\l"
	.string "that I deserve! People are counting on\l"
	.string "us to get the dreamstone and I can't be\l"
	.string "dilly-dallying about with you! Over and\l"
	.string "out, chum!$"
