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
	goto_if_set FLAG_BADGE08_GET, RivetshoreCity_StorageBay_Trigger0_2
# 51 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_1, MSGBOX_YESNO
# 52 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_5
RivetshoreCity_StorageBay_Trigger0_4:
# 72 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Trigger0_2:
# 46 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_0
# 47 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Trigger0_5:
# 53 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_2, MSGBOX_YESNO
# 54 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_7
	goto RivetshoreCity_StorageBay_Trigger0_4

RivetshoreCity_StorageBay_Trigger0_7:
# 55 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_3, MSGBOX_POKENAV
# 56 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	dynmultichoice 12, 8, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, RivetshoreCity_StorageBay_Trigger0_Text_4, RivetshoreCity_StorageBay_Trigger0_Text_5
# 57 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreCity_StorageBay_Trigger0_9
# 68 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	fadedefaultbgm
	goto RivetshoreCity_StorageBay_Trigger0_4

RivetshoreCity_StorageBay_Trigger0_9:
# 59 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Trigger0_Movement_0
# 60 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 66 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	callnative CB2_StorageCutscene
	goto RivetshoreCity_StorageBay_Trigger0_4


RivetshoreCity_StorageBay_Trigger1::
# 77 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	lockall
# 79 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_1, MSGBOX_YESNO
# 80 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_2
RivetshoreCity_StorageBay_Trigger1_1:
# 97 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Trigger1_2:
# 81 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger0_Text_2, MSGBOX_YESNO
# 82 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_4
	goto RivetshoreCity_StorageBay_Trigger1_1

RivetshoreCity_StorageBay_Trigger1_4:
# 83 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Trigger1_Text_0, MSGBOX_YESNO
# 84 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivetshoreCity_StorageBay_Trigger1_6
	goto RivetshoreCity_StorageBay_Trigger1_1

RivetshoreCity_StorageBay_Trigger1_6:
# 86 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_StorageBay_Trigger1_Movement_0
# 87 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	waitmovement 0
# 93 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	callnative CB2_StorageCutscene
	goto RivetshoreCity_StorageBay_Trigger1_1


RivetshoreCity_StorageBay_NPCHint::
# 103 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	lockall
# 104 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_NPCHint_Text_0
# 105 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
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

# 59 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Trigger0_Movement_0:
# 59 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	jump_right
	step_end

# 86 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
RivetshoreCity_StorageBay_Trigger1_Movement_0:
# 86 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_left
# 86 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	walk_up
# 86 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
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
# 46 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It's a shipping container.$"

RivetshoreCity_StorageBay_Trigger0_Text_1:
# 51 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "There's a label on this container...\p"
	.string "CARGO FOR S.S. ELEGANT\p"
	.string "Tap the storage container?$"

RivetshoreCity_StorageBay_Trigger0_Text_2:
# 53 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It sounds hollow...maybe there's enough\n"
	.string "space inside to fit in!\p"
	.string "Enter the storage container?$"

RivetshoreCity_StorageBay_Trigger0_Text_3:
# 55 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Once you enter, you can't come back.\n"
	.string "Make sure you're ready!$"

RivetshoreCity_StorageBay_Trigger0_Text_4:
# 56 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Enter$"

RivetshoreCity_StorageBay_Trigger0_Text_5:
# 56 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Leave$"

RivetshoreCity_StorageBay_Trigger1_Text_0:
# 83 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Are you sure? Once you enter, there's\n"
	.string "no coming back!$"

RivetshoreCity_StorageBay_NPCHint_Text_0:
# 104 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "If I can just find an empty box...$"
