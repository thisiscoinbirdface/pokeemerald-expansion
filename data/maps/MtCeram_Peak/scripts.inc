# 1 "data//maps/MtCeram_Peak/scripts.pory"

# 2 "data//maps/MtCeram_Peak/scripts.pory"
    .set LOCALID_DREAMSTONE, 1
# 3 "data//maps/MtCeram_Peak/scripts.pory"
    .set LOCALID_BOSS, 2
# 4 "data//maps/MtCeram_Peak/scripts.pory"
    .set LOCALID_GAB, 3

MtCeram_Peak_MapScripts::
	.byte 0


MtCeramPeak_MainEvent_Trigger::
# 11 "data//maps/MtCeram_Peak/scripts.pory"
	goto_if_set FLAG_MT_CERAM_DREAMSTONE, MtCeramPeak_MainEvent_Trigger_2
# 12 "data//maps/MtCeram_Peak/scripts.pory"
	lockall
# 13 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_0
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 16 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_0
# 17 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 19 "data//maps/MtCeram_Peak/scripts.pory"
	special SpawnCameraObject
# 20 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtCeramPeak_MainEvent_Trigger_Movement_1
# 21 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 22 "data//maps/MtCeram_Peak/scripts.pory"
	special RemoveCameraObject
# 24 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_1
# 25 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 28 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_2
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 34 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 3, MtCeramPeak_MainEvent_Trigger_Movement_3
# 35 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_4
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_5
# 37 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 39 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_3
# 40 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 43 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 44 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 49 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_4
# 50 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 51 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_6
# 52 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 53 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 54 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_5
# 55 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 56 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 57 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_6
# 58 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 59 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 60 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_7
# 61 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 62 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 63 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 64 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 65 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_8
# 66 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 67 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 68 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 69 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_9
# 70 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 71 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_2
# 72 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 73 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_10
# 74 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 77 "data//maps/MtCeram_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMPEAK_MOXIE, MtCeramPeak_MainEvent_Trigger_Text_11
# 84 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_12
# 85 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 86 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_8
# 87 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 88 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_13
# 89 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 90 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_4
# 91 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 92 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_14
# 93 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 94 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_7
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 96 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_15
# 97 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_9
# 99 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 100 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_6
# 101 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_6
# 102 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_6
# 103 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_6
# 104 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 106 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 108 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_16
# 109 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 110 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_17
# 112 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 115 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_10
# 116 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_10
# 117 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_10
# 118 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_10
# 119 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_10
# 120 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 122 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 123 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 124 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 125 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 126 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 127 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 128 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 130 "data//maps/MtCeram_Peak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 131 "data//maps/MtCeram_Peak/scripts.pory"
	doweather
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_18
# 134 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 135 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 137 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 12
# 138 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 139 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 140 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 141 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_19
# 144 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_11
# 146 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_11
# 147 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_12
# 149 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 150 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_2
# 151 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_20
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 153 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_21
# 154 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_13
# 156 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 157 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_22
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 160 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_14
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_23
# 162 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 163 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_1
# 164 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 166 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 3
# 167 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 3
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 16
# 169 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 170 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 171 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 172 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 173 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 174 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 176 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_24
# 177 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 178 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 179 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 180 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 181 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 182 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 183 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 184 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 186 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 187 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 188 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_25
# 189 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 190 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 191 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 192 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 193 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 194 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 195 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 196 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 201 "data//maps/MtCeram_Peak/scripts.pory"
	setflag FLAG_MT_CERAM_DREAMSTONE
# 203 "data//maps/MtCeram_Peak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_2
# 206 "data//maps/MtCeram_Peak/scripts.pory"
	warp MAP_ANCIENT_CERAM, 57, 41
# 208 "data//maps/MtCeram_Peak/scripts.pory"
	releaseall
	end

MtCeramPeak_MainEvent_Trigger_2:
	end


# 16 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_0:
# 16 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 16 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 16 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 16 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 16 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 16 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 20 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_1:
# 20 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 27 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_2:
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	face_down
	step_end

# 34 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_3:
# 34 "data//maps/MtCeram_Peak/scripts.pory"
	face_right
	step_end

# 35 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_4:
# 35 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 36 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_5:
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 51 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_6:
# 51 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 58 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_7:
# 58 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
	step_end

# 86 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_8:
# 86 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_down
	step_end

# 98 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_9:
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 115 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_10:
# 115 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 145 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_11:
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 148 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_12:
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	walk_left
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 155 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_13:
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 160 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_14:
# 160 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
# 160 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

MtCeramPeak_MainEvent_Trigger_Text_0:
# 13 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: So you broke through my grunts.\n"
	.string "Come here then.$"

MtCeramPeak_MainEvent_Trigger_Text_1:
# 24 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: A dreamstone. This is the first\n"
	.string "time I've ever seen one.$"

MtCeramPeak_MainEvent_Trigger_Text_2:
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Move. I want to see this trainers\n"
	.string "face.$"

MtCeramPeak_MainEvent_Trigger_Text_3:
# 39 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Now step up to me.$"

MtCeramPeak_MainEvent_Trigger_Text_4:
# 49 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Why, young trainer, have you been a\n"
	.string "thorn in my organisations side? What's\l"
	.string "in it for you?\p"
	.string "...\p"
	.string "So you're looking for Professor\n"
	.string "Tenebris. That explains everything.$"

MtCeramPeak_MainEvent_Trigger_Text_5:
# 54 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Young trainer, do you even know\n"
	.string "what the good professor was\l"
	.string "researching? Do you even know what a\l"
	.string "dreamstone is?\p"
	.string "A dreamstone is little but a triangular\n"
	.string "rock. At first sight. But it possesses a\l"
	.string "unique property. When Pokemon fall\l"
	.string "asleep, their past memories resurface.\l"
	.string "A dreamstone absorbs this.$"

MtCeramPeak_MainEvent_Trigger_Text_6:
# 57 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Fascinating stuff. This is what\n"
	.string "your dear professor was researching,\l"
	.string "child.\p"
	.string "How does this dreamstone work? What\n"
	.string "kind of memories can a dreamstone\l"
	.string "absorb?$"

MtCeramPeak_MainEvent_Trigger_Text_7:
# 60 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And she discovered something\n"
	.string "incredible!$"

MtCeramPeak_MainEvent_Trigger_Text_8:
# 65 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: That stone behind me contains the\n"
	.string "memories of hundreds of generations of\l"
	.string "Pokemon - all the way back to\l"
	.string "prehistoric times!$"

MtCeramPeak_MainEvent_Trigger_Text_9:
# 69 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Can you imagine child? Can you?!\n"
	.string "The potential of such an object? Even\l"
	.string "as pure energy, a dreamstone is\l"
	.string "overflowing! But there's more. So much\l"
	.string "more. What if we could reverse the\l"
	.string "process? Use the dreamstone to revive\l"
	.string "these memories? Such powerful Pokemon\l"
	.string "once roamed across Cormoria - wouldn't\l"
	.string "it be grand to have them do your\l"
	.string "bidding?$"

MtCeramPeak_MainEvent_Trigger_Text_10:
# 73 "data//maps/MtCeram_Peak/scripts.pory"
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
# 77 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I can't believe it!$"

MtCeramPeak_MainEvent_Trigger_Text_12:
# 84 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Argh! Impossible! How could I\n"
	.string "have lost!$"

MtCeramPeak_MainEvent_Trigger_Text_13:
# 88 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Fine! Whatever! I don't have\n"
	.string "time to waste. We need the dreamstone\l"
	.string "and I will get this one no matter what!$"

MtCeramPeak_MainEvent_Trigger_Text_14:
# 92 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Gabrielle! You worthless fool! Be\n"
	.string "of use for a change and go grab the\l"
	.string "dreamstone. Hurry up before {PLAYER}\l"
	.string "gets it!$"

MtCeramPeak_MainEvent_Trigger_Text_15:
# 96 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Y-yes boss!$"

MtCeramPeak_MainEvent_Trigger_Text_16:
# 108 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Ugh! It's not moving!\p"
	.string "MOXIE: You idiot! Put some backbone in\n"
	.string "it!\p"
	.string "...\p"
	.string "GABRIELLE: Boss?\p"
	.string "MOXIE: What?\p"
	.string "GABRIELLE: ...I'm stuck. I can't\n"
	.string "move...I'm stuck to the stone!$"

MtCeramPeak_MainEvent_Trigger_Text_17:
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Boss...I feel sick. What's\n"
	.string "happening? Is this supposed to\l"
	.string "happen?\p"
	.string "MOXIE: You must've messed it up!$"

MtCeramPeak_MainEvent_Trigger_Text_18:
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Is that an earthquake? It'll\n"
	.string "trigger a volcanic eruption! Gabrielle,\l"
	.string "you - aaargh! You've released the\l"
	.string "dreamstone's energy somehow!\p"
	.string "GABRIELLE: I just did what you told me\n"
	.string "to do! I wanted to be useful!\p"
	.string "MOXIE: And now you've doomed us all!$"

MtCeramPeak_MainEvent_Trigger_Text_19:
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: This is bad...come on you two!\n"
	.string "Let's get out of here before this\l"
	.string "mountain erupts!$"

MtCeramPeak_MainEvent_Trigger_Text_20:
# 151 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Boss - what about me?$"

MtCeramPeak_MainEvent_Trigger_Text_21:
# 153 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Take care Gabrielle. I wish you\n"
	.string "had done more with your life.$"

MtCeramPeak_MainEvent_Trigger_Text_22:
# 157 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: He-he just left me...$"

MtCeramPeak_MainEvent_Trigger_Text_23:
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: I'm still stuck! H-hey,\n"
	.string "{PLAYER} - please, you have to help\l"
	.string "me.$"

MtCeramPeak_MainEvent_Trigger_Text_24:
# 176 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: W-what's happening?$"

MtCeramPeak_MainEvent_Trigger_Text_25:
# 188 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Ahhh!!!$"
