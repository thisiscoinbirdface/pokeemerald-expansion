SilversunCity_TheaterEntrance_MapScripts::
	.byte 0


SilversunCity_TheaterEntrance_EventScript_BackstageBlocker::
# 9 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	lockall
# 10 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	faceplayer
# 12 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	goto_if_set FLAG_SILVERSUN_BACKSTAGEPASS_USE, SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_2
# 15 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Text_1, MSGBOX_YESNO
# 16 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_5
# 27 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Text_4
SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_1:
# 32 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	releaseall
	end

SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_2:
# 13 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Text_0
	goto SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_1

SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_5:
	checkitem ITEM_BACKSTAGE_PASS
# 0 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_8
# 24 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Text_3
	goto SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_1

SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_8:
# 18 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Text_2
# 19 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	applymovement 7, SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Movement_0
# 20 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	waitmovement 0
# 21 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	setflag FLAG_SILVERSUN_BACKSTAGEPASS_USE
# 22 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	removeitem ITEM_BACKSTAGE_PASS
	goto SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_1


SilversunCity_TheaterEntrance_EventScript_Receptionist::
# 53 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	lockall
# 54 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	faceplayer
# 55 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_TheaterEntrance_EventScript_Receptionist_2
# 58 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_Receptionist_Text_1
SilversunCity_TheaterEntrance_EventScript_Receptionist_1:
# 60 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	releaseall
	end

SilversunCity_TheaterEntrance_EventScript_Receptionist_2:
# 56 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_Receptionist_Text_0
	goto SilversunCity_TheaterEntrance_EventScript_Receptionist_1


SilversunCity_TheaterEntrance_EventScript_NPC1::
# 66 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	lockall
# 67 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	faceplayer
# 68 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_TheaterEntrance_EventScript_NPC1_2
# 71 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC1_Text_1
SilversunCity_TheaterEntrance_EventScript_NPC1_1:
# 73 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	releaseall
	end

SilversunCity_TheaterEntrance_EventScript_NPC1_2:
# 69 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC1_Text_0
	goto SilversunCity_TheaterEntrance_EventScript_NPC1_1


SilversunCity_TheaterEntrance_EventScript_NPC2::
# 79 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	lockall
# 80 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	faceplayer
# 81 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_TheaterEntrance_EventScript_NPC2_2
# 84 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC2_Text_1
SilversunCity_TheaterEntrance_EventScript_NPC2_1:
# 86 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	releaseall
	end

SilversunCity_TheaterEntrance_EventScript_NPC2_2:
# 82 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC2_Text_0
	goto SilversunCity_TheaterEntrance_EventScript_NPC2_1


SilversunCity_TheaterEntrance_EventScript_NPC4::
# 105 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	lockall
# 106 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	faceplayer
# 107 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_TheaterEntrance_EventScript_NPC4_2
# 110 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC4_Text_1
SilversunCity_TheaterEntrance_EventScript_NPC4_1:
# 112 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	releaseall
	end

SilversunCity_TheaterEntrance_EventScript_NPC4_2:
# 108 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC4_Text_0
	goto SilversunCity_TheaterEntrance_EventScript_NPC4_1


SilversunCity_TheaterEntrance_EventScript_NPC5::
# 118 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	lockall
# 119 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	faceplayer
# 120 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_TheaterEntrance_EventScript_NPC5_2
# 123 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC5_Text_1
SilversunCity_TheaterEntrance_EventScript_NPC5_1:
# 125 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	releaseall
	end

SilversunCity_TheaterEntrance_EventScript_NPC5_2:
# 121 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC5_Text_0
	goto SilversunCity_TheaterEntrance_EventScript_NPC5_1


SilversunCity_TheaterEntrance_EventScript_NPC6::
# 130 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	lockall
# 131 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	faceplayer
# 132 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_TheaterEntrance_EventScript_NPC6_2
# 135 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC6_Text_1
SilversunCity_TheaterEntrance_EventScript_NPC6_1:
# 137 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	releaseall
	end

SilversunCity_TheaterEntrance_EventScript_NPC6_2:
# 133 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC6_Text_0
	goto SilversunCity_TheaterEntrance_EventScript_NPC6_1


SilversunCity_TheaterEntrance_EventScript_NPC7::
# 142 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	lockall
# 143 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	faceplayer
# 144 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_TheaterEntrance_EventScript_NPC7_2
# 156 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC7_Text_4
SilversunCity_TheaterEntrance_EventScript_NPC7_1:
# 158 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	releaseall
	end

SilversunCity_TheaterEntrance_EventScript_NPC7_2:
# 145 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	goto_if_set FLAG_SILVERSUN_THEATER_MANIAC, SilversunCity_TheaterEntrance_EventScript_NPC7_5
# 148 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC7_Text_1
# 150 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	trainerbattle_no_intro TRAINER_THEATER_B, SilversunCity_TheaterEntrance_EventScript_NPC7_Text_2
# 151 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	release
# 152 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC7_Text_3
# 153 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	setflag FLAG_SILVERSUN_THEATER_MANIAC
	goto SilversunCity_TheaterEntrance_EventScript_NPC7_1

SilversunCity_TheaterEntrance_EventScript_NPC7_5:
# 146 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC7_Text_0
	goto SilversunCity_TheaterEntrance_EventScript_NPC7_1


SilversunCity_TheaterEntrance_EventScript_NPC8::
# 164 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	lockall
# 165 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	faceplayer
# 166 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SilversunCity_TheaterEntrance_EventScript_NPC8_2
# 169 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC8_Text_1
SilversunCity_TheaterEntrance_EventScript_NPC8_1:
# 171 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	releaseall
	end

SilversunCity_TheaterEntrance_EventScript_NPC8_2:
# 167 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	msgbox SilversunCity_TheaterEntrance_EventScript_NPC8_Text_0
	goto SilversunCity_TheaterEntrance_EventScript_NPC8_1


# 19 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Movement_0:
# 19 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	walk_right
# 19 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	face_down
	step_end

SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Text_0:
# 13 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "I hope you enjoy the show!$"

SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Text_1:
# 15 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "Sorry - backstage access is for the\n"
	.string "cast and crew only. Do you have a\l"
	.string "BACKSTAGE PASS?$"

SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Text_2:
# 18 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "...\p"
	.string "This seems to be in order.\p"
	.string "Please, right this way.$"

SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Text_3:
# 24 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "...\p"
	.string "It doesn't seem like you do. Are you\n"
	.string "paparazzi? Sorry, I can't let you pass.$"

SilversunCity_TheaterEntrance_EventScript_BackstageBlocker_Text_4:
# 27 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "Sorry, I can't let you pass.$"

SilversunCity_TheaterEntrance_EventScript_Receptionist_Text_0:
# 56 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "What a performance! And you weren't bad\n"
	.string "too!$"

SilversunCity_TheaterEntrance_EventScript_Receptionist_Text_1:
# 58 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "Please proceed to the audience hall. We\n"
	.string "hope you enjoy the show!$"

SilversunCity_TheaterEntrance_EventScript_NPC1_Text_0:
# 69 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "The SERPERIOR was so scary!$"

SilversunCity_TheaterEntrance_EventScript_NPC1_Text_1:
# 71 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "Theater is so boring! I don't know why\n"
	.string "my parents like it.$"

SilversunCity_TheaterEntrance_EventScript_NPC2_Text_0:
# 82 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "The action! The tension! And all the\n"
	.string "razzle-dazzle! GLORIA was sizzling! Too\l"
	.string "bad she lost though.$"

SilversunCity_TheaterEntrance_EventScript_NPC2_Text_1:
# 84 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "I write for CORMORIA CULTURE, the\n"
	.string "leading arts and entertainment portal\l"
	.string "in Cormoria! Let's see what GLORIA has\l"
	.string "in store today...it's supposed to be an\l"
	.string "experiential affair.$"

SilversunCity_TheaterEntrance_EventScript_NPC4_Text_0:
# 108 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "I didn't learn anything about theater,\n"
	.string "but I sure as hell saw a good battle!\l"
	.string "You knocked all these snobs right off\l"
	.string "their feet!$"

SilversunCity_TheaterEntrance_EventScript_NPC4_Text_1:
# 110 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "My girl told me I'm not classy enough\n"
	.string "for her friends...so here I am, educatin'\l"
	.string "myself. I love her, y'know?$"

SilversunCity_TheaterEntrance_EventScript_NPC5_Text_0:
# 121 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "Hey - get in the shot! Not you - your\n"
	.string "{PKMN}! You can keep moving.$"

SilversunCity_TheaterEntrance_EventScript_NPC5_Text_1:
# 123 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "Hey - get out of the shot! What if\n"
	.string "GLORIA walks by?$"

SilversunCity_TheaterEntrance_EventScript_NPC6_Text_0:
# 133 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "Ooh I bet our photographs of GLORIA\n"
	.string "will go for a pretty price after this\l"
	.string "performance!$"

SilversunCity_TheaterEntrance_EventScript_NPC6_Text_1:
# 135 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "We're journalists looking for an\n"
	.string "interview with the cast and crew. Are\l"
	.string "you a crew member?\p"
	.string "No?\p"
	.string "Then move along!$"

SilversunCity_TheaterEntrance_EventScript_NPC7_Text_0:
# 146 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "Obsession isn't healthy. It can be hard\n"
	.string "to get out of the loop, but I've got to!$"

SilversunCity_TheaterEntrance_EventScript_NPC7_Text_1:
# 148 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "Argh! I'm so upset! I can't forgive that\n"
	.string "trainer who made my GLORIA look bad on\l"
	.string "stage...wait, it's you?\p"
	.string "Justice will be served!$"

SilversunCity_TheaterEntrance_EventScript_NPC7_Text_2:
# 150 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "My love for GLORIA wasn't enough...$"

SilversunCity_TheaterEntrance_EventScript_NPC7_Text_3:
# 152 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "Sigh...I didn't want to admit it but I\n"
	.string "know. GLORIA is only human after all.\l"
	.string "She's allowed to lose a battle. I need to\l"
	.string "stop idolising her and think of her as\l"
	.string "another human being.$"

SilversunCity_TheaterEntrance_EventScript_NPC7_Text_4:
# 156 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "Just look at those salivating paparazzi\n"
	.string "over there! Nobody should be salivating\l"
	.string "over GLORIA but me!$"

SilversunCity_TheaterEntrance_EventScript_NPC8_Text_0:
# 167 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "I've seen better in my day!\p"
	.string "I'm talking about you of course. GLORIA\n"
	.string "was perfect.$"

SilversunCity_TheaterEntrance_EventScript_NPC8_Text_1:
# 169 "data//maps/SilversunCity_TheaterEntrance/scripts.pory"
	.string "I've seen many a performance in my life.\n"
	.string "I'm not a snob, but I do have high\l"
	.string "standards.$"
