# 1 "data//maps/MirrohPeak/scripts.pory"

# 2 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_MOXIE, 4
# 3 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_MELEA, 14

MirrohPeak_MapScripts::
	.byte 0


MirrohPeak_EventScript_Somber_Trigger::
# 25 "data//maps/MirrohPeak/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, MirrohPeak_EventScript_Somber_Trigger_2
# 27 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 28 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 31 "data//maps/MirrohPeak/scripts.pory"
	applymovement 5, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 32 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 33 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 34 "data//maps/MirrohPeak/scripts.pory"
	applymovement 6, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 35 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 36 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 37 "data//maps/MirrohPeak/scripts.pory"
	applymovement 2, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 38 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 39 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 40 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 41 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 42 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 44 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 45 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 46 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 47 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 48 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 51 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 52 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 53 "data//maps/MirrohPeak/scripts.pory"
	delay 16
# 54 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_0
# 55 "data//maps/MirrohPeak/scripts.pory"
	release
# 56 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 57 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 58 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 59 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_1
# 60 "data//maps/MirrohPeak/scripts.pory"
	release
# 61 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 63 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 64 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 65 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_2
# 66 "data//maps/MirrohPeak/scripts.pory"
	release
# 67 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 68 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 69 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 70 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_3
# 71 "data//maps/MirrohPeak/scripts.pory"
	release
# 74 "data//maps/MirrohPeak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 75 "data//maps/MirrohPeak/scripts.pory"
	doweather
# 77 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 78 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_4
# 79 "data//maps/MirrohPeak/scripts.pory"
	release
# 80 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 81 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 82 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 85 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 86 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 87 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 88 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 89 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 90 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 91 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 94 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_5
# 95 "data//maps/MirrohPeak/scripts.pory"
	release
# 96 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_7
# 97 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 98 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 99 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MELEA
# 100 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 101 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 104 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 105 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Somber_Trigger_Movement_8
# 106 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 107 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 108 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_9
# 109 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 110 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_6
# 111 "data//maps/MirrohPeak/scripts.pory"
	release
# 114 "data//maps/MirrohPeak/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHPEAK_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Text_7
# 117 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_10
# 118 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 119 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_8
# 120 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_11
# 121 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 122 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_9
# 123 "data//maps/MirrohPeak/scripts.pory"
	release
# 124 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 125 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_10
# 126 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_11
# 127 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 128 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_11
# 129 "data//maps/MirrohPeak/scripts.pory"
	release
# 130 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_12
# 131 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 132 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_13
# 133 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 134 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_14
# 135 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_12
# 136 "data//maps/MirrohPeak/scripts.pory"
	release
# 137 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_15
# 138 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 139 "data//maps/MirrohPeak/scripts.pory"
	removeobject 3
# 140 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 141 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_14
# 142 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 143 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_13
# 144 "data//maps/MirrohPeak/scripts.pory"
	release
# 145 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_16
# 146 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 149 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 150 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 151 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 152 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 153 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 154 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 155 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 158 "data//maps/MirrohPeak/scripts.pory"
	setflag FLAG_MIRROHPEAK_MOXIE_DEFEATED
# 161 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 162 "data//maps/MirrohPeak/scripts.pory"
	warp MAP_ANCIENT_MIRROH, 10, 10
# 163 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end

MirrohPeak_EventScript_Somber_Trigger_2:
	end


# 31 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_0:
# 31 "data//maps/MirrohPeak/scripts.pory"
	face_left
# 31 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 32 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_1:
# 32 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 32 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 37 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_2:
# 37 "data//maps/MirrohPeak/scripts.pory"
	face_right
# 37 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 38 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_3:
# 38 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 51 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_4:
# 51 "data//maps/MirrohPeak/scripts.pory"
	emote_question_mark
	step_end

# 57 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_5:
# 57 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_up
	step_end

# 80 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_6:
# 80 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 80 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 80 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 96 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_7:
# 96 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 96 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 96 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 105 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_8:
# 105 "data//maps/MirrohPeak/scripts.pory"
	walk_down
	step_end

# 108 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_9:
# 108 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 108 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 117 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_10:
# 117 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_down
# 117 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 120 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_11:
# 120 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 130 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_12:
# 130 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 130 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 130 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 130 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 130 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 130 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 130 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 130 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 130 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 132 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_13:
# 132 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 134 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_14:
# 134 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 137 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_15:
# 137 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
# 137 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 145 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_16:
# 145 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 145 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

MirrohPeak_EventScript_Somber_Trigger_Text_0:
# 54 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Is it the child?$"

MirrohPeak_EventScript_Somber_Trigger_Text_1:
# 59 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: I presume it is.$"

MirrohPeak_EventScript_Somber_Trigger_Text_2:
# 65 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Your tenacity is admirable,\n"
	.string "child.\p"
	.string "I must acknowledge that...despite your\n"
	.string "insufferable propensity for ruining\l"
	.string "plans which are none of your concern.$"

MirrohPeak_EventScript_Somber_Trigger_Text_3:
# 70 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Beyond the dreamstone's gate\n"
	.string "lie some of the most powerful {PKMN} this\l"
	.string "world has ever seen. Long gone, extinct\l"
	.string "today. In the hands of people with\l"
	.string "purpose, it can be used to do great\l"
	.string "things...$"

MirrohPeak_EventScript_Somber_Trigger_Text_4:
# 78 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Go on, MOXIE. Start the\n"
	.string "Dreamalyser.$"

MirrohPeak_EventScript_Somber_Trigger_Text_5:
# 94 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: MELEA, you go ahead. I'll deal\n"
	.string "with the child.$"

MirrohPeak_EventScript_Somber_Trigger_Text_6:
# 110 "data//maps/MirrohPeak/scripts.pory"
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
# 114 "data//maps/MirrohPeak/scripts.pory"
	.string "Insufferable!$"

MirrohPeak_EventScript_Somber_Trigger_Text_8:
# 119 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Argh! How could I have lost!$"

MirrohPeak_EventScript_Somber_Trigger_Text_9:
# 122 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: One of you!$"

MirrohPeak_EventScript_Somber_Trigger_Text_10:
# 125 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Y-yes boss?\p"
	.string "MOXIE: Hurry up and go inside the\n"
	.string "dreamstone. Tell MELEA what happened!\l"
	.string "She needs to be prepared.\p"
	.string "GRUNT: B-but boss, it's -$"

MirrohPeak_EventScript_Somber_Trigger_Text_11:
# 128 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: No buts! Get moving, fast!\p"
	.string "GRUNT: O-ok boss!$"

MirrohPeak_EventScript_Somber_Trigger_Text_12:
# 135 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: But boss...what if I don't come\n"
	.string "back?\p"
	.string "MOXIE: Then we'll send roses to your\n"
	.string "family - now hurry up or I'll be forced\l"
	.string "to send roses right now!$"

MirrohPeak_EventScript_Somber_Trigger_Text_13:
# 143 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: I know you're going to chase\n"
	.string "MELEA and try to stop her from getting\l"
	.string "the Ancient Wonders.\p"
	.string "Let me do you a favour, {PLAYER}. I'll\n"
	.string "send you inside myself. There's only one\l"
	.string "dreamstone, and once MELEA takes that\l"
	.string "exit, you'll be stuck there forever!\p"
	.string "Hahaha!$"
