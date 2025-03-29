# 1 "data//maps/MirrohPeak/scripts.pory"

# 2 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_MOXIE, 4
# 3 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_MELEA, 14
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
	msgbox MirrohPeak_EventScript_Viniel_Text_6
# 90 "data//maps/MirrohPeak/scripts.pory"
	release
# 91 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_4
# 92 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_7
# 93 "data//maps/MirrohPeak/scripts.pory"
	release
# 94 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_5
# 95 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 96 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_8
# 97 "data//maps/MirrohPeak/scripts.pory"
	release
# 98 "data//maps/MirrohPeak/scripts.pory"
	applymovement 19, MirrohPeak_EventScript_Viniel_Movement_6
# 99 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 100 "data//maps/MirrohPeak/scripts.pory"
	removeobject 19
# 102 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_3
# 103 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_9
# 104 "data//maps/MirrohPeak/scripts.pory"
	release
# 105 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 106 "data//maps/MirrohPeak/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 107 "data//maps/MirrohPeak/scripts.pory"
	applymovement 11, MirrohPeak_EventScript_Viniel_Movement_7
# 108 "data//maps/MirrohPeak/scripts.pory"
	applymovement 14, MirrohPeak_EventScript_Viniel_Movement_8
# 109 "data//maps/MirrohPeak/scripts.pory"
	applymovement 15, MirrohPeak_EventScript_Viniel_Movement_9
# 110 "data//maps/MirrohPeak/scripts.pory"
	applymovement 17, MirrohPeak_EventScript_Viniel_Movement_9
# 111 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_VINIEL, MirrohPeak_EventScript_Viniel_Movement_10
# 112 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_AMPHAROS, MirrohPeak_EventScript_Viniel_Movement_0
# 113 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 114 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 116 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Viniel_Text_10
# 117 "data//maps/MirrohPeak/scripts.pory"
	release
# 119 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_VINIEL_CUTSCENE
# 122 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


MirrohPeak_EventScript_Somber_Trigger::
# 127 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, MirrohPeak_EventScript_Somber_Trigger_2
# 129 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 130 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 133 "data//maps/MirrohPeak/scripts.pory"
	applymovement 5, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 134 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger1_Movement_0
# 135 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 136 "data//maps/MirrohPeak/scripts.pory"
	applymovement 6, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 137 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Viniel_Trigger1_Movement_0
# 138 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 139 "data//maps/MirrohPeak/scripts.pory"
	applymovement 2, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 140 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 141 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 142 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 143 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 144 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 146 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 147 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Viniel_Trigger1_Movement_0
# 148 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 149 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 150 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 153 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Viniel_Movement_3
# 154 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 155 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 156 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_0
# 157 "data//maps/MirrohPeak/scripts.pory"
	release
# 158 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 159 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 160 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 161 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_1
# 162 "data//maps/MirrohPeak/scripts.pory"
	release
# 163 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 165 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 166 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 167 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_2
# 168 "data//maps/MirrohPeak/scripts.pory"
	release
# 169 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 170 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 171 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 172 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_3
# 173 "data//maps/MirrohPeak/scripts.pory"
	release
# 176 "data//maps/MirrohPeak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 177 "data//maps/MirrohPeak/scripts.pory"
	doweather
# 179 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 180 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_4
# 181 "data//maps/MirrohPeak/scripts.pory"
	release
# 182 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 183 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 184 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 187 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 188 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 189 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 190 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 191 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 192 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 193 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 196 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_5
# 197 "data//maps/MirrohPeak/scripts.pory"
	release
# 198 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 199 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 200 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 201 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MELEA
# 202 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 203 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 206 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 207 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 208 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 209 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 210 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_7
# 211 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 212 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_6
# 213 "data//maps/MirrohPeak/scripts.pory"
	release
# 216 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHPEAK_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Text_7
# 219 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_8
# 220 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 221 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_8
# 222 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 223 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 224 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_9
# 225 "data//maps/MirrohPeak/scripts.pory"
	release
# 226 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 227 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_10
# 228 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_2
# 229 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 230 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_11
# 231 "data//maps/MirrohPeak/scripts.pory"
	release
# 232 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_9
# 233 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 234 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_8
# 235 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 236 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Viniel_Movement_7
# 237 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_12
# 238 "data//maps/MirrohPeak/scripts.pory"
	release
# 239 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_10
# 240 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 241 "data//maps/MirrohPeak/scripts.pory"
	removeobject 3
# 242 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 243 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Viniel_Movement_7
# 244 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 245 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_13
# 246 "data//maps/MirrohPeak/scripts.pory"
	release
# 247 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_11
# 248 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 251 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 252 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 253 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 254 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 255 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 256 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 257 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 260 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_MOXIE_DEFEATED
# 263 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 264 "data//maps/MirrohPeak/scripts.pory"
	warp MAP_ANCIENT_MIRROH, 10, 10
# 265 "data//maps/MirrohPeak/scripts.pory"
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

# 94 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_5:
# 94 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
	step_end

# 98 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_6:
# 98 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_left
# 98 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
# 98 "data//maps/MirrohPeak/scripts.pory"
	walk_fast_up
	step_end

# 107 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_7:
# 107 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 108 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_8:
# 108 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 109 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_9:
# 109 "data//maps/MirrohPeak/scripts.pory"
	face_right
	step_end

# 111 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Viniel_Movement_10:
# 111 "data//maps/MirrohPeak/scripts.pory"
	face_left
	step_end

# 133 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_0:
# 133 "data//maps/MirrohPeak/scripts.pory"
	face_left
# 133 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 139 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_1:
# 139 "data//maps/MirrohPeak/scripts.pory"
	face_right
# 139 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 140 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_2:
# 140 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 159 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_3:
# 159 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_up
	step_end

# 182 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_4:
# 182 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 182 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 182 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 198 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_5:
# 198 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 198 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 198 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 207 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_6:
# 207 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 210 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_7:
# 210 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 210 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 219 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_8:
# 219 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
# 219 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 232 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_9:
# 232 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 232 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 232 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 232 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 232 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 232 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 232 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 232 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 232 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 239 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_10:
# 239 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
# 239 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 247 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_11:
# 247 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 247 "data//maps/MirrohPeak/scripts.pory"
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
	.string "Didn't they teach you how to taunt at\l"
	.string "taunting school?$"

MirrohPeak_EventScript_Viniel_Text_5:
# 86 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: Who are you? Are you another\n"
	.string "grunt? C'mon, AMPHAROS and I can take\l"
	.string "all six of you together!$"

MirrohPeak_EventScript_Viniel_Text_6:
# 89 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Wait...isn't that the trainer who\n"
	.string "beat MELEA in SILVERSUN CITY?$"

MirrohPeak_EventScript_Viniel_Text_7:
# 92 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Yeah, it is! And also MOXIE at MT\n"
	.string "CERAM!\p"
	.string "GRUNT: Yikes - someone better tell go\n"
	.string "them!$"

MirrohPeak_EventScript_Viniel_Text_8:
# 96 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: I'm on it!$"

MirrohPeak_EventScript_Viniel_Text_9:
# 103 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: So you're an enemy of theirs,\n"
	.string "then, are you?\p"
	.string "VINIEL: An enemy of an enemy is a\n"
	.string "friend!\p"
	.string "VINIEL: Trainer, these Team Somber\n"
	.string "people suddenly came out of nowhere\l"
	.string "and sstarted harrassing the people of\l"
	.string "WINTERLILY HOLLOW. So I'm out here\l"
	.string "beating them down, one by one! I can\l"
	.string "take this lot myself - you go on ahead!\l"
	.string "These guys are upto no good. The peak\l"
	.string "is right ahead - hurry up!$"

MirrohPeak_EventScript_Viniel_Text_10:
# 116 "data//maps/MirrohPeak/scripts.pory"
	.string "VINIEL: AMPHAROS is raring to go! Now\n"
	.string "c'mon you cowards - I'm going to shock\l"
	.string "some sense into all four of you\l"
	.string "together!$"

MirrohPeak_EventScript_Somber_Trigger_Text_0:
# 156 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Is it the child?$"

MirrohPeak_EventScript_Somber_Trigger_Text_1:
# 161 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: I presume it is.$"

MirrohPeak_EventScript_Somber_Trigger_Text_2:
# 167 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Your tenacity is admirable,\n"
	.string "child.\p"
	.string "I must acknowledge that...despite your\n"
	.string "insufferable propensity for ruining\l"
	.string "plans which are none of your concern.$"

MirrohPeak_EventScript_Somber_Trigger_Text_3:
# 172 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Beyond the dreamstone's gate\n"
	.string "lie some of the most powerful {PKMN} this\l"
	.string "world has ever seen. Long gone, extinct\l"
	.string "today. In the hands of people with\l"
	.string "purpose, it can be used to do great\l"
	.string "things...$"

MirrohPeak_EventScript_Somber_Trigger_Text_4:
# 180 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Go on, MOXIE. Start the\n"
	.string "Dreamalyser.$"

MirrohPeak_EventScript_Somber_Trigger_Text_5:
# 196 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: MELEA, you go ahead. I'll deal\n"
	.string "with the child.$"

MirrohPeak_EventScript_Somber_Trigger_Text_6:
# 212 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: My dear colleague has gone\n"
	.string "ahead, into ANCIENT CORMORIA...you've\l"
	.string "been there, no? I wonder what it looks\l"
	.string "like. MELEA will tell me about it when\l"
	.string "she returns.\p"
	.string "...\p"
	.string "MOXIE: Child, we are at the cusp of\n"
	.string "attaining our goal. The Ancient Wonders\l"
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
# 216 "data//maps/MirrohPeak/scripts.pory"
	.string "Insufferable!$"

MirrohPeak_EventScript_Somber_Trigger_Text_8:
# 221 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Argh! How could I have lost!$"

MirrohPeak_EventScript_Somber_Trigger_Text_9:
# 224 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: One of you!$"

MirrohPeak_EventScript_Somber_Trigger_Text_10:
# 227 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Y-yes boss?\p"
	.string "MOXIE: Hurry up and go inside the\n"
	.string "dreamstone. Tell MELEA what happened!\l"
	.string "She needs to be prepared.\p"
	.string "GRUNT: B-but boss, it's -$"

MirrohPeak_EventScript_Somber_Trigger_Text_11:
# 230 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: No buts! Get moving, fast!\p"
	.string "GRUNT: O-ok boss!$"

MirrohPeak_EventScript_Somber_Trigger_Text_12:
# 237 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: But boss...what if I don't come\n"
	.string "back?\p"
	.string "MOXIE: Then we'll send roses to your\n"
	.string "family - now hurry up or I'll be forced\l"
	.string "to send roses right now!$"

MirrohPeak_EventScript_Somber_Trigger_Text_13:
# 245 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: I know you're going to chase\n"
	.string "MELEA and try to stop her from getting\l"
	.string "the Ancient Wonders.\p"
	.string "Let me do you a favour, {PLAYER}. I'll\n"
	.string "send you inside myself. There's only one\l"
	.string "exit out, and once MELEA takes that\l"
	.string "exit, you'll be stuck there forever!\p"
	.string "Hahaha!$"
