SilversunCity_BlindOrphanage_MapScripts::
	.byte 0


SilversunCity_BlindOrphanage_PokedexGameStart::
	return


SilversunCity_BlindOrphanage_BrailleGameStart::
# 9 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 10 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 11 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_0, MSGBOX_YESNO
# 13 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_2
# 24 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_2
# 25 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 26 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 30
# 27 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 28 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_3
# 29 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 30 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 31 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 8, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1
# 32 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 33 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_4
# 34 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 35 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 36 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_5
# 37 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 40 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz1
# 41 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 42 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 43 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_6
# 44 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 45 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_7
# 46 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 50 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz2
# 51 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 52 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 53 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_8
# 54 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 55 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_7
# 56 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 59 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz3
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 61 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 62 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_9
# 63 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 64 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 65 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_10
# 66 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 67 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 68 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 71 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_11
# 72 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_BlindOrphanage_BrailleGameStart_Text_12, SilversunCity_BlindOrphanage_BrailleGameStart_Text_13, SilversunCity_BlindOrphanage_BrailleGameStart_Text_14, SilversunCity_BlindOrphanage_BrailleGameStart_Text_15
# 74 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_5
# 77 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_17
SilversunCity_BlindOrphanage_BrailleGameStart_4:
# 80 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_2:
# 14 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_1
# 15 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 16 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 17 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitmovement 0
# 18 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 20 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_5:
# 75 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_16
	goto SilversunCity_BlindOrphanage_BrailleGameStart_4


# 16 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0:
# 16 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	face_left
	step_end

# 31 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1:
# 31 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	jump_in_place_right
	step_end

SilversunCity_BlindOrphanage_BrailleGameStart_Text_0:
# 11 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: SHEENA is about to take a\n"
	.string "braille test. Would you like to\l"
	.string "volunteer and help out?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_1:
# 14 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay.\n"
	.string "SHEENA, let's continue.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_2:
# 24 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Excellent. SHEENA has to read\n"
	.string "three sentences in braille correctly.\l"
	.string "I'll give SHEENA the questions, and you\l"
	.string "keep a tally of her answers, okay?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_3:
# 28 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Are you ready SHEENA?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_4:
# 33 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHENA: Yes!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_5:
# 36 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay then. Here's the first\n"
	.string "question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_6:
# 43 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "AN APPLIN A DAY KEEPS THE DOCTOR AT\l"
	.string "BAY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_7:
# 45 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Next question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_8:
# 53 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "ROLY POLY WITH ROLYCOLY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_9:
# 62 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\p"
	.string "FEEBAS EVOLVES WITH A MART PAIL.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_10:
# 65 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: And that's all the questions!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_11:
# 71 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: So how many did SHEEA get\n"
	.string "right?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_12:
# 72 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "0/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_13:
# 72 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "1/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_14:
# 72 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "2/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_15:
# 72 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "3/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_16:
# 75 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Yes...looks like SHEENA needs\n"
	.string "more practice.\p"
	.string "TEACHER: Thanks for volunteering.\p"
	.string "SHEENA: Thank you!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_17:
# 77 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: That doesn't seem right. Are\n"
	.string "you sure you checked her answers\l"
	.string "correctly?$"
