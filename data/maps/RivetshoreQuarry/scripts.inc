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
# 10 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 12 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 13 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0
# 14 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 15 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 17 "data//maps/RivetshoreQuarry/scripts.pory"
	speakername RivetshoreQuarry_Raazi_Callout_Trigger_Text_0
# 18 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox RivetshoreQuarry_Raazi_Callout_Trigger_Text_1
# 19 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 21 "data//maps/RivetshoreQuarry/scripts.pory"
	special SpawnCameraObject
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1
# 23 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 24 "data//maps/RivetshoreQuarry/scripts.pory"
	special RemoveCameraObject
# 26 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALLOUT
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
	trainerbattle_single TRAINER_RIVETSHORE_GYM_A, Rivetshore_Gym_Trainer_A_Text_0, Rivetshore_Gym_Trainer_A_Text_1
# 94 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 95 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_B::
# 100 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_B, Rivetshore_Gym_Trainer_B_Text_0, Rivetshore_Gym_Trainer_B_Text_1
# 101 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 102 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_C::
# 107 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_C, Rivetshore_Gym_Trainer_C_Text_0, Rivetshore_Gym_Trainer_C_Text_1
# 108 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 109 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_D::
# 114 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_D, Rivetshore_Gym_Trainer_D_Text_0, Rivetshore_Gym_Trainer_D_Text_1
# 115 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 116 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Gym_Trainer_E::
# 121 "data//maps/RivetshoreQuarry/scripts.pory"
	trainerbattle_single TRAINER_RIVETSHORE_GYM_E, Rivetshore_Gym_Trainer_E_Text_0, Rivetshore_Gym_Trainer_E_Text_1
# 122 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox Rivetshore_Gym_Trainer_A_Text_2
# 123 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


Rivetshore_Quarry_Aron::
# 136 "data//maps/RivetshoreQuarry/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
	end


Rivetshore_Raazi_Talk::
# 141 "data//maps/RivetshoreQuarry/scripts.pory"
	lockall
# 142 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_0
# 144 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_0
# 145 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_1
# 146 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 147 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 148 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_1
# 149 "data//maps/RivetshoreQuarry/scripts.pory"
	release
# 152 "data//maps/RivetshoreQuarry/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 153 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_CALL
# 154 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 155 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_2
# 156 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 157 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 158 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_2
# 160 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_3
# 161 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 162 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 163 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_3
# 164 "data//maps/RivetshoreQuarry/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 165 "data//maps/RivetshoreQuarry/scripts.pory"
	waitse
# 166 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 167 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_4
# 168 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 169 "data//maps/RivetshoreQuarry/scripts.pory"
	delay 16
# 170 "data//maps/RivetshoreQuarry/scripts.pory"
	msgbox_delay RivetshoreQuarry_Raazi_Callout_Trigger_Text_0, Rivetshore_Raazi_Talk_Text_4
# 171 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Raazi_Talk_Movement_5
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	applymovement LOCALID_RAAZI, Rivetshore_Raazi_Talk_Movement_6
# 173 "data//maps/RivetshoreQuarry/scripts.pory"
	waitmovement 0
# 175 "data//maps/RivetshoreQuarry/scripts.pory"
	removeobject LOCALID_RAAZI
# 176 "data//maps/RivetshoreQuarry/scripts.pory"
	setflag FLAG_RIVETSHORE_RAAZI_CALL
# 178 "data//maps/RivetshoreQuarry/scripts.pory"
	fadenewbgm MUS_RG_PEWTER
# 179 "data//maps/RivetshoreQuarry/scripts.pory"
	releaseall
	end


# 13 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_0:
# 13 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 13 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 13 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 13 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_down
# 13 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 13 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 13 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
# 13 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_left
	step_end

# 22 "data//maps/RivetshoreQuarry/scripts.pory"
RivetshoreQuarry_Raazi_Callout_Trigger_Movement_1:
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 22 "data//maps/RivetshoreQuarry/scripts.pory"
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

# 144 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_0:
# 144 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 144 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_left
# 144 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
# 144 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 145 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_1:
# 145 "data//maps/RivetshoreQuarry/scripts.pory"
	lock_facing_direction
# 145 "data//maps/RivetshoreQuarry/scripts.pory"
	jump_right
# 145 "data//maps/RivetshoreQuarry/scripts.pory"
	face_left
# 145 "data//maps/RivetshoreQuarry/scripts.pory"
	unlock_facing_direction
	step_end

# 155 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_2:
# 155 "data//maps/RivetshoreQuarry/scripts.pory"
	emote_exclamation_mark
	step_end

# 160 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_3:
# 160 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 167 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_4:
# 167 "data//maps/RivetshoreQuarry/scripts.pory"
	face_right
	step_end

# 171 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_5:
# 171 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 171 "data//maps/RivetshoreQuarry/scripts.pory"
	face_down
	step_end

# 172 "data//maps/RivetshoreQuarry/scripts.pory"
Rivetshore_Raazi_Talk_Movement_6:
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_right
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
# 172 "data//maps/RivetshoreQuarry/scripts.pory"
	walk_up
	step_end

RivetshoreQuarry_Raazi_Callout_Trigger_Text_0:
# 17 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Raazi$"

RivetshoreQuarry_Raazi_Callout_Trigger_Text_1:
# 18 "data//maps/RivetshoreQuarry/scripts.pory"
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
	.string "You gotta be tough and sturdy if you\n"
	.string "wanna work here!$"

Rivetshore_Gym_Trainer_A_Text_1:
# 93 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "You're extra sturdy!$"

Rivetshore_Gym_Trainer_A_Text_2:
# 94 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "$"

Rivetshore_Gym_Trainer_B_Text_0:
# 100 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I used to train at the Mirroh Base Camp\n"
	.string "Gym before it shut down. Now I'm going\l"
	.string "to become a Gym Leader myself!$"

Rivetshore_Gym_Trainer_B_Text_1:
# 100 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I can't be a leader yet!$"

Rivetshore_Gym_Trainer_C_Text_0:
# 107 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Are you a serious trainer? Or just\n"
	.string "goofing around?$"

Rivetshore_Gym_Trainer_C_Text_1:
# 107 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Yeah, you're serious alright!$"

Rivetshore_Gym_Trainer_D_Text_0:
# 114 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Us builders and hikers get along well.\n"
	.string "We're both rock-steady with hearts of\l"
	.string "steel!$"

Rivetshore_Gym_Trainer_D_Text_1:
# 114 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "What's your heart made of?$"

Rivetshore_Gym_Trainer_E_Text_0:
# 121 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I miss the mountaineering life, but this\n"
	.string "quarry makes me feel at home!$"

Rivetshore_Gym_Trainer_E_Text_1:
# 121 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "I don't miss losing to trainers!s$"

Rivetshore_Raazi_Talk_Text_0:
# 142 "data//maps/RivetshoreQuarry/scripts.pory"
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
# 148 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Let me see whether you can face the\n"
	.string "might and fury of -$"

Rivetshore_Raazi_Talk_Text_2:
# 158 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Forgive me. I must take this call.$"

Rivetshore_Raazi_Talk_Text_3:
# 163 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Hello?\p"
	.string "...\p"
	.string "...\p"
	.string "Viniel and Carona are here?\p"
	.string "Very well. I'm coming.\n"
	.string "We'll depart as soon as I reach.$"

Rivetshore_Raazi_Talk_Text_4:
# 170 "data//maps/RivetshoreQuarry/scripts.pory"
	.string "Apologies, {PLAYER}. I must put this\n"
	.string "challenge on hold as I have an\l"
	.string "unavoidable engagement.\p"
	.string "Shall we do this another time?$"
