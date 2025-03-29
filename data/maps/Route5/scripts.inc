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
	lockall
# 29 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger0_Movement_0
# 30 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 32 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger0_2:
	end


Route5_Greta_Trigger1::
# 36 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_GRETA_ROUTE5, Route5_Greta_Trigger1_2
# 38 "data//maps/Route5/scripts.pory"
	lockall
# 39 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger1_Movement_0
# 40 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 42 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger1_2:
	end


Route5_Greta_Main::
# 46 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_Main_Text_0
# 47 "data//maps/Route5/scripts.pory"
	release
# 48 "data//maps/Route5/scripts.pory"
	delay 16
# 50 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return


Route5_Greta_AskToShow::
# 54 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_0, MSGBOX_YESNO
# 55 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_AskToShow_2
Route5_Greta_AskToShow_1:
# 57 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1
# 58 "data//maps/Route5/scripts.pory"
	release
# 60 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_GottaGo
	return

Route5_Greta_AskToShow_2:
# 55 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	goto Route5_Greta_AskToShow_1


Route5_Greta_ShowItemsForSale::
# 64 "data//maps/Route5/scripts.pory"
	showmoneybox 18, 0
# 65 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_ShowItemsForSale_Text_0
# 67 "data//maps/Route5/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route5_Greta_ShowItemsForSale_Text_1, Route5_Greta_ShowItemsForSale_Text_2, Route5_Greta_ShowItemsForSale_Text_3
# 69 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_ShowItemsForSale_2
Route5_Greta_ShowItemsForSale_1:
# 73 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_ShowItemsForSale_5
Route5_Greta_ShowItemsForSale_4:
# 77 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route5_Greta_ShowItemsForSale_8
Route5_Greta_ShowItemsForSale_7:
# 82 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_AskToShow
	return

Route5_Greta_ShowItemsForSale_2:
# 70 "data//maps/Route5/scripts.pory"
	hidemoneybox
# 71 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_StrangeEgg
	goto Route5_Greta_ShowItemsForSale_1

Route5_Greta_ShowItemsForSale_5:
# 74 "data//maps/Route5/scripts.pory"
	hidemoneybox
# 75 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_StrangeEgg
	goto Route5_Greta_ShowItemsForSale_4

Route5_Greta_ShowItemsForSale_8:
# 78 "data//maps/Route5/scripts.pory"
	hidemoneybox
# 79 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_StrangeEgg
	goto Route5_Greta_ShowItemsForSale_7


Route5_Greta_StrangeEgg::
# 87 "data//maps/Route5/scripts.pory"
	checkmoney 10000
# 88 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_StrangeEgg_1
# 93 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_1, MSGBOX_YESNO
# 94 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_StrangeEgg_4
# 102 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_1:
# 89 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 90 "data//maps/Route5/scripts.pory"
	release
# 91 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_4:
# 95 "data//maps/Route5/scripts.pory"
	removemoney 10000
# 96 "data//maps/Route5/scripts.pory"
	giveegg SPECIES_HONEDGE
# 97 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_2, MSGBOX_SIGN
# 98 "data//maps/Route5/scripts.pory"
	release
# 99 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 100 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_UglyFish::
# 108 "data//maps/Route5/scripts.pory"
	checkmoney 100
# 109 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_UglyFish_1
# 114 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_0, MSGBOX_YESNO
# 115 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_UglyFish_4
# 123 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_1:
# 110 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 111 "data//maps/Route5/scripts.pory"
	release
# 112 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_4:
# 116 "data//maps/Route5/scripts.pory"
	removemoney 100
# 117 "data//maps/Route5/scripts.pory"
	givemon SPECIES_FEEBAS
# 118 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_1, MSGBOX_SIGN
# 119 "data//maps/Route5/scripts.pory"
	release
# 120 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 121 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_MysteriousRock::
# 129 "data//maps/Route5/scripts.pory"
	checkmoney 100
# 130 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_MysteriousRock_1
# 135 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_MysteriousRock_Text_0, MSGBOX_YESNO
# 136 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_MysteriousRock_4
# 142 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_1:
# 131 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 132 "data//maps/Route5/scripts.pory"
	release
# 133 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_4:
# 137 "data//maps/Route5/scripts.pory"
	removemoney 100
# 138 "data//maps/Route5/scripts.pory"
	giveitem ITEM_EVERSTONE
# 139 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 140 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_GottaGo::
# 150 "data//maps/Route5/scripts.pory"
	release
# 151 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_0
# 152 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 153 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_GottaGo_Text_0
# 154 "data//maps/Route5/scripts.pory"
	release
# 155 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_1
# 156 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 157 "data//maps/Route5/scripts.pory"
	removeobject 7
# 158 "data//maps/Route5/scripts.pory"
	setflag FLAG_GRETA_ROUTE5
# 160 "data//maps/Route5/scripts.pory"
	releaseall
	end


# 29 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger0_Movement_0:
# 29 "data//maps/Route5/scripts.pory"
	walk_right
# 29 "data//maps/Route5/scripts.pory"
	walk_right
# 29 "data//maps/Route5/scripts.pory"
	walk_right
# 29 "data//maps/Route5/scripts.pory"
	walk_right
# 29 "data//maps/Route5/scripts.pory"
	walk_right
# 29 "data//maps/Route5/scripts.pory"
	walk_right
# 29 "data//maps/Route5/scripts.pory"
	walk_right
# 29 "data//maps/Route5/scripts.pory"
	walk_up
# 29 "data//maps/Route5/scripts.pory"
	face_right
	step_end

# 39 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger1_Movement_0:
# 39 "data//maps/Route5/scripts.pory"
	walk_right
# 39 "data//maps/Route5/scripts.pory"
	walk_right
# 39 "data//maps/Route5/scripts.pory"
	walk_right
# 39 "data//maps/Route5/scripts.pory"
	walk_right
# 39 "data//maps/Route5/scripts.pory"
	walk_right
# 39 "data//maps/Route5/scripts.pory"
	walk_right
# 39 "data//maps/Route5/scripts.pory"
	walk_right
	step_end

# 151 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_0:
# 151 "data//maps/Route5/scripts.pory"
	emote_exclamation_mark
	step_end

# 155 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_1:
# 155 "data//maps/Route5/scripts.pory"
	walk_left
# 155 "data//maps/Route5/scripts.pory"
	walk_left
# 155 "data//maps/Route5/scripts.pory"
	walk_left
# 155 "data//maps/Route5/scripts.pory"
	walk_left
# 155 "data//maps/Route5/scripts.pory"
	walk_left
# 155 "data//maps/Route5/scripts.pory"
	walk_left
# 155 "data//maps/Route5/scripts.pory"
	walk_left
# 155 "data//maps/Route5/scripts.pory"
	walk_left
	step_end

Route5_NPC_A_Text_0:
# 6 "data//maps/Route5/scripts.pory"
	.string "My head is spinning because of the fog\n"
	.string "in VILETHORN WOODS! I need to go home\l"
	.string "and rest.$"

Route5_NPC_B_Text_0:
# 14 "data//maps/Route5/scripts.pory"
	.string "I saw a rough-looking fellow and a\n"
	.string "Professor run past me right now! What's\l"
	.string "going on?$"

Route5_Greta_Main_Text_0:
# 46 "data//maps/Route5/scripts.pory"
	.string "GRETA: It's you! The wandering saviour\n"
	.string "from MT CERAM. How wonderful! A new\l"
	.string "customer. Come, come. I've got some\l"
	.string "really great stuff from...well, you can't\l"
	.string "ask a magician to reveal her secrets,\l"
	.string "can you?$"

Route5_Greta_AskToShow_Text_0:
# 54 "data//maps/Route5/scripts.pory"
	.string "Wanna buy anything?$"

Route5_Greta_AskToShow_Text_1:
# 57 "data//maps/Route5/scripts.pory"
	.string "Bummer!$"

Route5_Greta_ShowItemsForSale_Text_0:
# 65 "data//maps/Route5/scripts.pory"
	.string "The egg is 10,000. The rock is 5,000. The\n"
	.string "fish is only 100!$"

Route5_Greta_ShowItemsForSale_Text_1:
# 67 "data//maps/Route5/scripts.pory"
	.string "Strange Egg$"

Route5_Greta_ShowItemsForSale_Text_2:
# 67 "data//maps/Route5/scripts.pory"
	.string "Mysterious Rock$"

Route5_Greta_ShowItemsForSale_Text_3:
# 67 "data//maps/Route5/scripts.pory"
	.string "Ugly Fish$"

Route5_Greta_StrangeEgg_Text_0:
# 89 "data//maps/Route5/scripts.pory"
	.string "Hey! You can't afford this!$"

Route5_Greta_StrangeEgg_Text_1:
# 93 "data//maps/Route5/scripts.pory"
	.string "A discerning choice! You sure?$"

Route5_Greta_StrangeEgg_Text_2:
# 97 "data//maps/Route5/scripts.pory"
	.string "{PLAYER} received a Strange Egg from\n"
	.string "GRETA.$"

Route5_Greta_StrangeEgg_Text_3:
# 99 "data//maps/Route5/scripts.pory"
	.string "GRETA: Good doing business with you!\n"
	.string "Now, what about -$"

Route5_Greta_UglyFish_Text_0:
# 114 "data//maps/Route5/scripts.pory"
	.string "A...budget-friendly choice! You sure?$"

Route5_Greta_UglyFish_Text_1:
# 118 "data//maps/Route5/scripts.pory"
	.string "{PLAYER} received a FEEBAS from\n"
	.string "GRETA.$"

Route5_Greta_MysteriousRock_Text_0:
# 135 "data//maps/Route5/scripts.pory"
	.string "A reasonable choice! You sure?$"

Route5_Greta_GottaGo_Text_0:
# 153 "data//maps/Route5/scripts.pory"
	.string "GRETA: Would you look at the time! I've\n"
	.string "gotta run. See you around!$"
