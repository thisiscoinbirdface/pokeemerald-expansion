# 1 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"

# 2 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
    .set LOCALID_KOHLA, 16

GalecrestCity_DetectiveAcademy_MapScripts::
	.byte 0


GalecrestCity_DetectiveAcademy_EventScript_Kohla::
# 11 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 15 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	speakername GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0
# 16 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_1
# 17 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 19 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 20 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 21 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 24
# 22 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	speakername GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0
# 23 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_2
# 24 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 27 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0
# 28 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 29 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_1
# 31 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	speakername GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_3
# 33 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 35 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_2
# 36 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 37 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	removeobject LOCALID_KOHLA
# 38 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_DETECTIVE_ACAD_KOHLA
# 40 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Breech::
# 47 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	speakername GalecrestCity_DetectiveAcademy_Breech_Text_0
# 48 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Breech_Text_1, MSGBOX_NPC
# 49 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 13, GalecrestCity_DetectiveAcademy_Breech_Movement_0
	end


GalecrestCity_DetectiveAcademy_Clefairy::
# 54 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 55 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 57 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_CLEFAIRY_ITEM, GalecrestCity_DetectiveAcademy_Clefairy_2
# 60 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_0
# 61 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 62 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 17, GalecrestCity_DetectiveAcademy_Clefairy_Movement_0
# 63 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 64 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 65 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 16
# 66 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	speakername GalecrestCity_DetectiveAcademy_Clefairy_Text_1
# 67 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_2
# 68 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 69 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 16
# 70 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_3
# 71 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 72 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_4
# 73 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 74 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 17, GalecrestCity_DetectiveAcademy_Breech_Movement_0
# 75 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 76 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_CLEFAIRY_ITEM
GalecrestCity_DetectiveAcademy_Clefairy_1:
# 79 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Clefairy_2:
# 58 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_0
	goto GalecrestCity_DetectiveAcademy_Clefairy_1


GalecrestCity_DetectiveAcademy_Receptionist::
# 93 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 94 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 95 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Text_0
# 96 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
# 98 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Receptionist_Multichoice::
# 103 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_0
# 104 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_1, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_2, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_3
# 106 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_2
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_1:
# 113 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_5
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_4:
# 117 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_8
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_7:
# 121 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_2:
# 107 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_4
# 108 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 109 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 16
# 110 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_1

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_5:
# 114 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_4

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_8:
# 118 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_7


GalecrestCity_DetectiveAcademy_Receptionist_StudentID::
# 126 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 128 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_2
# 132 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_1
# 133 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 134 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 16
# 135 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	showmoneybox 0, 0
# 136 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_2, MSGBOX_YESNO
# 138 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_5
# 154 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	hidemoneybox
# 155 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1:
# 160 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_2:
# 129 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_0
# 130 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_5:
# 139 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	hidemoneybox
# 140 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkmoney 1000
# 141 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_8
# 149 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_5
# 150 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 151 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_8:
# 142 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_3
# 143 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	giveitem ITEM_DETECTIVE_STUDENT_ID
# 144 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_STUDENTID_GET
# 145 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	removemoney 1000
# 146 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_4
# 147 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1


GalecrestCity_DetectiveAcademy_Receptionist_Charcadet::
# 166 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_0
	checkitem ITEM_FAKE_STUDENT_ID
# 0 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_2
# 180 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 182 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_8
# 186 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_6
# 187 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1:
# 192 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_2:
# 169 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_CHARCADET_GET, GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_5
# 172 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_2
# 173 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 174 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_3
# 175 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	call NicknamePartyMon
# 175 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_4
# 176 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 177 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_CHARCADET_GET
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_5:
# 170 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_1
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_8:
# 183 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_5
# 184 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1


GalecrestCity_DetectiveAcademy_Guard::
# 199 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Guard_2
# 202 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Guard_Text_1, MSGBOX_NPC
GalecrestCity_DetectiveAcademy_Guard_1:
	end

GalecrestCity_DetectiveAcademy_Guard_2:
# 200 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Guard_Text_0, MSGBOX_NPC
	goto GalecrestCity_DetectiveAcademy_Guard_1


GalecrestCity_DetectiveAcademy_Armarouge_Garden::
# 208 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 209 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 210 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 211 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Armarouge_Garden_2
# 217 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1
# 218 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 22, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1
# 219 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
GalecrestCity_DetectiveAcademy_Armarouge_Garden_1:
# 221 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Armarouge_Garden_2:
# 212 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0
# 213 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 214 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 22, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_0
# 215 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	goto GalecrestCity_DetectiveAcademy_Armarouge_Garden_1


GalecrestCity_DetectiveAcademy_Armarouge_Classroom::
# 226 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 227 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 228 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 229 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Armarouge_Classroom_2
# 235 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1
# 236 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 23, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1
# 237 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
GalecrestCity_DetectiveAcademy_Armarouge_Classroom_1:
# 239 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Armarouge_Classroom_2:
# 230 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0
# 231 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 232 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 23, GalecrestCity_DetectiveAcademy_Armarouge_Classroom_Movement_0
# 233 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	goto GalecrestCity_DetectiveAcademy_Armarouge_Classroom_1


GalecrestCity_DetectiveAcademy_NPC1::
# 244 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC1_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC2::
# 249 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC2_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC3::
# 254 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC3_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC4::
# 261 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC4_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC5::
# 266 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC5_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC6::
# 273 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC6_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC7::
# 281 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 282 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 283 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC7_Text_0
# 284 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 10, GalecrestCity_DetectiveAcademy_NPC7_Movement_0
# 285 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 286 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC8::
# 290 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	trainerbattle_single TRAINER_GALECREST_DETECTIVE_A, GalecrestCity_DetectiveAcademy_NPC8_Text_0, GalecrestCity_DetectiveAcademy_NPC8_Text_1
# 291 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC8_Text_2, MSGBOX_AUTOCLOSE
	end


GalecrestCity_DetectiveAcademy_NPC9::
# 296 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC9_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC10::
# 301 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 302 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC10_Text_0
# 303 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_NPC11::
# 308 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC11_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC12::
# 313 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC12_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_Charcadet_Battle::
# 321 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 322 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 323 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 18, GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0
# 324 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 325 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0
# 326 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Yamper_Battle::
# 331 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 332 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_YAMPER, CRY_MODE_NORMAL
# 333 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 19, GalecrestCity_DetectiveAcademy_Yamper_Battle_Movement_0
# 334 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 335 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0
# 336 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Charcadet_A::
# 342 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 343 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0, MSGBOX_NPC
	end


# 27 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0:
# 27 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_right
# 27 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 27 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 27 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 27 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_left
# 27 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 29 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_1:
# 29 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_up
	step_end

# 35 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_2:
# 35 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 35 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 35 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 35 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
	step_end

# 49 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Breech_Movement_0:
# 49 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_left
	step_end

# 62 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Clefairy_Movement_0:
# 62 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 214 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_0:
# 214 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_left
# 214 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 218 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1:
# 218 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 232 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Classroom_Movement_0:
# 232 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_right
# 232 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 284 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_NPC7_Movement_0:
# 284 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_right
	step_end

# 323 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0:
# 323 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	jump_in_place_left
	step_end

# 333 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Yamper_Battle_Movement_0:
# 333 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	jump_in_place_right
	step_end

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0:
# 15 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Kohla$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_1:
# 16 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "I saw a lot of bad stuff growing up, so I\n"
	.string "wanted to become a detective.\p"
	.string "So I did.\p"
	.string "I graduated from this academy at the\n"
	.string "top of my class...\p"
	.string "...but it wasn't enough.$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_2:
# 23 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "{PLAYER}, it was you who stopped Team\n"
	.string "Somber from getting the dreamstone.\p"
	.string "Thanks to you, I learned something.\n"
	.string "Being the Ace Rookie isn't enough.\p"
	.string "To stop Team Somber - no, to stop all\n"
	.string "crime, I need to become stronger than\l"
	.string "the criminals.\p"
	.string "At the end of the day, it's all about how\n"
	.string "strong you are.$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_3:
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Silversun City is east of here, but the\n"
	.string "path is blocked by rocks. If you beat\l"
	.string "the Gym Leader here, you'll be able to\l"
	.string "use the HM Rock Smash, which will let\l"
	.string "you pass.\p"
	.string "See you in Silversun City...or sooner\n"
	.string "than that, I think.$"

GalecrestCity_DetectiveAcademy_Breech_Text_0:
# 47 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Breech$"

GalecrestCity_DetectiveAcademy_Breech_Text_1:
# 48 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "It's you {PLAYER}! How are you?\n"
	.string "Clefairy and I are sitting in this class\l"
	.string "on Pokémon battles. Yep, to be a good\l"
	.string "detective, you need to be a strong\l"
	.string "trainer too!\p"
	.string "...\p"
	.string "Not that Clefairy and I want to be\n"
	.string "detectives, haha! We're just lifelong\l"
	.string "learners.$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_0:
# 58 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Clefairy is extremely focused on the\n"
	.string "teacher. A good student!$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_1:
# 66 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Clefairy$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_2:
# 67 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Clee---!!!$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_3:
# 70 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Clefairy hands you an item...$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_4:
# 72 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "This must be the secret of Clefairy 's\n"
	.string "focus! Better not disturb her any\l"
	.string "further...thank you Clefairy!$"

GalecrestCity_DetectiveAcademy_Receptionist_Text_0:
# 95 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Hello, trainer! Welcome to the Detective\n"
	.string "Academy!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_0:
# 103 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "How may I help you today?$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_1:
# 104 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Tell me about the Academy!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_2:
# 104 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Can I get a student ID?$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_3:
# 104 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I want a Charcadet!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_4:
# 107 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "The Galecrest Detective Academy is one\n"
	.string "of the most prestigious schools in all\l"
	.string "of Cormoria! Our top-caliber candidates\l"
	.string "train and study to become the very\l"
	.string "best detectives. Many go on to join the\l"
	.string "police force or pursue the path of a\l"
	.string "trainer.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_0:
# 129 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, you already have a student ID.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_1:
# 132 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Unfortunately, only students are\n"
	.string "allowed IDs and enrolment is closed for\l"
	.string "the year. However, we do offer day\l"
	.string "passes to prospective students for a\l"
	.string "nominal fee of 1000.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_2:
# 136 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Would you like to purchase one for\n"
	.string "1000?$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_3:
# 142 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Very good! Here's your temporary\n"
	.string "student ID.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_4:
# 146 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "With this ID, you'll be able to access\n"
	.string "the academy facilities as if you were a\l"
	.string "normal student. You can even sit in any\l"
	.string "ongoing classes!$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_5:
# 149 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, you don't have enough money.\n"
	.string "Please come back later!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_0:
# 166 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Can I see your student ID please?\p"
	.string "...$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_1:
# 170 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You've already received your Charcadet.\n"
	.string "Please return to class!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_2:
# 172 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Everything seems to be in order. What\n"
	.string "happened - did they forget to give you\l"
	.string "your Charcadet at the entrance\l"
	.string "ceremony? Well, no matter. Here you go!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_3:
# 174 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "The Detective Academy has gifted you a\n"
	.string "Charcadet!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_4:
# 175 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Please treat your Charcadet with love\n"
	.string "and care!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_5:
# 183 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, as a temporary student, you're\n"
	.string "not eligible for a Charcadet.$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_6:
# 186 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, only students are eligible for a\n"
	.string "Charcadet.$"

GalecrestCity_DetectiveAcademy_Guard_Text_0:
# 200 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You got a one-day student ID? Maybe I\n"
	.string "should get one too...$"

GalecrestCity_DetectiveAcademy_Guard_Text_1:
# 202 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Garden access is for students only.\n"
	.string "That ARMAROUGE won't let you in without\l"
	.string "a STUDENT ID!$"

GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0:
# 212 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Armarouge leers down at you...and nods\n"
	.string "approvingly!$"

GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1:
# 217 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Armarouge leers down at you...and\n"
	.string "continues to look straight ahead.$"

GalecrestCity_DetectiveAcademy_NPC1_Text_0:
# 244 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Ooh! Ohh! Are the new class rankings\n"
	.string "out yet?$"

GalecrestCity_DetectiveAcademy_NPC2_Text_0:
# 249 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Every semester, the school ranks all\n"
	.string "the students. The top student is called\l"
	.string "the Ace Rookie! Kohla held the title\l"
	.string "every semester, but he's graduated now,\l"
	.string "so the field is open again!$"

GalecrestCity_DetectiveAcademy_NPC3_Text_0:
# 254 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "All new students receive a Charcadet as\n"
	.string "their first Pokémon. It's the standard\l"
	.string "detective companion.$"

GalecrestCity_DetectiveAcademy_NPC4_Text_0:
# 261 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Since many rich folk live in Galecrest\n"
	.string "City, there's a lot of theft. New\l"
	.string "students are often handed smaller\l"
	.string "cases to solve as part of their\l"
	.string "internship. But some also intern at the\l"
	.string "Galecrest Gym!$"

GalecrestCity_DetectiveAcademy_NPC5_Text_0:
# 266 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I'm going to join today! I'm so excited\n"
	.string "to get my Charcadet and become an Ace\l"
	.string "Rookie!$"

GalecrestCity_DetectiveAcademy_NPC6_Text_0:
# 273 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Are you a student? You shouldn't be\n"
	.string "here if you aren't...oh, you are.$"

GalecrestCity_DetectiveAcademy_NPC7_Text_0:
# 283 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "We're battling to practice for our\n"
	.string "exams. It's very competitive here.\l"
	.string "Losers like you can't cut it.$"

GalecrestCity_DetectiveAcademy_NPC8_Text_0:
# 290 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Hey, you look weak. You'd be a good\n"
	.string "training dummy for my Charcadet!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_1:
# 290 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "But you're not even a student!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_2:
# 291 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You may have beaten me, but I bet you\n"
	.string "can't beat Kohla! He's the star of the\l"
	.string "Academy!$"

GalecrestCity_DetectiveAcademy_NPC9_Text_0:
# 296 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "These two only focus on battling. But\n"
	.string "true detectives can do a lot more! We\l"
	.string "have to investigate clues, interrogate\l"
	.string "suspects and disguise ourselves.$"

GalecrestCity_DetectiveAcademy_NPC10_Text_0:
# 302 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "...and as you can see here, according to\n"
	.string "the theory of...\p"
	.string "The teacher is engrossed in his lecture.$"

GalecrestCity_DetectiveAcademy_NPC11_Text_0:
# 308 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love this teacher's style! I wish he\n"
	.string "taught a more interesting subject.$"

GalecrestCity_DetectiveAcademy_NPC12_Text_0:
# 313 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love the topic but this teacher is so\n"
	.string "boring!$"

GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0:
# 325 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Charcadet is battling intensely!$"

GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0:
# 335 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Yamper's not backing down!$"

GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0:
# 343 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Charcadet is also curious about the\n"
	.string "class rankings!$"
