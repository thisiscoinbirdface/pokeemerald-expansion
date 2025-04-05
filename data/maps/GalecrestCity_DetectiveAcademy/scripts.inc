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
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 55 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_CLEFAIRY_ITEM, GalecrestCity_DetectiveAcademy_Clefairy_2
# 58 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_0
# 59 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 60 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 17, GalecrestCity_DetectiveAcademy_Clefairy_Movement_0
# 61 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 62 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_1
# 63 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 64 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_2
# 65 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 66 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 17, GalecrestCity_DetectiveAcademy_Breech_Movement_0
# 67 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 68 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_CLEFAIRY_ITEM
GalecrestCity_DetectiveAcademy_Clefairy_1:
# 71 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Clefairy_2:
# 56 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_0
	goto GalecrestCity_DetectiveAcademy_Clefairy_1


GalecrestCity_DetectiveAcademy_Receptionist::
# 85 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 86 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 87 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Text_0
# 88 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
# 90 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Receptionist_Multichoice::
# 95 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_0
# 96 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_1, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_2, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_3
# 98 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_2
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_1:
# 104 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_5
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_4:
# 108 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_8
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_7:
# 112 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_2:
# 99 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_4
# 100 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 101 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_1

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_5:
# 105 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_4

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_8:
# 109 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_7


GalecrestCity_DetectiveAcademy_Receptionist_StudentID::
# 117 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 119 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_2
# 123 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_1
# 124 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 125 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	showmoneybox 0, 0
# 126 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_2, MSGBOX_YESNO
# 128 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_5
# 144 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1:
# 149 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_2:
# 120 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_0
# 121 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_5:
# 129 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkmoney 1000
# 130 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_8
# 139 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_5
# 140 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 141 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_8:
# 131 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	hidemoneybox
# 132 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_3
# 133 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	giveitem ITEM_DETECTIVE_STUDENT_ID
# 134 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_STUDENTID_GET
# 135 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	removemoney 1000
# 136 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_4
# 137 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1


GalecrestCity_DetectiveAcademy_Receptionist_Charcadet::
# 155 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_0
	checkitem ITEM_FAKE_STUDENT_ID
# 0 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_2
# 169 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 171 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_8
# 175 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_6
# 176 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1:
# 181 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_2:
# 158 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_CHARCADET_GET, GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_5
# 161 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_2
# 162 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 163 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_3
# 164 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	call NicknamePartyMon
# 164 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_4
# 165 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 166 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_CHARCADET_GET
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_5:
# 159 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_1
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_8:
# 172 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_5
# 173 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1


GalecrestCity_DetectiveAcademy_Guard::
# 188 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 189 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 191 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Guard_2
# 194 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Guard_Text_1
GalecrestCity_DetectiveAcademy_Guard_1:
# 197 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Guard_2:
# 192 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Guard_Text_0
	goto GalecrestCity_DetectiveAcademy_Guard_1


GalecrestCity_DetectiveAcademy_Armarouge_Garden::
# 202 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 203 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 204 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 205 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Armarouge_Garden_2
# 211 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1
# 212 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 22, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1
# 213 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
GalecrestCity_DetectiveAcademy_Armarouge_Garden_1:
# 215 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Armarouge_Garden_2:
# 206 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0
# 207 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 208 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 22, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_0
# 209 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	goto GalecrestCity_DetectiveAcademy_Armarouge_Garden_1


GalecrestCity_DetectiveAcademy_Armarouge_Classroom::
# 220 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 221 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 222 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 223 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Armarouge_Classroom_2
# 229 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1
# 230 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 23, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1
# 231 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
GalecrestCity_DetectiveAcademy_Armarouge_Classroom_1:
# 233 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Armarouge_Classroom_2:
# 224 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0
# 225 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 226 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 23, GalecrestCity_DetectiveAcademy_Armarouge_Classroom_Movement_0
# 227 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	goto GalecrestCity_DetectiveAcademy_Armarouge_Classroom_1


GalecrestCity_DetectiveAcademy_NPC1::
# 238 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 239 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 240 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC1_Text_0
# 241 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC2::
# 245 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 246 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 247 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC2_Text_0
# 248 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC3::
# 252 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 253 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 254 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC3_Text_0
# 255 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC4::
# 259 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 260 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 261 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC4_Text_0
# 262 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC5::
# 266 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 267 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 268 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC5_Text_0
# 269 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC6::
# 275 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 276 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 277 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC6_Text_0
# 278 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC7::
# 285 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 286 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 287 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC7_Text_0
# 288 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 10, GalecrestCity_DetectiveAcademy_NPC7_Movement_0
# 289 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 290 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC8::
# 294 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 295 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 296 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	trainerbattle_single TRAINER_GALECREST_DETECTIVE_A, GalecrestCity_DetectiveAcademy_NPC8_Text_0, GalecrestCity_DetectiveAcademy_NPC8_Text_1
# 297 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC8_Text_2
# 298 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 299 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 11, GalecrestCity_DetectiveAcademy_Breech_Movement_0
# 300 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	end


GalecrestCity_DetectiveAcademy_NPC9::
# 306 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 307 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 308 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC9_Text_0
# 309 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC10::
# 313 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 314 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC10_Text_0
# 315 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC11::
# 319 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 320 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 321 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC11_Text_0
# 322 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC12::
# 326 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 327 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 328 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC12_Text_0
# 329 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Charcadet_Battle::
# 336 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 337 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 338 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 18, GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0
# 339 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 340 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0
# 341 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Yamper_Battle::
# 346 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 347 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_YAMPER, CRY_MODE_NORMAL
# 348 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 19, GalecrestCity_DetectiveAcademy_Yamper_Battle_Movement_0
# 349 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 350 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0
# 351 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Charcadet_A::
# 357 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 358 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 359 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 360 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0
# 361 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


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

# 60 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Clefairy_Movement_0:
# 60 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	emote_exclamation_mark
# 60 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
	step_end

# 208 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_0:
# 208 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_left
# 208 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 212 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1:
# 212 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 226 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Classroom_Movement_0:
# 226 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_right
# 226 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 288 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_NPC7_Movement_0:
# 288 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_right
	step_end

# 338 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0:
# 338 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	jump_in_place_left
	step_end

# 348 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Yamper_Battle_Movement_0:
# 348 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	jump_in_place_right
	step_end

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0:
# 15 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "KOHLA: I saw a lot of bad stuff growing\n"
	.string "up, so I wanted to become a detective.\p"
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
	.string "At the end of the day, it's all about how\n"
	.string "strong you are.$"

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
# 56 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "CLEFAIRY is extremely focused on the\n"
	.string "teacher. A good student!$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_1:
# 62 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "CLEFAIRY hands you an item...$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_2:
# 64 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "This must be the secret of CLEFAIRY's\n"
	.string "focus! Better not disturb her any\l"
	.string "further...thank you CLEFAIRY!$"

GalecrestCity_DetectiveAcademy_Receptionist_Text_0:
# 87 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Hello, trainer! Welcome to the\n"
	.string "DETECTIVE ACADEMY!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_0:
# 95 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "How many I help you today?$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_1:
# 96 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Tell me about the Academy!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_2:
# 96 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Can I get a student ID?$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_3:
# 96 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I want a CHARCADET!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_4:
# 99 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "The GALECREST DETECTIVE ACADEMY is\n"
	.string "one of the most prestigious schools in\l"
	.string "all of Cormoria! Our top-caliber\l"
	.string "candidates train and study to become\l"
	.string "the very best detectives. Many go on to\l"
	.string "join the police force or pursue the\l"
	.string "path of a trainer.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_0:
# 120 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, you already have a student ID.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_1:
# 123 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Unfortunately only students are\n"
	.string "allowed IDs and enrolment is closed for\l"
	.string "the year. However, we do offer day\l"
	.string "passes to prospective students for a\l"
	.string "nominal fee of 1000.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_2:
# 126 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Would you like to purchase one for\n"
	.string "1000?$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_3:
# 132 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Very good! Here's your temporary\n"
	.string "student ID.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_4:
# 136 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "With this ID, you'll be able to access\n"
	.string "the academy facilities as if you were a\l"
	.string "normal student. You can even sit in any\l"
	.string "ongoing classes!$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_5:
# 139 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, you don't have enough money.\n"
	.string "Please come back later!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_0:
# 155 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Can I see your student ID please?\p"
	.string "...$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_1:
# 159 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You've already received your\n"
	.string "CHARCADET. Please return to class!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_2:
# 161 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Everything seems to be in order. What\n"
	.string "happened - did they forget to give you\l"
	.string "your CHARCADET at the entrance\l"
	.string "ceremony? Well, no matter. Here you go!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_3:
# 163 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "The DETECTIVE ACADEMY has gifted you a\n"
	.string "CHARCADET!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_4:
# 164 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Please treat your CHARCADET with love\n"
	.string "and care!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_5:
# 172 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, as a temporary student, you're\n"
	.string "not eligible for a CHARCADET.$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_6:
# 175 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, only students are eligible for a\n"
	.string "CHARCADET.$"

GalecrestCity_DetectiveAcademy_Guard_Text_0:
# 192 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You got a one-day student ID? Maybe I\n"
	.string "should get one too...$"

GalecrestCity_DetectiveAcademy_Guard_Text_1:
# 194 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Garden access is for students only.\n"
	.string "That ARMAROUGE won't let you in without\l"
	.string "a STUDENT ID!$"

GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0:
# 206 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "ARMAROUGE leers down at you...and nods\n"
	.string "approvingly!$"

GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1:
# 211 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "ARMAROUGE leers down at you...and\n"
	.string "continues to look straight ahead.$"

GalecrestCity_DetectiveAcademy_NPC1_Text_0:
# 240 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Ooh! Ohh! Are the new class rankings\n"
	.string "out yet?$"

GalecrestCity_DetectiveAcademy_NPC2_Text_0:
# 247 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Every semester, the school ranks all\n"
	.string "the students. The top student is called\l"
	.string "the Ace Rookie! KOHLA held the title\l"
	.string "every semester, but he's graduated now,\l"
	.string "so the field is open again!$"

GalecrestCity_DetectiveAcademy_NPC3_Text_0:
# 254 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "All new students receive a CHARCADET\n"
	.string "as their first {PKMN}. It's the standard\l"
	.string "detective companion.$"

GalecrestCity_DetectiveAcademy_NPC4_Text_0:
# 261 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Since many rich folk live in Galecrest\n"
	.string "City, there's a lot of theft. New\l"
	.string "students are often handed smaller\l"
	.string "cases to solve as part of their field\l"
	.string "studies.$"

GalecrestCity_DetectiveAcademy_NPC5_Text_0:
# 268 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I'm going to join today! I'm so excited\n"
	.string "to get my CHARCADET and become an Ace\l"
	.string "Rookie!$"

GalecrestCity_DetectiveAcademy_NPC6_Text_0:
# 277 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Are you a student? You shouldn't be\n"
	.string "here if you aren't...oh, you are.$"

GalecrestCity_DetectiveAcademy_NPC7_Text_0:
# 287 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "We're battling to practice for our\n"
	.string "exams. It's very competitive here.\l"
	.string "Losers like you can't cut it.$"

GalecrestCity_DetectiveAcademy_NPC8_Text_0:
# 296 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Hey, you look weak. You'd be a good\n"
	.string "training dummy for my CHARCADET!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_1:
# 296 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "But you're not even a student!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_2:
# 297 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You may have beaten me, but I bet you\n"
	.string "can't beat KOHLA! He's the star of the\l"
	.string "Academy!$"

GalecrestCity_DetectiveAcademy_NPC9_Text_0:
# 308 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "These two only focus on battling. But\n"
	.string "true detectives can do a lot more! We\l"
	.string "have to investigate clues, interrogate\l"
	.string "suspects and disguise ourselves.$"

GalecrestCity_DetectiveAcademy_NPC10_Text_0:
# 314 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "...and as you can see here, according to\n"
	.string "the theory of...\p"
	.string "The teacher is engrossed in his lecture.$"

GalecrestCity_DetectiveAcademy_NPC11_Text_0:
# 321 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love this teacher's style! I wish he\n"
	.string "taught a more interesting subject.$"

GalecrestCity_DetectiveAcademy_NPC12_Text_0:
# 328 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love the topic but this teacher is so\n"
	.string "boring!$"

GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0:
# 340 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "CHARCADET is battling intensely!$"

GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0:
# 350 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "YAMPER's not backing down!$"

GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0:
# 360 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "CHARCADET is also curious about the\n"
	.string "class rankings!$"
