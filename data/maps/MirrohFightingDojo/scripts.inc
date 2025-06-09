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
	goto_if_set FLAG_TUTOR_ROSELIA, FlowerShop_Roselia_2
# 119 "data//maps/MirrohFightingDojo/scripts.pory"
	playmoncry SPECIES_ROSELIA, CRY_MODE_NORMAL
# 120 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Roselia_Text_1
# 121 "data//maps/MirrohFightingDojo/scripts.pory"
	release
# 122 "data//maps/MirrohFightingDojo/scripts.pory"
	delay 8
# 123 "data//maps/MirrohFightingDojo/scripts.pory"
	applymovement 6, FlowerShop_Roselia_Movement_0
# 124 "data//maps/MirrohFightingDojo/scripts.pory"
	waitmovement 0
# 125 "data//maps/MirrohFightingDojo/scripts.pory"
	delay 16
# 126 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Roselia_Text_2, MSGBOX_YESNO
# 127 "data//maps/MirrohFightingDojo/scripts.pory"
	release
# 129 "data//maps/MirrohFightingDojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FlowerShop_Roselia_5
FlowerShop_Roselia_4:
# 154 "data//maps/MirrohFightingDojo/scripts.pory"
	applymovement 6, FlowerShop_Roselia_Movement_1
# 155 "data//maps/MirrohFightingDojo/scripts.pory"
	waitmovement 0
# 156 "data//maps/MirrohFightingDojo/scripts.pory"
	releaseall
	end

FlowerShop_Roselia_2:
# 113 "data//maps/MirrohFightingDojo/scripts.pory"
	playmoncry SPECIES_ROSELIA, CRY_MODE_NORMAL
# 114 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Roselia_Text_0
# 115 "data//maps/MirrohFightingDojo/scripts.pory"
	releaseall
	end

FlowerShop_Roselia_5:
# 131 "data//maps/MirrohFightingDojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FlowerShop_Roselia_8
FlowerShop_Roselia_7:
# 142 "data//maps/MirrohFightingDojo/scripts.pory"
	setvar VAR_0x8005, MOVE_SOLAR_BEAM
# 143 "data//maps/MirrohFightingDojo/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 144 "data//maps/MirrohFightingDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FlowerShop_Roselia_10
# 147 "data//maps/MirrohFightingDojo/scripts.pory"
	setflag FLAG_TUTOR_ROSELIA
# 148 "data//maps/MirrohFightingDojo/scripts.pory"
	applymovement 6, FlowerShop_Roselia_Movement_1
# 149 "data//maps/MirrohFightingDojo/scripts.pory"
	waitmovement 0
# 150 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Roselia_Text_0
	goto FlowerShop_Roselia_4

FlowerShop_Roselia_8:
# 132 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Roselia_Text_3, MSGBOX_POKENAV
# 133 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Roselia_Text_4, MSGBOX_YESNO
# 134 "data//maps/MirrohFightingDojo/scripts.pory"
	release
# 135 "data//maps/MirrohFightingDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FlowerShop_Roselia_13
	goto FlowerShop_Roselia_7

FlowerShop_Roselia_10:
	goto FlowerShop_Roselia_4

FlowerShop_Roselia_13:
# 136 "data//maps/MirrohFightingDojo/scripts.pory"
	applymovement 6, FlowerShop_Roselia_Movement_1
# 137 "data//maps/MirrohFightingDojo/scripts.pory"
	waitmovement 0
# 138 "data//maps/MirrohFightingDojo/scripts.pory"
	releaseall
	end


FlowerShop_Lilligant::
# 160 "data//maps/MirrohFightingDojo/scripts.pory"
	goto_if_set FLAG_TUTOR_LILLIGANT, FlowerShop_Lilligant_2
# 167 "data//maps/MirrohFightingDojo/scripts.pory"
	playmoncry SPECIES_LILLIGANT_HISUI, CRY_MODE_NORMAL
# 168 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Lilligant_Text_1
# 169 "data//maps/MirrohFightingDojo/scripts.pory"
	release
# 170 "data//maps/MirrohFightingDojo/scripts.pory"
	delay 8
# 171 "data//maps/MirrohFightingDojo/scripts.pory"
	applymovement 5, FlowerShop_Roselia_Movement_0
# 172 "data//maps/MirrohFightingDojo/scripts.pory"
	waitmovement 0
# 173 "data//maps/MirrohFightingDojo/scripts.pory"
	delay 16
# 174 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Lilligant_Text_2, MSGBOX_YESNO
# 175 "data//maps/MirrohFightingDojo/scripts.pory"
	release
# 177 "data//maps/MirrohFightingDojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FlowerShop_Lilligant_5
FlowerShop_Lilligant_4:
# 202 "data//maps/MirrohFightingDojo/scripts.pory"
	applymovement 5, FlowerShop_Lilligant_Movement_0
# 203 "data//maps/MirrohFightingDojo/scripts.pory"
	waitmovement 0
# 204 "data//maps/MirrohFightingDojo/scripts.pory"
	releaseall
	end

FlowerShop_Lilligant_2:
# 161 "data//maps/MirrohFightingDojo/scripts.pory"
	playmoncry SPECIES_LILLIGANT_HISUI, CRY_MODE_NORMAL
# 162 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Lilligant_Text_0
# 163 "data//maps/MirrohFightingDojo/scripts.pory"
	releaseall
	end

FlowerShop_Lilligant_5:
# 179 "data//maps/MirrohFightingDojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FlowerShop_Lilligant_8
FlowerShop_Lilligant_7:
# 190 "data//maps/MirrohFightingDojo/scripts.pory"
	setvar VAR_0x8005, MOVE_SOLAR_BLADE
# 191 "data//maps/MirrohFightingDojo/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 192 "data//maps/MirrohFightingDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FlowerShop_Lilligant_10
# 195 "data//maps/MirrohFightingDojo/scripts.pory"
	setflag FLAG_TUTOR_LILLIGANT
# 196 "data//maps/MirrohFightingDojo/scripts.pory"
	applymovement 5, FlowerShop_Lilligant_Movement_0
# 197 "data//maps/MirrohFightingDojo/scripts.pory"
	waitmovement 0
# 198 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Lilligant_Text_0
	goto FlowerShop_Lilligant_4

FlowerShop_Lilligant_8:
# 180 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Roselia_Text_3, MSGBOX_POKENAV
# 181 "data//maps/MirrohFightingDojo/scripts.pory"
	msgbox FlowerShop_Lilligant_Text_3, MSGBOX_YESNO
# 182 "data//maps/MirrohFightingDojo/scripts.pory"
	release
# 183 "data//maps/MirrohFightingDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FlowerShop_Lilligant_13
	goto FlowerShop_Lilligant_7

FlowerShop_Lilligant_10:
	goto FlowerShop_Lilligant_4

FlowerShop_Lilligant_13:
# 184 "data//maps/MirrohFightingDojo/scripts.pory"
	applymovement 5, FlowerShop_Lilligant_Movement_0
# 185 "data//maps/MirrohFightingDojo/scripts.pory"
	waitmovement 0
# 186 "data//maps/MirrohFightingDojo/scripts.pory"
	releaseall
	end


# 123 "data//maps/MirrohFightingDojo/scripts.pory"
FlowerShop_Roselia_Movement_0:
# 123 "data//maps/MirrohFightingDojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 136 "data//maps/MirrohFightingDojo/scripts.pory"
FlowerShop_Roselia_Movement_1:
# 136 "data//maps/MirrohFightingDojo/scripts.pory"
	walk_in_place_left
	step_end

# 184 "data//maps/MirrohFightingDojo/scripts.pory"
FlowerShop_Lilligant_Movement_0:
# 184 "data//maps/MirrohFightingDojo/scripts.pory"
	walk_in_place_right
	step_end

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
# 114 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Roselia smirks victoriously!$"

FlowerShop_Roselia_Text_1:
# 120 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Roselia is arguing with Lilligant!\n"
	.string "What are they arguing about?$"

FlowerShop_Roselia_Text_2:
# 126 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Roselia points at your Pokémon!\p"
	.string "Teach a Pokémon Solar Beam?$"

FlowerShop_Roselia_Text_3:
# 132 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "You will only be able to teach\n"
	.string "this move once. Make it count!$"

FlowerShop_Roselia_Text_4:
# 133 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Teach a Pokémon Solar Beam?$"

FlowerShop_Lilligant_Text_0:
# 162 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Lilligant smirks victoriously!$"

FlowerShop_Lilligant_Text_1:
# 168 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Lilligant is arguing with Roselia!\n"
	.string "What are they arguing about?$"

FlowerShop_Lilligant_Text_2:
# 174 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Lilligant points at your Pokémon!\p"
	.string "Teach a Pokémon Solar Blade?$"

FlowerShop_Lilligant_Text_3:
# 181 "data//maps/MirrohFightingDojo/scripts.pory"
	.string "Teach a Pokémon Solar Blade?$"
