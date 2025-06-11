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
# 20 "data//maps/MtCeram/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 22 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MtCeram_Charizard_2
# 30 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_1, MSGBOX_YESNO
# 31 "data//maps/MtCeram/scripts.pory"
	release
# 33 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtCeram_Charizard_5
# 73 "data//maps/MtCeram/scripts.pory"
	release
MtCeram_Charizard_4:
# 75 "data//maps/MtCeram/scripts.pory"
	releaseall
	end

MtCeram_Charizard_2:
# 23 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_0
# 24 "data//maps/MtCeram/scripts.pory"
	releaseall
	end

MtCeram_Charizard_5:
# 34 "data//maps/MtCeram/scripts.pory"
	fadeoutbgm 1
# 35 "data//maps/MtCeram/scripts.pory"
	playse MUS_RG_POKE_FLUTE
# 36 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_2
# 37 "data//maps/MtCeram/scripts.pory"
	delay 128
# 38 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_3
# 39 "data//maps/MtCeram/scripts.pory"
	release
# 40 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_0
# 41 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 42 "data//maps/MtCeram/scripts.pory"
	delay 30
# 43 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_1
# 44 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 45 "data//maps/MtCeram/scripts.pory"
	delay 60
# 46 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_2
# 47 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 48 "data//maps/MtCeram/scripts.pory"
	delay 60
# 49 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_3
# 50 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 51 "data//maps/MtCeram/scripts.pory"
	delay 16
# 52 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 53 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_4
# 54 "data//maps/MtCeram/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 48
# 55 "data//maps/MtCeram/scripts.pory"
	dowildbattle
# 58 "data//maps/MtCeram/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 59 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtCeram_Charizard_9
MtCeram_Charizard_8:
# 63 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtCeram_Charizard_12
MtCeram_Charizard_11:
# 67 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtCeram_Charizard_14
	goto MtCeram_Charizard_4

MtCeram_Charizard_9:
# 60 "data//maps/MtCeram/scripts.pory"
	removeobject 18
# 61 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_8

MtCeram_Charizard_12:
# 64 "data//maps/MtCeram/scripts.pory"
	removeobject 18
# 65 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_11

MtCeram_Charizard_14:
# 68 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_4
# 69 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_5
# 70 "data//maps/MtCeram/scripts.pory"
	release
	goto MtCeram_Charizard_4


MtCeram_Eavesdrop_Trigger0::
# 86 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger0_2
# 87 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 88 "data//maps/MtCeram/scripts.pory"
	lockall
# 89 "data//maps/MtCeram/scripts.pory"
	delay 16
# 90 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 91 "data//maps/MtCeram/scripts.pory"
	delay 16
# 93 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 94 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 95 "data//maps/MtCeram/scripts.pory"
	release
# 97 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger0_Movement_1
# 98 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 100 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger0_2:
	end


MtCeram_Eavesdrop_Trigger1::
# 105 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger1_2
# 106 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 107 "data//maps/MtCeram/scripts.pory"
	lockall
# 108 "data//maps/MtCeram/scripts.pory"
	delay 16
# 109 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 110 "data//maps/MtCeram/scripts.pory"
	delay 16
# 112 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 113 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 114 "data//maps/MtCeram/scripts.pory"
	release
# 116 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger1_Movement_0
# 117 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 119 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger1_2:
	end


MtCeram_Eavesdrop_Trigger2::
# 124 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger2_2
# 125 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 126 "data//maps/MtCeram/scripts.pory"
	lockall
# 127 "data//maps/MtCeram/scripts.pory"
	delay 16
# 128 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 129 "data//maps/MtCeram/scripts.pory"
	delay 16
# 131 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 132 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 133 "data//maps/MtCeram/scripts.pory"
	release
# 135 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger2_Movement_0
# 136 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 138 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger2_2:
	end


MtCeram_Eavesdrop_Trigger3::
# 143 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger3_2
# 144 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 145 "data//maps/MtCeram/scripts.pory"
	lockall
# 146 "data//maps/MtCeram/scripts.pory"
	delay 16
# 147 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 148 "data//maps/MtCeram/scripts.pory"
	delay 16
# 150 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 151 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 152 "data//maps/MtCeram/scripts.pory"
	release
# 154 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger3_Movement_0
# 155 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 157 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger3_2:
	end


MtCeram_EventScript_Eavesdrop::
# 163 "data//maps/MtCeram/scripts.pory"
	lockall
# 164 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_0
# 166 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 167 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_0
# 168 "data//maps/MtCeram/scripts.pory"
	release
# 170 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 171 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_1
# 172 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 173 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 176 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 177 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 178 "data//maps/MtCeram/scripts.pory"
	delay 16
# 179 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 180 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_2
# 181 "data//maps/MtCeram/scripts.pory"
	release
# 182 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 183 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 184 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_4
# 185 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 186 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 187 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_5
# 188 "data//maps/MtCeram/scripts.pory"
	release
# 189 "data//maps/MtCeram/scripts.pory"
	delay 16
# 190 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_4
# 191 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 192 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 193 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_6
# 194 "data//maps/MtCeram/scripts.pory"
	release
# 195 "data//maps/MtCeram/scripts.pory"
	delay 8
# 196 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 197 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 198 "data//maps/MtCeram/scripts.pory"
	delay 16
# 199 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 200 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_7
# 201 "data//maps/MtCeram/scripts.pory"
	release
# 204 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_5
# 205 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_5
# 206 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 209 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT1
# 210 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT2
# 211 "data//maps/MtCeram/scripts.pory"
	delay 8
# 214 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 215 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_6
# 216 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 217 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 219 "data//maps/MtCeram/scripts.pory"
	delay 8
# 222 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_7
# 223 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 224 "data//maps/MtCeram/scripts.pory"
	delay 16
# 225 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 226 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_8
# 227 "data//maps/MtCeram/scripts.pory"
	release
# 230 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_8
# 231 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 232 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 234 "data//maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 236 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 239 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_BeforePeak_Trigger0::
# 268 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger0_2
# 269 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 270 "data//maps/MtCeram/scripts.pory"
	lockall
# 271 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger0_Movement_0
# 272 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 273 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger0_2:
	end


MtCeram_BeforePeak_Trigger1::
# 278 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger1_2
# 280 "data//maps/MtCeram/scripts.pory"
	lockall
# 281 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 282 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger1_Movement_0
# 283 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 284 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger1_2:
	end


MtCeram_EventScript_BeforePeakBattle::
# 290 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_0
# 291 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 292 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 293 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_0
# 294 "data//maps/MtCeram/scripts.pory"
	release
# 295 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 296 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 297 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 298 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 299 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_1
# 300 "data//maps/MtCeram/scripts.pory"
	release
# 301 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 302 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 303 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 304 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_2
# 305 "data//maps/MtCeram/scripts.pory"
	release
# 306 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 307 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 308 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 309 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 310 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_3
# 311 "data//maps/MtCeram/scripts.pory"
	release
# 312 "data//maps/MtCeram/scripts.pory"
	delay 16
# 314 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 315 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 316 "data//maps/MtCeram/scripts.pory"
	delay 16
# 317 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_Charizard_Movement_0
# 318 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_Charizard_Movement_0
# 319 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 320 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 321 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 322 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_4
# 323 "data//maps/MtCeram/scripts.pory"
	release
# 326 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 327 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_5
# 328 "data//maps/MtCeram/scripts.pory"
	release
# 329 "data//maps/MtCeram/scripts.pory"
	delay 8
# 330 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_4
# 331 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 332 "data//maps/MtCeram/scripts.pory"
	delay 8
# 333 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 334 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_6
# 335 "data//maps/MtCeram/scripts.pory"
	release
# 336 "data//maps/MtCeram/scripts.pory"
	fadeoutbgm 0
# 339 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 340 "data//maps/MtCeram/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 341 "data//maps/MtCeram/scripts.pory"
	waitse
# 342 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 343 "data//maps/MtCeram/scripts.pory"
	waitmoncry
# 344 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 345 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_7
# 346 "data//maps/MtCeram/scripts.pory"
	release
# 347 "data//maps/MtCeram/scripts.pory"
	delay 8
# 348 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 349 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_8
# 350 "data//maps/MtCeram/scripts.pory"
	release
# 351 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 352 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 354 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_2
# 355 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 359 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 360 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_9
# 361 "data//maps/MtCeram/scripts.pory"
	release
# 362 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_3
# 363 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 366 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 367 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 368 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 369 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 370 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_10
# 371 "data//maps/MtCeram/scripts.pory"
	release
# 372 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_4
# 373 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 374 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 375 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_11
# 376 "data//maps/MtCeram/scripts.pory"
	release
# 377 "data//maps/MtCeram/scripts.pory"
	delay 8
# 378 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 379 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_12
# 380 "data//maps/MtCeram/scripts.pory"
	release
# 382 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_EventScript_BeforePeakBattle_Movement_5
# 383 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 386 "data//maps/MtCeram/scripts.pory"
	trainerbattle_no_intro TRAINER_MTCERAM_GRUNT_DOUBLE, MtCeram_EventScript_BeforePeakBattle_Text_13
# 389 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 390 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_14
# 391 "data//maps/MtCeram/scripts.pory"
	release
# 392 "data//maps/MtCeram/scripts.pory"
	delay 8
# 393 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 394 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_15
# 395 "data//maps/MtCeram/scripts.pory"
	release
# 396 "data//maps/MtCeram/scripts.pory"
	delay 8
# 397 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 398 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_16
# 399 "data//maps/MtCeram/scripts.pory"
	release
# 402 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 403 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT1
# 404 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT2
# 405 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_GAB
# 406 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPKOHLA
# 407 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 409 "data//maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 412 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_PEAK
# 414 "data//maps/MtCeram/scripts.pory"
	releaseall
	end


MtCeram_TrainerBattle_A::
# 433 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_A, MtCeram_TrainerBattle_A_Text_0, MtCeram_TrainerBattle_A_Text_1
# 434 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_A_Text_2
# 435 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_B::
# 441 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_B, MtCeram_TrainerBattle_B_Text_0, MtCeram_TrainerBattle_B_Text_1
# 442 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_B_Text_2
# 443 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_C::
# 449 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_C, MtCeram_TrainerBattle_C_Text_0, MtCeram_TrainerBattle_C_Text_1
# 450 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_C_Text_2
# 451 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_D::
# 457 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_D, MtCeram_TrainerBattle_D_Text_0, MtCeram_TrainerBattle_D_Text_1
# 458 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_D_Text_2
# 459 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT1::
# 464 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT1, MtCeram_TrainerBattle_GRUNT1_Text_0, MtCeram_TrainerBattle_GRUNT1_Text_1
# 465 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT1_Text_2
# 466 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT2::
# 472 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT2, MtCeram_TrainerBattle_GRUNT2_Text_0, MtCeram_TrainerBattle_GRUNT2_Text_1
# 473 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT2_Text_2
# 474 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_EventScript_NPC1::
# 496 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC1_Text_0, MSGBOX_NPC
	end


MtCeram_EventScript_NPC2::
# 502 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC2_Text_0, MSGBOX_NPC
	end


MtCeram_EventScript_NPC3::
# 508 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_FRESH_WATER, MtCeram_EventScript_NPC3_2
# 511 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_1, MSGBOX_NPC
# 512 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 513 "data//maps/MtCeram/scripts.pory"
	release
# 514 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_FRESH_WATER
MtCeram_EventScript_NPC3_1:
	end

MtCeram_EventScript_NPC3_2:
# 509 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_0, MSGBOX_NPC
	goto MtCeram_EventScript_NPC3_1


MtCeram_EventScript_NPCNurse::
# 523 "data//maps/MtCeram/scripts.pory"
	lockall
# 524 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 526 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_0
# 527 "data//maps/MtCeram/scripts.pory"
	release
# 528 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 529 "data//maps/MtCeram/scripts.pory"
	applymovement 24, MtCeram_EventScript_NPCNurse_Movement_0
# 530 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 531 "data//maps/MtCeram/scripts.pory"
	delay 24
# 532 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_1
# 533 "data//maps/MtCeram/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 535 "data//maps/MtCeram/scripts.pory"
	releaseall
	end


MtCeram_EventScript_Gabrielle::
# 540 "data//maps/MtCeram/scripts.pory"
	lockall
# 541 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Gabrielle_Text_0
# 542 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_1
# 543 "data//maps/MtCeram/scripts.pory"
	release
# 544 "data//maps/MtCeram/scripts.pory"
	delay 30
# 545 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_Charizard_Movement_0
# 546 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 547 "data//maps/MtCeram/scripts.pory"
	release
# 548 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 549 "data//maps/MtCeram/scripts.pory"
	delay 20
# 550 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Gabrielle_Text_0
# 551 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_2
# 552 "data//maps/MtCeram/scripts.pory"
	release
# 553 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_EventScript_Gabrielle_Movement_0
# 554 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 555 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


# 40 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_0:
# 40 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 43 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_1:
# 43 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
# 43 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 46 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_2:
# 46 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
# 46 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 49 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_3:
# 49 "data//maps/MtCeram/scripts.pory"
	face_down
# 49 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 68 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_4:
# 68 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 90 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_0:
# 90 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 90 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 97 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_1:
# 97 "data//maps/MtCeram/scripts.pory"
	walk_up
# 97 "data//maps/MtCeram/scripts.pory"
	walk_left
# 97 "data//maps/MtCeram/scripts.pory"
	walk_left
# 97 "data//maps/MtCeram/scripts.pory"
	walk_up
# 97 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 116 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger1_Movement_0:
# 116 "data//maps/MtCeram/scripts.pory"
	walk_up
# 116 "data//maps/MtCeram/scripts.pory"
	walk_left
# 116 "data//maps/MtCeram/scripts.pory"
	walk_left
# 116 "data//maps/MtCeram/scripts.pory"
	walk_left
# 116 "data//maps/MtCeram/scripts.pory"
	walk_up
# 116 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 135 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger2_Movement_0:
# 135 "data//maps/MtCeram/scripts.pory"
	walk_up
# 135 "data//maps/MtCeram/scripts.pory"
	walk_left
# 135 "data//maps/MtCeram/scripts.pory"
	walk_left
# 135 "data//maps/MtCeram/scripts.pory"
	walk_left
# 135 "data//maps/MtCeram/scripts.pory"
	walk_left
# 135 "data//maps/MtCeram/scripts.pory"
	walk_up
# 135 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 154 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger3_Movement_0:
# 154 "data//maps/MtCeram/scripts.pory"
	walk_up
# 154 "data//maps/MtCeram/scripts.pory"
	walk_left
# 154 "data//maps/MtCeram/scripts.pory"
	walk_left
# 154 "data//maps/MtCeram/scripts.pory"
	walk_left
# 154 "data//maps/MtCeram/scripts.pory"
	walk_left
# 154 "data//maps/MtCeram/scripts.pory"
	walk_left
# 154 "data//maps/MtCeram/scripts.pory"
	walk_up
# 154 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 164 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_0:
# 164 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 171 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_1:
# 171 "data//maps/MtCeram/scripts.pory"
	walk_right
# 171 "data//maps/MtCeram/scripts.pory"
	walk_right
# 171 "data//maps/MtCeram/scripts.pory"
	walk_up
# 171 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 176 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_2:
# 176 "data//maps/MtCeram/scripts.pory"
	jump_in_place_right
	step_end

# 182 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_3:
# 182 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
	step_end

# 190 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_4:
# 190 "data//maps/MtCeram/scripts.pory"
	jump_in_place_left
	step_end

# 204 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_5:
# 204 "data//maps/MtCeram/scripts.pory"
	walk_right
# 204 "data//maps/MtCeram/scripts.pory"
	walk_right
# 204 "data//maps/MtCeram/scripts.pory"
	walk_right
# 204 "data//maps/MtCeram/scripts.pory"
	walk_right
# 204 "data//maps/MtCeram/scripts.pory"
	walk_right
# 204 "data//maps/MtCeram/scripts.pory"
	walk_right
# 204 "data//maps/MtCeram/scripts.pory"
	walk_right
# 204 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 215 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_6:
# 215 "data//maps/MtCeram/scripts.pory"
	walk_down
# 215 "data//maps/MtCeram/scripts.pory"
	walk_down
# 215 "data//maps/MtCeram/scripts.pory"
	walk_left
# 215 "data//maps/MtCeram/scripts.pory"
	walk_left
	step_end

# 222 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_7:
# 222 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 222 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 230 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_8:
# 230 "data//maps/MtCeram/scripts.pory"
	walk_down
# 230 "data//maps/MtCeram/scripts.pory"
	walk_right
# 230 "data//maps/MtCeram/scripts.pory"
	walk_right
# 230 "data//maps/MtCeram/scripts.pory"
	walk_right
# 230 "data//maps/MtCeram/scripts.pory"
	walk_right
# 230 "data//maps/MtCeram/scripts.pory"
	walk_up
# 230 "data//maps/MtCeram/scripts.pory"
	walk_up
# 230 "data//maps/MtCeram/scripts.pory"
	walk_right
# 230 "data//maps/MtCeram/scripts.pory"
	walk_right
# 230 "data//maps/MtCeram/scripts.pory"
	walk_right
# 230 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 271 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger0_Movement_0:
# 271 "data//maps/MtCeram/scripts.pory"
	walk_up
# 271 "data//maps/MtCeram/scripts.pory"
	walk_up
# 271 "data//maps/MtCeram/scripts.pory"
	walk_up
# 271 "data//maps/MtCeram/scripts.pory"
	walk_left
# 271 "data//maps/MtCeram/scripts.pory"
	walk_left
# 271 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 282 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger1_Movement_0:
# 282 "data//maps/MtCeram/scripts.pory"
	walk_up
# 282 "data//maps/MtCeram/scripts.pory"
	walk_up
# 282 "data//maps/MtCeram/scripts.pory"
	walk_up
# 282 "data//maps/MtCeram/scripts.pory"
	walk_left
# 282 "data//maps/MtCeram/scripts.pory"
	walk_left
# 282 "data//maps/MtCeram/scripts.pory"
	walk_left
# 282 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 290 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_0:
# 290 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
	step_end

# 314 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_1:
# 314 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 354 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_2:
# 354 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 362 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_3:
# 362 "data//maps/MtCeram/scripts.pory"
	walk_down
# 362 "data//maps/MtCeram/scripts.pory"
	walk_right
# 362 "data//maps/MtCeram/scripts.pory"
	walk_right
# 362 "data//maps/MtCeram/scripts.pory"
	walk_down
# 362 "data//maps/MtCeram/scripts.pory"
	walk_down
# 362 "data//maps/MtCeram/scripts.pory"
	walk_down
# 362 "data//maps/MtCeram/scripts.pory"
	walk_down
# 362 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 372 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_4:
# 372 "data//maps/MtCeram/scripts.pory"
	jump_in_place_down
# 372 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 382 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_5:
# 382 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 529 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_NPCNurse_Movement_0:
# 529 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
# 529 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 553 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Gabrielle_Movement_0:
# 553 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

MtCeram_Charizard_Text_0:
# 23 "data//maps/MtCeram/scripts.pory"
	.string "It's asleep...$"

MtCeram_Charizard_Text_1:
# 30 "data//maps/MtCeram/scripts.pory"
	.string "It's asleep...use Poké Flute?$"

MtCeram_Charizard_Text_2:
# 36 "data//maps/MtCeram/scripts.pory"
	.string "{PLAYER} played the Poke Flute.$"

MtCeram_Charizard_Text_3:
# 38 "data//maps/MtCeram/scripts.pory"
	.string "...$"

MtCeram_Charizard_Text_4:
# 53 "data//maps/MtCeram/scripts.pory"
	.string "The Charizard is furious!$"

MtCeram_Charizard_Text_5:
# 69 "data//maps/MtCeram/scripts.pory"
	.string "The Charizard grunts and falls back\n"
	.string "asleep. Better not disturb it again!$"

MtCeram_Eavesdrop_Trigger0_Text_0:
# 93 "data//maps/MtCeram/scripts.pory"
	.string "Kohla$"

MtCeram_Eavesdrop_Trigger0_Text_1:
# 94 "data//maps/MtCeram/scripts.pory"
	.string "{PLAYER} - what are you doing? Come\n"
	.string "here, you idiot!$"

MtCeram_EventScript_Eavesdrop_Text_0:
# 167 "data//maps/MtCeram/scripts.pory"
	.string "I've been spying on those two Team\n"
	.string "Somber Grunts. Don't make a sound!$"

MtCeram_EventScript_Eavesdrop_Text_1:
# 179 "data//maps/MtCeram/scripts.pory"
	.string "Grunt A$"

MtCeram_EventScript_Eavesdrop_Text_2:
# 180 "data//maps/MtCeram/scripts.pory"
	.string "...boss told us to be EXTRA careful not\n"
	.string "to let anyone up the mountain.$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 183 "data//maps/MtCeram/scripts.pory"
	.string "Grunt B$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 184 "data//maps/MtCeram/scripts.pory"
	.string "But where's the boss? And Gabrielle?$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 187 "data//maps/MtCeram/scripts.pory"
	.string "The boss found the dreamstone at the\n"
	.string "mountain peak! He's heading there now.\p"
	.string "As for Gabrielle...after her punishment\n"
	.string "for losing to that Tenebris Lab trainer\l"
	.string "twice...she's been a little down.$"

MtCeram_EventScript_Eavesdrop_Text_6:
# 193 "data//maps/MtCeram/scripts.pory"
	.string "Serves her right for losing! Team\n"
	.string "Somber doesn't need any losers!$"

MtCeram_EventScript_Eavesdrop_Text_7:
# 200 "data//maps/MtCeram/scripts.pory"
	.string "Yeah what a loser she is!\p"
	.string "Now lets go stand guard. We can't let\n"
	.string "anyone pass until the boss gets the\l"
	.string "dreamstone at the peak!$"

MtCeram_EventScript_Eavesdrop_Text_8:
# 226 "data//maps/MtCeram/scripts.pory"
	.string "Heard that? I've got to get that\n"
	.string "dreamstone before Team Somber!\p"
	.string "That's called responsibility. Something\n"
	.string "you wouldn't know about.\p"
	.string "...\p"
	.string "What? You're coming too? Hah! We're not\n"
	.string "buddies, {PLAYER}. I'm the one and\l"
	.string "only Ace Rookie, and I've told you\l"
	.string "before - I'm strong enough alone.\p"
	.string "I don't need your help, chum!$"

MtCeram_EventScript_BeforePeakBattle_Text_0:
# 293 "data//maps/MtCeram/scripts.pory"
	.string "That's enough of your mischief Team\n"
	.string "Somber! You're getting in the way of\l"
	.string "police business!$"

MtCeram_EventScript_BeforePeakBattle_Text_1:
# 299 "data//maps/MtCeram/scripts.pory"
	.string "You're just a kid. Where's the police?$"

MtCeram_EventScript_BeforePeakBattle_Text_2:
# 304 "data//maps/MtCeram/scripts.pory"
	.string "I'm not a kid! I'm the Ace Rookie of the\n"
	.string "Detective Academy, and I'm not going to\l"
	.string "let you steal the dreamstone!$"

MtCeram_EventScript_BeforePeakBattle_Text_3:
# 310 "data//maps/MtCeram/scripts.pory"
	.string "You alone? Against the two of us?$"

MtCeram_EventScript_BeforePeakBattle_Text_4:
# 322 "data//maps/MtCeram/scripts.pory"
	.string "The help arrives. But you're both just\n"
	.string "kids! Hahaha!$"

MtCeram_EventScript_BeforePeakBattle_Text_5:
# 327 "data//maps/MtCeram/scripts.pory"
	.string "{PLAYER}, I told you I don't need your\n"
	.string "help! You'll just get in the way.$"

MtCeram_EventScript_BeforePeakBattle_Text_6:
# 334 "data//maps/MtCeram/scripts.pory"
	.string "Now come on Team Somber! Bring it on!$"

MtCeram_EventScript_BeforePeakBattle_Text_7:
# 345 "data//maps/MtCeram/scripts.pory"
	.string "No! Charcadet!$"

MtCeram_EventScript_BeforePeakBattle_Text_8:
# 349 "data//maps/MtCeram/scripts.pory"
	.string "Hahaha! Your ace was a pushover, Ace\n"
	.string "Rookie!$"

MtCeram_EventScript_BeforePeakBattle_Text_9:
# 360 "data//maps/MtCeram/scripts.pory"
	.string "My Pokémon...I have to go and heal\n"
	.string "them...I couldn't stop Team Somber...$"

MtCeram_EventScript_BeforePeakBattle_Text_10:
# 370 "data//maps/MtCeram/scripts.pory"
	.string "And you? You want a beating too?$"

MtCeram_EventScript_BeforePeakBattle_Text_11:
# 375 "data//maps/MtCeram/scripts.pory"
	.string "Hey, aren't you the trainer that beat\n"
	.string "Gabrielle?$"

MtCeram_EventScript_BeforePeakBattle_Text_12:
# 379 "data//maps/MtCeram/scripts.pory"
	.string "Hey - yeah! But Gabrielle's just a loser.\p"
	.string "On the other hand, we're the real deal!\p"
	.string "Let's see what you've got!$"

MtCeram_EventScript_BeforePeakBattle_Text_13:
# 386 "data//maps/MtCeram/scripts.pory"
	.string "Argh! You stupid kid!$"

MtCeram_EventScript_BeforePeakBattle_Text_14:
# 390 "data//maps/MtCeram/scripts.pory"
	.string "How could you beat us?$"

MtCeram_EventScript_BeforePeakBattle_Text_15:
# 394 "data//maps/MtCeram/scripts.pory"
	.string "We-we've got to tell the boss...$"

MtCeram_EventScript_BeforePeakBattle_Text_16:
# 398 "data//maps/MtCeram/scripts.pory"
	.string "Yeah...c'mon let's hurry.\p"
	.string "{PLAYER} - you may have beaten us\n"
	.string "but you can't stop Team Somber from\l"
	.string "achieving its goal!\p"
	.string "We're warning you - DON'T follow us up\n"
	.string "the mountain peak, or you'll be sorry!$"

MtCeram_TrainerBattle_A_Text_0:
# 433 "data//maps/MtCeram/scripts.pory"
	.string "These mountains are the perfect\n"
	.string "training spot. Don't you agree?$"

MtCeram_TrainerBattle_A_Text_1:
# 433 "data//maps/MtCeram/scripts.pory"
	.string "It's never enough!$"

MtCeram_TrainerBattle_A_Text_2:
# 434 "data//maps/MtCeram/scripts.pory"
	.string "Since it's so hot here, you sweat more.\n"
	.string "And sweat is good!$"

MtCeram_TrainerBattle_B_Text_0:
# 441 "data//maps/MtCeram/scripts.pory"
	.string "I'm a firefighter! I'm training against\n"
	.string "all the FIRE types here. You look like\l"
	.string "you could use a dowsing of water!$"

MtCeram_TrainerBattle_B_Text_1:
# 441 "data//maps/MtCeram/scripts.pory"
	.string "You can't be extinguished!$"

MtCeram_TrainerBattle_B_Text_2:
# 442 "data//maps/MtCeram/scripts.pory"
	.string "Fire safety starts with awareness -\n"
	.string "stay safe, stay prepared!$"

MtCeram_TrainerBattle_C_Text_0:
# 449 "data//maps/MtCeram/scripts.pory"
	.string "My Sizzlepede loves preying on the\n"
	.string "Venipede around here!$"

MtCeram_TrainerBattle_C_Text_1:
# 449 "data//maps/MtCeram/scripts.pory"
	.string "You sizzle too much!$"

MtCeram_TrainerBattle_C_Text_2:
# 450 "data//maps/MtCeram/scripts.pory"
	.string "Sizzlepede and Venipede are sworn\n"
	.string "enemies, much like their evolutions.$"

MtCeram_TrainerBattle_D_Text_0:
# 457 "data//maps/MtCeram/scripts.pory"
	.string "I brought my sheep Pokémon here but\n"
	.string "their hair got singed in the heat!$"

MtCeram_TrainerBattle_D_Text_1:
# 457 "data//maps/MtCeram/scripts.pory"
	.string "I should go back down.$"

MtCeram_TrainerBattle_D_Text_2:
# 458 "data//maps/MtCeram/scripts.pory"
	.string "Pokémon Breeders specialise in a single\n"
	.string "group. I specialise in rearing sheep!$"

MtCeram_TrainerBattle_GRUNT1_Text_0:
# 464 "data//maps/MtCeram/scripts.pory"
	.string "Hey, kid! Where'd you come from?\n"
	.string "You're not supposed to be here.\p"
	.string "Why?\p"
	.string "Stop asking questions and get lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_1:
# 464 "data//maps/MtCeram/scripts.pory"
	.string "Fine! Don't get lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_2:
# 465 "data//maps/MtCeram/scripts.pory"
	.string "Team Somber has control of this\n"
	.string "mountain now! Well...except for you.$"

MtCeram_TrainerBattle_GRUNT2_Text_0:
# 472 "data//maps/MtCeram/scripts.pory"
	.string "We're going to get the dreamstone and\n"
	.string "Team Somber will reward us!\p"
	.string "Wait, you're not a grunt.\n"
	.string "Get out of here!$"

MtCeram_TrainerBattle_GRUNT2_Text_1:
# 472 "data//maps/MtCeram/scripts.pory"
	.string "I'm going to be punished for this!$"

MtCeram_TrainerBattle_GRUNT2_Text_2:
# 473 "data//maps/MtCeram/scripts.pory"
	.string "I love Team Somber! No wait...\n"
	.string "I love money!$"

MtCeram_EventScript_NPC1_Text_0:
# 496 "data//maps/MtCeram/scripts.pory"
	.string "If I jump over this ledge, I won't be\n"
	.string "able to return! So I do my jogging here.$"

MtCeram_EventScript_NPC2_Text_0:
# 502 "data//maps/MtCeram/scripts.pory"
	.string "If you're here, that means you've got\n"
	.string "two gym badges, right?\p"
	.string "To take part in the Pokémon\n"
	.string "Championship, you'll need all eight\l"
	.string "badges.$"

MtCeram_EventScript_NPC3_Text_0:
# 509 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot!$"

MtCeram_EventScript_NPC3_Text_1:
# 511 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot! Don't\n"
	.string "forget to stay hydrated!$"

MtCeram_EventScript_NPCNurse_Text_0:
# 526 "data//maps/MtCeram/scripts.pory"
	.string "Chansey and I have been hiding from\n"
	.string "these thugs behind this tree...although\l"
	.string "Chansey can't hide herself too well.$"

MtCeram_EventScript_NPCNurse_Text_1:
# 532 "data//maps/MtCeram/scripts.pory"
	.string "Don't worry, Chansey! We're safe here.\p"
	.string "Meanwhile, if you have a Heal Pass,\n"
	.string "I can heal your Pokémon!$"

MtCeram_EventScript_Gabrielle_Text_0:
# 541 "data//maps/MtCeram/scripts.pory"
	.string "Gabrielle$"

MtCeram_EventScript_Gabrielle_Text_1:
# 542 "data//maps/MtCeram/scripts.pory"
	.string "Why do I have to be punished every\n"
	.string "time? I'm trying my best! I don't want\l"
	.string "to steal other people's stuff but I'm\l"
	.string "still doing it for the team.\p"
	.string "It's not fair!\p"
	.string "...$"

MtCeram_EventScript_Gabrielle_Text_2:
# 551 "data//maps/MtCeram/scripts.pory"
	.string "Don't look at me like that! You don't\n"
	.string "know what its like...$"
