RivetshoreCity_StorageBay_MapScripts::
	.byte 0


RivetshoreCity_StorageBay_Slaking::
# 4 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_0, MSGBOX_NPC
# 5 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	end
# 8 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 9 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreCity_StorageBay_Slaking_1
# 13 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_1, MSGBOX_YESNO
# 15 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreCity_StorageBay_Slaking_4
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
	msgbox RivetshoreCity_StorageBay_Slaking_Text_3
# 29 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	release
# 30 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	setflag FLAG_RIVETSHORE_STORAGE_BAY_SLAKING
# 31 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	releaseall
	end

RivetshoreCity_StorageBay_Slaking_1:
# 10 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	msgbox RivetshoreCity_StorageBay_Slaking_Text_0, MSGBOX_NPC
	end

RivetshoreCity_StorageBay_Slaking_4:
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

RivetshoreCity_StorageBay_Slaking_Text_0:
# 4 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It's fast asleep...$"

RivetshoreCity_StorageBay_Slaking_Text_1:
# 13 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "It's fast asleep...\n"
	.string "Use Poké Flute?$"

RivetshoreCity_StorageBay_Slaking_Text_2:
# 22 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Slaking woke up!$"

RivetshoreCity_StorageBay_Slaking_Text_3:
# 28 "data//maps/RivetshoreCity_StorageBay/scripts.pory"
	.string "Slaking lumbered off somewhere...was\n"
	.string "waking it up the wrong thing to do?$"
