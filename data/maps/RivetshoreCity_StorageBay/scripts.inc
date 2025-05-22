RivetshoreCity_StorageBay_MapScripts::
	.byte 0


RivetshoreCity_StorageBay_Slaking::
# 5 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 6 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Slaking_1
# 30 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_3, MSGBOX_NPC
	end

RivetshoreCity_StorageBay_Slaking_1:
# 7 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_0, MSGBOX_YESNO
# 9 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreCity_StorageBay_Slaking_4
# 12 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	playmoncry SPECIES_SLAKING, CRY_MODE_NORMAL
# 13 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement 1, RivetshoreCity_StorageBay_Slaking_Movement_0
# 14 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 15 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	delay 16
# 16 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_1
# 17 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	release
# 18 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Slaking_Movement_1
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement 1, RivetshoreCity_StorageBay_Slaking_Movement_2
# 20 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 21 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	removeobject 1
# 22 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_2
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	release
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	setflag FLAG_RIVETSHORE_STORAGE_BAY_SLAKING
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Slaking_4:
	end


RivetshoreCity_StorageBay_Trigger0::
# 36 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	lockall
# 38 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_0, MSGBOX_YESNO
# 39 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_2
RivetshoreCity_StorageBay_Trigger0_1:
# 57 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Trigger0_2:
# 40 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_1, MSGBOX_YESNO
# 41 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_4
	goto RivetshoreCity_StorageBay_Trigger0_1

RivetshoreCity_StorageBay_Trigger0_4:
# 42 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_2, MSGBOX_POKENAV
# 43 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, RivetshoreCity_StorageBay_Trigger0_Text_3, RivetshoreCity_StorageBay_Trigger0_Text_4
# 44 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_6
	goto RivetshoreCity_StorageBay_Trigger0_1

RivetshoreCity_StorageBay_Trigger0_6:
# 46 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Trigger0_Movement_0
# 47 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 53 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	callnative CB2_StorageCutscene
	goto RivetshoreCity_StorageBay_Trigger0_1


RivetshoreCity_StorageBay_Trigger1::
# 62 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	lockall
# 64 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_0, MSGBOX_YESNO
# 65 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_2
RivetshoreCity_StorageBay_Trigger1_1:
# 82 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Trigger1_2:
# 66 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_1, MSGBOX_YESNO
# 67 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_4
	goto RivetshoreCity_StorageBay_Trigger1_1

RivetshoreCity_StorageBay_Trigger1_4:
# 68 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger1_Text_0, MSGBOX_YESNO
# 69 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_6
	goto RivetshoreCity_StorageBay_Trigger1_1

RivetshoreCity_StorageBay_Trigger1_6:
# 71 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Trigger1_Movement_0
# 72 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 78 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	callnative CB2_StorageCutscene
	goto RivetshoreCity_StorageBay_Trigger1_1


# 13 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_0:
# 13 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_in_place_up
	step_end

# 18 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_1:
# 18 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_left
# 18 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	face_right
	step_end

# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_2:
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_up
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
	step_end

# 46 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Trigger0_Movement_0:
# 46 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_right
	step_end

# 71 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Trigger1_Movement_0:
# 71 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_left
# 71 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_up
# 71 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_right
	step_end

RivetshoreCity_StorageBay_Slaking_Text_0:
# 7 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It's fast asleep...\n"
	.string "Use Poké Flute?$"

RivetshoreCity_StorageBay_Slaking_Text_1:
# 16 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Slaking woke up!$"

RivetshoreCity_StorageBay_Slaking_Text_2:
# 22 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Slaking lumbered off somewhere...was\n"
	.string "waking it up the wrong thing to do?$"

RivetshoreCity_StorageBay_Slaking_Text_3:
# 30 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It's fast asleep...$"

RivetshoreCity_StorageBay_Trigger0_Text_0:
# 38 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "There's a label on this container...\p"
	.string "CARGO FOR S.S. ELEGANT\p"
	.string "Tap the storage container?$"

RivetshoreCity_StorageBay_Trigger0_Text_1:
# 40 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It sounds hollow...maybe there's enough\n"
	.string "space inside to fit in!\p"
	.string "Enter the storage container?$"

RivetshoreCity_StorageBay_Trigger0_Text_2:
# 42 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Choose carefully! Once you enter,\n"
	.string "there's no coming back!$"

RivetshoreCity_StorageBay_Trigger0_Text_3:
# 43 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Enter$"

RivetshoreCity_StorageBay_Trigger0_Text_4:
# 43 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Leave$"

RivetshoreCity_StorageBay_Trigger1_Text_0:
# 68 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Are you sure? Once you enter, there's\n"
	.string "no coming back!$"
