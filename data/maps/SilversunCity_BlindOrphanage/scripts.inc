SilversunCity_BlindOrphanage_MapScripts::
	.byte 0


SilversunCity_BlindOrphanage_PokedexGameStart::
# 5 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 6 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 8 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 4
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_2
# 13 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 3
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_5
# 36 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 2
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_8
# 59 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_15
# 64 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_9
# 65 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 1
# 66 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_PokedexGameStart_2:
# 9 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_0
	end

SilversunCity_BlindOrphanage_PokedexGameStart_5:
# 14 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_1, MSGBOX_YESNO
# 15 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_11
# 19 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	checkitem ITEM_ORPHANAGE_BOOK
# 20 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_21
# 28 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_5
SilversunCity_BlindOrphanage_PokedexGameStart_10:
# 32 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_PokedexGameStart_8:
# 37 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_1, MSGBOX_YESNO
# 38 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_18
# 42 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	checkitem ITEM_ORPHANAGE_BOOK
# 43 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_PokedexGameStart_24
# 51 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_5
SilversunCity_BlindOrphanage_PokedexGameStart_17:
# 55 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_PokedexGameStart_11:
# 16 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_2
	goto SilversunCity_BlindOrphanage_PokedexGameStart_10

SilversunCity_BlindOrphanage_PokedexGameStart_15:
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_8
	end

SilversunCity_BlindOrphanage_PokedexGameStart_18:
# 39 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_2
	goto SilversunCity_BlindOrphanage_PokedexGameStart_17

SilversunCity_BlindOrphanage_PokedexGameStart_21:
# 21 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	removeitem ITEM_ORPHANAGE_BOOK
# 22 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_3, MSGBOX_SIGN
# 23 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 24 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_4
# 25 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 26 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 4
	goto SilversunCity_BlindOrphanage_PokedexGameStart_10

SilversunCity_BlindOrphanage_PokedexGameStart_24:
# 44 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	removeitem ITEM_ORPHANAGE_BOOK
# 45 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_6, MSGBOX_SIGN
# 46 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 47 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_7
# 48 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 49 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto SilversunCity_BlindOrphanage_PokedexGameStart_17


SilversunCity_Book1::
# 71 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 72 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook1
# 73 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 74 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 76 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book1_2
SilversunCity_Book1_1:
# 85 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book1_2:
# 77 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 78 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book1_4
	goto SilversunCity_Book1_1

SilversunCity_Book1_4:
# 79 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 80 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 81 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book1_1


SilversunCity_Book2::
# 90 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 91 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook2
# 92 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 93 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 95 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book2_2
SilversunCity_Book2_1:
# 104 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book2_2:
# 96 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 97 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book2_4
	goto SilversunCity_Book2_1

SilversunCity_Book2_4:
# 98 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 99 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 100 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book2_1


SilversunCity_Book3::
# 109 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 110 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook3
# 111 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 112 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 114 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book3_2
SilversunCity_Book3_1:
# 123 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book3_2:
# 115 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 116 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book3_4
	goto SilversunCity_Book3_1

SilversunCity_Book3_4:
# 117 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 3
# 118 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 119 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book3_1


SilversunCity_Book4::
# 128 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 129 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook4
# 130 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 131 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 133 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book4_2
SilversunCity_Book4_1:
# 142 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book4_2:
# 134 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 135 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book4_4
	goto SilversunCity_Book4_1

SilversunCity_Book4_4:
# 136 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 137 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 138 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book4_1


SilversunCity_BlindOrphanage_BrailleGameStart::
# 148 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 149 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 150 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto_if_set FLAG_SILVERSUN_BRAILLE_1_DONE, SilversunCity_BlindOrphanage_BrailleGameStart_2
# 158 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_1, MSGBOX_YESNO
# 160 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_5
# 171 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_3
# 172 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 173 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 30
# 174 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 175 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_4
# 176 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 177 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 178 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 8, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1
# 179 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 180 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_5
# 181 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 182 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 183 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_6
# 184 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 187 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz1
# 188 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 189 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 190 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_7
# 191 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 192 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_8
# 193 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 197 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz2
# 198 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 199 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 200 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_9
# 201 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 202 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_8
# 203 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 206 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz3
# 207 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 208 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 209 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_10
# 210 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 211 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 212 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_11
# 213 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 214 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 215 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 218 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_12
# 219 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_BlindOrphanage_BrailleGameStart_Text_13, SilversunCity_BlindOrphanage_BrailleGameStart_Text_14, SilversunCity_BlindOrphanage_BrailleGameStart_Text_15, SilversunCity_BlindOrphanage_BrailleGameStart_Text_16
# 221 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_8
# 224 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_18
SilversunCity_BlindOrphanage_BrailleGameStart_7:
# 227 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_2:
# 151 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_0
# 152 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 153 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitmovement 0
# 154 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	end

SilversunCity_BlindOrphanage_BrailleGameStart_5:
# 161 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_2
# 162 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 163 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 164 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitmovement 0
# 165 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 167 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_8:
# 222 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_17
	goto SilversunCity_BlindOrphanage_BrailleGameStart_7


# 152 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0:
# 152 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	face_left
	step_end

# 178 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1:
# 178 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	jump_in_place_right
	step_end

SilversunCity_BlindOrphanage_PokedexGameStart_Text_0:
# 9 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "This book is hard to understand! I wish\n"
	.string "I could touch all these {PKMN} so I know\l"
	.string "what they feel like. But the teacher\l"
	.string "says that's dangerous too! What if I\l"
	.string "touch a PINCURCHIN or a CORSOLA?$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_1:
# 14 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Is it you? Did you bring the book?$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_2:
# 16 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "...oh, okay. That's fine.$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_3:
# 22 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "{PLAYER} gave the boy a copy of\n"
	.string "POKEMON A TO Z.$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_4:
# 24 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Yayy! Thank you!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_5:
# 28 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Hey, you didn't bring a book!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_6:
# 45 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "{PLAYER} gave the boy a book.$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_7:
# 47 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Hey, this isn't it! I want the right\n"
	.string "book!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_8:
# 60 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I want a book on all the {PKMN} in\n"
	.string "CORMORIA!$"

SilversunCity_BlindOrphanage_PokedexGameStart_Text_9:
# 64 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I'm looking for a book on all the {PKMN} in\n"
	.string "CORMORIA! But I'm too short to touch\l"
	.string "the braille on the book covers. If you\l"
	.string "find me one, can you bring it to me?$"

SilversunCity_Book1_Text_0:
# 77 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Take this book?$"

SilversunCity_Book1_Text_1:
# 80 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "{PLAYER} took a book from the shelf.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_0:
# 151 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA is preparing for her next test.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_1:
# 158 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: SHEENA is about to take a\n"
	.string "braille test. Would you like to\l"
	.string "volunteer and help out?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_2:
# 161 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay.\n"
	.string "SHEENA, let's continue.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_3:
# 171 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Excellent. SHEENA has to read\n"
	.string "three sentences in braille correctly.\l"
	.string "I'll give SHEENA the questions, and you\l"
	.string "keep a tally of her answers, okay?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_4:
# 175 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Are you ready SHEENA?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_5:
# 180 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHENA: Yes!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_6:
# 183 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay then. Here's the first\n"
	.string "question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_7:
# 190 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "AN APPLIN A DAY KEEPS THE DOCTOR AT\l"
	.string "BAY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_8:
# 192 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Next question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_9:
# 200 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "ROLY POLY WITH ROLYCOLY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_10:
# 209 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\p"
	.string "FEEBAS EVOLVES WITH A MART PAIL.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_11:
# 212 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: And that's all the questions!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_12:
# 218 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: So how many did SHEEA get\n"
	.string "right?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_13:
# 219 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "0/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_14:
# 219 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "1/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_15:
# 219 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "2/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_16:
# 219 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "3/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_17:
# 222 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Yes...looks like SHEENA needs\n"
	.string "more practice.\p"
	.string "TEACHER: Thanks for volunteering.\p"
	.string "SHEENA: Thank you!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_18:
# 224 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: That doesn't seem right. Are\n"
	.string "you sure you checked her answers\l"
	.string "correctly?$"
