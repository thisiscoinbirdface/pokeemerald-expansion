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
	msgbox Route5_Greta_Main_Text_0
# 50 "data//maps/Route5/scripts.pory"
	release
# 51 "data//maps/Route5/scripts.pory"
	delay 20
# 52 "data//maps/Route5/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 53 "data//maps/Route5/scripts.pory"
	release
# 54 "data//maps/Route5/scripts.pory"
	delay 20
# 56 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return


Route5_Greta_GottaGo::
# 62 "data//maps/Route5/scripts.pory"
	release
# 63 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_0
# 64 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 65 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_GottaGo_Text_0
# 66 "data//maps/Route5/scripts.pory"
	release
# 67 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_1
# 68 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 69 "data//maps/Route5/scripts.pory"
	removeobject 7
# 70 "data//maps/Route5/scripts.pory"
	setflag FLAG_GRETA_ROUTE5
# 71 "data//maps/Route5/scripts.pory"
	fadedefaultbgm
# 73 "data//maps/Route5/scripts.pory"
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

# 63 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_0:
# 63 "data//maps/Route5/scripts.pory"
	emote_exclamation_mark
	step_end

# 67 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_1:
# 67 "data//maps/Route5/scripts.pory"
	walk_left
# 67 "data//maps/Route5/scripts.pory"
	walk_left
# 67 "data//maps/Route5/scripts.pory"
	walk_left
# 67 "data//maps/Route5/scripts.pory"
	walk_left
# 67 "data//maps/Route5/scripts.pory"
	walk_left
# 67 "data//maps/Route5/scripts.pory"
	walk_left
# 67 "data//maps/Route5/scripts.pory"
	walk_left
# 67 "data//maps/Route5/scripts.pory"
	walk_left
	step_end

Route5_NPC_A_Text_0:
# 6 "data//maps/Route5/scripts.pory"
	.string "My head is spinning because of the fog\n"
	.string "in Vilethorn Woods! I need to go home\l"
	.string "and rest.$"

Route5_NPC_B_Text_0:
# 14 "data//maps/Route5/scripts.pory"
	.string "I saw a rough-looking fellow and a\n"
	.string "Professor run past me right now! What's\l"
	.string "going on?$"

Route5_Greta_Main_Text_0:
# 49 "data//maps/Route5/scripts.pory"
	.string "GRETA: It's you! The wandering saviour\n"
	.string "from Mt. Ceram. How wonderful! A new\l"
	.string "customer.$"

Route5_Greta_GottaGo_Text_0:
# 65 "data//maps/Route5/scripts.pory"
	.string "GRETA: Would you look at the time! I've\n"
	.string "gotta run. See you around!$"
