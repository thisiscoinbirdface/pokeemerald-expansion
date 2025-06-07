VilethornHouse_MapScripts::
	.byte 0


VilethornHouse_NPC1::
# 4 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC1_Text_0, MSGBOX_NPC
	end


VilethornHouse_NPC2::
# 9 "data//maps/VilethornHouse/scripts.pory"
	lockall
# 10 "data//maps/VilethornHouse/scripts.pory"
	faceplayer
# 11 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC2_Text_0, MSGBOX_YESNO
# 12 "data//maps/VilethornHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornHouse_NPC2_2
VilethornHouse_NPC2_1:
# 37 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC2_Text_6, MSGBOX_NPC
# 38 "data//maps/VilethornHouse/scripts.pory"
	releaseall
	end

VilethornHouse_NPC2_2:
# 14 "data//maps/VilethornHouse/scripts.pory"
	message VilethornHouse_NPC2_Text_1
# 15 "data//maps/VilethornHouse/scripts.pory"
	waitmessage
# 16 "data//maps/VilethornHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, VilethornHouse_NPC2_Text_2, VilethornHouse_NPC2_Text_3, VilethornHouse_NPC2_Text_4, VilethornHouse_NPC2_Text_5
# 19 "data//maps/VilethornHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VilethornHouse_NPC2_5
VilethornHouse_NPC2_4:
# 23 "data//maps/VilethornHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornHouse_NPC2_8
VilethornHouse_NPC2_7:
# 27 "data//maps/VilethornHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq VilethornHouse_NPC2_11
VilethornHouse_NPC2_10:
# 31 "data//maps/VilethornHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq VilethornHouse_NPC2_13
	goto VilethornHouse_NPC2_1

VilethornHouse_NPC2_5:
# 20 "data//maps/VilethornHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_REFLECT
# 21 "data//maps/VilethornHouse/scripts.pory"
	goto VilethornHouse_Tutor_TeachMove
	goto VilethornHouse_NPC2_4

VilethornHouse_NPC2_8:
# 24 "data//maps/VilethornHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LIGHT_SCREEN
# 25 "data//maps/VilethornHouse/scripts.pory"
	goto VilethornHouse_Tutor_TeachMove
	goto VilethornHouse_NPC2_7

VilethornHouse_NPC2_11:
# 28 "data//maps/VilethornHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AURORA_VEIL
# 29 "data//maps/VilethornHouse/scripts.pory"
	goto VilethornHouse_Tutor_TeachMove
	goto VilethornHouse_NPC2_10

VilethornHouse_NPC2_13:
# 32 "data//maps/VilethornHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PROTECT
# 33 "data//maps/VilethornHouse/scripts.pory"
	goto VilethornHouse_Tutor_TeachMove
	goto VilethornHouse_NPC2_1


VilethornHouse_Tutor_TeachMove::
# 43 "data//maps/VilethornHouse/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 44 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC2_Text_6, MSGBOX_NPC
# 45 "data//maps/VilethornHouse/scripts.pory"
	releaseall
	end


VilethornHouse_NPC1_Text_0:
# 4 "data//maps/VilethornHouse/scripts.pory"
	.string "We moved out of the city long ago. It\n"
	.string "was too dangerous!$"

VilethornHouse_NPC2_Text_0:
# 11 "data//maps/VilethornHouse/scripts.pory"
	.string "Nobody disturbs us here. The best\n"
	.string "protection is isolation! Your Pokémon\l"
	.string "also need to learn to defend\l"
	.string "themselves. Do you want me to teach one\l"
	.string "of your Pokémon a defensive move?$"

VilethornHouse_NPC2_Text_1:
# 14 "data//maps/VilethornHouse/scripts.pory"
	.string "Which move should I teach?$"

VilethornHouse_NPC2_Text_2:
# 17 "data//maps/VilethornHouse/scripts.pory"
	.string "Reflect$"

VilethornHouse_NPC2_Text_3:
# 17 "data//maps/VilethornHouse/scripts.pory"
	.string "Light Screen$"

VilethornHouse_NPC2_Text_4:
# 17 "data//maps/VilethornHouse/scripts.pory"
	.string "Aurora Veil$"

VilethornHouse_NPC2_Text_5:
# 17 "data//maps/VilethornHouse/scripts.pory"
	.string "Protect$"

VilethornHouse_NPC2_Text_6:
# 37 "data//maps/VilethornHouse/scripts.pory"
	.string "Come again whenever you like!$"
