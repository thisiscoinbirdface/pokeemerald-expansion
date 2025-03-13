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


MtCeram_Eavesdrop_Trigger0::
# 25 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger0_2
# 27 "data//maps/MtCeram/scripts.pory"
	lockall
# 28 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 29 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 30 "data//maps/MtCeram/scripts.pory"
	release
# 32 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger0_Movement_1
# 33 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 35 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger0_2:
	end


MtCeram_Eavesdrop_Trigger1::
# 40 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger1_2
# 42 "data//maps/MtCeram/scripts.pory"
	lockall
# 43 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 44 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 45 "data//maps/MtCeram/scripts.pory"
	release
# 47 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger1_Movement_0
# 48 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 50 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger1_2:
	end


MtCeram_Eavesdrop_Trigger2::
# 55 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger2_2
# 57 "data//maps/MtCeram/scripts.pory"
	lockall
# 58 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 59 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 60 "data//maps/MtCeram/scripts.pory"
	release
# 62 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger2_Movement_0
# 63 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 65 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger2_2:
	end


MtCeram_Eavesdrop_Trigger3::
# 70 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger3_2
# 72 "data//maps/MtCeram/scripts.pory"
	lockall
# 73 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 74 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 75 "data//maps/MtCeram/scripts.pory"
	release
# 77 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger3_Movement_0
# 78 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 80 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger3_2:
	end


MtCeram_EventScript_Eavesdrop::
# 86 "data//maps/MtCeram/scripts.pory"
	lockall
# 87 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_0
# 89 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_0
# 90 "data//maps/MtCeram/scripts.pory"
	release
# 93 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_1
# 94 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 95 "data//maps/MtCeram/scripts.pory"
	delay 30
# 96 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_1
# 97 "data//maps/MtCeram/scripts.pory"
	release
# 98 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 99 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_2
# 100 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_1
# 101 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_3
# 102 "data//maps/MtCeram/scripts.pory"
	release
# 103 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_4
# 104 "data//maps/MtCeram/scripts.pory"
	release
# 107 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 108 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 109 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 112 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT1
# 113 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT2
# 116 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_4
# 117 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_5
# 118 "data//maps/MtCeram/scripts.pory"
	release
# 121 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_5
# 122 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 123 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 126 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 129 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_BeforePeak_Trigger0::
# 158 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger0_2
# 160 "data//maps/MtCeram/scripts.pory"
	lockall
# 161 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger0_Movement_0
# 162 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 163 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger0_2:
	end


MtCeram_BeforePeak_Trigger1::
# 168 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger1_2
# 170 "data//maps/MtCeram/scripts.pory"
	lockall
# 171 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger1_Movement_0
# 172 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 173 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger1_2:
	end


MtCeram_EventScript_BeforePeakBattle::
# 180 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_0
# 181 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 182 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_0
# 183 "data//maps/MtCeram/scripts.pory"
	release
# 184 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 185 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 186 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 187 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_1
# 188 "data//maps/MtCeram/scripts.pory"
	release
# 189 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 190 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 191 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_2
# 192 "data//maps/MtCeram/scripts.pory"
	release
# 193 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 194 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 195 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 196 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_3
# 197 "data//maps/MtCeram/scripts.pory"
	release
# 200 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 201 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 202 "data//maps/MtCeram/scripts.pory"
	delay 16
# 203 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 204 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 205 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 206 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 207 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_4
# 208 "data//maps/MtCeram/scripts.pory"
	release
# 211 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_5
# 212 "data//maps/MtCeram/scripts.pory"
	release
# 213 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_2
# 214 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 215 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_6
# 216 "data//maps/MtCeram/scripts.pory"
	release
# 219 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 220 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_7
# 221 "data//maps/MtCeram/scripts.pory"
	release
# 222 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 223 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_3
# 224 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 228 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_8
# 229 "data//maps/MtCeram/scripts.pory"
	release
# 230 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_4
# 231 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 232 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPKOHLA
# 235 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 236 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 237 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 238 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_9
# 239 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_5
# 240 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 241 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_10
# 242 "data//maps/MtCeram/scripts.pory"
	release
# 244 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_EventScript_BeforePeakBattle_Movement_6
# 245 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 252 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_11
# 253 "data//maps/MtCeram/scripts.pory"
	release
# 257 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 258 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT1
# 259 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT2
# 260 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_GAB
# 261 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 265 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_PEAK
# 267 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_TrainerBattle_A::
# 285 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_A, MtCeram_TrainerBattle_A_Text_0, MtCeram_TrainerBattle_A_Text_1
# 286 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_A_Text_2
# 287 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_B::
# 293 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_B, MtCeram_TrainerBattle_B_Text_0, MtCeram_TrainerBattle_B_Text_1
# 294 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_B_Text_2
# 295 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_C::
# 301 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_C, MtCeram_TrainerBattle_C_Text_0, MtCeram_TrainerBattle_C_Text_1
# 302 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_C_Text_2
# 303 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_TrainerBattle_D::
# 309 "data//maps/MtCeram/scripts.pory"
	trainerbattle_single TRAINER_MTCERAM_D, MtCeram_TrainerBattle_D_Text_0, MtCeram_TrainerBattle_D_Text_1
# 310 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_TrainerBattle_D_Text_2
# 311 "data//maps/MtCeram/scripts.pory"
	release
	end


MtCeram_EventScript_NPC1::
# 334 "data//maps/MtCeram/scripts.pory"
	lockall
# 335 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 336 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC1_Text_0
# 337 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_EventScript_NPC2::
# 341 "data//maps/MtCeram/scripts.pory"
	lockall
# 342 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 343 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC2_Text_0
# 344 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_EventScript_NPC3::
# 348 "data//maps/MtCeram/scripts.pory"
	lockall
# 349 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 350 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_FRESH_WATER, MtCeram_EventScript_NPC3_2
# 353 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_1
# 354 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 355 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_FRESH_WATER
MtCeram_EventScript_NPC3_1:
# 358 "data//maps/MtCeram/scripts.pory"
	releaseall
	return

MtCeram_EventScript_NPC3_2:
# 351 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPC3_Text_0
	goto MtCeram_EventScript_NPC3_1


MtCeram_EventScript_NPCNurse::
# 364 "data//maps/MtCeram/scripts.pory"
	lockall
# 366 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_NURSE, MtCeram_EventScript_NPCNurse_2
# 369 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_1
# 370 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_2
# 371 "data//maps/MtCeram/scripts.pory"
	release
# 372 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_REVIVE
# 373 "data//maps/MtCeram/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 374 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_NURSE
MtCeram_EventScript_NPCNurse_1:
# 377 "data//maps/MtCeram/scripts.pory"
	releaseall
	return

MtCeram_EventScript_NPCNurse_2:
# 367 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_NPCNurse_Text_0
	goto MtCeram_EventScript_NPCNurse_1


MtCeram_EventScript_Gabrielle::
# 381 "data//maps/MtCeram/scripts.pory"
	lockall
# 382 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_0
# 383 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
# 384 "data//maps/MtCeram/scripts.pory"
	release
# 385 "data//maps/MtCeram/scripts.pory"
	delay 30
# 386 "data//maps/MtCeram/scripts.pory"
	faceplayer
# 387 "data//maps/MtCeram/scripts.pory"
	delay 30
# 388 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Gabrielle_Text_1
# 389 "data//maps/MtCeram/scripts.pory"
	release
# 390 "data//maps/MtCeram/scripts.pory"
	face_left
# 391 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


# 28 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_0:
# 28 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 32 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_1:
# 32 "data//maps/MtCeram/scripts.pory"
	walk_up
# 32 "data//maps/MtCeram/scripts.pory"
	walk_left
# 32 "data//maps/MtCeram/scripts.pory"
	walk_left
# 32 "data//maps/MtCeram/scripts.pory"
	walk_up
# 32 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 47 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger1_Movement_0:
# 47 "data//maps/MtCeram/scripts.pory"
	walk_up
# 47 "data//maps/MtCeram/scripts.pory"
	walk_left
# 47 "data//maps/MtCeram/scripts.pory"
	walk_left
# 47 "data//maps/MtCeram/scripts.pory"
	walk_left
# 47 "data//maps/MtCeram/scripts.pory"
	walk_up
# 47 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 62 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger2_Movement_0:
# 62 "data//maps/MtCeram/scripts.pory"
	walk_up
# 62 "data//maps/MtCeram/scripts.pory"
	walk_left
# 62 "data//maps/MtCeram/scripts.pory"
	walk_left
# 62 "data//maps/MtCeram/scripts.pory"
	walk_left
# 62 "data//maps/MtCeram/scripts.pory"
	walk_left
# 62 "data//maps/MtCeram/scripts.pory"
	walk_up
# 62 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 77 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger3_Movement_0:
# 77 "data//maps/MtCeram/scripts.pory"
	walk_up
# 77 "data//maps/MtCeram/scripts.pory"
	walk_left
# 77 "data//maps/MtCeram/scripts.pory"
	walk_left
# 77 "data//maps/MtCeram/scripts.pory"
	walk_left
# 77 "data//maps/MtCeram/scripts.pory"
	walk_left
# 77 "data//maps/MtCeram/scripts.pory"
	walk_left
# 77 "data//maps/MtCeram/scripts.pory"
	walk_up
# 77 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 87 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_0:
# 87 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 93 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_1:
# 93 "data//maps/MtCeram/scripts.pory"
	jump_in_place_right
	step_end

# 98 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_2:
# 98 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
	step_end

# 107 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_3:
# 107 "data//maps/MtCeram/scripts.pory"
	walk_right
# 107 "data//maps/MtCeram/scripts.pory"
	walk_right
# 107 "data//maps/MtCeram/scripts.pory"
	walk_right
# 107 "data//maps/MtCeram/scripts.pory"
	walk_right
# 107 "data//maps/MtCeram/scripts.pory"
	walk_right
# 107 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 116 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_4:
# 116 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 121 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_5:
# 121 "data//maps/MtCeram/scripts.pory"
	walk_down
# 121 "data//maps/MtCeram/scripts.pory"
	walk_right
# 121 "data//maps/MtCeram/scripts.pory"
	walk_right
# 121 "data//maps/MtCeram/scripts.pory"
	walk_right
# 121 "data//maps/MtCeram/scripts.pory"
	walk_right
# 121 "data//maps/MtCeram/scripts.pory"
	walk_up
# 121 "data//maps/MtCeram/scripts.pory"
	walk_up
# 121 "data//maps/MtCeram/scripts.pory"
	walk_right
# 121 "data//maps/MtCeram/scripts.pory"
	walk_right
# 121 "data//maps/MtCeram/scripts.pory"
	walk_right
# 121 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 161 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger0_Movement_0:
# 161 "data//maps/MtCeram/scripts.pory"
	walk_up
# 161 "data//maps/MtCeram/scripts.pory"
	walk_up
# 161 "data//maps/MtCeram/scripts.pory"
	walk_up
# 161 "data//maps/MtCeram/scripts.pory"
	walk_left
# 161 "data//maps/MtCeram/scripts.pory"
	walk_left
# 161 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 171 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger1_Movement_0:
# 171 "data//maps/MtCeram/scripts.pory"
	walk_up
# 171 "data//maps/MtCeram/scripts.pory"
	walk_up
# 171 "data//maps/MtCeram/scripts.pory"
	walk_up
# 171 "data//maps/MtCeram/scripts.pory"
	walk_left
# 171 "data//maps/MtCeram/scripts.pory"
	walk_left
# 171 "data//maps/MtCeram/scripts.pory"
	walk_left
# 171 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 180 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_0:
# 180 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
	step_end

# 189 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_1:
# 189 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 213 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_2:
# 213 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 223 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_3:
# 223 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 230 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_4:
# 230 "data//maps/MtCeram/scripts.pory"
	walk_down
# 230 "data//maps/MtCeram/scripts.pory"
	walk_right
# 230 "data//maps/MtCeram/scripts.pory"
	walk_right
# 230 "data//maps/MtCeram/scripts.pory"
	walk_down
# 230 "data//maps/MtCeram/scripts.pory"
	walk_down
# 230 "data//maps/MtCeram/scripts.pory"
	walk_down
# 230 "data//maps/MtCeram/scripts.pory"
	walk_down
# 230 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 239 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_5:
# 239 "data//maps/MtCeram/scripts.pory"
	jump_in_place_down
# 239 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 244 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_6:
# 244 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

MtCeram_Eavesdrop_Trigger0_Text_0:
# 29 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: {PLAYER} - what are you doing?\n"
	.string "Come here, you idiot!$"

MtCeram_EventScript_Eavesdrop_Text_0:
# 89 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I've been spying on those two\n"
	.string "Team Somber Grunts. Don't make a sound!$"

MtCeram_EventScript_Eavesdrop_Text_1:
# 96 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: ...so the boss told us\n"
	.string "to be EXTRA careful not to let anyone\l"
	.string "up the mountain.$"

MtCeram_EventScript_Eavesdrop_Text_2:
# 99 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: But where is the boss?\n"
	.string "And GABRIELLE?$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 101 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: The boss found the\n"
	.string "dreamstone on top of the mountain!\l"
	.string "She's trying to climb it right now.\p"
	.string "As for GABRIELLE...well, after her\n"
	.string "punishment for losing to that Tenebris\l"
	.string "Lab trainer twice...she's been a little\l"
	.string "down.$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 103 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: Serves her right for\n"
	.string "losing! TEAM SOMBER doesn't need any\l"
	.string "losers!\p"
	.string "SOMBER GRUNT 1: Yeah what a loser she\n"
	.string "is! Now lets go stand guard. We can't let\l"
	.string "anyone pass until the boss gets the\l"
	.string "dreamstone at the peak!$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 117 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: Heard that? I've got to get that\n"
	.string "dreamstone before Team Somber! That's\l"
	.string "called responsibility - something you\l"
	.string "wouldn't know about.\p"
	.string "What? You're coming too? Hah! We're not\n"
	.string "buddies, {PLAYER}. I'm the one and\l"
	.string "only ACE ROOKIE, and I've told you\l"
	.string "before - I don't need your help, chum!$"

MtCeram_EventScript_BeforePeakBattle_Text_0:
# 182 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: That's enough of your mischief\n"
	.string "Team Somber! You're getting in the way\l"
	.string "of police business!$"

MtCeram_EventScript_BeforePeakBattle_Text_1:
# 187 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: You're just a kid.\n"
	.string "Where's the police?$"

MtCeram_EventScript_BeforePeakBattle_Text_2:
# 191 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I'm not a kid! I'm the ACE ROOKIE\n"
	.string "of the detective school, and I'm not\l"
	.string "going to let you steal the dreamstone!$"

MtCeram_EventScript_BeforePeakBattle_Text_3:
# 196 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: You alone against the\n"
	.string "two of us?$"

MtCeram_EventScript_BeforePeakBattle_Text_4:
# 207 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: The help arrives. But\n"
	.string "you're both just kids! Hahaha!$"

MtCeram_EventScript_BeforePeakBattle_Text_5:
# 211 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I told you I don't need your\n"
	.string "help! You'll just get in the way.$"

MtCeram_EventScript_BeforePeakBattle_Text_6:
# 215 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: Now come on TEAM SOMBER! Bring\n"
	.string "it on!$"

MtCeram_EventScript_BeforePeakBattle_Text_7:
# 220 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: No! CHARCADET!\p"
	.string "SOMBER GRUNT 1: Hahaha! Your ace was a\n"
	.string "pushover, ACE ROOKE!$"

MtCeram_EventScript_BeforePeakBattle_Text_8:
# 228 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: My {PKMN}...I have to go and heal\n"
	.string "them...I couldn't stop Team Somber...$"

MtCeram_EventScript_BeforePeakBattle_Text_9:
# 238 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: And you? You want a\n"
	.string "beating too?$"

MtCeram_EventScript_BeforePeakBattle_Text_10:
# 241 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: Hey, aren't you the\n"
	.string "trainer that beat GABRIELLE?\p"
	.string "SOMBER GRUNT 1: Yes you are! Let's see\n"
	.string "what you've got!$"

MtCeram_EventScript_BeforePeakBattle_Text_11:
# 252 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: How could you beat us?\p"
	.string "SOMBER GRUNT 2: We-we've got to tell\n"
	.string "the boss...SOMBER GRUNT 1: Yeah...c'mon\l"
	.string "let's hurry. {PLAYER} - you may have\l"
	.string "beaten us but you can't stop Team\l"
	.string "Somber from achieving our goal!$"

MtCeram_TrainerBattle_A_Text_0:
# 285 "data//maps/MtCeram/scripts.pory"
	.string "These mountains are the perfect\p"
	.string "training spot. Don't you agree?$"

MtCeram_TrainerBattle_A_Text_1:
# 285 "data//maps/MtCeram/scripts.pory"
	.string "It's never enough!$"

MtCeram_TrainerBattle_A_Text_2:
# 286 "data//maps/MtCeram/scripts.pory"
	.string "Since its so hot here, you sweat more.\n"
	.string "And sweat is good!$"

MtCeram_TrainerBattle_B_Text_0:
# 293 "data//maps/MtCeram/scripts.pory"
	.string "I love collecting rare {PKMN}.\p"
	.string "Bet your eyes will pop when\p"
	.string "you see what I caught here!$"

MtCeram_TrainerBattle_B_Text_1:
# 293 "data//maps/MtCeram/scripts.pory"
	.string "Is rarity not enough?$"

MtCeram_TrainerBattle_B_Text_2:
# 294 "data//maps/MtCeram/scripts.pory"
	.string "I love my {PKMN} as friends and\n"
	.string "partners...and collectibles!$"

MtCeram_TrainerBattle_C_Text_0:
# 301 "data//maps/MtCeram/scripts.pory"
	.string "My SIZZLEPEDE loves preying on the\n"
	.string "VENIPEDE around here!$"

MtCeram_TrainerBattle_C_Text_1:
# 301 "data//maps/MtCeram/scripts.pory"
	.string "You sizzle too much!$"

MtCeram_TrainerBattle_C_Text_2:
# 302 "data//maps/MtCeram/scripts.pory"
	.string "SIZZLEPEDE and VENIPEDE are sworn\n"
	.string "enemies, much like their evolutions.$"

MtCeram_TrainerBattle_D_Text_0:
# 309 "data//maps/MtCeram/scripts.pory"
	.string "I brought my sheep {PKMN} here\p"
	.string "but their hair is sizzling in the heat!$"

MtCeram_TrainerBattle_D_Text_1:
# 309 "data//maps/MtCeram/scripts.pory"
	.string "I should go back down.$"

MtCeram_TrainerBattle_D_Text_2:
# 310 "data//maps/MtCeram/scripts.pory"
	.string "Most {PKMN} Breeders specialise in a single\n"
	.string "group. I specialise in rearing sheep!$"

MtCeram_EventScript_NPC1_Text_0:
# 336 "data//maps/MtCeram/scripts.pory"
	.string "If I jump over this ledge, I won't be\n"
	.string "able to return! So I do my jogging here.$"

MtCeram_EventScript_NPC2_Text_0:
# 343 "data//maps/MtCeram/scripts.pory"
	.string "I saw a LARVESTA here the other day!\n"
	.string "But they're very rare. The constant\l"
	.string "SIZZLIPEDE and VENIPEDE fighting\l"
	.string "scare them away.$"

MtCeram_EventScript_NPC3_Text_0:
# 351 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot!$"

MtCeram_EventScript_NPC3_Text_1:
# 353 "data//maps/MtCeram/scripts.pory"
	.string "Oof! This place is unbearably hot! Don't\n"
	.string "forget to stay hydrated!$"

MtCeram_EventScript_NPCNurse_Text_0:
# 367 "data//maps/MtCeram/scripts.pory"
	.string "NURSE JOY: I wish I'd brought CHANSEY\n"
	.string "with me.$"

MtCeram_EventScript_NPCNurse_Text_1:
# 369 "data//maps/MtCeram/scripts.pory"
	.string "NURSE JOY: I didn't bring CHANSEY with\n"
	.string "me so I've been hiding from these thugs\l"
	.string "behind this tree.$"

MtCeram_EventScript_NPCNurse_Text_2:
# 370 "data//maps/MtCeram/scripts.pory"
	.string "NURSE JOY: I can't heal your {PKMN} but I\n"
	.string "do have these. Hope they come in handy!$"

MtCeram_EventScript_Gabrielle_Text_0:
# 382 "data//maps/MtCeram/scripts.pory"
	.string "GABRIELLE: Why do I have to be\n"
	.string "punished every time? I'm trying my\l"
	.string "best! I don't want to steal other\l"
	.string "people's stuff but I'm still doing it for\l"
	.string "the team. It's not fair!\p"
	.string "sniff...$"

MtCeram_EventScript_Gabrielle_Text_1:
# 388 "data//maps/MtCeram/scripts.pory"
	.string "GABRIELLE: Don't look at me like that!\n"
	.string "You don't know what its like...$"
