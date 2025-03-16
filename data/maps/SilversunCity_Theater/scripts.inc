SilversunCity_Theater_MapScripts::
	.byte 0


SilversunCity_Theater_Leader::
# 12 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 13 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 16 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_TO_BLACK
# 17 "data//maps/SilversunCity_Theater/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 3, 6
# 18 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Theater_Leader_Movement_0
# 19 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 8, SilversunCity_Theater_Leader_Movement_1
# 20 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 21 "data//maps/SilversunCity_Theater/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 23 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_Leader_Text_0
# 24 "data//maps/SilversunCity_Theater/scripts.pory"
	release
# 27 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end


SilversunCity_Theater_EventScript_SomberBlocker::
# 41 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 42 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 43 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_EventScript_SomberBlocker_Text_0
# 45 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_ENTRANCE
# 47 "data//maps/SilversunCity_Theater/scripts.pory"
	applymovement 6, SilversunCity_Theater_EventScript_SomberBlocker_Movement_0
# 48 "data//maps/SilversunCity_Theater/scripts.pory"
	waitmovement 0
# 49 "data//maps/SilversunCity_Theater/scripts.pory"
	removeobject 6
# 50 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end


SilversunCity_Theater_NPC1::
# 64 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 65 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 66 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC1_2
# 69 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_1
SilversunCity_Theater_NPC1_1:
# 71 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end

SilversunCity_Theater_NPC1_2:
# 67 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC1_Text_0
	goto SilversunCity_Theater_NPC1_1


SilversunCity_Theater_NPC2::
# 76 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 77 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 78 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC2_2
# 81 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_1
SilversunCity_Theater_NPC2_1:
# 83 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end

SilversunCity_Theater_NPC2_2:
# 79 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC2_Text_0
	goto SilversunCity_Theater_NPC2_1


SilversunCity_Theater_NPC3::
# 88 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 89 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 90 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC3_2
# 93 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_1
SilversunCity_Theater_NPC3_1:
# 95 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end

SilversunCity_Theater_NPC3_2:
# 91 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC3_Text_0
	goto SilversunCity_Theater_NPC3_1


SilversunCity_Theater_NPC4::
# 100 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 101 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 102 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC4_2
# 105 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_1
SilversunCity_Theater_NPC4_1:
# 107 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end

SilversunCity_Theater_NPC4_2:
# 103 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC4_Text_0
	goto SilversunCity_Theater_NPC4_1


SilversunCity_Theater_NPC5::
# 112 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 113 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 114 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC5_2
# 123 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_9
SilversunCity_Theater_NPC5_8:
# 126 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_3, MSGBOX_YESNO
# 127 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC5_11
SilversunCity_Theater_NPC5_1:
# 135 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end

SilversunCity_Theater_NPC5_2:
# 115 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC5_5
# 118 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_1
# 119 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_LENS
# 120 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_ZOOM_LENS
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_5:
# 116 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_0
	goto SilversunCity_Theater_NPC5_1

SilversunCity_Theater_NPC5_9:
# 124 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_2
	goto SilversunCity_Theater_NPC5_8

SilversunCity_Theater_NPC5_11:
# 128 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_4
# 129 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_LENS
# 130 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 131 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC5_Text_5
	goto SilversunCity_Theater_NPC5_1


SilversunCity_Theater_NPC6::
# 142 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 143 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 144 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_LENS, SilversunCity_Theater_NPC6_2
# 147 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_1, MSGBOX_YESNO
# 148 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_5
# 161 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_6
SilversunCity_Theater_NPC6_1:
# 164 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end

SilversunCity_Theater_NPC6_2:
# 145 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_0
	goto SilversunCity_Theater_NPC6_1

SilversunCity_Theater_NPC6_5:
# 149 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_2, MSGBOX_YESNO
# 150 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_8
# 158 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_5
	goto SilversunCity_Theater_NPC6_1

SilversunCity_Theater_NPC6_8:
# 151 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_3, MSGBOX_YESNO
# 152 "data//maps/SilversunCity_Theater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Theater_NPC6_11
	goto SilversunCity_Theater_NPC6_1

SilversunCity_Theater_NPC6_11:
# 153 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC6_Text_4
# 154 "data//maps/SilversunCity_Theater/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 155 "data//maps/SilversunCity_Theater/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_LENS
	goto SilversunCity_Theater_NPC6_1


SilversunCity_Theater_NPC7::
# 169 "data//maps/SilversunCity_Theater/scripts.pory"
	lockall
# 170 "data//maps/SilversunCity_Theater/scripts.pory"
	faceplayer
# 171 "data//maps/SilversunCity_Theater/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_Theater_NPC7_2
# 174 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_1
SilversunCity_Theater_NPC7_1:
# 176 "data//maps/SilversunCity_Theater/scripts.pory"
	releaseall
	end

SilversunCity_Theater_NPC7_2:
# 172 "data//maps/SilversunCity_Theater/scripts.pory"
	msgbox SilversunCity_Theater_NPC7_Text_0
	goto SilversunCity_Theater_NPC7_1


# 18 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_0:
# 18 "data//maps/SilversunCity_Theater/scripts.pory"
	face_right
	step_end

# 19 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_Leader_Movement_1:
# 19 "data//maps/SilversunCity_Theater/scripts.pory"
	face_left
	step_end

# 47 "data//maps/SilversunCity_Theater/scripts.pory"
SilversunCity_Theater_EventScript_SomberBlocker_Movement_0:
# 47 "data//maps/SilversunCity_Theater/scripts.pory"
	walk_up
	step_end

SilversunCity_Theater_Leader_Text_0:
# 23 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA: Now, {PLAYER}, enthrall me\n"
	.string "with your danse macabre!$"

SilversunCity_Theater_EventScript_SomberBlocker_Text_0:
# 43 "data//maps/SilversunCity_Theater/scripts.pory"
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
# 67 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA is graceful even in defeat. Now\n"
	.string "that's something everyone can learn\l"
	.string "from.$"

SilversunCity_Theater_NPC1_Text_1:
# 69 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "GLORIA is the face of SILVERSUN CITY!\n"
	.string "A Gym Leader AND a famous actress?\l"
	.string "She's really a role model for women.$"

SilversunCity_Theater_NPC2_Text_0:
# 79 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Incredible! Her SEVIPER and ABSOL!\n"
	.string "Such a shame they lost, and to such\l"
	.string "a...nondescript opponent.$"

SilversunCity_Theater_NPC2_Text_1:
# 81 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "They say GLORIA caught her SEVIPER\n"
	.string "and ABSOL while shooting on set in the\l"
	.string "HOENN region.$"

SilversunCity_Theater_NPC3_Text_0:
# 91 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "What a show!$"

SilversunCity_Theater_NPC3_Text_1:
# 93 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I wish {PKMN} were allowed in. I would've\n"
	.string "brought my SPRIGATITO along to watch.$"

SilversunCity_Theater_NPC4_Text_0:
# 103 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Did you see GLORIA's SEVIPER! Too bad\n"
	.string "that other person defeated it. A Greek\l"
	.string "tragedy!\n"
	.string "...oh, it was you.$"

SilversunCity_Theater_NPC4_Text_1:
# 105 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "I'm a huuuge GLORIA fan! I've been\n"
	.string "waiting for this show for months!$"

SilversunCity_Theater_NPC5_Text_0:
# 116 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Even with my ZOOM LENS I couldn't see\n"
	.string "well...what a bummer!$"

SilversunCity_Theater_NPC5_Text_1:
# 118 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Even with my ZOOM LENS I couldn't see\n"
	.string "well...what a bummer! Why don't you take\l"
	.string "them? I'm going to get a new pair\l"
	.string "anyway.$"

SilversunCity_Theater_NPC5_Text_2:
# 124 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ahh, now let's settle in and watch the\n"
	.string "show.$"

SilversunCity_Theater_NPC5_Text_3:
# 126 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Are you going to watch the show from all\n"
	.string "the way back here too?$"

SilversunCity_Theater_NPC5_Text_4:
# 128 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Then these should help. I've got an\n"
	.string "extra pair.$"

SilversunCity_Theater_NPC5_Text_5:
# 131 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You can use it outside of the theater\n"
	.string "too! Any {PKMN} holding it will have their\l"
	.string "accuracy increased.$"

SilversunCity_Theater_NPC6_Text_0:
# 145 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Right now I'm only an extra, but I'm\n"
	.string "about to land my first starring role!$"

SilversunCity_Theater_NPC6_Text_1:
# 147 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Who are you? Only cast and crew are\n"
	.string "allowed backstage.\p"
	.string "Are you acting tonight?$"

SilversunCity_Theater_NPC6_Text_2:
# 149 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Ooh! Are you going to go on-stage next\n"
	.string "to GLORIA?$"

SilversunCity_Theater_NPC6_Text_3:
# 151 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh my god! You're a star! Can I have\n"
	.string "your autograph?$"

SilversunCity_Theater_NPC6_Text_4:
# 153 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...Thank you! Please take this. A little\n"
	.string "something to remember me by!$"

SilversunCity_Theater_NPC6_Text_5:
# 158 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "So you're an extra too? Sigh...when will\n"
	.string "we get our big break?$"

SilversunCity_Theater_NPC6_Text_6:
# 161 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "Oh, so you're part of the crew. I'm an\n"
	.string "extra, so we're both playing support\l"
	.string "roles.$"

SilversunCity_Theater_NPC7_Text_0:
# 172 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "You must have nerves of steel, doing all\n"
	.string "that in front of a crowd that size!$"

SilversunCity_Theater_NPC7_Text_1:
# 174 "data//maps/SilversunCity_Theater/scripts.pory"
	.string "...breathe...breathe...I'm calming my\n"
	.string "nerves. Even after years of training, I\l"
	.string "get nervous before going on-stage.$"
