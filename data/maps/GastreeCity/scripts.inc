# 1 "data//maps/GastreeCity/scripts.pory"

# 2 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_KOHLA, 7

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
# 39 "data//maps/GastreeCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_FIRST_DREAMSTONE, SUB_QUEST_2
# 41 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return


GastreeCity_NPC1::
# 58 "data//maps/GastreeCity/scripts.pory"
	lockall
# 59 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 60 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC1_Text_0
# 61 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC3::
# 65 "data//maps/GastreeCity/scripts.pory"
	lockall
# 66 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 67 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0
# 68 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC4::
# 72 "data//maps/GastreeCity/scripts.pory"
	lockall
# 73 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 74 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0
# 75 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC5::
# 80 "data//maps/GastreeCity/scripts.pory"
	lockall
# 81 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 82 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0
# 83 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC6::
# 88 "data//maps/GastreeCity/scripts.pory"
	lockall
# 89 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 90 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0
# 91 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC7::
# 96 "data//maps/GastreeCity/scripts.pory"
	lockall
# 97 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 98 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0
# 99 "data//maps/GastreeCity/scripts.pory"
	applymovement 11, GastreeCity_NPC7_Movement_0
# 100 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 101 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC8::
# 106 "data//maps/GastreeCity/scripts.pory"
	lockall
# 107 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 108 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0
# 109 "data//maps/GastreeCity/scripts.pory"
	release
# 110 "data//maps/GastreeCity/scripts.pory"
	applymovement 5, GastreeCity_NPC8_Movement_0
# 111 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 112 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1
# 113 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC_Keckleon::
# 116 "data//maps/GastreeCity/scripts.pory"
	lockall
# 117 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 118 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0
# 119 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC9::
# 124 "data//maps/GastreeCity/scripts.pory"
	lockall
# 125 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 126 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 127 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC2::
# 133 "data//maps/GastreeCity/scripts.pory"
	lockall
# 134 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 136 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
	checkitem ITEM_SKITTY
# 0 "data//maps/GastreeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GastreeCity_NPC2_5
# 153 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 155 "data//maps/GastreeCity/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_GASTREE_SKITTY
GastreeCity_NPC2_1:
# 159 "data//maps/GastreeCity/scripts.pory"
	release
	return

GastreeCity_NPC2_2:
# 137 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 140 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 141 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_CUT
# 142 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 143 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
# 144 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 145 "data//maps/GastreeCity/scripts.pory"
	removeitem ITEM_SKITTY
# 146 "data//maps/GastreeCity/scripts.pory"
	addobject 12
# 150 "data//maps/GastreeCity/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GASTREE_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger::
# 164 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_EventScripts_SkittyTrigger_2
# 168 "data//maps/GastreeCity/scripts.pory"
	lockall
# 169 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger_Text_1, MSGBOX_YESNO
# 170 "data//maps/GastreeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GastreeCity_EventScripts_SkittyTrigger_5
GastreeCity_EventScripts_SkittyTrigger_1:
# 179 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScripts_SkittyTrigger_2:
# 165 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger_Text_0
	goto GastreeCity_EventScripts_SkittyTrigger_1

GastreeCity_EventScripts_SkittyTrigger_5:
# 171 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger_Text_2
# 172 "data//maps/GastreeCity/scripts.pory"
	release
# 173 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_SKITTY
# 174 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
	goto GastreeCity_EventScripts_SkittyTrigger_1


GastreeCity_NPC_Skitty::
# 184 "data//maps/GastreeCity/scripts.pory"
	lockall
# 185 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 186 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 187 "data//maps/GastreeCity/scripts.pory"
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

# 99 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC7_Movement_0:
# 99 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 110 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 110 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger_Text_0:
# 25 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 60 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from CARABRUE\n"
	.string "TOWN? Woah! I've always wanted to go\l"
	.string "there.$"

GastreeCity_NPC3_Text_0:
# 67 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 74 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 82 "data//maps/GastreeCity/scripts.pory"
	.string "INGER, this city's Gym Leader, uses ROCK\n"
	.string "types. I should have an advantage with\l"
	.string "my FIGHTING-type {PKMN} right? So then\l"
	.string "why am I getting cold feet?$"

GastreeCity_NPC6_Text_0:
# 90 "data//maps/GastreeCity/scripts.pory"
	.string "GASTREE CITY is famous not just for\n"
	.string "being a connecting Route to Mt. Ceram\l"
	.string "Base Camp, but also for its scenic\l"
	.string "viewpoints and its teahouse!$"

GastreeCity_NPC7_Text_0:
# 98 "data//maps/GastreeCity/scripts.pory"
	.string "I want to have tea too! When I get my\n"
	.string "first {PKMN}, I want it to be SINISTEA or\l"
	.string "POLTCHAGEIST.$"

GastreeCity_NPC8_Text_0:
# 108 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my KECKLEON ROCK\n"
	.string "SMASH so that we can go and explore\l"
	.string "Route 4 together!$"

GastreeCity_NPC8_Text_1:
# 112 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!!$"

GastreeCity_NPC_Keckleon_Text_0:
# 118 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!\p"
	.string "It's trying hard to learn ROCK SMASH. Go\n"
	.string "KECKLEON!$"

GastreeCity_NPC9_Text_0:
# 126 "data//maps/GastreeCity/scripts.pory"
	.string "$"

GastreeCity_NPC2_Text_0:
# 137 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY ran away because she got\n"
	.string "bored...maybe I should catch a PURRLOIN\l"
	.string "or MEOWTH for her to play with.$"

GastreeCity_NPC2_Text_1:
# 140 "data//maps/GastreeCity/scripts.pory"
	.string "Is that my SKITTY? Oh it is! Thank you\n"
	.string "trainer! Thank you so much! Come here\l"
	.string "SKITTY.\p"
	.string "SKITTY: skiiii!!!\p"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_2:
# 142 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY already knows CUT, so I don't\n"
	.string "need it any more. A {PKMN} with CUT can cut\l"
	.string "any small trees in its path. But you\l"
	.string "have to have at least one GYM BADGE to\l"
	.string "use it.$"

GastreeCity_NPC2_Text_3:
# 153 "data//maps/GastreeCity/scripts.pory"
	.string "My SKITTY is missing! I've been looking\n"
	.string "everywhere for her, but I can't find\l"
	.string "her. If you find a SKITTY, please bring\l"
	.string "her to me, okay?$"

GastreeCity_EventScripts_SkittyTrigger_Text_0:
# 165 "data//maps/GastreeCity/scripts.pory"
	.string "There's nothing else up there.$"

GastreeCity_EventScripts_SkittyTrigger_Text_1:
# 169 "data//maps/GastreeCity/scripts.pory"
	.string "There's something up in the branches of\n"
	.string "this tree.\p"
	.string "Shake it?$"

GastreeCity_EventScripts_SkittyTrigger_Text_2:
# 171 "data//maps/GastreeCity/scripts.pory"
	.string "A SKITTY dropped down from the tree! It\n"
	.string "looks scared. Who is its owner?$"

GastreeCity_NPC_Skitty_Text_0:
# 186 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skee~~$"

GastreeCity_KohlaIntro1::
# 44 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! I'm way\l"
	.string "ahead of you, chum! I've already beaten\l"
	.string "INGER and got the GYM BADGE.$"

GastreeCity_KohlaIntro2::
# 47 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: I don't mind dishing out a\n"
	.string "second serving either. This is payback\l"
	.string "for one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_KohlaPostBattle::
# 50 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: You may have won, but I'll get\n"
	.string "the dreamstone first! I heard that\l"
	.string "some group called Team Somber is also\l"
	.string "after the dreamstone. I'm going to head\l"
	.string "north towards MT CERAM BASE CAMP. Don't\l"
	.string "come after me - I don't need your help.\l"
	.string "Over and out, chum!$"
