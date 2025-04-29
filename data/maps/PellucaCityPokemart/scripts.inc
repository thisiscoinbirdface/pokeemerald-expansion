PellucaCityPokemart_MapScripts::
	.byte 0


PellucaCity_Pokemart_EventScript_Clerk::
# 4 "data//maps/PellucaCityPokemart/scripts.pory"
	lock
# 5 "data//maps/PellucaCityPokemart/scripts.pory"
	faceplayer
# 6 "data//maps/PellucaCityPokemart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data//maps/PellucaCityPokemart/scripts.pory"
	waitmessage
# 8 "data//maps/PellucaCityPokemart/scripts.pory"
	pokemart PellucaCity_Pokemart_Inventory
# 9 "data//maps/PellucaCityPokemart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data//maps/PellucaCityPokemart/scripts.pory"
	release
	end


	.align 2
# 14 "data//maps/PellucaCityPokemart/scripts.pory"
PellucaCity_Pokemart_Inventory:
# 15 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_POTION
# 16 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 17 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_REVIVE
# 18 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 20 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 21 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 24 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_REPEL
# 25 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 26 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 27 "data//maps/PellucaCityPokemart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
	.2byte ITEM_NONE

PellucaCity_Pokemart_NPC::
# 31 "data//maps/PellucaCityPokemart/scripts.pory"
	msgbox PellucaCity_Pokemart_NPC_Text_0, MSGBOX_NPC
	end


PellucaCity_Pokemart_NPC_Text_0:
# 31 "data//maps/PellucaCityPokemart/scripts.pory"
	.string "I'm stocking up on Absorb Bulbs to give\n"
	.string "me an edge against Jania! But will it be\l"
	.string "enough?$"
