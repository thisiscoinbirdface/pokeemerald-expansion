GalecrestCity_Pokemart_MapScripts::
	.byte 0


GalecrestCity_Pokemart_EventScript_Clerk::
# 4 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	lock
# 5 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	faceplayer
# 6 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	waitmessage
# 8 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	pokemart GalecrestCity_Pokemart_Inventory
# 9 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	release
	end


	.align 2
# 14 "data//maps/GalecrestCity_Pokemart/scripts.pory"
GalecrestCity_Pokemart_Inventory:
# 15 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_POTION
# 16 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 17 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 20 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 23 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_REPEL
# 24 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 25 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_REVIVE
# 26 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.2byte ITEM_ETHER
	.2byte ITEM_NONE

GalecrestCity_Pokemart_NPC::
# 31 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	msgbox GalecrestCity_Pokemart_NPC_Text_0, MSGBOX_NPC
	end


GalecrestCity_Pokemart_NPC_Text_0:
# 31 "data//maps/GalecrestCity_Pokemart/scripts.pory"
	.string "Each town's Pokemart has unique items\n"
	.string "on sale. Goes to show that Cormoria's\l"
	.string "economy isn't fully integrated.$"
