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
	.byte 0


PellucaCity_MayorFight_Trigger::
# 25 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_MAYOR_FIGHT, PellucaCity_MayorFight_Trigger_2
# 27 "data//maps/PellucaCity/scripts.pory"
	lockall
# 30 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 31 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_MayorFight_Trigger_Movement_0
# 32 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 33 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 36 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_1
# 37 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 38 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 39 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 40 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_1
# 41 "data//maps/PellucaCity/scripts.pory"
	release
# 42 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 44 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_2
# 45 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 46 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 47 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 48 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_3
# 49 "data//maps/PellucaCity/scripts.pory"
	release
# 50 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 52 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_3
# 53 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 54 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 55 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 56 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_4
# 57 "data//maps/PellucaCity/scripts.pory"
	release
# 58 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 60 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_4
# 61 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 62 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 63 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 64 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_6
# 65 "data//maps/PellucaCity/scripts.pory"
	release
# 66 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 68 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_5
# 69 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 70 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 71 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 72 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_7
# 73 "data//maps/PellucaCity/scripts.pory"
	release
# 74 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 76 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_6
# 77 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_6
# 78 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 79 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 80 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_8
# 81 "data//maps/PellucaCity/scripts.pory"
	release
# 82 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 84 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_7
# 85 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 86 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 87 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 88 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_9
# 89 "data//maps/PellucaCity/scripts.pory"
	release
# 90 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 92 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_7
# 93 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 94 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 95 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_8
# 96 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 97 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 99 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 100 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_10
# 101 "data//maps/PellucaCity/scripts.pory"
	release
# 102 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 104 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_6
# 105 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_6
# 106 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 107 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 108 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_11
# 109 "data//maps/PellucaCity/scripts.pory"
	release
# 110 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 112 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_7
# 113 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 114 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 115 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_2
# 116 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_12
# 117 "data//maps/PellucaCity/scripts.pory"
	release
# 118 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 121 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 122 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 123 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 124 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_10
# 125 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 126 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_9
# 127 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_9
# 128 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_11
# 129 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 130 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S2, PellucaCity_MayorFight_Trigger_Movement_12
# 131 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S1, PellucaCity_MayorFight_Trigger_Movement_12
# 132 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S3, PellucaCity_MayorFight_Trigger_Movement_12
# 133 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 138 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_13
# 139 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 140 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 141 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 142 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_13
# 143 "data//maps/PellucaCity/scripts.pory"
	release
# 144 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 146 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_14
# 147 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 148 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 149 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_0
# 150 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_MayorFight_Trigger_Text_14
# 151 "data//maps/PellucaCity/scripts.pory"
	release
# 152 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 153 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_MayorFight_Trigger_Movement_15
# 154 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 155 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 159 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 160 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_MayorFight_Trigger_Movement_16
# 161 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 162 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 164 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_MAYOR
# 165 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S1
# 166 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S2
# 167 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S3
# 168 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_MAYOR_FIGHT
# 170 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_MayorFight_Trigger_2:
	end


PellucaCity_Sailor_Entrance::
# 187 "data//maps/PellucaCity/scripts.pory"
	lockall
# 188 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 190 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 191 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_Entrance_Text_0
# 192 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 0
	goto_if_eq PellucaCity_Sailor_Entrance_2
# 193 "data//maps/PellucaCity/scripts.pory"
	compare VAR_PELLUCA_MAYOR_QUEST, 1
	goto_if_eq PellucaCity_Sailor_Entrance_5
# 195 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_Multichoice
# 197 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_Entrance_2:
# 192 "data//maps/PellucaCity/scripts.pory"
	release
	end

PellucaCity_Sailor_Entrance_5:
# 193 "data//maps/PellucaCity/scripts.pory"
	release
	end


PellucaCity_Sailor_Multichoice::
# 202 "data//maps/PellucaCity/scripts.pory"
	message PellucaCity_Sailor_Multichoice_Text_0
# 203 "data//maps/PellucaCity/scripts.pory"
	waitmessage
# 204 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_Sailor_Multichoice_Text_1, PellucaCity_Sailor_Multichoice_Text_2
# 206 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_Multichoice_2
PellucaCity_Sailor_Multichoice_1:
# 207 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_Multichoice_4
	return

PellucaCity_Sailor_Multichoice_2:
# 206 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_QwilsquadExplanation
	goto PellucaCity_Sailor_Multichoice_1

PellucaCity_Sailor_Multichoice_4:
# 207 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberCheck
	return


PellucaCity_Sailor_QwilsquadExplanation::
# 211 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 212 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_QwilsquadExplanation_Text_0
# 213 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_Multichoice
	return


PellucaCity_Sailor_MemberCheck::
# 217 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 218 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_0, MSGBOX_YESNO
# 220 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_Sailor_MemberCheck_2
PellucaCity_Sailor_MemberCheck_1:
# 224 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_Sailor_MemberCheck_5
PellucaCity_Sailor_MemberCheck_4:
# 246 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_Sailor_MemberCheck_2:
# 221 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 222 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_1
	goto PellucaCity_Sailor_MemberCheck_1

PellucaCity_Sailor_MemberCheck_5:
# 225 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 226 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_2
# 227 "data//maps/PellucaCity/scripts.pory"
	release
# 230 "data//maps/PellucaCity/scripts.pory"
	special ChoosePartyMon
# 231 "data//maps/PellucaCity/scripts.pory"
	waitstate
# 232 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 233 "data//maps/PellucaCity/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 234 "data//maps/PellucaCity/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 236 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_QWILFISH_HISUI
	goto_if_eq PellucaCity_Sailor_MemberCheck_8
PellucaCity_Sailor_MemberCheck_7:
# 237 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, SPECIES_OVERQWIL
	goto_if_eq PellucaCity_Sailor_MemberCheck_11
PellucaCity_Sailor_MemberCheck_10:
# 239 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 240 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 241 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 242 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberCheck_Text_3
	goto PellucaCity_Sailor_MemberCheck_4

PellucaCity_Sailor_MemberCheck_8:
# 236 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_7

PellucaCity_Sailor_MemberCheck_11:
# 237 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Sailor_MemberAccepted
	goto PellucaCity_Sailor_MemberCheck_10


PellucaCity_Sailor_MemberAccepted::
# 251 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_7
# 252 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 253 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 254 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sailor_MemberAccepted_Text_0
# 255 "data//maps/PellucaCity/scripts.pory"
	release
# 256 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_ENTRANCE, PellucaCity_MayorFight_Trigger_Movement_11
# 257 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 258 "data//maps/PellucaCity/scripts.pory"
	playse SE_EXIT
# 259 "data//maps/PellucaCity/scripts.pory"
	removeobject LOCALID_S_ENTRANCE
# 261 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_QWILSQUAD_ENTRANCE
# 262 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Blocker::
# 277 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Text_0
	end


PellucaCity_Blocker_Trigger::
# 282 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_S_BLOCKER, PellucaCity_MayorFight_Trigger_Movement_7
# 283 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_MayorFight_Trigger_Text_5
# 284 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Blocker_Trigger_Text_0
# 285 "data//maps/PellucaCity/scripts.pory"
	release
# 286 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Blocker_Trigger_Movement_0
# 287 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 288 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Greta_Trigger0::
# 306 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger0_2
# 308 "data//maps/PellucaCity/scripts.pory"
	lockall
# 309 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger0_Movement_0
# 310 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 311 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger0_Movement_1
# 312 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 313 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger0_2:
	end


PellucaCity_Greta_Trigger1::
# 317 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger1_2
# 319 "data//maps/PellucaCity/scripts.pory"
	lockall
# 320 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger1_Movement_0
# 321 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 322 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger1_Movement_1
# 323 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 324 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger1_2:
	end


PellucaCity_Greta_Trigger2::
# 328 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger2_2
# 330 "data//maps/PellucaCity/scripts.pory"
	lockall
# 331 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger2_Movement_0
# 332 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 333 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger1_Movement_1
# 334 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 335 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger2_2:
	end


PellucaCity_Greta_Main::
# 341 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 342 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_Main_Text_1
# 343 "data//maps/PellucaCity/scripts.pory"
	release
# 344 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 345 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 346 "data//maps/PellucaCity/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 347 "data//maps/PellucaCity/scripts.pory"
	release
# 348 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 350 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 354 "data//maps/PellucaCity/scripts.pory"
	release
# 355 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_MayorFight_Trigger_Movement_7
# 356 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 357 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_Greta_Main_Text_0
# 358 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 359 "data//maps/PellucaCity/scripts.pory"
	release
# 360 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 361 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 362 "data//maps/PellucaCity/scripts.pory"
	removeobject 27
# 363 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 364 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 366 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 386 "data//maps/PellucaCity/scripts.pory"
	lockall
# 387 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_2
# 393 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 394 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2
# 395 "data//maps/PellucaCity/scripts.pory"
	release
# 396 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 397 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 398 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 399 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 400 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3, MSGBOX_YESNO
# 401 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_6
# 410 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 411 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 412 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 413 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_5:
# 415 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 416 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 417 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 418 "data//maps/PellucaCity/scripts.pory"
	release
# 419 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 420 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 421 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 422 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 423 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 424 "data//maps/PellucaCity/scripts.pory"
	release
# 425 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 426 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 427 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_8
# 428 "data//maps/PellucaCity/scripts.pory"
	release
# 429 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 430 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 431 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
PellucaCity_EventScripts_Gabrielle_1:
# 433 "data//maps/PellucaCity/scripts.pory"
	releaseall
	return

PellucaCity_EventScripts_Gabrielle_2:
# 388 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 389 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 390 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_1

PellucaCity_EventScripts_Gabrielle_6:
# 403 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 404 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 405 "data//maps/PellucaCity/scripts.pory"
	speakername PellucaCity_EventScripts_Gabrielle_Text_0
# 406 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 407 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_5


PellucaCity_Zorua::
# 438 "data//maps/PellucaCity/scripts.pory"
	lockall
# 439 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 440 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_NORMAL
# 441 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 442 "data//maps/PellucaCity/scripts.pory"
	release
# 443 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCity_Greta_Trigger1_Movement_1
# 444 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 445 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 461 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 462 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC1::
# 475 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_SYS_SURF_ENABLED
# 476 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC2::
# 481 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC3::
# 486 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC4::
# 491 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC5::
# 496 "data//maps/PellucaCity/scripts.pory"
	lockall
# 497 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 498 "data//maps/PellucaCity/scripts.pory"
	release
# 499 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 500 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 501 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 502 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 503 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_1
# 504 "data//maps/PellucaCity/scripts.pory"
	release
# 505 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 506 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 507 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 508 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 509 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_2, MSGBOX_NPC
# 510 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 515 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC7::
# 520 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC8::
# 525 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_Sealeo::
# 530 "data//maps/PellucaCity/scripts.pory"
	lockall
# 531 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 532 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 533 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0, MSGBOX_NPC
# 534 "data//maps/PellucaCity/scripts.pory"
	release
# 535 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_MayorFight_Trigger_Movement_4
# 536 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 537 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 545 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullGirl::
# 554 "data//maps/PellucaCity/scripts.pory"
	lock
# 555 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 556 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 557 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 559 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 573 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5, MSGBOX_NPC
PellucaCity_WingullGirl_1:
# 576 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 561 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_MayorFight_Trigger_Movement_5
# 562 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_MayorFight_Trigger_Movement_5
# 563 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 564 "data//maps/PellucaCity/scripts.pory"
	release
# 565 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_MayorFight_Trigger_Movement_7
# 566 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_MayorFight_Trigger_Movement_7
# 567 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 568 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 569 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 570 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 571 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 581 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullCritique::
# 586 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC10::
# 599 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC10_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC11::
# 605 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_CITY_TM_GIVER, PellucaCity_NPC11_2
# 610 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_1, MSGBOX_NPC
# 611 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_TM01
# 612 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_CITY_TM_GIVER
# 613 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_2, MSGBOX_NPC
	end

PellucaCity_NPC11_2:
# 606 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC12::
# 619 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC12_Text_0, MSGBOX_NPC
	end


PellucaCity_Stantler::
# 624 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 625 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Stantler_Text_0, MSGBOX_NPC
	end


# 31 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_0:
# 31 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 31 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 31 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 31 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 36 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_1:
# 36 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 36 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 44 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_2:
# 44 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 44 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 52 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_3:
# 52 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_left
	step_end

# 60 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_4:
# 60 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 68 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_5:
# 68 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 76 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_6:
# 76 "data//maps/PellucaCity/scripts.pory"
	jump_in_place_right
	step_end

# 84 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_7:
# 84 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 95 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_8:
# 95 "data//maps/PellucaCity/scripts.pory"
	walk_right
# 95 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 121 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_9:
# 121 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 124 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_10:
# 124 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 128 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_11:
# 128 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 130 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_12:
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 130 "data//maps/PellucaCity/scripts.pory"
	walk_left
	step_end

# 138 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_13:
# 138 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
# 138 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

# 146 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_14:
# 146 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 146 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 146 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 146 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 146 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 146 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 153 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_15:
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_down
# 153 "data//maps/PellucaCity/scripts.pory"
	walk_down
	step_end

# 160 "data//maps/PellucaCity/scripts.pory"
PellucaCity_MayorFight_Trigger_Movement_16:
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 160 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 286 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Blocker_Trigger_Movement_0:
# 286 "data//maps/PellucaCity/scripts.pory"
	walk_right
	step_end

# 309 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_0:
# 309 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 309 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 309 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 309 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 309 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 309 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 309 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 311 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_1:
# 311 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 320 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_0:
# 320 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 320 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 320 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 320 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 320 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 320 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 320 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 320 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 322 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_1:
# 322 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 331 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger2_Movement_0:
# 331 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 331 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 331 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 331 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 331 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 331 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 331 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 360 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
# 360 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 360 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 360 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 360 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 360 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 360 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 360 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 360 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 500 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 500 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 500 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 500 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 500 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 500 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 500 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 500 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 506 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 506 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 506 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 506 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 506 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 506 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 506 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 506 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

PellucaCity_MayorFight_Trigger_Text_0:
# 39 "data//maps/PellucaCity/scripts.pory"
	.string "Mayor$"

PellucaCity_MayorFight_Trigger_Text_1:
# 40 "data//maps/PellucaCity/scripts.pory"
	.string "But you can't be doing this to our\n"
	.string "citizens! This is our city!$"

PellucaCity_MayorFight_Trigger_Text_2:
# 47 "data//maps/PellucaCity/scripts.pory"
	.string "Q-squad Boss$"

PellucaCity_MayorFight_Trigger_Text_3:
# 48 "data//maps/PellucaCity/scripts.pory"
	.string "I've told you a hundred times, you\n"
	.string "paper-pushing wimp! You ain't doing a\l"
	.string "single thing right for our city, so don't\l"
	.string "you dare mess with the Qwilsquad!\p"
	.string "This is our turf - we don't give a hoot\n"
	.string "about you and your title!$"

PellucaCity_MayorFight_Trigger_Text_4:
# 56 "data//maps/PellucaCity/scripts.pory"
	.string "No! Enough is enough! I'm putting my\n"
	.string "foot down.\p"
	.string "You and your lot lot aren't allowed in\n"
	.string "Pelluca City any more!$"

PellucaCity_MayorFight_Trigger_Text_5:
# 63 "data//maps/PellucaCity/scripts.pory"
	.string "Q-squad Grunt$"

PellucaCity_MayorFight_Trigger_Text_6:
# 64 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! What a lame mayor!$"

PellucaCity_MayorFight_Trigger_Text_7:
# 72 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah! He really thinks he can tell us\n"
	.string "what to do!$"

PellucaCity_MayorFight_Trigger_Text_8:
# 80 "data//maps/PellucaCity/scripts.pory"
	.string "Go on boss - teach him a lesson!$"

PellucaCity_MayorFight_Trigger_Text_9:
# 88 "data//maps/PellucaCity/scripts.pory"
	.string "You heard 'em Mayor. Looks like my boys\n"
	.string "want me to prove that we own this city!\p"
	.string "Wanna try me? Right here?$"

PellucaCity_MayorFight_Trigger_Text_10:
# 100 "data//maps/PellucaCity/scripts.pory"
	.string "Nono - see, I'm not - look, I'm just\n"
	.string "asking for a little cooperation and -$"

PellucaCity_MayorFight_Trigger_Text_11:
# 108 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! Look at the wimp! Poor guy.$"

PellucaCity_MayorFight_Trigger_Text_12:
# 116 "data//maps/PellucaCity/scripts.pory"
	.string "Got it, mayor? You're not in charge here.\p"
	.string "I am! And this town belongs to the\n"
	.string "Qwilsquad!$"

PellucaCity_MayorFight_Trigger_Text_13:
# 142 "data//maps/PellucaCity/scripts.pory"
	.string "Oh trainer! Were you standing there the\n"
	.string "whole time?\p"
	.string "...\p"
	.string "I'm sorry you had to witness that.\n"
	.string "Y-you know, the restaurant here is\l"
	.string "famous! You should give it a try.$"

PellucaCity_MayorFight_Trigger_Text_14:
# 150 "data//maps/PellucaCity/scripts.pory"
	.string "Sigh...what will I do?$"

PellucaCity_Sailor_Entrance_Text_0:
# 191 "data//maps/PellucaCity/scripts.pory"
	.string "Beat it, kid! This is private property\n"
	.string "belonging to the Qwilsquad.$"

PellucaCity_Sailor_Multichoice_Text_0:
# 202 "data//maps/PellucaCity/scripts.pory"
	.string "Only Qwilsquad members can enter!$"

PellucaCity_Sailor_Multichoice_Text_1:
# 204 "data//maps/PellucaCity/scripts.pory"
	.string "What's a Qwilsquad?$"

PellucaCity_Sailor_Multichoice_Text_2:
# 204 "data//maps/PellucaCity/scripts.pory"
	.string "I'm a member!$"

PellucaCity_Sailor_QwilsquadExplanation_Text_0:
# 212 "data//maps/PellucaCity/scripts.pory"
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
# 218 "data//maps/PellucaCity/scripts.pory"
	.string "Heh? A pipsqueak like you is in the\n"
	.string "squad? You a new member or something?\l"
	.string "You got any proof?$"

PellucaCity_Sailor_MemberCheck_Text_1:
# 222 "data//maps/PellucaCity/scripts.pory"
	.string "Then beat it, kid!$"

PellucaCity_Sailor_MemberCheck_Text_2:
# 226 "data//maps/PellucaCity/scripts.pory"
	.string "Show me!$"

PellucaCity_Sailor_MemberCheck_Text_3:
# 242 "data//maps/PellucaCity/scripts.pory"
	.string "That don't look like no Qwilfish to me!\p"
	.string "Beat it, kid!$"

PellucaCity_Sailor_MemberAccepted_Text_0:
# 254 "data//maps/PellucaCity/scripts.pory"
	.string "Alright, now that's what I'm talking\n"
	.string "about! You're one of us, kid. Go on, get\l"
	.string "inside!$"

PellucaCity_Blocker_Text_0:
# 277 "data//maps/PellucaCity/scripts.pory"
	.string "This is our city! Got any problems?$"

PellucaCity_Blocker_Trigger_Text_0:
# 284 "data//maps/PellucaCity/scripts.pory"
	.string "Hey, kid! There's a toll if you wanna get\n"
	.string "out.\p"
	.string "Yeah, that's right! You gotta pay\n"
	.string "999999.\p"
	.string "Ain't got the money?\p"
	.string "Then get packing!$"

PellucaCity_Greta_Main_Text_0:
# 341 "data//maps/PellucaCity/scripts.pory"
	.string "Greta$"

PellucaCity_Greta_Main_Text_1:
# 342 "data//maps/PellucaCity/scripts.pory"
	.string "Oh, it's you again, {PLAYER}! Fancy\n"
	.string "seeing you in these parts. Route 6 was a\l"
	.string "tough trek, eh?$"

PellucaCity_Greta_GottaGo_Text_0:
# 358 "data//maps/PellucaCity/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 388 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 389 "data//maps/PellucaCity/scripts.pory"
	.string "Ahh, I love the smell of the river!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 394 "data//maps/PellucaCity/scripts.pory"
	.string "I grew up here on this cliff without my\n"
	.string "parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "Those grunts were really vicious to me.\n"
	.string "I was so scared I would lose Zorua!$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 400 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the Clefairy?$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 406 "data//maps/PellucaCity/scripts.pory"
	.string "Yeah...I doubt he'd ever forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 412 "data//maps/PellucaCity/scripts.pory"
	.string "You're just trying to make me feel\n"
	.string "better, aren't you? I don't need your\l"
	.string "pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 417 "data//maps/PellucaCity/scripts.pory"
	.string "After getting kicked out of Team\n"
	.string "Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 423 "data//maps/PellucaCity/scripts.pory"
	.string "I want you to have this. As a thank you.\n"
	.string "For saving me - not just once, but so\l"
	.string "many times. You're a strong trainer, but\l"
	.string "more importantly - you're a good person.\l"
	.string "I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_8:
# 427 "data//maps/PellucaCity/scripts.pory"
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
# 441 "data//maps/PellucaCity/scripts.pory"
	.string "Gabrielle's Zorua looks content. Life is\n"
	.string "more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 462 "data//maps/PellucaCity/scripts.pory"
	.string "Lycanroc is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 476 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 481 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "Pelluca Restaurant?$"

PellucaCity_NPC3_Text_0:
# 486 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in Mt. Mirroh but I\n"
	.string "can't go there without a Cable Car Pass.\l"
	.string "So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 491 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge is too small. It's nothing\n"
	.string "like the cycling roads in other regions!\l"
	.string "Why does the mayor even let us cycle\l"
	.string "then?$"

PellucaCity_NPC5_Text_0:
# 497 "data//maps/PellucaCity/scripts.pory"
	.string "Look over there...$"

PellucaCity_NPC5_Text_1:
# 503 "data//maps/PellucaCity/scripts.pory"
	.string "The Gym Leader of Pelluca City had her\n"
	.string "gym constructed on a separate island.$"

PellucaCity_NPC5_Text_2:
# 509 "data//maps/PellucaCity/scripts.pory"
	.string "Talk about entitlement!$"

PellucaCity_NPC6_Text_0:
# 515 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the Mirroh Base Camp?\n"
	.string "You'll have to take the cable car just\l"
	.string "past the Poké Mart.\p"
	.string "I heard they're closing the gym there\n"
	.string "though.$"

PellucaCity_NPC7_Text_0:
# 520 "data//maps/PellucaCity/scripts.pory"
	.string "There are no free tables at the\n"
	.string "restaurant! I should've made a\l"
	.string "reservation.$"

PellucaCity_NPC8_Text_0:
# 525 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "Mega Sharpedo's going to scare all the\l"
	.string "fish away? I wish our mayor would do\l"
	.string "something about it.$"

PellucaCity_Sealeo_Text_0:
# 533 "data//maps/PellucaCity/scripts.pory"
	.string "Sealeo wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 545 "data//maps/PellucaCity/scripts.pory"
	.string "This is the Pelluca Fishery! But it's\n"
	.string "closed due to the Mega Sharpedo\l"
	.string "attacks.$"

PellucaCity_WingullGirl_Text_0:
# 556 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "Wingulls over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 557 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 557 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 563 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a Wingull!$"

PellucaCity_WingullGirl_Text_4:
# 569 "data//maps/PellucaCity/scripts.pory"
	.string "The Wingull gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 573 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 581 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "Wingulls. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 586 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at Pokémon...that's poor\l"
	.string "parenting. The mayor should really do\l"
	.string "something but he's too incompetent.$"

PellucaCity_NPC10_Text_0:
# 599 "data//maps/PellucaCity/scripts.pory"
	.string "I ate too many apple tarts! I'm too full.\n"
	.string "Whoever said people have a second\l"
	.string "stomach for dessert was lying!$"

PellucaCity_NPC11_Text_0:
# 606 "data//maps/PellucaCity/scripts.pory"
	.string "Life is too short to worry!$"

PellucaCity_NPC11_Text_1:
# 610 "data//maps/PellucaCity/scripts.pory"
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
# 613 "data//maps/PellucaCity/scripts.pory"
	.string "It's time for me to let go.$"

PellucaCity_NPC12_Text_0:
# 619 "data//maps/PellucaCity/scripts.pory"
	.string "The mayor isn't maintaining the city one\n"
	.string "bit! My Stantler eating the overgrown\l"
	.string "flowers is actually contributing to\l"
	.string "city maintenance.$"

PellucaCity_Stantler_Text_0:
# 625 "data//maps/PellucaCity/scripts.pory"
	.string "Stantler is nonchalantly chomping on\n"
	.string "the flowers.$"
