SilversunCity_Theater_MapScripts::
	.byte 0


SilversunCity_Theater_Leader::
# 12 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 13 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 15 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_Leader_2
# 21 "data//maps/SilversunCity_Theater/scripts.pory"
	call Common_EventScript_SaveGame
# 23 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_1
# 24 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_TO_BLACK
# 25 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 3, 6
# 26 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_0
# 27 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_0
# 28 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 8
# 30 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 31 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 5, 6
# 32 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 33 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 35 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 36 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_2
# 37 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 38 "data//maps/SilversunCity_Theater/scripts.pory"
	playse SE_APPLAUSE
# 39 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_3
# 40 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 41 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_1
# 42 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_4
# 44 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_TO_BLACK
# 46 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_2
# 47 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_1
# 48 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 49 "data//maps/SilversunCity_Theater/scripts.pory"
	hidefollower
# 50 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 53 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_5
# 54 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 57 "data//maps/SilversunCity_Theater/scripts.pory"
	trainerbattle_no_intro TRAINER_SILVERSUNGYM_LEADER, SilversunCity_Theater_Leader_Text_6
# 61 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 62 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_3
# 63 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 64 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_0
# 65 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 66 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 68 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_7
# 69 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 70 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_2
# 71 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_1
# 72 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 73 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_8
# 76 "data//maps/SilversunCity_Theater/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 78 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_9
# 79 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 80 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_BADGE04_GET
# 83 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_10
# 88 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_11
# 89 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 91 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_TO_BLACK
# 92 "data//maps/SilversunCity_Theater/scripts.pory"
	special SpawnCameraObject
# 93 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 5, 6
# 94 "data//maps/SilversunCity_Theater/scripts.pory"
	delay 16
# 95 "data//maps/SilversunCity_Theater/scripts.pory"
	special RemoveCameraObject
# 96 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 97 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end

SilversunCity_Theater_Leader_2:
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_0
# 17 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end


SilversunCity_Theater_EventScript_SomberBlocker::
# 110 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 111 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 112 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_EventScript_SomberBlocker_Text_0
# 114 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_ENTRANCE
# 116 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 6, SilversunCity_Theater_EventScript_SomberBlocker_Movement_0
# 117 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 118 "data//maps/SilversunCity_Theater/scripts.pory"
	removeobject 6
# 119 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end


SilversunCity_Theater_NPC1::
# 133 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC1_2
# 136 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC1_1:
	end

SilversunCity_Theater_NPC1_2:
# 134 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC1_1


SilversunCity_Theater_NPC2::
# 142 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC2_2
# 145 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC2_1:
	end

SilversunCity_Theater_NPC2_2:
# 143 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC2_1


SilversunCity_Theater_NPC3::
# 151 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC3_2
# 154 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC3_1:
	end

SilversunCity_Theater_NPC3_2:
# 152 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC3_1


SilversunCity_Theater_NPC4::
# 160 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC4_2
# 163 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_1, MSGBOX_NPC
SilversunCity_Theater_NPC4_1:
	end

SilversunCity_Theater_NPC4_2:
# 161 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_0, MSGBOX_NPC
	goto SilversunCity_Theater_NPC4_1


SilversunCity_Theater_NPC5::
# 170 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC5_2
# 179 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_9
SilversunCity_Theater_NPC5_8:
# 182 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_3, MSGBOX_YESNO
# 183 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC5_11
SilversunCity_Theater_NPC5_1:
	end

SilversunCity_Theater_NPC5_2:
# 171 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_5
# 174 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_1
# 175 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_LENS
# 176 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_ZOOM_LENS
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_5:
# 172 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_0
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_9:
# 180 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_2
	goto SilversunCity_Theater_NPC5_8

SilversunCity_Theater_NPC5_11:
# 184 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_4
# 185 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_LENS
# 186 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 187 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_5, MSGBOX_NPC
	goto SilversunCity_Theater_NPC5_1


SilversunCity_Theater_NPC6::
# 197 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC6_2
# 200 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_1, MSGBOX_YESNO
# 201 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_5
# 214 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_6, MSGBOX_NPC
SilversunCity_Theater_NPC6_1:
	end

SilversunCity_Theater_NPC6_2:
# 198 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_0
	goto SilversunCity_Theater_NPC6_1

SilversunCity_Theater_NPC6_5:
# 202 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_2, MSGBOX_YESNO
# 203 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_8
# 211 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_5, MSGBOX_NPC
	goto SilversunCity_Theater_NPC6_1

SilversunCity_Theater_NPC6_8:
# 204 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_3, MSGBOX_YESNO
# 205 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_11
	goto SilversunCity_Theater_NPC6_1

SilversunCity_Theater_NPC6_11:
# 206 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_4, MSGBOX_NPC
# 207 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 208 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_LENS
	goto SilversunCity_Theater_NPC6_1


SilversunCity_Theater_NPC7::
# 221 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC7_2
# 224 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_1
SilversunCity_Theater_NPC7_1:
	end

SilversunCity_Theater_NPC7_2:
# 222 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_0
	goto SilversunCity_Theater_NPC7_1


# 26 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_0:
# 26 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 41 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_1:
# 41 "data//maps/SilversunCity_Theater/scripts.pory"
	face_left
	step_end

# 46 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_2:
# 46 "data//maps/SilversunCity_Theater/scripts.pory"
	face_right
	step_end

# 62 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_3:
# 62 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 62 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 62 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_right
# 62 "data//maps/SilversunCity_Theater/scripts.pory"
	face_down
	step_end

# 116 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_EventScript_SomberBlocker_Movement_0:
# 116 "data//maps/SilversunCity_Theater/scripts.pory"
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
# 23 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: Hmm, so it's you. Not\n"
	.string "spectacular, but you'll do.$"

SilversunCity_Theater_Leader_Text_2:
# 36 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Welcome to the Gloria Show! Tonight,\n"
	.string "we're doing a live performance that will\l"
	.string "sweep you off your feet!$"

SilversunCity_Theater_Leader_Text_3:
# 39 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "AUDIENCE: Woohoo! Go Gloria!$"

SilversunCity_Theater_Leader_Text_4:
# 42 "data//maps/SilversunCity_Theater/scripts.pory"
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
# 53 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: Now, {PLAYER}, enthrall me\n"
	.string "with your danse macabre!$"

SilversunCity_Theater_Leader_Text_6:
# 57 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "What a performace!$"

SilversunCity_Theater_Leader_Text_7:
# 68 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: A cheer from the audience,\n"
	.string "please!\p"
	.string "AUDIENCE: Boo! How dare you beat\n"
	.string "Gloria, you horrible trainer! Boo!\p"
	.string "{PLAYER} ducked to avoid a tomato!$"

SilversunCity_Theater_Leader_Text_8:
# 73 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: Ah...don't mind, {PLAYER}.\n"
	.string "Show business can be tough. But what a\l"
	.string "battle! Such elegance! Such style and\l"
	.string "panache! {PLAYER}, were you not a\l"
	.string "trainer, I would recruit you right away!\l"
	.string "But you dance to a different tune. And\l"
	.string "I must reward you with this.$"

SilversunCity_Theater_Leader_Text_9:
# 78 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "{PLAYER} received the Drama Badge\n"
	.string "from Gloria.$"

SilversunCity_Theater_Leader_Text_10:
# 83 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "The Drama Badge...$"

SilversunCity_Theater_Leader_Text_11:
# 88 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: It was a pleasure sharing the\n"
	.string "stage with you. May you weave and bob\l"
	.string "with elegance in the dance of life,\l"
	.string "{PLAYER}!$"

SilversunCity_Theater_EventScript_SomberBlocker_Text_0:
# 112 "data//maps/SilversunCity_Theater/scripts.pory"
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
# 134 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA is graceful even in defeat. Now\n"
	.string "that's something everyone can learn\l"
	.string "from.$"

SilversunCity_Theater_NPC1_Text_1:
# 136 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA is the face of Silversun City! A\n"
	.string "Gym Leader AND a famous actress? She's\l"
	.string "really a role model for women.$"

SilversunCity_Theater_NPC2_Text_0:
# 143 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Incredible! Her SEVIPER and ABSOL!\n"
	.string "Such a shame they lost, and to such\l"
	.string "a...nondescript opponent.$"

SilversunCity_Theater_NPC2_Text_1:
# 145 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "They say GLORIA caught her SEVIPER\n"
	.string "and ABSOL while shooting on set in the\l"
	.string "HOENN region.$"

SilversunCity_Theater_NPC3_Text_0:
# 152 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "What a show!$"

SilversunCity_Theater_NPC3_Text_1:
# 154 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I wish Pokemon were allowed in. I\n"
	.string "would've brought my SPRIGATITO along\l"
	.string "to watch.$"

SilversunCity_Theater_NPC4_Text_0:
# 161 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Did you see GLORIA's SEVIPER! Too bad\n"
	.string "that other person defeated it. A Greek\l"
	.string "tragedy!\n"
	.string "...oh, it was you.$"

SilversunCity_Theater_NPC4_Text_1:
# 163 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I'm a huuuge GLORIA fan! I've been\n"
	.string "waiting for this show for months!$"

SilversunCity_Theater_NPC5_Text_0:
# 172 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Even with my ZOOM LENS I couldn't see\n"
	.string "well...what a bummer!$"

SilversunCity_Theater_NPC5_Text_1:
# 174 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Even with my ZOOM LENS I couldn't see\n"
	.string "well...what a bummer! Why don't you take\l"
	.string "them? I'm going to get a new pair\l"
	.string "anyway.$"

SilversunCity_Theater_NPC5_Text_2:
# 180 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ahh, now let's settle in and watch the\n"
	.string "show.$"

SilversunCity_Theater_NPC5_Text_3:
# 182 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Are you going to watch the show from all\n"
	.string "the way back here too?$"

SilversunCity_Theater_NPC5_Text_4:
# 184 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Then these should help. I've got an\n"
	.string "extra pair.$"

SilversunCity_Theater_NPC5_Text_5:
# 187 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You can use it outside of the theater\n"
	.string "too! Any Pokemon holding it will have\l"
	.string "their accuracy increased.$"

SilversunCity_Theater_NPC6_Text_0:
# 198 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Right now I'm only an extra, but I'm\n"
	.string "about to land my first starring role any\l"
	.string "day now!$"

SilversunCity_Theater_NPC6_Text_1:
# 200 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Who are you? Only cast and crew are\n"
	.string "allowed backstage.\p"
	.string "Are you acting tonight?$"

SilversunCity_Theater_NPC6_Text_2:
# 202 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ooh! Are you going to go on-stage next\n"
	.string "to Gloria?$"

SilversunCity_Theater_NPC6_Text_3:
# 204 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh my god! You're a star! Can I have\n"
	.string "your autograph?$"

SilversunCity_Theater_NPC6_Text_4:
# 206 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...Thank you! Please take this. A little\n"
	.string "something to remember me by!$"

SilversunCity_Theater_NPC6_Text_5:
# 211 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "So you're an extra too? Sigh...when will\n"
	.string "we get our big break?$"

SilversunCity_Theater_NPC6_Text_6:
# 214 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh, so you're part of the crew. I'm an\n"
	.string "extra, so we're both playing support\l"
	.string "roles.$"

SilversunCity_Theater_NPC7_Text_0:
# 222 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You must have nerves of steel, doing all\n"
	.string "that in front of a crowd that size!$"

SilversunCity_Theater_NPC7_Text_1:
# 224 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...breathe...breathe...I'm calming my\n"
	.string "nerves. Even after years of training, I\l"
	.string "get nervous before going on-stage.$"
