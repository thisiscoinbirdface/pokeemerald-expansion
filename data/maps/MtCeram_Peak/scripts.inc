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
# 13 "data//maps/MtCeram_Peak/scripts.pory"
	lockall
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_0
# 15 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 17 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_0
# 18 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 20 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_1
# 21 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 23 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_1
# 24 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 25 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_2
# 26 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 3, MtCeramPeak_MainEvent_Trigger_Movement_2
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_3
# 32 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_4
# 33 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 35 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_3
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 39 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_5
# 40 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 45 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_4
# 46 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 47 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_6
# 48 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 49 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 50 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_5
# 51 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 52 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 53 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_6
# 54 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 55 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 56 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_7
# 57 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 58 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_1
# 59 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 60 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 61 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_8
# 62 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 63 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 64 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 65 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_9
# 66 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 67 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_1
# 68 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 69 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_10
# 70 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 73 "data//maps/MtCeram_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMPEAK_MOXIE, MtCeramPeak_MainEvent_Trigger_Text_11
# 81 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_12
# 82 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 83 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_8
# 84 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 85 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_13
# 86 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 87 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_3
# 88 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 89 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_14
# 90 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 91 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_7
# 92 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 93 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_15
# 94 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_9
# 96 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 97 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_6
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_6
# 99 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_6
# 100 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_6
# 101 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 104 "data//maps/MtCeram_Peak/scripts.pory"
	fadeoutbgm 1
# 105 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 107 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_16
# 108 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 109 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 110 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_17
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 113 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_10
# 114 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_10
# 115 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_10
# 116 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_10
# 117 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_10
# 118 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 119 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 120 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 121 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 122 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 123 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 124 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 125 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 127 "data//maps/MtCeram_Peak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 128 "data//maps/MtCeram_Peak/scripts.pory"
	doweather
# 130 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_18
# 131 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 132 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 134 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 12
# 135 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 137 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 138 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 140 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_19
# 141 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 142 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_11
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_11
# 144 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_12
# 146 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 147 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_1
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_20
# 149 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 150 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_21
# 151 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_13
# 153 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 154 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_22
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 157 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_14
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_23
# 159 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 160 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_5
# 161 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 163 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 3
# 164 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 3
# 165 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 16
# 166 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 167 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 169 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 170 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 171 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 173 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_24
# 174 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 175 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 176 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 177 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 178 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 179 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 180 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 181 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 183 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 184 "data//maps/MtCeram_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 185 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_25
# 186 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 187 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 188 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 189 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 190 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 191 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 192 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 193 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 196 "data//maps/MtCeram_Peak/scripts.pory"
	setflag FLAG_MT_CERAM_DREAMSTONE
# 198 "data//maps/MtCeram_Peak/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_2
# 201 "data//maps/MtCeram_Peak/scripts.pory"
	warp MAP_ANCIENT_CERAM, 57, 41
# 202 "data//maps/MtCeram_Peak/scripts.pory"
	releaseall
	return

MtCeramPeak_MainEvent_Trigger_2:
	end


# 17 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_0:
# 17 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 17 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 17 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 17 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 17 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 17 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 23 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_1:
# 23 "data//maps/MtCeram_Peak/scripts.pory"
	face_down
	step_end

# 30 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_2:
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	face_right
	step_end

# 31 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_3:
# 31 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 32 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_4:
# 32 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 32 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 39 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_5:
# 39 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 47 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_6:
# 47 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 54 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_7:
# 54 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
	step_end

# 83 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_8:
# 83 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_down
	step_end

# 95 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_9:
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 113 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_10:
# 113 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 142 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_11:
# 142 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 142 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 142 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 142 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 142 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 142 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 145 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_12:
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	walk_left
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 152 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_13:
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 157 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_14:
# 157 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
# 157 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

MtCeramPeak_MainEvent_Trigger_Text_0:
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: So you broke through my grunts.\n"
	.string "Come here then.$"

MtCeramPeak_MainEvent_Trigger_Text_1:
# 20 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: A dreamstone. This is the first\n"
	.string "time I've ever seen one.$"

MtCeramPeak_MainEvent_Trigger_Text_2:
# 25 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Move. I want to see this trainers\n"
	.string "face.$"

MtCeramPeak_MainEvent_Trigger_Text_3:
# 35 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Now step up to me.$"

MtCeramPeak_MainEvent_Trigger_Text_4:
# 45 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Why, young trainer, have you been a\n"
	.string "thorn in my organisations side? What's\l"
	.string "in it for you?\p"
	.string "...\p"
	.string "So you're looking for Professor\n"
	.string "Tenebris. That explains everything.$"

MtCeramPeak_MainEvent_Trigger_Text_5:
# 50 "data//maps/MtCeram_Peak/scripts.pory"
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
# 53 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Fascinating stuff. This is what\n"
	.string "your dear professor was researching,\l"
	.string "child.\p"
	.string "How does this dreamstone work? What\n"
	.string "kind of memories can a dreamstone\l"
	.string "absorb?$"

MtCeramPeak_MainEvent_Trigger_Text_7:
# 56 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And she discovered something\n"
	.string "incredible!$"

MtCeramPeak_MainEvent_Trigger_Text_8:
# 61 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: That stone behind me contains the\n"
	.string "memories of hundreds of generations of\l"
	.string "Pokemon - all the way back to\l"
	.string "prehistoric times!$"

MtCeramPeak_MainEvent_Trigger_Text_9:
# 65 "data//maps/MtCeram_Peak/scripts.pory"
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
# 69 "data//maps/MtCeram_Peak/scripts.pory"
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
# 73 "data//maps/MtCeram_Peak/scripts.pory"
	.string "I can't believe it!$"

MtCeramPeak_MainEvent_Trigger_Text_12:
# 81 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Argh! Impossible! How could I\n"
	.string "have lost!$"

MtCeramPeak_MainEvent_Trigger_Text_13:
# 85 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Fine! Whatever! I don't have\n"
	.string "time to waste. We need the dreamstone\l"
	.string "and I will get this one no matter what!$"

MtCeramPeak_MainEvent_Trigger_Text_14:
# 89 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Gabrielle! You worthless fool! Be\n"
	.string "of use for a change and go grab the\l"
	.string "dreamstone. Hurry up before {PLAYER}\l"
	.string "gets it!$"

MtCeramPeak_MainEvent_Trigger_Text_15:
# 93 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Y-yes boss!$"

MtCeramPeak_MainEvent_Trigger_Text_16:
# 107 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Ugh! It's not moving!\p"
	.string "MOXIE: You idiot! Put some backbone in\n"
	.string "it!\p"
	.string "...\p"
	.string "GABRIELLE: Boss?\p"
	.string "MOXIE: What?\p"
	.string "GABRIELLE: ...I'm stuck. I can't\n"
	.string "move...I'm stuck to the stone!$"

MtCeramPeak_MainEvent_Trigger_Text_17:
# 110 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Boss...I feel sick. What's\n"
	.string "happening? Is this supposed to\l"
	.string "happen?\p"
	.string "MOXIE: You must've messed it up!$"

MtCeramPeak_MainEvent_Trigger_Text_18:
# 130 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Is that an earthquake? It'll\n"
	.string "trigger a volcanic eruption! Gabrielle,\l"
	.string "you - aaargh! You've released the\l"
	.string "dreamstone's energy somehow!\p"
	.string "GABRIELLE: I just did what you told me\n"
	.string "to do! I wanted to be useful!\p"
	.string "MOXIE: And now you've doomed us all!$"

MtCeramPeak_MainEvent_Trigger_Text_19:
# 140 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: This is bad...come on you two!\n"
	.string "Let's get out of here before this\l"
	.string "mountain erupts!$"

MtCeramPeak_MainEvent_Trigger_Text_20:
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Boss - what about me?$"

MtCeramPeak_MainEvent_Trigger_Text_21:
# 150 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Take care Gabrielle. I wish you\n"
	.string "had done more with your life.$"

MtCeramPeak_MainEvent_Trigger_Text_22:
# 154 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: He-he just left me...$"

MtCeramPeak_MainEvent_Trigger_Text_23:
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: I'm still stuck! H-hey,\n"
	.string "{PLAYER} - please, you have to help\l"
	.string "me.$"

MtCeramPeak_MainEvent_Trigger_Text_24:
# 173 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: W-what's happening?$"

MtCeramPeak_MainEvent_Trigger_Text_25:
# 185 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Ahhh!!!$"
