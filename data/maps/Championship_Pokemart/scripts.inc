Championship_Pokemart_MapScripts::
	.byte 0


Champ_Mart_A::
# 12 "data//maps/Championship_Pokemart/scripts.pory"
	lockall
# 13 "data//maps/Championship_Pokemart/scripts.pory"
	faceplayer
# 14 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox Champ_Mart_A_Text_0
# 15 "data//maps/Championship_Pokemart/scripts.pory"
	waitmessage
# 16 "data//maps/Championship_Pokemart/scripts.pory"
	pokemart Champ_Mart_Inventory_A
# 17 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 18 "data//maps/Championship_Pokemart/scripts.pory"
	release
	end


Champ_Mart_B::
# 22 "data//maps/Championship_Pokemart/scripts.pory"
	lockall
# 23 "data//maps/Championship_Pokemart/scripts.pory"
	faceplayer
# 24 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox Champ_Mart_B_Text_0
# 25 "data//maps/Championship_Pokemart/scripts.pory"
	waitmessage
# 26 "data//maps/Championship_Pokemart/scripts.pory"
	pokemart Champ_Mart_Inventory_B
# 27 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 28 "data//maps/Championship_Pokemart/scripts.pory"
	release
	end


Champ_Mart_C::
# 33 "data//maps/Championship_Pokemart/scripts.pory"
	lockall
# 34 "data//maps/Championship_Pokemart/scripts.pory"
	faceplayer
# 35 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox Champ_Mart_C_Text_0
# 36 "data//maps/Championship_Pokemart/scripts.pory"
	waitmessage
# 38 "data//maps/Championship_Pokemart/scripts.pory"
	message Champ_Mart_C_Text_1
# 39 "data//maps/Championship_Pokemart/scripts.pory"
	waitmessage
# 40 "data//maps/Championship_Pokemart/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Champ_Mart_C_Text_2, Champ_Mart_C_Text_3
# 42 "data//maps/Championship_Pokemart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Champ_Mart_C_2
Champ_Mart_C_1:
# 43 "data//maps/Championship_Pokemart/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Champ_Mart_C_5
Champ_Mart_C_4:
# 45 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 46 "data//maps/Championship_Pokemart/scripts.pory"
	release
	end

Champ_Mart_C_2:
# 42 "data//maps/Championship_Pokemart/scripts.pory"
	pokemart GardenShop_Inventory2
	goto Champ_Mart_C_1

Champ_Mart_C_5:
# 43 "data//maps/Championship_Pokemart/scripts.pory"
	pokemart GardenShop_Inventory3
	goto Champ_Mart_C_4


	.align 2
# 50 "data//maps/Championship_Pokemart/scripts.pory"
Champ_Mart_Inventory_A:
# 51 "data//maps/Championship_Pokemart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 52 "data//maps/Championship_Pokemart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 53 "data//maps/Championship_Pokemart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 54 "data//maps/Championship_Pokemart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
	.2byte ITEM_NONE

	.align 2
# 58 "data//maps/Championship_Pokemart/scripts.pory"
Champ_Mart_Inventory_B:
# 59 "data//maps/Championship_Pokemart/scripts.pory"
	.2byte ITEM_TM06
# 60 "data//maps/Championship_Pokemart/scripts.pory"
	.2byte ITEM_TM01
# 61 "data//maps/Championship_Pokemart/scripts.pory"
	.2byte ITEM_TM02
# 62 "data//maps/Championship_Pokemart/scripts.pory"
	.2byte ITEM_TM16
# 63 "data//maps/Championship_Pokemart/scripts.pory"
	.2byte ITEM_TM21
# 64 "data//maps/Championship_Pokemart/scripts.pory"
	.2byte ITEM_TM22
	.2byte ITEM_NONE

	.align 2
# 66 "data//maps/Championship_Pokemart/scripts.pory"
Champ_Mart_Inventory_C:
	.2byte ITEM_NONE

Champ_Mart_NPC_A::
# 76 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox Champ_Mart_NPC_A_Text_0, MSGBOX_NPC
	end


Champ_Mart_NPC_A_Mon::
# 80 "data//maps/Championship_Pokemart/scripts.pory"
	playmoncry SPECIES_LILLIGANT_HISUI, CRY_MODE_NORMAL
# 81 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox Champ_Mart_NPC_A_Mon_Text_0, MSGBOX_NPC
	end


Champ_Mart_NPC_B::
# 86 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox Champ_Mart_NPC_B_Text_0, MSGBOX_NPC
	end


Champ_Mart_NPC_C::
# 91 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox Champ_Mart_NPC_C_Text_0, MSGBOX_NPC
	end


Champ_Mart_NPC_Gloria::
# 103 "data//maps/Championship_Pokemart/scripts.pory"
	speakername Champ_Mart_NPC_Gloria_Text_0
# 104 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox Champ_Mart_NPC_Gloria_Text_1, MSGBOX_NPC
	end


Champ_Mart_NPC_Bombirdier::
# 108 "data//maps/Championship_Pokemart/scripts.pory"
	playmoncry SPECIES_BOMBIRDIER, CRY_MODE_NORMAL
# 109 "data//maps/Championship_Pokemart/scripts.pory"
	msgbox Champ_Mart_NPC_Bombirdier_Text_0, MSGBOX_NPC
	end


Champ_Mart_A_Text_0:
# 14 "data//maps/Championship_Pokemart/scripts.pory"
	.string "Welcome to the Items Corner!\p"
	.string "We have a wide variety of useful tools\n"
	.string "to power up your Pokémon!$"

Champ_Mart_B_Text_0:
# 24 "data//maps/Championship_Pokemart/scripts.pory"
	.string "Welcome to the TM Corner!\p"
	.string "Give your Pokémon an edge in battle\n"
	.string "with these exclusive TMs!$"

Champ_Mart_C_Text_0:
# 35 "data//maps/Championship_Pokemart/scripts.pory"
	.string "Welcome to the Gardenery Corner!\p"
	.string "We came all the way from Mt. Mirroh to\n"
	.string "open a stall here!$"

Champ_Mart_C_Text_1:
# 38 "data//maps/Championship_Pokemart/scripts.pory"
	.string "Which type of berry would you like?$"

Champ_Mart_C_Text_2:
# 40 "data//maps/Championship_Pokemart/scripts.pory"
	.string "Normal Effects$"

Champ_Mart_C_Text_3:
# 40 "data//maps/Championship_Pokemart/scripts.pory"
	.string "Damage Reduction$"

Champ_Mart_NPC_A_Text_0:
# 76 "data//maps/Championship_Pokemart/scripts.pory"
	.string "My Lilligant knows Bullet Seed. With the\n"
	.string "Loaded Dice I bought, we can't lose!$"

Champ_Mart_NPC_A_Mon_Text_0:
# 81 "data//maps/Championship_Pokemart/scripts.pory"
	.string "Lilligant is rolling the Loaded Dice in\n"
	.string "its hand.$"

Champ_Mart_NPC_B_Text_0:
# 86 "data//maps/Championship_Pokemart/scripts.pory"
	.string "This place must be raking in the cash!$"

Champ_Mart_NPC_C_Text_0:
# 91 "data//maps/Championship_Pokemart/scripts.pory"
	.string "It's a shame they don't have anything\n"
	.string "catering to fishermen.$"

Champ_Mart_NPC_Gloria_Text_0:
# 103 "data//maps/Championship_Pokemart/scripts.pory"
	.string "Gloria$"

Champ_Mart_NPC_Gloria_Text_1:
# 104 "data//maps/Championship_Pokemart/scripts.pory"
	.string "{PLAYER}! A welcome surprise.\n"
	.string "Are you competing this year?\p"
	.string "...\p"
	.string "Very good, very good.\n"
	.string "All the best - you're a star!\p"
	.string "What am I doing here?\p"
	.string "Bombirdier wants something but it's\n"
	.string "unable to decide...$"

Champ_Mart_NPC_Bombirdier_Text_0:
# 109 "data//maps/Championship_Pokemart/scripts.pory"
	.string "Bombirdier looks confused...$"
