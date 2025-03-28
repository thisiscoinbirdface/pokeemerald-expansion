VilethornHouse_MapScripts::
	.byte 0


VilethornHouse_NPC1::
# 4 "data//maps/VilethornHouse/scripts.pory"
	lockall
# 5 "data//maps/VilethornHouse/scripts.pory"
	faceplayer
# 6 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC1_Text_0
# 7 "data//maps/VilethornHouse/scripts.pory"
	releaseall
	return


VilethornHouse_NPC2::
# 11 "data//maps/VilethornHouse/scripts.pory"
	lockall
# 12 "data//maps/VilethornHouse/scripts.pory"
	faceplayer
# 13 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC2_Text_0, MSGBOX_YESNO
# 14 "data//maps/VilethornHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornHouse_NPC2_2
# 23 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC2_Text_1
VilethornHouse_NPC2_1:
# 25 "data//maps/VilethornHouse/scripts.pory"
	releaseall
	return

VilethornHouse_NPC2_2:
# 15 "data//maps/VilethornHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CALM_MIND
# 16 "data//maps/VilethornHouse/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 17 "data//maps/VilethornHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VilethornHouse_NPC2_5
# 20 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC2_Text_2
	goto VilethornHouse_NPC2_1

VilethornHouse_NPC2_5:
# 18 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC2_Text_1
	goto VilethornHouse_NPC2_1


VilethornHouse_NPC1_Text_0:
# 6 "data//maps/VilethornHouse/scripts.pory"
	.string "We moved out of the city long ago. It\n"
	.string "was too noisy!$"

VilethornHouse_NPC2_Text_0:
# 13 "data//maps/VilethornHouse/scripts.pory"
	.string "Nobody disturbs us deep in these woods.\n"
	.string "It's a peaceful and calming lifestyle.\l"
	.string "Your {PKMN} may also benefit from calming\l"
	.string "themselves. Do you want me to teach one\l"
	.string "of your {PKMN} the move CALM MIND?$"

VilethornHouse_NPC2_Text_1:
# 18 "data//maps/VilethornHouse/scripts.pory"
	.string "Feel free to come back any time.$"

VilethornHouse_NPC2_Text_2:
# 20 "data//maps/VilethornHouse/scripts.pory"
	.string "If you have any other {PKMN} who want to\n"
	.string "experience nirvana, come to me.$"
