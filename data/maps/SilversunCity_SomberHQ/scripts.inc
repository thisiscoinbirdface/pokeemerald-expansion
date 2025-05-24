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
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 39 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 40 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 41 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_0
# 42 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_1
# 44 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_2
# 45 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_3
# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_0
# 48 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_4
# 49 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 51 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 55 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 56 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 57 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 58 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 62 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 64 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 65 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_0
# 66 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_5
# 67 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 68 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 70 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8004, 3
# 71 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8005, 3
# 72 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8006, 8
# 73 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8007, 5
# 74 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	special ShakeCamera
# 75 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_0
# 76 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_6
# 77 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 80 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 82 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 83 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 84 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 85 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 86 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 89 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_0
# 90 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_7
# 91 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_2
# 92 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_8
# 93 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 94 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 97 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 98 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 99 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 100 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 101 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 102 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_5
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
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_0
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_9
# 111 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_7
# 113 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 115 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_10
# 116 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_11
# 117 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_8
# 121 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 122 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_0
# 125 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_12
# 126 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 127 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 129 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_9
# 130 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 131 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 133 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 135 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_13
# 136 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_14
# 137 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 138 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 139 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_11
# 140 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 141 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_15
# 143 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_16
# 144 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_13
# 145 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_17
# 146 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 8
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_12
# 149 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 150 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 151 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_15
# 152 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_18
# 153 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 154 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 155 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_8
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_13
# 159 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_19
# 160 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 161 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 165 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 166 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_15
# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_20
# 169 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 170 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_13
# 171 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_21
# 172 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 8
# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_13
# 175 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 176 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setobjectxy LOCALID_GAB, 0, 0
# 180 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_15
# 181 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_22
# 182 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 183 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_14
# 184 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 185 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_15
# 186 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_23
# 189 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_no_intro TRAINER_SOMBERHQ_MELEA, SilversunCity_SomberHQ_EventScript_Main_Text_24
# 192 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_MAIN
# 197 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_15
# 198 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_25
# 199 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 200 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_15
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_16
# 202 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 203 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 204 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_15
# 205 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_26
# 206 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 207 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_17
# 208 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_18
# 209 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 210 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GRUNT
# 211 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_19
# 212 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 213 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_MELEA
# 216 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Movement_17
# 217 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_9
# 218 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 219 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Main_Text_2
# 220 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_27
# 221 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 223 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_PROF
# 224 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GAB
# 227 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	warp MAP_SILVERSUN_CITY, 23, 11
# 228 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	return


SomberHQ_EventScript_NPCNurse::
# 263 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 264 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_EventScript_NPCNurse_Text_0
# 265 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 266 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto Common_EventScript_NurseJoyOnRoute
# 267 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC1::
# 274 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 275 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 276 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC1_Text_0
# 277 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC2::
# 281 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 282 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 283 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC2_Text_0
# 284 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC3::
# 288 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 289 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 290 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC3_Text_0
# 291 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC4::
# 295 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 296 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 297 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC4_Text_0
# 298 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPCGrunt::
# 302 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 303 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPCGrunt_Text_0
# 304 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 12, SilversunCity_SomberHQ_EventScript_Main_Movement_8
# 305 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 306 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 307 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPCGrunt_Text_1
# 308 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 309 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 12, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 310 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 311 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC_Counterfeiter::
# 317 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 318 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_Counterfeiter_Text_0
# 319 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 320 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 23, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 321 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 322 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 323 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_Counterfeiter_Text_1
# 324 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC_CounterfeitMachine::
# 331 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 333 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_0, MSGBOX_SIGN
# 334 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 335 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 336 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 338 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SomberHQ_NPC_CounterfeitMachine_2
# 354 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_4, MSGBOX_SIGN
SomberHQ_NPC_CounterfeitMachine_1:
# 357 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end

SomberHQ_NPC_CounterfeitMachine_2:
# 339 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_1, MSGBOX_YESNO
# 341 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SomberHQ_NPC_CounterfeitMachine_5
	goto SomberHQ_NPC_CounterfeitMachine_1

SomberHQ_NPC_CounterfeitMachine_5:
# 342 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeitem ITEM_DETECTIVE_STUDENT_ID
# 343 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_2
# 344 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 345 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	giveitem ITEM_FAKE_STUDENT_ID
# 346 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_3
# 347 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 348 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_GALECREST_FAKEID
	goto SomberHQ_NPC_CounterfeitMachine_1


SomberHQ_Grunt_A::
# 364 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_A, SomberHQ_Grunt_A_Text_0, SomberHQ_Grunt_A_Text_1
# 365 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_A_Text_2
# 366 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_B::
# 371 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_B, SomberHQ_Grunt_B_Text_0, SomberHQ_Grunt_B_Text_1
# 372 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_B_Text_2
# 373 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_C::
# 377 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_C, SomberHQ_Grunt_C_Text_0, SomberHQ_Grunt_C_Text_1
# 378 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_C_Text_2
# 379 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_D::
# 383 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_D, SomberHQ_Grunt_D_Text_0, SomberHQ_Grunt_D_Text_1
# 384 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_D_Text_2
# 385 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_E::
# 389 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_E, SomberHQ_Grunt_E_Text_0, SomberHQ_Grunt_E_Text_1
# 390 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_E_Text_2
# 391 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_F::
# 395 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_F, SomberHQ_Grunt_F_Text_0, SomberHQ_Grunt_F_Text_1
# 396 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_F_Text_2
# 397 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_G::
# 401 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_G, SomberHQ_Grunt_G_Text_0, SomberHQ_Grunt_G_Text_0
# 402 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_G_Text_0
# 403 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_H::
# 407 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_H, SomberHQ_Grunt_H_Text_0, SomberHQ_Grunt_H_Text_1
# 408 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_H_Text_2
# 409 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_SaveGameTrigger::
# 428 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SomberHQ_SaveGameTrigger_2
# 432 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	special SaveGame
# 433 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitstate
# 434 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 436 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_TEMP_E, 1
	end

SomberHQ_SaveGameTrigger_2:
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

# 38 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_0:
# 38 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
	step_end

# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_1:
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_2:
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 83 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_3:
# 83 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_down
	step_end

# 84 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_4:
# 84 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_up
	step_end

# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_5:
# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_6:
# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_question_mark
	step_end

# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_7:
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_up
	step_end

# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_8:
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 129 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_9:
# 129 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 129 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 129 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_10:
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 139 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_11:
# 139 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
# 139 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_12:
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
	step_end

# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_13:
# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_down
# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
	step_end

# 183 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_14:
# 183 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 183 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 200 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_15:
# 200 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 200 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 200 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 200 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 200 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_16:
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 207 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_17:
# 207 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 208 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_18:
# 208 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 208 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 208 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
	step_end

# 211 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_19:
# 211 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 211 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 211 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

SilversunCity_SomberHQ_EventScript_Main_Text_0:
# 41 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???$"

SilversunCity_SomberHQ_EventScript_Main_Text_1:
# 42 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Ahh...beautiful. We have much to thank\n"
	.string "you for, Asst. Prof. Rue.\p"
	.string "Your Dreamalyser blueprints will be\n"
	.string "invaluable to our efforts to get the\l"
	.string "second dreamstone.$"

SilversunCity_SomberHQ_EventScript_Main_Text_2:
# 44 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Rue$"

SilversunCity_SomberHQ_EventScript_Main_Text_3:
# 45 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You mean the one on Mt. Mirroh?$"

SilversunCity_SomberHQ_EventScript_Main_Text_4:
# 48 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Precisely.$"

SilversunCity_SomberHQ_EventScript_Main_Text_5:
# 66 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Come here child. Let me see your face.$"

SilversunCity_SomberHQ_EventScript_Main_Text_6:
# 76 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I said COME!!$"

SilversunCity_SomberHQ_EventScript_Main_Text_7:
# 90 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "So you're the one who defeated Moxie at\n"
	.string "Mt. Ceram. So young...you must've gotten\l"
	.string "really lucky.\p"
	.string "Meet your Asst. Prof. Rue. He's been of\n"
	.string "immense help to us...albeit unwillingly.$"

SilversunCity_SomberHQ_EventScript_Main_Text_8:
# 92 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "{PLAYER}, I'm sorry. Th-they got me.$"

SilversunCity_SomberHQ_EventScript_Main_Text_9:
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "How did you get inside our\n"
	.string "headquarters, I wonder...$"

SilversunCity_SomberHQ_EventScript_Main_Text_10:
# 115 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Grunt$"

SilversunCity_SomberHQ_EventScript_Main_Text_11:
# 116 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Boss! Boss! Gabrielle was on guard duty.$"

SilversunCity_SomberHQ_EventScript_Main_Text_12:
# 125 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "So it was you, Gabrielle? Hmm...what a\n"
	.string "blunder. Moxie was right. You really are\l"
	.string "useless.$"

SilversunCity_SomberHQ_EventScript_Main_Text_13:
# 135 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Gabrielle$"

SilversunCity_SomberHQ_EventScript_Main_Text_14:
# 136 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Miss Melea, I-I'm sorry. I owed\n"
	.string "{PLAYER} and I didn't-$"

SilversunCity_SomberHQ_EventScript_Main_Text_15:
# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Melea$"

SilversunCity_SomberHQ_EventScript_Main_Text_16:
# 143 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Y-you OWED {PLAYER}? You mean that\n"
	.string "it was INTENTIONAL!? And don't use my\l"
	.string "name in public, you moron!$"

SilversunCity_SomberHQ_EventScript_Main_Text_17:
# 145 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Y-yes, I'm so sorry. I just -$"

SilversunCity_SomberHQ_EventScript_Main_Text_18:
# 152 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You just NOTHING! You BETRAYED us!\n"
	.string "Out! OUT! You're no longer a part of\l"
	.string "Team Somber! And I'm going to have a\l"
	.string "squad chase you all over Cormoria!$"

SilversunCity_SomberHQ_EventScript_Main_Text_19:
# 159 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "No boss, please! I really need this work!$"

SilversunCity_SomberHQ_EventScript_Main_Text_20:
# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Should've thought of that before\n"
	.string "betraying us then! Now GET OUT!$"

SilversunCity_SomberHQ_EventScript_Main_Text_21:
# 171 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "...$"

SilversunCity_SomberHQ_EventScript_Main_Text_22:
# 181 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "An absolutely pathetic character. I\n"
	.string "would deal with her myself...if not for\l"
	.string "you, {PLAYER}.$"

SilversunCity_SomberHQ_EventScript_Main_Text_23:
# 186 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "So you know our plan now. At Mt. Ceram,\n"
	.string "we didn't have the tools to control the\l"
	.string "dreamstone. But, with the blueprints\l"
	.string "your Asst. Prof. Rue handed us right\l"
	.string "now, we're going to build a Dreamalyser\l"
	.string "and take it to Mt. Mirroh. We'll obtain\l"
	.string "the dreamstone there...and the rest?\p"
	.string "Well you'll never see any of it, because\n"
	.string "I'm going to put an end to you - right\l"
	.string "here, right now!$"

SilversunCity_SomberHQ_EventScript_Main_Text_24:
# 189 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stupid child!$"

SilversunCity_SomberHQ_EventScript_Main_Text_25:
# 198 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Unbelievable! Just unbelievable!\p"
	.string "Fine. You can have your Asst. Prof. Rue\n"
	.string "back, child! We've got what we need from\l"
	.string "him anyway. Let's go!$"

SilversunCity_SomberHQ_EventScript_Main_Text_26:
# 205 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Heed this warning, {PLAYER}. Do NOT\n"
	.string "try to thwart us at Mt. Mirroh, or else\l"
	.string "we will crush you!$"

SilversunCity_SomberHQ_EventScript_Main_Text_27:
# 220 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You saved me. You've really become a\n"
	.string "strong trainer...perhaps I shouldn't\l"
	.string "have worried about you so much.\p"
	.string "...\p"
	.string "There are detectives outside?\n"
	.string "Let's go and meet them.$"

SomberHQ_EventScript_NPCNurse_Text_0:
# 264 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Chansey and I were posted in the\n"
	.string "Silversun Theater but got lost!\p"
	.string "Now we're surrounded by criminals and\n"
	.string "we don't know how to get out.\p"
	.string "So we've been hiding here.$"

SomberHQ_NPC1_Text_0:
# 276 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "What? You thought we all wear suits and\n"
	.string "go on field trips like school children?\l"
	.string "Someone's gotta make the money! I'm a\l"
	.string "financial whiz. I'm the real backbone of\l"
	.string "Team Somber!$"

SomberHQ_NPC2_Text_0:
# 283 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "The other guy thinks he's hot stuff but\n"
	.string "without my tech skills, nothing in this\l"
	.string "office would function! I'm the real\l"
	.string "backbone of Team Somber!$"

SomberHQ_NPC3_Text_0:
# 290 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "These organised criminals act so\n"
	.string "high-and-mighty...they don't\l"
	.string "understand the struggles of us\l"
	.string "small-time smugglers!$"

SomberHQ_NPC4_Text_0:
# 297 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "If you ship contraband through the\n"
	.string "sewers, things get delayed sometimes.$"

SomberHQ_NPCGrunt_Text_0:
# 303 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "So you're saying the shipment's been\n"
	.string "delayed again? Why, I've got half a mind\l"
	.string "to -$"

SomberHQ_NPCGrunt_Text_1:
# 307 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Who're you? Did you bring the shipment?\p"
	.string "Wait a minute...you're that trainer who\n"
	.string "beat us at Mt. Ceram! Oh, you've got\l"
	.string "some nerve coming up and talking to me!\p"
	.string "...\p"
	.string "Eh, I'm on shipment duty, not guard\n"
	.string "duty. None of my business.$"

SomberHQ_NPC_Counterfeiter_Text_0:
# 318 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hehehe...this machine can create\n"
	.string "counterfeits of any badge, card or ID!\l"
	.string "We could make so much money selling\l"
	.string "fake student IDs...$"

SomberHQ_NPC_Counterfeiter_Text_1:
# 323 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hey, you're not a grunt! Get outta here!\n"
	.string "I'm not going to let you use this!$"

SomberHQ_NPC_CounterfeitMachine_Text_0:
# 333 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "{PLAYER} turned on the Counterfeit\n"
	.string "Machine.$"

SomberHQ_NPC_CounterfeitMachine_Text_1:
# 339 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "YOU HAVE A STUDENT ID. PROCESS\n"
	.string "COUNTERFEIT?$"

SomberHQ_NPC_CounterfeitMachine_Text_2:
# 343 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "{PLAYER} fed the Student ID into the\n"
	.string "open card slot.\p"
	.string "...\p"
	.string "...\p"
	.string "A new card popped out!$"

SomberHQ_NPC_CounterfeitMachine_Text_3:
# 346 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "This one doesn't look like a one-day\n"
	.string "pass. It looks like a real Student ID!$"

SomberHQ_NPC_CounterfeitMachine_Text_4:
# 354 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "YOU HAVE NO ITEMS TO COUNTERFEIT.$"

SomberHQ_Grunt_A_Text_0:
# 364 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hey! Who let you in?$"

SomberHQ_Grunt_A_Text_1:
# 364 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I've gotta let you in too...$"

SomberHQ_Grunt_A_Text_2:
# 365 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I can't believe you found our secret\n"
	.string "hideout!$"

SomberHQ_Grunt_B_Text_0:
# 371 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stepped into the wrong place buddy.\n"
	.string "Moxie isn't here - it's someone way\l"
	.string "scarier!$"

SomberHQ_Grunt_B_Text_1:
# 371 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I'm gonna tell the boss!$"

SomberHQ_Grunt_B_Text_2:
# 372 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Moxie is pretty scary and mean, but this\n"
	.string "boss...she's on another level!$"

SomberHQ_Grunt_C_Text_0:
# 377 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "We're going to get the next dreamstone\n"
	.string "with a certain someone's help!$"

SomberHQ_Grunt_C_Text_1:
# 377 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I'm not telling you who it is!$"

SomberHQ_Grunt_C_Text_2:
# 378 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Okay fine, I'll tell you who's going to\n"
	.string "help us. It's Nurse Joy.\p"
	.string "...\p"
	.string "Hah! Can't believe you fell for that.$"

SomberHQ_Grunt_D_Text_0:
# 383 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Bet you think there's a door to the\n"
	.string "boss's office past me, don't you? Joke's\l"
	.string "on you - there isn't!$"

SomberHQ_Grunt_D_Text_1:
# 383 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Go and see for yourself!$"

SomberHQ_Grunt_D_Text_2:
# 384 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "The only way to get to the office is to\n"
	.string "warp there - but I'll never tell you\l"
	.string "which one!$"

SomberHQ_Grunt_E_Text_0:
# 389 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Thought you could sneak past me?$"

SomberHQ_Grunt_E_Text_1:
# 389 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I wish you had sneaked past me!$"

SomberHQ_Grunt_E_Text_2:
# 390 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "What's the point of catching people\n"
	.string "sneaking around if I just lose?$"

SomberHQ_Grunt_F_Text_0:
# 395 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You again? That stupid Gabrielle\n"
	.string "must've let you in - I know it!$"

SomberHQ_Grunt_F_Text_1:
# 395 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Stupid Gabrielle!$"

SomberHQ_Grunt_F_Text_2:
# 396 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "She's such a klutz - she's\n"
	.string "singlehandedly ruining this great\l"
	.string "organisation's image.$"

SomberHQ_Grunt_G_Text_0:
# 401 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "$"

SomberHQ_Grunt_H_Text_0:
# 407 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Gabrielle and I were next up for admin\n"
	.string "positions...until she goofed at Mt.\l"
	.string "Ceram! Now it's just me.\p"
	.string "Let me show you why!$"

SomberHQ_Grunt_H_Text_1:
# 407 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Guess I'm not admin level yet!$"

SomberHQ_Grunt_H_Text_2:
# 408 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Fine, go ahead.\n"
	.string "You can't beat the boss anyway!$"
