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
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	special SaveGame
# 15 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 16 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 18 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_TEMP_C, 1
	end

MtCeram_Peak_SaveGameTrigger_2:
	end


MtCeramPeak_MainEvent_Trigger::
# 24 "data//maps/MtCeram_Peak/scripts.pory"
	goto_if_set FLAG_MT_CERAM_DREAMSTONE, MtCeramPeak_MainEvent_Trigger_2
# 25 "data//maps/MtCeram_Peak/scripts.pory"
	lockall
# 26 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_1
# 28 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_0
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 33 "data//maps/MtCeram_Peak/scripts.pory"
	special SpawnCameraObject
# 34 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeramPeak_MainEvent_Trigger_Movement_1
# 35 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	special RemoveCameraObject
# 38 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 39 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_2
# 40 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 42 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 43 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 44 "data//maps/MtCeram_Peak/scripts.pory"
	delay 20
# 46 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 47 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_3
# 48 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 52 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 3, MtCeramPeak_MainEvent_Trigger_Movement_3
# 53 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_4
# 54 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_5
# 55 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 57 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 58 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_4
# 59 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 62 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 63 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 68 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 69 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_5
# 70 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 71 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_6
# 72 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 73 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 74 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 75 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_6
# 76 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 77 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 78 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 79 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_7
# 80 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 81 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 82 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 83 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_8
# 84 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 85 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 86 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 87 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 88 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 89 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_9
# 90 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 91 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 92 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 93 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 94 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_10
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 96 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 97 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 99 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 100 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_11
# 101 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 102 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 103 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 104 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_13
# 105 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 108 "data//maps/MtCeram_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMPEAK_MOXIE, MtCeramPeak_MainEvent_Trigger_Text_14
# 115 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 116 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_15
# 117 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 118 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_8
# 119 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 120 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 121 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_16
# 122 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 123 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_4
# 124 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 125 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 126 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_17
# 127 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 128 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_7
# 129 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 130 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 131 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_19
# 132 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_9
# 134 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 135 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_6
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_6
# 137 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_6
# 138 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_6
# 139 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 141 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 142 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_20
# 144 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 147 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_10
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 149 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 150 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 151 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_21
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 153 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 156 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_22
# 157 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 160 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_23
# 162 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 163 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 165 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 166 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_24
# 167 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 170 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 171 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_25
# 172 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 173 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 175 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 176 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_26
# 177 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 180 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_11
# 181 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_11
# 182 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_11
# 183 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_11
# 184 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_11
# 185 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 187 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 188 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 189 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 190 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 191 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 192 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 193 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 195 "data//maps/MtCeram_Peak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 196 "data//maps/MtCeram_Peak/scripts.pory"
	doweather
# 198 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 199 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_27
# 200 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 201 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 203 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 204 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_28
# 206 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 207 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_29
# 208 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 210 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 211 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 212 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 12
# 213 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 214 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 215 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 216 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 218 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 219 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_30
# 220 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 221 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_12
# 222 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_12
# 223 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 224 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_13
# 225 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 226 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_2
# 227 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 228 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_31
# 229 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 230 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 231 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 232 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_32
# 233 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_14
# 235 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 236 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 237 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_33
# 238 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_15
# 241 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 242 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_34
# 243 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 244 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 245 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 247 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 3
# 248 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 3
# 249 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 16
# 250 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 251 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 252 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 253 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 254 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 255 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 257 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 258 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_35
# 259 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 260 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 261 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 262 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 263 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 264 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 265 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 266 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 268 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 269 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 271 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 272 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_36
# 273 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 274 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 275 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 276 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 277 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 278 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 279 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 285 "data//maps/MtCeram_Peak/scripts.pory"
	setflag FLAG_MT_CERAM_DREAMSTONE
# 287 "data//maps/MtCeram_Peak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_2
# 290 "data//maps/MtCeram_Peak/scripts.pory"
	warp MAP_ANCIENT_CERAM, 57, 41
# 292 "data//maps/MtCeram_Peak/scripts.pory"
	releaseall
	end

MtCeramPeak_MainEvent_Trigger_2:
	end


# 30 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_0:
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 34 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_1:
# 34 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 42 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_2:
# 42 "data//maps/MtCeram_Peak/scripts.pory"
	face_down
	step_end

# 52 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_3:
# 52 "data//maps/MtCeram_Peak/scripts.pory"
	face_right
	step_end

# 53 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_4:
# 53 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 54 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_5:
# 54 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 54 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 71 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_6:
# 71 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 80 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_7:
# 80 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
	step_end

# 118 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_8:
# 118 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_down
	step_end

# 133 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_9:
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 147 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_10:
# 147 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
# 147 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 180 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_11:
# 180 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 221 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_12:
# 221 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 221 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 221 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 221 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 221 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 221 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 224 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_13:
# 224 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 224 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 224 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 224 "data//maps/MtCeram_Peak/scripts.pory"
	walk_left
# 224 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 224 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 234 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_14:
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 240 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_15:
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

MtCeramPeak_MainEvent_Trigger_Text_0:
# 26 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???$"

MtCeramPeak_MainEvent_Trigger_Text_1:
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	.string "So you broke through my grunts. Come\n"
	.string "here then.$"

MtCeramPeak_MainEvent_Trigger_Text_2:
# 39 "data//maps/MtCeram_Peak/scripts.pory"
	.string "A dreamstone. This is the first time\n"
	.string "I've ever seen one.$"

MtCeramPeak_MainEvent_Trigger_Text_3:
# 47 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Move. I want to see this trainers face.$"

MtCeramPeak_MainEvent_Trigger_Text_4:
# 58 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Now step up to me.$"

MtCeramPeak_MainEvent_Trigger_Text_5:
# 69 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Why, young trainer, have you been a\n"
	.string "thorn in my organisations side? What's\l"
	.string "in it for you?\p"
	.string "...\p"
	.string "So you're looking for Professor\n"
	.string "Tenebris. That explains everything.$"

MtCeramPeak_MainEvent_Trigger_Text_6:
# 75 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Young trainer, do you even know what\n"
	.string "the good professor was researching? Do\l"
	.string "you even know what a dreamstone is?\p"
	.string "A dreamstone is little but a triangular\n"
	.string "rock. At first sight. But it possesses a\l"
	.string "unique property. When Pokémon fall\l"
	.string "asleep, their past memories resurface.\l"
	.string "A dreamstone absorbs this.$"

MtCeramPeak_MainEvent_Trigger_Text_7:
# 79 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Fascinating stuff. This is what your\n"
	.string "dear professor was researching, child.\p"
	.string "How does this dreamstone work? What\n"
	.string "kind of memories can a dreamstone\l"
	.string "absorb?$"

MtCeramPeak_MainEvent_Trigger_Text_8:
# 83 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And she discovered something\n"
	.string "incredible!$"

MtCeramPeak_MainEvent_Trigger_Text_9:
# 89 "data//maps/MtCeram_Peak/scripts.pory"
	.string "That stone behind me contains the\n"
	.string "memories of hundreds of generations of\l"
	.string "Pokémon - all the way back to\l"
	.string "prehistoric times!$"

MtCeramPeak_MainEvent_Trigger_Text_10:
# 94 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Can you imagine child? Can you?! The\n"
	.string "potential of such an object? Even as\l"
	.string "pure energy, a dreamstone is\l"
	.string "overflowing! But there's more. So much\l"
	.string "more. What if we could reverse the\l"
	.string "process? Use the dreamstone to revive\l"
	.string "these memories? Such powerful Pokémon\l"
	.string "once roamed across Cormoria - wouldn't\l"
	.string "it be grand to have them do your\l"
	.string "bidding?$"

MtCeramPeak_MainEvent_Trigger_Text_11:
# 100 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And if we get such power, there would be\n"
	.string "nothing stopping Team Somber from\l"
	.string "having absolute control! A noble goal,\l"
	.string "is it not, {PLAYER}?\p"
	.string "And you! You dare to get in our way, time\n"
	.string "and again! No more!$"

MtCeramPeak_MainEvent_Trigger_Text_12:
# 103 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Moxie$"

MtCeramPeak_MainEvent_Trigger_Text_13:
# 104 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I, Moxie, Head of the Team Somber\n"
	.string "Research Wing, will end your meddling\l"
	.string "once and for all!$"

MtCeramPeak_MainEvent_Trigger_Text_14:
# 108 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I can't believe it!$"

MtCeramPeak_MainEvent_Trigger_Text_15:
# 116 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Argh! Impossible! How could I have lost!$"

MtCeramPeak_MainEvent_Trigger_Text_16:
# 121 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Fine! Whatever! I don't have time to\n"
	.string "waste. We need the dreamstone and I\l"
	.string "will get this one no matter what!$"

MtCeramPeak_MainEvent_Trigger_Text_17:
# 126 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Gabrielle! You worthless fool! Be of use\n"
	.string "for a change and go grab the\l"
	.string "dreamstone. Hurry up before {PLAYER}\l"
	.string "gets it!$"

MtCeramPeak_MainEvent_Trigger_Text_18:
# 130 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Gabrielle$"

MtCeramPeak_MainEvent_Trigger_Text_19:
# 131 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Y-yes boss!$"

MtCeramPeak_MainEvent_Trigger_Text_20:
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Ugh! It's not moving!$"

MtCeramPeak_MainEvent_Trigger_Text_21:
# 151 "data//maps/MtCeram_Peak/scripts.pory"
	.string "You idiot! Put some backbone in it!$"

MtCeramPeak_MainEvent_Trigger_Text_22:
# 156 "data//maps/MtCeram_Peak/scripts.pory"
	.string "...Boss?$"

MtCeramPeak_MainEvent_Trigger_Text_23:
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	.string "What?$"

MtCeramPeak_MainEvent_Trigger_Text_24:
# 166 "data//maps/MtCeram_Peak/scripts.pory"
	.string "...I'm stuck. I can't move...I'm stuck to\n"
	.string "the stone!$"

MtCeramPeak_MainEvent_Trigger_Text_25:
# 171 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Boss...I feel sick. What's happening? Is\n"
	.string "this supposed to happen?$"

MtCeramPeak_MainEvent_Trigger_Text_26:
# 176 "data//maps/MtCeram_Peak/scripts.pory"
	.string "You must've messed it up!$"

MtCeramPeak_MainEvent_Trigger_Text_27:
# 199 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Is that an earthquake? It'll trigger a\n"
	.string "volcanic eruption! Gabrielle, you -\l"
	.string "aaargh! You've released the\l"
	.string "dreamstone's energy somehow!$"

MtCeramPeak_MainEvent_Trigger_Text_28:
# 204 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I just did what you told me to do!\n"
	.string "I wanted to be useful!$"

MtCeramPeak_MainEvent_Trigger_Text_29:
# 207 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And now you've doomed us all!$"

MtCeramPeak_MainEvent_Trigger_Text_30:
# 219 "data//maps/MtCeram_Peak/scripts.pory"
	.string "This is bad...come on you two! Let's get\n"
	.string "out of here before this mountain\l"
	.string "erupts!$"

MtCeramPeak_MainEvent_Trigger_Text_31:
# 228 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Boss - what about me?$"

MtCeramPeak_MainEvent_Trigger_Text_32:
# 232 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Take care Gabrielle. I wish you had done\n"
	.string "more with your life.$"

MtCeramPeak_MainEvent_Trigger_Text_33:
# 237 "data//maps/MtCeram_Peak/scripts.pory"
	.string "He-he just left me...$"

MtCeramPeak_MainEvent_Trigger_Text_34:
# 242 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I'm still stuck! H-hey, {PLAYER} -\n"
	.string "please, you have to help me.$"

MtCeramPeak_MainEvent_Trigger_Text_35:
# 258 "data//maps/MtCeram_Peak/scripts.pory"
	.string "W-what's happening?$"

MtCeramPeak_MainEvent_Trigger_Text_36:
# 272 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Ahhh!!!$"
