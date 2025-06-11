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
	call Common_EventScript_SaveGameBeforeBattle
# 26 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 27 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_2
# 28 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 29 "data//maps/SilversunCity_Theater/scripts.pory"
	hidefollower
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
	speakername SilversunCity_Theater_Leader_Text_0
# 42 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_3
# 43 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 44 "data//maps/SilversunCity_Theater/scripts.pory"
	playse SE_APPLAUSE
# 45 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_4
# 46 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_5
# 47 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 48 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_1
# 49 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_2
# 50 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 51 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 16
# 52 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 53 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_6
# 54 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 57 "data//maps/SilversunCity_Theater/scripts.pory"
	trainerbattle_no_intro TRAINER_SILVERSUNGYM_LEADER, SilversunCity_Theater_Leader_Text_7
# 61 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 62 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_3
# 63 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_4
# 64 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 65 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_0
# 66 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 67 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 69 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 70 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_8
# 71 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_4
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_9
# 73 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_10
# 74 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 75 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_1
# 76 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_2
# 77 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 78 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 79 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_11
# 82 "data//maps/SilversunCity_Theater/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 84 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 85 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_12
# 86 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 87 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_BADGE04_GET
# 90 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 91 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_13
# 93 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 96 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_Leader_Text_0
# 97 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_14
# 98 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 100 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 101 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 102 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 5, 6
# 103 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 16
# 104 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 105 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 106 "data//maps/SilversunCity_Theater/scripts.pory"
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
# 119 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 120 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 121 "data//maps/SilversunCity_Theater/scripts.pory"
	speakername SilversunCity_Theater_EventScript_SomberBlocker_Text_0
# 122 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_EventScript_SomberBlocker_Text_1
# 123 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 125 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_ENTRANCE
# 127 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 6, SilversunCity_Theater_EventScript_SomberBlocker_Movement_0
# 128 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 129 "data//maps/SilversunCity_Theater/scripts.pory"
	removeobject 6
# 130 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end


SilversunCity_Theater_NPC1::
# 144 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC1_2
# 147 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC1_1:
	end

SilversunCity_Theater_NPC1_2:
# 145 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC1_1


SilversunCity_Theater_NPC2::
# 153 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC2_2
# 156 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC2_1:
	end

SilversunCity_Theater_NPC2_2:
# 154 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC2_1


SilversunCity_Theater_NPC3::
# 162 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC3_2
# 165 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC3_1:
	end

SilversunCity_Theater_NPC3_2:
# 163 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC3_1


SilversunCity_Theater_NPC4::
# 171 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC4_2
# 174 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC4_1:
	end

SilversunCity_Theater_NPC4_2:
# 172 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC4_1


SilversunCity_Theater_NPC5::
# 181 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC5_2
# 189 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_8
# 192 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_3, MSGBOX_YESNO
# 193 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC5_11
# 196 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_4, MSGBOX_NPC
SilversunCity_Theater_NPC5_1:
	end

SilversunCity_Theater_NPC5_2:
# 182 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_5
# 185 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_1
# 186 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_5:
# 183 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_8:
# 190 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_2, MSGBOX_NPC
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_11:
# 194 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	goto SilversunCity_Theater_NPC5_1


SilversunCity_Theater_Lens_Reward::
# 204 "data//maps/SilversunCity_Theater/scripts.pory"
	message SilversunCity_Theater_Lens_Reward_Text_0
# 205 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmessage
# 206 "data//maps/SilversunCity_Theater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_Theater_Lens_Reward_Text_1, SilversunCity_Theater_Lens_Reward_Text_2
# 207 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_Theater_Lens_Reward_1
# 210 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardB
	return

SilversunCity_Theater_Lens_Reward_1:
# 208 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardA
	return


SilversunCity_Theater_Lens_RewardA::
# 214 "data//maps/SilversunCity_Theater/scripts.pory"
	setvar VAR_0x8006, ITEM_WIDE_LENS
# 215 "data//maps/SilversunCity_Theater/scripts.pory"
	showitemdescription
# 216 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardA_Text_0, MSGBOX_YESNO
# 217 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_Lens_RewardA_1
# 222 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 223 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	return

SilversunCity_Theater_Lens_RewardA_1:
# 218 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 219 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 220 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardEnd
	return


SilversunCity_Theater_Lens_RewardB::
# 227 "data//maps/SilversunCity_Theater/scripts.pory"
	setvar VAR_0x8006, ITEM_ZOOM_LENS
# 228 "data//maps/SilversunCity_Theater/scripts.pory"
	showitemdescription
# 229 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardA_Text_0, MSGBOX_YESNO
# 230 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_Lens_RewardB_1
# 235 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 236 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	return

SilversunCity_Theater_Lens_RewardB_1:
# 231 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 232 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 233 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardEnd
	return


SilversunCity_Theater_Lens_RewardEnd::
# 240 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_LENS
# 241 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardEnd_Text_0, MSGBOX_NPC
	end


SilversunCity_Theater_NPC6::
# 255 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_SCARF, SilversunCity_Theater_NPC6_2
# 258 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 259 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 260 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_1, MSGBOX_YESNO
# 261 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_6
# 276 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_7, MSGBOX_NPC
SilversunCity_Theater_NPC6_5:
# 278 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
SilversunCity_Theater_NPC6_1:
	end

SilversunCity_Theater_NPC6_2:
# 256 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_1

SilversunCity_Theater_NPC6_6:
# 262 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_2, MSGBOX_YESNO
# 263 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_9
# 273 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_6, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_5

SilversunCity_Theater_NPC6_9:
# 264 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_3, MSGBOX_YESNO
# 265 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_12
	goto SilversunCity_Theater_NPC6_5

SilversunCity_Theater_NPC6_12:
# 266 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_4
# 267 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_DESTINY_KNOT
# 268 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_SCARF
# 269 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_5, MSGBOX_NPC
	end


SilversunCity_Theater_NPC7::
# 284 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC7_2
# 287 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC7_1:
	end

SilversunCity_Theater_NPC7_2:
# 285 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC7_1


# 31 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_0:
# 31 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 48 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_1:
# 48 "data//maps/SilversunCity_Theater/scripts.pory"
	face_right
	step_end

# 49 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_2:
# 49 "data//maps/SilversunCity_Theater/scripts.pory"
	face_left
	step_end

# 62 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_3:
# 62 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 62 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 63 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_4:
# 63 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_left
# 63 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 127 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_EventScript_SomberBlocker_Movement_0:
# 127 "data//maps/SilversunCity_Theater/scripts.pory"
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
# 27 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Hmm, so it's you. Not spectacular, but\n"
	.string "you'll do.$"

SilversunCity_Theater_Leader_Text_3:
# 42 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Welcome to the {COLOR BLUE}Gloria{COLOR DARK_GRAY} Show! Tonight,\n"
	.string "we're doing a live performance that will\l"
	.string "sweep you off your feet!$"

SilversunCity_Theater_Leader_Text_4:
# 45 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Audience$"

SilversunCity_Theater_Leader_Text_5:
# 46 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Woohoo! Go {COLOR BLUE}Gloria{COLOR DARK_GRAY}!$"

SilversunCity_Theater_Leader_Text_6:
# 53 "data//maps/SilversunCity_Theater/scripts.pory"
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
# 57 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "What a performace!$"

SilversunCity_Theater_Leader_Text_8:
# 70 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "A cheer from the audience, please!$"

SilversunCity_Theater_Leader_Text_9:
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Boo! How dare you beat {COLOR BLUE}Gloria{COLOR DARK_GRAY}, you\n"
	.string "horrible trainer! Boo!$"

SilversunCity_Theater_Leader_Text_10:
# 73 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "{PLAYER} ducked to avoid a tomato!$"

SilversunCity_Theater_Leader_Text_11:
# 79 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ah...don't mind, {PLAYER}. Show\n"
	.string "business can be tough. But what a\l"
	.string "battle! Such elegance! Such style and\l"
	.string "panache! {PLAYER}, were you not a\l"
	.string "trainer, I would recruit you right away!\l"
	.string "But you dance to a different tune. And\l"
	.string "I must reward you with this.$"

SilversunCity_Theater_Leader_Text_12:
# 85 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "{PLAYER} received the Drama Badge\n"
	.string "from {COLOR BLUE}Gloria{COLOR DARK_GRAY}.$"

SilversunCity_Theater_Leader_Text_13:
# 91 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "The Drama Badge will let you use HM\n"
	.string "Strength outside of battle. And I must\l"
	.string "give you this beautiful jewel too.$"

SilversunCity_Theater_Leader_Text_14:
# 97 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "It was a pleasure sharing the stage\n"
	.string "with you. May you elegantly bob and\l"
	.string "weave through the dance of life,\l"
	.string "{PLAYER}!$"

SilversunCity_Theater_EventScript_SomberBlocker_Text_0:
# 121 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gabrielle$"

SilversunCity_Theater_EventScript_SomberBlocker_Text_1:
# 122 "data//maps/SilversunCity_Theater/scripts.pory"
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
# 145 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria is graceful even in defeat. Now\n"
	.string "that's something everyone can learn\l"
	.string "from.$"

SilversunCity_Theater_NPC1_Text_1:
# 147 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria is the face of {COLOR BLUE}Silversun City{COLOR DARK_GRAY}! A\n"
	.string "Gym Leader AND a famous actress? She's\l"
	.string "really a role model for women.$"

SilversunCity_Theater_NPC2_Text_0:
# 154 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Incredible! Her Bombirdier! Such a\n"
	.string "shame she lost, and to such\l"
	.string "a...nondescript opponent.$"

SilversunCity_Theater_NPC2_Text_1:
# 156 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "They say {COLOR BLUE}Gloria{COLOR DARK_GRAY} caught her Bombirdier\n"
	.string "while shooting an adventure flick in\l"
	.string "the {COLOR BLUE}Ivy River{COLOR DARK_GRAY}.$"

SilversunCity_Theater_NPC3_Text_0:
# 163 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...\p"
	.string "Fine, I threw the tomato!\n"
	.string "I'm sorry...\p"
	.string "...\p"
	.string "...no, I'm not! I love {COLOR BLUE}Gloria{COLOR DARK_GRAY}!\n"
	.string "Boo to you!$"

SilversunCity_Theater_NPC3_Text_1:
# 165 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I wish Pokémon were allowed in. I\n"
	.string "would've brought my Budew along to\l"
	.string "watch...hey! How'd they let your Pokémon\l"
	.string "in? That's so unfair!$"

SilversunCity_Theater_NPC4_Text_0:
# 172 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Did you see {COLOR BLUE}Gloria{COLOR DARK_GRAY}'s Bombirdier! Too bad\n"
	.string "that other person defeated it. A Greek\l"
	.string "tragedy!\n"
	.string "...oh, it was you.$"

SilversunCity_Theater_NPC4_Text_1:
# 174 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I'm a huuuge {COLOR BLUE}Gloria{COLOR DARK_GRAY} fan! I've been\n"
	.string "waiting for this show for months!$"

SilversunCity_Theater_NPC5_Text_0:
# 183 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "To be honest, it's not even my fault.\n"
	.string "The theater should arrange better\l"
	.string "seating, especially if they're charging\l"
	.string "the same price for all tickets!$"

SilversunCity_Theater_NPC5_Text_1:
# 185 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I'm glad I brought lenses because the\n"
	.string "performance was great!$"

SilversunCity_Theater_NPC5_Text_2:
# 190 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ahh, now let's settle in and watch\n"
	.string "{COLOR BLUE}Gloria{COLOR DARK_GRAY}'s performance.$"

SilversunCity_Theater_NPC5_Text_3:
# 192 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "It's so hard to see what's going on from\n"
	.string "the back without a pair of lenses. Are\l"
	.string "you going to watch the show from here\l"
	.string "too?$"

SilversunCity_Theater_NPC5_Text_4:
# 196 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Got better seats? Good for you! I wish\n"
	.string "I'd booked mine faster.$"

SilversunCity_Theater_Lens_Reward_Text_0:
# 204 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Why don't you wear a pair of lenses?\n"
	.string "I've got extra.$"

SilversunCity_Theater_Lens_Reward_Text_1:
# 206 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Wide Lens$"

SilversunCity_Theater_Lens_Reward_Text_2:
# 206 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Scope Lens$"

SilversunCity_Theater_Lens_RewardA_Text_0:
# 216 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Are you sure?$"

SilversunCity_Theater_Lens_RewardEnd_Text_0:
# 241 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You can use it outside of the theater\n"
	.string "too!$"

SilversunCity_Theater_NPC6_Text_0:
# 256 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Right now I'm only an extra, but I'm\n"
	.string "about to land my first starring role any\l"
	.string "day now!$"

SilversunCity_Theater_NPC6_Text_1:
# 260 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Who are you? Only cast and crew are\n"
	.string "allowed backstage.\p"
	.string "Are you acting tonight?$"

SilversunCity_Theater_NPC6_Text_2:
# 262 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ooh! Are you going to go on-stage next\n"
	.string "to {COLOR BLUE}Gloria{COLOR DARK_GRAY}?$"

SilversunCity_Theater_NPC6_Text_3:
# 264 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh wow! You're a star!\n"
	.string "Can I have your autograph?$"

SilversunCity_Theater_NPC6_Text_4:
# 266 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...Thank you! Please take this.$"

SilversunCity_Theater_NPC6_Text_5:
# 269 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "A little something to remember me by!$"

SilversunCity_Theater_NPC6_Text_6:
# 273 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "So you're an extra too? Sigh...when will\n"
	.string "we get our big break?$"

SilversunCity_Theater_NPC6_Text_7:
# 276 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh, you're part of the crew. I'm an\n"
	.string "extra, so we're both playing support\l"
	.string "roles.\p"
	.string "Sigh...when will we get our big break?$"

SilversunCity_Theater_NPC7_Text_0:
# 285 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You must have nerves of steel, doing all\n"
	.string "that in front of a crowd that size!$"

SilversunCity_Theater_NPC7_Text_1:
# 287 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...breathe...breathe...I'm calming my\n"
	.string "nerves. Even after years of training, I\l"
	.string "get nervous before going on-stage.$"
