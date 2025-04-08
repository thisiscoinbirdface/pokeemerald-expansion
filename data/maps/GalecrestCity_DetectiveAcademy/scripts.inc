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
	faceplayer
# 62 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 63 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_1
# 64 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 65 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_2
# 66 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 67 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 17, GalecrestCity_DetectiveAcademy_Breech_Movement_0
# 68 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 69 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_CLEFAIRY_ITEM
GalecrestCity_DetectiveAcademy_Clefairy_1:
# 72 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Clefairy_2:
# 56 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_0
	goto GalecrestCity_DetectiveAcademy_Clefairy_1


GalecrestCity_DetectiveAcademy_Receptionist::
# 86 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 87 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 88 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Text_0
# 89 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
# 91 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Receptionist_Multichoice::
# 96 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_0
# 97 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_1, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_2, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_3
# 99 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_2
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_1:
# 106 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_5
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_4:
# 110 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_8
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_7:
# 114 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_2:
# 100 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_4
# 101 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 102 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 16
# 103 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_1

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_5:
# 107 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_4

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_8:
# 111 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_7


GalecrestCity_DetectiveAcademy_Receptionist_StudentID::
# 119 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 121 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_2
# 125 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_1
# 126 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 127 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 16
# 128 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	showmoneybox 0, 0
# 129 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_2, MSGBOX_YESNO
# 131 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_5
# 147 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1:
# 152 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_2:
# 122 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_0
# 123 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_5:
# 132 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkmoney 1000
# 133 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_8
# 142 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_5
# 143 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 144 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_8:
# 134 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	hidemoneybox
# 135 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_3
# 136 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	giveitem ITEM_DETECTIVE_STUDENT_ID
# 137 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_STUDENTID_GET
# 138 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	removemoney 1000
# 139 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_4
# 140 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1


GalecrestCity_DetectiveAcademy_Receptionist_Charcadet::
# 158 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_0
	checkitem ITEM_FAKE_STUDENT_ID
# 0 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_2
# 172 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 174 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_8
# 178 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_6
# 179 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1:
# 184 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_2:
# 161 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_CHARCADET_GET, GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_5
# 164 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_2
# 165 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 166 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_3
# 167 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	call NicknamePartyMon
# 167 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_4
# 168 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 169 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_CHARCADET_GET
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_5:
# 162 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_1
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_8:
# 175 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_5
# 176 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1


GalecrestCity_DetectiveAcademy_Guard::
# 191 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 192 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 194 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Guard_2
# 197 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Guard_Text_1
GalecrestCity_DetectiveAcademy_Guard_1:
# 200 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Guard_2:
# 195 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Guard_Text_0
	goto GalecrestCity_DetectiveAcademy_Guard_1


GalecrestCity_DetectiveAcademy_Armarouge_Garden::
# 205 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 206 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 207 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 208 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Armarouge_Garden_2
# 214 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1
# 215 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 22, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1
# 216 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
GalecrestCity_DetectiveAcademy_Armarouge_Garden_1:
# 218 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Armarouge_Garden_2:
# 209 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0
# 210 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 211 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 22, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_0
# 212 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	goto GalecrestCity_DetectiveAcademy_Armarouge_Garden_1


GalecrestCity_DetectiveAcademy_Armarouge_Classroom::
# 223 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 224 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 225 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 226 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Armarouge_Classroom_2
# 232 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1
# 233 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 23, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1
# 234 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
GalecrestCity_DetectiveAcademy_Armarouge_Classroom_1:
# 236 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Armarouge_Classroom_2:
# 227 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0
# 228 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 229 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 23, GalecrestCity_DetectiveAcademy_Armarouge_Classroom_Movement_0
# 230 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	goto GalecrestCity_DetectiveAcademy_Armarouge_Classroom_1


GalecrestCity_DetectiveAcademy_NPC1::
# 241 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 242 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 243 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC1_Text_0
# 244 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC2::
# 248 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 249 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 250 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC2_Text_0
# 251 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC3::
# 255 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 256 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 257 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC3_Text_0
# 258 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC4::
# 262 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 263 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 264 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC4_Text_0
# 265 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC5::
# 269 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 270 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 271 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC5_Text_0
# 272 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC6::
# 278 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 279 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 280 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC6_Text_0
# 281 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC7::
# 288 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 289 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 290 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC7_Text_0
# 291 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 10, GalecrestCity_DetectiveAcademy_NPC7_Movement_0
# 292 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 293 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC8::
# 297 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 298 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 299 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	trainerbattle_single TRAINER_GALECREST_DETECTIVE_A, GalecrestCity_DetectiveAcademy_NPC8_Text_0, GalecrestCity_DetectiveAcademy_NPC8_Text_1
# 300 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC8_Text_2
# 301 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 302 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 11, GalecrestCity_DetectiveAcademy_Breech_Movement_0
# 303 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	end


GalecrestCity_DetectiveAcademy_NPC9::
# 309 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 310 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 311 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC9_Text_0
# 312 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC10::
# 316 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 317 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC10_Text_0
# 318 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC11::
# 322 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 323 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 324 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC11_Text_0
# 325 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC12::
# 329 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 330 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 331 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC12_Text_0
# 332 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Charcadet_Battle::
# 339 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 340 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 341 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 18, GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0
# 342 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 343 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0
# 344 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Yamper_Battle::
# 349 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 350 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_YAMPER, CRY_MODE_NORMAL
# 351 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 19, GalecrestCity_DetectiveAcademy_Yamper_Battle_Movement_0
# 352 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 353 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0
# 354 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Charcadet_A::
# 360 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 361 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 362 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 363 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0
# 364 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
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
	walk_up
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_left
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
	step_end

# 211 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_0:
# 211 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_left
# 211 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 215 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1:
# 215 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 229 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Classroom_Movement_0:
# 229 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_right
# 229 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 291 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_NPC7_Movement_0:
# 291 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_right
	step_end

# 341 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0:
# 341 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	jump_in_place_left
	step_end

# 351 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Yamper_Battle_Movement_0:
# 351 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
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
	.string "KOHLA: {PLAYER}, it was you who\n"
	.string "stopped Team Somber from getting the\l"
	.string "dreamstone.\p"
	.string "Thanks to you, I learned something.\n"
	.string "Being the Ace Rookie isn't enough. To\l"
	.string "stop Team Somber - no, to stop all crime,\l"
	.string "I need to become stronger than the\l"
	.string "criminals.\p"
	.string "At the end of the day, it's all about how\n"
	.string "strong you are.$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_2:
# 29 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "KOHLA: Silversun City is east of here,\n"
	.string "but the path is blocked by rocks. If you\l"
	.string "beat the Gym Leader here, you'll be able\l"
	.string "to use the HM ROCK SMASH, which will let\l"
	.string "you pass.\p"
	.string "See you in Silversun City...or sooner\n"
	.string "than that, I think.$"

GalecrestCity_DetectiveAcademy_Breech_Text_0:
# 46 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "BREECH: It's you {PLAYER}! How are\n"
	.string "you? Clefairy and I are sitting in this\l"
	.string "class on Pokemon battles. Yep, to be a\l"
	.string "good detective, you need to be a strong\l"
	.string "trainer too!\p"
	.string "...\p"
	.string "BREECH: Not that Clefairy and I want to\n"
	.string "be detectives, haha! We're just lifelong\l"
	.string "learners.$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_0:
# 56 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Clefairy is extremely focused on the\n"
	.string "teacher. A good student!$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_1:
# 63 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Clefairy hands you an item...$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_2:
# 65 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "This must be the secret of Clefairy 's\n"
	.string "focus! Better not disturb her any\l"
	.string "further...thank you Clefairy!$"

GalecrestCity_DetectiveAcademy_Receptionist_Text_0:
# 88 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Hello, trainer! Welcome to the Detective\n"
	.string "Academy!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_0:
# 96 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "How many I help you today?$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_1:
# 97 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Tell me about the Academy!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_2:
# 97 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Can I get a student ID?$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_3:
# 97 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I want a Charcadet!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_4:
# 100 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "The Galecrest Detective Academy is one\n"
	.string "of the most prestigious schools in all\l"
	.string "of Cormoria! Our top-caliber candidates\l"
	.string "train and study to become the very\l"
	.string "best detectives. Many go on to join the\l"
	.string "police force or pursue the path of a\l"
	.string "trainer.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_0:
# 122 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, you already have a student ID.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_1:
# 125 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Unfortunately only students are\n"
	.string "allowed IDs and enrolment is closed for\l"
	.string "the year. However, we do offer day\l"
	.string "passes to prospective students for a\l"
	.string "nominal fee of 1000.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_2:
# 129 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Would you like to purchase one for\n"
	.string "1000?$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_3:
# 135 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Very good! Here's your temporary\n"
	.string "student ID.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_4:
# 139 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "With this ID, you'll be able to access\n"
	.string "the academy facilities as if you were a\l"
	.string "normal student. You can even sit in any\l"
	.string "ongoing classes!$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_5:
# 142 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, you don't have enough money.\n"
	.string "Please come back later!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_0:
# 158 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Can I see your student ID please?\p"
	.string "...$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_1:
# 162 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You've already received your Charcadet.\n"
	.string "Please return to class!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_2:
# 164 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Everything seems to be in order. What\n"
	.string "happened - did they forget to give you\l"
	.string "your Charcadet at the entrance\l"
	.string "ceremony? Well, no matter. Here you go!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_3:
# 166 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "The Detective Academy has gifted you a\n"
	.string "Charcadet!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_4:
# 167 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Please treat your Charcadet with love\n"
	.string "and care!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_5:
# 175 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, as a temporary student, you're\n"
	.string "not eligible for a Charcadet.$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_6:
# 178 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, only students are eligible for a\n"
	.string "Charcadet.$"

GalecrestCity_DetectiveAcademy_Guard_Text_0:
# 195 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You got a one-day student ID? Maybe I\n"
	.string "should get one too...$"

GalecrestCity_DetectiveAcademy_Guard_Text_1:
# 197 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Garden access is for students only.\n"
	.string "That ARMAROUGE won't let you in without\l"
	.string "a STUDENT ID!$"

GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0:
# 209 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Armarouge leers down at you...and nods\n"
	.string "approvingly!$"

GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1:
# 214 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Armarouge leers down at you...and\n"
	.string "continues to look straight ahead.$"

GalecrestCity_DetectiveAcademy_NPC1_Text_0:
# 243 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Ooh! Ohh! Are the new class rankings\n"
	.string "out yet?$"

GalecrestCity_DetectiveAcademy_NPC2_Text_0:
# 250 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Every semester, the school ranks all\n"
	.string "the students. The top student is called\l"
	.string "the Ace Rookie! Kohla held the title\l"
	.string "every semester, but he's graduated now,\l"
	.string "so the field is open again!$"

GalecrestCity_DetectiveAcademy_NPC3_Text_0:
# 257 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "All new students receive a Charcadet as\n"
	.string "their first Pokemon. It's the standard\l"
	.string "detective companion.$"

GalecrestCity_DetectiveAcademy_NPC4_Text_0:
# 264 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Since many rich folk live in Galecrest\n"
	.string "City, there's a lot of theft. New\l"
	.string "students are often handed smaller\l"
	.string "cases to solve as part of their\l"
	.string "internship. But some also intern at the\l"
	.string "Galecrest Gym!$"

GalecrestCity_DetectiveAcademy_NPC5_Text_0:
# 271 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I'm going to join today! I'm so excited\n"
	.string "to get my Charcadet and become an Ace\l"
	.string "Rookie!$"

GalecrestCity_DetectiveAcademy_NPC6_Text_0:
# 280 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Are you a student? You shouldn't be\n"
	.string "here if you aren't...oh, you are.$"

GalecrestCity_DetectiveAcademy_NPC7_Text_0:
# 290 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "We're battling to practice for our\n"
	.string "exams. It's very competitive here.\l"
	.string "Losers like you can't cut it.$"

GalecrestCity_DetectiveAcademy_NPC8_Text_0:
# 299 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Hey, you look weak. You'd be a good\n"
	.string "training dummy for my Charcadet!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_1:
# 299 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "But you're not even a student!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_2:
# 300 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You may have beaten me, but I bet you\n"
	.string "can't beat Kohla! He's the star of the\l"
	.string "Academy!$"

GalecrestCity_DetectiveAcademy_NPC9_Text_0:
# 311 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "These two only focus on battling. But\n"
	.string "true detectives can do a lot more! We\l"
	.string "have to investigate clues, interrogate\l"
	.string "suspects and disguise ourselves.$"

GalecrestCity_DetectiveAcademy_NPC10_Text_0:
# 317 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "...and as you can see here, according to\n"
	.string "the theory of...\p"
	.string "The teacher is engrossed in his lecture.$"

GalecrestCity_DetectiveAcademy_NPC11_Text_0:
# 324 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love this teacher's style! I wish he\n"
	.string "taught a more interesting subject.$"

GalecrestCity_DetectiveAcademy_NPC12_Text_0:
# 331 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love the topic but this teacher is so\n"
	.string "boring!$"

GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0:
# 343 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Charcadet is battling intensely!$"

GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0:
# 353 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Yamper's not backing down!$"

GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0:
# 363 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Charcadet is also curious about the\n"
	.string "class rankings!$"
