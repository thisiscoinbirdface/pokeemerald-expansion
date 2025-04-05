# 1 "data//maps/SilversunCity_SomberHQ/scripts.pory"

# 2 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_PROF, 1
# 3 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_MELEA, 2
# 4 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_GAB, 3
# 5 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_GRUNT, 4

SilversunCity_SomberHQ_MapScripts::
	.byte 0


SilversunCity_SomberHQ_EventScript_Main_Trigger0::
# 18 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_SomberHQ_EventScript_Main_Trigger0_2
# 19 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 21 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 22 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	call SilversunCity_SomberHQ_EventScript_Main
	return

SilversunCity_SomberHQ_EventScript_Main_Trigger0_2:
	end


SilversunCity_SomberHQ_EventScript_Main_Trigger1::
# 25 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_SomberHQ_EventScript_Main_Trigger1_2
# 26 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger1_Movement_0
# 28 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 29 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	call SilversunCity_SomberHQ_EventScript_Main
	return

SilversunCity_SomberHQ_EventScript_Main_Trigger1_2:
	end


SilversunCity_SomberHQ_EventScript_Main::
# 38 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_PROF
# 39 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	warp MAP_SILVERSUN_CITY, 24, 6
# 40 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_MAIN
# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 48 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 49 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_0
# 50 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 55 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 56 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 57 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 61 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 62 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 64 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_1
# 65 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 66 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 68 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8004, 3
# 69 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8005, 3
# 70 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8006, 8
# 71 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8007, 5
# 72 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	special ShakeCamera
# 73 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_2
# 76 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 78 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 80 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 82 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 85 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_3
# 86 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 90 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 91 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 92 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 93 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 94 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 95 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 96 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 97 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 98 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 99 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_6
# 100 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 101 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 102 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_4
# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 104 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_7
# 105 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_5
# 107 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_8
# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_9
# 111 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_6
# 113 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 115 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 116 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 117 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_7
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 119 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 121 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 122 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_8
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_11
# 125 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 126 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GAB
# 130 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_9
# 131 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_12
# 133 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_10
# 137 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_no_intro TRAINER_SOMBERHQ_MELEA, SilversunCity_SomberHQ_EventScript_Main_Text_11
# 140 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_MAIN
# 145 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_12
# 146 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_13
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_14
# 149 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 150 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 151 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_13
# 152 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 153 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_15
# 154 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_16
# 155 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GRUNT
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_17
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 159 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_MELEA
# 162 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_15
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_18
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 165 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_14
# 166 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 168 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_PROF
# 171 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	warp MAP_SILVERSUN_CITY, 24, 6
# 172 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	return


SomberHQ_EventScript_NPCNurse::
# 207 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 208 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_EventScript_NPCNurse_Text_0
# 209 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_EventScript_NPCNurse_Text_1
# 210 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto Common_EventScript_OutOfCenterPartyHeal
# 211 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	return


SomberHQ_NPC1::
# 217 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 218 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 219 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC1_Text_0
# 220 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC2::
# 224 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 225 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 226 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC2_Text_0
# 227 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC3::
# 231 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 232 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 233 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC3_Text_0
# 234 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC4::
# 238 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 239 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 240 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC4_Text_0
# 241 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPCGrunt::
# 245 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 246 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPCGrunt_Text_0
# 247 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 12, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 248 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 249 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 250 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPCGrunt_Text_1
# 251 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 12, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 252 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC_Counterfeiter::
# 258 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 259 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_Counterfeiter_Text_0
# 260 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 261 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 23, SilversunCity_SomberHQ_EventScript_Main_Movement_9
# 262 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 263 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 264 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_Counterfeiter_Text_1
# 265 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC_CounterfeitMachine::
# 272 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 274 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_0, MSGBOX_SIGN
# 275 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 276 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 277 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 279 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SomberHQ_NPC_CounterfeitMachine_2
# 295 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_4, MSGBOX_SIGN
SomberHQ_NPC_CounterfeitMachine_1:
# 298 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end

SomberHQ_NPC_CounterfeitMachine_2:
# 280 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_1, MSGBOX_YESNO
# 282 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SomberHQ_NPC_CounterfeitMachine_5
	goto SomberHQ_NPC_CounterfeitMachine_1

SomberHQ_NPC_CounterfeitMachine_5:
# 283 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeitem ITEM_DETECTIVE_STUDENT_ID
# 284 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_2
# 285 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 286 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	giveitem ITEM_FAKE_STUDENT_ID
# 287 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_3
# 288 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 289 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_GALECREST_FAKEID
	goto SomberHQ_NPC_CounterfeitMachine_1


SomberHQ_Grunt_A::
# 305 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_A, SomberHQ_Grunt_A_Text_0, SomberHQ_Grunt_A_Text_1
# 306 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_A_Text_2
# 307 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_B::
# 312 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_B, SomberHQ_Grunt_B_Text_0, SomberHQ_Grunt_B_Text_1
# 313 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_B_Text_2
# 314 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_C::
# 318 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_C, SomberHQ_Grunt_C_Text_0, SomberHQ_Grunt_C_Text_1
# 319 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_C_Text_2
# 320 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_D::
# 324 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_D, SomberHQ_Grunt_D_Text_0, SomberHQ_Grunt_D_Text_1
# 325 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_D_Text_2
# 326 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_E::
# 330 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_E, SomberHQ_Grunt_E_Text_0, SomberHQ_Grunt_E_Text_1
# 331 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_E_Text_2
# 332 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_F::
# 336 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_F, SomberHQ_Grunt_F_Text_0, SomberHQ_Grunt_F_Text_1
# 337 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_F_Text_2
# 338 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_G::
# 342 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_G, SomberHQ_Grunt_G_Text_0, SomberHQ_Grunt_G_Text_0
# 343 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_G_Text_0
# 344 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_H::
# 348 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_H, SomberHQ_Grunt_H_Text_0, SomberHQ_Grunt_H_Text_1
# 349 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_H_Text_2
# 350 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0:
# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
	step_end

# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Trigger1_Movement_0:
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
	step_end

# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_0:
# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
	step_end

# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_1:
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_2:
# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_3:
# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_down
	step_end

# 80 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_4:
# 80 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_up
	step_end

# 96 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_5:
# 96 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 99 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_6:
# 99 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_question_mark
	step_end

# 104 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_7:
# 104 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_up
	step_end

# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_8:
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_9:
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_10:
# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_11:
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_down
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
	step_end

# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_12:
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_13:
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_14:
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 153 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_15:
# 153 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 154 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_16:
# 154 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 154 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 154 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
	step_end

# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_17:
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_18:
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

SilversunCity_SomberHQ_EventScript_Main_Text_0:
# 49 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Ahh...beautiful. We have much to\n"
	.string "thank you for...\p"
	.string "Asst. Prof. Rue.\p"
	.string "Your DREAMALYSER blueprints will be\n"
	.string "invaluable to our efforts.$"

SilversunCity_SomberHQ_EventScript_Main_Text_1:
# 64 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Come here child. Let me see your\n"
	.string "face.$"

SilversunCity_SomberHQ_EventScript_Main_Text_2:
# 73 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: I said COME!!$"

SilversunCity_SomberHQ_EventScript_Main_Text_3:
# 85 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: So you're the one who defeated\n"
	.string "MOXIE at Mt. Ceram. So young...you\l"
	.string "must've gotten really lucky.\p"
	.string "???: Meet your Asst. Prof. Rue. He's\n"
	.string "been of immense help to us...albeit\l"
	.string "unwillingly.\p"
	.string "RUE: {PLAYER}, I'm sorry. Th-they got\n"
	.string "to me.$"

SilversunCity_SomberHQ_EventScript_Main_Text_4:
# 102 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: How did you get inside our\n"
	.string "headquarters, I wonder...$"

SilversunCity_SomberHQ_EventScript_Main_Text_5:
# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GRUNT: Boss! Boss! GABRIELLE was on\n"
	.string "guard duty.\p"
	.string "???: So it was you, GABRIELLE?\n"
	.string "Hmm...what a blunder. MOXIE was right.\l"
	.string "You really are useless.$"

SilversunCity_SomberHQ_EventScript_Main_Text_6:
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: Miss MELEA, I-I'm sorry. I\n"
	.string "owed him and I didn't-$"

SilversunCity_SomberHQ_EventScript_Main_Text_7:
# 117 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: You mean that it was\n"
	.string "INTENTIONAL!? And don't use my name in\l"
	.string "public, you moron!\p"
	.string "GABRIELLE: Y-yes, I'm so sorry. I just -\p"
	.string "MELEA: You just NOTHING! You BETRAYED\n"
	.string "us! Out! OUT! You're no longer a part of\l"
	.string "Team Somber! And I'm going to have a\l"
	.string "squad chase you all over Cormoria!$"

SilversunCity_SomberHQ_EventScript_Main_Text_8:
# 122 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: No boss, please! I really\n"
	.string "need this work!\p"
	.string "MELEA: Should've thought of that\n"
	.string "before betraying us then! Now GET OUT!\p"
	.string "GABRIELLE:...$"

SilversunCity_SomberHQ_EventScript_Main_Text_9:
# 130 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: An absolutely pathetic\n"
	.string "character. I would deal with her\l"
	.string "myself...if not for you, {PLAYER}.$"

SilversunCity_SomberHQ_EventScript_Main_Text_10:
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: So you know our plan now. We're\n"
	.string "going to build a Dreamalyser and take it\l"
	.string "to Mt. Mirroh. We'll obtain the\l"
	.string "dreamstone there...and the rest? Well\l"
	.string "you'll never see any of it, because I'm\l"
	.string "going to put an end to you right here,\l"
	.string "right now!$"

SilversunCity_SomberHQ_EventScript_Main_Text_11:
# 137 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stupid child!$"

SilversunCity_SomberHQ_EventScript_Main_Text_12:
# 145 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Unbelievable! Just unbelievable!\p"
	.string "MELEA: Fine. You can have your Asst.\n"
	.string "Prof. Rue back, child! We've got what we\l"
	.string "need from him anyway. Let's go!$"

SilversunCity_SomberHQ_EventScript_Main_Text_13:
# 151 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Heed this warning, {PLAYER}.\n"
	.string "Do NOT try to thwart us at Mt. Mirroh, or\l"
	.string "else we will crush you!$"

SilversunCity_SomberHQ_EventScript_Main_Text_14:
# 165 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Rue: You saved me. You've really become\n"
	.string "a strong trainer...perhaps I shouldn't\l"
	.string "have worried about you so much.\p"
	.string "...\p"
	.string "RUE: There are detectives outside?\n"
	.string "Let's go and meet them.$"

SomberHQ_EventScript_NPCNurse_Text_0:
# 208 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "NURSE JOY: I came to watch GLORIA's\n"
	.string "show but got lost and found myself in\l"
	.string "this shady place! So I've been hiding\l"
	.string "here.$"

SomberHQ_EventScript_NPCNurse_Text_1:
# 209 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "NURSE JOY: Let me heal your {PKMN}.$"

SomberHQ_NPC1_Text_0:
# 219 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "What? You thought we all wear suits and\n"
	.string "go rock-hunting? Someone's gotta make\l"
	.string "the money! I'm a financial whiz. I'm the\l"
	.string "real backbone of Team Somber!$"

SomberHQ_NPC2_Text_0:
# 226 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "The other guy thinks he's a financial\n"
	.string "hotshot but without my tech skills,\l"
	.string "nothing would function! I'm the real\l"
	.string "backbone of Team Somber!$"

SomberHQ_NPC3_Text_0:
# 233 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "These fancy organised criminals\n"
	.string "doesn't understand the struggles of us\l"
	.string "small-time smugglers...$"

SomberHQ_NPC4_Text_0:
# 240 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "If you ship contraband through the\n"
	.string "sewers, things get delayed sometimes.\l"
	.string "There are dangerous {PKMN} down there.$"

SomberHQ_NPCGrunt_Text_0:
# 246 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "So you're telling me the shipment's been\n"
	.string "delayed again? Why, I've got half a mind\l"
	.string "to -$"

SomberHQ_NPCGrunt_Text_1:
# 250 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Who're you? Did you bring the shipment?\p"
	.string "Wait a minute...you're that trainer who\n"
	.string "beat us at Mt. Ceram! Oh, you've got\l"
	.string "some nerve coming up and talking to me!\p"
	.string "...\p"
	.string "Eh, I'm on shipment duty, not guard\n"
	.string "duty. None of my business.$"

SomberHQ_NPC_Counterfeiter_Text_0:
# 259 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hehehe...this machine can create\n"
	.string "counterfeits of any badge, card or ID!\l"
	.string "We could make so much money selling\l"
	.string "fake student IDs...$"

SomberHQ_NPC_Counterfeiter_Text_1:
# 264 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hey, you're not a grunt! Get outta here!\n"
	.string "I'm not going to let you use this\l"
	.string "machine!$"

SomberHQ_NPC_CounterfeitMachine_Text_0:
# 274 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "{PLAYER} turned on the Counterfeit\n"
	.string "Machine.$"

SomberHQ_NPC_CounterfeitMachine_Text_1:
# 280 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "YOU HAVE A STUDENT ID. PROCESS\n"
	.string "COUNTERFEIT?$"

SomberHQ_NPC_CounterfeitMachine_Text_2:
# 284 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "{PLAYER} fed the Student ID into the\n"
	.string "open card slot.\p"
	.string "...\p"
	.string "...\p"
	.string "A new card popped out!$"

SomberHQ_NPC_CounterfeitMachine_Text_3:
# 287 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "This one doesn't look like a one-day\n"
	.string "pass. It looks like a real Student ID!$"

SomberHQ_NPC_CounterfeitMachine_Text_4:
# 295 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "YOU HAVE NO ITEMS TO COUNTERFEIT.$"

SomberHQ_Grunt_A_Text_0:
# 305 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hey! Who let you in?$"

SomberHQ_Grunt_A_Text_1:
# 305 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I've gotta let you in too...$"

SomberHQ_Grunt_A_Text_2:
# 306 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I can't believe you found our secret\n"
	.string "hideout!$"

SomberHQ_Grunt_B_Text_0:
# 312 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stepped into the wrong place buddy.\n"
	.string "Boss MOXIE isn't here - it's someone way\l"
	.string "scarier!$"

SomberHQ_Grunt_B_Text_1:
# 312 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I'm gonna tell the boss!$"

SomberHQ_Grunt_B_Text_2:
# 313 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Boss MOXIE is pretty scary and mean,\n"
	.string "but this one...she's on another level!$"

SomberHQ_Grunt_C_Text_0:
# 318 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "It's you! Think you can just waltz into\n"
	.string "Team Somber's HQ? Think again!$"

SomberHQ_Grunt_C_Text_1:
# 318 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I should think again!$"

SomberHQ_Grunt_C_Text_2:
# 319 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "This is where we plan our business, like\n"
	.string "how to get the next dreamstone.$"

SomberHQ_Grunt_D_Text_0:
# 324 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Bet you think there's a door to the\n"
	.string "boss's office past me, don't you? Joke's\l"
	.string "on you - there isn't!$"

SomberHQ_Grunt_D_Text_1:
# 324 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Go and see for yourself!$"

SomberHQ_Grunt_D_Text_2:
# 325 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "The only way to get to the office is to\n"
	.string "warp there - but I'll never tell you\l"
	.string "which one!$"

SomberHQ_Grunt_E_Text_0:
# 330 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "We're going to get the next dreamstone\n"
	.string "with a certain someone's help!$"

SomberHQ_Grunt_E_Text_1:
# 330 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I'm not telling you who it is!$"

SomberHQ_Grunt_E_Text_2:
# 331 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Ok fine, I'll tell you. it's NURSE JOY.\p"
	.string "...\p"
	.string "Hah! Can't believe you fell for that.$"

SomberHQ_Grunt_F_Text_0:
# 336 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "That stupid GABRIELLE must've let you\n"
	.string "in - I know it!$"

SomberHQ_Grunt_F_Text_1:
# 336 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Stupid GABRIELLE!$"

SomberHQ_Grunt_F_Text_2:
# 337 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "She's such a klutz - she's\n"
	.string "singlehandedly ruining this great\l"
	.string "organisation's image.$"

SomberHQ_Grunt_G_Text_0:
# 342 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "$"

SomberHQ_Grunt_H_Text_0:
# 348 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE and I were next up for admin\n"
	.string "positions...until she goofed at Mt.\l"
	.string "Ceram! Now it's just me. Let me show you\l"
	.string "why!$"

SomberHQ_Grunt_H_Text_1:
# 348 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You didn't let me show you!$"

SomberHQ_Grunt_H_Text_2:
# 349 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Fine, go ahead. You can't beat the boss\n"
	.string "anyway!$"
