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
	compare VAR_PELLUCA_MAYOR_QUEST, 3
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
	lockall
# 327 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 328 "data//maps/PellucaCity/scripts.pory"
	release
# 329 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_10
# 330 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 331 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerUp::
# 335 "data//maps/PellucaCity/scripts.pory"
	lockall
# 336 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 337 "data//maps/PellucaCity/scripts.pory"
	release
# 338 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_11
# 339 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 340 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerLeft::
# 344 "data//maps/PellucaCity/scripts.pory"
	lockall
# 345 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 346 "data//maps/PellucaCity/scripts.pory"
	release
# 347 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_9
# 348 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 349 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerRight::
# 353 "data//maps/PellucaCity/scripts.pory"
	lockall
# 354 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 355 "data//maps/PellucaCity/scripts.pory"
	release
# 356 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 357 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 358 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen::
# 363 "data//maps/PellucaCity/scripts.pory"
	lockall
# 364 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 365 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_Text_0
# 366 "data//maps/PellucaCity/scripts.pory"
	release
# 368 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 369 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 370 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 372 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_MainEvent::
# 379 "data//maps/PellucaCity/scripts.pory"
	lockall
# 380 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 4
# 382 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 383 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_0
# 384 "data//maps/PellucaCity/scripts.pory"
	release
# 385 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 388 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 389 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_MainEvent_Movement_0
# 391 "data//maps/PellucaCity/scripts.pory"
	delay 60
# 394 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 395 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_2
# 396 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 397 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_3
# 398 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 399 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_4
# 400 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 401 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_5
# 402 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 403 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_6
# 406 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_6
# 407 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 408 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 409 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_7
# 410 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 411 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 412 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 413 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_8
# 416 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_CITIZEN, PellucaCityFlooded_MainEvent_Movement_1
# 417 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 418 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_9
# 419 "data//maps/PellucaCity/scripts.pory"
	release
# 420 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 422 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_5
# 423 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_5
# 424 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 425 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 426 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 427 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 429 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 430 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_10
# 431 "data//maps/PellucaCity/scripts.pory"
	release
# 433 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_7
# 434 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_7
# 435 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_7
# 436 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_7
# 437 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_7
# 438 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_7
# 440 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 441 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_11
# 442 "data//maps/PellucaCity/scripts.pory"
	release
# 444 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 447 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_12
# 448 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_13
# 449 "data//maps/PellucaCity/scripts.pory"
	release
# 450 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 452 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_5
# 453 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_5
# 454 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_5
# 455 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_5
# 456 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCityFlooded_MainEvent_Movement_2
# 457 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCity_MayorFight_Trigger_Movement_5
# 458 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_5
# 460 "data//maps/PellucaCity/scripts.pory"
	addobject LOCALID_FL_JANIA
# 461 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Movement_3
# 462 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 464 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 465 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_14
# 466 "data//maps/PellucaCity/scripts.pory"
	release
# 468 "data//maps/PellucaCity/scripts.pory"
	applymovement 43, PellucaCity_MayorFight_Trigger_Movement_4
# 469 "data//maps/PellucaCity/scripts.pory"
	applymovement 44, PellucaCity_MayorFight_Trigger_Movement_4
# 470 "data//maps/PellucaCity/scripts.pory"
	applymovement 45, PellucaCity_MayorFight_Trigger_Movement_4
# 471 "data//maps/PellucaCity/scripts.pory"
	applymovement 46, PellucaCity_MayorFight_Trigger_Movement_4
# 472 "data//maps/PellucaCity/scripts.pory"
	applymovement 47, PellucaCity_MayorFight_Trigger_Movement_4
# 473 "data//maps/PellucaCity/scripts.pory"
	applymovement 48, PellucaCityFlooded_MainEvent_Movement_4
# 474 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_5
# 475 "data//maps/PellucaCity/scripts.pory"
	applymovement 51, PellucaCity_MayorFight_Trigger_Movement_4
# 477 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_MAYOR, PellucaCity_MayorFight_Trigger_Movement_7
# 478 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 479 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 480 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_15
# 481 "data//maps/PellucaCity/scripts.pory"
	release
# 482 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 484 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_QWIL, PellucaCity_MayorFight_Trigger_Movement_7
# 485 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 486 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 487 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_16
# 488 "data//maps/PellucaCity/scripts.pory"
	release
# 489 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 491 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 492 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_18
# 493 "data//maps/PellucaCity/scripts.pory"
	release
# 495 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Movement_4
# 496 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 497 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 498 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_19
# 499 "data//maps/PellucaCity/scripts.pory"
	release
# 500 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_SYS_SURF_ENABLED
# 501 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_HM03
# 502 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 503 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_17
# 504 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_20
# 505 "data//maps/PellucaCity/scripts.pory"
	release
# 506 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 509 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_FL_JANIA, PellucaCityFlooded_MainEvent_Movement_6
# 510 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 515 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 516 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Greta_Trigger0::
# 552 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger0_2
# 554 "data//maps/PellucaCity/scripts.pory"
	lockall
# 555 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger0_Movement_0
# 556 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 557 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_4
# 558 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 559 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger0_2:
	end


PellucaCity_Greta_Trigger1::
# 563 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger1_2
# 565 "data//maps/PellucaCity/scripts.pory"
	lockall
# 566 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger1_Movement_0
# 567 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 568 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_5
# 569 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 570 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger1_2:
	end


PellucaCity_Greta_Trigger2::
# 574 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger2_2
# 576 "data//maps/PellucaCity/scripts.pory"
	lockall
# 577 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger2_Movement_0
# 578 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 579 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCityFlooded_MainEvent_Movement_5
# 580 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 581 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger2_2:
	end


PellucaCity_Greta_Main::
# 587 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 588 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_Main_Text_1
# 589 "data//maps/PellucaCity/scripts.pory"
	release
# 590 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 591 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 592 "data//maps/PellucaCity/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 593 "data//maps/PellucaCity/scripts.pory"
	release
# 594 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 596 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 600 "data//maps/PellucaCity/scripts.pory"
	release
# 601 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_MayorFight_Trigger_Movement_7
# 602 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 603 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 604 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 605 "data//maps/PellucaCity/scripts.pory"
	release
# 606 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 607 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 608 "data//maps/PellucaCity/scripts.pory"
	removeobject 27
# 609 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 610 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 612 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 632 "data//maps/PellucaCity/scripts.pory"
	lockall
# 633 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_2
# 639 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 640 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2
# 641 "data//maps/PellucaCity/scripts.pory"
	release
# 642 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 643 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 644 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 645 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 646 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3, MSGBOX_YESNO
# 647 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_6
# 656 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Movement_5
# 657 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 658 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 659 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_5:
# 661 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 662 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 663 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 664 "data//maps/PellucaCity/scripts.pory"
	release
# 665 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 666 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 667 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 668 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 669 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 670 "data//maps/PellucaCity/scripts.pory"
	release
# 671 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 672 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 673 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_8
# 674 "data//maps/PellucaCity/scripts.pory"
	release
# 675 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 676 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Movement_5
# 677 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
PellucaCity_EventScripts_Gabrielle_1:
# 679 "data//maps/PellucaCity/scripts.pory"
	releaseall
	return

PellucaCity_EventScripts_Gabrielle_2:
# 634 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 635 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 636 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_1

PellucaCity_EventScripts_Gabrielle_6:
# 649 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCityFlooded_MainEvent_Movement_5
# 650 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 651 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 652 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 653 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_5


PellucaCity_Zorua::
# 684 "data//maps/PellucaCity/scripts.pory"
	lockall
# 685 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 686 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_NORMAL
# 687 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 688 "data//maps/PellucaCity/scripts.pory"
	release
# 689 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCityFlooded_MainEvent_Movement_5
# 690 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 691 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 707 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 708 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC1::
# 721 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC2::
# 726 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC3::
# 731 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC4::
# 736 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC5::
# 741 "data//maps/PellucaCity/scripts.pory"
	lockall
# 742 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 743 "data//maps/PellucaCity/scripts.pory"
	release
# 744 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 745 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 746 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 747 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 748 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_1
# 749 "data//maps/PellucaCity/scripts.pory"
	release
# 750 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 751 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 752 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 753 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 754 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_2, MSGBOX_NPC
# 755 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 760 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC7::
# 765 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC8::
# 770 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_Sealeo::
# 775 "data//maps/PellucaCity/scripts.pory"
	lockall
# 776 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 777 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 778 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0, MSGBOX_NPC
# 779 "data//maps/PellucaCity/scripts.pory"
	release
# 780 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_MayorFight_Trigger_Movement_4
# 781 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 782 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 790 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullGirl::
# 799 "data//maps/PellucaCity/scripts.pory"
	lock
# 800 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 801 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 802 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 804 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 818 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5, MSGBOX_NPC
PellucaCity_WingullGirl_1:
# 821 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 806 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_MayorFight_Trigger_Movement_5
# 807 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 808 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 809 "data//maps/PellucaCity/scripts.pory"
	release
# 810 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_MayorFight_Trigger_Movement_7
# 811 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_MayorFight_Trigger_Movement_7
# 812 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 813 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 814 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 815 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 816 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 826 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullCritique::
# 831 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC10::
# 844 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC10_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC11::
# 850 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_CITY_TM_GIVER, PellucaCity_NPC11_2
# 855 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_1, MSGBOX_NPC
# 856 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_TM01
# 857 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_CITY_TM_GIVER
# 858 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_2, MSGBOX_NPC
	end

PellucaCity_NPC11_2:
# 851 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC12::
# 864 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC12_Text_0, MSGBOX_NPC
	end


PellucaCity_Stantler::
# 869 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 870 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Stantler_Text_0, MSGBOX_NPC
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

# 389 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_0:
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 389 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 416 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_1:
# 416 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 416 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_down
	step_end

# 456 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_2:
# 456 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 456 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 461 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_3:
# 461 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 461 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 461 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 461 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 461 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 461 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 461 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 461 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 461 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 461 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 473 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_4:
# 473 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 474 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_5:
# 474 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 509 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_6:
# 509 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 509 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 509 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 509 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 509 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 509 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 509 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 509 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 509 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 509 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 555 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_0:
# 555 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 555 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 555 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 555 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 555 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 555 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 555 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 566 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_0:
# 566 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 566 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 566 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 566 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 566 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 566 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 566 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 566 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 577 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger2_Movement_0:
# 577 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 577 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 577 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 577 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 577 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 577 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 577 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 606 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
# 606 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 606 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 606 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 606 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 606 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 606 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 606 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 606 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 745 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 745 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 745 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 745 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 745 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 745 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 745 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 745 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 751 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 751 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 751 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 751 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 751 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 751 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 751 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 751 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
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

PellucaCityFlooded_SaveCitizen_Text_0:
# 365 "data//maps/PellucaCity/scripts.pory"
	.string "Thank you trainer, you saved me!$"

PellucaCityFlooded_MainEvent_Text_0:
# 383 "data//maps/PellucaCity/scripts.pory"
	.string "What on earth is this?$"

PellucaCityFlooded_MainEvent_Text_1:
# 394 "data//maps/PellucaCity/scripts.pory"
	.string "Citizen$"

PellucaCityFlooded_MainEvent_Text_2:
# 395 "data//maps/PellucaCity/scripts.pory"
	.string "What a disaster!\p"
	.string "How could we be so unlucky!$"

PellucaCityFlooded_MainEvent_Text_3:
# 397 "data//maps/PellucaCity/scripts.pory"
	.string "What happened?$"

PellucaCityFlooded_MainEvent_Text_4:
# 399 "data//maps/PellucaCity/scripts.pory"
	.string "A Mega Sharpedo came rampaging down\n"
	.string "from the Ivy River and kicked up a\l"
	.string "storm! The riverbanks have flooded.\p"
	.string "The city's underwater!$"

PellucaCityFlooded_MainEvent_Text_5:
# 401 "data//maps/PellucaCity/scripts.pory"
	.string "Is everyone safe?$"

PellucaCityFlooded_MainEvent_Text_6:
# 403 "data//maps/PellucaCity/scripts.pory"
	.string "No - there are still four people in the\n"
	.string "water! We have to save them fast!$"

PellucaCityFlooded_MainEvent_Text_7:
# 409 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, go on Mayor. Go save them!$"

PellucaCityFlooded_MainEvent_Text_8:
# 413 "data//maps/PellucaCity/scripts.pory"
	.string "W-what do you mean? Weren't you the\n"
	.string "one in control of this city?$"

PellucaCityFlooded_MainEvent_Text_9:
# 418 "data//maps/PellucaCity/scripts.pory"
	.string "ENOUGH!$"

PellucaCityFlooded_MainEvent_Text_10:
# 430 "data//maps/PellucaCity/scripts.pory"
	.string "While you two bicker, it's us that pays\n"
	.string "the price every time! Both of you are\l"
	.string "strong - a tough trainer and a smart\l"
	.string "politician - and yet, neither of you\l"
	.string "bother to actually do anything for us\l"
	.string "citizens! And now people are in danger\l"
	.string "and you're still fighting! We've all had\l"
	.string "it upto here with you two!$"

PellucaCityFlooded_MainEvent_Text_11:
# 441 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah!\p"
	.string "Hear hear!$"

PellucaCityFlooded_MainEvent_Text_12:
# 447 "data//maps/PellucaCity/scripts.pory"
	.string "???$"

PellucaCityFlooded_MainEvent_Text_13:
# 448 "data//maps/PellucaCity/scripts.pory"
	.string "I agree too.$"

PellucaCityFlooded_MainEvent_Text_14:
# 465 "data//maps/PellucaCity/scripts.pory"
	.string "Is that Jania!\p"
	.string "Yeah! It's the Gym Leader! In the flesh!\p"
	.string "Wow...$"

PellucaCityFlooded_MainEvent_Text_15:
# 480 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, Jania! It's you! Finally. Please - you\n"
	.string "have to save those still drowning!$"

PellucaCityFlooded_MainEvent_Text_16:
# 487 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah, Jania! You're an even stronger\n"
	.string "trainer than I am. You can do it!$"

PellucaCityFlooded_MainEvent_Text_17:
# 491 "data//maps/PellucaCity/scripts.pory"
	.string "Jania$"

PellucaCityFlooded_MainEvent_Text_18:
# 492 "data//maps/PellucaCity/scripts.pory"
	.string "No, I won't\p"
	.string "You two want to be responsible for this\n"
	.string "city? Start right here, right now.$"

PellucaCityFlooded_MainEvent_Text_19:
# 498 "data//maps/PellucaCity/scripts.pory"
	.string "And who might you be?\p"
	.string "...\p"
	.string "{PLAYER}?\p"
	.string "...\p"
	.string "I see. So that's how you got involved\n"
	.string "with these two.\p"
	.string "Here, take this.$"

PellucaCityFlooded_MainEvent_Text_20:
# 504 "data//maps/PellucaCity/scripts.pory"
	.string "Consider this my help. Now the two of\n"
	.string "you - and {PLAYER} - take this\l"
	.string "opportunity and do the right thing!$"

PellucaCity_Greta_Main_Text_0:
# 587 "data//maps/PellucaCity/scripts.pory"
	.string "Greta$"

PellucaCity_Greta_Main_Text_1:
# 588 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, it's you again, {PLAYER}! Fancy\n"
	.string "seeing you in these parts. Route 6 was a\l"
	.string "tough trek, eh?$"

PellucaCity_Greta_GottaGo_Text_0:
# 604 "data//maps/PellucaCity/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 634 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 635 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh, I love the smell of the river!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 640 "data//maps/PellucaCity/scripts.pory"
	.string "I grew up here on this cliff without my\n"
	.string "parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "Those grunts were really vicious to me.\n"
	.string "I was so scared I would lose Zorua!$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 646 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the Clefairy?$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 652 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah...I doubt he'd ever forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 658 "data//maps/PellucaCity/scripts.pory"
	.string "You're just trying to make me feel\n"
	.string "better, aren't you? I don't need your\l"
	.string "pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 663 "data//maps/PellucaCity/scripts.pory"
	.string "After getting kicked out of Team\n"
	.string "Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 669 "data//maps/PellucaCity/scripts.pory"
	.string "I want you to have this. As a thank you.\n"
	.string "For saving me - not just once, but so\l"
	.string "many times. You're a strong trainer, but\l"
	.string "more importantly - you're a good person.\l"
	.string "I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_8:
# 673 "data//maps/PellucaCity/scripts.pory"
	.string "Who we are is defined by the chocies we\n"
	.string "make, and once we lock in, we can't\l"
	.string "change.\p"
	.string "I can't erase what I've done, but I'm\n"
	.string "going to make a better choice this time.\p"
	.string "I suppose you're going to head to the\n"
	.string "Mirroh Base Camp from here? Team\l"
	.string "Somber must've reached there already.\l"
	.string "Best of luck, {PLAYER}.$"

PellucaCity_Zorua_Text_0:
# 687 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle's Zorua looks content. Life is\n"
	.string "more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 708 "data//maps/PellucaCity/scripts.pory"
	.string "Lycanroc is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 721 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 726 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "Pelluca Restaurant?$"

PellucaCity_NPC3_Text_0:
# 731 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in Mt. Mirroh but I\n"
	.string "can't go there without a Cable Car Pass.\l"
	.string "So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 736 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge is too small. It's nothing\n"
	.string "like the cycling roads in other regions!\l"
	.string "Why does the mayor even let us cycle\l"
	.string "then?$"

PellucaCity_NPC5_Text_0:
# 742 "data//maps/PellucaCity/scripts.pory"
	.string "Look over there...$"

PellucaCity_NPC5_Text_1:
# 748 "data//maps/PellucaCity/scripts.pory"
	.string "The Gym Leader of Pelluca City had her\n"
	.string "gym constructed on a separate island.$"

PellucaCity_NPC5_Text_2:
# 754 "data//maps/PellucaCity/scripts.pory"
	.string "Talk about entitlement!$"

PellucaCity_NPC6_Text_0:
# 760 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the Mirroh Base Camp?\n"
	.string "You'll have to take the cable car just\l"
	.string "past the Poké Mart.\p"
	.string "I heard they're closing the gym there\n"
	.string "though.$"

PellucaCity_NPC7_Text_0:
# 765 "data//maps/PellucaCity/scripts.pory"
	.string "There are no free tables at the\n"
	.string "restaurant! I should've made a\l"
	.string "reservation.$"

PellucaCity_NPC8_Text_0:
# 770 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "Mega Sharpedo's going to scare all the\l"
	.string "fish away? I wish our mayor would do\l"
	.string "something about it.$"

PellucaCity_Sealeo_Text_0:
# 778 "data//maps/PellucaCity/scripts.pory"
	.string "Sealeo wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 790 "data//maps/PellucaCity/scripts.pory"
	.string "This is the Pelluca Fishery! But it's\n"
	.string "closed due to the Mega Sharpedo\l"
	.string "attacks.$"

PellucaCity_WingullGirl_Text_0:
# 801 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "Wingulls over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 802 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 802 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 808 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a Wingull!$"

PellucaCity_WingullGirl_Text_4:
# 814 "data//maps/PellucaCity/scripts.pory"
	.string "The Wingull gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 818 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 826 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "Wingulls. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 831 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at Pokémon...that's poor\l"
	.string "parenting. The mayor should really do\l"
	.string "something but he's too incompetent.$"

PellucaCity_NPC10_Text_0:
# 844 "data//maps/PellucaCity/scripts.pory"
	.string "I ate too many apple tarts! I'm too full.\n"
	.string "Whoever said people have a second\l"
	.string "stomach for dessert was lying!$"

PellucaCity_NPC11_Text_0:
# 851 "data//maps/PellucaCity/scripts.pory"
	.string "Life is too short to worry!$"

PellucaCity_NPC11_Text_1:
# 855 "data//maps/PellucaCity/scripts.pory"
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
# 858 "data//maps/PellucaCity/scripts.pory"
	.string "It's time for me to let go.$"

PellucaCity_NPC12_Text_0:
# 864 "data//maps/PellucaCity/scripts.pory"
	.string "The mayor isn't maintaining the city one\n"
	.string "bit! My Stantler eating the overgrown\l"
	.string "flowers is actually contributing to\l"
	.string "city maintenance.$"

PellucaCity_Stantler_Text_0:
# 870 "data//maps/PellucaCity/scripts.pory"
	.string "Stantler is nonchalantly chomping on\n"
	.string "the flowers.$"

PellucaCityFlooded_TriggerText::
# 322 "data//maps/PellucaCity/scripts.pory"
	.string "I need to save the drowning citizens!$"
