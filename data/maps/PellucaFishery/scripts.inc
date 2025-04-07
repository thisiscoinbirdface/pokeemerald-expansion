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
# 79 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_PELLUCA_FISHERY, 1
	goto_if_eq PellucaFishery_EventScript_MainDude_8
PellucaFishery_EventScript_MainDude_7:
# 102 "data//maps/PellucaFishery/scripts.pory"
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
# 74 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_2
# 75 "data//maps/PellucaFishery/scripts.pory"
	release
	goto PellucaFishery_EventScript_MainDude_4

PellucaFishery_EventScript_MainDude_8:
# 80 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_3, MSGBOX_YESNO
# 82 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaFishery_EventScript_MainDude_15
# 97 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_6
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
# 104 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_7, MSGBOX_YESNO
# 105 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaFishery_EventScript_MainDude_18
# 113 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_9
	return

PellucaFishery_EventScript_MainDude_15:
# 83 "data//maps/PellucaFishery/scripts.pory"
	checkitem ITEM_MEGA_RING
# 84 "data//maps/PellucaFishery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaFishery_EventScript_MainDude_21
# 93 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_2
# 94 "data//maps/PellucaFishery/scripts.pory"
	release
	goto PellucaFishery_EventScript_MainDude_7

PellucaFishery_EventScript_MainDude_18:
# 106 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_8
# 107 "data//maps/PellucaFishery/scripts.pory"
	release
# 108 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_FISHERY, 1
# 110 "data//maps/PellucaFishery/scripts.pory"
	startquest QUEST_PELLUCA_FISHERY
	return

PellucaFishery_EventScript_MainDude_21:
# 85 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_4
# 86 "data//maps/PellucaFishery/scripts.pory"
	release
# 87 "data//maps/PellucaFishery/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 88 "data//maps/PellucaFishery/scripts.pory"
	msgbox PellucaFishery_EventScript_MainDude_Text_5
# 89 "data//maps/PellucaFishery/scripts.pory"
	release
# 90 "data//maps/PellucaFishery/scripts.pory"
	setvar VAR_PELLUCA_FISHERY, 2
	goto PellucaFishery_EventScript_MainDude_7


PellucaFishery_NPC1_Text_0:
# 10 "data//maps/PellucaFishery/scripts.pory"
	.string "$"

PellucaFishery_NPC1_Text_1:
# 12 "data//maps/PellucaFishery/scripts.pory"
	.string "Shucks! I can't wait to get back out to\n"
	.string "sea but OLD MAN BRINEY doesn't want to\l"
	.string "do anything while the SHARPEDO's out\l"
	.string "and about!$"

PellucaFishery_NPC2_Text_0:
# 25 "data//maps/PellucaFishery/scripts.pory"
	.string "I bet me and my TOEDSCRUEL could give\n"
	.string "that SHARPEDO a whooping and a half,\l"
	.string "but OLD MAN BRINEY doesn't want us to\l"
	.string "risk it.$"

PellucaFishery_NPC3_Text_0:
# 38 "data//maps/PellucaFishery/scripts.pory"
	.string "Did you know that a CASTING ROD and\n"
	.string "TROLLING ROD catch different Pokemon?$"

PellucaFishery_EventScript_MainDude_Text_0:
# 59 "data//maps/PellucaFishery/scripts.pory"
	.string "BRINEY: Have you taken care of the\n"
	.string "shark?$"

PellucaFishery_EventScript_MainDude_Text_1:
# 62 "data//maps/PellucaFishery/scripts.pory"
	.string "BRINEY: Amazing! You're a saviour!$"

PellucaFishery_EventScript_MainDude_Text_2:
# 74 "data//maps/PellucaFishery/scripts.pory"
	.string "BRINEY: Huh? Where? You trying to pull\n"
	.string "a fast one on a sailor? I may be past my\l"
	.string "prime but I can still give you a\l"
	.string "knocking, you know.$"

PellucaFishery_EventScript_MainDude_Text_3:
# 80 "data//maps/PellucaFishery/scripts.pory"
	.string "BRINEY: Ah, there you are! Let's see\n"
	.string "your MEGA RING.$"

PellucaFishery_EventScript_MainDude_Text_4:
# 85 "data//maps/PellucaFishery/scripts.pory"
	.string "BRINEY: Good, good. Now you've got a\n"
	.string "chance against the SHARPEDO. Well then,\l"
	.string "all that's left is for you to make your\l"
	.string "way there. You'll need to head north of\l"
	.string "here and climb up a waterfall to reach\l"
	.string "it's cave. Here you go.$"

PellucaFishery_EventScript_MainDude_Text_5:
# 88 "data//maps/PellucaFishery/scripts.pory"
	.string "BRINEY: This is the HM WATERFALL. Any\n"
	.string "Pokemon that knows it will be able to\l"
	.string "climb up waterfalls while surfing. But\l"
	.string "you'll need the CASCADE BADGE. But\l"
	.string "that's on you. I've done what I can -\l"
	.string "now go teach that MEGA SHARPEDO a\l"
	.string "lesson!$"

PellucaFishery_EventScript_MainDude_Text_6:
# 97 "data//maps/PellucaFishery/scripts.pory"
	.string "BRINEY: Hmpf. Come back when you do!$"

PellucaFishery_EventScript_MainDude_Text_7:
# 104 "data//maps/PellucaFishery/scripts.pory"
	.string "BRINEY: Ohh, what am I going to do\n"
	.string "about this mess! My fishery business\l"
	.string "was booming until we started getting\l"
	.string "attacked by a monstrous SHARPEDO! And\l"
	.string "none of us can handle it!\p"
	.string "It's a total disaster.\p"
	.string "...\p"
	.string "BRINEY: Eh? You wanna try? You...don't\n"
	.string "look like you can handle it. That\l"
	.string "SHARPEDO's strong, see. Not normal. It's\l"
	.string "MEGA evolved in the wild! You still\l"
	.string "wanna go up against it?$"

PellucaFishery_EventScript_MainDude_Text_8:
# 106 "data//maps/PellucaFishery/scripts.pory"
	.string "BRINEY: Haha! You may not look like\n"
	.string "much, but you've got a backbone in\l"
	.string "there, eh? I like that.\p"
	.string "Can't sail the seas without a strong\n"
	.string "mast.\p"
	.string "Fine, you're in. But I'm an old man now\n"
	.string "and I can't push you into the deep end\l"
	.string "without preparing you first. Get\l"
	.string "yourself a MEGA RING somehow and then\l"
	.string "come back.$"

PellucaFishery_EventScript_MainDude_Text_9:
# 113 "data//maps/PellucaFishery/scripts.pory"
	.string "BRINEY: A wise choice, kid. That thing is\n"
	.string "terrifying! Worse than a raging\l"
	.string "seastorm it is!$"
