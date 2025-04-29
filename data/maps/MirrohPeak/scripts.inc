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


MirrohPeak_NPC_1::
# 12 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_NPC_1_Text_0, MSGBOX_NPC
	end


MirrohPeak_EventScript_Viniel_Trigger0::
# 31 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_VINIEL_CUTSCENE, MirrohPeak_EventScript_Viniel_Trigger0_2
# 33 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 34 "data//maps/MirrohPeak/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 36 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 37 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 38 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 39 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 41 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Viniel
	return

MirrohPeak_EventScript_Viniel_Trigger0_2:
	end


MirrohPeak_EventScript_Viniel_Trigger1::
# 45 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_VINIEL_CUTSCENE, MirrohPeak_EventScript_Viniel_Trigger1_2
# 47 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 48 "data//maps/MirrohPeak/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 50 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 51 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 52 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 53 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 55 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Viniel
	return

MirrohPeak_EventScript_Viniel_Trigger1_2:
	end


MirrohPeak_EventScript_Viniel::
# 60 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_0
# 61 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 62 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_0
# 63 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_1
# 64 "data//maps/MirrohPeak/scripts.pory"
	release
# 65 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_1
# 66 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 67 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 68 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 69 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_3
# 70 "data//maps/MirrohPeak/scripts.pory"
	release
# 71 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 72 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 73 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 74 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_5
# 75 "data//maps/MirrohPeak/scripts.pory"
	release
# 76 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 77 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_3
# 78 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_3
# 79 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_3
# 80 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 81 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 82 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 83 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_6
# 84 "data//maps/MirrohPeak/scripts.pory"
	release
# 85 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 86 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 87 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 88 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_7
# 89 "data//maps/MirrohPeak/scripts.pory"
	release
# 90 "data//maps/MirrohPeak/scripts.pory"
	delay 48
# 91 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_4
# 92 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_4
# 93 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_4
# 94 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_4
# 95 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_AMPHAROS, MirrohPeak_EventScript_Viniel_Movement_4
# 96 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_4
# 97 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 98 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 100 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 101 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_8
# 102 "data//maps/MirrohPeak/scripts.pory"
	release
# 103 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 104 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 105 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 106 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_9
# 107 "data//maps/MirrohPeak/scripts.pory"
	release
# 108 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_2
# 109 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 110 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 111 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_10
# 112 "data//maps/MirrohPeak/scripts.pory"
	release
# 113 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_5
# 114 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 115 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 116 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_11
# 117 "data//maps/MirrohPeak/scripts.pory"
	release
# 118 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_6
# 119 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 120 "data//maps/MirrohPeak/scripts.pory"
	removeobject 19
# 122 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_3
# 123 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 124 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_12
# 125 "data//maps/MirrohPeak/scripts.pory"
	release
# 126 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 127 "data//maps/MirrohPeak/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 128 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_7
# 129 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_8
# 130 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_9
# 131 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_9
# 132 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_10
# 133 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_AMPHAROS, MirrohPeak_EventScript_Viniel_Movement_0
# 134 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 135 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 137 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 138 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_13
# 139 "data//maps/MirrohPeak/scripts.pory"
	release
# 141 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_VINIEL_CUTSCENE
# 143 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 144 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Movement_11
# 145 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 146 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 148 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_GruntsVSViniel_GenericDialogue::
# 153 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 154 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0
# 155 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_EventScript_Somber_Trigger::
# 160 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, MirrohPeak_EventScript_Somber_Trigger_2
# 162 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 163 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 166 "data//maps/MirrohPeak/scripts.pory"
	applymovement 5, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 167 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 168 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 169 "data//maps/MirrohPeak/scripts.pory"
	applymovement 6, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 170 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 171 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 172 "data//maps/MirrohPeak/scripts.pory"
	applymovement 2, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 173 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 174 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 175 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 176 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 177 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 179 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 180 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 181 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 182 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 183 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 186 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Viniel_Movement_3
# 187 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 188 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 189 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_0
# 190 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_1
# 191 "data//maps/MirrohPeak/scripts.pory"
	release
# 192 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 193 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 194 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 195 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 196 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_3
# 197 "data//maps/MirrohPeak/scripts.pory"
	release
# 198 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 200 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 201 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 202 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 203 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_4
# 204 "data//maps/MirrohPeak/scripts.pory"
	release
# 205 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 206 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 207 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 208 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_0
# 209 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_5
# 210 "data//maps/MirrohPeak/scripts.pory"
	release
# 213 "data//maps/MirrohPeak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 214 "data//maps/MirrohPeak/scripts.pory"
	doweather
# 216 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 217 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_0
# 218 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_6
# 219 "data//maps/MirrohPeak/scripts.pory"
	release
# 220 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 221 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 222 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 225 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 226 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 227 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 228 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 229 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 230 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 231 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 234 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 235 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_7
# 236 "data//maps/MirrohPeak/scripts.pory"
	release
# 237 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 238 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 239 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 240 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 241 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 244 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 245 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Somber_Trigger_Movement_7
# 246 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 247 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 248 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_8
# 249 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 250 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 251 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_8
# 252 "data//maps/MirrohPeak/scripts.pory"
	release
# 255 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHPEAK_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Text_9
# 258 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_9
# 259 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 260 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 261 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_10
# 262 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 263 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 264 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 265 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_11
# 266 "data//maps/MirrohPeak/scripts.pory"
	release
# 267 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 268 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 269 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_12
# 270 "data//maps/MirrohPeak/scripts.pory"
	release
# 271 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 272 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 273 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_13
# 274 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 275 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_14
# 276 "data//maps/MirrohPeak/scripts.pory"
	release
# 277 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 278 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 279 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 280 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 281 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 282 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_15
# 284 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 285 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_16
# 286 "data//maps/MirrohPeak/scripts.pory"
	release
# 287 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_10
# 288 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 289 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_8
# 290 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 291 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Viniel_Movement_7
# 292 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 293 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 294 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_17
# 295 "data//maps/MirrohPeak/scripts.pory"
	release
# 296 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 298 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 299 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_18
# 300 "data//maps/MirrohPeak/scripts.pory"
	release
# 301 "data//maps/MirrohPeak/scripts.pory"
	delay 12
# 302 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_11
# 303 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 304 "data//maps/MirrohPeak/scripts.pory"
	delay 48
# 306 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 307 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 309 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 310 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 311 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 312 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 313 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_19
# 314 "data//maps/MirrohPeak/scripts.pory"
	release
# 315 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_12
# 316 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 319 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 320 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 321 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 322 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 323 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 324 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 325 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 327 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 328 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 332 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 333 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 334 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 335 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_20
# 336 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_21
# 337 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_22
# 338 "data//maps/MirrohPeak/scripts.pory"
	release
# 340 "data//maps/MirrohPeak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 341 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MOXIE
# 342 "data//maps/MirrohPeak/scripts.pory"
	removeobject 2
# 343 "data//maps/MirrohPeak/scripts.pory"
	removeobject 5
# 344 "data//maps/MirrohPeak/scripts.pory"
	removeobject 6
# 345 "data//maps/MirrohPeak/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 347 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 348 "data//maps/MirrohPeak/scripts.pory"
	setobjectxyperm 20, 19, 14
# 349 "data//maps/MirrohPeak/scripts.pory"
	addobject 20
# 350 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 351 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_13
# 352 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 353 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 354 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_3
# 355 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 356 "data//maps/MirrohPeak/scripts.pory"
	delay 90
# 358 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_2
# 359 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 360 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 361 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 362 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 363 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 364 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 365 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 366 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 367 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 368 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 369 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 372 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_MOXIE_DEFEATED
# 373 "data//maps/MirrohPeak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_7
# 376 "data//maps/MirrohPeak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 377 "data//maps/MirrohPeak/scripts.pory"
	warp MAP_ANCIENT_MIRROH, 12, 22
# 378 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end

MirrohPeak_EventScript_Somber_Trigger_2:
	end


MirrohPeak_Grunt_A::
# 414 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_A, MirrohPeak_Grunt_A_Text_0, MirrohPeak_Grunt_A_Text_1
# 415 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_A_Text_2
# 416 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_B::
# 421 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_B, MirrohPeak_Grunt_B_Text_0, MirrohPeak_Grunt_B_Text_1
# 422 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_B_Text_2
# 423 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_C::
# 428 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_C, MirrohPeak_Grunt_C_Text_0, MirrohPeak_Grunt_C_Text_1
# 429 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 430 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_D::
# 435 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_D, MirrohPeak_Grunt_C_Text_0, MirrohPeak_Grunt_C_Text_1
# 436 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 437 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


# 37 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Trigger0_Movement_0:
# 37 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 37 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 60 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_0:
# 60 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_left
	step_end

# 65 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_1:
# 65 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_right
	step_end

# 71 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_2:
# 71 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 77 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_3:
# 77 "data//maps/MirrohPeak/scripts.pory"
	emote_question_mark
	step_end

# 91 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_4:
# 91 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
# 91 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 113 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_5:
# 113 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
	step_end

# 118 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_6:
# 118 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_left
# 118 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
# 118 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
	step_end

# 128 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_7:
# 128 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 129 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_8:
# 129 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 130 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_9:
# 130 "data//maps/MirrohPeak/scripts.pory"
	face_right
	step_end

# 132 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_10:
# 132 "data//maps/MirrohPeak/scripts.pory"
	face_left
	step_end

# 144 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_11:
# 144 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 144 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 166 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_0:
# 166 "data//maps/MirrohPeak/scripts.pory"
	face_left
# 166 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 172 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_1:
# 172 "data//maps/MirrohPeak/scripts.pory"
	face_right
# 172 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 173 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_2:
# 173 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 193 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_3:
# 193 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_up
	step_end

# 220 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_4:
# 220 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 220 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 220 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 237 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_5:
# 237 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 237 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 237 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 239 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_6:
# 239 "data//maps/MirrohPeak/scripts.pory"
	fly_up
	step_end

# 245 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_7:
# 245 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 248 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_8:
# 248 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 248 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 258 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_9:
# 258 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
# 258 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 287 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_10:
# 287 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 287 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 287 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 287 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 287 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 287 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 287 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 287 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 287 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 302 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_11:
# 302 "data//maps/MirrohPeak/scripts.pory"
	face_up
# 302 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 315 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_12:
# 315 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 315 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 351 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_13:
# 351 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 351 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 351 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 351 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 351 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 351 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 351 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

MirrohPeak_NPC_1_Text_0:
# 12 "data//maps/MirrohPeak/scripts.pory"
	.string "You look exhausted! You'd better head\n"
	.string "to Winterlily Hollow - go right from here\l"
	.string "and enter the cave.$"

MirrohPeak_EventScript_Viniel_Text_0:
# 62 "data//maps/MirrohPeak/scripts.pory"
	.string "???$"

MirrohPeak_EventScript_Viniel_Text_1:
# 63 "data//maps/MirrohPeak/scripts.pory"
	.string "Come at me, you lousy grunts! You think\n"
	.string "I'm going to let the likes of you mess\l"
	.string "around in MY backyard?$"

MirrohPeak_EventScript_Viniel_Text_2:
# 68 "data//maps/MirrohPeak/scripts.pory"
	.string "Grunt$"

MirrohPeak_EventScript_Viniel_Text_3:
# 69 "data//maps/MirrohPeak/scripts.pory"
	.string "It's public space, Viniel! Didn't they\n"
	.string "teach you that at Gym Leader School?$"

MirrohPeak_EventScript_Viniel_Text_4:
# 73 "data//maps/MirrohPeak/scripts.pory"
	.string "Viniel$"

MirrohPeak_EventScript_Viniel_Text_5:
# 74 "data//maps/MirrohPeak/scripts.pory"
	.string "There IS no Gym Leader School! How\n"
	.string "stupid are you?$"

MirrohPeak_EventScript_Viniel_Text_6:
# 83 "data//maps/MirrohPeak/scripts.pory"
	.string "...yeah, we know. I was just taunting\n"
	.string "you.$"

MirrohPeak_EventScript_Viniel_Text_7:
# 88 "data//maps/MirrohPeak/scripts.pory"
	.string "That was a terrible taunt!\n"
	.string "Didn't...didn't they teach you how to\l"
	.string "taunt at taunting school?$"

MirrohPeak_EventScript_Viniel_Text_8:
# 101 "data//maps/MirrohPeak/scripts.pory"
	.string "Who are you? Are you another grunt?\n"
	.string "C'mon, Ampharos and I can take all six\l"
	.string "of you together!$"

MirrohPeak_EventScript_Viniel_Text_9:
# 106 "data//maps/MirrohPeak/scripts.pory"
	.string "Wait...isn't that the trainer who beat\n"
	.string "Melea in Silversun City?$"

MirrohPeak_EventScript_Viniel_Text_10:
# 111 "data//maps/MirrohPeak/scripts.pory"
	.string "Yeah, it is! And also Moxie at Mt. Ceram!\p"
	.string "Yikes - someone better tell go them!$"

MirrohPeak_EventScript_Viniel_Text_11:
# 116 "data//maps/MirrohPeak/scripts.pory"
	.string "I'm on it!$"

MirrohPeak_EventScript_Viniel_Text_12:
# 124 "data//maps/MirrohPeak/scripts.pory"
	.string "So you're an enemy of theirs, then, are\n"
	.string "you?\p"
	.string "An enemy of an enemy is a friend!\p"
	.string "Trainer, these Team Somber grunts\n"
	.string "suddenly came out of nowhere and\l"
	.string "started harrassing the people of\l"
	.string "Winterlily Hollow. So I'm out here\l"
	.string "beating them down, one by one! I can\l"
	.string "take this lot myself - you go on ahead!\l"
	.string "These guys are upto no good. The peak\l"
	.string "is right ahead - hurry up!$"

MirrohPeak_EventScript_Viniel_Text_13:
# 138 "data//maps/MirrohPeak/scripts.pory"
	.string "Ampharos is raring to go! Now c'mon you\n"
	.string "cowards - I'm going to shock some sense\l"
	.string "into all four of you together!$"

MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0:
# 154 "data//maps/MirrohPeak/scripts.pory"
	.string "Even with the four of us together, its\n"
	.string "so hard! Guess that's why he's a Gym\l"
	.string "Leader.\p"
	.string "That all you got, grunts?$"

MirrohPeak_EventScript_Somber_Trigger_Text_0:
# 189 "data//maps/MirrohPeak/scripts.pory"
	.string "Melea$"

MirrohPeak_EventScript_Somber_Trigger_Text_1:
# 190 "data//maps/MirrohPeak/scripts.pory"
	.string "Is it the child?$"

MirrohPeak_EventScript_Somber_Trigger_Text_2:
# 195 "data//maps/MirrohPeak/scripts.pory"
	.string "Moxie$"

MirrohPeak_EventScript_Somber_Trigger_Text_3:
# 196 "data//maps/MirrohPeak/scripts.pory"
	.string "I presume it is.$"

MirrohPeak_EventScript_Somber_Trigger_Text_4:
# 203 "data//maps/MirrohPeak/scripts.pory"
	.string "Your tenacity is admirable, child.\p"
	.string "I must acknowledge that...despite your\n"
	.string "insufferable propensity for ruining\l"
	.string "plans which are none of your concern.\p"
	.string "After our defeats at your hand, LEADER\n"
	.string "was most displeased with the two of us.\l"
	.string "Most displeased indeed...$"

MirrohPeak_EventScript_Somber_Trigger_Text_5:
# 209 "data//maps/MirrohPeak/scripts.pory"
	.string "Beyond the dreamstone's gate lie some\n"
	.string "of the most powerful Pokémon this world\l"
	.string "has ever seen. And of them all, one\l"
	.string "stood the strongest. The fiercest,\l"
	.string "most vicious. Long gone, extinct today.\l"
	.string "But in the hands of people with\l"
	.string "purpose, such power can be used to do\l"
	.string "great things...$"

MirrohPeak_EventScript_Somber_Trigger_Text_6:
# 218 "data//maps/MirrohPeak/scripts.pory"
	.string "Go on, Moxie. Start the Dreamalyser.$"

MirrohPeak_EventScript_Somber_Trigger_Text_7:
# 235 "data//maps/MirrohPeak/scripts.pory"
	.string "Melea, you go ahead. I'll deal with the\n"
	.string "child.$"

MirrohPeak_EventScript_Somber_Trigger_Text_8:
# 251 "data//maps/MirrohPeak/scripts.pory"
	.string "My dear colleague has gone ahead into\n"
	.string "Ancient Cormoria...you've been there,\l"
	.string "no? I wonder what it looks like. Melea\l"
	.string "will tell me about it when she returns.\p"
	.string "...\p"
	.string "Child, we are at the cusp of attaining\n"
	.string "our goal. The Ancient Terror will soon be\l"
	.string "ours.\p"
	.string "...\p"
	.string "I will give you a chance to turn around.\n"
	.string "Walk away from what you don't\l"
	.string "understand.\p"
	.string "...\p"
	.string "No?\p"
	.string "Very well then. This will be our final\n"
	.string "battle. I will make sure that after this,\l"
	.string "you won't have the heart to come after\l"
	.string "us again!$"

MirrohPeak_EventScript_Somber_Trigger_Text_9:
# 255 "data//maps/MirrohPeak/scripts.pory"
	.string "Insufferable!$"

MirrohPeak_EventScript_Somber_Trigger_Text_10:
# 261 "data//maps/MirrohPeak/scripts.pory"
	.string "Argh! How could I have lost!$"

MirrohPeak_EventScript_Somber_Trigger_Text_11:
# 265 "data//maps/MirrohPeak/scripts.pory"
	.string "One of you!\p"
	.string "...\p"
	.string "You there, wearing the Trekking Boots!$"

MirrohPeak_EventScript_Somber_Trigger_Text_12:
# 269 "data//maps/MirrohPeak/scripts.pory"
	.string "Y-yes boss?$"

MirrohPeak_EventScript_Somber_Trigger_Text_13:
# 273 "data//maps/MirrohPeak/scripts.pory"
	.string "Hurry up and go inside the dreamstone.\n"
	.string "Tell Melea what happened! She needs to\l"
	.string "be prepared.$"

MirrohPeak_EventScript_Somber_Trigger_Text_14:
# 275 "data//maps/MirrohPeak/scripts.pory"
	.string "B-but boss, it's -$"

MirrohPeak_EventScript_Somber_Trigger_Text_15:
# 282 "data//maps/MirrohPeak/scripts.pory"
	.string "No buts! Get moving - fast! Or I'll have\n"
	.string "you'll join Gabrielle!$"

MirrohPeak_EventScript_Somber_Trigger_Text_16:
# 285 "data//maps/MirrohPeak/scripts.pory"
	.string "O-ok boss!$"

MirrohPeak_EventScript_Somber_Trigger_Text_17:
# 294 "data//maps/MirrohPeak/scripts.pory"
	.string "But boss...what if I don't come back?$"

MirrohPeak_EventScript_Somber_Trigger_Text_18:
# 299 "data//maps/MirrohPeak/scripts.pory"
	.string "Then we'll send roses to your family -\n"
	.string "now hurry up or I'll be forced to send\l"
	.string "roses right now!$"

MirrohPeak_EventScript_Somber_Trigger_Text_19:
# 313 "data//maps/MirrohPeak/scripts.pory"
	.string "I know you're going to chase Melea and\n"
	.string "try to stop her from getting the\l"
	.string "Ancient Wonders.\p"
	.string "Let me do you a favour, {PLAYER}. I'll\n"
	.string "send you inside myself. There's only one\l"
	.string "exit out, and once Melea takes that\l"
	.string "exit, you'll be stuck there forever!\p"
	.string "Hahaha!$"

MirrohPeak_EventScript_Somber_Trigger_Text_20:
# 335 "data//maps/MirrohPeak/scripts.pory"
	.string "Now you lot! Let's go get our\n"
	.string "construction equipment so we can carry\l"
	.string "all this away.$"

MirrohPeak_EventScript_Somber_Trigger_Text_21:
# 336 "data//maps/MirrohPeak/scripts.pory"
	.string "Grunts$"

MirrohPeak_EventScript_Somber_Trigger_Text_22:
# 337 "data//maps/MirrohPeak/scripts.pory"
	.string "Y-yes boss!!$"

MirrohPeak_Grunt_A_Text_0:
# 414 "data//maps/MirrohPeak/scripts.pory"
	.string "You're too late! The bosses have\n"
	.string "already taken control of the\l"
	.string "dreamstone with the Dreamalyser!$"

MirrohPeak_Grunt_A_Text_1:
# 414 "data//maps/MirrohPeak/scripts.pory"
	.string "You're still too late!$"

MirrohPeak_Grunt_A_Text_2:
# 415 "data//maps/MirrohPeak/scripts.pory"
	.string "I wonder what'll happen once they\n"
	.string "activate the Dreamalyser...$"

MirrohPeak_Grunt_B_Text_0:
# 421 "data//maps/MirrohPeak/scripts.pory"
	.string "We're going to use the Dreamalyser to\n"
	.string "revive the ANCIENT TERROR! Hahaha!$"

MirrohPeak_Grunt_B_Text_1:
# 421 "data//maps/MirrohPeak/scripts.pory"
	.string "You're playing dirty!$"

MirrohPeak_Grunt_B_Text_2:
# 422 "data//maps/MirrohPeak/scripts.pory"
	.string "Man, when will I become an admin?$"

MirrohPeak_Grunt_C_Text_0:
# 428 "data//maps/MirrohPeak/scripts.pory"
	.string "Nope. No way. You're not getting\n"
	.string "through us. We've got the Dreamalyser\l"
	.string "up and running, and we're not letting\l"
	.string "you interfere!$"

MirrohPeak_Grunt_C_Text_1:
# 428 "data//maps/MirrohPeak/scripts.pory"
	.string "Fine then! Go ahead!$"

MirrohPeak_Grunt_C_Text_2:
# 429 "data//maps/MirrohPeak/scripts.pory"
	.string "You may have beaten us, but you can't\n"
	.string "beat MELEA and MOXIE!$"
