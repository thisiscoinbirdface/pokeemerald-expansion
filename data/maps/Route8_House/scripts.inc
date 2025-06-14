Route8_House_MapScripts::
	.byte 0


Route8_House_Unfezant::
# 4 "data//maps/Route8_House/scripts.pory"
	playmoncry SPECIES_UNFEZANT, CRY_MODE_NORMAL
# 5 "data//maps/Route8_House/scripts.pory"
	msgbox Route8_House_Unfezant_Text_0, MSGBOX_NPC
	end


Route8_House_Oranguru::
# 9 "data//maps/Route8_House/scripts.pory"
	playmoncry SPECIES_ORANGURU, CRY_MODE_NORMAL
# 10 "data//maps/Route8_House/scripts.pory"
	msgbox Route8_House_Oranguru_Text_0, MSGBOX_NPC
	end


Route8_House_Tutor::
# 15 "data//maps/Route8_House/scripts.pory"
	msgbox Route8_House_Tutor_Text_0
# 16 "data//maps/Route8_House/scripts.pory"
	msgbox Route8_House_Tutor_Text_1, MSGBOX_YESNO
# 18 "data//maps/Route8_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route8_House_Tutor_2
# 24 "data//maps/Route8_House/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 26 "data//maps/Route8_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route8_House_Tutor_5
# 32 "data//maps/Route8_House/scripts.pory"
	message Route8_House_Tutor_Text_4
# 33 "data//maps/Route8_House/scripts.pory"
	waitmessage
# 34 "data//maps/Route8_House/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route8_House_Tutor_Text_5, Route8_House_Tutor_Text_6, Route8_House_Tutor_Text_7
# 37 "data//maps/Route8_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route8_House_Tutor_8
Route8_House_Tutor_7:
# 41 "data//maps/Route8_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route8_House_Tutor_11
Route8_House_Tutor_10:
# 46 "data//maps/Route8_House/scripts.pory"
	msgbox Route8_House_Tutor_Text_2, MSGBOX_NPC
# 47 "data//maps/Route8_House/scripts.pory"
	releaseall
	end

Route8_House_Tutor_2:
# 19 "data//maps/Route8_House/scripts.pory"
	msgbox Route8_House_Tutor_Text_2, MSGBOX_NPC
# 20 "data//maps/Route8_House/scripts.pory"
	releaseall
	end

Route8_House_Tutor_5:
# 27 "data//maps/Route8_House/scripts.pory"
	msgbox Route8_House_Tutor_Text_3, MSGBOX_NPC
# 28 "data//maps/Route8_House/scripts.pory"
	releaseall
	end

Route8_House_Tutor_8:
# 38 "data//maps/Route8_House/scripts.pory"
	setvar VAR_0x8005, MOVE_TAILWIND
# 39 "data//maps/Route8_House/scripts.pory"
	goto Route8_Tutor_TeachMoveShard
	goto Route8_House_Tutor_7

Route8_House_Tutor_11:
# 42 "data//maps/Route8_House/scripts.pory"
	setvar VAR_0x8005, MOVE_TRICK_ROOM
# 43 "data//maps/Route8_House/scripts.pory"
	goto Route8_Tutor_TeachMoveShard
	goto Route8_House_Tutor_10


Route8_Tutor_TeachMoveShard::
# 52 "data//maps/Route8_House/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 54 "data//maps/Route8_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route8_Tutor_TeachMoveShard_2
# 57 "data//maps/Route8_House/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 58 "data//maps/Route8_House/scripts.pory"
	msgbox Route8_Tutor_TeachMoveShard_Text_0, MSGBOX_NPC
Route8_Tutor_TeachMoveShard_1:
# 61 "data//maps/Route8_House/scripts.pory"
	releaseall
	end

Route8_Tutor_TeachMoveShard_2:
# 55 "data//maps/Route8_House/scripts.pory"
	msgbox Route8_House_Tutor_Text_2, MSGBOX_NPC
	goto Route8_Tutor_TeachMoveShard_1


Route8_House_Unfezant_Text_0:
# 5 "data//maps/Route8_House/scripts.pory"
	.string "Unfezant regards you with wise eyes.$"

Route8_House_Oranguru_Text_0:
# 10 "data//maps/Route8_House/scripts.pory"
	.string "Oranguru carefully measures you.$"

Route8_House_Tutor_Text_0:
# 15 "data//maps/Route8_House/scripts.pory"
	.string "Rare to see a trainer around these\n"
	.string "parts. Most just come for a swim.\p"
	.string "I was never much for brute strength in\n"
	.string "battle. My Unfezant and Oranguru won\l"
	.string "battles with wit and strategy!$"

Route8_House_Tutor_Text_1:
# 16 "data//maps/Route8_House/scripts.pory"
	.string "In exchange for one Yellow Shard,\n"
	.string "should I teach a skilful move?$"

Route8_House_Tutor_Text_2:
# 19 "data//maps/Route8_House/scripts.pory"
	.string "The three of us will be here.$"

Route8_House_Tutor_Text_3:
# 27 "data//maps/Route8_House/scripts.pory"
	.string "You don't have a Yellow Shard.\n"
	.string "Come again when you have one!$"

Route8_House_Tutor_Text_4:
# 32 "data//maps/Route8_House/scripts.pory"
	.string "Which move should I teach?$"

Route8_House_Tutor_Text_5:
# 35 "data//maps/Route8_House/scripts.pory"
	.string "Tailwind$"

Route8_House_Tutor_Text_6:
# 35 "data//maps/Route8_House/scripts.pory"
	.string "Trick Room$"

Route8_House_Tutor_Text_7:
# 35 "data//maps/Route8_House/scripts.pory"
	.string "Cancel$"

Route8_Tutor_TeachMoveShard_Text_0:
# 58 "data//maps/Route8_House/scripts.pory"
	.string "Control the battlefield, trainer!\n"
	.string "And you will control the outcome.$"
