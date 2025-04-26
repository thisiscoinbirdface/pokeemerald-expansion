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
	speakername MirrohBaseCamp_EventScript_NPC2_Text_0
# 78 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC2_Text_1
# 79 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_2
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC2_Text_3
# 81 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 82 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_EventScript_NPC2_Movement_0
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_MARTHA, MirrohBaseCamp_EventScript_NPC2_Movement_1
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 85 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject LOCALID_MARTHA
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_HIDE_GRAVEYARD_HISTORIAN
# 87 "data//maps/MirrohBaseCamp/scripts.pory"
	clearflag FLAG_HIDE_MIRROHBASECAMP_HISTORIAN
# 88 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


MirrohBaseCamp_Rue_Trigger::
# 100 "data//maps/MirrohBaseCamp/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_MASTERBALL_RUE, MirrohBaseCamp_Rue_Trigger_2
# 104 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 105 "data//maps/MirrohBaseCamp/scripts.pory"
	opendoor 13, 27
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	waitdooranim
# 108 "data//maps/MirrohBaseCamp/scripts.pory"
	addobject LOCALID_RUE
# 109 "data//maps/MirrohBaseCamp/scripts.pory"
	setobjectxy LOCALID_RUE, 13, 27
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	delay 8
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Rue_Trigger_Movement_0
# 114 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 115 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_RUE, MirrohBaseCamp_Rue_Trigger_Movement_1
# 116 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 117 "data//maps/MirrohBaseCamp/scripts.pory"
	closedoor 13, 27
# 118 "data//maps/MirrohBaseCamp/scripts.pory"
	waitdooranim
# 119 "data//maps/MirrohBaseCamp/scripts.pory"
	delay 16
# 120 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_Rue_Trigger_Text_0
# 121 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Rue_Trigger_Text_1
# 122 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 123 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_RUE, MirrohBaseCamp_Rue_Trigger_Movement_2
# 124 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 125 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject LOCALID_RUE
# 126 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_MASTERBALL_RUE
# 127 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Rue_Trigger_2:
	end


MirrohBaseCamp_Trainer_A::
# 154 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 155 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 157 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_A_Text_0, MSGBOX_YESNO
# 158 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Trainer_A_2
MirrohBaseCamp_Trainer_A_1:
# 169 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Trainer_A_2:
# 159 "data//maps/MirrohBaseCamp/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHEXT_D, MirrohBaseCamp_Trainer_A_Text_1
# 160 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_TRAINER_A
# 161 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_A_Text_1
# 162 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 163 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Trainer_A_Movement_0
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 8, MirrohBaseCamp_Trainer_A_Movement_1
# 165 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 166 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 8
	goto MirrohBaseCamp_Trainer_A_1


MirrohBaseCamp_Trainer_B::
# 175 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 176 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 178 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_B_Text_0, MSGBOX_NPC
# 180 "data//maps/MirrohBaseCamp/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_TRAINER_A, MirrohBaseCamp_Trainer_B_2
MirrohBaseCamp_Trainer_B_1:
# 194 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Trainer_B_2:
# 181 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_A_Text_1, MSGBOX_YESNO
# 182 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Trainer_B_4
	goto MirrohBaseCamp_Trainer_B_1

MirrohBaseCamp_Trainer_B_4:
# 183 "data//maps/MirrohBaseCamp/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHEXT_E, MirrohBaseCamp_Trainer_A_Text_1
# 184 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_TRAINER_B
# 185 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_A_Text_1
# 186 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 187 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Trainer_A_Movement_0
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 9, MirrohBaseCamp_Trainer_B_Movement_0
# 189 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 190 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 9
	goto MirrohBaseCamp_Trainer_B_1


MirrohBaseCamp_Trainer_C::
# 201 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 202 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 204 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_C_Text_0, MSGBOX_NPC
# 206 "data//maps/MirrohBaseCamp/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_TRAINER_B, MirrohBaseCamp_Trainer_C_2
MirrohBaseCamp_Trainer_C_1:
# 221 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Trainer_C_2:
# 207 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_C_Text_1
# 208 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Trainer_C_4
	goto MirrohBaseCamp_Trainer_C_1

MirrohBaseCamp_Trainer_C_4:
# 209 "data//maps/MirrohBaseCamp/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHEXT_F, MirrohBaseCamp_Trainer_A_Text_1
# 210 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_TRAINER_C
# 211 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_A_Text_1
# 212 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 213 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Trainer_A_Movement_0
# 214 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 10, MirrohBaseCamp_Trainer_B_Movement_0
# 215 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 216 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 10
	goto MirrohBaseCamp_Trainer_C_1


# 82 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_EventScript_NPC2_Movement_0:
# 82 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 82 "data//maps/MirrohBaseCamp/scripts.pory"
	face_down
	step_end

# 83 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_EventScript_NPC2_Movement_1:
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
	step_end

# 113 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_0:
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	face_right
	step_end

# 115 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_1:
# 115 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 115 "data//maps/MirrohBaseCamp/scripts.pory"
	face_left
# 115 "data//maps/MirrohBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

# 123 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_2:
# 123 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 123 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 123 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 123 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 123 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 123 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 123 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
	step_end

# 163 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Trainer_A_Movement_0:
# 163 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 163 "data//maps/MirrohBaseCamp/scripts.pory"
	face_up
	step_end

# 164 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Trainer_A_Movement_1:
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
	step_end

# 188 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Trainer_B_Movement_0:
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
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
	.string "???$"

MirrohBaseCamp_EventScript_NPC2_Text_1:
# 78 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "The Pokémon Graveyard lies ahead.\n"
	.string "Please be respectful.\p"
	.string "...$"

MirrohBaseCamp_EventScript_NPC2_Text_2:
# 79 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Martha$"

MirrohBaseCamp_EventScript_NPC2_Text_3:
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "My name? It's Martha, dear. I manage the\n"
	.string "graveyard.\p"
	.string "You want to talk to me? Something\n"
	.string "about dreamstones? Well this will be a\l"
	.string "longer conversation, so why don't you\l"
	.string "drop by my house later?$"

MirrohBaseCamp_Rue_Trigger_Text_0:
# 120 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Rue$"

MirrohBaseCamp_Rue_Trigger_Text_1:
# 121 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "{PLAYER}? What are you doing all the\n"
	.string "way over here?\p"
	.string "...\p"
	.string "Ah, yes. The detectives are correct.\n"
	.string "Martha is an expert on Cormorian\l"
	.string "history. She would be helpful.\p"
	.string "I came here to make some social calls.\n"
	.string "Since Mirroh Base Camp is quiet and\l"
	.string "secluded, many academics reside here -\l"
	.string "Martha being one of them.\p"
	.string "Take care, {PLAYER}. Stay safe in Mt.\n"
	.string "Mirroh. Listen to what the detectives\l"
	.string "tell you to do, okay?$"

MirrohBaseCamp_Trainer_A_Text_0:
# 157 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Haven't you heard? They're closing the\n"
	.string "gym here. So everyone's queueing up to\l"
	.string "get a badge before it closes.\p"
	.string "Hey, wanna do a warm-up battle?$"

MirrohBaseCamp_Trainer_A_Text_1:
# 159 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "$"

MirrohBaseCamp_Trainer_B_Text_0:
# 178 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Yes$"

MirrohBaseCamp_Trainer_C_Text_0:
# 204 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Get outta here! Carona has only one\n"
	.string "badge left to give and it's mine!$"

MirrohBaseCamp_Trainer_C_Text_1:
# 207 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "What? If you keep looking at me like\n"
	.string "that, I'll make you pay!$"
