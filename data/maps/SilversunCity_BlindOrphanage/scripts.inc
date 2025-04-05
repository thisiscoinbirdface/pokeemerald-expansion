SilversunCity_BlindOrphanage_MapScripts::
	.byte 0


SilversunCity_BlindOrphanage_BrailleGameStart::
# 5 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 6 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 7 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_0, MSGBOX_YESNO
# 9 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_2
# 19 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_2
# 20 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 21 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 30
# 22 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 23 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_3
# 24 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 25 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 26 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1
# 27 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 28 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_4
# 29 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 30 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 30
# 34 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz1
# 35 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 36 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 37 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_5
# 38 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 39 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_6
# 43 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz2
# 44 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 45 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 46 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_7
# 47 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 48 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_6
# 51 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz3
# 52 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 53 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 54 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_8
# 55 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 56 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_6
# 59 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_9
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_BlindOrphanage_BrailleGameStart_Text_10, SilversunCity_BlindOrphanage_BrailleGameStart_Text_11, SilversunCity_BlindOrphanage_BrailleGameStart_Text_12, SilversunCity_BlindOrphanage_BrailleGameStart_Text_13
# 62 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_5
# 65 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_15
SilversunCity_BlindOrphanage_BrailleGameStart_4:
# 68 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_2:
# 10 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_1
# 11 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 12 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 13 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 15 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_5:
# 63 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_14
	goto SilversunCity_BlindOrphanage_BrailleGameStart_4


# 12 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0:
# 12 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	face_left
	step_end

# 26 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1:
# 26 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	jump_in_place_right
	step_end

SilversunCity_BlindOrphanage_BrailleGameStart_Text_0:
# 7 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: SHEENA is about to take a\n"
	.string "braille test. Would you like to\l"
	.string "volunteer and help out?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_1:
# 10 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay.\n"
	.string "SHEENA, let's continue.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_2:
# 19 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Excellent. SHEENA has to read\n"
	.string "three sentences in braille correctly.\l"
	.string "I'll give SHEENA the questions, and you\l"
	.string "keep a tally of her answers, okay?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_3:
# 23 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Are you ready SHEENA?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_4:
# 28 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHENA: Yes!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_5:
# 37 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "AN APPLIN A DAY KEEPS THE DOCTOR AT\l"
	.string "BAY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_6:
# 39 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Next question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_7:
# 46 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "ROLY POLY WITH ROLYCOLY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_8:
# 54 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\p"
	.string "FEEBASE EVOLVES WITH A MART PAIL.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_9:
# 59 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: So how many did he get right?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_10:
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "0/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_11:
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "1/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_12:
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "2/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_13:
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "3/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_14:
# 63 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Yes...looks like SHEENA needs\n"
	.string "more practice.\p"
	.string "TEACHER: Thanks for volunteering.\p"
	.string "SHEENA: Thank you!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_15:
# 65 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: That doesn't seem right. Are\n"
	.string "you sure you checked her answers\l"
	.string "correctly?$"
