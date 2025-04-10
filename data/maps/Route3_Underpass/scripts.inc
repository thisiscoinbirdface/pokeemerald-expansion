# 1 "data//maps/Route3_Underpass/scripts.pory"

# 2 "data//maps/Route3_Underpass/scripts.pory"
    .set LOCALID_GAB, 1
# 3 "data//maps/Route3_Underpass/scripts.pory"
    .set LOCALID_BREECH, 2
# 4 "data//maps/Route3_Underpass/scripts.pory"
    .set LOCALID_CLEF, 5

Route3_Underpass_MapScripts::
	.byte 0


Route3_Underpass_Nurse::
# 10 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Nurse_Text_0, MSGBOX_NPC
	end


Route3_NurseJoy_OnRoute::
# 16 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 17 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 18 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_NurseJoy_OnRoute_Text_0
# 19 "data//maps/Route3_Underpass/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 20 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 21 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	end


Route3_Underpass_NPC1::
# 28 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC1_Text_0, MSGBOX_NPC
	end


Route3_Underpass_NPC2::
# 33 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC2_Text_0, MSGBOX_NPC
	end


Route3_Underpass_EvilBattle_Trigger0::
# 38 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger0_2
# 41 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 42 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 44 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger0_Movement_0
# 45 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 46 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger0_2:
	end


Route3_Underpass_EvilBattle_Trigger1::
# 49 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger1_2
# 52 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 53 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 55 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 56 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 57 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger1_2:
	end


Route3_Underpass_EvilBattle_Trigger2::
# 60 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger2_2
# 63 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 64 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 66 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger2_Movement_0
# 67 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 68 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger2_2:
	end


Route3_Underpass_EvilBattle::
# 73 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 75 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 76 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_0
# 77 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 78 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 81 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_1
# 82 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 83 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_0
# 84 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_2
# 85 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 86 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_1
# 87 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_2
# 88 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_3
# 89 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 90 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_3
# 91 "data//maps/Route3_Underpass/scripts.pory"
	release
# 92 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 93 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_4
# 94 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 95 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_4
# 96 "data//maps/Route3_Underpass/scripts.pory"
	release
# 99 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_5
# 100 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 101 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_5
# 102 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_6
# 103 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 104 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_6
# 105 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Movement_0
# 106 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 107 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_7
# 108 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_8
# 109 "data//maps/Route3_Underpass/scripts.pory"
	release
# 112 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_EvilBattle_Text_9
# 115 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 116 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_7
# 117 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 118 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_8
# 119 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 120 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_10
# 121 "data//maps/Route3_Underpass/scripts.pory"
	release
# 122 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_9
# 123 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 124 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_11
# 125 "data//maps/Route3_Underpass/scripts.pory"
	release
# 126 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_10
# 127 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 128 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_GAB
# 131 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_11
# 132 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_12
# 133 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 134 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_12
# 135 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_13
# 136 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_14
# 137 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_15
# 138 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_16
# 139 "data//maps/Route3_Underpass/scripts.pory"
	release
# 140 "data//maps/Route3_Underpass/scripts.pory"
	giveitem ITEM_EVERSTONE
# 141 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_17
# 142 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_18
# 143 "data//maps/Route3_Underpass/scripts.pory"
	release
# 144 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 145 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_13
# 146 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_14
# 147 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement LOCALID_CLEF
# 148 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 149 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 150 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_19
# 151 "data//maps/Route3_Underpass/scripts.pory"
	release
# 152 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_15
# 153 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 154 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_BREECH
# 155 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_CLEF
# 157 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 158 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_11
# 159 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 160 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 163 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 164 "data//maps/Route3_Underpass/scripts.pory"
	fadedefaultbgm
# 165 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


# 44 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger0_Movement_0:
# 44 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 44 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 55 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger1_Movement_0:
# 55 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 66 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger2_Movement_0:
# 66 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 66 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 76 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_0:
# 76 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 81 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_1:
# 81 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 84 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_2:
# 84 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 84 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 88 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_3:
# 88 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 93 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_4:
# 93 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
# 93 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
	step_end

# 99 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_5:
# 99 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
# 99 "data//maps/Route3_Underpass/scripts.pory"
	emote_question_mark
	step_end

# 102 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_6:
# 102 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 116 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_7:
# 116 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 118 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_8:
# 118 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 122 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_9:
# 122 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 126 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_10:
# 126 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 126 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 126 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 126 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 126 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 126 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 126 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 131 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_11:
# 131 "data//maps/Route3_Underpass/scripts.pory"
	walk_up
	step_end

# 132 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_12:
# 132 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 132 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 145 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_13:
# 145 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 145 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 145 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 145 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 145 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 145 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 145 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 145 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 146 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_14:
# 146 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 146 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 146 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 146 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 152 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_15:
# 152 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 152 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 152 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 152 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 152 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

Route3_Underpass_Nurse_Text_0:
# 10 "data//maps/Route3_Underpass/scripts.pory"
	.string "This area is closed for the demo.$"

Route3_NurseJoy_OnRoute_Text_0:
# 18 "data//maps/Route3_Underpass/scripts.pory"
	.string "CHANSEY and I got the best assignment!\n"
	.string "Up in the hills...clean air...what more\l"
	.string "could a nurse ask for?$"

Route3_Underpass_NPC1_Text_0:
# 28 "data//maps/Route3_Underpass/scripts.pory"
	.string "A hiker with a Clefairy ran past here a\n"
	.string "while ago. He was being chased by some\l"
	.string "weirdo in a dark outfit. The things you\l"
	.string "see while on the road...$"

Route3_Underpass_NPC2_Text_0:
# 33 "data//maps/Route3_Underpass/scripts.pory"
	.string "They say that a rare Pokemon has made\n"
	.string "these caves its home. I need to go\l"
	.string "deeper down!$"

Route3_Underpass_EvilBattle_Text_0:
# 83 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Give it to me!$"

Route3_Underpass_EvilBattle_Text_1:
# 86 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: No! Stay away! Clefairy is MY\n"
	.string "partner!$"

Route3_Underpass_EvilBattle_Text_2:
# 87 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: I said give it to me! It's holding a\n"
	.string "dreamstone. That's too precious to be\l"
	.string "held by someone like you!$"

Route3_Underpass_EvilBattle_Text_3:
# 90 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: I don't know anything about\n"
	.string "any dreamstones, please! Just stop!$"

Route3_Underpass_EvilBattle_Text_4:
# 95 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy: clee!!!\p"
	.string "???: Hahaha! Your Clefairy wants to\n"
	.string "protect you, but you don't even have\l"
	.string "the will to fight alongside her. Just\l"
	.string "give up before I bring my Pokemon out!$"

Route3_Underpass_EvilBattle_Text_5:
# 101 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Who's there? What you do want?$"

Route3_Underpass_EvilBattle_Text_6:
# 104 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! This thug\n"
	.string "is trying to take Clefairy away! Help me,\l"
	.string "please!$"

Route3_Underpass_EvilBattle_Text_7:
# 107 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?$"

Route3_Underpass_EvilBattle_Text_8:
# 108 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: No? No?!?! Well then...let\n"
	.string "GABRIELLE teach you a lesson: don't\l"
	.string "stick your nose where it doesn't\l"
	.string "belong!$"

Route3_Underpass_EvilBattle_Text_9:
# 112 "data//maps/Route3_Underpass/scripts.pory"
	.string "My Pokemon just aren't good enough!$"

Route3_Underpass_EvilBattle_Text_10:
# 120 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: Fine - keep your stupid\n"
	.string "Clefairy!$"

Route3_Underpass_EvilBattle_Text_11:
# 124 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: And you! I'll remember this,\n"
	.string "{PLAYER}. You'll regret messing with\l"
	.string "Team Somber!$"

Route3_Underpass_EvilBattle_Text_12:
# 134 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - Clefairy and I are in your\n"
	.string "debt. The way you handled that thug was\l"
	.string "incredible.$"

Route3_Underpass_EvilBattle_Text_13:
# 135 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But with a partner, I can't be\l"
	.string "that way.$"

Route3_Underpass_EvilBattle_Text_14:
# 136 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\p"
	.string "...\p"
	.string "I let her down.$"

Route3_Underpass_EvilBattle_Text_15:
# 137 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If Team Somber comes after\l"
	.string "Clefairy again, we'll be ready.$"

Route3_Underpass_EvilBattle_Text_16:
# 138 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - we owe you. As thanks,\n"
	.string "Clefairy and I want to give you the\l"
	.string "stone that Gabrielle person was after...$"

Route3_Underpass_EvilBattle_Text_17:
# 141 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know about dreamstones, but it\n"
	.string "looks like a regular EVERSTONE to me.\l"
	.string "Who knows what she saw?$"

Route3_Underpass_EvilBattle_Text_18:
# 142 "data//maps/Route3_Underpass/scripts.pory"
	.string "Don't worry - Clefairy's bored of that\n"
	.string "stone already. Next, we'll head to Mt.\l"
	.string "Ceram to collect rare stones there!$"

Route3_Underpass_EvilBattle_Text_19:
# 150 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy: clee!!!$"
