Route5_MapScripts::
	.byte 0


Route5_NPC_A::
# 4 "data//maps/Route5/scripts.pory"
	lockall
# 5 "data//maps/Route5/scripts.pory"
	faceplayer
# 6 "data//maps/Route5/scripts.pory"
	msgbox Route5_NPC_A_Text_0
# 7 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_NPC_B::
# 12 "data//maps/Route5/scripts.pory"
	lockall
# 13 "data//maps/Route5/scripts.pory"
	faceplayer
# 14 "data//maps/Route5/scripts.pory"
	msgbox Route5_NPC_B_Text_0
# 15 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_NPC_C::
# 20 "data//maps/Route5/scripts.pory"
	lockall
# 21 "data//maps/Route5/scripts.pory"
	faceplayer
# 22 "data//maps/Route5/scripts.pory"
	msgbox Route5_NPC_C_Text_0
# 23 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_Berger::
# 32 "data//maps/Route5/scripts.pory"
	lockall
# 33 "data//maps/Route5/scripts.pory"
	speakername Route5_Berger_Text_0
# 34 "data//maps/Route5/scripts.pory"
	msgbox Route5_Berger_Text_1
# 35 "data//maps/Route5/scripts.pory"
	faceplayer
# 36 "data//maps/Route5/scripts.pory"
	speakername Route5_Berger_Text_0
# 37 "data//maps/Route5/scripts.pory"
	msgbox Route5_Berger_Text_2
# 38 "data//maps/Route5/scripts.pory"
	release
# 39 "data//maps/Route5/scripts.pory"
	applymovement 16, Route5_Berger_Movement_0
# 40 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 41 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_Bergmite::
# 46 "data//maps/Route5/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 47 "data//maps/Route5/scripts.pory"
	waitmoncry
# 48 "data//maps/Route5/scripts.pory"
	msgbox Route5_Bergmite_Text_0, MSGBOX_NPC
	end


Route5_Greta_Trigger0::
# 56 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_GRETA_ROUTE5, Route5_Greta_Trigger0_2
# 58 "data//maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 59 "data//maps/Route5/scripts.pory"
	lockall
# 60 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger0_Movement_0
# 61 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 63 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger0_2:
	end


Route5_Greta_Trigger1::
# 67 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_GRETA_ROUTE5, Route5_Greta_Trigger1_2
# 69 "data//maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 70 "data//maps/Route5/scripts.pory"
	lockall
# 71 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger1_Movement_0
# 72 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 74 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger1_2:
	end


Route5_Greta_Main::
# 79 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 80 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_Main_Text_1
# 81 "data//maps/Route5/scripts.pory"
	release
# 82 "data//maps/Route5/scripts.pory"
	delay 20
# 83 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 84 "data//maps/Route5/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 85 "data//maps/Route5/scripts.pory"
	release
# 86 "data//maps/Route5/scripts.pory"
	delay 20
# 88 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return


Route5_Greta_GottaGo::
# 94 "data//maps/Route5/scripts.pory"
	release
# 95 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_0
# 96 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 97 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 98 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_GottaGo_Text_0
# 99 "data//maps/Route5/scripts.pory"
	release
# 100 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_1
# 101 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 102 "data//maps/Route5/scripts.pory"
	removeobject 7
# 103 "data//maps/Route5/scripts.pory"
	setflag FLAG_GRETA_ROUTE5
# 104 "data//maps/Route5/scripts.pory"
	fadedefaultbgm
# 106 "data//maps/Route5/scripts.pory"
	releaseall
	end


# 39 "data//maps/Route5/scripts.pory"
Route5_Berger_Movement_0:
# 39 "data//maps/Route5/scripts.pory"
	face_down
	step_end

# 60 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger0_Movement_0:
# 60 "data//maps/Route5/scripts.pory"
	walk_right
# 60 "data//maps/Route5/scripts.pory"
	walk_right
# 60 "data//maps/Route5/scripts.pory"
	walk_right
# 60 "data//maps/Route5/scripts.pory"
	walk_right
# 60 "data//maps/Route5/scripts.pory"
	walk_right
# 60 "data//maps/Route5/scripts.pory"
	walk_right
# 60 "data//maps/Route5/scripts.pory"
	walk_right
# 60 "data//maps/Route5/scripts.pory"
	walk_up
# 60 "data//maps/Route5/scripts.pory"
	face_right
	step_end

# 71 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger1_Movement_0:
# 71 "data//maps/Route5/scripts.pory"
	walk_right
# 71 "data//maps/Route5/scripts.pory"
	walk_right
# 71 "data//maps/Route5/scripts.pory"
	walk_right
# 71 "data//maps/Route5/scripts.pory"
	walk_right
# 71 "data//maps/Route5/scripts.pory"
	walk_right
# 71 "data//maps/Route5/scripts.pory"
	walk_right
# 71 "data//maps/Route5/scripts.pory"
	walk_right
	step_end

# 95 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_0:
# 95 "data//maps/Route5/scripts.pory"
	emote_exclamation_mark
	step_end

# 100 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_1:
# 100 "data//maps/Route5/scripts.pory"
	walk_left
# 100 "data//maps/Route5/scripts.pory"
	walk_left
# 100 "data//maps/Route5/scripts.pory"
	walk_left
# 100 "data//maps/Route5/scripts.pory"
	walk_left
# 100 "data//maps/Route5/scripts.pory"
	walk_left
# 100 "data//maps/Route5/scripts.pory"
	walk_left
# 100 "data//maps/Route5/scripts.pory"
	walk_left
# 100 "data//maps/Route5/scripts.pory"
	walk_left
	step_end

Route5_NPC_A_Text_0:
# 6 "data//maps/Route5/scripts.pory"
	.string "My head is spinning because of the fog\n"
	.string "in Vilethorn Woods! I need some rest.$"

Route5_NPC_B_Text_0:
# 14 "data//maps/Route5/scripts.pory"
	.string "I saw a rough-looking fellow in a dark\n"
	.string "outfit run past me. What's going on?$"

Route5_NPC_C_Text_0:
# 22 "data//maps/Route5/scripts.pory"
	.string "I wish they'd clear those boulders in\n"
	.string "Vilethorn Woods! It's blocking the\l"
	.string "path back to Galecrest City.$"

Route5_Berger_Text_0:
# 33 "data//maps/Route5/scripts.pory"
	.string "Berger$"

Route5_Berger_Text_1:
# 34 "data//maps/Route5/scripts.pory"
	.string "C'mon Bergmite! What's the matter?\n"
	.string "Don't be so scared of Vilethorn Woods!$"

Route5_Berger_Text_2:
# 37 "data//maps/Route5/scripts.pory"
	.string "We're trying to reach Silversun City\n"
	.string "but Bergmite's being a scaredy-cat!$"

Route5_Bergmite_Text_0:
# 48 "data//maps/Route5/scripts.pory"
	.string "Bergmite is shivering!$"

Route5_Greta_Main_Text_0:
# 79 "data//maps/Route5/scripts.pory"
	.string "Greta$"

Route5_Greta_Main_Text_1:
# 80 "data//maps/Route5/scripts.pory"
	.string "It's you! The wandering saviour from Mt.\n"
	.string "Ceram. How wonderful! A new customer.$"

Route5_Greta_GottaGo_Text_0:
# 98 "data//maps/Route5/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "go places. See you around, {PLAYER}!$"
