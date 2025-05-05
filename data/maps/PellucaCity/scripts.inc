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

PellucaCity_MapScripts::
# 13 "data//maps/PellucaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PellucaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data//maps/PellucaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PellucaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PellucaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_SetLayout
	return

PellucaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data//maps/PellucaCity/scripts.pory"
	map_script_2 VAR_PELLUCA_MAYOR_QUEST, 3, PellucaCityFlooded_MainEvent
	.2byte 0


PellucaCity_SetLayout::
# 22 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 3
	goto_if_eq PellucaCity_SetLayout_2
# 27 "data//maps/PellucaCity/scripts.pory"
	setmaplayoutindex LAYOUT_PELLUCA_CITY
PellucaCity_SetLayout_1:
	return

PellucaCity_SetLayout_2:
# 23 "data//maps/PellucaCity/scripts.pory"
	setmaplayoutindex LAYOUT_PELLUCA_CITY_FLOODED
# 24 "data//maps/PellucaCity/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 25 "data//maps/PellucaCity/scripts.pory"
	doweather
	goto PellucaCity_SetLayout_1


PellucaCity_MayorFight_Trigger::
# 42 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_MAYOR_FIGHT, PellucaCity_MayorFight_Trigger_2
# 44 "data//maps/PellucaCity/scripts.pory"
	lockall
# 47 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 48 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_MayorFight_Trigger_Movement_0
# 49 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 50 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 53 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_1
# 54 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 55 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 56 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 57 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_1
# 58 "data//maps/PellucaCity/scripts.pory"
	release
# 59 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 61 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_2
# 62 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 63 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 64 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 65 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_3
# 66 "data//maps/PellucaCity/scripts.pory"
	release
# 67 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 69 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 70 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 71 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 72 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 73 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_4
# 74 "data//maps/PellucaCity/scripts.pory"
	release
# 75 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 77 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_4
# 78 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 79 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 80 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 81 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_6
# 82 "data//maps/PellucaCity/scripts.pory"
	release
# 83 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 85 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_5
# 86 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 87 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 88 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 89 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_7
# 90 "data//maps/PellucaCity/scripts.pory"
	release
# 91 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 93 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_6
# 94 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_6
# 95 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 96 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 97 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_8
# 98 "data//maps/PellucaCity/scripts.pory"
	release
# 99 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 101 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_7
# 102 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 103 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 104 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 105 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_9
# 106 "data//maps/PellucaCity/scripts.pory"
	release
# 107 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 109 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_7
# 110 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 111 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 112 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_8
# 113 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 114 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 116 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 117 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_10
# 118 "data//maps/PellucaCity/scripts.pory"
	release
# 119 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 121 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_6
# 122 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_6
# 123 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 124 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 125 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_11
# 126 "data//maps/PellucaCity/scripts.pory"
	release
# 127 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 129 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_7
# 130 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 131 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 132 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 133 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_12
# 134 "data//maps/PellucaCity/scripts.pory"
	release
# 135 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 138 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 139 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 140 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 141 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_10
# 142 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 143 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 144 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_9
# 145 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_11
# 146 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 147 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_12
# 148 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_12
# 149 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_12
# 150 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 155 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_13
# 156 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 157 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 158 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 159 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_13
# 160 "data//maps/PellucaCity/scripts.pory"
	release
# 161 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 163 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_14
# 164 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 165 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 166 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 167 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_14
# 168 "data//maps/PellucaCity/scripts.pory"
	release
# 169 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 170 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_15
# 171 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 172 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 176 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 177 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_MayorFight_Trigger_Movement_16
# 178 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 179 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 181 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_MAYOR
# 182 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S1
# 183 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S2
# 184 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S3
# 185 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_MAYOR_FIGHT
# 187 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_MayorFight_Trigger_2:
	end


PellucaCity_Sailor_Entrance::
# 204 "data//maps/PellucaCity/scripts.pory"
	lockall
# 205 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 207 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 208 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_Entrance_Text_0
# 209 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCity_Sailor_Entrance_2
# 210 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 1
	goto_if_eq PellucaCity_Sailor_Entrance_5
# 212 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_Multichoice
# 214 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_Entrance_2:
# 209 "data//maps/PellucaCity/scripts.pory"
	release
	end

PellucaCity_Sailor_Entrance_5:
# 210 "data//maps/PellucaCity/scripts.pory"
	release
	end


PellucaCity_Sailor_Multichoice::
# 218 "data//maps/PellucaCity/scripts.pory"
	message PellucaCity_Sailor_Multichoice_Text_0
# 219 "data//maps/PellucaCity/scripts.pory"
	waitmessage
# 220 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Sailor_Multichoice_Text_1, PellucaCity_Sailor_Multichoice_Text_2
# 222 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_Multichoice_2
PellucaCity_Sailor_Multichoice_1:
# 223 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_Multichoice_4
	return

PellucaCity_Sailor_Multichoice_2:
# 222 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_QwilsquadExplanation
	goto PellucaCity_Sailor_Multichoice_1

PellucaCity_Sailor_Multichoice_4:
# 223 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberCheck
	return


PellucaCity_Sailor_QwilsquadExplanation::
# 226 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 227 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_QwilsquadExplanation_Text_0
# 228 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_Multichoice
	return


PellucaCity_Sailor_MemberCheck::
# 231 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 232 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_0, MSGBOX_YESNO
# 234 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_MemberCheck_2
PellucaCity_Sailor_MemberCheck_1:
# 238 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_MemberCheck_5
PellucaCity_Sailor_MemberCheck_4:
# 260 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_MemberCheck_2:
# 235 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 236 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_1
	goto PellucaCity_Sailor_MemberCheck_1

PellucaCity_Sailor_MemberCheck_5:
# 239 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 240 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_2
# 241 "data//maps/PellucaCity/scripts.pory"
	release
# 244 "data//maps/PellucaCity/scripts.pory"
	special ChoosePartyMon
# 245 "data//maps/PellucaCity/scripts.pory"
	waitstate
# 246 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 247 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 248 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 250 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_QWILFISH_HISUI
	goto_if_eq PellucaCity_Sailor_MemberCheck_8
PellucaCity_Sailor_MemberCheck_7:
# 251 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_OVERQWIL
	goto_if_eq PellucaCity_Sailor_MemberCheck_11
PellucaCity_Sailor_MemberCheck_10:
# 253 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 254 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 255 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 256 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_3
	goto PellucaCity_Sailor_MemberCheck_4

PellucaCity_Sailor_MemberCheck_8:
# 250 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_7

PellucaCity_Sailor_MemberCheck_11:
# 251 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_10


PellucaCity_Sailor_MemberAccepted::
# 264 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 265 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 266 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 267 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberAccepted_Text_0
# 268 "data//maps/PellucaCity/scripts.pory"
	release
# 269 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_11
# 270 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 271 "data//maps/PellucaCity/scripts.pory"
	playse SE_EXIT
# 272 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S_ENTRANCE
# 274 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_QWILSQUAD_ENTRANCE
# 275 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Blocker::
# 290 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Text_0
	end


PellucaCity_Blocker_Trigger::
# 294 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_BLOCKER, PellucaCity_MayorFight_Trigger_Movement_7
# 295 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 296 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Trigger_Text_0
# 297 "data//maps/PellucaCity/scripts.pory"
	release
# 298 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 299 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 300 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerDown::
# 320 "data//maps/PellucaCity/scripts.pory"
	lockall
# 321 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 322 "data//maps/PellucaCity/scripts.pory"
	release
# 323 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_10
# 324 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 325 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerUp::
# 329 "data//maps/PellucaCity/scripts.pory"
	lockall
# 330 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 331 "data//maps/PellucaCity/scripts.pory"
	release
# 332 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_11
# 333 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 334 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerLeft::
# 338 "data//maps/PellucaCity/scripts.pory"
	lockall
# 339 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 340 "data//maps/PellucaCity/scripts.pory"
	release
# 341 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_9
# 342 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 343 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_TriggerRight::
# 347 "data//maps/PellucaCity/scripts.pory"
	lockall
# 348 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_TriggerText
# 349 "data//maps/PellucaCity/scripts.pory"
	release
# 350 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 351 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 352 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_SaveCitizen::
# 357 "data//maps/PellucaCity/scripts.pory"
	lockall
# 358 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 359 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_SaveCitizen_Text_0
# 360 "data//maps/PellucaCity/scripts.pory"
	release
# 362 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 363 "data//maps/PellucaCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 364 "data//maps/PellucaCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 366 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCityFlooded_MainEvent::
# 373 "data//maps/PellucaCity/scripts.pory"
	lockall
# 374 "data//maps/PellucaCity/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 4
# 376 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 377 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_0
# 378 "data//maps/PellucaCity/scripts.pory"
	release
# 379 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 382 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 383 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCityFlooded_MainEvent_Movement_0
# 385 "data//maps/PellucaCity/scripts.pory"
	delay 48
# 388 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCityFlooded_MainEvent_Text_1
# 389 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_2
# 390 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 391 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_3
# 392 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 393 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCityFlooded_MainEvent_Text_4
# 395 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Greta_Trigger0::
# 431 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger0_2
# 433 "data//maps/PellucaCity/scripts.pory"
	lockall
# 434 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger0_Movement_0
# 435 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 436 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger0_Movement_1
# 437 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 438 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger0_2:
	end


PellucaCity_Greta_Trigger1::
# 442 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger1_2
# 444 "data//maps/PellucaCity/scripts.pory"
	lockall
# 445 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger1_Movement_0
# 446 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 447 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger1_Movement_1
# 448 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 449 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger1_2:
	end


PellucaCity_Greta_Trigger2::
# 453 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger2_2
# 455 "data//maps/PellucaCity/scripts.pory"
	lockall
# 456 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger2_Movement_0
# 457 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 458 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger1_Movement_1
# 459 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 460 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger2_2:
	end


PellucaCity_Greta_Main::
# 466 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 467 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_Main_Text_1
# 468 "data//maps/PellucaCity/scripts.pory"
	release
# 469 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 470 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 471 "data//maps/PellucaCity/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 472 "data//maps/PellucaCity/scripts.pory"
	release
# 473 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 475 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 479 "data//maps/PellucaCity/scripts.pory"
	release
# 480 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_MayorFight_Trigger_Movement_7
# 481 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 482 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 483 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 484 "data//maps/PellucaCity/scripts.pory"
	release
# 485 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 486 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 487 "data//maps/PellucaCity/scripts.pory"
	removeobject 27
# 488 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 489 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 491 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 511 "data//maps/PellucaCity/scripts.pory"
	lockall
# 512 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_2
# 518 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 519 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2
# 520 "data//maps/PellucaCity/scripts.pory"
	release
# 521 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 522 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 523 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 524 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 525 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3, MSGBOX_YESNO
# 526 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_6
# 535 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 536 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 537 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 538 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_5:
# 540 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 541 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 542 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 543 "data//maps/PellucaCity/scripts.pory"
	release
# 544 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 545 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 546 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 547 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 548 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 549 "data//maps/PellucaCity/scripts.pory"
	release
# 550 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 551 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 552 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_8
# 553 "data//maps/PellucaCity/scripts.pory"
	release
# 554 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 555 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 556 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
PellucaCity_EventScripts_Gabrielle_1:
# 558 "data//maps/PellucaCity/scripts.pory"
	releaseall
	return

PellucaCity_EventScripts_Gabrielle_2:
# 513 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 514 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 515 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_1

PellucaCity_EventScripts_Gabrielle_6:
# 528 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 529 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 530 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 531 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 532 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_5


PellucaCity_Zorua::
# 563 "data//maps/PellucaCity/scripts.pory"
	lockall
# 564 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 565 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_NORMAL
# 566 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 567 "data//maps/PellucaCity/scripts.pory"
	release
# 568 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCity_Greta_Trigger1_Movement_1
# 569 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 570 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 586 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 587 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC1::
# 600 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_SYS_SURF_ENABLED
# 601 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC2::
# 606 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC3::
# 611 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC4::
# 616 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC5::
# 621 "data//maps/PellucaCity/scripts.pory"
	lockall
# 622 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 623 "data//maps/PellucaCity/scripts.pory"
	release
# 624 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 625 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 626 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 627 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 628 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_1
# 629 "data//maps/PellucaCity/scripts.pory"
	release
# 630 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 631 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 632 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 633 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 634 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_2, MSGBOX_NPC
# 635 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 640 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC7::
# 645 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC8::
# 650 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_Sealeo::
# 655 "data//maps/PellucaCity/scripts.pory"
	lockall
# 656 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 657 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 658 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0, MSGBOX_NPC
# 659 "data//maps/PellucaCity/scripts.pory"
	release
# 660 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_MayorFight_Trigger_Movement_4
# 661 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 662 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 670 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullGirl::
# 679 "data//maps/PellucaCity/scripts.pory"
	lock
# 680 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 681 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 682 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 684 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 698 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5, MSGBOX_NPC
PellucaCity_WingullGirl_1:
# 701 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 686 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_MayorFight_Trigger_Movement_5
# 687 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 688 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 689 "data//maps/PellucaCity/scripts.pory"
	release
# 690 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_MayorFight_Trigger_Movement_7
# 691 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_MayorFight_Trigger_Movement_7
# 692 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 693 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 694 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 695 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 696 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 706 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullCritique::
# 711 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC10::
# 724 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC10_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC11::
# 730 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_CITY_TM_GIVER, PellucaCity_NPC11_2
# 735 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_1, MSGBOX_NPC
# 736 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_TM01
# 737 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_CITY_TM_GIVER
# 738 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_2, MSGBOX_NPC
	end

PellucaCity_NPC11_2:
# 731 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC12::
# 744 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC12_Text_0, MSGBOX_NPC
	end


PellucaCity_Stantler::
# 749 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 750 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Stantler_Text_0, MSGBOX_NPC
	end


# 48 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_0:
# 48 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 48 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 48 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 48 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 53 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_1:
# 53 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 53 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 61 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_2:
# 61 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 61 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 69 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_3:
# 69 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 77 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_4:
# 77 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 85 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_5:
# 85 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 93 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_6:
# 93 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 101 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_7:
# 101 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 112 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_8:
# 112 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 112 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 138 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_9:
# 138 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 141 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_10:
# 141 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 145 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_11:
# 145 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 147 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_12:
# 147 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 147 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 147 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 147 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 147 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 147 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 147 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 147 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 147 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 155 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_13:
# 155 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 155 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 163 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_14:
# 163 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 163 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 163 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 163 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 163 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 163 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 170 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_15:
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 170 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 177 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_16:
# 177 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 177 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 177 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 177 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 298 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Blocker_Trigger_Movement_0:
# 298 "data//maps/PellucaCity/scripts.pory"
	walk_right
	step_end

# 383 "data//maps/PellucaCity/scripts.pory"
PellucaCityFlooded_MainEvent_Movement_0:
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 383 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 434 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_0:
# 434 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 434 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 434 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 434 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 434 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 434 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 434 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 436 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_1:
# 436 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 445 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_0:
# 445 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 445 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 445 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 445 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 445 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 445 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 445 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 445 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 447 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_1:
# 447 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 456 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger2_Movement_0:
# 456 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 456 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 456 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 456 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 456 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 456 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 456 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 485 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
# 485 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 485 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 485 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 485 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 485 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 485 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 485 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 485 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 625 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 625 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 625 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 625 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 625 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 625 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 625 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 625 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 631 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 631 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 631 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 631 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 631 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 631 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 631 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 631 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

PellucaCity_MayorFight_Trigger_Text_0:
# 56 "data//maps/PellucaCity/scripts.pory"
	.string "Mayor$"

PellucaCity_MayorFight_Trigger_Text_1:
# 57 "data//maps/PellucaCity/scripts.pory"
	.string "But you can't be doing this to our\n"
	.string "citizens! This is our city!$"

PellucaCity_MayorFight_Trigger_Text_2:
# 64 "data//maps/PellucaCity/scripts.pory"
	.string "Q-squad Boss$"

PellucaCity_MayorFight_Trigger_Text_3:
# 65 "data//maps/PellucaCity/scripts.pory"
	.string "I've told you a hundred times, you\n"
	.string "paper-pushing wimp! You ain't doing a\l"
	.string "single thing right for our city, so don't\l"
	.string "you dare mess with the Qwilsquad!\p"
	.string "This is our turf - we don't give a hoot\n"
	.string "about you and your title!$"

PellucaCity_MayorFight_Trigger_Text_4:
# 73 "data//maps/PellucaCity/scripts.pory"
	.string "No! Enough is enough! I'm putting my\n"
	.string "foot down.\p"
	.string "You and your lot lot aren't allowed in\n"
	.string "Pelluca City any more!$"

PellucaCity_MayorFight_Trigger_Text_5:
# 80 "data//maps/PellucaCity/scripts.pory"
	.string "Q-squad Grunt$"

PellucaCity_MayorFight_Trigger_Text_6:
# 81 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! What a lame mayor!$"

PellucaCity_MayorFight_Trigger_Text_7:
# 89 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah! He really thinks he can tell us\n"
	.string "what to do!$"

PellucaCity_MayorFight_Trigger_Text_8:
# 97 "data//maps/PellucaCity/scripts.pory"
	.string "Go on boss - teach him a lesson!$"

PellucaCity_MayorFight_Trigger_Text_9:
# 105 "data//maps/PellucaCity/scripts.pory"
	.string "You heard 'em Mayor. Looks like my boys\n"
	.string "want me to prove that we own this city!\p"
	.string "Wanna try me? Right here?$"

PellucaCity_MayorFight_Trigger_Text_10:
# 117 "data//maps/PellucaCity/scripts.pory"
	.string "Nono - see, I'm not - look, I'm just\n"
	.string "asking for a little cooperation and -$"

PellucaCity_MayorFight_Trigger_Text_11:
# 125 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! Look at the wimp! Poor guy.$"

PellucaCity_MayorFight_Trigger_Text_12:
# 133 "data//maps/PellucaCity/scripts.pory"
	.string "Got it, mayor? You're not in charge here.\p"
	.string "I am! And this town belongs to the\n"
	.string "Qwilsquad!$"

PellucaCity_MayorFight_Trigger_Text_13:
# 159 "data//maps/PellucaCity/scripts.pory"
	.string "Oh trainer! Were you standing there the\n"
	.string "whole time?\p"
	.string "...\p"
	.string "I'm sorry you had to witness that.\n"
	.string "Y-you know, the restaurant here is\l"
	.string "famous! You should give it a try.$"

PellucaCity_MayorFight_Trigger_Text_14:
# 167 "data//maps/PellucaCity/scripts.pory"
	.string "Sigh...what will I do?$"

PellucaCity_Sailor_Entrance_Text_0:
# 208 "data//maps/PellucaCity/scripts.pory"
	.string "Beat it, kid! This is private property\n"
	.string "belonging to the Qwilsquad.$"

PellucaCity_Sailor_Multichoice_Text_0:
# 218 "data//maps/PellucaCity/scripts.pory"
	.string "Only Qwilsquad members can enter!$"

PellucaCity_Sailor_Multichoice_Text_1:
# 220 "data//maps/PellucaCity/scripts.pory"
	.string "What's a Qwilsquad?$"

PellucaCity_Sailor_Multichoice_Text_2:
# 220 "data//maps/PellucaCity/scripts.pory"
	.string "I'm a member!$"

PellucaCity_Sailor_QwilsquadExplanation_Text_0:
# 227 "data//maps/PellucaCity/scripts.pory"
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
# 232 "data//maps/PellucaCity/scripts.pory"
	.string "Heh? A pipsqueak like you is in the\n"
	.string "squad? You a new member or something?\l"
	.string "You got any proof?$"

PellucaCity_Sailor_MemberCheck_Text_1:
# 236 "data//maps/PellucaCity/scripts.pory"
	.string "Then beat it, kid!$"

PellucaCity_Sailor_MemberCheck_Text_2:
# 240 "data//maps/PellucaCity/scripts.pory"
	.string "Show me!$"

PellucaCity_Sailor_MemberCheck_Text_3:
# 256 "data//maps/PellucaCity/scripts.pory"
	.string "That don't look like no Qwilfish to me!\p"
	.string "Beat it, kid!$"

PellucaCity_Sailor_MemberAccepted_Text_0:
# 267 "data//maps/PellucaCity/scripts.pory"
	.string "Alright, now that's what I'm talking\n"
	.string "about! You're one of us, kid. Go on, get\l"
	.string "inside!$"

PellucaCity_Blocker_Text_0:
# 290 "data//maps/PellucaCity/scripts.pory"
	.string "This is our city! Got any problems?$"

PellucaCity_Blocker_Trigger_Text_0:
# 296 "data//maps/PellucaCity/scripts.pory"
	.string "Hey, kid! There's a toll if you wanna get\n"
	.string "out.\p"
	.string "Yeah, that's right! You gotta pay\n"
	.string "999999.\p"
	.string "Ain't got the money?\p"
	.string "Then get packing!$"

PellucaCityFlooded_SaveCitizen_Text_0:
# 359 "data//maps/PellucaCity/scripts.pory"
	.string "Thank you trainer, you saved me!$"

PellucaCityFlooded_MainEvent_Text_0:
# 377 "data//maps/PellucaCity/scripts.pory"
	.string "What on earth is this?$"

PellucaCityFlooded_MainEvent_Text_1:
# 388 "data//maps/PellucaCity/scripts.pory"
	.string "Citizen$"

PellucaCityFlooded_MainEvent_Text_2:
# 389 "data//maps/PellucaCity/scripts.pory"
	.string "What a disaster!\p"
	.string "How could we be so unlucky!$"

PellucaCityFlooded_MainEvent_Text_3:
# 391 "data//maps/PellucaCity/scripts.pory"
	.string "What happened?$"

PellucaCityFlooded_MainEvent_Text_4:
# 393 "data//maps/PellucaCity/scripts.pory"
	.string "A Mega Sharpedo came rampaging down\n"
	.string "from the Ivy River and kicked up a\l"
	.string "storm! The riverbanks have flooded. The\l"
	.string "city's underwater!$"

PellucaCity_Greta_Main_Text_0:
# 466 "data//maps/PellucaCity/scripts.pory"
	.string "Greta$"

PellucaCity_Greta_Main_Text_1:
# 467 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, it's you again, {PLAYER}! Fancy\n"
	.string "seeing you in these parts. Route 6 was a\l"
	.string "tough trek, eh?$"

PellucaCity_Greta_GottaGo_Text_0:
# 483 "data//maps/PellucaCity/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 513 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 514 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh, I love the smell of the river!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 519 "data//maps/PellucaCity/scripts.pory"
	.string "I grew up here on this cliff without my\n"
	.string "parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "Those grunts were really vicious to me.\n"
	.string "I was so scared I would lose Zorua!$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 525 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the Clefairy?$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 531 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah...I doubt he'd ever forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 537 "data//maps/PellucaCity/scripts.pory"
	.string "You're just trying to make me feel\n"
	.string "better, aren't you? I don't need your\l"
	.string "pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 542 "data//maps/PellucaCity/scripts.pory"
	.string "After getting kicked out of Team\n"
	.string "Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 548 "data//maps/PellucaCity/scripts.pory"
	.string "I want you to have this. As a thank you.\n"
	.string "For saving me - not just once, but so\l"
	.string "many times. You're a strong trainer, but\l"
	.string "more importantly - you're a good person.\l"
	.string "I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_8:
# 552 "data//maps/PellucaCity/scripts.pory"
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
# 566 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle's Zorua looks content. Life is\n"
	.string "more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 587 "data//maps/PellucaCity/scripts.pory"
	.string "Lycanroc is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 601 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 606 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "Pelluca Restaurant?$"

PellucaCity_NPC3_Text_0:
# 611 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in Mt. Mirroh but I\n"
	.string "can't go there without a Cable Car Pass.\l"
	.string "So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 616 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge is too small. It's nothing\n"
	.string "like the cycling roads in other regions!\l"
	.string "Why does the mayor even let us cycle\l"
	.string "then?$"

PellucaCity_NPC5_Text_0:
# 622 "data//maps/PellucaCity/scripts.pory"
	.string "Look over there...$"

PellucaCity_NPC5_Text_1:
# 628 "data//maps/PellucaCity/scripts.pory"
	.string "The Gym Leader of Pelluca City had her\n"
	.string "gym constructed on a separate island.$"

PellucaCity_NPC5_Text_2:
# 634 "data//maps/PellucaCity/scripts.pory"
	.string "Talk about entitlement!$"

PellucaCity_NPC6_Text_0:
# 640 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the Mirroh Base Camp?\n"
	.string "You'll have to take the cable car just\l"
	.string "past the Poké Mart.\p"
	.string "I heard they're closing the gym there\n"
	.string "though.$"

PellucaCity_NPC7_Text_0:
# 645 "data//maps/PellucaCity/scripts.pory"
	.string "There are no free tables at the\n"
	.string "restaurant! I should've made a\l"
	.string "reservation.$"

PellucaCity_NPC8_Text_0:
# 650 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "Mega Sharpedo's going to scare all the\l"
	.string "fish away? I wish our mayor would do\l"
	.string "something about it.$"

PellucaCity_Sealeo_Text_0:
# 658 "data//maps/PellucaCity/scripts.pory"
	.string "Sealeo wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 670 "data//maps/PellucaCity/scripts.pory"
	.string "This is the Pelluca Fishery! But it's\n"
	.string "closed due to the Mega Sharpedo\l"
	.string "attacks.$"

PellucaCity_WingullGirl_Text_0:
# 681 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "Wingulls over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 682 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 682 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 688 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a Wingull!$"

PellucaCity_WingullGirl_Text_4:
# 694 "data//maps/PellucaCity/scripts.pory"
	.string "The Wingull gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 698 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 706 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "Wingulls. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 711 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at Pokémon...that's poor\l"
	.string "parenting. The mayor should really do\l"
	.string "something but he's too incompetent.$"

PellucaCity_NPC10_Text_0:
# 724 "data//maps/PellucaCity/scripts.pory"
	.string "I ate too many apple tarts! I'm too full.\n"
	.string "Whoever said people have a second\l"
	.string "stomach for dessert was lying!$"

PellucaCity_NPC11_Text_0:
# 731 "data//maps/PellucaCity/scripts.pory"
	.string "Life is too short to worry!$"

PellucaCity_NPC11_Text_1:
# 735 "data//maps/PellucaCity/scripts.pory"
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
# 738 "data//maps/PellucaCity/scripts.pory"
	.string "It's time for me to let go.$"

PellucaCity_NPC12_Text_0:
# 744 "data//maps/PellucaCity/scripts.pory"
	.string "The mayor isn't maintaining the city one\n"
	.string "bit! My Stantler eating the overgrown\l"
	.string "flowers is actually contributing to\l"
	.string "city maintenance.$"

PellucaCity_Stantler_Text_0:
# 750 "data//maps/PellucaCity/scripts.pory"
	.string "Stantler is nonchalantly chomping on\n"
	.string "the flowers.$"

PellucaCityFlooded_TriggerText::
# 316 "data//maps/PellucaCity/scripts.pory"
	.string "I need to save the drowning citizens!$"
