# 1 "data//maps/RivetshoreQuarry/scripts.pory"

# 2 "data//maps/RivetshoreQuarry/scripts.pory"
    .set LOCALID_BLOCKER, 7
# 3 "data//maps/RivetshoreQuarry/scripts.pory"
    .set LOCALID_RAAZI, 6

RivetshoreQuarry_MapScripts::
	.byte 0


RivetshoreQuarry_Raazi_Callout_Trigger::
# 8 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 10 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 11 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0
# 12 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 13 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 15 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 16 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Raazi_Callout_Trigger_Text_1
# 17 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1
# 21 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 24 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


RivetshoreQuarry_Fall_Trigger::
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Fall_Trigger_2
# 31 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 33 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Fall_Trigger_Text_0, MSGBOX_NPC
# 34 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 35 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 36 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 37 "data//maps/RivetshoreQuarry/scripts.pory"
	message RivetshoreQuarry_Fall_Trigger_Text_1
# 38 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8004, 2
# 39 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8005, 2
# 40 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8006, 30
# 41 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8007, 5
# 42 "data//maps/RivetshoreQuarry/scripts.pory"
	special ShakeCamera
# 43 "data//maps/RivetshoreQuarry/scripts.pory"
	waitstate
# 47 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_FALL
# 49 "data//maps/RivetshoreQuarry/scripts.pory"
	warphole MAP_RIVETSHORE_QUARRY_INTERIOR
# 51 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Fall_Trigger_2:
	end


RivetshoreQuarry_Trap_Cleared_Trigger::
# 56 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Trap_Cleared_Trigger_2
# 57 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED
	end

RivetshoreQuarry_Trap_Cleared_Trigger_2:
	end


RivetshoreQuarry_Blocker_Trigger::
# 62 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreQuarry_Blocker_Trigger_2
# 64 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 65 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_BLOCKER, RivetshoreQuarry_Blocker_Trigger_Movement_0
# 66 "data//maps/RivetshoreQuarry/scripts.pory"
	movedelay
# 67 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_Trigger_Text_0
# 68 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 69 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Blocker_Trigger_Movement_1
# 70 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 71 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Blocker_Trigger_2:
	end


RivetshoreQuarry_Blocker_NPC::
# 76 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_NPC_Text_0, MSGBOX_NPC
	end


Rivetshore_Gym_Trainer_A::
# 90 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 91 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 92 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_B::
# 96 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 97 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 98 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_C::
# 102 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 103 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 104 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_D::
# 108 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 109 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 110 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_E::
# 114 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_0
# 115 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_0
# 116 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_Aron::
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
	end


Rivetshore_Raazi_Talk::
# 134 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 135 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_0
# 137 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_0
# 138 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_1
# 139 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 140 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 141 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_1
# 142 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 145 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 146 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_CALL
# 147 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 148 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_2
# 149 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 150 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 151 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_2
# 153 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_3
# 154 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 155 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 156 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_3
# 157 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 158 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 159 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 160 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_4
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 162 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 163 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_4
# 164 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_5
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_6
# 166 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	removeobject LOCALID_RAAZI
# 169 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALL
# 171 "data//maps/RivetshoreQuarry/scripts.pory"
	fadenewbgm MUS_RG_PEWTER
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


# 11 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0:
# 11 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 11 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 11 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 11 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 11 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 11 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 11 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 11 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
	step_end

# 20 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1:
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 20 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

# 65 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_0:
# 65 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
# 65 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 69 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_1:
# 69 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
	step_end

# 137 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_0:
# 137 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 137 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_left
# 137 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
# 137 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 138 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_1:
# 138 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 138 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_right
# 138 "data//maps/RivetshoreQuarry/scripts.pory"
	face_left
# 138 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 148 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_2:
# 148 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
	step_end

# 153 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_3:
# 153 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 160 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_4:
# 160 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 164 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_5:
# 164 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 164 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 165 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_6:
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

RivetshoreQuarry_Raazi_Callout_Trigger_Text_0:
# 15 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_1:
# 16 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Who do we have here?\p"
	.string "Seems like you're here to contest me\n"
	.string "for my gym badge. Very well then - come\l"
	.string "over here and show me your worth!$"

RivetshoreQuarry_Fall_Trigger_Text_0:
# 33 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "The floor was rigged! It's a trap!$"

RivetshoreQuarry_Fall_Trigger_Text_1:
# 37 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Come back up and challenge me,\n"
	.string "trainer...if you can!$"

RivetshoreQuarry_Blocker_Trigger_Text_0:
# 67 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Sorry. The quarry's closed sinze Raazi's\n"
	.string "not here right now.\p"
	.string "Where'd he go?\p"
	.string "What's it to you, kid?$"

RivetshoreQuarry_Blocker_NPC_Text_0:
# 76 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi's down at the bottom of the\n"
	.string "quarry.$"

Rivetshore_Gym_Trainer_A_Text_0:
# 90 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "$"

Rivetshore_Raazi_Talk_Text_0:
# 135 "data//maps/RivetshoreQuarry/scripts.pory"
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
# 141 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Let me see whether you can face the\n"
	.string "might and fury of -$"

Rivetshore_Raazi_Talk_Text_2:
# 151 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Forgive me. I must take this call.$"

Rivetshore_Raazi_Talk_Text_3:
# 156 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Hello?\p"
	.string "...\p"
	.string "...\p"
	.string "Viniel and Carona are here?\p"
	.string "Very well. I'm coming.\n"
	.string "We'll depart as soon as I reach.$"

Rivetshore_Raazi_Talk_Text_4:
# 163 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Apologies, {PLAYER}. I must put this\n"
	.string "challenge on hold as I have an\l"
	.string "unavoidable engagement.\p"
	.string "Shall we do this another time?$"
