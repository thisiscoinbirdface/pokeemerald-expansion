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
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_0
# 41 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_3
# 42 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 44 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_1
# 45 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 46 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 48 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 50 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 51 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 53 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_2
# 54 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 55 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 57 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_5
# 58 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 59 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_3
# 60 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 63 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_Tower_4F_MainTrigger_Movement_6
# 64 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 65 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 66 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_4
# 67 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 69 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_6
# 70 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 71 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_5
# 72 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 74 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_6
# 75 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 76 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 77 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_6
# 78 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 80 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8004, 2
# 81 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8005, 2
# 82 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 83 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 84 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special ShakeCamera
# 85 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_3
# 86 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 87 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_7
# 88 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 89 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 92 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	playmoncry SPECIES_KORAIDON, CRY_MODE_NORMAL
# 93 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmoncry
# 94 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 95 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_7
# 96 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_Tower_4F_MainTrigger_Movement_7
# 97 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_7
# 98 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_Tower_4F_MainTrigger_Movement_7
# 99 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 101 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 60
# 103 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_8
# 104 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 106 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8004, 2
# 107 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8005, 2
# 108 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 109 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 110 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special ShakeCamera
# 111 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	playmoncry SPECIES_KORAIDON, CRY_MODE_NORMAL
# 112 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmoncry
# 114 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 115 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_2
# 116 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 117 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 118 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_9
# 119 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 120 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 121 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 122 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_10
# 123 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 125 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_8
# 126 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 127 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 128 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_11
# 129 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 131 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_9
# 132 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 133 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 135 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_10
# 136 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_10
# 137 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 138 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 140 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_2
# 141 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 142 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_12
# 143 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 145 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 146 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	playmoncry SPECIES_KORAIDON, CRY_MODE_NORMAL
# 147 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmoncry
# 148 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	removeobject 4
# 149 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 152 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 153 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 154 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 155 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 156 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_13
# 157 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 158 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_10
# 159 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_1
# 160 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 161 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 162 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_MELEA, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 163 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 164 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 166 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_14
# 167 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 169 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	clearflag FLAG_ANCIENT_MIRROH_HEAVYDUTYBOOTS
# 170 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	addobject 6
# 171 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 30
# 172 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement 3, AncientMirroh_Tower_4F_MainTrigger_Movement_1
# 173 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 174 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	delay 16
# 177 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 178 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	removeobject LOCALID_MELEA
# 179 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	removeobject 3
# 180 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	removeobject 1
# 181 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 184 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special SpawnCameraObject
# 185 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tower_4F_MainTrigger_Movement_11
# 186 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 187 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	special RemoveCameraObject
# 190 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_Tower_4F_MainTrigger_Movement_12
# 191 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_Tower_4F_MainTrigger_Movement_13
# 192 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 193 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	msgbox AncientMirroh_Tower_4F_MainTrigger_Text_15
# 194 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	release
# 196 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AncientMirroh_Tower_4F_MainTrigger_Movement_4
# 197 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	applymovement LOCALID_KOHLA, AncientMirroh_Tower_4F_MainTrigger_Movement_14
# 198 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	waitmovement 0
# 199 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	removeobject LOCALID_KOHLA
# 203 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_KORAIDON
# 204 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
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

# 41 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_3:
# 41 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	emote_exclamation_mark
	step_end

# 50 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_4:
# 50 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	face_down
	step_end

# 57 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_5:
# 57 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	jump_in_place_down
	step_end

# 63 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_6:
# 63 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	emote_question_mark
	step_end

# 95 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_7:
# 95 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	face_up
# 95 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	emote_exclamation_mark
	step_end

# 125 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_8:
# 125 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	jump_in_place_up
	step_end

# 131 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_9:
# 131 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_up
# 131 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	face_right
	step_end

# 135 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_10:
# 135 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	face_up
	step_end

# 185 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_11:
# 185 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
# 185 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
	step_end

# 190 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_12:
# 190 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	jump_in_place_left
	step_end

# 191 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_13:
# 191 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	face_right
	step_end

# 197 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
AncientMirroh_Tower_4F_MainTrigger_Movement_14:
# 197 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
# 197 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_left
# 197 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
# 197 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
# 197 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
# 197 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	walk_down
	step_end

AncientMirroh_Tower_4F_MainTrigger_Text_0:
# 39 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "KOHLA: Wait right there, Team Somber!\n"
	.string "The ACE ROOKIE is here now, so stop\l"
	.string "your dastardly -$"

AncientMirroh_Tower_4F_MainTrigger_Text_1:
# 44 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: Shh! It's sleeping. If you wake\n"
	.string "it up, we'll all be goners!$"

AncientMirroh_Tower_4F_MainTrigger_Text_2:
# 53 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: Beautiful, isn't it? How\n"
	.string "incredible it is that we're here now,\l"
	.string "today.\p"
	.string "MELEA: Your Professor Tenebris\n"
	.string "unlocked the latent potential within\l"
	.string "the dreams and memories of Pokémon\l"
	.string "today and created a way to visit the\l"
	.string "past!\p"
	.string "MELEA: It's like science\n"
	.string "fiction...LEADER was right all along...$"

AncientMirroh_Tower_4F_MainTrigger_Text_3:
# 59 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: But your stupid Professor had\n"
	.string "no idea what she'd uncovered! Stuck in\l"
	.string "her books and research, she didn't have\l"
	.string "a mind capable of understanding what\l"
	.string "could be done with her discovery.\p"
	.string "MELEA: But there were other minds who\n"
	.string "did understand the greatness, the\l"
	.string "potential, the power!\p"
	.string "And that's why Team Somber exists.$"

AncientMirroh_Tower_4F_MainTrigger_Text_4:
# 66 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "KOHLA: I don't get it! What do you\n"
	.string "people even plan to do?$"

AncientMirroh_Tower_4F_MainTrigger_Text_5:
# 71 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: Us? What do we want? Power,\n"
	.string "obviously. You're asking the wrong\l"
	.string "question.\p"
	.string "MELEA: Forgivable, considering your\n"
	.string "age.\p"
	.string "MELEA: The real question you should be\n"
	.string "asking...is why.$"

AncientMirroh_Tower_4F_MainTrigger_Text_6:
# 77 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "GRUNT: Y-yeah, boss! Even I wanna know\n"
	.string "why.$"

AncientMirroh_Tower_4F_MainTrigger_Text_7:
# 87 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: SILENCE!\p"
	.string "MELEA: How dare you interrupt me?$"

AncientMirroh_Tower_4F_MainTrigger_Text_8:
# 103 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "GRUNT: Uh...boss? I think we woke it up...$"

AncientMirroh_Tower_4F_MainTrigger_Text_9:
# 118 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: We've got to hurry! I wasted too\n"
	.string "much time talking to you two.$"

AncientMirroh_Tower_4F_MainTrigger_Text_10:
# 122 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: GRUNT! MASTER BALL!$"

AncientMirroh_Tower_4F_MainTrigger_Text_11:
# 128 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "GRUNT: Y-yes boss! Right here boss!\p"
	.string "GRUNT: These HEAVY DUTY BOOTS are\n"
	.string "making it hard to move...$"

AncientMirroh_Tower_4F_MainTrigger_Text_12:
# 142 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: Come, ANCIENT TERROR! Let Team\n"
	.string "Somber show you the future!$"

AncientMirroh_Tower_4F_MainTrigger_Text_13:
# 156 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: And now it's time to bid adieu! I\n"
	.string "hope you enjoy your time here in\l"
	.string "Ancient Cormoria - because you'll never\l"
	.string "leave!\p"
	.string "Hahaha!$"

AncientMirroh_Tower_4F_MainTrigger_Text_14:
# 166 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "MELEA: What are you doing?!\p"
	.string "GRUNT: Boss, my HEAVY DUTY BOOTS got\n"
	.string "stuck on these cracks!\p"
	.string "MELEA: Hurry, idiot! Toss those boots\n"
	.string "aside!$"

AncientMirroh_Tower_4F_MainTrigger_Text_15:
# 193 "data//maps/AncientMirroh_Tower_4F/scripts.pory"
	.string "KOHLA: they got away! We've got to find\n"
	.string "a way back somehow...but they took the\l"
	.string "dreamstone out!\p"
	.string "...\p"
	.string "KOHLA: You're saying that since I came\n"
	.string "separately, there must be another\l"
	.string "dreamstone somewhere? Then what are\l"
	.string "we waiting for?\p"
	.string "KOHLA: I'm going to go look for it, so\n"
	.string "you'd better hurry up, {PLAYER}!$"
