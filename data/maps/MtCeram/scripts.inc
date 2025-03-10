# 1 "data//maps/MtCeram/scripts.pory"

# 2 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTKOHLA, 19
# 3 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT1, 20
# 4 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT2, 21

MtCeram_MapScripts::
	.byte 0


MtCeram_Eavesdrop_Trigger0::
# 18 "data//maps/MtCeram/scripts.pory"
	lockall
# 19 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 20 "data//maps/MtCeram/scripts.pory"
	release
# 22 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger0_Movement_0
# 23 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 25 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end


MtCeram_Eavesdrop_Trigger1::
# 30 "data//maps/MtCeram/scripts.pory"
	lockall
# 31 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 32 "data//maps/MtCeram/scripts.pory"
	release
# 34 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger1_Movement_0
# 35 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 37 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end


MtCeram_Eavesdrop_Trigger2::
# 42 "data//maps/MtCeram/scripts.pory"
	lockall
# 43 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 44 "data//maps/MtCeram/scripts.pory"
	release
# 46 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger2_Movement_0
# 47 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 49 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end


MtCeram_Eavesdrop_Trigger3::
# 54 "data//maps/MtCeram/scripts.pory"
	lockall
# 55 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 56 "data//maps/MtCeram/scripts.pory"
	release
# 58 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger3_Movement_0
# 59 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 61 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end


MtCeram_EventScript_Eavesdrop::
# 67 "data//maps/MtCeram/scripts.pory"
	lockall
# 70 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_0
# 71 "data//maps/MtCeram/scripts.pory"
	release
# 74 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_0
# 75 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_1
# 76 "data//maps/MtCeram/scripts.pory"
	release
# 77 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_1
# 78 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_2
# 79 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_0
# 80 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_3
# 81 "data//maps/MtCeram/scripts.pory"
	release
# 82 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_4
# 83 "data//maps/MtCeram/scripts.pory"
	release
# 86 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 87 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 88 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 91 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT1
# 92 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT2
# 95 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_3
# 96 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_5
# 97 "data//maps/MtCeram/scripts.pory"
	release
# 100 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_4
# 101 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 102 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 105 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 108 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


# 22 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_0:
# 22 "data//maps/MtCeram/scripts.pory"
	walk_up
# 22 "data//maps/MtCeram/scripts.pory"
	walk_left
# 22 "data//maps/MtCeram/scripts.pory"
	walk_left
# 22 "data//maps/MtCeram/scripts.pory"
	walk_up
# 22 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 34 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger1_Movement_0:
# 34 "data//maps/MtCeram/scripts.pory"
	walk_up
# 34 "data//maps/MtCeram/scripts.pory"
	walk_left
# 34 "data//maps/MtCeram/scripts.pory"
	walk_left
# 34 "data//maps/MtCeram/scripts.pory"
	walk_left
# 34 "data//maps/MtCeram/scripts.pory"
	walk_up
# 34 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 46 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger2_Movement_0:
# 46 "data//maps/MtCeram/scripts.pory"
	walk_up
# 46 "data//maps/MtCeram/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram/scripts.pory"
	walk_up
# 46 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 58 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger3_Movement_0:
# 58 "data//maps/MtCeram/scripts.pory"
	walk_up
# 58 "data//maps/MtCeram/scripts.pory"
	walk_left
# 58 "data//maps/MtCeram/scripts.pory"
	walk_left
# 58 "data//maps/MtCeram/scripts.pory"
	walk_left
# 58 "data//maps/MtCeram/scripts.pory"
	walk_left
# 58 "data//maps/MtCeram/scripts.pory"
	walk_left
# 58 "data//maps/MtCeram/scripts.pory"
	walk_up
# 58 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 74 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_0:
# 74 "data//maps/MtCeram/scripts.pory"
	jump_in_place_right
	step_end

# 77 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_1:
# 77 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
	step_end

# 86 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_2:
# 86 "data//maps/MtCeram/scripts.pory"
	walk_right
# 86 "data//maps/MtCeram/scripts.pory"
	walk_right
# 86 "data//maps/MtCeram/scripts.pory"
	walk_right
# 86 "data//maps/MtCeram/scripts.pory"
	walk_right
# 86 "data//maps/MtCeram/scripts.pory"
	walk_right
# 86 "data//maps/MtCeram/scripts.pory"
	walk_right
# 86 "data//maps/MtCeram/scripts.pory"
	walk_right
# 86 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 95 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_3:
# 95 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 100 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_4:
# 100 "data//maps/MtCeram/scripts.pory"
	walk_down
# 100 "data//maps/MtCeram/scripts.pory"
	walk_right
# 100 "data//maps/MtCeram/scripts.pory"
	walk_right
# 100 "data//maps/MtCeram/scripts.pory"
	walk_right
# 100 "data//maps/MtCeram/scripts.pory"
	walk_right
# 100 "data//maps/MtCeram/scripts.pory"
	walk_up
# 100 "data//maps/MtCeram/scripts.pory"
	walk_up
# 100 "data//maps/MtCeram/scripts.pory"
	walk_right
# 100 "data//maps/MtCeram/scripts.pory"
	walk_right
# 100 "data//maps/MtCeram/scripts.pory"
	walk_right
# 100 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

MtCeram_Eavesdrop_Trigger0_Text_0:
# 19 "data//maps/MtCeram/scripts.pory"
	.string "{PLAYER} - what are you doing? Come\n"
	.string "here, you idiot!$"

MtCeram_EventScript_Eavesdrop_Text_0:
# 70 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I've been spying on those two\n"
	.string "Team Somber Grunts. Don't make a sound!$"

MtCeram_EventScript_Eavesdrop_Text_1:
# 75 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: ...so the boss told us\n"
	.string "to be EXTRA careful not to let anyone\l"
	.string "up the mountain.$"

MtCeram_EventScript_Eavesdrop_Text_2:
# 78 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: But where is the boss?\n"
	.string "And GABRIELLE?$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 80 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: The boss found the\n"
	.string "dreamstone on top of the mountain!\l"
	.string "She's trying to climb it right now.\p"
	.string "As for GABRIELLE...well, after her\n"
	.string "punishment for losing to that Tenebris\l"
	.string "Lab trainer twice...she's been a little\l"
	.string "down.$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 82 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: Serves her right for\n"
	.string "losing! TEAM SOMBER doesn't need any\l"
	.string "losers!\p"
	.string "SOMBER GRUNT 1: Yeah what a loser she\n"
	.string "is! Now lets go stand guard. We can't let\l"
	.string "anyone pass until the boss gets the\l"
	.string "dreamstone at the peak!$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 96 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: Heard that? Well I'm going to\n"
	.string "head up there first. Gotta do the right\l"
	.string "thing, you know? Na...you don't.\p"
	.string "See you never, chum!$"
