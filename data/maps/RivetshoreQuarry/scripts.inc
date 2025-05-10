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


RivetshoreQuarry_Blocker_NPC::
# 26 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_NPC_Text_0, MSGBOX_NPC
	end


Rivetshore_Gym_Trainer_A::
# 40 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 41 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 42 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_B::
# 46 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 47 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_C::
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 53 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 54 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_D::
# 58 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 59 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 60 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_E::
# 64 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 65 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 66 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
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

RivetshoreQuarry_Blocker_NPC_Text_0:
# 26 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi's down at the bottom of the\n"
	.string "quarry.$"

Rivetshore_Gym_Trainer_A_Text_0:
# 40 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "$"
