SilversunCity_Theater_MapScripts::
	.byte 0


SilversunCity_Theater_Leader::
# 12 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 13 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_Leader_2
# 22 "data//maps/SilversunCity_Theater/scripts.pory"
	special SaveGame
# 23 "data//maps/SilversunCity_Theater/scripts.pory"
	waitstate
# 24 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 27 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_1
# 28 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_TO_BLACK
# 29 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 3, 6
# 30 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_0
# 31 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_0
# 32 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 8
# 34 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 35 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 5, 6
# 36 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 37 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 39 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 40 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_2
# 41 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 42 "data//maps/SilversunCity_Theater/scripts.pory"
	playse SE_APPLAUSE
# 43 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_3
# 44 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 45 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_1
# 46 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_4
# 48 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_2
# 51 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_1
# 52 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 53 "data//maps/SilversunCity_Theater/scripts.pory"
	hidefollower
# 54 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 57 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_5
# 58 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 61 "data//maps/SilversunCity_Theater/scripts.pory"
	trainerbattle_no_intro TRAINER_SILVERSUNGYM_LEADER, SilversunCity_Theater_Leader_Text_6
# 65 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 66 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_3
# 67 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 68 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_0
# 69 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 70 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_7
# 73 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 74 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_2
# 75 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_1
# 76 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 77 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_8
# 80 "data//maps/SilversunCity_Theater/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 82 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_9
# 83 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 84 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_BADGE04_GET
# 87 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_10
# 89 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_RARE_SHARD, 2
# 92 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_11
# 93 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 95 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 97 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 5, 6
# 98 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 16
# 99 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 100 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 101 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end

SilversunCity_Theater_Leader_2:
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_0
# 17 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end


SilversunCity_Theater_EventScript_SomberBlocker::
# 114 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 115 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 116 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_EventScript_SomberBlocker_Text_0
# 118 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_ENTRANCE
# 120 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 6, SilversunCity_Theater_EventScript_SomberBlocker_Movement_0
# 121 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 122 "data//maps/SilversunCity_Theater/scripts.pory"
	removeobject 6
# 123 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end


SilversunCity_Theater_NPC1::
# 137 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC1_2
# 140 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC1_1:
	end

SilversunCity_Theater_NPC1_2:
# 138 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC1_1


SilversunCity_Theater_NPC2::
# 146 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC2_2
# 149 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC2_1:
	end

SilversunCity_Theater_NPC2_2:
# 147 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC2_1


SilversunCity_Theater_NPC3::
# 155 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC3_2
# 158 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC3_1:
	end

SilversunCity_Theater_NPC3_2:
# 156 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC3_1


SilversunCity_Theater_NPC4::
# 164 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC4_2
# 167 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC4_1:
	end

SilversunCity_Theater_NPC4_2:
# 165 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC4_1


SilversunCity_Theater_NPC5::
# 174 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC5_2
# 182 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_8
# 185 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_3, MSGBOX_YESNO
# 186 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC5_11
# 189 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_4, MSGBOX_NPC
SilversunCity_Theater_NPC5_1:
	end

SilversunCity_Theater_NPC5_2:
# 175 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_5
# 178 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_1
# 179 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_5:
# 176 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_8:
# 183 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_2, MSGBOX_NPC
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_11:
# 187 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	goto SilversunCity_Theater_NPC5_1


SilversunCity_Theater_Lens_Reward::
# 197 "data//maps/SilversunCity_Theater/scripts.pory"
	message SilversunCity_Theater_Lens_Reward_Text_0
# 198 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmessage
# 199 "data//maps/SilversunCity_Theater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_Theater_Lens_Reward_Text_1, SilversunCity_Theater_Lens_Reward_Text_2
# 200 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_Theater_Lens_Reward_1
# 203 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardB
	return

SilversunCity_Theater_Lens_Reward_1:
# 201 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardA
	return


SilversunCity_Theater_Lens_RewardA::
# 207 "data//maps/SilversunCity_Theater/scripts.pory"
	setvar VAR_0x8006, ITEM_WIDE_LENS
# 208 "data//maps/SilversunCity_Theater/scripts.pory"
	showitemdescription
# 209 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardA_Text_0, MSGBOX_YESNO
# 210 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_Lens_RewardA_1
# 215 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 216 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	return

SilversunCity_Theater_Lens_RewardA_1:
# 211 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 212 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 213 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardEnd
	return


SilversunCity_Theater_Lens_RewardB::
# 220 "data//maps/SilversunCity_Theater/scripts.pory"
	setvar VAR_0x8006, ITEM_SCOPE_LENS
# 221 "data//maps/SilversunCity_Theater/scripts.pory"
	showitemdescription
# 222 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardA_Text_0, MSGBOX_YESNO
# 223 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_Lens_RewardB_1
# 228 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 229 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_Reward
	return

SilversunCity_Theater_Lens_RewardB_1:
# 224 "data//maps/SilversunCity_Theater/scripts.pory"
	hideitemdescription
# 225 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 226 "data//maps/SilversunCity_Theater/scripts.pory"
	goto SilversunCity_Theater_Lens_RewardEnd
	return


SilversunCity_Theater_Lens_RewardEnd::
# 233 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_LENS
# 234 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Lens_RewardEnd_Text_0, MSGBOX_NPC
	end


SilversunCity_Theater_NPC6::
# 248 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_SCARF, SilversunCity_Theater_NPC6_2
# 251 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 252 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_1, MSGBOX_YESNO
# 253 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_6
# 267 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_6, MSGBOX_NPC
SilversunCity_Theater_NPC6_5:
# 269 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
SilversunCity_Theater_NPC6_1:
	end

SilversunCity_Theater_NPC6_2:
# 249 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_1

SilversunCity_Theater_NPC6_6:
# 254 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_2, MSGBOX_YESNO
# 255 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_9
# 264 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_5, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_5

SilversunCity_Theater_NPC6_9:
# 256 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_3, MSGBOX_YESNO
# 257 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_12
	goto SilversunCity_Theater_NPC6_5

SilversunCity_Theater_NPC6_12:
# 258 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_4, MSGBOX_NPC
# 259 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 260 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 261 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_SCARF
	goto SilversunCity_Theater_NPC6_5


SilversunCity_Theater_NPC7::
# 275 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC7_2
# 278 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC7_1:
	end

SilversunCity_Theater_NPC7_2:
# 276 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC7_1


# 30 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_0:
# 30 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 45 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_1:
# 45 "data//maps/SilversunCity_Theater/scripts.pory"
	face_left
	step_end

# 50 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_2:
# 50 "data//maps/SilversunCity_Theater/scripts.pory"
	face_right
	step_end

# 66 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_3:
# 66 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 66 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 66 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 66 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 120 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_EventScript_SomberBlocker_Movement_0:
# 120 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_up
	step_end

SilversunCity_Theater_Leader_Text_0:
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: Such art! Such expression!\p"
	.string "...\p"
	.string "GLORIA: Now be a dear and get offstage,\n"
	.string "{PLAYER}. The audience doesn't seem\l"
	.string "to be too fond of you.$"

SilversunCity_Theater_Leader_Text_1:
# 27 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: Hmm, so it's you. Not\n"
	.string "spectacular, but you'll do.$"

SilversunCity_Theater_Leader_Text_2:
# 40 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Welcome to the Gloria Show! Tonight,\n"
	.string "we're doing a live performance that will\l"
	.string "sweep you off your feet!$"

SilversunCity_Theater_Leader_Text_3:
# 43 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "AUDIENCE: Woohoo! Go Gloria!$"

SilversunCity_Theater_Leader_Text_4:
# 46 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: You're a trainer, correct? Then\n"
	.string "you must be after my Gym Badge. If you\l"
	.string "want it, you'll have to earn it, right\l"
	.string "here on stage! The lights, the sound!\l"
	.string "The audience, the emotions! I\l"
	.string "specialise in the art of dark drama,\l"
	.string "{PLAYER}. I live to surprise my\l"
	.string "audience and shock them. And tonight,\l"
	.string "your defeat will be my next\l"
	.string "performance!$"

SilversunCity_Theater_Leader_Text_5:
# 57 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: Now, {PLAYER}, enthrall me\n"
	.string "with your danse macabre!$"

SilversunCity_Theater_Leader_Text_6:
# 61 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "What a performace!$"

SilversunCity_Theater_Leader_Text_7:
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: A cheer from the audience,\n"
	.string "please!\p"
	.string "AUDIENCE: Boo! How dare you beat\n"
	.string "Gloria, you horrible trainer! Boo!\p"
	.string "{PLAYER} ducked to avoid a tomato!$"

SilversunCity_Theater_Leader_Text_8:
# 77 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: Ah...don't mind, {PLAYER}.\n"
	.string "Show business can be tough. But what a\l"
	.string "battle! Such elegance! Such style and\l"
	.string "panache! {PLAYER}, were you not a\l"
	.string "trainer, I would recruit you right away!\l"
	.string "But you dance to a different tune. And\l"
	.string "I must reward you with this.$"

SilversunCity_Theater_Leader_Text_9:
# 82 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "{PLAYER} received the Drama Badge\n"
	.string "from Gloria.$"

SilversunCity_Theater_Leader_Text_10:
# 87 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: The Drama Badge will let you\n"
	.string "use HM STRENGTH outside of battle. And\l"
	.string "I must give you these beautiful jewels\l"
	.string "too.$"

SilversunCity_Theater_Leader_Text_11:
# 92 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: It was a pleasure sharing the\n"
	.string "stage with you. May you weave and bob\l"
	.string "with elegance in the dance of life,\l"
	.string "{PLAYER}!$"

SilversunCity_Theater_EventScript_SomberBlocker_Text_0:
# 116 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GABRIELLE: Hey, nobody's allowed back\n"
	.string "here. Scram!\p"
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
# 138 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria is graceful even in defeat. Now\n"
	.string "that's something everyone can learn\l"
	.string "from.$"

SilversunCity_Theater_NPC1_Text_1:
# 140 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Gloria is the face of Silversun City! A\n"
	.string "Gym Leader AND a famous actress? She's\l"
	.string "really a role model for women.$"

SilversunCity_Theater_NPC2_Text_0:
# 147 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Incredible! Her Servine and Absol! Such\n"
	.string "a shame they lost, and to such\l"
	.string "a...nondescript opponent.$"

SilversunCity_Theater_NPC2_Text_1:
# 149 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "They say Gloria caught her Seviper and\n"
	.string "Absol while shooting on set in the\l"
	.string "HOENN region.$"

SilversunCity_Theater_NPC3_Text_0:
# 156 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "What a show!$"

SilversunCity_Theater_NPC3_Text_1:
# 158 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I wish Pokémon were allowed in. I\n"
	.string "would've brought my Sprigatito along to\l"
	.string "watch...hey! How'd they let your Pokémon\l"
	.string "in? That's so unfair!$"

SilversunCity_Theater_NPC4_Text_0:
# 165 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Did you see Gloria's Servine! Too bad\n"
	.string "that other person defeated it. A Greek\l"
	.string "tragedy!\n"
	.string "...oh, it was you.$"

SilversunCity_Theater_NPC4_Text_1:
# 167 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I'm a huuuge Gloria fan! I've been\n"
	.string "waiting for this show for months!$"

SilversunCity_Theater_NPC5_Text_0:
# 176 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "To be honest, it's not even my fault.\n"
	.string "The theater should arrange better\l"
	.string "seating, especially if they're charging\l"
	.string "the same price for all tickets!$"

SilversunCity_Theater_NPC5_Text_1:
# 178 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I'm glad I brought lenses because the\n"
	.string "performance was great!$"

SilversunCity_Theater_NPC5_Text_2:
# 183 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ahh, now let's settle in and watch\n"
	.string "Gloria's performance.$"

SilversunCity_Theater_NPC5_Text_3:
# 185 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "It's so hard to see what's going on from\n"
	.string "the back without a pair of lenses. Are\l"
	.string "you going to watch the show from here\l"
	.string "too?$"

SilversunCity_Theater_NPC5_Text_4:
# 189 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Got better seats? Good for you! I wish\n"
	.string "I'd booked mine faster.$"

SilversunCity_Theater_Lens_Reward_Text_0:
# 197 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Why don't you wear a pair of lenses?\n"
	.string "I've got extra.$"

SilversunCity_Theater_Lens_Reward_Text_1:
# 199 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Wide Lens$"

SilversunCity_Theater_Lens_Reward_Text_2:
# 199 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Scope Lens$"

SilversunCity_Theater_Lens_RewardA_Text_0:
# 209 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Are you sure?$"

SilversunCity_Theater_Lens_RewardEnd_Text_0:
# 234 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You can use it outside of the theater\n"
	.string "too!$"

SilversunCity_Theater_NPC6_Text_0:
# 249 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Right now I'm only an extra, but I'm\n"
	.string "about to land my first starring role any\l"
	.string "day now!$"

SilversunCity_Theater_NPC6_Text_1:
# 252 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Who are you? Only cast and crew are\n"
	.string "allowed backstage.\p"
	.string "Are you acting tonight?$"

SilversunCity_Theater_NPC6_Text_2:
# 254 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ooh! Are you going to go on-stage next\n"
	.string "to Gloria?$"

SilversunCity_Theater_NPC6_Text_3:
# 256 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh wow! You're a star! Can I have your\n"
	.string "autograph?$"

SilversunCity_Theater_NPC6_Text_4:
# 258 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...Thank you! Please take this. A little\n"
	.string "something to remember me by!$"

SilversunCity_Theater_NPC6_Text_5:
# 264 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "So you're an extra too? Sigh...when will\n"
	.string "we get our big break?$"

SilversunCity_Theater_NPC6_Text_6:
# 267 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh, so you're part of the crew. I'm an\n"
	.string "extra, so we're both playing support\l"
	.string "roles.$"

SilversunCity_Theater_NPC7_Text_0:
# 276 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You must have nerves of steel, doing all\n"
	.string "that in front of a crowd that size!$"

SilversunCity_Theater_NPC7_Text_1:
# 278 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...breathe...breathe...I'm calming my\n"
	.string "nerves. Even after years of training, I\l"
	.string "get nervous before going on-stage.$"
