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


Route5_Greta_Trigger0::
# 33 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_GRETA_ROUTE5, Route5_Greta_Trigger0_2
# 35 "data//maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 36 "data//maps/Route5/scripts.pory"
	lockall
# 37 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger0_Movement_0
# 38 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 40 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger0_2:
	end


Route5_Greta_Trigger1::
# 44 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_GRETA_ROUTE5, Route5_Greta_Trigger1_2
# 46 "data//maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 47 "data//maps/Route5/scripts.pory"
	lockall
# 48 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger1_Movement_0
# 49 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 51 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger1_2:
	end


Route5_Greta_Main::
# 56 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 57 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_Main_Text_1
# 58 "data//maps/Route5/scripts.pory"
	release
# 59 "data//maps/Route5/scripts.pory"
	delay 20
# 60 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 61 "data//maps/Route5/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 62 "data//maps/Route5/scripts.pory"
	release
# 63 "data//maps/Route5/scripts.pory"
	delay 20
# 65 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return


Route5_Greta_GottaGo::
# 71 "data//maps/Route5/scripts.pory"
	release
# 72 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_0
# 73 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 74 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 75 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_GottaGo_Text_0
# 76 "data//maps/Route5/scripts.pory"
	release
# 77 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_1
# 78 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 79 "data//maps/Route5/scripts.pory"
	removeobject 7
# 80 "data//maps/Route5/scripts.pory"
	setflag FLAG_GRETA_ROUTE5
# 81 "data//maps/Route5/scripts.pory"
	fadedefaultbgm
# 83 "data//maps/Route5/scripts.pory"
	releaseall
	end


# 37 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger0_Movement_0:
# 37 "data//maps/Route5/scripts.pory"
	walk_right
# 37 "data//maps/Route5/scripts.pory"
	walk_right
# 37 "data//maps/Route5/scripts.pory"
	walk_right
# 37 "data//maps/Route5/scripts.pory"
	walk_right
# 37 "data//maps/Route5/scripts.pory"
	walk_right
# 37 "data//maps/Route5/scripts.pory"
	walk_right
# 37 "data//maps/Route5/scripts.pory"
	walk_right
# 37 "data//maps/Route5/scripts.pory"
	walk_up
# 37 "data//maps/Route5/scripts.pory"
	face_right
	step_end

# 48 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger1_Movement_0:
# 48 "data//maps/Route5/scripts.pory"
	walk_right
# 48 "data//maps/Route5/scripts.pory"
	walk_right
# 48 "data//maps/Route5/scripts.pory"
	walk_right
# 48 "data//maps/Route5/scripts.pory"
	walk_right
# 48 "data//maps/Route5/scripts.pory"
	walk_right
# 48 "data//maps/Route5/scripts.pory"
	walk_right
# 48 "data//maps/Route5/scripts.pory"
	walk_right
	step_end

# 72 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_0:
# 72 "data//maps/Route5/scripts.pory"
	emote_exclamation_mark
	step_end

# 77 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_1:
# 77 "data//maps/Route5/scripts.pory"
	walk_left
# 77 "data//maps/Route5/scripts.pory"
	walk_left
# 77 "data//maps/Route5/scripts.pory"
	walk_left
# 77 "data//maps/Route5/scripts.pory"
	walk_left
# 77 "data//maps/Route5/scripts.pory"
	walk_left
# 77 "data//maps/Route5/scripts.pory"
	walk_left
# 77 "data//maps/Route5/scripts.pory"
	walk_left
# 77 "data//maps/Route5/scripts.pory"
	walk_left
	step_end

Route5_NPC_A_Text_0:
# 6 "data//maps/Route5/scripts.pory"
	.string "My head is spinning because of the fog\n"
	.string "in Vilethorn Woods! I need to go home\l"
	.string "and rest.$"

Route5_NPC_B_Text_0:
# 14 "data//maps/Route5/scripts.pory"
	.string "I saw a rough-looking fellow in a dark\n"
	.string "outfit run past me. What's going on?$"

Route5_NPC_C_Text_0:
# 22 "data//maps/Route5/scripts.pory"
	.string "I wish they'd clear those boulders in\n"
	.string "Vilethorn Woods! It's blocking the path\l"
	.string "back to Galecrest City.$"

Route5_Greta_Main_Text_0:
# 56 "data//maps/Route5/scripts.pory"
	.string "Greta$"

Route5_Greta_Main_Text_1:
# 57 "data//maps/Route5/scripts.pory"
	.string "It's you! The wandering saviour from Mt.\n"
	.string "Ceram. How wonderful! A new customer.$"

Route5_Greta_GottaGo_Text_0:
# 75 "data//maps/Route5/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "run. See you around!$"
