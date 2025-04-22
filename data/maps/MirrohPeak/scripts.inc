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
	msgbox MirrohPeak_EventScript_Viniel_Text_0
# 63 "data//maps/MirrohPeak/scripts.pory"
	release
# 64 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_1
# 65 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 66 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 67 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_1
# 68 "data//maps/MirrohPeak/scripts.pory"
	release
# 69 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 70 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 71 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_2
# 72 "data//maps/MirrohPeak/scripts.pory"
	release
# 73 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 74 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_3
# 75 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_3
# 76 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_3
# 77 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 78 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 79 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_3
# 80 "data//maps/MirrohPeak/scripts.pory"
	release
# 81 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 82 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 83 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_4
# 84 "data//maps/MirrohPeak/scripts.pory"
	release
# 85 "data//maps/MirrohPeak/scripts.pory"
	delay 40
# 86 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_4
# 87 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_4
# 88 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_4
# 89 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_4
# 90 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_AMPHAROS, MirrohPeak_EventScript_Viniel_Movement_4
# 91 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_4
# 92 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 93 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 95 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_5
# 96 "data//maps/MirrohPeak/scripts.pory"
	release
# 97 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 98 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 99 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_6
# 100 "data//maps/MirrohPeak/scripts.pory"
	release
# 101 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_2
# 102 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 103 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_7
# 104 "data//maps/MirrohPeak/scripts.pory"
	release
# 105 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_5
# 106 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 107 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_8
# 108 "data//maps/MirrohPeak/scripts.pory"
	release
# 109 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_6
# 110 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 111 "data//maps/MirrohPeak/scripts.pory"
	removeobject 19
# 113 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_3
# 114 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_9
# 115 "data//maps/MirrohPeak/scripts.pory"
	release
# 116 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 117 "data//maps/MirrohPeak/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 118 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_7
# 119 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_8
# 120 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_9
# 121 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_9
# 122 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_10
# 123 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_AMPHAROS, MirrohPeak_EventScript_Viniel_Movement_0
# 124 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 125 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 127 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_10
# 128 "data//maps/MirrohPeak/scripts.pory"
	release
# 130 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_VINIEL_CUTSCENE
# 132 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 133 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Movement_11
# 134 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 135 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 137 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_GruntsVSViniel_GenericDialogue::
# 142 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 143 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0
# 144 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_EventScript_Somber_Trigger::
# 149 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, MirrohPeak_EventScript_Somber_Trigger_2
# 151 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 152 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 155 "data//maps/MirrohPeak/scripts.pory"
	applymovement 5, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 156 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 157 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 158 "data//maps/MirrohPeak/scripts.pory"
	applymovement 6, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 159 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 160 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 161 "data//maps/MirrohPeak/scripts.pory"
	applymovement 2, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 162 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 163 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 164 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 165 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 166 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 168 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 169 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 170 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 171 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 172 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 175 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Viniel_Movement_3
# 176 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 177 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 178 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_0
# 179 "data//maps/MirrohPeak/scripts.pory"
	release
# 180 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 181 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 182 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 183 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_1
# 184 "data//maps/MirrohPeak/scripts.pory"
	release
# 185 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 187 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 188 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 189 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_2
# 190 "data//maps/MirrohPeak/scripts.pory"
	release
# 191 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 192 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 193 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 194 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_3
# 195 "data//maps/MirrohPeak/scripts.pory"
	release
# 198 "data//maps/MirrohPeak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 199 "data//maps/MirrohPeak/scripts.pory"
	doweather
# 201 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 202 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_4
# 203 "data//maps/MirrohPeak/scripts.pory"
	release
# 204 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 205 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 206 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 209 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 210 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 211 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 212 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 213 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 214 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 215 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 218 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_5
# 219 "data//maps/MirrohPeak/scripts.pory"
	release
# 220 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 221 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 222 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 223 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 224 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 227 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 228 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Somber_Trigger_Movement_7
# 229 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 230 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 231 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_8
# 232 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 233 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_6
# 234 "data//maps/MirrohPeak/scripts.pory"
	release
# 237 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHPEAK_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Text_7
# 240 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_9
# 241 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 242 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_8
# 243 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 244 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 245 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_9
# 246 "data//maps/MirrohPeak/scripts.pory"
	release
# 247 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 248 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_10
# 249 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 250 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 251 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_11
# 252 "data//maps/MirrohPeak/scripts.pory"
	release
# 253 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_10
# 254 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 255 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_8
# 256 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 257 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Viniel_Movement_7
# 258 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_12
# 259 "data//maps/MirrohPeak/scripts.pory"
	release
# 260 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_11
# 261 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 262 "data//maps/MirrohPeak/scripts.pory"
	delay 48
# 264 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 265 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 267 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 268 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 269 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 270 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_13
# 271 "data//maps/MirrohPeak/scripts.pory"
	release
# 272 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_12
# 273 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 276 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 277 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 278 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 279 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 280 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 281 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 282 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 284 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 285 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 289 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 290 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 291 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_14
# 292 "data//maps/MirrohPeak/scripts.pory"
	release
# 294 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 295 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MOXIE
# 296 "data//maps/MirrohPeak/scripts.pory"
	removeobject 2
# 297 "data//maps/MirrohPeak/scripts.pory"
	removeobject 5
# 298 "data//maps/MirrohPeak/scripts.pory"
	removeobject 6
# 299 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 301 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 302 "data//maps/MirrohPeak/scripts.pory"
	setobjectxyperm 20, 19, 14
# 303 "data//maps/MirrohPeak/scripts.pory"
	addobject 20
# 304 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 305 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_13
# 306 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 307 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 308 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_3
# 309 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 310 "data//maps/MirrohPeak/scripts.pory"
	delay 90
# 312 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_2
# 313 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 314 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 315 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 316 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 317 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 318 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 319 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 320 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 321 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 322 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 323 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 326 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_MOXIE_DEFEATED
# 327 "data//maps/MirrohPeak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_7
# 330 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 331 "data//maps/MirrohPeak/scripts.pory"
	warp MAP_ANCIENT_MIRROH, 12, 22
# 332 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end

MirrohPeak_EventScript_Somber_Trigger_2:
	end


MirrohPeak_Grunt_A::
# 368 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_A, MirrohPeak_Grunt_A_Text_0, MirrohPeak_Grunt_A_Text_1
# 369 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_A_Text_2
# 370 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_B::
# 375 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_B, MirrohPeak_Grunt_B_Text_0, MirrohPeak_Grunt_B_Text_1
# 376 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_B_Text_2
# 377 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_C::
# 382 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_C, MirrohPeak_Grunt_C_Text_0, MirrohPeak_Grunt_C_Text_1
# 383 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 384 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_D::
# 389 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_D, MirrohPeak_Grunt_C_Text_0, MirrohPeak_Grunt_C_Text_1
# 390 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 391 "data//maps/MirrohPeak/scripts.pory"
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

# 64 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_1:
# 64 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_right
	step_end

# 69 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_2:
# 69 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 74 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_3:
# 74 "data//maps/MirrohPeak/scripts.pory"
	emote_question_mark
	step_end

# 86 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_4:
# 86 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
# 86 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 105 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_5:
# 105 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
	step_end

# 109 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_6:
# 109 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_left
# 109 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
# 109 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
	step_end

# 118 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_7:
# 118 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 119 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_8:
# 119 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 120 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_9:
# 120 "data//maps/MirrohPeak/scripts.pory"
	face_right
	step_end

# 122 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_10:
# 122 "data//maps/MirrohPeak/scripts.pory"
	face_left
	step_end

# 133 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_11:
# 133 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 133 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 155 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_0:
# 155 "data//maps/MirrohPeak/scripts.pory"
	face_left
# 155 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 161 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_1:
# 161 "data//maps/MirrohPeak/scripts.pory"
	face_right
# 161 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 162 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_2:
# 162 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 181 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_3:
# 181 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_up
	step_end

# 204 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_4:
# 204 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 204 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 204 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 220 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_5:
# 220 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 220 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 220 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 222 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_6:
# 222 "data//maps/MirrohPeak/scripts.pory"
	fly_up
	step_end

# 228 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_7:
# 228 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 231 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_8:
# 231 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 231 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 240 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_9:
# 240 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
# 240 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 253 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_10:
# 253 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 253 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 253 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 253 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 253 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 253 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 253 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 253 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 253 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 260 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_11:
# 260 "data//maps/MirrohPeak/scripts.pory"
	face_up
# 260 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 272 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_12:
# 272 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 272 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 305 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_13:
# 305 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 305 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 305 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 305 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 305 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 305 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 305 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

MirrohPeak_NPC_1_Text_0:
# 12 "data//maps/MirrohPeak/scripts.pory"
	.string "You look exhausted! You'd better head\n"
	.string "to Winterlily Hollow - go right from here\l"
	.string "and enter the cave.$"

MirrohPeak_EventScript_Viniel_Text_0:
# 62 "data//maps/MirrohPeak/scripts.pory"
	.string "???: Come at me, you lousy grunts! You\n"
	.string "think I'm going to let the likes of you\l"
	.string "mess around in MY backyard?$"

MirrohPeak_EventScript_Viniel_Text_1:
# 67 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: It's public space, Viniel! Didn't\n"
	.string "they teach you that at Gym Leader\l"
	.string "School?$"

MirrohPeak_EventScript_Viniel_Text_2:
# 71 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: There IS no Gym Leader School!\n"
	.string "How stupid are you?$"

MirrohPeak_EventScript_Viniel_Text_3:
# 79 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT:...yeah, we know. I was just\n"
	.string "taunting you.$"

MirrohPeak_EventScript_Viniel_Text_4:
# 83 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: That was a terrible taunt!\n"
	.string "Didn't...didn't they teach you how to\l"
	.string "taunt at taunting school?$"

MirrohPeak_EventScript_Viniel_Text_5:
# 95 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: Who are you? Are you another\n"
	.string "grunt? C'mon, Ampharos and I can take\l"
	.string "all six of you together!$"

MirrohPeak_EventScript_Viniel_Text_6:
# 99 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Wait...isn't that the trainer who\n"
	.string "beat Melea in Silversun City?$"

MirrohPeak_EventScript_Viniel_Text_7:
# 103 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Yeah, it is! And also MOXIE at Mt.\n"
	.string "Ceram!\p"
	.string "GRUNT: Yikes - someone better tell go\n"
	.string "them!$"

MirrohPeak_EventScript_Viniel_Text_8:
# 107 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: I'm on it!$"

MirrohPeak_EventScript_Viniel_Text_9:
# 114 "data//maps/MirrohPeak/scripts.pory"
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
# 127 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: Ampharos is raring to go! Now\n"
	.string "c'mon you cowards - I'm going to shock\l"
	.string "some sense into all four of you\l"
	.string "together!$"

MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0:
# 143 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Even with the four of us\n"
	.string "together, its so hard! Guess that's why\l"
	.string "he's a Gym Leader.\p"
	.string "VINIEL: That all you got, grunts?$"

MirrohPeak_EventScript_Somber_Trigger_Text_0:
# 178 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Is it the child?$"

MirrohPeak_EventScript_Somber_Trigger_Text_1:
# 183 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: I presume it is.$"

MirrohPeak_EventScript_Somber_Trigger_Text_2:
# 189 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Your tenacity is admirable,\n"
	.string "child.\p"
	.string "I must acknowledge that...despite your\n"
	.string "insufferable propensity for ruining\l"
	.string "plans which are none of your concern.\p"
	.string "MOXIE: After our defeats at your hand,\n"
	.string "LEADER was most displeased with the\l"
	.string "two of us. Most displeased indeed...$"

MirrohPeak_EventScript_Somber_Trigger_Text_3:
# 194 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Beyond the dreamstone's gate\n"
	.string "lie some of the most powerful Pokémon\l"
	.string "this world has ever seen. And of them\l"
	.string "all, one stood the strongest. The\l"
	.string "fiercest, most vicious. Long gone,\l"
	.string "extinct today. But in the hands of\l"
	.string "people with purpose, such power can be\l"
	.string "used to do great things...$"

MirrohPeak_EventScript_Somber_Trigger_Text_4:
# 202 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Go on, MOXIE. Start the\n"
	.string "Dreamalyser.$"

MirrohPeak_EventScript_Somber_Trigger_Text_5:
# 218 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: MELEA, you go ahead. I'll deal\n"
	.string "with the child.$"

MirrohPeak_EventScript_Somber_Trigger_Text_6:
# 233 "data//maps/MirrohPeak/scripts.pory"
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
# 237 "data//maps/MirrohPeak/scripts.pory"
	.string "Insufferable!$"

MirrohPeak_EventScript_Somber_Trigger_Text_8:
# 242 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Argh! How could I have lost!$"

MirrohPeak_EventScript_Somber_Trigger_Text_9:
# 245 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: One of you!\p"
	.string "...\p"
	.string "MOXIE: You there, wearing the Trekking\n"
	.string "Boots!$"

MirrohPeak_EventScript_Somber_Trigger_Text_10:
# 248 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Y-yes boss?\p"
	.string "MOXIE: Hurry up and go inside the\n"
	.string "dreamstone. Tell MELEA what happened!\l"
	.string "She needs to be prepared.\p"
	.string "GRUNT: B-but boss, it's -$"

MirrohPeak_EventScript_Somber_Trigger_Text_11:
# 251 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: No buts! Get moving, fast!\p"
	.string "GRUNT: O-ok boss!$"

MirrohPeak_EventScript_Somber_Trigger_Text_12:
# 258 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: But boss...what if I don't come\n"
	.string "back?\p"
	.string "MOXIE: Then we'll send roses to your\n"
	.string "family - now hurry up or I'll be forced\l"
	.string "to send roses right now!$"

MirrohPeak_EventScript_Somber_Trigger_Text_13:
# 270 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: I know you're going to chase\n"
	.string "MELEA and try to stop her from getting\l"
	.string "the Ancient Wonders.\p"
	.string "Let me do you a favour, {PLAYER}. I'll\n"
	.string "send you inside myself. There's only one\l"
	.string "exit out, and once MELEA takes that\l"
	.string "exit, you'll be stuck there forever!\p"
	.string "Hahaha!$"

MirrohPeak_EventScript_Somber_Trigger_Text_14:
# 291 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Now you lot! Let's go get our\n"
	.string "construction equipment so we can carry\l"
	.string "all this away.\p"
	.string "GRUNTS: Y-yes boss!!$"

MirrohPeak_Grunt_A_Text_0:
# 368 "data//maps/MirrohPeak/scripts.pory"
	.string "You're too late! The bosses have\n"
	.string "already taken control of the\l"
	.string "dreamstone with the Dreamalyser!$"

MirrohPeak_Grunt_A_Text_1:
# 368 "data//maps/MirrohPeak/scripts.pory"
	.string "You're still too late!$"

MirrohPeak_Grunt_A_Text_2:
# 369 "data//maps/MirrohPeak/scripts.pory"
	.string "I wonder what'll happen once they\n"
	.string "activate the Dreamalyser...$"

MirrohPeak_Grunt_B_Text_0:
# 375 "data//maps/MirrohPeak/scripts.pory"
	.string "We're going to use the Dreamalyser to\n"
	.string "revive the ANCIENT TERROR! Hahaha!$"

MirrohPeak_Grunt_B_Text_1:
# 375 "data//maps/MirrohPeak/scripts.pory"
	.string "You're playing dirty!$"

MirrohPeak_Grunt_B_Text_2:
# 376 "data//maps/MirrohPeak/scripts.pory"
	.string "Man, when will I become an admin?$"

MirrohPeak_Grunt_C_Text_0:
# 382 "data//maps/MirrohPeak/scripts.pory"
	.string "Nope. No way. You're not getting\n"
	.string "through us. We've got the Dreamalyser\l"
	.string "up and running, and we're not letting\l"
	.string "you interfere!$"

MirrohPeak_Grunt_C_Text_1:
# 382 "data//maps/MirrohPeak/scripts.pory"
	.string "Fine then! Go ahead!$"

MirrohPeak_Grunt_C_Text_2:
# 383 "data//maps/MirrohPeak/scripts.pory"
	.string "You may have beaten us, but you can't\n"
	.string "beat MELEA and MOXIE!$"
