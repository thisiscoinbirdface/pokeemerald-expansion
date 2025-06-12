SilversunCity_Theater_MapScripts::
	.byte 0


SilversunCity_Theater_Leader::
# 10 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 11 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 13 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_Leader_2
# 21 "data//maps/SilversunCity_Theater/scripts.pory"
	call Common_EventScript_SaveGameBeforeBattle
# 24 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 25 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_2
# 26 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 27 "data//maps/SilversunCity_Theater/scripts.pory"
	hidefollower
# 28 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 3, 6
# 29 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_0
# 30 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_0
# 31 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 8
# 33 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 34 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 5, 6
# 35 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 36 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 38 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 39 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 40 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_3
# 41 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 42 "data//maps/SilversunCity_Theater/scripts.pory"
	playse SE_APPLAUSE
# 43 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_4
# 44 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_5
# 45 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 46 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_1
# 47 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_2
# 48 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 49 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 16
# 50 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 51 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_6
# 52 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 55 "data//maps/SilversunCity_Theater/scripts.pory"
	trainerbattle_no_intro TRAINER_SILVERSUNGYM_LEADER, SilversunCity_Theater_Leader_Text_7
# 59 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 60 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_3
# 61 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_4
# 62 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 63 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_0
# 64 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 65 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 67 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 68 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_8
# 69 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_4
# 70 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_9
# 71 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_10
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 73 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_1
# 74 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_2
# 75 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 76 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 77 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_11
# 80 "data//maps/SilversunCity_Theater/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 82 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 83 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_12
# 84 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 85 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_BADGE04_GET
# 88 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 89 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_13
# 91 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 94 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 95 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_14
# 96 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 99 "data//maps/SilversunCity_Theater/scripts.pory"
	settrainerflag TRAINER_SILVERSUNGYM_A
# 100 "data//maps/SilversunCity_Theater/scripts.pory"
	settrainerflag TRAINER_SILVERSUNGYM_B
# 101 "data//maps/SilversunCity_Theater/scripts.pory"
	settrainerflag TRAINER_SILVERSUNGYM_C
# 102 "data//maps/SilversunCity_Theater/scripts.pory"
	settrainerflag TRAINER_SILVERSUNGYM_D
# 105 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 106 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 107 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 5, 6
# 108 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 16
# 109 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 110 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 111 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end

SilversunCity_Theater_Leader_2:
# 14 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_1
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end


SilversunCity_Theater_EventScript_SomberBlocker::
# 124 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 125 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 126 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_EventScript_SomberBlocker_Text_0
# 127 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_EventScript_SomberBlocker_Text_1
# 128 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 130 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_ENTRANCE
# 132 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 6, SilversunCity_Theater_EventScript_SomberBlocker_Movement_0
# 133 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 134 "data//maps/SilversunCity_Theater/scripts.pory"
	removeobject 6
# 135 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end


SilversunCity_Theater_NPC1::
# 149 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC1_2
# 152 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC1_1:
	end

SilversunCity_Theater_NPC1_2:
# 150 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC1_1


SilversunCity_Theater_NPC2::
# 158 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC2_2
# 161 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC2_1:
	end

SilversunCity_Theater_NPC2_2:
# 159 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC2_1


SilversunCity_Theater_NPC3::
# 167 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC3_2
# 170 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC3_1:
	end

SilversunCity_Theater_NPC3_2:
# 168 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC3_1


SilversunCity_Theater_NPC4::
# 176 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC4_2
# 179 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC4_1:
	end

SilversunCity_Theater_NPC4_2:
# 177 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC4_1


SilversunCity_Theater_NPC5::
# 186 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC5_2
# 194 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_8
# 197 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_3, MSGBOX_YESNO
# 198 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC5_11
# 201 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_4, MSGBOX_NPC
SilversunCity_Theater_NPC5_1:
	end

SilversunCity_Theater_NPC5_2:
# 187 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_5
# 190 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_1
# 191 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_5:
# 188 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_8:
# 195 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_2, MSGBOX_NPC
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_11:
# 199 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	goto SilversunCity_Theater_NPC5_1


SilversunCity_Theater_Lens_Reward::
# 209 "data//maps/SilversunCity_Theater/scripts.pory"
	message SilversunCity_Theater_Lens_Reward_Text_0
# 210 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmessage
# 211 "data//maps/SilversunCity_Theater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_Theater_Lens_Reward_Text_1, SilversunCity_Theater_Lens_Reward_Text_2
# 212 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_Theater_Lens_Reward_1
# 215 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardB
	return

SilversunCity_Theater_Lens_Reward_1:
# 213 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardA
	return


SilversunCity_Theater_Lens_RewardA::
# 219 "data//maps/SilversunCity_Theater/scripts.pory"
	setvar VAR_0x8006, ITEM_WIDE_LENS
# 220 "data//maps/SilversunCity_Theater/scripts.pory"
	showitemdescription
# 221 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardA_Text_0, MSGBOX_YESNO
# 222 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_Lens_RewardA_1
# 227 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 228 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	return

SilversunCity_Theater_Lens_RewardA_1:
# 223 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 224 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 225 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardEnd
	return


SilversunCity_Theater_Lens_RewardB::
# 232 "data//maps/SilversunCity_Theater/scripts.pory"
	setvar VAR_0x8006, ITEM_ZOOM_LENS
# 233 "data//maps/SilversunCity_Theater/scripts.pory"
	showitemdescription
# 234 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardA_Text_0, MSGBOX_YESNO
# 235 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_Lens_RewardB_1
# 240 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 241 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	return

SilversunCity_Theater_Lens_RewardB_1:
# 236 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 237 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 238 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardEnd
	return


SilversunCity_Theater_Lens_RewardEnd::
# 245 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_LENS
# 246 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardEnd_Text_0, MSGBOX_NPC
	end


SilversunCity_Theater_NPC6::
# 260 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_SCARF, SilversunCity_Theater_NPC6_2
# 263 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 264 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 265 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_1, MSGBOX_YESNO
# 266 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_6
# 281 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_7, MSGBOX_NPC
SilversunCity_Theater_NPC6_5:
# 283 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
SilversunCity_Theater_NPC6_1:
	end

SilversunCity_Theater_NPC6_2:
# 261 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_1

SilversunCity_Theater_NPC6_6:
# 267 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_2, MSGBOX_YESNO
# 268 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_9
# 278 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_6, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_5

SilversunCity_Theater_NPC6_9:
# 269 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_3, MSGBOX_YESNO
# 270 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_12
	goto SilversunCity_Theater_NPC6_5

SilversunCity_Theater_NPC6_12:
# 271 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_4
# 272 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_DESTINY_KNOT
# 273 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_SCARF
# 274 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_5, MSGBOX_NPC
	end


SilversunCity_Theater_NPC7::
# 289 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC7_2
# 292 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC7_1:
	end

SilversunCity_Theater_NPC7_2:
# 290 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC7_1


# 29 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_0:
# 29 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 46 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_1:
# 46 "data//maps/SilversunCity_Theater/scripts.pory"
	face_right
	step_end

# 47 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_2:
# 47 "data//maps/SilversunCity_Theater/scripts.pory"
	face_left
	step_end

# 60 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_3:
# 60 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 60 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 61 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_4:
# 61 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 61 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 132 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_EventScript_SomberBlocker_Movement_0:
# 132 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_up
	step_end

SilversunCity_Theater_Leader_Text_0:
# 14 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria$"

SilversunCity_Theater_Leader_Text_1:
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Such art! Such expression!\p"
	.string "...\p"
	.string "Now be a dear and get offstage,\n"
	.string "{PLAYER}. The audience doesn't seem\l"
	.string "to be too fond of you.$"

SilversunCity_Theater_Leader_Text_2:
# 25 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Hmm, so it's you. Not spectacular, but\n"
	.string "you'll do.$"

SilversunCity_Theater_Leader_Text_3:
# 40 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Welcome to the Gloria Show! Tonight,\n"
	.string "we're doing a live performance that will\l"
	.string "sweep you off your feet!$"

SilversunCity_Theater_Leader_Text_4:
# 43 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Audience$"

SilversunCity_Theater_Leader_Text_5:
# 44 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Woohoo! Go Gloria!$"

SilversunCity_Theater_Leader_Text_6:
# 51 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You're a trainer, correct? Then you\n"
	.string "must want my badge. If you want it,\l"
	.string "you'll have to earn it, right here on\l"
	.string "stage!\p"
	.string "The lights, the sound!\n"
	.string "The audience, the emotions!\p"
	.string "I specialise in the art of dark drama,\n"
	.string "{PLAYER}. I live to surprise my\l"
	.string "audience and shock them.\p"
	.string "And tonight, your defeat will be my next\n"
	.string "performance!\p"
	.string "Now, {PLAYER}, enthrall me with your\n"
	.string "danse macabre!$"

SilversunCity_Theater_Leader_Text_7:
# 55 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "What a performace!$"

SilversunCity_Theater_Leader_Text_8:
# 68 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "A cheer from the audience, please!$"

SilversunCity_Theater_Leader_Text_9:
# 70 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Boo! How dare you beat Gloria, you\n"
	.string "horrible trainer! Boo!$"

SilversunCity_Theater_Leader_Text_10:
# 71 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "{PLAYER} ducked to avoid a tomato!$"

SilversunCity_Theater_Leader_Text_11:
# 77 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ah...don't mind, {PLAYER}. Show\n"
	.string "business can be tough. But what a\l"
	.string "battle! Such elegance! Such style and\l"
	.string "panache! {PLAYER}, were you not a\l"
	.string "trainer, I would recruit you right away!\l"
	.string "But you dance to a different tune. And\l"
	.string "I must reward you with this.$"

SilversunCity_Theater_Leader_Text_12:
# 83 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "{PLAYER} received the Drama Badge\n"
	.string "from Gloria.$"

SilversunCity_Theater_Leader_Text_13:
# 89 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "The Drama Badge will let you use HM\n"
	.string "Strength outside of battle. And I must\l"
	.string "give you this beautiful jewel too.$"

SilversunCity_Theater_Leader_Text_14:
# 95 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "It was a pleasure sharing the stage\n"
	.string "with you. May you elegantly bob and\l"
	.string "weave through the dance of life,\l"
	.string "{PLAYER}!$"

SilversunCity_Theater_EventScript_SomberBlocker_Text_0:
# 126 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gabrielle$"

SilversunCity_Theater_EventScript_SomberBlocker_Text_1:
# 127 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Hey, nobody's allowed back here. Scram!\p"
	.string "...oh, it's you. Sigh...I can guess what\n"
	.string "you're here for.\p"
	.string "...\p"
	.string "Go on, get inside then. I won't stop you.\n"
	.string "With this, we're square, hear me?\p"
	.string "Oh, I'm going to get into trouble...but I\n"
	.string "always pay back my debts!\p"
	.string "I really hope the grunts inside kick you\n"
	.string "right back out!$"

SilversunCity_Theater_NPC1_Text_0:
# 150 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria is graceful even in defeat. Now\n"
	.string "that's something everyone can learn\l"
	.string "from.$"

SilversunCity_Theater_NPC1_Text_1:
# 152 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria is the face of Silversun City! A\n"
	.string "Gym Leader AND a famous actress? She's\l"
	.string "really a role model for women.$"

SilversunCity_Theater_NPC2_Text_0:
# 159 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Incredible! Her Bombirdier! Such a\n"
	.string "shame she lost, and to such\l"
	.string "a...nondescript opponent.$"

SilversunCity_Theater_NPC2_Text_1:
# 161 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "They say Gloria caught her Bombirdier\n"
	.string "while shooting an adventure flick in\l"
	.string "the Ivy River.$"

SilversunCity_Theater_NPC3_Text_0:
# 168 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...\p"
	.string "Fine, I threw the tomato!\n"
	.string "I'm sorry...\p"
	.string "...\p"
	.string "...no, I'm not! I love Gloria!\n"
	.string "Boo to you!$"

SilversunCity_Theater_NPC3_Text_1:
# 170 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I wish Pokémon were allowed in. I\n"
	.string "would've brought my Budew along to\l"
	.string "watch...hey! How'd they let your Pokémon\l"
	.string "in? That's so unfair!$"

SilversunCity_Theater_NPC4_Text_0:
# 177 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Did you see Gloria's Bombirdier! Too bad\n"
	.string "that other person defeated it. A Greek\l"
	.string "tragedy!\n"
	.string "...oh, it was you.$"

SilversunCity_Theater_NPC4_Text_1:
# 179 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I'm a huuuge Gloria fan! I've been\n"
	.string "waiting for this show for months!$"

SilversunCity_Theater_NPC5_Text_0:
# 188 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "To be honest, it's not even my fault.\n"
	.string "The theater should arrange better\l"
	.string "seating, especially if they're charging\l"
	.string "the same price for all tickets!$"

SilversunCity_Theater_NPC5_Text_1:
# 190 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I'm glad I brought lenses because the\n"
	.string "performance was great!$"

SilversunCity_Theater_NPC5_Text_2:
# 195 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ahh, now let's settle in and watch\n"
	.string "Gloria's performance.$"

SilversunCity_Theater_NPC5_Text_3:
# 197 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "It's so hard to see what's going on from\n"
	.string "the back without a pair of lenses. Are\l"
	.string "you going to watch the show from here\l"
	.string "too?$"

SilversunCity_Theater_NPC5_Text_4:
# 201 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Got better seats? Good for you! I wish\n"
	.string "I'd booked mine faster.$"

SilversunCity_Theater_Lens_Reward_Text_0:
# 209 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Why don't you wear a pair of lenses?\n"
	.string "I've got extra.$"

SilversunCity_Theater_Lens_Reward_Text_1:
# 211 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Wide Lens$"

SilversunCity_Theater_Lens_Reward_Text_2:
# 211 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Scope Lens$"

SilversunCity_Theater_Lens_RewardA_Text_0:
# 221 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Are you sure?$"

SilversunCity_Theater_Lens_RewardEnd_Text_0:
# 246 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You can use it outside of the theater\n"
	.string "too!$"

SilversunCity_Theater_NPC6_Text_0:
# 261 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Right now I'm only an extra, but I'm\n"
	.string "about to land my first starring role any\l"
	.string "day now!$"

SilversunCity_Theater_NPC6_Text_1:
# 265 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Who are you? Only cast and crew are\n"
	.string "allowed backstage.\p"
	.string "Are you acting tonight?$"

SilversunCity_Theater_NPC6_Text_2:
# 267 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ooh! Are you going to go on-stage next\n"
	.string "to Gloria?$"

SilversunCity_Theater_NPC6_Text_3:
# 269 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh wow! You're a star!\n"
	.string "Can I have your autograph?$"

SilversunCity_Theater_NPC6_Text_4:
# 271 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...Thank you! Please take this.$"

SilversunCity_Theater_NPC6_Text_5:
# 274 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "A little something to remember me by!$"

SilversunCity_Theater_NPC6_Text_6:
# 278 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "So you're an extra too? Sigh...when will\n"
	.string "we get our big break?$"

SilversunCity_Theater_NPC6_Text_7:
# 281 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh, you're part of the crew. I'm an\n"
	.string "extra, so we're both playing support\l"
	.string "roles.\p"
	.string "Sigh...when will we get our big break?$"

SilversunCity_Theater_NPC7_Text_0:
# 290 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You must have nerves of steel, doing all\n"
	.string "that in front of a crowd that size!$"

SilversunCity_Theater_NPC7_Text_1:
# 292 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...breathe...breathe...I'm calming my\n"
	.string "nerves. Even after years of training, I\l"
	.string "get nervous before going on-stage.$"
