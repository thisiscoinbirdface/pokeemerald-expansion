# 1 "data//maps/MirrohPeak/scripts.pory"

# 2 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_MOXIE, 4
# 3 "data//maps/MirrohPeak/scripts.pory"
    .set LOCALID_MELEA, 14

MirrohPeak_MapScripts::
	.byte 0


MirrohPeak_EventScript_Somber_Trigger::
# 25 "data//maps/MirrohPeak/scripts.pory"
	lockall
# 28 "data//maps/MirrohPeak/scripts.pory"
	applymovement 5, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 29 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 30 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 31 "data//maps/MirrohPeak/scripts.pory"
	applymovement 6, MirrohPeak_EventScript_Somber_Trigger_Movement_0
# 32 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 33 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 34 "data//maps/MirrohPeak/scripts.pory"
	applymovement 2, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 35 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 36 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 37 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_2
# 38 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohPeak_EventScript_Somber_Trigger_Movement_3
# 39 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 41 "data//maps/MirrohPeak/scripts.pory"
	special SpawnCameraObject
# 42 "data//maps/MirrohPeak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohPeak_EventScript_Somber_Trigger_Movement_1
# 43 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 44 "data//maps/MirrohPeak/scripts.pory"
	special RemoveCameraObject
# 45 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 48 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_4
# 49 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 50 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_0
# 51 "data//maps/MirrohPeak/scripts.pory"
	release
# 52 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 53 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 54 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 55 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_1
# 56 "data//maps/MirrohPeak/scripts.pory"
	release
# 57 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 58 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_6
# 59 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 60 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 62 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 63 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 64 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_2
# 65 "data//maps/MirrohPeak/scripts.pory"
	release
# 66 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 67 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 68 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 69 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_3
# 70 "data//maps/MirrohPeak/scripts.pory"
	release
# 71 "data//maps/MirrohPeak/scripts.pory"
	delay 60
# 72 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_4
# 73 "data//maps/MirrohPeak/scripts.pory"
	release
# 74 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_7
# 75 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 76 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 79 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8004, 2
# 80 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8005, 2
# 81 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8006, 8
# 82 "data//maps/MirrohPeak/scripts.pory"
	setvar VAR_0x8007, 5
# 83 "data//maps/MirrohPeak/scripts.pory"
	special ShakeCamera
# 84 "data//maps/MirrohPeak/scripts.pory"
	waitstate
# 85 "data//maps/MirrohPeak/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 86 "data//maps/MirrohPeak/scripts.pory"
	doweather
# 87 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 90 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_5
# 91 "data//maps/MirrohPeak/scripts.pory"
	release
# 92 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MELEA, MirrohPeak_EventScript_Somber_Trigger_Movement_8
# 93 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 94 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data//maps/MirrohPeak/scripts.pory"
	removeobject LOCALID_MELEA
# 96 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 97 "data//maps/MirrohPeak/scripts.pory"
	delay 24
# 100 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_9
# 101 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 102 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_6
# 103 "data//maps/MirrohPeak/scripts.pory"
	release
# 106 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_7
# 107 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_10
# 108 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 109 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_8
# 110 "data//maps/MirrohPeak/scripts.pory"
	release
# 111 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_5
# 112 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_9
# 113 "data//maps/MirrohPeak/scripts.pory"
	applymovement LOCALID_MOXIE, MirrohPeak_EventScript_Somber_Trigger_Movement_10
# 114 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 115 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_10
# 116 "data//maps/MirrohPeak/scripts.pory"
	release
# 117 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_11
# 118 "data//maps/MirrohPeak/scripts.pory"
	waitmovement 0
# 119 "data//maps/MirrohPeak/scripts.pory"
	delay 30
# 120 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_12
# 121 "data//maps/MirrohPeak/scripts.pory"
	msgbox MirrohPeak_EventScript_Somber_Trigger_Text_11
# 122 "data//maps/MirrohPeak/scripts.pory"
	release
# 123 "data//maps/MirrohPeak/scripts.pory"
	applymovement 3, MirrohPeak_EventScript_Somber_Trigger_Movement_13
# 124 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 125 "data//maps/MirrohPeak/scripts.pory"
	removeobject 3
# 126 "data//maps/MirrohPeak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 131 "data//maps/MirrohPeak/scripts.pory"
	releaseall
	end


# 28 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_0:
# 28 "data//maps/MirrohPeak/scripts.pory"
	face_left
# 28 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 29 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_1:
# 29 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 29 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 34 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_2:
# 34 "data//maps/MirrohPeak/scripts.pory"
	face_right
# 34 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 35 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_3:
# 35 "data//maps/MirrohPeak/scripts.pory"
	walk_up
	step_end

# 48 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_4:
# 48 "data//maps/MirrohPeak/scripts.pory"
	emote_question_mark
	step_end

# 53 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_5:
# 53 "data//maps/MirrohPeak/scripts.pory"
	jump_in_place_up
	step_end

# 58 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_6:
# 58 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 74 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_7:
# 74 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 74 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 74 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 92 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_8:
# 92 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 92 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 92 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 100 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_9:
# 100 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 100 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 107 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_10:
# 107 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
	step_end

# 117 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_11:
# 117 "data//maps/MirrohPeak/scripts.pory"
	walk_down
# 117 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 117 "data//maps/MirrohPeak/scripts.pory"
	walk_right
# 117 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 117 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 117 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 117 "data//maps/MirrohPeak/scripts.pory"
	walk_up
# 117 "data//maps/MirrohPeak/scripts.pory"
	walk_left
# 117 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

# 120 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_12:
# 120 "data//maps/MirrohPeak/scripts.pory"
	face_down
	step_end

# 123 "data//maps/MirrohPeak/scripts.pory"
MirrohPeak_EventScript_Somber_Trigger_Movement_13:
# 123 "data//maps/MirrohPeak/scripts.pory"
	emote_exclamation_mark
# 123 "data//maps/MirrohPeak/scripts.pory"
	face_up
	step_end

MirrohPeak_EventScript_Somber_Trigger_Text_0:
# 50 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Is it the child?$"

MirrohPeak_EventScript_Somber_Trigger_Text_1:
# 55 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: I presume it is.$"

MirrohPeak_EventScript_Somber_Trigger_Text_2:
# 64 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Your tenacity is admirable,\n"
	.string "child.\p"
	.string "I must acknowledge that...despite your\n"
	.string "insufferable propensity for ruining\l"
	.string "plans which are none of your concern.$"

MirrohPeak_EventScript_Somber_Trigger_Text_3:
# 69 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Beyond the dreamstone's gate\n"
	.string "lie some of the most powerful {PKMN} this\l"
	.string "world has ever seen. Long gone, extinct\l"
	.string "today. In the hands of people with\l"
	.string "purpose, it can be used to do great\l"
	.string "things...$"

MirrohPeak_EventScript_Somber_Trigger_Text_4:
# 72 "data//maps/MirrohPeak/scripts.pory"
	.string "MELEA: Go on, MOXIE. Start the\n"
	.string "Dreamalyser.$"

MirrohPeak_EventScript_Somber_Trigger_Text_5:
# 90 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: MELEA, you go ahead. I'll deal\n"
	.string "with the child.$"

MirrohPeak_EventScript_Somber_Trigger_Text_6:
# 102 "data//maps/MirrohPeak/scripts.pory"
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
# 106 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: Argh! How could I have lost!$"

MirrohPeak_EventScript_Somber_Trigger_Text_8:
# 109 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: One of you!$"

MirrohPeak_EventScript_Somber_Trigger_Text_9:
# 112 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: Y-yes boss?\p"
	.string "MOXIE: Hurry up and go inside the\n"
	.string "dreamstone. Tell MELEA what happened!\l"
	.string "She needs to be prepared.\p"
	.string "GRUNT: B-but boss, it's -$"

MirrohPeak_EventScript_Somber_Trigger_Text_10:
# 115 "data//maps/MirrohPeak/scripts.pory"
	.string "MOXIE: No buts! Get moving, fast!\p"
	.string "GRUNT: O-ok boss!$"

MirrohPeak_EventScript_Somber_Trigger_Text_11:
# 121 "data//maps/MirrohPeak/scripts.pory"
	.string "GRUNT: But boss...what if I don't come\n"
	.string "back?\p"
	.string "MOXIE: Then we'll send roses to your\n"
	.string "family - now hurry up or I'll send roses\l"
	.string "anyway!$"
