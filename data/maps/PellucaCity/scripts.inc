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
# 18 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 19 "data//maps/PellucaCity/scripts.pory"
	release
# 20 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 21 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 22 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 23 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2, MSGBOX_YESNO
# 24 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_6
# 32 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_EventScripts_Gabrielle_Movement_0
# 33 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 34 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_5:
# 36 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 37 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 38 "data//maps/PellucaCity/scripts.pory"
	release
# 39 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 40 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 41 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 42 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 43 "data//maps/PellucaCity/scripts.pory"
	release
# 44 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 45 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 46 "data//maps/PellucaCity/scripts.pory"
	release
# 47 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 48 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_EventScripts_Gabrielle_Movement_0
# 49 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
PellucaCity_EventScripts_Gabrielle_1:
# 51 "data//maps/PellucaCity/scripts.pory"
	releaseall
	return

PellucaCity_EventScripts_Gabrielle_2:
# 14 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_0
# 15 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_1

PellucaCity_EventScripts_Gabrielle_6:
# 26 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_EventScripts_Gabrielle_Movement_0
# 27 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 28 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3
# 29 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_5


PellucaCity_NPC1::
# 77 "data//maps/PellucaCity/scripts.pory"
	lockall
# 78 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 79 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0
# 80 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC2::
# 85 "data//maps/PellucaCity/scripts.pory"
	lockall
# 86 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 87 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0
# 88 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC3::
# 93 "data//maps/PellucaCity/scripts.pory"
	lockall
# 94 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 95 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0
# 96 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC4::
# 101 "data//maps/PellucaCity/scripts.pory"
	lockall
# 102 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 103 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0
# 104 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC5::
# 109 "data//maps/PellucaCity/scripts.pory"
	lockall
# 110 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 111 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 112 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 117 "data//maps/PellucaCity/scripts.pory"
	lockall
# 118 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 119 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0
# 120 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC7::
# 125 "data//maps/PellucaCity/scripts.pory"
	lockall
# 126 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 127 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0
# 128 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC8::
# 133 "data//maps/PellucaCity/scripts.pory"
	lockall
# 134 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 135 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0
# 136 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 141 "data//maps/PellucaCity/scripts.pory"
	lockall
# 142 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 143 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0
# 144 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_WingullGirl::
# 153 "data//maps/PellucaCity/scripts.pory"
	lockall
# 154 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 155 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0
# 156 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_WingullMother::
# 161 "data//maps/PellucaCity/scripts.pory"
	lockall
# 162 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 163 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0
# 164 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


# 26 "data//maps/PellucaCity/scripts.pory"
PellucaCity_EventScripts_Gabrielle_Movement_0:
# 26 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

PellucaCity_EventScripts_Gabrielle_Text_0:
# 14 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Ahh, I love the smell of the\n"
	.string "river!$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 18 "data//maps/PellucaCity/scripts.pory"
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
# 23 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the CLEFAIRY?$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 28 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Yeah...I doubt he'd ever\n"
	.string "forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 33 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: You're just trying to make\n"
	.string "me feel better, aren't you? I don't need\l"
	.string "your pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 37 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: After getting kicked out of\n"
	.string "Team Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 42 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: I want you to have this. As\n"
	.string "a thank you. For saving me - not just\l"
	.string "once, but so many times. You're a strong\l"
	.string "trainer, but more importantly - you're a\l"
	.string "good person. I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 45 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Who we are is defined by the\n"
	.string "chocies we make, and once we lock in, we\l"
	.string "can't change.\p"
	.string "I can't erase what I've done, but I'm\n"
	.string "going to make a better choice this time.\p"
	.string "GABRIELLE: I suppose you're going to\n"
	.string "head to the MIRROH BASE CAMP from\l"
	.string "here? Team Somber must've reached\l"
	.string "there already. Best of luck, {PLAYER}.$"

PellucaCity_NPC1_Text_0:
# 79 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 87 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "PELLUCA RESTAURANT?$"

PellucaCity_NPC3_Text_0:
# 95 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in MT MIRROH but I\n"
	.string "can't go there without a CABLE CAR\l"
	.string "PASS. So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 103 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge is too small. It's nothing\n"
	.string "like the cycling roads in other regions!$"

PellucaCity_NPC5_Text_0:
# 111 "data//maps/PellucaCity/scripts.pory"
	.string "The Gym Leader of PELLUCA CITY had her\n"
	.string "gym constructed on a separate island.\l"
	.string "Talk about entitlement!$"

PellucaCity_NPC6_Text_0:
# 119 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the MIRROH BASE\n"
	.string "CAMP? You'll have to take the cable car.\l"
	.string "It's just past the Pokemart. Wear\l"
	.string "something warm!$"

PellucaCity_NPC7_Text_0:
# 127 "data//maps/PellucaCity/scripts.pory"
	.string "There are no free tables at the\n"
	.string "restaurant! I should've made a\l"
	.string "reservation.$"

PellucaCity_NPC8_Text_0:
# 135 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "SHARPEDO's going to scare all the fish\l"
	.string "away?$"

PellucaCity_NPC9_Text_0:
# 143 "data//maps/PellucaCity/scripts.pory"
	.string "This is the PELLUCA FISHERY! But it's\n"
	.string "closed due to the SHARPEDO attacks.$"
