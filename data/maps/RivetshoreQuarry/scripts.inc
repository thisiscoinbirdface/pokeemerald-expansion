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
	goto_if_set FLAG_RIVETSHORE_GET_POCKETBOY, RivetshoreQuarry_NPC1_2
# 91 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 92 "data//maps/RivetshoreQuarry/scripts.pory"
	faceplayer
# 93 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC1_Text_1, MSGBOX_YESNO
# 94 "data//maps/RivetshoreQuarry/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreQuarry_NPC1_5
# 96 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC1_Text_2
# 98 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_NONE, FALSE
# 99 "data//maps/RivetshoreQuarry/scripts.pory"
	special StartFlappyBird
# 100 "data//maps/RivetshoreQuarry/scripts.pory"
	waitstate
# 101 "data//maps/RivetshoreQuarry/scripts.pory"
	savebgm MUS_DUMMY
# 102 "data//maps/RivetshoreQuarry/scripts.pory"
	fadedefaultbgm
# 103 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 1
# 105 "data//maps/RivetshoreQuarry/scripts.pory"
	compare GAME_CORNER_VAR_WINNINGS, 0
	goto_if_gt RivetshoreQuarry_NPC1_8
# 114 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_NPC1_2:
# 88 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC1_Text_0, MSGBOX_NPC
	end

RivetshoreQuarry_NPC1_5:
	end

RivetshoreQuarry_NPC1_8:
# 106 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC1_Text_3, MSGBOX_NPC
# 107 "data//maps/RivetshoreQuarry/scripts.pory"
	giveitem ITEM_POCKET_BOY
# 108 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_GET_POCKETBOY
# 109 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


RivetshoreQuarry_NPC2::
# 118 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_GET_POCKETBOY, RivetshoreQuarry_NPC2_2
# 123 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC2_Text_1, MSGBOX_NPC
	end

RivetshoreQuarry_NPC2_2:
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_NPC2_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_Blocker_NPC::
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_NPC_Text_0, MSGBOX_NPC
	end


RivetshoreQuarry_Raazi_Callout_Trigger::
# 147 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_RAAZI_CALLOUT, RivetshoreQuarry_Raazi_Callout_Trigger_2
# 149 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 151 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 152 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0
# 153 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 154 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 156 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 157 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Raazi_Callout_Trigger_Text_1
# 158 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 160 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1
# 162 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 163 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALLOUT
# 166 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Raazi_Callout_Trigger_2:
	end


RivetshoreQuarry_Fall_Trigger::
# 171 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Fall_Trigger_2
# 173 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 175 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Fall_Trigger_Text_0, MSGBOX_NPC
# 176 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 177 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 178 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 179 "data//maps/RivetshoreQuarry/scripts.pory"
	message RivetshoreQuarry_Fall_Trigger_Text_1
# 180 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8004, 2
# 181 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8005, 2
# 182 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8006, 30
# 183 "data//maps/RivetshoreQuarry/scripts.pory"
	setvar VAR_0x8007, 5
# 184 "data//maps/RivetshoreQuarry/scripts.pory"
	special ShakeCamera
# 185 "data//maps/RivetshoreQuarry/scripts.pory"
	waitstate
# 189 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_FALL
# 191 "data//maps/RivetshoreQuarry/scripts.pory"
	warphole MAP_RIVETSHORE_QUARRY_INTERIOR
# 193 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Fall_Trigger_2:
	end


RivetshoreQuarry_Trap_Cleared_Trigger::
# 198 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED, RivetshoreQuarry_Trap_Cleared_Trigger_2
# 199 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_QUARRY_TRAP_CLEARED
	end

RivetshoreQuarry_Trap_Cleared_Trigger_2:
	end


RivetshoreQuarry_Blocker_Trigger::
# 204 "data//maps/RivetshoreQuarry/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreQuarry_Blocker_Trigger_2
# 206 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 207 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_BLOCKER, RivetshoreQuarry_Blocker_Trigger_Movement_0
# 208 "data//maps/RivetshoreQuarry/scripts.pory"
	movedelay
# 209 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Blocker_Trigger_Text_0
# 210 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 211 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreQuarry_Blocker_Trigger_Movement_1
# 212 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 213 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end

RivetshoreQuarry_Blocker_Trigger_2:
	end


Rivetshore_Gym_Trainer_A::
# 227 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_1
# 228 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 229 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_B::
# 235 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_B, Rivetshore_Gym_Trainer_B_Text_0, Rivetshore_Gym_Trainer_B_Text_1
# 236 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_B_Text_2
# 237 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Avalugg::
# 241 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_AVALUGG_HISUI, CRY_MODE_NORMAL
# 242 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Avalugg_Text_0, MSGBOX_NPC
	end


Rivetshore_Gym_Trainer_C::
# 248 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_C, Rivetshore_Gym_Trainer_C_Text_0, Rivetshore_Gym_Trainer_C_Text_1
# 249 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_C_Text_2
# 250 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_D::
# 255 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_D, Rivetshore_Gym_Trainer_D_Text_0, Rivetshore_Gym_Trainer_D_Text_1
# 256 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_D_Text_2
# 257 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_E::
# 262 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_E, Rivetshore_Gym_Trainer_E_Text_0, Rivetshore_Gym_Trainer_E_Text_1
# 263 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_E_Text_2
# 264 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_Aron::
# 280 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
	end


Rivetshore_Raazi_Talk::
# 285 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 286 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_0
# 288 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_0
# 289 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_1
# 290 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 291 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 292 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_1
# 293 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 296 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 297 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_CALL
# 298 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 299 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_2
# 300 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 301 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 302 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_2
# 304 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_3
# 305 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 306 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 307 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_3
# 308 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 309 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 310 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 311 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_4
# 312 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 313 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 314 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_4
# 315 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_5
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_6
# 317 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 319 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 320 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Rivetshore_Raazi_Talk_Movement_7
# 321 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 322 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 324 "data//maps/RivetshoreQuarry/scripts.pory"
	removeobject LOCALID_RAAZI
# 325 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALL
# 327 "data//maps/RivetshoreQuarry/scripts.pory"
	fadenewbgm MUS_RG_PEWTER
# 328 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_HideFollower::
# 338 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 339 "data//maps/RivetshoreQuarry/scripts.pory"
	hidefollower
# 340 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 4
# 341 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 342 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_ShowFollower::
# 347 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 348 "data//maps/RivetshoreQuarry/scripts.pory"
	clearflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 349 "data//maps/RivetshoreQuarry/scripts.pory"
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

# 152 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0:
# 152 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 152 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 152 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 152 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 152 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 152 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 152 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
	step_end

# 161 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1:
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

# 207 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_0:
# 207 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
# 207 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 211 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Blocker_Trigger_Movement_1:
# 211 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
	step_end

# 288 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_0:
# 288 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 288 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_left
# 288 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
# 288 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 289 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_1:
# 289 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 289 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_right
# 289 "data//maps/RivetshoreQuarry/scripts.pory"
	face_left
# 289 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 299 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_2:
# 299 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
	step_end

# 304 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_3:
# 304 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 311 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_4:
# 311 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 315 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_5:
# 315 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 315 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 316 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_6:
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 316 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

# 320 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_7:
# 320 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 320 "data//maps/RivetshoreQuarry/scripts.pory"
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
# 88 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Now I don't have my PocketBoy any more,\n"
	.string "I actually gotta do some work!$"

RivetshoreQuarry_NPC1_Text_1:
# 93 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I'm the shift manager at the quarry!\p"
	.string "...\p"
	.string "Why am I not out there with my team?\p"
	.string "It's too hot! Plus, I gotta get on the\n"
	.string "scoreboard in FlutterFree. It's so hard!\p"
	.string "What? You want my PocketBoy?$"

RivetshoreQuarry_NPC1_Text_2:
# 96 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Alright kid, how about this?\p"
	.string "If you can get even one point in\n"
	.string "FlutterFree, I'll let you have it!$"

RivetshoreQuarry_NPC1_Text_3:
# 106 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "No way! You're a natural! Sigh...I'm\n"
	.string "getting old, ya know? These fast-clicky\l"
	.string "games just aren't for my fingers.\l"
	.string "Alright kid, here ya go.\p"
	.string "Have fun!$"

RivetshoreQuarry_NPC2_Text_0:
# 119 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "The shift manager's actually working!\n"
	.string "Am I dreaming?$"

RivetshoreQuarry_NPC2_Text_1:
# 123 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Work's become better after the Raazi\n"
	.string "set up this infirmary and resting spot.\l"
	.string "He really understands our struggles!\p"
	.string "I can't say the same for the shift\n"
	.string "manager though...look at him!\l"
	.string "He's playing games on his PocketBoy!$"

RivetshoreQuarry_Blocker_NPC_Text_0:
# 129 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Why aren't people allowed in the quarry\n"
	.string "when Raazi's not around?\p"
	.string "Cause it's dangerous, idiot!$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_0:
# 156 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_1:
# 157 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Who do we have here?\p"
	.string "Seems like you're here to contest me\n"
	.string "for my gym badge. Very well then - come\l"
	.string "over here and show me your worth!$"

RivetshoreQuarry_Fall_Trigger_Text_0:
# 175 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "The floor was rigged! It's a trap!$"

RivetshoreQuarry_Fall_Trigger_Text_1:
# 179 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Come back up and challenge me,\n"
	.string "trainer...if you can!$"

RivetshoreQuarry_Blocker_Trigger_Text_0:
# 209 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Sorry. The quarry's closed sinze Raazi's\n"
	.string "not here right now.\p"
	.string "Where'd he go?\p"
	.string "What's it to you, kid?$"

Rivetshore_Gym_Trainer_A_Text_0:
# 227 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You gotta be tough and sturdy if you\n"
	.string "wanna work here!$"

Rivetshore_Gym_Trainer_A_Text_1:
# 227 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You're extra sturdy!$"

Rivetshore_Gym_Trainer_A_Text_2:
# 228 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi's tough, but we all respect him.\n"
	.string "He grew up working in the quarry.$"

Rivetshore_Gym_Trainer_B_Text_0:
# 235 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "The statue trainer! Have you found all\n"
	.string "the statues yet?\p"
	.string "Bergmite and I have become quite\n"
	.string "strong, you know?\p"
	.string "Bergmite even evolved into Avalugg. Now\n"
	.string "we're aiming for the Pokémon\l"
	.string "Championship!$"

Rivetshore_Gym_Trainer_B_Text_1:
# 235 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "We need to work harder, Bergmite!$"

Rivetshore_Gym_Trainer_B_Text_2:
# 236 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "We hate losing!$"

Rivetshore_Gym_Avalugg_Text_0:
# 242 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Avalugg looks really tough!\p"
	.string "Where did the cute Bergmite go?$"

Rivetshore_Gym_Trainer_C_Text_0:
# 248 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "My partner and I grew up together. We\n"
	.string "even made it all the way to the final\l"
	.string "gym. You can't break our bond!$"

Rivetshore_Gym_Trainer_C_Text_1:
# 248 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You broke our bond!$"

Rivetshore_Gym_Trainer_C_Text_2:
# 249 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Losing to you fires me and Arcanine up\n"
	.string "even more!$"

Rivetshore_Gym_Trainer_D_Text_0:
# 255 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Us builders and hikers get along well.\n"
	.string "We're both rock-steady with hearts of\l"
	.string "steel!$"

Rivetshore_Gym_Trainer_D_Text_1:
# 255 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "What's your heart made of?$"

Rivetshore_Gym_Trainer_D_Text_2:
# 256 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I hope my buddy starts working here!$"

Rivetshore_Gym_Trainer_E_Text_0:
# 262 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I miss the mountaineering life, but this\n"
	.string "quarry makes me feel at home!$"

Rivetshore_Gym_Trainer_E_Text_1:
# 262 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I don't miss losing to trainers!$"

Rivetshore_Gym_Trainer_E_Text_2:
# 263 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Maybe I should get a job here...$"

Rivetshore_Raazi_Talk_Text_0:
# 286 "data//maps/RivetshoreQuarry/scripts.pory"
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
# 292 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Let me see whether you can face the\n"
	.string "might and fury of -$"

Rivetshore_Raazi_Talk_Text_2:
# 302 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Forgive me. I must take this call.$"

Rivetshore_Raazi_Talk_Text_3:
# 307 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Hello?\p"
	.string "...\p"
	.string "...\p"
	.string "Viniel and Carona are here?\p"
	.string "Very well. I'm coming.\n"
	.string "We'll depart as soon as I reach.$"

Rivetshore_Raazi_Talk_Text_4:
# 314 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Apologies, {PLAYER}. I must put this\n"
	.string "challenge on hold as I have an\l"
	.string "unavoidable engagement.\p"
	.string "Shall we do this another time?$"
