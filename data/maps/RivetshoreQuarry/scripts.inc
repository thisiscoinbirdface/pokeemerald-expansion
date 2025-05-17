# 1 "data//maps/RivetshoreQuarry/scripts.pory"

# 2 "data//maps/RivetshoreQuarry/scripts.pory"
    .set LOCALID_BLOCKER, 7
# 3 "data//maps/RivetshoreQuarry/scripts.pory"
    .set LOCALID_RAAZI, 6
# 4 "data//maps/RivetshoreQuarry/scripts.pory"
    
# 5 "data//maps/RivetshoreQuarry/scripts.pory"
    .set LOCALID_PERCY, 30

RivetshoreQuarry_MapScripts::
	.byte 0


RivetshoreQuarry_Percy::
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 24 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Percy_Text_0
# 25 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 28 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Percy_Movement_0
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_PERCY, RivetshoreQuarry_Percy_Movement_1
# 30 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 33 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_HIDE_RIVETSHORE_PERCY
# 34 "data//maps/RivetshoreQuarry/scripts.pory"
	clearflag FLAG_HIDE_CONSTRUCTION_HQ_PERCY
# 35 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_RIVETSHORE_CEO_QUEST, 2
# 38 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


RivetshoreQuarry_Nurse::
# 44 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 45 "data//maps/RivetshoreQuarry/scripts.pory"
	faceplayer
# 46 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Nurse_Text_0
# 47 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 49 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Nurse_Text_1
# 50 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


RivetshoreQuarry_Chansey::
# 55 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 56 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Chansey_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_NPC1::
# 62 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC1_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_NPC2::
# 66 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC2_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_Raazi_Callout_Trigger::
# 85 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_RAAZI_CALLOUT, RivetshoreQuarry_Raazi_Callout_Trigger_2
# 87 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 89 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 90 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0
# 91 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 92 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 94 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 95 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Raazi_Callout_Trigger_Text_1
# 96 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 98 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1
# 100 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 101 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 103 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALLOUT
# 104 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Raazi_Callout_Trigger_2:
	end


RivetshoreQuarry_Fall_Trigger::
# 109 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Fall_Trigger_2
# 111 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 113 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Fall_Trigger_Text_0, MSGBOX_NPC
# 114 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 115 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 116 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 117 "data//maps/RivetshoreQuarry/scripts.pory"
	message RivetshoreQuarry_Fall_Trigger_Text_1
# 118 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8004, 2
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8005, 2
# 120 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8006, 30
# 121 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8007, 5
# 122 "data//maps/RivetshoreQuarry/scripts.pory"
	special ShakeCamera
# 123 "data//maps/RivetshoreQuarry/scripts.pory"
	waitstate
# 127 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_FALL
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	warphole MAP_RIVETSHORE_QUARRY_INTERIOR
# 131 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Fall_Trigger_2:
	end


RivetshoreQuarry_Trap_Cleared_Trigger::
# 136 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Trap_Cleared_Trigger_2
# 137 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED
	end

RivetshoreQuarry_Trap_Cleared_Trigger_2:
	end


RivetshoreQuarry_Blocker_Trigger::
# 142 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreQuarry_Blocker_Trigger_2
# 144 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 145 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_BLOCKER, RivetshoreQuarry_Blocker_Trigger_Movement_0
# 146 "data//maps/RivetshoreQuarry/scripts.pory"
	movedelay
# 147 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_Trigger_Text_0
# 148 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 149 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Blocker_Trigger_Movement_1
# 150 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 151 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Blocker_Trigger_2:
	end


RivetshoreQuarry_Blocker_NPC::
# 156 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_NPC_Text_0, MSGBOX_NPC
	end


Rivetshore_Gym_Trainer_A::
# 170 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_1
# 171 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_B::
# 177 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_B, Rivetshore_Gym_Trainer_B_Text_0, Rivetshore_Gym_Trainer_B_Text_1
# 178 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 179 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_C::
# 184 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_C, Rivetshore_Gym_Trainer_C_Text_0, Rivetshore_Gym_Trainer_C_Text_1
# 185 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 186 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_D::
# 191 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_D, Rivetshore_Gym_Trainer_D_Text_0, Rivetshore_Gym_Trainer_D_Text_1
# 192 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 193 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_E::
# 198 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_E, Rivetshore_Gym_Trainer_E_Text_0, Rivetshore_Gym_Trainer_E_Text_1
# 199 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 200 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_Aron::
# 216 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
	end


Rivetshore_Raazi_Talk::
# 221 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 222 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_0
# 224 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_0
# 225 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_1
# 226 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 227 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 228 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_1
# 229 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 232 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 233 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_CALL
# 234 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 235 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_2
# 236 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 237 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 238 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_2
# 240 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_3
# 241 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 242 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 243 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_3
# 244 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 245 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 246 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 247 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_4
# 248 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 249 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 250 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_4
# 251 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_5
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_6
# 253 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 255 "data//maps/RivetshoreQuarry/scripts.pory"
	removeobject LOCALID_RAAZI
# 256 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALL
# 258 "data//maps/RivetshoreQuarry/scripts.pory"
	fadenewbgm MUS_RG_PEWTER
# 259 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


# 28 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Percy_Movement_0:
# 28 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 28 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 28 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 28 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 29 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Percy_Movement_1:
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
	step_end

# 90 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0:
# 90 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 90 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 90 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 90 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 90 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 90 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 90 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 90 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
	step_end

# 99 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1:
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

# 145 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_0:
# 145 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
# 145 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 149 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_1:
# 149 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
	step_end

# 224 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_0:
# 224 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 224 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_left
# 224 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
# 224 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 225 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_1:
# 225 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 225 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_right
# 225 "data//maps/RivetshoreQuarry/scripts.pory"
	face_left
# 225 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 235 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_2:
# 235 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
	step_end

# 240 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_3:
# 240 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 247 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_4:
# 247 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 251 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_5:
# 251 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 251 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 252 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_6:
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

RivetshoreQuarry_Percy_Text_0:
# 24 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Percy goes back to its owner!$"

RivetshoreQuarry_Nurse_Text_0:
# 46 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "We have a small infirmary here to treat\n"
	.string "builders and Pokemon that get hurt.\p"
	.string "Why don't you rest for a bit?$"

RivetshoreQuarry_Nurse_Text_1:
# 49 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Take care, trainer!$"

RivetshoreQuarry_Chansey_Text_0:
# 56 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Chansey is bouncing with happiness!$"

RivetshoreQuarry_NPC1_Text_0:
# 62 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I'm the shift manager at the quarry!\p"
	.string "...\p"
	.string "Why am I not out there with my team?\p"
	.string "It's too hot!$"

RivetshoreQuarry_NPC2_Text_0:
# 66 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Work has become much easier after the\n"
	.string "CEO had this infirmary and resting spot\l"
	.string "constructed. He really understands our\l"
	.string "struggles!\p"
	.string "I can't say the same for the shift\n"
	.string "manager though.$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_0:
# 94 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_1:
# 95 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Who do we have here?\p"
	.string "Seems like you're here to contest me\n"
	.string "for my gym badge. Very well then - come\l"
	.string "over here and show me your worth!$"

RivetshoreQuarry_Fall_Trigger_Text_0:
# 113 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "The floor was rigged! It's a trap!$"

RivetshoreQuarry_Fall_Trigger_Text_1:
# 117 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Come back up and challenge me,\n"
	.string "trainer...if you can!$"

RivetshoreQuarry_Blocker_Trigger_Text_0:
# 147 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Sorry. The quarry's closed sinze Raazi's\n"
	.string "not here right now.\p"
	.string "Where'd he go?\p"
	.string "What's it to you, kid?$"

RivetshoreQuarry_Blocker_NPC_Text_0:
# 156 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi's down at the bottom of the\n"
	.string "quarry.$"

Rivetshore_Gym_Trainer_A_Text_0:
# 170 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You gotta be tough and sturdy if you\n"
	.string "wanna work here!$"

Rivetshore_Gym_Trainer_A_Text_1:
# 170 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You're extra sturdy!$"

Rivetshore_Gym_Trainer_A_Text_2:
# 171 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "$"

Rivetshore_Gym_Trainer_B_Text_0:
# 177 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I used to train at the Mirroh Base Camp\n"
	.string "Gym before it shut down. Now I'm going\l"
	.string "to become a Gym Leader myself!$"

Rivetshore_Gym_Trainer_B_Text_1:
# 177 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I can't be a leader yet!$"

Rivetshore_Gym_Trainer_C_Text_0:
# 184 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Are you a serious trainer? Or just\n"
	.string "goofing around?$"

Rivetshore_Gym_Trainer_C_Text_1:
# 184 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Yeah, you're serious alright!$"

Rivetshore_Gym_Trainer_D_Text_0:
# 191 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Us builders and hikers get along well.\n"
	.string "We're both rock-steady with hearts of\l"
	.string "steel!$"

Rivetshore_Gym_Trainer_D_Text_1:
# 191 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "What's your heart made of?$"

Rivetshore_Gym_Trainer_E_Text_0:
# 198 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I miss the mountaineering life, but this\n"
	.string "quarry makes me feel at home!$"

Rivetshore_Gym_Trainer_E_Text_1:
# 198 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I don't miss losing to trainers!s$"

Rivetshore_Raazi_Talk_Text_0:
# 222 "data//maps/RivetshoreQuarry/scripts.pory"
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
# 228 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Let me see whether you can face the\n"
	.string "might and fury of -$"

Rivetshore_Raazi_Talk_Text_2:
# 238 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Forgive me. I must take this call.$"

Rivetshore_Raazi_Talk_Text_3:
# 243 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Hello?\p"
	.string "...\p"
	.string "...\p"
	.string "Viniel and Carona are here?\p"
	.string "Very well. I'm coming.\n"
	.string "We'll depart as soon as I reach.$"

Rivetshore_Raazi_Talk_Text_4:
# 250 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Apologies, {PLAYER}. I must put this\n"
	.string "challenge on hold as I have an\l"
	.string "unavoidable engagement.\p"
	.string "Shall we do this another time?$"
