RivetshoreCity_StorageBay_MapScripts::
	.byte 0


RivetshoreCity_StorageBay_Slaking::
# 5 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 6 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Slaking_1
# 36 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_4, MSGBOX_NPC
	end

RivetshoreCity_StorageBay_Slaking_1:
# 7 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_0, MSGBOX_YESNO
# 8 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	release
# 10 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreCity_StorageBay_Slaking_4
# 13 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	fadeoutbgm 1
# 14 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	playse MUS_RG_POKE_FLUTE
# 15 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_1
# 16 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	delay 128
# 17 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	playmoncry SPECIES_SLAKING, CRY_MODE_NORMAL
# 18 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement 1, RivetshoreCity_StorageBay_Slaking_Movement_0
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 20 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	delay 16
# 21 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_2
# 22 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	release
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Slaking_Movement_1
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement 1, RivetshoreCity_StorageBay_Slaking_Movement_2
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 26 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	removeobject 1
# 27 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_3
# 28 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	release
# 29 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	setflag FLAG_RIVETSHORE_STORAGE_BAY_SLAKING
# 30 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	fadedefaultbgm
# 31 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Slaking_4:
	end


RivetshoreCity_StorageBay_Trigger0::
# 42 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	lockall
# 44 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_0, MSGBOX_YESNO
# 45 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_2
RivetshoreCity_StorageBay_Trigger0_1:
# 65 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Trigger0_2:
# 46 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_1, MSGBOX_YESNO
# 47 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_4
	goto RivetshoreCity_StorageBay_Trigger0_1

RivetshoreCity_StorageBay_Trigger0_4:
# 48 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_2, MSGBOX_POKENAV
# 49 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, RivetshoreCity_StorageBay_Trigger0_Text_3, RivetshoreCity_StorageBay_Trigger0_Text_4
# 50 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_6
# 61 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	fadedefaultbgm
	goto RivetshoreCity_StorageBay_Trigger0_1

RivetshoreCity_StorageBay_Trigger0_6:
# 52 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Trigger0_Movement_0
# 53 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 59 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	callnative CB2_StorageCutscene
	goto RivetshoreCity_StorageBay_Trigger0_1


RivetshoreCity_StorageBay_Trigger1::
# 70 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	lockall
# 72 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_0, MSGBOX_YESNO
# 73 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_2
RivetshoreCity_StorageBay_Trigger1_1:
# 90 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Trigger1_2:
# 74 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_1, MSGBOX_YESNO
# 75 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_4
	goto RivetshoreCity_StorageBay_Trigger1_1

RivetshoreCity_StorageBay_Trigger1_4:
# 76 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger1_Text_0, MSGBOX_YESNO
# 77 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_6
	goto RivetshoreCity_StorageBay_Trigger1_1

RivetshoreCity_StorageBay_Trigger1_6:
# 79 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Trigger1_Movement_0
# 80 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 86 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	callnative CB2_StorageCutscene
	goto RivetshoreCity_StorageBay_Trigger1_1


# 18 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_0:
# 18 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_in_place_up
	step_end

# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_1:
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_left
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	face_right
	step_end

# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_2:
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_up
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
	step_end

# 52 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Trigger0_Movement_0:
# 52 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_right
	step_end

# 79 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Trigger1_Movement_0:
# 79 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_left
# 79 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_up
# 79 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_right
	step_end

RivetshoreCity_StorageBay_Slaking_Text_0:
# 7 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It's asleep...use Poké Flute?$"

RivetshoreCity_StorageBay_Slaking_Text_1:
# 15 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "{PLAYER} played the Poke Flute.$"

RivetshoreCity_StorageBay_Slaking_Text_2:
# 21 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Slaking woke up!$"

RivetshoreCity_StorageBay_Slaking_Text_3:
# 27 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Slaking lumbered off somewhere...was\n"
	.string "waking it up the wrong thing to do?$"

RivetshoreCity_StorageBay_Slaking_Text_4:
# 36 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It's asleep...$"

RivetshoreCity_StorageBay_Trigger0_Text_0:
# 44 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "There's a label on this container...\p"
	.string "CARGO FOR S.S. ELEGANT\p"
	.string "Tap the storage container?$"

RivetshoreCity_StorageBay_Trigger0_Text_1:
# 46 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It sounds hollow...maybe there's enough\n"
	.string "space inside to fit in!\p"
	.string "Enter the storage container?$"

RivetshoreCity_StorageBay_Trigger0_Text_2:
# 48 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Choose carefully! Once you enter,\n"
	.string "there's no coming back!$"

RivetshoreCity_StorageBay_Trigger0_Text_3:
# 49 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Enter$"

RivetshoreCity_StorageBay_Trigger0_Text_4:
# 49 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Leave$"

RivetshoreCity_StorageBay_Trigger1_Text_0:
# 76 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Are you sure? Once you enter, there's\n"
	.string "no coming back!$"
