# 1 "data//maps/MtCeram/scripts.pory"

# 2 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTKOHLA, 19
# 3 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT1, 20
# 4 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT2, 21
# 5 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_TOPGRUNT1, 10
# 6 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_TOPGRUNT2, 9
# 7 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_TOPKOHLA, 22
# 8 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_GAB, 5

MtCeram_MapScripts::
	.byte 0


MtCeram_Charizard::
# 18 "data//maps/MtCeram/scripts.pory"
	lockall
# 22 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_0
# 23 "data//maps/MtCeram/scripts.pory"
	releaseall
# 24 "data//maps/MtCeram/scripts.pory"
	end
# 29 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_1, MSGBOX_YESNO
# 31 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtCeram_Charizard_2
# 67 "data//maps/MtCeram/scripts.pory"
	release
MtCeram_Charizard_1:
# 69 "data//maps/MtCeram/scripts.pory"
	releaseall
	end

MtCeram_Charizard_2:
# 33 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_2
# 34 "data//maps/MtCeram/scripts.pory"
	release
# 35 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_0
# 36 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 37 "data//maps/MtCeram/scripts.pory"
	delay 30
# 38 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_1
# 39 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 40 "data//maps/MtCeram/scripts.pory"
	delay 60
# 41 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_2
# 42 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 43 "data//maps/MtCeram/scripts.pory"
	delay 60
# 44 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_3
# 45 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 46 "data//maps/MtCeram/scripts.pory"
	delay 16
# 47 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 48 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_3
# 49 "data//maps/MtCeram/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 48
# 50 "data//maps/MtCeram/scripts.pory"
	dowildbattle
# 53 "data//maps/MtCeram/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtCeram_Charizard_6
MtCeram_Charizard_5:
# 58 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtCeram_Charizard_9
MtCeram_Charizard_8:
# 62 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtCeram_Charizard_11
	goto MtCeram_Charizard_1

MtCeram_Charizard_6:
# 55 "data//maps/MtCeram/scripts.pory"
	removeobject 18
# 56 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_5

MtCeram_Charizard_9:
# 59 "data//maps/MtCeram/scripts.pory"
	removeobject 18
# 60 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_8

MtCeram_Charizard_11:
# 63 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_4
# 64 "data//maps/MtCeram/scripts.pory"
	release
	goto MtCeram_Charizard_1


MtCeram_Eavesdrop_Trigger0::
# 80 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger0_2
# 81 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 82 "data//maps/MtCeram/scripts.pory"
	lockall
# 83 "data//maps/MtCeram/scripts.pory"
	delay 16
# 84 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 85 "data//maps/MtCeram/scripts.pory"
	delay 16
# 87 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 88 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 89 "data//maps/MtCeram/scripts.pory"
	release
# 91 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger0_Movement_1
# 92 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 94 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger0_2:
	end


MtCeram_Eavesdrop_Trigger1::
# 99 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger1_2
# 100 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 101 "data//maps/MtCeram/scripts.pory"
	lockall
# 102 "data//maps/MtCeram/scripts.pory"
	delay 16
# 103 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 104 "data//maps/MtCeram/scripts.pory"
	delay 16
# 106 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 107 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 108 "data//maps/MtCeram/scripts.pory"
	release
# 110 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger1_Movement_0
# 111 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 113 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger1_2:
	end


MtCeram_Eavesdrop_Trigger2::
# 118 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger2_2
# 119 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 120 "data//maps/MtCeram/scripts.pory"
	lockall
# 121 "data//maps/MtCeram/scripts.pory"
	delay 16
# 122 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 123 "data//maps/MtCeram/scripts.pory"
	delay 16
# 125 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 126 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 127 "data//maps/MtCeram/scripts.pory"
	release
# 129 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger2_Movement_0
# 130 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 132 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger2_2:
	end


MtCeram_Eavesdrop_Trigger3::
# 137 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger3_2
# 138 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 139 "data//maps/MtCeram/scripts.pory"
	lockall
# 140 "data//maps/MtCeram/scripts.pory"
	delay 16
# 141 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 142 "data//maps/MtCeram/scripts.pory"
	delay 16
# 144 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 145 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 146 "data//maps/MtCeram/scripts.pory"
	release
# 148 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger3_Movement_0
# 149 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 151 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger3_2:
	end


MtCeram_EventScript_Eavesdrop::
# 157 "data//maps/MtCeram/scripts.pory"
	lockall
# 158 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_0
# 160 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 161 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_0
# 162 "data//maps/MtCeram/scripts.pory"
	release
# 164 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 165 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_1
# 166 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 167 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 170 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 171 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 172 "data//maps/MtCeram/scripts.pory"
	delay 16
# 173 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 174 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_2
# 175 "data//maps/MtCeram/scripts.pory"
	release
# 176 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 177 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 178 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_4
# 179 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 180 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 181 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_5
# 182 "data//maps/MtCeram/scripts.pory"
	release
# 183 "data//maps/MtCeram/scripts.pory"
	delay 16
# 184 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_4
# 185 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 186 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 187 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_6
# 188 "data//maps/MtCeram/scripts.pory"
	release
# 189 "data//maps/MtCeram/scripts.pory"
	delay 8
# 190 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 191 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 192 "data//maps/MtCeram/scripts.pory"
	delay 16
# 193 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 194 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_7
# 195 "data//maps/MtCeram/scripts.pory"
	release
# 198 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_5
# 199 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_5
# 200 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 203 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT1
# 204 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT2
# 205 "data//maps/MtCeram/scripts.pory"
	delay 8
# 208 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 209 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_6
# 210 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 211 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 213 "data//maps/MtCeram/scripts.pory"
	delay 8
# 216 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_7
# 217 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 218 "data//maps/MtCeram/scripts.pory"
	delay 16
# 219 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 220 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_8
# 221 "data//maps/MtCeram/scripts.pory"
	release
# 224 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_8
# 225 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 226 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 228 "data//maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 230 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 233 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_BeforePeak_Trigger0::
# 262 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger0_2
# 263 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 264 "data//maps/MtCeram/scripts.pory"
	lockall
# 265 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger0_Movement_0
# 266 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 267 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger0_2:
	end


MtCeram_BeforePeak_Trigger1::
# 272 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger1_2
# 274 "data//maps/MtCeram/scripts.pory"
	lockall
# 275 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 276 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger1_Movement_0
# 277 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 278 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger1_2:
	end


MtCeram_EventScript_BeforePeakBattle::
# 285 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_0
# 286 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 287 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 288 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_0
# 289 "data//maps/MtCeram/scripts.pory"
	release
# 290 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 291 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 292 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 293 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 294 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_1
# 295 "data//maps/MtCeram/scripts.pory"
	release
# 296 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 297 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 298 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 299 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_2
# 300 "data//maps/MtCeram/scripts.pory"
	release
# 301 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 302 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 303 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 304 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 305 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_3
# 306 "data//maps/MtCeram/scripts.pory"
	release
# 307 "data//maps/MtCeram/scripts.pory"
	delay 16
# 309 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 310 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 311 "data//maps/MtCeram/scripts.pory"
	delay 16
# 312 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_Charizard_Movement_0
# 313 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_Charizard_Movement_0
# 314 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 315 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 316 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 317 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_4
# 318 "data//maps/MtCeram/scripts.pory"
	release
# 321 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 322 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_5
# 323 "data//maps/MtCeram/scripts.pory"
	release
# 324 "data//maps/MtCeram/scripts.pory"
	delay 8
# 325 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_2
# 326 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 327 "data//maps/MtCeram/scripts.pory"
	delay 8
# 328 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 329 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_6
# 330 "data//maps/MtCeram/scripts.pory"
	release
# 331 "data//maps/MtCeram/scripts.pory"
	fadeoutbgm 0
# 334 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 335 "data//maps/MtCeram/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 336 "data//maps/MtCeram/scripts.pory"
	waitse
# 337 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 338 "data//maps/MtCeram/scripts.pory"
	waitmoncry
# 339 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 340 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_7
# 341 "data//maps/MtCeram/scripts.pory"
	release
# 342 "data//maps/MtCeram/scripts.pory"
	delay 8
# 343 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 344 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_8
# 345 "data//maps/MtCeram/scripts.pory"
	release
# 346 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 347 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 349 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_3
# 350 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 354 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 355 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_9
# 356 "data//maps/MtCeram/scripts.pory"
	release
# 357 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_4
# 358 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 359 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPKOHLA
# 362 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 363 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 364 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 365 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 366 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_10
# 367 "data//maps/MtCeram/scripts.pory"
	release
# 368 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_5
# 369 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 370 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 371 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_11
# 372 "data//maps/MtCeram/scripts.pory"
	release
# 373 "data//maps/MtCeram/scripts.pory"
	delay 8
# 374 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 375 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_12
# 376 "data//maps/MtCeram/scripts.pory"
	release
# 378 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_EventScript_BeforePeakBattle_Movement_6
# 379 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 382 "data//maps/MtCeram/scripts.pory"
	trainerbattle_no_intro TRAINER_MTCERAM_GRUNT_DOUBLE, MtCeram_EventScript_BeforePeakBattle_Text_13
# 387 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 388 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_14
# 389 "data//maps/MtCeram/scripts.pory"
	release
# 390 "data//maps/MtCeram/scripts.pory"
	delay 8
# 391 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 392 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_15
# 393 "data//maps/MtCeram/scripts.pory"
	release
# 394 "data//maps/MtCeram/scripts.pory"
	delay 8
# 395 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 396 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_16
# 397 "data//maps/MtCeram/scripts.pory"
	release
# 400 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 401 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT1
# 402 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT2
# 403 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_GAB
# 404 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 406 "data//maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 409 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_PEAK
# 411 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_TrainerBattle_A::
# 429 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_A, MtCeram_TrainerBattle_A_Text_0, MtCeram_TrainerBattle_A_Text_1
# 430 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_A_Text_2
# 431 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_B::
# 437 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_B, MtCeram_TrainerBattle_B_Text_0, MtCeram_TrainerBattle_B_Text_1
# 438 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_B_Text_2
# 439 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_C::
# 445 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_C, MtCeram_TrainerBattle_C_Text_0, MtCeram_TrainerBattle_C_Text_1
# 446 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_C_Text_2
# 447 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_D::
# 453 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_D, MtCeram_TrainerBattle_D_Text_0, MtCeram_TrainerBattle_D_Text_1
# 454 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_D_Text_2
# 455 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT1::
# 460 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT1, MtCeram_TrainerBattle_GRUNT1_Text_0, MtCeram_TrainerBattle_GRUNT1_Text_1
# 461 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT1_Text_2
# 462 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT2::
# 468 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT2, MtCeram_TrainerBattle_GRUNT2_Text_0, MtCeram_TrainerBattle_GRUNT2_Text_1
# 469 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT2_Text_2
# 470 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_EventScript_NPC1::
# 492 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC1_Text_0, MSGBOX_NPC
	end


MtCeram_EventScript_NPC2::
# 498 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC2_Text_0, MSGBOX_NPC
	end


MtCeram_EventScript_NPC3::
# 504 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_FRESH_WATER, MtCeram_EventScript_NPC3_2
# 507 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_1, MSGBOX_NPC
# 508 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 509 "data//maps/MtCeram/scripts.pory"
	release
# 510 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_FRESH_WATER
MtCeram_EventScript_NPC3_1:
	end

MtCeram_EventScript_NPC3_2:
# 505 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_0, MSGBOX_NPC
	goto MtCeram_EventScript_NPC3_1


MtCeram_EventScript_NPCNurse::
# 519 "data//maps/MtCeram/scripts.pory"
	lockall
# 520 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 522 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_0
# 523 "data//maps/MtCeram/scripts.pory"
	release
# 524 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 525 "data//maps/MtCeram/scripts.pory"
	applymovement 24, MtCeram_EventScript_NPCNurse_Movement_0
# 526 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 527 "data//maps/MtCeram/scripts.pory"
	delay 24
# 528 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_1
# 529 "data//maps/MtCeram/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 531 "data//maps/MtCeram/scripts.pory"
	releaseall
	end


MtCeram_EventScript_Gabrielle::
# 536 "data//maps/MtCeram/scripts.pory"
	lockall
# 537 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Gabrielle_Text_0
# 538 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_1
# 539 "data//maps/MtCeram/scripts.pory"
	release
# 540 "data//maps/MtCeram/scripts.pory"
	delay 30
# 541 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_Charizard_Movement_0
# 542 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 543 "data//maps/MtCeram/scripts.pory"
	release
# 544 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 545 "data//maps/MtCeram/scripts.pory"
	delay 20
# 546 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Gabrielle_Text_0
# 547 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_2
# 548 "data//maps/MtCeram/scripts.pory"
	release
# 549 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_EventScript_Gabrielle_Movement_0
# 550 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 551 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


# 35 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_0:
# 35 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 38 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_1:
# 38 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
# 38 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 41 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_2:
# 41 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
# 41 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 44 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_3:
# 44 "data//maps/MtCeram/scripts.pory"
	face_down
# 44 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 84 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_0:
# 84 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 84 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 91 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_1:
# 91 "data//maps/MtCeram/scripts.pory"
	walk_up
# 91 "data//maps/MtCeram/scripts.pory"
	walk_left
# 91 "data//maps/MtCeram/scripts.pory"
	walk_left
# 91 "data//maps/MtCeram/scripts.pory"
	walk_up
# 91 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 110 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger1_Movement_0:
# 110 "data//maps/MtCeram/scripts.pory"
	walk_up
# 110 "data//maps/MtCeram/scripts.pory"
	walk_left
# 110 "data//maps/MtCeram/scripts.pory"
	walk_left
# 110 "data//maps/MtCeram/scripts.pory"
	walk_left
# 110 "data//maps/MtCeram/scripts.pory"
	walk_up
# 110 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 129 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger2_Movement_0:
# 129 "data//maps/MtCeram/scripts.pory"
	walk_up
# 129 "data//maps/MtCeram/scripts.pory"
	walk_left
# 129 "data//maps/MtCeram/scripts.pory"
	walk_left
# 129 "data//maps/MtCeram/scripts.pory"
	walk_left
# 129 "data//maps/MtCeram/scripts.pory"
	walk_left
# 129 "data//maps/MtCeram/scripts.pory"
	walk_up
# 129 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 148 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger3_Movement_0:
# 148 "data//maps/MtCeram/scripts.pory"
	walk_up
# 148 "data//maps/MtCeram/scripts.pory"
	walk_left
# 148 "data//maps/MtCeram/scripts.pory"
	walk_left
# 148 "data//maps/MtCeram/scripts.pory"
	walk_left
# 148 "data//maps/MtCeram/scripts.pory"
	walk_left
# 148 "data//maps/MtCeram/scripts.pory"
	walk_left
# 148 "data//maps/MtCeram/scripts.pory"
	walk_up
# 148 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 158 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_0:
# 158 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 165 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_1:
# 165 "data//maps/MtCeram/scripts.pory"
	walk_right
# 165 "data//maps/MtCeram/scripts.pory"
	walk_right
# 165 "data//maps/MtCeram/scripts.pory"
	walk_up
# 165 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 170 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_2:
# 170 "data//maps/MtCeram/scripts.pory"
	jump_in_place_right
	step_end

# 176 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_3:
# 176 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
	step_end

# 184 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_4:
# 184 "data//maps/MtCeram/scripts.pory"
	jump_in_place_left
	step_end

# 198 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_5:
# 198 "data//maps/MtCeram/scripts.pory"
	walk_right
# 198 "data//maps/MtCeram/scripts.pory"
	walk_right
# 198 "data//maps/MtCeram/scripts.pory"
	walk_right
# 198 "data//maps/MtCeram/scripts.pory"
	walk_right
# 198 "data//maps/MtCeram/scripts.pory"
	walk_right
# 198 "data//maps/MtCeram/scripts.pory"
	walk_right
# 198 "data//maps/MtCeram/scripts.pory"
	walk_right
# 198 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 209 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_6:
# 209 "data//maps/MtCeram/scripts.pory"
	walk_down
# 209 "data//maps/MtCeram/scripts.pory"
	walk_down
# 209 "data//maps/MtCeram/scripts.pory"
	walk_left
# 209 "data//maps/MtCeram/scripts.pory"
	walk_left
	step_end

# 216 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_7:
# 216 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 216 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 224 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_8:
# 224 "data//maps/MtCeram/scripts.pory"
	walk_down
# 224 "data//maps/MtCeram/scripts.pory"
	walk_right
# 224 "data//maps/MtCeram/scripts.pory"
	walk_right
# 224 "data//maps/MtCeram/scripts.pory"
	walk_right
# 224 "data//maps/MtCeram/scripts.pory"
	walk_right
# 224 "data//maps/MtCeram/scripts.pory"
	walk_up
# 224 "data//maps/MtCeram/scripts.pory"
	walk_up
# 224 "data//maps/MtCeram/scripts.pory"
	walk_right
# 224 "data//maps/MtCeram/scripts.pory"
	walk_right
# 224 "data//maps/MtCeram/scripts.pory"
	walk_right
# 224 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 265 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger0_Movement_0:
# 265 "data//maps/MtCeram/scripts.pory"
	walk_up
# 265 "data//maps/MtCeram/scripts.pory"
	walk_up
# 265 "data//maps/MtCeram/scripts.pory"
	walk_up
# 265 "data//maps/MtCeram/scripts.pory"
	walk_left
# 265 "data//maps/MtCeram/scripts.pory"
	walk_left
# 265 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 276 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger1_Movement_0:
# 276 "data//maps/MtCeram/scripts.pory"
	walk_up
# 276 "data//maps/MtCeram/scripts.pory"
	walk_up
# 276 "data//maps/MtCeram/scripts.pory"
	walk_up
# 276 "data//maps/MtCeram/scripts.pory"
	walk_left
# 276 "data//maps/MtCeram/scripts.pory"
	walk_left
# 276 "data//maps/MtCeram/scripts.pory"
	walk_left
# 276 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 285 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_0:
# 285 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
	step_end

# 309 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_1:
# 309 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 325 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_2:
# 325 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 349 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_3:
# 349 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 357 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_4:
# 357 "data//maps/MtCeram/scripts.pory"
	walk_down
# 357 "data//maps/MtCeram/scripts.pory"
	walk_right
# 357 "data//maps/MtCeram/scripts.pory"
	walk_right
# 357 "data//maps/MtCeram/scripts.pory"
	walk_down
# 357 "data//maps/MtCeram/scripts.pory"
	walk_down
# 357 "data//maps/MtCeram/scripts.pory"
	walk_down
# 357 "data//maps/MtCeram/scripts.pory"
	walk_down
# 357 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 368 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_5:
# 368 "data//maps/MtCeram/scripts.pory"
	jump_in_place_down
# 368 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 378 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_6:
# 378 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 525 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_NPCNurse_Movement_0:
# 525 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
# 525 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 549 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Gabrielle_Movement_0:
# 549 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

MtCeram_Charizard_Text_0:
# 22 "data//maps/MtCeram/scripts.pory"
	.string "It's asleep...$"

MtCeram_Charizard_Text_1:
# 29 "data//maps/MtCeram/scripts.pory"
	.string "It's asleep...wake it up?$"

MtCeram_Charizard_Text_2:
# 33 "data//maps/MtCeram/scripts.pory"
	.string "...$"

MtCeram_Charizard_Text_3:
# 48 "data//maps/MtCeram/scripts.pory"
	.string "The Charizard is furious!$"

MtCeram_Charizard_Text_4:
# 63 "data//maps/MtCeram/scripts.pory"
	.string "The Charizard grunts and falls back\n"
	.string "asleep. Better not disturb it again!$"

MtCeram_Eavesdrop_Trigger0_Text_0:
# 87 "data//maps/MtCeram/scripts.pory"
	.string "Kohla$"

MtCeram_Eavesdrop_Trigger0_Text_1:
# 88 "data//maps/MtCeram/scripts.pory"
	.string "{PLAYER} - what are you doing? Come\n"
	.string "here, you idiot!$"

MtCeram_EventScript_Eavesdrop_Text_0:
# 161 "data//maps/MtCeram/scripts.pory"
	.string "I've been spying on those two Team\n"
	.string "Somber Grunts. Don't make a sound!$"

MtCeram_EventScript_Eavesdrop_Text_1:
# 173 "data//maps/MtCeram/scripts.pory"
	.string "Grunt A$"

MtCeram_EventScript_Eavesdrop_Text_2:
# 174 "data//maps/MtCeram/scripts.pory"
	.string "...boss told us to be EXTRA careful not\n"
	.string "to let anyone up the mountain.$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 177 "data//maps/MtCeram/scripts.pory"
	.string "Grunt B$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 178 "data//maps/MtCeram/scripts.pory"
	.string "But where's the boss? And Gabrielle?$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 181 "data//maps/MtCeram/scripts.pory"
	.string "The boss found the dreamstone at the\n"
	.string "mountain peak! He's heading there now.\p"
	.string "As for Gabrielle...after her punishment\n"
	.string "for losing to that Tenebris Lab trainer\l"
	.string "twice...she's been a little down.$"

MtCeram_EventScript_Eavesdrop_Text_6:
# 187 "data//maps/MtCeram/scripts.pory"
	.string "Serves her right for losing! Team\n"
	.string "Somber doesn't need any losers!$"

MtCeram_EventScript_Eavesdrop_Text_7:
# 194 "data//maps/MtCeram/scripts.pory"
	.string "Yeah what a loser she is!\p"
	.string "Now lets go stand guard. We can't let\n"
	.string "anyone pass until the boss gets the\l"
	.string "dreamstone at the peak!$"

MtCeram_EventScript_Eavesdrop_Text_8:
# 220 "data//maps/MtCeram/scripts.pory"
	.string "Heard that? I've got to get that\n"
	.string "dreamstone before Team Somber!\p"
	.string "That's called responsibility.\n"
	.string "Sxomething you wouldn't know about.\p"
	.string "...\p"
	.string "What? You're coming too? Hah! We're not\n"
	.string "buddies, {PLAYER}. I'm the one and\l"
	.string "only Ace Rookie, and I've told you\l"
	.string "before - I'm strong enough alone.\p"
	.string "I don't need your help, chum!$"

MtCeram_EventScript_BeforePeakBattle_Text_0:
# 288 "data//maps/MtCeram/scripts.pory"
	.string "That's enough of your mischief Team\n"
	.string "Somber! You're getting in the way of\l"
	.string "police business!$"

MtCeram_EventScript_BeforePeakBattle_Text_1:
# 294 "data//maps/MtCeram/scripts.pory"
	.string "You're just a kid. Where's the police?$"

MtCeram_EventScript_BeforePeakBattle_Text_2:
# 299 "data//maps/MtCeram/scripts.pory"
	.string "I'm not a kid! I'm the Ace Rookie of the\n"
	.string "Detective Academy, and I'm not going to\l"
	.string "let you steal the dreamstone!$"

MtCeram_EventScript_BeforePeakBattle_Text_3:
# 305 "data//maps/MtCeram/scripts.pory"
	.string "You alone? Against the two of us?$"

MtCeram_EventScript_BeforePeakBattle_Text_4:
# 317 "data//maps/MtCeram/scripts.pory"
	.string "The help arrives. But you're both just\n"
	.string "kids! Hahaha!$"

MtCeram_EventScript_BeforePeakBattle_Text_5:
# 322 "data//maps/MtCeram/scripts.pory"
	.string "{PLAYER}, I told you I don't need your\n"
	.string "help! You'll just get in the way.$"

MtCeram_EventScript_BeforePeakBattle_Text_6:
# 329 "data//maps/MtCeram/scripts.pory"
	.string "Now come on Team Somber! Bring it on!$"

MtCeram_EventScript_BeforePeakBattle_Text_7:
# 340 "data//maps/MtCeram/scripts.pory"
	.string "No! Charcadet!$"

MtCeram_EventScript_BeforePeakBattle_Text_8:
# 344 "data//maps/MtCeram/scripts.pory"
	.string "Hahaha! Your ace was a pushover, Ace\n"
	.string "Rookie!$"

MtCeram_EventScript_BeforePeakBattle_Text_9:
# 355 "data//maps/MtCeram/scripts.pory"
	.string "My Pokemon...I have to go and heal\n"
	.string "them...I couldn't stop Team Somber...$"

MtCeram_EventScript_BeforePeakBattle_Text_10:
# 366 "data//maps/MtCeram/scripts.pory"
	.string "And you? You want a beating too?$"

MtCeram_EventScript_BeforePeakBattle_Text_11:
# 371 "data//maps/MtCeram/scripts.pory"
	.string "Hey, aren't you the trainer that beat\n"
	.string "Gabrielle?$"

MtCeram_EventScript_BeforePeakBattle_Text_12:
# 375 "data//maps/MtCeram/scripts.pory"
	.string "Hey - yeah! But Gabrielle's just a loser.\p"
	.string "But we're the real deal! Let's see what\n"
	.string "you've got!$"

MtCeram_EventScript_BeforePeakBattle_Text_13:
# 382 "data//maps/MtCeram/scripts.pory"
	.string "Argh! You stupid kid!$"

MtCeram_EventScript_BeforePeakBattle_Text_14:
# 388 "data//maps/MtCeram/scripts.pory"
	.string "How could you beat us?$"

MtCeram_EventScript_BeforePeakBattle_Text_15:
# 392 "data//maps/MtCeram/scripts.pory"
	.string "We-we've got to tell the boss...$"

MtCeram_EventScript_BeforePeakBattle_Text_16:
# 396 "data//maps/MtCeram/scripts.pory"
	.string "Yeah...c'mon let's hurry.\p"
	.string "{PLAYER} - you may have beaten us\n"
	.string "but you can't stop Team Somber from\l"
	.string "achieving its goal!\p"
	.string "We're warning you - DON'T follow us up\n"
	.string "the mountain peak, or you'll be sorry!$"

MtCeram_TrainerBattle_A_Text_0:
# 429 "data//maps/MtCeram/scripts.pory"
	.string "These mountains are the perfect\n"
	.string "training spot. Don't you agree?$"

MtCeram_TrainerBattle_A_Text_1:
# 429 "data//maps/MtCeram/scripts.pory"
	.string "It's never enough!$"

MtCeram_TrainerBattle_A_Text_2:
# 430 "data//maps/MtCeram/scripts.pory"
	.string "Since it's so hot here, you sweat more.\n"
	.string "And sweat is good!$"

MtCeram_TrainerBattle_B_Text_0:
# 437 "data//maps/MtCeram/scripts.pory"
	.string "I'm a firefighter! I'm training against\n"
	.string "all the FIRE types here. You look like\l"
	.string "you could use a dowsing of water!$"

MtCeram_TrainerBattle_B_Text_1:
# 437 "data//maps/MtCeram/scripts.pory"
	.string "You can't be extinguished!$"

MtCeram_TrainerBattle_B_Text_2:
# 438 "data//maps/MtCeram/scripts.pory"
	.string "Fire safety starts with awareness -\n"
	.string "stay safe, stay prepared!$"

MtCeram_TrainerBattle_C_Text_0:
# 445 "data//maps/MtCeram/scripts.pory"
	.string "My Sizzlepede loves preying on the\n"
	.string "Venipede around here!$"

MtCeram_TrainerBattle_C_Text_1:
# 445 "data//maps/MtCeram/scripts.pory"
	.string "You sizzle too much!$"

MtCeram_TrainerBattle_C_Text_2:
# 446 "data//maps/MtCeram/scripts.pory"
	.string "Sizzlepede and Venipede are sworn\n"
	.string "enemies, much like their evolutions.$"

MtCeram_TrainerBattle_D_Text_0:
# 453 "data//maps/MtCeram/scripts.pory"
	.string "I brought my sheep Pokémon here but\n"
	.string "their hair got singed in the heat!$"

MtCeram_TrainerBattle_D_Text_1:
# 453 "data//maps/MtCeram/scripts.pory"
	.string "I should go back down.$"

MtCeram_TrainerBattle_D_Text_2:
# 454 "data//maps/MtCeram/scripts.pory"
	.string "Pokémon Breeders specialise in a single\n"
	.string "group. I specialise in rearing sheep!$"

MtCeram_TrainerBattle_GRUNT1_Text_0:
# 460 "data//maps/MtCeram/scripts.pory"
	.string "Hey, kid! Where'd you come from?\n"
	.string "You're not supposed to be here.\p"
	.string "Why?\p"
	.string "Stop asking questions and get lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_1:
# 460 "data//maps/MtCeram/scripts.pory"
	.string "Fine! Don't get lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_2:
# 461 "data//maps/MtCeram/scripts.pory"
	.string "Team Somber has control of this\n"
	.string "mountain now! Well...except for you.$"

MtCeram_TrainerBattle_GRUNT2_Text_0:
# 468 "data//maps/MtCeram/scripts.pory"
	.string "We're going to get the dreamstone and\n"
	.string "Team Somber will reward us!\p"
	.string "Wait, you're not a grunt.\n"
	.string "Get out of here!$"

MtCeram_TrainerBattle_GRUNT2_Text_1:
# 468 "data//maps/MtCeram/scripts.pory"
	.string "I'm going to be punished for this!$"

MtCeram_TrainerBattle_GRUNT2_Text_2:
# 469 "data//maps/MtCeram/scripts.pory"
	.string "I love Team Somber! No wait...I love\n"
	.string "money!$"

MtCeram_EventScript_NPC1_Text_0:
# 492 "data//maps/MtCeram/scripts.pory"
	.string "If I jump over this ledge, I won't be\n"
	.string "able to return! So I do my jogging here.$"

MtCeram_EventScript_NPC2_Text_0:
# 498 "data//maps/MtCeram/scripts.pory"
	.string "I saw a Larvesta here the other day!\n"
	.string "But they're very rare. The constant\l"
	.string "Sizzlipede and Venipede fighting scare\l"
	.string "them away.$"

MtCeram_EventScript_NPC3_Text_0:
# 505 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot!$"

MtCeram_EventScript_NPC3_Text_1:
# 507 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot! Don't\n"
	.string "forget to stay hydrated!$"

MtCeram_EventScript_NPCNurse_Text_0:
# 522 "data//maps/MtCeram/scripts.pory"
	.string "Chansey and I have been hiding from\n"
	.string "these thugs behind this tree...although\l"
	.string "Chansey can't hide herself too well.$"

MtCeram_EventScript_NPCNurse_Text_1:
# 528 "data//maps/MtCeram/scripts.pory"
	.string "Don't worry, Chansey! We're safe here.\p"
	.string "Meanwhile, if you have a Heal Pass,\n"
	.string "I can heal your Pokemon!$"

MtCeram_EventScript_Gabrielle_Text_0:
# 537 "data//maps/MtCeram/scripts.pory"
	.string "Gabrielle$"

MtCeram_EventScript_Gabrielle_Text_1:
# 538 "data//maps/MtCeram/scripts.pory"
	.string "Why do I have to be punished every\n"
	.string "time? I'm trying my best! I don't want\l"
	.string "to steal other people's stuff but I'm\l"
	.string "still doing it for the team. It's not\l"
	.string "fair!\p"
	.string "...$"

MtCeram_EventScript_Gabrielle_Text_2:
# 547 "data//maps/MtCeram/scripts.pory"
	.string "Don't look at me like that! You don't\n"
	.string "know what its like...$"
