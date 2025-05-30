RivetshoreCity_StorageBay_MapScripts::
	.byte 0


RivetshoreCity_StorageBay_Slaking::
# 5 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 6 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Slaking_1
# 35 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_4, MSGBOX_NPC
	end

RivetshoreCity_StorageBay_Slaking_1:
# 7 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_0, MSGBOX_YESNO
# 9 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreCity_StorageBay_Slaking_4
# 12 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	fadeoutbgm 1
# 13 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	playse MUS_RG_POKE_FLUTE
# 14 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_1
# 15 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	delay 128
# 16 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	playmoncry SPECIES_SLAKING, CRY_MODE_NORMAL
# 17 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement 1, RivetshoreCity_StorageBay_Slaking_Movement_0
# 18 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	delay 16
# 20 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_2
# 21 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	release
# 22 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Slaking_Movement_1
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement 1, RivetshoreCity_StorageBay_Slaking_Movement_2
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	removeobject 1
# 26 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_3
# 27 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	release
# 28 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	setflag FLAG_RIVETSHORE_STORAGE_BAY_SLAKING
# 29 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	fadedefaultbgm
# 30 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Slaking_4:
	end


RivetshoreCity_StorageBay_Trigger0::
# 41 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	lockall
# 43 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_0, MSGBOX_YESNO
# 44 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_2
RivetshoreCity_StorageBay_Trigger0_1:
# 62 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Trigger0_2:
# 45 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_1, MSGBOX_YESNO
# 46 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_4
	goto RivetshoreCity_StorageBay_Trigger0_1

RivetshoreCity_StorageBay_Trigger0_4:
# 47 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_2, MSGBOX_POKENAV
# 48 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, RivetshoreCity_StorageBay_Trigger0_Text_3, RivetshoreCity_StorageBay_Trigger0_Text_4
# 49 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_6
	goto RivetshoreCity_StorageBay_Trigger0_1

RivetshoreCity_StorageBay_Trigger0_6:
# 51 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Trigger0_Movement_0
# 52 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 58 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	callnative CB2_StorageCutscene
	goto RivetshoreCity_StorageBay_Trigger0_1


RivetshoreCity_StorageBay_Trigger1::
# 67 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	lockall
# 69 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_0, MSGBOX_YESNO
# 70 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_2
RivetshoreCity_StorageBay_Trigger1_1:
# 87 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Trigger1_2:
# 71 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_1, MSGBOX_YESNO
# 72 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_4
	goto RivetshoreCity_StorageBay_Trigger1_1

RivetshoreCity_StorageBay_Trigger1_4:
# 73 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger1_Text_0, MSGBOX_YESNO
# 74 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_6
	goto RivetshoreCity_StorageBay_Trigger1_1

RivetshoreCity_StorageBay_Trigger1_6:
# 76 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Trigger1_Movement_0
# 77 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 83 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	callnative CB2_StorageCutscene
	goto RivetshoreCity_StorageBay_Trigger1_1


# 17 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_0:
# 17 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_in_place_up
	step_end

# 22 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_1:
# 22 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_left
# 22 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	face_right
	step_end

# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_2:
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_up
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
	step_end

# 51 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Trigger0_Movement_0:
# 51 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_right
	step_end

# 76 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Trigger1_Movement_0:
# 76 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_left
# 76 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_up
# 76 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_right
	step_end

RivetshoreCity_StorageBay_Slaking_Text_0:
# 7 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It's asleep...use Poké Flute?$"

RivetshoreCity_StorageBay_Slaking_Text_1:
# 14 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "{PLAYER} played the Poke Flute.$"

RivetshoreCity_StorageBay_Slaking_Text_2:
# 20 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Slaking woke up!$"

RivetshoreCity_StorageBay_Slaking_Text_3:
# 26 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Slaking lumbered off somewhere...was\n"
	.string "waking it up the wrong thing to do?$"

RivetshoreCity_StorageBay_Slaking_Text_4:
# 35 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It's asleep...$"

RivetshoreCity_StorageBay_Trigger0_Text_0:
# 43 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "There's a label on this container...\p"
	.string "CARGO FOR S.S. ELEGANT\p"
	.string "Tap the storage container?$"

RivetshoreCity_StorageBay_Trigger0_Text_1:
# 45 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It sounds hollow...maybe there's enough\n"
	.string "space inside to fit in!\p"
	.string "Enter the storage container?$"

RivetshoreCity_StorageBay_Trigger0_Text_2:
# 47 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Choose carefully! Once you enter,\n"
	.string "there's no coming back!$"

RivetshoreCity_StorageBay_Trigger0_Text_3:
# 48 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Enter$"

RivetshoreCity_StorageBay_Trigger0_Text_4:
# 48 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Leave$"

RivetshoreCity_StorageBay_Trigger1_Text_0:
# 73 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Are you sure? Once you enter, there's\n"
	.string "no coming back!$"
