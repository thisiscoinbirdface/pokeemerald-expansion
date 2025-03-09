Route1_House_MapScripts::
	.byte 0


Route1_House_RandomDude::
# 4 "data//maps/Route1_House/scripts.pory"
	lockall
# 5 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 6 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RandomDude_Text_0
# 7 "data//maps/Route1_House/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_ROUTE1_PECHA_BERRY
	checkitem ITEM_PECHA_BERRY
# 0 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route1_House_RandomDude_2
Route1_House_RandomDude_1:
# 32 "data//maps/Route1_House/scripts.pory"
	releaseall
	return

Route1_House_RandomDude_2:
# 10 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_RandomDude_Movement_0
# 11 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 12 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RandomDude_Text_1, MSGBOX_YESNO
# 14 "data//maps/Route1_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_House_RandomDude_5
# 25 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RandomDude_Text_6
	goto Route1_House_RandomDude_1

Route1_House_RandomDude_5:
# 15 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RandomDude_Text_2
# 16 "data//maps/Route1_House/scripts.pory"
	applymovement 1, Route1_House_RandomDude_Movement_1
# 17 "data//maps/Route1_House/scripts.pory"
	waitmovement 0
# 18 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RandomDude_Text_3
# 19 "data//maps/Route1_House/scripts.pory"
	release
# 20 "data//maps/Route1_House/scripts.pory"
	faceplayer
# 21 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RandomDude_Text_4
# 22 "data//maps/Route1_House/scripts.pory"
	giveitem ITEM_TM_RETURN
# 23 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_RandomDude_Text_5
	goto Route1_House_RandomDude_1


Route1_House_Azurill::
# 36 "data//maps/Route1_House/scripts.pory"
	lockall
# 37 "data//maps/Route1_House/scripts.pory"
	msgbox Route1_House_Azurill_Text_0
# 38 "data//maps/Route1_House/scripts.pory"
	releaseall
	return


# 10 "data//maps/Route1_House/scripts.pory"
Route1_House_RandomDude_Movement_0:
# 10 "data//maps/Route1_House/scripts.pory"
	emote_exclamation_mark
	step_end

# 16 "data//maps/Route1_House/scripts.pory"
Route1_House_RandomDude_Movement_1:
# 16 "data//maps/Route1_House/scripts.pory"
	face_right
	step_end

Route1_House_RandomDude_Text_0:
# 6 "data//maps/Route1_House/scripts.pory"
	.string "I think AZURILL ate something bad and\n"
	.string "now has food poisoning! I wish I had a\l"
	.string "PECHA BERRY to cure her.$"

Route1_House_RandomDude_Text_1:
# 12 "data//maps/Route1_House/scripts.pory"
	.string "Is that a PECHA BERRY? Would you be\n"
	.string "willing to give that to my AZURILL?$"

Route1_House_RandomDude_Text_2:
# 15 "data//maps/Route1_House/scripts.pory"
	.string "Thank you child.$"

Route1_House_RandomDude_Text_3:
# 18 "data//maps/Route1_House/scripts.pory"
	.string "Here sweetheart, this kind trainer has\n"
	.string "brought you a PECHA BERRY.\p"
	.string "AZURILL: zuuu!!!!!\p"
	.string "It seems to have revived$"

Route1_House_RandomDude_Text_4:
# 21 "data//maps/Route1_House/scripts.pory"
	.string "Here child, you must have this. The\n"
	.string "least I can do.$"

Route1_House_RandomDude_Text_5:
# 23 "data//maps/Route1_House/scripts.pory"
	.string "This contains the TM RETURN. It does\n"
	.string "more damage the stronger the bond\l"
	.string "between you and your {PKMN} is, just like\l"
	.string "me and AZURILL!$"

Route1_House_RandomDude_Text_6:
# 25 "data//maps/Route1_House/scripts.pory"
	.string "You'd watch AZURILL suffer? You're a\n"
	.string "cold person.$"

Route1_House_Azurill_Text_0:
# 37 "data//maps/Route1_House/scripts.pory"
	.string "AZURILL: zu...\p"
	.string "AZURILL looks quite sick.$"
