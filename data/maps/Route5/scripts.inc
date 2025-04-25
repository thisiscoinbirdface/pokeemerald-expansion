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


Route5_Greta_Trigger0::
# 26 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_GRETA_ROUTE5, Route5_Greta_Trigger0_2
# 28 "data//maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 29 "data//maps/Route5/scripts.pory"
	lockall
# 30 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger0_Movement_0
# 31 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 33 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger0_2:
	end


Route5_Greta_Trigger1::
# 37 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_GRETA_ROUTE5, Route5_Greta_Trigger1_2
# 39 "data//maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 40 "data//maps/Route5/scripts.pory"
	lockall
# 41 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger1_Movement_0
# 42 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 44 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger1_2:
	end


Route5_Greta_Main::
# 49 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 50 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_Main_Text_1
# 51 "data//maps/Route5/scripts.pory"
	release
# 52 "data//maps/Route5/scripts.pory"
	delay 20
# 53 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 54 "data//maps/Route5/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 55 "data//maps/Route5/scripts.pory"
	release
# 56 "data//maps/Route5/scripts.pory"
	delay 20
# 58 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return


Route5_Greta_GottaGo::
# 64 "data//maps/Route5/scripts.pory"
	release
# 65 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_0
# 66 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 67 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 68 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_GottaGo_Text_0
# 69 "data//maps/Route5/scripts.pory"
	release
# 70 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_1
# 71 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 72 "data//maps/Route5/scripts.pory"
	removeobject 7
# 73 "data//maps/Route5/scripts.pory"
	setflag FLAG_GRETA_ROUTE5
# 74 "data//maps/Route5/scripts.pory"
	fadedefaultbgm
# 76 "data//maps/Route5/scripts.pory"
	releaseall
	end


# 30 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger0_Movement_0:
# 30 "data//maps/Route5/scripts.pory"
	walk_right
# 30 "data//maps/Route5/scripts.pory"
	walk_right
# 30 "data//maps/Route5/scripts.pory"
	walk_right
# 30 "data//maps/Route5/scripts.pory"
	walk_right
# 30 "data//maps/Route5/scripts.pory"
	walk_right
# 30 "data//maps/Route5/scripts.pory"
	walk_right
# 30 "data//maps/Route5/scripts.pory"
	walk_right
# 30 "data//maps/Route5/scripts.pory"
	walk_up
# 30 "data//maps/Route5/scripts.pory"
	face_right
	step_end

# 41 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger1_Movement_0:
# 41 "data//maps/Route5/scripts.pory"
	walk_right
# 41 "data//maps/Route5/scripts.pory"
	walk_right
# 41 "data//maps/Route5/scripts.pory"
	walk_right
# 41 "data//maps/Route5/scripts.pory"
	walk_right
# 41 "data//maps/Route5/scripts.pory"
	walk_right
# 41 "data//maps/Route5/scripts.pory"
	walk_right
# 41 "data//maps/Route5/scripts.pory"
	walk_right
	step_end

# 65 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_0:
# 65 "data//maps/Route5/scripts.pory"
	emote_exclamation_mark
	step_end

# 70 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_1:
# 70 "data//maps/Route5/scripts.pory"
	walk_left
# 70 "data//maps/Route5/scripts.pory"
	walk_left
# 70 "data//maps/Route5/scripts.pory"
	walk_left
# 70 "data//maps/Route5/scripts.pory"
	walk_left
# 70 "data//maps/Route5/scripts.pory"
	walk_left
# 70 "data//maps/Route5/scripts.pory"
	walk_left
# 70 "data//maps/Route5/scripts.pory"
	walk_left
# 70 "data//maps/Route5/scripts.pory"
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

Route5_Greta_Main_Text_0:
# 49 "data//maps/Route5/scripts.pory"
	.string "Greta$"

Route5_Greta_Main_Text_1:
# 50 "data//maps/Route5/scripts.pory"
	.string "It's you! The wandering saviour from Mt.\n"
	.string "Ceram. How wonderful! A new customer.$"

Route5_Greta_GottaGo_Text_0:
# 68 "data//maps/Route5/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "run. See you around!$"
