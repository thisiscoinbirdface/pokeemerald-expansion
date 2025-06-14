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
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Sailor_Multichoice_Text_1, PellucaCity_Sailor_Multichoice_Text_2
# 229 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_Multichoice_2
PellucaCity_Sailor_Multichoice_1:
# 230 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_Multichoice_4
	return

PellucaCity_Sailor_Multichoice_2:
# 229 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_QwilsquadExplanation
	goto PellucaCity_Sailor_Multichoice_1

PellucaCity_Sailor_Multichoice_4:
# 230 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberCheck
	return


PellucaCity_Sailor_QwilsquadExplanation::
# 233 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 234 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_QwilsquadExplanation_Text_0
# 235 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_Multichoice
	return


PellucaCity_Sailor_MemberCheck::
# 238 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 239 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_0, MSGBOX_YESNO
# 241 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_MemberCheck_2
PellucaCity_Sailor_MemberCheck_1:
# 245 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_MemberCheck_5
PellucaCity_Sailor_MemberCheck_4:
# 267 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_MemberCheck_2:
# 242 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 243 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_1
	goto PellucaCity_Sailor_MemberCheck_1

PellucaCity_Sailor_MemberCheck_5:
# 246 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 247 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_2
# 248 "data//maps/PellucaCity/scripts.pory"
	release
# 251 "data//maps/PellucaCity/scripts.pory"
	special ChoosePartyMon
# 252 "data//maps/PellucaCity/scripts.pory"
	waitstate
# 253 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 254 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 255 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 257 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_QWILFISH_HISUI
	goto_if_eq PellucaCity_Sailor_MemberCheck_8
PellucaCity_Sailor_MemberCheck_7:
# 258 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_OVERQWIL
	goto_if_eq PellucaCity_Sailor_MemberCheck_11
PellucaCity_Sailor_MemberCheck_10:
# 260 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 261 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 262 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 263 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_3
	goto PellucaCity_Sailor_MemberCheck_4

PellucaCity_Sailor_MemberCheck_8:
# 257 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_7

PellucaCity_Sailor_MemberCheck_11:
# 258 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_10


PellucaCity_Sailor_MemberAccepted::
# 271 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 272 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 273 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 274 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberAccepted_Text_0
# 275 "data//maps/PellucaCity/scripts.pory"
	release
# 277 "data//maps/PellucaCity/scripts.pory"
	opendoor 3, 42
# 278 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 279 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_11
# 280 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 281 "data//maps/PellucaCity/scripts.pory"
	playse SE_EXIT
# 282 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S_ENTRANCE
# 283 "data//maps/PellucaCity/scripts.pory"
	closedoor 3, 42
# 284 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 286 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_QWILSQUAD_ENTRANCE
# 287 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Blocker::
# 302 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Text_0
	end


PellucaCity_Blocker_Trigger::
# 306 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 10
	goto_if_eq PellucaCity_Blocker_Trigger_2
# 308 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_BLOCKER, PellucaCity_MayorFight_Trigger_Movement_7
# 309 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 310 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Trigger_Text_0
# 311 "data//maps/PellucaCity/scripts.pory"
	release
# 312 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 313 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 314 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Blocker_Trigger_2:
	end


PellucaCityFlooded_TriggerDown::
# 334 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerDown_1
	end

PellucaCityFlooded_TriggerDown_1:
# 335 "data//maps/PellucaCity/scripts.pory"
	lockall
# 336 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 337 "data//maps/PellucaCity/scripts.pory"
	release
# 338 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_10
# 339 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 340 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerUp::
# 347 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerUp_1
	end

PellucaCityFlooded_TriggerUp_1:
# 348 "data//maps/PellucaCity/scripts.pory"
	lockall
# 349 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 350 "data//maps/PellucaCity/scripts.pory"
	release
# 351 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_11
# 352 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 353 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerLeft::
# 360 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerLeft_1
	end

PellucaCityFlooded_TriggerLeft_1:
# 361 "data//maps/PellucaCity/scripts.pory"
	lockall
# 362 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 363 "data//maps/PellucaCity/scripts.pory"
	release
# 364 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_9
# 365 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 366 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerRight::
# 373 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerRight_1
	end

PellucaCityFlooded_TriggerRight_1:
# 374 "data//maps/PellucaCity/scripts.pory"
	lockall
# 375 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 376 "data//maps/PellucaCity/scripts.pory"
	release
# 377 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 378 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 379 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_A::
# 386 "data//maps/PellucaCity/scripts.pory"
	lockall
# 387 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 388 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_A_Text_0
# 389 "data//maps/PellucaCity/scripts.pory"
	release
# 391 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 392 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 393 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 395 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 396 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 398 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_B::
# 402 "data//maps/PellucaCity/scripts.pory"
	lockall
# 403 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 404 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_B_Text_0
# 405 "data//maps/PellucaCity/scripts.pory"
	release
# 407 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 408 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 409 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 411 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 412 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 414 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_C::
# 418 "data//maps/PellucaCity/scripts.pory"
	lockall
# 419 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 420 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_C_Text_0
# 421 "data//maps/PellucaCity/scripts.pory"
	release
# 423 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 424 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 425 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 427 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 428 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 430 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_D::
# 434 "data//maps/PellucaCity/scripts.pory"
	lockall
# 435 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 436 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_D_Text_0
# 437 "data//maps/PellucaCity/scripts.pory"
	release
# 439 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 440 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 441 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 443 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 444 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 446 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_MainEvent::
# 451 "data//maps/PellucaCity/scripts.pory"
	lockall
# 452 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 4
# 453 "data//maps/PellucaCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 455 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_SKIP_PELLUCA_CUTSCENE, PellucaCityFlooded_MainEvent_2
PellucaCityFlooded_MainEvent_1:
# 466 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCityFlooded_MainEvent_Cutscene
	return

PellucaCityFlooded_MainEvent_2:
# 456 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_0, MSGBOX_YESNO
# 457 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityFlooded_MainEvent_4
	goto PellucaCityFlooded_MainEvent_1

PellucaCityFlooded_MainEvent_4:
# 458 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_TO_WHITE
# 459 "data//maps/PellucaCity/scripts.pory"
	special EnterSafariMode
# 460 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 461 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_MainEvent_Cutscene::
# 471 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_SKIP_PELLUCA_CUTSCENE
# 473 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 474 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_0
# 475 "data//maps/PellucaCity/scripts.pory"
	release
# 476 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 479 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 480 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_MainEvent_Cutscene_Movement_0
# 482 "data//maps/PellucaCity/scripts.pory"
	delay 60
# 485 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 486 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_2
# 487 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 488 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_3
# 489 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 490 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_4
# 491 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 492 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_5
# 493 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 494 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_6
# 497 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_6
# 498 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 499 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 500 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_7
# 501 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 502 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 503 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 504 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_8
# 507 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_CITIZEN, PellucaCityFlooded_MainEvent_Cutscene_Movement_1
# 508 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 509 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_9
# 510 "data//maps/PellucaCity/scripts.pory"
	release
# 511 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 513 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_5
# 514 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_5
# 515 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 516 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 517 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 518 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 520 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 521 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_10
# 522 "data//maps/PellucaCity/scripts.pory"
	release
# 524 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_7
# 525 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_7
# 526 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_7
# 527 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_7
# 528 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_7
# 529 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_7
# 530 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 531 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 533 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 534 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_11
# 535 "data//maps/PellucaCity/scripts.pory"
	release
# 537 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 540 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_12
# 541 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_13
# 542 "data//maps/PellucaCity/scripts.pory"
	release
# 543 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 545 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_5
# 546 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_5
# 547 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_5
# 548 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_5
# 549 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCityFlooded_MainEvent_Cutscene_Movement_2
# 550 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 551 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_5
# 553 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 554 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_14
# 555 "data//maps/PellucaCity/scripts.pory"
	release
# 557 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_FL_JANIA
# 558 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Cutscene_Movement_3
# 559 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 561 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_4
# 562 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_4
# 563 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_4
# 564 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_4
# 565 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_4
# 566 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 567 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 568 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_4
# 570 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_7
# 571 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 572 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 573 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_15
# 574 "data//maps/PellucaCity/scripts.pory"
	release
# 575 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 577 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_7
# 578 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 579 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 580 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_16
# 581 "data//maps/PellucaCity/scripts.pory"
	release
# 582 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 584 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 585 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_18
# 586 "data//maps/PellucaCity/scripts.pory"
	release
# 587 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 589 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Cutscene_Movement_6
# 590 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCityFlooded_MainEvent_Cutscene_Movement_6
# 591 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 592 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 594 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 595 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_19
# 596 "data//maps/PellucaCity/scripts.pory"
	release
# 597 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 598 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 599 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 600 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 601 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 602 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_20
# 603 "data//maps/PellucaCity/scripts.pory"
	release
# 604 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_SYS_SURF_ENABLED
# 605 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_HM03
# 606 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 607 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_4
# 608 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 609 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 610 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_21
# 611 "data//maps/PellucaCity/scripts.pory"
	release
# 612 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 615 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Cutscene_Movement_7
# 616 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 617 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCityFlooded_MainEvent_Cutscene_Movement_8
# 618 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 621 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 622 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 623 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 624 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 625 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_22
# 626 "data//maps/PellucaCity/scripts.pory"
	release
# 627 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 628 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 629 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_23
# 630 "data//maps/PellucaCity/scripts.pory"
	release
# 631 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 632 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 633 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_24
# 634 "data//maps/PellucaCity/scripts.pory"
	release
# 635 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 636 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 637 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_24
# 638 "data//maps/PellucaCity/scripts.pory"
	release
# 639 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 641 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_5
# 642 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_5
# 643 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 644 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_25
# 645 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 646 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_26
# 647 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 648 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_27
# 649 "data//maps/PellucaCity/scripts.pory"
	release
# 650 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 651 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_28
# 652 "data//maps/PellucaCity/scripts.pory"
	release
# 654 "data//maps/PellucaCity/scripts.pory"
	completesubquest QUEST_PELLUCA_CITY, SUB_QUEST_2
# 656 "data//maps/PellucaCity/scripts.pory"
	special EnterSafariMode
# 657 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 658 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_Mayor::
# 664 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 665 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Mayor_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_QwilBoss::
# 669 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 670 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_QwilBoss_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC1::
# 674 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC2::
# 678 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC3::
# 682 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC4::
# 686 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSailor::
# 690 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSailor_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_A::
# 695 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_A_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_B::
# 699 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_B_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_C::
# 703 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_C_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_D::
# 707 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_D_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_EventScript_TimesUp::
# 711 "data//maps/PellucaCity/scripts.pory"
	lockall
# 712 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_EventScript_TimesUp_Text_0
# 713 "data//maps/PellucaCity/scripts.pory"
	release
# 715 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_REGULAR_CITIZENS
# 716 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZENS
# 718 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 719 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 720 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 721 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 723 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A
# 724 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B
# 725 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C
# 726 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D
# 728 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 1
# 730 "data//maps/PellucaCity/scripts.pory"
	delay 2
# 732 "data//maps/PellucaCity/scripts.pory"
	special ExitSafariMode
# 733 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 3
# 734 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 1
# 735 "data//maps/PellucaCity/scripts.pory"
	warp MAP_PELLUCA_CITY, 43, 28
# 736 "data//maps/PellucaCity/scripts.pory"
	waitstate
	end


PellucaCityFlooded_EventScript_TimesRunningOut::
# 741 "data//maps/PellucaCity/scripts.pory"
	lockall
# 742 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_EventScript_TimesRunningOut_Text_0
# 743 "data//maps/PellucaCity/scripts.pory"
	release
	end


PellucaCityFlooded_Complete_Trigger::
# 750 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 8
	goto_if_eq PellucaCityFlooded_Complete_Trigger_2
	end

PellucaCityFlooded_Complete_Trigger_2:
# 752 "data//maps/PellucaCity/scripts.pory"
	special ExitSafariMode
# 754 "data//maps/PellucaCity/scripts.pory"
	lockall
# 755 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Cutscene_Movement_8
# 756 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_Complete_Trigger_Movement_0
# 757 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 758 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 761 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 762 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_0
# 763 "data//maps/PellucaCity/scripts.pory"
	release
# 764 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 767 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 768 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_1
# 769 "data//maps/PellucaCity/scripts.pory"
	release
# 770 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 772 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 773 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_1
# 774 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 778 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_7
# 779 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_7
# 780 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_7
# 781 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_7
# 782 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_7
# 783 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_7
# 784 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 785 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 787 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 788 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_2
# 789 "data//maps/PellucaCity/scripts.pory"
	release
# 790 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 792 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 793 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 794 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 795 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 797 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_6
# 798 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 799 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 800 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 801 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_3
# 802 "data//maps/PellucaCity/scripts.pory"
	release
# 803 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 806 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 807 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 808 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 809 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 810 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_4
# 811 "data//maps/PellucaCity/scripts.pory"
	release
# 812 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 814 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 815 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_5
# 816 "data//maps/PellucaCity/scripts.pory"
	release
# 817 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 821 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 9
# 822 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 0
# 824 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_REGULAR_CITIZENS
# 825 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZENS
# 827 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 828 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 829 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 830 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 832 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_PC_CHARS
# 835 "data//maps/PellucaCity/scripts.pory"
	warp MAP_PELLUCA_CITY_POKEMON_CENTER, 7, 6
# 837 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Greta_Trigger0::
# 867 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger0_2
# 869 "data//maps/PellucaCity/scripts.pory"
	lockall
# 870 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger0_Movement_0
# 871 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 872 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 873 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 874 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger0_2:
	end


PellucaCity_Greta_Trigger1::
# 878 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger1_2
# 880 "data//maps/PellucaCity/scripts.pory"
	lockall
# 881 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger1_Movement_0
# 882 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 883 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 884 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 885 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger1_2:
	end


PellucaCity_Greta_Trigger2::
# 889 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger2_2
# 891 "data//maps/PellucaCity/scripts.pory"
	lockall
# 892 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger2_Movement_0
# 893 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 894 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 895 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 896 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger2_2:
	end


PellucaCity_Greta_Main::
# 901 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 902 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_Main_Text_1
# 903 "data//maps/PellucaCity/scripts.pory"
	release
# 904 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 905 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 906 "data//maps/PellucaCity/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 907 "data//maps/PellucaCity/scripts.pory"
	release
# 908 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 910 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 914 "data//maps/PellucaCity/scripts.pory"
	release
# 915 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_MayorFight_Trigger_Movement_7
# 916 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 917 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 918 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 919 "data//maps/PellucaCity/scripts.pory"
	release
# 920 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 921 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 922 "data//maps/PellucaCity/scripts.pory"
	removeobject 27
# 923 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 924 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 926 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 946 "data//maps/PellucaCity/scripts.pory"
	lockall
# 947 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_1
# 953 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 954 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2
# 955 "data//maps/PellucaCity/scripts.pory"
	release
# 956 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 957 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 958 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 959 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 960 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3, MSGBOX_YESNO
# 961 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_5
# 970 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 971 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 972 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 973 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_4:
# 975 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 976 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 977 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 978 "data//maps/PellucaCity/scripts.pory"
	release
# 979 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 980 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 981 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 982 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 983 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 984 "data//maps/PellucaCity/scripts.pory"
	release
# 985 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem
	return

PellucaCity_EventScripts_Gabrielle_1:
# 948 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 949 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 950 "data//maps/PellucaCity/scripts.pory"
	release
	return

PellucaCity_EventScripts_Gabrielle_5:
# 963 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 964 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 965 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 966 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 967 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_4


PellucaCity_Gab_ChoiceItem::
# 990 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 991 "data//maps/PellucaCity/scripts.pory"
	message PellucaCity_Gab_ChoiceItem_Text_0
# 992 "data//maps/PellucaCity/scripts.pory"
	waitmessage
# 993 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Gab_ChoiceItem_Text_1, PellucaCity_Gab_ChoiceItem_Text_2, PellucaCity_Gab_ChoiceItem_Text_3
# 994 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Gab_ChoiceItem_2
PellucaCity_Gab_ChoiceItem_1:
# 995 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Gab_ChoiceItem_5
PellucaCity_Gab_ChoiceItem_4:
# 996 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_Gab_ChoiceItem_8
PellucaCity_Gab_ChoiceItem_7:
# 997 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem_Give
	return

PellucaCity_Gab_ChoiceItem_2:
# 994 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_0x8006, ITEM_CHOICE_SPECS
	goto PellucaCity_Gab_ChoiceItem_1

PellucaCity_Gab_ChoiceItem_5:
# 995 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_0x8006, ITEM_CHOICE_BAND
	goto PellucaCity_Gab_ChoiceItem_4

PellucaCity_Gab_ChoiceItem_8:
# 996 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_0x8006, ITEM_CHOICE_SCARF
	goto PellucaCity_Gab_ChoiceItem_7


PellucaCity_Gab_ChoiceItem_Give::
# 1001 "data//maps/PellucaCity/scripts.pory"
	showitemdescription
# 1002 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Gab_ChoiceItem_Give_Text_0, MSGBOX_YESNO
# 1003 "data//maps/PellucaCity/scripts.pory"
	hideitemdescription
# 1004 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Gab_ChoiceItem_Give_1
# 1005 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem
	return

PellucaCity_Gab_ChoiceItem_Give_1:
# 1004 "data//maps/PellucaCity/scripts.pory"
	giveitem VAR_0x8006
# 1004 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem_End
	return


PellucaCity_Gab_ChoiceItem_End::
# 1009 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1010 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Gab_ChoiceItem_End_Text_0
# 1011 "data//maps/PellucaCity/scripts.pory"
	release
# 1012 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 1013 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 1014 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1015 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Zorua::
# 1027 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1028 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1029 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZOROARK, CRY_MODE_NORMAL
# 1030 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 1031 "data//maps/PellucaCity/scripts.pory"
	release
# 1032 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 1033 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1034 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 1050 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 1051 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC1::
# 1064 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC2::
# 1069 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC3::
# 1074 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC4::
# 1079 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC5::
# 1084 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1085 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 1086 "data//maps/PellucaCity/scripts.pory"
	release
# 1087 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1088 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 1089 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1090 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1091 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_1
# 1092 "data//maps/PellucaCity/scripts.pory"
	release
# 1093 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1094 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 1095 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1096 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1097 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_2, MSGBOX_NPC
# 1098 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 1103 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC7::
# 1108 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC8::
# 1113 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_Sealeo::
# 1118 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1119 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1120 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 1121 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0, MSGBOX_NPC
# 1122 "data//maps/PellucaCity/scripts.pory"
	release
# 1123 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_MayorFight_Trigger_Movement_4
# 1124 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1125 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 1133 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullGirl::
# 1142 "data//maps/PellucaCity/scripts.pory"
	lock
# 1143 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1144 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 1145 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 1147 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 1161 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5, MSGBOX_NPC
PellucaCity_WingullGirl_1:
# 1164 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 1149 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_MayorFight_Trigger_Movement_5
# 1150 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 1151 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 1152 "data//maps/PellucaCity/scripts.pory"
	release
# 1153 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_MayorFight_Trigger_Movement_7
# 1154 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_MayorFight_Trigger_Movement_7
# 1155 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1156 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1157 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 1158 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 1159 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 1169 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullCritique::
# 1174 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC10::
# 1187 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC10_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC11::
# 1193 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_CITY_TM_GIVER, PellucaCity_NPC11_2
# 1198 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_1, MSGBOX_NPC
# 1199 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_TM31
# 1200 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_CITY_TM_GIVER
# 1201 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_2, MSGBOX_NPC
	end

PellucaCity_NPC11_2:
# 1194 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC12::
# 1207 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC12_Text_0, MSGBOX_NPC
	end


PellucaCity_Stantler::
# 1212 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 1213 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Stantler_Text_0, MSGBOX_NPC
	end


PellucaCity_PostGymEvent_Trigger::
# 1240 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_POSTGYM, PellucaCity_PostGymEvent_Trigger_2
# 1242 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PellucaCity_PostGymEvent_Trigger_5
	end

PellucaCity_PostGymEvent_Trigger_2:
	end

PellucaCity_PostGymEvent_Trigger_5:
# 1243 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1246 "data//maps/PellucaCity/scripts.pory"
	opendoor 37, 8
# 1247 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 1250 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_FL_JANIA
# 1251 "data//maps/PellucaCity/scripts.pory"
	setobjectxy LOCALID_FL_JANIA, 37, 8
# 1253 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_10
# 1254 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1257 "data//maps/PellucaCity/scripts.pory"
	closedoor 37, 8
# 1259 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 1260 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1262 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 1263 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_0
# 1264 "data//maps/PellucaCity/scripts.pory"
	release
# 1265 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_PostGymEvent_Trigger_Movement_0
# 1266 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 1267 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1268 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1269 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_5
# 1270 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1271 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1272 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 1273 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_1
# 1274 "data//maps/PellucaCity/scripts.pory"
	release
# 1276 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1277 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_PostGymEvent_Trigger_Movement_1
# 1278 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_0
# 1279 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1281 "data//maps/PellucaCity/scripts.pory"
	opendoor 37, 8
# 1282 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 1285 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_GAB
# 1286 "data//maps/PellucaCity/scripts.pory"
	setobjectxy LOCALID_GAB, 37, 8
# 1287 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_2
# 1288 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1289 "data//maps/PellucaCity/scripts.pory"
	closedoor 37, 8
# 1290 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1291 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1292 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_2
# 1293 "data//maps/PellucaCity/scripts.pory"
	release
# 1295 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_PostGymEvent_Trigger_Movement_3
# 1296 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1297 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 1298 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1299 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1301 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1302 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_3
# 1303 "data//maps/PellucaCity/scripts.pory"
	release
# 1304 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_MayorFight_Trigger_Movement_7
# 1305 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1306 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1307 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1308 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_4
# 1309 "data//maps/PellucaCity/scripts.pory"
	release
# 1310 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1311 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_4
# 1312 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_4
# 1313 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1314 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1315 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1316 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_5
# 1317 "data//maps/PellucaCity/scripts.pory"
	release
# 1318 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_5
# 1319 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1320 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1322 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1325 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_FL_JANIA
# 1326 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_GAB
# 1329 "data//maps/PellucaCity/scripts.pory"
	startquest QUEST_STOP_TEAM_SOMBER
# 1330 "data//maps/PellucaCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_STOP_TEAM_SOMBER, SUB_QUEST_1
# 1331 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_POSTGYM
	end


PellucaCity_Red_GymBlock::
# 1348 "data//maps/PellucaCity/scripts.pory"
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

# 312 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Blocker_Trigger_Movement_0:
# 312 "data//maps/PellucaCity/scripts.pory"
	walk_right
	step_end

# 480 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_0:
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 480 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 507 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_1:
# 507 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 507 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_down
	step_end

# 549 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_2:
# 549 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 549 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 558 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_3:
# 558 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 558 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 558 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 558 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 558 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 558 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 558 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 558 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 558 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 558 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 566 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_4:
# 566 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 567 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_5:
# 567 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 589 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_6:
# 589 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 589 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_up
	step_end

# 615 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_7:
# 615 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 615 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 615 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 615 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 615 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 615 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 615 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 615 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 615 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 615 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 617 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_8:
# 617 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 617 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 756 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_0:
# 756 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 756 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 756 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 773 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_1:
# 773 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 773 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 792 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_2:
# 792 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 792 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 870 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_0:
# 870 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 870 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 870 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 870 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 870 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 870 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 870 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 881 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_0:
# 881 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 881 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 881 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 881 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 881 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 881 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 881 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 881 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 892 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger2_Movement_0:
# 892 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 892 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 892 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 892 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 892 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 892 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 892 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 920 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
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
	walk_up
# 920 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 1088 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 1088 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1088 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1088 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1088 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1088 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1088 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1088 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1088 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1088 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1088 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1088 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 1094 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 1094 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1094 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1094 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1094 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1094 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1094 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1094 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1094 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1094 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1094 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1094 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

# 1265 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_0:
# 1265 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 1265 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 1277 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_1:
# 1277 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1277 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1277 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 1277 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 1277 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 1287 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_2:
# 1287 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1287 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 1295 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_3:
# 1295 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1295 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1295 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1295 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 1312 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_4:
# 1312 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1312 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1312 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1312 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 1318 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_5:
# 1318 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1318 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1318 "data//maps/PellucaCity/scripts.pory"
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

PellucaCity_Sailor_QwilsquadExplanation_Text_0:
# 234 "data//maps/PellucaCity/scripts.pory"
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
# 239 "data//maps/PellucaCity/scripts.pory"
	.string "Heh? A pipsqueak like you is in the\n"
	.string "squad? You a new member or something?\l"
	.string "You got any proof?$"

PellucaCity_Sailor_MemberCheck_Text_1:
# 243 "data//maps/PellucaCity/scripts.pory"
	.string "Then beat it, kid!$"

PellucaCity_Sailor_MemberCheck_Text_2:
# 247 "data//maps/PellucaCity/scripts.pory"
	.string "Show me!$"

PellucaCity_Sailor_MemberCheck_Text_3:
# 263 "data//maps/PellucaCity/scripts.pory"
	.string "That don't look like no Qwilfish to me!\p"
	.string "Beat it, kid!$"

PellucaCity_Sailor_MemberAccepted_Text_0:
# 274 "data//maps/PellucaCity/scripts.pory"
	.string "Now that's what I'm talking about!\n"
	.string "You're one of us, kid. Go on, get inside!$"

PellucaCity_Blocker_Text_0:
# 302 "data//maps/PellucaCity/scripts.pory"
	.string "This is our city! Got any problems?$"

PellucaCity_Blocker_Trigger_Text_0:
# 310 "data//maps/PellucaCity/scripts.pory"
	.string "Hey kid, where d'you think yer goin?\n"
	.string "There's a toll if you wanna get out.\p"
	.string "Yeah, that's right!\n"
	.string "You gotta pay ¥999999.\p"
	.string "Ain't got the money?\p"
	.string "Then get packing!$"

PellucaCityFlooded_SaveCitizen_A_Text_0:
# 388 "data//maps/PellucaCity/scripts.pory"
	.string "Help! Help! Over here!\p"
	.string "...\p"
	.string "Thank you so much - I'm saved!$"

PellucaCityFlooded_SaveCitizen_B_Text_0:
# 404 "data//maps/PellucaCity/scripts.pory"
	.string "I can't stay afloat any more!\p"
	.string "...\p"
	.string "Just in time!$"

PellucaCityFlooded_SaveCitizen_C_Text_0:
# 420 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh! It's too cold!\p"
	.string "...\p"
	.string "Waah! Wahh! It was so scary!$"

PellucaCityFlooded_SaveCitizen_D_Text_0:
# 436 "data//maps/PellucaCity/scripts.pory"
	.string "Help! Someone save me!\p"
	.string "...\p"
	.string "Yaay! You came!$"

PellucaCityFlooded_MainEvent_Text_0:
# 456 "data//maps/PellucaCity/scripts.pory"
	.string "Skip cutscene?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_0:
# 474 "data//maps/PellucaCity/scripts.pory"
	.string "What on earth is this?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_1:
# 485 "data//maps/PellucaCity/scripts.pory"
	.string "Citizen$"

PellucaCityFlooded_MainEvent_Cutscene_Text_2:
# 486 "data//maps/PellucaCity/scripts.pory"
	.string "What a disaster!\p"
	.string "How could we be so unlucky!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_3:
# 488 "data//maps/PellucaCity/scripts.pory"
	.string "What happened?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_4:
# 490 "data//maps/PellucaCity/scripts.pory"
	.string "A Mega Sharpedo came rampaging down\n"
	.string "from the Ivy River and kicked up a\l"
	.string "storm! The riverbanks have flooded.\p"
	.string "The city's underwater!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_5:
# 492 "data//maps/PellucaCity/scripts.pory"
	.string "Is everyone safe?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_6:
# 494 "data//maps/PellucaCity/scripts.pory"
	.string "No - there are still four people in the\n"
	.string "water! We have to save them fast!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_7:
# 500 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, go on Mayor. Go save them!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_8:
# 504 "data//maps/PellucaCity/scripts.pory"
	.string "W-what do you mean? Weren't you the\n"
	.string "one in control of this city?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_9:
# 509 "data//maps/PellucaCity/scripts.pory"
	.string "ENOUGH!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_10:
# 521 "data//maps/PellucaCity/scripts.pory"
	.string "While you two bicker, it's us that pays\n"
	.string "the price every time! Both of you are\l"
	.string "strong - a tough trainer and a smart\l"
	.string "politician - and yet, neither of you\l"
	.string "bother to actually do anything for us\l"
	.string "citizens! And now people are in danger\l"
	.string "and you're still fighting! We've all had\l"
	.string "it up to here with you two!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_11:
# 534 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah!\p"
	.string "Hear hear!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_12:
# 540 "data//maps/PellucaCity/scripts.pory"
	.string "???$"

PellucaCityFlooded_MainEvent_Cutscene_Text_13:
# 541 "data//maps/PellucaCity/scripts.pory"
	.string "I agree too.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_14:
# 554 "data//maps/PellucaCity/scripts.pory"
	.string "Is that Jania?\p"
	.string "Yeah! It's the Gym Leader! In the flesh!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_15:
# 573 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, Jania! It's you! Finally. Please - you\n"
	.string "have to save those still drowning!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_16:
# 580 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, Jania! You're an even stronger\n"
	.string "trainer than I am. You can do it!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_17:
# 584 "data//maps/PellucaCity/scripts.pory"
	.string "Jania$"

PellucaCityFlooded_MainEvent_Cutscene_Text_18:
# 585 "data//maps/PellucaCity/scripts.pory"
	.string "No, I won't.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_19:
# 595 "data//maps/PellucaCity/scripts.pory"
	.string "Don't look at me like that!\p"
	.string "You two want to be responsible for this\n"
	.string "city? Start right here, right now.\p"
	.string "Your citizens are miserably tired of\n"
	.string "both of you - when will you two change?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_20:
# 602 "data//maps/PellucaCity/scripts.pory"
	.string "And who might you be?\p"
	.string "...\p"
	.string "{PLAYER}?\p"
	.string "...\p"
	.string "I see. So that's how you got involved\n"
	.string "with these two.\p"
	.string "Here, take this.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_21:
# 610 "data//maps/PellucaCity/scripts.pory"
	.string "Consider this my help.\p"
	.string "Now I'm going to track the Mega\n"
	.string "Sharpedo down and make sure it doesn't\l"
	.string "harm anyone else.\p"
	.string "And the two of you - and {PLAYER} -\n"
	.string "take this chance to do the right thing!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_22:
# 625 "data//maps/PellucaCity/scripts.pory"
	.string "Hmpf.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_23:
# 629 "data//maps/PellucaCity/scripts.pory"
	.string "Tchah!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_24:
# 633 "data//maps/PellucaCity/scripts.pory"
	.string "...$"

PellucaCityFlooded_MainEvent_Cutscene_Text_25:
# 644 "data//maps/PellucaCity/scripts.pory"
	.string "All of you! We've been letting you down.\n"
	.string "But now we're gonna prove that we care\l"
	.string "about this city with our actions!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_26:
# 646 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} - the two of us will handle\n"
	.string "the citizens on the bridge and on land.\l"
	.string "Can you surf and rescue the four\l"
	.string "remaining citizens?\p"
	.string "Once you've picked all four of them up,\n"
	.string "come back here.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_27:
# 648 "data//maps/PellucaCity/scripts.pory"
	.string "Good luck, {PLAYER}! We're on top of\n"
	.string "things here, so you go on into the river.\l"
	.string "You don't need to teach any Pokémon\l"
	.string "how to surf - just hop on the water!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_28:
# 651 "data//maps/PellucaCity/scripts.pory"
	.string "But hurry! There's not much time.$"

PellucaCityFlooded_Mayor_Text_0:
# 665 "data//maps/PellucaCity/scripts.pory"
	.string "Have you saved everyone yet?\n"
	.string "Please hurry!$"

PellucaCityFlooded_QwilBoss_Text_0:
# 670 "data//maps/PellucaCity/scripts.pory"
	.string "We're keeping the citizens safe, so you\n"
	.string "go get the rest!$"

PellucaCityFlooded_NPC1_Text_0:
# 674 "data//maps/PellucaCity/scripts.pory"
	.string "The Mayor and the Qwilsquad boss\n"
	.string "working together? Hah! I'll believe it\l"
	.string "when I see it.$"

PellucaCityFlooded_NPC2_Text_0:
# 678 "data//maps/PellucaCity/scripts.pory"
	.string "If the two of them collaborate, maybe\n"
	.string "things will finally improve...$"

PellucaCityFlooded_NPC3_Text_0:
# 682 "data//maps/PellucaCity/scripts.pory"
	.string "I'm so scared - I hope you can save the\n"
	.string "others!$"

PellucaCityFlooded_NPC4_Text_0:
# 686 "data//maps/PellucaCity/scripts.pory"
	.string "I hate that Mega Sharpedo for doing\n"
	.string "this to my home!$"

PellucaCityFlooded_NPCSailor_Text_0:
# 690 "data//maps/PellucaCity/scripts.pory"
	.string "Go on, {PLAYER}! Hurry up and do what\n"
	.string "the boss says.$"

PellucaCityFlooded_NPCSaved_A_Text_0:
# 695 "data//maps/PellucaCity/scripts.pory"
	.string "You saved me! I can't thank you enough,\n"
	.string "trainer.$"

PellucaCityFlooded_NPCSaved_B_Text_0:
# 699 "data//maps/PellucaCity/scripts.pory"
	.string "I owe you, trainer. I'll never forget\n"
	.string "this!$"

PellucaCityFlooded_NPCSaved_C_Text_0:
# 703 "data//maps/PellucaCity/scripts.pory"
	.string "Brr - the water was so cold! How do\n"
	.string "Pokémon swim in it?$"

PellucaCityFlooded_NPCSaved_D_Text_0:
# 707 "data//maps/PellucaCity/scripts.pory"
	.string "When I grow up, I wanna be just like you!$"

PellucaCityFlooded_EventScript_TimesUp_Text_0:
# 712 "data//maps/PellucaCity/scripts.pory"
	.string "The tides rise higher and higher...\n"
	.string "it's too late!$"

PellucaCityFlooded_EventScript_TimesRunningOut_Text_0:
# 742 "data//maps/PellucaCity/scripts.pory"
	.string "The water level is rising...\n"
	.string "There's not much time left!$"

PellucaCityFlooded_Complete_Trigger_Text_0:
# 762 "data//maps/PellucaCity/scripts.pory"
	.string "That's one, two, three...and four!\p"
	.string "Yup, we're all accounted for.$"

PellucaCityFlooded_Complete_Trigger_Text_1:
# 768 "data//maps/PellucaCity/scripts.pory"
	.string "Finally! Thank you {PLAYER}. You did\n"
	.string "us - the city of Pelluca - a great\l"
	.string "service. You're a hero!$"

PellucaCityFlooded_Complete_Trigger_Text_2:
# 788 "data//maps/PellucaCity/scripts.pory"
	.string "Thank you {PLAYER}!\p"
	.string "You're the best!$"

PellucaCityFlooded_Complete_Trigger_Text_3:
# 801 "data//maps/PellucaCity/scripts.pory"
	.string "It looks like we're all safe for now.$"

PellucaCityFlooded_Complete_Trigger_Text_4:
# 810 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah. All that remains is to wait until\n"
	.string "the water recedes, and then we can go\l"
	.string "back to normal.\p"
	.string "Come, shall we wait in the Pokémon\n"
	.string "Center until then?$"

PellucaCityFlooded_Complete_Trigger_Text_5:
# 815 "data//maps/PellucaCity/scripts.pory"
	.string "Sounds like a good idea. {PLAYER} here\n"
	.string "needs some rest after everything\l"
	.string "that's just happened!$"

PellucaCity_Greta_Main_Text_0:
# 901 "data//maps/PellucaCity/scripts.pory"
	.string "Greta$"

PellucaCity_Greta_Main_Text_1:
# 902 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, it's you again, {PLAYER}!\n"
	.string "Fancy seeing you in these parts.\l"
	.string "Route 6 was a tough trek, wasn't it?$"

PellucaCity_Greta_GottaGo_Text_0:
# 918 "data//maps/PellucaCity/scripts.pory"
	.string "Would you look at the time!\n"
	.string "I've gotta run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 948 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 949 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh, I love the smell of the river!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 954 "data//maps/PellucaCity/scripts.pory"
	.string "I grew up here on this cliff without my\n"
	.string "parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "Those grunts were really vicious to me.\n"
	.string "I was so scared I would lose Zoroark!$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 960 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the Clefairy?$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 966 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah...I doubt he'd ever forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 972 "data//maps/PellucaCity/scripts.pory"
	.string "You're just trying to make me feel\n"
	.string "better, aren't you? I don't need your\l"
	.string "pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 977 "data//maps/PellucaCity/scripts.pory"
	.string "After getting kicked out of Team\n"
	.string "Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 983 "data//maps/PellucaCity/scripts.pory"
	.string "I want you to have this. As a thank you.\n"
	.string "For saving me - not just once, but so\l"
	.string "many times. You're a strong trainer, but\l"
	.string "more importantly - you're a good person.\l"
	.string "I hope to be like you.$"

PellucaCity_Gab_ChoiceItem_Text_0:
# 991 "data//maps/PellucaCity/scripts.pory"
	.string "Choose something you like.$"

PellucaCity_Gab_ChoiceItem_Text_1:
# 993 "data//maps/PellucaCity/scripts.pory"
	.string "Choice Specs$"

PellucaCity_Gab_ChoiceItem_Text_2:
# 993 "data//maps/PellucaCity/scripts.pory"
	.string "Choice Band$"

PellucaCity_Gab_ChoiceItem_Text_3:
# 993 "data//maps/PellucaCity/scripts.pory"
	.string "Choice Scarf$"

PellucaCity_Gab_ChoiceItem_Give_Text_0:
# 1002 "data//maps/PellucaCity/scripts.pory"
	.string "Are you sure?$"

PellucaCity_Gab_ChoiceItem_End_Text_0:
# 1010 "data//maps/PellucaCity/scripts.pory"
	.string "The choices we make define who we are.\n"
	.string "Once we lock in, we can't change.\p"
	.string "I can't erase what I've done, but I'm\n"
	.string "going to make a better choice this time.\p"
	.string "I suppose you're going to head to the\n"
	.string "Mirroh Base Camp from here? Team\l"
	.string "Somber must've reached there already.\p"
	.string "Best of luck, {PLAYER}.$"

PellucaCity_Zorua_Text_0:
# 1030 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle's Zoroark looks content.\n"
	.string "Life is more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 1051 "data//maps/PellucaCity/scripts.pory"
	.string "Lycanroc is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 1064 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 1069 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "Pelluca Restaurant?\p"
	.string "...that's the only thing our mayor cares\n"
	.string "about promoting.$"

PellucaCity_NPC3_Text_0:
# 1074 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in Mt. Mirroh but I\n"
	.string "can't go there without a Cable Car Pass.\l"
	.string "So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 1079 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge was built by Rivetshore\n"
	.string "Construction. It's nothing like the\l"
	.string "cycling roads in other regions though!$"

PellucaCity_NPC5_Text_0:
# 1085 "data//maps/PellucaCity/scripts.pory"
	.string "Look over there...$"

PellucaCity_NPC5_Text_1:
# 1091 "data//maps/PellucaCity/scripts.pory"
	.string "Jania, the Gym Leader of Pelluca City\n"
	.string "had her gym constructed on a separate\l"
	.string "island.$"

PellucaCity_NPC5_Text_2:
# 1097 "data//maps/PellucaCity/scripts.pory"
	.string "She never gets involved in city affairs!$"

PellucaCity_NPC6_Text_0:
# 1103 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the Mirroh Base Camp?\n"
	.string "You'll have to take the cable car past\l"
	.string "Route 7. I heard they're closing the gym\l"
	.string "there though.$"

PellucaCity_NPC7_Text_0:
# 1108 "data//maps/PellucaCity/scripts.pory"
	.string "With the way things are, I'm half in\n"
	.string "support of the Qwilsquad. I know\l"
	.string "they're bullies, but maybe they'll do\l"
	.string "something good for the city.$"

PellucaCity_NPC8_Text_0:
# 1113 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "Mega Sharpedo's going to scare all the\l"
	.string "fish away? I wish our mayor would do\l"
	.string "something about it.$"

PellucaCity_Sealeo_Text_0:
# 1121 "data//maps/PellucaCity/scripts.pory"
	.string "Sealeo wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 1133 "data//maps/PellucaCity/scripts.pory"
	.string "This is the Pelluca Fishery! But it's\n"
	.string "closed due to the Mega Sharpedo\l"
	.string "attacks.$"

PellucaCity_WingullGirl_Text_0:
# 1144 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "Wingulls over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 1145 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 1145 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 1151 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a Wingull!$"

PellucaCity_WingullGirl_Text_4:
# 1157 "data//maps/PellucaCity/scripts.pory"
	.string "The Wingull gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 1161 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 1169 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "Wingulls. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 1174 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at Pokémon...that's poor\l"
	.string "parenting.$"

PellucaCity_NPC10_Text_0:
# 1187 "data//maps/PellucaCity/scripts.pory"
	.string "I ate too many apple tarts! I'm too full.\n"
	.string "Whoever said people have a second\l"
	.string "stomach for dessert was lying!$"

PellucaCity_NPC11_Text_0:
# 1194 "data//maps/PellucaCity/scripts.pory"
	.string "Life is too short to worry!$"

PellucaCity_NPC11_Text_1:
# 1198 "data//maps/PellucaCity/scripts.pory"
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
# 1201 "data//maps/PellucaCity/scripts.pory"
	.string "It's time for me to let go.$"

PellucaCity_NPC12_Text_0:
# 1207 "data//maps/PellucaCity/scripts.pory"
	.string "The mayor isn't maintaining the city one\n"
	.string "bit! My Stantler eating the overgrown\l"
	.string "flowers is actually contributing to\l"
	.string "city maintenance.$"

PellucaCity_Stantler_Text_0:
# 1213 "data//maps/PellucaCity/scripts.pory"
	.string "Stantler is nonchalantly chomping on\n"
	.string "the flowers.$"

PellucaCity_PostGymEvent_Trigger_Text_0:
# 1263 "data//maps/PellucaCity/scripts.pory"
	.string "Excuse me.$"

PellucaCity_PostGymEvent_Trigger_Text_1:
# 1273 "data//maps/PellucaCity/scripts.pory"
	.string "Where am I going?\p"
	.string "I'm going to Rivetshore City.\n"
	.string "All the Gym Leaders have been called\l"
	.string "there.$"

PellucaCity_PostGymEvent_Trigger_Text_2:
# 1292 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER}! Over here!$"

PellucaCity_PostGymEvent_Trigger_Text_3:
# 1302 "data//maps/PellucaCity/scripts.pory"
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
# 1308 "data//maps/PellucaCity/scripts.pory"
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
# 1316 "data//maps/PellucaCity/scripts.pory"
	.string "You'd better be there, {PLAYER}!$"

PellucaCity_Red_GymBlock_Text_0:
# 1348 "data//maps/PellucaCity/scripts.pory"
	.string "Jania's gone to deal with the Mega\n"
	.string "Sharpedo. You'll find her up in Ivy River\l"
	.string "somewhere.$"

PellucaCityFlooded_TriggerText::
# 330 "data//maps/PellucaCity/scripts.pory"
	.string "I need to save the drowning citizens!$"
