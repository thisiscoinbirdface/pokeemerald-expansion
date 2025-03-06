Route3_Underpass_MapScripts::
	.byte 0


Route3_Underpass_Nurse::
# 4 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 5 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Nurse_Text_0
# 6 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


Route3_Underpass_NPC1::
# 10 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 11 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC1_Text_0
# 12 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


Route3_Underpass_NPC2::
# 16 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 17 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_NPC2_Text_0
# 18 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return


Route3_Underpass_Trigger_EvilBattle::
# 23 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_Trigger_EvilBattle_2
# 28 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 31 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_0
# 32 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 33 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_0
# 34 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_1
# 35 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 36 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_1
# 37 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_2
# 38 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_2
# 39 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 40 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_3
# 41 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_4
# 42 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_5
# 45 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_3
# 46 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 47 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_6
# 48 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_4
# 49 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 50 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_7
# 51 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_Trigger_EvilBattle_Movement_5
# 52 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 53 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_8
# 54 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_9
# 55 "data//maps/Route3_Underpass/scripts.pory"
	release
# 58 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_Trigger_EvilBattle_Text_10
# 61 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_6
# 62 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 63 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_7
# 64 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 65 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_11
# 66 "data//maps/Route3_Underpass/scripts.pory"
	release
# 67 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_3
# 68 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 69 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_12
# 70 "data//maps/Route3_Underpass/scripts.pory"
	release
# 71 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_8
# 72 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 73 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 2
# 76 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_9
# 77 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 78 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_13
# 79 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_14
# 80 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_15
# 81 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_16
# 82 "data//maps/Route3_Underpass/scripts.pory"
	release
# 83 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_8
# 84 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 85 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 3
# 88 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 89 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return

Route3_Underpass_Trigger_EvilBattle_2:
	end


# 31 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_0:
# 31 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 34 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_1:
# 34 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 34 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 38 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_2:
# 38 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 45 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_3:
# 45 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 48 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_4:
# 48 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 51 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_5:
# 51 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 61 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_6:
# 61 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 63 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_7:
# 63 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 71 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_8:
# 71 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 71 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 76 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_9:
# 76 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 76 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

Route3_Underpass_Nurse_Text_0:
# 5 "data//maps/Route3_Underpass/scripts.pory"
	.string "This area is closed for the demo.$"

Route3_Underpass_NPC1_Text_0:
# 11 "data//maps/Route3_Underpass/scripts.pory"
	.string "They say that a rare {PKMN} has made these\n"
	.string "caves its home. I need to go deeper\l"
	.string "down!$"

Route3_Underpass_NPC2_Text_0:
# 17 "data//maps/Route3_Underpass/scripts.pory"
	.string "A hiker with a Clefairy ran past here a\n"
	.string "while ago. He was being chased by some\l"
	.string "weirdo in a dark outfit. The things you\l"
	.string "see while on the road...$"

Route3_Underpass_Trigger_EvilBattle_Text_0:
# 33 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Give it to me!$"

Route3_Underpass_Trigger_EvilBattle_Text_1:
# 36 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: No! Stay away! Clefairy is MY\n"
	.string "partner!$"

Route3_Underpass_Trigger_EvilBattle_Text_2:
# 37 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: I said give it to me! It's holding a\n"
	.string "dream shard. That's too precious to be\l"
	.string "held by someone like you!$"

Route3_Underpass_Trigger_EvilBattle_Text_3:
# 40 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: I don't know anything about\n"
	.string "any dream shards, please! Just stop!$"

Route3_Underpass_Trigger_EvilBattle_Text_4:
# 41 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy: clee!!!$"

Route3_Underpass_Trigger_EvilBattle_Text_5:
# 42 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Hahaha! Your Clefairy wants to\n"
	.string "protect you, but you don't even have\l"
	.string "the will to fight alongside her. Just\l"
	.string "give up before I bring my {PKMN} out!$"

Route3_Underpass_Trigger_EvilBattle_Text_6:
# 47 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Who's there? What you do want?$"

Route3_Underpass_Trigger_EvilBattle_Text_7:
# 50 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! This thug\n"
	.string "is trying to take Clefairy away! Help me,\l"
	.string "please!$"

Route3_Underpass_Trigger_EvilBattle_Text_8:
# 53 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?\l"
	.string "Play with your toys at home. Get out of\l"
	.string "here before I hurt you!$"

Route3_Underpass_Trigger_EvilBattle_Text_9:
# 54 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: No? No?!?! Well then...let\n"
	.string "Miss Gabrielle teach you a lesson: don't\l"
	.string "stick your nose where it doesn't\l"
	.string "belong!$"

Route3_Underpass_Trigger_EvilBattle_Text_10:
# 58 "data//maps/Route3_Underpass/scripts.pory"
	.string "My {PKMN} just aren't good enough!$"

Route3_Underpass_Trigger_EvilBattle_Text_11:
# 65 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: Fine - keep your stupid\n"
	.string "Clefairy! Enjoy your time together\l"
	.string "while it lasts. We'll be back for the\l"
	.string "dream shard soon enough!$"

Route3_Underpass_Trigger_EvilBattle_Text_12:
# 69 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: And you! I'll remember this,\n"
	.string "{PLAYER}. You'll regret messing with\l"
	.string "Team Somber!$"

Route3_Underpass_Trigger_EvilBattle_Text_13:
# 78 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - Clefairy and I are in your\n"
	.string "debt. The way you handled that thug was\l"
	.string "incredible. I admire you for having such\l"
	.string "strength.$"

Route3_Underpass_Trigger_EvilBattle_Text_14:
# 79 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But with Clefairy by my side, I\l"
	.string "can no longer afford to be that way.$"

Route3_Underpass_Trigger_EvilBattle_Text_15:
# 80 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\l"
	.string "I let her down. I was waiting for\l"
	.string "someone to save us. What would've\l"
	.string "happened had you not come?$"

Route3_Underpass_Trigger_EvilBattle_Text_16:
# 81 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If these Team Somber thugs\l"
	.string "come after Clefairy again, we'll be\l"
	.string "ready. {PLAYER} - I owe you. Clefairy\l"
	.string "and I hope our paths cross again.$"
