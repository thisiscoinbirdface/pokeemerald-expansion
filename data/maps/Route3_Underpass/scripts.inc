Route3_Underpass_MapScripts::
	.byte 0


Route3_Underpass_Nurse::
# 4 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 5 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 6 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Nurse_Text_0
# 7 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	end


Route3_NurseJoy_OnRoute::
# 13 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 14 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 15 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_NurseJoy_OnRoute_Text_0
# 16 "data//maps/Route3_Underpass/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 17 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 18 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	end


Route3_Underpass_NPC1::
# 25 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 26 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 27 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC1_Text_0
# 28 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


Route3_Underpass_NPC2::
# 32 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 33 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 34 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC2_Text_0
# 35 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


Route3_Underpass_EvilBattle_Trigger0::
# 39 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger0_2
# 42 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 43 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 45 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger0_Movement_0
# 46 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 47 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger0_2:
	end


Route3_Underpass_EvilBattle_Trigger1::
# 50 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger1_2
# 53 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 54 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 56 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 57 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 58 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger1_2:
	end


Route3_Underpass_EvilBattle_Trigger2::
# 61 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger2_2
# 64 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 65 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 67 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger2_Movement_0
# 68 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 69 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger2_2:
	end


Route3_Underpass_EvilBattle::
# 74 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 76 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 77 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_0
# 78 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 79 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 82 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_1
# 83 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 84 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_0
# 85 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_2
# 86 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 87 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_1
# 88 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_2
# 89 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_3
# 90 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 91 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_3
# 92 "data//maps/Route3_Underpass/scripts.pory"
	release
# 93 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 94 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Movement_4
# 95 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 96 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_4
# 97 "data//maps/Route3_Underpass/scripts.pory"
	release
# 100 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_5
# 101 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 102 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_5
# 103 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_6
# 104 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 105 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_6
# 106 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Movement_7
# 107 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 108 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_7
# 109 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_8
# 110 "data//maps/Route3_Underpass/scripts.pory"
	release
# 113 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_EvilBattle_Text_9
# 116 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 117 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_8
# 118 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 119 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_9
# 120 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 121 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_10
# 122 "data//maps/Route3_Underpass/scripts.pory"
	release
# 123 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_10
# 124 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 125 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_11
# 126 "data//maps/Route3_Underpass/scripts.pory"
	release
# 127 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_11
# 128 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 129 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 2
# 132 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Movement_12
# 133 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_13
# 134 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 135 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_12
# 136 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_13
# 137 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_14
# 138 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_15
# 139 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_16
# 140 "data//maps/Route3_Underpass/scripts.pory"
	release
# 141 "data//maps/Route3_Underpass/scripts.pory"
	giveitem ITEM_EVERSTONE
# 142 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_17
# 143 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_18
# 144 "data//maps/Route3_Underpass/scripts.pory"
	release
# 145 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 146 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_11
# 147 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Movement_14
# 148 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 6
# 149 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 150 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 151 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_19
# 152 "data//maps/Route3_Underpass/scripts.pory"
	release
# 153 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Movement_15
# 154 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 155 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 3
# 156 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 6
# 158 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 159 "data//maps/Route3_Underpass/scripts.pory"
	fadedefaultbgm
# 160 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


# 45 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger0_Movement_0:
# 45 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 45 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 56 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger1_Movement_0:
# 56 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 67 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger2_Movement_0:
# 67 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 67 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 77 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_0:
# 77 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 77 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 82 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_1:
# 82 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 85 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_2:
# 85 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 85 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 89 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_3:
# 89 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 94 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_4:
# 94 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
# 94 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
	step_end

# 100 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_5:
# 100 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
# 100 "data//maps/Route3_Underpass/scripts.pory"
	emote_question_mark
	step_end

# 103 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_6:
# 103 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 106 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_7:
# 106 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 117 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_8:
# 117 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 119 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_9:
# 119 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 123 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_10:
# 123 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 127 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_11:
# 127 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 127 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 127 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 127 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 127 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 127 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 127 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 132 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_12:
# 132 "data//maps/Route3_Underpass/scripts.pory"
	walk_up
	step_end

# 133 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_13:
# 133 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 133 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 147 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_14:
# 147 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 147 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 147 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 147 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 153 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_15:
# 153 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 153 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 153 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 153 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

Route3_Underpass_Nurse_Text_0:
# 6 "data//maps/Route3_Underpass/scripts.pory"
	.string "This area is closed for the demo.$"

Route3_NurseJoy_OnRoute_Text_0:
# 15 "data//maps/Route3_Underpass/scripts.pory"
	.string "CHANSEY and I got the best assignment!\n"
	.string "Up in the hills...clean air...what more\l"
	.string "could a nurse ask for?$"

Route3_Underpass_NPC1_Text_0:
# 27 "data//maps/Route3_Underpass/scripts.pory"
	.string "A hiker with a Clefairy ran past here a\n"
	.string "while ago. He was being chased by some\l"
	.string "weirdo in a dark outfit. The things you\l"
	.string "see while on the road...$"

Route3_Underpass_NPC2_Text_0:
# 34 "data//maps/Route3_Underpass/scripts.pory"
	.string "They say that a rare Pokemon has made\n"
	.string "these caves its home. I need to go\l"
	.string "deeper down!$"

Route3_Underpass_EvilBattle_Text_0:
# 84 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Give it to me!$"

Route3_Underpass_EvilBattle_Text_1:
# 87 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: No! Stay away! Clefairy is MY\n"
	.string "partner!$"

Route3_Underpass_EvilBattle_Text_2:
# 88 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: I said give it to me! It's holding a\n"
	.string "dreamstone. That's too precious to be\l"
	.string "held by someone like you!$"

Route3_Underpass_EvilBattle_Text_3:
# 91 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: I don't know anything about\n"
	.string "any dreamstones, please! Just stop!$"

Route3_Underpass_EvilBattle_Text_4:
# 96 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy: clee!!!\p"
	.string "???: Hahaha! Your Clefairy wants to\n"
	.string "protect you, but you don't even have\l"
	.string "the will to fight alongside her. Just\l"
	.string "give up before I bring my Pokemon out!$"

Route3_Underpass_EvilBattle_Text_5:
# 102 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Who's there? What you do want?$"

Route3_Underpass_EvilBattle_Text_6:
# 105 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! This thug\n"
	.string "is trying to take Clefairy away! Help me,\l"
	.string "please!$"

Route3_Underpass_EvilBattle_Text_7:
# 108 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?$"

Route3_Underpass_EvilBattle_Text_8:
# 109 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: No? No?!?! Well then...let\n"
	.string "GABRIELLE teach you a lesson: don't\l"
	.string "stick your nose where it doesn't\l"
	.string "belong!$"

Route3_Underpass_EvilBattle_Text_9:
# 113 "data//maps/Route3_Underpass/scripts.pory"
	.string "My Pokemon just aren't good enough!$"

Route3_Underpass_EvilBattle_Text_10:
# 121 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: Fine - keep your stupid\n"
	.string "Clefairy!$"

Route3_Underpass_EvilBattle_Text_11:
# 125 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: And you! I'll remember this,\n"
	.string "{PLAYER}. You'll regret messing with\l"
	.string "Team Somber!$"

Route3_Underpass_EvilBattle_Text_12:
# 135 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - Clefairy and I are in your\n"
	.string "debt. The way you handled that thug was\l"
	.string "incredible.$"

Route3_Underpass_EvilBattle_Text_13:
# 136 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But with a partner, I can't be\l"
	.string "that way.$"

Route3_Underpass_EvilBattle_Text_14:
# 137 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\p"
	.string "...\p"
	.string "I let her down.$"

Route3_Underpass_EvilBattle_Text_15:
# 138 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If Team Somber comes after\l"
	.string "Clefairy again, we'll be ready.$"

Route3_Underpass_EvilBattle_Text_16:
# 139 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - we owe you. As thanks,\n"
	.string "Clefairy and I want to give you the\l"
	.string "stone that Gabrielle person was after...$"

Route3_Underpass_EvilBattle_Text_17:
# 142 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know about dreamstones, but it\n"
	.string "looks like a regular EVERSTONE to me.\l"
	.string "Who knows what she saw?$"

Route3_Underpass_EvilBattle_Text_18:
# 143 "data//maps/Route3_Underpass/scripts.pory"
	.string "Don't worry - Clefairy's bored of that\n"
	.string "stone already. Next, we'll head to Mt.\l"
	.string "Ceram to collect rare stones there!$"

Route3_Underpass_EvilBattle_Text_19:
# 151 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy: clee!!!$"
