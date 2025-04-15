# 1 "data//maps/MtCeram_Peak/scripts.pory"

# 2 "data//maps/MtCeram_Peak/scripts.pory"
    .set LOCALID_DREAMSTONE, 1
# 3 "data//maps/MtCeram_Peak/scripts.pory"
    .set LOCALID_BOSS, 2
# 4 "data//maps/MtCeram_Peak/scripts.pory"
    .set LOCALID_GAB, 3

MtCeram_Peak_MapScripts::
	.byte 0


MtCeram_Peak_SaveGameTrigger::
# 10 "data//maps/MtCeram_Peak/scripts.pory"
	goto_if_set FLAG_MT_CERAM_DREAMSTONE, MtCeram_Peak_SaveGameTrigger_2
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	special SaveGame
# 15 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 16 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 18 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_TEMP_C, 1
	end

MtCeram_Peak_SaveGameTrigger_2:
	end


MtCeramPeak_MainEvent_Trigger::
# 24 "data//maps/MtCeram_Peak/scripts.pory"
	goto_if_set FLAG_MT_CERAM_DREAMSTONE, MtCeramPeak_MainEvent_Trigger_2
# 25 "data//maps/MtCeram_Peak/scripts.pory"
	lockall
# 26 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_0
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_0
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 32 "data//maps/MtCeram_Peak/scripts.pory"
	special SpawnCameraObject
# 33 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeramPeak_MainEvent_Trigger_Movement_1
# 34 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 35 "data//maps/MtCeram_Peak/scripts.pory"
	special RemoveCameraObject
# 37 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_1
# 38 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 40 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 41 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 42 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_2
# 43 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 47 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 3, MtCeramPeak_MainEvent_Trigger_Movement_3
# 48 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_4
# 49 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_5
# 50 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 52 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_3
# 53 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 56 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 57 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 62 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_4
# 63 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 64 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_6
# 65 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 66 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 67 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_5
# 68 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 69 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 70 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_6
# 71 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 72 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 73 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_7
# 74 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 75 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 76 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 77 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 78 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_8
# 79 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 80 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 81 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 82 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_9
# 83 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 84 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 85 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 86 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_10
# 87 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 90 "data//maps/MtCeram_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMPEAK_MOXIE, MtCeramPeak_MainEvent_Trigger_Text_11
# 97 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_12
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 99 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_8
# 100 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 101 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_13
# 102 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 103 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_4
# 104 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 105 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_14
# 106 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 107 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_7
# 108 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 109 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_15
# 110 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_9
# 112 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 113 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_6
# 114 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_6
# 115 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_6
# 116 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_6
# 117 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 119 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 121 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_16
# 122 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 123 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 124 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_17
# 125 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 128 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_10
# 129 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_10
# 130 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_10
# 131 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_10
# 132 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_10
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 135 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 137 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 138 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 139 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 140 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 141 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 144 "data//maps/MtCeram_Peak/scripts.pory"
	doweather
# 146 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_18
# 147 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 149 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 150 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 12
# 151 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 153 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 154 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 156 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_19
# 157 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_11
# 159 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_11
# 160 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_12
# 162 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 163 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_2
# 164 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_20
# 165 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 166 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_21
# 167 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_13
# 169 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 170 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_22
# 171 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 173 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_14
# 174 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_23
# 175 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 176 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 177 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 179 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 3
# 180 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 3
# 181 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 16
# 182 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 183 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 184 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 185 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 186 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 187 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 189 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_24
# 190 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 191 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 192 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 193 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 194 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 195 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 196 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 197 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 199 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 200 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 201 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_25
# 202 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 203 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 204 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 205 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 206 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 207 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 208 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 209 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 214 "data//maps/MtCeram_Peak/scripts.pory"
	setflag FLAG_MT_CERAM_DREAMSTONE
# 216 "data//maps/MtCeram_Peak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_2
# 219 "data//maps/MtCeram_Peak/scripts.pory"
	warp MAP_ANCIENT_CERAM, 57, 41
# 221 "data//maps/MtCeram_Peak/scripts.pory"
	releaseall
	end

MtCeramPeak_MainEvent_Trigger_2:
	end


# 29 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_0:
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 33 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_1:
# 33 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 40 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_2:
# 40 "data//maps/MtCeram_Peak/scripts.pory"
	face_down
	step_end

# 47 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_3:
# 47 "data//maps/MtCeram_Peak/scripts.pory"
	face_right
	step_end

# 48 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_4:
# 48 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 49 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_5:
# 49 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 49 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 64 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_6:
# 64 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 71 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_7:
# 71 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
	step_end

# 99 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_8:
# 99 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_down
	step_end

# 111 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_9:
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 128 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_10:
# 128 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 158 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_11:
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 161 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_12:
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	walk_left
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 168 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_13:
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 173 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_14:
# 173 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
# 173 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

MtCeramPeak_MainEvent_Trigger_Text_0:
# 26 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: So you broke through my grunts.\n"
	.string "Come here then.$"

MtCeramPeak_MainEvent_Trigger_Text_1:
# 37 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: A dreamstone. This is the first\n"
	.string "time I've ever seen one.$"

MtCeramPeak_MainEvent_Trigger_Text_2:
# 42 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Move. I want to see this trainers\n"
	.string "face.$"

MtCeramPeak_MainEvent_Trigger_Text_3:
# 52 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Now step up to me.$"

MtCeramPeak_MainEvent_Trigger_Text_4:
# 62 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Why, young trainer, have you been a\n"
	.string "thorn in my organisations side? What's\l"
	.string "in it for you?\p"
	.string "...\p"
	.string "So you're looking for Professor\n"
	.string "Tenebris. That explains everything.$"

MtCeramPeak_MainEvent_Trigger_Text_5:
# 67 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Young trainer, do you even know\n"
	.string "what the good professor was\l"
	.string "researching? Do you even know what a\l"
	.string "dreamstone is?\p"
	.string "A dreamstone is little but a triangular\n"
	.string "rock. At first sight. But it possesses a\l"
	.string "unique property. When Pokémon fall\l"
	.string "asleep, their past memories resurface.\l"
	.string "A dreamstone absorbs this.$"

MtCeramPeak_MainEvent_Trigger_Text_6:
# 70 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Fascinating stuff. This is what\n"
	.string "your dear professor was researching,\l"
	.string "child.\p"
	.string "How does this dreamstone work? What\n"
	.string "kind of memories can a dreamstone\l"
	.string "absorb?$"

MtCeramPeak_MainEvent_Trigger_Text_7:
# 73 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And she discovered something\n"
	.string "incredible!$"

MtCeramPeak_MainEvent_Trigger_Text_8:
# 78 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: That stone behind me contains the\n"
	.string "memories of hundreds of generations of\l"
	.string "Pokémon - all the way back to\l"
	.string "prehistoric times!$"

MtCeramPeak_MainEvent_Trigger_Text_9:
# 82 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Can you imagine child? Can you?!\n"
	.string "The potential of such an object? Even\l"
	.string "as pure energy, a dreamstone is\l"
	.string "overflowing! But there's more. So much\l"
	.string "more. What if we could reverse the\l"
	.string "process? Use the dreamstone to revive\l"
	.string "these memories? Such powerful Pokémon\l"
	.string "once roamed across Cormoria - wouldn't\l"
	.string "it be grand to have them do your\l"
	.string "bidding?$"

MtCeramPeak_MainEvent_Trigger_Text_10:
# 86 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: And if we get such power, there\n"
	.string "would be nothing stopping Team Somber\l"
	.string "from having absolute control! A noble\l"
	.string "goal, is it not, {PLAYER}?\p"
	.string "And you! You dare to get in our way, time\n"
	.string "and again! No more!\p"
	.string "MOXIE: I, MOXIE, Head of the Team\n"
	.string "Somber Research Wing, will end your\l"
	.string "meddling once and for all!$"

MtCeramPeak_MainEvent_Trigger_Text_11:
# 90 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I can't believe it!$"

MtCeramPeak_MainEvent_Trigger_Text_12:
# 97 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Argh! Impossible! How could I\n"
	.string "have lost!$"

MtCeramPeak_MainEvent_Trigger_Text_13:
# 101 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Fine! Whatever! I don't have\n"
	.string "time to waste. We need the dreamstone\l"
	.string "and I will get this one no matter what!$"

MtCeramPeak_MainEvent_Trigger_Text_14:
# 105 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Gabrielle! You worthless fool! Be\n"
	.string "of use for a change and go grab the\l"
	.string "dreamstone. Hurry up before {PLAYER}\l"
	.string "gets it!$"

MtCeramPeak_MainEvent_Trigger_Text_15:
# 109 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Y-yes boss!$"

MtCeramPeak_MainEvent_Trigger_Text_16:
# 121 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Ugh! It's not moving!\p"
	.string "MOXIE: You idiot! Put some backbone in\n"
	.string "it!\p"
	.string "...\p"
	.string "GABRIELLE: Boss?\p"
	.string "MOXIE: What?\p"
	.string "GABRIELLE: ...I'm stuck. I can't\n"
	.string "move...I'm stuck to the stone!$"

MtCeramPeak_MainEvent_Trigger_Text_17:
# 124 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Boss...I feel sick. What's\n"
	.string "happening? Is this supposed to\l"
	.string "happen?\p"
	.string "MOXIE: You must've messed it up!$"

MtCeramPeak_MainEvent_Trigger_Text_18:
# 146 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Is that an earthquake? It'll\n"
	.string "trigger a volcanic eruption! Gabrielle,\l"
	.string "you - aaargh! You've released the\l"
	.string "dreamstone's energy somehow!\p"
	.string "GABRIELLE: I just did what you told me\n"
	.string "to do! I wanted to be useful!\p"
	.string "MOXIE: And now you've doomed us all!$"

MtCeramPeak_MainEvent_Trigger_Text_19:
# 156 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: This is bad...come on you two!\n"
	.string "Let's get out of here before this\l"
	.string "mountain erupts!$"

MtCeramPeak_MainEvent_Trigger_Text_20:
# 164 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Boss - what about me?$"

MtCeramPeak_MainEvent_Trigger_Text_21:
# 166 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Take care Gabrielle. I wish you\n"
	.string "had done more with your life.$"

MtCeramPeak_MainEvent_Trigger_Text_22:
# 170 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: He-he just left me...$"

MtCeramPeak_MainEvent_Trigger_Text_23:
# 174 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: I'm still stuck! H-hey,\n"
	.string "{PLAYER} - please, you have to help\l"
	.string "me.$"

MtCeramPeak_MainEvent_Trigger_Text_24:
# 189 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: W-what's happening?$"

MtCeramPeak_MainEvent_Trigger_Text_25:
# 201 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Ahhh!!!$"
