SilversunCity_Theater_MapScripts::
	.byte 0


SilversunCity_Theater_Leader::
# 12 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 13 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_Leader_2
# 23 "data//maps/SilversunCity_Theater/scripts.pory"
	special SaveGame
# 24 "data//maps/SilversunCity_Theater/scripts.pory"
	waitstate
# 25 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 28 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 29 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_2
# 30 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_TO_BLACK
# 31 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 3, 6
# 32 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_0
# 33 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_0
# 34 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 8
# 36 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 37 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 5, 6
# 38 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 39 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 41 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 42 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 43 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_3
# 44 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 45 "data//maps/SilversunCity_Theater/scripts.pory"
	playse SE_APPLAUSE
# 46 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_4
# 47 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_5
# 48 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 49 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_1
# 50 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 51 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_6
# 53 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_2
# 56 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_1
# 57 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 58 "data//maps/SilversunCity_Theater/scripts.pory"
	hidefollower
# 59 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 63 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_7
# 64 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 67 "data//maps/SilversunCity_Theater/scripts.pory"
	trainerbattle_no_intro TRAINER_SILVERSUNGYM_LEADER, SilversunCity_Theater_Leader_Text_8
# 71 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_3
# 73 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 74 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_0
# 75 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 76 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 78 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 79 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_9
# 80 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_4
# 81 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_10
# 82 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_11
# 83 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 84 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_2
# 85 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_1
# 86 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 87 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 88 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_12
# 91 "data//maps/SilversunCity_Theater/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 93 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 94 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_13
# 95 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 96 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_BADGE04_GET
# 99 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 100 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_14
# 102 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_RARE_SHARD, 2
# 105 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 106 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_15
# 107 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 109 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_TO_BLACK
# 110 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 111 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 5, 6
# 112 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 16
# 113 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 114 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 115 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end

SilversunCity_Theater_Leader_2:
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 17 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_1
# 18 "data//maps/SilversunCity_Theater/scripts.pory"
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
	setvar VAR_0x8006, ITEM_SCOPE_LENS
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
	giveitem ITEM_SCOPE_LENS
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
	msgbox SilversunCity_Theater_NPC6_Text_1, MSGBOX_YESNO
# 269 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_6
# 282 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_6, MSGBOX_NPC
SilversunCity_Theater_NPC6_5:
# 284 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
SilversunCity_Theater_NPC6_1:
	end

SilversunCity_Theater_NPC6_2:
# 265 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_1

SilversunCity_Theater_NPC6_6:
# 270 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_2, MSGBOX_YESNO
# 271 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_9
# 279 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_5, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_5

SilversunCity_Theater_NPC6_9:
# 272 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_3, MSGBOX_YESNO
# 273 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_12
	goto SilversunCity_Theater_NPC6_5

SilversunCity_Theater_NPC6_12:
# 274 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_4, MSGBOX_NPC
# 275 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 276 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_SCARF
	goto SilversunCity_Theater_NPC6_5


SilversunCity_Theater_NPC7::
# 290 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC7_2
# 293 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC7_1:
	end

SilversunCity_Theater_NPC7_2:
# 291 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC7_1


# 32 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_0:
# 32 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 49 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_1:
# 49 "data//maps/SilversunCity_Theater/scripts.pory"
	face_left
	step_end

# 55 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_2:
# 55 "data//maps/SilversunCity_Theater/scripts.pory"
	face_right
	step_end

# 72 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_3:
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 136 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_EventScript_SomberBlocker_Movement_0:
# 136 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_up
	step_end

SilversunCity_Theater_Leader_Text_0:
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria$"

SilversunCity_Theater_Leader_Text_1:
# 17 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Such art! Such expression!\p"
	.string "...\p"
	.string "Now be a dear and get offstage,\n"
	.string "{PLAYER}. The audience doesn't seem\l"
	.string "to be too fond of you.$"

SilversunCity_Theater_Leader_Text_2:
# 29 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Hmm, so it's you. Not spectacular, but\n"
	.string "you'll do.$"

SilversunCity_Theater_Leader_Text_3:
# 43 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Welcome to the Gloria Show! Tonight,\n"
	.string "we're doing a live performance that will\l"
	.string "sweep you off your feet!$"

SilversunCity_Theater_Leader_Text_4:
# 46 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Audience$"

SilversunCity_Theater_Leader_Text_5:
# 47 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Woohoo! Go Gloria!$"

SilversunCity_Theater_Leader_Text_6:
# 51 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You're a trainer, correct? Then you\n"
	.string "must be after my Gym Badge. If you want\l"
	.string "it, you'll have to earn it, right here on\l"
	.string "stage! The lights, the sound! The\l"
	.string "audience, the emotions! I specialise in\l"
	.string "the art of dark drama, {PLAYER}. I live\l"
	.string "to surprise my audience and shock them.\l"
	.string "And tonight, your defeat will be my next\l"
	.string "performance!$"

SilversunCity_Theater_Leader_Text_7:
# 63 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Now, {PLAYER}, enthrall me with your\n"
	.string "danse macabre!$"

SilversunCity_Theater_Leader_Text_8:
# 67 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "What a performace!$"

SilversunCity_Theater_Leader_Text_9:
# 79 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "A cheer from the audience, please!$"

SilversunCity_Theater_Leader_Text_10:
# 81 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Boo! How dare you beat Gloria, you\n"
	.string "horrible trainer! Boo!$"

SilversunCity_Theater_Leader_Text_11:
# 82 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "{PLAYER} ducked to avoid a tomato!$"

SilversunCity_Theater_Leader_Text_12:
# 88 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ah...don't mind, {PLAYER}. Show\n"
	.string "business can be tough. But what a\l"
	.string "battle! Such elegance! Such style and\l"
	.string "panache! {PLAYER}, were you not a\l"
	.string "trainer, I would recruit you right away!\l"
	.string "But you dance to a different tune. And\l"
	.string "I must reward you with this.$"

SilversunCity_Theater_Leader_Text_13:
# 94 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "{PLAYER} received the Drama Badge\n"
	.string "from Gloria.$"

SilversunCity_Theater_Leader_Text_14:
# 100 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "The Drama Badge will let you use HM\n"
	.string "Strength outside of battle. And I must\l"
	.string "give you these beautiful jewels too.$"

SilversunCity_Theater_Leader_Text_15:
# 106 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "It was a pleasure sharing the stage\n"
	.string "with you. May you elegantly bob and\l"
	.string "weave through the dance of life,\l"
	.string "{PLAYER}!$"

SilversunCity_Theater_EventScript_SomberBlocker_Text_0:
# 130 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gabrielle$"

SilversunCity_Theater_EventScript_SomberBlocker_Text_1:
# 131 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Hey, nobody's allowed back here. Scram!\p"
	.string "...oh, it's you. I can guess what you're\n"
	.string "here for.\p"
	.string "...\p"
	.string "...\p"
	.string "Go on, get inside then. I won't stop you.\n"
	.string "With this, we're square, hear me?\p"
	.string "Oh, I'm going to get into trouble...but I\n"
	.string "always pay back my debts!\p"
	.string "I really hope the grunts inside kick you\n"
	.string "right back out!$"

SilversunCity_Theater_NPC1_Text_0:
# 154 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria is graceful even in defeat. Now\n"
	.string "that's something everyone can learn\l"
	.string "from.$"

SilversunCity_Theater_NPC1_Text_1:
# 156 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria is the face of Silversun City! A\n"
	.string "Gym Leader AND a famous actress? She's\l"
	.string "really a role model for women.$"

SilversunCity_Theater_NPC2_Text_0:
# 163 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Incredible! Her Servine and Absol! Such\n"
	.string "a shame they lost, and to such\l"
	.string "a...nondescript opponent.$"

SilversunCity_Theater_NPC2_Text_1:
# 165 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "They say Gloria caught her Seviper and\n"
	.string "Absol while shooting on set in the\l"
	.string "HOENN region.$"

SilversunCity_Theater_NPC3_Text_0:
# 172 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "What a show!$"

SilversunCity_Theater_NPC3_Text_1:
# 174 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I wish Pokémon were allowed in. I\n"
	.string "would've brought my Sprigatito along to\l"
	.string "watch...hey! How'd they let your Pokémon\l"
	.string "in? That's so unfair!$"

SilversunCity_Theater_NPC4_Text_0:
# 181 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Did you see Gloria's Servine! Too bad\n"
	.string "that other person defeated it. A Greek\l"
	.string "tragedy!\n"
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
	.string "the back without a pair of lenses. Are\l"
	.string "you going to watch the show from here\l"
	.string "too?$"

SilversunCity_Theater_NPC5_Text_4:
# 205 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Got better seats? Good for you! I wish\n"
	.string "I'd booked mine faster.$"

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
	.string "You can use it outside of the theater\n"
	.string "too!$"

SilversunCity_Theater_NPC6_Text_0:
# 265 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Right now I'm only an extra, but I'm\n"
	.string "about to land my first starring role any\l"
	.string "day now!$"

SilversunCity_Theater_NPC6_Text_1:
# 268 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Who are you? Only cast and crew are\n"
	.string "allowed backstage.\p"
	.string "Are you acting tonight?$"

SilversunCity_Theater_NPC6_Text_2:
# 270 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ooh! Are you going to go on-stage next\n"
	.string "to Gloria?$"

SilversunCity_Theater_NPC6_Text_3:
# 272 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh wow! You're a star! Can I have your\n"
	.string "autograph?$"

SilversunCity_Theater_NPC6_Text_4:
# 274 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...Thank you! Please take this. A little\n"
	.string "something to remember me by!$"

SilversunCity_Theater_NPC6_Text_5:
# 279 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "So you're an extra too? Sigh...when will\n"
	.string "we get our big break?$"

SilversunCity_Theater_NPC6_Text_6:
# 282 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh, so you're part of the crew. I'm an\n"
	.string "extra, so we're both playing support\l"
	.string "roles.$"

SilversunCity_Theater_NPC7_Text_0:
# 291 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You must have nerves of steel, doing all\n"
	.string "that in front of a crowd that size!$"

SilversunCity_Theater_NPC7_Text_1:
# 293 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...breathe...breathe...I'm calming my\n"
	.string "nerves. Even after years of training, I\l"
	.string "get nervous before going on-stage.$"
