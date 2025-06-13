# 1 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"

# 2 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
    .set LOCALID_KOHLA, 16

GalecrestCity_DetectiveAcademy_MapScripts::
	.byte 0


GalecrestCity_DetectiveAcademy_EventScript_Kohla::
# 11 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 12 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	hidefollower
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
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 29 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq GalecrestCity_DetectiveAcademy_EventScript_Kohla_2
# 33 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_1
# 34 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
GalecrestCity_DetectiveAcademy_EventScript_Kohla_1:
# 37 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_2
# 38 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 39 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 16
# 41 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	speakername GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0
# 42 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_3
# 43 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 46 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_3
# 47 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 48 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	removeobject LOCALID_KOHLA
# 49 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_DETECTIVE_ACAD_KOHLA
# 51 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return

GalecrestCity_DetectiveAcademy_EventScript_Kohla_2:
# 30 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0
# 31 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	goto GalecrestCity_DetectiveAcademy_EventScript_Kohla_1


GalecrestCity_DetectiveAcademy_Breech::
# 58 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	speakername GalecrestCity_DetectiveAcademy_Breech_Text_0
# 59 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Breech_Text_1, MSGBOX_NPC
# 60 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 13, GalecrestCity_DetectiveAcademy_Breech_Movement_0
	end


GalecrestCity_DetectiveAcademy_Clefairy::
# 65 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 66 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 68 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_CLEFAIRY_ITEM, GalecrestCity_DetectiveAcademy_Clefairy_2
# 71 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_0
# 72 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 73 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 17, GalecrestCity_DetectiveAcademy_Clefairy_Movement_0
# 74 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 75 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 76 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 16
# 77 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	speakername GalecrestCity_DetectiveAcademy_Clefairy_Text_1
# 78 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_2
# 79 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 80 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 16
# 81 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_3
# 82 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 83 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_4
# 84 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 85 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 17, GalecrestCity_DetectiveAcademy_Breech_Movement_0
# 86 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 87 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_CLEFAIRY_ITEM
GalecrestCity_DetectiveAcademy_Clefairy_1:
# 90 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Clefairy_2:
# 69 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_0
	goto GalecrestCity_DetectiveAcademy_Clefairy_1


GalecrestCity_DetectiveAcademy_Receptionist::
# 104 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 105 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 106 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Text_0
# 107 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
# 109 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Receptionist_Multichoice::
# 114 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_0
# 115 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_1, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_2, GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_3
# 116 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 117 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_2
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_1:
# 125 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_5
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_4:
# 129 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_8
GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_7:
# 133 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_2:
# 118 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 10
# 119 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_4
# 120 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 121 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 16
# 122 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_1

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_5:
# 126 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_4

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_8:
# 130 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_7


GalecrestCity_DetectiveAcademy_Receptionist_StudentID::
# 138 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 140 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_2
# 144 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_1
# 145 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 146 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 16
# 147 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	showmoneybox 0, 0
# 148 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_2, MSGBOX_YESNO
# 150 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_5
# 169 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	hidemoneybox
# 170 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1:
# 175 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_2:
# 141 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_0
# 142 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_5:
# 151 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	hidemoneybox
# 152 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 1
# 153 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkmoney 1000
# 154 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_StudentID_8
# 164 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_5
# 165 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 166 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_8:
# 155 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playse SE_SHOP
# 156 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitse
# 157 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_3
# 158 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	giveitem ITEM_DETECTIVE_STUDENT_ID
# 159 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_STUDENTID_GET
# 160 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	removemoney 1000
# 161 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_4
# 162 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
	goto GalecrestCity_DetectiveAcademy_Receptionist_StudentID_1


GalecrestCity_DetectiveAcademy_Receptionist_Charcadet::
# 181 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_0
	checkitem ITEM_FAKE_STUDENT_ID
# 0 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_2
# 196 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 198 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_8
# 202 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_6
# 203 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1:
# 207 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_2:
# 184 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_CHARCADET_GET, GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_5
# 187 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_2
# 188 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 189 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_3
# 190 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	givemon SPECIES_CHARCADET, 20
# 191 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_4
# 192 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 193 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_CHARCADET_GET
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_5:
# 185 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_1
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_8:
# 199 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_5
# 200 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto GalecrestCity_DetectiveAcademy_Receptionist_Multichoice
	goto GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_1


GalecrestCity_DetectiveAcademy_Guard::
# 214 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Guard_2
# 217 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Guard_Text_1, MSGBOX_NPC
GalecrestCity_DetectiveAcademy_Guard_1:
	end

GalecrestCity_DetectiveAcademy_Guard_2:
# 215 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Guard_Text_0, MSGBOX_NPC
	goto GalecrestCity_DetectiveAcademy_Guard_1


GalecrestCity_DetectiveAcademy_Armarouge_Garden::
# 223 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 224 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 225 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 226 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Armarouge_Garden_2
# 236 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1
# 237 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 22, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1
# 238 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
GalecrestCity_DetectiveAcademy_Armarouge_Garden_1:
# 240 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Armarouge_Garden_2:
# 227 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0
# 228 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 230 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_ARMAROUGE_1_MOVED, GalecrestCity_DetectiveAcademy_Armarouge_Garden_6
# 231 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_ARMAROUGE_1_MOVED
# 233 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 22, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_0
# 234 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	goto GalecrestCity_DetectiveAcademy_Armarouge_Garden_1

GalecrestCity_DetectiveAcademy_Armarouge_Garden_6:
	end


GalecrestCity_DetectiveAcademy_Armarouge_Classroom::
# 245 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 246 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 247 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 248 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_STUDENTID_GET, GalecrestCity_DetectiveAcademy_Armarouge_Classroom_2
# 258 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1
# 259 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 23, GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1
# 260 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
GalecrestCity_DetectiveAcademy_Armarouge_Classroom_1:
# 262 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end

GalecrestCity_DetectiveAcademy_Armarouge_Classroom_2:
# 249 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0
# 250 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 252 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	goto_if_set FLAG_GALECREST_ARMAROUGE_2_MOVED, GalecrestCity_DetectiveAcademy_Armarouge_Classroom_6
# 253 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_GALECREST_ARMAROUGE_2_MOVED
# 255 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 23, GalecrestCity_DetectiveAcademy_Armarouge_Classroom_Movement_0
# 256 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	goto GalecrestCity_DetectiveAcademy_Armarouge_Classroom_1

GalecrestCity_DetectiveAcademy_Armarouge_Classroom_6:
	end


GalecrestCity_DetectiveAcademy_NPC1::
# 267 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC1_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC2::
# 272 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC2_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC3::
# 277 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC3_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC4::
# 284 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC4_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC5::
# 289 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC5_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC6::
# 296 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC6_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC7::
# 304 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 305 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 306 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC7_Text_0
# 307 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 10, GalecrestCity_DetectiveAcademy_NPC7_Movement_0
# 308 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 309 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC8::
# 313 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	trainerbattle_single TRAINER_GALECREST_DETECTIVE_A, GalecrestCity_DetectiveAcademy_NPC8_Text_0, GalecrestCity_DetectiveAcademy_NPC8_Text_1
# 314 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC8_Text_2, MSGBOX_AUTOCLOSE
	end


GalecrestCity_DetectiveAcademy_NPC9::
# 319 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC9_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC10::
# 324 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 325 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC10_Text_0
# 326 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_NPC11::
# 331 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC11_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_NPC12::
# 336 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC12_Text_0, MSGBOX_NPC
	end


GalecrestCity_DetectiveAcademy_Charcadet_Battle::
# 344 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 345 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 346 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 18, GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0
# 347 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 348 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0
# 349 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Yamper_Battle::
# 354 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 355 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_YAMPER, CRY_MODE_NORMAL
# 356 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 19, GalecrestCity_DetectiveAcademy_Yamper_Battle_Movement_0
# 357 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 358 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0
# 359 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Charcadet_A::
# 365 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 366 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0, MSGBOX_NPC
	end


# 30 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0:
# 30 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_right
# 30 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 30 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 30 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 30 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_left
# 30 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 33 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_1:
# 33 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 33 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 33 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 33 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 37 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_2:
# 37 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_up
	step_end

# 46 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_3:
# 46 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 46 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 46 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 46 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
	step_end

# 60 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Breech_Movement_0:
# 60 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_left
	step_end

# 73 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Clefairy_Movement_0:
# 73 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	emote_exclamation_mark
	step_end

# 233 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_0:
# 233 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_left
# 233 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 237 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Garden_Movement_1:
# 237 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 255 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Classroom_Movement_0:
# 255 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_right
# 255 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 307 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_NPC7_Movement_0:
# 307 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_right
	step_end

# 346 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0:
# 346 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	jump_in_place_left
	step_end

# 356 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Yamper_Battle_Movement_0:
# 356 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
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
	.string "I saw a lot of bad stuff growing up, so\n"
	.string "I wanted to become a detective.\p"
	.string "So I did.\p"
	.string "I graduated from this academy at\n"
	.string "the top of my class...\p"
	.string "...but it wasn't enough.$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_2:
# 23 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "{PLAYER}, it was you who stopped Team\n"
	.string "Somber from getting the dreamstone.\p"
	.string "Thanks to you, I learned something.\n"
	.string "Being the Ace Rookie isn't enough.\p"
	.string "To stop Team Somber - no, to stop all\n"
	.string "crime, I need to become stronger than\l"
	.string "the criminals I face.\p"
	.string "At the end of the day, it's all about\n"
	.string "how strong you are.$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_3:
# 42 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Silversun City is east of here, but the\n"
	.string "path is blocked by rocks. If you beat\l"
	.string "the Gym Leader here, you can use the HM\l"
	.string "Rock Smash, which will let you pass.\p"
	.string "See you in Silversun City...or sooner\n"
	.string "than that, I think.$"

GalecrestCity_DetectiveAcademy_Breech_Text_0:
# 58 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Breech$"

GalecrestCity_DetectiveAcademy_Breech_Text_1:
# 59 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "It's you {PLAYER}! How are you?\n"
	.string "Clefairy and I are sitting in this\l"
	.string "class on Pokémon battles.\p"
	.string "Yep, to be a good detective, you need to\n"
	.string "be a strong trainer too!\p"
	.string "...\p"
	.string "Not that we want to be detectives!\n"
	.string "We're just lifelong learners.$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_0:
# 69 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Clefairy is extremely focused on the\n"
	.string "teacher. A good student!$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_1:
# 77 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Clefairy$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_2:
# 78 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Clee---!!!$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_3:
# 81 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Clefairy hands you an item...$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_4:
# 83 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "This must be the secret of Clefairy 's\n"
	.string "focus! Better not disturb her any\l"
	.string "further...thank you Clefairy!$"

GalecrestCity_DetectiveAcademy_Receptionist_Text_0:
# 106 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Hello, trainer!\n"
	.string "Welcome to the Detective Academy!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_0:
# 114 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "How may I help you today?$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_1:
# 115 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Tell me about the Academy!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_2:
# 115 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Can I get a student ID?$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_3:
# 115 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I want a Charcadet!$"

GalecrestCity_DetectiveAcademy_Receptionist_Multichoice_Text_4:
# 119 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "The Galecrest Detective Academy is one\n"
	.string "of the most prestigious schools in all\l"
	.string "of Cormoria! Our top-caliber candidates\l"
	.string "train to become the best detectives.\l"
	.string "Many go on to join the police force or\l"
	.string "pursue the path of a trainer.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_0:
# 141 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, you already have a student ID.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_1:
# 144 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Unfortunately, only students are\n"
	.string "allowed IDs and enrolment is closed for\l"
	.string "the year. However, we do offer day\l"
	.string "passes to prospective students for\l"
	.string "a nominal fee of ¥1000.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_2:
# 148 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Would you like to buy one for ¥1000?$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_3:
# 157 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Very good!\n"
	.string "Here's your temporary student ID.$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_4:
# 161 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "With this ID, you'll be able to access\n"
	.string "the academy facilities as if you were a\l"
	.string "normal student. You can even sit in any\l"
	.string "ongoing classes!$"

GalecrestCity_DetectiveAcademy_Receptionist_StudentID_Text_5:
# 164 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, you don't have enough money.\n"
	.string "Please come back later!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_0:
# 181 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Can I see your student ID please?\p"
	.string "...$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_1:
# 185 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You've already received your Charcadet.\n"
	.string "Please return to class!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_2:
# 187 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Everything seems to be in order. What\n"
	.string "happened - did they forget to give you\l"
	.string "your Charcadet at the entrance\l"
	.string "ceremony? Well, no matter. Here you go!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_3:
# 189 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "The Detective Academy has gifted you a\n"
	.string "Charcadet!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_4:
# 191 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Please treat your Charcadet with love\n"
	.string "and care!$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_5:
# 199 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, as a temporary student, you're\n"
	.string "not eligible for a Charcadet.$"

GalecrestCity_DetectiveAcademy_Receptionist_Charcadet_Text_6:
# 202 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Sorry, only students are eligible for a\n"
	.string "Charcadet.$"

GalecrestCity_DetectiveAcademy_Guard_Text_0:
# 215 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You got a one-day student ID? Maybe I\n"
	.string "should get one too...$"

GalecrestCity_DetectiveAcademy_Guard_Text_1:
# 217 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Garden access is for students only.\n"
	.string "That Armarouge won't let you in unless\l"
	.string "you've got a Student ID!$"

GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_0:
# 227 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Armarouge leers down at you...and nods\n"
	.string "approvingly!$"

GalecrestCity_DetectiveAcademy_Armarouge_Garden_Text_1:
# 236 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Armarouge leers down at you...and\n"
	.string "continues to look straight ahead.$"

GalecrestCity_DetectiveAcademy_NPC1_Text_0:
# 267 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Ooh! Are the class rankings out yet?$"

GalecrestCity_DetectiveAcademy_NPC2_Text_0:
# 272 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Every semester, the school ranks all\n"
	.string "the students. The top student is called\l"
	.string "the Ace Rookie! Kohla held the title\l"
	.string "every semester, but he's graduated now,\l"
	.string "so the field is open again!$"

GalecrestCity_DetectiveAcademy_NPC3_Text_0:
# 277 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "All new students receive a Charcadet\n"
	.string "as their first Pokémon. It's the\l"
	.string "standard detective companion.$"

GalecrestCity_DetectiveAcademy_NPC4_Text_0:
# 284 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Since many rich folk live in Galecrest\n"
	.string "City, there's a lot of theft.\l"
	.string "New students are often handed smaller\l"
	.string "cases to solve as an internship.\l"
	.string "Some also intern at the Galecrest Gym!$"

GalecrestCity_DetectiveAcademy_NPC5_Text_0:
# 289 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I'm joining today! Once I get my\n"
	.string "Charcadet, I'm gonna be an Ace Rookie!$"

GalecrestCity_DetectiveAcademy_NPC6_Text_0:
# 296 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Are you a student? You shouldn't be\n"
	.string "here if you aren't...oh, you are.$"

GalecrestCity_DetectiveAcademy_NPC7_Text_0:
# 306 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "We're battling to practice for our\n"
	.string "exams. It's very competitive here.\l"
	.string "Losers like you can't cut it.$"

GalecrestCity_DetectiveAcademy_NPC8_Text_0:
# 313 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Hey, you look weak. You'd be a good\n"
	.string "training dummy for my Charcadet!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_1:
# 313 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "But you're not even a student!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_2:
# 314 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You may have beaten me, but I bet you\n"
	.string "can't beat Kohla! He's the star of the\l"
	.string "Academy!$"

GalecrestCity_DetectiveAcademy_NPC9_Text_0:
# 319 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "These two only focus on battling. But\n"
	.string "true detectives can do a lot more!\l"
	.string "We have to uncover clues, interrogate\l"
	.string "suspects and disguise ourselves.$"

GalecrestCity_DetectiveAcademy_NPC10_Text_0:
# 325 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "...and as you can see here, according to\n"
	.string "the theory of...\p"
	.string "The teacher is engrossed in his lecture.$"

GalecrestCity_DetectiveAcademy_NPC11_Text_0:
# 331 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love this teacher's style! I wish he\n"
	.string "taught a more interesting subject.$"

GalecrestCity_DetectiveAcademy_NPC12_Text_0:
# 336 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love the topic but this teacher is so\n"
	.string "boring!$"

GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0:
# 348 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Charcadet is battling intensely!$"

GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0:
# 358 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Yamper's not backing down!$"

GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0:
# 366 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Charcadet is also curious about the\n"
	.string "class rankings!$"
