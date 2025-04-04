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


PellucaCity_Zorua::
# 56 "data//maps/PellucaCity/scripts.pory"
	lockall
# 57 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 58 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_NORMAL
# 59 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 60 "data//maps/PellucaCity/scripts.pory"
	release
# 61 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCity_EventScripts_Gabrielle_Movement_0
# 62 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 63 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 79 "data//maps/PellucaCity/scripts.pory"
	lockall
# 80 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 81 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 82 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0
# 83 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC1::
# 96 "data//maps/PellucaCity/scripts.pory"
	lockall
# 97 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 98 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0
# 99 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC2::
# 104 "data//maps/PellucaCity/scripts.pory"
	lockall
# 105 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 106 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0
# 107 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC3::
# 112 "data//maps/PellucaCity/scripts.pory"
	lockall
# 113 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 114 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0
# 115 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC4::
# 120 "data//maps/PellucaCity/scripts.pory"
	lockall
# 121 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 122 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0
# 123 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC5::
# 128 "data//maps/PellucaCity/scripts.pory"
	lockall
# 129 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 130 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 131 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 132 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 133 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 134 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 135 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 136 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 137 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 138 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 143 "data//maps/PellucaCity/scripts.pory"
	lockall
# 144 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 145 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0
# 146 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC7::
# 151 "data//maps/PellucaCity/scripts.pory"
	lockall
# 152 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 153 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0
# 154 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC8::
# 159 "data//maps/PellucaCity/scripts.pory"
	lockall
# 160 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 161 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0
# 162 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Sealeo::
# 167 "data//maps/PellucaCity/scripts.pory"
	lockall
# 168 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 169 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 170 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0
# 171 "data//maps/PellucaCity/scripts.pory"
	release
# 172 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_Sealeo_Movement_0
# 173 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 174 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 182 "data//maps/PellucaCity/scripts.pory"
	lockall
# 183 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 184 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0
# 185 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_WingullGirl::
# 194 "data//maps/PellucaCity/scripts.pory"
	lockall
# 195 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 196 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 197 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 199 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 213 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5
PellucaCity_WingullGirl_1:
# 216 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 201 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_WingullGirl_Movement_0
# 202 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_WingullGirl_Movement_0
# 203 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 204 "data//maps/PellucaCity/scripts.pory"
	release
# 205 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_WingullGirl_Movement_1
# 206 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_WingullGirl_Movement_1
# 207 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 208 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 209 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 210 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 211 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 221 "data//maps/PellucaCity/scripts.pory"
	lockall
# 222 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 223 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0
# 224 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_WingullCritique::
# 229 "data//maps/PellucaCity/scripts.pory"
	lockall
# 230 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 231 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0
# 232 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


# 26 "data//maps/PellucaCity/scripts.pory"
PellucaCity_EventScripts_Gabrielle_Movement_0:
# 26 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 130 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
	step_end

# 135 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 135 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
	step_end

# 172 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Sealeo_Movement_0:
# 172 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 201 "data//maps/PellucaCity/scripts.pory"
PellucaCity_WingullGirl_Movement_0:
# 201 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 205 "data//maps/PellucaCity/scripts.pory"
PellucaCity_WingullGirl_Movement_1:
# 205 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
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

PellucaCity_Zorua_Text_0:
# 59 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE's ZORUA looks content. Life\n"
	.string "is more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 82 "data//maps/PellucaCity/scripts.pory"
	.string "LYCANROC is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 98 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 106 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "PELLUCA RESTAURANT?$"

PellucaCity_NPC3_Text_0:
# 114 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in MT MIRROH but I\n"
	.string "can't go there without a CABLE CAR\l"
	.string "PASS. So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 122 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge is too small. It's nothing\n"
	.string "like the cycling roads in other regions!$"

PellucaCity_NPC5_Text_0:
# 133 "data//maps/PellucaCity/scripts.pory"
	.string "The Gym Leader of PELLUCA CITY had her\n"
	.string "gym constructed on a separate island.\l"
	.string "Talk about entitlement!$"

PellucaCity_NPC6_Text_0:
# 145 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the MIRROH BASE\n"
	.string "CAMP? You'll have to take the cable car.\l"
	.string "It's just past the Pokemart. Wear\l"
	.string "something warm!$"

PellucaCity_NPC7_Text_0:
# 153 "data//maps/PellucaCity/scripts.pory"
	.string "There are no free tables at the\n"
	.string "restaurant! I should've made a\l"
	.string "reservation.$"

PellucaCity_NPC8_Text_0:
# 161 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "SHARPEDO's going to scare all the fish\l"
	.string "away?$"

PellucaCity_Sealeo_Text_0:
# 170 "data//maps/PellucaCity/scripts.pory"
	.string "SEALEO wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 184 "data//maps/PellucaCity/scripts.pory"
	.string "This is the PELLUCA FISHERY! But it's\n"
	.string "closed due to the SHARPEDO attacks.$"

PellucaCity_WingullGirl_Text_0:
# 196 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "WINGULLS over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 197 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 197 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 203 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a WINGULL!$"

PellucaCity_WingullGirl_Text_4:
# 209 "data//maps/PellucaCity/scripts.pory"
	.string "The WINGULL gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 213 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 223 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "WINGULLS. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 231 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at {PKMN}...that's poor parenting.$"
