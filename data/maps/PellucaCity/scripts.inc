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
# 275 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_11
# 276 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 277 "data//maps/PellucaCity/scripts.pory"
	playse SE_EXIT
# 278 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S_ENTRANCE
# 280 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_QWILSQUAD_ENTRANCE
# 281 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Blocker::
# 296 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Text_0
	end


PellucaCity_Blocker_Trigger::
# 300 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_BLOCKER, PellucaCity_MayorFight_Trigger_Movement_7
# 301 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 302 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Trigger_Text_0
# 303 "data//maps/PellucaCity/scripts.pory"
	release
# 304 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 305 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 306 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerDown::
# 326 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerDown_1
	end

PellucaCityFlooded_TriggerDown_1:
# 327 "data//maps/PellucaCity/scripts.pory"
	lockall
# 328 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 329 "data//maps/PellucaCity/scripts.pory"
	release
# 330 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_10
# 331 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 332 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerUp::
# 339 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerUp_1
	end

PellucaCityFlooded_TriggerUp_1:
# 340 "data//maps/PellucaCity/scripts.pory"
	lockall
# 341 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 342 "data//maps/PellucaCity/scripts.pory"
	release
# 343 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_11
# 344 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 345 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerLeft::
# 352 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerLeft_1
	end

PellucaCityFlooded_TriggerLeft_1:
# 353 "data//maps/PellucaCity/scripts.pory"
	lockall
# 354 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 355 "data//maps/PellucaCity/scripts.pory"
	release
# 356 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_9
# 357 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 358 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerRight::
# 365 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAP_STATE, 1
	goto_if_eq PellucaCityFlooded_TriggerRight_1
	end

PellucaCityFlooded_TriggerRight_1:
# 366 "data//maps/PellucaCity/scripts.pory"
	lockall
# 367 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 368 "data//maps/PellucaCity/scripts.pory"
	release
# 369 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 370 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 371 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_A::
# 378 "data//maps/PellucaCity/scripts.pory"
	lockall
# 379 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 380 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_A_Text_0
# 381 "data//maps/PellucaCity/scripts.pory"
	release
# 383 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 384 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 385 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 387 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 388 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 390 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_B::
# 394 "data//maps/PellucaCity/scripts.pory"
	lockall
# 395 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 396 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_B_Text_0
# 397 "data//maps/PellucaCity/scripts.pory"
	release
# 399 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 400 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 401 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 403 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 404 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 406 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_C::
# 410 "data//maps/PellucaCity/scripts.pory"
	lockall
# 411 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 412 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_C_Text_0
# 413 "data//maps/PellucaCity/scripts.pory"
	release
# 415 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 416 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 417 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 419 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 420 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 422 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen_D::
# 426 "data//maps/PellucaCity/scripts.pory"
	lockall
# 427 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 428 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_D_Text_0
# 429 "data//maps/PellucaCity/scripts.pory"
	release
# 431 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 432 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 433 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 435 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 436 "data//maps/PellucaCity/scripts.pory"
	addvar VAR_PELLUCA_MAYOR_QUEST, 1
# 438 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_MainEvent::
# 443 "data//maps/PellucaCity/scripts.pory"
	lockall
# 444 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 4
# 446 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 447 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_0
# 448 "data//maps/PellucaCity/scripts.pory"
	release
# 449 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 452 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 453 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_MainEvent_Movement_0
# 455 "data//maps/PellucaCity/scripts.pory"
	delay 60
# 458 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 459 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_2
# 460 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 461 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_3
# 462 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 463 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_4
# 464 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 465 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_5
# 466 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 467 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_6
# 470 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_6
# 471 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 472 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 473 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_7
# 474 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 475 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 476 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 477 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_8
# 480 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_CITIZEN, PellucaCityFlooded_MainEvent_Movement_1
# 481 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 482 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_9
# 483 "data//maps/PellucaCity/scripts.pory"
	release
# 484 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 486 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_5
# 487 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_5
# 488 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 489 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 490 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 491 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 493 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 494 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_10
# 495 "data//maps/PellucaCity/scripts.pory"
	release
# 497 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_7
# 498 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_7
# 499 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_7
# 500 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_7
# 501 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_7
# 502 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_7
# 503 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 504 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 506 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 507 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_11
# 508 "data//maps/PellucaCity/scripts.pory"
	release
# 510 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 513 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_12
# 514 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_13
# 515 "data//maps/PellucaCity/scripts.pory"
	release
# 516 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 518 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_5
# 519 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_5
# 520 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_5
# 521 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_5
# 522 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCityFlooded_MainEvent_Movement_2
# 523 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 524 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_5
# 526 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 527 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_14
# 528 "data//maps/PellucaCity/scripts.pory"
	release
# 530 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_FL_JANIA
# 531 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Movement_3
# 532 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 534 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_4
# 535 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_4
# 536 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_4
# 537 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_4
# 538 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_4
# 539 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCityFlooded_MainEvent_Movement_4
# 540 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_5
# 541 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_4
# 543 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_7
# 544 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 545 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 546 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_15
# 547 "data//maps/PellucaCity/scripts.pory"
	release
# 548 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 550 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_7
# 551 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 552 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 553 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_16
# 554 "data//maps/PellucaCity/scripts.pory"
	release
# 555 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 557 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 558 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_18
# 559 "data//maps/PellucaCity/scripts.pory"
	release
# 560 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 562 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Movement_6
# 563 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCityFlooded_MainEvent_Movement_6
# 564 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 565 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 567 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 568 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_19
# 569 "data//maps/PellucaCity/scripts.pory"
	release
# 570 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 571 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Movement_4
# 572 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 573 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 574 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 575 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_20
# 576 "data//maps/PellucaCity/scripts.pory"
	release
# 577 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_SYS_SURF_ENABLED
# 578 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_HM03
# 579 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 580 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_4
# 581 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 582 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 583 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_21
# 584 "data//maps/PellucaCity/scripts.pory"
	release
# 585 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 588 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Movement_7
# 589 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 590 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCityFlooded_MainEvent_Movement_8
# 591 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 594 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Movement_5
# 595 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCityFlooded_MainEvent_Movement_4
# 596 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 597 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 598 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_22
# 599 "data//maps/PellucaCity/scripts.pory"
	release
# 600 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 601 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 602 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_23
# 603 "data//maps/PellucaCity/scripts.pory"
	release
# 604 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 605 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 606 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_24
# 607 "data//maps/PellucaCity/scripts.pory"
	release
# 608 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 609 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 610 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_24
# 611 "data//maps/PellucaCity/scripts.pory"
	release
# 612 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 614 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_5
# 615 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_5
# 616 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 617 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_25
# 618 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 619 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_26
# 620 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 621 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_27
# 622 "data//maps/PellucaCity/scripts.pory"
	release
# 625 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 626 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_Mayor::
# 632 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 633 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Mayor_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_QwilBoss::
# 637 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 638 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_QwilBoss_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC1::
# 642 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC2::
# 646 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC3::
# 650 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPC4::
# 654 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSailor::
# 658 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSailor_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_A::
# 663 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_A_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_B::
# 667 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_B_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_C::
# 671 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_C_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_NPCSaved_D::
# 675 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_NPCSaved_D_Text_0, MSGBOX_NPC
	end


PellucaCityFlooded_Complete_Trigger::
# 682 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 8
	goto_if_eq PellucaCityFlooded_Complete_Trigger_2
	end

PellucaCityFlooded_Complete_Trigger_2:
# 684 "data//maps/PellucaCity/scripts.pory"
	lockall
# 685 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCityFlooded_MainEvent_Movement_8
# 686 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_Complete_Trigger_Movement_0
# 687 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 688 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 691 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 692 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_0
# 693 "data//maps/PellucaCity/scripts.pory"
	release
# 694 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 697 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 698 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_1
# 699 "data//maps/PellucaCity/scripts.pory"
	release
# 700 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 702 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 703 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_1
# 704 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 708 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_7
# 709 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_7
# 710 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_7
# 711 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_7
# 712 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_7
# 713 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_7
# 714 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 715 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 717 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 718 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_2
# 719 "data//maps/PellucaCity/scripts.pory"
	release
# 720 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 722 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 723 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 724 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 725 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 727 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_6
# 728 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 729 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 730 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 731 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_3
# 732 "data//maps/PellucaCity/scripts.pory"
	release
# 733 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 736 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 737 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 738 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 739 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 740 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_4
# 741 "data//maps/PellucaCity/scripts.pory"
	release
# 742 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 744 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 745 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_Complete_Trigger_Text_5
# 746 "data//maps/PellucaCity/scripts.pory"
	release
# 747 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 751 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 9
# 752 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAP_STATE, 0
# 754 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_REGULAR_CITIZENS
# 755 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZENS
# 757 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_A_SAVED
# 758 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_B_SAVED
# 759 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_C_SAVED
# 760 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_FLOODED_CITIZEN_DROWNING_D_SAVED
# 762 "data//maps/PellucaCity/scripts.pory"
	clearflag FLAG_PELLUCA_PC_CHARS
# 765 "data//maps/PellucaCity/scripts.pory"
	warp MAP_PELLUCA_CITY_POKEMON_CENTER, 7, 6
# 767 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Greta_Trigger0::
# 797 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger0_2
# 799 "data//maps/PellucaCity/scripts.pory"
	lockall
# 800 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger0_Movement_0
# 801 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 802 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_4
# 803 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 804 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger0_2:
	end


PellucaCity_Greta_Trigger1::
# 808 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger1_2
# 810 "data//maps/PellucaCity/scripts.pory"
	lockall
# 811 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger1_Movement_0
# 812 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 813 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_5
# 814 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 815 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger1_2:
	end


PellucaCity_Greta_Trigger2::
# 819 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger2_2
# 821 "data//maps/PellucaCity/scripts.pory"
	lockall
# 822 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger2_Movement_0
# 823 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 824 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_5
# 825 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 826 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger2_2:
	end


PellucaCity_Greta_Main::
# 831 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 832 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_Main_Text_1
# 833 "data//maps/PellucaCity/scripts.pory"
	release
# 834 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 835 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 836 "data//maps/PellucaCity/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 837 "data//maps/PellucaCity/scripts.pory"
	release
# 838 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 840 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 844 "data//maps/PellucaCity/scripts.pory"
	release
# 845 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_MayorFight_Trigger_Movement_7
# 846 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 847 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 848 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 849 "data//maps/PellucaCity/scripts.pory"
	release
# 850 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 851 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 852 "data//maps/PellucaCity/scripts.pory"
	removeobject 27
# 853 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 854 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 856 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 876 "data//maps/PellucaCity/scripts.pory"
	lockall
# 877 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_2
# 883 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 884 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2
# 885 "data//maps/PellucaCity/scripts.pory"
	release
# 886 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 887 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 888 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 889 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 890 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3, MSGBOX_YESNO
# 891 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_6
# 900 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Movement_5
# 901 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 902 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 903 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_5:
# 905 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 906 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 907 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 908 "data//maps/PellucaCity/scripts.pory"
	release
# 909 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 910 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 911 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 912 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 913 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 914 "data//maps/PellucaCity/scripts.pory"
	release
# 915 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 916 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 917 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_8
# 918 "data//maps/PellucaCity/scripts.pory"
	release
# 919 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 920 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Movement_5
# 921 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
PellucaCity_EventScripts_Gabrielle_1:
# 923 "data//maps/PellucaCity/scripts.pory"
	releaseall
	return

PellucaCity_EventScripts_Gabrielle_2:
# 878 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 879 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 880 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_1

PellucaCity_EventScripts_Gabrielle_6:
# 893 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Movement_5
# 894 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 895 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 896 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 897 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_5


PellucaCity_Zorua::
# 928 "data//maps/PellucaCity/scripts.pory"
	lockall
# 929 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 930 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_NORMAL
# 931 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 932 "data//maps/PellucaCity/scripts.pory"
	release
# 933 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCityFlooded_MainEvent_Movement_5
# 934 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 935 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 951 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 952 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC1::
# 965 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC2::
# 970 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC3::
# 975 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC4::
# 980 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC5::
# 985 "data//maps/PellucaCity/scripts.pory"
	lockall
# 986 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 987 "data//maps/PellucaCity/scripts.pory"
	release
# 988 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 989 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 990 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 991 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 992 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_1
# 993 "data//maps/PellucaCity/scripts.pory"
	release
# 994 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 995 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 996 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 997 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 998 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_2, MSGBOX_NPC
# 999 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 1004 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC7::
# 1009 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC8::
# 1014 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_Sealeo::
# 1019 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1020 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1021 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 1022 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0, MSGBOX_NPC
# 1023 "data//maps/PellucaCity/scripts.pory"
	release
# 1024 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_MayorFight_Trigger_Movement_4
# 1025 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1026 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 1034 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullGirl::
# 1043 "data//maps/PellucaCity/scripts.pory"
	lock
# 1044 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 1045 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 1046 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 1048 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 1062 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5, MSGBOX_NPC
PellucaCity_WingullGirl_1:
# 1065 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 1050 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_MayorFight_Trigger_Movement_5
# 1051 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 1052 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 1053 "data//maps/PellucaCity/scripts.pory"
	release
# 1054 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_MayorFight_Trigger_Movement_7
# 1055 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_MayorFight_Trigger_Movement_7
# 1056 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1057 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1058 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 1059 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 1060 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 1070 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullCritique::
# 1075 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC10::
# 1088 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC10_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC11::
# 1094 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_CITY_TM_GIVER, PellucaCity_NPC11_2
# 1099 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_1, MSGBOX_NPC
# 1100 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_TM01
# 1101 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_CITY_TM_GIVER
# 1102 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_2, MSGBOX_NPC
	end

PellucaCity_NPC11_2:
# 1095 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC12::
# 1108 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC12_Text_0, MSGBOX_NPC
	end


PellucaCity_Stantler::
# 1113 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 1114 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Stantler_Text_0, MSGBOX_NPC
	end


PellucaCity_PostGymEvent_Trigger::
# 1141 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_POSTGYM, PellucaCity_PostGymEvent_Trigger_2
# 1143 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PellucaCity_PostGymEvent_Trigger_5
	end

PellucaCity_PostGymEvent_Trigger_2:
	end

PellucaCity_PostGymEvent_Trigger_5:
# 1144 "data//maps/PellucaCity/scripts.pory"
	lockall
# 1147 "data//maps/PellucaCity/scripts.pory"
	opendoor 37, 8
# 1148 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 1151 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_FL_JANIA
# 1152 "data//maps/PellucaCity/scripts.pory"
	setobjectxy LOCALID_FL_JANIA, 37, 8
# 1154 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_10
# 1155 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1158 "data//maps/PellucaCity/scripts.pory"
	closedoor 37, 8
# 1160 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 1161 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1163 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 1164 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_0
# 1165 "data//maps/PellucaCity/scripts.pory"
	release
# 1166 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_PostGymEvent_Trigger_Movement_0
# 1167 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_Complete_Trigger_Movement_2
# 1168 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1169 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1170 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_MayorFight_Trigger_Movement_5
# 1171 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1172 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1173 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 1174 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_1
# 1175 "data//maps/PellucaCity/scripts.pory"
	release
# 1177 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 1178 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCity_PostGymEvent_Trigger_Movement_1
# 1179 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_Complete_Trigger_Movement_0
# 1180 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1182 "data//maps/PellucaCity/scripts.pory"
	opendoor 37, 8
# 1183 "data//maps/PellucaCity/scripts.pory"
	waitdooranim
# 1186 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_GAB
# 1187 "data//maps/PellucaCity/scripts.pory"
	setobjectxy LOCALID_GAB, 37, 8
# 1188 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_2
# 1189 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1190 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1191 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1192 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_2
# 1193 "data//maps/PellucaCity/scripts.pory"
	release
# 1195 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_PostGymEvent_Trigger_Movement_3
# 1196 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1197 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Movement_4
# 1198 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1199 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1201 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1202 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_3
# 1203 "data//maps/PellucaCity/scripts.pory"
	release
# 1204 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_MayorFight_Trigger_Movement_7
# 1205 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1206 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1207 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1208 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_4
# 1209 "data//maps/PellucaCity/scripts.pory"
	release
# 1210 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1211 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_4
# 1212 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_4
# 1213 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1214 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1215 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 1216 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_PostGymEvent_Trigger_Text_5
# 1217 "data//maps/PellucaCity/scripts.pory"
	release
# 1218 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_PostGymEvent_Trigger_Movement_5
# 1219 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 1220 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 1222 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 1225 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_FL_JANIA
# 1226 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_GAB
# 1228 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_POSTGYM
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

# 304 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Blocker_Trigger_Movement_0:
# 304 "data//maps/PellucaCity/scripts.pory"
	walk_right
	step_end

# 453 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_0:
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 453 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 480 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_1:
# 480 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 480 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_down
	step_end

# 522 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_2:
# 522 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 522 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 531 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_3:
# 531 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 531 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 531 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 531 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 531 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 531 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 531 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 531 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 531 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 531 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 539 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_4:
# 539 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 540 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_5:
# 540 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 562 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_6:
# 562 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 562 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_up
	step_end

# 588 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_7:
# 588 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 588 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 588 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 588 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 588 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 588 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 588 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 588 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 588 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 588 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 590 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_8:
# 590 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 590 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 686 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_0:
# 686 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 686 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 686 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 703 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_1:
# 703 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 703 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 722 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_Complete_Trigger_Movement_2:
# 722 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 722 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 800 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_0:
# 800 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 800 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 800 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 800 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 800 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 800 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 800 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 811 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_0:
# 811 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 811 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 811 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 811 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 811 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 811 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 811 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 811 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 822 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger2_Movement_0:
# 822 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 822 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 822 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 822 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 822 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 822 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 822 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 850 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
# 850 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 850 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 850 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 850 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 850 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 850 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 850 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 850 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 989 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 989 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 989 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 989 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 989 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 989 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 989 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 989 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 995 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 995 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 995 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 995 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 995 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 995 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 995 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 995 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

# 1166 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_0:
# 1166 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 1166 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 1178 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_1:
# 1178 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1178 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1178 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 1178 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 1178 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 1188 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_2:
# 1188 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1188 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 1195 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_3:
# 1195 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1195 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1195 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 1195 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 1212 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_4:
# 1212 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1212 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1212 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1212 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 1218 "data//maps/PellucaCity/scripts.pory"
PellucaCity_PostGymEvent_Trigger_Movement_5:
# 1218 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1218 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 1218 "data//maps/PellucaCity/scripts.pory"
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
	.string "I am! And this town belongs to the\n"
	.string "Qwilsquad!$"

PellucaCity_MayorFight_Trigger_Text_13:
# 165 "data//maps/PellucaCity/scripts.pory"
	.string "Oh trainer! Were you standing there the\n"
	.string "whole time?\p"
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
	.string "other's backs! We're from Pelluca, but\l"
	.string "we went down to Rivetshore to sail. Now\l"
	.string "we're back here, and we're not happy\l"
	.string "with how the mayor is bungling his job!\l"
	.string "So we're taking matters into our own\l"
	.string "hands.$"

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
	.string "Alright, now that's what I'm talking\n"
	.string "about! You're one of us, kid. Go on, get\l"
	.string "inside!$"

PellucaCity_Blocker_Text_0:
# 296 "data//maps/PellucaCity/scripts.pory"
	.string "This is our city! Got any problems?$"

PellucaCity_Blocker_Trigger_Text_0:
# 302 "data//maps/PellucaCity/scripts.pory"
	.string "Hey, kid! There's a toll if you wanna get\n"
	.string "out.\p"
	.string "Yeah, that's right! You gotta pay\n"
	.string "999999.\p"
	.string "Ain't got the money?\p"
	.string "Then get packing!$"

PellucaCityFlooded_SaveCitizen_A_Text_0:
# 380 "data//maps/PellucaCity/scripts.pory"
	.string "Help! Help! Over here!\p"
	.string "...\p"
	.string "Thank you so much - I'm saved!$"

PellucaCityFlooded_SaveCitizen_B_Text_0:
# 396 "data//maps/PellucaCity/scripts.pory"
	.string "I can't stay afloat any more!\p"
	.string "...\p"
	.string "Just in time!$"

PellucaCityFlooded_SaveCitizen_C_Text_0:
# 412 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh! It's too cold!\p"
	.string "...\p"
	.string "Waah! Wahh! It was so scary!$"

PellucaCityFlooded_SaveCitizen_D_Text_0:
# 428 "data//maps/PellucaCity/scripts.pory"
	.string "Help! Someone save me!\p"
	.string "...\p"
	.string "Yaay! You came!$"

PellucaCityFlooded_MainEvent_Text_0:
# 447 "data//maps/PellucaCity/scripts.pory"
	.string "What on earth is this?$"

PellucaCityFlooded_MainEvent_Text_1:
# 458 "data//maps/PellucaCity/scripts.pory"
	.string "Citizen$"

PellucaCityFlooded_MainEvent_Text_2:
# 459 "data//maps/PellucaCity/scripts.pory"
	.string "What a disaster!\p"
	.string "How could we be so unlucky!$"

PellucaCityFlooded_MainEvent_Text_3:
# 461 "data//maps/PellucaCity/scripts.pory"
	.string "What happened?$"

PellucaCityFlooded_MainEvent_Text_4:
# 463 "data//maps/PellucaCity/scripts.pory"
	.string "A Mega Sharpedo came rampaging down\n"
	.string "from the Ivy River and kicked up a\l"
	.string "storm! The riverbanks have flooded.\p"
	.string "The city's underwater!$"

PellucaCityFlooded_MainEvent_Text_5:
# 465 "data//maps/PellucaCity/scripts.pory"
	.string "Is everyone safe?$"

PellucaCityFlooded_MainEvent_Text_6:
# 467 "data//maps/PellucaCity/scripts.pory"
	.string "No - there are still four people in the\n"
	.string "water! We have to save them fast!$"

PellucaCityFlooded_MainEvent_Text_7:
# 473 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, go on Mayor. Go save them!$"

PellucaCityFlooded_MainEvent_Text_8:
# 477 "data//maps/PellucaCity/scripts.pory"
	.string "W-what do you mean? Weren't you the\n"
	.string "one in control of this city?$"

PellucaCityFlooded_MainEvent_Text_9:
# 482 "data//maps/PellucaCity/scripts.pory"
	.string "ENOUGH!$"

PellucaCityFlooded_MainEvent_Text_10:
# 494 "data//maps/PellucaCity/scripts.pory"
	.string "While you two bicker, it's us that pays\n"
	.string "the price every time! Both of you are\l"
	.string "strong - a tough trainer and a smart\l"
	.string "politician - and yet, neither of you\l"
	.string "bother to actually do anything for us\l"
	.string "citizens! And now people are in danger\l"
	.string "and you're still fighting! We've all had\l"
	.string "it upto here with you two!$"

PellucaCityFlooded_MainEvent_Text_11:
# 507 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah!\p"
	.string "Hear hear!$"

PellucaCityFlooded_MainEvent_Text_12:
# 513 "data//maps/PellucaCity/scripts.pory"
	.string "???$"

PellucaCityFlooded_MainEvent_Text_13:
# 514 "data//maps/PellucaCity/scripts.pory"
	.string "I agree too.$"

PellucaCityFlooded_MainEvent_Text_14:
# 527 "data//maps/PellucaCity/scripts.pory"
	.string "Is that Jania?\p"
	.string "Yeah! It's the Gym Leader! In the flesh!$"

PellucaCityFlooded_MainEvent_Text_15:
# 546 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, Jania! It's you! Finally. Please - you\n"
	.string "have to save those still drowning!$"

PellucaCityFlooded_MainEvent_Text_16:
# 553 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, Jania! You're an even stronger\n"
	.string "trainer than I am. You can do it!$"

PellucaCityFlooded_MainEvent_Text_17:
# 557 "data//maps/PellucaCity/scripts.pory"
	.string "Jania$"

PellucaCityFlooded_MainEvent_Text_18:
# 558 "data//maps/PellucaCity/scripts.pory"
	.string "No, I won't.$"

PellucaCityFlooded_MainEvent_Text_19:
# 568 "data//maps/PellucaCity/scripts.pory"
	.string "Don't look at me like that!\p"
	.string "You two want to be responsible for this\n"
	.string "city? Start right here, right now.\p"
	.string "Your citizens are miserably tired of\n"
	.string "both of you - when will you two change?$"

PellucaCityFlooded_MainEvent_Text_20:
# 575 "data//maps/PellucaCity/scripts.pory"
	.string "And who might you be?\p"
	.string "...\p"
	.string "{PLAYER}?\p"
	.string "...\p"
	.string "I see. So that's how you got involved\n"
	.string "with these two.\p"
	.string "Here, take this.$"

PellucaCityFlooded_MainEvent_Text_21:
# 583 "data//maps/PellucaCity/scripts.pory"
	.string "Consider this my help.\p"
	.string "Now I'm going to track the Mega\n"
	.string "Sharpedo down and make sure it doesn't\l"
	.string "harm anyone else.\p"
	.string "And the two of you - and {PLAYER} -\n"
	.string "take this chance to do the right thing!$"

PellucaCityFlooded_MainEvent_Text_22:
# 598 "data//maps/PellucaCity/scripts.pory"
	.string "Hmpf.$"

PellucaCityFlooded_MainEvent_Text_23:
# 602 "data//maps/PellucaCity/scripts.pory"
	.string "Tchah!$"

PellucaCityFlooded_MainEvent_Text_24:
# 606 "data//maps/PellucaCity/scripts.pory"
	.string "...$"

PellucaCityFlooded_MainEvent_Text_25:
# 617 "data//maps/PellucaCity/scripts.pory"
	.string "All of you! We've been letting you down.\n"
	.string "But now we're gonna prove that we care\l"
	.string "about this city with our actions!$"

PellucaCityFlooded_MainEvent_Text_26:
# 619 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} - the two of us will handle\n"
	.string "the citizens on the bridge and on land.\l"
	.string "Can you surf and rescue the four\l"
	.string "remaining citizens?\p"
	.string "Once you've picked all four of them up,\n"
	.string "come back here.$"

PellucaCityFlooded_MainEvent_Text_27:
# 621 "data//maps/PellucaCity/scripts.pory"
	.string "Good luck, {PLAYER}! We're on top of\n"
	.string "things here, so you go on into the river.\l"
	.string "You don't need to teach any Pokémon\l"
	.string "how to surf - just hop on the water!$"

PellucaCityFlooded_Mayor_Text_0:
# 633 "data//maps/PellucaCity/scripts.pory"
	.string "Have you saved everyone yet?\n"
	.string "Please hurry!$"

PellucaCityFlooded_QwilBoss_Text_0:
# 638 "data//maps/PellucaCity/scripts.pory"
	.string "We're keeping the citizens safe, so you\n"
	.string "go get the rest!$"

PellucaCityFlooded_NPC1_Text_0:
# 642 "data//maps/PellucaCity/scripts.pory"
	.string "The Mayor and the Qwilsquad boss\n"
	.string "working together? Hah! I'll believe it\l"
	.string "when I see it.$"

PellucaCityFlooded_NPC2_Text_0:
# 646 "data//maps/PellucaCity/scripts.pory"
	.string "If the two of them collaborate, maybe\n"
	.string "things will finally improve...$"

PellucaCityFlooded_NPC3_Text_0:
# 650 "data//maps/PellucaCity/scripts.pory"
	.string "I'm so scared - I hope you can save the\n"
	.string "others!$"

PellucaCityFlooded_NPC4_Text_0:
# 654 "data//maps/PellucaCity/scripts.pory"
	.string "I hate that Mega Sharpedo for doing\n"
	.string "this to my home!$"

PellucaCityFlooded_NPCSailor_Text_0:
# 658 "data//maps/PellucaCity/scripts.pory"
	.string "Go on, {PLAYER}! Hurry up and do what\n"
	.string "the boss says.$"

PellucaCityFlooded_NPCSaved_A_Text_0:
# 663 "data//maps/PellucaCity/scripts.pory"
	.string "You saved me! I can't thank you enough,\n"
	.string "trainer.$"

PellucaCityFlooded_NPCSaved_B_Text_0:
# 667 "data//maps/PellucaCity/scripts.pory"
	.string "I owe you, trainer. I'll never forget\n"
	.string "this!$"

PellucaCityFlooded_NPCSaved_C_Text_0:
# 671 "data//maps/PellucaCity/scripts.pory"
	.string "Brr - the water was so cold! How do\n"
	.string "Pokemon swim in it?$"

PellucaCityFlooded_NPCSaved_D_Text_0:
# 675 "data//maps/PellucaCity/scripts.pory"
	.string "When I grow up, I wanna be just like you!$"

PellucaCityFlooded_Complete_Trigger_Text_0:
# 692 "data//maps/PellucaCity/scripts.pory"
	.string "That's one, two, three...and four! Yup,\n"
	.string "we're all accounted for.$"

PellucaCityFlooded_Complete_Trigger_Text_1:
# 698 "data//maps/PellucaCity/scripts.pory"
	.string "Finally! Thank you {PLAYER}. You did\n"
	.string "us - the city of Pelluca - a great\l"
	.string "service. You're a hero!$"

PellucaCityFlooded_Complete_Trigger_Text_2:
# 718 "data//maps/PellucaCity/scripts.pory"
	.string "Thank you {PLAYER}!\p"
	.string "You're the best!$"

PellucaCityFlooded_Complete_Trigger_Text_3:
# 731 "data//maps/PellucaCity/scripts.pory"
	.string "It looks like we're all safe for now.$"

PellucaCityFlooded_Complete_Trigger_Text_4:
# 740 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah. All that remains is to wait until\n"
	.string "the water recedes, and then we can go\l"
	.string "back to normal.\p"
	.string "Come, shall we wait in the Pokemon\n"
	.string "Center until then?$"

PellucaCityFlooded_Complete_Trigger_Text_5:
# 745 "data//maps/PellucaCity/scripts.pory"
	.string "Sounds like a good idea. {PLAYER} here\n"
	.string "needs some rest after everything\l"
	.string "that's just happened!$"

PellucaCity_Greta_Main_Text_0:
# 831 "data//maps/PellucaCity/scripts.pory"
	.string "Greta$"

PellucaCity_Greta_Main_Text_1:
# 832 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, it's you again, {PLAYER}! Fancy\n"
	.string "seeing you in these parts. Route 6 was a\l"
	.string "tough trek, eh?$"

PellucaCity_Greta_GottaGo_Text_0:
# 848 "data//maps/PellucaCity/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 878 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 879 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh, I love the smell of the river!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 884 "data//maps/PellucaCity/scripts.pory"
	.string "I grew up here on this cliff without my\n"
	.string "parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "Those grunts were really vicious to me.\n"
	.string "I was so scared I would lose Zorua!$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 890 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the Clefairy?$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 896 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah...I doubt he'd ever forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 902 "data//maps/PellucaCity/scripts.pory"
	.string "You're just trying to make me feel\n"
	.string "better, aren't you? I don't need your\l"
	.string "pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 907 "data//maps/PellucaCity/scripts.pory"
	.string "After getting kicked out of Team\n"
	.string "Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 913 "data//maps/PellucaCity/scripts.pory"
	.string "I want you to have this. As a thank you.\n"
	.string "For saving me - not just once, but so\l"
	.string "many times. You're a strong trainer, but\l"
	.string "more importantly - you're a good person.\l"
	.string "I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_8:
# 917 "data//maps/PellucaCity/scripts.pory"
	.string "Who we are is defined by the choices we\n"
	.string "make, and once we lock in, we can't\l"
	.string "change.\p"
	.string "I can't erase what I've done, but I'm\n"
	.string "going to make a better choice this time.\p"
	.string "I suppose you're going to head to the\n"
	.string "Mirroh Base Camp from here? Team\l"
	.string "Somber must've reached there already.\l"
	.string "Best of luck, {PLAYER}.$"

PellucaCity_Zorua_Text_0:
# 931 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle's Zorua looks content. Life is\n"
	.string "more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 952 "data//maps/PellucaCity/scripts.pory"
	.string "Lycanroc is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 965 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 970 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "Pelluca Restaurant?\p"
	.string "...that's the only thing our mayor cares\n"
	.string "about promoting.$"

PellucaCity_NPC3_Text_0:
# 975 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in Mt. Mirroh but I\n"
	.string "can't go there without a Cable Car Pass.\l"
	.string "So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 980 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge is too small. It's nothing\n"
	.string "like the cycling roads in other regions!\l"
	.string "Why doesn't the mayor do anything?$"

PellucaCity_NPC5_Text_0:
# 986 "data//maps/PellucaCity/scripts.pory"
	.string "Look over there...$"

PellucaCity_NPC5_Text_1:
# 992 "data//maps/PellucaCity/scripts.pory"
	.string "Jania, the Gym Leader of Pelluca City\n"
	.string "had her gym constructed on a separate\l"
	.string "island.$"

PellucaCity_NPC5_Text_2:
# 998 "data//maps/PellucaCity/scripts.pory"
	.string "She never gets involved in city affairs!$"

PellucaCity_NPC6_Text_0:
# 1004 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the Mirroh Base Camp?\n"
	.string "You'll have to take the cable car just\l"
	.string "past the Poké Mart.\p"
	.string "I heard they're closing the gym there\n"
	.string "though.$"

PellucaCity_NPC7_Text_0:
# 1009 "data//maps/PellucaCity/scripts.pory"
	.string "With the way things are, I'm half in\n"
	.string "support of the Qwilsquad. I know\l"
	.string "they're bullies, but maybe they'll do\l"
	.string "something good for the city.$"

PellucaCity_NPC8_Text_0:
# 1014 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "Mega Sharpedo's going to scare all the\l"
	.string "fish away? I wish our mayor would do\l"
	.string "something about it.$"

PellucaCity_Sealeo_Text_0:
# 1022 "data//maps/PellucaCity/scripts.pory"
	.string "Sealeo wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 1034 "data//maps/PellucaCity/scripts.pory"
	.string "This is the Pelluca Fishery! But it's\n"
	.string "closed due to the Mega Sharpedo\l"
	.string "attacks.$"

PellucaCity_WingullGirl_Text_0:
# 1045 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "Wingulls over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 1046 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 1046 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 1052 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a Wingull!$"

PellucaCity_WingullGirl_Text_4:
# 1058 "data//maps/PellucaCity/scripts.pory"
	.string "The Wingull gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 1062 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 1070 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "Wingulls. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 1075 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at Pokémon...that's poor\l"
	.string "parenting.$"

PellucaCity_NPC10_Text_0:
# 1088 "data//maps/PellucaCity/scripts.pory"
	.string "I ate too many apple tarts! I'm too full.\n"
	.string "Whoever said people have a second\l"
	.string "stomach for dessert was lying!$"

PellucaCity_NPC11_Text_0:
# 1095 "data//maps/PellucaCity/scripts.pory"
	.string "Life is too short to worry!$"

PellucaCity_NPC11_Text_1:
# 1099 "data//maps/PellucaCity/scripts.pory"
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
# 1102 "data//maps/PellucaCity/scripts.pory"
	.string "It's time for me to let go.$"

PellucaCity_NPC12_Text_0:
# 1108 "data//maps/PellucaCity/scripts.pory"
	.string "The mayor isn't maintaining the city one\n"
	.string "bit! My Stantler eating the overgrown\l"
	.string "flowers is actually contributing to\l"
	.string "city maintenance.$"

PellucaCity_Stantler_Text_0:
# 1114 "data//maps/PellucaCity/scripts.pory"
	.string "Stantler is nonchalantly chomping on\n"
	.string "the flowers.$"

PellucaCity_PostGymEvent_Trigger_Text_0:
# 1164 "data//maps/PellucaCity/scripts.pory"
	.string "Excuse me.$"

PellucaCity_PostGymEvent_Trigger_Text_1:
# 1174 "data//maps/PellucaCity/scripts.pory"
	.string "Where am I going?\p"
	.string "To Rivetshore City. All the Gym Leaders\n"
	.string "have been called there.$"

PellucaCity_PostGymEvent_Trigger_Text_2:
# 1192 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER}! Over here!$"

PellucaCity_PostGymEvent_Trigger_Text_3:
# 1202 "data//maps/PellucaCity/scripts.pory"
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
# 1208 "data//maps/PellucaCity/scripts.pory"
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
# 1216 "data//maps/PellucaCity/scripts.pory"
	.string "You'd better be there, {PLAYER}!$"

PellucaCityFlooded_TriggerText::
# 322 "data//maps/PellucaCity/scripts.pory"
	.string "I need to save the drowning citizens!$"
