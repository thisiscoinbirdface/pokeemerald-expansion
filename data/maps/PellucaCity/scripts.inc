# 1 "data//maps/PellucaCity/scripts.pory"

# 2 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_GAB, 5
# 3 "data//maps/PellucaCity/scripts.pory"

# 4 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_MAYOR, 39
# 5 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_S1, 40
# 6 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_S2, 41
# 7 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_S3, 42
# 8 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_S_ENTRANCE, 8
# 9 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_S_BLOCKER, 7
# 10 "data//maps/PellucaCity/scripts.pory"

# 11 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_FL_MAYOR, 50
# 12 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_FL_QWIL, 49
# 13 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_FL_CITIZEN, 47
# 14 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_FL_JANIA, 56

PellucaCity_MapScripts::
# 19 "data//maps/PellucaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PellucaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 22 "data//maps/PellucaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PellucaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PellucaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_SetLayout
	return

PellucaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data//maps/PellucaCity/scripts.pory"
	map_script_2 VAR_PELLUCA_MAYOR_QUEST, 3, PellucaCityFlooded_MainEvent
	.2byte 0


PellucaCity_SetLayout::
# 28 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCity_SetLayout_2
# 33 "data//maps/PellucaCity/scripts.pory"
	setmaplayoutindex LAYOUT_PELLUCA_CITY
PellucaCity_SetLayout_1:
	return

PellucaCity_SetLayout_2:
# 29 "data//maps/PellucaCity/scripts.pory"
	setmaplayoutindex LAYOUT_PELLUCA_CITY_FLOODED
# 30 "data//maps/PellucaCity/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 31 "data//maps/PellucaCity/scripts.pory"
	doweather
	goto PellucaCity_SetLayout_1


PellucaCity_MayorFight_Trigger::
# 48 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_MAYOR_FIGHT, PellucaCity_MayorFight_Trigger_2
# 50 "data//maps/PellucaCity/scripts.pory"
	lockall
# 53 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 54 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_MayorFight_Trigger_Movement_0
# 55 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 56 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 59 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_1
# 60 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 61 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 62 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 63 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_1
# 64 "data//maps/PellucaCity/scripts.pory"
	release
# 65 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 67 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_2
# 68 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 69 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 70 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 71 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_3
# 72 "data//maps/PellucaCity/scripts.pory"
	release
# 73 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 75 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 76 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 77 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 78 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 79 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_4
# 80 "data//maps/PellucaCity/scripts.pory"
	release
# 81 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 83 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_4
# 84 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 85 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 86 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 87 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_6
# 88 "data//maps/PellucaCity/scripts.pory"
	release
# 89 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 91 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_5
# 92 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 93 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 94 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 95 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_7
# 96 "data//maps/PellucaCity/scripts.pory"
	release
# 97 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 99 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_6
# 100 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_6
# 101 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 102 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 103 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_8
# 104 "data//maps/PellucaCity/scripts.pory"
	release
# 105 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 107 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_7
# 108 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 109 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 110 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 111 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_9
# 112 "data//maps/PellucaCity/scripts.pory"
	release
# 113 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 115 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_7
# 116 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 117 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 118 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_8
# 119 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 120 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 122 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 123 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_10
# 124 "data//maps/PellucaCity/scripts.pory"
	release
# 125 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 127 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_6
# 128 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_6
# 129 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 130 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 131 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_11
# 132 "data//maps/PellucaCity/scripts.pory"
	release
# 133 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 135 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_7
# 136 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 137 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 138 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 139 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_12
# 140 "data//maps/PellucaCity/scripts.pory"
	release
# 141 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 144 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 145 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 146 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 147 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_10
# 148 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 149 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 150 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_9
# 151 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_11
# 152 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 153 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_12
# 154 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_12
# 155 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_12
# 156 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 161 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_13
# 162 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 163 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 164 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 165 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_13
# 166 "data//maps/PellucaCity/scripts.pory"
	release
# 167 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 169 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_14
# 170 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 171 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 172 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 173 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_14
# 174 "data//maps/PellucaCity/scripts.pory"
	release
# 175 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 176 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_15
# 177 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 178 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 182 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 183 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_MayorFight_Trigger_Movement_16
# 184 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 185 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 187 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_MAYOR
# 188 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S1
# 189 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S2
# 190 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S3
# 191 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_MAYOR_FIGHT
# 193 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_MayorFight_Trigger_2:
	end


PellucaCity_Sailor_Entrance::
# 210 "data//maps/PellucaCity/scripts.pory"
	lockall
# 211 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 213 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 214 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_Entrance_Text_0
# 215 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCity_Sailor_Entrance_2
# 216 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 1
	goto_if_eq PellucaCity_Sailor_Entrance_5
# 218 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_Multichoice
# 220 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_Entrance_2:
# 215 "data//maps/PellucaCity/scripts.pory"
	release
	end

PellucaCity_Sailor_Entrance_5:
# 216 "data//maps/PellucaCity/scripts.pory"
	release
	end


PellucaCity_Sailor_Multichoice::
# 224 "data//maps/PellucaCity/scripts.pory"
	message PellucaCity_Sailor_Multichoice_Text_0
# 225 "data//maps/PellucaCity/scripts.pory"
	waitmessage
# 226 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Sailor_Multichoice_Text_1, PellucaCity_Sailor_Multichoice_Text_2
# 228 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_Multichoice_2
PellucaCity_Sailor_Multichoice_1:
# 229 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_Multichoice_4
	return

PellucaCity_Sailor_Multichoice_2:
# 228 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_QwilsquadExplanation
	goto PellucaCity_Sailor_Multichoice_1

PellucaCity_Sailor_Multichoice_4:
# 229 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberCheck
	return


PellucaCity_Sailor_QwilsquadExplanation::
# 232 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 233 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_QwilsquadExplanation_Text_0
# 234 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_Multichoice
	return


PellucaCity_Sailor_MemberCheck::
# 237 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 238 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_0, MSGBOX_YESNO
# 240 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_MemberCheck_2
PellucaCity_Sailor_MemberCheck_1:
# 244 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_MemberCheck_5
PellucaCity_Sailor_MemberCheck_4:
# 266 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_MemberCheck_2:
# 241 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 242 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_1
	goto PellucaCity_Sailor_MemberCheck_1

PellucaCity_Sailor_MemberCheck_5:
# 245 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 246 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_2
# 247 "data//maps/PellucaCity/scripts.pory"
	release
# 250 "data//maps/PellucaCity/scripts.pory"
	special ChoosePartyMon
# 251 "data//maps/PellucaCity/scripts.pory"
	waitstate
# 252 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 253 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 254 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 256 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_QWILFISH_HISUI
	goto_if_eq PellucaCity_Sailor_MemberCheck_8
PellucaCity_Sailor_MemberCheck_7:
# 257 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_OVERQWIL
	goto_if_eq PellucaCity_Sailor_MemberCheck_11
PellucaCity_Sailor_MemberCheck_10:
# 259 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 260 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 261 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 262 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_3
	goto PellucaCity_Sailor_MemberCheck_4

PellucaCity_Sailor_MemberCheck_8:
# 256 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_7

PellucaCity_Sailor_MemberCheck_11:
# 257 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_10


PellucaCity_Sailor_MemberAccepted::
# 270 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 271 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 272 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 273 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberAccepted_Text_0
# 274 "data//maps/PellucaCity/scripts.pory"
	release
# 276 "data//maps/PellucaCity/scripts.pory"
	opendoor 3, 42
# 277 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 278 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_11
# 279 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 280 "data//maps/PellucaCity/scripts.pory"
	playse SE_EXIT
# 281 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S_ENTRANCE
# 282 "data//maps/PellucaCity/scripts.pory"
	closedoor 3, 42
# 283 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 285 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_QWILSQUAD_ENTRANCE
# 286 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Blocker::
# 301 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Text_0
	end


PellucaCity_Blocker_Trigger::
# 305 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 10
	goto_if_eq PellucaCity_Blocker_Trigger_2
# 307 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_BLOCKER, PellucaCity_MayorFight_Trigger_Movement_7
# 308 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 309 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Trigger_Text_0
# 310 "data//maps/PellucaCity/scripts.pory"
	release
# 311 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 312 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 313 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Blocker_Trigger_2:
	end


PellucaCityFlooded_TriggerDown::
# 333 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerDown_1
	end

PellucaCityFlooded_TriggerDown_1:
# 334 "data//maps/PellucaCity/scripts.pory"
	lockall
# 335 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 336 "data//maps/PellucaCity/scripts.pory"
	release
# 337 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_10
# 338 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 339 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerUp::
# 346 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerUp_1
	end

PellucaCityFlooded_TriggerUp_1:
# 347 "data//maps/PellucaCity/scripts.pory"
	lockall
# 348 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 349 "data//maps/PellucaCity/scripts.pory"
	release
# 350 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_11
# 351 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 352 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerLeft::
# 359 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerLeft_1
	end

PellucaCityFlooded_TriggerLeft_1:
# 360 "data//maps/PellucaCity/scripts.pory"
	lockall
# 361 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 362 "data//maps/PellucaCity/scripts.pory"
	release
# 363 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_9
# 364 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 365 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerRight::
# 372 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerRight_1
	end

PellucaCityFlooded_TriggerRight_1:
# 373 "data//maps/PellucaCity/scripts.pory"
	lockall
# 374 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 375 "data//maps/PellucaCity/scripts.pory"
	release
# 376 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 377 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 378 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_A::
# 385 "data//maps/PellucaCity/scripts.pory"
	lockall
# 386 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 387 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_A_Text_0
# 388 "data//maps/PellucaCity/scripts.pory"
	release
# 390 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 391 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 392 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 394 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 395 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 397 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_B::
# 401 "data//maps/PellucaCity/scripts.pory"
	lockall
# 402 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 403 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_B_Text_0
# 404 "data//maps/PellucaCity/scripts.pory"
	release
# 406 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 407 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 408 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 410 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 411 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 413 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_C::
# 417 "data//maps/PellucaCity/scripts.pory"
	lockall
# 418 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 419 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_C_Text_0
# 420 "data//maps/PellucaCity/scripts.pory"
	release
# 422 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 423 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 424 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 426 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 427 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 429 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_D::
# 433 "data//maps/PellucaCity/scripts.pory"
	lockall
# 434 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 435 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_D_Text_0
# 436 "data//maps/PellucaCity/scripts.pory"
	release
# 438 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 439 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 440 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 442 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 443 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 445 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_MainEvent::
# 450 "data//maps/PellucaCity/scripts.pory"
	lockall
# 451 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 4
# 453 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 454 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_0
# 455 "data//maps/PellucaCity/scripts.pory"
	release
# 456 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 459 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 460 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_MainEvent_Movement_0
# 462 "data//maps/PellucaCity/scripts.pory"
	delay 60
# 465 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 466 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_2
# 467 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 468 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_3
# 469 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 470 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_4
# 471 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 472 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_5
# 473 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 474 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_6
# 477 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_6
# 478 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 479 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 480 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_7
# 481 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 482 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 483 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 484 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_8
# 487 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_CITIZEN, PellucaCityFlooded_MainEvent_Movement_1
# 488 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 489 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_9
# 490 "data//maps/PellucaCity/scripts.pory"
	release
# 491 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 493 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_5
# 494 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_5
# 495 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 496 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 497 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 498 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 500 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 501 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_10
# 502 "data//maps/PellucaCity/scripts.pory"
	release
# 504 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_7
# 505 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_7
# 506 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_7
# 507 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_7
# 508 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_7
# 509 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_7
# 510 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 511 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 513 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 514 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_11
# 515 "data//maps/PellucaCity/scripts.pory"
	release
# 517 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 520 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_12
# 521 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_13
# 522 "data//maps/PellucaCity/scripts.pory"
	release
# 523 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 525 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_5
# 526 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_5
# 527 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_5
# 528 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_5
# 529 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCityFlooded_MainEvent_Movement_2
# 530 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 531 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_5
# 533 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 534 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_14
# 535 "data//maps/PellucaCity/scripts.pory"
	release
# 537 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_FL_JANIA
# 538 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Movement_3
# 539 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 541 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_4
# 542 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_4
# 543 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_4
# 544 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_4
# 545 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_4
# 546 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCityFlooded_MainEvent_Movement_4
# 547 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_5
# 548 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_4
# 550 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_7
# 551 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 552 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 553 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_15
# 554 "data//maps/PellucaCity/scripts.pory"
	release
# 555 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 557 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_7
# 558 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 559 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 560 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_16
# 561 "data//maps/PellucaCity/scripts.pory"
	release
# 562 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 564 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 565 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_18
# 566 "data//maps/PellucaCity/scripts.pory"
	release
# 567 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 569 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Movement_6
# 570 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCityFlooded_MainEvent_Movement_6
# 571 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 572 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 574 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 575 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_19
# 576 "data//maps/PellucaCity/scripts.pory"
	release
# 577 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 578 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Movement_4
# 579 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 580 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 581 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 582 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_20
# 583 "data//maps/PellucaCity/scripts.pory"
	release
# 584 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_SYS_SURF_ENABLED
# 585 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_HM03
# 586 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 587 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_4
# 588 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 589 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 590 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_21
# 591 "data//maps/PellucaCity/scripts.pory"
	release
# 592 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 595 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Movement_7
# 596 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 597 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCityFlooded_MainEvent_Movement_8
# 598 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 601 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Movement_5
# 602 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCityFlooded_MainEvent_Movement_4
# 603 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 604 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 605 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_22
# 606 "data//maps/PellucaCity/scripts.pory"
	release
# 607 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 608 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 609 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_23
# 610 "data//maps/PellucaCity/scripts.pory"
	release
# 611 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 612 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 613 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_24
# 614 "data//maps/PellucaCity/scripts.pory"
	release
# 615 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 616 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 617 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_24
# 618 "data//maps/PellucaCity/scripts.pory"
	release
# 619 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 621 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_5
# 622 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_5
# 623 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 624 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_25
# 625 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 626 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_26
# 627 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 628 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_27
# 629 "data//maps/PellucaCity/scripts.pory"
	release
# 632 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 633 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_Mayor::
# 639 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 640 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Mayor_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_QwilBoss::
# 644 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 645 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_QwilBoss_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC1::
# 649 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC2::
# 653 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC3::
# 657 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC4::
# 661 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSailor::
# 665 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSailor_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_A::
# 670 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_A_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_B::
# 674 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_B_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_C::
# 678 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_C_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_D::
# 682 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_D_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_Complete_Trigger::
# 689 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 8
	goto_if_eq PellucaCityFlooded_Complete_Trigger_2
	end

PellucaCityFlooded_Complete_Trigger_2:
# 691 "data//maps/PellucaCity/scripts.pory"
	lockall
# 692 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Movement_8
# 693 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_Complete_Trigger_Movement_0
# 694 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 695 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 698 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 699 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_0
# 700 "data//maps/PellucaCity/scripts.pory"
	release
# 701 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 704 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 705 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_1
# 706 "data//maps/PellucaCity/scripts.pory"
	release
# 707 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 709 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 710 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_1
# 711 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 715 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_7
# 716 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_7
# 717 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_7
# 718 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_7
# 719 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_7
# 720 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_7
# 721 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 722 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 724 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 725 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_2
# 726 "data//maps/PellucaCity/scripts.pory"
	release
# 727 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 729 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 730 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 731 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 732 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 734 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_6
# 735 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 736 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 737 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 738 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_3
# 739 "data//maps/PellucaCity/scripts.pory"
	release
# 740 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 743 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 744 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 745 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 746 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 747 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_4
# 748 "data//maps/PellucaCity/scripts.pory"
	release
# 749 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 751 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 752 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_5
# 753 "data//maps/PellucaCity/scripts.pory"
	release
# 754 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 758 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 9
# 759 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 0
# 761 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_REGULAR_CITIZENS
# 762 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZENS
# 764 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 765 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 766 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 767 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 769 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_PC_CHARS
# 772 "data//maps/PellucaCity/scripts.pory"
	warp MAP_PELLUCA_CITY_POKEMON_CENTER, 7, 6
# 774 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Greta_Trigger0::
# 804 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger0_2
# 806 "data//maps/PellucaCity/scripts.pory"
	lockall
# 807 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger0_Movement_0
# 808 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 809 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_4
# 810 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 811 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger0_2:
	end


PellucaCity_Greta_Trigger1::
# 815 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger1_2
# 817 "data//maps/PellucaCity/scripts.pory"
	lockall
# 818 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger1_Movement_0
# 819 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 820 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_5
# 821 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 822 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger1_2:
	end


PellucaCity_Greta_Trigger2::
# 826 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger2_2
# 828 "data//maps/PellucaCity/scripts.pory"
	lockall
# 829 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger2_Movement_0
# 830 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 831 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_5
# 832 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 833 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger2_2:
	end


PellucaCity_Greta_Main::
# 838 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 839 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_Main_Text_1
# 840 "data//maps/PellucaCity/scripts.pory"
	release
# 841 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 842 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 843 "data//maps/PellucaCity/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 844 "data//maps/PellucaCity/scripts.pory"
	release
# 845 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 847 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 851 "data//maps/PellucaCity/scripts.pory"
	release
# 852 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_MayorFight_Trigger_Movement_7
# 853 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 854 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 855 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 856 "data//maps/PellucaCity/scripts.pory"
	release
# 857 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 858 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 859 "data//maps/PellucaCity/scripts.pory"
	removeobject 27
# 860 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 861 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 863 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 883 "data//maps/PellucaCity/scripts.pory"
	lockall
# 884 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_2
# 890 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 891 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2
# 892 "data//maps/PellucaCity/scripts.pory"
	release
# 893 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 894 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 895 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 896 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 897 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3, MSGBOX_YESNO
# 898 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_6
# 907 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Movement_5
# 908 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 909 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 910 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_5:
# 912 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 913 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 914 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 915 "data//maps/PellucaCity/scripts.pory"
	release
# 916 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 917 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 918 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 919 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 920 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 921 "data//maps/PellucaCity/scripts.pory"
	release
# 922 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 923 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 924 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_8
# 925 "data//maps/PellucaCity/scripts.pory"
	release
# 926 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 927 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Movement_5
# 928 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
PellucaCity_EventScripts_Gabrielle_1:
# 930 "data//maps/PellucaCity/scripts.pory"
	releaseall
	return

PellucaCity_EventScripts_Gabrielle_2:
# 885 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 886 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 887 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_1

PellucaCity_EventScripts_Gabrielle_6:
# 900 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Movement_5
# 901 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 902 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 903 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 904 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_5


PellucaCity_Zorua::
# 935 "data//maps/PellucaCity/scripts.pory"
	lockall
# 936 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 937 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_NORMAL
# 938 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 939 "data//maps/PellucaCity/scripts.pory"
	release
# 940 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCityFlooded_MainEvent_Movement_5
# 941 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 942 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 958 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 959 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC1::
# 972 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC2::
# 977 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC3::
# 982 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC4::
# 987 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC5::
# 992 "data//maps/PellucaCity/scripts.pory"
	lockall
# 993 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 994 "data//maps/PellucaCity/scripts.pory"
	release
# 995 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 996 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 997 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 998 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 999 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_1
# 1000 "data//maps/PellucaCity/scripts.pory"
	release
# 1001 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1002 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 1003 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1004 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1005 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_2, MSGBOX_NPC
# 1006 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 1011 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC7::
# 1016 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC8::
# 1021 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_Sealeo::
# 1026 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1027 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1028 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 1029 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0, MSGBOX_NPC
# 1030 "data//maps/PellucaCity/scripts.pory"
	release
# 1031 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_MayorFight_Trigger_Movement_4
# 1032 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1033 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 1041 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullGirl::
# 1050 "data//maps/PellucaCity/scripts.pory"
	lock
# 1051 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1052 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 1053 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 1055 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 1069 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5, MSGBOX_NPC
PellucaCity_WingullGirl_1:
# 1072 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 1057 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_MayorFight_Trigger_Movement_5
# 1058 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 1059 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 1060 "data//maps/PellucaCity/scripts.pory"
	release
# 1061 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_MayorFight_Trigger_Movement_7
# 1062 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_MayorFight_Trigger_Movement_7
# 1063 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1064 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1065 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 1066 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 1067 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 1077 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullCritique::
# 1082 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC10::
# 1095 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC10_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC11::
# 1101 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_CITY_TM_GIVER, PellucaCity_NPC11_2
# 1106 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_1, MSGBOX_NPC
# 1107 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_TM01
# 1108 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_CITY_TM_GIVER
# 1109 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_2, MSGBOX_NPC
	end

PellucaCity_NPC11_2:
# 1102 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC12::
# 1115 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC12_Text_0, MSGBOX_NPC
	end


PellucaCity_Stantler::
# 1120 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 1121 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Stantler_Text_0, MSGBOX_NPC
	end


PellucaCity_PostGymEvent_Trigger::
# 1148 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_POSTGYM, PellucaCity_PostGymEvent_Trigger_2
# 1150 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PellucaCity_PostGymEvent_Trigger_5
	end

PellucaCity_PostGymEvent_Trigger_2:
	end

PellucaCity_PostGymEvent_Trigger_5:
# 1151 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1154 "data//maps/PellucaCity/scripts.pory"
	opendoor 37, 8
# 1155 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 1158 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_FL_JANIA
# 1159 "data//maps/PellucaCity/scripts.pory"
	setobjectxy LOCALID_FL_JANIA, 37, 8
# 1161 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_10
# 1162 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1165 "data//maps/PellucaCity/scripts.pory"
	closedoor 37, 8
# 1167 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 1168 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1170 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 1171 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_0
# 1172 "data//maps/PellucaCity/scripts.pory"
	release
# 1173 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_PostGymEvent_Trigger_Movement_0
# 1174 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 1175 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1176 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1177 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_5
# 1178 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1179 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1180 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 1181 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_1
# 1182 "data//maps/PellucaCity/scripts.pory"
	release
# 1184 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1185 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_PostGymEvent_Trigger_Movement_1
# 1186 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_0
# 1187 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1189 "data//maps/PellucaCity/scripts.pory"
	opendoor 37, 8
# 1190 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 1193 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_GAB
# 1194 "data//maps/PellucaCity/scripts.pory"
	setobjectxy LOCALID_GAB, 37, 8
# 1195 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_2
# 1196 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1197 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1198 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1199 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_2
# 1200 "data//maps/PellucaCity/scripts.pory"
	release
# 1202 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_PostGymEvent_Trigger_Movement_3
# 1203 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1204 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Movement_4
# 1205 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1206 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1208 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1209 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_3
# 1210 "data//maps/PellucaCity/scripts.pory"
	release
# 1211 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_MayorFight_Trigger_Movement_7
# 1212 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1213 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1214 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1215 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_4
# 1216 "data//maps/PellucaCity/scripts.pory"
	release
# 1217 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1218 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_4
# 1219 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_4
# 1220 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1221 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1222 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1223 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_5
# 1224 "data//maps/PellucaCity/scripts.pory"
	release
# 1225 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_5
# 1226 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1227 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1229 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1232 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_FL_JANIA
# 1233 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_GAB
# 1236 "data//maps/PellucaCity/scripts.pory"
	startquest QUEST_STOP_TEAM_SOMBER
# 1237 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_POSTGYM
	end


PellucaCity_Red_GymBlock::
# 1254 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Red_GymBlock_Text_0, MSGBOX_NPC
	end


# 54 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_0:
# 54 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 54 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 54 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 54 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 59 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_1:
# 59 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 59 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 67 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_2:
# 67 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 67 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 75 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_3:
# 75 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 83 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_4:
# 83 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 91 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_5:
# 91 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 99 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_6:
# 99 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 107 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_7:
# 107 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 118 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_8:
# 118 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 118 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 144 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_9:
# 144 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 147 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_10:
# 147 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 151 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_11:
# 151 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 153 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_12:
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 161 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_13:
# 161 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 161 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 169 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_14:
# 169 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 169 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 169 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 169 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 169 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 169 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 176 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_15:
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 183 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_16:
# 183 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 183 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 183 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 183 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 311 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Blocker_Trigger_Movement_0:
# 311 "data//maps/PellucaCity/scripts.pory"
	walk_right
	step_end

# 460 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_0:
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 460 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 487 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_1:
# 487 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 487 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_down
	step_end

# 529 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_2:
# 529 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 529 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 538 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_3:
# 538 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 538 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 538 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 538 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 538 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 538 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 538 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 538 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 538 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 538 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 546 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_4:
# 546 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 547 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_5:
# 547 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 569 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_6:
# 569 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 569 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_up
	step_end

# 595 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_7:
# 595 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 595 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 595 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 595 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 595 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 595 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 595 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 595 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 595 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 595 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 597 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_8:
# 597 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 597 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 693 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_0:
# 693 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 693 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 693 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 710 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_1:
# 710 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 710 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 729 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_2:
# 729 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 729 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 807 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_0:
# 807 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 807 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 807 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 807 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 807 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 807 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 807 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 818 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_0:
# 818 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 818 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 818 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 818 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 818 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 818 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 818 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 818 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 829 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger2_Movement_0:
# 829 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 829 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 829 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 829 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 829 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 829 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 829 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 857 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
# 857 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 857 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 857 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 857 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 857 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 857 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 857 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 857 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 996 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 996 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 996 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 996 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 996 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 996 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 996 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 996 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 996 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 996 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 996 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 996 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 1002 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 1002 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1002 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1002 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1002 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1002 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1002 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1002 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1002 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1002 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1002 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1002 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

# 1173 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_0:
# 1173 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 1173 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 1185 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_1:
# 1185 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1185 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1185 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 1185 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 1185 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 1195 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_2:
# 1195 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1195 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 1202 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_3:
# 1202 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1202 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1202 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1202 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 1219 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_4:
# 1219 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1219 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1219 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1219 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 1225 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_5:
# 1225 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1225 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1225 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

PellucaCity_MayorFight_Trigger_Text_0:
# 62 "data//maps/PellucaCity/scripts.pory"
	.string "Mayor$"

PellucaCity_MayorFight_Trigger_Text_1:
# 63 "data//maps/PellucaCity/scripts.pory"
	.string "But you can't be doing this to our\n"
	.string "citizens! This is our city!$"

PellucaCity_MayorFight_Trigger_Text_2:
# 70 "data//maps/PellucaCity/scripts.pory"
	.string "Q-squad Boss$"

PellucaCity_MayorFight_Trigger_Text_3:
# 71 "data//maps/PellucaCity/scripts.pory"
	.string "I've told you a hundred times, you\n"
	.string "paper-pushing wimp! You ain't doing a\l"
	.string "single thing right for our city, so don't\l"
	.string "you dare mess with the Qwilsquad!\p"
	.string "This is our turf - we don't give a hoot\n"
	.string "about you and your title!$"

PellucaCity_MayorFight_Trigger_Text_4:
# 79 "data//maps/PellucaCity/scripts.pory"
	.string "No! Enough is enough! I'm putting my\n"
	.string "foot down.\p"
	.string "You and your lot lot aren't allowed in\n"
	.string "Pelluca City any more!$"

PellucaCity_MayorFight_Trigger_Text_5:
# 86 "data//maps/PellucaCity/scripts.pory"
	.string "Q-squad Grunt$"

PellucaCity_MayorFight_Trigger_Text_6:
# 87 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! What a lame mayor!$"

PellucaCity_MayorFight_Trigger_Text_7:
# 95 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah! He really thinks he can tell us\n"
	.string "what to do!$"

PellucaCity_MayorFight_Trigger_Text_8:
# 103 "data//maps/PellucaCity/scripts.pory"
	.string "Go on boss - teach him a lesson!$"

PellucaCity_MayorFight_Trigger_Text_9:
# 111 "data//maps/PellucaCity/scripts.pory"
	.string "You heard 'em Mayor. Looks like my boys\n"
	.string "want me to prove that we own this city!\p"
	.string "Wanna try me? Right here?$"

PellucaCity_MayorFight_Trigger_Text_10:
# 123 "data//maps/PellucaCity/scripts.pory"
	.string "Nono - see, I'm not - look, I'm just\n"
	.string "asking for a little cooperation and -$"

PellucaCity_MayorFight_Trigger_Text_11:
# 131 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! Look at the wimp! Poor guy.$"

PellucaCity_MayorFight_Trigger_Text_12:
# 139 "data//maps/PellucaCity/scripts.pory"
	.string "Got it, mayor? You're not in charge here.\p"
	.string "I am! And from now on, this town belongs\n"
	.string "to the Qwilsquad!$"

PellucaCity_MayorFight_Trigger_Text_13:
# 165 "data//maps/PellucaCity/scripts.pory"
	.string "Oh - a tourist! Were you standing there\n"
	.string "the whole time?\p"
	.string "...\p"
	.string "I'm sorry you had to witness that.\n"
	.string "Y-you know, the restaurant here is\l"
	.string "famous! You should give it a try.$"

PellucaCity_MayorFight_Trigger_Text_14:
# 173 "data//maps/PellucaCity/scripts.pory"
	.string "Sigh...what will I do?$"

PellucaCity_Sailor_Entrance_Text_0:
# 214 "data//maps/PellucaCity/scripts.pory"
	.string "Beat it, kid! This is private property\n"
	.string "belonging to the Qwilsquad.$"

PellucaCity_Sailor_Multichoice_Text_0:
# 224 "data//maps/PellucaCity/scripts.pory"
	.string "Only Qwilsquad members can enter!$"

PellucaCity_Sailor_Multichoice_Text_1:
# 226 "data//maps/PellucaCity/scripts.pory"
	.string "What's a Qwilsquad?$"

PellucaCity_Sailor_Multichoice_Text_2:
# 226 "data//maps/PellucaCity/scripts.pory"
	.string "I'm a member!$"

PellucaCity_Sailor_QwilsquadExplanation_Text_0:
# 233 "data//maps/PellucaCity/scripts.pory"
	.string "You interested in joining or something,\n"
	.string "kid? The Qwilsquad is all about trust\l"
	.string "and brotherhood. You gotta have each\l"
	.string "other's backs! And you gotta have a\l"
	.string "Qwilfish of course.\p"
	.string "We're from Pelluca, but we went down to\n"
	.string "Rivetshore to sail. Now we're back, and\l"
	.string "we're not happy with how the mayor is\l"
	.string "bungling his job! So we're taking\l"
	.string "matters into our own hands.$"

PellucaCity_Sailor_MemberCheck_Text_0:
# 238 "data//maps/PellucaCity/scripts.pory"
	.string "Heh? A pipsqueak like you is in the\n"
	.string "squad? You a new member or something?\l"
	.string "You got any proof?$"

PellucaCity_Sailor_MemberCheck_Text_1:
# 242 "data//maps/PellucaCity/scripts.pory"
	.string "Then beat it, kid!$"

PellucaCity_Sailor_MemberCheck_Text_2:
# 246 "data//maps/PellucaCity/scripts.pory"
	.string "Show me!$"

PellucaCity_Sailor_MemberCheck_Text_3:
# 262 "data//maps/PellucaCity/scripts.pory"
	.string "That don't look like no Qwilfish to me!\p"
	.string "Beat it, kid!$"

PellucaCity_Sailor_MemberAccepted_Text_0:
# 273 "data//maps/PellucaCity/scripts.pory"
	.string "Now that's what I'm talking about!\n"
	.string "You're one of us, kid. Go on, get inside!$"

PellucaCity_Blocker_Text_0:
# 301 "data//maps/PellucaCity/scripts.pory"
	.string "This is our city! Got any problems?$"

PellucaCity_Blocker_Trigger_Text_0:
# 309 "data//maps/PellucaCity/scripts.pory"
	.string "Hey kid, where d'you think yer goin?\n"
	.string "There's a toll if you wanna get out.\p"
	.string "Yeah, that's right!\n"
	.string "You gotta pay 999999.\p"
	.string "Ain't got the money?\p"
	.string "Then get packing!$"

PellucaCityFlooded_SaveCitizen_A_Text_0:
# 387 "data//maps/PellucaCity/scripts.pory"
	.string "Help! Help! Over here!\p"
	.string "...\p"
	.string "Thank you so much - I'm saved!$"

PellucaCityFlooded_SaveCitizen_B_Text_0:
# 403 "data//maps/PellucaCity/scripts.pory"
	.string "I can't stay afloat any more!\p"
	.string "...\p"
	.string "Just in time!$"

PellucaCityFlooded_SaveCitizen_C_Text_0:
# 419 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh! It's too cold!\p"
	.string "...\p"
	.string "Waah! Wahh! It was so scary!$"

PellucaCityFlooded_SaveCitizen_D_Text_0:
# 435 "data//maps/PellucaCity/scripts.pory"
	.string "Help! Someone save me!\p"
	.string "...\p"
	.string "Yaay! You came!$"

PellucaCityFlooded_MainEvent_Text_0:
# 454 "data//maps/PellucaCity/scripts.pory"
	.string "What on earth is this?$"

PellucaCityFlooded_MainEvent_Text_1:
# 465 "data//maps/PellucaCity/scripts.pory"
	.string "Citizen$"

PellucaCityFlooded_MainEvent_Text_2:
# 466 "data//maps/PellucaCity/scripts.pory"
	.string "What a disaster!\p"
	.string "How could we be so unlucky!$"

PellucaCityFlooded_MainEvent_Text_3:
# 468 "data//maps/PellucaCity/scripts.pory"
	.string "What happened?$"

PellucaCityFlooded_MainEvent_Text_4:
# 470 "data//maps/PellucaCity/scripts.pory"
	.string "A Mega Sharpedo came rampaging down\n"
	.string "from the Ivy River and kicked up a\l"
	.string "storm! The riverbanks have flooded.\p"
	.string "The city's underwater!$"

PellucaCityFlooded_MainEvent_Text_5:
# 472 "data//maps/PellucaCity/scripts.pory"
	.string "Is everyone safe?$"

PellucaCityFlooded_MainEvent_Text_6:
# 474 "data//maps/PellucaCity/scripts.pory"
	.string "No - there are still four people in the\n"
	.string "water! We have to save them fast!$"

PellucaCityFlooded_MainEvent_Text_7:
# 480 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, go on Mayor. Go save them!$"

PellucaCityFlooded_MainEvent_Text_8:
# 484 "data//maps/PellucaCity/scripts.pory"
	.string "W-what do you mean? Weren't you the\n"
	.string "one in control of this city?$"

PellucaCityFlooded_MainEvent_Text_9:
# 489 "data//maps/PellucaCity/scripts.pory"
	.string "ENOUGH!$"

PellucaCityFlooded_MainEvent_Text_10:
# 501 "data//maps/PellucaCity/scripts.pory"
	.string "While you two bicker, it's us that pays\n"
	.string "the price every time! Both of you are\l"
	.string "strong - a tough trainer and a smart\l"
	.string "politician - and yet, neither of you\l"
	.string "bother to actually do anything for us\l"
	.string "citizens! And now people are in danger\l"
	.string "and you're still fighting! We've all had\l"
	.string "it upto here with you two!$"

PellucaCityFlooded_MainEvent_Text_11:
# 514 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah!\p"
	.string "Hear hear!$"

PellucaCityFlooded_MainEvent_Text_12:
# 520 "data//maps/PellucaCity/scripts.pory"
	.string "???$"

PellucaCityFlooded_MainEvent_Text_13:
# 521 "data//maps/PellucaCity/scripts.pory"
	.string "I agree too.$"

PellucaCityFlooded_MainEvent_Text_14:
# 534 "data//maps/PellucaCity/scripts.pory"
	.string "Is that Jania?\p"
	.string "Yeah! It's the Gym Leader! In the flesh!$"

PellucaCityFlooded_MainEvent_Text_15:
# 553 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, Jania! It's you! Finally. Please - you\n"
	.string "have to save those still drowning!$"

PellucaCityFlooded_MainEvent_Text_16:
# 560 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, Jania! You're an even stronger\n"
	.string "trainer than I am. You can do it!$"

PellucaCityFlooded_MainEvent_Text_17:
# 564 "data//maps/PellucaCity/scripts.pory"
	.string "Jania$"

PellucaCityFlooded_MainEvent_Text_18:
# 565 "data//maps/PellucaCity/scripts.pory"
	.string "No, I won't.$"

PellucaCityFlooded_MainEvent_Text_19:
# 575 "data//maps/PellucaCity/scripts.pory"
	.string "Don't look at me like that!\p"
	.string "You two want to be responsible for this\n"
	.string "city? Start right here, right now.\p"
	.string "Your citizens are miserably tired of\n"
	.string "both of you - when will you two change?$"

PellucaCityFlooded_MainEvent_Text_20:
# 582 "data//maps/PellucaCity/scripts.pory"
	.string "And who might you be?\p"
	.string "...\p"
	.string "{PLAYER}?\p"
	.string "...\p"
	.string "I see. So that's how you got involved\n"
	.string "with these two.\p"
	.string "Here, take this.$"

PellucaCityFlooded_MainEvent_Text_21:
# 590 "data//maps/PellucaCity/scripts.pory"
	.string "Consider this my help.\p"
	.string "Now I'm going to track the Mega\n"
	.string "Sharpedo down and make sure it doesn't\l"
	.string "harm anyone else.\p"
	.string "And the two of you - and {PLAYER} -\n"
	.string "take this chance to do the right thing!$"

PellucaCityFlooded_MainEvent_Text_22:
# 605 "data//maps/PellucaCity/scripts.pory"
	.string "Hmpf.$"

PellucaCityFlooded_MainEvent_Text_23:
# 609 "data//maps/PellucaCity/scripts.pory"
	.string "Tchah!$"

PellucaCityFlooded_MainEvent_Text_24:
# 613 "data//maps/PellucaCity/scripts.pory"
	.string "...$"

PellucaCityFlooded_MainEvent_Text_25:
# 624 "data//maps/PellucaCity/scripts.pory"
	.string "All of you! We've been letting you down.\n"
	.string "But now we're gonna prove that we care\l"
	.string "about this city with our actions!$"

PellucaCityFlooded_MainEvent_Text_26:
# 626 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} - the two of us will handle\n"
	.string "the citizens on the bridge and on land.\l"
	.string "Can you surf and rescue the four\l"
	.string "remaining citizens?\p"
	.string "Once you've picked all four of them up,\n"
	.string "come back here.$"

PellucaCityFlooded_MainEvent_Text_27:
# 628 "data//maps/PellucaCity/scripts.pory"
	.string "Good luck, {PLAYER}! We're on top of\n"
	.string "things here, so you go on into the river.\l"
	.string "You don't need to teach any Pokémon\l"
	.string "how to surf - just hop on the water!$"

PellucaCityFlooded_Mayor_Text_0:
# 640 "data//maps/PellucaCity/scripts.pory"
	.string "Have you saved everyone yet?\n"
	.string "Please hurry!$"

PellucaCityFlooded_QwilBoss_Text_0:
# 645 "data//maps/PellucaCity/scripts.pory"
	.string "We're keeping the citizens safe, so you\n"
	.string "go get the rest!$"

PellucaCityFlooded_NPC1_Text_0:
# 649 "data//maps/PellucaCity/scripts.pory"
	.string "The Mayor and the Qwilsquad boss\n"
	.string "working together? Hah! I'll believe it\l"
	.string "when I see it.$"

PellucaCityFlooded_NPC2_Text_0:
# 653 "data//maps/PellucaCity/scripts.pory"
	.string "If the two of them collaborate, maybe\n"
	.string "things will finally improve...$"

PellucaCityFlooded_NPC3_Text_0:
# 657 "data//maps/PellucaCity/scripts.pory"
	.string "I'm so scared - I hope you can save the\n"
	.string "others!$"

PellucaCityFlooded_NPC4_Text_0:
# 661 "data//maps/PellucaCity/scripts.pory"
	.string "I hate that Mega Sharpedo for doing\n"
	.string "this to my home!$"

PellucaCityFlooded_NPCSailor_Text_0:
# 665 "data//maps/PellucaCity/scripts.pory"
	.string "Go on, {PLAYER}! Hurry up and do what\n"
	.string "the boss says.$"

PellucaCityFlooded_NPCSaved_A_Text_0:
# 670 "data//maps/PellucaCity/scripts.pory"
	.string "You saved me! I can't thank you enough,\n"
	.string "trainer.$"

PellucaCityFlooded_NPCSaved_B_Text_0:
# 674 "data//maps/PellucaCity/scripts.pory"
	.string "I owe you, trainer. I'll never forget\n"
	.string "this!$"

PellucaCityFlooded_NPCSaved_C_Text_0:
# 678 "data//maps/PellucaCity/scripts.pory"
	.string "Brr - the water was so cold! How do\n"
	.string "Pokémonswim in it?$"

PellucaCityFlooded_NPCSaved_D_Text_0:
# 682 "data//maps/PellucaCity/scripts.pory"
	.string "When I grow up, I wanna be just like you!$"

PellucaCityFlooded_Complete_Trigger_Text_0:
# 699 "data//maps/PellucaCity/scripts.pory"
	.string "That's one, two, three...and four!\p"
	.string "Yup, we're all accounted for.$"

PellucaCityFlooded_Complete_Trigger_Text_1:
# 705 "data//maps/PellucaCity/scripts.pory"
	.string "Finally! Thank you {PLAYER}. You did\n"
	.string "us - the city of Pelluca - a great\l"
	.string "service. You're a hero!$"

PellucaCityFlooded_Complete_Trigger_Text_2:
# 725 "data//maps/PellucaCity/scripts.pory"
	.string "Thank you {PLAYER}!\p"
	.string "You're the best!$"

PellucaCityFlooded_Complete_Trigger_Text_3:
# 738 "data//maps/PellucaCity/scripts.pory"
	.string "It looks like we're all safe for now.$"

PellucaCityFlooded_Complete_Trigger_Text_4:
# 747 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah. All that remains is to wait until\n"
	.string "the water recedes, and then we can go\l"
	.string "back to normal.\p"
	.string "Come, shall we wait in the\n"
	.string "PokémonCenter until then?$"

PellucaCityFlooded_Complete_Trigger_Text_5:
# 752 "data//maps/PellucaCity/scripts.pory"
	.string "Sounds like a good idea. {PLAYER} here\n"
	.string "needs some rest after everything\l"
	.string "that's just happened!$"

PellucaCity_Greta_Main_Text_0:
# 838 "data//maps/PellucaCity/scripts.pory"
	.string "Greta$"

PellucaCity_Greta_Main_Text_1:
# 839 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, it's you again, {PLAYER}! Fancy\n"
	.string "seeing you in these parts. Route 6 was a\l"
	.string "tough trek, eh?$"

PellucaCity_Greta_GottaGo_Text_0:
# 855 "data//maps/PellucaCity/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 885 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 886 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh, I love the smell of the river!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 891 "data//maps/PellucaCity/scripts.pory"
	.string "I grew up here on this cliff without my\n"
	.string "parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "Those grunts were really vicious to me.\n"
	.string "I was so scared I would lose Zorua!$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 897 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the Clefairy?$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 903 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah...I doubt he'd ever forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 909 "data//maps/PellucaCity/scripts.pory"
	.string "You're just trying to make me feel\n"
	.string "better, aren't you? I don't need your\l"
	.string "pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 914 "data//maps/PellucaCity/scripts.pory"
	.string "After getting kicked out of Team\n"
	.string "Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 920 "data//maps/PellucaCity/scripts.pory"
	.string "I want you to have this. As a thank you.\n"
	.string "For saving me - not just once, but so\l"
	.string "many times. You're a strong trainer, but\l"
	.string "more importantly - you're a good person.\l"
	.string "I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_8:
# 924 "data//maps/PellucaCity/scripts.pory"
	.string "The choices we make define who we are.\n"
	.string "Once we lock in, we can't change.\p"
	.string "I can't erase what I've done, but I'm\n"
	.string "going to make a better choice this time.\p"
	.string "I suppose you're going to head to the\n"
	.string "Mirroh Base Camp from here? Team\l"
	.string "Somber must've reached there already.\p"
	.string "Best of luck, {PLAYER}.$"

PellucaCity_Zorua_Text_0:
# 938 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle's Zorua looks content.\n"
	.string "Life is more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 959 "data//maps/PellucaCity/scripts.pory"
	.string "Lycanroc is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 972 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 977 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "Pelluca Restaurant?\p"
	.string "...that's the only thing our mayor cares\n"
	.string "about promoting.$"

PellucaCity_NPC3_Text_0:
# 982 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in Mt. Mirroh but I\n"
	.string "can't go there without a Cable Car Pass.\l"
	.string "So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 987 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge is too small. It's nothing\n"
	.string "like the cycling roads in other regions!\l"
	.string "Why doesn't the mayor do anything?$"

PellucaCity_NPC5_Text_0:
# 993 "data//maps/PellucaCity/scripts.pory"
	.string "Look over there...$"

PellucaCity_NPC5_Text_1:
# 999 "data//maps/PellucaCity/scripts.pory"
	.string "Jania, the Gym Leader of Pelluca City\n"
	.string "had her gym constructed on a separate\l"
	.string "island.$"

PellucaCity_NPC5_Text_2:
# 1005 "data//maps/PellucaCity/scripts.pory"
	.string "She never gets involved in city affairs!$"

PellucaCity_NPC6_Text_0:
# 1011 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the Mirroh Base Camp?\n"
	.string "You'll have to take the cable car just\l"
	.string "past the Poké Mart.\p"
	.string "I heard they're closing the gym there\n"
	.string "though.$"

PellucaCity_NPC7_Text_0:
# 1016 "data//maps/PellucaCity/scripts.pory"
	.string "With the way things are, I'm half in\n"
	.string "support of the Qwilsquad. I know\l"
	.string "they're bullies, but maybe they'll do\l"
	.string "something good for the city.$"

PellucaCity_NPC8_Text_0:
# 1021 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "Mega Sharpedo's going to scare all the\l"
	.string "fish away? I wish our mayor would do\l"
	.string "something about it.$"

PellucaCity_Sealeo_Text_0:
# 1029 "data//maps/PellucaCity/scripts.pory"
	.string "Sealeo wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 1041 "data//maps/PellucaCity/scripts.pory"
	.string "This is the Pelluca Fishery! But it's\n"
	.string "closed due to the Mega Sharpedo\l"
	.string "attacks.$"

PellucaCity_WingullGirl_Text_0:
# 1052 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "Wingulls over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 1053 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 1053 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 1059 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a Wingull!$"

PellucaCity_WingullGirl_Text_4:
# 1065 "data//maps/PellucaCity/scripts.pory"
	.string "The Wingull gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 1069 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 1077 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "Wingulls. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 1082 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at Pokémon...that's poor\l"
	.string "parenting.$"

PellucaCity_NPC10_Text_0:
# 1095 "data//maps/PellucaCity/scripts.pory"
	.string "I ate too many apple tarts! I'm too full.\n"
	.string "Whoever said people have a second\l"
	.string "stomach for dessert was lying!$"

PellucaCity_NPC11_Text_0:
# 1102 "data//maps/PellucaCity/scripts.pory"
	.string "Life is too short to worry!$"

PellucaCity_NPC11_Text_1:
# 1106 "data//maps/PellucaCity/scripts.pory"
	.string "The Pelluca Gym is across the\n"
	.string "water...when I was younger, I tried to\l"
	.string "challenge Jania many times, but I could\l"
	.string "never win. She was my classmate, you\l"
	.string "know? We grew up in Galecrest City\l"
	.string "together. She went on to become a big\l"
	.string "Gym Leader and I moved here too, with a\l"
	.string "regular family and a regular job.\l"
	.string "Whenever I look off at the gym, I\l"
	.string "wonder...\p"
	.string "I don't battle anymore. Maybe you might\n"
	.string "like to use this.$"

PellucaCity_NPC11_Text_2:
# 1109 "data//maps/PellucaCity/scripts.pory"
	.string "It's time for me to let go.$"

PellucaCity_NPC12_Text_0:
# 1115 "data//maps/PellucaCity/scripts.pory"
	.string "The mayor isn't maintaining the city one\n"
	.string "bit! My Stantler eating the overgrown\l"
	.string "flowers is actually contributing to\l"
	.string "city maintenance.$"

PellucaCity_Stantler_Text_0:
# 1121 "data//maps/PellucaCity/scripts.pory"
	.string "Stantler is nonchalantly chomping on\n"
	.string "the flowers.$"

PellucaCity_PostGymEvent_Trigger_Text_0:
# 1171 "data//maps/PellucaCity/scripts.pory"
	.string "Excuse me.$"

PellucaCity_PostGymEvent_Trigger_Text_1:
# 1181 "data//maps/PellucaCity/scripts.pory"
	.string "Where am I going?\p"
	.string "To Rivetshore City. All the Gym Leaders\n"
	.string "have been called there.$"

PellucaCity_PostGymEvent_Trigger_Text_2:
# 1199 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER}! Over here!$"

PellucaCity_PostGymEvent_Trigger_Text_3:
# 1209 "data//maps/PellucaCity/scripts.pory"
	.string "I overheard Jania talking to someone!\p"
	.string "...\p"
	.string "What? I wasn't eavesdropping!\n"
	.string "She was just nearby.\p"
	.string "She was talking to the eighth Gym\n"
	.string "Leader. They mentioned Team Somber!\p"
	.string "They must be upto something in\n"
	.string "Rivetshore City!\p"
	.string "...$"

PellucaCity_PostGymEvent_Trigger_Text_4:
# 1215 "data//maps/PellucaCity/scripts.pory"
	.string "You're off the case?\p"
	.string "...\p"
	.string "So?\p"
	.string "The {PLAYER} I know wouldn't be\n"
	.string "stopped by something like that!\p"
	.string "You taught me the difference between\n"
	.string "right and wrong. Have you forgotten why\l"
	.string "you're doing this in the first place?\p"
	.string "It was to find YOUR Professor. You\n"
	.string "don't need anybody's permission!\p"
	.string "...\p"
	.string "I'm not letting you give up, {PLAYER}.\p"
	.string "I'm going to Rivetshore City to get the\n"
	.string "final gym badge. It's south of Pelluca\l"
	.string "City - you can get there by surfing.\p"
	.string "I'll be waiting for you!$"

PellucaCity_PostGymEvent_Trigger_Text_5:
# 1223 "data//maps/PellucaCity/scripts.pory"
	.string "You'd better be there, {PLAYER}!$"

PellucaCity_Red_GymBlock_Text_0:
# 1254 "data//maps/PellucaCity/scripts.pory"
	.string "Jania's gone to deal with the Mega\n"
	.string "Sharpedo. You'll find her up in Ivy River\l"
	.string "somewhere.$"

PellucaCityFlooded_TriggerText::
# 329 "data//maps/PellucaCity/scripts.pory"
	.string "I need to save the drowning citizens!$"
