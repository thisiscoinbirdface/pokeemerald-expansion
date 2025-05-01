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

FlowerShop_NPC1::
# 46 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_NPC1_Text_0, MSGBOX_NPC
	end


FlowerShop_NPC2::
# 50 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_NPC2_Text_0, MSGBOX_NPC
	end


FlowerShop_NPC3::
# 54 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_NPC3_Text_0, MSGBOX_NPC
	end


FlowerShop_Roselia::
# 59 "data//maps/MirrohFightingDojo/scripts.pory"
	playmoncry SPECIES_ROSELIA, CRY_MODE_NORMAL
# 60 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Roselia_Text_0, MSGBOX_NPC
	end


FlowerShop_Lilligant::
# 64 "data//maps/MirrohFightingDojo/scripts.pory"
	playmoncry SPECIES_LILLIGANT_HISUI, CRY_MODE_NORMAL
# 65 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Lilligant_Text_0, MSGBOX_NPC
	end


GardenShop_Cashier_Text_0:
# 14 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Welcome to the Mirroh Gardenery!$"

FlowerShop_NPC1_Text_0:
# 46 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "What - you thought I fought with only\n"
	.string "fists?\p"
	.string "A good trainer uses whatever they can,\n"
	.string "and I'm gonna power up my punches with\l"
	.string "this Power Herb!$"

FlowerShop_NPC2_Text_0:
# 50 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "I'm not here to buy anything - my\n"
	.string "Roselia just enjoys the ambience.$"

FlowerShop_NPC3_Text_0:
# 54 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "What's a Time Seed?$"

FlowerShop_Roselia_Text_0:
# 60 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Roselia is smelling the flowerpots...or\n"
	.string "is she smelling herself?$"

FlowerShop_Lilligant_Text_0:
# 65 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Lilligant seems bored...perhaps it wants\n"
	.string "to battle?$"
