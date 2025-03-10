# 1 "data//layouts/MtCeram/scripts.pory"

# 2 "data//layouts/MtCeram/scripts.pory"
    .set LOCALID_FOOTKOHLA, 19
# 3 "data//layouts/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT1, 20
# 4 "data//layouts/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT2, 20

MtCeram_MapScript::
	.byte 0


MtCeram_KohlaTalk_Trigger0::
# 11 "data//layouts/MtCeram/scripts.pory"
	lockall
# 12 "data//layouts/MtCeram/scripts.pory"
	msgbox MtCeram_KohlaTalk_Trigger0_Text_0
# 13 "data//layouts/MtCeram/scripts.pory"
	release
# 15 "data//layouts/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_KohlaTalk_Trigger0_Movement_0
# 16 "data//layouts/MtCeram/scripts.pory"
	waitmovement 0
# 18 "data//layouts/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end


MtCeram_KohlaTalk_Trigger1::
# 23 "data//layouts/MtCeram/scripts.pory"
	lockall
# 24 "data//layouts/MtCeram/scripts.pory"
	msgbox MtCeram_KohlaTalk_Trigger0_Text_0
# 25 "data//layouts/MtCeram/scripts.pory"
	release
# 27 "data//layouts/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_KohlaTalk_Trigger1_Movement_0
# 28 "data//layouts/MtCeram/scripts.pory"
	waitmovement 0
# 30 "data//layouts/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end


MtCeram_KohlaTalk_Trigger2::
# 35 "data//layouts/MtCeram/scripts.pory"
	lockall
# 36 "data//layouts/MtCeram/scripts.pory"
	msgbox MtCeram_KohlaTalk_Trigger0_Text_0
# 37 "data//layouts/MtCeram/scripts.pory"
	release
# 39 "data//layouts/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_KohlaTalk_Trigger2_Movement_0
# 40 "data//layouts/MtCeram/scripts.pory"
	waitmovement 0
# 42 "data//layouts/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end


MtCeram_KohlaTalk_Trigger3::
# 47 "data//layouts/MtCeram/scripts.pory"
	lockall
# 48 "data//layouts/MtCeram/scripts.pory"
	msgbox MtCeram_KohlaTalk_Trigger0_Text_0
# 49 "data//layouts/MtCeram/scripts.pory"
	release
# 51 "data//layouts/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_KohlaTalk_Trigger3_Movement_0
# 52 "data//layouts/MtCeram/scripts.pory"
	waitmovement 0
# 54 "data//layouts/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end


MtCeram_EventScript_Eavesdrop::
# 60 "data//layouts/MtCeram/scripts.pory"
	lockall
# 63 "data//layouts/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_0
# 64 "data//layouts/MtCeram/scripts.pory"
	release
# 67 "data//layouts/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_0
# 68 "data//layouts/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_1
# 69 "data//layouts/MtCeram/scripts.pory"
	release
# 70 "data//layouts/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_1
# 71 "data//layouts/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_2
# 72 "data//layouts/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_0
# 73 "data//layouts/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_3
# 74 "data//layouts/MtCeram/scripts.pory"
	release
# 75 "data//layouts/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_4
# 76 "data//layouts/MtCeram/scripts.pory"
	release
# 79 "data//layouts/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 80 "data//layouts/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 81 "data//layouts/MtCeram/scripts.pory"
	waitmovement 0
# 84 "data//layouts/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT1
# 85 "data//layouts/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT2
# 88 "data//layouts/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_3
# 89 "data//layouts/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_5
# 90 "data//layouts/MtCeram/scripts.pory"
	release
# 93 "data//layouts/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_4
# 94 "data//layouts/MtCeram/scripts.pory"
	waitmovement 0
# 95 "data//layouts/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 98 "data//layouts/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 101 "data//layouts/MtCeram/scripts.pory"
	releaseall
	return


# 15 "data//layouts/MtCeram/scripts.pory"
MtCeram_KohlaTalk_Trigger0_Movement_0:
# 15 "data//layouts/MtCeram/scripts.pory"
	walk_up
# 15 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 15 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 15 "data//layouts/MtCeram/scripts.pory"
	walk_up
# 15 "data//layouts/MtCeram/scripts.pory"
	face_right
	step_end

# 27 "data//layouts/MtCeram/scripts.pory"
MtCeram_KohlaTalk_Trigger1_Movement_0:
# 27 "data//layouts/MtCeram/scripts.pory"
	walk_up
# 27 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 27 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 27 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 27 "data//layouts/MtCeram/scripts.pory"
	walk_up
# 27 "data//layouts/MtCeram/scripts.pory"
	face_right
	step_end

# 39 "data//layouts/MtCeram/scripts.pory"
MtCeram_KohlaTalk_Trigger2_Movement_0:
# 39 "data//layouts/MtCeram/scripts.pory"
	walk_up
# 39 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 39 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 39 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 39 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 39 "data//layouts/MtCeram/scripts.pory"
	walk_up
# 39 "data//layouts/MtCeram/scripts.pory"
	face_right
	step_end

# 51 "data//layouts/MtCeram/scripts.pory"
MtCeram_KohlaTalk_Trigger3_Movement_0:
# 51 "data//layouts/MtCeram/scripts.pory"
	walk_up
# 51 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 51 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 51 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 51 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 51 "data//layouts/MtCeram/scripts.pory"
	wal_left
# 51 "data//layouts/MtCeram/scripts.pory"
	walk_up
# 51 "data//layouts/MtCeram/scripts.pory"
	face_right
	step_end

# 67 "data//layouts/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_0:
# 67 "data//layouts/MtCeram/scripts.pory"
	jump_in_place_right
	step_end

# 70 "data//layouts/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_1:
# 70 "data//layouts/MtCeram/scripts.pory"
	emote_question_mark
	step_end

# 79 "data//layouts/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_2:
# 79 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 79 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 79 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 79 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 79 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 79 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 79 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 79 "data//layouts/MtCeram/scripts.pory"
	walk_right
	step_end

# 88 "data//layouts/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_3:
# 88 "data//layouts/MtCeram/scripts.pory"
	face_left
	step_end

# 93 "data//layouts/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_4:
# 93 "data//layouts/MtCeram/scripts.pory"
	walk_down
# 93 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 93 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 93 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 93 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 93 "data//layouts/MtCeram/scripts.pory"
	walk_up
# 93 "data//layouts/MtCeram/scripts.pory"
	walk_up
# 93 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 93 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 93 "data//layouts/MtCeram/scripts.pory"
	walk_right
# 93 "data//layouts/MtCeram/scripts.pory"
	walk_right
	step_end

MtCeram_KohlaTalk_Trigger0_Text_0:
# 12 "data//layouts/MtCeram/scripts.pory"
	.string "{PLAYER} - what are you doing? Come\n"
	.string "here, you idiot!$"

MtCeram_EventScript_Eavesdrop_Text_0:
# 63 "data//layouts/MtCeram/scripts.pory"
	.string "KOHLA: I've been spying on those two\n"
	.string "Team Somber Grunts. Don't make a sound!$"

MtCeram_EventScript_Eavesdrop_Text_1:
# 68 "data//layouts/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: ...so the boss told us\n"
	.string "to be EXTRA careful not to let anyone\l"
	.string "up the mountain.$"

MtCeram_EventScript_Eavesdrop_Text_2:
# 71 "data//layouts/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: But where is the boss?\n"
	.string "And GABRIELLE?$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 73 "data//layouts/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: The boss found the\n"
	.string "dreamstone on top of the mountain!\l"
	.string "She's trying to climb it right now.\p"
	.string "As for GABRIELLE...well, after her\n"
	.string "punishment for losing to that Tenebris\l"
	.string "Lab trainer twice...she's been a little\l"
	.string "down.$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 75 "data//layouts/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: Serves her right for\n"
	.string "losing! TEAM SOMBER doesn't need any\l"
	.string "losers!\p"
	.string "SOMBER GRUNT 1: Yeah what a loser she\n"
	.string "is! Now lets go stand guard. We can't let\l"
	.string "anyone pass until the boss gets the\l"
	.string "dreamstone at the peak!$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 89 "data//layouts/MtCeram/scripts.pory"
	.string "KOHLA: Heard that? Well I'm going to\n"
	.string "head up there first. Gotta do the right\l"
	.string "thing, you know? Na...you don't.\p"
	.string "See you never, chum!$"
