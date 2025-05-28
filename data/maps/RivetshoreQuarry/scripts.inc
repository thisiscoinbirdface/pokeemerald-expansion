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
# 27 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 29 "data//maps/RivetshoreQuarry/scripts.pory"
	addobject 33
# 30 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement 33, RivetshoreQuarry_Percy_Movement_0
# 31 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 33 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Percy_Movement_1
# 34 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 36 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Percy_Text_1
# 37 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 39 "data//maps/RivetshoreQuarry/scripts.pory"
	setwildbattle SPECIES_MIMIKYU, 40
# 40 "data//maps/RivetshoreQuarry/scripts.pory"
	dowildbattle
# 41 "data//maps/RivetshoreQuarry/scripts.pory"
	removeobject 33
# 44 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Percy_Text_2
# 45 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 47 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Percy_Movement_2
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_PERCY, RivetshoreQuarry_Percy_Movement_3
# 49 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_HIDE_RIVETSHORE_PERCY
# 53 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_HIDE_RIVETSHORE_MIMIKYU
# 54 "data//maps/RivetshoreQuarry/scripts.pory"
	clearflag FLAG_HIDE_CONSTRUCTION_HQ_PERCY
# 55 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_RIVETSHORE_CEO_QUEST, 2
# 58 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


RivetshoreQuarry_Nurse::
# 64 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 65 "data//maps/RivetshoreQuarry/scripts.pory"
	faceplayer
# 66 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Nurse_Text_0
# 67 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 68 "data//maps/RivetshoreQuarry/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 69 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Nurse_Text_1
# 70 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


RivetshoreQuarry_Chansey::
# 75 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 76 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Chansey_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_NPC1::
# 82 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC1_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_NPC2::
# 86 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC2_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_Raazi_Callout_Trigger::
# 105 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_RAAZI_CALLOUT, RivetshoreQuarry_Raazi_Callout_Trigger_2
# 107 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 109 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 110 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0
# 111 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 112 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 114 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 115 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Raazi_Callout_Trigger_Text_1
# 116 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 118 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1
# 120 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 121 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 123 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALLOUT
# 124 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Raazi_Callout_Trigger_2:
	end


RivetshoreQuarry_Fall_Trigger::
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Fall_Trigger_2
# 131 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 133 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Fall_Trigger_Text_0, MSGBOX_NPC
# 134 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 135 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 136 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 137 "data//maps/RivetshoreQuarry/scripts.pory"
	message RivetshoreQuarry_Fall_Trigger_Text_1
# 138 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8004, 2
# 139 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8005, 2
# 140 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8006, 30
# 141 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8007, 5
# 142 "data//maps/RivetshoreQuarry/scripts.pory"
	special ShakeCamera
# 143 "data//maps/RivetshoreQuarry/scripts.pory"
	waitstate
# 147 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_FALL
# 149 "data//maps/RivetshoreQuarry/scripts.pory"
	warphole MAP_RIVETSHORE_QUARRY_INTERIOR
# 151 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Fall_Trigger_2:
	end


RivetshoreQuarry_Trap_Cleared_Trigger::
# 156 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Trap_Cleared_Trigger_2
# 157 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED
	end

RivetshoreQuarry_Trap_Cleared_Trigger_2:
	end


RivetshoreQuarry_Blocker_Trigger::
# 162 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreQuarry_Blocker_Trigger_2
# 164 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_BLOCKER, RivetshoreQuarry_Blocker_Trigger_Movement_0
# 166 "data//maps/RivetshoreQuarry/scripts.pory"
	movedelay
# 167 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_Trigger_Text_0
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 169 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Blocker_Trigger_Movement_1
# 170 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 171 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Blocker_Trigger_2:
	end


RivetshoreQuarry_Blocker_NPC::
# 176 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_NPC_Text_0, MSGBOX_NPC
	end


Rivetshore_Gym_Trainer_A::
# 190 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_1
# 191 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 192 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_B::
# 197 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_B, Rivetshore_Gym_Trainer_B_Text_0, Rivetshore_Gym_Trainer_B_Text_1
# 198 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 199 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_C::
# 204 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_C, Rivetshore_Gym_Trainer_C_Text_0, Rivetshore_Gym_Trainer_C_Text_1
# 205 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_C_Text_2
# 206 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_D::
# 211 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_D, Rivetshore_Gym_Trainer_D_Text_0, Rivetshore_Gym_Trainer_D_Text_1
# 212 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 213 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_E::
# 218 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_E, Rivetshore_Gym_Trainer_E_Text_0, Rivetshore_Gym_Trainer_E_Text_1
# 219 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 220 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_Aron::
# 236 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
	end


Rivetshore_Raazi_Talk::
# 241 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 242 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_0
# 244 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_0
# 245 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_1
# 246 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 247 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 248 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_1
# 249 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 252 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 253 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_CALL
# 254 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 255 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_2
# 256 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 257 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 258 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_2
# 260 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_3
# 261 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 262 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 263 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_3
# 264 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 265 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 266 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 267 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_4
# 268 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 269 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 270 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_4
# 271 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_5
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_6
# 273 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 275 "data//maps/RivetshoreQuarry/scripts.pory"
	removeobject LOCALID_RAAZI
# 276 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALL
# 278 "data//maps/RivetshoreQuarry/scripts.pory"
	fadenewbgm MUS_RG_PEWTER
# 279 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


# 30 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Percy_Movement_0:
# 30 "data//maps/RivetshoreQuarry/scripts.pory"
	fly_down
	step_end

# 33 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Percy_Movement_1:
# 33 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_in_place_right
	step_end

# 47 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Percy_Movement_2:
# 47 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 47 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 47 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 47 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 48 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Percy_Movement_3:
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
	step_end

# 110 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0:
# 110 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 110 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 110 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 110 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 110 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 110 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 110 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 110 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
	step_end

# 119 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1:
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

# 165 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_0:
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 169 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_1:
# 169 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
	step_end

# 244 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_0:
# 244 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 244 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_left
# 244 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
# 244 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 245 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_1:
# 245 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 245 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_right
# 245 "data//maps/RivetshoreQuarry/scripts.pory"
	face_left
# 245 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 255 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_2:
# 255 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
	step_end

# 260 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_3:
# 260 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 267 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_4:
# 267 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 271 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_5:
# 271 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 271 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 272 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_6:
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

RivetshoreQuarry_Percy_Text_0:
# 24 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "It's the Rivetshore Construction CEO's\n"
	.string "Percy!\p"
	.string "What's it doing here? Was it led here by\n"
	.string "another Pokémon?$"

RivetshoreQuarry_Percy_Text_1:
# 36 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "It's a Mimikyu! Mimikyu must have been\n"
	.string "the one playing pranks on everyone!\p"
	.string "Mimikyu - you shouldn't be playing\n"
	.string "pranks on people!$"

RivetshoreQuarry_Percy_Text_2:
# 44 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Percy goes back to its owner!$"

RivetshoreQuarry_Nurse_Text_0:
# 66 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "We have a small infirmary here to treat\n"
	.string "builders and Pokémon that get hurt.\p"
	.string "Why don't you rest for a bit?$"

RivetshoreQuarry_Nurse_Text_1:
# 69 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Take care, trainer!$"

RivetshoreQuarry_Chansey_Text_0:
# 76 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Chansey is bouncing with happiness!$"

RivetshoreQuarry_NPC1_Text_0:
# 82 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I'm the shift manager at the quarry!\p"
	.string "...\p"
	.string "Why am I not out there with my team?\p"
	.string "It's too hot!$"

RivetshoreQuarry_NPC2_Text_0:
# 86 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Work has become much easier after the\n"
	.string "CEO had this infirmary and resting spot\l"
	.string "constructed. He really understands our\l"
	.string "struggles!\p"
	.string "I can't say the same for the shift\n"
	.string "manager though.$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_0:
# 114 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_1:
# 115 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Who do we have here?\p"
	.string "Seems like you're here to contest me\n"
	.string "for my gym badge. Very well then - come\l"
	.string "over here and show me your worth!$"

RivetshoreQuarry_Fall_Trigger_Text_0:
# 133 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "The floor was rigged! It's a trap!$"

RivetshoreQuarry_Fall_Trigger_Text_1:
# 137 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Come back up and challenge me,\n"
	.string "trainer...if you can!$"

RivetshoreQuarry_Blocker_Trigger_Text_0:
# 167 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Sorry. The quarry's closed sinze Raazi's\n"
	.string "not here right now.\p"
	.string "Where'd he go?\p"
	.string "What's it to you, kid?$"

RivetshoreQuarry_Blocker_NPC_Text_0:
# 176 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi's down at the bottom of the\n"
	.string "quarry.$"

Rivetshore_Gym_Trainer_A_Text_0:
# 190 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You gotta be tough and sturdy if you\n"
	.string "wanna work here!$"

Rivetshore_Gym_Trainer_A_Text_1:
# 190 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You're extra sturdy!$"

Rivetshore_Gym_Trainer_A_Text_2:
# 191 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "$"

Rivetshore_Gym_Trainer_B_Text_0:
# 197 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I used to train at the Mirroh Base Camp\n"
	.string "Gym before it shut down. Now I'm going\l"
	.string "to become a Gym Leader myself!$"

Rivetshore_Gym_Trainer_B_Text_1:
# 197 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I can't be a leader yet!$"

Rivetshore_Gym_Trainer_C_Text_0:
# 204 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "My partner and I grew up together. We\n"
	.string "even made it all the way to the final\l"
	.string "gym. You can't break our bond!$"

Rivetshore_Gym_Trainer_C_Text_1:
# 204 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You broke our bond!$"

Rivetshore_Gym_Trainer_C_Text_2:
# 205 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Losing to you fires me and Arcanine up\n"
	.string "even more!$"

Rivetshore_Gym_Trainer_D_Text_0:
# 211 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Us builders and hikers get along well.\n"
	.string "We're both rock-steady with hearts of\l"
	.string "steel!$"

Rivetshore_Gym_Trainer_D_Text_1:
# 211 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "What's your heart made of?$"

Rivetshore_Gym_Trainer_E_Text_0:
# 218 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I miss the mountaineering life, but this\n"
	.string "quarry makes me feel at home!$"

Rivetshore_Gym_Trainer_E_Text_1:
# 218 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I don't miss losing to trainers!s$"

Rivetshore_Raazi_Talk_Text_0:
# 242 "data//maps/RivetshoreQuarry/scripts.pory"
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
# 248 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Let me see whether you can face the\n"
	.string "might and fury of -$"

Rivetshore_Raazi_Talk_Text_2:
# 258 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Forgive me. I must take this call.$"

Rivetshore_Raazi_Talk_Text_3:
# 263 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Hello?\p"
	.string "...\p"
	.string "...\p"
	.string "Viniel and Carona are here?\p"
	.string "Very well. I'm coming.\n"
	.string "We'll depart as soon as I reach.$"

Rivetshore_Raazi_Talk_Text_4:
# 270 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Apologies, {PLAYER}. I must put this\n"
	.string "challenge on hold as I have an\l"
	.string "unavoidable engagement.\p"
	.string "Shall we do this another time?$"
