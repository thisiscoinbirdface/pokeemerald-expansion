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
	lockall
# 11 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 12 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Nurse_Text_0
# 13 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	end


Route3_NurseJoy_OnRoute::
# 19 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 20 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 21 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_NurseJoy_OnRoute_Text_0
# 22 "data//maps/Route3_Underpass/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 23 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 24 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	end


Route3_Underpass_NPC1::
# 31 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 32 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 33 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC1_Text_0
# 34 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


Route3_Underpass_NPC2::
# 38 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 39 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 40 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC2_Text_0
# 41 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


Route3_Underpass_EvilBattle_Trigger0::
# 45 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger0_2
# 48 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 49 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 51 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger0_Movement_0
# 52 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 53 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger0_2:
	end


Route3_Underpass_EvilBattle_Trigger1::
# 56 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger1_2
# 59 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 60 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 62 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 63 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 64 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger1_2:
	end


Route3_Underpass_EvilBattle_Trigger2::
# 67 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger2_2
# 70 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 71 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 73 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger2_Movement_0
# 74 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 75 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger2_2:
	end


Route3_Underpass_EvilBattle::
# 80 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 82 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 83 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_0
# 84 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 85 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 88 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_1
# 89 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 90 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_0
# 91 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_2
# 92 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 93 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_1
# 94 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_2
# 95 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_3
# 96 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 97 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_3
# 98 "data//maps/Route3_Underpass/scripts.pory"
	release
# 99 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 100 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_4
# 101 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 102 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_4
# 103 "data//maps/Route3_Underpass/scripts.pory"
	release
# 106 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_5
# 107 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 108 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_5
# 109 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_6
# 110 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 111 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_6
# 112 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Movement_0
# 113 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 114 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_7
# 115 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_8
# 116 "data//maps/Route3_Underpass/scripts.pory"
	release
# 119 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_EvilBattle_Text_9
# 122 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 123 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_7
# 124 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 125 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_8
# 126 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 127 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_10
# 128 "data//maps/Route3_Underpass/scripts.pory"
	release
# 129 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_9
# 130 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 131 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_11
# 132 "data//maps/Route3_Underpass/scripts.pory"
	release
# 133 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_GAB, Route3_Underpass_EvilBattle_Movement_10
# 134 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 135 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_GAB
# 138 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_11
# 139 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_12
# 140 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 141 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_12
# 142 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_13
# 143 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_14
# 144 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_15
# 145 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_16
# 146 "data//maps/Route3_Underpass/scripts.pory"
	release
# 147 "data//maps/Route3_Underpass/scripts.pory"
	giveitem ITEM_EVERSTONE
# 148 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_17
# 149 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_18
# 150 "data//maps/Route3_Underpass/scripts.pory"
	release
# 151 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 152 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_BREECH, Route3_Underpass_EvilBattle_Movement_13
# 153 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_14
# 154 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement LOCALID_CLEF
# 155 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 156 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 157 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_19
# 158 "data//maps/Route3_Underpass/scripts.pory"
	release
# 159 "data//maps/Route3_Underpass/scripts.pory"
	applymovement LOCALID_CLEF, Route3_Underpass_EvilBattle_Movement_15
# 160 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 161 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_BREECH
# 162 "data//maps/Route3_Underpass/scripts.pory"
	removeobject LOCALID_CLEF
# 164 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 165 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_11
# 166 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 167 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 170 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 171 "data//maps/Route3_Underpass/scripts.pory"
	fadedefaultbgm
# 172 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


# 51 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger0_Movement_0:
# 51 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 51 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 62 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger1_Movement_0:
# 62 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 73 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger2_Movement_0:
# 73 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 73 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 83 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_0:
# 83 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 88 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_1:
# 88 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 91 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_2:
# 91 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 91 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 95 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_3:
# 95 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 100 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_4:
# 100 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
# 100 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
	step_end

# 106 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_5:
# 106 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
# 106 "data//maps/Route3_Underpass/scripts.pory"
	emote_question_mark
	step_end

# 109 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_6:
# 109 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 123 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_7:
# 123 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 125 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_8:
# 125 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 129 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_9:
# 129 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 133 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_10:
# 133 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 133 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 133 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 133 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 133 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 133 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 133 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 138 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_11:
# 138 "data//maps/Route3_Underpass/scripts.pory"
	walk_up
	step_end

# 139 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_12:
# 139 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 139 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 152 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_13:
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
# 152 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 152 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 152 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 153 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_14:
# 153 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 153 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 153 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 153 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 159 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_15:
# 159 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 159 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 159 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 159 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 159 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

Route3_Underpass_Nurse_Text_0:
# 12 "data//maps/Route3_Underpass/scripts.pory"
	.string "This area is closed for the demo.$"

Route3_NurseJoy_OnRoute_Text_0:
# 21 "data//maps/Route3_Underpass/scripts.pory"
	.string "CHANSEY and I got the best assignment!\n"
	.string "Up in the hills...clean air...what more\l"
	.string "could a nurse ask for?$"

Route3_Underpass_NPC1_Text_0:
# 33 "data//maps/Route3_Underpass/scripts.pory"
	.string "A hiker with a Clefairy ran past here a\n"
	.string "while ago. He was being chased by some\l"
	.string "weirdo in a dark outfit. The things you\l"
	.string "see while on the road...$"

Route3_Underpass_NPC2_Text_0:
# 40 "data//maps/Route3_Underpass/scripts.pory"
	.string "They say that a rare Pokemon has made\n"
	.string "these caves its home. I need to go\l"
	.string "deeper down!$"

Route3_Underpass_EvilBattle_Text_0:
# 90 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Give it to me!$"

Route3_Underpass_EvilBattle_Text_1:
# 93 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: No! Stay away! Clefairy is MY\n"
	.string "partner!$"

Route3_Underpass_EvilBattle_Text_2:
# 94 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: I said give it to me! It's holding a\n"
	.string "dreamstone. That's too precious to be\l"
	.string "held by someone like you!$"

Route3_Underpass_EvilBattle_Text_3:
# 97 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: I don't know anything about\n"
	.string "any dreamstones, please! Just stop!$"

Route3_Underpass_EvilBattle_Text_4:
# 102 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy: clee!!!\p"
	.string "???: Hahaha! Your Clefairy wants to\n"
	.string "protect you, but you don't even have\l"
	.string "the will to fight alongside her. Just\l"
	.string "give up before I bring my Pokemon out!$"

Route3_Underpass_EvilBattle_Text_5:
# 108 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Who's there? What you do want?$"

Route3_Underpass_EvilBattle_Text_6:
# 111 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! This thug\n"
	.string "is trying to take Clefairy away! Help me,\l"
	.string "please!$"

Route3_Underpass_EvilBattle_Text_7:
# 114 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?$"

Route3_Underpass_EvilBattle_Text_8:
# 115 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: No? No?!?! Well then...let\n"
	.string "GABRIELLE teach you a lesson: don't\l"
	.string "stick your nose where it doesn't\l"
	.string "belong!$"

Route3_Underpass_EvilBattle_Text_9:
# 119 "data//maps/Route3_Underpass/scripts.pory"
	.string "My Pokemon just aren't good enough!$"

Route3_Underpass_EvilBattle_Text_10:
# 127 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: Fine - keep your stupid\n"
	.string "Clefairy!$"

Route3_Underpass_EvilBattle_Text_11:
# 131 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: And you! I'll remember this,\n"
	.string "{PLAYER}. You'll regret messing with\l"
	.string "Team Somber!$"

Route3_Underpass_EvilBattle_Text_12:
# 141 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - Clefairy and I are in your\n"
	.string "debt. The way you handled that thug was\l"
	.string "incredible.$"

Route3_Underpass_EvilBattle_Text_13:
# 142 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But with a partner, I can't be\l"
	.string "that way.$"

Route3_Underpass_EvilBattle_Text_14:
# 143 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\p"
	.string "...\p"
	.string "I let her down.$"

Route3_Underpass_EvilBattle_Text_15:
# 144 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If Team Somber comes after\l"
	.string "Clefairy again, we'll be ready.$"

Route3_Underpass_EvilBattle_Text_16:
# 145 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - we owe you. As thanks,\n"
	.string "Clefairy and I want to give you the\l"
	.string "stone that Gabrielle person was after...$"

Route3_Underpass_EvilBattle_Text_17:
# 148 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know about dreamstones, but it\n"
	.string "looks like a regular EVERSTONE to me.\l"
	.string "Who knows what she saw?$"

Route3_Underpass_EvilBattle_Text_18:
# 149 "data//maps/Route3_Underpass/scripts.pory"
	.string "Don't worry - Clefairy's bored of that\n"
	.string "stone already. Next, we'll head to Mt.\l"
	.string "Ceram to collect rare stones there!$"

Route3_Underpass_EvilBattle_Text_19:
# 157 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy: clee!!!$"
