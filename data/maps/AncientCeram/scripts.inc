AncientCeram_MapScripts::
	.byte 0


AncientCeram_EventScript_Gabrielle::
# 4 "data//maps/AncientCeram/scripts.pory"
	lockall
# 5 "data//maps/AncientCeram/scripts.pory"
	faceplayer
# 8 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 0
	goto_if_eq AncientCeram_EventScript_Gabrielle_2
AncientCeram_EventScript_Gabrielle_1:
# 13 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 1
	goto_if_eq AncientCeram_EventScript_Gabrielle_5
AncientCeram_EventScript_Gabrielle_4:
# 16 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 2
	goto_if_eq AncientCeram_EventScript_Gabrielle_8
AncientCeram_EventScript_Gabrielle_7:
# 28 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 3
	goto_if_eq AncientCeram_EventScript_Gabrielle_11
AncientCeram_EventScript_Gabrielle_10:
# 32 "data//maps/AncientCeram/scripts.pory"
	releaseall
	return

AncientCeram_EventScript_Gabrielle_2:
# 9 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Gabrielle_Text_0
# 10 "data//maps/AncientCeram/scripts.pory"
	questmenu QUEST_SET_QUEST_START, QUEST_CERAM_ANCIENT_AREA
# 11 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 1
	goto AncientCeram_EventScript_Gabrielle_1

AncientCeram_EventScript_Gabrielle_5:
# 14 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Gabrielle_Text_1
	goto AncientCeram_EventScript_Gabrielle_4

AncientCeram_EventScript_Gabrielle_8:
# 17 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Gabrielle_Text_2
# 18 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 3
# 21 "data//maps/AncientCeram/scripts.pory"
	fadescreen FADE_TO_WHITE
# 22 "data//maps/AncientCeram/scripts.pory"
	setobjectxyperm 1, 28, 22
# 23 "data//maps/AncientCeram/scripts.pory"
	setobjectxyperm OBJ_EVENT_ID_PLAYER, 28, 23
# 24 "data//maps/AncientCeram/scripts.pory"
	applymovement 1, AncientCeram_EventScript_Gabrielle_Movement_0
# 25 "data//maps/AncientCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientCeram_EventScript_Gabrielle_Movement_0
# 26 "data//maps/AncientCeram/scripts.pory"
	fadescreen FADE_FROM_WHITE
	goto AncientCeram_EventScript_Gabrielle_7

AncientCeram_EventScript_Gabrielle_11:
# 29 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Gabrielle_Text_3
	goto AncientCeram_EventScript_Gabrielle_10


AncientCeram_EventScript_Exit::
# 39 "data//maps/AncientCeram/scripts.pory"
	lockall
# 42 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 0
	goto_if_eq AncientCeram_EventScript_Exit_2
AncientCeram_EventScript_Exit_1:
# 46 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 1
	goto_if_eq AncientCeram_EventScript_Exit_5
AncientCeram_EventScript_Exit_4:
# 50 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 2
	goto_if_eq AncientCeram_EventScript_Exit_8
AncientCeram_EventScript_Exit_7:
# 53 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 3
	goto_if_eq AncientCeram_EventScript_Exit_11
AncientCeram_EventScript_Exit_10:
# 58 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8004, 2
# 59 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8005, 2
# 60 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8006, 8
# 61 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8007, 5
# 62 "data//maps/AncientCeram/scripts.pory"
	special ShakeCamera
# 63 "data//maps/AncientCeram/scripts.pory"
	waitstate
# 64 "data//maps/AncientCeram/scripts.pory"
	release
# 67 "data//maps/AncientCeram/scripts.pory"
	questmenu QUEST_SET_COMPLETE_QUEST, QUEST_CERAM_ANCIENT_AREA
# 70 "data//maps/AncientCeram/scripts.pory"
	warp MAP_CARABRUE_TOWN, 10, 10
# 71 "data//maps/AncientCeram/scripts.pory"
	releaseall
	return

AncientCeram_EventScript_Exit_2:
# 43 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Exit_Text_0
# 44 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 2
	goto AncientCeram_EventScript_Exit_1

AncientCeram_EventScript_Exit_5:
# 47 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Exit_Text_0
# 48 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 2
	goto AncientCeram_EventScript_Exit_4

AncientCeram_EventScript_Exit_8:
# 51 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Exit_Text_0
	goto AncientCeram_EventScript_Exit_7

AncientCeram_EventScript_Exit_11:
# 54 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Exit_Text_0
	goto AncientCeram_EventScript_Exit_10


# 24 "data//maps/AncientCeram/scripts.pory"
AncientCeram_EventScript_Gabrielle_Movement_0:
# 24 "data//maps/AncientCeram/scripts.pory"
	face_left
	step_end

AncientCeram_EventScript_Gabrielle_Text_0:
# 9 "data//maps/AncientCeram/scripts.pory"
	.string "What just happened? Where are we?\p"
	.string "...\p"
	.string "Ouch! I can't move my leg!\p"
	.string "{PLAYER}, p-please...you have to help\n"
	.string "me. I don't knwo what's going on and\l"
	.string "where we are. And the boss just...he\l"
	.string "just left me!!\p"
	.string "...\p"
	.string "I can't get up. If you find a way out of\n"
	.string "this place, please take me with you.$"

AncientCeram_EventScript_Gabrielle_Text_1:
# 14 "data//maps/AncientCeram/scripts.pory"
	.string "If you find a way out of this place,\n"
	.string "please take me with you.$"

AncientCeram_EventScript_Gabrielle_Text_2:
# 17 "data//maps/AncientCeram/scripts.pory"
	.string "GABRIELLE: You found another\n"
	.string "dreamstone? Okay, let's head for it and\l"
	.string "get out of here.$"

AncientCeram_EventScript_Gabrielle_Text_3:
# 29 "data//maps/AncientCeram/scripts.pory"
	.string "Shall we go? Touch the dreamstone\n"
	.string "whenever you want to leave.$"

AncientCeram_EventScript_Exit_Text_0:
# 43 "data//maps/AncientCeram/scripts.pory"
	.string "I can't leave GABRIELLE behind!$"
