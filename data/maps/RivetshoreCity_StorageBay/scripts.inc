RivetshoreCity_StorageBay_MapScripts::
	.byte 0


RivetshoreCity_StorageBay_Slaking::
# 5 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 6 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Slaking_1
# 37 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
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
	release
# 18 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	playmoncry SPECIES_SLAKING, CRY_MODE_NORMAL
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement 1, RivetshoreCity_StorageBay_Slaking_Movement_0
# 20 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 21 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	delay 16
# 22 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_2
# 23 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	release
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Slaking_Movement_1
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement 1, RivetshoreCity_StorageBay_Slaking_Movement_2
# 26 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 27 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	removeobject 1
# 28 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	fadeinbgm 1
# 29 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_3
# 30 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	release
# 31 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	setflag FLAG_RIVETSHORE_STORAGE_BAY_SLAKING
# 32 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Slaking_4:
	end


RivetshoreCity_StorageBay_Trigger0::
# 43 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	lockall
# 45 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_0, MSGBOX_YESNO
# 46 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_2
RivetshoreCity_StorageBay_Trigger0_1:
# 66 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Trigger0_2:
# 47 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_1, MSGBOX_YESNO
# 48 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_4
	goto RivetshoreCity_StorageBay_Trigger0_1

RivetshoreCity_StorageBay_Trigger0_4:
# 49 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_2, MSGBOX_POKENAV
# 50 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	dynmultichoice 12, 8, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, RivetshoreCity_StorageBay_Trigger0_Text_3, RivetshoreCity_StorageBay_Trigger0_Text_4
# 51 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_6
# 62 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	fadedefaultbgm
	goto RivetshoreCity_StorageBay_Trigger0_1

RivetshoreCity_StorageBay_Trigger0_6:
# 53 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Trigger0_Movement_0
# 54 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 60 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	callnative CB2_StorageCutscene
	goto RivetshoreCity_StorageBay_Trigger0_1


RivetshoreCity_StorageBay_Trigger1::
# 71 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	lockall
# 73 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_0, MSGBOX_YESNO
# 74 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_2
RivetshoreCity_StorageBay_Trigger1_1:
# 91 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Trigger1_2:
# 75 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_1, MSGBOX_YESNO
# 76 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_4
	goto RivetshoreCity_StorageBay_Trigger1_1

RivetshoreCity_StorageBay_Trigger1_4:
# 77 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger1_Text_0, MSGBOX_YESNO
# 78 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_6
	goto RivetshoreCity_StorageBay_Trigger1_1

RivetshoreCity_StorageBay_Trigger1_6:
# 80 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Trigger1_Movement_0
# 81 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 87 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	callnative CB2_StorageCutscene
	goto RivetshoreCity_StorageBay_Trigger1_1


RivetshoreCity_StorageBay_NPCHint::
# 97 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	lockall
# 98 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_NPCHint_Text_0
# 99 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end


# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_0:
# 19 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_in_place_up
	step_end

# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_1:
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_left
# 24 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	face_right
	step_end

# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Slaking_Movement_2:
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_up
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_right
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
# 25 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_down
	step_end

# 53 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Trigger0_Movement_0:
# 53 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_right
	step_end

# 80 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Trigger1_Movement_0:
# 80 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_left
# 80 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_up
# 80 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_right
	step_end

RivetshoreCity_StorageBay_Slaking_Text_0:
# 7 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It's asleep...use Poké Flute?$"

RivetshoreCity_StorageBay_Slaking_Text_1:
# 15 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "{PLAYER} played the Poke Flute.$"

RivetshoreCity_StorageBay_Slaking_Text_2:
# 22 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Slaking woke up!$"

RivetshoreCity_StorageBay_Slaking_Text_3:
# 29 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Slaking lumbered off somewhere...was\n"
	.string "waking it up the wrong thing to do?$"

RivetshoreCity_StorageBay_Slaking_Text_4:
# 37 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It's asleep...$"

RivetshoreCity_StorageBay_Trigger0_Text_0:
# 45 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "There's a label on this container...\p"
	.string "CARGO FOR S.S. ELEGANT\p"
	.string "Tap the storage container?$"

RivetshoreCity_StorageBay_Trigger0_Text_1:
# 47 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It sounds hollow...maybe there's enough\n"
	.string "space inside to fit in!\p"
	.string "Enter the storage container?$"

RivetshoreCity_StorageBay_Trigger0_Text_2:
# 49 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Once you enter, you can't come back.\n"
	.string "Make sure you're ready!$"

RivetshoreCity_StorageBay_Trigger0_Text_3:
# 50 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Enter$"

RivetshoreCity_StorageBay_Trigger0_Text_4:
# 50 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Leave$"

RivetshoreCity_StorageBay_Trigger1_Text_0:
# 77 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Are you sure? Once you enter, there's\n"
	.string "no coming back!$"

RivetshoreCity_StorageBay_NPCHint_Text_0:
# 98 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "If I can just find an empty box...$"
