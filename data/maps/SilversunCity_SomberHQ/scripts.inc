# 1 "data/maps/SilversunCity_SomberHQ/scripts.pory"

# 2 "data/maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_PROF, 1
# 3 "data/maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_MELEA, 2
# 4 "data/maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_GAB, 3
# 5 "data/maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_GRUNT, 4

SilversunCity_SomberHQ_MapScripts::
	.byte 0


SilversunCity_SomberHQ_EventScript_Main_Trigger0::
# 18 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_SomberHQ_EventScript_Main_Trigger0_2
# 19 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 20 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 21 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 22 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	call SilversunCity_SomberHQ_EventScript_Main
	return

SilversunCity_SomberHQ_EventScript_Main_Trigger0_2:
	end


SilversunCity_SomberHQ_EventScript_Main_Trigger1::
# 25 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_SomberHQ_EventScript_Main_Trigger1_2
# 26 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 27 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger1_Movement_0
# 28 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 29 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	call SilversunCity_SomberHQ_EventScript_Main
	return

SilversunCity_SomberHQ_EventScript_Main_Trigger1_2:
	end


SilversunCity_SomberHQ_EventScript_Main::
# 38 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 39 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 40 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 41 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_0
# 42 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 45 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 46 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 47 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 48 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 49 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 53 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 54 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 55 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 56 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_1
# 57 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 58 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 60 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8004, 3
# 61 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8005, 3
# 62 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8006, 8
# 63 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8007, 5
# 64 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	special ShakeCamera
# 65 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_2
# 68 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 69 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 70 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 71 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 72 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 73 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 74 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 77 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_3
# 78 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 79 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 82 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 83 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 84 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 85 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 86 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 87 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 88 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 89 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 90 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 91 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_6
# 92 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 93 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 94 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_4
# 95 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 96 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_7
# 97 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 98 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_5
# 99 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 100 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_8
# 101 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 102 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_9
# 103 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 104 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_6
# 105 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 106 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 107 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 108 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 109 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_7
# 110 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 111 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 112 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 113 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 114 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_8
# 115 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 116 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_11
# 117 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 118 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GAB
# 122 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_9
# 123 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 124 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_12
# 125 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 126 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_10
# 129 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_no_intro TRAINER_SOMBERHQ_MELEA, SilversunCity_SomberHQ_EventScript_Main_Text_11
# 132 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_MAIN
# 137 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_12
# 138 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 139 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_13
# 140 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_14
# 141 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 142 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 143 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_13
# 144 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 145 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_15
# 146 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_16
# 147 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 148 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GRUNT
# 149 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_17
# 150 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 151 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_MELEA
# 154 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_15
# 155 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_18
# 156 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 157 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_14
# 158 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 160 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_PROF
# 163 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	warp MAP_SILVERSUN_CITY, 23, 11
# 164 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	return


SomberHQ_EventScript_NPCNurse::
# 199 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 200 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_EventScript_NPCNurse_Text_0
# 201 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 202 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	goto Common_EventScript_NurseJoyOnRoute
# 203 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC1::
# 210 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 211 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 212 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC1_Text_0
# 213 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC2::
# 217 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 218 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 219 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC2_Text_0
# 220 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC3::
# 224 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 225 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 226 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC3_Text_0
# 227 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC4::
# 231 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 232 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 233 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC4_Text_0
# 234 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPCGrunt::
# 238 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 239 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPCGrunt_Text_0
# 240 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 12, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 241 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 242 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 243 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPCGrunt_Text_1
# 244 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 245 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 12, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 246 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 247 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC_Counterfeiter::
# 253 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 254 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_Counterfeiter_Text_0
# 255 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 256 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 23, SilversunCity_SomberHQ_EventScript_Main_Movement_9
# 257 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 258 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 259 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_Counterfeiter_Text_1
# 260 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC_CounterfeitMachine::
# 267 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 269 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_0, MSGBOX_SIGN
# 270 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 271 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 272 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 274 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SomberHQ_NPC_CounterfeitMachine_2
# 290 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_4, MSGBOX_SIGN
SomberHQ_NPC_CounterfeitMachine_1:
# 293 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end

SomberHQ_NPC_CounterfeitMachine_2:
# 275 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_1, MSGBOX_YESNO
# 277 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SomberHQ_NPC_CounterfeitMachine_5
	goto SomberHQ_NPC_CounterfeitMachine_1

SomberHQ_NPC_CounterfeitMachine_5:
# 278 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	removeitem ITEM_DETECTIVE_STUDENT_ID
# 279 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_2
# 280 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 281 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	giveitem ITEM_FAKE_STUDENT_ID
# 282 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_3
# 283 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 284 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_GALECREST_FAKEID
	goto SomberHQ_NPC_CounterfeitMachine_1


SomberHQ_Grunt_A::
# 300 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_A, SomberHQ_Grunt_A_Text_0, SomberHQ_Grunt_A_Text_1
# 301 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_A_Text_2
# 302 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_B::
# 307 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_B, SomberHQ_Grunt_B_Text_0, SomberHQ_Grunt_B_Text_1
# 308 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_B_Text_2
# 309 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_C::
# 313 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_C, SomberHQ_Grunt_C_Text_0, SomberHQ_Grunt_C_Text_1
# 314 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_C_Text_2
# 315 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_D::
# 319 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_D, SomberHQ_Grunt_D_Text_0, SomberHQ_Grunt_D_Text_1
# 320 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_D_Text_2
# 321 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_E::
# 325 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_E, SomberHQ_Grunt_E_Text_0, SomberHQ_Grunt_E_Text_1
# 326 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_E_Text_2
# 327 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_F::
# 331 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_F, SomberHQ_Grunt_F_Text_0, SomberHQ_Grunt_F_Text_1
# 332 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_F_Text_2
# 333 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_G::
# 337 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_G, SomberHQ_Grunt_G_Text_0, SomberHQ_Grunt_G_Text_0
# 338 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_G_Text_0
# 339 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_H::
# 343 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_H, SomberHQ_Grunt_H_Text_0, SomberHQ_Grunt_H_Text_1
# 344 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_H_Text_2
# 345 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


# 20 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0:
# 20 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 20 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
	step_end

# 27 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Trigger1_Movement_0:
# 27 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 27 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 27 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
	step_end

# 38 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_0:
# 38 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
	step_end

# 45 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_1:
# 45 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 45 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 69 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_2:
# 69 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 69 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 69 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 69 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 71 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_3:
# 71 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_down
	step_end

# 72 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_4:
# 72 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_up
	step_end

# 88 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_5:
# 88 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 91 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_6:
# 91 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	emote_question_mark
	step_end

# 96 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_7:
# 96 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_up
	step_end

# 100 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_8:
# 100 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 100 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 100 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 102 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_9:
# 102 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
# 102 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 106 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_10:
# 106 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 116 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_11:
# 116 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 116 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_down
# 116 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 116 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 116 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 116 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 116 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
	step_end

# 124 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_12:
# 124 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 124 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 139 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_13:
# 139 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 139 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 139 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 139 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 139 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 140 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_14:
# 140 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 140 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 140 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 140 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 140 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 140 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 140 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 145 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_15:
# 145 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 146 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_16:
# 146 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 146 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 146 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
	step_end

# 149 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_17:
# 149 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 149 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 149 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 155 "data/maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_18:
# 155 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 155 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 155 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

SilversunCity_SomberHQ_EventScript_Main_Text_0:
# 41 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Ahh...beautiful. We have much to\n"
	.string "thank you for...\p"
	.string "Asst. Prof. Rue.\p"
	.string "Your Dreamalyser blueprints will be\n"
	.string "invaluable to our efforts to get the\l"
	.string "second dreamstone.\p"
	.string "RUE: You mean the one on Mt. Mirroh?\p"
	.string "???: Precisely.$"

SilversunCity_SomberHQ_EventScript_Main_Text_1:
# 56 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Come here child. Let me see your\n"
	.string "face.$"

SilversunCity_SomberHQ_EventScript_Main_Text_2:
# 65 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: I said COME!!$"

SilversunCity_SomberHQ_EventScript_Main_Text_3:
# 77 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: So you're the one who defeated\n"
	.string "Moxie at Mt. Ceram. So young...you\l"
	.string "must've gotten really lucky.\p"
	.string "???: Meet your Asst. Prof. Rue. He's\n"
	.string "been of immense help to us...albeit\l"
	.string "unwillingly.\p"
	.string "RUE: {PLAYER}, I'm sorry. Th-they got\n"
	.string "to me.$"

SilversunCity_SomberHQ_EventScript_Main_Text_4:
# 94 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: How did you get inside our\n"
	.string "headquarters, I wonder...$"

SilversunCity_SomberHQ_EventScript_Main_Text_5:
# 98 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GRUNT: Boss! Boss! Gabrielle was on\n"
	.string "guard duty.\p"
	.string "???: So it was you, Gabrielle? Hmm...what\n"
	.string "a blunder. Moxie was right. You really\l"
	.string "are useless.$"

SilversunCity_SomberHQ_EventScript_Main_Text_6:
# 104 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: Miss Melea, I-I'm sorry. I\n"
	.string "owed {PLAYER} and I didn't-$"

SilversunCity_SomberHQ_EventScript_Main_Text_7:
# 109 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Y-you OWED {PLAYER}? You mean\n"
	.string "that it was INTENTIONAL!? And don't\l"
	.string "use my name in public, you moron!\p"
	.string "GABRIELLE: Y-yes, I'm so sorry. I just -\p"
	.string "MELEA: You just NOTHING! You BETRAYED\n"
	.string "us! Out! OUT! You're no longer a part of\l"
	.string "Team Somber! And I'm going to have a\l"
	.string "squad chase you all over Cormoria!$"

SilversunCity_SomberHQ_EventScript_Main_Text_8:
# 114 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: No boss, please! I really\n"
	.string "need this work!\p"
	.string "MELEA: Should've thought of that\n"
	.string "before betraying us then! Now GET OUT!\p"
	.string "GABRIELLE:...$"

SilversunCity_SomberHQ_EventScript_Main_Text_9:
# 122 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: An absolutely pathetic\n"
	.string "character. I would deal with her\l"
	.string "myself...if not for you, {PLAYER}.$"

SilversunCity_SomberHQ_EventScript_Main_Text_10:
# 126 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: So you know our plan now. At Mt.\n"
	.string "Ceram, we didn't have the tools to\l"
	.string "control the dreamstone. But, with the\l"
	.string "blueprints your Asst. Prof. Rue handed\l"
	.string "us right now, we're going to build a\l"
	.string "Dreamalyser and take it to Mt. Mirroh.\l"
	.string "We'll obtain the dreamstone there...and\l"
	.string "the rest? Well you'll never see any of\l"
	.string "it, because I'm going to put an end to\l"
	.string "you right here, right now!$"

SilversunCity_SomberHQ_EventScript_Main_Text_11:
# 129 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stupid child!$"

SilversunCity_SomberHQ_EventScript_Main_Text_12:
# 137 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Unbelievable! Just unbelievable!\p"
	.string "MELEA: Fine. You can have your Asst.\n"
	.string "Prof. Rue back, child! We've got what we\l"
	.string "need from him anyway. Let's go!$"

SilversunCity_SomberHQ_EventScript_Main_Text_13:
# 143 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Heed this warning, {PLAYER}.\n"
	.string "Do NOT try to thwart us at Mt. Mirroh, or\l"
	.string "else we will crush you!$"

SilversunCity_SomberHQ_EventScript_Main_Text_14:
# 157 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Rue: You saved me. You've really become\n"
	.string "a strong trainer...perhaps I shouldn't\l"
	.string "have worried about you so much.\p"
	.string "...\p"
	.string "RUE: There are detectives outside?\n"
	.string "Let's go and meet them.$"

SomberHQ_EventScript_NPCNurse_Text_0:
# 200 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "NURSE JOY: Chansey and I were posted\n"
	.string "in the Silversun Theater but got lost!\l"
	.string "Now we're surrounded by criminals and\l"
	.string "we don't know how to get out. So we've\l"
	.string "been hiding here.$"

SomberHQ_NPC1_Text_0:
# 212 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "What? You thought we all wear suits and\n"
	.string "go on field trips like school children?\l"
	.string "Someone's gotta make the money! I'm a\l"
	.string "financial whiz. I'm the real backbone of\l"
	.string "Team Somber!$"

SomberHQ_NPC2_Text_0:
# 219 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "The other guy thinks he's hot stuff but\n"
	.string "without my tech skills, nothing in this\l"
	.string "office would function! I'm the real\l"
	.string "backbone of Team Somber!$"

SomberHQ_NPC3_Text_0:
# 226 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "These organised criminals act so\n"
	.string "high-and-mighty...they don't\l"
	.string "understand the struggles of us\l"
	.string "small-time smugglers...$"

SomberHQ_NPC4_Text_0:
# 233 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "If you ship contraband through the\n"
	.string "sewers, things get delayed sometimes.\l"
	.string "There are dangerous Pokémon down\l"
	.string "there.$"

SomberHQ_NPCGrunt_Text_0:
# 239 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "So you're telling me the shipment's been\n"
	.string "delayed again? Why, I've got half a mind\l"
	.string "to -$"

SomberHQ_NPCGrunt_Text_1:
# 243 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Who're you? Did you bring the shipment?\p"
	.string "Wait a minute...you're that trainer who\n"
	.string "beat us at Mt. Ceram! Oh, you've got\l"
	.string "some nerve coming up and talking to me!\p"
	.string "...\p"
	.string "Eh, I'm on shipment duty, not guard\n"
	.string "duty. None of my business.$"

SomberHQ_NPC_Counterfeiter_Text_0:
# 254 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hehehe...this machine can create\n"
	.string "counterfeits of any badge, card or ID!\l"
	.string "We could make so much money selling\l"
	.string "fake student IDs...$"

SomberHQ_NPC_Counterfeiter_Text_1:
# 259 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hey, you're not a grunt! Get outta here!\n"
	.string "I'm not going to let you use this!$"

SomberHQ_NPC_CounterfeitMachine_Text_0:
# 269 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "{PLAYER} turned on the Counterfeit\n"
	.string "Machine.$"

SomberHQ_NPC_CounterfeitMachine_Text_1:
# 275 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "YOU HAVE A STUDENT ID. PROCESS\n"
	.string "COUNTERFEIT?$"

SomberHQ_NPC_CounterfeitMachine_Text_2:
# 279 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "{PLAYER} fed the Student ID into the\n"
	.string "open card slot.\p"
	.string "...\p"
	.string "...\p"
	.string "A new card popped out!$"

SomberHQ_NPC_CounterfeitMachine_Text_3:
# 282 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "This one doesn't look like a one-day\n"
	.string "pass. It looks like a real Student ID!$"

SomberHQ_NPC_CounterfeitMachine_Text_4:
# 290 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "YOU HAVE NO ITEMS TO COUNTERFEIT.$"

SomberHQ_Grunt_A_Text_0:
# 300 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hey! Who let you in?$"

SomberHQ_Grunt_A_Text_1:
# 300 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I've gotta let you in too...$"

SomberHQ_Grunt_A_Text_2:
# 301 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I can't believe you found our secret\n"
	.string "hideout!$"

SomberHQ_Grunt_B_Text_0:
# 307 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stepped into the wrong place buddy.\n"
	.string "Moxie isn't here - it's someone way\l"
	.string "scarier!$"

SomberHQ_Grunt_B_Text_1:
# 307 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I'm gonna tell the boss!$"

SomberHQ_Grunt_B_Text_2:
# 308 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Moxie is pretty scary and mean, but this\n"
	.string "boss...she's on another level!$"

SomberHQ_Grunt_C_Text_0:
# 313 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "It's you! Think you can just waltz into\n"
	.string "Team Somber's HQ? Think again!$"

SomberHQ_Grunt_C_Text_1:
# 313 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I should think again!$"

SomberHQ_Grunt_C_Text_2:
# 314 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "This is where we plan our business, like\n"
	.string "how to get the next dreamstone.$"

SomberHQ_Grunt_D_Text_0:
# 319 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Bet you think there's a door to the\n"
	.string "boss's office past me, don't you? Joke's\l"
	.string "on you - there isn't!$"

SomberHQ_Grunt_D_Text_1:
# 319 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Go and see for yourself!$"

SomberHQ_Grunt_D_Text_2:
# 320 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "The only way to get to the office is to\n"
	.string "warp there - but I'll never tell you\l"
	.string "which one!$"

SomberHQ_Grunt_E_Text_0:
# 325 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "We're going to get the next dreamstone\n"
	.string "with a certain someone's help!$"

SomberHQ_Grunt_E_Text_1:
# 325 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I'm not telling you who it is!$"

SomberHQ_Grunt_E_Text_2:
# 326 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Ok fine, I'll tell you. it's Nurse Joy.\p"
	.string "...\p"
	.string "Hah! Can't believe you fell for that.$"

SomberHQ_Grunt_F_Text_0:
# 331 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "That stupid Gabrielle must've let you in\n"
	.string "- I know it!$"

SomberHQ_Grunt_F_Text_1:
# 331 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Stupid Gabrielle!$"

SomberHQ_Grunt_F_Text_2:
# 332 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "She's such a klutz - she's\n"
	.string "singlehandedly ruining this great\l"
	.string "organisation's image.$"

SomberHQ_Grunt_G_Text_0:
# 337 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "$"

SomberHQ_Grunt_H_Text_0:
# 343 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Gabrielle and I were next up for admin\n"
	.string "positions...until she goofed at Mt.\l"
	.string "Ceram! Now it's just me. Let me show you\l"
	.string "why!$"

SomberHQ_Grunt_H_Text_1:
# 343 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You didn't let me show you!$"

SomberHQ_Grunt_H_Text_2:
# 344 "data/maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Fine, go ahead. You can't beat the boss\n"
	.string "anyway!$"
