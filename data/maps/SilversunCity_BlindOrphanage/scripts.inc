SilversunCity_BlindOrphanage_MapScripts::
	.byte 0


SilversunCity_BlindOrphanage_PokedexGameStart::
	return


SilversunCity_Book1::
# 9 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 10 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook1
# 11 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 12 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 13 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_Book2::
# 18 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 19 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook2
# 20 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 21 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 22 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_Book3::
# 27 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 28 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook3
# 29 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 30 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 31 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_Book4::
# 36 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 37 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook4
# 38 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 39 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 40 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_BrailleGameStart::
# 46 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 47 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 48 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto_if_set FLAG_SILVERSUN_BRAILLE_1_DONE, SilversunCity_BlindOrphanage_BrailleGameStart_2
# 56 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_1, MSGBOX_YESNO
# 58 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_5
# 69 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_3
# 70 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 71 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 30
# 72 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 73 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_4
# 74 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 75 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 76 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 8, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1
# 77 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 78 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_5
# 79 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 80 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 81 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_6
# 82 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 85 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz1
# 86 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 87 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 88 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_7
# 89 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 90 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_8
# 91 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 95 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz2
# 96 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 97 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 98 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_9
# 99 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 100 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_8
# 101 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 104 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz3
# 105 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 106 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 107 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_10
# 108 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 109 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 110 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_11
# 111 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 112 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 113 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 116 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_12
# 117 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_BlindOrphanage_BrailleGameStart_Text_13, SilversunCity_BlindOrphanage_BrailleGameStart_Text_14, SilversunCity_BlindOrphanage_BrailleGameStart_Text_15, SilversunCity_BlindOrphanage_BrailleGameStart_Text_16
# 119 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_8
# 122 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_18
SilversunCity_BlindOrphanage_BrailleGameStart_7:
# 125 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_2:
# 49 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_0
# 50 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 51 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitmovement 0
# 52 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	end

SilversunCity_BlindOrphanage_BrailleGameStart_5:
# 59 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_2
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 61 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 62 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitmovement 0
# 63 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 65 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_8:
# 120 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_17
	goto SilversunCity_BlindOrphanage_BrailleGameStart_7


# 50 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0:
# 50 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	face_left
	step_end

# 76 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1:
# 76 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	jump_in_place_right
	step_end

SilversunCity_BlindOrphanage_BrailleGameStart_Text_0:
# 49 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA is preparing for her next test.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_1:
# 56 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: SHEENA is about to take a\n"
	.string "braille test. Would you like to\l"
	.string "volunteer and help out?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_2:
# 59 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay.\n"
	.string "SHEENA, let's continue.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_3:
# 69 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Excellent. SHEENA has to read\n"
	.string "three sentences in braille correctly.\l"
	.string "I'll give SHEENA the questions, and you\l"
	.string "keep a tally of her answers, okay?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_4:
# 73 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Are you ready SHEENA?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_5:
# 78 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHENA: Yes!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_6:
# 81 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay then. Here's the first\n"
	.string "question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_7:
# 88 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "AN APPLIN A DAY KEEPS THE DOCTOR AT\l"
	.string "BAY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_8:
# 90 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Next question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_9:
# 98 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "ROLY POLY WITH ROLYCOLY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_10:
# 107 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\p"
	.string "FEEBAS EVOLVES WITH A MART PAIL.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_11:
# 110 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: And that's all the questions!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_12:
# 116 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: So how many did SHEEA get\n"
	.string "right?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_13:
# 117 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "0/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_14:
# 117 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "1/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_15:
# 117 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "2/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_16:
# 117 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "3/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_17:
# 120 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Yes...looks like SHEENA needs\n"
	.string "more practice.\p"
	.string "TEACHER: Thanks for volunteering.\p"
	.string "SHEENA: Thank you!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_18:
# 122 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: That doesn't seem right. Are\n"
	.string "you sure you checked her answers\l"
	.string "correctly?$"
