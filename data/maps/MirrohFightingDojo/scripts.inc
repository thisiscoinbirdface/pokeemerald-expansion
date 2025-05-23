MirrohFightingDojo_MapScripts::
	.byte 0


GardenShop_Cashier::
# 12 "data//maps/MirrohFightingDojo/scripts.pory"
	lockall
# 13 "data//maps/MirrohFightingDojo/scripts.pory"
	faceplayer
# 14 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox GardenShop_Cashier_Text_0
# 15 "data//maps/MirrohFightingDojo/scripts.pory"
	waitmessage
# 16 "data//maps/MirrohFightingDojo/scripts.pory"
	pokemart GardenShop_Inventory
# 17 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 18 "data//maps/MirrohFightingDojo/scripts.pory"
	release
	end


	.align 2
# 22 "data//maps/MirrohFightingDojo/scripts.pory"
GardenShop_Inventory:
# 23 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 24 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 25 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_POWER_HERB
# 26 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 27 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 28 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 29 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 30 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 31 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_TIME_SEED
	.2byte ITEM_NONE

GardenShop_Cashier2::
# 35 "data//maps/MirrohFightingDojo/scripts.pory"
	lockall
# 36 "data//maps/MirrohFightingDojo/scripts.pory"
	faceplayer
# 37 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox GardenShop_Cashier2_Text_0
# 38 "data//maps/MirrohFightingDojo/scripts.pory"
	waitmessage
# 40 "data//maps/MirrohFightingDojo/scripts.pory"
	message GardenShop_Cashier2_Text_1
# 41 "data//maps/MirrohFightingDojo/scripts.pory"
	waitmessage
# 42 "data//maps/MirrohFightingDojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GardenShop_Cashier2_Text_2, GardenShop_Cashier2_Text_3
# 44 "data//maps/MirrohFightingDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GardenShop_Cashier2_2
GardenShop_Cashier2_1:
# 45 "data//maps/MirrohFightingDojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GardenShop_Cashier2_5
GardenShop_Cashier2_4:
# 47 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 48 "data//maps/MirrohFightingDojo/scripts.pory"
	release
	end

GardenShop_Cashier2_2:
# 44 "data//maps/MirrohFightingDojo/scripts.pory"
	pokemart GardenShop_Inventory2
	goto GardenShop_Cashier2_1

GardenShop_Cashier2_5:
# 45 "data//maps/MirrohFightingDojo/scripts.pory"
	pokemart GardenShop_Inventory3
	goto GardenShop_Cashier2_4


	.align 2
# 52 "data//maps/MirrohFightingDojo/scripts.pory"
GardenShop_Inventory2:
# 53 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 54 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 55 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 56 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 57 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 58 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 59 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 60 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 61 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 62 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 63 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 64 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 65 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 66 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 67 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_STARF_BERRY
	.2byte ITEM_NONE

	.align 2
# 70 "data//maps/MirrohFightingDojo/scripts.pory"
GardenShop_Inventory3:
# 71 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 72 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 73 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 74 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 75 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 76 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 77 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 78 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 79 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 80 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 81 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 82 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 83 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 84 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 85 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 86 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 87 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 88 "data//maps/MirrohFightingDojo/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_NONE

FlowerShop_NPC1::
# 99 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_NPC1_Text_0, MSGBOX_NPC
	end


FlowerShop_NPC2::
# 103 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_NPC2_Text_0, MSGBOX_NPC
	end


FlowerShop_NPC3::
# 107 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_NPC3_Text_0, MSGBOX_NPC
	end


FlowerShop_Roselia::
# 112 "data//maps/MirrohFightingDojo/scripts.pory"
	playmoncry SPECIES_ROSELIA, CRY_MODE_NORMAL
# 113 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Roselia_Text_0, MSGBOX_NPC
	end


FlowerShop_Lilligant::
# 117 "data//maps/MirrohFightingDojo/scripts.pory"
	playmoncry SPECIES_LILLIGANT_HISUI, CRY_MODE_NORMAL
# 118 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Lilligant_Text_0, MSGBOX_NPC
	end


GardenShop_Cashier_Text_0:
# 14 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Welcome to the Mirroh Gardenery!$"

GardenShop_Cashier2_Text_0:
# 37 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Welcome to the Mirroh Gardenery!\p"
	.string "Since berries don't grow in the cold, we\n"
	.string "import them.$"

GardenShop_Cashier2_Text_1:
# 40 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Which type of berry would you like?$"

GardenShop_Cashier2_Text_2:
# 42 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Normal Effects$"

GardenShop_Cashier2_Text_3:
# 42 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Damage Reduction$"

FlowerShop_NPC1_Text_0:
# 99 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "What - you thought I fought with only\n"
	.string "fists?\p"
	.string "A good trainer uses whatever they can,\n"
	.string "and I'm gonna power up my punches with\l"
	.string "this Power Herb!$"

FlowerShop_NPC2_Text_0:
# 103 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "I'm not here to buy anything - my\n"
	.string "Roselia just enjoys the ambience.$"

FlowerShop_NPC3_Text_0:
# 107 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "What's a Time Seed?$"

FlowerShop_Roselia_Text_0:
# 113 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Roselia is smelling the flowerpots...or\n"
	.string "is she smelling herself?$"

FlowerShop_Lilligant_Text_0:
# 118 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Lilligant seems bored...perhaps it wants\n"
	.string "to battle?$"
