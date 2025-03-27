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


Route3_Underpass_NPC1::
# 12 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 13 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 14 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC1_Text_0
# 15 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


Route3_Underpass_NPC2::
# 19 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 20 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 21 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC2_Text_0
# 22 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


Route3_Underpass_EvilBattle_Trigger0::
# 26 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger0_2
# 29 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 30 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger0_Movement_0
# 31 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger0_2:
	end


Route3_Underpass_EvilBattle_Trigger1::
# 34 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger1_2
# 37 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 38 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 39 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger1_2:
	end


Route3_Underpass_EvilBattle_Trigger2::
# 42 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger2_2
# 45 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 46 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger2_Movement_0
# 47 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger2_2:
	end


Route3_Underpass_EvilBattle::
# 52 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 54 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 56 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 57 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_0
# 58 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 59 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 62 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_1
# 63 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 64 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_0
# 65 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_2
# 66 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 67 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_1
# 68 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_2
# 69 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_3
# 70 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 71 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_3
# 72 "data//maps/Route3_Underpass/scripts.pory"
	release
# 73 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 74 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Movement_4
# 75 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 76 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_4
# 77 "data//maps/Route3_Underpass/scripts.pory"
	release
# 80 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_5
# 81 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 82 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_5
# 83 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_6
# 84 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 85 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_6
# 86 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Movement_7
# 87 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 88 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_7
# 89 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_8
# 90 "data//maps/Route3_Underpass/scripts.pory"
	release
# 93 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_EvilBattle_Text_9
# 96 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_8
# 97 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 98 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_9
# 99 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 100 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_10
# 101 "data//maps/Route3_Underpass/scripts.pory"
	release
# 102 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_10
# 103 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 104 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_11
# 105 "data//maps/Route3_Underpass/scripts.pory"
	release
# 106 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_0
# 107 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 108 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 2
# 111 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_11
# 112 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 113 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_12
# 114 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_13
# 115 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_14
# 116 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_15
# 117 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_16
# 118 "data//maps/Route3_Underpass/scripts.pory"
	release
# 119 "data//maps/Route3_Underpass/scripts.pory"
	giveitem ITEM_EVERSTONE
# 120 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_17
# 121 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_18
# 122 "data//maps/Route3_Underpass/scripts.pory"
	release
# 123 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 124 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_0
# 125 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Movement_12
# 126 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 127 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 3
# 128 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Movement_6
# 129 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 130 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 131 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 132 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_19
# 133 "data//maps/Route3_Underpass/scripts.pory"
	release
# 134 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 135 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 136 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 6
# 139 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 140 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


# 30 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger0_Movement_0:
# 30 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 30 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 38 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger1_Movement_0:
# 38 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 46 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger2_Movement_0:
# 46 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 46 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 57 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_0:
# 57 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 57 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 62 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_1:
# 62 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 65 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_2:
# 65 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 65 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 69 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_3:
# 69 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 74 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_4:
# 74 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
# 74 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
	step_end

# 80 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_5:
# 80 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
# 80 "data//maps/Route3_Underpass/scripts.pory"
	emote_question_mark
	step_end

# 83 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_6:
# 83 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 86 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_7:
# 86 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 96 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_8:
# 96 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 98 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_9:
# 98 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 102 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_10:
# 102 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 111 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_11:
# 111 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 111 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 125 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_12:
# 125 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 125 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 125 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

Route3_Underpass_Nurse_Text_0:
# 6 "data//maps/Route3_Underpass/scripts.pory"
	.string "This area is closed for the demo.$"

Route3_Underpass_NPC1_Text_0:
# 14 "data//maps/Route3_Underpass/scripts.pory"
	.string "A hiker with a CLEFAIRY ran past here a\n"
	.string "while ago. He was being chased by some\l"
	.string "weirdo in a dark outfit. The things you\l"
	.string "see while on the road...$"

Route3_Underpass_NPC2_Text_0:
# 21 "data//maps/Route3_Underpass/scripts.pory"
	.string "They say that a rare {PKMN} has made these\n"
	.string "caves its home. I need to go deeper\l"
	.string "down!$"

Route3_Underpass_EvilBattle_Text_0:
# 64 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Give it to me!$"

Route3_Underpass_EvilBattle_Text_1:
# 67 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: No! Stay away! CLEFAIRY is MY\n"
	.string "partner!$"

Route3_Underpass_EvilBattle_Text_2:
# 68 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: I said give it to me! It's holding a\n"
	.string "dreamstone. That's too precious to be\l"
	.string "held by someone like you!$"

Route3_Underpass_EvilBattle_Text_3:
# 71 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: I don't know anything about\n"
	.string "any dreamstones, please! Just stop!$"

Route3_Underpass_EvilBattle_Text_4:
# 76 "data//maps/Route3_Underpass/scripts.pory"
	.string "CLEFAIRY: clee!!!\p"
	.string "???: Hahaha! Your CLEFAIRY wants to\n"
	.string "protect you, but you don't even have\l"
	.string "the will to fight alongside her. Just\l"
	.string "give up before I bring my {PKMN} out!$"

Route3_Underpass_EvilBattle_Text_5:
# 82 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Who's there? What you do want?$"

Route3_Underpass_EvilBattle_Text_6:
# 85 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! This thug\n"
	.string "is trying to take CLEFAIRY away! Help\l"
	.string "me, please!$"

Route3_Underpass_EvilBattle_Text_7:
# 88 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?$"

Route3_Underpass_EvilBattle_Text_8:
# 89 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: No? No?!?! Well then...let\n"
	.string "GABRIELLE teach you a lesson: don't\l"
	.string "stick your nose where it doesn't\l"
	.string "belong!$"

Route3_Underpass_EvilBattle_Text_9:
# 93 "data//maps/Route3_Underpass/scripts.pory"
	.string "My {PKMN} just aren't good enough!$"

Route3_Underpass_EvilBattle_Text_10:
# 100 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: Fine - keep your stupid\n"
	.string "CLEFAIRY! It's not like I enjoy doing\l"
	.string "this...but we have to achieve our goals!$"

Route3_Underpass_EvilBattle_Text_11:
# 104 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: And you! I'll remember this,\n"
	.string "{PLAYER}. You'll regret messing with\l"
	.string "Team Somber!$"

Route3_Underpass_EvilBattle_Text_12:
# 113 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - CLEFAIRY and I are in your\n"
	.string "debt. The way you handled that thug was\l"
	.string "incredible.$"

Route3_Underpass_EvilBattle_Text_13:
# 114 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But with a partner, I can't be\l"
	.string "that way.$"

Route3_Underpass_EvilBattle_Text_14:
# 115 "data//maps/Route3_Underpass/scripts.pory"
	.string "CLEFAIRY was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\p"
	.string "...\p"
	.string "I let her down.$"

Route3_Underpass_EvilBattle_Text_15:
# 116 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If Team Somber comes after\l"
	.string "CLEFAIRY again, we'll be ready.$"

Route3_Underpass_EvilBattle_Text_16:
# 117 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - we owe you. As thanks,\n"
	.string "CLEFAIRY and I want to give you the\l"
	.string "stone that GABRIELLE person was\l"
	.string "after...$"

Route3_Underpass_EvilBattle_Text_17:
# 120 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know anything about\n"
	.string "dreamstones, but it looks like a regular\l"
	.string "EVERSTONE to me. Who knows what she\l"
	.string "saw?$"

Route3_Underpass_EvilBattle_Text_18:
# 121 "data//maps/Route3_Underpass/scripts.pory"
	.string "Don't worry - CLEFAIRY's bored of that\n"
	.string "stone already. Next, we'll head to MT\l"
	.string "CERAM to collect rare stones there!$"

Route3_Underpass_EvilBattle_Text_19:
# 132 "data//maps/Route3_Underpass/scripts.pory"
	.string "CLEFAIRY: clee!!!$"
