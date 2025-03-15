SilversunCity_Sewers_MapScripts::
	.byte 0


SilversunCity_Sewers_NPC1::
# 17 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 18 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 19 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 20 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC2::
# 24 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 25 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 26 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 27 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC3::
# 31 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 32 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 33 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 34 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC4::
# 38 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 39 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 40 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 41 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC5::
# 45 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 46 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 47 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 48 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_A::
# 69 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_A, SilversunCity_Sewers_NPC1_Text_0, SilversunCity_Sewers_NPC1_Text_0
# 70 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 71 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_B::
# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_B, SilversunCity_Sewers_NPC1_Text_0, SilversunCity_Sewers_NPC1_Text_0
# 76 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 77 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_C::
# 81 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_C, SilversunCity_Sewers_NPC1_Text_0, SilversunCity_Sewers_NPC1_Text_0
# 82 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 83 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_D::
# 87 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_D, SilversunCity_Sewers_NPC1_Text_0, SilversunCity_Sewers_NPC1_Text_0
# 88 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 89 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_E::
# 93 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_E, SilversunCity_Sewers_NPC1_Text_0, SilversunCity_Sewers_NPC1_Text_0
# 94 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 95 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Market_A::
# 112 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 114 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_A_Text_0
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 116 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_A_Inventory
# 117 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 118 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 122 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_A_Inventory:
# 123 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_POTION
# 124 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_POKE_BALL
# 125 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 126 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 127 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 128 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

SilversunCity_Sewers_NPC1_Text_0:
# 19 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "$"

SilversunCity_Sewers_Market_A_Text_0:
# 114 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Psst! Hey, you! Check out these goods\n"
	.string "I've got!$"
