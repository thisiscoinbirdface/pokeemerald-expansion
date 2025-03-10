FennilahlTown_Pokemart_MapScripts::
# 2 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FennilahlTown_Pokemart_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FennilahlTown_Pokemart_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	map_script_2 VAR_FENNILAHL_MART_SUPPLIES, 0, FennilahlTown_Pokemart_EventScript_LabSupplies
	.2byte 0


FennilahlTown_Pokemart_EventScript_LabSupplies::
# 8 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	lockall
# 9 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	applymovement 1, FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_0
# 10 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmovement 0
# 11 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox FennilahlTown_Pokemart_EventScript_LabSupplies_Text_0
# 12 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	release
# 13 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_1
# 14 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmovement 0
# 15 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	applymovement 1, FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_2
# 16 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmovement 0
# 17 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox FennilahlTown_Pokemart_EventScript_LabSupplies_Text_1
# 18 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	release
# 19 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	applymovement 1, FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_3
# 20 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmovement 0
# 21 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox FennilahlTown_Pokemart_EventScript_LabSupplies_Text_2
# 22 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	release
# 23 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	applymovement 1, FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_4
# 24 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmovement 0
# 25 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox FennilahlTown_Pokemart_EventScript_LabSupplies_Text_3
# 26 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	applymovement 1, FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_2
# 27 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmovement 0
# 28 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox FennilahlTown_Pokemart_EventScript_LabSupplies_Text_4
# 29 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	releaseall
# 31 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	setvar VAR_FENNILAHL_MART_SUPPLIES, 1
	return


FennilahlTown_Pokemart_EventScript_Clerk::
# 37 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	lock
# 38 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	faceplayer
# 39 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	message gText_HowMayIServeYou
# 40 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmessage
# 41 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	pokemart FennilahlTown_Pokemart_Inventory
# 42 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 43 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	release
	end


	.align 2
# 47 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_Inventory:
# 48 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.2byte ITEM_POTION
# 49 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

# 9 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_0:
# 9 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	face_down
	step_end

# 13 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_1:
# 13 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_up
# 13 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_up
# 13 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_up
# 13 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_up
# 13 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	face_left
	step_end

# 15 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_2:
# 15 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	face_right
	step_end

# 19 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_3:
# 19 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_up
	step_end

# 23 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_4:
# 23 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_down
	step_end

FennilahlTown_Pokemart_EventScript_LabSupplies_Text_0:
# 11 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "Ah, are you from the Tenebris Lab? We've\n"
	.string "been waiting for a pickup. Come here.$"

FennilahlTown_Pokemart_EventScript_LabSupplies_Text_1:
# 17 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "We've been waiting for a pickup. Of\n"
	.string "course, I understand you must be busy,\l"
	.string "what with him disappearing into thin air\l"
	.string "and everything. Now where was it?$"

FennilahlTown_Pokemart_EventScript_LabSupplies_Text_2:
# 21 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "It should be right here...hold on...maybe\n"
	.string "under this...or was it here?$"

FennilahlTown_Pokemart_EventScript_LabSupplies_Text_3:
# 25 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "It's not here either. Where could it\n"
	.string "have gone?$"

FennilahlTown_Pokemart_EventScript_LabSupplies_Text_4:
# 28 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "Let me check our records...hmm, that's\n"
	.string "strange. It says that Professor\l"
	.string "Tenebris already picked it up last week.\l"
	.string "Weird...I'm sorry, I can't help you. You\l"
	.string "should go back and report this to the\l"
	.string "lab. If you want to buy something for\l"
	.string "yourself, come talk to me.$"
