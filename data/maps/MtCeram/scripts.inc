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
# 206 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 207 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_6
# 208 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 209 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 212 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_7
# 213 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 214 "data//maps/MtCeram/scripts.pory"
	delay 16
# 215 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 216 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_8
# 217 "data//maps/MtCeram/scripts.pory"
	release
# 220 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_8
# 221 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 222 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 224 "data//maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 226 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 229 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_BeforePeak_Trigger0::
# 258 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger0_2
# 259 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 260 "data//maps/MtCeram/scripts.pory"
	lockall
# 261 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger0_Movement_0
# 262 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 263 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger0_2:
	end


MtCeram_BeforePeak_Trigger1::
# 268 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger1_2
# 270 "data//maps/MtCeram/scripts.pory"
	lockall
# 271 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 272 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger1_Movement_0
# 273 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 274 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger1_2:
	end


MtCeram_EventScript_BeforePeakBattle::
# 281 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_0
# 282 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 283 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 284 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_0
# 285 "data//maps/MtCeram/scripts.pory"
	release
# 286 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 287 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 288 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 289 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 290 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_1
# 291 "data//maps/MtCeram/scripts.pory"
	release
# 292 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 293 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 294 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 295 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_2
# 296 "data//maps/MtCeram/scripts.pory"
	release
# 297 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 298 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 299 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 300 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 301 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_3
# 302 "data//maps/MtCeram/scripts.pory"
	release
# 303 "data//maps/MtCeram/scripts.pory"
	delay 16
# 305 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 306 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 307 "data//maps/MtCeram/scripts.pory"
	delay 16
# 308 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_Charizard_Movement_0
# 309 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_Charizard_Movement_0
# 310 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 311 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 312 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 313 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_4
# 314 "data//maps/MtCeram/scripts.pory"
	release
# 317 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 318 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_5
# 319 "data//maps/MtCeram/scripts.pory"
	release
# 320 "data//maps/MtCeram/scripts.pory"
	delay 8
# 321 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_2
# 322 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 323 "data//maps/MtCeram/scripts.pory"
	delay 8
# 324 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 325 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_6
# 326 "data//maps/MtCeram/scripts.pory"
	release
# 327 "data//maps/MtCeram/scripts.pory"
	fadeoutbgm 0
# 330 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 331 "data//maps/MtCeram/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 332 "data//maps/MtCeram/scripts.pory"
	waitse
# 333 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 334 "data//maps/MtCeram/scripts.pory"
	waitmoncry
# 335 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 336 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_7
# 337 "data//maps/MtCeram/scripts.pory"
	release
# 338 "data//maps/MtCeram/scripts.pory"
	delay 8
# 339 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 340 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_8
# 341 "data//maps/MtCeram/scripts.pory"
	release
# 342 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 343 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 345 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_3
# 346 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 350 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 351 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_9
# 352 "data//maps/MtCeram/scripts.pory"
	release
# 353 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_4
# 354 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 355 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPKOHLA
# 358 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 359 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 360 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 361 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 362 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_10
# 363 "data//maps/MtCeram/scripts.pory"
	release
# 364 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_5
# 365 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 366 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 367 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_11
# 368 "data//maps/MtCeram/scripts.pory"
	release
# 369 "data//maps/MtCeram/scripts.pory"
	delay 8
# 370 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 371 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_12
# 372 "data//maps/MtCeram/scripts.pory"
	release
# 374 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_EventScript_BeforePeakBattle_Movement_6
# 375 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 378 "data//maps/MtCeram/scripts.pory"
	trainerbattle_no_intro TRAINER_MTCERAM_GRUNT_DOUBLE, MtCeram_EventScript_BeforePeakBattle_Text_13
# 383 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 384 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_14
# 385 "data//maps/MtCeram/scripts.pory"
	release
# 386 "data//maps/MtCeram/scripts.pory"
	delay 8
# 387 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 388 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_15
# 389 "data//maps/MtCeram/scripts.pory"
	release
# 390 "data//maps/MtCeram/scripts.pory"
	delay 8
# 391 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 392 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_16
# 393 "data//maps/MtCeram/scripts.pory"
	release
# 396 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 397 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT1
# 398 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT2
# 399 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_GAB
# 400 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 402 "data//maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 405 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_PEAK
# 407 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_TrainerBattle_A::
# 425 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_A, MtCeram_TrainerBattle_A_Text_0, MtCeram_TrainerBattle_A_Text_1
# 426 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_A_Text_2
# 427 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_B::
# 433 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_B, MtCeram_TrainerBattle_B_Text_0, MtCeram_TrainerBattle_B_Text_1
# 434 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_B_Text_2
# 435 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_C::
# 441 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_C, MtCeram_TrainerBattle_C_Text_0, MtCeram_TrainerBattle_C_Text_1
# 442 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_C_Text_2
# 443 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_D::
# 449 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_D, MtCeram_TrainerBattle_D_Text_0, MtCeram_TrainerBattle_D_Text_1
# 450 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_D_Text_2
# 451 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT1::
# 456 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT1, MtCeram_TrainerBattle_GRUNT1_Text_0, MtCeram_TrainerBattle_GRUNT1_Text_1
# 457 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT1_Text_2
# 458 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT2::
# 464 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT2, MtCeram_TrainerBattle_GRUNT2_Text_0, MtCeram_TrainerBattle_GRUNT2_Text_1
# 465 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT2_Text_2
# 466 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_EventScript_NPC1::
# 488 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC1_Text_0, MSGBOX_NPC
	end


MtCeram_EventScript_NPC2::
# 494 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC2_Text_0, MSGBOX_NPC
	end


MtCeram_EventScript_NPC3::
# 500 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_FRESH_WATER, MtCeram_EventScript_NPC3_2
# 503 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_1, MSGBOX_NPC
# 504 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 505 "data//maps/MtCeram/scripts.pory"
	release
# 506 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_FRESH_WATER
MtCeram_EventScript_NPC3_1:
	end

MtCeram_EventScript_NPC3_2:
# 501 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_0, MSGBOX_NPC
	goto MtCeram_EventScript_NPC3_1


MtCeram_EventScript_NPCNurse::
# 515 "data//maps/MtCeram/scripts.pory"
	lockall
# 516 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 518 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_0
# 519 "data//maps/MtCeram/scripts.pory"
	release
# 520 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 521 "data//maps/MtCeram/scripts.pory"
	applymovement 24, MtCeram_EventScript_NPCNurse_Movement_0
# 522 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 523 "data//maps/MtCeram/scripts.pory"
	delay 24
# 524 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_1
# 525 "data//maps/MtCeram/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 527 "data//maps/MtCeram/scripts.pory"
	releaseall
	end


MtCeram_EventScript_Gabrielle::
# 532 "data//maps/MtCeram/scripts.pory"
	lockall
# 533 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Gabrielle_Text_0
# 534 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_1
# 535 "data//maps/MtCeram/scripts.pory"
	release
# 536 "data//maps/MtCeram/scripts.pory"
	delay 30
# 537 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_Charizard_Movement_0
# 538 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 539 "data//maps/MtCeram/scripts.pory"
	release
# 540 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 541 "data//maps/MtCeram/scripts.pory"
	delay 20
# 542 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Gabrielle_Text_0
# 543 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_2
# 544 "data//maps/MtCeram/scripts.pory"
	release
# 545 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_EventScript_Gabrielle_Movement_0
# 546 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 547 "data//maps/MtCeram/scripts.pory"
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

# 207 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_6:
# 207 "data//maps/MtCeram/scripts.pory"
	walk_down
# 207 "data//maps/MtCeram/scripts.pory"
	walk_down
# 207 "data//maps/MtCeram/scripts.pory"
	walk_left
# 207 "data//maps/MtCeram/scripts.pory"
	walk_left
	step_end

# 212 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_7:
# 212 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 212 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 220 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_8:
# 220 "data//maps/MtCeram/scripts.pory"
	walk_down
# 220 "data//maps/MtCeram/scripts.pory"
	walk_right
# 220 "data//maps/MtCeram/scripts.pory"
	walk_right
# 220 "data//maps/MtCeram/scripts.pory"
	walk_right
# 220 "data//maps/MtCeram/scripts.pory"
	walk_right
# 220 "data//maps/MtCeram/scripts.pory"
	walk_up
# 220 "data//maps/MtCeram/scripts.pory"
	walk_up
# 220 "data//maps/MtCeram/scripts.pory"
	walk_right
# 220 "data//maps/MtCeram/scripts.pory"
	walk_right
# 220 "data//maps/MtCeram/scripts.pory"
	walk_right
# 220 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 261 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger0_Movement_0:
# 261 "data//maps/MtCeram/scripts.pory"
	walk_up
# 261 "data//maps/MtCeram/scripts.pory"
	walk_up
# 261 "data//maps/MtCeram/scripts.pory"
	walk_up
# 261 "data//maps/MtCeram/scripts.pory"
	walk_left
# 261 "data//maps/MtCeram/scripts.pory"
	walk_left
# 261 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 272 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger1_Movement_0:
# 272 "data//maps/MtCeram/scripts.pory"
	walk_up
# 272 "data//maps/MtCeram/scripts.pory"
	walk_up
# 272 "data//maps/MtCeram/scripts.pory"
	walk_up
# 272 "data//maps/MtCeram/scripts.pory"
	walk_left
# 272 "data//maps/MtCeram/scripts.pory"
	walk_left
# 272 "data//maps/MtCeram/scripts.pory"
	walk_left
# 272 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 281 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_0:
# 281 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
	step_end

# 305 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_1:
# 305 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 321 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_2:
# 321 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 345 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_3:
# 345 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 353 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_4:
# 353 "data//maps/MtCeram/scripts.pory"
	walk_down
# 353 "data//maps/MtCeram/scripts.pory"
	walk_right
# 353 "data//maps/MtCeram/scripts.pory"
	walk_right
# 353 "data//maps/MtCeram/scripts.pory"
	walk_down
# 353 "data//maps/MtCeram/scripts.pory"
	walk_down
# 353 "data//maps/MtCeram/scripts.pory"
	walk_down
# 353 "data//maps/MtCeram/scripts.pory"
	walk_down
# 353 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 364 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_5:
# 364 "data//maps/MtCeram/scripts.pory"
	jump_in_place_down
# 364 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 374 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_6:
# 374 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 521 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_NPCNurse_Movement_0:
# 521 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
# 521 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 545 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Gabrielle_Movement_0:
# 545 "data//maps/MtCeram/scripts.pory"
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
	.string "...so the boss told us to be EXTRA\n"
	.string "careful not to let anyone up the\l"
	.string "mountain.$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 177 "data//maps/MtCeram/scripts.pory"
	.string "Grunt B$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 178 "data//maps/MtCeram/scripts.pory"
	.string "But where's the boss? And Gabrielle?$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 181 "data//maps/MtCeram/scripts.pory"
	.string "The boss found the dreamstone on top\n"
	.string "of the mountain! He's trying to climb it\l"
	.string "right now.\p"
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
# 216 "data//maps/MtCeram/scripts.pory"
	.string "Heard that? I've got to get that\n"
	.string "dreamstone before Team Somber! That's\l"
	.string "called responsibility - something you\l"
	.string "wouldn't know about.\p"
	.string "...\p"
	.string "What? You're coming too? Hah! We're not\n"
	.string "buddies, {PLAYER}. I'm the one and\l"
	.string "only Ace Rookie, and I've told you\l"
	.string "before - I'm strong enough alone.\p"
	.string "I don't need your help, chum!$"

MtCeram_EventScript_BeforePeakBattle_Text_0:
# 284 "data//maps/MtCeram/scripts.pory"
	.string "That's enough of your mischief Team\n"
	.string "Somber! You're getting in the way of\l"
	.string "police business!$"

MtCeram_EventScript_BeforePeakBattle_Text_1:
# 290 "data//maps/MtCeram/scripts.pory"
	.string "You're just a kid. Where's the police?$"

MtCeram_EventScript_BeforePeakBattle_Text_2:
# 295 "data//maps/MtCeram/scripts.pory"
	.string "I'm not a kid! I'm the Ace Rookie of the\n"
	.string "Detective Academy, and I'm not going to\l"
	.string "let you steal the dreamstone!$"

MtCeram_EventScript_BeforePeakBattle_Text_3:
# 301 "data//maps/MtCeram/scripts.pory"
	.string "You alone? Against the two of us?$"

MtCeram_EventScript_BeforePeakBattle_Text_4:
# 313 "data//maps/MtCeram/scripts.pory"
	.string "The help arrives. But you're both just\n"
	.string "kids! Hahaha!$"

MtCeram_EventScript_BeforePeakBattle_Text_5:
# 318 "data//maps/MtCeram/scripts.pory"
	.string "{PLAYER}, I told you I don't need your\n"
	.string "help! You'll just get in the way.$"

MtCeram_EventScript_BeforePeakBattle_Text_6:
# 325 "data//maps/MtCeram/scripts.pory"
	.string "Now come on Team Somber! Bring it on!$"

MtCeram_EventScript_BeforePeakBattle_Text_7:
# 336 "data//maps/MtCeram/scripts.pory"
	.string "No! CHARCADET!$"

MtCeram_EventScript_BeforePeakBattle_Text_8:
# 340 "data//maps/MtCeram/scripts.pory"
	.string "Hahaha! Your ace was a pushover, Ace\n"
	.string "Rookie!$"

MtCeram_EventScript_BeforePeakBattle_Text_9:
# 351 "data//maps/MtCeram/scripts.pory"
	.string "My Pokemon...I have to go and heal\n"
	.string "them...I couldn't stop Team Somber...$"

MtCeram_EventScript_BeforePeakBattle_Text_10:
# 362 "data//maps/MtCeram/scripts.pory"
	.string "And you? You want a beating too?$"

MtCeram_EventScript_BeforePeakBattle_Text_11:
# 367 "data//maps/MtCeram/scripts.pory"
	.string "Hey, aren't you the trainer that beat\n"
	.string "Gabrielle?$"

MtCeram_EventScript_BeforePeakBattle_Text_12:
# 371 "data//maps/MtCeram/scripts.pory"
	.string "Hey - yeah! But Gabrielle's just a loser.\p"
	.string "We're the real deal! Let's see what\n"
	.string "you've got!$"

MtCeram_EventScript_BeforePeakBattle_Text_13:
# 378 "data//maps/MtCeram/scripts.pory"
	.string "Argh! You stupid kid!$"

MtCeram_EventScript_BeforePeakBattle_Text_14:
# 384 "data//maps/MtCeram/scripts.pory"
	.string "How could you beat us?$"

MtCeram_EventScript_BeforePeakBattle_Text_15:
# 388 "data//maps/MtCeram/scripts.pory"
	.string "We-we've got to tell the boss...$"

MtCeram_EventScript_BeforePeakBattle_Text_16:
# 392 "data//maps/MtCeram/scripts.pory"
	.string "Yeah...c'mon let's hurry.\p"
	.string "{PLAYER} - you may have beaten us\n"
	.string "but you can't stop Team Somber from\l"
	.string "achieving its goal!\p"
	.string "We're warning you - DON'T follow us up\n"
	.string "the mountain peak, or you'll be sorry!$"

MtCeram_TrainerBattle_A_Text_0:
# 425 "data//maps/MtCeram/scripts.pory"
	.string "These mountains are the perfect\n"
	.string "training spot. Don't you agree?$"

MtCeram_TrainerBattle_A_Text_1:
# 425 "data//maps/MtCeram/scripts.pory"
	.string "It's never enough!$"

MtCeram_TrainerBattle_A_Text_2:
# 426 "data//maps/MtCeram/scripts.pory"
	.string "Since its so hot here, you sweat more.\n"
	.string "And sweat is good!$"

MtCeram_TrainerBattle_B_Text_0:
# 433 "data//maps/MtCeram/scripts.pory"
	.string "I'm a firefighter! I'm training against\n"
	.string "all the FIRE types here. You look like\l"
	.string "you could use a dowsing of water!$"

MtCeram_TrainerBattle_B_Text_1:
# 433 "data//maps/MtCeram/scripts.pory"
	.string "You can't be extinguished!$"

MtCeram_TrainerBattle_B_Text_2:
# 434 "data//maps/MtCeram/scripts.pory"
	.string "Fire safety starts with awareness -\n"
	.string "stay safe, stay prepared!$"

MtCeram_TrainerBattle_C_Text_0:
# 441 "data//maps/MtCeram/scripts.pory"
	.string "My Sizzlepede loves preying on the\n"
	.string "Venipede around here!$"

MtCeram_TrainerBattle_C_Text_1:
# 441 "data//maps/MtCeram/scripts.pory"
	.string "You sizzle too much!$"

MtCeram_TrainerBattle_C_Text_2:
# 442 "data//maps/MtCeram/scripts.pory"
	.string "Sizzlepede and Venipede are sworn\n"
	.string "enemies, much like their evolutions.$"

MtCeram_TrainerBattle_D_Text_0:
# 449 "data//maps/MtCeram/scripts.pory"
	.string "I brought my sheep Pokémon here but\n"
	.string "their hair is getting singed in the\l"
	.string "heat!$"

MtCeram_TrainerBattle_D_Text_1:
# 449 "data//maps/MtCeram/scripts.pory"
	.string "I should go back down.$"

MtCeram_TrainerBattle_D_Text_2:
# 450 "data//maps/MtCeram/scripts.pory"
	.string "Most Pokémon Breeders specialise in a\n"
	.string "single group. I specialise in rearing\l"
	.string "sheep!$"

MtCeram_TrainerBattle_GRUNT1_Text_0:
# 456 "data//maps/MtCeram/scripts.pory"
	.string "Hey kid, you're not supposed to be here.\n"
	.string "Why? Stop asking questions and get\l"
	.string "lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_1:
# 456 "data//maps/MtCeram/scripts.pory"
	.string "Fine! Don't get lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_2:
# 457 "data//maps/MtCeram/scripts.pory"
	.string "Team Somber has control of this\n"
	.string "mountain for now! Well except for you.$"

MtCeram_TrainerBattle_GRUNT2_Text_0:
# 464 "data//maps/MtCeram/scripts.pory"
	.string "We're going to get the dreamstone and\n"
	.string "Team Somber will reward us! Wait, you're\l"
	.string "not a grunt. Get out of here!$"

MtCeram_TrainerBattle_GRUNT2_Text_1:
# 464 "data//maps/MtCeram/scripts.pory"
	.string "I'm going to be punished for this!$"

MtCeram_TrainerBattle_GRUNT2_Text_2:
# 465 "data//maps/MtCeram/scripts.pory"
	.string "I love Team Somber! No wait...I love\n"
	.string "money!$"

MtCeram_EventScript_NPC1_Text_0:
# 488 "data//maps/MtCeram/scripts.pory"
	.string "If I jump over this ledge, I won't be\n"
	.string "able to return! So I do my jogging here.$"

MtCeram_EventScript_NPC2_Text_0:
# 494 "data//maps/MtCeram/scripts.pory"
	.string "I saw a Larvesta here the other day!\n"
	.string "But they're very rare. The constant\l"
	.string "Sizzlipede and Venipede fighting scare\l"
	.string "them away.$"

MtCeram_EventScript_NPC3_Text_0:
# 501 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot!$"

MtCeram_EventScript_NPC3_Text_1:
# 503 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot! Don't\n"
	.string "forget to stay hydrated!$"

MtCeram_EventScript_NPCNurse_Text_0:
# 518 "data//maps/MtCeram/scripts.pory"
	.string "Chansey and I have been hiding from\n"
	.string "these thugs behind this tree...although\l"
	.string "Chansey's not able to hide herself too\l"
	.string "well.$"

MtCeram_EventScript_NPCNurse_Text_1:
# 524 "data//maps/MtCeram/scripts.pory"
	.string "Don't worry, Chansey! We're safe here.\n"
	.string "Meanwhile, if you have a Heal Pass, I can\l"
	.string "heal your Pokemon!$"

MtCeram_EventScript_Gabrielle_Text_0:
# 533 "data//maps/MtCeram/scripts.pory"
	.string "Gabrielle$"

MtCeram_EventScript_Gabrielle_Text_1:
# 534 "data//maps/MtCeram/scripts.pory"
	.string "Why do I have to be punished every\n"
	.string "time? I'm trying my best! I don't want\l"
	.string "to steal other people's stuff but I'm\l"
	.string "still doing it for the team. It's not\l"
	.string "fair!\p"
	.string "...$"

MtCeram_EventScript_Gabrielle_Text_2:
# 543 "data//maps/MtCeram/scripts.pory"
	.string "Don't look at me like that! You don't\n"
	.string "know what its like...$"
