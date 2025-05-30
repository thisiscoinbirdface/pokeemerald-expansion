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
# 32 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtCeram_Charizard_5
# 72 "data//maps/MtCeram/scripts.pory"
	release
MtCeram_Charizard_4:
# 74 "data//maps/MtCeram/scripts.pory"
	releaseall
	end

MtCeram_Charizard_2:
# 23 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_0
# 24 "data//maps/MtCeram/scripts.pory"
	releaseall
	end

MtCeram_Charizard_5:
# 33 "data//maps/MtCeram/scripts.pory"
	fadeoutbgm 1
# 34 "data//maps/MtCeram/scripts.pory"
	playse MUS_RG_POKE_FLUTE
# 35 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_2
# 36 "data//maps/MtCeram/scripts.pory"
	delay 128
# 37 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_3
# 38 "data//maps/MtCeram/scripts.pory"
	release
# 39 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_0
# 40 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 41 "data//maps/MtCeram/scripts.pory"
	delay 30
# 42 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_1
# 43 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 44 "data//maps/MtCeram/scripts.pory"
	delay 60
# 45 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_2
# 46 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 47 "data//maps/MtCeram/scripts.pory"
	delay 60
# 48 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_3
# 49 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 50 "data//maps/MtCeram/scripts.pory"
	delay 16
# 51 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 52 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_4
# 53 "data//maps/MtCeram/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 48
# 54 "data//maps/MtCeram/scripts.pory"
	dowildbattle
# 57 "data//maps/MtCeram/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 58 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtCeram_Charizard_9
MtCeram_Charizard_8:
# 62 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtCeram_Charizard_12
MtCeram_Charizard_11:
# 66 "data//maps/MtCeram/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtCeram_Charizard_14
	goto MtCeram_Charizard_4

MtCeram_Charizard_9:
# 59 "data//maps/MtCeram/scripts.pory"
	removeobject 18
# 60 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_8

MtCeram_Charizard_12:
# 63 "data//maps/MtCeram/scripts.pory"
	removeobject 18
# 64 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_CERAM_CHARIZARD
	goto MtCeram_Charizard_11

MtCeram_Charizard_14:
# 67 "data//maps/MtCeram/scripts.pory"
	applymovement 18, MtCeram_Charizard_Movement_4
# 68 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Charizard_Text_5
# 69 "data//maps/MtCeram/scripts.pory"
	release
	goto MtCeram_Charizard_4


MtCeram_Eavesdrop_Trigger0::
# 85 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger0_2
# 86 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 87 "data//maps/MtCeram/scripts.pory"
	lockall
# 88 "data//maps/MtCeram/scripts.pory"
	delay 16
# 89 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 90 "data//maps/MtCeram/scripts.pory"
	delay 16
# 92 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 93 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 94 "data//maps/MtCeram/scripts.pory"
	release
# 96 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger0_Movement_1
# 97 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 99 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger0_2:
	end


MtCeram_Eavesdrop_Trigger1::
# 104 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger1_2
# 105 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 106 "data//maps/MtCeram/scripts.pory"
	lockall
# 107 "data//maps/MtCeram/scripts.pory"
	delay 16
# 108 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 109 "data//maps/MtCeram/scripts.pory"
	delay 16
# 111 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 112 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 113 "data//maps/MtCeram/scripts.pory"
	release
# 115 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger1_Movement_0
# 116 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 118 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger1_2:
	end


MtCeram_Eavesdrop_Trigger2::
# 123 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger2_2
# 124 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 125 "data//maps/MtCeram/scripts.pory"
	lockall
# 126 "data//maps/MtCeram/scripts.pory"
	delay 16
# 127 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 128 "data//maps/MtCeram/scripts.pory"
	delay 16
# 130 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 131 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 132 "data//maps/MtCeram/scripts.pory"
	release
# 134 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger2_Movement_0
# 135 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 137 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger2_2:
	end


MtCeram_Eavesdrop_Trigger3::
# 142 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger3_2
# 143 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 144 "data//maps/MtCeram/scripts.pory"
	lockall
# 145 "data//maps/MtCeram/scripts.pory"
	delay 16
# 146 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 147 "data//maps/MtCeram/scripts.pory"
	delay 16
# 149 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 150 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_1
# 151 "data//maps/MtCeram/scripts.pory"
	release
# 153 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger3_Movement_0
# 154 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 156 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger3_2:
	end


MtCeram_EventScript_Eavesdrop::
# 162 "data//maps/MtCeram/scripts.pory"
	lockall
# 163 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_0
# 165 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 166 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_0
# 167 "data//maps/MtCeram/scripts.pory"
	release
# 169 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 170 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_1
# 171 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 172 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 175 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 176 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 177 "data//maps/MtCeram/scripts.pory"
	delay 16
# 178 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 179 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_2
# 180 "data//maps/MtCeram/scripts.pory"
	release
# 181 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 182 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 183 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_4
# 184 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 185 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 186 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_5
# 187 "data//maps/MtCeram/scripts.pory"
	release
# 188 "data//maps/MtCeram/scripts.pory"
	delay 16
# 189 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_4
# 190 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 191 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 192 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_6
# 193 "data//maps/MtCeram/scripts.pory"
	release
# 194 "data//maps/MtCeram/scripts.pory"
	delay 8
# 195 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 196 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 197 "data//maps/MtCeram/scripts.pory"
	delay 16
# 198 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 199 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_7
# 200 "data//maps/MtCeram/scripts.pory"
	release
# 203 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_5
# 204 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_5
# 205 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 208 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT1
# 209 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT2
# 210 "data//maps/MtCeram/scripts.pory"
	delay 8
# 213 "data//maps/MtCeram/scripts.pory"
	special SpawnCameraObject
# 214 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeram_EventScript_Eavesdrop_Movement_6
# 215 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 216 "data//maps/MtCeram/scripts.pory"
	special RemoveCameraObject
# 218 "data//maps/MtCeram/scripts.pory"
	delay 8
# 221 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_7
# 222 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 223 "data//maps/MtCeram/scripts.pory"
	delay 16
# 224 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 225 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_8
# 226 "data//maps/MtCeram/scripts.pory"
	release
# 229 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_8
# 230 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 231 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 233 "data//maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 235 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 238 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_BeforePeak_Trigger0::
# 267 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger0_2
# 268 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 269 "data//maps/MtCeram/scripts.pory"
	lockall
# 270 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger0_Movement_0
# 271 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 272 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger0_2:
	end


MtCeram_BeforePeak_Trigger1::
# 277 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger1_2
# 279 "data//maps/MtCeram/scripts.pory"
	lockall
# 280 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 281 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger1_Movement_0
# 282 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 283 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger1_2:
	end


MtCeram_EventScript_BeforePeakBattle::
# 289 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_0
# 290 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 291 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 292 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_0
# 293 "data//maps/MtCeram/scripts.pory"
	release
# 294 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 295 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 296 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 297 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 298 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_1
# 299 "data//maps/MtCeram/scripts.pory"
	release
# 300 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 301 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 302 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 303 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_2
# 304 "data//maps/MtCeram/scripts.pory"
	release
# 305 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 306 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 307 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 308 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 309 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_3
# 310 "data//maps/MtCeram/scripts.pory"
	release
# 311 "data//maps/MtCeram/scripts.pory"
	delay 16
# 313 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 314 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 315 "data//maps/MtCeram/scripts.pory"
	delay 16
# 316 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_Charizard_Movement_0
# 317 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_Charizard_Movement_0
# 318 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_0
# 319 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 320 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 321 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_4
# 322 "data//maps/MtCeram/scripts.pory"
	release
# 325 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 326 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_5
# 327 "data//maps/MtCeram/scripts.pory"
	release
# 328 "data//maps/MtCeram/scripts.pory"
	delay 8
# 329 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Charizard_Movement_4
# 330 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 331 "data//maps/MtCeram/scripts.pory"
	delay 8
# 332 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 333 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_6
# 334 "data//maps/MtCeram/scripts.pory"
	release
# 335 "data//maps/MtCeram/scripts.pory"
	fadeoutbgm 0
# 338 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 339 "data//maps/MtCeram/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 340 "data//maps/MtCeram/scripts.pory"
	waitse
# 341 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 342 "data//maps/MtCeram/scripts.pory"
	waitmoncry
# 343 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 344 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_7
# 345 "data//maps/MtCeram/scripts.pory"
	release
# 346 "data//maps/MtCeram/scripts.pory"
	delay 8
# 347 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 348 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_8
# 349 "data//maps/MtCeram/scripts.pory"
	release
# 350 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 351 "data//maps/MtCeram/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 353 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_2
# 354 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 358 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_Eavesdrop_Trigger0_Text_0
# 359 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_9
# 360 "data//maps/MtCeram/scripts.pory"
	release
# 361 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_3
# 362 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 365 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 366 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 367 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 368 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 369 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_10
# 370 "data//maps/MtCeram/scripts.pory"
	release
# 371 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_4
# 372 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 373 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 374 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_11
# 375 "data//maps/MtCeram/scripts.pory"
	release
# 376 "data//maps/MtCeram/scripts.pory"
	delay 8
# 377 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 378 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_12
# 379 "data//maps/MtCeram/scripts.pory"
	release
# 381 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_EventScript_BeforePeakBattle_Movement_5
# 382 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 385 "data//maps/MtCeram/scripts.pory"
	trainerbattle_no_intro TRAINER_MTCERAM_GRUNT_DOUBLE, MtCeram_EventScript_BeforePeakBattle_Text_13
# 388 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 389 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_14
# 390 "data//maps/MtCeram/scripts.pory"
	release
# 391 "data//maps/MtCeram/scripts.pory"
	delay 8
# 392 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_3
# 393 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_15
# 394 "data//maps/MtCeram/scripts.pory"
	release
# 395 "data//maps/MtCeram/scripts.pory"
	delay 8
# 396 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Eavesdrop_Text_1
# 397 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_16
# 398 "data//maps/MtCeram/scripts.pory"
	release
# 401 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 402 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT1
# 403 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT2
# 404 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_GAB
# 405 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPKOHLA
# 406 "data//maps/MtCeram/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 408 "data//maps/MtCeram/scripts.pory"
	fadedefaultbgm
# 411 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_PEAK
# 413 "data//maps/MtCeram/scripts.pory"
	releaseall
	end


MtCeram_TrainerBattle_A::
# 432 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_A, MtCeram_TrainerBattle_A_Text_0, MtCeram_TrainerBattle_A_Text_1
# 433 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_A_Text_2
# 434 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_B::
# 440 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_B, MtCeram_TrainerBattle_B_Text_0, MtCeram_TrainerBattle_B_Text_1
# 441 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_B_Text_2
# 442 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_C::
# 448 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_C, MtCeram_TrainerBattle_C_Text_0, MtCeram_TrainerBattle_C_Text_1
# 449 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_C_Text_2
# 450 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_D::
# 456 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_D, MtCeram_TrainerBattle_D_Text_0, MtCeram_TrainerBattle_D_Text_1
# 457 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_D_Text_2
# 458 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT1::
# 463 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT1, MtCeram_TrainerBattle_GRUNT1_Text_0, MtCeram_TrainerBattle_GRUNT1_Text_1
# 464 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT1_Text_2
# 465 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_GRUNT2::
# 471 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_GRUNT2, MtCeram_TrainerBattle_GRUNT2_Text_0, MtCeram_TrainerBattle_GRUNT2_Text_1
# 472 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_GRUNT2_Text_2
# 473 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_EventScript_NPC1::
# 495 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC1_Text_0, MSGBOX_NPC
	end


MtCeram_EventScript_NPC2::
# 501 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC2_Text_0, MSGBOX_NPC
	end


MtCeram_EventScript_NPC3::
# 507 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_FRESH_WATER, MtCeram_EventScript_NPC3_2
# 510 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_1, MSGBOX_NPC
# 511 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 512 "data//maps/MtCeram/scripts.pory"
	release
# 513 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_FRESH_WATER
MtCeram_EventScript_NPC3_1:
	end

MtCeram_EventScript_NPC3_2:
# 508 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_0, MSGBOX_NPC
	goto MtCeram_EventScript_NPC3_1


MtCeram_EventScript_NPCNurse::
# 522 "data//maps/MtCeram/scripts.pory"
	lockall
# 523 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 525 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_0
# 526 "data//maps/MtCeram/scripts.pory"
	release
# 527 "data//maps/MtCeram/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 528 "data//maps/MtCeram/scripts.pory"
	applymovement 24, MtCeram_EventScript_NPCNurse_Movement_0
# 529 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 530 "data//maps/MtCeram/scripts.pory"
	delay 24
# 531 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_1
# 532 "data//maps/MtCeram/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 534 "data//maps/MtCeram/scripts.pory"
	releaseall
	end


MtCeram_EventScript_Gabrielle::
# 539 "data//maps/MtCeram/scripts.pory"
	lockall
# 540 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Gabrielle_Text_0
# 541 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_1
# 542 "data//maps/MtCeram/scripts.pory"
	release
# 543 "data//maps/MtCeram/scripts.pory"
	delay 30
# 544 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_Charizard_Movement_0
# 545 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 546 "data//maps/MtCeram/scripts.pory"
	release
# 547 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 548 "data//maps/MtCeram/scripts.pory"
	delay 20
# 549 "data//maps/MtCeram/scripts.pory"
	speakername MtCeram_EventScript_Gabrielle_Text_0
# 550 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_2
# 551 "data//maps/MtCeram/scripts.pory"
	release
# 552 "data//maps/MtCeram/scripts.pory"
	applymovement 5, MtCeram_EventScript_Gabrielle_Movement_0
# 553 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 554 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


# 39 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_0:
# 39 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 42 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_1:
# 42 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
# 42 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 45 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_2:
# 45 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
# 45 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 48 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_3:
# 48 "data//maps/MtCeram/scripts.pory"
	face_down
# 48 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 67 "data//maps/MtCeram/scripts.pory"
MtCeram_Charizard_Movement_4:
# 67 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 89 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_0:
# 89 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 89 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 96 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_1:
# 96 "data//maps/MtCeram/scripts.pory"
	walk_up
# 96 "data//maps/MtCeram/scripts.pory"
	walk_left
# 96 "data//maps/MtCeram/scripts.pory"
	walk_left
# 96 "data//maps/MtCeram/scripts.pory"
	walk_up
# 96 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 115 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger1_Movement_0:
# 115 "data//maps/MtCeram/scripts.pory"
	walk_up
# 115 "data//maps/MtCeram/scripts.pory"
	walk_left
# 115 "data//maps/MtCeram/scripts.pory"
	walk_left
# 115 "data//maps/MtCeram/scripts.pory"
	walk_left
# 115 "data//maps/MtCeram/scripts.pory"
	walk_up
# 115 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 134 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger2_Movement_0:
# 134 "data//maps/MtCeram/scripts.pory"
	walk_up
# 134 "data//maps/MtCeram/scripts.pory"
	walk_left
# 134 "data//maps/MtCeram/scripts.pory"
	walk_left
# 134 "data//maps/MtCeram/scripts.pory"
	walk_left
# 134 "data//maps/MtCeram/scripts.pory"
	walk_left
# 134 "data//maps/MtCeram/scripts.pory"
	walk_up
# 134 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 153 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger3_Movement_0:
# 153 "data//maps/MtCeram/scripts.pory"
	walk_up
# 153 "data//maps/MtCeram/scripts.pory"
	walk_left
# 153 "data//maps/MtCeram/scripts.pory"
	walk_left
# 153 "data//maps/MtCeram/scripts.pory"
	walk_left
# 153 "data//maps/MtCeram/scripts.pory"
	walk_left
# 153 "data//maps/MtCeram/scripts.pory"
	walk_left
# 153 "data//maps/MtCeram/scripts.pory"
	walk_up
# 153 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 163 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_0:
# 163 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 170 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_1:
# 170 "data//maps/MtCeram/scripts.pory"
	walk_right
# 170 "data//maps/MtCeram/scripts.pory"
	walk_right
# 170 "data//maps/MtCeram/scripts.pory"
	walk_up
# 170 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 175 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_2:
# 175 "data//maps/MtCeram/scripts.pory"
	jump_in_place_right
	step_end

# 181 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_3:
# 181 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
	step_end

# 189 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_4:
# 189 "data//maps/MtCeram/scripts.pory"
	jump_in_place_left
	step_end

# 203 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_5:
# 203 "data//maps/MtCeram/scripts.pory"
	walk_right
# 203 "data//maps/MtCeram/scripts.pory"
	walk_right
# 203 "data//maps/MtCeram/scripts.pory"
	walk_right
# 203 "data//maps/MtCeram/scripts.pory"
	walk_right
# 203 "data//maps/MtCeram/scripts.pory"
	walk_right
# 203 "data//maps/MtCeram/scripts.pory"
	walk_right
# 203 "data//maps/MtCeram/scripts.pory"
	walk_right
# 203 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 214 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_6:
# 214 "data//maps/MtCeram/scripts.pory"
	walk_down
# 214 "data//maps/MtCeram/scripts.pory"
	walk_down
# 214 "data//maps/MtCeram/scripts.pory"
	walk_left
# 214 "data//maps/MtCeram/scripts.pory"
	walk_left
	step_end

# 221 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_7:
# 221 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 221 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 229 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_8:
# 229 "data//maps/MtCeram/scripts.pory"
	walk_down
# 229 "data//maps/MtCeram/scripts.pory"
	walk_right
# 229 "data//maps/MtCeram/scripts.pory"
	walk_right
# 229 "data//maps/MtCeram/scripts.pory"
	walk_right
# 229 "data//maps/MtCeram/scripts.pory"
	walk_right
# 229 "data//maps/MtCeram/scripts.pory"
	walk_up
# 229 "data//maps/MtCeram/scripts.pory"
	walk_up
# 229 "data//maps/MtCeram/scripts.pory"
	walk_right
# 229 "data//maps/MtCeram/scripts.pory"
	walk_right
# 229 "data//maps/MtCeram/scripts.pory"
	walk_right
# 229 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 270 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger0_Movement_0:
# 270 "data//maps/MtCeram/scripts.pory"
	walk_up
# 270 "data//maps/MtCeram/scripts.pory"
	walk_up
# 270 "data//maps/MtCeram/scripts.pory"
	walk_up
# 270 "data//maps/MtCeram/scripts.pory"
	walk_left
# 270 "data//maps/MtCeram/scripts.pory"
	walk_left
# 270 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 281 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger1_Movement_0:
# 281 "data//maps/MtCeram/scripts.pory"
	walk_up
# 281 "data//maps/MtCeram/scripts.pory"
	walk_up
# 281 "data//maps/MtCeram/scripts.pory"
	walk_up
# 281 "data//maps/MtCeram/scripts.pory"
	walk_left
# 281 "data//maps/MtCeram/scripts.pory"
	walk_left
# 281 "data//maps/MtCeram/scripts.pory"
	walk_left
# 281 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 289 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_0:
# 289 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
	step_end

# 313 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_1:
# 313 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 353 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_2:
# 353 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 361 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_3:
# 361 "data//maps/MtCeram/scripts.pory"
	walk_down
# 361 "data//maps/MtCeram/scripts.pory"
	walk_right
# 361 "data//maps/MtCeram/scripts.pory"
	walk_right
# 361 "data//maps/MtCeram/scripts.pory"
	walk_down
# 361 "data//maps/MtCeram/scripts.pory"
	walk_down
# 361 "data//maps/MtCeram/scripts.pory"
	walk_down
# 361 "data//maps/MtCeram/scripts.pory"
	walk_down
# 361 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 371 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_4:
# 371 "data//maps/MtCeram/scripts.pory"
	jump_in_place_down
# 371 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 381 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_5:
# 381 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

# 528 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_NPCNurse_Movement_0:
# 528 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
# 528 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 552 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Gabrielle_Movement_0:
# 552 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

MtCeram_Charizard_Text_0:
# 23 "data//maps/MtCeram/scripts.pory"
	.string "It's asleep...$"

MtCeram_Charizard_Text_1:
# 30 "data//maps/MtCeram/scripts.pory"
	.string "It's asleep...use Poké Flute?$"

MtCeram_Charizard_Text_2:
# 35 "data//maps/MtCeram/scripts.pory"
	.string "{PLAYER} played the Poke Flute.$"

MtCeram_Charizard_Text_3:
# 37 "data//maps/MtCeram/scripts.pory"
	.string "...$"

MtCeram_Charizard_Text_4:
# 52 "data//maps/MtCeram/scripts.pory"
	.string "The Charizard is furious!$"

MtCeram_Charizard_Text_5:
# 68 "data//maps/MtCeram/scripts.pory"
	.string "The Charizard grunts and falls back\n"
	.string "asleep. Better not disturb it again!$"

MtCeram_Eavesdrop_Trigger0_Text_0:
# 92 "data//maps/MtCeram/scripts.pory"
	.string "Kohla$"

MtCeram_Eavesdrop_Trigger0_Text_1:
# 93 "data//maps/MtCeram/scripts.pory"
	.string "{PLAYER} - what are you doing? Come\n"
	.string "here, you idiot!$"

MtCeram_EventScript_Eavesdrop_Text_0:
# 166 "data//maps/MtCeram/scripts.pory"
	.string "I've been spying on those two Team\n"
	.string "Somber Grunts. Don't make a sound!$"

MtCeram_EventScript_Eavesdrop_Text_1:
# 178 "data//maps/MtCeram/scripts.pory"
	.string "Grunt A$"

MtCeram_EventScript_Eavesdrop_Text_2:
# 179 "data//maps/MtCeram/scripts.pory"
	.string "...boss told us to be EXTRA careful not\n"
	.string "to let anyone up the mountain.$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 182 "data//maps/MtCeram/scripts.pory"
	.string "Grunt B$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 183 "data//maps/MtCeram/scripts.pory"
	.string "But where's the boss? And Gabrielle?$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 186 "data//maps/MtCeram/scripts.pory"
	.string "The boss found the dreamstone at the\n"
	.string "mountain peak! He's heading there now.\p"
	.string "As for Gabrielle...after her punishment\n"
	.string "for losing to that Tenebris Lab trainer\l"
	.string "twice...she's been a little down.$"

MtCeram_EventScript_Eavesdrop_Text_6:
# 192 "data//maps/MtCeram/scripts.pory"
	.string "Serves her right for losing! Team\n"
	.string "Somber doesn't need any losers!$"

MtCeram_EventScript_Eavesdrop_Text_7:
# 199 "data//maps/MtCeram/scripts.pory"
	.string "Yeah what a loser she is!\p"
	.string "Now lets go stand guard. We can't let\n"
	.string "anyone pass until the boss gets the\l"
	.string "dreamstone at the peak!$"

MtCeram_EventScript_Eavesdrop_Text_8:
# 225 "data//maps/MtCeram/scripts.pory"
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
# 292 "data//maps/MtCeram/scripts.pory"
	.string "That's enough of your mischief Team\n"
	.string "Somber! You're getting in the way of\l"
	.string "police business!$"

MtCeram_EventScript_BeforePeakBattle_Text_1:
# 298 "data//maps/MtCeram/scripts.pory"
	.string "You're just a kid. Where's the police?$"

MtCeram_EventScript_BeforePeakBattle_Text_2:
# 303 "data//maps/MtCeram/scripts.pory"
	.string "I'm not a kid! I'm the Ace Rookie of the\n"
	.string "Detective Academy, and I'm not going to\l"
	.string "let you steal the dreamstone!$"

MtCeram_EventScript_BeforePeakBattle_Text_3:
# 309 "data//maps/MtCeram/scripts.pory"
	.string "You alone? Against the two of us?$"

MtCeram_EventScript_BeforePeakBattle_Text_4:
# 321 "data//maps/MtCeram/scripts.pory"
	.string "The help arrives. But you're both just\n"
	.string "kids! Hahaha!$"

MtCeram_EventScript_BeforePeakBattle_Text_5:
# 326 "data//maps/MtCeram/scripts.pory"
	.string "{PLAYER}, I told you I don't need your\n"
	.string "help! You'll just get in the way.$"

MtCeram_EventScript_BeforePeakBattle_Text_6:
# 333 "data//maps/MtCeram/scripts.pory"
	.string "Now come on Team Somber! Bring it on!$"

MtCeram_EventScript_BeforePeakBattle_Text_7:
# 344 "data//maps/MtCeram/scripts.pory"
	.string "No! Charcadet!$"

MtCeram_EventScript_BeforePeakBattle_Text_8:
# 348 "data//maps/MtCeram/scripts.pory"
	.string "Hahaha! Your ace was a pushover, Ace\n"
	.string "Rookie!$"

MtCeram_EventScript_BeforePeakBattle_Text_9:
# 359 "data//maps/MtCeram/scripts.pory"
	.string "My Pokémon...I have to go and heal\n"
	.string "them...I couldn't stop Team Somber...$"

MtCeram_EventScript_BeforePeakBattle_Text_10:
# 369 "data//maps/MtCeram/scripts.pory"
	.string "And you? You want a beating too?$"

MtCeram_EventScript_BeforePeakBattle_Text_11:
# 374 "data//maps/MtCeram/scripts.pory"
	.string "Hey, aren't you the trainer that beat\n"
	.string "Gabrielle?$"

MtCeram_EventScript_BeforePeakBattle_Text_12:
# 378 "data//maps/MtCeram/scripts.pory"
	.string "Hey - yeah! But Gabrielle's just a loser.\p"
	.string "On the other hand, we're the real deal!\p"
	.string "Let's see what you've got!$"

MtCeram_EventScript_BeforePeakBattle_Text_13:
# 385 "data//maps/MtCeram/scripts.pory"
	.string "Argh! You stupid kid!$"

MtCeram_EventScript_BeforePeakBattle_Text_14:
# 389 "data//maps/MtCeram/scripts.pory"
	.string "How could you beat us?$"

MtCeram_EventScript_BeforePeakBattle_Text_15:
# 393 "data//maps/MtCeram/scripts.pory"
	.string "We-we've got to tell the boss...$"

MtCeram_EventScript_BeforePeakBattle_Text_16:
# 397 "data//maps/MtCeram/scripts.pory"
	.string "Yeah...c'mon let's hurry.\p"
	.string "{PLAYER} - you may have beaten us\n"
	.string "but you can't stop Team Somber from\l"
	.string "achieving its goal!\p"
	.string "We're warning you - DON'T follow us up\n"
	.string "the mountain peak, or you'll be sorry!$"

MtCeram_TrainerBattle_A_Text_0:
# 432 "data//maps/MtCeram/scripts.pory"
	.string "These mountains are the perfect\n"
	.string "training spot. Don't you agree?$"

MtCeram_TrainerBattle_A_Text_1:
# 432 "data//maps/MtCeram/scripts.pory"
	.string "It's never enough!$"

MtCeram_TrainerBattle_A_Text_2:
# 433 "data//maps/MtCeram/scripts.pory"
	.string "Since it's so hot here, you sweat more.\n"
	.string "And sweat is good!$"

MtCeram_TrainerBattle_B_Text_0:
# 440 "data//maps/MtCeram/scripts.pory"
	.string "I'm a firefighter! I'm training against\n"
	.string "all the FIRE types here. You look like\l"
	.string "you could use a dowsing of water!$"

MtCeram_TrainerBattle_B_Text_1:
# 440 "data//maps/MtCeram/scripts.pory"
	.string "You can't be extinguished!$"

MtCeram_TrainerBattle_B_Text_2:
# 441 "data//maps/MtCeram/scripts.pory"
	.string "Fire safety starts with awareness -\n"
	.string "stay safe, stay prepared!$"

MtCeram_TrainerBattle_C_Text_0:
# 448 "data//maps/MtCeram/scripts.pory"
	.string "My Sizzlepede loves preying on the\n"
	.string "Venipede around here!$"

MtCeram_TrainerBattle_C_Text_1:
# 448 "data//maps/MtCeram/scripts.pory"
	.string "You sizzle too much!$"

MtCeram_TrainerBattle_C_Text_2:
# 449 "data//maps/MtCeram/scripts.pory"
	.string "Sizzlepede and Venipede are sworn\n"
	.string "enemies, much like their evolutions.$"

MtCeram_TrainerBattle_D_Text_0:
# 456 "data//maps/MtCeram/scripts.pory"
	.string "I brought my sheep Pokémon here but\n"
	.string "their hair got singed in the heat!$"

MtCeram_TrainerBattle_D_Text_1:
# 456 "data//maps/MtCeram/scripts.pory"
	.string "I should go back down.$"

MtCeram_TrainerBattle_D_Text_2:
# 457 "data//maps/MtCeram/scripts.pory"
	.string "Pokémon Breeders specialise in a single\n"
	.string "group. I specialise in rearing sheep!$"

MtCeram_TrainerBattle_GRUNT1_Text_0:
# 463 "data//maps/MtCeram/scripts.pory"
	.string "Hey, kid! Where'd you come from?\n"
	.string "You're not supposed to be here.\p"
	.string "Why?\p"
	.string "Stop asking questions and get lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_1:
# 463 "data//maps/MtCeram/scripts.pory"
	.string "Fine! Don't get lost!$"

MtCeram_TrainerBattle_GRUNT1_Text_2:
# 464 "data//maps/MtCeram/scripts.pory"
	.string "Team Somber has control of this\n"
	.string "mountain now! Well...except for you.$"

MtCeram_TrainerBattle_GRUNT2_Text_0:
# 471 "data//maps/MtCeram/scripts.pory"
	.string "We're going to get the dreamstone and\n"
	.string "Team Somber will reward us!\p"
	.string "Wait, you're not a grunt.\n"
	.string "Get out of here!$"

MtCeram_TrainerBattle_GRUNT2_Text_1:
# 471 "data//maps/MtCeram/scripts.pory"
	.string "I'm going to be punished for this!$"

MtCeram_TrainerBattle_GRUNT2_Text_2:
# 472 "data//maps/MtCeram/scripts.pory"
	.string "I love Team Somber! No wait...\n"
	.string "I love money!$"

MtCeram_EventScript_NPC1_Text_0:
# 495 "data//maps/MtCeram/scripts.pory"
	.string "If I jump over this ledge, I won't be\n"
	.string "able to return! So I do my jogging here.$"

MtCeram_EventScript_NPC2_Text_0:
# 501 "data//maps/MtCeram/scripts.pory"
	.string "If you're here, that means you've got\n"
	.string "two gym badges, right?\p"
	.string "To take part in the Pokémon\n"
	.string "Championship, you'll need all eight\l"
	.string "badges.$"

MtCeram_EventScript_NPC3_Text_0:
# 508 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot!$"

MtCeram_EventScript_NPC3_Text_1:
# 510 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot! Don't\n"
	.string "forget to stay hydrated!$"

MtCeram_EventScript_NPCNurse_Text_0:
# 525 "data//maps/MtCeram/scripts.pory"
	.string "Chansey and I have been hiding from\n"
	.string "these thugs behind this tree...although\l"
	.string "Chansey can't hide herself too well.$"

MtCeram_EventScript_NPCNurse_Text_1:
# 531 "data//maps/MtCeram/scripts.pory"
	.string "Don't worry, Chansey! We're safe here.\p"
	.string "Meanwhile, if you have a Heal Pass,\n"
	.string "I can heal your Pokémon!$"

MtCeram_EventScript_Gabrielle_Text_0:
# 540 "data//maps/MtCeram/scripts.pory"
	.string "Gabrielle$"

MtCeram_EventScript_Gabrielle_Text_1:
# 541 "data//maps/MtCeram/scripts.pory"
	.string "Why do I have to be punished every\n"
	.string "time? I'm trying my best! I don't want\l"
	.string "to steal other people's stuff but I'm\l"
	.string "still doing it for the team.\p"
	.string "It's not fair!\p"
	.string "...$"

MtCeram_EventScript_Gabrielle_Text_2:
# 550 "data//maps/MtCeram/scripts.pory"
	.string "Don't look at me like that! You don't\n"
	.string "know what its like...$"
