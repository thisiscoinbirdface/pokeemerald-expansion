# 1 "data//maps/MirrohBaseCamp/scripts.pory"

# 2 "data//maps/MirrohBaseCamp/scripts.pory"
    .set LOCALID_MARTHA, 5
# 3 "data//maps/MirrohBaseCamp/scripts.pory"
    .set LOCALID_RUE, 7

MirrohBaseCamp_MapScripts::
	.byte 0


MirrohBaseCamp_EventScript_Vendor1::
# 12 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 13 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 14 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor1_Text_0
# 15 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 16 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor1_Inventory
# 17 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor1_Text_1, MSGBOX_DEFAULT
# 18 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 22 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor1_Inventory:
# 23 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 24 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 25 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 26 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_Vendor2::
# 30 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 31 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 32 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor2_Text_0
# 33 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 34 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor2_Inventory
# 35 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor2_Text_1, MSGBOX_DEFAULT
# 36 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 40 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor2_Inventory:
# 41 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 42 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ICE_GEM
# 43 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 44 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_Vendor3::
# 48 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 49 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 50 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_EventScript_Vendor3_Text_0
# 51 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 52 "data//maps/MirrohBaseCamp/scripts.pory"
	pokemart MirrohBaseCamp_Vendor3_Inventory
# 53 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_Vendor3_Text_1, MSGBOX_DEFAULT
# 54 "data//maps/MirrohBaseCamp/scripts.pory"
	release
	end


	.align 2
# 58 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Vendor3_Inventory:
# 59 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 60 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_SODA_POP
# 61 "data//maps/MirrohBaseCamp/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

MirrohBaseCamp_EventScript_NPC1::
# 68 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 69 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 70 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC1_Text_0
# 71 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


MirrohBaseCamp_EventScript_NPC2::
# 75 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 76 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 77 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_0
# 78 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC2_Text_1
# 79 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_2
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC2_Text_3
# 81 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 82 "data//maps/MirrohBaseCamp/scripts.pory"
	hidefollower
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_EventScript_NPC2_Movement_0
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_MARTHA, MirrohBaseCamp_EventScript_NPC2_Movement_1
# 85 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 86 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject LOCALID_MARTHA
# 87 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_2
# 88 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_EventScript_NPC2_Text_4
# 89 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 90 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_HIDE_GRAVEYARD_HISTORIAN
# 91 "data//maps/MirrohBaseCamp/scripts.pory"
	clearflag FLAG_HIDE_MIRROHBASECAMP_HISTORIAN
# 92 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


MirrohBaseCamp_Greavard_Outside::
# 96 "data//maps/MirrohBaseCamp/scripts.pory"
	playmoncry SPECIES_GREAVARD, CRY_MODE_NORMAL
# 98 "data//maps/MirrohBaseCamp/scripts.pory"
	checkitem ITEM_RARE_BONE
# 100 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Greavard_Outside_1
# 142 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_6, MSGBOX_NPC
	end

MirrohBaseCamp_Greavard_Outside_1:
# 101 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 102 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_0, MSGBOX_YESNO
# 103 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Greavard_Outside_5
	end

MirrohBaseCamp_Greavard_Outside_5:
# 104 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_1
# 105 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 11, MirrohBaseCamp_Greavard_Outside_Movement_0
# 107 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 108 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 11
# 109 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_2
# 110 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 12, MirrohBaseCamp_Greavard_Outside_Movement_1
# 112 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 113 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 12
# 114 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_3
# 115 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 117 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROH_GREAVARD_BLOCKER
# 119 "data//maps/MirrohBaseCamp/scripts.pory"
	addobject LOCALID_MARTHA
# 120 "data//maps/MirrohBaseCamp/scripts.pory"
	setobjectxy LOCALID_MARTHA, 5, 9
# 122 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Greavard_Outside_Movement_2
# 123 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_2
# 124 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_4
# 125 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 126 "data//maps/MirrohBaseCamp/scripts.pory"
	hidefollower
# 128 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_MARTHA, MirrohBaseCamp_Greavard_Outside_Movement_3
# 129 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 132 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_2
# 133 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Greavard_Outside_Text_5
# 134 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_OfferMegaStone
# 136 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


MirrohBaseCamp_Martha_OfferMegaStone::
# 149 "data//maps/MirrohBaseCamp/scripts.pory"
	message MirrohBaseCamp_Martha_OfferMegaStone_Text_0
# 150 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmessage
# 151 "data//maps/MirrohBaseCamp/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, MirrohBaseCamp_Martha_OfferMegaStone_Text_1, MirrohBaseCamp_Martha_OfferMegaStone_Text_2, MirrohBaseCamp_Martha_OfferMegaStone_Text_3, MirrohBaseCamp_Martha_OfferMegaStone_Text_4, MirrohBaseCamp_Martha_OfferMegaStone_Text_5, MirrohBaseCamp_Martha_OfferMegaStone_Text_6, MirrohBaseCamp_Martha_OfferMegaStone_Text_7, MirrohBaseCamp_Martha_OfferMegaStone_Text_8, MirrohBaseCamp_Martha_OfferMegaStone_Text_9, MirrohBaseCamp_Martha_OfferMegaStone_Text_10, MirrohBaseCamp_Martha_OfferMegaStone_Text_11, MirrohBaseCamp_Martha_OfferMegaStone_Text_12, MirrohBaseCamp_Martha_OfferMegaStone_Text_13, MirrohBaseCamp_Martha_OfferMegaStone_Text_14, MirrohBaseCamp_Martha_OfferMegaStone_Text_15, MirrohBaseCamp_Martha_OfferMegaStone_Text_16, MirrohBaseCamp_Martha_OfferMegaStone_Text_17, MirrohBaseCamp_Martha_OfferMegaStone_Text_18, MirrohBaseCamp_Martha_OfferMegaStone_Text_19
# 158 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_2
MirrohBaseCamp_Martha_OfferMegaStone_1:
# 159 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_5
MirrohBaseCamp_Martha_OfferMegaStone_4:
# 160 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_8
MirrohBaseCamp_Martha_OfferMegaStone_7:
# 161 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_11
MirrohBaseCamp_Martha_OfferMegaStone_10:
# 162 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_14
MirrohBaseCamp_Martha_OfferMegaStone_13:
# 163 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_17
MirrohBaseCamp_Martha_OfferMegaStone_16:
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_20
MirrohBaseCamp_Martha_OfferMegaStone_19:
# 165 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_23
MirrohBaseCamp_Martha_OfferMegaStone_22:
# 166 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_26
MirrohBaseCamp_Martha_OfferMegaStone_25:
# 167 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_29
MirrohBaseCamp_Martha_OfferMegaStone_28:
# 168 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_32
MirrohBaseCamp_Martha_OfferMegaStone_31:
# 169 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_35
MirrohBaseCamp_Martha_OfferMegaStone_34:
# 170 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_38
MirrohBaseCamp_Martha_OfferMegaStone_37:
# 171 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_41
MirrohBaseCamp_Martha_OfferMegaStone_40:
# 172 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_44
MirrohBaseCamp_Martha_OfferMegaStone_43:
# 173 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_47
MirrohBaseCamp_Martha_OfferMegaStone_46:
# 174 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_50
MirrohBaseCamp_Martha_OfferMegaStone_49:
# 175 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_53
MirrohBaseCamp_Martha_OfferMegaStone_52:
# 176 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 18
	goto_if_eq MirrohBaseCamp_Martha_OfferMegaStone_55
	return

MirrohBaseCamp_Martha_OfferMegaStone_2:
# 158 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_MEDICHAMITE
# 158 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_1

MirrohBaseCamp_Martha_OfferMegaStone_5:
# 159 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_AGGRONITE
# 159 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_4

MirrohBaseCamp_Martha_OfferMegaStone_8:
# 160 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_ALTARIANITE
# 160 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_7

MirrohBaseCamp_Martha_OfferMegaStone_11:
# 161 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_LOPUNNITE
# 161 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_10

MirrohBaseCamp_Martha_OfferMegaStone_14:
# 162 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_BANETTITE
# 162 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_13

MirrohBaseCamp_Martha_OfferMegaStone_17:
# 163 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_ABOMASITE
# 163 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_16

MirrohBaseCamp_Martha_OfferMegaStone_20:
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_GYARADOSITE
# 164 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_19

MirrohBaseCamp_Martha_OfferMegaStone_23:
# 165 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_MAWILITE
# 165 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_22

MirrohBaseCamp_Martha_OfferMegaStone_26:
# 166 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_GARDEVOIRITE
# 166 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_25

MirrohBaseCamp_Martha_OfferMegaStone_29:
# 167 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_GALLADITE
# 167 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_28

MirrohBaseCamp_Martha_OfferMegaStone_32:
# 168 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_HOUNDOOMINITE
# 168 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_31

MirrohBaseCamp_Martha_OfferMegaStone_35:
# 169 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_METAGROSSITE
# 169 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_34

MirrohBaseCamp_Martha_OfferMegaStone_38:
# 170 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_SCIZORITE
# 170 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_37

MirrohBaseCamp_Martha_OfferMegaStone_41:
# 171 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_KANGASKHANITE
# 171 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_40

MirrohBaseCamp_Martha_OfferMegaStone_44:
# 172 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_PINSIRITE
# 172 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_43

MirrohBaseCamp_Martha_OfferMegaStone_47:
# 173 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_SHARPEDONITE
# 173 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_46

MirrohBaseCamp_Martha_OfferMegaStone_50:
# 174 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_MANECTITE
# 174 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_49

MirrohBaseCamp_Martha_OfferMegaStone_53:
# 175 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_ABSOLITE
# 175 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	goto MirrohBaseCamp_Martha_OfferMegaStone_52

MirrohBaseCamp_Martha_OfferMegaStone_55:
# 176 "data//maps/MirrohBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_LUCARIONITE
# 176 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_GiveMegaStone
	return


MirrohBaseCamp_Martha_GiveMegaStone::
# 180 "data//maps/MirrohBaseCamp/scripts.pory"
	showitemdescription
# 181 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Martha_GiveMegaStone_Text_0, MSGBOX_YESNO
# 182 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Martha_GiveMegaStone_1
# 187 "data//maps/MirrohBaseCamp/scripts.pory"
	hideitemdescription
# 188 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_OfferMegaStone
	return

MirrohBaseCamp_Martha_GiveMegaStone_1:
# 183 "data//maps/MirrohBaseCamp/scripts.pory"
	hideitemdescription
# 184 "data//maps/MirrohBaseCamp/scripts.pory"
	giveitem VAR_0x8006
# 185 "data//maps/MirrohBaseCamp/scripts.pory"
	goto MirrohBaseCamp_Martha_End
	return


MirrohBaseCamp_Martha_End::
# 194 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_EventScript_NPC2_Text_2
# 195 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Martha_End_Text_0
# 196 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 198 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_MARTHA, MirrohBaseCamp_Martha_End_Movement_0
# 199 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 200 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject LOCALID_MARTHA
# 202 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end


MirrohBaseCamp_Rue_Trigger::
# 213 "data//maps/MirrohBaseCamp/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_MASTERBALL_RUE, MirrohBaseCamp_Rue_Trigger_2
# 217 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 218 "data//maps/MirrohBaseCamp/scripts.pory"
	opendoor 13, 27
# 219 "data//maps/MirrohBaseCamp/scripts.pory"
	waitdooranim
# 221 "data//maps/MirrohBaseCamp/scripts.pory"
	addobject LOCALID_RUE
# 222 "data//maps/MirrohBaseCamp/scripts.pory"
	setobjectxy LOCALID_RUE, 13, 27
# 224 "data//maps/MirrohBaseCamp/scripts.pory"
	delay 8
# 226 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Rue_Trigger_Movement_0
# 227 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 228 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_RUE, MirrohBaseCamp_Rue_Trigger_Movement_1
# 229 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 230 "data//maps/MirrohBaseCamp/scripts.pory"
	closedoor 13, 27
# 231 "data//maps/MirrohBaseCamp/scripts.pory"
	waitdooranim
# 232 "data//maps/MirrohBaseCamp/scripts.pory"
	delay 16
# 233 "data//maps/MirrohBaseCamp/scripts.pory"
	speakername MirrohBaseCamp_Rue_Trigger_Text_0
# 234 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Rue_Trigger_Text_1
# 235 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 236 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement LOCALID_RUE, MirrohBaseCamp_Rue_Trigger_Movement_2
# 237 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 238 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject LOCALID_RUE
# 239 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_MASTERBALL_RUE
# 240 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Rue_Trigger_2:
	end


MirrohBaseCamp_Trainer_A::
# 267 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 268 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 270 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_A_Text_0, MSGBOX_YESNO
# 271 "data//maps/MirrohBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Trainer_A_2
MirrohBaseCamp_Trainer_A_1:
# 282 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Trainer_A_2:
# 272 "data//maps/MirrohBaseCamp/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHEXT_D, MirrohBaseCamp_Trainer_A_Text_1
# 273 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_TRAINER_A
# 274 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_A_Text_2
# 275 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 276 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Trainer_A_Movement_0
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 8, MirrohBaseCamp_Trainer_A_Movement_1
# 278 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 279 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 8
	goto MirrohBaseCamp_Trainer_A_1


MirrohBaseCamp_Trainer_B::
# 288 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 289 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 291 "data//maps/MirrohBaseCamp/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_TRAINER_A, MirrohBaseCamp_Trainer_B_2
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_B_Text_3, MSGBOX_NPC
MirrohBaseCamp_Trainer_B_1:
# 305 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Trainer_B_2:
# 292 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_B_Text_0
# 293 "data//maps/MirrohBaseCamp/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHEXT_E, MirrohBaseCamp_Trainer_B_Text_1
# 294 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_TRAINER_B
# 295 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_B_Text_2
# 296 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 297 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Trainer_A_Movement_0
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 9, MirrohBaseCamp_Trainer_B_Movement_0
# 299 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 300 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 9
	goto MirrohBaseCamp_Trainer_B_1


MirrohBaseCamp_Trainer_C::
# 312 "data//maps/MirrohBaseCamp/scripts.pory"
	lockall
# 313 "data//maps/MirrohBaseCamp/scripts.pory"
	faceplayer
# 315 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_C_Text_0, MSGBOX_NPC
# 317 "data//maps/MirrohBaseCamp/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_TRAINER_B, MirrohBaseCamp_Trainer_C_2
MirrohBaseCamp_Trainer_C_1:
# 329 "data//maps/MirrohBaseCamp/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Trainer_C_2:
# 318 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_C_Text_1
# 319 "data//maps/MirrohBaseCamp/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHEXT_F, MirrohBaseCamp_Trainer_C_Text_2
# 320 "data//maps/MirrohBaseCamp/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_TRAINER_C
# 321 "data//maps/MirrohBaseCamp/scripts.pory"
	msgbox MirrohBaseCamp_Trainer_C_Text_3
# 322 "data//maps/MirrohBaseCamp/scripts.pory"
	release
# 323 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Trainer_A_Movement_0
# 324 "data//maps/MirrohBaseCamp/scripts.pory"
	applymovement 10, MirrohBaseCamp_Trainer_B_Movement_0
# 325 "data//maps/MirrohBaseCamp/scripts.pory"
	waitmovement 0
# 326 "data//maps/MirrohBaseCamp/scripts.pory"
	removeobject 10
	goto MirrohBaseCamp_Trainer_C_1


# 83 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_EventScript_NPC2_Movement_0:
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 83 "data//maps/MirrohBaseCamp/scripts.pory"
	face_down
	step_end

# 84 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_EventScript_NPC2_Movement_1:
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 84 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
	step_end

# 106 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Greavard_Outside_Movement_0:
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 106 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
	step_end

# 111 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Greavard_Outside_Movement_1:
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	emote_exclamation_mark
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
# 111 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_fast_up
	step_end

# 122 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Greavard_Outside_Movement_2:
# 122 "data//maps/MirrohBaseCamp/scripts.pory"
	face_down
	step_end

# 128 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Greavard_Outside_Movement_3:
# 128 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
# 128 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
# 128 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
# 128 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
# 128 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
	step_end

# 198 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Martha_End_Movement_0:
# 198 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 198 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 198 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 198 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 198 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 198 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 198 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
	step_end

# 226 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_0:
# 226 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 226 "data//maps/MirrohBaseCamp/scripts.pory"
	face_right
	step_end

# 228 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_1:
# 228 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 228 "data//maps/MirrohBaseCamp/scripts.pory"
	face_left
# 228 "data//maps/MirrohBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

# 236 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Rue_Trigger_Movement_2:
# 236 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 236 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 236 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 236 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 236 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 236 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
# 236 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_right
	step_end

# 276 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Trainer_A_Movement_0:
# 276 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_down
# 276 "data//maps/MirrohBaseCamp/scripts.pory"
	face_up
	step_end

# 277 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Trainer_A_Movement_1:
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_up
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 277 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
	step_end

# 298 "data//maps/MirrohBaseCamp/scripts.pory"
MirrohBaseCamp_Trainer_B_Movement_0:
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
# 298 "data//maps/MirrohBaseCamp/scripts.pory"
	walk_left
	step_end

MirrohBaseCamp_EventScript_Vendor1_Text_0:
# 14 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Our supplies are limited but useful to\n"
	.string "trek up Mt. Mirroh!$"

MirrohBaseCamp_EventScript_Vendor1_Text_1:
# 17 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Come again!$"

MirrohBaseCamp_EventScript_Vendor2_Text_0:
# 32 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "I found all this inside Mt. Mirroh just\n"
	.string "yesterday!$"

MirrohBaseCamp_EventScript_Vendor2_Text_1:
# 35 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "C'mon, have another look!$"

MirrohBaseCamp_EventScript_Vendor3_Text_0:
# 50 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Everything you see is homemade.\n"
	.string "Anything you like?$"

MirrohBaseCamp_EventScript_Vendor3_Text_1:
# 53 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "You didn't like anything?$"

MirrohBaseCamp_EventScript_NPC1_Text_0:
# 70 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "It's so sad and lonely up here...I want\n"
	.string "to grow up fast so I can go see the rest\l"
	.string "of Cormoria!$"

MirrohBaseCamp_EventScript_NPC2_Text_0:
# 77 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "???$"

MirrohBaseCamp_EventScript_NPC2_Text_1:
# 78 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "The Pokémon Graveyard lies ahead.\n"
	.string "Please be respectful.\p"
	.string "...$"

MirrohBaseCamp_EventScript_NPC2_Text_2:
# 79 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Martha$"

MirrohBaseCamp_EventScript_NPC2_Text_3:
# 80 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "My name? It's Martha, dear.\n"
	.string "I manage the graveyard.\p"
	.string "You want to talk to me? Something\n"
	.string "about dreamstones? Well this will be a\l"
	.string "longer conversation, so why don't you\l"
	.string "drop by my house later?$"

MirrohBaseCamp_EventScript_NPC2_Text_4:
# 88 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Come now, boys! Playtime's over!\p"
	.string "...\p"
	.string "Sigh...they just don't listen to me...$"

MirrohBaseCamp_Greavard_Outside_Text_0:
# 102 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Greavard is playing!\n"
	.string "Give it the Old Bone?$"

MirrohBaseCamp_Greavard_Outside_Text_1:
# 104 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Greavard snaps up the Old Bone and\n"
	.string "starts playing with it!$"

MirrohBaseCamp_Greavard_Outside_Text_2:
# 109 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "It ran off with the Old Bone!$"

MirrohBaseCamp_Greavard_Outside_Text_3:
# 114 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "The other one chased after it!\p"
	.string "...\p"
	.string "Will they be okay?$"

MirrohBaseCamp_Greavard_Outside_Text_4:
# 124 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "{PLAYER}! Wait!$"

MirrohBaseCamp_Greavard_Outside_Text_5:
# 133 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Oof...too much running...\p"
	.string "I don't know if it'll help you against\n"
	.string "Team Somber, but I wanted to offer you\l"
	.string "one of these.\p"
	.string "They're extremely rare - prized items in\n"
	.string "my collection!\p"
	.string "But they'll do more good in the world in\n"
	.string "your hands than on my table.$"

MirrohBaseCamp_Greavard_Outside_Text_6:
# 142 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Greavard is playing!$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_0:
# 149 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Choose carefully! You might not get\n"
	.string "another one for a while.$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_1:
# 152 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Medichamite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_2:
# 152 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Aggronite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_3:
# 152 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Altarianite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_4:
# 152 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Lopunnite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_5:
# 152 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Banettite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_6:
# 153 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Abomasite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_7:
# 153 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Gyaradosite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_8:
# 153 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Mawilite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_9:
# 153 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Gardevoirite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_10:
# 153 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Galladite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_11:
# 154 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Houndoominite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_12:
# 154 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Metagrossite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_13:
# 154 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Scizorite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_14:
# 154 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Kangaskhanite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_15:
# 154 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Pinsirite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_16:
# 155 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Sharpedonite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_17:
# 155 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Manectricite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_18:
# 155 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Absolite$"

MirrohBaseCamp_Martha_OfferMegaStone_Text_19:
# 155 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Lucarionite$"

MirrohBaseCamp_Martha_GiveMegaStone_Text_0:
# 181 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Are you sure?$"

MirrohBaseCamp_Martha_End_Text_0:
# 195 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Well then. That's my job done.\p"
	.string "I wish you all the best, {PLAYER}!$"

MirrohBaseCamp_Rue_Trigger_Text_0:
# 233 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Rue$"

MirrohBaseCamp_Rue_Trigger_Text_1:
# 234 "data//maps/MirrohBaseCamp/scripts.pory"
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
# 270 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Haven't you heard? They're closing the\n"
	.string "gym here. So everyone's queueing up to\l"
	.string "get a badge before it closes.\p"
	.string "Wanna do a warm-up battle?$"

MirrohBaseCamp_Trainer_A_Text_1:
# 272 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "You were warmed up already!$"

MirrohBaseCamp_Trainer_A_Text_2:
# 274 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Oh no! I'll have to heal my Pokémon. Hold\n"
	.string "my place in line - I'll be right back!$"

MirrohBaseCamp_Trainer_B_Text_0:
# 292 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "I saw the battle with the other trainer.\n"
	.string "You're not bad, but you'll have to try\l"
	.string "harder than that to beat me!$"

MirrohBaseCamp_Trainer_B_Text_1:
# 293 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Stop trying so hard!$"

MirrohBaseCamp_Trainer_B_Text_2:
# 295 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "If I can't beat a kid like you, what\n"
	.string "chance do I have against Carona?$"

MirrohBaseCamp_Trainer_B_Text_3:
# 302 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "What a dreadfully sad little town!\p"
	.string "It's a wonder this gym lasted so long.$"

MirrohBaseCamp_Trainer_C_Text_0:
# 315 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Get outta here! Carona has only one\n"
	.string "badge left to give and it's mine!$"

MirrohBaseCamp_Trainer_C_Text_1:
# 318 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "What? If you keep looking at me like\n"
	.string "that, I'll make you pay!$"

MirrohBaseCamp_Trainer_C_Text_2:
# 319 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "You made me pay!$"

MirrohBaseCamp_Trainer_C_Text_3:
# 321 "data//maps/MirrohBaseCamp/scripts.pory"
	.string "Grr - fine! Go inside! I bet Carona wipes\n"
	.string "the floor with you!$"
