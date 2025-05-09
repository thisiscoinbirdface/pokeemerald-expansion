# 1 "data//maps/RivetshoreQuarry/scripts.pory"

# 2 "data//maps/RivetshoreQuarry/scripts.pory"
    .set LOCALID_BLOCKER, 7

RivetshoreQuarry_MapScripts::
	.byte 0


RivetshoreQuarry_Blocker_Trigger::
# 12 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreQuarry_Blocker_Trigger_2
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 15 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_BLOCKER, RivetshoreQuarry_Blocker_Trigger_Movement_0
# 16 "data//maps/RivetshoreQuarry/scripts.pory"
	movedelay
# 17 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_Trigger_Text_0
# 18 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Blocker_Trigger_Movement_1
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 21 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Blocker_Trigger_2:
	end


# 15 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_0:
# 15 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
# 15 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 19 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_1:
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
	step_end

RivetshoreQuarry_Blocker_Trigger_Text_0:
# 17 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Sorry. The quarry's closed sinze Raazi's\n"
	.string "not here right now.\p"
	.string "Where'd he go?\p"
	.string "What's it to you, kid?$"
