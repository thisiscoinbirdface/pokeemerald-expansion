SilversunCity_BlindOrphanage_MapScripts::
	.byte 0


SilversunCity_BlindOrphanage_PokedexGameStart::
# 5 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 6 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 9 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 0
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_2
# 13 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 1
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_5
# 18 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 4
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_8
# 23 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 3
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_11
# 51 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 2
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_14
# 74 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_21
# 79 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 1
# 80 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_10, MSGBOX_NPC
	end

SilversunCity_BlindOrphanage_PokedexGameStart_2:
# 10 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_0, MSGBOX_NPC
	end

SilversunCity_BlindOrphanage_PokedexGameStart_5:
# 14 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_0, MSGBOX_NPC
	end

SilversunCity_BlindOrphanage_PokedexGameStart_8:
# 19 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_1, MSGBOX_NPC
	end

SilversunCity_BlindOrphanage_PokedexGameStart_11:
# 24 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_2, MSGBOX_YESNO
# 25 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_17
# 29 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	checkitem ITEM_ORPHANAGE_BOOK
# 30 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_27
# 43 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_6, MSGBOX_NPC
SilversunCity_BlindOrphanage_PokedexGameStart_16:
# 47 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_PokedexGameStart_14:
# 52 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_2, MSGBOX_YESNO
# 53 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_24
# 57 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	checkitem ITEM_ORPHANAGE_BOOK
# 58 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_30
# 66 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_6, MSGBOX_NPC
SilversunCity_BlindOrphanage_PokedexGameStart_23:
# 70 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_PokedexGameStart_17:
# 26 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_3
	goto SilversunCity_BlindOrphanage_PokedexGameStart_16

SilversunCity_BlindOrphanage_PokedexGameStart_21:
# 75 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_9, MSGBOX_NPC
	end

SilversunCity_BlindOrphanage_PokedexGameStart_24:
# 54 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_3
	goto SilversunCity_BlindOrphanage_PokedexGameStart_23

SilversunCity_BlindOrphanage_PokedexGameStart_27:
# 31 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	removeitem ITEM_ORPHANAGE_BOOK
# 32 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_4, MSGBOX_SIGN
# 33 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 34 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_5
# 35 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 36 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 4
# 39 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto_if_set FLAG_SILVERSUN_BRAILLE_1_DONE, SilversunCity_BlindOrphanage_PokedexGameStart_33
	goto SilversunCity_BlindOrphanage_PokedexGameStart_16

SilversunCity_BlindOrphanage_PokedexGameStart_30:
# 59 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	removeitem ITEM_ORPHANAGE_BOOK
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_7, MSGBOX_SIGN
# 61 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 62 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_8
# 63 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 64 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto SilversunCity_BlindOrphanage_PokedexGameStart_23

SilversunCity_BlindOrphanage_PokedexGameStart_33:
# 40 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 3
	goto SilversunCity_BlindOrphanage_PokedexGameStart_16


SilversunCity_Book1::
# 85 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 86 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook1
# 87 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 88 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 90 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book1_2
SilversunCity_Book1_1:
# 99 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book1_2:
# 91 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 92 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book1_4
	goto SilversunCity_Book1_1

SilversunCity_Book1_4:
# 93 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 94 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 95 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book1_1


SilversunCity_Book2::
# 104 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 105 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook2
# 106 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 107 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 109 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book2_2
SilversunCity_Book2_1:
# 118 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book2_2:
# 110 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 111 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book2_4
	goto SilversunCity_Book2_1

SilversunCity_Book2_4:
# 112 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 113 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 114 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book2_1


SilversunCity_Book3::
# 123 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 124 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook3
# 125 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 126 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 128 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book3_2
SilversunCity_Book3_1:
# 137 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book3_2:
# 129 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 130 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book3_4
	goto SilversunCity_Book3_1

SilversunCity_Book3_4:
# 131 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 3
# 132 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 133 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book3_1


SilversunCity_Book4::
# 142 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 143 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook4
# 144 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 145 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 147 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book4_2
SilversunCity_Book4_1:
# 156 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book4_2:
# 148 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 149 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book4_4
	goto SilversunCity_Book4_1

SilversunCity_Book4_4:
# 150 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 151 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 152 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book4_1


SilversunCity_BlindOrphanage_BrailleGameStart::
# 162 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto_if_set FLAG_SILVERSUN_BRAILLE_1_DONE, SilversunCity_BlindOrphanage_BrailleGameStart_2
# 167 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 168 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 170 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 0
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_5
# 175 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 1
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_8
# 181 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_2, MSGBOX_YESNO
# 183 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_11
# 194 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_4
# 195 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 196 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 30
# 197 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 198 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_5
# 199 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 200 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 201 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 8, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1
# 202 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 203 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_6
# 204 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 205 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 206 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_7
# 207 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 210 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz1
# 211 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 212 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 213 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_8
# 214 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 215 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_9
# 216 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 220 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz2
# 221 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 222 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 223 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_10
# 224 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 225 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_9
# 226 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 229 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz3
# 230 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 231 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 232 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_11
# 233 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 234 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 235 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_12
# 236 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 237 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 238 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 241 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_13
# 242 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_BlindOrphanage_BrailleGameStart_Text_14, SilversunCity_BlindOrphanage_BrailleGameStart_Text_15, SilversunCity_BlindOrphanage_BrailleGameStart_Text_16, SilversunCity_BlindOrphanage_BrailleGameStart_Text_17
# 244 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_14
# 255 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_19
SilversunCity_BlindOrphanage_BrailleGameStart_13:
# 258 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_2:
# 163 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_0, MSGBOX_NPC
	end

SilversunCity_BlindOrphanage_BrailleGameStart_5:
# 171 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_1
# 172 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	end

SilversunCity_BlindOrphanage_BrailleGameStart_8:
# 176 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_1
# 177 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	end

SilversunCity_BlindOrphanage_BrailleGameStart_11:
# 184 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_3
# 185 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 186 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 187 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitmovement 0
# 188 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 190 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_14:
# 245 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_18
# 246 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 248 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setflag FLAG_SILVERSUN_BRAILLE_1_DONE
# 250 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 4
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_17
	goto SilversunCity_BlindOrphanage_BrailleGameStart_13

SilversunCity_BlindOrphanage_BrailleGameStart_17:
# 251 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 3
	goto SilversunCity_BlindOrphanage_BrailleGameStart_13


SilversunCity_BlindOrphanage_NPC_1::
# 265 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 266 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 267 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_NPC_1_Text_0
# 268 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_NPC_2::
# 273 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 274 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 275 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_NPC_2_Text_0
# 276 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_NPC_3::
# 281 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 282 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 283 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_NPC_3_Text_0
# 284 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_NPC_5::
# 289 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 290 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 291 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_NPC_5_Text_0
# 292 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_NPC_6::
# 297 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 298 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 299 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_NPC_6_Text_0
# 300 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_Ralts::
# 305 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 306 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_Ralts_Text_0, MSGBOX_NPC
	end


SilversunCity_BlindOrphanage_Noibat::
# 311 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	playmoncry SPECIES_NOIBAT, CRY_MODE_NORMAL
# 312 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_Noibat_Text_0, MSGBOX_NPC
	end


SilversunCity_BlindOrphanage_Furfrou::
# 317 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 318 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_Furfrou_Text_0, MSGBOX_NPC
	end


SilversunCity_BlindOrphanage_OldManQuest::
# 337 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 338 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 340 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 4
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_2
SilversunCity_BlindOrphanage_OldManQuest_1:
# 344 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 0
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_5
SilversunCity_BlindOrphanage_OldManQuest_4:
# 350 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 3
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_8
SilversunCity_BlindOrphanage_OldManQuest_7:
# 356 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 2
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_11
SilversunCity_BlindOrphanage_OldManQuest_10:
# 362 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 1
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_14
SilversunCity_BlindOrphanage_OldManQuest_13:
# 375 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_OldManQuest_2:
# 341 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_0
	goto SilversunCity_BlindOrphanage_OldManQuest_1

SilversunCity_BlindOrphanage_OldManQuest_5:
# 345 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_1
# 346 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 1
# 347 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
	goto SilversunCity_BlindOrphanage_OldManQuest_4

SilversunCity_BlindOrphanage_OldManQuest_8:
# 351 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_2
# 352 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto SilversunCity_BlindOrphanage_Reward
	goto SilversunCity_BlindOrphanage_OldManQuest_7

SilversunCity_BlindOrphanage_OldManQuest_11:
# 357 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_3
# 358 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	goto SilversunCity_BlindOrphanage_OldManQuest_10

SilversunCity_BlindOrphanage_OldManQuest_14:
# 363 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_4, MSGBOX_YESNO
# 364 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_16
# 371 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_6
	goto SilversunCity_BlindOrphanage_OldManQuest_13

SilversunCity_BlindOrphanage_OldManQuest_16:
# 365 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_5
# 366 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 368 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 2
	goto SilversunCity_BlindOrphanage_OldManQuest_13


SilversunCity_BlindOrphanage_Reward::
# 383 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	message SilversunCity_BlindOrphanage_Reward_Text_0
# 384 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitmessage
# 385 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_BlindOrphanage_Reward_Text_1, SilversunCity_BlindOrphanage_Reward_Text_2
# 387 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_Reward_1
# 390 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto SilversunCity_BlindOrphanage_RewardB
	return

SilversunCity_BlindOrphanage_Reward_1:
# 388 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto SilversunCity_BlindOrphanage_RewardA
	return


SilversunCity_BlindOrphanage_RewardA::
# 394 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_0x8006, ITEM_WISE_GLASSES
# 395 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	showitemdescription
# 396 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_RewardA_Text_0, MSGBOX_YESNO
# 397 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_RewardA_1
# 402 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	hideitemdescription
# 403 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto SilversunCity_BlindOrphanage_Reward
	return

SilversunCity_BlindOrphanage_RewardA_1:
# 398 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	hideitemdescription
# 399 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 400 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto SilversunCity_BlindOrphanage_RewardEnd
	return


SilversunCity_BlindOrphanage_RewardB::
# 407 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_0x8006, ITEM_MUSCLE_BAND
# 408 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	showitemdescription
# 409 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_RewardA_Text_0, MSGBOX_YESNO
# 410 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_RewardB_1
# 415 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	hideitemdescription
# 416 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto SilversunCity_BlindOrphanage_Reward
	return

SilversunCity_BlindOrphanage_RewardB_1:
# 411 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	hideitemdescription
# 412 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 413 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto SilversunCity_BlindOrphanage_RewardEnd
	return


SilversunCity_BlindOrphanage_RewardEnd::
# 420 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 4
# 421 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_RewardEnd_Text_0, MSGBOX_NPC
	end


# 186 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0:
# 186 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	face_left
	step_end

# 201 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1:
# 201 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	jump_in_place_right
	step_end

SilversunCity_BlindOrphanage_PokedexGameStart_Text_0:
# 10 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I'm looking for a book on all the\n"
	.string "Pokémon in Cormoria! But I'm too short\l"
	.string "to touch the braille on the book\l"
	.string "covers...$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_1:
# 19 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "This book is hard to understand! I wish\n"
	.string "I could touch all these Pokémon so I\l"
	.string "know what they feel like. But the\l"
	.string "teacher says that's dangerous too!\l"
	.string "What if I touch a Pincurchin or a\l"
	.string "Corsola?$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_2:
# 24 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Is it you? Did you bring the book?$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_3:
# 26 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "...oh, okay. That's fine.$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_4:
# 32 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "{PLAYER} gave the boy a copy of\n"
	.string "POKEMON A TO Z.$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_5:
# 34 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Yayy! Thank you!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_6:
# 43 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Hey, you didn't bring a book!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_7:
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "{PLAYER} gave the boy a book.$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_8:
# 62 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Hey, this isn't it! I want the right\n"
	.string "book!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_9:
# 75 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I want a book on all the Pokémon in\n"
	.string "Cormoria!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_10:
# 80 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I'm looking for a book on all the\n"
	.string "Pokémon in Cormoria! But I'm too short\l"
	.string "to touch the braille on the book covers.\l"
	.string "If you find me one, can you bring it to\l"
	.string "me?$"

SilversunCity_Book1_Text_0:
# 91 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Take this book?$"

SilversunCity_Book1_Text_1:
# 94 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "{PLAYER} took a book from the shelf.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_0:
# 163 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Sheena is preparing for her next test.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_1:
# 171 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I work at the Silversun Theater, but on\n"
	.string "the weekends, I teach braille to the\l"
	.string "children here. It's very fulfilling!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_2:
# 181 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Sheena is about to take a\n"
	.string "braille test. Would you like to\l"
	.string "volunteer and help out?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_3:
# 184 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay.\n"
	.string "Sheena, let's continue.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_4:
# 194 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Excellent. Sheena has to read\n"
	.string "three sentences in braille correctly.\l"
	.string "I'll give Sheena the questions, and you\l"
	.string "keep a tally of her answers, okay?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_5:
# 198 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Are you ready Sheena?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_6:
# 203 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHENA: Yes!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_7:
# 206 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay then. Here's the first\n"
	.string "question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_8:
# 213 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "AN APPLIN A DAY KEEPS THE DOCTOR AT\l"
	.string "BAY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_9:
# 215 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Next question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_10:
# 223 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "ROLY POLY WITH ROLYCOLY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_11:
# 232 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\p"
	.string "FEEBAS EVOLVES WITH A MART PAIL.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_12:
# 235 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: And that's all the questions!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_13:
# 241 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: So how many did SHEEA get\n"
	.string "right?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_14:
# 242 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "0/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_15:
# 242 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "1/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_16:
# 242 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "2/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_17:
# 242 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "3/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_18:
# 245 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Yes...looks like Sheena needs\n"
	.string "more practice.\p"
	.string "TEACHER: Thanks for volunteering.\p"
	.string "SHEENA: Thank you!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_19:
# 255 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: That doesn't seem right. Are\n"
	.string "you sure you checked her answers\l"
	.string "correctly?$"

SilversunCity_BlindOrphanage_NPC_1_Text_0:
# 267 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I'm learning braille!$"

SilversunCity_BlindOrphanage_NPC_2_Text_0:
# 275 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Sometimes I imagine what colors look\n"
	.string "like when Ralts sends me warm thoughts.\l"
	.string "Is yellow warm?$"

SilversunCity_BlindOrphanage_NPC_3_Text_0:
# 283 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Many of our children may not see the\n"
	.string "world, but they feel it - especially\l"
	.string "when a Pokémon is by their side.$"

SilversunCity_BlindOrphanage_NPC_5_Text_0:
# 291 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I gave my Noibat to the orphanage. Now\n"
	.string "it helps the kids walk around at night.$"

SilversunCity_BlindOrphanage_NPC_6_Text_0:
# 299 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I listen to people's footsteps. Yours\n"
	.string "sound kind of...bouncy. Are you happy\l"
	.string "today?$"

SilversunCity_BlindOrphanage_Ralts_Text_0:
# 306 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Ralts is focused intently on its\n"
	.string "child...perhaps its sending some warm\l"
	.string "thoughts across.$"

SilversunCity_BlindOrphanage_Noibat_Text_0:
# 312 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Noibat looks bored...it must be waiting\n"
	.string "for night-time!$"

SilversunCity_BlindOrphanage_Furfrou_Text_0:
# 318 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Furfrou barks! And barks again!$"

SilversunCity_BlindOrphanage_OldManQuest_Text_0:
# 341 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Thanks to the efforts of you and\n"
	.string "everyone else here, the children are\l"
	.string "doing well.$"

SilversunCity_BlindOrphanage_OldManQuest_Text_1:
# 345 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Ah, a visitor? You'll have to speak up,\n"
	.string "my ears aren't what they used to be...\p"
	.string "Welcome to my little dream. This\n"
	.string "place...it's more than walls and windows.\l"
	.string "It's where light finds those who've\l"
	.string "never seen it. They told me it was\l"
	.string "impossible. Blind children with Pokémon\l"
	.string "was too dangerous, they said. And yet,\l"
	.string "look around. There's more trust in these\l"
	.string "halls than in half the world.$"

SilversunCity_BlindOrphanage_OldManQuest_Text_2:
# 351 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "The orphanage is really impressed with\n"
	.string "your work, {PLAYER}. We're ever so\l"
	.string "grateful. Please accept something as a\l"
	.string "token of your time. Since we often\l"
	.string "receive donations, we have many things\l"
	.string "lying around.$"

SilversunCity_BlindOrphanage_OldManQuest_Text_3:
# 357 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "How's the volunteering going?$"

SilversunCity_BlindOrphanage_OldManQuest_Text_4:
# 363 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "You've got the look of someone with a\n"
	.string "kind heart - and strong legs. Both are\l"
	.string "useful around here. Tell me, would you\l"
	.string "consider helping out around the\l"
	.string "orphanage for a while? The children and\l"
	.string "their Pokémon could use a little extra\l"
	.string "care.$"

SilversunCity_BlindOrphanage_OldManQuest_Text_5:
# 365 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Excellent! Kindness like yours is what\n"
	.string "keeps us going. You won't have to do\l"
	.string "much - just lend a hand here and there.\l"
	.string "Please ask around for people in need of\l"
	.string "help. Come speak to me again once you're\l"
	.string "finished.$"

SilversunCity_BlindOrphanage_OldManQuest_Text_6:
# 371 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Oh well. Whenever you'd like to, we're\n"
	.string "always looking for help!$"

SilversunCity_BlindOrphanage_Reward_Text_0:
# 383 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Perhaps you may find one of these\n"
	.string "useful?$"

SilversunCity_BlindOrphanage_Reward_Text_1:
# 385 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Wise Glasses$"

SilversunCity_BlindOrphanage_Reward_Text_2:
# 385 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Muscle Band$"

SilversunCity_BlindOrphanage_RewardA_Text_0:
# 396 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Are you sure?$"

SilversunCity_BlindOrphanage_RewardEnd_Text_0:
# 421 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Please visit us again!$"
