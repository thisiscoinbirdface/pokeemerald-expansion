# 1 "data//maps/MirrohBaseCamp/scripts.pory"

# 2 "data//maps/MirrohBaseCamp/scripts.pory"
    .set LOCALID_MARTHA, 5
# 3 "data//maps/MirrohBaseCamp/scripts.pory"
    .set LOCALID_RUE, 7

MirrohBaseCamp_MapScripts::
	.byte 0


MirrohBaseCamp_EventScript_Vendor1::
# 12 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 13 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 14 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor1_Text_0
# 15 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 16 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor1_Inventory
# 17 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor1_Text_1, MSGBOX_DEFAULT
# 18 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 22 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor1_Inventory:
# 23 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 24 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 25 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 26 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_Vendor2::
# 30 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 31 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 32 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor2_Text_0
# 33 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 34 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor2_Inventory
# 35 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor2_Text_1, MSGBOX_DEFAULT
# 36 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 40 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor2_Inventory:
# 41 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 42 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ICE_GEM
# 43 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 44 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_Vendor3::
# 48 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 49 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 50 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor3_Text_0
# 51 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 52 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor3_Inventory
# 53 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor3_Text_1, MSGBOX_DEFAULT
# 54 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 58 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor3_Inventory:
# 59 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 60 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_SODA_POP
# 61 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_NPC1::
# 68 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 69 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 70 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC1_Text_0
# 71 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


MirrohBaseCamp_EventScript_NPC2::
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 76 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 77 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC2_Text_0
# 78 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 79 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_EventScript_NPC2_Movement_0
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_MARTHA, MirrohBaseCamp_EventScript_NPC2_Movement_1
# 81 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 82 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject LOCALID_MARTHA
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_HIDE_GRAVEYARD_HISTORIAN
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	clearflag FLAG_HIDE_MIRROHBASECAMP_HISTORIAN
# 85 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


MirrohBaseCamp_Rue_Trigger::
# 97 "data//maps/MirrohBaseCamp/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_MASTERBALL_RUE, MirrohBaseCamp_Rue_Trigger_2
# 101 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 102 "data//maps/MirrohBaseCamp/scripts.pory"
	opendoor 13, 27
# 103 "data//maps/MirrohBaseCamp/scripts.pory"
	waitdooranim
# 105 "data//maps/MirrohBaseCamp/scripts.pory"
	addobject LOCALID_RUE
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	setobjectxy LOCALID_RUE, 13, 27
# 108 "data//maps/MirrohBaseCamp/scripts.pory"
	delay 8
# 110 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Rue_Trigger_Movement_0
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 112 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_RUE, MirrohBaseCamp_Rue_Trigger_Movement_1
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 114 "data//maps/MirrohBaseCamp/scripts.pory"
	closedoor 13, 27
# 115 "data//maps/MirrohBaseCamp/scripts.pory"
	waitdooranim
# 116 "data//maps/MirrohBaseCamp/scripts.pory"
	delay 16
# 117 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Rue_Trigger_Text_0
# 118 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 119 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_RUE, MirrohBaseCamp_Rue_Trigger_Movement_2
# 120 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 121 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject LOCALID_RUE
# 122 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_MASTERBALL_RUE
# 123 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Rue_Trigger_2:
	end


# 79 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_EventScript_NPC2_Movement_0:
# 79 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 79 "data//maps/MirrohBaseCamp/scripts.pory"
	face_down
	step_end

# 80 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_EventScript_NPC2_Movement_1:
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
	step_end

# 110 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_0:
# 110 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 110 "data//maps/MirrohBaseCamp/scripts.pory"
	face_right
	step_end

# 112 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_1:
# 112 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 112 "data//maps/MirrohBaseCamp/scripts.pory"
	face_left
# 112 "data//maps/MirrohBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

# 119 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_2:
# 119 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 119 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 119 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 119 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 119 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 119 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 119 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
	step_end

MirrohBaseCamp_EventScript_Vendor1_Text_0:
# 14 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Our supplies are limited but useful to\n"
	.string "trek up Mt. Mirroh!$"

MirrohBaseCamp_EventScript_Vendor1_Text_1:
# 17 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Come again!$"

MirrohBaseCamp_EventScript_Vendor2_Text_0:
# 32 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "I found all this inside Mt. Mirroh just\n"
	.string "yesterday!$"

MirrohBaseCamp_EventScript_Vendor2_Text_1:
# 35 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "C'mon, have another look!$"

MirrohBaseCamp_EventScript_Vendor3_Text_0:
# 50 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Everything you see is homemade.\n"
	.string "Anything you like?$"

MirrohBaseCamp_EventScript_Vendor3_Text_1:
# 53 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "You didn't like anything?$"

MirrohBaseCamp_EventScript_NPC1_Text_0:
# 70 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "It's so sad and lonely up here...I want\n"
	.string "to grow up fast so I can go see the rest\l"
	.string "of Cormoria!$"

MirrohBaseCamp_EventScript_NPC2_Text_0:
# 77 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "The Pokémon Graveyard lies ahead.\n"
	.string "Please be respectful.\p"
	.string "...\p"
	.string "My name? It's Martha, dear. I manage the\n"
	.string "graveyard.\p"
	.string "MARTHA: You want to talk to me?\n"
	.string "Something about dreamstones? Well this\l"
	.string "will be a longer conversation, so why\l"
	.string "don't you drop by my house later?$"

MirrohBaseCamp_Rue_Trigger_Text_0:
# 117 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "RUE: {PLAYER}? What are you doing all\n"
	.string "the way over here?\p"
	.string "...\p"
	.string "RUE: Ah, yes. The detectives are\n"
	.string "correct. Martha is an expert on\l"
	.string "Cormorian history. She would be helpful.\p"
	.string "RUE: I came here to make some social\n"
	.string "calls. Since Mirroh Base Camp is quiet\l"
	.string "and secluded, many academics reside\l"
	.string "here - Martha being one of them. I\l"
	.string "suppose I should go pay her a visit\l"
	.string "next.\p"
	.string "RUE: Take care, {PLAYER}. Stay safe in\n"
	.string "Mt. Mirroh. Listen to what the\l"
	.string "detectives tell you to do, okay?$"
