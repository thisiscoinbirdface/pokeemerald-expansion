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
	speakername FennilahlTown_Pokemart_EventScript_LabSupplies_Text_0
# 12 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox FennilahlTown_Pokemart_EventScript_LabSupplies_Text_1
# 13 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	release
# 14 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_1
# 15 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmovement 0
# 16 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	applymovement 1, FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_2
# 17 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmovement 0
# 18 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	speakername FennilahlTown_Pokemart_EventScript_LabSupplies_Text_0
# 19 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox FennilahlTown_Pokemart_EventScript_LabSupplies_Text_2
# 20 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	release
# 21 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	applymovement 1, FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_3
# 22 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmovement 0
# 23 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	speakername FennilahlTown_Pokemart_EventScript_LabSupplies_Text_0
# 24 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox FennilahlTown_Pokemart_EventScript_LabSupplies_Text_3
# 25 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	release
# 26 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	applymovement 1, FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_4
# 27 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmovement 0
# 28 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	speakername FennilahlTown_Pokemart_EventScript_LabSupplies_Text_0
# 29 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox FennilahlTown_Pokemart_EventScript_LabSupplies_Text_4
# 30 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	applymovement 1, FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_2
# 31 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmovement 0
# 32 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	speakername FennilahlTown_Pokemart_EventScript_LabSupplies_Text_0
# 33 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox FennilahlTown_Pokemart_EventScript_LabSupplies_Text_5
# 34 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	releaseall
# 37 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	clearflag FLAG_TENEBRIS_POLICE_PRESCENCE
# 38 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	setvar VAR_FENNILAHL_MART_SUPPLIES, 1
# 39 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LAB_FIRST_DAY, SUB_QUEST_3
# 42 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	questmenu QUEST_MENU_BUFFER_QUEST_NAME, QUEST_LAB_FIRST_DAY
# 43 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	bufferstring 1, gText_QuestUpdated
# 44 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 45 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox gText_QuestAnnounce, MSGBOX_SIGN
# 47 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	releaseall
	end


FennilahlTown_Pokemart_EventScript_Clerk::
# 54 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	lock
# 55 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	faceplayer
# 56 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	message gText_HowMayIServeYou
# 57 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	waitmessage
# 58 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	pokemart FennilahlTown_Pokemart_Inventory
# 59 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 60 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	release
	end


	.align 2
# 64 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_Inventory:
# 65 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.2byte ITEM_POTION
# 66 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 67 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.2byte ITEM_REPEL
# 68 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.2byte ITEM_REVIVE
# 69 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.2byte ITEM_PARLYZ_HEAL
# 70 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 71 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

FennilahlTown_Pokemart_NPC::
# 79 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	msgbox FennilahlTown_Pokemart_NPC_Text_0, MSGBOX_NPC
	end


# 9 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_0:
# 9 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	face_down
	step_end

# 14 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_1:
# 14 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_up
# 14 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_up
# 14 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_up
# 14 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_up
# 14 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	face_left
	step_end

# 16 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_2:
# 16 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	face_right
	step_end

# 21 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_3:
# 21 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_up
	step_end

# 26 "data//maps/FennilahlTown_Pokemart/scripts.pory"
FennilahlTown_Pokemart_EventScript_LabSupplies_Movement_4:
# 26 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	walk_down
	step_end

FennilahlTown_Pokemart_EventScript_LabSupplies_Text_0:
# 11 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "Shopkeeper$"

FennilahlTown_Pokemart_EventScript_LabSupplies_Text_1:
# 12 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "Ah, are you from the Tenebris Lab?\p"
	.string "Your supplies have been sitting here\n"
	.string "for a while now. Come here.$"

FennilahlTown_Pokemart_EventScript_LabSupplies_Text_2:
# 19 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "We've been waiting for a pickup.\n"
	.string "Of course, I understand you must be\l"
	.string "busy, what with your Professor\l"
	.string "disappearing into thin air and\l"
	.string "everything.\p"
	.string "Now where was it?$"

FennilahlTown_Pokemart_EventScript_LabSupplies_Text_3:
# 24 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "It should be right here...hold on...maybe\n"
	.string "under this...or was it here?$"

FennilahlTown_Pokemart_EventScript_LabSupplies_Text_4:
# 29 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "It's not here either. Where could it\n"
	.string "have gone?$"

FennilahlTown_Pokemart_EventScript_LabSupplies_Text_5:
# 33 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "Let me check our records...hmm, that's\n"
	.string "strange. It says that Professor\l"
	.string "Tenebris already picked it up last week.\l"
	.string "Weird...I'm sorry, I can't help you.\p"
	.string "You should go back and report this to\n"
	.string "the lab. If you want to buy something\l"
	.string "for yourself, come talk to me.$"

FennilahlTown_Pokemart_NPC_Text_0:
# 79 "data//maps/FennilahlTown_Pokemart/scripts.pory"
	.string "This Poké Mart doesn't sell much\n"
	.string "because we're in a remote town.\p"
	.string "But you can find these mint vending\n"
	.string "machines everywhere! It scans your\l"
	.string "Trainer Card and sells you mints based\l"
	.string "on how many badges you have.$"
