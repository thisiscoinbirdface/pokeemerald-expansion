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
	msgbox MtCeramPeak_MainEvent_Trigger_Text_5
# 50 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_6
# 51 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 52 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 53 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_7
# 54 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 55 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_1
# 56 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 57 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_8
# 58 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 59 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_7
# 60 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 61 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_9
# 62 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 63 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_1
# 64 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 65 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_10
# 66 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 77 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_11
# 78 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 79 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_8
# 80 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 81 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_12
# 82 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 83 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_3
# 84 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_6
# 85 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 86 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_13
# 87 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 88 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_9
# 89 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 90 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_14
# 91 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 92 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_10
# 93 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 94 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_6
# 95 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_6
# 96 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_6
# 97 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_6
# 98 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 99 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 101 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_15
# 102 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 103 "data//maps/MtCeram_Peak/scripts.pory"
	delay 16
# 104 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_16
# 105 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 107 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_11
# 108 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_11
# 109 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_11
# 110 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_11
# 111 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_11
# 112 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 113 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 114 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 115 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 116 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 117 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 118 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 119 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 121 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_17
# 122 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 123 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 124 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 125 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 126 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 127 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 128 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 129 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 131 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_18
# 132 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_12
# 134 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_12
# 135 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_13
# 137 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 138 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_1
# 139 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_19
# 140 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 141 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_20
# 142 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_14
# 144 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_21
# 146 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_GAB, MtCeramPeak_MainEvent_Trigger_Movement_15
# 149 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_22
# 150 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 151 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_16
# 152 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 154 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 155 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 156 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 157 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 158 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 159 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 160 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 162 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_23
# 164 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8004, 2
# 165 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8005, 2
# 166 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8006, 8
# 167 "data//maps/MtCeram_Peak/scripts.pory"
	setvar VAR_0x8007, 5
# 168 "data//maps/MtCeram_Peak/scripts.pory"
	special ShakeCamera
# 169 "data//maps/MtCeram_Peak/scripts.pory"
	waitstate
# 170 "data//maps/MtCeram_Peak/scripts.pory"
	delay 30
# 172 "data//maps/MtCeram_Peak/scripts.pory"
	warpteleport MAP_ANCIENT_CERAM, 49, 26
# 175 "data//maps/MtCeram_Peak/scripts.pory"
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
# 39 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 47 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_6:
# 47 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 51 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_7:
# 51 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_up
	step_end

# 79 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_8:
# 79 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_down
	step_end

# 88 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_9:
# 88 "data//maps/MtCeram_Peak/scripts.pory"
	jump_in_place_right
	step_end

# 92 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_10:
# 92 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 92 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 92 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 92 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 107 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_11:
# 107 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 133 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_12:
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 133 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 136 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_13:
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	walk_right
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	walk_left
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 136 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
	step_end

# 143 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_14:
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
# 143 "data//maps/MtCeram_Peak/scripts.pory"
	walk_down
	step_end

# 148 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_15:
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	face_up
# 148 "data//maps/MtCeram_Peak/scripts.pory"
	emote_exclamation_mark
	step_end

# 151 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_16:
# 151 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
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
	.string "Ahh...you're looking for Professor\n"
	.string "Tenebris. That explains everything.$"

MtCeramPeak_MainEvent_Trigger_Text_5:
# 49 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Young trainer, do you even know\n"
	.string "what the good professor was\l"
	.string "researching? Do you even know what a\l"
	.string "dreamstone is?\p"
	.string "A dreamstone is little but a triangular\n"
	.string "rock. At first sight. But it possesses a\l"
	.string "unique property - it can absorb the\l"
	.string "brainwaves of nearby {PKMN}.$"

MtCeramPeak_MainEvent_Trigger_Text_6:
# 50 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: How fascinating! This is what your\n"
	.string "dear professor was researching, child.\p"
	.string "How does this dreamstone work? What\n"
	.string "kind of thoughts can a dreamstone\l"
	.string "absorb?$"

MtCeramPeak_MainEvent_Trigger_Text_7:
# 53 "data//maps/MtCeram_Peak/scripts.pory"
	.string "And he discovered something incredible!$"

MtCeramPeak_MainEvent_Trigger_Text_8:
# 57 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Professor Tenebris found out that\n"
	.string "dreamstones absorb the memories of\l"
	.string "{PKMN}. So within that stone behind me lie\l"
	.string "the memories of hundreds of\l"
	.string "generations of {PKMN}.$"

MtCeramPeak_MainEvent_Trigger_Text_9:
# 61 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Can you imagine child? Can you?!\n"
	.string "The potential of such an object? Even\l"
	.string "as pure energy, a dreamstone is\l"
	.string "overflowing! But there's more. So much\l"
	.string "more. What if we could reverse the\l"
	.string "process? Use the dreamstone to implant\l"
	.string "memories into {PKMN}? An unstoppable tool\l"
	.string "to control any and all {PKMN}!$"

MtCeramPeak_MainEvent_Trigger_Text_10:
# 65 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: And with this control, there would\n"
	.string "be nothing stopping Team Somber from\l"
	.string "having absolute control over the world!\l"
	.string "This is what we want, {PLAYER}. This is\l"
	.string "what the SOMBER KING wants.\p"
	.string "And you! You dare to get in our way, time\n"
	.string "and again! No more!\p"
	.string "MOXIE: I, MOXIE, Head of the Team\n"
	.string "Somber Research Wing, will end your\l"
	.string "nonsense once and for all!$"

MtCeramPeak_MainEvent_Trigger_Text_11:
# 77 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Argh! Impossible! How could I\n"
	.string "have lost!$"

MtCeramPeak_MainEvent_Trigger_Text_12:
# 81 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Fine! Whatever! I don't have\n"
	.string "time to waste. The SOMBER KING needs\l"
	.string "the dreamstone and I will get this\l"
	.string "dreamstone no matter what!$"

MtCeramPeak_MainEvent_Trigger_Text_13:
# 86 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: GABRIELLE! You worthless dolt!\n"
	.string "Be of use for a change and go grab the\l"
	.string "dreamstone. Hurry up before {PLAYER}\l"
	.string "gets it!$"

MtCeramPeak_MainEvent_Trigger_Text_14:
# 90 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Y-yes boss!$"

MtCeramPeak_MainEvent_Trigger_Text_15:
# 101 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Ugh! It's not moving!\p"
	.string "MOXIE: You idiot! Put some backbone in\n"
	.string "it!\p"
	.string "...\p"
	.string "GABRIELLE: Boss?\p"
	.string "MOXIE: What?\p"
	.string "GABRIELLE: ...I'm stuck. I can't\n"
	.string "move...I'm stuck to the stone!$"

MtCeramPeak_MainEvent_Trigger_Text_16:
# 104 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Boss...I feel sick. What's\n"
	.string "happening? Is this supposed to\l"
	.string "happen?\p"
	.string "MOXIE: You must've messed it up!$"

MtCeramPeak_MainEvent_Trigger_Text_17:
# 121 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Is that an earthquake? It'll\n"
	.string "trigger a volcanic eruption! GABRIELLE,\l"
	.string "you utter nincompoop! You've released\l"
	.string "the dreamstone's energy somehow!\p"
	.string "GABRIELLE: I just did what you told me\n"
	.string "to do! I wanted to be useful!\p"
	.string "MOXIE: And now you've doomed us all!$"

MtCeramPeak_MainEvent_Trigger_Text_18:
# 131 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: This is bad...come on you two!\n"
	.string "Let's get out of here before this\l"
	.string "mountain erupts!$"

MtCeramPeak_MainEvent_Trigger_Text_19:
# 139 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: Boss - what about me?$"

MtCeramPeak_MainEvent_Trigger_Text_20:
# 141 "data//maps/MtCeram_Peak/scripts.pory"
	.string "MOXIE: Take care GABRIELLE. I wish you\n"
	.string "had done more with your life.$"

MtCeramPeak_MainEvent_Trigger_Text_21:
# 145 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: He-he just left me...$"

MtCeramPeak_MainEvent_Trigger_Text_22:
# 149 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: I'm still stuck! H-hey,\n"
	.string "{PLAYER} - please, you have to help\l"
	.string "me.$"

MtCeramPeak_MainEvent_Trigger_Text_23:
# 162 "data//maps/MtCeram_Peak/scripts.pory"
	.string "GABRIELLE: W-what's happening!\n"
	.string "Ahhhh!!!!$"
