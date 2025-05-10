# 1 "data//maps/RivetshoreQuarry/scripts.pory"

# 2 "data//maps/RivetshoreQuarry/scripts.pory"
    .set LOCALID_BLOCKER, 7

RivetshoreQuarry_MapScripts::
	.byte 0


RivetshoreQuarry_Raazi_Callout_Trigger::
# 7 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 9 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 10 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0
# 11 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 12 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 15 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Raazi_Callout_Trigger_Text_1
# 16 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 18 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 21 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 23 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


RivetshoreQuarry_Fall_Trigger::
# 28 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 30 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Fall_Trigger_Text_0, MSGBOX_NPC
# 31 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 32 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 33 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 34 "data//maps/RivetshoreQuarry/scripts.pory"
	message RivetshoreQuarry_Fall_Trigger_Text_1
# 35 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8004, 2
# 36 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8005, 2
# 37 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8006, 30
# 38 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8007, 5
# 39 "data//maps/RivetshoreQuarry/scripts.pory"
	special ShakeCamera
# 40 "data//maps/RivetshoreQuarry/scripts.pory"
	waitstate
# 44 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_FALL
# 46 "data//maps/RivetshoreQuarry/scripts.pory"
	warphole MAP_RIVETSHORE_QUARRY_INTERIOR
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


RivetshoreQuarry_Blocker_Trigger::
# 53 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreQuarry_Blocker_Trigger_2
# 55 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 56 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_BLOCKER, RivetshoreQuarry_Blocker_Trigger_Movement_0
# 57 "data//maps/RivetshoreQuarry/scripts.pory"
	movedelay
# 58 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_Trigger_Text_0
# 59 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 60 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Blocker_Trigger_Movement_1
# 61 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 62 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Blocker_Trigger_2:
	end


RivetshoreQuarry_Blocker_NPC::
# 67 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_NPC_Text_0, MSGBOX_NPC
	end


Rivetshore_Gym_Trainer_A::
# 81 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 82 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 83 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_B::
# 87 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 88 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 89 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_C::
# 93 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 94 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 95 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_D::
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 100 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 101 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_E::
# 105 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 106 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 107 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_Aron::
# 120 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
	end


# 10 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0:
# 10 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 10 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 10 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 10 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 10 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 10 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 10 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 10 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
	step_end

# 19 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1:
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

# 56 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_0:
# 56 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
# 56 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 60 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_1:
# 60 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
	step_end

RivetshoreQuarry_Raazi_Callout_Trigger_Text_0:
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_1:
# 15 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Who do we have here?\p"
	.string "Seems like you're here to contest me\n"
	.string "for my gym badge. Very well then - come\l"
	.string "over here and show me your worth!$"

RivetshoreQuarry_Fall_Trigger_Text_0:
# 30 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "The floor was rigged! It's a trap!$"

RivetshoreQuarry_Fall_Trigger_Text_1:
# 34 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Come back up and challenge me,\n"
	.string "trainer...if you can!$"

RivetshoreQuarry_Blocker_Trigger_Text_0:
# 58 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Sorry. The quarry's closed sinze Raazi's\n"
	.string "not here right now.\p"
	.string "Where'd he go?\p"
	.string "What's it to you, kid?$"

RivetshoreQuarry_Blocker_NPC_Text_0:
# 67 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi's down at the bottom of the\n"
	.string "quarry.$"

Rivetshore_Gym_Trainer_A_Text_0:
# 81 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "$"
