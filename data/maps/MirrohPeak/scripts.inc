# 1 "data//maps/MirrohPeak/scripts.pory"

# 2 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_MOXIE, 4
# 3 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_MELEA, 13
# 4 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_VINIEL, 16
# 5 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_MANECTRIC, 18

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
	delay 60
# 105 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_4
# 106 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_4
# 107 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_4
# 108 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_4
# 109 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MANECTRIC, MirrohPeak_EventScript_Viniel_Movement_4
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
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
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
	applymovement LOCALID_MANECTRIC, MirrohPeak_EventScript_Viniel_Movement_0
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
	delay 16
# 172 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 173 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_GruntsVSViniel_GenericDialogue_Text_1
# 174 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_EventScript_Somber_Trigger::
# 179 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, MirrohPeak_EventScript_Somber_Trigger_2
# 181 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 182 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 185 "data//maps/MirrohPeak/scripts.pory"
	applymovement 5, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 186 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 187 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 188 "data//maps/MirrohPeak/scripts.pory"
	applymovement 6, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 189 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 190 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 191 "data//maps/MirrohPeak/scripts.pory"
	applymovement 2, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 192 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 193 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 194 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 195 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 196 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 198 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 199 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 200 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 201 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 202 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 206 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_SKIP_MIRROH_CUTSCENE, MirrohPeak_EventScript_Somber_Trigger_4
# 222 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Somber_Cutscene
	return

MirrohPeak_EventScript_Somber_Trigger_2:
	end

MirrohPeak_EventScript_Somber_Trigger_4:
# 207 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_0, MSGBOX_YESNO
# 208 "data//maps/MirrohPeak/scripts.pory"
	release
# 209 "data//maps/MirrohPeak/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohPeak_EventScript_Somber_Trigger_7
# 213 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 214 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 215 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 216 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 217 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 219 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Somber_Skip
	return

MirrohPeak_EventScript_Somber_Trigger_7:
# 210 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Somber_Cutscene
	return


MirrohPeak_EventScript_Somber_Cutscene::
# 229 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_SKIP_MIRROH_CUTSCENE
# 232 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Viniel_Movement_3
# 233 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 234 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 235 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_0
# 236 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_1
# 237 "data//maps/MirrohPeak/scripts.pory"
	release
# 238 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 239 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Cutscene_Movement_0
# 240 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 241 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 242 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_3
# 243 "data//maps/MirrohPeak/scripts.pory"
	release
# 244 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 246 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Cutscene_Movement_0
# 247 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 248 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 249 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_4
# 250 "data//maps/MirrohPeak/scripts.pory"
	release
# 251 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 252 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Cutscene_Movement_0
# 253 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 254 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_0
# 255 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_5
# 256 "data//maps/MirrohPeak/scripts.pory"
	release
# 259 "data//maps/MirrohPeak/scripts.pory"
	setweather WEATHER_SNOW
# 260 "data//maps/MirrohPeak/scripts.pory"
	doweather
# 262 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 263 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_0
# 264 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_6
# 265 "data//maps/MirrohPeak/scripts.pory"
	release
# 266 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Cutscene_Movement_1
# 267 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 268 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 271 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 272 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 273 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 274 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 275 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 276 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 277 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 280 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 281 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_7
# 282 "data//maps/MirrohPeak/scripts.pory"
	release
# 283 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Cutscene_Movement_2
# 284 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 285 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 286 "data//maps/MirrohPeak/scripts.pory"
	playse SE_WARP_OUT
# 287 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 288 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 289 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 292 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 293 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 294 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 295 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 296 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Cutscene_Movement_3
# 297 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 298 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 299 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_8
# 301 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Somber_Skip
	return


MirrohPeak_EventScript_Somber_Skip::
# 306 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 307 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_0
# 308 "data//maps/MirrohPeak/scripts.pory"
	release
# 311 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHPEAK_MOXIE, MirrohPeak_EventScript_Somber_Skip_Text_1
# 312 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MELEA
# 315 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Skip_Movement_0
# 316 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 317 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 318 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_2
# 319 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 320 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 321 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 322 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_3
# 323 "data//maps/MirrohPeak/scripts.pory"
	release
# 324 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Cutscene_Movement_0
# 325 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 326 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_4
# 327 "data//maps/MirrohPeak/scripts.pory"
	release
# 328 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 329 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 330 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_5
# 331 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 332 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_6
# 333 "data//maps/MirrohPeak/scripts.pory"
	release
# 334 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 335 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 336 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 337 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 338 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 339 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_7
# 341 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 342 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_8
# 343 "data//maps/MirrohPeak/scripts.pory"
	release
# 344 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Skip_Movement_1
# 345 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 346 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_8
# 347 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 348 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Viniel_Movement_7
# 349 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 350 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 351 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_9
# 352 "data//maps/MirrohPeak/scripts.pory"
	release
# 353 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 355 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 356 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_10
# 357 "data//maps/MirrohPeak/scripts.pory"
	release
# 358 "data//maps/MirrohPeak/scripts.pory"
	delay 12
# 359 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Skip_Movement_2
# 360 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 361 "data//maps/MirrohPeak/scripts.pory"
	delay 48
# 363 "data//maps/MirrohPeak/scripts.pory"
	playse SE_WARP_OUT
# 364 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 365 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 367 "data//maps/MirrohPeak/scripts.pory"
	delay 28
# 368 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 369 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 370 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 371 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_11
# 372 "data//maps/MirrohPeak/scripts.pory"
	release
# 373 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Skip_Movement_3
# 374 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 377 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 378 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 379 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 380 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 381 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 382 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 383 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 384 "data//maps/MirrohPeak/scripts.pory"
	playse SE_WARP_OUT
# 385 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 386 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 388 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 389 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 390 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 391 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_12
# 392 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Skip_Text_13
# 393 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_14
# 394 "data//maps/MirrohPeak/scripts.pory"
	release
# 396 "data//maps/MirrohPeak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 397 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MOXIE
# 398 "data//maps/MirrohPeak/scripts.pory"
	removeobject 2
# 399 "data//maps/MirrohPeak/scripts.pory"
	removeobject 5
# 400 "data//maps/MirrohPeak/scripts.pory"
	removeobject 6
# 401 "data//maps/MirrohPeak/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 403 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 404 "data//maps/MirrohPeak/scripts.pory"
	setobjectxyperm 20, 19, 14
# 405 "data//maps/MirrohPeak/scripts.pory"
	addobject 20
# 406 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 407 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Skip_Movement_4
# 408 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 409 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 410 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_3
# 411 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 412 "data//maps/MirrohPeak/scripts.pory"
	delay 90
# 414 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_2
# 415 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 416 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 417 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 418 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 419 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 420 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 421 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 422 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 423 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 424 "data//maps/MirrohPeak/scripts.pory"
	playse SE_WARP_OUT
# 425 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 426 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 427 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 429 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_MOXIE_DEFEATED
# 430 "data//maps/MirrohPeak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_7
# 433 "data//maps/MirrohPeak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 434 "data//maps/MirrohPeak/scripts.pory"
	warp MAP_ANCIENT_MIRROH, 12, 22
# 435 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_A::
# 471 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_A, MirrohPeak_Grunt_A_Text_0, MirrohPeak_Grunt_A_Text_1
# 472 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_A_Text_2
# 473 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_B::
# 478 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_B, MirrohPeak_Grunt_B_Text_0, MirrohPeak_Grunt_B_Text_1
# 479 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_B_Text_2
# 480 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_C::
# 485 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_C, MirrohPeak_Grunt_C_Text_0, MirrohPeak_Grunt_C_Text_1
# 486 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 487 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_D::
# 492 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_D, MirrohPeak_Grunt_D_Text_0, MirrohPeak_Grunt_D_Text_1
# 493 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 494 "data//maps/MirrohPeak/scripts.pory"
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

# 185 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_0:
# 185 "data//maps/MirrohPeak/scripts.pory"
	face_left
# 185 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 191 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_1:
# 191 "data//maps/MirrohPeak/scripts.pory"
	face_right
# 191 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 192 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_2:
# 192 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 214 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_3:
# 214 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 215 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_4:
# 215 "data//maps/MirrohPeak/scripts.pory"
	fly_up
	step_end

# 239 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Cutscene_Movement_0:
# 239 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_up
	step_end

# 266 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Cutscene_Movement_1:
# 266 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 266 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 266 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 283 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Cutscene_Movement_2:
# 283 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 283 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 283 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 296 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Cutscene_Movement_3:
# 296 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 296 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 315 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Skip_Movement_0:
# 315 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
# 315 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 344 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Skip_Movement_1:
# 344 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 344 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 344 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 344 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 344 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 344 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 344 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 344 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 344 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 359 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Skip_Movement_2:
# 359 "data//maps/MirrohPeak/scripts.pory"
	face_up
# 359 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 373 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Skip_Movement_3:
# 373 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 373 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 407 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Skip_Movement_4:
# 407 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 407 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 407 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 407 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 407 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 407 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 407 "data//maps/MirrohPeak/scripts.pory"
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
	.string "Come at me, you lousy grunts!\p"
	.string "You think I'm going to let the likes of\n"
	.string "you mess around in MY backyard?$"

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
	.string "There IS no Gym Leader School!\n"
	.string "How stupid are you?$"

MirrohPeak_EventScript_Viniel_Text_6:
# 97 "data//maps/MirrohPeak/scripts.pory"
	.string "...yeah, we all knew that.\n"
	.string "I was just taunting you.$"

MirrohPeak_EventScript_Viniel_Text_7:
# 102 "data//maps/MirrohPeak/scripts.pory"
	.string "That was a terrible taunt!\n"
	.string "Didn't...didn't they teach you how to\l"
	.string "taunt at taunting school?$"

MirrohPeak_EventScript_Viniel_Text_8:
# 115 "data//maps/MirrohPeak/scripts.pory"
	.string "Who are you? Are you another grunt?\n"
	.string "C'mon, Manectric and I can take all six\l"
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
	.string "So you're an enemy of theirs?\p"
	.string "An enemy of an enemy is a friend!\p"
	.string "Trainer, these Team Somber grunts\n"
	.string "suddenly came out of nowhere and\l"
	.string "started harrassing the great people of\l"
	.string "Winterlily Hollow.\p"
	.string "So I'm out here beating them down, one\n"
	.string "by one! I can take this lot myself - you\l"
	.string "go on ahead! These guys are upto no\l"
	.string "good. The peak is right ahead - hurry\l"
	.string "up!$"

MirrohPeak_EventScript_Viniel_Text_13:
# 152 "data//maps/MirrohPeak/scripts.pory"
	.string "Manectric is raring to go! Now c'mon you\n"
	.string "cowards - I'm going to shock some sense\l"
	.string "into all four of you together!$"

MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0:
# 169 "data//maps/MirrohPeak/scripts.pory"
	.string "Even with four of us, its so hard!\n"
	.string "Guess that's why he's a Gym Leader.$"

MirrohPeak_GruntsVSViniel_GenericDialogue_Text_1:
# 173 "data//maps/MirrohPeak/scripts.pory"
	.string "That all you got, grunts?$"

MirrohPeak_EventScript_Somber_Trigger_Text_0:
# 207 "data//maps/MirrohPeak/scripts.pory"
	.string "Skip cutscene?$"

MirrohPeak_EventScript_Somber_Cutscene_Text_0:
# 235 "data//maps/MirrohPeak/scripts.pory"
	.string "Melea$"

MirrohPeak_EventScript_Somber_Cutscene_Text_1:
# 236 "data//maps/MirrohPeak/scripts.pory"
	.string "Is it the child?$"

MirrohPeak_EventScript_Somber_Cutscene_Text_2:
# 241 "data//maps/MirrohPeak/scripts.pory"
	.string "Moxie$"

MirrohPeak_EventScript_Somber_Cutscene_Text_3:
# 242 "data//maps/MirrohPeak/scripts.pory"
	.string "I presume it is.$"

MirrohPeak_EventScript_Somber_Cutscene_Text_4:
# 249 "data//maps/MirrohPeak/scripts.pory"
	.string "Your tenacity is admirable, child.\p"
	.string "I must acknowledge that...despite your\n"
	.string "insufferable propensity for ruining\l"
	.string "plans which are none of your concern.\p"
	.string "After our defeats at your hand, Leader\n"
	.string "was most displeased with the two of us.\p"
	.string "Most displeased indeed...$"

MirrohPeak_EventScript_Somber_Cutscene_Text_5:
# 255 "data//maps/MirrohPeak/scripts.pory"
	.string "Beyond the dreamstone's gate lie some\n"
	.string "of the most powerful Pokémon this world\l"
	.string "has ever seen. And of them all, one\l"
	.string "stood the strongest.\p"
	.string "The fiercest, most vicious.\n"
	.string "Long gone, extinct today.\p"
	.string "But in the hands of people with\n"
	.string "purpose, such power can be used to do\l"
	.string "great things...$"

MirrohPeak_EventScript_Somber_Cutscene_Text_6:
# 264 "data//maps/MirrohPeak/scripts.pory"
	.string "Go on, Moxie. Start the Dreamalyser.$"

MirrohPeak_EventScript_Somber_Cutscene_Text_7:
# 281 "data//maps/MirrohPeak/scripts.pory"
	.string "Melea, you go ahead.\n"
	.string "I'll deal with the child.$"

MirrohPeak_EventScript_Somber_Cutscene_Text_8:
# 299 "data//maps/MirrohPeak/scripts.pory"
	.string "My dear colleague has gone ahead into\n"
	.string "Ancient Cormoria...you've seen it, no?\p"
	.string "I wonder what it looks like.\p"
	.string "Melea will tell me when she returns.\p"
	.string "...\p"
	.string "Child, we stand right at the very cusp\n"
	.string "of attaining our goal.\p"
	.string "The Ancient Terror will soon be ours.\p"
	.string "...\p"
	.string "I will give you a chance to turn around.\p"
	.string "Walk away from that which you\n"
	.string "don't understand.\p"
	.string "...\p"
	.string "No?\p"
	.string "Very well then.\n"
	.string "This will be our final battle.$"

MirrohPeak_EventScript_Somber_Skip_Text_0:
# 307 "data//maps/MirrohPeak/scripts.pory"
	.string "I will make sure that you won't have the\n"
	.string "heart to come after us again!$"

MirrohPeak_EventScript_Somber_Skip_Text_1:
# 311 "data//maps/MirrohPeak/scripts.pory"
	.string "Insufferable!$"

MirrohPeak_EventScript_Somber_Skip_Text_2:
# 318 "data//maps/MirrohPeak/scripts.pory"
	.string "Argh! How could I have lost!$"

MirrohPeak_EventScript_Somber_Skip_Text_3:
# 322 "data//maps/MirrohPeak/scripts.pory"
	.string "One of you!\p"
	.string "...\p"
	.string "You there, wearing the Trekking Boots!$"

MirrohPeak_EventScript_Somber_Skip_Text_4:
# 326 "data//maps/MirrohPeak/scripts.pory"
	.string "Y-yes boss?$"

MirrohPeak_EventScript_Somber_Skip_Text_5:
# 330 "data//maps/MirrohPeak/scripts.pory"
	.string "Hurry up and go inside the dreamstone.\p"
	.string "Tell Melea what happened!\n"
	.string "She needs to be prepared.$"

MirrohPeak_EventScript_Somber_Skip_Text_6:
# 332 "data//maps/MirrohPeak/scripts.pory"
	.string "B-but boss, it's -$"

MirrohPeak_EventScript_Somber_Skip_Text_7:
# 339 "data//maps/MirrohPeak/scripts.pory"
	.string "No buts! Get moving - fast!\n"
	.string "Or I'll have you'll join Gabrielle!$"

MirrohPeak_EventScript_Somber_Skip_Text_8:
# 342 "data//maps/MirrohPeak/scripts.pory"
	.string "O-ok boss!$"

MirrohPeak_EventScript_Somber_Skip_Text_9:
# 351 "data//maps/MirrohPeak/scripts.pory"
	.string "But boss...what if I don't come back?$"

MirrohPeak_EventScript_Somber_Skip_Text_10:
# 356 "data//maps/MirrohPeak/scripts.pory"
	.string "Then we'll send roses to your family -\n"
	.string "now hurry up or I'll be forced to send\l"
	.string "roses right now!$"

MirrohPeak_EventScript_Somber_Skip_Text_11:
# 371 "data//maps/MirrohPeak/scripts.pory"
	.string "I know you want to stop Melea from\n"
	.string "getting the Ancient Terror.\p"
	.string "Let me do you a favour, {PLAYER}.\n"
	.string "I'll send you inside myself.\p"
	.string "There's only one exit out, and once\n"
	.string "Melea takes it, you'll be stuck forever!\p"
	.string "Hahaha!$"

MirrohPeak_EventScript_Somber_Skip_Text_12:
# 391 "data//maps/MirrohPeak/scripts.pory"
	.string "Now you lot! Let's get out of here!$"

MirrohPeak_EventScript_Somber_Skip_Text_13:
# 392 "data//maps/MirrohPeak/scripts.pory"
	.string "Grunts$"

MirrohPeak_EventScript_Somber_Skip_Text_14:
# 393 "data//maps/MirrohPeak/scripts.pory"
	.string "Y-yes boss!!$"

MirrohPeak_Grunt_A_Text_0:
# 471 "data//maps/MirrohPeak/scripts.pory"
	.string "You're too late! The bosses have\n"
	.string "already taken control of the\l"
	.string "dreamstone with the Dreamalyser!$"

MirrohPeak_Grunt_A_Text_1:
# 471 "data//maps/MirrohPeak/scripts.pory"
	.string "You're still too late!$"

MirrohPeak_Grunt_A_Text_2:
# 472 "data//maps/MirrohPeak/scripts.pory"
	.string "I wonder what'll happen once they\n"
	.string "activate the Dreamalyser...$"

MirrohPeak_Grunt_B_Text_0:
# 478 "data//maps/MirrohPeak/scripts.pory"
	.string "We're going to use the Dreamalyser to\n"
	.string "revive the Ancient Terror! Hahaha!$"

MirrohPeak_Grunt_B_Text_1:
# 478 "data//maps/MirrohPeak/scripts.pory"
	.string "You're playing dirty!$"

MirrohPeak_Grunt_B_Text_2:
# 479 "data//maps/MirrohPeak/scripts.pory"
	.string "Man, when will I become an admin?$"

MirrohPeak_Grunt_C_Text_0:
# 485 "data//maps/MirrohPeak/scripts.pory"
	.string "Nope. No way. You're not getting\n"
	.string "through us!$"

MirrohPeak_Grunt_C_Text_1:
# 485 "data//maps/MirrohPeak/scripts.pory"
	.string "Fine then!$"

MirrohPeak_Grunt_C_Text_2:
# 486 "data//maps/MirrohPeak/scripts.pory"
	.string "You may have beaten us, but you can't\n"
	.string "beat Melea and Moxie!$"

MirrohPeak_Grunt_D_Text_0:
# 492 "data//maps/MirrohPeak/scripts.pory"
	.string "Yeah! The Dreamalyser's up and running,\n"
	.string "and we're not letting you butt in!$"

MirrohPeak_Grunt_D_Text_1:
# 492 "data//maps/MirrohPeak/scripts.pory"
	.string "Go ahead!$"
