# 1 "data//maps/MirrohPeak/scripts.pory"

# 2 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_MOXIE, 4
# 3 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_MELEA, 13
# 4 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_VINIEL, 16
# 5 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_AMPHAROS, 18

MirrohPeak_MapScripts::
	.byte 0


MirrohPeak_EventScript_Viniel_Trigger0::
# 26 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 27 "data//maps/MirrohPeak/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 29 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 30 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 31 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 32 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 34 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Viniel
	return


MirrohPeak_EventScript_Viniel_Trigger1::
# 38 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 39 "data//maps/MirrohPeak/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 41 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 42 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger1_Movement_0
# 43 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 44 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 46 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Viniel
	return


MirrohPeak_EventScript_Viniel::
# 51 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_0
# 52 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 53 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_0
# 54 "data//maps/MirrohPeak/scripts.pory"
	release
# 55 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_1
# 56 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 57 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 58 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_1
# 59 "data//maps/MirrohPeak/scripts.pory"
	release
# 60 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 61 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 62 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_2
# 63 "data//maps/MirrohPeak/scripts.pory"
	release
# 64 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 65 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_3
# 66 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_3
# 67 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_3
# 68 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 69 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 70 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_3
# 71 "data//maps/MirrohPeak/scripts.pory"
	release
# 72 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 73 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 74 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_4
# 75 "data//maps/MirrohPeak/scripts.pory"
	release
# 76 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 77 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_4
# 78 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_4
# 79 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_4
# 80 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_4
# 81 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_AMPHAROS, MirrohPeak_EventScript_Viniel_Movement_4
# 82 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_4
# 83 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 84 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 86 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_5
# 87 "data//maps/MirrohPeak/scripts.pory"
	release
# 88 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 89 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 90 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_6
# 91 "data//maps/MirrohPeak/scripts.pory"
	release
# 92 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_2
# 93 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 94 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_7
# 95 "data//maps/MirrohPeak/scripts.pory"
	release
# 96 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_5
# 97 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 98 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_8
# 99 "data//maps/MirrohPeak/scripts.pory"
	release
# 100 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_6
# 101 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 102 "data//maps/MirrohPeak/scripts.pory"
	removeobject 19
# 104 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_3
# 105 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_9
# 106 "data//maps/MirrohPeak/scripts.pory"
	release
# 107 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 108 "data//maps/MirrohPeak/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 109 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_7
# 110 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_8
# 111 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_9
# 112 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_9
# 113 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_10
# 114 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_AMPHAROS, MirrohPeak_EventScript_Viniel_Movement_0
# 115 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 116 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 118 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_10
# 119 "data//maps/MirrohPeak/scripts.pory"
	release
# 121 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_VINIEL_CUTSCENE
# 124 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_GruntsVSViniel_GenericDialogue::
# 129 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 130 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0
# 131 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_EventScript_Somber_Trigger::
# 136 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, MirrohPeak_EventScript_Somber_Trigger_2
# 138 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 139 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 142 "data//maps/MirrohPeak/scripts.pory"
	applymovement 5, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 143 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger1_Movement_0
# 144 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 145 "data//maps/MirrohPeak/scripts.pory"
	applymovement 6, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 146 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger1_Movement_0
# 147 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 148 "data//maps/MirrohPeak/scripts.pory"
	applymovement 2, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 149 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 150 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 151 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 152 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 153 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 155 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 156 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger1_Movement_0
# 157 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 158 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 159 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 162 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Viniel_Movement_3
# 163 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 164 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 165 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_0
# 166 "data//maps/MirrohPeak/scripts.pory"
	release
# 167 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 168 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 169 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 170 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_1
# 171 "data//maps/MirrohPeak/scripts.pory"
	release
# 172 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 174 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 175 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 176 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_2
# 177 "data//maps/MirrohPeak/scripts.pory"
	release
# 178 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 179 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 180 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 181 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_3
# 182 "data//maps/MirrohPeak/scripts.pory"
	release
# 185 "data//maps/MirrohPeak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 186 "data//maps/MirrohPeak/scripts.pory"
	doweather
# 188 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 189 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_4
# 190 "data//maps/MirrohPeak/scripts.pory"
	release
# 191 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 192 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 193 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 196 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 197 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 198 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 199 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 200 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 201 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 202 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 205 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_5
# 206 "data//maps/MirrohPeak/scripts.pory"
	release
# 207 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 208 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 209 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 210 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 211 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 214 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 215 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Somber_Trigger_Movement_7
# 216 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 217 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 218 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_8
# 219 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 220 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_6
# 221 "data//maps/MirrohPeak/scripts.pory"
	release
# 227 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_9
# 228 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 229 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_7
# 230 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 231 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 232 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_8
# 233 "data//maps/MirrohPeak/scripts.pory"
	release
# 234 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 235 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_9
# 236 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 237 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 238 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_10
# 239 "data//maps/MirrohPeak/scripts.pory"
	release
# 240 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_10
# 241 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 242 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_8
# 243 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 244 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Viniel_Movement_7
# 245 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_11
# 246 "data//maps/MirrohPeak/scripts.pory"
	release
# 247 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_11
# 248 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 249 "data//maps/MirrohPeak/scripts.pory"
	delay 48
# 251 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 252 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 254 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 255 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 256 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 257 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_12
# 258 "data//maps/MirrohPeak/scripts.pory"
	release
# 259 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_12
# 260 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 263 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 264 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 265 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 266 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 267 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 268 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 269 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 271 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 272 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 276 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 277 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 278 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_13
# 279 "data//maps/MirrohPeak/scripts.pory"
	release
# 281 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 282 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MOXIE
# 283 "data//maps/MirrohPeak/scripts.pory"
	removeobject 2
# 284 "data//maps/MirrohPeak/scripts.pory"
	removeobject 5
# 285 "data//maps/MirrohPeak/scripts.pory"
	removeobject 6
# 286 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 288 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 289 "data//maps/MirrohPeak/scripts.pory"
	setobjectxyperm 20, 19, 14
# 290 "data//maps/MirrohPeak/scripts.pory"
	addobject 20
# 291 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 292 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_13
# 293 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 294 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 295 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_3
# 296 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 297 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 299 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_2
# 300 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 301 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 302 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 303 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 304 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 305 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 306 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 307 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 308 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 309 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 310 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 313 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_MOXIE_DEFEATED
# 314 "data//maps/MirrohPeak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_7
# 317 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 318 "data//maps/MirrohPeak/scripts.pory"
	warp MAP_ANCIENT_MIRROH, 10, 10
# 319 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end

MirrohPeak_EventScript_Somber_Trigger_2:
	end


# 30 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Trigger0_Movement_0:
# 30 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 30 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 30 "data//maps/MirrohPeak/scripts.pory"
	walk_right
	step_end

# 42 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Trigger1_Movement_0:
# 42 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 42 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 51 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_0:
# 51 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_left
	step_end

# 55 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_1:
# 55 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_right
	step_end

# 60 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_2:
# 60 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 65 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_3:
# 65 "data//maps/MirrohPeak/scripts.pory"
	emote_question_mark
	step_end

# 77 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_4:
# 77 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
# 77 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 96 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_5:
# 96 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
	step_end

# 100 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_6:
# 100 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_left
# 100 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
# 100 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
	step_end

# 109 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_7:
# 109 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 110 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_8:
# 110 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 111 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_9:
# 111 "data//maps/MirrohPeak/scripts.pory"
	face_right
	step_end

# 113 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_10:
# 113 "data//maps/MirrohPeak/scripts.pory"
	face_left
	step_end

# 142 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_0:
# 142 "data//maps/MirrohPeak/scripts.pory"
	face_left
# 142 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 148 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_1:
# 148 "data//maps/MirrohPeak/scripts.pory"
	face_right
# 148 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 149 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_2:
# 149 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 168 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_3:
# 168 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_up
	step_end

# 191 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_4:
# 191 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 191 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 191 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 207 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_5:
# 207 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 207 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 207 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 209 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_6:
# 209 "data//maps/MirrohPeak/scripts.pory"
	fly_up
	step_end

# 215 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_7:
# 215 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 218 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_8:
# 218 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 218 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 227 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_9:
# 227 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
# 227 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 240 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_10:
# 240 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 240 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 240 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 240 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 240 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 240 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 240 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 240 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 240 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 247 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_11:
# 247 "data//maps/MirrohPeak/scripts.pory"
	face_up
# 247 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 259 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_12:
# 259 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 259 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 292 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_13:
# 292 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 292 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 292 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 292 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 292 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 292 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 292 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

MirrohPeak_EventScript_Viniel_Text_0:
# 53 "data//maps/MirrohPeak/scripts.pory"
	.string "???: Come at me, you lousy grunts! You\n"
	.string "think I'm going to let the likes of you\l"
	.string "mess around in MY backyard?$"

MirrohPeak_EventScript_Viniel_Text_1:
# 58 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: It's public space, VINIEL! Didn't\n"
	.string "they teach you that at Gym Leader\l"
	.string "School?$"

MirrohPeak_EventScript_Viniel_Text_2:
# 62 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: There IS no Gym Leader School!\n"
	.string "How stupid are you?$"

MirrohPeak_EventScript_Viniel_Text_3:
# 70 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT:...yeah, we know. I was just\n"
	.string "taunting you.$"

MirrohPeak_EventScript_Viniel_Text_4:
# 74 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: That was a terrible taunt!\n"
	.string "Didn't...didn't they teach you how to\l"
	.string "taunt at taunting school?$"

MirrohPeak_EventScript_Viniel_Text_5:
# 86 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: Who are you? Are you another\n"
	.string "grunt? C'mon, AMPHAROS and I can take\l"
	.string "all six of you together!$"

MirrohPeak_EventScript_Viniel_Text_6:
# 90 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Wait...isn't that the trainer who\n"
	.string "beat MELEA in SILVERSUN CITY?$"

MirrohPeak_EventScript_Viniel_Text_7:
# 94 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Yeah, it is! And also MOXIE at MT\n"
	.string "CERAM!\p"
	.string "GRUNT: Yikes - someone better tell go\n"
	.string "them!$"

MirrohPeak_EventScript_Viniel_Text_8:
# 98 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: I'm on it!$"

MirrohPeak_EventScript_Viniel_Text_9:
# 105 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: So you're an enemy of theirs,\n"
	.string "then, are you?\p"
	.string "VINIEL: An enemy of an enemy is a\n"
	.string "friend!\p"
	.string "VINIEL: Trainer, these Team Somber\n"
	.string "grunts suddenly came out of nowhere\l"
	.string "and started harrassing the people of\l"
	.string "WINTERLILY HOLLOW. So I'm out here\l"
	.string "beating them down, one by one! I can\l"
	.string "take this lot myself - you go on ahead!\l"
	.string "These guys are upto no good. The peak\l"
	.string "is right ahead - hurry up!$"

MirrohPeak_EventScript_Viniel_Text_10:
# 118 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: AMPHAROS is raring to go! Now\n"
	.string "c'mon you cowards - I'm going to shock\l"
	.string "some sense into all four of you\l"
	.string "together!$"

MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0:
# 130 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Even with the four of us\n"
	.string "together, its so hard! Guess that's why\l"
	.string "he's a Gym Leader.\p"
	.string "VINIEL: That all you got, grunts?$"

MirrohPeak_EventScript_Somber_Trigger_Text_0:
# 165 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Is it the child?$"

MirrohPeak_EventScript_Somber_Trigger_Text_1:
# 170 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: I presume it is.$"

MirrohPeak_EventScript_Somber_Trigger_Text_2:
# 176 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Your tenacity is admirable,\n"
	.string "child.\p"
	.string "I must acknowledge that...despite your\n"
	.string "insufferable propensity for ruining\l"
	.string "plans which are none of your concern.$"

MirrohPeak_EventScript_Somber_Trigger_Text_3:
# 181 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Beyond the dreamstone's gate\n"
	.string "lie some of the most powerful {PKMN} this\l"
	.string "world has ever seen. And of them all, one\l"
	.string "stood the strongest. The fiercest,\l"
	.string "most vicious. Long gone, extinct today.\l"
	.string "But in the hands of people with\l"
	.string "purpose, such power can be used to do\l"
	.string "great things...$"

MirrohPeak_EventScript_Somber_Trigger_Text_4:
# 189 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Go on, MOXIE. Start the\n"
	.string "DREAMALYSER.$"

MirrohPeak_EventScript_Somber_Trigger_Text_5:
# 205 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: MELEA, you go ahead. I'll deal\n"
	.string "with the child.$"

MirrohPeak_EventScript_Somber_Trigger_Text_6:
# 220 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: My dear colleague has gone\n"
	.string "ahead, into ANCIENT CORMORIA...you've\l"
	.string "been there, no? I wonder what it looks\l"
	.string "like. MELEA will tell me about it when\l"
	.string "she returns.\p"
	.string "...\p"
	.string "MOXIE: Child, we are at the cusp of\n"
	.string "attaining our goal. The ANCIENT TERROR\l"
	.string "will soon be ours.\p"
	.string "...\p"
	.string "MOXIE: I will give you a chance to turn\n"
	.string "around. Walk away from what you don't\l"
	.string "understand.\p"
	.string "...\p"
	.string "MOXIE: No?\p"
	.string "MOXIE: Very well then. This will be our\n"
	.string "final battle. I will make sure that after\l"
	.string "this, you won't have the heart to come\l"
	.string "after us again!$"

MirrohPeak_EventScript_Somber_Trigger_Text_7:
# 229 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Argh! How could I have lost!$"

MirrohPeak_EventScript_Somber_Trigger_Text_8:
# 232 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: One of you!$"

MirrohPeak_EventScript_Somber_Trigger_Text_9:
# 235 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Y-yes boss?\p"
	.string "MOXIE: Hurry up and go inside the\n"
	.string "dreamstone. Tell MELEA what happened!\l"
	.string "She needs to be prepared.\p"
	.string "GRUNT: B-but boss, it's -$"

MirrohPeak_EventScript_Somber_Trigger_Text_10:
# 238 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: No buts! Get moving, fast!\p"
	.string "GRUNT: O-ok boss!$"

MirrohPeak_EventScript_Somber_Trigger_Text_11:
# 245 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: But boss...what if I don't come\n"
	.string "back?\p"
	.string "MOXIE: Then we'll send roses to your\n"
	.string "family - now hurry up or I'll be forced\l"
	.string "to send roses right now!$"

MirrohPeak_EventScript_Somber_Trigger_Text_12:
# 257 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: I know you're going to chase\n"
	.string "MELEA and try to stop her from getting\l"
	.string "the Ancient Wonders.\p"
	.string "Let me do you a favour, {PLAYER}. I'll\n"
	.string "send you inside myself. There's only one\l"
	.string "exit out, and once MELEA takes that\l"
	.string "exit, you'll be stuck there forever!\p"
	.string "Hahaha!$"

MirrohPeak_EventScript_Somber_Trigger_Text_13:
# 278 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Now you lot! Let's go get our\n"
	.string "construction equipment so we can carry\l"
	.string "all this away.\p"
	.string "GRUNTS: Y-yes boss!!$"
