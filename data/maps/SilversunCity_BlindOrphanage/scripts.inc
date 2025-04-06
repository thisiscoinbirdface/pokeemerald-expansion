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
# 14 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 1
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_5
# 20 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 4
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_8
# 25 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 3
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_11
# 53 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 2
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_14
# 76 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_21
# 82 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_10
# 83 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 1
# 84 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_PokedexGameStart_2:
# 10 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_0
# 11 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	end

SilversunCity_BlindOrphanage_PokedexGameStart_5:
# 15 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_0
# 16 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	end

SilversunCity_BlindOrphanage_PokedexGameStart_8:
# 21 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_1
	end

SilversunCity_BlindOrphanage_PokedexGameStart_11:
# 26 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_2, MSGBOX_YESNO
# 27 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_17
# 31 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	checkitem ITEM_ORPHANAGE_BOOK
# 32 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_27
# 45 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_6
SilversunCity_BlindOrphanage_PokedexGameStart_16:
# 49 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_PokedexGameStart_14:
# 54 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_2, MSGBOX_YESNO
# 55 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_24
# 59 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	checkitem ITEM_ORPHANAGE_BOOK
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_30
# 68 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_6
SilversunCity_BlindOrphanage_PokedexGameStart_23:
# 72 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_PokedexGameStart_17:
# 28 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_3
	goto SilversunCity_BlindOrphanage_PokedexGameStart_16

SilversunCity_BlindOrphanage_PokedexGameStart_21:
# 77 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_9
# 78 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	end

SilversunCity_BlindOrphanage_PokedexGameStart_24:
# 56 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_3
	goto SilversunCity_BlindOrphanage_PokedexGameStart_23

SilversunCity_BlindOrphanage_PokedexGameStart_27:
# 33 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	removeitem ITEM_ORPHANAGE_BOOK
# 34 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_4, MSGBOX_SIGN
# 35 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 36 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_5
# 37 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 38 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 4
# 41 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto_if_set FLAG_SILVERSUN_BRAILLE_1_DONE, SilversunCity_BlindOrphanage_PokedexGameStart_33
	goto SilversunCity_BlindOrphanage_PokedexGameStart_16

SilversunCity_BlindOrphanage_PokedexGameStart_30:
# 61 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	removeitem ITEM_ORPHANAGE_BOOK
# 62 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_7, MSGBOX_SIGN
# 63 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 64 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_8
# 65 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 66 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto SilversunCity_BlindOrphanage_PokedexGameStart_23

SilversunCity_BlindOrphanage_PokedexGameStart_33:
# 42 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 3
	goto SilversunCity_BlindOrphanage_PokedexGameStart_16


SilversunCity_Book1::
# 89 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 90 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook1
# 91 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 92 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 94 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book1_2
SilversunCity_Book1_1:
# 103 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book1_2:
# 95 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 96 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book1_4
	goto SilversunCity_Book1_1

SilversunCity_Book1_4:
# 97 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 98 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 99 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book1_1


SilversunCity_Book2::
# 108 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 109 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook2
# 110 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 111 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 113 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book2_2
SilversunCity_Book2_1:
# 122 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book2_2:
# 114 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 115 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book2_4
	goto SilversunCity_Book2_1

SilversunCity_Book2_4:
# 116 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 117 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 118 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book2_1


SilversunCity_Book3::
# 127 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 128 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook3
# 129 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 130 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 132 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book3_2
SilversunCity_Book3_1:
# 141 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book3_2:
# 133 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 134 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book3_4
	goto SilversunCity_Book3_1

SilversunCity_Book3_4:
# 135 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 3
# 136 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 137 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book3_1


SilversunCity_Book4::
# 146 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 147 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook4
# 148 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 149 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 151 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book4_2
SilversunCity_Book4_1:
# 160 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book4_2:
# 152 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 153 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book4_4
	goto SilversunCity_Book4_1

SilversunCity_Book4_4:
# 154 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 155 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 156 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book4_1


SilversunCity_BlindOrphanage_BrailleGameStart::
# 166 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 167 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 169 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 0
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_2
# 174 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 1
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_5
# 180 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto_if_set FLAG_SILVERSUN_BRAILLE_1_DONE, SilversunCity_BlindOrphanage_BrailleGameStart_8
# 188 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_2, MSGBOX_YESNO
# 190 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_11
# 201 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_4
# 202 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 203 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 30
# 204 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 205 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_5
# 206 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 207 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 208 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 8, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1
# 209 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 210 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_6
# 211 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 212 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 213 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_7
# 214 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 217 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz1
# 218 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 219 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 220 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_8
# 221 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 222 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_9
# 223 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 227 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz2
# 228 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 229 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 230 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_10
# 231 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 232 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_9
# 233 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 236 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz3
# 237 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 238 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 239 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_11
# 240 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 241 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 242 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_12
# 243 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 244 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 245 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 248 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_13
# 249 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_BlindOrphanage_BrailleGameStart_Text_14, SilversunCity_BlindOrphanage_BrailleGameStart_Text_15, SilversunCity_BlindOrphanage_BrailleGameStart_Text_16, SilversunCity_BlindOrphanage_BrailleGameStart_Text_17
# 251 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_14
# 261 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_19
SilversunCity_BlindOrphanage_BrailleGameStart_13:
# 264 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_2:
# 170 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_0
# 171 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	end

SilversunCity_BlindOrphanage_BrailleGameStart_5:
# 175 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_0
# 176 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	end

SilversunCity_BlindOrphanage_BrailleGameStart_8:
# 181 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_1
# 182 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 183 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitmovement 0
# 184 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	end

SilversunCity_BlindOrphanage_BrailleGameStart_11:
# 191 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_3
# 192 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 193 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 194 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitmovement 0
# 195 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 197 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_14:
# 252 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_18
# 253 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 256 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 4
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_17
	goto SilversunCity_BlindOrphanage_BrailleGameStart_13

SilversunCity_BlindOrphanage_BrailleGameStart_17:
# 257 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 3
	goto SilversunCity_BlindOrphanage_BrailleGameStart_13


SilversunCity_BlindOrphanage_NPC_1::
# 271 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 272 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 273 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_NPC_1_Text_0
# 274 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_NPC_2::
# 279 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 280 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 281 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_NPC_2_Text_0
# 282 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_NPC_3::
# 287 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 288 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 289 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_NPC_3_Text_0
# 290 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_NPC_5::
# 295 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 296 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 297 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_NPC_5_Text_0
# 298 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_NPC_6::
# 303 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 304 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 305 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_NPC_6_Text_0
# 306 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_Ralts::
# 311 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 312 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 313 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_Ralts_Text_0
# 314 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_Noibat::
# 319 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 320 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	playmoncry SPECIES_NOIBAT, CRY_MODE_NORMAL
# 321 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_Noibat_Text_0
# 322 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_Furfrou::
# 327 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 328 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 329 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_Furfrou_Text_0
# 330 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end


SilversunCity_BlindOrphanage_OldManQuest::
# 349 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 350 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 352 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 4
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_2
SilversunCity_BlindOrphanage_OldManQuest_1:
# 356 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 0
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_5
SilversunCity_BlindOrphanage_OldManQuest_4:
# 362 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 3
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_8
SilversunCity_BlindOrphanage_OldManQuest_7:
# 372 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 2
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_11
SilversunCity_BlindOrphanage_OldManQuest_10:
# 378 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 1
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_14
SilversunCity_BlindOrphanage_OldManQuest_13:
# 392 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_OldManQuest_2:
# 353 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_0
	goto SilversunCity_BlindOrphanage_OldManQuest_1

SilversunCity_BlindOrphanage_OldManQuest_5:
# 357 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_1
# 358 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 1
# 359 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
	goto SilversunCity_BlindOrphanage_OldManQuest_4

SilversunCity_BlindOrphanage_OldManQuest_8:
# 363 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_2
# 364 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 368 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 4
	goto SilversunCity_BlindOrphanage_OldManQuest_7

SilversunCity_BlindOrphanage_OldManQuest_11:
# 373 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_3
# 374 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	goto SilversunCity_BlindOrphanage_OldManQuest_10

SilversunCity_BlindOrphanage_OldManQuest_14:
# 379 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_4, MSGBOX_YESNO
# 380 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_OldManQuest_16
# 388 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_6
	goto SilversunCity_BlindOrphanage_OldManQuest_13

SilversunCity_BlindOrphanage_OldManQuest_16:
# 381 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_OldManQuest_Text_5
# 382 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 383 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 385 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_ORPHANAGE_MAINQUEST, 2
	goto SilversunCity_BlindOrphanage_OldManQuest_13


# 182 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0:
# 182 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	face_left
	step_end

# 208 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1:
# 208 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	jump_in_place_right
	step_end

SilversunCity_BlindOrphanage_PokedexGameStart_Text_0:
# 10 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I'm looking for a book on all the {PKMN} in\n"
	.string "Cormoria! But I'm too short to touch\l"
	.string "the braille on the book covers...$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_1:
# 21 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "This book is hard to understand! I wish\n"
	.string "I could touch all these {PKMN} so I know\l"
	.string "what they feel like. But the teacher\l"
	.string "says that's dangerous too! What if I\l"
	.string "touch a PINCURCHIN or a CORSOLA?$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_2:
# 26 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Is it you? Did you bring the book?$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_3:
# 28 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "...oh, okay. That's fine.$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_4:
# 34 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "{PLAYER} gave the boy a copy of\n"
	.string "POKEMON A TO Z.$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_5:
# 36 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Yayy! Thank you!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_6:
# 45 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Hey, you didn't bring a book!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_7:
# 62 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "{PLAYER} gave the boy a book.$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_8:
# 64 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Hey, this isn't it! I want the right\n"
	.string "book!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_9:
# 77 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I want a book on all the {PKMN} in Cormoria!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_10:
# 82 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I'm looking for a book on all the {PKMN} in\n"
	.string "Cormoria! But I'm too short to touch\l"
	.string "the braille on the book covers. If you\l"
	.string "find me one, can you bring it to me?$"

SilversunCity_Book1_Text_0:
# 95 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Take this book?$"

SilversunCity_Book1_Text_1:
# 98 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "{PLAYER} took a book from the shelf.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_0:
# 170 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I work at the SILVERSUN THEATRE, but\n"
	.string "on the weekends, I teach braille to the\l"
	.string "children here. It's very fulfilling!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_1:
# 181 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA is preparing for her next test.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_2:
# 188 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: SHEENA is about to take a\n"
	.string "braille test. Would you like to\l"
	.string "volunteer and help out?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_3:
# 191 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay.\n"
	.string "SHEENA, let's continue.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_4:
# 201 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Excellent. SHEENA has to read\n"
	.string "three sentences in braille correctly.\l"
	.string "I'll give SHEENA the questions, and you\l"
	.string "keep a tally of her answers, okay?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_5:
# 205 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Are you ready SHEENA?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_6:
# 210 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHENA: Yes!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_7:
# 213 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay then. Here's the first\n"
	.string "question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_8:
# 220 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "AN APPLIN A DAY KEEPS THE DOCTOR AT\l"
	.string "BAY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_9:
# 222 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Next question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_10:
# 230 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "ROLY POLY WITH ROLYCOLY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_11:
# 239 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\p"
	.string "FEEBAS EVOLVES WITH A MART PAIL.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_12:
# 242 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: And that's all the questions!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_13:
# 248 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: So how many did SHEEA get\n"
	.string "right?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_14:
# 249 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "0/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_15:
# 249 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "1/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_16:
# 249 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "2/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_17:
# 249 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "3/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_18:
# 252 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Yes...looks like SHEENA needs\n"
	.string "more practice.\p"
	.string "TEACHER: Thanks for volunteering.\p"
	.string "SHEENA: Thank you!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_19:
# 261 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: That doesn't seem right. Are\n"
	.string "you sure you checked her answers\l"
	.string "correctly?$"

SilversunCity_BlindOrphanage_NPC_1_Text_0:
# 273 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I'm learning braille!$"

SilversunCity_BlindOrphanage_NPC_2_Text_0:
# 281 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Sometimes I imagine what colors look\n"
	.string "like when RALTS sends me warm thoughts.\l"
	.string "Is yellow warm?$"

SilversunCity_BlindOrphanage_NPC_3_Text_0:
# 289 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Many of our children may not see the\n"
	.string "world, but they feel it - especially\l"
	.string "when a Pokemon is by their side.$"

SilversunCity_BlindOrphanage_NPC_5_Text_0:
# 297 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I gave my NOIBAT to the orphanage. Now\n"
	.string "it helps the kids walk around at night.$"

SilversunCity_BlindOrphanage_NPC_6_Text_0:
# 305 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I listen to people's footsteps. Yours\n"
	.string "sound kind of...bouncy. Are you happy\l"
	.string "today?$"

SilversunCity_BlindOrphanage_Ralts_Text_0:
# 313 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "RALTS is focused intently on its\n"
	.string "child...perhaps its sending some warm\l"
	.string "thoughts across.$"

SilversunCity_BlindOrphanage_Noibat_Text_0:
# 321 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "NOIBAT looks bored...it must be waiting\n"
	.string "for night-time!$"

SilversunCity_BlindOrphanage_Furfrou_Text_0:
# 329 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "FURFROU barks! And barks again!$"

SilversunCity_BlindOrphanage_OldManQuest_Text_0:
# 353 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Thanks to the efforts of you and\n"
	.string "everyone else here, the children are\l"
	.string "doing well.$"

SilversunCity_BlindOrphanage_OldManQuest_Text_1:
# 357 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Ah, a visitor? You'll have to speak up,\n"
	.string "my ears aren't what they used to be...\p"
	.string "Welcome to my little dream. This\n"
	.string "place...it's more than walls and windows.\l"
	.string "It's where light finds those who've\l"
	.string "never seen it. They told me it was\l"
	.string "impossible. 'Blind children with\l"
	.string "Pokémon? Dangerous!' they said. And\l"
	.string "yet, look around. There's more trust in\l"
	.string "these halls than in half the world.$"

SilversunCity_BlindOrphanage_OldManQuest_Text_2:
# 363 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "The orphanage is really impressed with\n"
	.string "your work, {PLAYER}. We're ever so\l"
	.string "grateful. Please accept something as a\l"
	.string "token of your time.$"

SilversunCity_BlindOrphanage_OldManQuest_Text_3:
# 373 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "How's the volunteering going?$"

SilversunCity_BlindOrphanage_OldManQuest_Text_4:
# 379 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "You've got the look of someone with a\n"
	.string "kind heart - and strong legs. Both are\l"
	.string "useful around here. Tell me, would you\l"
	.string "consider helping out around the\l"
	.string "orphanage for a while? The children and\l"
	.string "their Pokémon could use a little extra\l"
	.string "care.$"

SilversunCity_BlindOrphanage_OldManQuest_Text_5:
# 381 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Excellent! Kindness like yours is what\n"
	.string "keeps us going. You won't have to do\l"
	.string "much - just lend a hand here and there.\l"
	.string "Please ask around for people in need of\l"
	.string "help. Come speak to me again once you're\l"
	.string "finished.$"

SilversunCity_BlindOrphanage_OldManQuest_Text_6:
# 388 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Oh well. Whenever you'd like to, we're\n"
	.string "always looking for help!$"
