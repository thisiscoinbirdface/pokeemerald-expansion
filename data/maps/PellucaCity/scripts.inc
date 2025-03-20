# 1 "data//maps/PellucaCity/scripts.pory"

# 2 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_GAB, 5

PellucaCity_MapScripts::
	.byte 0


PellucaCity_EventScripts_Gabrielle::
# 12 "data//maps/PellucaCity/scripts.pory"
	lockall
# 13 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_1
# 17 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1, MSGBOX_YESNO
# 18 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_5
# 24 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3
# 25 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_4:
# 28 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 29 "data//maps/PellucaCity/scripts.pory"
	release
# 30 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 31 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 32 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 33 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 34 "data//maps/PellucaCity/scripts.pory"
	release
# 35 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 36 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 37 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 38 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_EventScripts_Gabrielle_Movement_0
	return

PellucaCity_EventScripts_Gabrielle_1:
# 14 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_0
	return

PellucaCity_EventScripts_Gabrielle_5:
# 20 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2
# 21 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_4


# 38 "data//maps/PellucaCity/scripts.pory"
PellucaCity_EventScripts_Gabrielle_Movement_0:
# 38 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

PellucaCity_EventScripts_Gabrielle_Text_0:
# 14 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Ahh, I love the smell of the\n"
	.string "river!$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 17 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: I grew up here on this cliff\n"
	.string "without my parents. Life was hard. I\l"
	.string "didn't want my brother and sister to go\l"
	.string "through the same thing, so when Team\l"
	.string "Somber promised me money, I took it.\p"
	.string "...\p"
	.string "GABRIELLE: Those grunts were really\n"
	.string "vicious. Was I just like that when you\l"
	.string "met me with that hiker with the\l"
	.string "CLEFAIRY?$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 20 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Yeah...I bet he wouldn't\n"
	.string "ever forgive me, would he.$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 24 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: You're just trying to make\n"
	.string "me feel better, aren't you? I don't need\l"
	.string "your pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 28 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: After getting kicked out of\n"
	.string "Team Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 33 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: I want you to have this. As\n"
	.string "a thank you. For saving me not just\l"
	.string "once, but so many times. You're a strong\l"
	.string "trainer, but more importantly - you're a\l"
	.string "good person. I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 36 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Who we are is defined by the\n"
	.string "chocies we make, and once we lock in, we\l"
	.string "can't change. I can't erase what I've\l"
	.string "done, but I'm going to make a better\l"
	.string "choice this time.\p"
	.string "GABRIELLE: I suppose you're going to\n"
	.string "head to the MIRROH BASE CAMP from\l"
	.string "here? Team Somber must've reached\l"
	.string "already. Best of luck, {PLAYER}$"
