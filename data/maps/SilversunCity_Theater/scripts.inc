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
	release
# 27 "data//maps/SilversunCity_Theater/scripts.pory"
	hidefollower
# 28 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 29 "data//maps/SilversunCity_Theater/scripts.pory"
	fadeoutbgm 0
# 30 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 3, 6
# 31 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_0
# 32 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_0
# 33 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 8
# 35 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 36 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 5, 6
# 37 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 38 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 40 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 41 "data//maps/SilversunCity_Theater/scripts.pory"
	playbgm MUS_GYM, FALSE
# 42 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 8
# 43 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 44 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_3
# 45 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 46 "data//maps/SilversunCity_Theater/scripts.pory"
	playse SE_APPLAUSE
# 47 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_4
# 48 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_5
# 49 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 50 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_1
# 51 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_2
# 52 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 53 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 16
# 54 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 55 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_6
# 56 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 59 "data//maps/SilversunCity_Theater/scripts.pory"
	trainerbattle_no_intro TRAINER_SILVERSUNGYM_LEADER, SilversunCity_Theater_Leader_Text_7
# 63 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 64 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_3
# 65 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_4
# 66 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 67 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_0
# 68 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 69 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 71 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_8
# 73 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_4
# 74 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_9
# 75 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_10
# 76 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 77 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_1
# 78 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_2
# 79 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 80 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 81 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_11
# 83 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername NULL
# 84 "data//maps/SilversunCity_Theater/scripts.pory"
	message SilversunCity_Theater_Leader_Text_12
# 86 "data//maps/SilversunCity_Theater/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 88 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 89 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_BADGE04_GET
# 92 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 93 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_13
# 95 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 98 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 99 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_14
# 100 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 103 "data//maps/SilversunCity_Theater/scripts.pory"
	settrainerflag TRAINER_SILVERSUNGYM_A
# 104 "data//maps/SilversunCity_Theater/scripts.pory"
	settrainerflag TRAINER_SILVERSUNGYM_B
# 105 "data//maps/SilversunCity_Theater/scripts.pory"
	settrainerflag TRAINER_SILVERSUNGYM_C
# 106 "data//maps/SilversunCity_Theater/scripts.pory"
	settrainerflag TRAINER_SILVERSUNGYM_D
# 109 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 110 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 111 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 5, 6
# 112 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 16
# 113 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 114 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 115 "data//maps/SilversunCity_Theater/scripts.pory"
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
# 128 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 129 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 130 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_EventScript_SomberBlocker_Text_0
# 131 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_EventScript_SomberBlocker_Text_1
# 132 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 134 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_ENTRANCE
# 136 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 6, SilversunCity_Theater_EventScript_SomberBlocker_Movement_0
# 137 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 138 "data//maps/SilversunCity_Theater/scripts.pory"
	removeobject 6
# 139 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end


SilversunCity_Theater_NPC1::
# 153 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC1_2
# 156 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC1_1:
	end

SilversunCity_Theater_NPC1_2:
# 154 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC1_1


SilversunCity_Theater_NPC2::
# 162 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC2_2
# 165 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC2_1:
	end

SilversunCity_Theater_NPC2_2:
# 163 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC2_1


SilversunCity_Theater_NPC3::
# 171 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC3_2
# 174 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC3_1:
	end

SilversunCity_Theater_NPC3_2:
# 172 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC3_1


SilversunCity_Theater_NPC4::
# 180 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC4_2
# 183 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC4_1:
	end

SilversunCity_Theater_NPC4_2:
# 181 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC4_1


SilversunCity_Theater_NPC5::
# 190 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC5_2
# 198 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_8
# 201 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_3, MSGBOX_YESNO
# 202 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC5_11
# 205 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_4, MSGBOX_NPC
SilversunCity_Theater_NPC5_1:
	end

SilversunCity_Theater_NPC5_2:
# 191 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_5
# 194 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_1
# 195 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_5:
# 192 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_8:
# 199 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_2, MSGBOX_NPC
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_11:
# 203 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	goto SilversunCity_Theater_NPC5_1


SilversunCity_Theater_Lens_Reward::
# 213 "data//maps/SilversunCity_Theater/scripts.pory"
	message SilversunCity_Theater_Lens_Reward_Text_0
# 214 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmessage
# 215 "data//maps/SilversunCity_Theater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_Theater_Lens_Reward_Text_1, SilversunCity_Theater_Lens_Reward_Text_2
# 216 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_Theater_Lens_Reward_1
# 219 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardB
	return

SilversunCity_Theater_Lens_Reward_1:
# 217 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardA
	return


SilversunCity_Theater_Lens_RewardA::
# 223 "data//maps/SilversunCity_Theater/scripts.pory"
	setvar VAR_0x8006, ITEM_WIDE_LENS
# 224 "data//maps/SilversunCity_Theater/scripts.pory"
	showitemdescription
# 225 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardA_Text_0, MSGBOX_YESNO
# 226 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_Lens_RewardA_1
# 231 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 232 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	return

SilversunCity_Theater_Lens_RewardA_1:
# 227 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 228 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 229 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardEnd
	return


SilversunCity_Theater_Lens_RewardB::
# 236 "data//maps/SilversunCity_Theater/scripts.pory"
	setvar VAR_0x8006, ITEM_ZOOM_LENS
# 237 "data//maps/SilversunCity_Theater/scripts.pory"
	showitemdescription
# 238 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardA_Text_0, MSGBOX_YESNO
# 239 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_Lens_RewardB_1
# 244 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 245 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	return

SilversunCity_Theater_Lens_RewardB_1:
# 240 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 241 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 242 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardEnd
	return


SilversunCity_Theater_Lens_RewardEnd::
# 249 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_LENS
# 250 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardEnd_Text_0, MSGBOX_NPC
	end


SilversunCity_Theater_NPC6::
# 264 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_SCARF, SilversunCity_Theater_NPC6_2
# 267 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 268 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 269 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_1, MSGBOX_YESNO
# 270 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_6
# 287 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_8, MSGBOX_NPC
SilversunCity_Theater_NPC6_5:
# 289 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
SilversunCity_Theater_NPC6_1:
	end

SilversunCity_Theater_NPC6_2:
# 265 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_1

SilversunCity_Theater_NPC6_6:
# 271 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_2, MSGBOX_YESNO
# 272 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_9
# 284 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_7, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_5

SilversunCity_Theater_NPC6_9:
# 273 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_3, MSGBOX_YESNO
# 274 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_12
# 281 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_6, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_5

SilversunCity_Theater_NPC6_12:
# 275 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_4
# 276 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_DESTINY_KNOT
# 277 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_SCARF
# 278 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_5, MSGBOX_NPC
	end


SilversunCity_Theater_NPC7::
# 295 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC7_2
# 298 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC7_1:
	end

SilversunCity_Theater_NPC7_2:
# 296 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC7_1


# 31 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_0:
# 31 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 50 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_1:
# 50 "data//maps/SilversunCity_Theater/scripts.pory"
	face_right
	step_end

# 51 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_2:
# 51 "data//maps/SilversunCity_Theater/scripts.pory"
	face_left
	step_end

# 64 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_3:
# 64 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 64 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 65 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_4:
# 65 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 65 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 136 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_EventScript_SomberBlocker_Movement_0:
# 136 "data//maps/SilversunCity_Theater/scripts.pory"
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
	.string "Hmm, so it's you. Not spectacular...\p"
	.string "...but you'll do.$"

SilversunCity_Theater_Leader_Text_3:
# 44 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Welcome to the Gloria Show! Tonight,\n"
	.string "we're doing a live performance that\l"
	.string "will sweep you off your feet!$"

SilversunCity_Theater_Leader_Text_4:
# 47 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Audience$"

SilversunCity_Theater_Leader_Text_5:
# 48 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Woohoo! Go Gloria!$"

SilversunCity_Theater_Leader_Text_6:
# 55 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You're a trainer, correct? Then you\n"
	.string "must be after the coveted Drama Badge!\l"
	.string "If you want it, you'll have to earn it,\l"
	.string "right here on stage!\p"
	.string "The lights, the sound!\n"
	.string "The audience, the emotions!\p"
	.string "I specialise in the art of dark drama,\n"
	.string "{PLAYER}. I live to surprise my\l"
	.string "audience and shock them.\p"
	.string "And tonight, your defeat will be my\n"
	.string "next great performance!\p"
	.string "Now, {PLAYER}, enthrall me with your\n"
	.string "danse macabre!$"

SilversunCity_Theater_Leader_Text_7:
# 59 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "What a performance!$"

SilversunCity_Theater_Leader_Text_8:
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "A cheer from the audience, please!$"

SilversunCity_Theater_Leader_Text_9:
# 74 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Boo! How dare you beat Gloria, you\n"
	.string "horrible trainer! Boo!$"

SilversunCity_Theater_Leader_Text_10:
# 75 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "{PLAYER} ducked to avoid a tomato!$"

SilversunCity_Theater_Leader_Text_11:
# 81 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ah...don't mind, {PLAYER}. Show\n"
	.string "business can be tough. But what a\l"
	.string "battle! Such elegance! Such style and\l"
	.string "panache! {PLAYER}, were you not a\l"
	.string "trainer, I would recruit you right away!\l"
	.string "But you dance to a different tune.\l"
	.string "And I must reward you with this.$"

SilversunCity_Theater_Leader_Text_12:
# 84 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "{PLAYER} received the Drama Badge\n"
	.string "from Gloria.$"

SilversunCity_Theater_Leader_Text_13:
# 93 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "The Drama Badge will let you use HM\n"
	.string "Strength outside of battle. And I must\l"
	.string "give you this beautiful jewel too.$"

SilversunCity_Theater_Leader_Text_14:
# 99 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "It was a pleasure sharing the stage\n"
	.string "with you. May you bob and weave through\l"
	.string "the dance of life, {PLAYER}!$"

SilversunCity_Theater_EventScript_SomberBlocker_Text_0:
# 130 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gabrielle$"

SilversunCity_Theater_EventScript_SomberBlocker_Text_1:
# 131 "data//maps/SilversunCity_Theater/scripts.pory"
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
# 154 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria is graceful even in defeat.\n"
	.string "That's something we can all learn from!$"

SilversunCity_Theater_NPC1_Text_1:
# 156 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria is the face of Silversun City!\n"
	.string "A Gym Leader AND a famous actress?\l"
	.string "She's really a role model for women.$"

SilversunCity_Theater_NPC2_Text_0:
# 163 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Incredible! Her Bombirdier!\n"
	.string "What a shame she lost, and to such a...\l"
	.string "...nondescript opponent.$"

SilversunCity_Theater_NPC2_Text_1:
# 165 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "They say Gloria caught her Bombirdier\n"
	.string "while shooting an adventure flick in\l"
	.string "the Ivy River.$"

SilversunCity_Theater_NPC3_Text_0:
# 172 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...\p"
	.string "Fine, I threw the tomato!\n"
	.string "I'm sorry...\p"
	.string "...\p"
	.string "...no, I'm not! I love Gloria!\n"
	.string "Boo to you!$"

SilversunCity_Theater_NPC3_Text_1:
# 174 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I wish Pokémon were allowed in.\n"
	.string "I would've brought my Budew along to\l"
	.string "watch...hey! How'd they let your Pokémon\l"
	.string "in? That's so unfair!$"

SilversunCity_Theater_NPC4_Text_0:
# 181 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Did you see Gloria's Bombirdier!\n"
	.string "Too bad that trainer defeated it.\p"
	.string "A Greek tragedy!\p"
	.string "...oh, it was you.$"

SilversunCity_Theater_NPC4_Text_1:
# 183 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I'm a huuuge Gloria fan! I've been\n"
	.string "waiting for this show for months!$"

SilversunCity_Theater_NPC5_Text_0:
# 192 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "To be honest, it's not even my fault.\n"
	.string "The theater should arrange better\l"
	.string "seating, especially if they're charging\l"
	.string "the same price for all tickets!$"

SilversunCity_Theater_NPC5_Text_1:
# 194 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I'm glad I brought lenses because the\n"
	.string "performance was great!$"

SilversunCity_Theater_NPC5_Text_2:
# 199 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ahh, now let's settle in and watch\n"
	.string "Gloria's performance.$"

SilversunCity_Theater_NPC5_Text_3:
# 201 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "It's so hard to see what's going on from\n"
	.string "the back without a pair of lenses.\l"
	.string "Are you going to watch the show from\l"
	.string "back here too?$"

SilversunCity_Theater_NPC5_Text_4:
# 205 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Got better seats? Good for you!\n"
	.string "I wish I'd booked mine faster.$"

SilversunCity_Theater_Lens_Reward_Text_0:
# 213 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Why don't you wear a pair of lenses?\n"
	.string "I've got extra.$"

SilversunCity_Theater_Lens_Reward_Text_1:
# 215 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Wide Lens$"

SilversunCity_Theater_Lens_Reward_Text_2:
# 215 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Scope Lens$"

SilversunCity_Theater_Lens_RewardA_Text_0:
# 225 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Are you sure?$"

SilversunCity_Theater_Lens_RewardEnd_Text_0:
# 250 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "It's not just for inside the theater.\n"
	.string "You can use it in battle too!$"

SilversunCity_Theater_NPC6_Text_0:
# 265 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Right now I'm only an extra, but I'm\n"
	.string "about to land my first starring role any\l"
	.string "day now!$"

SilversunCity_Theater_NPC6_Text_1:
# 269 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Who are you? Only cast and crew are\n"
	.string "allowed backstage.\p"
	.string "Are you acting tonight?$"

SilversunCity_Theater_NPC6_Text_2:
# 271 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ooh! Are you going to go on-stage\n"
	.string "next to Gloria?$"

SilversunCity_Theater_NPC6_Text_3:
# 273 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh wow! You're a star!\n"
	.string "Can I have your autograph?$"

SilversunCity_Theater_NPC6_Text_4:
# 275 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...Thank you! Please take this.$"

SilversunCity_Theater_NPC6_Text_5:
# 278 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "A little something to remember me by!$"

SilversunCity_Theater_NPC6_Text_6:
# 281 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I...you...how rude!$"

SilversunCity_Theater_NPC6_Text_7:
# 284 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "So you're an extra too?\n"
	.string "Sigh...when will we get our big break?$"

SilversunCity_Theater_NPC6_Text_8:
# 287 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh, you're part of the crew. I'm an\n"
	.string "extra, so we're both in support roles.\p"
	.string "Sigh...when will we get our big break?$"

SilversunCity_Theater_NPC7_Text_0:
# 296 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You must have nerves of steel, doing all\n"
	.string "that in front of a crowd that size!$"

SilversunCity_Theater_NPC7_Text_1:
# 298 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...breathe...breathe...I'm calming my\n"
	.string "nerves. Even after years of training, I\l"
	.string "get nervous before going on-stage.$"
