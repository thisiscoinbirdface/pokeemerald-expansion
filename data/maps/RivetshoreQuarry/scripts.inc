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
# 28 "data//maps/RivetshoreQuarry/scripts.pory"
	hidefollower
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
# 35 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 36 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement 33, RivetshoreQuarry_Percy_Movement_2
# 37 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 38 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 40 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Percy_Text_1
# 41 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 43 "data//maps/RivetshoreQuarry/scripts.pory"
	setwildbattle SPECIES_MIMIKYU, 40
# 44 "data//maps/RivetshoreQuarry/scripts.pory"
	dowildbattle
# 45 "data//maps/RivetshoreQuarry/scripts.pory"
	removeobject 33
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Percy_Text_2
# 49 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 51 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Percy_Movement_3
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_PERCY, RivetshoreQuarry_Percy_Movement_4
# 53 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 54 "data//maps/RivetshoreQuarry/scripts.pory"
	removeobject LOCALID_PERCY
# 57 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_HIDE_RIVETSHORE_PERCY
# 58 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_HIDE_RIVETSHORE_MIMIKYU
# 59 "data//maps/RivetshoreQuarry/scripts.pory"
	clearflag FLAG_HIDE_CONSTRUCTION_HQ_PERCY
# 60 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_RIVETSHORE_CEO_QUEST, 2
# 63 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


RivetshoreQuarry_Nurse::
# 69 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 70 "data//maps/RivetshoreQuarry/scripts.pory"
	faceplayer
# 71 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Nurse_Text_0
# 72 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 73 "data//maps/RivetshoreQuarry/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 74 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Nurse_Text_1
# 75 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


RivetshoreQuarry_Chansey::
# 80 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 81 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Chansey_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_NPC1::
# 87 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC1_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_NPC2::
# 91 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC2_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_Blocker_NPC::
# 97 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_NPC_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_Raazi_Callout_Trigger::
# 115 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_RAAZI_CALLOUT, RivetshoreQuarry_Raazi_Callout_Trigger_2
# 117 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 120 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0
# 121 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 122 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 124 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 125 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Raazi_Callout_Trigger_Text_1
# 126 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 128 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1
# 130 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 131 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 133 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALLOUT
# 134 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Raazi_Callout_Trigger_2:
	end


RivetshoreQuarry_Fall_Trigger::
# 139 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Fall_Trigger_2
# 141 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 143 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Fall_Trigger_Text_0, MSGBOX_NPC
# 144 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 145 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 146 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 147 "data//maps/RivetshoreQuarry/scripts.pory"
	message RivetshoreQuarry_Fall_Trigger_Text_1
# 148 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8004, 2
# 149 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8005, 2
# 150 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8006, 30
# 151 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8007, 5
# 152 "data//maps/RivetshoreQuarry/scripts.pory"
	special ShakeCamera
# 153 "data//maps/RivetshoreQuarry/scripts.pory"
	waitstate
# 157 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_FALL
# 159 "data//maps/RivetshoreQuarry/scripts.pory"
	warphole MAP_RIVETSHORE_QUARRY_INTERIOR
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Fall_Trigger_2:
	end


RivetshoreQuarry_Trap_Cleared_Trigger::
# 166 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Trap_Cleared_Trigger_2
# 167 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED
	end

RivetshoreQuarry_Trap_Cleared_Trigger_2:
	end


RivetshoreQuarry_Blocker_Trigger::
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreQuarry_Blocker_Trigger_2
# 174 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 175 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_BLOCKER, RivetshoreQuarry_Blocker_Trigger_Movement_0
# 176 "data//maps/RivetshoreQuarry/scripts.pory"
	movedelay
# 177 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_Trigger_Text_0
# 178 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 179 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Blocker_Trigger_Movement_1
# 180 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 181 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Blocker_Trigger_2:
	end


Rivetshore_Gym_Trainer_A::
# 195 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_1
# 196 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 197 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_B::
# 203 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_B, Rivetshore_Gym_Trainer_B_Text_0, Rivetshore_Gym_Trainer_B_Text_1
# 204 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_B_Text_2
# 205 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Avalugg::
# 209 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_AVALUGG_HISUI, CRY_MODE_NORMAL
# 210 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Avalugg_Text_0, MSGBOX_NPC
	end


Rivetshore_Gym_Trainer_C::
# 216 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_C, Rivetshore_Gym_Trainer_C_Text_0, Rivetshore_Gym_Trainer_C_Text_1
# 217 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_C_Text_2
# 218 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_D::
# 223 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_D, Rivetshore_Gym_Trainer_D_Text_0, Rivetshore_Gym_Trainer_D_Text_1
# 224 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 225 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_E::
# 230 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_E, Rivetshore_Gym_Trainer_E_Text_0, Rivetshore_Gym_Trainer_E_Text_1
# 231 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 232 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_Aron::
# 248 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
	end


Rivetshore_Raazi_Talk::
# 253 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 254 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_0
# 256 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_0
# 257 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_1
# 258 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 259 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 260 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_1
# 261 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 264 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 265 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_CALL
# 266 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 267 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_2
# 268 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 269 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 270 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_2
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_3
# 273 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 274 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 275 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_3
# 276 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 277 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 278 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 279 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_4
# 280 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 281 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 282 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_4
# 283 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_5
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_6
# 285 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 287 "data//maps/RivetshoreQuarry/scripts.pory"
	removeobject LOCALID_RAAZI
# 288 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALL
# 290 "data//maps/RivetshoreQuarry/scripts.pory"
	fadenewbgm MUS_RG_PEWTER
# 291 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_HideFollower::
# 301 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 302 "data//maps/RivetshoreQuarry/scripts.pory"
	hidefollower
# 303 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 4
# 304 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 305 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_ShowFollower::
# 310 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 311 "data//maps/RivetshoreQuarry/scripts.pory"
	clearflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 312 "data//maps/RivetshoreQuarry/scripts.pory"
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
	emote_exclamation_mark
# 33 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_in_place_right
	step_end

# 36 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Percy_Movement_2:
# 36 "data//maps/RivetshoreQuarry/scripts.pory"
	face_left
	step_end

# 51 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Percy_Movement_3:
# 51 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 51 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 51 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 51 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 52 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Percy_Movement_4:
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 52 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
	step_end

# 120 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0:
# 120 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 120 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 120 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 120 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 120 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 120 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 120 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
	step_end

# 129 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1:
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

# 175 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_0:
# 175 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
# 175 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 179 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_1:
# 179 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
	step_end

# 256 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_0:
# 256 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 256 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_left
# 256 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
# 256 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 257 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_1:
# 257 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 257 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_right
# 257 "data//maps/RivetshoreQuarry/scripts.pory"
	face_left
# 257 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 267 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_2:
# 267 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
	step_end

# 272 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_3:
# 272 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 279 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_4:
# 279 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 283 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_5:
# 283 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 283 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 284 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_6:
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 284 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

RivetshoreQuarry_Percy_Text_0:
# 24 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "It's the Rivetshore Construction CEO's\n"
	.string "Percy!\p"
	.string "What's it doing here? Was it led here by\n"
	.string "another Pokémon?$"

RivetshoreQuarry_Percy_Text_1:
# 40 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "It's a Mimikyu! Mimikyu must have been\n"
	.string "the one playing pranks on everyone!\p"
	.string "Mimikyu - you shouldn't be playing\n"
	.string "pranks on people!$"

RivetshoreQuarry_Percy_Text_2:
# 48 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Percy goes back to its owner!$"

RivetshoreQuarry_Nurse_Text_0:
# 71 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "We have a small infirmary here to treat\n"
	.string "builders and Pokémon that get hurt.\p"
	.string "Why don't you rest for a bit?$"

RivetshoreQuarry_Nurse_Text_1:
# 74 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Take care, trainer!$"

RivetshoreQuarry_Chansey_Text_0:
# 81 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Chansey is bouncing with happiness!$"

RivetshoreQuarry_NPC1_Text_0:
# 87 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I'm the shift manager at the quarry!\p"
	.string "...\p"
	.string "Why am I not out there with my team?\p"
	.string "It's too hot!$"

RivetshoreQuarry_NPC2_Text_0:
# 91 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Work has become much easier after the\n"
	.string "CEO had this infirmary and resting spot\l"
	.string "constructed. He really understands our\l"
	.string "struggles!\p"
	.string "I can't say the same for the shift\n"
	.string "manager though.$"

RivetshoreQuarry_Blocker_NPC_Text_0:
# 97 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Why aren't people allowed in the quarry\n"
	.string "when Raazi's not around?\p"
	.string "Cause it's dangerous, idiot!$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_0:
# 124 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_1:
# 125 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Who do we have here?\p"
	.string "Seems like you're here to contest me\n"
	.string "for my gym badge. Very well then - come\l"
	.string "over here and show me your worth!$"

RivetshoreQuarry_Fall_Trigger_Text_0:
# 143 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "The floor was rigged! It's a trap!$"

RivetshoreQuarry_Fall_Trigger_Text_1:
# 147 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Come back up and challenge me,\n"
	.string "trainer...if you can!$"

RivetshoreQuarry_Blocker_Trigger_Text_0:
# 177 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Sorry. The quarry's closed sinze Raazi's\n"
	.string "not here right now.\p"
	.string "Where'd he go?\p"
	.string "What's it to you, kid?$"

Rivetshore_Gym_Trainer_A_Text_0:
# 195 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You gotta be tough and sturdy if you\n"
	.string "wanna work here!$"

Rivetshore_Gym_Trainer_A_Text_1:
# 195 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You're extra sturdy!$"

Rivetshore_Gym_Trainer_A_Text_2:
# 196 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "$"

Rivetshore_Gym_Trainer_B_Text_0:
# 203 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "The statue trainer! Have you found all\n"
	.string "the statues yet?\p"
	.string "Bergmite and I have become quite\n"
	.string "strong, you know?\p"
	.string "Bergmie even evolved into Avalugg. Now\n"
	.string "we're aiming for the Pokemon\l"
	.string "Championship!$"

Rivetshore_Gym_Trainer_B_Text_1:
# 203 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "We need to work harder, Bergmite!$"

Rivetshore_Gym_Trainer_B_Text_2:
# 204 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "We hate losing!$"

Rivetshore_Gym_Avalugg_Text_0:
# 210 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Avalugg looks really tough!\p"
	.string "Where did the cute Bergmite go?$"

Rivetshore_Gym_Trainer_C_Text_0:
# 216 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "My partner and I grew up together. We\n"
	.string "even made it all the way to the final\l"
	.string "gym. You can't break our bond!$"

Rivetshore_Gym_Trainer_C_Text_1:
# 216 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You broke our bond!$"

Rivetshore_Gym_Trainer_C_Text_2:
# 217 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Losing to you fires me and Arcanine up\n"
	.string "even more!$"

Rivetshore_Gym_Trainer_D_Text_0:
# 223 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Us builders and hikers get along well.\n"
	.string "We're both rock-steady with hearts of\l"
	.string "steel!$"

Rivetshore_Gym_Trainer_D_Text_1:
# 223 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "What's your heart made of?$"

Rivetshore_Gym_Trainer_E_Text_0:
# 230 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I miss the mountaineering life, but this\n"
	.string "quarry makes me feel at home!$"

Rivetshore_Gym_Trainer_E_Text_1:
# 230 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I don't miss losing to trainers!s$"

Rivetshore_Raazi_Talk_Text_0:
# 254 "data//maps/RivetshoreQuarry/scripts.pory"
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
# 260 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Let me see whether you can face the\n"
	.string "might and fury of -$"

Rivetshore_Raazi_Talk_Text_2:
# 270 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Forgive me. I must take this call.$"

Rivetshore_Raazi_Talk_Text_3:
# 275 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Hello?\p"
	.string "...\p"
	.string "...\p"
	.string "Viniel and Carona are here?\p"
	.string "Very well. I'm coming.\n"
	.string "We'll depart as soon as I reach.$"

Rivetshore_Raazi_Talk_Text_4:
# 282 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Apologies, {PLAYER}. I must put this\n"
	.string "challenge on hold as I have an\l"
	.string "unavoidable engagement.\p"
	.string "Shall we do this another time?$"
