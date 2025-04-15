AncientCeram_MapScripts::
# 2 "data//maps/AncientCeram/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientCeram_OnTransition_ExitReady
	.byte 0


AncientCeram_OnTransition_ExitReady::
# 7 "data//maps/AncientCeram/scripts.pory"
	setrespawn HEAL_LOCATION_ANCIENT_CERAM
# 9 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 3
	goto_if_eq AncientCeram_OnTransition_ExitReady_2
AncientCeram_OnTransition_ExitReady_1:
	end

AncientCeram_OnTransition_ExitReady_2:
# 10 "data//maps/AncientCeram/scripts.pory"
	setobjectxyperm 1, 28, 22
# 11 "data//maps/AncientCeram/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 12 "data//maps/AncientCeram/scripts.pory"
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_LEFT
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
# 29 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 1
	goto_if_eq AncientCeram_EventScript_Gabrielle_5
AncientCeram_EventScript_Gabrielle_4:
# 34 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 3
	goto_if_eq AncientCeram_EventScript_Gabrielle_8
AncientCeram_EventScript_Gabrielle_7:
# 39 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 2
	goto_if_eq AncientCeram_EventScript_Gabrielle_11
AncientCeram_EventScript_Gabrielle_10:
# 46 "data//maps/AncientCeram/scripts.pory"
	releaseall
	end

AncientCeram_EventScript_Gabrielle_2:
# 24 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Gabrielle_Text_0
# 25 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 1
	goto AncientCeram_EventScript_Gabrielle_1

AncientCeram_EventScript_Gabrielle_5:
# 30 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Gabrielle_Text_1
	goto AncientCeram_EventScript_Gabrielle_4

AncientCeram_EventScript_Gabrielle_8:
# 35 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Gabrielle_Text_2
	goto AncientCeram_EventScript_Gabrielle_7

AncientCeram_EventScript_Gabrielle_11:
# 40 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Gabrielle_Text_3
# 41 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 3
# 44 "data//maps/AncientCeram/scripts.pory"
	warp MAP_ANCIENT_CERAM, 28, 23
	goto AncientCeram_EventScript_Gabrielle_10


AncientCeram_EventScript_Exit::
# 54 "data//maps/AncientCeram/scripts.pory"
	lockall
# 57 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 0
	goto_if_eq AncientCeram_EventScript_Exit_2
AncientCeram_EventScript_Exit_1:
# 60 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 1
	goto_if_eq AncientCeram_EventScript_Exit_5
AncientCeram_EventScript_Exit_4:
# 63 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 2
	goto_if_eq AncientCeram_EventScript_Exit_8
AncientCeram_EventScript_Exit_7:
# 66 "data//maps/AncientCeram/scripts.pory"
	compare VAR_ANCIENT_GAB_ESCAPE, 3
	goto_if_eq AncientCeram_EventScript_Exit_11
AncientCeram_EventScript_Exit_10:
# 85 "data//maps/AncientCeram/scripts.pory"
	releaseall
	return

AncientCeram_EventScript_Exit_2:
# 58 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 2
	goto AncientCeram_EventScript_Exit_1

AncientCeram_EventScript_Exit_5:
# 61 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 2
	goto AncientCeram_EventScript_Exit_4

AncientCeram_EventScript_Exit_8:
# 64 "data//maps/AncientCeram/scripts.pory"
	msgbox AncientCeram_EventScript_Exit_Text_0
	goto AncientCeram_EventScript_Exit_7

AncientCeram_EventScript_Exit_11:
# 68 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8004, 2
# 69 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8005, 2
# 70 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8006, 30
# 71 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_0x8007, 5
# 72 "data//maps/AncientCeram/scripts.pory"
	special ShakeCamera
# 73 "data//maps/AncientCeram/scripts.pory"
	waitstate
# 74 "data//maps/AncientCeram/scripts.pory"
	release
# 77 "data//maps/AncientCeram/scripts.pory"
	setflag FLAG_ANCIENT_FIRST_TIME
# 78 "data//maps/AncientCeram/scripts.pory"
	setvar VAR_ANCIENT_GAB_ESCAPE, 4
# 79 "data//maps/AncientCeram/scripts.pory"
	setrespawn HEAL_LOCATION_GALECREST_CITY
# 82 "data//maps/AncientCeram/scripts.pory"
	warp MAP_GALECREST_CITY, 53, 30
	goto AncientCeram_EventScript_Exit_10


AncientCeram_EventScript_Gabrielle_Text_0:
# 24 "data//maps/AncientCeram/scripts.pory"
	.string "GABRIELLE: What just happened? Where\n"
	.string "are we?\p"
	.string "...\p"
	.string "Ouch! I can't move my leg!\p"
	.string "GABRIELLE: {PLAYER}, p-please...you\n"
	.string "have to help me. I don't know what's\l"
	.string "going on and where we are. And the boss\l"
	.string "just...he just left me!!\p"
	.string "...\p"
	.string "GABRIELLE: I can't get up.$"

AncientCeram_EventScript_Gabrielle_Text_1:
# 30 "data//maps/AncientCeram/scripts.pory"
	.string "GABRIELLE: If you find a way out of\n"
	.string "this place, please take me with you.$"

AncientCeram_EventScript_Gabrielle_Text_2:
# 35 "data//maps/AncientCeram/scripts.pory"
	.string "GABRIELLE: Shall we go? Touch the\n"
	.string "dreamstone whenever you want to leave.$"

AncientCeram_EventScript_Gabrielle_Text_3:
# 40 "data//maps/AncientCeram/scripts.pory"
	.string "GABRIELLE: You found another\n"
	.string "dreamstone? Okay, let's head for it and\l"
	.string "get out of here.$"

AncientCeram_EventScript_Exit_Text_0:
# 64 "data//maps/AncientCeram/scripts.pory"
	.string "I can't leave GABRIELLE behind!$"
