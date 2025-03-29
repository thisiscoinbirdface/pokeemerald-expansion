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
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 32 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger0_Movement_0
# 33 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 34 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger0_2:
	end


Route3_Underpass_EvilBattle_Trigger1::
# 37 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger1_2
# 40 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 41 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 43 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 44 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 45 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger1_2:
	end


Route3_Underpass_EvilBattle_Trigger2::
# 48 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_EvilBattle_Trigger2_2
# 51 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 52 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 54 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger2_Movement_0
# 55 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 56 "data//maps/Route3_Underpass/scripts.pory"
	goto Route3_Underpass_EvilBattle
	return

Route3_Underpass_EvilBattle_Trigger2_2:
	end


Route3_Underpass_EvilBattle::
# 61 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 63 "data//maps/Route3_Underpass/scripts.pory"
	special SpawnCameraObject
# 64 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route3_Underpass_EvilBattle_Movement_0
# 65 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 66 "data//maps/Route3_Underpass/scripts.pory"
	special RemoveCameraObject
# 69 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_1
# 70 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 71 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_0
# 72 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_2
# 73 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 74 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_1
# 75 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_2
# 76 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_3
# 77 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 78 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_3
# 79 "data//maps/Route3_Underpass/scripts.pory"
	release
# 80 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 81 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Movement_4
# 82 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 83 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_4
# 84 "data//maps/Route3_Underpass/scripts.pory"
	release
# 87 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_5
# 88 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 89 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_5
# 90 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_6
# 91 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 92 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_6
# 93 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Movement_7
# 94 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 95 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_7
# 96 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_8
# 97 "data//maps/Route3_Underpass/scripts.pory"
	release
# 100 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_EvilBattle_Text_9
# 103 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 104 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_8
# 105 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 106 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_9
# 107 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 108 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_10
# 109 "data//maps/Route3_Underpass/scripts.pory"
	release
# 110 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_10
# 111 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 112 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_11
# 113 "data//maps/Route3_Underpass/scripts.pory"
	release
# 114 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_EvilBattle_Movement_0
# 115 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 116 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 2
# 119 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Movement_11
# 120 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_12
# 121 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 122 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_12
# 123 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_13
# 124 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_14
# 125 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_15
# 126 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_16
# 127 "data//maps/Route3_Underpass/scripts.pory"
	release
# 128 "data//maps/Route3_Underpass/scripts.pory"
	giveitem ITEM_EVERSTONE
# 129 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_17
# 130 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_18
# 131 "data//maps/Route3_Underpass/scripts.pory"
	release
# 132 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 133 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_EvilBattle_Movement_0
# 134 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Movement_13
# 135 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 136 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 3
# 137 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Movement_6
# 138 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 139 "data//maps/Route3_Underpass/scripts.pory"
	delay 30
# 140 "data//maps/Route3_Underpass/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 141 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_EvilBattle_Text_19
# 142 "data//maps/Route3_Underpass/scripts.pory"
	release
# 143 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 6, Route3_Underpass_EvilBattle_Trigger1_Movement_0
# 144 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 145 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 6
# 148 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 149 "data//maps/Route3_Underpass/scripts.pory"
	fadedefaultbgm
# 150 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


# 32 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger0_Movement_0:
# 32 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 32 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 43 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger1_Movement_0:
# 43 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 54 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Trigger2_Movement_0:
# 54 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 54 "data//maps/Route3_Underpass/scripts.pory"
	face_down
	step_end

# 64 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_0:
# 64 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 64 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 69 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_1:
# 69 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 72 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_2:
# 72 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 72 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 76 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_3:
# 76 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 81 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_4:
# 81 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
# 81 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_left
	step_end

# 87 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_5:
# 87 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
# 87 "data//maps/Route3_Underpass/scripts.pory"
	emote_question_mark
	step_end

# 90 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_6:
# 90 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 93 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_7:
# 93 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 104 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_8:
# 104 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 106 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_9:
# 106 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 110 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_10:
# 110 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 119 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_11:
# 119 "data//maps/Route3_Underpass/scripts.pory"
	walk_up
	step_end

# 120 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_12:
# 120 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 120 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 134 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_EvilBattle_Movement_13:
# 134 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 134 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 134 "data//maps/Route3_Underpass/scripts.pory"
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
# 71 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Give it to me!$"

Route3_Underpass_EvilBattle_Text_1:
# 74 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: No! Stay away! CLEFAIRY is MY\n"
	.string "partner!$"

Route3_Underpass_EvilBattle_Text_2:
# 75 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: I said give it to me! It's holding a\n"
	.string "dreamstone. That's too precious to be\l"
	.string "held by someone like you!$"

Route3_Underpass_EvilBattle_Text_3:
# 78 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: I don't know anything about\n"
	.string "any dreamstones, please! Just stop!$"

Route3_Underpass_EvilBattle_Text_4:
# 83 "data//maps/Route3_Underpass/scripts.pory"
	.string "CLEFAIRY: clee!!!\p"
	.string "???: Hahaha! Your CLEFAIRY wants to\n"
	.string "protect you, but you don't even have\l"
	.string "the will to fight alongside her. Just\l"
	.string "give up before I bring my {PKMN} out!$"

Route3_Underpass_EvilBattle_Text_5:
# 89 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Who's there? What you do want?$"

Route3_Underpass_EvilBattle_Text_6:
# 92 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! This thug\n"
	.string "is trying to take CLEFAIRY away! Help\l"
	.string "me, please!$"

Route3_Underpass_EvilBattle_Text_7:
# 95 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?$"

Route3_Underpass_EvilBattle_Text_8:
# 96 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: No? No?!?! Well then...let\n"
	.string "GABRIELLE teach you a lesson: don't\l"
	.string "stick your nose where it doesn't\l"
	.string "belong!$"

Route3_Underpass_EvilBattle_Text_9:
# 100 "data//maps/Route3_Underpass/scripts.pory"
	.string "My {PKMN} just aren't good enough!$"

Route3_Underpass_EvilBattle_Text_10:
# 108 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: Fine - keep your stupid\n"
	.string "CLEFAIRY!$"

Route3_Underpass_EvilBattle_Text_11:
# 112 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: And you! I'll remember this,\n"
	.string "{PLAYER}. You'll regret messing with\l"
	.string "Team Somber!$"

Route3_Underpass_EvilBattle_Text_12:
# 122 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - CLEFAIRY and I are in your\n"
	.string "debt. The way you handled that thug was\l"
	.string "incredible.$"

Route3_Underpass_EvilBattle_Text_13:
# 123 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But with a partner, I can't be\l"
	.string "that way.$"

Route3_Underpass_EvilBattle_Text_14:
# 124 "data//maps/Route3_Underpass/scripts.pory"
	.string "CLEFAIRY was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\p"
	.string "...\p"
	.string "I let her down.$"

Route3_Underpass_EvilBattle_Text_15:
# 125 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If Team Somber comes after\l"
	.string "CLEFAIRY again, we'll be ready.$"

Route3_Underpass_EvilBattle_Text_16:
# 126 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - we owe you. As thanks,\n"
	.string "CLEFAIRY and I want to give you the\l"
	.string "stone that GABRIELLE person was\l"
	.string "after...$"

Route3_Underpass_EvilBattle_Text_17:
# 129 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know about dreamstones, but it\n"
	.string "looks like a regular EVERSTONE to me.\l"
	.string "Who knows what she saw?$"

Route3_Underpass_EvilBattle_Text_18:
# 130 "data//maps/Route3_Underpass/scripts.pory"
	.string "Don't worry - CLEFAIRY's bored of that\n"
	.string "stone already. Next, we'll head to MT\l"
	.string "CERAM to collect rare stones there!$"

Route3_Underpass_EvilBattle_Text_19:
# 141 "data//maps/Route3_Underpass/scripts.pory"
	.string "CLEFAIRY: clee!!!$"
