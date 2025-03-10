AncientCeram_MapScripts::
# 2 "data//maps/AncientCeram/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientCeram_OnTransition_ExitReady
	.byte 0


AncientCeram_OnTransition_ExitReady::
# 7 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 3
	goto_if_eq AncientCeram_OnTransition_ExitReady_2
AncientCeram_OnTransition_ExitReady_1:
	end

AncientCeram_OnTransition_ExitReady_2:
# 8 "data//maps/AncientCeram/scripts.pory"
	setobjectxyperm 1, 28, 22
# 9 "data//maps/AncientCeram/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 10 "data//maps/AncientCeram/scripts.pory"
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_LEFT
# 11 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_OnTransition_ExitReady_Text_0
# 12 "data//maps/AncientCeram/scripts.pory"
	release
	goto AncientCeram_OnTransition_ExitReady_1


AncientCeram_EventScript_Gabrielle::
# 19 "data//maps/AncientCeram/scripts.pory"
	lockall
# 20 "data//maps/AncientCeram/scripts.pory"
	faceplayer
# 23 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 0
	goto_if_eq AncientCeram_EventScript_Gabrielle_2
AncientCeram_EventScript_Gabrielle_1:
# 28 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 1
	goto_if_eq AncientCeram_EventScript_Gabrielle_5
AncientCeram_EventScript_Gabrielle_4:
# 31 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 2
	goto_if_eq AncientCeram_EventScript_Gabrielle_8
AncientCeram_EventScript_Gabrielle_7:
# 41 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 3
	goto_if_eq AncientCeram_EventScript_Gabrielle_11
AncientCeram_EventScript_Gabrielle_10:
# 45 "data//maps/AncientCeram/scripts.pory"
	releaseall
	return

AncientCeram_EventScript_Gabrielle_2:
# 24 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Gabrielle_Text_0
# 25 "data//maps/AncientCeram/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_CERAM_ANCIENT_AREA
# 26 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 1
	goto AncientCeram_EventScript_Gabrielle_1

AncientCeram_EventScript_Gabrielle_5:
# 29 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Gabrielle_Text_1
	goto AncientCeram_EventScript_Gabrielle_4

AncientCeram_EventScript_Gabrielle_8:
# 32 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Gabrielle_Text_2
# 33 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 3
# 36 "data//maps/AncientCeram/scripts.pory"
	fadescreen FADE_TO_WHITE
# 37 "data//maps/AncientCeram/scripts.pory"
	setobjectxyperm 1, 28, 22
# 38 "data//maps/AncientCeram/scripts.pory"
	warp MAP_ANCIENT_CERAM, 28, 23
# 39 "data//maps/AncientCeram/scripts.pory"
	fadescreen FADE_FROM_WHITE
	goto AncientCeram_EventScript_Gabrielle_7

AncientCeram_EventScript_Gabrielle_11:
# 42 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_OnTransition_ExitReady_Text_0
	goto AncientCeram_EventScript_Gabrielle_10


AncientCeram_EventScript_Exit::
# 52 "data//maps/AncientCeram/scripts.pory"
	lockall
# 55 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 0
	goto_if_eq AncientCeram_EventScript_Exit_2
AncientCeram_EventScript_Exit_1:
# 58 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 1
	goto_if_eq AncientCeram_EventScript_Exit_5
AncientCeram_EventScript_Exit_4:
# 61 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 2
	goto_if_eq AncientCeram_EventScript_Exit_8
AncientCeram_EventScript_Exit_7:
# 64 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 3
	goto_if_eq AncientCeram_EventScript_Exit_11
AncientCeram_EventScript_Exit_10:
# 84 "data//maps/AncientCeram/scripts.pory"
	releaseall
	return

AncientCeram_EventScript_Exit_2:
# 56 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 2
	goto AncientCeram_EventScript_Exit_1

AncientCeram_EventScript_Exit_5:
# 59 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 2
	goto AncientCeram_EventScript_Exit_4

AncientCeram_EventScript_Exit_8:
# 62 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Exit_Text_0
	goto AncientCeram_EventScript_Exit_7

AncientCeram_EventScript_Exit_11:
# 66 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8004, 2
# 67 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8005, 2
# 68 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8006, 20
# 69 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8007, 5
# 70 "data//maps/AncientCeram/scripts.pory"
	special ShakeCamera
# 71 "data//maps/AncientCeram/scripts.pory"
	waitstate
# 72 "data//maps/AncientCeram/scripts.pory"
	release
# 75 "data//maps/AncientCeram/scripts.pory"
	setflag FLAG_ANCIENT_FIRST_TIME
# 76 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 4
# 78 "data//maps/AncientCeram/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_CERAM_ANCIENT_AREA
# 81 "data//maps/AncientCeram/scripts.pory"
	warp MAP_CARABRUE_TOWN, 10, 10
	goto AncientCeram_EventScript_Exit_10


AncientCeram_OnTransition_ExitReady_Text_0:
# 11 "data//maps/AncientCeram/scripts.pory"
	.string "Shall we go? Touch the dreamstone\n"
	.string "whenever you want to leave.$"

AncientCeram_EventScript_Gabrielle_Text_0:
# 24 "data//maps/AncientCeram/scripts.pory"
	.string "What just happened? Where are we?\p"
	.string "...\p"
	.string "Ouch! I can't move my leg!\p"
	.string "{PLAYER}, p-please...you have to help\n"
	.string "me. I don't know what's going on and\l"
	.string "where we are. And the boss just...he\l"
	.string "just left me!!\p"
	.string "...\p"
	.string "I can't get up.$"

AncientCeram_EventScript_Gabrielle_Text_1:
# 29 "data//maps/AncientCeram/scripts.pory"
	.string "If you find a way out of this place,\n"
	.string "please take me with you.$"

AncientCeram_EventScript_Gabrielle_Text_2:
# 32 "data//maps/AncientCeram/scripts.pory"
	.string "GABRIELLE: You found another\n"
	.string "dreamstone? Okay, let's head for it and\l"
	.string "get out of here.$"

AncientCeram_EventScript_Exit_Text_0:
# 62 "data//maps/AncientCeram/scripts.pory"
	.string "I can't leave GABRIELLE behind!$"
