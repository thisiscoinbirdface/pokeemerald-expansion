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
# 18 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_TEMP_C, 1
# 19 "data//maps/MirrohPeak/scripts.pory"
	call Common_EventScript_SaveGameBeforeSomber
# 20 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end

MtMirroh_Peak_SaveGameTrigger_2:
	end


MirrohPeak_EventScript_Viniel_Trigger0::
# 39 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_VINIEL_CUTSCENE, MirrohPeak_EventScript_Viniel_Trigger0_2
# 41 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 42 "data//maps/MirrohPeak/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 44 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 45 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 46 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 47 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 49 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Viniel
	return

MirrohPeak_EventScript_Viniel_Trigger0_2:
	end


MirrohPeak_EventScript_Viniel_Trigger1::
# 53 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_VINIEL_CUTSCENE, MirrohPeak_EventScript_Viniel_Trigger1_2
# 55 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 56 "data//maps/MirrohPeak/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 58 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 59 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 60 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 61 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 63 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Viniel
	return

MirrohPeak_EventScript_Viniel_Trigger1_2:
	end


MirrohPeak_EventScript_Viniel::
# 68 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_0
# 69 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 70 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_0
# 71 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_1
# 72 "data//maps/MirrohPeak/scripts.pory"
	release
# 73 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_1
# 74 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 75 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 76 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 77 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_3
# 78 "data//maps/MirrohPeak/scripts.pory"
	release
# 79 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 80 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 81 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 82 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_5
# 83 "data//maps/MirrohPeak/scripts.pory"
	release
# 84 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 85 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_3
# 86 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_3
# 87 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_3
# 88 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 89 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 90 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 91 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_6
# 92 "data//maps/MirrohPeak/scripts.pory"
	release
# 93 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_2
# 94 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 95 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 96 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_7
# 97 "data//maps/MirrohPeak/scripts.pory"
	release
# 98 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 99 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_4
# 100 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_4
# 101 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_4
# 102 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_4
# 103 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MANECTRIC, MirrohPeak_EventScript_Viniel_Movement_4
# 104 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_4
# 105 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 106 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 108 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 109 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_8
# 110 "data//maps/MirrohPeak/scripts.pory"
	release
# 111 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_3
# 112 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 113 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 114 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_9
# 115 "data//maps/MirrohPeak/scripts.pory"
	release
# 116 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_2
# 117 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 118 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 119 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_10
# 120 "data//maps/MirrohPeak/scripts.pory"
	release
# 121 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_5
# 122 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 123 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 124 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_11
# 125 "data//maps/MirrohPeak/scripts.pory"
	release
# 126 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_6
# 127 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 128 "data//maps/MirrohPeak/scripts.pory"
	removeobject 19
# 130 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_3
# 131 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 132 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_12
# 133 "data//maps/MirrohPeak/scripts.pory"
	release
# 134 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 135 "data//maps/MirrohPeak/scripts.pory"
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
# 136 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_7
# 137 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_8
# 138 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_9
# 139 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_9
# 140 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_10
# 141 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MANECTRIC, MirrohPeak_EventScript_Viniel_Movement_0
# 142 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 143 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 145 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 146 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_13
# 147 "data//maps/MirrohPeak/scripts.pory"
	release
# 149 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_VINIEL_CUTSCENE
# 151 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 152 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Movement_11
# 153 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 154 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 156 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_GruntsVSViniel_GenericDialogue::
# 161 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 162 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 163 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0
# 164 "data//maps/MirrohPeak/scripts.pory"
	release
# 165 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 166 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_4
# 167 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_GruntsVSViniel_GenericDialogue_Text_1
# 168 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_EventScript_Somber_Trigger::
# 173 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, MirrohPeak_EventScript_Somber_Trigger_2
# 175 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 176 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 179 "data//maps/MirrohPeak/scripts.pory"
	applymovement 5, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 180 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 181 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 182 "data//maps/MirrohPeak/scripts.pory"
	applymovement 6, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 183 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 184 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 185 "data//maps/MirrohPeak/scripts.pory"
	applymovement 2, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 186 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 187 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 188 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 189 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 190 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 192 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 193 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger0_Movement_0
# 194 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 195 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 196 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 200 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_SKIP_MIRROH_CUTSCENE, MirrohPeak_EventScript_Somber_Trigger_4
# 216 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Somber_Cutscene
	return

MirrohPeak_EventScript_Somber_Trigger_2:
	end

MirrohPeak_EventScript_Somber_Trigger_4:
# 201 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_0, MSGBOX_YESNO
# 202 "data//maps/MirrohPeak/scripts.pory"
	release
# 203 "data//maps/MirrohPeak/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohPeak_EventScript_Somber_Trigger_7
# 207 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 208 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 209 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 210 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 211 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 213 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Somber_Skip
	return

MirrohPeak_EventScript_Somber_Trigger_7:
# 204 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Somber_Cutscene
	return


MirrohPeak_EventScript_Somber_Cutscene::
# 223 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_SKIP_MIRROH_CUTSCENE
# 226 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Viniel_Movement_3
# 227 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 228 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 229 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_0
# 230 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_1
# 231 "data//maps/MirrohPeak/scripts.pory"
	release
# 232 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 233 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Cutscene_Movement_0
# 234 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 235 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 236 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_3
# 237 "data//maps/MirrohPeak/scripts.pory"
	release
# 238 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 240 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Cutscene_Movement_0
# 241 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 242 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 243 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_4
# 244 "data//maps/MirrohPeak/scripts.pory"
	release
# 245 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 246 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Cutscene_Movement_0
# 247 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 248 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_0
# 249 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_5
# 250 "data//maps/MirrohPeak/scripts.pory"
	release
# 253 "data//maps/MirrohPeak/scripts.pory"
	setweather WEATHER_SNOW
# 254 "data//maps/MirrohPeak/scripts.pory"
	doweather
# 256 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 257 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_0
# 258 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_6
# 259 "data//maps/MirrohPeak/scripts.pory"
	release
# 260 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Cutscene_Movement_1
# 261 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 262 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 265 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 266 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 267 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 268 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 269 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 270 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 271 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 274 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 275 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_7
# 276 "data//maps/MirrohPeak/scripts.pory"
	release
# 277 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Cutscene_Movement_2
# 278 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 279 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 280 "data//maps/MirrohPeak/scripts.pory"
	playse SE_WARP_OUT
# 281 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 282 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 283 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 286 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 287 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 288 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 289 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 290 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Cutscene_Movement_3
# 291 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 292 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 293 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Cutscene_Text_8
# 295 "data//maps/MirrohPeak/scripts.pory"
	goto MirrohPeak_EventScript_Somber_Skip
	return


MirrohPeak_EventScript_Somber_Skip::
# 300 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 301 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_0
# 302 "data//maps/MirrohPeak/scripts.pory"
	release
# 305 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHPEAK_MOXIE, MirrohPeak_EventScript_Somber_Skip_Text_1
# 306 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MELEA
# 309 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Skip_Movement_0
# 310 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 311 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 312 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_2
# 313 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 314 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 315 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 316 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_3
# 317 "data//maps/MirrohPeak/scripts.pory"
	release
# 318 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Cutscene_Movement_0
# 319 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 320 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_4
# 321 "data//maps/MirrohPeak/scripts.pory"
	release
# 322 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 323 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 324 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_5
# 325 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 326 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_6
# 327 "data//maps/MirrohPeak/scripts.pory"
	release
# 328 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 329 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 330 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 331 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 332 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 333 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_7
# 335 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 336 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_8
# 337 "data//maps/MirrohPeak/scripts.pory"
	release
# 338 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Skip_Movement_1
# 339 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 340 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_8
# 341 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 342 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Viniel_Movement_7
# 343 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 344 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Viniel_Text_2
# 345 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_9
# 346 "data//maps/MirrohPeak/scripts.pory"
	release
# 347 "data//maps/MirrohPeak/scripts.pory"
	delay 8
# 349 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 350 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_10
# 351 "data//maps/MirrohPeak/scripts.pory"
	release
# 352 "data//maps/MirrohPeak/scripts.pory"
	delay 12
# 353 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Skip_Movement_2
# 354 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 355 "data//maps/MirrohPeak/scripts.pory"
	delay 48
# 357 "data//maps/MirrohPeak/scripts.pory"
	playse SE_WARP_OUT
# 358 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 359 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 361 "data//maps/MirrohPeak/scripts.pory"
	delay 28
# 362 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 363 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 364 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 365 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_11
# 366 "data//maps/MirrohPeak/scripts.pory"
	release
# 367 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Skip_Movement_3
# 368 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 371 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 372 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 373 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 374 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 375 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 376 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 377 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 378 "data//maps/MirrohPeak/scripts.pory"
	playse SE_WARP_OUT
# 379 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 380 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 382 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 383 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 384 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Cutscene_Text_2
# 385 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_12
# 386 "data//maps/MirrohPeak/scripts.pory"
	speakername MirrohPeak_EventScript_Somber_Skip_Text_13
# 387 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Skip_Text_14
# 388 "data//maps/MirrohPeak/scripts.pory"
	release
# 390 "data//maps/MirrohPeak/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 391 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MOXIE
# 392 "data//maps/MirrohPeak/scripts.pory"
	removeobject 2
# 393 "data//maps/MirrohPeak/scripts.pory"
	removeobject 5
# 394 "data//maps/MirrohPeak/scripts.pory"
	removeobject 6
# 395 "data//maps/MirrohPeak/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 397 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 398 "data//maps/MirrohPeak/scripts.pory"
	setobjectxyperm 20, 19, 14
# 399 "data//maps/MirrohPeak/scripts.pory"
	addobject 20
# 400 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 401 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Skip_Movement_4
# 402 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 403 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 404 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_3
# 405 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 406 "data//maps/MirrohPeak/scripts.pory"
	delay 90
# 408 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Viniel_Movement_2
# 409 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 410 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 411 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 412 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 413 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 414 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 415 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 416 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 417 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 418 "data//maps/MirrohPeak/scripts.pory"
	playse SE_WARP_OUT
# 419 "data//maps/MirrohPeak/scripts.pory"
	applymovement 20, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 420 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 421 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 423 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_MOXIE_DEFEATED
# 424 "data//maps/MirrohPeak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_7
# 427 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 428 "data//maps/MirrohPeak/scripts.pory"
	warp MAP_ANCIENT_MIRROH, 12, 22
# 429 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_A::
# 465 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_A, MirrohPeak_Grunt_A_Text_0, MirrohPeak_Grunt_A_Text_1
# 466 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_A_Text_2
# 467 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_B::
# 472 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_B, MirrohPeak_Grunt_B_Text_0, MirrohPeak_Grunt_B_Text_1
# 473 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_B_Text_2
# 474 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_C::
# 479 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_C, MirrohPeak_Grunt_C_Text_0, MirrohPeak_Grunt_C_Text_1
# 480 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 481 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_Grunt_D::
# 486 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_single TRAINER_MIRROHPEAK_D, MirrohPeak_Grunt_D_Text_0, MirrohPeak_Grunt_D_Text_1
# 487 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_Grunt_C_Text_2
# 488 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


# 45 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Trigger0_Movement_0:
# 45 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 45 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 68 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_0:
# 68 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_left
	step_end

# 73 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_1:
# 73 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_right
	step_end

# 79 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_2:
# 79 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 85 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_3:
# 85 "data//maps/MirrohPeak/scripts.pory"
	emote_question_mark
	step_end

# 99 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_4:
# 99 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
# 99 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 121 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_5:
# 121 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
	step_end

# 126 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_6:
# 126 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_left
# 126 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
# 126 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
	step_end

# 136 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_7:
# 136 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 137 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_8:
# 137 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 138 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_9:
# 138 "data//maps/MirrohPeak/scripts.pory"
	face_right
	step_end

# 140 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_10:
# 140 "data//maps/MirrohPeak/scripts.pory"
	face_left
	step_end

# 152 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_11:
# 152 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 152 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 179 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_0:
# 179 "data//maps/MirrohPeak/scripts.pory"
	face_left
# 179 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 185 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_1:
# 185 "data//maps/MirrohPeak/scripts.pory"
	face_right
# 185 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 186 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_2:
# 186 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 208 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_3:
# 208 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 209 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_4:
# 209 "data//maps/MirrohPeak/scripts.pory"
	fly_up
	step_end

# 233 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Cutscene_Movement_0:
# 233 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_up
	step_end

# 260 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Cutscene_Movement_1:
# 260 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 260 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 260 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 277 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Cutscene_Movement_2:
# 277 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 277 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 277 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 290 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Cutscene_Movement_3:
# 290 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 290 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 309 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Skip_Movement_0:
# 309 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
# 309 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 338 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Skip_Movement_1:
# 338 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 338 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 338 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 338 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 338 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 338 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 338 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 338 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 338 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 353 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Skip_Movement_2:
# 353 "data//maps/MirrohPeak/scripts.pory"
	face_up
# 353 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 367 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Skip_Movement_3:
# 367 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 367 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 401 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Skip_Movement_4:
# 401 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 401 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 401 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 401 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 401 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 401 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 401 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

MirrohPeak_NPC_1_Text_0:
# 12 "data//maps/MirrohPeak/scripts.pory"
	.string "You look exhausted! You'd better head\n"
	.string "to Winterlily Hollow - go right from here\l"
	.string "and enter the cave.$"

MirrohPeak_EventScript_Viniel_Text_0:
# 70 "data//maps/MirrohPeak/scripts.pory"
	.string "???$"

MirrohPeak_EventScript_Viniel_Text_1:
# 71 "data//maps/MirrohPeak/scripts.pory"
	.string "Come at me, you lousy grunts!\p"
	.string "You think I'm going to let the likes of\n"
	.string "you mess around in MY backyard?$"

MirrohPeak_EventScript_Viniel_Text_2:
# 76 "data//maps/MirrohPeak/scripts.pory"
	.string "Grunt$"

MirrohPeak_EventScript_Viniel_Text_3:
# 77 "data//maps/MirrohPeak/scripts.pory"
	.string "It's public space, Viniel! Didn't they\n"
	.string "teach you that at Gym Leader School?$"

MirrohPeak_EventScript_Viniel_Text_4:
# 81 "data//maps/MirrohPeak/scripts.pory"
	.string "Viniel$"

MirrohPeak_EventScript_Viniel_Text_5:
# 82 "data//maps/MirrohPeak/scripts.pory"
	.string "There IS no Gym Leader School!\n"
	.string "How stupid are you?$"

MirrohPeak_EventScript_Viniel_Text_6:
# 91 "data//maps/MirrohPeak/scripts.pory"
	.string "...yeah, we all knew that.\n"
	.string "I was just taunting you.$"

MirrohPeak_EventScript_Viniel_Text_7:
# 96 "data//maps/MirrohPeak/scripts.pory"
	.string "That was a terrible taunt!\n"
	.string "Didn't...didn't they teach you how to\l"
	.string "taunt at taunting school?$"

MirrohPeak_EventScript_Viniel_Text_8:
# 109 "data//maps/MirrohPeak/scripts.pory"
	.string "Who are you? Are you another grunt?\n"
	.string "C'mon, Manectric and I can take all six\l"
	.string "of you together!$"

MirrohPeak_EventScript_Viniel_Text_9:
# 114 "data//maps/MirrohPeak/scripts.pory"
	.string "Wait...isn't that the trainer who beat\n"
	.string "Melea in Silversun City?$"

MirrohPeak_EventScript_Viniel_Text_10:
# 119 "data//maps/MirrohPeak/scripts.pory"
	.string "Yeah, it is! And also Moxie at Mt. Ceram!\p"
	.string "Yikes - someone better tell go them!$"

MirrohPeak_EventScript_Viniel_Text_11:
# 124 "data//maps/MirrohPeak/scripts.pory"
	.string "I'm on it!$"

MirrohPeak_EventScript_Viniel_Text_12:
# 132 "data//maps/MirrohPeak/scripts.pory"
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
# 146 "data//maps/MirrohPeak/scripts.pory"
	.string "Manectric is raring to go! Now c'mon you\n"
	.string "cowards - I'm going to shock some sense\l"
	.string "into all four of you together!$"

MirrohPeak_GruntsVSViniel_GenericDialogue_Text_0:
# 163 "data//maps/MirrohPeak/scripts.pory"
	.string "Even with four of us, its so hard!\n"
	.string "Guess that's why he's a Gym Leader.$"

MirrohPeak_GruntsVSViniel_GenericDialogue_Text_1:
# 167 "data//maps/MirrohPeak/scripts.pory"
	.string "That all you got, grunts?$"

MirrohPeak_EventScript_Somber_Trigger_Text_0:
# 201 "data//maps/MirrohPeak/scripts.pory"
	.string "Skip cutscene?$"

MirrohPeak_EventScript_Somber_Cutscene_Text_0:
# 229 "data//maps/MirrohPeak/scripts.pory"
	.string "Melea$"

MirrohPeak_EventScript_Somber_Cutscene_Text_1:
# 230 "data//maps/MirrohPeak/scripts.pory"
	.string "Is it the child?$"

MirrohPeak_EventScript_Somber_Cutscene_Text_2:
# 235 "data//maps/MirrohPeak/scripts.pory"
	.string "Moxie$"

MirrohPeak_EventScript_Somber_Cutscene_Text_3:
# 236 "data//maps/MirrohPeak/scripts.pory"
	.string "I presume it is.$"

MirrohPeak_EventScript_Somber_Cutscene_Text_4:
# 243 "data//maps/MirrohPeak/scripts.pory"
	.string "Your tenacity is admirable, child.\p"
	.string "I must acknowledge that...despite your\n"
	.string "insufferable propensity for ruining\l"
	.string "plans which are none of your concern.\p"
	.string "After our defeats at your hand, Leader\n"
	.string "was most displeased with the two of us.\p"
	.string "Most displeased indeed...$"

MirrohPeak_EventScript_Somber_Cutscene_Text_5:
# 249 "data//maps/MirrohPeak/scripts.pory"
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
# 258 "data//maps/MirrohPeak/scripts.pory"
	.string "Go on, Moxie. Start the Dreamalyser.$"

MirrohPeak_EventScript_Somber_Cutscene_Text_7:
# 275 "data//maps/MirrohPeak/scripts.pory"
	.string "Melea, you go ahead.\n"
	.string "I'll deal with the child.$"

MirrohPeak_EventScript_Somber_Cutscene_Text_8:
# 293 "data//maps/MirrohPeak/scripts.pory"
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
# 301 "data//maps/MirrohPeak/scripts.pory"
	.string "I will make sure that you won't have the\n"
	.string "heart to come after us again!$"

MirrohPeak_EventScript_Somber_Skip_Text_1:
# 305 "data//maps/MirrohPeak/scripts.pory"
	.string "Insufferable!$"

MirrohPeak_EventScript_Somber_Skip_Text_2:
# 312 "data//maps/MirrohPeak/scripts.pory"
	.string "Argh! How could I have lost!$"

MirrohPeak_EventScript_Somber_Skip_Text_3:
# 316 "data//maps/MirrohPeak/scripts.pory"
	.string "One of you!\p"
	.string "...\p"
	.string "You there, wearing the Trekking Boots!$"

MirrohPeak_EventScript_Somber_Skip_Text_4:
# 320 "data//maps/MirrohPeak/scripts.pory"
	.string "Y-yes boss?$"

MirrohPeak_EventScript_Somber_Skip_Text_5:
# 324 "data//maps/MirrohPeak/scripts.pory"
	.string "Hurry up and go inside the dreamstone.\p"
	.string "Tell Melea what happened!\n"
	.string "She needs to be prepared.$"

MirrohPeak_EventScript_Somber_Skip_Text_6:
# 326 "data//maps/MirrohPeak/scripts.pory"
	.string "B-but boss, it's -$"

MirrohPeak_EventScript_Somber_Skip_Text_7:
# 333 "data//maps/MirrohPeak/scripts.pory"
	.string "No buts! Get moving - fast!\n"
	.string "Or I'll have you'll join Gabrielle!$"

MirrohPeak_EventScript_Somber_Skip_Text_8:
# 336 "data//maps/MirrohPeak/scripts.pory"
	.string "O-ok boss!$"

MirrohPeak_EventScript_Somber_Skip_Text_9:
# 345 "data//maps/MirrohPeak/scripts.pory"
	.string "But boss...what if I don't come back?$"

MirrohPeak_EventScript_Somber_Skip_Text_10:
# 350 "data//maps/MirrohPeak/scripts.pory"
	.string "Then we'll send roses to your family -\n"
	.string "now hurry up or I'll be forced to send\l"
	.string "roses right now!$"

MirrohPeak_EventScript_Somber_Skip_Text_11:
# 365 "data//maps/MirrohPeak/scripts.pory"
	.string "I know you want to stop Melea from\n"
	.string "getting the Ancient Terror.\p"
	.string "Let me do you a favour, {PLAYER}.\n"
	.string "I'll send you inside myself.\p"
	.string "There's only one exit out, and once\n"
	.string "Melea takes it, you'll be stuck forever!\p"
	.string "Hahaha!$"

MirrohPeak_EventScript_Somber_Skip_Text_12:
# 385 "data//maps/MirrohPeak/scripts.pory"
	.string "Now you lot! Let's get out of here!$"

MirrohPeak_EventScript_Somber_Skip_Text_13:
# 386 "data//maps/MirrohPeak/scripts.pory"
	.string "Grunts$"

MirrohPeak_EventScript_Somber_Skip_Text_14:
# 387 "data//maps/MirrohPeak/scripts.pory"
	.string "Y-yes boss!!$"

MirrohPeak_Grunt_A_Text_0:
# 465 "data//maps/MirrohPeak/scripts.pory"
	.string "You're too late! The bosses have\n"
	.string "already taken control of the\l"
	.string "dreamstone with the Dreamalyser!$"

MirrohPeak_Grunt_A_Text_1:
# 465 "data//maps/MirrohPeak/scripts.pory"
	.string "You're still too late!$"

MirrohPeak_Grunt_A_Text_2:
# 466 "data//maps/MirrohPeak/scripts.pory"
	.string "I wonder what'll happen once they\n"
	.string "activate the Dreamalyser...$"

MirrohPeak_Grunt_B_Text_0:
# 472 "data//maps/MirrohPeak/scripts.pory"
	.string "We're going to use the Dreamalyser to\n"
	.string "revive the Ancient Terror! Hahaha!$"

MirrohPeak_Grunt_B_Text_1:
# 472 "data//maps/MirrohPeak/scripts.pory"
	.string "You're playing dirty!$"

MirrohPeak_Grunt_B_Text_2:
# 473 "data//maps/MirrohPeak/scripts.pory"
	.string "Man, when will I become an admin?$"

MirrohPeak_Grunt_C_Text_0:
# 479 "data//maps/MirrohPeak/scripts.pory"
	.string "Nope. No way. You're not getting\n"
	.string "through us!$"

MirrohPeak_Grunt_C_Text_1:
# 479 "data//maps/MirrohPeak/scripts.pory"
	.string "Fine then!$"

MirrohPeak_Grunt_C_Text_2:
# 480 "data//maps/MirrohPeak/scripts.pory"
	.string "You may have beaten us, but you can't\n"
	.string "beat Melea and Moxie!$"

MirrohPeak_Grunt_D_Text_0:
# 486 "data//maps/MirrohPeak/scripts.pory"
	.string "Yeah! The Dreamalyser's up and running,\n"
	.string "and we're not letting you butt in!$"

MirrohPeak_Grunt_D_Text_1:
# 486 "data//maps/MirrohPeak/scripts.pory"
	.string "Go ahead!$"
