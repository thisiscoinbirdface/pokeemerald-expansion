# 1 "data//maps/AncientMirroh_Tower_4F/scripts.pory"

# 2 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
    .set LOCALID_KOHLA, 5
# 3 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
    .set LOCALID_MELEA, 2

AncientMirroh_Tower_4F_MapScripts::
# 7 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientMirroh_Tower_4F_SetHoleWarp
	.byte 0


AncientMirroh_Tower_4F_SetHoleWarp::
# 11 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 12 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setholewarp MAP_ANCIENT_MIRROH_TOWER_3F
	end


AncientMirroh_Tower_4F_MainTrigger::
# 17 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_KORAIDON, AncientMirroh_Tower_4F_MainTrigger_2
# 19 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	lockall
# 21 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 22 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_Tower_4F_MainTrigger_Movement_0
# 23 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 26 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_HEAVYDUTYBOOTS
# 27 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	removeobject 6
# 29 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special SpawnCameraObject
# 30 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tower_4F_MainTrigger_Movement_1
# 31 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 32 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special RemoveCameraObject
# 34 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 36 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_Tower_4F_MainTrigger_Movement_2
# 37 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 38 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 39 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_0
# 40 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_1
# 42 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_3
# 43 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 45 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_2
# 46 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_3
# 47 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 48 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 50 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 52 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 53 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 55 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_2
# 56 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_4
# 57 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 58 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 60 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_5
# 61 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 62 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 8
# 63 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_2
# 64 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_5
# 65 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 68 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_Tower_4F_MainTrigger_Movement_6
# 69 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 70 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 71 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_0
# 72 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_6
# 73 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 75 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_6
# 76 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 77 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_2
# 78 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_7
# 79 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 81 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_6
# 82 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 83 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 84 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_8
# 85 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_9
# 86 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 88 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8004, 2
# 89 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8005, 2
# 90 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 91 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 92 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special ShakeCamera
# 93 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_3
# 94 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 95 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_2
# 96 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_10
# 97 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 98 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 101 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	playmoncry SPECIES_KORAIDON, CRY_MODE_NORMAL
# 102 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmoncry
# 103 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 104 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_7
# 105 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_Tower_4F_MainTrigger_Movement_7
# 106 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_7
# 107 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_Tower_4F_MainTrigger_Movement_7
# 108 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 110 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 60
# 112 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_8
# 113 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_11
# 114 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 116 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8004, 2
# 117 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8005, 2
# 118 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 119 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 120 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special ShakeCamera
# 121 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	playmoncry SPECIES_KORAIDON, CRY_MODE_NORMAL
# 122 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmoncry
# 124 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 125 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_2
# 126 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 127 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 128 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_2
# 129 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_12
# 130 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 131 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 132 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 133 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_2
# 134 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_13
# 135 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 137 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_8
# 138 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 139 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 140 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_8
# 141 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_14
# 142 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 144 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_9
# 145 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 146 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 148 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_10
# 149 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_10
# 150 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 151 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 153 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_2
# 154 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 155 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_2
# 156 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_15
# 157 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 159 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 160 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	playmoncry SPECIES_KORAIDON, CRY_MODE_NORMAL
# 161 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmoncry
# 162 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	removeobject 4
# 163 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 166 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 167 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 168 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 169 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 170 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_2
# 171 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_16
# 172 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 173 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_10
# 174 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_1
# 175 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 176 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 177 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 178 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 179 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 181 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_2
# 182 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_17
# 183 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 184 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 8
# 185 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_8
# 186 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_18
# 188 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_2
# 189 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_19
# 190 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 192 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	clearflag FLAG_ANCIENT_MIRROH_HEAVYDUTYBOOTS
# 193 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	addobject 6
# 194 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 195 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_1
# 196 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 197 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 200 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 201 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	removeobject LOCALID_MELEA
# 202 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	removeobject 3
# 203 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	removeobject 1
# 204 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 207 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special SpawnCameraObject
# 208 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tower_4F_MainTrigger_Movement_11
# 209 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 210 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special RemoveCameraObject
# 213 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_Tower_4F_MainTrigger_Movement_12
# 214 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_Tower_4F_MainTrigger_Movement_13
# 215 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 216 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	speakername AncientMirroh_Tower_4F_MainTrigger_Text_0
# 217 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_20
# 218 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 220 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 221 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_Tower_4F_MainTrigger_Movement_14
# 222 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 223 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	removeobject LOCALID_KOHLA
# 227 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_KORAIDON
# 228 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	releaseall
	end

AncientMirroh_Tower_4F_MainTrigger_2:
	end


# 22 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_0:
# 22 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_up
# 22 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_up
# 22 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_up
# 22 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_up
	step_end

# 30 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_1:
# 30 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_up
# 30 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_up
	step_end

# 36 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_2:
# 36 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	jump_in_place_up
# 36 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	emote_exclamation_mark
	step_end

# 42 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_3:
# 42 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	emote_exclamation_mark
	step_end

# 52 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_4:
# 52 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	face_down
	step_end

# 60 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_5:
# 60 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	jump_in_place_down
	step_end

# 68 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_6:
# 68 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	emote_question_mark
	step_end

# 104 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_7:
# 104 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	face_up
# 104 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	emote_exclamation_mark
	step_end

# 137 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_8:
# 137 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	jump_in_place_up
	step_end

# 144 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_9:
# 144 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_up
# 144 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	face_right
	step_end

# 148 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_10:
# 148 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	face_up
	step_end

# 208 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_11:
# 208 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
# 208 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
	step_end

# 213 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_12:
# 213 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	jump_in_place_left
	step_end

# 214 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_13:
# 214 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	face_right
	step_end

# 221 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_14:
# 221 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
# 221 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_left
# 221 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
# 221 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
# 221 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
# 221 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
	step_end

AncientMirroh_Tower_4F_MainTrigger_Text_0:
# 39 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Kohla$"

AncientMirroh_Tower_4F_MainTrigger_Text_1:
# 40 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Wait right there, Team Somber! The Ace\n"
	.string "Rookie is here now, so stop your\l"
	.string "dastardly -$"

AncientMirroh_Tower_4F_MainTrigger_Text_2:
# 45 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Melea$"

AncientMirroh_Tower_4F_MainTrigger_Text_3:
# 46 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Shh! It's sleeping. If you wake it up,\n"
	.string "we'll all be goners!$"

AncientMirroh_Tower_4F_MainTrigger_Text_4:
# 56 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Beautiful, isn't it? How incredible it is\n"
	.string "that we're here now, today.\p"
	.string "Your Professor Tenebris unlocked the\n"
	.string "latent potential within the dreams and\l"
	.string "memories of Pokémon today and created\l"
	.string "a way to visit the past!\p"
	.string "It's like science fiction...LEADER was\n"
	.string "right all along...$"

AncientMirroh_Tower_4F_MainTrigger_Text_5:
# 64 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "But your stupid Professor had no idea\n"
	.string "what she'd uncovered! Stuck in her\l"
	.string "books and research, she didn't have a\l"
	.string "mind capable of understanding what\l"
	.string "could be done with her discovery.\p"
	.string "But there were other minds who did\n"
	.string "understand the greatness, the\l"
	.string "potential, the power!\p"
	.string "And that's why Team Somber exists.$"

AncientMirroh_Tower_4F_MainTrigger_Text_6:
# 72 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "I don't get it! What do you people even\n"
	.string "plan to do?$"

AncientMirroh_Tower_4F_MainTrigger_Text_7:
# 78 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Us? What do we want? Power, obviously.\n"
	.string "You're asking the wrong question.\p"
	.string "Forgivable, considering your age.\p"
	.string "The real question you should be\n"
	.string "asking...is why.$"

AncientMirroh_Tower_4F_MainTrigger_Text_8:
# 84 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Grunt$"

AncientMirroh_Tower_4F_MainTrigger_Text_9:
# 85 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Y-yeah, boss! Even I wanna know why.$"

AncientMirroh_Tower_4F_MainTrigger_Text_10:
# 96 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "SILENCE!\p"
	.string "How dare you interrupt me?$"

AncientMirroh_Tower_4F_MainTrigger_Text_11:
# 113 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Uh...boss? I think we woke it up...$"

AncientMirroh_Tower_4F_MainTrigger_Text_12:
# 129 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "We've got to hurry! I wasted too much\n"
	.string "time talking to you two.$"

AncientMirroh_Tower_4F_MainTrigger_Text_13:
# 134 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "GRUNT! MASTER BALL!$"

AncientMirroh_Tower_4F_MainTrigger_Text_14:
# 141 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Y-yes boss! Right here boss!\p"
	.string "...\p"
	.string "These Trekking Boots are making it hard\n"
	.string "to move...$"

AncientMirroh_Tower_4F_MainTrigger_Text_15:
# 156 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Come, Ancient Terror! Let Team Somber\n"
	.string "show you the future!$"

AncientMirroh_Tower_4F_MainTrigger_Text_16:
# 171 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "And now it's time to bid adieu! I hope\n"
	.string "you enjoy your time here in Ancient\l"
	.string "Cormoria - because you'll never leave!\p"
	.string "Hahaha!$"

AncientMirroh_Tower_4F_MainTrigger_Text_17:
# 182 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "What are you doing?!$"

AncientMirroh_Tower_4F_MainTrigger_Text_18:
# 186 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Boss, my Trekking Boots got stuck on\n"
	.string "these cracks!$"

AncientMirroh_Tower_4F_MainTrigger_Text_19:
# 189 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "Hurry, idiot! Toss those Trekking Boots\n"
	.string "aside!$"

AncientMirroh_Tower_4F_MainTrigger_Text_20:
# 217 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "They got away! We've got to find a way\n"
	.string "back somehow...but they took the\l"
	.string "dreamstone out!\p"
	.string "...\p"
	.string "But since I came separately, there must\n"
	.string "be another dreamstone somewhere!\p"
	.string "I'm going to go look for it, so you'd\n"
	.string "better hurry up, {PLAYER}!$"
