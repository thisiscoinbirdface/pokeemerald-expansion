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
# 126 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 127 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 129 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 130 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_10
# 131 "data//maps/PellucaCity/scripts.pory"
	release
# 132 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 134 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_6
# 135 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_6
# 136 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 137 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 138 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_11
# 139 "data//maps/PellucaCity/scripts.pory"
	release
# 140 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 142 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_7
# 143 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 144 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 145 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 146 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_12
# 147 "data//maps/PellucaCity/scripts.pory"
	release
# 148 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 151 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 152 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 153 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 154 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_10
# 155 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 156 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 157 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_9
# 158 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_11
# 159 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 160 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_12
# 161 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_12
# 162 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_12
# 163 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 168 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_13
# 169 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 170 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 171 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 172 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_13
# 173 "data//maps/PellucaCity/scripts.pory"
	release
# 174 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 176 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_14
# 177 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 178 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 179 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 180 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_14
# 181 "data//maps/PellucaCity/scripts.pory"
	release
# 182 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 183 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_15
# 184 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 185 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 189 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 190 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_MayorFight_Trigger_Movement_16
# 191 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 192 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 194 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_MAYOR
# 195 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S1
# 196 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S2
# 197 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S3
# 198 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_MAYOR_FIGHT
# 200 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_MayorFight_Trigger_2:
	end


PellucaCity_Sailor_Entrance::
# 217 "data//maps/PellucaCity/scripts.pory"
	lockall
# 218 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 220 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 221 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_Entrance_Text_0
# 222 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCity_Sailor_Entrance_2
# 223 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 1
	goto_if_eq PellucaCity_Sailor_Entrance_5
# 225 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_Multichoice
# 227 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_Entrance_2:
# 222 "data//maps/PellucaCity/scripts.pory"
	release
	end

PellucaCity_Sailor_Entrance_5:
# 223 "data//maps/PellucaCity/scripts.pory"
	release
	end


PellucaCity_Sailor_Multichoice::
# 231 "data//maps/PellucaCity/scripts.pory"
	message PellucaCity_Sailor_Multichoice_Text_0
# 232 "data//maps/PellucaCity/scripts.pory"
	waitmessage
# 233 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Sailor_Multichoice_Text_1, PellucaCity_Sailor_Multichoice_Text_2, PellucaCity_Sailor_Multichoice_Text_3
# 235 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_Multichoice_2
PellucaCity_Sailor_Multichoice_1:
# 236 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_Multichoice_5
PellucaCity_Sailor_Multichoice_4:
# 238 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_Multichoice_2:
# 235 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_QwilsquadExplanation
	goto PellucaCity_Sailor_Multichoice_1

PellucaCity_Sailor_Multichoice_5:
# 236 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberCheck
	goto PellucaCity_Sailor_Multichoice_4


PellucaCity_Sailor_QwilsquadExplanation::
# 242 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 243 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_QwilsquadExplanation_Text_0
# 244 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_Multichoice
	return


PellucaCity_Sailor_MemberCheck::
# 247 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 248 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_0, MSGBOX_YESNO
# 250 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_MemberCheck_2
PellucaCity_Sailor_MemberCheck_1:
# 254 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_MemberCheck_5
PellucaCity_Sailor_MemberCheck_4:
# 276 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_MemberCheck_2:
# 251 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 252 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_1
	goto PellucaCity_Sailor_MemberCheck_1

PellucaCity_Sailor_MemberCheck_5:
# 255 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 256 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_2
# 257 "data//maps/PellucaCity/scripts.pory"
	release
# 260 "data//maps/PellucaCity/scripts.pory"
	special ChoosePartyMon
# 261 "data//maps/PellucaCity/scripts.pory"
	waitstate
# 262 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 263 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 264 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 266 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_QWILFISH_HISUI
	goto_if_eq PellucaCity_Sailor_MemberCheck_8
PellucaCity_Sailor_MemberCheck_7:
# 267 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_OVERQWIL
	goto_if_eq PellucaCity_Sailor_MemberCheck_11
PellucaCity_Sailor_MemberCheck_10:
# 269 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 270 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 271 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 272 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_3
	goto PellucaCity_Sailor_MemberCheck_4

PellucaCity_Sailor_MemberCheck_8:
# 266 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_7

PellucaCity_Sailor_MemberCheck_11:
# 267 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_10


PellucaCity_Sailor_MemberAccepted::
# 280 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 281 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 282 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 283 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberAccepted_Text_0
# 284 "data//maps/PellucaCity/scripts.pory"
	release
# 286 "data//maps/PellucaCity/scripts.pory"
	opendoor 3, 42
# 287 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 288 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_11
# 289 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 290 "data//maps/PellucaCity/scripts.pory"
	playse SE_EXIT
# 291 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S_ENTRANCE
# 292 "data//maps/PellucaCity/scripts.pory"
	closedoor 3, 42
# 293 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 295 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_QWILSQUAD_ENTRANCE
# 296 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Blocker::
# 311 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Text_0
	end


PellucaCity_Blocker_Trigger::
# 315 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 10
	goto_if_eq PellucaCity_Blocker_Trigger_2
# 317 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_BLOCKER, PellucaCity_MayorFight_Trigger_Movement_7
# 318 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 319 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Trigger_Text_0
# 320 "data//maps/PellucaCity/scripts.pory"
	release
# 321 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 322 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 323 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Blocker_Trigger_2:
	end


PellucaCityFlooded_TriggerDown::
# 343 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerDown_1
	end

PellucaCityFlooded_TriggerDown_1:
# 344 "data//maps/PellucaCity/scripts.pory"
	lockall
# 345 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 346 "data//maps/PellucaCity/scripts.pory"
	release
# 347 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_10
# 348 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 349 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerUp::
# 356 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerUp_1
	end

PellucaCityFlooded_TriggerUp_1:
# 357 "data//maps/PellucaCity/scripts.pory"
	lockall
# 358 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 359 "data//maps/PellucaCity/scripts.pory"
	release
# 360 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_11
# 361 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 362 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerLeft::
# 369 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerLeft_1
	end

PellucaCityFlooded_TriggerLeft_1:
# 370 "data//maps/PellucaCity/scripts.pory"
	lockall
# 371 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 372 "data//maps/PellucaCity/scripts.pory"
	release
# 373 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_9
# 374 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 375 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerRight::
# 382 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerRight_1
	end

PellucaCityFlooded_TriggerRight_1:
# 383 "data//maps/PellucaCity/scripts.pory"
	lockall
# 384 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 385 "data//maps/PellucaCity/scripts.pory"
	release
# 386 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 387 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 388 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_A::
# 395 "data//maps/PellucaCity/scripts.pory"
	lockall
# 396 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 397 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_A_Text_0
# 398 "data//maps/PellucaCity/scripts.pory"
	release
# 401 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 403 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq PellucaCityFlooded_SaveCitizen_A_2
# 408 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_A_Movement_1
# 409 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 410 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
PellucaCityFlooded_SaveCitizen_A_1:
# 414 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 415 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 417 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCityFlooded_SaveCitizen_A_2:
# 404 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_A_Movement_0
# 405 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 406 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto PellucaCityFlooded_SaveCitizen_A_1


PellucaCityFlooded_SaveCitizen_B::
# 421 "data//maps/PellucaCity/scripts.pory"
	lockall
# 422 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 423 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_B_Text_0
# 424 "data//maps/PellucaCity/scripts.pory"
	release
# 426 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 428 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq PellucaCityFlooded_SaveCitizen_B_2
# 433 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_B_Movement_1
# 434 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 435 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
PellucaCityFlooded_SaveCitizen_B_1:
# 438 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 439 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 441 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCityFlooded_SaveCitizen_B_2:
# 429 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_B_Movement_0
# 430 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 431 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto PellucaCityFlooded_SaveCitizen_B_1


PellucaCityFlooded_SaveCitizen_C::
# 445 "data//maps/PellucaCity/scripts.pory"
	lockall
# 446 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 447 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_C_Text_0
# 448 "data//maps/PellucaCity/scripts.pory"
	release
# 451 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 453 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq PellucaCityFlooded_SaveCitizen_C_2
# 458 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_C_Movement_1
# 459 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 460 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
PellucaCityFlooded_SaveCitizen_C_1:
# 463 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 464 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 466 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCityFlooded_SaveCitizen_C_2:
# 454 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_C_Movement_0
# 455 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 456 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto PellucaCityFlooded_SaveCitizen_C_1


PellucaCityFlooded_SaveCitizen_D::
# 470 "data//maps/PellucaCity/scripts.pory"
	lockall
# 471 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 472 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_D_Text_0
# 473 "data//maps/PellucaCity/scripts.pory"
	release
# 476 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 478 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq PellucaCityFlooded_SaveCitizen_D_2
# 483 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_D_Movement_1
# 484 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 485 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
PellucaCityFlooded_SaveCitizen_D_1:
# 488 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 489 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 491 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCityFlooded_SaveCitizen_D_2:
# 479 "data//maps/PellucaCity/scripts.pory"
	applymovement VAR_LAST_TALKED, PellucaCityFlooded_SaveCitizen_D_Movement_0
# 480 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 481 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto PellucaCityFlooded_SaveCitizen_D_1


PellucaCityFlooded_MainEvent::
# 496 "data//maps/PellucaCity/scripts.pory"
	lockall
# 497 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 4
# 498 "data//maps/PellucaCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 500 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_SKIP_PELLUCA_CUTSCENE, PellucaCityFlooded_MainEvent_2
PellucaCityFlooded_MainEvent_1:
# 511 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCityFlooded_MainEvent_Cutscene
	return

PellucaCityFlooded_MainEvent_2:
# 501 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_0, MSGBOX_YESNO
# 502 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCityFlooded_MainEvent_4
	goto PellucaCityFlooded_MainEvent_1

PellucaCityFlooded_MainEvent_4:
# 503 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_TO_WHITE
# 504 "data//maps/PellucaCity/scripts.pory"
	special EnterSafariMode
# 505 "data//maps/PellucaCity/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 506 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_MainEvent_Cutscene::
# 516 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_SKIP_PELLUCA_CUTSCENE
# 518 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 519 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_0
# 520 "data//maps/PellucaCity/scripts.pory"
	release
# 521 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 524 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 525 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_MainEvent_Cutscene_Movement_0
# 527 "data//maps/PellucaCity/scripts.pory"
	delay 60
# 530 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 531 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_2
# 532 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 533 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_3
# 534 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 535 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_4
# 536 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 537 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_5
# 538 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 539 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_6
# 542 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_6
# 543 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 544 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 545 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_7
# 546 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 547 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 548 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 549 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_8
# 552 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_CITIZEN, PellucaCityFlooded_MainEvent_Cutscene_Movement_1
# 553 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 554 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_9
# 555 "data//maps/PellucaCity/scripts.pory"
	release
# 556 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 558 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_5
# 559 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_5
# 560 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 561 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 562 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 563 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 565 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 566 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_10
# 567 "data//maps/PellucaCity/scripts.pory"
	release
# 569 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_7
# 570 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_7
# 571 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_7
# 572 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_7
# 573 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_7
# 574 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_7
# 575 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 576 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 578 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 579 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_11
# 580 "data//maps/PellucaCity/scripts.pory"
	release
# 582 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 585 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_12
# 586 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_13
# 587 "data//maps/PellucaCity/scripts.pory"
	release
# 588 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 590 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_5
# 591 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_5
# 592 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_5
# 593 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_5
# 594 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCityFlooded_MainEvent_Cutscene_Movement_2
# 595 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 596 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_5
# 598 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 599 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_14
# 600 "data//maps/PellucaCity/scripts.pory"
	release
# 602 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_FL_JANIA
# 603 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Cutscene_Movement_3
# 604 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 606 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_4
# 607 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_4
# 608 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_4
# 609 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_4
# 610 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_4
# 611 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 612 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 613 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_4
# 615 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_7
# 616 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 617 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 618 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_15
# 619 "data//maps/PellucaCity/scripts.pory"
	release
# 620 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 622 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_7
# 623 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 624 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 625 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_16
# 626 "data//maps/PellucaCity/scripts.pory"
	release
# 627 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 629 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 630 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_18
# 631 "data//maps/PellucaCity/scripts.pory"
	release
# 632 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 634 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Cutscene_Movement_6
# 635 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCityFlooded_MainEvent_Cutscene_Movement_6
# 636 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 637 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 639 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 640 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_19
# 641 "data//maps/PellucaCity/scripts.pory"
	release
# 642 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 643 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 644 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 645 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 646 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 647 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_20
# 648 "data//maps/PellucaCity/scripts.pory"
	release
# 649 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_SYS_SURF_ENABLED
# 650 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_HM03
# 651 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 652 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_4
# 653 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 654 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 655 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_21
# 656 "data//maps/PellucaCity/scripts.pory"
	release
# 657 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 660 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Cutscene_Movement_7
# 661 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 662 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCityFlooded_MainEvent_Cutscene_Movement_8
# 663 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 666 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 667 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 668 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 669 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 670 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_22
# 671 "data//maps/PellucaCity/scripts.pory"
	release
# 672 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 673 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 674 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_23
# 675 "data//maps/PellucaCity/scripts.pory"
	release
# 676 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 677 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 678 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_24
# 679 "data//maps/PellucaCity/scripts.pory"
	release
# 680 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 681 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 682 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_24
# 683 "data//maps/PellucaCity/scripts.pory"
	release
# 684 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 686 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_5
# 687 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_5
# 688 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 689 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_25
# 690 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 691 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_26
# 692 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 693 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_27
# 694 "data//maps/PellucaCity/scripts.pory"
	release
# 695 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 696 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Cutscene_Text_28
# 697 "data//maps/PellucaCity/scripts.pory"
	release
# 699 "data//maps/PellucaCity/scripts.pory"
	completesubquest QUEST_PELLUCA_CITY, SUB_QUEST_2
# 701 "data//maps/PellucaCity/scripts.pory"
	special EnterSafariMode
# 702 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 703 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_Mayor::
# 709 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 710 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Mayor_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_QwilBoss::
# 714 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 715 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_QwilBoss_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC1::
# 719 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC2::
# 723 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC3::
# 727 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC4::
# 731 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSailor::
# 735 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSailor_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_A::
# 740 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_A_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_B::
# 744 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_B_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_C::
# 748 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_C_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_D::
# 752 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_D_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_EventScript_TimesUp::
# 756 "data//maps/PellucaCity/scripts.pory"
	lockall
# 757 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_EventScript_TimesUp_Text_0
# 758 "data//maps/PellucaCity/scripts.pory"
	release
# 760 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_REGULAR_CITIZENS
# 761 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZENS
# 763 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 764 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 765 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 766 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 768 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A
# 769 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B
# 770 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C
# 771 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D
# 773 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 1
# 775 "data//maps/PellucaCity/scripts.pory"
	delay 2
# 777 "data//maps/PellucaCity/scripts.pory"
	special ExitSafariMode
# 778 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 3
# 779 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 1
# 780 "data//maps/PellucaCity/scripts.pory"
	warp MAP_PELLUCA_CITY, 43, 28
# 781 "data//maps/PellucaCity/scripts.pory"
	waitstate
	end


PellucaCityFlooded_EventScript_TimesRunningOut::
# 786 "data//maps/PellucaCity/scripts.pory"
	lockall
# 787 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_EventScript_TimesRunningOut_Text_0
# 788 "data//maps/PellucaCity/scripts.pory"
	release
	end


PellucaCityFlooded_Complete_Trigger::
# 795 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 8
	goto_if_eq PellucaCityFlooded_Complete_Trigger_2
	end

PellucaCityFlooded_Complete_Trigger_2:
# 797 "data//maps/PellucaCity/scripts.pory"
	special ExitSafariMode
# 799 "data//maps/PellucaCity/scripts.pory"
	lockall
# 800 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Cutscene_Movement_8
# 801 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_Complete_Trigger_Movement_0
# 802 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 803 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 806 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 807 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_0
# 808 "data//maps/PellucaCity/scripts.pory"
	release
# 809 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 812 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 813 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_1
# 814 "data//maps/PellucaCity/scripts.pory"
	release
# 815 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 817 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 818 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_1
# 819 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 823 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_7
# 824 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_7
# 825 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_7
# 826 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_7
# 827 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_7
# 828 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_7
# 829 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 830 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 832 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_1
# 833 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_2
# 834 "data//maps/PellucaCity/scripts.pory"
	release
# 835 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 837 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 838 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 839 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 840 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 842 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_6
# 843 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 844 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 845 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 846 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_3
# 847 "data//maps/PellucaCity/scripts.pory"
	release
# 848 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 851 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 852 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 853 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 854 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 855 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_4
# 856 "data//maps/PellucaCity/scripts.pory"
	release
# 857 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 859 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 860 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_5
# 861 "data//maps/PellucaCity/scripts.pory"
	release
# 862 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 866 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 9
# 867 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 0
# 869 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_REGULAR_CITIZENS
# 870 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZENS
# 872 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 873 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 874 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 875 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 877 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_PC_CHARS
# 880 "data//maps/PellucaCity/scripts.pory"
	warp MAP_PELLUCA_CITY_POKEMON_CENTER, 7, 6
# 882 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Greta_Trigger0::
# 912 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger0_2
# 914 "data//maps/PellucaCity/scripts.pory"
	lockall
# 915 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger0_Movement_0
# 916 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 917 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 918 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 919 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger0_2:
	end


PellucaCity_Greta_Trigger1::
# 923 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger1_2
# 925 "data//maps/PellucaCity/scripts.pory"
	lockall
# 926 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger1_Movement_0
# 927 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 928 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 929 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 930 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger1_2:
	end


PellucaCity_Greta_Trigger2::
# 934 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger2_2
# 936 "data//maps/PellucaCity/scripts.pory"
	lockall
# 937 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger2_Movement_0
# 938 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 939 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 940 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 941 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger2_2:
	end


PellucaCity_Greta_Main::
# 946 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 947 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_Main_Text_1
# 948 "data//maps/PellucaCity/scripts.pory"
	release
# 949 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 950 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 951 "data//maps/PellucaCity/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 952 "data//maps/PellucaCity/scripts.pory"
	release
# 953 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 955 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 959 "data//maps/PellucaCity/scripts.pory"
	release
# 960 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_MayorFight_Trigger_Movement_7
# 961 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 962 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 963 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 964 "data//maps/PellucaCity/scripts.pory"
	release
# 965 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 966 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 967 "data//maps/PellucaCity/scripts.pory"
	removeobject 27
# 968 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 969 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 971 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 991 "data//maps/PellucaCity/scripts.pory"
	lockall
# 992 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_1
# 998 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 999 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2
# 1000 "data//maps/PellucaCity/scripts.pory"
	release
# 1001 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 1002 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1003 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 1004 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1005 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3, MSGBOX_YESNO
# 1006 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_5
# 1015 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 1016 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1017 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 1018 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_4:
# 1020 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 1021 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1022 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 1023 "data//maps/PellucaCity/scripts.pory"
	release
# 1024 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 1025 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1026 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 1027 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1028 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 1029 "data//maps/PellucaCity/scripts.pory"
	release
# 1030 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem
	return

PellucaCity_EventScripts_Gabrielle_1:
# 993 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 994 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 995 "data//maps/PellucaCity/scripts.pory"
	release
	return

PellucaCity_EventScripts_Gabrielle_5:
# 1008 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 1009 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 1010 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1011 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 1012 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_4


PellucaCity_Gab_ChoiceItem::
# 1035 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1036 "data//maps/PellucaCity/scripts.pory"
	message PellucaCity_Gab_ChoiceItem_Text_0
# 1037 "data//maps/PellucaCity/scripts.pory"
	waitmessage
# 1038 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Gab_ChoiceItem_Text_1, PellucaCity_Gab_ChoiceItem_Text_2, PellucaCity_Gab_ChoiceItem_Text_3
# 1039 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Gab_ChoiceItem_2
PellucaCity_Gab_ChoiceItem_1:
# 1040 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Gab_ChoiceItem_5
PellucaCity_Gab_ChoiceItem_4:
# 1041 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_Gab_ChoiceItem_8
PellucaCity_Gab_ChoiceItem_7:
# 1042 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem_Give
	return

PellucaCity_Gab_ChoiceItem_2:
# 1039 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_0x8006, ITEM_CHOICE_SPECS
	goto PellucaCity_Gab_ChoiceItem_1

PellucaCity_Gab_ChoiceItem_5:
# 1040 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_0x8006, ITEM_CHOICE_BAND
	goto PellucaCity_Gab_ChoiceItem_4

PellucaCity_Gab_ChoiceItem_8:
# 1041 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_0x8006, ITEM_CHOICE_SCARF
	goto PellucaCity_Gab_ChoiceItem_7


PellucaCity_Gab_ChoiceItem_Give::
# 1046 "data//maps/PellucaCity/scripts.pory"
	showitemdescription
# 1047 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Gab_ChoiceItem_Give_Text_0, MSGBOX_YESNO
# 1048 "data//maps/PellucaCity/scripts.pory"
	hideitemdescription
# 1049 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Gab_ChoiceItem_Give_1
# 1050 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem
	return

PellucaCity_Gab_ChoiceItem_Give_1:
# 1049 "data//maps/PellucaCity/scripts.pory"
	giveitem VAR_0x8006
# 1049 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Gab_ChoiceItem_End
	return


PellucaCity_Gab_ChoiceItem_End::
# 1054 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1055 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Gab_ChoiceItem_End_Text_0
# 1056 "data//maps/PellucaCity/scripts.pory"
	release
# 1057 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 1058 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 1059 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1060 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Zorua::
# 1072 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1073 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1074 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZOROARK, CRY_MODE_NORMAL
# 1075 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 1076 "data//maps/PellucaCity/scripts.pory"
	release
# 1077 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCityFlooded_MainEvent_Cutscene_Movement_5
# 1078 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1079 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 1095 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 1096 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC1::
# 1109 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC2::
# 1114 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC3::
# 1119 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC4::
# 1124 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC5::
# 1129 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1130 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 1131 "data//maps/PellucaCity/scripts.pory"
	release
# 1132 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1133 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 1134 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1135 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1136 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_1
# 1137 "data//maps/PellucaCity/scripts.pory"
	release
# 1138 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1139 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 1140 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1141 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1142 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_2, MSGBOX_NPC
# 1143 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 1148 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC7::
# 1153 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC8::
# 1158 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_Sealeo::
# 1163 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1164 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1165 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 1166 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0, MSGBOX_NPC
# 1167 "data//maps/PellucaCity/scripts.pory"
	release
# 1168 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_MayorFight_Trigger_Movement_4
# 1169 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1170 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 1178 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullGirl::
# 1187 "data//maps/PellucaCity/scripts.pory"
	lock
# 1188 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1189 "data//maps/PellucaCity/scripts.pory"
	message PellucaCity_WingullGirl_Text_0
# 1190 "data//maps/PellucaCity/scripts.pory"
	waitmessage
# 1191 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 1193 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 1207 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5, MSGBOX_NPC
PellucaCity_WingullGirl_1:
# 1210 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 1195 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_MayorFight_Trigger_Movement_5
# 1196 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 1197 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 1198 "data//maps/PellucaCity/scripts.pory"
	release
# 1199 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_MayorFight_Trigger_Movement_7
# 1200 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_MayorFight_Trigger_Movement_7
# 1201 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1202 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1203 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 1204 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 1205 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 1215 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullCritique::
# 1220 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC10::
# 1233 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC10_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC11::
# 1239 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_CITY_TM_GIVER, PellucaCity_NPC11_2
# 1244 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_1, MSGBOX_NPC
# 1245 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_TM31
# 1246 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_CITY_TM_GIVER
# 1247 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_2, MSGBOX_NPC
	end

PellucaCity_NPC11_2:
# 1240 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC12::
# 1253 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC12_Text_0, MSGBOX_NPC
	end


PellucaCity_Stantler::
# 1258 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 1259 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Stantler_Text_0, MSGBOX_NPC
	end


PellucaCity_PostGymEvent_Trigger::
# 1286 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_POSTGYM, PellucaCity_PostGymEvent_Trigger_2
# 1288 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PellucaCity_PostGymEvent_Trigger_5
	end

PellucaCity_PostGymEvent_Trigger_2:
	end

PellucaCity_PostGymEvent_Trigger_5:
# 1289 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1292 "data//maps/PellucaCity/scripts.pory"
	opendoor 37, 8
# 1293 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 1296 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_FL_JANIA
# 1297 "data//maps/PellucaCity/scripts.pory"
	setobjectxy LOCALID_FL_JANIA, 37, 8
# 1299 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_10
# 1300 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1303 "data//maps/PellucaCity/scripts.pory"
	closedoor 37, 8
# 1305 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 1306 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1308 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 1309 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_0
# 1310 "data//maps/PellucaCity/scripts.pory"
	release
# 1311 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_PostGymEvent_Trigger_Movement_0
# 1312 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 1313 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1314 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1315 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_5
# 1316 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1317 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1318 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Cutscene_Text_17
# 1319 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_1
# 1320 "data//maps/PellucaCity/scripts.pory"
	release
# 1322 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1323 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_PostGymEvent_Trigger_Movement_1
# 1324 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_0
# 1325 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1327 "data//maps/PellucaCity/scripts.pory"
	opendoor 37, 8
# 1328 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 1331 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_GAB
# 1332 "data//maps/PellucaCity/scripts.pory"
	setobjectxy LOCALID_GAB, 37, 8
# 1333 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_2
# 1334 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1335 "data//maps/PellucaCity/scripts.pory"
	closedoor 37, 8
# 1336 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1337 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1338 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_2
# 1339 "data//maps/PellucaCity/scripts.pory"
	release
# 1341 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_PostGymEvent_Trigger_Movement_3
# 1342 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1343 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Cutscene_Movement_4
# 1344 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1345 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1347 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1348 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_3
# 1349 "data//maps/PellucaCity/scripts.pory"
	release
# 1350 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_MayorFight_Trigger_Movement_7
# 1351 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1352 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1353 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1354 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_4
# 1355 "data//maps/PellucaCity/scripts.pory"
	release
# 1356 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1357 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_4
# 1358 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_4
# 1359 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1360 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1361 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1362 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_5
# 1363 "data//maps/PellucaCity/scripts.pory"
	release
# 1364 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_5
# 1365 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1366 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1368 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1371 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_FL_JANIA
# 1372 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_GAB
# 1375 "data//maps/PellucaCity/scripts.pory"
	startquest QUEST_STOP_TEAM_SOMBER
# 1376 "data//maps/PellucaCity/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_STOP_TEAM_SOMBER, SUB_QUEST_1
# 1377 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_POSTGYM
	end


PellucaCity_Red_GymBlock::
# 1394 "data//maps/PellucaCity/scripts.pory"
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
# 120 "data//maps/PellucaCity/scripts.pory"
	lock_anim
# 121 "data//maps/PellucaCity/scripts.pory"
	lock_facing_direction
# 122 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 123 "data//maps/PellucaCity/scripts.pory"
	unlock_anim
# 124 "data//maps/PellucaCity/scripts.pory"
	unlock_facing_direction
	step_end

# 151 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_9:
# 151 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 154 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_10:
# 154 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 158 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_11:
# 158 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 160 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_12:
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 168 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_13:
# 168 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 168 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 176 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_14:
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 176 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 183 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_15:
# 183 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 183 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 183 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 183 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 183 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 183 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 190 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_16:
# 190 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 190 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 190 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 190 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 321 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Blocker_Trigger_Movement_0:
# 321 "data//maps/PellucaCity/scripts.pory"
	walk_right
	step_end

# 404 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_A_Movement_0:
# 404 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 404 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 404 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 404 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 404 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 404 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 404 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 404 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 404 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 404 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
	step_end

# 408 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_A_Movement_1:
# 408 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 408 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 408 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 408 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 408 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 408 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 408 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 408 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 408 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
	step_end

# 429 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_B_Movement_0:
# 429 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 429 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 429 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 429 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 429 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 429 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 429 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 429 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 433 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_B_Movement_1:
# 433 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 433 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 433 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 433 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 433 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 433 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 433 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 454 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_C_Movement_0:
# 454 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 454 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 454 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 454 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 454 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 454 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 454 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 454 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

# 458 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_C_Movement_1:
# 458 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 458 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

# 479 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_D_Movement_0:
# 479 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 479 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 479 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 479 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 479 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 479 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 479 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 479 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 479 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 479 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
	step_end

# 483 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_SaveCitizen_D_Movement_1:
# 483 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 483 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
	step_end

# 525 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_0:
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 525 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 552 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_1:
# 552 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 552 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_down
	step_end

# 594 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_2:
# 594 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 594 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 603 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_3:
# 603 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 603 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 603 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 603 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 603 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 603 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 603 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 603 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 603 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 603 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 611 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_4:
# 611 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 612 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_5:
# 612 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 634 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_6:
# 634 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 634 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_up
	step_end

# 660 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_7:
# 660 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 660 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 660 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 660 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 660 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 660 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 660 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 660 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 660 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 660 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 662 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Cutscene_Movement_8:
# 662 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 662 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 801 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_0:
# 801 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 801 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 801 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 818 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_1:
# 818 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 818 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 837 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_2:
# 837 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 837 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 915 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_0:
# 915 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 915 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 915 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 915 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 915 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 915 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 915 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 926 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_0:
# 926 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 926 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 926 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 926 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 926 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 926 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 926 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 926 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 937 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger2_Movement_0:
# 937 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 937 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 937 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 937 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 937 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 937 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 937 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 965 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
# 965 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 965 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 965 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 965 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 965 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 965 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 965 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 965 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 1133 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 1133 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 1139 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 1139 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1139 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1139 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1139 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1139 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1139 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1139 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1139 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1139 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1139 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 1139 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

# 1311 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_0:
# 1311 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 1311 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 1323 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_1:
# 1323 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1323 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1323 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 1323 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 1323 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 1333 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_2:
# 1333 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1333 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 1341 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_3:
# 1341 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1341 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1341 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1341 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 1358 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_4:
# 1358 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1358 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1358 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1358 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 1364 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_5:
# 1364 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1364 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1364 "data//maps/PellucaCity/scripts.pory"
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
	.string "You and your lot aren't allowed in\n"
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
# 130 "data//maps/PellucaCity/scripts.pory"
	.string "Nono - see, I'm not - look, I'm just\n"
	.string "asking for a little cooperation and -$"

PellucaCity_MayorFight_Trigger_Text_11:
# 138 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! Look at the wimp! Poor guy.$"

PellucaCity_MayorFight_Trigger_Text_12:
# 146 "data//maps/PellucaCity/scripts.pory"
	.string "Got it, mayor? You're not in charge here.\p"
	.string "I am!\p"
	.string "And from now on, this city belongs\n"
	.string "to us - the Qwilsquad!$"

PellucaCity_MayorFight_Trigger_Text_13:
# 172 "data//maps/PellucaCity/scripts.pory"
	.string "Oh - a tourist! Were you standing there\n"
	.string "the whole time?\p"
	.string "...\p"
	.string "I'm sorry you had to witness that.\p"
	.string "Y-you know, we have a wonderful\n"
	.string "Game Corner! And the Apple Pie at the\l"
	.string "Pelluca Restaurant is to die for.$"

PellucaCity_MayorFight_Trigger_Text_14:
# 180 "data//maps/PellucaCity/scripts.pory"
	.string "Sigh...what will I do?$"

PellucaCity_Sailor_Entrance_Text_0:
# 221 "data//maps/PellucaCity/scripts.pory"
	.string "Beat it, kid! This is private property\n"
	.string "belonging to the Qwilsquad.$"

PellucaCity_Sailor_Multichoice_Text_0:
# 231 "data//maps/PellucaCity/scripts.pory"
	.string "Only Qwilsquad members can enter!$"

PellucaCity_Sailor_Multichoice_Text_1:
# 233 "data//maps/PellucaCity/scripts.pory"
	.string "What's a Qwilsquad?$"

PellucaCity_Sailor_Multichoice_Text_2:
# 233 "data//maps/PellucaCity/scripts.pory"
	.string "I'm a member!$"

PellucaCity_Sailor_Multichoice_Text_3:
# 233 "data//maps/PellucaCity/scripts.pory"
	.string "Okay...$"

PellucaCity_Sailor_QwilsquadExplanation_Text_0:
# 243 "data//maps/PellucaCity/scripts.pory"
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
# 248 "data//maps/PellucaCity/scripts.pory"
	.string "Heh? A pipsqueak like you is in the\n"
	.string "squad? You a new member or something?\l"
	.string "You got any proof?$"

PellucaCity_Sailor_MemberCheck_Text_1:
# 252 "data//maps/PellucaCity/scripts.pory"
	.string "Then beat it, kid!$"

PellucaCity_Sailor_MemberCheck_Text_2:
# 256 "data//maps/PellucaCity/scripts.pory"
	.string "Show me!$"

PellucaCity_Sailor_MemberCheck_Text_3:
# 272 "data//maps/PellucaCity/scripts.pory"
	.string "That don't look like no Qwilfish to me!\p"
	.string "Beat it, kid!$"

PellucaCity_Sailor_MemberAccepted_Text_0:
# 283 "data//maps/PellucaCity/scripts.pory"
	.string "Now that's what I'm talking about!\n"
	.string "You're one of us, kid. Go on, get inside!$"

PellucaCity_Blocker_Text_0:
# 311 "data//maps/PellucaCity/scripts.pory"
	.string "This is our city! Got any problems?$"

PellucaCity_Blocker_Trigger_Text_0:
# 319 "data//maps/PellucaCity/scripts.pory"
	.string "Hey kid, where d'you think yer goin?\n"
	.string "There's a toll if you wanna get out.\p"
	.string "That's right! You gotta pay ¥999999.\p"
	.string "Ain't got the money?\p"
	.string "Then get packing!$"

PellucaCityFlooded_SaveCitizen_A_Text_0:
# 397 "data//maps/PellucaCity/scripts.pory"
	.string "Help! Help! Over here!\p"
	.string "...\p"
	.string "Thank you so much - I'm saved!$"

PellucaCityFlooded_SaveCitizen_B_Text_0:
# 423 "data//maps/PellucaCity/scripts.pory"
	.string "I can't stay afloat any more!\p"
	.string "...\p"
	.string "Just in time!$"

PellucaCityFlooded_SaveCitizen_C_Text_0:
# 447 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh! It's too cold!\p"
	.string "...\p"
	.string "Waah! Wahh! It was so scary!$"

PellucaCityFlooded_SaveCitizen_D_Text_0:
# 472 "data//maps/PellucaCity/scripts.pory"
	.string "Help! Someone save me!\p"
	.string "...\p"
	.string "Yaay! You came!$"

PellucaCityFlooded_MainEvent_Text_0:
# 501 "data//maps/PellucaCity/scripts.pory"
	.string "Skip cutscene?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_0:
# 519 "data//maps/PellucaCity/scripts.pory"
	.string "What on earth is this?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_1:
# 530 "data//maps/PellucaCity/scripts.pory"
	.string "Citizen$"

PellucaCityFlooded_MainEvent_Cutscene_Text_2:
# 531 "data//maps/PellucaCity/scripts.pory"
	.string "What a disaster!\p"
	.string "How could we be so unlucky!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_3:
# 533 "data//maps/PellucaCity/scripts.pory"
	.string "What happened?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_4:
# 535 "data//maps/PellucaCity/scripts.pory"
	.string "A Mega Sharpedo came rampaging down\n"
	.string "from the Ivy River and kicked up a\l"
	.string "storm! The riverbanks have flooded.\p"
	.string "The city's underwater!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_5:
# 537 "data//maps/PellucaCity/scripts.pory"
	.string "Is everyone safe?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_6:
# 539 "data//maps/PellucaCity/scripts.pory"
	.string "No - there are still four people in the\n"
	.string "water! We have to save them fast!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_7:
# 545 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, go on Mayor. Go save them!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_8:
# 549 "data//maps/PellucaCity/scripts.pory"
	.string "W-what do you mean? Weren't you the\n"
	.string "one in control of this city?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_9:
# 554 "data//maps/PellucaCity/scripts.pory"
	.string "ENOUGH!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_10:
# 566 "data//maps/PellucaCity/scripts.pory"
	.string "While you two bicker, it's us that pays\n"
	.string "the price every time! Both of you are\l"
	.string "strong - a tough trainer and a smart\l"
	.string "politician - and yet, neither of you\l"
	.string "bother to actually do anything for us\l"
	.string "citizens! And now people are in danger\l"
	.string "and you're still fighting! We've all had\l"
	.string "it up to here with you two!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_11:
# 579 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah!\p"
	.string "Hear hear!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_12:
# 585 "data//maps/PellucaCity/scripts.pory"
	.string "???$"

PellucaCityFlooded_MainEvent_Cutscene_Text_13:
# 586 "data//maps/PellucaCity/scripts.pory"
	.string "I agree too.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_14:
# 599 "data//maps/PellucaCity/scripts.pory"
	.string "Is that Jania?\p"
	.string "Yeah! It's the Gym Leader! In the flesh!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_15:
# 618 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, Jania! It's you! Finally. Please - you\n"
	.string "have to save those still drowning!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_16:
# 625 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, Jania! You're an even stronger\n"
	.string "trainer than I am. You can do it!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_17:
# 629 "data//maps/PellucaCity/scripts.pory"
	.string "Jania$"

PellucaCityFlooded_MainEvent_Cutscene_Text_18:
# 630 "data//maps/PellucaCity/scripts.pory"
	.string "No, I won't.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_19:
# 640 "data//maps/PellucaCity/scripts.pory"
	.string "Don't look at me like that!\p"
	.string "You two want to be responsible for this\n"
	.string "city? Start right here, right now.\p"
	.string "Your citizens are miserably tired of\n"
	.string "both of you - when will you two change?$"

PellucaCityFlooded_MainEvent_Cutscene_Text_20:
# 647 "data//maps/PellucaCity/scripts.pory"
	.string "And who might you be?\p"
	.string "...\p"
	.string "{PLAYER}?\p"
	.string "...\p"
	.string "I see. So that's how you got involved\n"
	.string "with these two.\p"
	.string "Here, take this.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_21:
# 655 "data//maps/PellucaCity/scripts.pory"
	.string "Consider this my help.\p"
	.string "Now I'm going to track the Mega\n"
	.string "Sharpedo down and make sure it doesn't\l"
	.string "harm anyone else.\p"
	.string "And the two of you - and {PLAYER} -\n"
	.string "take this chance to do the right thing!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_22:
# 670 "data//maps/PellucaCity/scripts.pory"
	.string "Hmpf.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_23:
# 674 "data//maps/PellucaCity/scripts.pory"
	.string "Tchah!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_24:
# 678 "data//maps/PellucaCity/scripts.pory"
	.string "...$"

PellucaCityFlooded_MainEvent_Cutscene_Text_25:
# 689 "data//maps/PellucaCity/scripts.pory"
	.string "All of you! We've been letting you down.\n"
	.string "But now we're gonna prove that we care\l"
	.string "about this city with our actions!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_26:
# 691 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} - the two of us will handle\n"
	.string "the citizens on the bridge and on land.\l"
	.string "Can you surf and rescue the four\l"
	.string "remaining citizens?\p"
	.string "Once you've picked all four of them up,\n"
	.string "come back here.$"

PellucaCityFlooded_MainEvent_Cutscene_Text_27:
# 693 "data//maps/PellucaCity/scripts.pory"
	.string "Good luck, {PLAYER}! We're on top of\n"
	.string "things here, so you go on into the river.\l"
	.string "You don't need to teach any Pokémon\l"
	.string "how to surf - just hop on the water!$"

PellucaCityFlooded_MainEvent_Cutscene_Text_28:
# 696 "data//maps/PellucaCity/scripts.pory"
	.string "But hurry! There's not much time.$"

PellucaCityFlooded_Mayor_Text_0:
# 710 "data//maps/PellucaCity/scripts.pory"
	.string "Have you saved everyone yet?\n"
	.string "Please hurry!$"

PellucaCityFlooded_QwilBoss_Text_0:
# 715 "data//maps/PellucaCity/scripts.pory"
	.string "We're keeping the citizens safe, so you\n"
	.string "go get the rest!$"

PellucaCityFlooded_NPC1_Text_0:
# 719 "data//maps/PellucaCity/scripts.pory"
	.string "The Mayor and the Qwilsquad boss\n"
	.string "working together? Hah! I'll believe it\l"
	.string "when I see it.$"

PellucaCityFlooded_NPC2_Text_0:
# 723 "data//maps/PellucaCity/scripts.pory"
	.string "If the two of them collaborate, maybe\n"
	.string "things will finally improve...$"

PellucaCityFlooded_NPC3_Text_0:
# 727 "data//maps/PellucaCity/scripts.pory"
	.string "I'm so scared - I hope you can save the\n"
	.string "others!$"

PellucaCityFlooded_NPC4_Text_0:
# 731 "data//maps/PellucaCity/scripts.pory"
	.string "I hate that Mega Sharpedo for doing\n"
	.string "this to my home!$"

PellucaCityFlooded_NPCSailor_Text_0:
# 735 "data//maps/PellucaCity/scripts.pory"
	.string "Go on, {PLAYER}! Hurry up and do what\n"
	.string "the boss says.$"

PellucaCityFlooded_NPCSaved_A_Text_0:
# 740 "data//maps/PellucaCity/scripts.pory"
	.string "You saved me! I can't thank you enough,\n"
	.string "trainer.$"

PellucaCityFlooded_NPCSaved_B_Text_0:
# 744 "data//maps/PellucaCity/scripts.pory"
	.string "I owe you, trainer. I'll never forget\n"
	.string "this!$"

PellucaCityFlooded_NPCSaved_C_Text_0:
# 748 "data//maps/PellucaCity/scripts.pory"
	.string "Brr - the water was so cold! How do\n"
	.string "Pokémon swim in it?$"

PellucaCityFlooded_NPCSaved_D_Text_0:
# 752 "data//maps/PellucaCity/scripts.pory"
	.string "When I grow up, I wanna be just like you!$"

PellucaCityFlooded_EventScript_TimesUp_Text_0:
# 757 "data//maps/PellucaCity/scripts.pory"
	.string "The tides rise higher and higher...\n"
	.string "it's too late!$"

PellucaCityFlooded_EventScript_TimesRunningOut_Text_0:
# 787 "data//maps/PellucaCity/scripts.pory"
	.string "The water level is rising...\n"
	.string "There's not much time left!$"

PellucaCityFlooded_Complete_Trigger_Text_0:
# 807 "data//maps/PellucaCity/scripts.pory"
	.string "That's one, two, three...and four!\p"
	.string "Yup, we're all accounted for.$"

PellucaCityFlooded_Complete_Trigger_Text_1:
# 813 "data//maps/PellucaCity/scripts.pory"
	.string "Finally! Thank you {PLAYER}. You did\n"
	.string "us - the city of Pelluca - a great\l"
	.string "service. You're a hero!$"

PellucaCityFlooded_Complete_Trigger_Text_2:
# 833 "data//maps/PellucaCity/scripts.pory"
	.string "Thank you {PLAYER}!\p"
	.string "You're the best!$"

PellucaCityFlooded_Complete_Trigger_Text_3:
# 846 "data//maps/PellucaCity/scripts.pory"
	.string "It looks like we're all safe for now.$"

PellucaCityFlooded_Complete_Trigger_Text_4:
# 855 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah. All that remains is to wait until\n"
	.string "the water recedes, and then we can go\l"
	.string "back to normal.\p"
	.string "Come, shall we wait in the Pokémon\n"
	.string "Center until then?$"

PellucaCityFlooded_Complete_Trigger_Text_5:
# 860 "data//maps/PellucaCity/scripts.pory"
	.string "Sounds like a good idea. {PLAYER} here\n"
	.string "needs some rest after everything\l"
	.string "that's just happened!$"

PellucaCity_Greta_Main_Text_0:
# 946 "data//maps/PellucaCity/scripts.pory"
	.string "Greta$"

PellucaCity_Greta_Main_Text_1:
# 947 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, it's you again, {PLAYER}!\n"
	.string "Fancy seeing you in these parts.\l"
	.string "Route 6 was a tough trek, wasn't it?$"

PellucaCity_Greta_GottaGo_Text_0:
# 963 "data//maps/PellucaCity/scripts.pory"
	.string "Would you look at the time!\n"
	.string "I've gotta run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 993 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 994 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh, I love the smell of the river!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 999 "data//maps/PellucaCity/scripts.pory"
	.string "I grew up here on this cliff without my\n"
	.string "parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "Those grunts were really vicious to me.\n"
	.string "I was so scared I would lose Zoroark!$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 1005 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the Clefairy?$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 1011 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah...I doubt he'd ever forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 1017 "data//maps/PellucaCity/scripts.pory"
	.string "You're just trying to make me feel\n"
	.string "better, aren't you? I don't need your\l"
	.string "pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 1022 "data//maps/PellucaCity/scripts.pory"
	.string "After getting kicked out of Team\n"
	.string "Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\p"
	.string "Be responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 1028 "data//maps/PellucaCity/scripts.pory"
	.string "I want you to have this. As a thank you.\n"
	.string "For saving me - not just once, but so\l"
	.string "many times. You're a strong trainer, but\l"
	.string "more importantly - you're a good person.\l"
	.string "I hope to be like you.$"

PellucaCity_Gab_ChoiceItem_Text_0:
# 1036 "data//maps/PellucaCity/scripts.pory"
	.string "Choose any one you like.$"

PellucaCity_Gab_ChoiceItem_Text_1:
# 1038 "data//maps/PellucaCity/scripts.pory"
	.string "Choice Specs$"

PellucaCity_Gab_ChoiceItem_Text_2:
# 1038 "data//maps/PellucaCity/scripts.pory"
	.string "Choice Band$"

PellucaCity_Gab_ChoiceItem_Text_3:
# 1038 "data//maps/PellucaCity/scripts.pory"
	.string "Choice Scarf$"

PellucaCity_Gab_ChoiceItem_Give_Text_0:
# 1047 "data//maps/PellucaCity/scripts.pory"
	.string "Are you sure?$"

PellucaCity_Gab_ChoiceItem_End_Text_0:
# 1055 "data//maps/PellucaCity/scripts.pory"
	.string "The choices we make define who we are.\n"
	.string "Once we lock in, we can't change.\p"
	.string "I can't erase what I've done, but I'm\n"
	.string "going to make a better choice this time.\p"
	.string "I suppose you're going to head to the\n"
	.string "Mirroh Base Camp from here? Team\l"
	.string "Somber must've reached there already.\p"
	.string "Best of luck, {PLAYER}.$"

PellucaCity_Zorua_Text_0:
# 1075 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle's Zoroark looks content.\n"
	.string "Life is more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 1096 "data//maps/PellucaCity/scripts.pory"
	.string "Lycanroc is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 1109 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 1114 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "Pelluca Restaurant?\p"
	.string "...that's the only thing our mayor cares\n"
	.string "about promoting.$"

PellucaCity_NPC3_Text_0:
# 1119 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in Mt. Mirroh but\n"
	.string "that Qwilsquad grunt is blocking me!\l"
	.string "So I'm training here instead.$"

PellucaCity_NPC4_Text_0:
# 1124 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge was built by Rivetshore\n"
	.string "Construction. It's nothing like the\l"
	.string "cycling roads in other regions though!$"

PellucaCity_NPC5_Text_0:
# 1130 "data//maps/PellucaCity/scripts.pory"
	.string "Look over there...$"

PellucaCity_NPC5_Text_1:
# 1136 "data//maps/PellucaCity/scripts.pory"
	.string "Jania, the Gym Leader, had her gym\n"
	.string "constructed on a separate island.$"

PellucaCity_NPC5_Text_2:
# 1142 "data//maps/PellucaCity/scripts.pory"
	.string "She stays on that island and trains.\n"
	.string "She never gets involved in city affairs!$"

PellucaCity_NPC6_Text_0:
# 1148 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the Mirroh Base Camp?\n"
	.string "You'll have to cross Route 7 and take\l"
	.string "the cable car up. I heard they're\l"
	.string "closing the gym there though.$"

PellucaCity_NPC7_Text_0:
# 1153 "data//maps/PellucaCity/scripts.pory"
	.string "With the way things are, I'm half in\n"
	.string "support of the Qwilsquad. I know\l"
	.string "they're bullies, but maybe they'll do\l"
	.string "something good for the city.$"

PellucaCity_NPC8_Text_0:
# 1158 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "Mega Sharpedo's going to scare all the\l"
	.string "fish away? I wish our mayor would do\l"
	.string "something about it.$"

PellucaCity_Sealeo_Text_0:
# 1166 "data//maps/PellucaCity/scripts.pory"
	.string "Sealeo wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 1178 "data//maps/PellucaCity/scripts.pory"
	.string "This is the Pelluca Fishery! But it's\n"
	.string "closed due to the Mega Sharpedo\l"
	.string "attacks.$"

PellucaCity_WingullGirl_Text_0:
# 1189 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "Wingulls over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 1191 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 1191 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 1197 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a Wingull!$"

PellucaCity_WingullGirl_Text_4:
# 1203 "data//maps/PellucaCity/scripts.pory"
	.string "The Wingull gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 1207 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 1215 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "Wingulls. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 1220 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at Pokémon...that's poor\l"
	.string "parenting.$"

PellucaCity_NPC10_Text_0:
# 1233 "data//maps/PellucaCity/scripts.pory"
	.string "I ate too many apple tarts! I'm too full.\n"
	.string "Whoever said people have a second\l"
	.string "stomach for dessert was lying!$"

PellucaCity_NPC11_Text_0:
# 1240 "data//maps/PellucaCity/scripts.pory"
	.string "Life is too short to worry!$"

PellucaCity_NPC11_Text_1:
# 1244 "data//maps/PellucaCity/scripts.pory"
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
# 1247 "data//maps/PellucaCity/scripts.pory"
	.string "It's time for me to let go.$"

PellucaCity_NPC12_Text_0:
# 1253 "data//maps/PellucaCity/scripts.pory"
	.string "The mayor isn't maintaining the city one\n"
	.string "bit! My Stantler eating the overgrown\l"
	.string "flowers is actually contributing to\l"
	.string "city maintenance.$"

PellucaCity_Stantler_Text_0:
# 1259 "data//maps/PellucaCity/scripts.pory"
	.string "Stantler is nonchalantly chomping on\n"
	.string "the flowers.$"

PellucaCity_PostGymEvent_Trigger_Text_0:
# 1309 "data//maps/PellucaCity/scripts.pory"
	.string "Excuse me.$"

PellucaCity_PostGymEvent_Trigger_Text_1:
# 1319 "data//maps/PellucaCity/scripts.pory"
	.string "Where am I going?\p"
	.string "I'm going to Rivetshore City.\n"
	.string "All the Gym Leaders have been called\l"
	.string "there.$"

PellucaCity_PostGymEvent_Trigger_Text_2:
# 1338 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER}! Over here!$"

PellucaCity_PostGymEvent_Trigger_Text_3:
# 1348 "data//maps/PellucaCity/scripts.pory"
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
# 1354 "data//maps/PellucaCity/scripts.pory"
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
# 1362 "data//maps/PellucaCity/scripts.pory"
	.string "You'd better be there, {PLAYER}!$"

PellucaCity_Red_GymBlock_Text_0:
# 1394 "data//maps/PellucaCity/scripts.pory"
	.string "Jania's gone to deal with the Mega\n"
	.string "Sharpedo. You'll find her up in Ivy River\l"
	.string "somewhere.$"

PellucaCityFlooded_TriggerText::
# 339 "data//maps/PellucaCity/scripts.pory"
	.string "I need to save the drowning citizens!$"
