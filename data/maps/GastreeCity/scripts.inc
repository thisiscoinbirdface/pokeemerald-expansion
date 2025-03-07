# 1 "data//maps/GastreeCity/scripts.pory"

# 2 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_KOHLA, 11

GastreeCity_MapScripts::
# 6 "data//maps/GastreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GastreeCity_OnTransition
	.byte 0


GastreeCity_OnTransition::
	return


GastreeCity_EventScript_KohlaBattle_Trigger::
# 17 "data//maps/GastreeCity/scripts.pory"
	lockall
# 18 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 21 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 22 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 25 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 28 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 29 "data//maps/GastreeCity/scripts.pory"
	release
# 31 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0
# 32 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 35 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 36 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 38 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return


GastreeCity_NPC1::
# 55 "data//maps/GastreeCity/scripts.pory"
	lockall
# 56 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 57 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC1_Text_0
# 58 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC3::
# 62 "data//maps/GastreeCity/scripts.pory"
	lockall
# 63 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 64 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0
# 65 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC4::
# 69 "data//maps/GastreeCity/scripts.pory"
	lockall
# 70 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 71 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0
# 72 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC5::
# 77 "data//maps/GastreeCity/scripts.pory"
	lockall
# 78 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 79 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0
# 80 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC6::
# 85 "data//maps/GastreeCity/scripts.pory"
	lockall
# 86 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 87 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0
# 88 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC7::
# 93 "data//maps/GastreeCity/scripts.pory"
	lockall
# 94 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 95 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0
# 96 "data//maps/GastreeCity/scripts.pory"
	applymovement 16, GastreeCity_NPC7_Movement_0
# 97 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 98 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC8::
# 103 "data//maps/GastreeCity/scripts.pory"
	lockall
# 104 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 105 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0
# 106 "data//maps/GastreeCity/scripts.pory"
	release
# 107 "data//maps/GastreeCity/scripts.pory"
	applymovement 15, GastreeCity_NPC8_Movement_0
# 108 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 109 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1
# 110 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC_Keckleon::
# 113 "data//maps/GastreeCity/scripts.pory"
	lockall
# 114 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 115 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0
# 116 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC9::
# 121 "data//maps/GastreeCity/scripts.pory"
	lockall
# 122 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 123 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 124 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC2::
# 130 "data//maps/GastreeCity/scripts.pory"
	lockall
# 131 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 133 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
	checkitem ITEM_SKITTY
# 0 "data//maps/GastreeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GastreeCity_NPC2_5
# 143 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
GastreeCity_NPC2_1:
# 147 "data//maps/GastreeCity/scripts.pory"
	release
	return

GastreeCity_NPC2_2:
# 134 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 137 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 138 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 139 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
# 140 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 141 "data//maps/GastreeCity/scripts.pory"
	addobject 17
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger::
# 152 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_EventScripts_SkittyTrigger_2
# 156 "data//maps/GastreeCity/scripts.pory"
	lockall
# 157 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger_Text_1, MSGBOX_YESNO
# 158 "data//maps/GastreeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GastreeCity_EventScripts_SkittyTrigger_5
GastreeCity_EventScripts_SkittyTrigger_1:
# 167 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScripts_SkittyTrigger_2:
# 153 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger_Text_0
	goto GastreeCity_EventScripts_SkittyTrigger_1

GastreeCity_EventScripts_SkittyTrigger_5:
# 159 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger_Text_2
# 160 "data//maps/GastreeCity/scripts.pory"
	release
# 161 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_SKITTY
# 162 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
	goto GastreeCity_EventScripts_SkittyTrigger_1


GastreeCity_NPC_Skitty::
# 172 "data//maps/GastreeCity/scripts.pory"
	lockall
# 173 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 174 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 175 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return


# 31 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0:
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 31 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 96 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC7_Movement_0:
# 96 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 107 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 107 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger_Text_0:
# 25 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 57 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from CARABRUE\n"
	.string "TOWN? Woah! I've always wanted to go\l"
	.string "there.$"

GastreeCity_NPC3_Text_0:
# 64 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 71 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 79 "data//maps/GastreeCity/scripts.pory"
	.string "INGER, this city's Gym Leader, uses ROCK\n"
	.string "types. I should have an advantage with\l"
	.string "my FIGHTING-type {PKMN} right? So then\l"
	.string "why am I getting cold feet?$"

GastreeCity_NPC6_Text_0:
# 87 "data//maps/GastreeCity/scripts.pory"
	.string "GASTREE CITY is famous not just for\n"
	.string "being a connecting Route to Mt. Ceram\l"
	.string "Base Camp, but also for its scenic\l"
	.string "viewpoints and its teahouse!$"

GastreeCity_NPC7_Text_0:
# 95 "data//maps/GastreeCity/scripts.pory"
	.string "I want to have tea too! When I get my\n"
	.string "first {PKMN}, I want it to be SINISTEA or\l"
	.string "POLTCHAGEIST.$"

GastreeCity_NPC8_Text_0:
# 105 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my KECKLEON ROCK\n"
	.string "SMASH so that we can go and explore\l"
	.string "Route 4 together!$"

GastreeCity_NPC8_Text_1:
# 109 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!!$"

GastreeCity_NPC_Keckleon_Text_0:
# 115 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!\p"
	.string "It's trying hard to learn ROCK SMASH. Go\n"
	.string "KECKLEON!$"

GastreeCity_NPC9_Text_0:
# 123 "data//maps/GastreeCity/scripts.pory"
	.string "$"

GastreeCity_NPC2_Text_0:
# 134 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY ran away because she got\n"
	.string "bored...maybe I should catch a PURRLOIN\l"
	.string "or MEOWTH for her to play with.$"

GastreeCity_NPC2_Text_1:
# 137 "data//maps/GastreeCity/scripts.pory"
	.string "Is that my SKITTY? Oh it is! Thank you\n"
	.string "trainer! Thank you so much! Come here\l"
	.string "SKITTY.\p"
	.string "SKITTY: skiiii!!!\p"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_2:
# 143 "data//maps/GastreeCity/scripts.pory"
	.string "My SKITTY is missing! I've been looking\n"
	.string "everywhere for her, but I can't find\l"
	.string "her. If you find a SKITTY, please bring\l"
	.string "her to me, okay?$"

GastreeCity_EventScripts_SkittyTrigger_Text_0:
# 153 "data//maps/GastreeCity/scripts.pory"
	.string "There's nothing else up there.$"

GastreeCity_EventScripts_SkittyTrigger_Text_1:
# 157 "data//maps/GastreeCity/scripts.pory"
	.string "There's something up in the branches of\n"
	.string "this tree.\p"
	.string "Shake it?$"

GastreeCity_EventScripts_SkittyTrigger_Text_2:
# 159 "data//maps/GastreeCity/scripts.pory"
	.string "A SKITTY dropped down from the tree! It\n"
	.string "looks scared. Who is its owner?$"

GastreeCity_NPC_Skitty_Text_0:
# 174 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skee~~$"

GastreeCity_KohlaIntro1::
# 41 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! Going to Mt.\l"
	.string "Ceram? There are rocks outside the\l"
	.string "entry, and you'll need a {PKMN} to smash\l"
	.string "them! But I'm far ahead of you, chum!\l"
	.string "I've already beaten this town's\l"
	.string "pathetic Gym Leader who gave me the HM\l"
	.string "I need!$"

GastreeCity_KohlaIntro2::
# 44 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: And I don't mind dishing out a\n"
	.string "second serving either! This is payback\l"
	.string "for one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_KohlaPostBattle::
# 47 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: You may have beaten me this\n"
	.string "time, but you're still just a lazy\l"
	.string "good-for-nothing who lucked into a job\l"
	.string "that I deserve! People are counting on\l"
	.string "us to get the dreamstone and I can't be\l"
	.string "dilly-dallying about with you! Over and\l"
	.string "out, chum!$"
