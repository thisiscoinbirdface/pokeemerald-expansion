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
# 26 "data//maps/MtCeram_Peak/scripts.pory"
	lockall
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 28 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_1
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_0
# 32 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 35 "data//maps/MtCeram_Peak/scripts.pory"
	goto_if_set FLAG_SKIP_CERAM_CUTSCENE, MtCeramPeak_MainEvent_Trigger_4
# 62 "data//maps/MtCeram_Peak/scripts.pory"
	goto MtCeramPeak_MainEvent_Cutscene
	return

MtCeramPeak_MainEvent_Trigger_2:
	end

MtCeramPeak_MainEvent_Trigger_4:
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_2, MSGBOX_YESNO
# 37 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 38 "data//maps/MtCeram_Peak/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MtCeramPeak_MainEvent_Trigger_7
# 42 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data//maps/MtCeram_Peak/scripts.pory"
	special SpawnCameraObject
# 46 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeramPeak_MainEvent_Trigger_Movement_1
# 47 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 48 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 3, MtCeramPeak_MainEvent_Trigger_Movement_3
# 49 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_4
# 50 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_5
# 51 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 52 "data//maps/MtCeram_Peak/scripts.pory"
	special RemoveCameraObject
# 54 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 55 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 57 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 59 "data//maps/MtCeram_Peak/scripts.pory"
	goto MtCeramPeak_MainEvent_Battle
	return

MtCeramPeak_MainEvent_Trigger_7:
# 39 "data//maps/MtCeram_Peak/scripts.pory"
	goto MtCeramPeak_MainEvent_Cutscene
	return


MtCeramPeak_MainEvent_Cutscene::
# 69 "data//maps/MtCeram_Peak/scripts.pory"
	goto_if_set FLAG_CERAM_TALONFLAME, MtCeramPeak_MainEvent_Cutscene_2
MtCeramPeak_MainEvent_Cutscene_1:
# 70 "data//maps/MtCeram_Peak/scripts.pory"
	setflag FLAG_SKIP_CERAM_CUTSCENE
# 73 "data//maps/MtCeram_Peak/scripts.pory"
	special SpawnCameraObject
# 74 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeramPeak_MainEvent_Trigger_Movement_1
# 75 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 76 "data//maps/MtCeram_Peak/scripts.pory"
	special RemoveCameraObject
# 78 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 79 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_0
# 80 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 82 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 83 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 84 "data//maps/MtCeram_Peak/scripts.pory"
	delay 20
# 86 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 87 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_1
# 88 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 92 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 3, MtCeramPeak_MainEvent_Trigger_Movement_3
# 93 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_4
# 94 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_5
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 97 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_2
# 99 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 102 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 103 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 108 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 109 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_3
# 110 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Cutscene_Movement_0
# 112 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 113 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 114 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 115 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_4
# 116 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 117 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 118 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 119 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_5
# 120 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Cutscene_Movement_1
# 121 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 122 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 123 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_6
# 124 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 125 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 126 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 127 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 128 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 129 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_7
# 130 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 131 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Cutscene_Movement_1
# 132 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 134 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_8
# 135 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 137 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 138 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 139 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Trigger_Text_0
# 140 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Cutscene_Text_9
# 141 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 142 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 144 "data//maps/MtCeram_Peak/scripts.pory"
	goto MtCeramPeak_MainEvent_Battle
	return

MtCeramPeak_MainEvent_Cutscene_2:
# 69 "data//maps/MtCeram_Peak/scripts.pory"
	clearflag FLAG_CERAM_TALONFLAME
	goto MtCeramPeak_MainEvent_Cutscene_1


MtCeramPeak_MainEvent_Battle::
# 149 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 150 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_1
# 151 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 154 "data//maps/MtCeram_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMPEAK_MOXIE, MtCeramPeak_MainEvent_Battle_Text_2
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 162 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_3
# 163 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 164 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Battle_Movement_0
# 165 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 166 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 167 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_4
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 169 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_4
# 170 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 171 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 172 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_5
# 173 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 174 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Cutscene_Movement_1
# 175 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 176 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 177 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_7
# 178 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 179 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Battle_Movement_1
# 180 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 181 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Cutscene_Movement_0
# 182 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Cutscene_Movement_0
# 183 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Cutscene_Movement_0
# 184 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Cutscene_Movement_0
# 185 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 187 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 188 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 189 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_8
# 190 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 191 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 193 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Battle_Movement_2
# 194 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 195 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 196 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 197 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_9
# 198 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 199 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 201 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 202 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_10
# 203 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 204 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 206 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 207 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_11
# 208 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 209 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 211 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 212 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_12
# 213 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 214 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 216 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 217 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_13
# 218 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 219 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 221 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 222 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_14
# 223 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 226 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Battle_Movement_3
# 227 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Battle_Movement_3
# 228 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Battle_Movement_3
# 229 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Battle_Movement_3
# 230 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Battle_Movement_3
# 231 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 233 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 234 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 235 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 236 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 237 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 238 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 239 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 241 "data//maps/MtCeram_Peak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 242 "data//maps/MtCeram_Peak/scripts.pory"
	doweather
# 244 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 245 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_15
# 246 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 247 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 249 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 250 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_16
# 252 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 253 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_17
# 254 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 256 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 257 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 258 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 12
# 259 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 260 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 261 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 262 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 264 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 265 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_18
# 266 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 267 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Battle_Movement_4
# 268 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Battle_Movement_4
# 269 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 270 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Battle_Movement_5
# 271 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 272 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_2
# 273 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 274 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_19
# 275 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 276 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 277 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_0
# 278 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_20
# 279 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Battle_Movement_6
# 281 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 282 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 283 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_21
# 284 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 286 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Battle_Movement_7
# 287 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 288 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_22
# 289 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 290 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 291 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 293 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 3
# 294 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 3
# 295 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 16
# 296 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 297 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 298 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 299 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 300 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 301 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 303 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 304 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_23
# 305 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 306 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 307 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 308 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 309 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 310 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 311 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 312 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 314 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 315 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 317 "data//maps/MtCeram_Peak/scripts.pory"
	speakername MtCeramPeak_MainEvent_Battle_Text_6
# 318 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Battle_Text_24
# 319 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 320 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 321 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 322 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 323 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 324 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 325 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 326 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 331 "data//maps/MtCeram_Peak/scripts.pory"
	setflag FLAG_MT_CERAM_DREAMSTONE
# 333 "data//maps/MtCeram_Peak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_2
# 336 "data//maps/MtCeram_Peak/scripts.pory"
	warp MAP_ANCIENT_CERAM, 57, 41
# 338 "data//maps/MtCeram_Peak/scripts.pory"
	releaseall
	end


# 31 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_0:
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 46 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_1:
# 46 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 47 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_2:
# 47 "data//maps/MtCeram_Peak/scripts.pory"
	face_down
	step_end

# 48 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_3:
# 48 "data//maps/MtCeram_Peak/scripts.pory"
	face_right
	step_end

# 49 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_4:
# 49 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 50 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_5:
# 50 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 50 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 111 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Cutscene_Movement_0:
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 120 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Cutscene_Movement_1:
# 120 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
	step_end

# 164 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_0:
# 164 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_down
	step_end

# 179 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_1:
# 179 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 179 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 179 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 179 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 193 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_2:
# 193 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
# 193 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 226 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_3:
# 226 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 267 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_4:
# 267 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 267 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 267 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 267 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 267 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 267 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 270 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_5:
# 270 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 270 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 270 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 270 "data//maps/MtCeram_Peak/scripts.pory"
	walk_left
# 270 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 270 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 280 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_6:
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 280 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 286 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Battle_Movement_7:
# 286 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
# 286 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

MtCeramPeak_MainEvent_Trigger_Text_0:
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???$"

MtCeramPeak_MainEvent_Trigger_Text_1:
# 28 "data//maps/MtCeram_Peak/scripts.pory"
	.string "So you broke through my grunts.\n"
	.string "Come here then.$"

MtCeramPeak_MainEvent_Trigger_Text_2:
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Skip cutscene?$"

MtCeramPeak_MainEvent_Cutscene_Text_0:
# 79 "data//maps/MtCeram_Peak/scripts.pory"
	.string "A dreamstone. This is the first time\n"
	.string "I've ever seen one.$"

MtCeramPeak_MainEvent_Cutscene_Text_1:
# 87 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Move. I want to see this trainers face.$"

MtCeramPeak_MainEvent_Cutscene_Text_2:
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Now step up to me.$"

MtCeramPeak_MainEvent_Cutscene_Text_3:
# 109 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Why, young trainer, have you been a\n"
	.string "thorn in my organisations side?\p"
	.string "What's in it for you?\p"
	.string "...\p"
	.string "So you're looking for Professor\n"
	.string "Tenebris. That explains everything.$"

MtCeramPeak_MainEvent_Cutscene_Text_4:
# 115 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Young trainer, do you even know what\n"
	.string "the good professor was researching?\p"
	.string "Do you even know what a dreamstone is?\p"
	.string "A dreamstone is little but a triangular\n"
	.string "rock. At first sight. But it possesses a\l"
	.string "unique property. When Pokémon fall\l"
	.string "asleep, their past memories resurface.\p"
	.string "A dreamstone absorbs this.$"

MtCeramPeak_MainEvent_Cutscene_Text_5:
# 119 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Fascinating stuff. This is what your\n"
	.string "dear professor was researching, child.\p"
	.string "How do these dreamstones actually\n"
	.string "work? What kind of memories can\l"
	.string "dreamstones absorb?$"

MtCeramPeak_MainEvent_Cutscene_Text_6:
# 123 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And she discovered something\n"
	.string "incredible!$"

MtCeramPeak_MainEvent_Cutscene_Text_7:
# 129 "data//maps/MtCeram_Peak/scripts.pory"
	.string "That stone behind me contains the\n"
	.string "memories of hundreds of generations of\l"
	.string "Pokémon - all the way back to\l"
	.string "prehistoric times!$"

MtCeramPeak_MainEvent_Cutscene_Text_8:
# 134 "data//maps/MtCeram_Peak/scripts.pory"
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
# 140 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And if we get such power, there would be\n"
	.string "nothing stopping Team Somber from\l"
	.string "having absolute control!\p"
	.string "A noble goal, is it not, {PLAYER}?\p"
	.string "And you! You dare to get in our way, time\n"
	.string "and again! No more!$"

MtCeramPeak_MainEvent_Battle_Text_0:
# 149 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Moxie$"

MtCeramPeak_MainEvent_Battle_Text_1:
# 150 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I, Moxie, Head of the Team Somber\n"
	.string "Research Wing, will end your meddling\l"
	.string "once and for all!$"

MtCeramPeak_MainEvent_Battle_Text_2:
# 154 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I can't believe it!$"

MtCeramPeak_MainEvent_Battle_Text_3:
# 162 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Argh! Impossible! How could I have lost!$"

MtCeramPeak_MainEvent_Battle_Text_4:
# 167 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Fine! Whatever! I don't have time to\n"
	.string "waste. We need the dreamstone and I\l"
	.string "will get this one no matter what!$"

MtCeramPeak_MainEvent_Battle_Text_5:
# 172 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Gabrielle! You worthless fool! Be of use\n"
	.string "for a change and go grab the\l"
	.string "dreamstone. Hurry up before {PLAYER}\l"
	.string "gets it!$"

MtCeramPeak_MainEvent_Battle_Text_6:
# 176 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Gabrielle$"

MtCeramPeak_MainEvent_Battle_Text_7:
# 177 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Y-yes boss!$"

MtCeramPeak_MainEvent_Battle_Text_8:
# 189 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Ugh! It's not moving!$"

MtCeramPeak_MainEvent_Battle_Text_9:
# 197 "data//maps/MtCeram_Peak/scripts.pory"
	.string "You idiot! Put some backbone in it!$"

MtCeramPeak_MainEvent_Battle_Text_10:
# 202 "data//maps/MtCeram_Peak/scripts.pory"
	.string "...Boss?$"

MtCeramPeak_MainEvent_Battle_Text_11:
# 207 "data//maps/MtCeram_Peak/scripts.pory"
	.string "What?$"

MtCeramPeak_MainEvent_Battle_Text_12:
# 212 "data//maps/MtCeram_Peak/scripts.pory"
	.string "...I'm stuck. I can't move...I'm stuck to\n"
	.string "the stone!$"

MtCeramPeak_MainEvent_Battle_Text_13:
# 217 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Boss...I feel sick. What's happening? Is\n"
	.string "this supposed to happen?$"

MtCeramPeak_MainEvent_Battle_Text_14:
# 222 "data//maps/MtCeram_Peak/scripts.pory"
	.string "You must've messed it up!$"

MtCeramPeak_MainEvent_Battle_Text_15:
# 245 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Is that an earthquake? It'll trigger a\n"
	.string "volcanic eruption! Gabrielle, you -\l"
	.string "aaargh! You've released the\l"
	.string "dreamstone's energy somehow!$"

MtCeramPeak_MainEvent_Battle_Text_16:
# 250 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I just did what you told me to do!\n"
	.string "I wanted to be useful!$"

MtCeramPeak_MainEvent_Battle_Text_17:
# 253 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And now you've doomed us all!$"

MtCeramPeak_MainEvent_Battle_Text_18:
# 265 "data//maps/MtCeram_Peak/scripts.pory"
	.string "This is bad...come on you two! Let's get\n"
	.string "out of here before this mountain\l"
	.string "erupts!$"

MtCeramPeak_MainEvent_Battle_Text_19:
# 274 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Boss - what about me?$"

MtCeramPeak_MainEvent_Battle_Text_20:
# 278 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Take care Gabrielle. I wish you had done\n"
	.string "more with your life.$"

MtCeramPeak_MainEvent_Battle_Text_21:
# 283 "data//maps/MtCeram_Peak/scripts.pory"
	.string "He-he just left me...$"

MtCeramPeak_MainEvent_Battle_Text_22:
# 288 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I'm still stuck! H-hey, {PLAYER} -\n"
	.string "please, you have to help me.$"

MtCeramPeak_MainEvent_Battle_Text_23:
# 304 "data//maps/MtCeram_Peak/scripts.pory"
	.string "W-what's happening?$"

MtCeramPeak_MainEvent_Battle_Text_24:
# 318 "data//maps/MtCeram_Peak/scripts.pory"
	.string "Ahhh!!!$"
