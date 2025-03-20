# 1 "data//maps/PellucaCity/scripts.pory"

# 2 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_GAB, 5

PellucaCity_MapScripts::
	.byte 0


PellucaCity_EventScripts_Gabrielle::
# 12 "data//maps/PellucaCity/scripts.pory"
	lockall
# 13 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_2
# 17 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 18 "data//maps/PellucaCity/scripts.pory"
	release
# 19 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 20 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 21 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 22 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2, MSGBOX_YESNO
# 23 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_6
# 31 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_EventScripts_Gabrielle_Movement_0
# 32 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 33 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_5:
# 36 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 37 "data//maps/PellucaCity/scripts.pory"
	release
# 38 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 39 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 40 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 41 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 42 "data//maps/PellucaCity/scripts.pory"
	release
# 43 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 44 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 45 "data//maps/PellucaCity/scripts.pory"
	release
# 46 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 47 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_EventScripts_Gabrielle_Movement_0
PellucaCity_EventScripts_Gabrielle_1:
# 49 "data//maps/PellucaCity/scripts.pory"
	releaseall
	return

PellucaCity_EventScripts_Gabrielle_2:
# 14 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_0
	goto PellucaCity_EventScripts_Gabrielle_1

PellucaCity_EventScripts_Gabrielle_6:
# 25 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_EventScripts_Gabrielle_Movement_0
# 26 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 27 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3
# 28 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_5


# 25 "data//maps/PellucaCity/scripts.pory"
PellucaCity_EventScripts_Gabrielle_Movement_0:
# 25 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

PellucaCity_EventScripts_Gabrielle_Text_0:
# 14 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Ahh, I love the smell of the\n"
	.string "river!$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 17 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: I grew up here on this cliff\n"
	.string "without my parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "GABRIELLE: Those grunts were really\n"
	.string "vicious to me. I was so scared I would\l"
	.string "lose ZORUA!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 22 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the CLEFAIRY?$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 27 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Yeah...I bet he wouldn't\n"
	.string "ever forgive me, would he.$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 32 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: You're just trying to make\n"
	.string "me feel better, aren't you? I don't need\l"
	.string "your pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 36 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: After getting kicked out of\n"
	.string "Team Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 41 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: I want you to have this. As\n"
	.string "a thank you. For saving me - not just\l"
	.string "once, but so many times. You're a strong\l"
	.string "trainer, but more importantly - you're a\l"
	.string "good person. I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 44 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Who we are is defined by the\n"
	.string "chocies we make, and once we lock in, we\l"
	.string "can't change. I can't erase what I've\l"
	.string "done, but I'm going to make a better\l"
	.string "choice this time.\p"
	.string "GABRIELLE: I suppose you're going to\n"
	.string "head to the MIRROH BASE CAMP from\l"
	.string "here? Team Somber must've reached\l"
	.string "there already. Best of luck, {PLAYER}$"
