WinterlilyHollow_Pokemart_MapScripts::
	.byte 0


WinterlilyHollow_Pokemart_EventScript_Clerk::
# 4 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	lock
# 5 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	faceplayer
# 6 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	waitmessage
# 8 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	pokemart WinterlilyHollow_Pokemart_Inventory
# 9 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	release
	end


	.align 2
# 14 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
WinterlilyHollow_Pokemart_Inventory:
# 15 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 16 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 17 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	.2byte ITEM_REVIVE
# 18 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 21 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 22 "data//maps/WinterlilyHollow_Pokemart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_NONE
