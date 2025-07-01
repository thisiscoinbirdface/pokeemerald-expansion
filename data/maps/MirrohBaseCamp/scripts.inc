# 1 "data//maps/MirrohBaseCamp/scripts.pory"

# 2 "data//maps/MirrohBaseCamp/scripts.pory"
    .set LOCALID_MARTHA, 5
# 3 "data//maps/MirrohBaseCamp/scripts.pory"
    .set LOCALID_RUE, 7

MirrohBaseCamp_MapScripts::
# 7 "data//maps/MirrohBaseCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MirrohBaseCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MirrohBaseCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_VISITED_MIRROH_BASE_CAMP
	return


MirrohBaseCamp_EventScript_Vendor1::
# 16 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 17 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 18 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor1_Text_0
# 19 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 20 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor1_Inventory
# 21 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor1_Text_1, MSGBOX_DEFAULT
# 22 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 26 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor1_Inventory:
# 27 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 28 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 29 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 30 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_Vendor2::
# 34 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 35 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 36 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor2_Text_0
# 37 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 38 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor2_Inventory
# 39 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor2_Text_1, MSGBOX_DEFAULT
# 40 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 44 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor2_Inventory:
# 45 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 46 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ICE_GEM
# 47 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 48 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 49 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_COIN_CASE
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_Vendor3::
# 53 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 54 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 55 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor3_Text_0
# 56 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 57 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor3_Inventory
# 58 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor3_Text_1, MSGBOX_DEFAULT
# 59 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 63 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor3_Inventory:
# 64 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 65 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_SODA_POP
# 66 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_NPC1::
# 73 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC1_Text_0, MSGBOX_NPC
	end


MirrohBaseCamp_EventScript_NPC2::
# 77 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 78 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 79 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_0
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC2_Text_1
# 81 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_2
# 82 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC2_Text_3
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	hidefollower
# 85 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_EventScript_NPC2_Movement_0
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_MARTHA, MirrohBaseCamp_EventScript_NPC2_Movement_1
# 87 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 88 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject LOCALID_MARTHA
# 89 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_2
# 90 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC2_Text_4
# 91 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 92 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_HIDE_GRAVEYARD_HISTORIAN
# 93 "data//maps/MirrohBaseCamp/scripts.pory"
	clearflag FLAG_HIDE_MIRROHBASECAMP_HISTORIAN
# 94 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


MirrohBaseCamp_Greavard_Outside::
# 98 "data//maps/MirrohBaseCamp/scripts.pory"
	playmoncry SPECIES_GREAVARD, CRY_MODE_NORMAL
# 100 "data//maps/MirrohBaseCamp/scripts.pory"
	checkitem ITEM_RARE_BONE
# 102 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Greavard_Outside_1
# 149 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_7, MSGBOX_NPC
	end

MirrohBaseCamp_Greavard_Outside_1:
# 103 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 104 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_0, MSGBOX_YESNO
# 105 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Greavard_Outside_5
# 146 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Greavard_Outside_5:
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_1
# 107 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 108 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 11, MirrohBaseCamp_Greavard_Outside_Movement_0
# 109 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 110 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 11
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_2
# 112 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 12, MirrohBaseCamp_Greavard_Outside_Movement_1
# 114 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 115 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 12
# 116 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_3
# 117 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 119 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROH_GREAVARD_BLOCKER
# 121 "data//maps/MirrohBaseCamp/scripts.pory"
	addobject LOCALID_MARTHA
# 122 "data//maps/MirrohBaseCamp/scripts.pory"
	setobjectxy LOCALID_MARTHA, 5, 9
# 124 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Greavard_Outside_Movement_2
# 125 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_2
# 126 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_4
# 127 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 128 "data//maps/MirrohBaseCamp/scripts.pory"
	hidefollower
# 130 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_MARTHA, MirrohBaseCamp_Greavard_Outside_Movement_3
# 131 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 134 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_2
# 135 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_5
# 136 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 137 "data//maps/MirrohBaseCamp/scripts.pory"
	delay 8
# 138 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_6, MSGBOX_POKENAV
# 139 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 140 "data//maps/MirrohBaseCamp/scripts.pory"
	delay 8
# 141 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_OfferMegaStone
# 143 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


MirrohBaseCamp_Martha_OfferMegaStone::
# 155 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_Martha_OfferMegaStone_Text_0
# 156 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 157 "data//maps/MirrohBaseCamp/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, MirrohBaseCamp_Martha_OfferMegaStone_Text_1, MirrohBaseCamp_Martha_OfferMegaStone_Text_2, MirrohBaseCamp_Martha_OfferMegaStone_Text_3, MirrohBaseCamp_Martha_OfferMegaStone_Text_4, MirrohBaseCamp_Martha_OfferMegaStone_Text_5, MirrohBaseCamp_Martha_OfferMegaStone_Text_6, MirrohBaseCamp_Martha_OfferMegaStone_Text_7, MirrohBaseCamp_Martha_OfferMegaStone_Text_8, MirrohBaseCamp_Martha_OfferMegaStone_Text_9, MirrohBaseCamp_Martha_OfferMegaStone_Text_10, MirrohBaseCamp_Martha_OfferMegaStone_Text_11, MirrohBaseCamp_Martha_OfferMegaStone_Text_12, MirrohBaseCamp_Martha_OfferMegaStone_Text_13, MirrohBaseCamp_Martha_OfferMegaStone_Text_14, MirrohBaseCamp_Martha_OfferMegaStone_Text_15, MirrohBaseCamp_Martha_OfferMegaStone_Text_16, MirrohBaseCamp_Martha_OfferMegaStone_Text_17, MirrohBaseCamp_Martha_OfferMegaStone_Text_18
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_2
MirrohBaseCamp_Martha_OfferMegaStone_1:
# 165 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_5
MirrohBaseCamp_Martha_OfferMegaStone_4:
# 166 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_8
MirrohBaseCamp_Martha_OfferMegaStone_7:
# 167 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_11
MirrohBaseCamp_Martha_OfferMegaStone_10:
# 168 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_14
MirrohBaseCamp_Martha_OfferMegaStone_13:
# 169 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_17
MirrohBaseCamp_Martha_OfferMegaStone_16:
# 170 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_20
MirrohBaseCamp_Martha_OfferMegaStone_19:
# 171 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_23
MirrohBaseCamp_Martha_OfferMegaStone_22:
# 172 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_26
MirrohBaseCamp_Martha_OfferMegaStone_25:
# 173 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_29
MirrohBaseCamp_Martha_OfferMegaStone_28:
# 174 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_32
MirrohBaseCamp_Martha_OfferMegaStone_31:
# 175 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_35
MirrohBaseCamp_Martha_OfferMegaStone_34:
# 176 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_38
MirrohBaseCamp_Martha_OfferMegaStone_37:
# 177 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_41
MirrohBaseCamp_Martha_OfferMegaStone_40:
# 178 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_44
MirrohBaseCamp_Martha_OfferMegaStone_43:
# 179 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_47
MirrohBaseCamp_Martha_OfferMegaStone_46:
# 180 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_50
MirrohBaseCamp_Martha_OfferMegaStone_49:
# 181 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_52
	return

MirrohBaseCamp_Martha_OfferMegaStone_2:
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_MEDICHAMITE
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_1

MirrohBaseCamp_Martha_OfferMegaStone_5:
# 165 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_AGGRONITE
# 165 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_4

MirrohBaseCamp_Martha_OfferMegaStone_8:
# 166 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_ALTARIANITE
# 166 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_7

MirrohBaseCamp_Martha_OfferMegaStone_11:
# 167 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_LOPUNNITE
# 167 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_10

MirrohBaseCamp_Martha_OfferMegaStone_14:
# 168 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_BANETTITE
# 168 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_13

MirrohBaseCamp_Martha_OfferMegaStone_17:
# 169 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_AMPHAROSITE
# 169 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_16

MirrohBaseCamp_Martha_OfferMegaStone_20:
# 170 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_GYARADOSITE
# 170 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_19

MirrohBaseCamp_Martha_OfferMegaStone_23:
# 171 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_MAWILITE
# 171 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_22

MirrohBaseCamp_Martha_OfferMegaStone_26:
# 172 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_GARDEVOIRITE
# 172 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_25

MirrohBaseCamp_Martha_OfferMegaStone_29:
# 173 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_GALLADITE
# 173 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_28

MirrohBaseCamp_Martha_OfferMegaStone_32:
# 174 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_HOUNDOOMINITE
# 174 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_31

MirrohBaseCamp_Martha_OfferMegaStone_35:
# 175 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_METAGROSSITE
# 175 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_34

MirrohBaseCamp_Martha_OfferMegaStone_38:
# 176 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_SCIZORITE
# 176 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_37

MirrohBaseCamp_Martha_OfferMegaStone_41:
# 177 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_KANGASKHANITE
# 177 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_40

MirrohBaseCamp_Martha_OfferMegaStone_44:
# 178 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_PINSIRITE
# 178 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_43

MirrohBaseCamp_Martha_OfferMegaStone_47:
# 179 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_SHARPEDONITE
# 179 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_46

MirrohBaseCamp_Martha_OfferMegaStone_50:
# 180 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_MANECTITE
# 180 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_49

MirrohBaseCamp_Martha_OfferMegaStone_52:
# 181 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_ABSOLITE
# 181 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	return


MirrohBaseCamp_Martha_GiveMegaStone::
# 185 "data//maps/MirrohBaseCamp/scripts.pory"
	showitemdescription
# 186 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Martha_GiveMegaStone_Text_0, MSGBOX_YESNO
# 187 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Martha_GiveMegaStone_1
# 192 "data//maps/MirrohBaseCamp/scripts.pory"
	hideitemdescription
# 193 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_OfferMegaStone
	return

MirrohBaseCamp_Martha_GiveMegaStone_1:
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	hideitemdescription
# 189 "data//maps/MirrohBaseCamp/scripts.pory"
	giveitem VAR_0x8006
# 190 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_End
	return


MirrohBaseCamp_Martha_End::
# 199 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_2
# 200 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Martha_End_Text_0
# 201 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 203 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_MARTHA, MirrohBaseCamp_Martha_End_Movement_0
# 204 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 205 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject LOCALID_MARTHA
# 207 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


MirrohBaseCamp_Rue_Trigger::
# 218 "data//maps/MirrohBaseCamp/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_MASTERBALL_RUE, MirrohBaseCamp_Rue_Trigger_2
# 219 "data//maps/MirrohBaseCamp/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, MirrohBaseCamp_Rue_Trigger_5
# 221 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 222 "data//maps/MirrohBaseCamp/scripts.pory"
	opendoor 13, 27
# 223 "data//maps/MirrohBaseCamp/scripts.pory"
	waitdooranim
# 225 "data//maps/MirrohBaseCamp/scripts.pory"
	addobject LOCALID_RUE
# 226 "data//maps/MirrohBaseCamp/scripts.pory"
	setobjectxy LOCALID_RUE, 13, 27
# 228 "data//maps/MirrohBaseCamp/scripts.pory"
	delay 8
# 230 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Rue_Trigger_Movement_0
# 231 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 232 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_RUE, MirrohBaseCamp_Rue_Trigger_Movement_1
# 233 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 234 "data//maps/MirrohBaseCamp/scripts.pory"
	closedoor 13, 27
# 235 "data//maps/MirrohBaseCamp/scripts.pory"
	waitdooranim
# 236 "data//maps/MirrohBaseCamp/scripts.pory"
	delay 16
# 237 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_Rue_Trigger_Text_0
# 238 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Rue_Trigger_Text_1
# 239 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 240 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_RUE, MirrohBaseCamp_Rue_Trigger_Movement_2
# 241 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 242 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject LOCALID_RUE
# 243 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_MASTERBALL_RUE
# 244 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Rue_Trigger_2:
	end

MirrohBaseCamp_Rue_Trigger_5:
	end


MirrohBaseCamp_Trainer_A::
# 271 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 272 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 274 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_A_Text_0, MSGBOX_YESNO
# 275 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Trainer_A_2
MirrohBaseCamp_Trainer_A_1:
# 286 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Trainer_A_2:
# 276 "data//maps/MirrohBaseCamp/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHEXT_D, MirrohBaseCamp_Trainer_A_Text_1
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_TRAINER_A
# 278 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_A_Text_2
# 279 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 280 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Trainer_A_Movement_0
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 8, MirrohBaseCamp_Trainer_A_Movement_1
# 282 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 283 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 8
	goto MirrohBaseCamp_Trainer_A_1


MirrohBaseCamp_Trainer_B::
# 292 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 293 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 295 "data//maps/MirrohBaseCamp/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_TRAINER_A, MirrohBaseCamp_Trainer_B_2
# 306 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_B_Text_3, MSGBOX_NPC
MirrohBaseCamp_Trainer_B_1:
# 309 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Trainer_B_2:
# 296 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_B_Text_0
# 297 "data//maps/MirrohBaseCamp/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHEXT_E, MirrohBaseCamp_Trainer_B_Text_1
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_TRAINER_B
# 299 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_B_Text_2
# 300 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 301 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Trainer_A_Movement_0
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 9, MirrohBaseCamp_Trainer_B_Movement_0
# 303 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 304 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 9
	goto MirrohBaseCamp_Trainer_B_1


MirrohBaseCamp_Trainer_C::
# 316 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 317 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 319 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_C_Text_0, MSGBOX_NPC
# 321 "data//maps/MirrohBaseCamp/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_TRAINER_B, MirrohBaseCamp_Trainer_C_2
MirrohBaseCamp_Trainer_C_1:
# 333 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Trainer_C_2:
# 322 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_C_Text_1
# 323 "data//maps/MirrohBaseCamp/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHEXT_F, MirrohBaseCamp_Trainer_C_Text_2
# 324 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_TRAINER_C
# 325 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_C_Text_3
# 326 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 327 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Trainer_A_Movement_0
# 328 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 10, MirrohBaseCamp_Trainer_B_Movement_0
# 329 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 330 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 10
	goto MirrohBaseCamp_Trainer_C_1


# 85 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_EventScript_NPC2_Movement_0:
# 85 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 85 "data//maps/MirrohBaseCamp/scripts.pory"
	face_down
	step_end

# 86 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_EventScript_NPC2_Movement_1:
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
	step_end

# 108 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Greavard_Outside_Movement_0:
# 108 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 108 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 108 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 108 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 108 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 108 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 108 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
	step_end

# 113 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Greavard_Outside_Movement_1:
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	emote_exclamation_mark
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
	step_end

# 124 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Greavard_Outside_Movement_2:
# 124 "data//maps/MirrohBaseCamp/scripts.pory"
	face_down
	step_end

# 130 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Greavard_Outside_Movement_3:
# 130 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
# 130 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
# 130 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
# 130 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
# 130 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
	step_end

# 203 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Martha_End_Movement_0:
# 203 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 203 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 203 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 203 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 203 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 203 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 203 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
	step_end

# 230 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_0:
# 230 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 230 "data//maps/MirrohBaseCamp/scripts.pory"
	face_right
	step_end

# 232 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_1:
# 232 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 232 "data//maps/MirrohBaseCamp/scripts.pory"
	face_left
# 232 "data//maps/MirrohBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

# 240 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_2:
# 240 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 240 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 240 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 240 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 240 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 240 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 240 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
	step_end

# 280 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Trainer_A_Movement_0:
# 280 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 280 "data//maps/MirrohBaseCamp/scripts.pory"
	face_up
	step_end

# 281 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Trainer_A_Movement_1:
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 281 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
	step_end

# 302 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Trainer_B_Movement_0:
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
	step_end

MirrohBaseCamp_EventScript_Vendor1_Text_0:
# 18 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Our supplies are limited but useful\n"
	.string "for a trek up Mt. Mirroh!$"

MirrohBaseCamp_EventScript_Vendor1_Text_1:
# 21 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Come again!$"

MirrohBaseCamp_EventScript_Vendor2_Text_0:
# 36 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "I found all this inside Mt. Mirroh\n"
	.string "just yesterday!$"

MirrohBaseCamp_EventScript_Vendor2_Text_1:
# 39 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "C'mon, have another look!$"

MirrohBaseCamp_EventScript_Vendor3_Text_0:
# 55 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Everything you see is homemade.\n"
	.string "Anything you like?$"

MirrohBaseCamp_EventScript_Vendor3_Text_1:
# 58 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "You didn't like anything?$"

MirrohBaseCamp_EventScript_NPC1_Text_0:
# 73 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "It's so sad and lonely up here...I want\n"
	.string "to grow up fast so I can go see the rest\l"
	.string "of Cormoria!$"

MirrohBaseCamp_EventScript_NPC2_Text_0:
# 79 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "???$"

MirrohBaseCamp_EventScript_NPC2_Text_1:
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "The Pokémon Graveyard lies ahead.\n"
	.string "Please be respectful.\p"
	.string "...$"

MirrohBaseCamp_EventScript_NPC2_Text_2:
# 81 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Martha$"

MirrohBaseCamp_EventScript_NPC2_Text_3:
# 82 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "My name? It's Martha, dear.\n"
	.string "I manage the graveyard.\p"
	.string "You want to talk to me?\n"
	.string "Something about dreamstones?\p"
	.string "This will be a long conversation, so why\n"
	.string "don't you drop by my house later?$"

MirrohBaseCamp_EventScript_NPC2_Text_4:
# 90 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Come now, boys! Playtime's over!\p"
	.string "...\p"
	.string "Sigh...they just don't listen to me...$"

MirrohBaseCamp_Greavard_Outside_Text_0:
# 104 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Greavard is playing!\n"
	.string "Give it the Old Bone?$"

MirrohBaseCamp_Greavard_Outside_Text_1:
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Greavard snaps up the Old Bone and\n"
	.string "starts playing with it!$"

MirrohBaseCamp_Greavard_Outside_Text_2:
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "It ran off with the Old Bone!$"

MirrohBaseCamp_Greavard_Outside_Text_3:
# 116 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "The other one chased after it!\p"
	.string "...\p"
	.string "Will they be okay?$"

MirrohBaseCamp_Greavard_Outside_Text_4:
# 126 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "{PLAYER}! Wait!$"

MirrohBaseCamp_Greavard_Outside_Text_5:
# 135 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Oof...too much running...\p"
	.string "I don't know if it'll help you against\n"
	.string "Team Somber, but I wanted to offer you\l"
	.string "one of these.\p"
	.string "They're extremely rare - prized items in\n"
	.string "my collection!\p"
	.string "But they'll do more good in the world in\n"
	.string "your hands than on my table.$"

MirrohBaseCamp_Greavard_Outside_Text_6:
# 138 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Choose carefully - you'll only\n"
	.string "get once chance this game!$"

MirrohBaseCamp_Greavard_Outside_Text_7:
# 149 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Greavard is playing!$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_0:
# 155 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Which one would you like?$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_1:
# 158 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Medichamite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_2:
# 158 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Aggronite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_3:
# 158 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Altarianite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_4:
# 158 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Lopunnite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_5:
# 158 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Banettite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_6:
# 159 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Ampharosite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_7:
# 159 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Gyaradosite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_8:
# 159 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Mawilite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_9:
# 159 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Gardevoirite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_10:
# 159 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Galladite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_11:
# 160 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Houndoominite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_12:
# 160 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Metagrossite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_13:
# 160 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Scizorite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_14:
# 160 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Kangaskhanite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_15:
# 160 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Pinsirite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_16:
# 161 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Sharpedonite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_17:
# 161 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Manectricite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_18:
# 161 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Absolite$"

MirrohBaseCamp_Martha_GiveMegaStone_Text_0:
# 186 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Are you sure?$"

MirrohBaseCamp_Martha_End_Text_0:
# 200 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Well then. That's my job done.\p"
	.string "I wish you all the best, {PLAYER}!$"

MirrohBaseCamp_Rue_Trigger_Text_0:
# 237 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Rue$"

MirrohBaseCamp_Rue_Trigger_Text_1:
# 238 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "{PLAYER}? What are you doing all the\n"
	.string "way over here?\p"
	.string "...\p"
	.string "Ah, yes. The detectives are correct.\n"
	.string "Martha is an expert on Cormorian\l"
	.string "history. She would be helpful.\p"
	.string "I came here to make some social calls.\n"
	.string "Since Mirroh Base Camp is quiet and\l"
	.string "secluded, many academics reside here -\l"
	.string "Martha being one of them.\p"
	.string "Take care, {PLAYER}. Stay safe in Mt.\n"
	.string "Mirroh. Listen to what the detectives\l"
	.string "tell you to do, okay?$"

MirrohBaseCamp_Trainer_A_Text_0:
# 274 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Haven't you heard?\p"
	.string "They're closing the gym here, so\n"
	.string "everyone's queueing up to get a badge.\p"
	.string "Wanna do a warm-up battle?$"

MirrohBaseCamp_Trainer_A_Text_1:
# 276 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "You were warmed up already!$"

MirrohBaseCamp_Trainer_A_Text_2:
# 278 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Oh no! I'll have to heal my Pokémon. Hold\n"
	.string "my place in line - I'll be right back!$"

MirrohBaseCamp_Trainer_B_Text_0:
# 296 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "I saw the battle with the other trainer.\n"
	.string "You're not bad, but you'll have to try\l"
	.string "harder than that to beat me!$"

MirrohBaseCamp_Trainer_B_Text_1:
# 297 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Stop trying so hard!$"

MirrohBaseCamp_Trainer_B_Text_2:
# 299 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "If I can't beat a kid like you, what\n"
	.string "chance do I have against Carona?$"

MirrohBaseCamp_Trainer_B_Text_3:
# 306 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "What a dreadfully sad little town!\p"
	.string "It's a wonder this gym lasted so long.$"

MirrohBaseCamp_Trainer_C_Text_0:
# 319 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Get outta here! Carona has only one\n"
	.string "badge left to give and it's mine!$"

MirrohBaseCamp_Trainer_C_Text_1:
# 322 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "What? If you keep looking at me like\n"
	.string "that, I'll make you pay!$"

MirrohBaseCamp_Trainer_C_Text_2:
# 323 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "You made me pay!$"

MirrohBaseCamp_Trainer_C_Text_3:
# 325 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Grr - fine! You can go first then.\n"
	.string "I bet Carona wipes the floor with you!$"
