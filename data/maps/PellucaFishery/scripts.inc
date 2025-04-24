PellucaFishery_MapScripts::
	.byte 0


PellucaFishery_NPC1::
# 6 "data//maps/PellucaFishery/scripts.pory"
	lockall
# 7 "data//maps/PellucaFishery/scripts.pory"
	faceplayer
# 9 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_PELLUCA_FISHERY, 3
	goto_if_eq PellucaFishery_NPC1_2
# 12 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC1_Text_1
PellucaFishery_NPC1_1:
# 14 "data//maps/PellucaFishery/scripts.pory"
	releaseall
	end

PellucaFishery_NPC1_2:
# 10 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC1_Text_0
	goto PellucaFishery_NPC1_1


PellucaFishery_NPC2::
# 19 "data//maps/PellucaFishery/scripts.pory"
	lockall
# 20 "data//maps/PellucaFishery/scripts.pory"
	faceplayer
# 22 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_PELLUCA_FISHERY, 3
	goto_if_eq PellucaFishery_NPC2_2
# 25 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC2_Text_0
PellucaFishery_NPC2_1:
# 27 "data//maps/PellucaFishery/scripts.pory"
	releaseall
	end

PellucaFishery_NPC2_2:
# 23 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC1_Text_0
	goto PellucaFishery_NPC2_1


PellucaFishery_NPC3::
# 32 "data//maps/PellucaFishery/scripts.pory"
	lockall
# 33 "data//maps/PellucaFishery/scripts.pory"
	faceplayer
# 35 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_PELLUCA_FISHERY, 3
	goto_if_eq PellucaFishery_NPC3_2
# 38 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC3_Text_0
PellucaFishery_NPC3_1:
# 40 "data//maps/PellucaFishery/scripts.pory"
	releaseall
	end

PellucaFishery_NPC3_2:
# 36 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC1_Text_0
	goto PellucaFishery_NPC3_1


PellucaFishery_EventScript_MainDude::
# 51 "data//maps/PellucaFishery/scripts.pory"
	lockall
# 52 "data//maps/PellucaFishery/scripts.pory"
	faceplayer
# 54 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_PELLUCA_FISHERY, 3
	goto_if_eq PellucaFishery_EventScript_MainDude_2
PellucaFishery_EventScript_MainDude_1:
# 58 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_PELLUCA_FISHERY, 2
	goto_if_eq PellucaFishery_EventScript_MainDude_5
PellucaFishery_EventScript_MainDude_4:
# 78 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_PELLUCA_FISHERY, 1
	goto_if_eq PellucaFishery_EventScript_MainDude_8
PellucaFishery_EventScript_MainDude_7:
# 98 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_PELLUCA_FISHERY, 0
	goto_if_eq PellucaFishery_EventScript_MainDude_13
	return

PellucaFishery_EventScript_MainDude_2:
# 55 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_NPC1_Text_0
	goto PellucaFishery_EventScript_MainDude_1

PellucaFishery_EventScript_MainDude_5:
# 59 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_0, MSGBOX_YESNO
# 61 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaFishery_EventScript_MainDude_10
# 73 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_2
# 74 "data//maps/PellucaFishery/scripts.pory"
	release
	goto PellucaFishery_EventScript_MainDude_4

PellucaFishery_EventScript_MainDude_8:
# 79 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_3, MSGBOX_YESNO
# 81 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaFishery_EventScript_MainDude_15
# 93 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_5
	goto PellucaFishery_EventScript_MainDude_7

PellucaFishery_EventScript_MainDude_10:
# 62 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_1
# 63 "data//maps/PellucaFishery/scripts.pory"
	release
# 65 "data//maps/PellucaFishery/scripts.pory"
	completequest QUEST_PELLUCA_FISHERY
# 67 "data//maps/PellucaFishery/scripts.pory"
	giveitem ITEM_POTION
# 68 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_1
# 69 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_FISHERY, 3
# 70 "data//maps/PellucaFishery/scripts.pory"
	release
	goto PellucaFishery_EventScript_MainDude_4

PellucaFishery_EventScript_MainDude_13:
# 100 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_6, MSGBOX_YESNO
# 101 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaFishery_EventScript_MainDude_18
# 109 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_8
	return

PellucaFishery_EventScript_MainDude_15:
# 82 "data//maps/PellucaFishery/scripts.pory"
	checkitem ITEM_MEGA_RING
# 83 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaFishery_EventScript_MainDude_21
# 89 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_2
# 90 "data//maps/PellucaFishery/scripts.pory"
	release
	goto PellucaFishery_EventScript_MainDude_7

PellucaFishery_EventScript_MainDude_18:
# 102 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_7
# 103 "data//maps/PellucaFishery/scripts.pory"
	release
# 104 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_FISHERY, 1
# 106 "data//maps/PellucaFishery/scripts.pory"
	startquest QUEST_PELLUCA_FISHERY
	return

PellucaFishery_EventScript_MainDude_21:
# 84 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_4
# 85 "data//maps/PellucaFishery/scripts.pory"
	release
# 86 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_FISHERY, 2
	goto PellucaFishery_EventScript_MainDude_7


PellucaFishery_NPC1_Text_0:
# 10 "data//maps/PellucaFishery/scripts.pory"
	.string "$"

PellucaFishery_NPC1_Text_1:
# 12 "data//maps/PellucaFishery/scripts.pory"
	.string "Shucks! I can't wait to get back out to\n"
	.string "sea but Old Man Slakka doesn't want to\l"
	.string "do anything while the Sharpedo's out\l"
	.string "and about!$"

PellucaFishery_NPC2_Text_0:
# 25 "data//maps/PellucaFishery/scripts.pory"
	.string "I bet me and my Toedscruel could give\n"
	.string "that Sharpedo a whooping and a half,\l"
	.string "but Old Man Slakka doesn't want us to\l"
	.string "risk it.$"

PellucaFishery_NPC3_Text_0:
# 38 "data//maps/PellucaFishery/scripts.pory"
	.string "Did you know that a Casting Rod and\n"
	.string "Trolling Rod catch different Pokémon?$"

PellucaFishery_EventScript_MainDude_Text_0:
# 59 "data//maps/PellucaFishery/scripts.pory"
	.string "SLAKKA: Have you taken care of the\n"
	.string "shark?$"

PellucaFishery_EventScript_MainDude_Text_1:
# 62 "data//maps/PellucaFishery/scripts.pory"
	.string "SLAKKA: Amazing! You're a saviour!$"

PellucaFishery_EventScript_MainDude_Text_2:
# 73 "data//maps/PellucaFishery/scripts.pory"
	.string "SLAKKA: Huh? Where? You trying to pull\n"
	.string "a fast one on a sailor? I may be past my\l"
	.string "prime but I can still give you a\l"
	.string "knocking, you know.$"

PellucaFishery_EventScript_MainDude_Text_3:
# 79 "data//maps/PellucaFishery/scripts.pory"
	.string "SLAKKA: Ah, there you are! Let's see\n"
	.string "your Mega Ring.$"

PellucaFishery_EventScript_MainDude_Text_4:
# 84 "data//maps/PellucaFishery/scripts.pory"
	.string "SLAKKA: Good, good. Now you've got a\n"
	.string "chance against the Mega Sharpedo. Well\l"
	.string "then, all that's left is for you to make\l"
	.string "your way there. The Sharpedo lives\l"
	.string "north of here, up in Ivy River. You can\l"
	.string "either surf up there or go through Mt.\l"
	.string "Mirroh and come down. Go teach that\l"
	.string "Mega Sharpedo a lesson, kid! I'm\l"
	.string "counting on ya.$"

PellucaFishery_EventScript_MainDude_Text_5:
# 93 "data//maps/PellucaFishery/scripts.pory"
	.string "SLAKKA: Hmpf. Come back when you do!$"

PellucaFishery_EventScript_MainDude_Text_6:
# 100 "data//maps/PellucaFishery/scripts.pory"
	.string "SLAKKA: What am I going to do about\n"
	.string "this mess! My fishery business was\l"
	.string "booming until we started getting\l"
	.string "attacked by a monstrous Sharpedo! And\l"
	.string "none of us can handle it!\p"
	.string "It's a total disaster.\p"
	.string "...\p"
	.string "SLAKKA: Eh? You wanna try? You...don't\n"
	.string "look like you can handle it. That\l"
	.string "Sharpedo's strong, see. Not normal. It's\l"
	.string "mega evolved in the wild! You still\l"
	.string "wanna go up against it?$"

PellucaFishery_EventScript_MainDude_Text_7:
# 102 "data//maps/PellucaFishery/scripts.pory"
	.string "SLAKKA: Haha! You may not look like\n"
	.string "much, but you've got some spine, eh? I\l"
	.string "like that.\p"
	.string "Can't sail the seas without a strong\n"
	.string "mast.\p"
	.string "Fine, you're in. But I'm an old man now\n"
	.string "and I can't push you into the deep end\l"
	.string "without preparing you first.\p"
	.string "SLAKKA: If you're going up against a\n"
	.string "mega evolved Pokemon, you'll need to be\l"
	.string "able to mega evolve yourself! Get\l"
	.string "yourself a Mega Ring somehow and then\l"
	.string "come back.$"

PellucaFishery_EventScript_MainDude_Text_8:
# 109 "data//maps/PellucaFishery/scripts.pory"
	.string "SLAKKA: Good choice, kid. That thing is\n"
	.string "terrifying! Worse than a raging\l"
	.string "seastorm it is!$"
