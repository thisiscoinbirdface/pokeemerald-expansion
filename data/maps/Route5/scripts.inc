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
# 48 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_Main_Text_0
# 49 "data//maps/Route5/scripts.pory"
	release
# 50 "data//maps/Route5/scripts.pory"
	delay 16
# 52 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return


Route5_Greta_AskToShow::
# 56 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_0, MSGBOX_YESNO
# 57 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_AskToShow_2
Route5_Greta_AskToShow_1:
# 59 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_AskToShow_Text_1
# 60 "data//maps/Route5/scripts.pory"
	release
# 62 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_GottaGo
	return

Route5_Greta_AskToShow_2:
# 57 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	goto Route5_Greta_AskToShow_1


Route5_Greta_ShowItemsForSale::
# 66 "data//maps/Route5/scripts.pory"
	showmoneybox 18, 0
# 67 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_ShowItemsForSale_Text_0
# 69 "data//maps/Route5/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route5_Greta_ShowItemsForSale_Text_1, Route5_Greta_ShowItemsForSale_Text_2, Route5_Greta_ShowItemsForSale_Text_3
# 71 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_ShowItemsForSale_2
Route5_Greta_ShowItemsForSale_1:
# 75 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_ShowItemsForSale_5
Route5_Greta_ShowItemsForSale_4:
# 79 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route5_Greta_ShowItemsForSale_8
Route5_Greta_ShowItemsForSale_7:
# 84 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_AskToShow
	return

Route5_Greta_ShowItemsForSale_2:
# 72 "data//maps/Route5/scripts.pory"
	hidemoneybox
# 73 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_StrangeEgg
	goto Route5_Greta_ShowItemsForSale_1

Route5_Greta_ShowItemsForSale_5:
# 76 "data//maps/Route5/scripts.pory"
	hidemoneybox
# 77 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_MysteriousRock
	goto Route5_Greta_ShowItemsForSale_4

Route5_Greta_ShowItemsForSale_8:
# 80 "data//maps/Route5/scripts.pory"
	hidemoneybox
# 81 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_UglyFish
	goto Route5_Greta_ShowItemsForSale_7


Route5_Greta_StrangeEgg::
# 89 "data//maps/Route5/scripts.pory"
	checkmoney 10000
# 90 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_StrangeEgg_1
# 95 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_1, MSGBOX_YESNO
# 96 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_StrangeEgg_4
# 104 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_1:
# 91 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 92 "data//maps/Route5/scripts.pory"
	release
# 93 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_StrangeEgg_4:
# 97 "data//maps/Route5/scripts.pory"
	removemoney 10000
# 98 "data//maps/Route5/scripts.pory"
	giveegg SPECIES_HONEDGE
# 99 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_2, MSGBOX_SIGN
# 100 "data//maps/Route5/scripts.pory"
	release
# 101 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 102 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_UglyFish::
# 110 "data//maps/Route5/scripts.pory"
	checkmoney 100
# 111 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_UglyFish_1
# 116 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_0, MSGBOX_YESNO
# 117 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_UglyFish_4
# 125 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_1:
# 112 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 113 "data//maps/Route5/scripts.pory"
	release
# 114 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_UglyFish_4:
# 118 "data//maps/Route5/scripts.pory"
	removemoney 100
# 119 "data//maps/Route5/scripts.pory"
	givemon SPECIES_FEEBAS, 5
# 120 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_UglyFish_Text_1, MSGBOX_SIGN
# 121 "data//maps/Route5/scripts.pory"
	release
# 122 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 123 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_MysteriousRock::
# 131 "data//maps/Route5/scripts.pory"
	checkmoney 100
# 132 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route5_Greta_MysteriousRock_1
# 137 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_MysteriousRock_Text_0, MSGBOX_YESNO
# 138 "data//maps/Route5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route5_Greta_MysteriousRock_4
# 144 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_1:
# 133 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_0
# 134 "data//maps/Route5/scripts.pory"
	release
# 135 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return

Route5_Greta_MysteriousRock_4:
# 139 "data//maps/Route5/scripts.pory"
	removemoney 100
# 140 "data//maps/Route5/scripts.pory"
	giveitem ITEM_EVERSTONE
# 141 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_StrangeEgg_Text_3
# 142 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_GottaGo
	return


Route5_Greta_GottaGo::
# 152 "data//maps/Route5/scripts.pory"
	release
# 153 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_0
# 154 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 155 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_GottaGo_Text_0
# 156 "data//maps/Route5/scripts.pory"
	release
# 157 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_1
# 158 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 159 "data//maps/Route5/scripts.pory"
	removeobject 7
# 160 "data//maps/Route5/scripts.pory"
	setflag FLAG_GRETA_ROUTE5
# 161 "data//maps/Route5/scripts.pory"
	fadedefaultbgm
# 163 "data//maps/Route5/scripts.pory"
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

# 153 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_0:
# 153 "data//maps/Route5/scripts.pory"
	emote_exclamation_mark
	step_end

# 157 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_1:
# 157 "data//maps/Route5/scripts.pory"
	walk_left
# 157 "data//maps/Route5/scripts.pory"
	walk_left
# 157 "data//maps/Route5/scripts.pory"
	walk_left
# 157 "data//maps/Route5/scripts.pory"
	walk_left
# 157 "data//maps/Route5/scripts.pory"
	walk_left
# 157 "data//maps/Route5/scripts.pory"
	walk_left
# 157 "data//maps/Route5/scripts.pory"
	walk_left
# 157 "data//maps/Route5/scripts.pory"
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
# 48 "data//maps/Route5/scripts.pory"
	.string "GRETA: It's you! The wandering saviour\n"
	.string "from MT CERAM. How wonderful! A new\l"
	.string "customer. Come, come. I've got some\l"
	.string "really great stuff from...well, you can't\l"
	.string "ask a magician to reveal her secrets,\l"
	.string "can you?$"

Route5_Greta_AskToShow_Text_0:
# 56 "data//maps/Route5/scripts.pory"
	.string "Wanna buy anything?$"

Route5_Greta_AskToShow_Text_1:
# 59 "data//maps/Route5/scripts.pory"
	.string "Bummer!$"

Route5_Greta_ShowItemsForSale_Text_0:
# 67 "data//maps/Route5/scripts.pory"
	.string "The egg is 10,000. The rock is 5,000. The\n"
	.string "fish is only 100!$"

Route5_Greta_ShowItemsForSale_Text_1:
# 69 "data//maps/Route5/scripts.pory"
	.string "Strange Egg$"

Route5_Greta_ShowItemsForSale_Text_2:
# 69 "data//maps/Route5/scripts.pory"
	.string "Mysterious Rock$"

Route5_Greta_ShowItemsForSale_Text_3:
# 69 "data//maps/Route5/scripts.pory"
	.string "Ugly Fish$"

Route5_Greta_StrangeEgg_Text_0:
# 91 "data//maps/Route5/scripts.pory"
	.string "Hey! You can't afford this!$"

Route5_Greta_StrangeEgg_Text_1:
# 95 "data//maps/Route5/scripts.pory"
	.string "A discerning choice! You sure?$"

Route5_Greta_StrangeEgg_Text_2:
# 99 "data//maps/Route5/scripts.pory"
	.string "{PLAYER} received a Strange Egg from\n"
	.string "GRETA.$"

Route5_Greta_StrangeEgg_Text_3:
# 101 "data//maps/Route5/scripts.pory"
	.string "GRETA: Good doing business with you!\n"
	.string "Now, what about -$"

Route5_Greta_UglyFish_Text_0:
# 116 "data//maps/Route5/scripts.pory"
	.string "A...budget-friendly choice! You sure?$"

Route5_Greta_UglyFish_Text_1:
# 120 "data//maps/Route5/scripts.pory"
	.string "{PLAYER} received a FEEBAS from\n"
	.string "GRETA.$"

Route5_Greta_MysteriousRock_Text_0:
# 137 "data//maps/Route5/scripts.pory"
	.string "A reasonable choice! You sure?$"

Route5_Greta_GottaGo_Text_0:
# 155 "data//maps/Route5/scripts.pory"
	.string "GRETA: Would you look at the time! I've\n"
	.string "gotta run. See you around!$"
