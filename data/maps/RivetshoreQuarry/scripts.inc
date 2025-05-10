# 1 "data//maps/RivetshoreQuarry/scripts.pory"

# 2 "data//maps/RivetshoreQuarry/scripts.pory"
    .set LOCALID_BLOCKER, 7
# 3 "data//maps/RivetshoreQuarry/scripts.pory"
    .set LOCALID_RAAZI, 6

RivetshoreQuarry_MapScripts::
	.byte 0


RivetshoreQuarry_Raazi_Callout_Trigger::
# 8 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_RAAZI_CALLOUT, RivetshoreQuarry_Raazi_Callout_Trigger_2
# 9 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALLOUT
# 11 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 13 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0
# 15 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 16 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 18 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Raazi_Callout_Trigger_Text_1
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 23 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1
# 24 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 25 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 27 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Raazi_Callout_Trigger_2:
	end


RivetshoreQuarry_Fall_Trigger::
# 32 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Fall_Trigger_2
# 34 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 36 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Fall_Trigger_Text_0, MSGBOX_NPC
# 37 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 38 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 39 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 40 "data//maps/RivetshoreQuarry/scripts.pory"
	message RivetshoreQuarry_Fall_Trigger_Text_1
# 41 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8004, 2
# 42 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8005, 2
# 43 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8006, 30
# 44 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8007, 5
# 45 "data//maps/RivetshoreQuarry/scripts.pory"
	special ShakeCamera
# 46 "data//maps/RivetshoreQuarry/scripts.pory"
	waitstate
# 50 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_FALL
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	warphole MAP_RIVETSHORE_QUARRY_INTERIOR
# 54 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Fall_Trigger_2:
	end


RivetshoreQuarry_Trap_Cleared_Trigger::
# 59 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Trap_Cleared_Trigger_2
# 60 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED
	end

RivetshoreQuarry_Trap_Cleared_Trigger_2:
	end


RivetshoreQuarry_Blocker_Trigger::
# 65 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreQuarry_Blocker_Trigger_2
# 67 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 68 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_BLOCKER, RivetshoreQuarry_Blocker_Trigger_Movement_0
# 69 "data//maps/RivetshoreQuarry/scripts.pory"
	movedelay
# 70 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_Trigger_Text_0
# 71 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 72 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Blocker_Trigger_Movement_1
# 73 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 74 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Blocker_Trigger_2:
	end


RivetshoreQuarry_Blocker_NPC::
# 79 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_NPC_Text_0, MSGBOX_NPC
	end


Rivetshore_Gym_Trainer_A::
# 93 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 94 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 95 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_B::
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 100 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 101 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_C::
# 105 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 106 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 107 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_D::
# 111 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 112 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 113 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_E::
# 117 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 118 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_Aron::
# 132 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
	end


Rivetshore_Raazi_Talk::
# 137 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 138 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_0
# 140 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_0
# 141 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_1
# 142 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 143 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 144 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_1
# 145 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 148 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 149 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_CALL
# 150 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 151 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_2
# 152 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 153 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 154 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_2
# 156 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_3
# 157 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 158 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 159 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_3
# 160 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 162 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 163 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_4
# 164 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 166 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_4
# 167 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_5
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_6
# 169 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 171 "data//maps/RivetshoreQuarry/scripts.pory"
	removeobject LOCALID_RAAZI
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALL
# 174 "data//maps/RivetshoreQuarry/scripts.pory"
	fadenewbgm MUS_RG_PEWTER
# 175 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


# 14 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0:
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
	step_end

# 23 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1:
# 23 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 23 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 23 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 23 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 23 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 23 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 23 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 23 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

# 68 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_0:
# 68 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
# 68 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 72 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_1:
# 72 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
	step_end

# 140 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_0:
# 140 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 140 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_left
# 140 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
# 140 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 141 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_1:
# 141 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 141 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_right
# 141 "data//maps/RivetshoreQuarry/scripts.pory"
	face_left
# 141 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 151 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_2:
# 151 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
	step_end

# 156 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_3:
# 156 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 163 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_4:
# 163 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 167 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_5:
# 167 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 167 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 168 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_6:
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

RivetshoreQuarry_Raazi_Callout_Trigger_Text_0:
# 18 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_1:
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Who do we have here?\p"
	.string "Seems like you're here to contest me\n"
	.string "for my gym badge. Very well then - come\l"
	.string "over here and show me your worth!$"

RivetshoreQuarry_Fall_Trigger_Text_0:
# 36 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "The floor was rigged! It's a trap!$"

RivetshoreQuarry_Fall_Trigger_Text_1:
# 40 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Come back up and challenge me,\n"
	.string "trainer...if you can!$"

RivetshoreQuarry_Blocker_Trigger_Text_0:
# 70 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Sorry. The quarry's closed sinze Raazi's\n"
	.string "not here right now.\p"
	.string "Where'd he go?\p"
	.string "What's it to you, kid?$"

RivetshoreQuarry_Blocker_NPC_Text_0:
# 79 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi's down at the bottom of the\n"
	.string "quarry.$"

Rivetshore_Gym_Trainer_A_Text_0:
# 93 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "$"

Rivetshore_Raazi_Talk_Text_0:
# 138 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You managed to come out of that cave\n"
	.string "unscathed?\p"
	.string "I'm impressed.\p"
	.string "...\p"
	.string "Or perhaps it's simply time for me to\n"
	.string "expand the cave?\p"
	.string "No matter - a trainer who faces me is a\n"
	.string "trainer who I must face.\p"
	.string "I am Raazi! The Gym Leader of\n"
	.string "Rivetshore City and the strongest\l"
	.string "leader in all of Cormoria. Few trainers\l"
	.string "posess enough grit to reach where you\l"
	.string "stand, {PLAYER}. But their fate is to\l"
	.string "be crushed by my hand! Will you fall? Or\l"
	.string "will you rise?$"

Rivetshore_Raazi_Talk_Text_1:
# 144 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Let me see whether you can face the\n"
	.string "might and fury of -$"

Rivetshore_Raazi_Talk_Text_2:
# 154 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Forgive me. I must take this call.$"

Rivetshore_Raazi_Talk_Text_3:
# 159 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Hello?\p"
	.string "...\p"
	.string "...\p"
	.string "Viniel and Carona are here?\p"
	.string "Very well. I'm coming.\n"
	.string "We'll depart as soon as I reach.$"

Rivetshore_Raazi_Talk_Text_4:
# 166 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Apologies, {PLAYER}. I must put this\n"
	.string "challenge on hold as I have an\l"
	.string "unavoidable engagement.\p"
	.string "Shall we do this another time?$"
