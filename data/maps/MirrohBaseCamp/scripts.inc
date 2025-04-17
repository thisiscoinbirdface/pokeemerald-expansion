MirrohBaseCamp_MapScripts::
	.byte 0


MirrohBaseCamp_EventScript_Vendor1::
# 7 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 8 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 9 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor1_Text_0
# 10 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 11 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor1_Inventory
# 12 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor1_Text_1, MSGBOX_DEFAULT
# 13 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 17 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor1_Inventory:
# 18 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 20 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 21 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_Vendor2::
# 25 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 26 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 27 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor2_Text_0
# 28 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 29 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor2_Inventory
# 30 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor2_Text_1, MSGBOX_DEFAULT
# 31 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 35 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor2_Inventory:
# 36 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 37 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ICE_GEM
# 38 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 39 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_Vendor3::
# 43 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 44 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 45 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor3_Text_0
# 46 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 47 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor3_Inventory
# 48 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor3_Text_1, MSGBOX_DEFAULT
# 49 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 53 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor3_Inventory:
# 54 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 55 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_SODA_POP
# 56 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_NPC1::
# 63 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 64 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 65 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC1_Text_0
# 66 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


MirrohBaseCamp_EventScript_NPC2::
# 70 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 71 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 72 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC2_Text_0
# 73 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 74 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_EventScript_NPC2_Movement_0
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 5, MirrohBaseCamp_EventScript_NPC2_Movement_1
# 76 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 5
# 77 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 5
# 78 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_HIDE_GRAVEYARD_HISTORIAN
# 79 "data//maps/MirrohBaseCamp/scripts.pory"
	clearflag FLAG_HIDE_MIRROHBASECAMP_HISTORIAN
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


# 74 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_EventScript_NPC2_Movement_0:
# 74 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 74 "data//maps/MirrohBaseCamp/scripts.pory"
	face_down
	step_end

# 75 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_EventScript_NPC2_Movement_1:
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
	step_end

MirrohBaseCamp_EventScript_Vendor1_Text_0:
# 9 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Our supplies are limited but useful to\n"
	.string "trek up Mt. Mirroh!$"

MirrohBaseCamp_EventScript_Vendor1_Text_1:
# 12 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Come again!$"

MirrohBaseCamp_EventScript_Vendor2_Text_0:
# 27 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "I found all this inside Mt. Mirroh just\n"
	.string "yesterday!$"

MirrohBaseCamp_EventScript_Vendor2_Text_1:
# 30 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "C'mon, have another look!$"

MirrohBaseCamp_EventScript_Vendor3_Text_0:
# 45 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Everything you see is homemade.\n"
	.string "Anything you like?$"

MirrohBaseCamp_EventScript_Vendor3_Text_1:
# 48 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "You didn't like anything?$"

MirrohBaseCamp_EventScript_NPC1_Text_0:
# 65 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "It's so sad and lonely up here...I want\n"
	.string "to grow up fast so I can go see the rest\l"
	.string "of Cormoria!$"

MirrohBaseCamp_EventScript_NPC2_Text_0:
# 72 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "The Pokémon Graveyard lies ahead.\n"
	.string "Please be respectful.\p"
	.string "...\p"
	.string "My name? It's Martha, dear. I manage the\n"
	.string "graveyard.\p"
	.string "MARTHA: You want to talk to me?\n"
	.string "Something about dreamstones? Well this\l"
	.string "will be a longer conversation, so why\l"
	.string "don't you drop by my house later?$"
