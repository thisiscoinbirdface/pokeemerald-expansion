Route3_Underpass_MapScripts::
	.byte 0


Route3_Underpass_Trigger_EvilBattle::
# 4 "data//maps/Route3_Underpass/scripts.pory"
	goto_if_set FLAG_ROUTE3_UNDERPASS_EVILTEAM, Route3_Underpass_Trigger_EvilBattle_2
# 9 "data//maps/Route3_Underpass/scripts.pory"
	lockall
# 12 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_0
# 13 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 14 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_0
# 15 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_1
# 16 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 17 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_1
# 18 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_2
# 19 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_2
# 20 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 21 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_3
# 22 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_4
# 23 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_5
# 26 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_3
# 27 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 28 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_6
# 29 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_4
# 30 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 31 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_7
# 32 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_Trigger_EvilBattle_Movement_5
# 33 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 34 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_8
# 35 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_9
# 36 "data//maps/Route3_Underpass/scripts.pory"
	release
# 39 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_Trigger_EvilBattle_Text_10
# 42 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_6
# 43 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 44 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_7
# 45 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 46 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_11
# 47 "data//maps/Route3_Underpass/scripts.pory"
	release
# 48 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_3
# 49 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 50 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_12
# 51 "data//maps/Route3_Underpass/scripts.pory"
	release
# 52 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_8
# 53 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 54 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 2
# 57 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_9
# 58 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 59 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_13
# 60 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_14
# 61 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_15
# 62 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_16
# 63 "data//maps/Route3_Underpass/scripts.pory"
	release
# 64 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_8
# 65 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 66 "data//maps/Route3_Underpass/scripts.pory"
	removeobject 3
# 69 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 70 "data//maps/Route3_Underpass/scripts.pory"
	releaseall
	return

Route3_Underpass_Trigger_EvilBattle_2:
	end


# 12 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_0:
# 12 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_right
	step_end

# 15 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_1:
# 15 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
# 15 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 19 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_2:
# 19 "data//maps/Route3_Underpass/scripts.pory"
	walk_right
	step_end

# 26 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_3:
# 26 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 29 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_4:
# 29 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 32 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_5:
# 32 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 42 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_6:
# 42 "data//maps/Route3_Underpass/scripts.pory"
	face_left
	step_end

# 44 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_7:
# 44 "data//maps/Route3_Underpass/scripts.pory"
	face_right
	step_end

# 52 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_8:
# 52 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
# 52 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
	step_end

# 57 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_9:
# 57 "data//maps/Route3_Underpass/scripts.pory"
	walk_left
# 57 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

Route3_Underpass_Trigger_EvilBattle_Text_0:
# 14 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Give it to me!$"

Route3_Underpass_Trigger_EvilBattle_Text_1:
# 17 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: No! Stay away! Clefairy is MY\n"
	.string "partner!$"

Route3_Underpass_Trigger_EvilBattle_Text_2:
# 18 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: I said give it to me! It's holding a\n"
	.string "dream shard. That's too precious to be\l"
	.string "held by someone like you!$"

Route3_Underpass_Trigger_EvilBattle_Text_3:
# 21 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: I don't know anything about\n"
	.string "any dream shards, please! Just stop!$"

Route3_Underpass_Trigger_EvilBattle_Text_4:
# 22 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy: clee!!!$"

Route3_Underpass_Trigger_EvilBattle_Text_5:
# 23 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Hahaha! Your Clefairy wants to\n"
	.string "protect you, but you don't even have\l"
	.string "the will to fight alongside her. Just\l"
	.string "give up before I bring my {PKMN} out!$"

Route3_Underpass_Trigger_EvilBattle_Text_6:
# 28 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Who's there? What you do want?$"

Route3_Underpass_Trigger_EvilBattle_Text_7:
# 31 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! This thug\n"
	.string "is trying to take Clefairy away! Help me,\l"
	.string "please!$"

Route3_Underpass_Trigger_EvilBattle_Text_8:
# 34 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?\l"
	.string "Play with your toys at home. Get out of\l"
	.string "here before I hurt you!$"

Route3_Underpass_Trigger_EvilBattle_Text_9:
# 35 "data//maps/Route3_Underpass/scripts.pory"
	.string "GABRIELLE: No? No?!?! Well then...let me,\n"
	.string "Aunty Gabrielle teach you a lesson:\l"
	.string "don't stick your nose where it doesn't\l"
	.string "belong!$"

Route3_Underpass_Trigger_EvilBattle_Text_10:
# 39 "data//maps/Route3_Underpass/scripts.pory"
	.string "My {PKMN} just aren't good enough!$"

Route3_Underpass_Trigger_EvilBattle_Text_11:
# 46 "data//maps/Route3_Underpass/scripts.pory"
	.string "Fine - keep your stupid Clefairy! Enjoy\n"
	.string "your time together while it lasts. We'll\l"
	.string "be back for the dream shard soon\l"
	.string "enough!$"

Route3_Underpass_Trigger_EvilBattle_Text_12:
# 50 "data//maps/Route3_Underpass/scripts.pory"
	.string "And you! I'll remember this, {PLAYER}.\n"
	.string "You'll regret messing with Team Somber!$"

Route3_Underpass_Trigger_EvilBattle_Text_13:
# 59 "data//maps/Route3_Underpass/scripts.pory"
	.string "{PLAYER} - Clefairy and I are in your\n"
	.string "debt. The way you handled that thug was\l"
	.string "incredible. I admire you for having such\l"
	.string "strength.$"

Route3_Underpass_Trigger_EvilBattle_Text_14:
# 60 "data//maps/Route3_Underpass/scripts.pory"
	.string "I've realised something. When alone, I\n"
	.string "was free to do as I wish and avoid\l"
	.string "battling. But with Clefairy by my side, I\l"
	.string "can no longer afford to be that way.$"

Route3_Underpass_Trigger_EvilBattle_Text_15:
# 61 "data//maps/Route3_Underpass/scripts.pory"
	.string "Clefairy was ready to protect me, but I\n"
	.string "wasn't prepared to do the same for her.\l"
	.string "I let her down. I was waiting for\l"
	.string "someone to save us. What would've\l"
	.string "happened had you not come?$"

Route3_Underpass_Trigger_EvilBattle_Text_16:
# 62 "data//maps/Route3_Underpass/scripts.pory"
	.string "But no more! I'm going to learn to hold\n"
	.string "my ground. If these Team Somber thugs\l"
	.string "come after Clefairy again, we'll be\l"
	.string "ready. {PLAYER} - I owe you. Clefairy\l"
	.string "and I hope our paths cross again.$"
