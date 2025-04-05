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
# 65 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_PokedexGameStart_Text_9
# 66 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 1
# 67 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
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
# 61 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
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
# 72 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 73 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook1
# 74 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 75 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 77 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book1_2
SilversunCity_Book1_1:
# 86 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book1_2:
# 78 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 79 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book1_4
	goto SilversunCity_Book1_1

SilversunCity_Book1_4:
# 80 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 81 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 82 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book1_1


SilversunCity_Book2::
# 91 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 92 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook2
# 93 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 94 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 96 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book2_2
SilversunCity_Book2_1:
# 105 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book2_2:
# 97 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 98 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book2_4
	goto SilversunCity_Book2_1

SilversunCity_Book2_4:
# 99 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 100 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 101 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book2_1


SilversunCity_Book3::
# 110 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 111 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook3
# 112 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 113 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 115 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book3_2
SilversunCity_Book3_1:
# 124 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book3_2:
# 116 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 117 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book3_4
	goto SilversunCity_Book3_1

SilversunCity_Book3_4:
# 118 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 3
# 119 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 120 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book3_1


SilversunCity_Book4::
# 129 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 130 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_BrailleBook4
# 131 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 132 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 134 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_SILVERSUN_BRAILLE_BOOK, 1
	goto_if_eq SilversunCity_Book4_2
SilversunCity_Book4_1:
# 143 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_Book4_2:
# 135 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_0, MSGBOX_YESNO
# 136 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_Book4_4
	goto SilversunCity_Book4_1

SilversunCity_Book4_4:
# 137 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	setvar VAR_SILVERSUN_BRAILLE_BOOK, 2
# 138 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_Book1_Text_1
# 139 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	additem ITEM_ORPHANAGE_BOOK
	goto SilversunCity_Book4_1


SilversunCity_BlindOrphanage_BrailleGameStart::
# 149 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	lockall
# 150 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 151 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	goto_if_set FLAG_SILVERSUN_BRAILLE_1_DONE, SilversunCity_BlindOrphanage_BrailleGameStart_2
# 159 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_1, MSGBOX_YESNO
# 161 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_5
# 172 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_3
# 173 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 174 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 30
# 175 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 176 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_4
# 177 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 178 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 179 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 8, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1
# 180 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 24
# 181 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_5
# 182 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 183 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 184 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_6
# 185 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 188 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz1
# 189 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 190 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 191 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_7
# 192 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 193 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_8
# 194 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 198 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz2
# 199 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 200 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 201 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_9
# 202 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 203 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_8
# 204 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 207 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	braillemessage Silversun_Braille_Quiz3
# 208 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitbuttonpress
# 209 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	closebraillemessage
# 210 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_10
# 211 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 212 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 213 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_11
# 214 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 215 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	delay 16
# 216 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	faceplayer
# 219 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_12
# 220 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, SilversunCity_BlindOrphanage_BrailleGameStart_Text_13, SilversunCity_BlindOrphanage_BrailleGameStart_Text_14, SilversunCity_BlindOrphanage_BrailleGameStart_Text_15, SilversunCity_BlindOrphanage_BrailleGameStart_Text_16
# 222 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SilversunCity_BlindOrphanage_BrailleGameStart_8
# 225 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_18
SilversunCity_BlindOrphanage_BrailleGameStart_7:
# 228 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_2:
# 152 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_0
# 153 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 154 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitmovement 0
# 155 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
	end

SilversunCity_BlindOrphanage_BrailleGameStart_5:
# 162 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_2
# 163 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 164 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	applymovement 5, SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0
# 165 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	waitmovement 0
# 166 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	release
# 168 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	releaseall
	end

SilversunCity_BlindOrphanage_BrailleGameStart_8:
# 223 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	msgbox SilversunCity_BlindOrphanage_BrailleGameStart_Text_17
	goto SilversunCity_BlindOrphanage_BrailleGameStart_7


# 153 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_0:
# 153 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	face_left
	step_end

# 179 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
SilversunCity_BlindOrphanage_BrailleGameStart_Movement_1:
# 179 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
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
# 65 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "I'm looking for a book on all the {PKMN} in\n"
	.string "CORMORIA! But I'm too short to touch\l"
	.string "the braille on the book covers. If you\l"
	.string "find me one, can you bring it to me?$"

SilversunCity_Book1_Text_0:
# 78 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "Take this book?$"

SilversunCity_Book1_Text_1:
# 81 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "{PLAYER} took a book from the shelf.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_0:
# 152 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA is preparing for her next test.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_1:
# 159 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: SHEENA is about to take a\n"
	.string "braille test. Would you like to\l"
	.string "volunteer and help out?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_2:
# 162 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay.\n"
	.string "SHEENA, let's continue.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_3:
# 172 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Excellent. SHEENA has to read\n"
	.string "three sentences in braille correctly.\l"
	.string "I'll give SHEENA the questions, and you\l"
	.string "keep a tally of her answers, okay?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_4:
# 176 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Are you ready SHEENA?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_5:
# 181 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHENA: Yes!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_6:
# 184 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Okay then. Here's the first\n"
	.string "question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_7:
# 191 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "AN APPLIN A DAY KEEPS THE DOCTOR AT\l"
	.string "BAY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_8:
# 193 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Next question!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_9:
# 201 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\n"
	.string "ROLY POLY WITH ROLYCOLY.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_10:
# 210 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "SHEENA: I got it! I got it!\p"
	.string "FEEBAS EVOLVES WITH A MART PAIL.$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_11:
# 213 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: And that's all the questions!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_12:
# 219 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: So how many did SHEEA get\n"
	.string "right?$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_13:
# 220 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "0/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_14:
# 220 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "1/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_15:
# 220 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "2/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_16:
# 220 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "3/3$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_17:
# 223 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: Yes...looks like SHEENA needs\n"
	.string "more practice.\p"
	.string "TEACHER: Thanks for volunteering.\p"
	.string "SHEENA: Thank you!$"

SilversunCity_BlindOrphanage_BrailleGameStart_Text_18:
# 225 "data//maps/SilversunCity_BlindOrphanage/scripts.pory"
	.string "TEACHER: That doesn't seem right. Are\n"
	.string "you sure you checked her answers\l"
	.string "correctly?$"
