# 1 "data//maps/MtCeram_Peak/scripts.pory"

# 2 "data//maps/MtCeram_Peak/scripts.pory"
    .set LOCALID_DREAMSTONE, 1
# 3 "data//maps/MtCeram_Peak/scripts.pory"
    .set LOCALID_BOSS, 2
# 4 "data//maps/MtCeram_Peak/scripts.pory"
    .set LOCALID_GAB, 3

MtCeram_Peak_MapScripts::
	.byte 0


MtCeram_Peak_SaveGameTrigger::
# 10 "data//maps/MtCeram_Peak/scripts.pory"
	goto_if_set FLAG_MT_CERAM_DREAMSTONE, MtCeram_Peak_SaveGameTrigger_2
# 12 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_TEMP_C, 1
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	call Common_EventScript_SaveGameBeforeSomber
# 15 "data//maps/MtCeram_Peak/scripts.pory"
	releaseall
	end

MtCeram_Peak_SaveGameTrigger_2:
	end


MtCeramPeak_MainEvent_Trigger::
# 20 "data//maps/MtCeram_Peak/scripts.pory"
	goto_if_set FLAG_MT_CERAM_DREAMSTONE, MtCeramPeak_MainEvent_Trigger_2
# 22 "data//maps/MtCeram_Peak/scripts.pory"
	lockall
# 23 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 24 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_1
# 25 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_0
# 28 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	goto_if_set FLAG_SKIP_CERAM_CUTSCENE, MtCeramPeak_MainEvent_Trigger_4
# 58 "data//maps/MtCeram_Peak/scripts.pory"
	goto MtCeramPeak_MainEvent_Cutscene
	return

MtCeramPeak_MainEvent_Trigger_2:
	end

MtCeramPeak_MainEvent_Trigger_4:
# 32 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_2, MSGBOX_YESNO
# 33 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 34 "data//maps/MtCeram_Peak/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MtCeramPeak_MainEvent_Trigger_7
# 38 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data//maps/MtCeram_Peak/scripts.pory"
	special SpawnCameraObject
# 42 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeramPeak_MainEvent_Trigger_Movement_1
# 43 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 44 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 3, MtCeramPeak_MainEvent_Trigger_Movement_3
# 45 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_4
# 46 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_5
# 47 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 48 "data//maps/MtCeram_Peak/scripts.pory"
	special RemoveCameraObject
# 50 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 51 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 53 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 55 "data//maps/MtCeram_Peak/scripts.pory"
	goto MtCeramPeak_MainEvent_Battle
	return

MtCeramPeak_MainEvent_Trigger_7:
# 35 "data//maps/MtCeram_Peak/scripts.pory"
	goto MtCeramPeak_MainEvent_Cutscene
	return


MtCeramPeak_MainEvent_Cutscene::
# 65 "data//maps/MtCeram_Peak/scripts.pory"
	goto_if_set FLAG_CERAM_TALONFLAME, MtCeramPeak_MainEvent_Cutscene_2
MtCeramPeak_MainEvent_Cutscene_1:
# 66 "data//maps/MtCeram_Peak/scripts.pory"
	setflag FLAG_SKIP_CERAM_CUTSCENE
# 69 "data//maps/MtCeram_Peak/scripts.pory"
	special SpawnCameraObject
# 70 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeramPeak_MainEvent_Trigger_Movement_1
# 71 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 72 "data//maps/MtCeram_Peak/scripts.pory"
	special RemoveCameraObject
# 74 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 75 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_0
# 76 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 78 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 79 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 80 "data//maps/MtCeram_Peak/scripts.pory"
	delay 20
# 82 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 83 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_1
# 84 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 88 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 3, MtCeramPeak_MainEvent_Trigger_Movement_3
# 89 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_4
# 90 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_5
# 91 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 93 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 94 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_2
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 99 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 104 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 105 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_3
# 106 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 107 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Cutscene_Movement_0
# 108 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 109 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 110 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_4
# 112 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 113 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 114 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 115 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_5
# 116 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Cutscene_Movement_1
# 117 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 118 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 119 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_6
# 120 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 121 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 122 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 123 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 124 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 125 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_7
# 126 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 127 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Cutscene_Movement_1
# 128 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 129 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 130 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_8
# 131 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 132 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 134 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 135 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_9
# 137 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 138 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 140 "data//maps/MtCeram_Peak/scripts.pory"
	goto MtCeramPeak_MainEvent_Battle
	return

MtCeramPeak_MainEvent_Cutscene_2:
# 65 "data//maps/MtCeram_Peak/scripts.pory"
	clearflag FLAG_CERAM_TALONFLAME
	goto MtCeramPeak_MainEvent_Cutscene_1


MtCeramPeak_MainEvent_Battle::
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 146 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_1
# 147 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 150 "data//maps/MtCeram_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMPEAK_MOXIE, MtCeramPeak_MainEvent_Battle_Text_2
# 157 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_3
# 159 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 160 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Battle_Movement_0
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 162 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 163 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_4
# 164 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 165 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_4
# 166 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 167 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_5
# 169 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 170 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Cutscene_Movement_1
# 171 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 172 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 173 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_7
# 174 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 175 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Battle_Movement_1
# 176 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 177 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Cutscene_Movement_0
# 178 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Cutscene_Movement_0
# 179 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Cutscene_Movement_0
# 180 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Cutscene_Movement_0
# 181 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 183 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 184 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 185 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_8
# 186 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 187 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 189 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Battle_Movement_2
# 190 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 191 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 192 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 193 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_9
# 194 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 195 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 197 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 198 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_10
# 199 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 200 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 202 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 203 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_11
# 204 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 205 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 207 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 208 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_12
# 209 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 210 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 212 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 213 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_13
# 214 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 215 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 217 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 218 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_14
# 219 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 222 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Battle_Movement_3
# 223 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Battle_Movement_3
# 224 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Battle_Movement_3
# 225 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Battle_Movement_3
# 226 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Battle_Movement_3
# 227 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 229 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 230 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 231 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 232 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 233 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 235 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 237 "data//maps/MtCeram_Peak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 238 "data//maps/MtCeram_Peak/scripts.pory"
	doweather
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 241 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_15
# 242 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 243 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 245 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 246 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_16
# 248 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 249 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_17
# 250 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 252 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 253 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 254 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 12
# 255 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 256 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 257 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 258 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 260 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 261 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_18
# 262 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 263 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Battle_Movement_4
# 264 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Battle_Movement_4
# 265 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 266 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Battle_Movement_5
# 267 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 268 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_2
# 269 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 270 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_19
# 271 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 272 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 273 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 274 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_20
# 275 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 276 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Battle_Movement_6
# 277 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 278 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 279 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_21
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 282 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Battle_Movement_7
# 283 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 284 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_22
# 285 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 286 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 287 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 289 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 3
# 290 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 3
# 291 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 16
# 292 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 293 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 294 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 295 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 296 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 297 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 299 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 300 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_23
# 301 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 302 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 303 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 304 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 305 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 306 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 307 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 308 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 310 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 311 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 313 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 314 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_24
# 315 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 316 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 317 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 318 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 319 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 320 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 321 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 322 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 327 "data//maps/MtCeram_Peak/scripts.pory"
	setflag FLAG_MT_CERAM_DREAMSTONE
# 329 "data//maps/MtCeram_Peak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_2
# 332 "data//maps/MtCeram_Peak/scripts.pory"
	warp MAP_ANCIENT_CERAM, 57, 41
# 334 "data//maps/MtCeram_Peak/scripts.pory"
	releaseall
	end


# 27 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_0:
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 42 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_1:
# 42 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 43 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_2:
# 43 "data//maps/MtCeram_Peak/scripts.pory"
	face_down
	step_end

# 44 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_3:
# 44 "data//maps/MtCeram_Peak/scripts.pory"
	face_right
	step_end

# 45 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_4:
# 45 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 46 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_5:
# 46 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 46 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 107 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Cutscene_Movement_0:
# 107 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 116 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Cutscene_Movement_1:
# 116 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
	step_end

# 160 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_0:
# 160 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_down
	step_end

# 175 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_1:
# 175 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 175 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 175 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 175 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 189 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_2:
# 189 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
# 189 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 222 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_3:
# 222 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 263 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_4:
# 263 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 263 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 263 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 263 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 263 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 263 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 266 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_5:
# 266 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 266 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 266 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 266 "data//maps/MtCeram_Peak/scripts.pory"
	walk_left
# 266 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 266 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 276 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_6:
# 276 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 276 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 276 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 276 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 276 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 276 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 276 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 276 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 282 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_7:
# 282 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
# 282 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

MtCeramPeak_MainEvent_Trigger_Text_0:
# 23 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???$"

MtCeramPeak_MainEvent_Trigger_Text_1:
# 24 "data//maps/MtCeram_Peak/scripts.pory"
	.string "So you broke through my grunts.\n"
	.string "Come here then.$"

MtCeramPeak_MainEvent_Trigger_Text_2:
# 32 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Skip cutscene?$"

MtCeramPeak_MainEvent_Cutscene_Text_0:
# 75 "data//maps/MtCeram_Peak/scripts.pory"
	.string "A dreamstone. This is the first time\n"
	.string "I've ever seen one.$"

MtCeramPeak_MainEvent_Cutscene_Text_1:
# 83 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Move. I want to see this trainers face.$"

MtCeramPeak_MainEvent_Cutscene_Text_2:
# 94 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Now step up to me.$"

MtCeramPeak_MainEvent_Cutscene_Text_3:
# 105 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Why, young trainer, have you been a\n"
	.string "thorn in my organisations side?\p"
	.string "What's in it for you?\p"
	.string "...\p"
	.string "So you're looking for Professor\n"
	.string "Tenebris. That explains everything.$"

MtCeramPeak_MainEvent_Cutscene_Text_4:
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Young trainer, do you even know what\n"
	.string "the good professor was researching?\p"
	.string "Do you even know what a dreamstone is?\p"
	.string "A dreamstone is little but a triangular\n"
	.string "rock. At first sight. But it possesses a\l"
	.string "unique property. When Pokémon fall\l"
	.string "asleep, their past memories resurface.\p"
	.string "A dreamstone absorbs this.$"

MtCeramPeak_MainEvent_Cutscene_Text_5:
# 115 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Fascinating stuff. This is what your\n"
	.string "dear professor was researching, child.\p"
	.string "How do these dreamstones actually\n"
	.string "work? What kind of memories can\l"
	.string "dreamstones absorb?$"

MtCeramPeak_MainEvent_Cutscene_Text_6:
# 119 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And she discovered something\n"
	.string "incredible!$"

MtCeramPeak_MainEvent_Cutscene_Text_7:
# 125 "data//maps/MtCeram_Peak/scripts.pory"
	.string "That stone behind me contains the\n"
	.string "memories of hundreds of generations of\l"
	.string "Pokémon - all the way back to\l"
	.string "prehistoric times!$"

MtCeramPeak_MainEvent_Cutscene_Text_8:
# 130 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Can you imagine child? Can you?!\n"
	.string "The potential of such an object?\p"
	.string "Even as pure energy, a dreamstone is\n"
	.string "overflowing! But there's more.\p"
	.string "So much more.\p"
	.string "What if we could reverse the process?\n"
	.string "Use the dreamstone to revive these\l"
	.string "memories? Such powerful Pokémon once\l"
	.string "roamed across Cormoria - wouldn't it be\l"
	.string "grand to have them do your bidding?$"

MtCeramPeak_MainEvent_Cutscene_Text_9:
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And if we get such power, there would be\n"
	.string "nothing stopping Team Somber from\l"
	.string "having absolute control!\p"
	.string "A noble goal, is it not, {PLAYER}?\p"
	.string "And you! You dare to get in our way, time\n"
	.string "and again! No more!$"

MtCeramPeak_MainEvent_Battle_Text_0:
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Moxie$"

MtCeramPeak_MainEvent_Battle_Text_1:
# 146 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I, Moxie, Head of the Team Somber\n"
	.string "Research Wing, will end your meddling\l"
	.string "once and for all!$"

MtCeramPeak_MainEvent_Battle_Text_2:
# 150 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I can't believe it!$"

MtCeramPeak_MainEvent_Battle_Text_3:
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Argh! Impossible! How could I have lost!$"

MtCeramPeak_MainEvent_Battle_Text_4:
# 163 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Fine! Whatever! I don't have time to\n"
	.string "waste. We need the dreamstone and I\l"
	.string "will get this one no matter what!$"

MtCeramPeak_MainEvent_Battle_Text_5:
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Gabrielle! You worthless fool! Be of use\n"
	.string "for a change and go grab the\l"
	.string "dreamstone. Hurry up before {PLAYER}\l"
	.string "gets it!$"

MtCeramPeak_MainEvent_Battle_Text_6:
# 172 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Gabrielle$"

MtCeramPeak_MainEvent_Battle_Text_7:
# 173 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Y-yes boss!$"

MtCeramPeak_MainEvent_Battle_Text_8:
# 185 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Ugh! It's not moving!$"

MtCeramPeak_MainEvent_Battle_Text_9:
# 193 "data//maps/MtCeram_Peak/scripts.pory"
	.string "You idiot! Put some backbone in it!$"

MtCeramPeak_MainEvent_Battle_Text_10:
# 198 "data//maps/MtCeram_Peak/scripts.pory"
	.string "...Boss?$"

MtCeramPeak_MainEvent_Battle_Text_11:
# 203 "data//maps/MtCeram_Peak/scripts.pory"
	.string "What?$"

MtCeramPeak_MainEvent_Battle_Text_12:
# 208 "data//maps/MtCeram_Peak/scripts.pory"
	.string "...I'm stuck. I can't move...I'm stuck to\n"
	.string "the stone!$"

MtCeramPeak_MainEvent_Battle_Text_13:
# 213 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Boss...I feel sick. What's happening? Is\n"
	.string "this supposed to happen?$"

MtCeramPeak_MainEvent_Battle_Text_14:
# 218 "data//maps/MtCeram_Peak/scripts.pory"
	.string "You must've messed it up!$"

MtCeramPeak_MainEvent_Battle_Text_15:
# 241 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Is that an earthquake? It'll trigger a\n"
	.string "volcanic eruption! Gabrielle, you -\l"
	.string "aaargh! You've released the\l"
	.string "dreamstone's energy somehow!$"

MtCeramPeak_MainEvent_Battle_Text_16:
# 246 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I just did what you told me to do!\n"
	.string "I wanted to be useful!$"

MtCeramPeak_MainEvent_Battle_Text_17:
# 249 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And now you've doomed us all!$"

MtCeramPeak_MainEvent_Battle_Text_18:
# 261 "data//maps/MtCeram_Peak/scripts.pory"
	.string "This is bad...come on you two! Let's get\n"
	.string "out of here before this mountain\l"
	.string "erupts!$"

MtCeramPeak_MainEvent_Battle_Text_19:
# 270 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Boss - what about me?$"

MtCeramPeak_MainEvent_Battle_Text_20:
# 274 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Take care Gabrielle. I wish you had done\n"
	.string "more with your life.$"

MtCeramPeak_MainEvent_Battle_Text_21:
# 279 "data//maps/MtCeram_Peak/scripts.pory"
	.string "He-he just left me...$"

MtCeramPeak_MainEvent_Battle_Text_22:
# 284 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I'm still stuck! H-hey, {PLAYER} -\n"
	.string "please, you have to help me.$"

MtCeramPeak_MainEvent_Battle_Text_23:
# 300 "data//maps/MtCeram_Peak/scripts.pory"
	.string "W-what's happening?$"

MtCeramPeak_MainEvent_Battle_Text_24:
# 314 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Ahhh!!!$"
