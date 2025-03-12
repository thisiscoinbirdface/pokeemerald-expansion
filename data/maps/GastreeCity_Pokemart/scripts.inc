GastreeCity_Pokemart_MapScripts::
	.byte 0


GastreeCity_Pokemart_EventScript_Clerk::
# 4 "data//maps/GastreeCity_Pokemart/scripts.pory"
	lock
# 5 "data//maps/GastreeCity_Pokemart/scripts.pory"
	faceplayer
# 6 "data//maps/GastreeCity_Pokemart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data//maps/GastreeCity_Pokemart/scripts.pory"
	waitmessage
# 8 "data//maps/GastreeCity_Pokemart/scripts.pory"
	pokemart GastreeCity_Pokemart_Inventory
# 9 "data//maps/GastreeCity_Pokemart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data//maps/GastreeCity_Pokemart/scripts.pory"
	release
	end


	.align 2
# 14 "data//maps/GastreeCity_Pokemart/scripts.pory"
GastreeCity_Pokemart_Inventory:
# 15 "data//maps/GastreeCity_Pokemart/scripts.pory"
	.2byte ITEM_POTION
# 16 "data//maps/GastreeCity_Pokemart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 17 "data//maps/GastreeCity_Pokemart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 18 "data//maps/GastreeCity_Pokemart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 19 "data//maps/GastreeCity_Pokemart/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 20 "data//maps/GastreeCity_Pokemart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

GastreeCity_Pokemart_NPC::
# 24 "data//maps/GastreeCity_Pokemart/scripts.pory"
	lockall
# 25 "data//maps/GastreeCity_Pokemart/scripts.pory"
	faceplayer
# 26 "data//maps/GastreeCity_Pokemart/scripts.pory"
	msgbox GastreeCity_Pokemart_NPC_Text_0
# 27 "data//maps/GastreeCity_Pokemart/scripts.pory"
	releaseall
	return


GastreeCity_Pokemart_NPC_Text_0:
# 26 "data//maps/GastreeCity_Pokemart/scripts.pory"
	.string "Don't forget to sell your extra items!$"
