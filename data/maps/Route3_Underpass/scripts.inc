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
	return


Route3_Underpass_NPC1::
# 11 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 12 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 13 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC1_Text_0
# 14 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


Route3_Underpass_NPC2::
# 18 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 19 "data//maps/Route3_Underpass/scripts.pory"
	faceplayer
# 20 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC2_Text_0
# 21 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


Route3_Underpass_Trigger_EvilBattle::
# 26 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_Trigger_EvilBattle_2
# 31 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 34 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_0
# 35 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 36 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_0
# 37 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_1
# 38 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 39 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_1
# 40 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_2
# 41 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_2
# 42 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 43 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_3
# 44 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_4
# 45 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_5
# 48 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_3
# 49 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 50 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_6
# 51 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_4
# 52 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 53 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_7
# 54 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_Trigger_EvilBattle_Movement_5
# 55 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 56 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_8
# 57 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_9
# 58 "data//maps/Route3_Underpass/scripts.pory"
	release
# 61 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_Trigger_EvilBattle_Text_10
# 64 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_6
# 65 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 66 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_7
# 67 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 68 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_11
# 69 "data//maps/Route3_Underpass/scripts.pory"
	release
# 70 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_3
# 71 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 72 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_12
# 73 "data//maps/Route3_Underpass/scripts.pory"
	release
# 74 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_8
# 75 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 76 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 2
# 79 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_9
# 80 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 81 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_13
# 82 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_14
# 83 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_15
# 84 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_16
# 85 "data//maps/Route3_Underpass/scripts.pory"
	release
# 86 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_8
# 87 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 88 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 3
# 91 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 92 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return

Route3_Underpass_Trigger_EvilBattle_2:
	end


# 34 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_0:
# 34 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 37 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_1:
# 37 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 37 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 41 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_2:
# 41 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 48 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_3:
# 48 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 51 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_4:
# 51 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 54 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_5:
# 54 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 64 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_6:
# 64 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 66 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_7:
# 66 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 74 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_8:
# 74 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 74 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 79 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_9:
# 79 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 79 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

Route3_Underpass_Nurse_Text_0:
# 6 "data//maps/Route3_Underpass/scripts.pory"
	.string "This area is closed for the demo.$"

Route3_Underpass_NPC1_Text_0:
# 13 "data//maps/Route3_Underpass/scripts.pory"
	.string "A hiker with a Clefairy ran past here a\n"
	.string "while ago. He was being chased by some\l"
	.string "weirdo in a dark outfit. The things you\l"
	.string "see while on the road...$"

Route3_Underpass_NPC2_Text_0:
# 20 "data//maps/Route3_Underpass/scripts.pory"
	.string "They say that a rare {PKMN} has made these\n"
	.string "caves its home. I need to go deeper\l"
	.string "down!$"

Route3_Underpass_Trigger_EvilBattle_Text_0:
# 36 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Give it to me!$"

Route3_Underpass_Trigger_EvilBattle_Text_1:
# 39 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: No! Stay away! Clefairy is MY\n"
	.string "partner!$"

Route3_Underpass_Trigger_EvilBattle_Text_2:
# 40 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: I said give it to me! It's holding a\n"
	.string "dreamstone. That's too precious to be\l"
	.string "held by someone like you!$"

Route3_Underpass_Trigger_EvilBattle_Text_3:
# 43 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: I don't know anything about\n"
	.string "any dreamstones, please! Just stop!$"

Route3_Underpass_Trigger_EvilBattle_Text_4:
# 44 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy: clee!!!$"

Route3_Underpass_Trigger_EvilBattle_Text_5:
# 45 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Hahaha! Your Clefairy wants to\n"
	.string "protect you, but you don't even have\l"
	.string "the will to fight alongside her. Just\l"
	.string "give up before I bring my {PKMN} out!$"

Route3_Underpass_Trigger_EvilBattle_Text_6:
# 50 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Who's there? What you do want?$"

Route3_Underpass_Trigger_EvilBattle_Text_7:
# 53 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! This thug\n"
	.string "is trying to take Clefairy away! Help me,\l"
	.string "please!$"

Route3_Underpass_Trigger_EvilBattle_Text_8:
# 56 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?\l"
	.string "Play with your toys at home. Get out of\l"
	.string "here before I hurt you!$"

Route3_Underpass_Trigger_EvilBattle_Text_9:
# 57 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: No? No?!?! Well then...let\n"
	.string "Miss Gabrielle teach you a lesson: don't\l"
	.string "stick your nose where it doesn't\l"
	.string "belong!$"

Route3_Underpass_Trigger_EvilBattle_Text_10:
# 61 "data//maps/Route3_Underpass/scripts.pory"
	.string "My {PKMN} just aren't good enough!$"

Route3_Underpass_Trigger_EvilBattle_Text_11:
# 68 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: Fine - keep your stupid\n"
	.string "Clefairy! Enjoy your time together\l"
	.string "while it lasts. We'll be back for the\l"
	.string "dreamstone soon enough!$"

Route3_Underpass_Trigger_EvilBattle_Text_12:
# 72 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: And you! I'll remember this,\n"
	.string "{PLAYER}. You'll regret messing with\l"
	.string "Team Somber!$"

Route3_Underpass_Trigger_EvilBattle_Text_13:
# 81 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - Clefairy and I are in your\n"
	.string "debt. The way you handled that thug was\l"
	.string "incredible. I admire you for having such\l"
	.string "strength.$"

Route3_Underpass_Trigger_EvilBattle_Text_14:
# 82 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But with Clefairy by my side, I\l"
	.string "can no longer afford to be that way.$"

Route3_Underpass_Trigger_EvilBattle_Text_15:
# 83 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\l"
	.string "I let her down. I was waiting for\l"
	.string "someone to save us. What would've\l"
	.string "happened had you not come?$"

Route3_Underpass_Trigger_EvilBattle_Text_16:
# 84 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If these Team Somber thugs\l"
	.string "come after Clefairy again, we'll be\l"
	.string "ready. {PLAYER} - I owe you. Clefairy\l"
	.string "and I hope our paths cross again.$"
