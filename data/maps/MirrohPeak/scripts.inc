# 1 "data/maps/MirrohPeak/scripts.pory"

# 2 "data/maps/MirrohPeak/scripts.pory"
    .set LOCALID_MOXIE, 4
# 3 "data/maps/MirrohPeak/scripts.pory"
    .set LOCALID_MELEA, 13
# 4 "data/maps/MirrohPeak/scripts.pory"
    .set LOCALID_VINIEL, 16
# 5 "data/maps/MirrohPeak/scripts.pory"
    .set LOCALID_AMPHAROS, 18

MirrohPeak_MapScripts::
	.byte 0


MirrohPeak_EventScript_Viniel_Trigger0::
# 26 "data/maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_VINIEL_CUTSCENE, MirrohPeak_EventScript_Viniel_Trigger0_2
# 28 "data/maps/MirrohPeak/scripts.pory"
	lockall
# 29 "data/maps/MirrohPeak/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 31 "data/maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 32 "data/maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 33 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 34 "data/maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 36 "data/maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Viniel
	return

MirrohPeak_EventScript_Viniel_Trigger0_2:
	end


MirrohPeak_EventScript_Viniel_Trigger1::
# 40 "data/maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_VINIEL_CUTSCENE, MirrohPeak_EventScript_Viniel_Trigger1_2
# 42 "data/maps/MirrohPeak/scripts.pory"
	lockall
# 43 "data/maps/MirrohPeak/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 45 "data/maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 46 "data/maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger1_Movement_0
# 47 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 48 "data/maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 50 "data/maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Viniel
	return

MirrohPeak_EventScript_Viniel_Trigger1_2:
	end


MirrohPeak_EventScript_Viniel::
# 55 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_0
# 56 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 57 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_0
# 58 "data/maps/MirrohPeak/scripts.pory"
	release
# 59 "data/maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_1
# 60 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 61 "data/maps/MirrohPeak/scripts.pory"
	delay 16
# 62 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_1
# 63 "data/maps/MirrohPeak/scripts.pory"
	release
# 64 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 65 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 66 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_2
# 67 "data/maps/MirrohPeak/scripts.pory"
	release
# 68 "data/maps/MirrohPeak/scripts.pory"
	delay 30
# 69 "data/maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_3
# 70 "data/maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_3
# 71 "data/maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_3
# 72 "data/maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 73 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 74 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_3
# 75 "data/maps/MirrohPeak/scripts.pory"
	release
# 76 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 77 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 78 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_4
# 79 "data/maps/MirrohPeak/scripts.pory"
	release
# 80 "data/maps/MirrohPeak/scripts.pory"
	delay 30
# 81 "data/maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_4
# 82 "data/maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_4
# 83 "data/maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_4
# 84 "data/maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_4
# 85 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_AMPHAROS, MirrohPeak_EventScript_Viniel_Movement_4
# 86 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_4
# 87 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 88 "data/maps/MirrohPeak/scripts.pory"
	delay 24
# 90 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_5
# 91 "data/maps/MirrohPeak/scripts.pory"
	release
# 92 "data/maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 93 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 94 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_6
# 95 "data/maps/MirrohPeak/scripts.pory"
	release
# 96 "data/maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_2
# 97 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 98 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_7
# 99 "data/maps/MirrohPeak/scripts.pory"
	release
# 100 "data/maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_5
# 101 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 102 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_8
# 103 "data/maps/MirrohPeak/scripts.pory"
	release
# 104 "data/maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_6
# 105 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 106 "data/maps/MirrohPeak/scripts.pory"
	removeobject 19
# 108 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_3
# 109 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_9
# 110 "data/maps/MirrohPeak/scripts.pory"
	release
# 111 "data/maps/MirrohPeak/scripts.pory"
	delay 16
# 112 "data/maps/MirrohPeak/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 113 "data/maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_7
# 114 "data/maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_8
# 115 "data/maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_9
# 116 "data/maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_9
# 117 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_10
# 118 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_AMPHAROS, MirrohPeak_EventScript_Viniel_Movement_0
# 119 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 120 "data/maps/MirrohPeak/scripts.pory"
	delay 16
# 122 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_10
# 123 "data/maps/MirrohPeak/scripts.pory"
	release
# 125 "data/maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_VINIEL_CUTSCENE
# 128 "data/maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_GruntsVSViniel_GenericDialogue::
# 133 "data/maps/MirrohPeak/scripts.pory"
	lockall
# 134 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0
# 135 "data/maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_EventScript_Somber_Trigger::
# 140 "data/maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, MirrohPeak_EventScript_Somber_Trigger_2
# 142 "data/maps/MirrohPeak/scripts.pory"
	lockall
# 143 "data/maps/MirrohPeak/scripts.pory"
	delay 30
# 146 "data/maps/MirrohPeak/scripts.pory"
	applymovement 5, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 147 "data/maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger1_Movement_0
# 148 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 149 "data/maps/MirrohPeak/scripts.pory"
	applymovement 6, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 150 "data/maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger1_Movement_0
# 151 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 152 "data/maps/MirrohPeak/scripts.pory"
	applymovement 2, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 153 "data/maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 154 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 155 "data/maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 156 "data/maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 157 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 159 "data/maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 160 "data/maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger1_Movement_0
# 161 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 162 "data/maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 163 "data/maps/MirrohPeak/scripts.pory"
	delay 60
# 166 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Viniel_Movement_3
# 167 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 168 "data/maps/MirrohPeak/scripts.pory"
	delay 16
# 169 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_0
# 170 "data/maps/MirrohPeak/scripts.pory"
	release
# 171 "data/maps/MirrohPeak/scripts.pory"
	delay 30
# 172 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 173 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 174 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_1
# 175 "data/maps/MirrohPeak/scripts.pory"
	release
# 176 "data/maps/MirrohPeak/scripts.pory"
	delay 60
# 178 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 179 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 180 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_2
# 181 "data/maps/MirrohPeak/scripts.pory"
	release
# 182 "data/maps/MirrohPeak/scripts.pory"
	delay 60
# 183 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 184 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 185 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_3
# 186 "data/maps/MirrohPeak/scripts.pory"
	release
# 189 "data/maps/MirrohPeak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 190 "data/maps/MirrohPeak/scripts.pory"
	doweather
# 192 "data/maps/MirrohPeak/scripts.pory"
	delay 60
# 193 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_4
# 194 "data/maps/MirrohPeak/scripts.pory"
	release
# 195 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 196 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 197 "data/maps/MirrohPeak/scripts.pory"
	delay 30
# 200 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 201 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 202 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 203 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 204 "data/maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 205 "data/maps/MirrohPeak/scripts.pory"
	waitstate
# 206 "data/maps/MirrohPeak/scripts.pory"
	delay 30
# 209 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_5
# 210 "data/maps/MirrohPeak/scripts.pory"
	release
# 211 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 212 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 213 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 214 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 215 "data/maps/MirrohPeak/scripts.pory"
	delay 24
# 218 "data/maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 219 "data/maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Somber_Trigger_Movement_7
# 220 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 221 "data/maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 222 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_8
# 223 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 224 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_6
# 225 "data/maps/MirrohPeak/scripts.pory"
	release
# 231 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_9
# 232 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 233 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_7
# 234 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 235 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 236 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_8
# 237 "data/maps/MirrohPeak/scripts.pory"
	release
# 238 "data/maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 239 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_9
# 240 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 241 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 242 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_10
# 243 "data/maps/MirrohPeak/scripts.pory"
	release
# 244 "data/maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_10
# 245 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 246 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_8
# 247 "data/maps/MirrohPeak/scripts.pory"
	delay 60
# 248 "data/maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Viniel_Movement_7
# 249 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_11
# 250 "data/maps/MirrohPeak/scripts.pory"
	release
# 251 "data/maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_11
# 252 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 253 "data/maps/MirrohPeak/scripts.pory"
	delay 48
# 255 "data/maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 256 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 258 "data/maps/MirrohPeak/scripts.pory"
	delay 24
# 259 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 260 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 261 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_12
# 262 "data/maps/MirrohPeak/scripts.pory"
	release
# 263 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_12
# 264 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 267 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 268 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 269 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 270 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 271 "data/maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 272 "data/maps/MirrohPeak/scripts.pory"
	waitstate
# 273 "data/maps/MirrohPeak/scripts.pory"
	delay 30
# 275 "data/maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 276 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 280 "data/maps/MirrohPeak/scripts.pory"
	delay 24
# 281 "data/maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 282 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_13
# 283 "data/maps/MirrohPeak/scripts.pory"
	release
# 285 "data/maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 286 "data/maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MOXIE
# 287 "data/maps/MirrohPeak/scripts.pory"
	removeobject 2
# 288 "data/maps/MirrohPeak/scripts.pory"
	removeobject 5
# 289 "data/maps/MirrohPeak/scripts.pory"
	removeobject 6
# 290 "data/maps/MirrohPeak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 292 "data/maps/MirrohPeak/scripts.pory"
	delay 60
# 293 "data/maps/MirrohPeak/scripts.pory"
	setobjectxyperm 20, 19, 14
# 294 "data/maps/MirrohPeak/scripts.pory"
	addobject 20
# 295 "data/maps/MirrohPeak/scripts.pory"
	delay 30
# 296 "data/maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_13
# 297 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 298 "data/maps/MirrohPeak/scripts.pory"
	delay 16
# 299 "data/maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_3
# 300 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 301 "data/maps/MirrohPeak/scripts.pory"
	delay 90
# 303 "data/maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_2
# 304 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 305 "data/maps/MirrohPeak/scripts.pory"
	delay 30
# 306 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 307 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 308 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 309 "data/maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 310 "data/maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 311 "data/maps/MirrohPeak/scripts.pory"
	waitstate
# 312 "data/maps/MirrohPeak/scripts.pory"
	delay 30
# 313 "data/maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 314 "data/maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 317 "data/maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_MOXIE_DEFEATED
# 318 "data/maps/MirrohPeak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_7
# 321 "data/maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 322 "data/maps/MirrohPeak/scripts.pory"
	warp MAP_ANCIENT_MIRROH, 10, 10
# 323 "data/maps/MirrohPeak/scripts.pory"
	releaseall
	end

MirrohPeak_EventScript_Somber_Trigger_2:
	end


MirrohPeak_Grunt_A::
# 359 "data/maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_A, MirrohPeak_Grunt_A_Text_0, MirrohPeak_Grunt_A_Text_1
# 360 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_A_Text_2
# 361 "data/maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_B::
# 366 "data/maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_B, MirrohPeak_Grunt_B_Text_0, MirrohPeak_Grunt_B_Text_1
# 367 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_B_Text_2
# 368 "data/maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_C::
# 373 "data/maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_C, MirrohPeak_Grunt_C_Text_0, MirrohPeak_Grunt_C_Text_1
# 374 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 375 "data/maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_D::
# 380 "data/maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_D, MirrohPeak_Grunt_C_Text_0, MirrohPeak_Grunt_C_Text_1
# 381 "data/maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 382 "data/maps/MirrohPeak/scripts.pory"
	releaseall
	end


# 32 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Trigger0_Movement_0:
# 32 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 32 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 32 "data/maps/MirrohPeak/scripts.pory"
	walk_right
	step_end

# 46 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Trigger1_Movement_0:
# 46 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 46 "data/maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 55 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_0:
# 55 "data/maps/MirrohPeak/scripts.pory"
	jump_in_place_left
	step_end

# 59 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_1:
# 59 "data/maps/MirrohPeak/scripts.pory"
	jump_in_place_right
	step_end

# 64 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_2:
# 64 "data/maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 69 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_3:
# 69 "data/maps/MirrohPeak/scripts.pory"
	emote_question_mark
	step_end

# 81 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_4:
# 81 "data/maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
# 81 "data/maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 100 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_5:
# 100 "data/maps/MirrohPeak/scripts.pory"
	jump_in_place_down
	step_end

# 104 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_6:
# 104 "data/maps/MirrohPeak/scripts.pory"
	walk_fast_left
# 104 "data/maps/MirrohPeak/scripts.pory"
	walk_fast_up
# 104 "data/maps/MirrohPeak/scripts.pory"
	walk_fast_up
	step_end

# 113 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_7:
# 113 "data/maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 114 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_8:
# 114 "data/maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 115 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_9:
# 115 "data/maps/MirrohPeak/scripts.pory"
	face_right
	step_end

# 117 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_10:
# 117 "data/maps/MirrohPeak/scripts.pory"
	face_left
	step_end

# 146 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_0:
# 146 "data/maps/MirrohPeak/scripts.pory"
	face_left
# 146 "data/maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 152 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_1:
# 152 "data/maps/MirrohPeak/scripts.pory"
	face_right
# 152 "data/maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 153 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_2:
# 153 "data/maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 172 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_3:
# 172 "data/maps/MirrohPeak/scripts.pory"
	jump_in_place_up
	step_end

# 195 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_4:
# 195 "data/maps/MirrohPeak/scripts.pory"
	walk_down
# 195 "data/maps/MirrohPeak/scripts.pory"
	walk_left
# 195 "data/maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 211 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_5:
# 211 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 211 "data/maps/MirrohPeak/scripts.pory"
	walk_left
# 211 "data/maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 213 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_6:
# 213 "data/maps/MirrohPeak/scripts.pory"
	fly_up
	step_end

# 219 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_7:
# 219 "data/maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 222 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_8:
# 222 "data/maps/MirrohPeak/scripts.pory"
	walk_right
# 222 "data/maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 231 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_9:
# 231 "data/maps/MirrohPeak/scripts.pory"
	jump_in_place_down
# 231 "data/maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 244 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_10:
# 244 "data/maps/MirrohPeak/scripts.pory"
	walk_down
# 244 "data/maps/MirrohPeak/scripts.pory"
	walk_right
# 244 "data/maps/MirrohPeak/scripts.pory"
	walk_right
# 244 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 244 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 244 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 244 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 244 "data/maps/MirrohPeak/scripts.pory"
	walk_left
# 244 "data/maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 251 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_11:
# 251 "data/maps/MirrohPeak/scripts.pory"
	face_up
# 251 "data/maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 263 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_12:
# 263 "data/maps/MirrohPeak/scripts.pory"
	walk_left
# 263 "data/maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 296 "data/maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_13:
# 296 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 296 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 296 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 296 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 296 "data/maps/MirrohPeak/scripts.pory"
	walk_up
# 296 "data/maps/MirrohPeak/scripts.pory"
	walk_left
# 296 "data/maps/MirrohPeak/scripts.pory"
	face_up
	step_end

MirrohPeak_EventScript_Viniel_Text_0:
# 57 "data/maps/MirrohPeak/scripts.pory"
	.string "???: Come at me, you lousy grunts! You\n"
	.string "think I'm going to let the likes of you\l"
	.string "mess around in MY backyard?$"

MirrohPeak_EventScript_Viniel_Text_1:
# 62 "data/maps/MirrohPeak/scripts.pory"
	.string "GRUNT: It's public space, VINIEL! Didn't\n"
	.string "they teach you that at Gym Leader\l"
	.string "School?$"

MirrohPeak_EventScript_Viniel_Text_2:
# 66 "data/maps/MirrohPeak/scripts.pory"
	.string "VINIEL: There IS no Gym Leader School!\n"
	.string "How stupid are you?$"

MirrohPeak_EventScript_Viniel_Text_3:
# 74 "data/maps/MirrohPeak/scripts.pory"
	.string "GRUNT:...yeah, we know. I was just\n"
	.string "taunting you.$"

MirrohPeak_EventScript_Viniel_Text_4:
# 78 "data/maps/MirrohPeak/scripts.pory"
	.string "VINIEL: That was a terrible taunt!\n"
	.string "Didn't...didn't they teach you how to\l"
	.string "taunt at taunting school?$"

MirrohPeak_EventScript_Viniel_Text_5:
# 90 "data/maps/MirrohPeak/scripts.pory"
	.string "VINIEL: Who are you? Are you another\n"
	.string "grunt? C'mon, AMPHAROS and I can take\l"
	.string "all six of you together!$"

MirrohPeak_EventScript_Viniel_Text_6:
# 94 "data/maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Wait...isn't that the trainer who\n"
	.string "beat MELEA in Silversun City?$"

MirrohPeak_EventScript_Viniel_Text_7:
# 98 "data/maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Yeah, it is! And also MOXIE at Mt.\n"
	.string "Ceram!\p"
	.string "GRUNT: Yikes - someone better tell go\n"
	.string "them!$"

MirrohPeak_EventScript_Viniel_Text_8:
# 102 "data/maps/MirrohPeak/scripts.pory"
	.string "GRUNT: I'm on it!$"

MirrohPeak_EventScript_Viniel_Text_9:
# 109 "data/maps/MirrohPeak/scripts.pory"
	.string "VINIEL: So you're an enemy of theirs,\n"
	.string "then, are you?\p"
	.string "VINIEL: An enemy of an enemy is a\n"
	.string "friend!\p"
	.string "VINIEL: Trainer, these Team Somber\n"
	.string "grunts suddenly came out of nowhere\l"
	.string "and started harrassing the people of\l"
	.string "Winterlily Hollow. So I'm out here\l"
	.string "beating them down, one by one! I can\l"
	.string "take this lot myself - you go on ahead!\l"
	.string "These guys are upto no good. The peak\l"
	.string "is right ahead - hurry up!$"

MirrohPeak_EventScript_Viniel_Text_10:
# 122 "data/maps/MirrohPeak/scripts.pory"
	.string "VINIEL: AMPHAROS is raring to go! Now\n"
	.string "c'mon you cowards - I'm going to shock\l"
	.string "some sense into all four of you\l"
	.string "together!$"

MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0:
# 134 "data/maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Even with the four of us\n"
	.string "together, its so hard! Guess that's why\l"
	.string "he's a Gym Leader.\p"
	.string "VINIEL: That all you got, grunts?$"

MirrohPeak_EventScript_Somber_Trigger_Text_0:
# 169 "data/maps/MirrohPeak/scripts.pory"
	.string "MELEA: Is it the child?$"

MirrohPeak_EventScript_Somber_Trigger_Text_1:
# 174 "data/maps/MirrohPeak/scripts.pory"
	.string "MOXIE: I presume it is.$"

MirrohPeak_EventScript_Somber_Trigger_Text_2:
# 180 "data/maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Your tenacity is admirable,\n"
	.string "child.\p"
	.string "I must acknowledge that...despite your\n"
	.string "insufferable propensity for ruining\l"
	.string "plans which are none of your concern.\p"
	.string "MOXIE: After our defeats at your hand,\n"
	.string "LEADER was most displeased with the\l"
	.string "two of us. Most displeased indeed...$"

MirrohPeak_EventScript_Somber_Trigger_Text_3:
# 185 "data/maps/MirrohPeak/scripts.pory"
	.string "MELEA: Beyond the dreamstone's gate\n"
	.string "lie some of the most powerful Pokémon\l"
	.string "this world has ever seen. And of them\l"
	.string "all, one stood the strongest. The\l"
	.string "fiercest, most vicious. Long gone,\l"
	.string "extinct today. But in the hands of\l"
	.string "people with purpose, such power can be\l"
	.string "used to do great things...$"

MirrohPeak_EventScript_Somber_Trigger_Text_4:
# 193 "data/maps/MirrohPeak/scripts.pory"
	.string "MELEA: Go on, MOXIE. Start the\n"
	.string "DREAMALYSER.$"

MirrohPeak_EventScript_Somber_Trigger_Text_5:
# 209 "data/maps/MirrohPeak/scripts.pory"
	.string "MOXIE: MELEA, you go ahead. I'll deal\n"
	.string "with the child.$"

MirrohPeak_EventScript_Somber_Trigger_Text_6:
# 224 "data/maps/MirrohPeak/scripts.pory"
	.string "MOXIE: My dear colleague has gone\n"
	.string "ahead, into Ancient Cormoria...you've\l"
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
# 233 "data/maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Argh! How could I have lost!$"

MirrohPeak_EventScript_Somber_Trigger_Text_8:
# 236 "data/maps/MirrohPeak/scripts.pory"
	.string "MOXIE: One of you!\p"
	.string "...\p"
	.string "MOXIE: You there, wearing the HEAVY\n"
	.string "DUTY BOOTS!$"

MirrohPeak_EventScript_Somber_Trigger_Text_9:
# 239 "data/maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Y-yes boss?\p"
	.string "MOXIE: Hurry up and go inside the\n"
	.string "dreamstone. Tell MELEA what happened!\l"
	.string "She needs to be prepared.\p"
	.string "GRUNT: B-but boss, it's -$"

MirrohPeak_EventScript_Somber_Trigger_Text_10:
# 242 "data/maps/MirrohPeak/scripts.pory"
	.string "MOXIE: No buts! Get moving, fast!\p"
	.string "GRUNT: O-ok boss!$"

MirrohPeak_EventScript_Somber_Trigger_Text_11:
# 249 "data/maps/MirrohPeak/scripts.pory"
	.string "GRUNT: But boss...what if I don't come\n"
	.string "back?\p"
	.string "MOXIE: Then we'll send roses to your\n"
	.string "family - now hurry up or I'll be forced\l"
	.string "to send roses right now!$"

MirrohPeak_EventScript_Somber_Trigger_Text_12:
# 261 "data/maps/MirrohPeak/scripts.pory"
	.string "MOXIE: I know you're going to chase\n"
	.string "MELEA and try to stop her from getting\l"
	.string "the Ancient Wonders.\p"
	.string "Let me do you a favour, {PLAYER}. I'll\n"
	.string "send you inside myself. There's only one\l"
	.string "exit out, and once MELEA takes that\l"
	.string "exit, you'll be stuck there forever!\p"
	.string "Hahaha!$"

MirrohPeak_EventScript_Somber_Trigger_Text_13:
# 282 "data/maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Now you lot! Let's go get our\n"
	.string "construction equipment so we can carry\l"
	.string "all this away.\p"
	.string "GRUNTS: Y-yes boss!!$"

MirrohPeak_Grunt_A_Text_0:
# 359 "data/maps/MirrohPeak/scripts.pory"
	.string "You're too late! The bosses have\n"
	.string "already taken control of the\l"
	.string "dreamstone with the DREAMALYSER!$"

MirrohPeak_Grunt_A_Text_1:
# 359 "data/maps/MirrohPeak/scripts.pory"
	.string "You're still too late!$"

MirrohPeak_Grunt_A_Text_2:
# 360 "data/maps/MirrohPeak/scripts.pory"
	.string "I wonder what'll happen once they\n"
	.string "activate the DREAMALYSER...$"

MirrohPeak_Grunt_B_Text_0:
# 366 "data/maps/MirrohPeak/scripts.pory"
	.string "We're going to use the DREAMALYSER to\n"
	.string "revive the ANCIENT TERROR! Hahaha!$"

MirrohPeak_Grunt_B_Text_1:
# 366 "data/maps/MirrohPeak/scripts.pory"
	.string "You're playing dirty!$"

MirrohPeak_Grunt_B_Text_2:
# 367 "data/maps/MirrohPeak/scripts.pory"
	.string "Man, when will I become an admin?$"

MirrohPeak_Grunt_C_Text_0:
# 373 "data/maps/MirrohPeak/scripts.pory"
	.string "Nope. No way. You're not getting\n"
	.string "through us. We've got the DREAMALYSER\l"
	.string "up and running, and we're not letting\l"
	.string "you interfere!$"

MirrohPeak_Grunt_C_Text_1:
# 373 "data/maps/MirrohPeak/scripts.pory"
	.string "Fine then! Go ahead!$"

MirrohPeak_Grunt_C_Text_2:
# 374 "data/maps/MirrohPeak/scripts.pory"
	.string "You may have beaten us, but you can't\n"
	.string "beat MELEA and MOXIE!$"
