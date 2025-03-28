# 1 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"

# 2 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
    .set LOCALID_KOHLA, 16

GalecrestCity_DetectiveAcademy_MapScripts::
	.byte 0


GalecrestCity_DetectiveAcademy_EventScript_Kohla::
# 11 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 15 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0
# 16 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 18 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0
# 19 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 20 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 24
# 21 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_1
# 22 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_1
# 26 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 27 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0
# 29 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_2
# 30 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_2
# 33 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 34 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	removeobject LOCALID_KOHLA
# 35 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_DETECTIVE_ACAD_KOHLA
# 37 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Breech::
# 44 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 45 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 46 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Breech_Text_0
# 47 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 13, GalecrestCity_DetectiveAcademy_Breech_Movement_0
# 48 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Clefairy::
# 52 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 53 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_0
# 54 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Receptionist::
# 67 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 68 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 69 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Text_0
# 70 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
# 72 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Receptionist_Multichoice::
# 77 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_0
# 78 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_1, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_2, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_3
# 80 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_2
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_1:
# 86 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_5
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_4:
# 90 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_8
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_7:
# 94 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_2:
# 81 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_4
# 82 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 83 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_1

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_5:
# 87 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_4

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_8:
# 91 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_7


GalecrestCity_DetectiveAcademy_Receptionist_StudentID::
# 99 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 101 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_2
# 105 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_1
# 106 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 107 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	showmoneybox 0, 0
# 108 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_2, MSGBOX_YESNO
# 110 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_5
# 117 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1:
# 122 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_2:
# 102 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_0
# 103 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_5:
# 111 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_3
# 112 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	giveitem ITEM_DETECTIVE_STUDENT_ID
# 113 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	removemoney 1000
# 114 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_4
# 115 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1


GalecrestCity_DetectiveAcademy_Receptionist_Charcadet::
# 128 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_0
# 130 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_FAKEID, GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_2
# 141 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 143 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_8
# 147 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_5
# 148 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1:
# 153 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_2:
# 131 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_CHARCADET_GET, GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_5
# 134 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_2
# 135 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	givemon SPECIES_CHARCADET, 20
# 136 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_3
# 137 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 138 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_CHARCADET_GET
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_5:
# 132 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_1
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_8:
# 144 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_4
# 145 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1


GalecrestCity_DetectiveAcademy_Guard::
# 160 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 161 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 162 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Guard_Text_0
# 163 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Armarouge::
# 168 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 169 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 170 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 171 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Text_0
# 172 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 22, GalecrestCity_DetectiveAcademy_Armarouge_Movement_0
# 173 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 174 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_NPC1::
# 180 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 181 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 182 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC1_Text_0
# 183 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC2::
# 187 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 188 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 189 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC2_Text_0
# 190 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC3::
# 194 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 195 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 196 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC3_Text_0
# 197 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC4::
# 201 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 202 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 203 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC4_Text_0
# 204 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC5::
# 208 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 209 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 210 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC5_Text_0
# 211 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC6::
# 217 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 218 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 219 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC6_Text_0
# 220 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC7::
# 227 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 228 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 229 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC7_Text_0
# 230 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 10, GalecrestCity_DetectiveAcademy_NPC7_Movement_0
# 231 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 232 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC8::
# 236 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 237 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 238 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	trainerbattle_single TRAINER_GALECREST_DETECTIVE_A, GalecrestCity_DetectiveAcademy_NPC8_Text_0, GalecrestCity_DetectiveAcademy_NPC8_Text_1
# 239 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC8_Text_2
# 240 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 241 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 11, GalecrestCity_DetectiveAcademy_Breech_Movement_0
# 242 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	end


GalecrestCity_DetectiveAcademy_NPC9::
# 248 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 249 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 250 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC9_Text_0
# 251 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC10::
# 255 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 256 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC10_Text_0
# 257 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC11::
# 261 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 262 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 263 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC11_Text_0
# 264 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC12::
# 268 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 269 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 270 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC12_Text_0
# 271 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Charcadet_Battle::
# 278 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 279 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 280 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 18, GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0
# 281 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 282 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0
# 283 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Yamper_Battle::
# 288 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 289 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_YAMPER, CRY_MODE_NORMAL
# 290 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 19, GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0
# 291 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 292 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0
# 293 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Charcadet_A::
# 299 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 300 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 301 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 302 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0
	return


# 18 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0:
# 18 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_up
	step_end

# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_1:
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_right
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_left
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_2:
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
	step_end

# 47 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Breech_Movement_0:
# 47 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_left
	step_end

# 172 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Movement_0:
# 172 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 230 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_NPC7_Movement_0:
# 230 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_right
	step_end

# 280 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0:
# 280 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	jump_in_place_left
	step_end

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0:
# 15 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "KOHLA: I'm an orphan. As a child I\n"
	.string "learned to rely on myself.\p"
	.string "I saw a lot of bad stuff growing up, so I\n"
	.string "wanted to become a detective.\p"
	.string "So I did.\p"
	.string "I graduated from this academy at the\n"
	.string "top of my class...\p"
	.string "...but it wasn't enough.$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_1:
# 21 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "{PLAYER}, it was you who stopped Team\n"
	.string "Somber from getting the dreamstone.\p"
	.string "Thanks to you, I learned something.\n"
	.string "Being the Ace Rookie isn't enough. To\l"
	.string "stop Team Somber - no, to stop all crime,\l"
	.string "I need to become stronger than the\l"
	.string "criminals.\p"
	.string "Stronger...at any cost.$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_2:
# 29 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Silversun City is east of here, but the\n"
	.string "path is blocked by rocks. The Gym\l"
	.string "Leader here can teach your {PKMN} ROCK\l"
	.string "SMASH, which will let you pass.\p"
	.string "See you in Silversun City...or sooner\n"
	.string "than that, I think.$"

GalecrestCity_DetectiveAcademy_Breech_Text_0:
# 46 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "It's you {PLAYER}! How are you?\n"
	.string "CLEFAIRY and I are sitting in this class\l"
	.string "on {PKMN} battles. Yep, to be a good\l"
	.string "detective, you need to be a strong\l"
	.string "trainer too!$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_0:
# 53 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "CLEFAIRY is listening intently to the\n"
	.string "teacher. A good student!$"

GalecrestCity_DetectiveAcademy_Receptionist_Text_0:
# 69 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Hello, trainer! Welcome to the\n"
	.string "DETECTIVE ACADEMY!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_0:
# 77 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "How many I help you today?$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_1:
# 78 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Tell me about the Academy!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_2:
# 78 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Can I get a student ID?$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_3:
# 78 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I want a CHARCADET!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_4:
# 81 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "The GALECREST DETECTIVE ACADEMY is\n"
	.string "one of the most prestigious schools in\l"
	.string "all of CORMORIA! Our top-caliber\l"
	.string "candidates train and study to become\l"
	.string "the very best detectives. Many go on to\l"
	.string "join the police force or pursue the\l"
	.string "path of a trainer.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_0:
# 102 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, you already have a student ID.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_1:
# 105 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Unfortunately only students are\n"
	.string "allowed IDs and enrolment is closed for\l"
	.string "the year. However, we do offer day\l"
	.string "passes to prospective students for a\l"
	.string "nominal fee of 1000.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_2:
# 108 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Would you like to purchase one for\n"
	.string "1000?$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_3:
# 111 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Very good! Here's your temporary\n"
	.string "student ID.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_4:
# 114 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "With this ID, you'll be able to access\n"
	.string "the academy facilities as if you were a\l"
	.string "normal student. You can even sit in any\l"
	.string "ongoing classes!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_0:
# 128 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Can I see your student ID please?\p"
	.string "...$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_1:
# 132 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You've already received your\n"
	.string "CHARCADET. Please return to class!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_2:
# 134 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Everything seems to be in order. What\n"
	.string "happened - did they forget to give you\l"
	.string "your CHARCADET at the entrance\l"
	.string "ceremony? Well, no matter. Here you go!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_3:
# 136 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Please treat your CHARCADET with love\n"
	.string "and care!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_4:
# 144 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, as a temporary student, you're\n"
	.string "not eligible for a CHARCADET.$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_5:
# 147 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, only students are eligible for a\n"
	.string "CHARCADET.$"

GalecrestCity_DetectiveAcademy_Guard_Text_0:
# 162 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Garden access is for students only.\n"
	.string "That ARMAROUGE won't let you in without\l"
	.string "a STUDENT ID!$"

GalecrestCity_DetectiveAcademy_Armarouge_Text_0:
# 171 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "ARMAROUGE leers down at you...and\n"
	.string "continues to look straight ahead.$"

GalecrestCity_DetectiveAcademy_NPC1_Text_0:
# 182 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Ooh! Ohh! Are the new class rankings\n"
	.string "out yet?$"

GalecrestCity_DetectiveAcademy_NPC2_Text_0:
# 189 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Every semester, the school ranks all\n"
	.string "the students. The top student is called\l"
	.string "the Ace Rookie! KOHLA held the title\l"
	.string "every semester, but he's graduated now,\l"
	.string "so the field is open again!$"

GalecrestCity_DetectiveAcademy_NPC3_Text_0:
# 196 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "All new students receive a CHARCADET\n"
	.string "as their first {PKMN}. It's the standard\l"
	.string "detective companion.$"

GalecrestCity_DetectiveAcademy_NPC4_Text_0:
# 203 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Since many rich folk live in GALECREST\n"
	.string "CITY, there's a lot of theft. New\l"
	.string "students are often handed smaller\l"
	.string "cases to solve as part of their field\l"
	.string "studies.$"

GalecrestCity_DetectiveAcademy_NPC5_Text_0:
# 210 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I'm going to join today! I'm so excited\n"
	.string "to get my CHARCADET and become an Ace\l"
	.string "Rookie!$"

GalecrestCity_DetectiveAcademy_NPC6_Text_0:
# 219 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Are you a student? You shouldn't be\n"
	.string "here if you aren't.$"

GalecrestCity_DetectiveAcademy_NPC7_Text_0:
# 229 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "We're battling to practice for our\n"
	.string "exams. It's very competitive here.\l"
	.string "Losers like you can't cut it.$"

GalecrestCity_DetectiveAcademy_NPC8_Text_0:
# 238 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Hey, you look weak.\n"
	.string "You'd be a good training\n"
	.string "dummy for my CHARCADET!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_1:
# 238 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "But you're not even a student!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_2:
# 239 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You may have beaten me, but I bet you\n"
	.string "can't beat KOHLA! He's the star of the\l"
	.string "Academy!$"

GalecrestCity_DetectiveAcademy_NPC9_Text_0:
# 250 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "These two only focus on battling. But\n"
	.string "true detectives can do a lot more! We\l"
	.string "have to investigate clues, interrogate\l"
	.string "suspects and disguise ourselves.$"

GalecrestCity_DetectiveAcademy_NPC10_Text_0:
# 256 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "...and as you can see here, according to\n"
	.string "the theory of...\p"
	.string "The teacher is engrossed in his lecture.$"

GalecrestCity_DetectiveAcademy_NPC11_Text_0:
# 263 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love this teacher's style! I wish he\n"
	.string "taught a more interesting subject.$"

GalecrestCity_DetectiveAcademy_NPC12_Text_0:
# 270 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love the topic but this teacher is so\n"
	.string "boring!$"

GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0:
# 282 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "CHARCADET is battling intensely!$"

GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0:
# 292 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "YAMPER's not backing down!$"

GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0:
# 302 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "CHARCADET is also curious about the\n"
	.string "class rankings!$"
