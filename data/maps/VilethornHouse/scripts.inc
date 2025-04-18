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
# 21 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC2_Text_1
VilethornHouse_NPC2_1:
# 23 "data//maps/VilethornHouse/scripts.pory"
	releaseall
	return

VilethornHouse_NPC2_2:
# 13 "data//maps/VilethornHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CALM_MIND
# 14 "data//maps/VilethornHouse/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 15 "data//maps/VilethornHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VilethornHouse_NPC2_5
# 18 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC2_Text_2
	goto VilethornHouse_NPC2_1

VilethornHouse_NPC2_5:
# 16 "data//maps/VilethornHouse/scripts.pory"
	msgbox VilethornHouse_NPC2_Text_1
	goto VilethornHouse_NPC2_1


VilethornHouse_NPC1_Text_0:
# 4 "data//maps/VilethornHouse/scripts.pory"
	.string "We moved out of the city long ago. It\n"
	.string "was too noisy!$"

VilethornHouse_NPC2_Text_0:
# 11 "data//maps/VilethornHouse/scripts.pory"
	.string "Nobody disturbs us deep in these woods.\n"
	.string "It's a peaceful and calming lifestyle.\l"
	.string "Your Pokémon may also benefit from\l"
	.string "calming themselves. Do you want me to\l"
	.string "teach one of your Pokémon the move\l"
	.string "CALM MIND?$"

VilethornHouse_NPC2_Text_1:
# 16 "data//maps/VilethornHouse/scripts.pory"
	.string "Feel free to come back any time.$"

VilethornHouse_NPC2_Text_2:
# 18 "data//maps/VilethornHouse/scripts.pory"
	.string "If you have any other Pokémon who want\n"
	.string "to experience nirvana, come to me.$"
