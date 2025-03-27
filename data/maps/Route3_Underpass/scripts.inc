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


Route3_Underpass_Trigger_EvilBattle::
# 27 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_Trigger_EvilBattle_2
# 32 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 33 "data//maps/Route3_Underpass/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 35 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_0
# 36 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 37 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_0
# 38 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_1
# 39 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 40 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_1
# 41 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_2
# 42 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_2
# 43 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 44 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_3
# 45 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_4
# 46 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_5
# 49 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_3
# 50 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 51 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_6
# 52 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_4
# 53 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 54 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_7
# 55 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_Trigger_EvilBattle_Movement_5
# 56 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 57 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_8
# 58 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_9
# 59 "data//maps/Route3_Underpass/scripts.pory"
	release
# 62 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_Trigger_EvilBattle_Text_10
# 65 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_6
# 66 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 67 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_7
# 68 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 69 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_11
# 70 "data//maps/Route3_Underpass/scripts.pory"
	release
# 71 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_3
# 72 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 73 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_12
# 74 "data//maps/Route3_Underpass/scripts.pory"
	release
# 75 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_8
# 76 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 77 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 2
# 80 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_9
# 81 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 82 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_13
# 83 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_14
# 84 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_15
# 85 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_16
# 86 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_17
# 87 "data//maps/Route3_Underpass/scripts.pory"
	release
# 88 "data//maps/Route3_Underpass/scripts.pory"
	giveitem ITEM_EVERSTONE
# 89 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_18
# 90 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_19
# 91 "data//maps/Route3_Underpass/scripts.pory"
	release
# 92 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_8
# 93 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 94 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 3
# 97 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 98 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return

Route3_Underpass_Trigger_EvilBattle_2:
	end


# 35 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_0:
# 35 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 38 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_1:
# 38 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 38 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 42 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_2:
# 42 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 49 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_3:
# 49 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 52 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_4:
# 52 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 55 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_5:
# 55 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 65 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_6:
# 65 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 67 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_7:
# 67 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 75 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_8:
# 75 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 75 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 80 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_9:
# 80 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 80 "data//maps/Route3_Underpass/scripts.pory"
	face_up
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

Route3_Underpass_Trigger_EvilBattle_Text_0:
# 37 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Give it to me!$"

Route3_Underpass_Trigger_EvilBattle_Text_1:
# 40 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: No! Stay away! CLEFAIRY is MY\n"
	.string "partner!$"

Route3_Underpass_Trigger_EvilBattle_Text_2:
# 41 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: I said give it to me! It's holding a\n"
	.string "dreamstone. That's too precious to be\l"
	.string "held by someone like you!$"

Route3_Underpass_Trigger_EvilBattle_Text_3:
# 44 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: I don't know anything about\n"
	.string "any dreamstones, please! Just stop!$"

Route3_Underpass_Trigger_EvilBattle_Text_4:
# 45 "data//maps/Route3_Underpass/scripts.pory"
	.string "CLEFAIRY: clee!!!$"

Route3_Underpass_Trigger_EvilBattle_Text_5:
# 46 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Hahaha! Your CLEFAIRY wants to\n"
	.string "protect you, but you don't even have\l"
	.string "the will to fight alongside her. Just\l"
	.string "give up before I bring my {PKMN} out!$"

Route3_Underpass_Trigger_EvilBattle_Text_6:
# 51 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Who's there? What you do want?$"

Route3_Underpass_Trigger_EvilBattle_Text_7:
# 54 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! This thug\n"
	.string "is trying to take CLEFAIRY away! Help\l"
	.string "me, please!$"

Route3_Underpass_Trigger_EvilBattle_Text_8:
# 57 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?$"

Route3_Underpass_Trigger_EvilBattle_Text_9:
# 58 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: No? No?!?! Well then...let\n"
	.string "GABRIELLE teach you a lesson: don't\l"
	.string "stick your nose where it doesn't\l"
	.string "belong!$"

Route3_Underpass_Trigger_EvilBattle_Text_10:
# 62 "data//maps/Route3_Underpass/scripts.pory"
	.string "My {PKMN} just aren't good enough!$"

Route3_Underpass_Trigger_EvilBattle_Text_11:
# 69 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: Fine - keep your stupid\n"
	.string "CLEFAIRY! It's not like I enjoy doing\l"
	.string "this...but we have to achieve our goals!$"

Route3_Underpass_Trigger_EvilBattle_Text_12:
# 73 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: And you! I'll remember this,\n"
	.string "{PLAYER}. You'll regret messing with\l"
	.string "Team Somber!$"

Route3_Underpass_Trigger_EvilBattle_Text_13:
# 82 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - CLEFAIRY and I are in your\n"
	.string "debt. The way you handled that thug was\l"
	.string "incredible.$"

Route3_Underpass_Trigger_EvilBattle_Text_14:
# 83 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But with a partner, I can't be\l"
	.string "that way.$"

Route3_Underpass_Trigger_EvilBattle_Text_15:
# 84 "data//maps/Route3_Underpass/scripts.pory"
	.string "CLEFAIRY was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\p"
	.string "I let her down.$"

Route3_Underpass_Trigger_EvilBattle_Text_16:
# 85 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If Team Somber comes after\l"
	.string "CLEFAIRY again, we'll be ready.$"

Route3_Underpass_Trigger_EvilBattle_Text_17:
# 86 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - we owe you. As thanks,\n"
	.string "CLEFAIRY and I want to give you the\l"
	.string "stone that GABRIELLE person was\l"
	.string "after...$"

Route3_Underpass_Trigger_EvilBattle_Text_18:
# 89 "data//maps/Route3_Underpass/scripts.pory"
	.string "I don't know anything about\n"
	.string "dreamstones, but it looks like a regular\l"
	.string "EVERSTONE to me. Who knows what she\l"
	.string "saw?$"

Route3_Underpass_Trigger_EvilBattle_Text_19:
# 90 "data//maps/Route3_Underpass/scripts.pory"
	.string "Don't worry - CLEFAIRY's bored of that\n"
	.string "stone already. Next, we'll head to MT\l"
	.string "CERAM to collect rare stones there!$"
