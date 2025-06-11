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
# 36 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SKIP_SILVERSUN_CUTSCENE, SilversunCity_SomberHQ_EventScript_Main_1
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto SilversunCity_SomberHQ_EventScript_Cutscene
	return

SilversunCity_SomberHQ_EventScript_Main_1:
# 37 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_0, MSGBOX_YESNO
# 38 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 39 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SilversunCity_SomberHQ_EventScript_Main_4
# 43 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setobjectxy LOCALID_GAB, 0, 0
# 45 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 48 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 49 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 51 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto SilversunCity_SomberHQ_EventScript_Skip
	return

SilversunCity_SomberHQ_EventScript_Main_4:
# 40 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto SilversunCity_SomberHQ_EventScript_Cutscene
	return


SilversunCity_SomberHQ_EventScript_Cutscene::
# 61 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_SKIP_SILVERSUN_CUTSCENE
# 65 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_0
# 66 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 67 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 68 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_0
# 69 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_1
# 71 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_2
# 72 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_3
# 74 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_0
# 75 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_4
# 76 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 78 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_1
# 82 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_1
# 83 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_1
# 84 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 85 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 89 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_0
# 90 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 91 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 92 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_0
# 93 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_5
# 94 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 95 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 97 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8004, 3
# 98 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8005, 3
# 99 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8006, 8
# 100 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8007, 5
# 101 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	special ShakeCamera
# 102 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_0
# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_6
# 104 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 107 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_2
# 111 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_3
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 113 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 116 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_0
# 117 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_7
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_2
# 119 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_8
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 121 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_3
# 125 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 126 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 127 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_2
# 128 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 129 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 130 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_4
# 131 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 132 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 133 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_5
# 134 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 135 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 36
# 136 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_0
# 137 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_9
# 138 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 139 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_6
# 140 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 141 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_10
# 143 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_11
# 144 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 145 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_7
# 148 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 149 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 151 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_0
# 152 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_12
# 153 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 154 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_8
# 157 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 158 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 159 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_9
# 160 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 161 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 162 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_13
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_14
# 164 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 165 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 166 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_10
# 167 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 168 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 169 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_15
# 170 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_16
# 171 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_13
# 172 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_17
# 173 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 174 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 8
# 175 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_11
# 176 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 177 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 178 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_15
# 179 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_18
# 180 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 181 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 182 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_7
# 183 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 184 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 185 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_13
# 186 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_19
# 187 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 188 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 190 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_0
# 191 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 192 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 193 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_15
# 194 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_20
# 196 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 197 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_13
# 198 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_21
# 199 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 200 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 8
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_12
# 202 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 203 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setobjectxy LOCALID_GAB, 0, 0
# 207 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_15
# 208 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_22
# 209 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 210 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_13
# 211 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 212 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_15
# 213 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Cutscene_Text_23
# 215 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto SilversunCity_SomberHQ_EventScript_Skip
	return


SilversunCity_SomberHQ_EventScript_Skip::
# 220 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_15
# 221 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Skip_Text_0
# 224 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_no_intro TRAINER_SOMBERHQ_MELEA, SilversunCity_SomberHQ_EventScript_Skip_Text_1
# 227 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_SILVERSUN_SOMBERHQ_MAIN
# 232 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_15
# 233 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Skip_Text_2
# 234 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 235 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Skip_Movement_0
# 236 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Skip_Movement_1
# 237 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 238 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_4
# 239 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_15
# 240 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Skip_Text_3
# 241 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 242 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Skip_Movement_2
# 243 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Skip_Movement_3
# 244 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 245 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GRUNT
# 246 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Skip_Movement_4
# 247 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 248 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_MELEA
# 251 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Skip_Movement_2
# 252 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_8
# 253 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 254 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	speakername SilversunCity_SomberHQ_EventScript_Cutscene_Text_2
# 255 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Skip_Text_4
# 256 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 258 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	clearflag FLAG_HIDE_SILVERSUN_PROF
# 259 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeobject LOCALID_GAB
# 262 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	warp MAP_SILVERSUN_CITY, 23, 11
# 263 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	return


SomberHQ_EventScript_NPCNurse::
# 298 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 299 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_EventScript_NPCNurse_Text_0
# 300 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 301 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto Common_EventScript_NurseJoyOnRoute
# 302 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC1::
# 309 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 310 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 311 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC1_Text_0
# 312 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC2::
# 316 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 317 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 318 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC2_Text_0
# 319 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC3::
# 323 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 324 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 325 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC3_Text_0
# 326 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC4::
# 330 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 331 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 332 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC4_Text_0
# 333 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPCGrunt::
# 337 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 338 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPCGrunt_Text_0
# 339 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 12, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_7
# 340 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 341 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	faceplayer
# 342 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPCGrunt_Text_1
# 343 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 344 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 12, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_2
# 345 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 346 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC_Counterfeiter::
# 352 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 353 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_Counterfeiter_Text_0
# 354 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 355 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement 23, SilversunCity_SomberHQ_EventScript_Cutscene_Movement_9
# 356 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 357 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 358 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_Counterfeiter_Text_1
# 359 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_NPC_CounterfeitMachine::
# 366 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 368 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_0, MSGBOX_SIGN
# 369 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 370 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 371 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	checkitem ITEM_DETECTIVE_STUDENT_ID
# 373 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SomberHQ_NPC_CounterfeitMachine_2
# 389 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_4, MSGBOX_SIGN
SomberHQ_NPC_CounterfeitMachine_1:
# 392 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end

SomberHQ_NPC_CounterfeitMachine_2:
# 374 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_1, MSGBOX_YESNO
# 376 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SomberHQ_NPC_CounterfeitMachine_5
	goto SomberHQ_NPC_CounterfeitMachine_1

SomberHQ_NPC_CounterfeitMachine_5:
# 377 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	removeitem ITEM_DETECTIVE_STUDENT_ID
# 378 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_2
# 379 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 380 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	giveitem ITEM_FAKE_STUDENT_ID
# 381 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_NPC_CounterfeitMachine_Text_3
# 382 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 383 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setflag FLAG_GALECREST_FAKEID
	goto SomberHQ_NPC_CounterfeitMachine_1


SomberHQ_Grunt_A::
# 399 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_A, SomberHQ_Grunt_A_Text_0, SomberHQ_Grunt_A_Text_1
# 400 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_A_Text_2
# 401 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_B::
# 406 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_B, SomberHQ_Grunt_B_Text_0, SomberHQ_Grunt_B_Text_1
# 407 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_B_Text_2
# 408 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_C::
# 412 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_C, SomberHQ_Grunt_C_Text_0, SomberHQ_Grunt_C_Text_1
# 413 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_C_Text_2
# 414 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_D::
# 418 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_D, SomberHQ_Grunt_D_Text_0, SomberHQ_Grunt_D_Text_1
# 419 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_D_Text_2
# 420 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_E::
# 424 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_E, SomberHQ_Grunt_E_Text_0, SomberHQ_Grunt_E_Text_1
# 425 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_E_Text_2
# 426 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_F::
# 430 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_F, SomberHQ_Grunt_F_Text_0, SomberHQ_Grunt_F_Text_1
# 431 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_F_Text_2
# 432 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_G::
# 436 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_G, SomberHQ_Grunt_G_Text_0, SomberHQ_Grunt_G_Text_0
# 437 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_G_Text_0
# 438 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_Grunt_H::
# 442 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_single TRAINER_SOMBERHQ_H, SomberHQ_Grunt_H_Text_0, SomberHQ_Grunt_H_Text_1
# 443 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SomberHQ_Grunt_H_Text_2
# 444 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
	end


SomberHQ_SaveGameTrigger::
# 463 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SomberHQ_SaveGameTrigger_2
# 465 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_TEMP_E, 1
# 466 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	call Common_EventScript_SaveGameBeforeSomber
# 467 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	releaseall
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

# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_0:
# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_1:
# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 65 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_0:
# 65 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
	step_end

# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_1:
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_2:
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_down
	step_end

# 111 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_3:
# 111 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_up
	step_end

# 130 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_4:
# 130 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 133 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_5:
# 133 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_question_mark
	step_end

# 139 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_6:
# 139 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_up
	step_end

# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_7:
# 147 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_8:
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 156 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 159 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_9:
# 159 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
# 159 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 166 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_10:
# 166 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
# 166 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 175 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_11:
# 175 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
# 175 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
# 175 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
	step_end

# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_12:
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_down
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 201 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
	step_end

# 210 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Cutscene_Movement_13:
# 210 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 210 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 235 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Skip_Movement_0:
# 235 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 235 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 235 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 235 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 235 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

# 236 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Skip_Movement_1:
# 236 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 236 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 236 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 236 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_down
# 236 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 236 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 236 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 242 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Skip_Movement_2:
# 242 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
	step_end

# 243 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Skip_Movement_3:
# 243 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 243 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 243 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
	step_end

# 246 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Skip_Movement_4:
# 246 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 246 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 246 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
	step_end

SilversunCity_SomberHQ_EventScript_Main_Text_0:
# 37 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Skip cutscene?$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_0:
# 68 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_1:
# 69 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Ahh...beautiful. We have much to thank\n"
	.string "you for, Asst. Prof. {COLOR BLUE}Rue{COLOR DARK_GRAY}.\p"
	.string "Your Dreamalyser blueprints will be\n"
	.string "invaluable to our efforts to get the\l"
	.string "second dreamstone.$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_2:
# 71 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Rue$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_3:
# 72 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You mean the one on {COLOR BLUE}Mt. Mirroh{COLOR DARK_GRAY}?$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_4:
# 75 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Precisely.$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_5:
# 93 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Come here child. Let me see your face.$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_6:
# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I said COME!!$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_7:
# 117 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "So you're the one who defeated Moxie at\n"
	.string "{COLOR RED}Mt. Ceram{COLOR DARK_GRAY}. So young...you must've gotten\l"
	.string "really lucky.\p"
	.string "Meet your Asst. Prof. {COLOR BLUE}Rue{COLOR DARK_GRAY}. He's been of\n"
	.string "immense help to us...albeit unwillingly.$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_8:
# 119 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "{PLAYER}, I'm sorry. Th-they got me.$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_9:
# 137 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "How did you get inside our\n"
	.string "headquarters, I wonder...$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_10:
# 142 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Grunt$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_11:
# 143 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Boss! Boss! {COLOR RED}Gabrielle{COLOR DARK_GRAY} was on guard duty.$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_12:
# 152 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "So it was you, Gabrielle? Hmm...what a\n"
	.string "blunder. Moxie was right. You really are\l"
	.string "useless.$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_13:
# 162 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Gabrielle$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_14:
# 163 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Miss Melea, I-I'm sorry. I owed\n"
	.string "{PLAYER} and I didn't-$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_15:
# 169 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Melea$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_16:
# 170 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Y-you OWED {PLAYER}? You mean that\n"
	.string "it was INTENTIONAL!? And don't use my\l"
	.string "name in public, you moron!$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_17:
# 172 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Y-yes, I'm so sorry. I just -$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_18:
# 179 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You just NOTHING! You BETRAYED us!\n"
	.string "Out! OUT! You're no longer a part of\l"
	.string "{COLOR BLUE}Team Somber{COLOR DARK_GRAY}! And I'm going to have a\l"
	.string "squad chase you all over Cormoria!$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_19:
# 186 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "No boss, please! I really need this work!$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_20:
# 194 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Should've thought of that before\n"
	.string "betraying us then! Now GET OUT!$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_21:
# 198 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "...$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_22:
# 208 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "An absolutely pathetic character. I\n"
	.string "would deal with her myself...if not for\l"
	.string "you, {PLAYER}.$"

SilversunCity_SomberHQ_EventScript_Cutscene_Text_23:
# 213 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "So you know our plan now. At {COLOR RED}Mt. Ceram{COLOR DARK_GRAY},\n"
	.string "we didn't have the tools to control the\l"
	.string "dreamstone. But, with the blueprints\l"
	.string "your Asst. Prof. {COLOR BLUE}Rue{COLOR DARK_GRAY} handed us right\l"
	.string "now, we're going to build a Dreamalyser\l"
	.string "and take it to {COLOR BLUE}Mt. Mirroh{COLOR DARK_GRAY}. We'll obtain\l"
	.string "the dreamstone there...and the rest?\p"
	.string "Well you'll never see any of it.$"

SilversunCity_SomberHQ_EventScript_Skip_Text_0:
# 221 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I'm going to put an end to you - right\n"
	.string "here, right now!$"

SilversunCity_SomberHQ_EventScript_Skip_Text_1:
# 224 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stupid child!$"

SilversunCity_SomberHQ_EventScript_Skip_Text_2:
# 233 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Unbelievable! Just unbelievable!\p"
	.string "Fine. You can have your Asst. Prof. {COLOR BLUE}Rue{COLOR DARK_GRAY}\n"
	.string "back, child! We've got what we need from\l"
	.string "him anyway. Let's go!$"

SilversunCity_SomberHQ_EventScript_Skip_Text_3:
# 240 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Heed this warning, {PLAYER}. Do NOT\n"
	.string "try to thwart us at {COLOR BLUE}Mt. Mirroh{COLOR DARK_GRAY}, or else\l"
	.string "we will crush you!$"

SilversunCity_SomberHQ_EventScript_Skip_Text_4:
# 255 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You saved me. You've really become a\n"
	.string "strong trainer...perhaps I shouldn't\l"
	.string "have worried about you so much.\p"
	.string "...\p"
	.string "There are detectives outside?\n"
	.string "Let's go and meet them.$"

SomberHQ_EventScript_NPCNurse_Text_0:
# 299 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Chansey and I were posted in the\n"
	.string "Silversun Theater but got lost!\p"
	.string "Now we're surrounded by criminals and\n"
	.string "we don't know how to get out.\p"
	.string "So we've been hiding here.$"

SomberHQ_NPC1_Text_0:
# 311 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "What? You thought we all wear suits and\n"
	.string "go on field trips like school children?\l"
	.string "Someone's gotta make the money! I'm a\l"
	.string "financial whiz. I'm the real backbone of\l"
	.string "{COLOR BLUE}Team Somber{COLOR DARK_GRAY}!$"

SomberHQ_NPC2_Text_0:
# 318 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "The other guy thinks he's hot stuff but\n"
	.string "without my tech skills, nothing in this\l"
	.string "office would function! I'm the real\l"
	.string "backbone of {COLOR BLUE}Team Somber{COLOR DARK_GRAY}!$"

SomberHQ_NPC3_Text_0:
# 325 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "These organised criminals act so\n"
	.string "high-and-mighty...they don't\l"
	.string "understand the struggles of us\l"
	.string "small-time smugglers!$"

SomberHQ_NPC4_Text_0:
# 332 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "If you ship contraband through the\n"
	.string "sewers, things get delayed sometimes.$"

SomberHQ_NPCGrunt_Text_0:
# 338 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "So you're saying the shipment's been\n"
	.string "delayed again? Why, I've got half a mind\l"
	.string "to -$"

SomberHQ_NPCGrunt_Text_1:
# 342 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Who're you? Did you bring the shipment?\p"
	.string "Wait a minute...you're that trainer who\n"
	.string "beat us at {COLOR RED}Mt. Ceram{COLOR DARK_GRAY}! Oh, you've got\l"
	.string "some nerve coming up and talking to me!\p"
	.string "...\p"
	.string "Eh, I'm on shipment duty, not guard\n"
	.string "duty. None of my business.$"

SomberHQ_NPC_Counterfeiter_Text_0:
# 353 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hehehe...this machine can create\n"
	.string "counterfeits of any badge, card or ID!\l"
	.string "We could make so much money selling\l"
	.string "fake student IDs...$"

SomberHQ_NPC_Counterfeiter_Text_1:
# 358 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hey, you're not a grunt! Get outta here!\n"
	.string "I'm not going to let you use this!$"

SomberHQ_NPC_CounterfeitMachine_Text_0:
# 368 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "{PLAYER} turned on the Counterfeit\n"
	.string "Machine.$"

SomberHQ_NPC_CounterfeitMachine_Text_1:
# 374 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "YOU HAVE A STUDENT ID. PROCESS\n"
	.string "COUNTERFEIT?$"

SomberHQ_NPC_CounterfeitMachine_Text_2:
# 378 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "{PLAYER} fed the Student ID into the\n"
	.string "open card slot.\p"
	.string "...\p"
	.string "...\p"
	.string "A new card popped out!$"

SomberHQ_NPC_CounterfeitMachine_Text_3:
# 381 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "This one doesn't look like a one-day\n"
	.string "pass. It looks like a real Student ID!$"

SomberHQ_NPC_CounterfeitMachine_Text_4:
# 389 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "YOU HAVE NO ITEMS TO COUNTERFEIT.$"

SomberHQ_Grunt_A_Text_0:
# 399 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Hey! Who let you in?$"

SomberHQ_Grunt_A_Text_1:
# 399 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I've gotta let you in too...$"

SomberHQ_Grunt_A_Text_2:
# 400 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I can't believe you found our secret\n"
	.string "hideout!$"

SomberHQ_Grunt_B_Text_0:
# 406 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stepped into the wrong place buddy.\n"
	.string "Moxie isn't here - it's someone way\l"
	.string "scarier!$"

SomberHQ_Grunt_B_Text_1:
# 406 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I'm gonna tell the boss!$"

SomberHQ_Grunt_B_Text_2:
# 407 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Moxie is pretty scary and mean, but this\n"
	.string "boss...she's on another level!$"

SomberHQ_Grunt_C_Text_0:
# 412 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "We're going to get the next dreamstone\n"
	.string "with a certain someone's help!$"

SomberHQ_Grunt_C_Text_1:
# 412 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I'm not telling you who it is!$"

SomberHQ_Grunt_C_Text_2:
# 413 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Okay fine, I'll tell you who's going to\n"
	.string "help us. It's Nurse Joy.\p"
	.string "...\p"
	.string "Hah! Can't believe you fell for that.$"

SomberHQ_Grunt_D_Text_0:
# 418 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Bet you think there's a door to the\n"
	.string "boss's office past me, don't you? Joke's\l"
	.string "on you - there isn't!$"

SomberHQ_Grunt_D_Text_1:
# 418 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Go and see for yourself!$"

SomberHQ_Grunt_D_Text_2:
# 419 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "The only way to get to the office is to\n"
	.string "warp there - but I'll never tell you\l"
	.string "which one!$"

SomberHQ_Grunt_E_Text_0:
# 424 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Thought you could sneak past me?$"

SomberHQ_Grunt_E_Text_1:
# 424 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "I wish you had sneaked past me!$"

SomberHQ_Grunt_E_Text_2:
# 425 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "What's the point of catching people\n"
	.string "sneaking around if I just lose?$"

SomberHQ_Grunt_F_Text_0:
# 430 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You again? That stupid {COLOR RED}Gabrielle{COLOR DARK_GRAY}\n"
	.string "must've let you in - I know it!$"

SomberHQ_Grunt_F_Text_1:
# 430 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Stupid Gabrielle!$"

SomberHQ_Grunt_F_Text_2:
# 431 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "She's such a klutz - she's\n"
	.string "singlehandedly ruining this great\l"
	.string "organisation's image.$"

SomberHQ_Grunt_G_Text_0:
# 436 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "$"

SomberHQ_Grunt_H_Text_0:
# 442 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "{COLOR RED}Gabrielle{COLOR DARK_GRAY} and I were next up for admin\n"
	.string "positions...until she goofed at {COLOR RED}Mt.\l"
	.string "Ceram{COLOR DARK_GRAY}! Now it's just me.\p"
	.string "Let me show you why!$"

SomberHQ_Grunt_H_Text_1:
# 442 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Guess I'm not admin level yet!$"

SomberHQ_Grunt_H_Text_2:
# 443 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "Fine, go ahead.\n"
	.string "You can't beat the boss anyway!$"
