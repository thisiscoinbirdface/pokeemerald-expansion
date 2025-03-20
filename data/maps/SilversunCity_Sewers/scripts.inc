SilversunCity_Sewers_MapScripts::
	.byte 0


SilversunCity_Sewers_NPC1::
# 18 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 19 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 20 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 21 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC2::
# 26 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 27 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC2_Text_0
# 28 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC3::
# 33 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 34 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 35 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC3_Text_0
# 36 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC4::
# 41 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 42 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 43 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC4_Text_0
# 44 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC5::
# 50 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 51 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 52 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC5_Text_0
# 53 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC6::
# 58 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 59 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 60 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC6_Text_0
# 61 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_A::
# 81 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_A, SilversunCity_Sewers_Trainer_A_Text_0, SilversunCity_Sewers_Trainer_A_Text_1
# 82 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_A_Text_2
# 83 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_B::
# 88 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_B, SilversunCity_Sewers_Trainer_B_Text_0, SilversunCity_Sewers_Trainer_B_Text_1
# 89 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_B_Text_2
# 90 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Market_A::
# 109 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 110 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 111 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_A_Text_0
# 112 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 113 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_A_Inventory
# 114 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_A_Text_1, MSGBOX_DEFAULT
# 115 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 119 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_A_Inventory:
# 120 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM16
# 121 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM21
# 122 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM36
# 123 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM41
# 124 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM46
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_B::
# 129 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 130 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 131 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_B_Text_0
# 132 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 133 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_B_Inventory
# 134 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_B_Text_1, MSGBOX_DEFAULT
# 135 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 139 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_B_Inventory:
# 140 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_ZINC
# 141 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CARBOS
# 142 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_IRON
# 143 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CALCIUM
# 144 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_PROTEIN
# 145 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_C::
# 150 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 151 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 153 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 154 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 156 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 160 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_C_Inventory:
# 161 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 162 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 163 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 164 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_FLOAT_STONE
	.2byte ITEM_NONE

SilversunCity_Sewers_NPC1_Text_0:
# 20 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I bet there's no return policy on any\n"
	.string "defected products.$"

SilversunCity_Sewers_NPC2_Text_0:
# 27 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You see that giant filtration device? I\n"
	.string "was in charge of building it. My\l"
	.string "MAGNEMITE and I worked tirelessly to\l"
	.string "finish it in time. It's our biggest\l"
	.string "accomplishment!$"

SilversunCity_Sewers_NPC3_Text_0:
# 35 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "There are some creepy-looking fellows\n"
	.string "up ahead. I think they're selling\l"
	.string "something illegal.$"

SilversunCity_Sewers_NPC4_Text_0:
# 43 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Don't tell anyone I'm here! I came to\n"
	.string "find a way to evolve my SCYTHER.$"

SilversunCity_Sewers_NPC5_Text_0:
# 52 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "All this toxic runoff gets filtered\n"
	.string "before entering the HOYA RIVER. Then it\l"
	.string "goes south towards PELLUCA CITY.$"

SilversunCity_Sewers_NPC6_Text_0:
# 60 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "$"

SilversunCity_Sewers_Trainer_A_Text_0:
# 81 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I'm not like the other rich kids at\n"
	.string "school, because I'm not afraid to get my\l"
	.string "hands dirty!$"

SilversunCity_Sewers_Trainer_A_Text_1:
# 81 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Your hands are dirty too!$"

SilversunCity_Sewers_Trainer_A_Text_2:
# 82 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I came down here to catch some POISON\n"
	.string "type {PKMN} to round out my team, but I\l"
	.string "should go back up now. This place\l"
	.string "stinks.$"

SilversunCity_Sewers_Trainer_B_Text_0:
# 88 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The resonance is strong here...the\n"
	.string "toxic water vapour wafts through your\l"
	.string "nostril...you are suspended...and about\l"
	.string "to lose!$"

SilversunCity_Sewers_Trainer_B_Text_1:
# 88 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The water stinks!$"

SilversunCity_Sewers_Trainer_B_Text_2:
# 89 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I thought the toxicity would help me\n"
	.string "ascend.$"

SilversunCity_Sewers_Market_A_Text_0:
# 111 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Can't beat GLORIA? I'll hook you up with\n"
	.string "the best stuff.$"

SilversunCity_Sewers_Market_A_Text_1:
# 114 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Stay a loser then!$"

SilversunCity_Sewers_Market_B_Text_0:
# 131 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Psst! Hey, you! Check out these goods\n"
	.string "I've got!$"

SilversunCity_Sewers_Market_B_Text_1:
# 134 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Then scram!$"

SilversunCity_Sewers_Market_C_Text_0:
# 152 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You look like you'd make good use of\n"
	.string "this stuff!$"

SilversunCity_Sewers_Market_C_Text_1:
# 155 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Quit wasting my time!$"
