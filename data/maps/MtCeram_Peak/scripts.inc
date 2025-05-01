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
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	goto_if_set FLAG_CERAM_TALONFLAME, MtCeramPeak_MainEvent_Trigger_5
MtCeramPeak_MainEvent_Trigger_4:
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	lockall
# 32 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 33 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_1
# 34 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_0
# 37 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 39 "data//maps/MtCeram_Peak/scripts.pory"
	special SpawnCameraObject
# 40 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeramPeak_MainEvent_Trigger_Movement_1
# 41 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 42 "data//maps/MtCeram_Peak/scripts.pory"
	special RemoveCameraObject
# 44 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 45 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_2
# 46 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 48 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 49 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 50 "data//maps/MtCeram_Peak/scripts.pory"
	delay 20
# 52 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 53 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_3
# 54 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 58 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 3, MtCeramPeak_MainEvent_Trigger_Movement_3
# 59 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_4
# 60 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_5
# 61 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 63 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 64 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_4
# 65 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 68 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 69 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 74 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 75 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_5
# 76 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 77 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_6
# 78 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 79 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 80 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 81 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_6
# 82 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 83 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 84 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 85 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_7
# 86 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 87 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 88 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 89 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_8
# 90 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 91 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 92 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 93 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 94 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_9
# 96 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 97 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 99 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 100 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_10
# 101 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 102 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 103 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 104 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 105 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 106 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_11
# 107 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 108 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 109 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 110 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_13
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 114 "data//maps/MtCeram_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMPEAK_MOXIE, MtCeramPeak_MainEvent_Trigger_Text_14
# 121 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 122 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_15
# 123 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 124 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_8
# 125 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 126 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 127 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_16
# 128 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 129 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_4
# 130 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 131 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 132 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_17
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 134 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_7
# 135 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 137 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_19
# 138 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 139 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_9
# 140 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 141 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_6
# 142 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_6
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_6
# 144 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_6
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 147 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 149 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_20
# 150 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 151 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 153 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_10
# 154 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 156 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 157 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_21
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 159 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 162 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_22
# 163 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 164 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 166 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 167 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_23
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 169 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 171 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 172 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_24
# 173 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 174 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 176 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 177 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_25
# 178 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 179 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 181 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 182 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_26
# 183 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 186 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_11
# 187 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_11
# 188 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_11
# 189 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_11
# 190 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_11
# 191 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 193 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 194 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 195 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 196 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 197 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 198 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 199 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 201 "data//maps/MtCeram_Peak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 202 "data//maps/MtCeram_Peak/scripts.pory"
	doweather
# 204 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 205 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_27
# 206 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 207 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 209 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 210 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_28
# 212 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 213 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_29
# 214 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 216 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 217 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 218 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 12
# 219 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 220 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 221 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 222 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 224 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 225 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_30
# 226 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 227 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_12
# 228 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_12
# 229 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 230 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_13
# 231 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 232 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_2
# 233 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_31
# 235 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 236 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 237 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_12
# 238 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_32
# 239 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_14
# 241 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 242 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 243 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_33
# 244 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 246 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_15
# 247 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 248 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_34
# 249 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 250 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 251 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 253 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 3
# 254 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 3
# 255 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 16
# 256 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 257 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 258 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 259 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 260 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 261 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 263 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 264 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_35
# 265 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 266 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 267 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 268 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 269 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 270 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 271 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 272 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 274 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 275 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 277 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_18
# 278 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_36
# 279 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 281 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 282 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 283 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 284 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 285 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 286 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 291 "data//maps/MtCeram_Peak/scripts.pory"
	setflag FLAG_MT_CERAM_DREAMSTONE
# 293 "data//maps/MtCeram_Peak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_2
# 296 "data//maps/MtCeram_Peak/scripts.pory"
	warp MAP_ANCIENT_CERAM, 57, 41
# 298 "data//maps/MtCeram_Peak/scripts.pory"
	releaseall
	end

MtCeramPeak_MainEvent_Trigger_2:
	end

MtCeramPeak_MainEvent_Trigger_5:
# 28 "data//maps/MtCeram_Peak/scripts.pory"
	clearflag FLAG_CERAM_TALONFLAME
	goto MtCeramPeak_MainEvent_Trigger_4


# 36 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_0:
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 40 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_1:
# 40 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 48 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_2:
# 48 "data//maps/MtCeram_Peak/scripts.pory"
	face_down
	step_end

# 58 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_3:
# 58 "data//maps/MtCeram_Peak/scripts.pory"
	face_right
	step_end

# 59 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_4:
# 59 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 60 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_5:
# 60 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 60 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 77 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_6:
# 77 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 86 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_7:
# 86 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
	step_end

# 124 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_8:
# 124 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_down
	step_end

# 139 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_9:
# 139 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 139 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 139 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 139 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 153 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_10:
# 153 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
# 153 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 186 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_11:
# 186 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 227 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_12:
# 227 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 227 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 227 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 227 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 227 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 227 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 230 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_13:
# 230 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 230 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 230 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 230 "data//maps/MtCeram_Peak/scripts.pory"
	walk_left
# 230 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 230 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 240 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_14:
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 240 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 246 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_15:
# 246 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
# 246 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

MtCeramPeak_MainEvent_Trigger_Text_0:
# 32 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???$"

MtCeramPeak_MainEvent_Trigger_Text_1:
# 33 "data//maps/MtCeram_Peak/scripts.pory"
	.string "So you broke through my grunts.\n"
	.string "Come here then.$"

MtCeramPeak_MainEvent_Trigger_Text_2:
# 45 "data//maps/MtCeram_Peak/scripts.pory"
	.string "A dreamstone. This is the first time\n"
	.string "I've ever seen one.$"

MtCeramPeak_MainEvent_Trigger_Text_3:
# 53 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Move. I want to see this trainers face.$"

MtCeramPeak_MainEvent_Trigger_Text_4:
# 64 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Now step up to me.$"

MtCeramPeak_MainEvent_Trigger_Text_5:
# 75 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Why, young trainer, have you been a\n"
	.string "thorn in my organisations side?\p"
	.string "What's in it for you?\p"
	.string "...\p"
	.string "So you're looking for Professor\n"
	.string "Tenebris. That explains everything.$"

MtCeramPeak_MainEvent_Trigger_Text_6:
# 81 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Young trainer, do you even know what\n"
	.string "the good professor was researching?\p"
	.string "Do you even know what a dreamstone is?\p"
	.string "A dreamstone is little but a triangular\n"
	.string "rock. At first sight. But it possesses a\l"
	.string "unique property. When Pokémon fall\l"
	.string "asleep, their past memories resurface.\p"
	.string "A dreamstone absorbs this.$"

MtCeramPeak_MainEvent_Trigger_Text_7:
# 85 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Fascinating stuff. This is what your\n"
	.string "dear professor was researching, child.\p"
	.string "How do these dreamstones actually\n"
	.string "work? What kind of memories can\l"
	.string "dreamstones absorb?$"

MtCeramPeak_MainEvent_Trigger_Text_8:
# 89 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And she discovered something\n"
	.string "incredible!$"

MtCeramPeak_MainEvent_Trigger_Text_9:
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	.string "That stone behind me contains the\n"
	.string "memories of hundreds of generations of\l"
	.string "Pokémon - all the way back to\l"
	.string "prehistoric times!$"

MtCeramPeak_MainEvent_Trigger_Text_10:
# 100 "data//maps/MtCeram_Peak/scripts.pory"
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

MtCeramPeak_MainEvent_Trigger_Text_11:
# 106 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And if we get such power, there would be\n"
	.string "nothing stopping Team Somber from\l"
	.string "having absolute control!\p"
	.string "A noble goal, is it not, {PLAYER}?\p"
	.string "And you! You dare to get in our way, time\n"
	.string "and again! No more!$"

MtCeramPeak_MainEvent_Trigger_Text_12:
# 109 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Moxie$"

MtCeramPeak_MainEvent_Trigger_Text_13:
# 110 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I, Moxie, Head of the Team Somber\n"
	.string "Research Wing, will end your meddling\l"
	.string "once and for all!$"

MtCeramPeak_MainEvent_Trigger_Text_14:
# 114 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I can't believe it!$"

MtCeramPeak_MainEvent_Trigger_Text_15:
# 122 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Argh! Impossible! How could I have lost!$"

MtCeramPeak_MainEvent_Trigger_Text_16:
# 127 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Fine! Whatever! I don't have time to\n"
	.string "waste. We need the dreamstone and I\l"
	.string "will get this one no matter what!$"

MtCeramPeak_MainEvent_Trigger_Text_17:
# 132 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Gabrielle! You worthless fool! Be of use\n"
	.string "for a change and go grab the\l"
	.string "dreamstone. Hurry up before {PLAYER}\l"
	.string "gets it!$"

MtCeramPeak_MainEvent_Trigger_Text_18:
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Gabrielle$"

MtCeramPeak_MainEvent_Trigger_Text_19:
# 137 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Y-yes boss!$"

MtCeramPeak_MainEvent_Trigger_Text_20:
# 149 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Ugh! It's not moving!$"

MtCeramPeak_MainEvent_Trigger_Text_21:
# 157 "data//maps/MtCeram_Peak/scripts.pory"
	.string "You idiot! Put some backbone in it!$"

MtCeramPeak_MainEvent_Trigger_Text_22:
# 162 "data//maps/MtCeram_Peak/scripts.pory"
	.string "...Boss?$"

MtCeramPeak_MainEvent_Trigger_Text_23:
# 167 "data//maps/MtCeram_Peak/scripts.pory"
	.string "What?$"

MtCeramPeak_MainEvent_Trigger_Text_24:
# 172 "data//maps/MtCeram_Peak/scripts.pory"
	.string "...I'm stuck. I can't move...I'm stuck to\n"
	.string "the stone!$"

MtCeramPeak_MainEvent_Trigger_Text_25:
# 177 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Boss...I feel sick. What's happening? Is\n"
	.string "this supposed to happen?$"

MtCeramPeak_MainEvent_Trigger_Text_26:
# 182 "data//maps/MtCeram_Peak/scripts.pory"
	.string "You must've messed it up!$"

MtCeramPeak_MainEvent_Trigger_Text_27:
# 205 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Is that an earthquake? It'll trigger a\n"
	.string "volcanic eruption! Gabrielle, you -\l"
	.string "aaargh! You've released the\l"
	.string "dreamstone's energy somehow!$"

MtCeramPeak_MainEvent_Trigger_Text_28:
# 210 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I just did what you told me to do!\n"
	.string "I wanted to be useful!$"

MtCeramPeak_MainEvent_Trigger_Text_29:
# 213 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And now you've doomed us all!$"

MtCeramPeak_MainEvent_Trigger_Text_30:
# 225 "data//maps/MtCeram_Peak/scripts.pory"
	.string "This is bad...come on you two! Let's get\n"
	.string "out of here before this mountain\l"
	.string "erupts!$"

MtCeramPeak_MainEvent_Trigger_Text_31:
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Boss - what about me?$"

MtCeramPeak_MainEvent_Trigger_Text_32:
# 238 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Take care Gabrielle. I wish you had done\n"
	.string "more with your life.$"

MtCeramPeak_MainEvent_Trigger_Text_33:
# 243 "data//maps/MtCeram_Peak/scripts.pory"
	.string "He-he just left me...$"

MtCeramPeak_MainEvent_Trigger_Text_34:
# 248 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I'm still stuck! H-hey, {PLAYER} -\n"
	.string "please, you have to help me.$"

MtCeramPeak_MainEvent_Trigger_Text_35:
# 264 "data//maps/MtCeram_Peak/scripts.pory"
	.string "W-what's happening?$"

MtCeramPeak_MainEvent_Trigger_Text_36:
# 278 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Ahhh!!!$"
