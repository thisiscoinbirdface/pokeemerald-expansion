Silversun_Pokemart_MapScripts::
	.byte 0


Silversun_Pokemart_EventScript_Clerk::
# 4 "data//maps/Silversun_Pokemart/scripts.pory"
	lock
# 5 "data//maps/Silversun_Pokemart/scripts.pory"
	faceplayer
# 6 "data//maps/Silversun_Pokemart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data//maps/Silversun_Pokemart/scripts.pory"
	waitmessage
# 8 "data//maps/Silversun_Pokemart/scripts.pory"
	pokemart Silversun_Pokemart_Inventory
# 9 "data//maps/Silversun_Pokemart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data//maps/Silversun_Pokemart/scripts.pory"
	release
	end


	.align 2
# 14 "data//maps/Silversun_Pokemart/scripts.pory"
Silversun_Pokemart_Inventory:
# 15 "data//maps/Silversun_Pokemart/scripts.pory"
	.2byte ITEM_POTION
# 16 "data//maps/Silversun_Pokemart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 17 "data//maps/Silversun_Pokemart/scripts.pory"
	.2byte ITEM_REVIVE
# 18 "data//maps/Silversun_Pokemart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data//maps/Silversun_Pokemart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 20 "data//maps/Silversun_Pokemart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 21 "data//maps/Silversun_Pokemart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data//maps/Silversun_Pokemart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data//maps/Silversun_Pokemart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 24 "data//maps/Silversun_Pokemart/scripts.pory"
	.2byte ITEM_REPEL
# 25 "data//maps/Silversun_Pokemart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

Silversun_Pokemart_NPC::
# 29 "data//maps/Silversun_Pokemart/scripts.pory"
	msgbox Silversun_Pokemart_NPC_Text_0, MSGBOX_NPC
	end


Silversun_Pokemart_NPC_Text_0:
# 29 "data//maps/Silversun_Pokemart/scripts.pory"
	.string "Don't forget to sell your extra items!$"
