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


MtMirroh_Peak_SaveGameTrigger::
# 17 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, MtMirroh_Peak_SaveGameTrigger_2
# 21 "data//maps/MirrohPeak/scripts.pory"
	special SaveGame
# 22 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 23 "data//maps/MirrohPeak/scripts.pory"
	release
# 25 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_TEMP_C, 1
	end

MtMirroh_Peak_SaveGameTrigger_2:
	end


MirrohPeak_EventScript_Viniel_Trigger0::
# 45 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_VINIEL_CUTSCENE, MirrohPeak_EventScript_Viniel_Trigger0_2
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

MirrohPeak_EventScript_Viniel_Trigger0_2:
	end


MirrohPeak_EventScript_Viniel_Trigger1::
# 59 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_VINIEL_CUTSCENE, MirrohPeak_EventScript_Viniel_Trigger1_2
# 61 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 62 "data//maps/MirrohPeak/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 64 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 65 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 66 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 67 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 69 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Viniel
	return

MirrohPeak_EventScript_Viniel_Trigger1_2:
	end


MirrohPeak_EventScript_Viniel::
# 74 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_0
# 75 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 76 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_0
# 77 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_1
# 78 "data//maps/MirrohPeak/scripts.pory"
	release
# 79 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_1
# 80 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 81 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 82 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 83 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_3
# 84 "data//maps/MirrohPeak/scripts.pory"
	release
# 85 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 86 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 87 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 88 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_5
# 89 "data//maps/MirrohPeak/scripts.pory"
	release
# 90 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 91 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_3
# 92 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_3
# 93 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_3
# 94 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 95 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 96 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 97 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_6
# 98 "data//maps/MirrohPeak/scripts.pory"
	release
# 99 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 100 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 101 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 102 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_7
# 103 "data//maps/MirrohPeak/scripts.pory"
	release
# 104 "data//maps/MirrohPeak/scripts.pory"
	delay 48
# 105 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_4
# 106 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_4
# 107 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_4
# 108 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_4
# 109 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_AMPHAROS, MirrohPeak_EventScript_Viniel_Movement_4
# 110 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_4
# 111 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 112 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 114 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 115 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_8
# 116 "data//maps/MirrohPeak/scripts.pory"
	release
# 117 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 118 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 119 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 120 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_9
# 121 "data//maps/MirrohPeak/scripts.pory"
	release
# 122 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_2
# 123 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 124 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 125 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_10
# 126 "data//maps/MirrohPeak/scripts.pory"
	release
# 127 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_5
# 128 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 129 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 130 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_11
# 131 "data//maps/MirrohPeak/scripts.pory"
	release
# 132 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_6
# 133 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 134 "data//maps/MirrohPeak/scripts.pory"
	removeobject 19
# 136 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_3
# 137 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 138 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_12
# 139 "data//maps/MirrohPeak/scripts.pory"
	release
# 140 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 141 "data//maps/MirrohPeak/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 142 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_7
# 143 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_8
# 144 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_9
# 145 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_9
# 146 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_10
# 147 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_AMPHAROS, MirrohPeak_EventScript_Viniel_Movement_0
# 148 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 149 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 151 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 152 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_13
# 153 "data//maps/MirrohPeak/scripts.pory"
	release
# 155 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_VINIEL_CUTSCENE
# 157 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 158 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Movement_11
# 159 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 160 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 162 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_GruntsVSViniel_GenericDialogue::
# 167 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 168 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 169 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0
# 170 "data//maps/MirrohPeak/scripts.pory"
	release
# 171 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 172 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_GruntsVSViniel_GenericDialogue_Text_1
# 173 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_EventScript_Somber_Trigger::
# 178 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, MirrohPeak_EventScript_Somber_Trigger_2
# 180 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 181 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 184 "data//maps/MirrohPeak/scripts.pory"
	applymovement 5, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 185 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 186 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 187 "data//maps/MirrohPeak/scripts.pory"
	applymovement 6, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 188 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 189 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 190 "data//maps/MirrohPeak/scripts.pory"
	applymovement 2, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 191 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 192 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 193 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 194 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 195 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 197 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 198 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 199 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 200 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 201 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 204 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Viniel_Movement_3
# 205 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 206 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 207 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_0
# 208 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_1
# 209 "data//maps/MirrohPeak/scripts.pory"
	release
# 210 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 211 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 212 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 213 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 214 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_3
# 215 "data//maps/MirrohPeak/scripts.pory"
	release
# 216 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 218 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 219 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 220 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 221 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_4
# 222 "data//maps/MirrohPeak/scripts.pory"
	release
# 223 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 224 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 225 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 226 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_0
# 227 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_5
# 228 "data//maps/MirrohPeak/scripts.pory"
	release
# 231 "data//maps/MirrohPeak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 232 "data//maps/MirrohPeak/scripts.pory"
	doweather
# 234 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 235 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_0
# 236 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_6
# 237 "data//maps/MirrohPeak/scripts.pory"
	release
# 238 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 239 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 240 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 243 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 244 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 245 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 246 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 247 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 248 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 249 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 252 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 253 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_7
# 254 "data//maps/MirrohPeak/scripts.pory"
	release
# 255 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 256 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 257 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 258 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 259 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 260 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 263 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 264 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Somber_Trigger_Movement_7
# 265 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 266 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 267 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_8
# 268 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 269 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 270 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_8
# 271 "data//maps/MirrohPeak/scripts.pory"
	release
# 274 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHPEAK_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Text_9
# 275 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MELEA
# 278 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_9
# 279 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 280 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 281 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_10
# 282 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 283 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 284 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 285 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_11
# 286 "data//maps/MirrohPeak/scripts.pory"
	release
# 287 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 288 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 289 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_12
# 290 "data//maps/MirrohPeak/scripts.pory"
	release
# 291 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 292 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 293 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_13
# 294 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 295 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_14
# 296 "data//maps/MirrohPeak/scripts.pory"
	release
# 297 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 298 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 299 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 300 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 301 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 302 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_15
# 304 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 305 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_16
# 306 "data//maps/MirrohPeak/scripts.pory"
	release
# 307 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_10
# 308 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 309 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_8
# 310 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 311 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Viniel_Movement_7
# 312 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 313 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 314 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_17
# 315 "data//maps/MirrohPeak/scripts.pory"
	release
# 316 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 318 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 319 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_18
# 320 "data//maps/MirrohPeak/scripts.pory"
	release
# 321 "data//maps/MirrohPeak/scripts.pory"
	delay 12
# 322 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_11
# 323 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 324 "data//maps/MirrohPeak/scripts.pory"
	delay 48
# 326 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 327 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 329 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 330 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 331 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 332 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 333 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_19
# 334 "data//maps/MirrohPeak/scripts.pory"
	release
# 335 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_12
# 336 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 339 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 340 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 341 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 342 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 343 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 344 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 345 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 347 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 348 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 352 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 353 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 354 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_2
# 355 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_20
# 356 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Trigger_Text_21
# 357 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_22
# 358 "data//maps/MirrohPeak/scripts.pory"
	release
# 360 "data//maps/MirrohPeak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 361 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MOXIE
# 362 "data//maps/MirrohPeak/scripts.pory"
	removeobject 2
# 363 "data//maps/MirrohPeak/scripts.pory"
	removeobject 5
# 364 "data//maps/MirrohPeak/scripts.pory"
	removeobject 6
# 365 "data//maps/MirrohPeak/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 367 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 368 "data//maps/MirrohPeak/scripts.pory"
	setobjectxyperm 20, 19, 14
# 369 "data//maps/MirrohPeak/scripts.pory"
	addobject 20
# 370 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 371 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_13
# 372 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 373 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 374 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_3
# 375 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 376 "data//maps/MirrohPeak/scripts.pory"
	delay 90
# 378 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_2
# 379 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 380 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 381 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 382 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 383 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 384 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 385 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 386 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 387 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 388 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 389 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 392 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_MOXIE_DEFEATED
# 393 "data//maps/MirrohPeak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_7
# 396 "data//maps/MirrohPeak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 397 "data//maps/MirrohPeak/scripts.pory"
	warp MAP_ANCIENT_MIRROH, 12, 22
# 398 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end

MirrohPeak_EventScript_Somber_Trigger_2:
	end


MirrohPeak_Grunt_A::
# 434 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_A, MirrohPeak_Grunt_A_Text_0, MirrohPeak_Grunt_A_Text_1
# 435 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_A_Text_2
# 436 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_B::
# 441 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_B, MirrohPeak_Grunt_B_Text_0, MirrohPeak_Grunt_B_Text_1
# 442 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_B_Text_2
# 443 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_C::
# 448 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_C, MirrohPeak_Grunt_C_Text_0, MirrohPeak_Grunt_C_Text_1
# 449 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 450 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_D::
# 455 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_D, MirrohPeak_Grunt_D_Text_0, MirrohPeak_Grunt_D_Text_1
# 456 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 457 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


# 51 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Trigger0_Movement_0:
# 51 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 51 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 74 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_0:
# 74 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_left
	step_end

# 79 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_1:
# 79 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_right
	step_end

# 85 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_2:
# 85 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 91 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_3:
# 91 "data//maps/MirrohPeak/scripts.pory"
	emote_question_mark
	step_end

# 105 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_4:
# 105 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
# 105 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 127 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_5:
# 127 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
	step_end

# 132 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_6:
# 132 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_left
# 132 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
# 132 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
	step_end

# 142 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_7:
# 142 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 143 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_8:
# 143 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 144 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_9:
# 144 "data//maps/MirrohPeak/scripts.pory"
	face_right
	step_end

# 146 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_10:
# 146 "data//maps/MirrohPeak/scripts.pory"
	face_left
	step_end

# 158 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_11:
# 158 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 158 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 184 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_0:
# 184 "data//maps/MirrohPeak/scripts.pory"
	face_left
# 184 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 190 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_1:
# 190 "data//maps/MirrohPeak/scripts.pory"
	face_right
# 190 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 191 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_2:
# 191 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 211 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_3:
# 211 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_up
	step_end

# 238 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_4:
# 238 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 238 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 238 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 255 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_5:
# 255 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 255 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 255 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 258 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_6:
# 258 "data//maps/MirrohPeak/scripts.pory"
	fly_up
	step_end

# 264 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_7:
# 264 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 267 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_8:
# 267 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 267 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 278 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_9:
# 278 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
# 278 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 307 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_10:
# 307 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 307 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 307 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 307 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 307 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 307 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 307 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 307 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 307 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 322 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_11:
# 322 "data//maps/MirrohPeak/scripts.pory"
	face_up
# 322 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 335 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_12:
# 335 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 335 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 371 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_13:
# 371 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 371 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 371 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 371 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 371 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 371 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 371 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

MirrohPeak_NPC_1_Text_0:
# 12 "data//maps/MirrohPeak/scripts.pory"
	.string "You look exhausted! You'd better head\n"
	.string "to Winterlily Hollow - go right from here\l"
	.string "and enter the cave.$"

MirrohPeak_EventScript_Viniel_Text_0:
# 76 "data//maps/MirrohPeak/scripts.pory"
	.string "???$"

MirrohPeak_EventScript_Viniel_Text_1:
# 77 "data//maps/MirrohPeak/scripts.pory"
	.string "Come at me, you lousy grunts! You think\n"
	.string "I'm going to let the likes of you mess\l"
	.string "around in MY backyard?$"

MirrohPeak_EventScript_Viniel_Text_2:
# 82 "data//maps/MirrohPeak/scripts.pory"
	.string "Grunt$"

MirrohPeak_EventScript_Viniel_Text_3:
# 83 "data//maps/MirrohPeak/scripts.pory"
	.string "It's public space, Viniel! Didn't they\n"
	.string "teach you that at Gym Leader School?$"

MirrohPeak_EventScript_Viniel_Text_4:
# 87 "data//maps/MirrohPeak/scripts.pory"
	.string "Viniel$"

MirrohPeak_EventScript_Viniel_Text_5:
# 88 "data//maps/MirrohPeak/scripts.pory"
	.string "There IS no Gym Leader School! How\n"
	.string "stupid are you?$"

MirrohPeak_EventScript_Viniel_Text_6:
# 97 "data//maps/MirrohPeak/scripts.pory"
	.string "...yeah, we know. I was just taunting\n"
	.string "you.$"

MirrohPeak_EventScript_Viniel_Text_7:
# 102 "data//maps/MirrohPeak/scripts.pory"
	.string "That was a terrible taunt!\n"
	.string "Didn't...didn't they teach you how to\l"
	.string "taunt at taunting school?$"

MirrohPeak_EventScript_Viniel_Text_8:
# 115 "data//maps/MirrohPeak/scripts.pory"
	.string "Who are you? Are you another grunt?\n"
	.string "C'mon, Ampharos and I can take all six\l"
	.string "of you together!$"

MirrohPeak_EventScript_Viniel_Text_9:
# 120 "data//maps/MirrohPeak/scripts.pory"
	.string "Wait...isn't that the trainer who beat\n"
	.string "Melea in Silversun City?$"

MirrohPeak_EventScript_Viniel_Text_10:
# 125 "data//maps/MirrohPeak/scripts.pory"
	.string "Yeah, it is! And also Moxie at Mt. Ceram!\p"
	.string "Yikes - someone better tell go them!$"

MirrohPeak_EventScript_Viniel_Text_11:
# 130 "data//maps/MirrohPeak/scripts.pory"
	.string "I'm on it!$"

MirrohPeak_EventScript_Viniel_Text_12:
# 138 "data//maps/MirrohPeak/scripts.pory"
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
# 152 "data//maps/MirrohPeak/scripts.pory"
	.string "Ampharos is raring to go! Now c'mon you\n"
	.string "cowards - I'm going to shock some sense\l"
	.string "into all four of you together!$"

MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0:
# 169 "data//maps/MirrohPeak/scripts.pory"
	.string "Even with the four of us together, its\n"
	.string "so hard! Guess that's why he's a Gym\l"
	.string "Leader.$"

MirrohPeak_GruntsVSViniel_GenericDialogue_Text_1:
# 172 "data//maps/MirrohPeak/scripts.pory"
	.string "That all you got, grunts?$"

MirrohPeak_EventScript_Somber_Trigger_Text_0:
# 207 "data//maps/MirrohPeak/scripts.pory"
	.string "Melea$"

MirrohPeak_EventScript_Somber_Trigger_Text_1:
# 208 "data//maps/MirrohPeak/scripts.pory"
	.string "Is it the child?$"

MirrohPeak_EventScript_Somber_Trigger_Text_2:
# 213 "data//maps/MirrohPeak/scripts.pory"
	.string "Moxie$"

MirrohPeak_EventScript_Somber_Trigger_Text_3:
# 214 "data//maps/MirrohPeak/scripts.pory"
	.string "I presume it is.$"

MirrohPeak_EventScript_Somber_Trigger_Text_4:
# 221 "data//maps/MirrohPeak/scripts.pory"
	.string "Your tenacity is admirable, child.\p"
	.string "I must acknowledge that...despite your\n"
	.string "insufferable propensity for ruining\l"
	.string "plans which are none of your concern.\p"
	.string "After our defeats at your hand, Leader\n"
	.string "was most displeased with the two of us.\l"
	.string "Most displeased indeed...$"

MirrohPeak_EventScript_Somber_Trigger_Text_5:
# 227 "data//maps/MirrohPeak/scripts.pory"
	.string "Beyond the dreamstone's gate lie some\n"
	.string "of the most powerful Pokémon this world\l"
	.string "has ever seen. And of them all, one\l"
	.string "stood the strongest. The fiercest,\l"
	.string "most vicious. Long gone, extinct today.\l"
	.string "But in the hands of people with\l"
	.string "purpose, such power can be used to do\l"
	.string "great things...$"

MirrohPeak_EventScript_Somber_Trigger_Text_6:
# 236 "data//maps/MirrohPeak/scripts.pory"
	.string "Go on, Moxie. Start the Dreamalyser.$"

MirrohPeak_EventScript_Somber_Trigger_Text_7:
# 253 "data//maps/MirrohPeak/scripts.pory"
	.string "Melea, you go ahead. I'll deal with the\n"
	.string "child.$"

MirrohPeak_EventScript_Somber_Trigger_Text_8:
# 270 "data//maps/MirrohPeak/scripts.pory"
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
# 274 "data//maps/MirrohPeak/scripts.pory"
	.string "Insufferable!$"

MirrohPeak_EventScript_Somber_Trigger_Text_10:
# 281 "data//maps/MirrohPeak/scripts.pory"
	.string "Argh! How could I have lost!$"

MirrohPeak_EventScript_Somber_Trigger_Text_11:
# 285 "data//maps/MirrohPeak/scripts.pory"
	.string "One of you!\p"
	.string "...\p"
	.string "You there, wearing the Trekking Boots!$"

MirrohPeak_EventScript_Somber_Trigger_Text_12:
# 289 "data//maps/MirrohPeak/scripts.pory"
	.string "Y-yes boss?$"

MirrohPeak_EventScript_Somber_Trigger_Text_13:
# 293 "data//maps/MirrohPeak/scripts.pory"
	.string "Hurry up and go inside the dreamstone.\n"
	.string "Tell Melea what happened! She needs to\l"
	.string "be prepared.$"

MirrohPeak_EventScript_Somber_Trigger_Text_14:
# 295 "data//maps/MirrohPeak/scripts.pory"
	.string "B-but boss, it's -$"

MirrohPeak_EventScript_Somber_Trigger_Text_15:
# 302 "data//maps/MirrohPeak/scripts.pory"
	.string "No buts! Get moving - fast! Or I'll have\n"
	.string "you'll join Gabrielle!$"

MirrohPeak_EventScript_Somber_Trigger_Text_16:
# 305 "data//maps/MirrohPeak/scripts.pory"
	.string "O-ok boss!$"

MirrohPeak_EventScript_Somber_Trigger_Text_17:
# 314 "data//maps/MirrohPeak/scripts.pory"
	.string "But boss...what if I don't come back?$"

MirrohPeak_EventScript_Somber_Trigger_Text_18:
# 319 "data//maps/MirrohPeak/scripts.pory"
	.string "Then we'll send roses to your family -\n"
	.string "now hurry up or I'll be forced to send\l"
	.string "roses right now!$"

MirrohPeak_EventScript_Somber_Trigger_Text_19:
# 333 "data//maps/MirrohPeak/scripts.pory"
	.string "I know you're going to chase Melea and\n"
	.string "try to stop her from getting the\l"
	.string "Ancient Wonders.\p"
	.string "Let me do you a favour, {PLAYER}. I'll\n"
	.string "send you inside myself. There's only one\l"
	.string "exit out, and once Melea takes that\l"
	.string "exit, you'll be stuck there forever!\p"
	.string "Hahaha!$"

MirrohPeak_EventScript_Somber_Trigger_Text_20:
# 355 "data//maps/MirrohPeak/scripts.pory"
	.string "Now you lot! Let's go get our\n"
	.string "construction equipment so we can carry\l"
	.string "all this away.$"

MirrohPeak_EventScript_Somber_Trigger_Text_21:
# 356 "data//maps/MirrohPeak/scripts.pory"
	.string "Grunts$"

MirrohPeak_EventScript_Somber_Trigger_Text_22:
# 357 "data//maps/MirrohPeak/scripts.pory"
	.string "Y-yes boss!!$"

MirrohPeak_Grunt_A_Text_0:
# 434 "data//maps/MirrohPeak/scripts.pory"
	.string "You're too late! The bosses have\n"
	.string "already taken control of the\l"
	.string "dreamstone with the Dreamalyser!$"

MirrohPeak_Grunt_A_Text_1:
# 434 "data//maps/MirrohPeak/scripts.pory"
	.string "You're still too late!$"

MirrohPeak_Grunt_A_Text_2:
# 435 "data//maps/MirrohPeak/scripts.pory"
	.string "I wonder what'll happen once they\n"
	.string "activate the Dreamalyser...$"

MirrohPeak_Grunt_B_Text_0:
# 441 "data//maps/MirrohPeak/scripts.pory"
	.string "We're going to use the Dreamalyser to\n"
	.string "revive the Ancient Terror! Hahaha!$"

MirrohPeak_Grunt_B_Text_1:
# 441 "data//maps/MirrohPeak/scripts.pory"
	.string "You're playing dirty!$"

MirrohPeak_Grunt_B_Text_2:
# 442 "data//maps/MirrohPeak/scripts.pory"
	.string "Man, when will I become an admin?$"

MirrohPeak_Grunt_C_Text_0:
# 448 "data//maps/MirrohPeak/scripts.pory"
	.string "Nope. No way. You're not getting\n"
	.string "through us!$"

MirrohPeak_Grunt_C_Text_1:
# 448 "data//maps/MirrohPeak/scripts.pory"
	.string "Fine then!$"

MirrohPeak_Grunt_C_Text_2:
# 449 "data//maps/MirrohPeak/scripts.pory"
	.string "You may have beaten us, but you can't\n"
	.string "beat Melea and Moxie!$"

MirrohPeak_Grunt_D_Text_0:
# 455 "data//maps/MirrohPeak/scripts.pory"
	.string "Yeah! We've got the Dreamalyser up and\n"
	.string "running, and we're not letting you\l"
	.string "interfere!$"

MirrohPeak_Grunt_D_Text_1:
# 455 "data//maps/MirrohPeak/scripts.pory"
	.string "Go ahead!$"
