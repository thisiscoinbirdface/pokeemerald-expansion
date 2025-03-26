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
# 51 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 52 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_1
# 55 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 56 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 57 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 58 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 59 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_2
# 60 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 64 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 65 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 66 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 67 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 71 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 72 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 73 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 74 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_3
# 75 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 76 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 78 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8004, 3
# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8005, 3
# 80 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8006, 8
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8007, 5
# 82 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	special ShakeCamera
# 83 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_4
# 86 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 88 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 89 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 90 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 91 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 92 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 95 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_5
# 96 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 97 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 100 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 101 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 102 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 104 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 105 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_6
# 107 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_7
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 111 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_6
# 113 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_8
# 115 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 116 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_7
# 117 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_9
# 119 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 121 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 122 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_8
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 125 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 126 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 127 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_9
# 128 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 129 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 130 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 131 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_10
# 133 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_11
# 135 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 136 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GAB
# 140 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_11
# 141 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_12
# 143 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 144 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_12
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_no_intro TRAINER_SOMBERHQ_MELEA, SilversunCity_SomberHQ_EventScript_Main_Text_13
# 150 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_MAIN
# 155 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_14
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_13
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_14
# 159 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 160 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_6
# 161 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_15
# 162 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_15
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_16
# 165 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 166 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GRUNT
# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_17
# 168 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 169 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_MELEA
# 172 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_15
# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_18
# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 175 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_16
# 176 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 178 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_PROF
# 181 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	warp MAP_SILVERSUN_CITY, 24, 6
# 182 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	return


SomberHQ_EventScript_NPCNurse::
# 217 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 218 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_EventScript_NPCNurse_Text_0
# 219 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_EventScript_NPCNurse_Text_1
# 220 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto Common_EventScript_OutOfCenterPartyHeal
# 221 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	return


SomberHQ_NPC1::
# 227 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 228 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 229 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC1_Text_0
# 230 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC2::
# 234 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 235 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 236 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC2_Text_0
# 237 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC3::
# 241 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 242 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 243 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC3_Text_0
# 244 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC4::
# 248 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 249 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 250 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC4_Text_0
# 251 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPCGrunt::
# 255 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 256 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPCGrunt_Text_0
# 257 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 12, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 258 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 259 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 260 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPCGrunt_Text_1
# 261 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 12, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 262 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_A::
# 270 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_A, SomberHQ_Grunt_A_Text_0, SomberHQ_Grunt_A_Text_1
# 271 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_A_Text_2
# 272 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_B::
# 277 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_B, SomberHQ_Grunt_B_Text_0, SomberHQ_Grunt_B_Text_1
# 278 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_B_Text_2
# 279 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_C::
# 283 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_C, SomberHQ_Grunt_C_Text_0, SomberHQ_Grunt_C_Text_1
# 284 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_C_Text_2
# 285 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_D::
# 289 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_D, SomberHQ_Grunt_D_Text_0, SomberHQ_Grunt_D_Text_1
# 290 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_D_Text_2
# 291 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_E::
# 295 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_E, SomberHQ_Grunt_E_Text_0, SomberHQ_Grunt_E_Text_1
# 296 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_E_Text_2
# 297 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_F::
# 301 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_F, SomberHQ_Grunt_F_Text_0, SomberHQ_Grunt_F_Text_1
# 302 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_F_Text_2
# 303 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_G::
# 307 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_G, SomberHQ_Grunt_G_Text_0, SomberHQ_Grunt_G_Text_0
# 308 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_G_Text_0
# 309 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_H::
# 313 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_H, SomberHQ_Grunt_H_Text_0, SomberHQ_Grunt_H_Text_1
# 314 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_H_Text_2
# 315 "data//maps/SilversunCity_SomberHQ/scripts.pory"
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

# 51 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_1:
# 51 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_2:
# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_3:
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 89 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_4:
# 89 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_down
	step_end

# 90 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_5:
# 90 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_up
	step_end

# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_6:
# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_7:
# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_question_mark
	step_end

# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_8:
# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_up
	step_end

# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_9:
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_10:
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_11:
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_down
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
	step_end

# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_12:
# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_13:
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_14:
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_15:
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_16:
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
	step_end

# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_17:
# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_18:
# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

SilversunCity_SomberHQ_EventScript_Main_Text_0:
# 49 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: It's no use Professor! We already\n"
	.string "know you hid your dreamstone in MT\l"
	.string "MIRROH.\p"
	.string "Hahaha! What a pathetic attempt at\n"
	.string "hiding the dreamstone from us.$"

SilversunCity_SomberHQ_EventScript_Main_Text_1:
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: Fine! Go get the dreamstone,\n"
	.string "you rascal! You'll repeat what happened\l"
	.string "at MT CERAM. Without the Dreamalyser,\l"
	.string "the dreamstone will transport you to\l"
	.string "the past. It's uncontrollable! And I will\l"
	.string "NEVER reveal the Dreamalyser\l"
	.string "blueprints to the likes of you!\p"
	.string "???: Oh Professor...you underestimate\n"
	.string "us. You see, a while ago, we obtained the\l"
	.string "blueprints from your lab.$"

SilversunCity_SomberHQ_EventScript_Main_Text_2:
# 59 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: But how?!\p"
	.string "???: Not to worry. Nobody at the lab was\n"
	.string "harmed. Your lab and Team Somber share\l"
	.string "a symbiotic relationship after all.\p"
	.string "TENEBRIS: Symbiotes? You thugs are\n"
	.string "just parasites!\p"
	.string "???: Enough of this chatter. We have a\n"
	.string "guest.$"

SilversunCity_SomberHQ_EventScript_Main_Text_3:
# 74 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Come here child. Let me see your\n"
	.string "face.$"

SilversunCity_SomberHQ_EventScript_Main_Text_4:
# 83 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: I said COME!!$"

SilversunCity_SomberHQ_EventScript_Main_Text_5:
# 95 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: So you're the one who defeated\n"
	.string "MOXIE at MT CERAM. So young...you\l"
	.string "must've gotten really lucky.\p"
	.string "???: Meet your Professor. He's been of\n"
	.string "invaluable help to us...albeit\l"
	.string "unwillingly.\p"
	.string "TENEBRIS: {PLAYER}. I recall signing\n"
	.string "your acceptance letter. I-I wish we had\l"
	.string "met under better circumstances.$"

SilversunCity_SomberHQ_EventScript_Main_Text_6:
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: How did you get inside our\n"
	.string "headquarters, I wonder...$"

SilversunCity_SomberHQ_EventScript_Main_Text_7:
# 116 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GRUNT: Boss! Boss! GABRIELLE was on\n"
	.string "guard duty.\p"
	.string "???: So it was you, GABRIELLE?\n"
	.string "Hmm...what a blunder. MOXIE was right.\l"
	.string "You really are useless.$"

SilversunCity_SomberHQ_EventScript_Main_Text_8:
# 122 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: Miss MELEA, I-I'm sorry. I\n"
	.string "owed him and I didn't-$"

SilversunCity_SomberHQ_EventScript_Main_Text_9:
# 127 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: You mean that it was\n"
	.string "INTENTIONAL!? And don't use my name in\l"
	.string "public, you moron!\p"
	.string "GABRIELLE: Y-yes, I'm so sorry. I just -\p"
	.string "MELEA: You just NOTHING! You BETRAYED\n"
	.string "us! Out! OUT! You're no longer a part of\l"
	.string "Team Somber! And I'm going to have a\l"
	.string "squad chase you all over CORMORIA!$"

SilversunCity_SomberHQ_EventScript_Main_Text_10:
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: No boss, please! What about\n"
	.string "my promise?\p"
	.string "MELEA: Should've thought of that\n"
	.string "before betraying us then! To hell with\l"
	.string "your promise! Now GET OUT!\p"
	.string "GABRIELLE:...$"

SilversunCity_SomberHQ_EventScript_Main_Text_11:
# 140 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: An absolutely pathetic\n"
	.string "character. I would deal with her\l"
	.string "myself...if not for you, {PLAYER}.$"

SilversunCity_SomberHQ_EventScript_Main_Text_12:
# 144 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: So you know our plan now. We're\n"
	.string "going to build a Dreamalyser and take it\l"
	.string "to MT MIRROH. We'll obtain the\l"
	.string "dreamstone there...and the rest? Well\l"
	.string "you'll never see any of it, because I'm\l"
	.string "going to put an end to you right here,\l"
	.string "right now!$"

SilversunCity_SomberHQ_EventScript_Main_Text_13:
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stupid child!$"

SilversunCity_SomberHQ_EventScript_Main_Text_14:
# 155 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Unbelievable! Just unbelievable!\p"
	.string "MELEA: Fine. Keep your stupid\n"
	.string "Professor, child! We've got what we need\l"
	.string "from him anyway. Let's go!$"

SilversunCity_SomberHQ_EventScript_Main_Text_15:
# 161 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: Heed this warning, {PLAYER}.\n"
	.string "Do NOT try to thwart us at MT MIRROH, or\l"
	.string "else we will crush you!$"

SilversunCity_SomberHQ_EventScript_Main_Text_16:
# 175 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: You saved me. You are an\n"
	.string "impressive trainer. I made the right\l"
	.string "choice in selecting you.\p"
	.string "...\p"
	.string "TENEBRIS: There are detectives\n"
	.string "outside? Let's go and meet them.$"

SomberHQ_EventScript_NPCNurse_Text_0:
# 218 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "NURSE JOY: I came to watch GLORIA's\n"
	.string "show but got lost and found myself in\l"
	.string "this shady place! So I've been hiding\l"
	.string "here.$"

SomberHQ_EventScript_NPCNurse_Text_1:
# 219 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "NURSE JOY: Let me heal your {PKMN}.$"

SomberHQ_NPC1_Text_0:
# 229 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "What? You thought we all wear suits and\n"
	.string "go rock-hunting? Someone's gotta make\l"
	.string "the money! I'm a financial whiz. I'm the\l"
	.string "real backbone of Team Somber!$"

SomberHQ_NPC2_Text_0:
# 236 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "The other guy thinks he's a financial\n"
	.string "hotshot but without my tech skills,\l"
	.string "nothing would function! I'm the real\l"
	.string "backbone of Team Somber!$"

SomberHQ_NPC3_Text_0:
# 243 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "These fancy organised criminals\n"
	.string "doesn't understand the struggles of us\l"
	.string "small-time smugglers...$"

SomberHQ_NPC4_Text_0:
# 250 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "If you ship contraband through the\n"
	.string "sewers, things get delayed sometimes.\l"
	.string "There are dangerous {PKMN} down there.$"

SomberHQ_NPCGrunt_Text_0:
# 256 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "So you're telling me the shipment's been\n"
	.string "delayed again? Why, I've got half a mind\l"
	.string "to -$"

SomberHQ_NPCGrunt_Text_1:
# 260 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Who're you? Did you bring the shipment?\p"
	.string "Wait a minute...you're that trainer who\n"
	.string "beat us at MT CERAM! Oh, you've got some\l"
	.string "nerve coming up and talking to me!\p"
	.string "...\p"
	.string "Eh, I'm on shipment duty, not guard\n"
	.string "duty. None of my business.$"

SomberHQ_Grunt_A_Text_0:
# 270 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hey! Who let you in?$"

SomberHQ_Grunt_A_Text_1:
# 270 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I've gotta let you in too...$"

SomberHQ_Grunt_A_Text_2:
# 271 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I can't believe you found our secret\n"
	.string "hideout!$"

SomberHQ_Grunt_B_Text_0:
# 277 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stepped into the wrong place buddy.\n"
	.string "Boss MOXIE isn't here - it's someone way\l"
	.string "scarier!$"

SomberHQ_Grunt_B_Text_1:
# 277 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I'm gonna tell the boss!$"

SomberHQ_Grunt_B_Text_2:
# 278 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Boss MOXIE is pretty scary and mean,\n"
	.string "but this one...she's on another level!$"

SomberHQ_Grunt_C_Text_0:
# 283 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "It's you! Think you can just waltz into\n"
	.string "Team Somber's HQ? Think again!$"

SomberHQ_Grunt_C_Text_1:
# 283 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I should think again!$"

SomberHQ_Grunt_C_Text_2:
# 284 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "This is where we plan our business, like\n"
	.string "how to get the next dreamstone.$"

SomberHQ_Grunt_D_Text_0:
# 289 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Bet you think there's a door to the\n"
	.string "boss's office past me, don't you? Joke's\l"
	.string "on you - there isn't!$"

SomberHQ_Grunt_D_Text_1:
# 289 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Go and see for yourself!$"

SomberHQ_Grunt_D_Text_2:
# 290 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "The only way to get to the office is to\n"
	.string "warp there - but I'll never tell you\l"
	.string "which one!$"

SomberHQ_Grunt_E_Text_0:
# 295 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "We're going to get the next dreamstone\n"
	.string "with a certain someone's help!$"

SomberHQ_Grunt_E_Text_1:
# 295 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I'm not telling you who it is!$"

SomberHQ_Grunt_E_Text_2:
# 296 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Ok fine, I'll tell you. it's NURSE JOY.\p"
	.string "...\p"
	.string "Hah! Can't believe you fell for that.$"

SomberHQ_Grunt_F_Text_0:
# 301 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "That stupid GABRIELLE must've let you\n"
	.string "in - I know it!$"

SomberHQ_Grunt_F_Text_1:
# 301 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Stupid GABRIELLE!$"

SomberHQ_Grunt_F_Text_2:
# 302 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "She's such a klutz - she's\n"
	.string "singlehandedly ruining this great\l"
	.string "organisation's image.$"

SomberHQ_Grunt_G_Text_0:
# 307 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "$"

SomberHQ_Grunt_H_Text_0:
# 313 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE and I were next up for admin\n"
	.string "positions...until she goofed at MT\l"
	.string "CERAM! Now it's just me. Let me show you\l"
	.string "why!$"

SomberHQ_Grunt_H_Text_1:
# 313 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You didn't let me show you!$"

SomberHQ_Grunt_H_Text_2:
# 314 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Fine, go ahead. You can't beat the boss\n"
	.string "anyway!$"
