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
# 23 "data//maps/PellucaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PellucaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PellucaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_VISITED_PELLUCA_CITY
# 21 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_SetLayout
	return

PellucaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data//maps/PellucaCity/scripts.pory"
	map_script_2 VAR_PELLUCA_MAYOR_QUEST, 3, PellucaCityFlooded_MainEvent
	.2byte 0


PellucaCity_SetLayout::
# 29 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCity_SetLayout_2
# 34 "data//maps/PellucaCity/scripts.pory"
	setmaplayoutindex LAYOUT_PELLUCA_CITY
PellucaCity_SetLayout_1:
	return

PellucaCity_SetLayout_2:
# 30 "data//maps/PellucaCity/scripts.pory"
	setmaplayoutindex LAYOUT_PELLUCA_CITY_FLOODED
# 31 "data//maps/PellucaCity/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 32 "data//maps/PellucaCity/scripts.pory"
	doweather
	goto PellucaCity_SetLayout_1


PellucaCity_MayorFight_Trigger::
# 49 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_MAYOR_FIGHT, PellucaCity_MayorFight_Trigger_2
# 51 "data//maps/PellucaCity/scripts.pory"
	lockall
# 54 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 55 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_MayorFight_Trigger_Movement_0
# 56 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 57 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 60 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_1
# 61 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 62 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 63 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 64 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_1
# 65 "data//maps/PellucaCity/scripts.pory"
	release
# 66 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 68 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_2
# 69 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 70 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 71 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 72 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_3
# 73 "data//maps/PellucaCity/scripts.pory"
	release
# 74 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 76 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 77 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 78 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 79 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 80 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_4
# 81 "data//maps/PellucaCity/scripts.pory"
	release
# 82 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 84 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_4
# 85 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 86 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 87 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 88 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_6
# 89 "data//maps/PellucaCity/scripts.pory"
	release
# 90 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 92 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_5
# 93 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 94 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 95 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 96 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_7
# 97 "data//maps/PellucaCity/scripts.pory"
	release
# 98 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 100 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_6
# 101 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_6
# 102 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 103 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 104 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_8
# 105 "data//maps/PellucaCity/scripts.pory"
	release
# 106 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 108 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_7
# 109 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 110 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 111 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 112 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_9
# 113 "data//maps/PellucaCity/scripts.pory"
	release
# 114 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 116 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_7
# 117 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 118 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 119 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_8
# 120 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 121 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 123 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 124 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_10
# 125 "data//maps/PellucaCity/scripts.pory"
	release
# 126 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 128 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_6
# 129 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_6
# 130 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 131 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 132 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_11
# 133 "data//maps/PellucaCity/scripts.pory"
	release
# 134 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 136 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_7
# 137 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 138 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 139 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 140 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_12
# 141 "data//maps/PellucaCity/scripts.pory"
	release
# 142 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 145 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 146 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 147 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 148 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_10
# 149 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 150 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 151 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_9
# 152 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_11
# 153 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 154 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_12
# 155 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_12
# 156 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_12
# 157 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 162 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_13
# 163 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 164 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 165 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 166 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_13
# 167 "data//maps/PellucaCity/scripts.pory"
	release
# 168 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 170 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_14
# 171 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 172 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 173 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 174 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_14
# 175 "data//maps/PellucaCity/scripts.pory"
	release
# 176 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 177 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_15
# 178 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 179 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 183 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 184 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_MayorFight_Trigger_Movement_16
# 185 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 186 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 188 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_MAYOR
# 189 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S1
# 190 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S2
# 191 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S3
# 192 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_MAYOR_FIGHT
# 194 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_MayorFight_Trigger_2:
	end


PellucaCity_Sailor_Entrance::
# 211 "data//maps/PellucaCity/scripts.pory"
	lockall
# 212 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 214 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 215 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_Entrance_Text_0
# 216 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCity_Sailor_Entrance_2
# 217 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 1
	goto_if_eq PellucaCity_Sailor_Entrance_5
# 219 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_Multichoice
# 221 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_Entrance_2:
# 216 "data//maps/PellucaCity/scripts.pory"
	release
	end

PellucaCity_Sailor_Entrance_5:
# 217 "data//maps/PellucaCity/scripts.pory"
	release
	end


PellucaCity_Sailor_Multichoice::
# 225 "data//maps/PellucaCity/scripts.pory"
	message PellucaCity_Sailor_Multichoice_Text_0
# 226 "data//maps/PellucaCity/scripts.pory"
	waitmessage
# 227 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Sailor_Multichoice_Text_1, PellucaCity_Sailor_Multichoice_Text_2, PellucaCity_Sailor_Multichoice_Text_3
# 229 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_Multichoice_2
PellucaCity_Sailor_Multichoice_1:
# 230 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_Multichoice_5
PellucaCity_Sailor_Multichoice_4:
# 232 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_Multichoice_2:
# 229 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_QwilsquadExplanation
	goto PellucaCity_Sailor_Multichoice_1

PellucaCity_Sailor_Multichoice_5:
# 230 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberCheck
	goto PellucaCity_Sailor_Multichoice_4


PellucaCity_Sailor_QwilsquadExplanation::
# 236 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 237 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_QwilsquadExplanation_Text_0
# 238 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_Multichoice
	return


PellucaCity_Sailor_MemberCheck::
# 241 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 242 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_0, MSGBOX_YESNO
# 244 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_MemberCheck_2
PellucaCity_Sailor_MemberCheck_1:
# 248 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_MemberCheck_5
PellucaCity_Sailor_MemberCheck_4:
# 270 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_MemberCheck_2:
# 245 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 246 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_1
	goto PellucaCity_Sailor_MemberCheck_1

PellucaCity_Sailor_MemberCheck_5:
# 249 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 250 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_2
# 251 "data//maps/PellucaCity/scripts.pory"
	release
# 254 "data//maps/PellucaCity/scripts.pory"
	special ChoosePartyMon
# 255 "data//maps/PellucaCity/scripts.pory"
	waitstate
# 256 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 257 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 258 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 260 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_QWILFISH_HISUI
	goto_if_eq PellucaCity_Sailor_MemberCheck_8
PellucaCity_Sailor_MemberCheck_7:
# 261 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_OVERQWIL
	goto_if_eq PellucaCity_Sailor_MemberCheck_11
PellucaCity_Sailor_MemberCheck_10:
# 263 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 264 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 265 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 266 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_3
	goto PellucaCity_Sailor_MemberCheck_4

PellucaCity_Sailor_MemberCheck_8:
# 260 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_7

PellucaCity_Sailor_MemberCheck_11:
# 261 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_10


PellucaCity_Sailor_MemberAccepted::
# 274 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 275 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 276 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 277 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberAccepted_Text_0
# 278 "data//maps/PellucaCity/scripts.pory"
	release
# 280 "data//maps/PellucaCity/scripts.pory"
	opendoor 3, 42
# 281 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 282 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_11
# 283 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 284 "data//maps/PellucaCity/scripts.pory"
	playse SE_EXIT
# 285 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S_ENTRANCE
# 286 "data//maps/PellucaCity/scripts.pory"
	closedoor 3, 42
# 287 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 289 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_QWILSQUAD_ENTRANCE
# 290 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Blocker::
# 305 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Text_0
	end


PellucaCity_Blocker_Trigger::
# 309 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 10
	goto_if_eq PellucaCity_Blocker_Trigger_2
# 311 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_BLOCKER, PellucaCity_MayorFight_Trigger_Movement_7
# 312 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 313 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Trigger_Text_0
# 314 "data//maps/PellucaCity/scripts.pory"
	release
# 315 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 316 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 317 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Blocker_Trigger_2:
	end


PellucaCityFlooded_TriggerDown::
# 337 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerDown_1
	end

PellucaCityFlooded_TriggerDown_1:
# 338 "data//maps/PellucaCity/scripts.pory"
	lockall
# 339 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 340 "data//maps/PellucaCity/scripts.pory"
	release
# 341 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_10
# 342 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 343 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerUp::
# 350 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerUp_1
	end

PellucaCityFlooded_TriggerUp_1:
# 351 "data//maps/PellucaCity/scripts.pory"
	lockall
# 352 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 353 "data//maps/PellucaCity/scripts.pory"
	release
# 354 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_11
# 355 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 356 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerLeft::
# 363 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerLeft_1
	end

PellucaCityFlooded_TriggerLeft_1:
# 364 "data//maps/PellucaCity/scripts.pory"
	lockall
# 365 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 366 "data//maps/PellucaCity/scripts.pory"
	release
# 367 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_9
# 368 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 369 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerRight::
# 376 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerRight_1
	end

PellucaCityFlooded_TriggerRight_1:
# 377 "data//maps/PellucaCity/scripts.pory"
	lockall
# 378 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 379 "data//maps/PellucaCity/scripts.pory"
	release
# 380 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 381 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 382 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_A::
# 389 "data//maps/PellucaCity/scripts.pory"
	lockall
# 390 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 391 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_A_Text_0
# 392 "data//maps/PellucaCity/scripts.pory"
	release
# 395 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 397 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq PellucaCityFlooded_SaveCitizen_A_2
# 402 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_A_Movement_1
# 403 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 404 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
PellucaCityFlooded_SaveCitizen_A_1:
# 408 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 409 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 411 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCityFlooded_SaveCitizen_A_2:
# 398 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_A_Movement_0
# 399 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 400 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto PellucaCityFlooded_SaveCitizen_A_1


PellucaCityFlooded_SaveCitizen_B::
# 415 "data//maps/PellucaCity/scripts.pory"
	lockall
# 416 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 417 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_B_Text_0
# 418 "data//maps/PellucaCity/scripts.pory"
	release
# 420 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 422 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq PellucaCityFlooded_SaveCitizen_B_2
# 427 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_B_Movement_1
# 428 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 429 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
PellucaCityFlooded_SaveCitizen_B_1:
# 432 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 433 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 435 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCityFlooded_SaveCitizen_B_2:
# 423 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_B_Movement_0
# 424 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 425 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto PellucaCityFlooded_SaveCitizen_B_1


PellucaCityFlooded_SaveCitizen_C::
# 439 "data//maps/PellucaCity/scripts.pory"
	lockall
# 440 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 441 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_C_Text_0
# 442 "data//maps/PellucaCity/scripts.pory"
	release
# 445 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 447 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq PellucaCityFlooded_SaveCitizen_C_2
# 452 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_C_Movement_1
# 453 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 454 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
PellucaCityFlooded_SaveCitizen_C_1:
# 457 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 458 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 460 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCityFlooded_SaveCitizen_C_2:
# 448 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_C_Movement_0
# 449 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 450 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto PellucaCityFlooded_SaveCitizen_C_1


PellucaCityFlooded_SaveCitizen_D::
# 464 "data//maps/PellucaCity/scripts.pory"
	lockall
# 465 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 466 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_D_Text_0
# 467 "data//maps/PellucaCity/scripts.pory"
	release
# 470 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 472 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq PellucaCityFlooded_SaveCitizen_D_2
# 477 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_D_Movement_1
# 478 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 479 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
PellucaCityFlooded_SaveCitizen_D_1:
# 482 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 483 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 485 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCityFlooded_SaveCitizen_D_2:
# 473 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_D_Movement_0
# 474 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 475 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto PellucaCityFlooded_SaveCitizen_D_1


PellucaCityFlooded_MainEvent::
# 490 "data//maps/PellucaCity/scripts.pory"
	lockall
# 491 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 4
# 492 "data//maps/PellucaCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 494 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_SKIP_PELLUCA_CUTSCENE, PellucaCityFlooded_MainEvent_2
PellucaCityFlooded_MainEvent_1:
# 505 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCityFlooded_MainEvent_Cutscene
	return

PellucaCityFlooded_MainEvent_2:
# 495 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_0, MSGBOX_YESNO
# 496 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityFlooded_MainEvent_4
	goto PellucaCityFlooded_MainEvent_1

PellucaCityFlooded_MainEvent_4:
# 497 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_TO_WHITE
# 498 "data//maps/PellucaCity/scripts.pory"
	special EnterSafariMode
# 499 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 500 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_MainEvent_Cutscene::
# 510 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_SKIP_PELLUCA_CUTSCENE
# 512 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 513 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_0
# 514 "data//maps/PellucaCity/scripts.pory"
	release
# 515 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 518 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 519 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_MainEvent_Cutscene_Movement_0
# 521 "data//maps/PellucaCity/scripts.pory"
	delay 60
# 524 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 525 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_2
# 526 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 527 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_3
# 528 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 529 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_4
# 530 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 531 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_5
# 532 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 533 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_6
# 536 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_6
# 537 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 538 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 539 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_7
# 540 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 541 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 542 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 543 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_8
# 546 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_CITIZEN, PellucaCityFlooded_MainEvent_Cutscene_Movement_1
# 547 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 548 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_9
# 549 "data//maps/PellucaCity/scripts.pory"
	release
# 550 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 552 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_5
# 553 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_5
# 554 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 555 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 556 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 557 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 559 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 560 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_10
# 561 "data//maps/PellucaCity/scripts.pory"
	release
# 563 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_7
# 564 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_7
# 565 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_7
# 566 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_7
# 567 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_7
# 568 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_7
# 569 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 570 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 572 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 573 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_11
# 574 "data//maps/PellucaCity/scripts.pory"
	release
# 576 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 579 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_12
# 580 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_13
# 581 "data//maps/PellucaCity/scripts.pory"
	release
# 582 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 584 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_5
# 585 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_5
# 586 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_5
# 587 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_5
# 588 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCityFlooded_MainEvent_Cutscene_Movement_2
# 589 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 590 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_5
# 592 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 593 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_14
# 594 "data//maps/PellucaCity/scripts.pory"
	release
# 596 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_FL_JANIA
# 597 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Cutscene_Movement_3
# 598 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 600 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_4
# 601 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_4
# 602 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_4
# 603 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_4
# 604 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_4
# 605 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 606 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 607 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_4
# 609 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_7
# 610 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 611 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 612 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_15
# 613 "data//maps/PellucaCity/scripts.pory"
	release
# 614 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 616 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_7
# 617 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 618 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 619 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_16
# 620 "data//maps/PellucaCity/scripts.pory"
	release
# 621 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 623 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 624 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_18
# 625 "data//maps/PellucaCity/scripts.pory"
	release
# 626 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 628 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Cutscene_Movement_6
# 629 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCityFlooded_MainEvent_Cutscene_Movement_6
# 630 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 631 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 633 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 634 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_19
# 635 "data//maps/PellucaCity/scripts.pory"
	release
# 636 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 637 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 638 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 639 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 640 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 641 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_20
# 642 "data//maps/PellucaCity/scripts.pory"
	release
# 643 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_SYS_SURF_ENABLED
# 644 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_HM03
# 645 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 646 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_4
# 647 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 648 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 649 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_21
# 650 "data//maps/PellucaCity/scripts.pory"
	release
# 651 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 654 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Cutscene_Movement_7
# 655 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 656 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCityFlooded_MainEvent_Cutscene_Movement_8
# 657 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 660 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 661 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 662 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 663 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 664 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_22
# 665 "data//maps/PellucaCity/scripts.pory"
	release
# 666 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 667 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 668 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_23
# 669 "data//maps/PellucaCity/scripts.pory"
	release
# 670 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 671 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 672 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_24
# 673 "data//maps/PellucaCity/scripts.pory"
	release
# 674 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 675 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 676 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_24
# 677 "data//maps/PellucaCity/scripts.pory"
	release
# 678 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 680 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_5
# 681 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_5
# 682 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 683 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_25
# 684 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 685 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_26
# 686 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 687 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_27
# 688 "data//maps/PellucaCity/scripts.pory"
	release
# 689 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 690 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_28
# 691 "data//maps/PellucaCity/scripts.pory"
	release
# 693 "data//maps/PellucaCity/scripts.pory"
	completesubquest QUEST_PELLUCA_CITY, SUB_QUEST_2
# 695 "data//maps/PellucaCity/scripts.pory"
	special EnterSafariMode
# 696 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 697 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_Mayor::
# 703 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 704 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Mayor_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_QwilBoss::
# 708 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 709 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_QwilBoss_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC1::
# 713 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC2::
# 717 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC3::
# 721 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC4::
# 725 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSailor::
# 729 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSailor_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_A::
# 734 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_A_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_B::
# 738 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_B_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_C::
# 742 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_C_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_D::
# 746 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_D_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_EventScript_TimesUp::
# 750 "data//maps/PellucaCity/scripts.pory"
	lockall
# 751 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_EventScript_TimesUp_Text_0
# 752 "data//maps/PellucaCity/scripts.pory"
	release
# 754 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_REGULAR_CITIZENS
# 755 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZENS
# 757 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 758 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 759 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 760 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 762 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A
# 763 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B
# 764 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C
# 765 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D
# 767 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 1
# 769 "data//maps/PellucaCity/scripts.pory"
	delay 2
# 771 "data//maps/PellucaCity/scripts.pory"
	special ExitSafariMode
# 772 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 3
# 773 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 1
# 774 "data//maps/PellucaCity/scripts.pory"
	warp MAP_PELLUCA_CITY, 43, 28
# 775 "data//maps/PellucaCity/scripts.pory"
	waitstate
	end


PellucaCityFlooded_EventScript_TimesRunningOut::
# 780 "data//maps/PellucaCity/scripts.pory"
	lockall
# 781 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_EventScript_TimesRunningOut_Text_0
# 782 "data//maps/PellucaCity/scripts.pory"
	release
	end


PellucaCityFlooded_Complete_Trigger::
# 789 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 8
	goto_if_eq PellucaCityFlooded_Complete_Trigger_2
	end

PellucaCityFlooded_Complete_Trigger_2:
# 791 "data//maps/PellucaCity/scripts.pory"
	special ExitSafariMode
# 793 "data//maps/PellucaCity/scripts.pory"
	lockall
# 794 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Cutscene_Movement_8
# 795 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_Complete_Trigger_Movement_0
# 796 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 797 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 800 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 801 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_0
# 802 "data//maps/PellucaCity/scripts.pory"
	release
# 803 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 806 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 807 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_1
# 808 "data//maps/PellucaCity/scripts.pory"
	release
# 809 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 811 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 812 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_1
# 813 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 817 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_7
# 818 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_7
# 819 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_7
# 820 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_7
# 821 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_7
# 822 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_7
# 823 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 824 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 826 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 827 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_2
# 828 "data//maps/PellucaCity/scripts.pory"
	release
# 829 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 831 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 832 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 833 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 834 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 836 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_6
# 837 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 838 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 839 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 840 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_3
# 841 "data//maps/PellucaCity/scripts.pory"
	release
# 842 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 845 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 846 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 847 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 848 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 849 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_4
# 850 "data//maps/PellucaCity/scripts.pory"
	release
# 851 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 853 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 854 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_5
# 855 "data//maps/PellucaCity/scripts.pory"
	release
# 856 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 860 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 9
# 861 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 0
# 863 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_REGULAR_CITIZENS
# 864 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZENS
# 866 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 867 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 868 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 869 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 871 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_PC_CHARS
# 874 "data//maps/PellucaCity/scripts.pory"
	warp MAP_PELLUCA_CITY_POKEMON_CENTER, 7, 6
# 876 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Greta_Trigger0::
# 906 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger0_2
# 908 "data//maps/PellucaCity/scripts.pory"
	lockall
# 909 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger0_Movement_0
# 910 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 911 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 912 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 913 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger0_2:
	end


PellucaCity_Greta_Trigger1::
# 917 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger1_2
# 919 "data//maps/PellucaCity/scripts.pory"
	lockall
# 920 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger1_Movement_0
# 921 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 922 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 923 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 924 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger1_2:
	end


PellucaCity_Greta_Trigger2::
# 928 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger2_2
# 930 "data//maps/PellucaCity/scripts.pory"
	lockall
# 931 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger2_Movement_0
# 932 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 933 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 934 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 935 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger2_2:
	end


PellucaCity_Greta_Main::
# 940 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 941 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_Main_Text_1
# 942 "data//maps/PellucaCity/scripts.pory"
	release
# 943 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 944 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 945 "data//maps/PellucaCity/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 946 "data//maps/PellucaCity/scripts.pory"
	release
# 947 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 949 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 953 "data//maps/PellucaCity/scripts.pory"
	release
# 954 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_MayorFight_Trigger_Movement_7
# 955 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 956 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 957 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 958 "data//maps/PellucaCity/scripts.pory"
	release
# 959 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 960 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 961 "data//maps/PellucaCity/scripts.pory"
	removeobject 27
# 962 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 963 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 965 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 985 "data//maps/PellucaCity/scripts.pory"
	lockall
# 986 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_1
# 992 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 993 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2
# 994 "data//maps/PellucaCity/scripts.pory"
	release
# 995 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 996 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 997 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 998 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 999 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3, MSGBOX_YESNO
# 1000 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_5
# 1009 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 1010 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1011 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 1012 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_4:
# 1014 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 1015 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1016 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 1017 "data//maps/PellucaCity/scripts.pory"
	release
# 1018 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 1019 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1020 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 1021 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1022 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 1023 "data//maps/PellucaCity/scripts.pory"
	release
# 1024 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem
	return

PellucaCity_EventScripts_Gabrielle_1:
# 987 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 988 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 989 "data//maps/PellucaCity/scripts.pory"
	release
	return

PellucaCity_EventScripts_Gabrielle_5:
# 1002 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 1003 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 1004 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1005 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 1006 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_4


PellucaCity_Gab_ChoiceItem::
# 1029 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1030 "data//maps/PellucaCity/scripts.pory"
	message PellucaCity_Gab_ChoiceItem_Text_0
# 1031 "data//maps/PellucaCity/scripts.pory"
	waitmessage
# 1032 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Gab_ChoiceItem_Text_1, PellucaCity_Gab_ChoiceItem_Text_2, PellucaCity_Gab_ChoiceItem_Text_3
# 1033 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Gab_ChoiceItem_2
PellucaCity_Gab_ChoiceItem_1:
# 1034 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Gab_ChoiceItem_5
PellucaCity_Gab_ChoiceItem_4:
# 1035 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_Gab_ChoiceItem_8
PellucaCity_Gab_ChoiceItem_7:
# 1036 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem_Give
	return

PellucaCity_Gab_ChoiceItem_2:
# 1033 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_0x8006, ITEM_CHOICE_SPECS
	goto PellucaCity_Gab_ChoiceItem_1

PellucaCity_Gab_ChoiceItem_5:
# 1034 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_0x8006, ITEM_CHOICE_BAND
	goto PellucaCity_Gab_ChoiceItem_4

PellucaCity_Gab_ChoiceItem_8:
# 1035 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_0x8006, ITEM_CHOICE_SCARF
	goto PellucaCity_Gab_ChoiceItem_7


PellucaCity_Gab_ChoiceItem_Give::
# 1040 "data//maps/PellucaCity/scripts.pory"
	showitemdescription
# 1041 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Gab_ChoiceItem_Give_Text_0, MSGBOX_YESNO
# 1042 "data//maps/PellucaCity/scripts.pory"
	hideitemdescription
# 1043 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Gab_ChoiceItem_Give_1
# 1044 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem
	return

PellucaCity_Gab_ChoiceItem_Give_1:
# 1043 "data//maps/PellucaCity/scripts.pory"
	giveitem VAR_0x8006
# 1043 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem_End
	return


PellucaCity_Gab_ChoiceItem_End::
# 1048 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1049 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Gab_ChoiceItem_End_Text_0
# 1050 "data//maps/PellucaCity/scripts.pory"
	release
# 1051 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 1052 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 1053 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1054 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Zorua::
# 1066 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1067 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1068 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZOROARK, CRY_MODE_NORMAL
# 1069 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 1070 "data//maps/PellucaCity/scripts.pory"
	release
# 1071 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 1072 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1073 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 1089 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 1090 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC1::
# 1103 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC2::
# 1108 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC3::
# 1113 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC4::
# 1118 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC5::
# 1123 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1124 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 1125 "data//maps/PellucaCity/scripts.pory"
	release
# 1126 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1127 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 1128 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1129 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1130 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_1
# 1131 "data//maps/PellucaCity/scripts.pory"
	release
# 1132 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1133 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 1134 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1135 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1136 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_2, MSGBOX_NPC
# 1137 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 1142 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC7::
# 1147 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC8::
# 1152 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_Sealeo::
# 1157 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1158 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1159 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 1160 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0, MSGBOX_NPC
# 1161 "data//maps/PellucaCity/scripts.pory"
	release
# 1162 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_MayorFight_Trigger_Movement_4
# 1163 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1164 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 1172 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullGirl::
# 1181 "data//maps/PellucaCity/scripts.pory"
	lock
# 1182 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1183 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 1184 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 1186 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 1200 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5, MSGBOX_NPC
PellucaCity_WingullGirl_1:
# 1203 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 1188 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_MayorFight_Trigger_Movement_5
# 1189 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 1190 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 1191 "data//maps/PellucaCity/scripts.pory"
	release
# 1192 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_MayorFight_Trigger_Movement_7
# 1193 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_MayorFight_Trigger_Movement_7
# 1194 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1195 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1196 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 1197 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 1198 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 1208 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullCritique::
# 1213 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC10::
# 1226 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC10_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC11::
# 1232 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_CITY_TM_GIVER, PellucaCity_NPC11_2
# 1237 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_1, MSGBOX_NPC
# 1238 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_TM31
# 1239 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_CITY_TM_GIVER
# 1240 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_2, MSGBOX_NPC
	end

PellucaCity_NPC11_2:
# 1233 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC12::
# 1246 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC12_Text_0, MSGBOX_NPC
	end


PellucaCity_Stantler::
# 1251 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 1252 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Stantler_Text_0, MSGBOX_NPC
	end


PellucaCity_PostGymEvent_Trigger::
# 1279 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_POSTGYM, PellucaCity_PostGymEvent_Trigger_2
# 1281 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PellucaCity_PostGymEvent_Trigger_5
	end

PellucaCity_PostGymEvent_Trigger_2:
	end

PellucaCity_PostGymEvent_Trigger_5:
# 1282 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1285 "data//maps/PellucaCity/scripts.pory"
	opendoor 37, 8
# 1286 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 1289 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_FL_JANIA
# 1290 "data//maps/PellucaCity/scripts.pory"
	setobjectxy LOCALID_FL_JANIA, 37, 8
# 1292 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_10
# 1293 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1296 "data//maps/PellucaCity/scripts.pory"
	closedoor 37, 8
# 1298 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 1299 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1301 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 1302 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_0
# 1303 "data//maps/PellucaCity/scripts.pory"
	release
# 1304 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_PostGymEvent_Trigger_Movement_0
# 1305 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 1306 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1307 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1308 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_5
# 1309 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1310 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1311 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 1312 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_1
# 1313 "data//maps/PellucaCity/scripts.pory"
	release
# 1315 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1316 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_PostGymEvent_Trigger_Movement_1
# 1317 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_0
# 1318 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1320 "data//maps/PellucaCity/scripts.pory"
	opendoor 37, 8
# 1321 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 1324 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_GAB
# 1325 "data//maps/PellucaCity/scripts.pory"
	setobjectxy LOCALID_GAB, 37, 8
# 1326 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_2
# 1327 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1328 "data//maps/PellucaCity/scripts.pory"
	closedoor 37, 8
# 1329 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1330 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1331 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_2
# 1332 "data//maps/PellucaCity/scripts.pory"
	release
# 1334 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_PostGymEvent_Trigger_Movement_3
# 1335 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1336 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 1337 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1338 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1340 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1341 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_3
# 1342 "data//maps/PellucaCity/scripts.pory"
	release
# 1343 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_MayorFight_Trigger_Movement_7
# 1344 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1345 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1346 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1347 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_4
# 1348 "data//maps/PellucaCity/scripts.pory"
	release
# 1349 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1350 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_4
# 1351 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_4
# 1352 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1353 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1354 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1355 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_5
# 1356 "data//maps/PellucaCity/scripts.pory"
	release
# 1357 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_5
# 1358 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1359 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1361 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1364 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_FL_JANIA
# 1365 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_GAB
# 1368 "data//maps/PellucaCity/scripts.pory"
	startquest QUEST_STOP_TEAM_SOMBER
# 1369 "data//maps/PellucaCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_STOP_TEAM_SOMBER, SUB_QUEST_1
# 1370 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_POSTGYM
	end


PellucaCity_Red_GymBlock::
# 1387 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Red_GymBlock_Text_0, MSGBOX_NPC
	end


# 55 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_0:
# 55 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 55 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 55 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 55 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 60 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_1:
# 60 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 60 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 68 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_2:
# 68 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 68 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 76 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_3:
# 76 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 84 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_4:
# 84 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 92 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_5:
# 92 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 100 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_6:
# 100 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 108 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_7:
# 108 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 119 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_8:
# 119 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 119 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 145 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_9:
# 145 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 148 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_10:
# 148 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 152 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_11:
# 152 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 154 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_12:
# 154 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 154 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 154 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 154 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 154 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 154 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 154 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 154 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 154 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 162 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_13:
# 162 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 162 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 170 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_14:
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 177 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_15:
# 177 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 177 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 177 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 177 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 177 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 177 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 184 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_16:
# 184 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 184 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 184 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 184 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 315 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Blocker_Trigger_Movement_0:
# 315 "data//maps/PellucaCity/scripts.pory"
	walk_right
	step_end

# 398 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_A_Movement_0:
# 398 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 398 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 398 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 398 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 398 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 398 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 398 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 398 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 398 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 398 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
	step_end

# 402 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_A_Movement_1:
# 402 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 402 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 402 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 402 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 402 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 402 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 402 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 402 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 402 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
	step_end

# 423 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_B_Movement_0:
# 423 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 423 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 423 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 423 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 423 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 423 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 423 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 423 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 427 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_B_Movement_1:
# 427 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 427 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 427 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 427 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 427 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 427 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 427 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 448 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_C_Movement_0:
# 448 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 448 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 448 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 448 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 448 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 448 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 448 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 448 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

# 452 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_C_Movement_1:
# 452 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 452 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 452 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 452 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 452 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 452 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 452 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

# 473 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_D_Movement_0:
# 473 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 473 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 473 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 473 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 473 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 473 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 473 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 473 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 473 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 473 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
	step_end

# 477 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_D_Movement_1:
# 477 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 477 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 477 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 477 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 477 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 477 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 477 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 477 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 477 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
	step_end

# 519 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_0:
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 519 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 546 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_1:
# 546 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 546 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_down
	step_end

# 588 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_2:
# 588 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 588 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 597 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_3:
# 597 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 597 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 597 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 597 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 597 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 597 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 597 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 597 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 597 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 597 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 605 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_4:
# 605 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 606 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_5:
# 606 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 628 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_6:
# 628 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 628 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_up
	step_end

# 654 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_7:
# 654 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 654 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 654 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 654 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 654 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 654 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 654 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 654 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 654 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 654 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 656 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_8:
# 656 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 656 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 795 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_0:
# 795 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 795 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 795 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 812 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_1:
# 812 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 812 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 831 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_2:
# 831 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 831 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 909 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_0:
# 909 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 909 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 909 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 909 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 909 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 909 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 909 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 920 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_0:
# 920 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 920 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 920 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 920 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 920 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 920 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 920 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 920 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 931 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger2_Movement_0:
# 931 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 931 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 931 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 931 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 931 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 931 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 931 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 959 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
# 959 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 959 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 959 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 959 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 959 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 959 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 959 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 959 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 1127 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 1127 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1127 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1127 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1127 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1127 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1127 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1127 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1127 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1127 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1127 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1127 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 1133 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

# 1304 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_0:
# 1304 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 1304 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 1316 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_1:
# 1316 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1316 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1316 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 1316 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 1316 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 1326 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_2:
# 1326 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1326 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 1334 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_3:
# 1334 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1334 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1334 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1334 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 1351 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_4:
# 1351 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1351 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1351 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1351 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 1357 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_5:
# 1357 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1357 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1357 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

PellucaCity_MayorFight_Trigger_Text_0:
# 63 "data//maps/PellucaCity/scripts.pory"
	.string "Mayor$"

PellucaCity_MayorFight_Trigger_Text_1:
# 64 "data//maps/PellucaCity/scripts.pory"
	.string "But you can't be doing this to our\n"
	.string "citizens! This is our city!$"

PellucaCity_MayorFight_Trigger_Text_2:
# 71 "data//maps/PellucaCity/scripts.pory"
	.string "Q-squad Boss$"

PellucaCity_MayorFight_Trigger_Text_3:
# 72 "data//maps/PellucaCity/scripts.pory"
	.string "I've told you a hundred times, you\n"
	.string "paper-pushing wimp! You ain't doing a\l"
	.string "single thing right for our city, so don't\l"
	.string "you dare mess with the Qwilsquad!\p"
	.string "This is our turf - we don't give a hoot\n"
	.string "about you and your title!$"

PellucaCity_MayorFight_Trigger_Text_4:
# 80 "data//maps/PellucaCity/scripts.pory"
	.string "No! Enough is enough! I'm putting my\n"
	.string "foot down.\p"
	.string "You and your lot aren't allowed in\l"
	.string "Pelluca City any more!$"

PellucaCity_MayorFight_Trigger_Text_5:
# 87 "data//maps/PellucaCity/scripts.pory"
	.string "Q-squad Grunt$"

PellucaCity_MayorFight_Trigger_Text_6:
# 88 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! What a lame mayor!$"

PellucaCity_MayorFight_Trigger_Text_7:
# 96 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah! He really thinks he can tell us\n"
	.string "what to do!$"

PellucaCity_MayorFight_Trigger_Text_8:
# 104 "data//maps/PellucaCity/scripts.pory"
	.string "Go on boss - teach him a lesson!$"

PellucaCity_MayorFight_Trigger_Text_9:
# 112 "data//maps/PellucaCity/scripts.pory"
	.string "You heard 'em Mayor. Looks like my boys\n"
	.string "want me to prove that we own this city!\p"
	.string "Wanna try me? Right here?$"

PellucaCity_MayorFight_Trigger_Text_10:
# 124 "data//maps/PellucaCity/scripts.pory"
	.string "Nono - see, I'm not - look, I'm just\n"
	.string "asking for a little cooperation and -$"

PellucaCity_MayorFight_Trigger_Text_11:
# 132 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! Look at the wimp! Poor guy.$"

PellucaCity_MayorFight_Trigger_Text_12:
# 140 "data//maps/PellucaCity/scripts.pory"
	.string "Got it, mayor? You're not in charge here.\p"
	.string "I am! And from now on, this town belongs\n"
	.string "to the Qwilsquad!$"

PellucaCity_MayorFight_Trigger_Text_13:
# 166 "data//maps/PellucaCity/scripts.pory"
	.string "Oh - a tourist! Were you standing there\n"
	.string "the whole time?\p"
	.string "...\p"
	.string "I'm sorry you had to witness that.\n"
	.string "Y-you know, we have a wonderful Game\l"
	.string "Corner! And the Apple Pie at the Pelluca\l"
	.string "Restaurant is to die for.$"

PellucaCity_MayorFight_Trigger_Text_14:
# 174 "data//maps/PellucaCity/scripts.pory"
	.string "Sigh...what will I do?$"

PellucaCity_Sailor_Entrance_Text_0:
# 215 "data//maps/PellucaCity/scripts.pory"
	.string "Beat it, kid! This is private property\n"
	.string "belonging to the Qwilsquad.$"

PellucaCity_Sailor_Multichoice_Text_0:
# 225 "data//maps/PellucaCity/scripts.pory"
	.string "Only Qwilsquad members can enter!$"

PellucaCity_Sailor_Multichoice_Text_1:
# 227 "data//maps/PellucaCity/scripts.pory"
	.string "What's a Qwilsquad?$"

PellucaCity_Sailor_Multichoice_Text_2:
# 227 "data//maps/PellucaCity/scripts.pory"
	.string "I'm a member!$"

PellucaCity_Sailor_Multichoice_Text_3:
# 227 "data//maps/PellucaCity/scripts.pory"
	.string "Okay...$"

PellucaCity_Sailor_QwilsquadExplanation_Text_0:
# 237 "data//maps/PellucaCity/scripts.pory"
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
# 242 "data//maps/PellucaCity/scripts.pory"
	.string "Heh? A pipsqueak like you is in the\n"
	.string "squad? You a new member or something?\l"
	.string "You got any proof?$"

PellucaCity_Sailor_MemberCheck_Text_1:
# 246 "data//maps/PellucaCity/scripts.pory"
	.string "Then beat it, kid!$"

PellucaCity_Sailor_MemberCheck_Text_2:
# 250 "data//maps/PellucaCity/scripts.pory"
	.string "Show me!$"

PellucaCity_Sailor_MemberCheck_Text_3:
# 266 "data//maps/PellucaCity/scripts.pory"
	.string "That don't look like no Qwilfish to me!\p"
	.string "Beat it, kid!$"

PellucaCity_Sailor_MemberAccepted_Text_0:
# 277 "data//maps/PellucaCity/scripts.pory"
	.string "Now that's what I'm talking about!\n"
	.string "You're one of us, kid. Go on, get inside!$"

PellucaCity_Blocker_Text_0:
# 305 "data//maps/PellucaCity/scripts.pory"
	.string "This is our city! Got any problems?$"

PellucaCity_Blocker_Trigger_Text_0:
# 313 "data//maps/PellucaCity/scripts.pory"
	.string "Hey kid, where d'you think yer goin?\n"
	.string "There's a toll if you wanna get out.\p"
	.string "Yeah, that's right!\n"
	.string "You gotta pay ¥999999.\p"
	.string "Ain't got the money?\p"
	.string "Then get packing!$"

PellucaCityFlooded_SaveCitizen_A_Text_0:
# 391 "data//maps/PellucaCity/scripts.pory"
	.string "Help! Help! Over here!\p"
	.string "...\p"
	.string "Thank you so much - I'm saved!$"

PellucaCityFlooded_SaveCitizen_B_Text_0:
# 417 "data//maps/PellucaCity/scripts.pory"
	.string "I can't stay afloat any more!\p"
	.string "...\p"
	.string "Just in time!$"

PellucaCityFlooded_SaveCitizen_C_Text_0:
# 441 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh! It's too cold!\p"
	.string "...\p"
	.string "Waah! Wahh! It was so scary!$"

PellucaCityFlooded_SaveCitizen_D_Text_0:
# 466 "data//maps/PellucaCity/scripts.pory"
	.string "Help! Someone save me!\p"
	.string "...\p"
	.string "Yaay! You came!$"

PellucaCityFlooded_MainEvent_Text_0:
# 495 "data//maps/PellucaCity/scripts.pory"
	.string "Skip cutscene?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_0:
# 513 "data//maps/PellucaCity/scripts.pory"
	.string "What on earth is this?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_1:
# 524 "data//maps/PellucaCity/scripts.pory"
	.string "Citizen$"

PellucaCityFlooded_MainEvent_Cutscene_Text_2:
# 525 "data//maps/PellucaCity/scripts.pory"
	.string "What a disaster!\p"
	.string "How could we be so unlucky!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_3:
# 527 "data//maps/PellucaCity/scripts.pory"
	.string "What happened?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_4:
# 529 "data//maps/PellucaCity/scripts.pory"
	.string "A Mega Sharpedo came rampaging down\n"
	.string "from the Ivy River and kicked up a\l"
	.string "storm! The riverbanks have flooded.\p"
	.string "The city's underwater!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_5:
# 531 "data//maps/PellucaCity/scripts.pory"
	.string "Is everyone safe?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_6:
# 533 "data//maps/PellucaCity/scripts.pory"
	.string "No - there are still four people in the\n"
	.string "water! We have to save them fast!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_7:
# 539 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, go on Mayor. Go save them!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_8:
# 543 "data//maps/PellucaCity/scripts.pory"
	.string "W-what do you mean? Weren't you the\n"
	.string "one in control of this city?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_9:
# 548 "data//maps/PellucaCity/scripts.pory"
	.string "ENOUGH!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_10:
# 560 "data//maps/PellucaCity/scripts.pory"
	.string "While you two bicker, it's us that pays\n"
	.string "the price every time! Both of you are\l"
	.string "strong - a tough trainer and a smart\l"
	.string "politician - and yet, neither of you\l"
	.string "bother to actually do anything for us\l"
	.string "citizens! And now people are in danger\l"
	.string "and you're still fighting! We've all had\l"
	.string "it up to here with you two!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_11:
# 573 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah!\p"
	.string "Hear hear!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_12:
# 579 "data//maps/PellucaCity/scripts.pory"
	.string "???$"

PellucaCityFlooded_MainEvent_Cutscene_Text_13:
# 580 "data//maps/PellucaCity/scripts.pory"
	.string "I agree too.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_14:
# 593 "data//maps/PellucaCity/scripts.pory"
	.string "Is that Jania?\p"
	.string "Yeah! It's the Gym Leader! In the flesh!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_15:
# 612 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, Jania! It's you! Finally. Please - you\n"
	.string "have to save those still drowning!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_16:
# 619 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, Jania! You're an even stronger\n"
	.string "trainer than I am. You can do it!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_17:
# 623 "data//maps/PellucaCity/scripts.pory"
	.string "Jania$"

PellucaCityFlooded_MainEvent_Cutscene_Text_18:
# 624 "data//maps/PellucaCity/scripts.pory"
	.string "No, I won't.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_19:
# 634 "data//maps/PellucaCity/scripts.pory"
	.string "Don't look at me like that!\p"
	.string "You two want to be responsible for this\n"
	.string "city? Start right here, right now.\p"
	.string "Your citizens are miserably tired of\n"
	.string "both of you - when will you two change?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_20:
# 641 "data//maps/PellucaCity/scripts.pory"
	.string "And who might you be?\p"
	.string "...\p"
	.string "{PLAYER}?\p"
	.string "...\p"
	.string "I see. So that's how you got involved\n"
	.string "with these two.\p"
	.string "Here, take this.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_21:
# 649 "data//maps/PellucaCity/scripts.pory"
	.string "Consider this my help.\p"
	.string "Now I'm going to track the Mega\n"
	.string "Sharpedo down and make sure it doesn't\l"
	.string "harm anyone else.\p"
	.string "And the two of you - and {PLAYER} -\n"
	.string "take this chance to do the right thing!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_22:
# 664 "data//maps/PellucaCity/scripts.pory"
	.string "Hmpf.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_23:
# 668 "data//maps/PellucaCity/scripts.pory"
	.string "Tchah!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_24:
# 672 "data//maps/PellucaCity/scripts.pory"
	.string "...$"

PellucaCityFlooded_MainEvent_Cutscene_Text_25:
# 683 "data//maps/PellucaCity/scripts.pory"
	.string "All of you! We've been letting you down.\n"
	.string "But now we're gonna prove that we care\l"
	.string "about this city with our actions!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_26:
# 685 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} - the two of us will handle\n"
	.string "the citizens on the bridge and on land.\l"
	.string "Can you surf and rescue the four\l"
	.string "remaining citizens?\p"
	.string "Once you've picked all four of them up,\n"
	.string "come back here.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_27:
# 687 "data//maps/PellucaCity/scripts.pory"
	.string "Good luck, {PLAYER}! We're on top of\n"
	.string "things here, so you go on into the river.\l"
	.string "You don't need to teach any Pokémon\l"
	.string "how to surf - just hop on the water!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_28:
# 690 "data//maps/PellucaCity/scripts.pory"
	.string "But hurry! There's not much time.$"

PellucaCityFlooded_Mayor_Text_0:
# 704 "data//maps/PellucaCity/scripts.pory"
	.string "Have you saved everyone yet?\n"
	.string "Please hurry!$"

PellucaCityFlooded_QwilBoss_Text_0:
# 709 "data//maps/PellucaCity/scripts.pory"
	.string "We're keeping the citizens safe, so you\n"
	.string "go get the rest!$"

PellucaCityFlooded_NPC1_Text_0:
# 713 "data//maps/PellucaCity/scripts.pory"
	.string "The Mayor and the Qwilsquad boss\n"
	.string "working together? Hah! I'll believe it\l"
	.string "when I see it.$"

PellucaCityFlooded_NPC2_Text_0:
# 717 "data//maps/PellucaCity/scripts.pory"
	.string "If the two of them collaborate, maybe\n"
	.string "things will finally improve...$"

PellucaCityFlooded_NPC3_Text_0:
# 721 "data//maps/PellucaCity/scripts.pory"
	.string "I'm so scared - I hope you can save the\n"
	.string "others!$"

PellucaCityFlooded_NPC4_Text_0:
# 725 "data//maps/PellucaCity/scripts.pory"
	.string "I hate that Mega Sharpedo for doing\n"
	.string "this to my home!$"

PellucaCityFlooded_NPCSailor_Text_0:
# 729 "data//maps/PellucaCity/scripts.pory"
	.string "Go on, {PLAYER}! Hurry up and do what\n"
	.string "the boss says.$"

PellucaCityFlooded_NPCSaved_A_Text_0:
# 734 "data//maps/PellucaCity/scripts.pory"
	.string "You saved me! I can't thank you enough,\n"
	.string "trainer.$"

PellucaCityFlooded_NPCSaved_B_Text_0:
# 738 "data//maps/PellucaCity/scripts.pory"
	.string "I owe you, trainer. I'll never forget\n"
	.string "this!$"

PellucaCityFlooded_NPCSaved_C_Text_0:
# 742 "data//maps/PellucaCity/scripts.pory"
	.string "Brr - the water was so cold! How do\n"
	.string "Pokémon swim in it?$"

PellucaCityFlooded_NPCSaved_D_Text_0:
# 746 "data//maps/PellucaCity/scripts.pory"
	.string "When I grow up, I wanna be just like you!$"

PellucaCityFlooded_EventScript_TimesUp_Text_0:
# 751 "data//maps/PellucaCity/scripts.pory"
	.string "The tides rise higher and higher...\n"
	.string "it's too late!$"

PellucaCityFlooded_EventScript_TimesRunningOut_Text_0:
# 781 "data//maps/PellucaCity/scripts.pory"
	.string "The water level is rising...\n"
	.string "There's not much time left!$"

PellucaCityFlooded_Complete_Trigger_Text_0:
# 801 "data//maps/PellucaCity/scripts.pory"
	.string "That's one, two, three...and four!\p"
	.string "Yup, we're all accounted for.$"

PellucaCityFlooded_Complete_Trigger_Text_1:
# 807 "data//maps/PellucaCity/scripts.pory"
	.string "Finally! Thank you {PLAYER}. You did\n"
	.string "us - the city of Pelluca - a great\l"
	.string "service. You're a hero!$"

PellucaCityFlooded_Complete_Trigger_Text_2:
# 827 "data//maps/PellucaCity/scripts.pory"
	.string "Thank you {PLAYER}!\p"
	.string "You're the best!$"

PellucaCityFlooded_Complete_Trigger_Text_3:
# 840 "data//maps/PellucaCity/scripts.pory"
	.string "It looks like we're all safe for now.$"

PellucaCityFlooded_Complete_Trigger_Text_4:
# 849 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah. All that remains is to wait until\n"
	.string "the water recedes, and then we can go\l"
	.string "back to normal.\p"
	.string "Come, shall we wait in the Pokémon\n"
	.string "Center until then?$"

PellucaCityFlooded_Complete_Trigger_Text_5:
# 854 "data//maps/PellucaCity/scripts.pory"
	.string "Sounds like a good idea. {PLAYER} here\n"
	.string "needs some rest after everything\l"
	.string "that's just happened!$"

PellucaCity_Greta_Main_Text_0:
# 940 "data//maps/PellucaCity/scripts.pory"
	.string "Greta$"

PellucaCity_Greta_Main_Text_1:
# 941 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, it's you again, {PLAYER}!\n"
	.string "Fancy seeing you in these parts.\l"
	.string "Route 6 was a tough trek, wasn't it?$"

PellucaCity_Greta_GottaGo_Text_0:
# 957 "data//maps/PellucaCity/scripts.pory"
	.string "Would you look at the time!\n"
	.string "I've gotta run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 987 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 988 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh, I love the smell of the river!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 993 "data//maps/PellucaCity/scripts.pory"
	.string "I grew up here on this cliff without my\n"
	.string "parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "Those grunts were really vicious to me.\n"
	.string "I was so scared I would lose Zoroark!$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 999 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the Clefairy?$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 1005 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah...I doubt he'd ever forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 1011 "data//maps/PellucaCity/scripts.pory"
	.string "You're just trying to make me feel\n"
	.string "better, aren't you? I don't need your\l"
	.string "pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 1016 "data//maps/PellucaCity/scripts.pory"
	.string "After getting kicked out of Team\n"
	.string "Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 1022 "data//maps/PellucaCity/scripts.pory"
	.string "I want you to have this. As a thank you.\n"
	.string "For saving me - not just once, but so\l"
	.string "many times. You're a strong trainer, but\l"
	.string "more importantly - you're a good person.\l"
	.string "I hope to be like you.$"

PellucaCity_Gab_ChoiceItem_Text_0:
# 1030 "data//maps/PellucaCity/scripts.pory"
	.string "Choose something you like.$"

PellucaCity_Gab_ChoiceItem_Text_1:
# 1032 "data//maps/PellucaCity/scripts.pory"
	.string "Choice Specs$"

PellucaCity_Gab_ChoiceItem_Text_2:
# 1032 "data//maps/PellucaCity/scripts.pory"
	.string "Choice Band$"

PellucaCity_Gab_ChoiceItem_Text_3:
# 1032 "data//maps/PellucaCity/scripts.pory"
	.string "Choice Scarf$"

PellucaCity_Gab_ChoiceItem_Give_Text_0:
# 1041 "data//maps/PellucaCity/scripts.pory"
	.string "Are you sure?$"

PellucaCity_Gab_ChoiceItem_End_Text_0:
# 1049 "data//maps/PellucaCity/scripts.pory"
	.string "The choices we make define who we are.\n"
	.string "Once we lock in, we can't change.\p"
	.string "I can't erase what I've done, but I'm\n"
	.string "going to make a better choice this time.\p"
	.string "I suppose you're going to head to the\n"
	.string "Mirroh Base Camp from here? Team\l"
	.string "Somber must've reached there already.\p"
	.string "Best of luck, {PLAYER}.$"

PellucaCity_Zorua_Text_0:
# 1069 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle's Zoroark looks content.\n"
	.string "Life is more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 1090 "data//maps/PellucaCity/scripts.pory"
	.string "Lycanroc is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 1103 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 1108 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "Pelluca Restaurant?\p"
	.string "...that's the only thing our mayor cares\n"
	.string "about promoting.$"

PellucaCity_NPC3_Text_0:
# 1113 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in Mt. Mirroh but I\n"
	.string "can't go there without a Cable Car Pass.\l"
	.string "So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 1118 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge was built by Rivetshore\n"
	.string "Construction. It's nothing like the\l"
	.string "cycling roads in other regions though!$"

PellucaCity_NPC5_Text_0:
# 1124 "data//maps/PellucaCity/scripts.pory"
	.string "Look over there...$"

PellucaCity_NPC5_Text_1:
# 1130 "data//maps/PellucaCity/scripts.pory"
	.string "Jania, the Gym Leader of Pelluca City\n"
	.string "had her gym constructed on a separate\l"
	.string "island.$"

PellucaCity_NPC5_Text_2:
# 1136 "data//maps/PellucaCity/scripts.pory"
	.string "She never gets involved in city affairs!$"

PellucaCity_NPC6_Text_0:
# 1142 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the Mirroh Base Camp?\n"
	.string "You'll have to take the cable car past\l"
	.string "Route 7. I heard they're closing the gym\l"
	.string "there though.$"

PellucaCity_NPC7_Text_0:
# 1147 "data//maps/PellucaCity/scripts.pory"
	.string "With the way things are, I'm half in\n"
	.string "support of the Qwilsquad. I know\l"
	.string "they're bullies, but maybe they'll do\l"
	.string "something good for the city.$"

PellucaCity_NPC8_Text_0:
# 1152 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "Mega Sharpedo's going to scare all the\l"
	.string "fish away? I wish our mayor would do\l"
	.string "something about it.$"

PellucaCity_Sealeo_Text_0:
# 1160 "data//maps/PellucaCity/scripts.pory"
	.string "Sealeo wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 1172 "data//maps/PellucaCity/scripts.pory"
	.string "This is the Pelluca Fishery! But it's\n"
	.string "closed due to the Mega Sharpedo\l"
	.string "attacks.$"

PellucaCity_WingullGirl_Text_0:
# 1183 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "Wingulls over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 1184 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 1184 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 1190 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a Wingull!$"

PellucaCity_WingullGirl_Text_4:
# 1196 "data//maps/PellucaCity/scripts.pory"
	.string "The Wingull gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 1200 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 1208 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "Wingulls. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 1213 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at Pokémon...that's poor\l"
	.string "parenting.$"

PellucaCity_NPC10_Text_0:
# 1226 "data//maps/PellucaCity/scripts.pory"
	.string "I ate too many apple tarts! I'm too full.\n"
	.string "Whoever said people have a second\l"
	.string "stomach for dessert was lying!$"

PellucaCity_NPC11_Text_0:
# 1233 "data//maps/PellucaCity/scripts.pory"
	.string "Life is too short to worry!$"

PellucaCity_NPC11_Text_1:
# 1237 "data//maps/PellucaCity/scripts.pory"
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
# 1240 "data//maps/PellucaCity/scripts.pory"
	.string "It's time for me to let go.$"

PellucaCity_NPC12_Text_0:
# 1246 "data//maps/PellucaCity/scripts.pory"
	.string "The mayor isn't maintaining the city one\n"
	.string "bit! My Stantler eating the overgrown\l"
	.string "flowers is actually contributing to\l"
	.string "city maintenance.$"

PellucaCity_Stantler_Text_0:
# 1252 "data//maps/PellucaCity/scripts.pory"
	.string "Stantler is nonchalantly chomping on\n"
	.string "the flowers.$"

PellucaCity_PostGymEvent_Trigger_Text_0:
# 1302 "data//maps/PellucaCity/scripts.pory"
	.string "Excuse me.$"

PellucaCity_PostGymEvent_Trigger_Text_1:
# 1312 "data//maps/PellucaCity/scripts.pory"
	.string "Where am I going?\p"
	.string "I'm going to Rivetshore City.\n"
	.string "All the Gym Leaders have been called\l"
	.string "there.$"

PellucaCity_PostGymEvent_Trigger_Text_2:
# 1331 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER}! Over here!$"

PellucaCity_PostGymEvent_Trigger_Text_3:
# 1341 "data//maps/PellucaCity/scripts.pory"
	.string "I overheard Jania talking to someone!\p"
	.string "...\p"
	.string "What? I wasn't eavesdropping!\n"
	.string "She was just nearby.\p"
	.string "She was talking to the eighth Gym\n"
	.string "Leader. They mentioned Team Somber!\p"
	.string "They must be up to something in\n"
	.string "Rivetshore City!\p"
	.string "...$"

PellucaCity_PostGymEvent_Trigger_Text_4:
# 1347 "data//maps/PellucaCity/scripts.pory"
	.string "You're off the case?\p"
	.string "...\p"
	.string "So?\p"
	.string "The {PLAYER} I know wouldn't be\n"
	.string "stopped by something like that!\p"
	.string "You taught me the difference between\n"
	.string "right and wrong. Have you forgotten why\l"
	.string "you're doing this in the first place?\p"
	.string "It was to find YOUR Professor.\n"
	.string "You don't need anyone's permission!\p"
	.string "...\p"
	.string "I'm not letting you give up, {PLAYER}.\p"
	.string "I'm going to Rivetshore City to get the\n"
	.string "final gym badge. It's south of Pelluca\l"
	.string "City - you can get there by surfing.\p"
	.string "I'll be waiting for you!$"

PellucaCity_PostGymEvent_Trigger_Text_5:
# 1355 "data//maps/PellucaCity/scripts.pory"
	.string "You'd better be there, {PLAYER}!$"

PellucaCity_Red_GymBlock_Text_0:
# 1387 "data//maps/PellucaCity/scripts.pory"
	.string "Jania's gone to deal with the Mega\n"
	.string "Sharpedo. You'll find her up in Ivy River\l"
	.string "somewhere.$"

PellucaCityFlooded_TriggerText::
# 333 "data//maps/PellucaCity/scripts.pory"
	.string "I need to save the drowning citizens!$"
