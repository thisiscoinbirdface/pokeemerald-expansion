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
# 28 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 2, Route3_Underpass_Trigger_EvilBattle_Movement_3
# 29 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 30 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_6
# 31 "data//maps/Route3_Underpass/scripts.pory"
	applymovement 3, Route3_Underpass_Trigger_EvilBattle_Movement_4
# 32 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 33 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_7
# 34 "data//maps/Route3_Underpass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Underpass_Trigger_EvilBattle_Movement_5
# 35 "data//maps/Route3_Underpass/scripts.pory"
	waitmovement 0
# 36 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_8
# 37 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_9
# 38 "data//maps/Route3_Underpass/scripts.pory"
	release
# 41 "data//maps/Route3_Underpass/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE3_EVIL_GABRIELLE, Route3_Underpass_Trigger_EvilBattle_Text_10
# 44 "data//maps/Route3_Underpass/scripts.pory"
	msgbox Route3_Underpass_Trigger_EvilBattle_Text_11
# 52 "data//maps/Route3_Underpass/scripts.pory"
	setflag FLAG_ROUTE3_UNDERPASS_EVILTEAM
# 53 "data//maps/Route3_Underpass/scripts.pory"
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

# 28 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_3:
# 28 "data//maps/Route3_Underpass/scripts.pory"
	jump_in_place_up
	step_end

# 31 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_4:
# 31 "data//maps/Route3_Underpass/scripts.pory"
	face_up
	step_end

# 34 "data//maps/Route3_Underpass/scripts.pory"
Route3_Underpass_Trigger_EvilBattle_Movement_5:
# 34 "data//maps/Route3_Underpass/scripts.pory"
	walk_down
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
# 30 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Who's there? What you do want?$"

Route3_Underpass_Trigger_EvilBattle_Text_7:
# 33 "data//maps/Route3_Underpass/scripts.pory"
	.string "BREECH: {PLAYER}! It's you! This thug\n"
	.string "is trying to take Clefairy away! Help me,\l"
	.string "please!$"

Route3_Underpass_Trigger_EvilBattle_Text_8:
# 36 "data//maps/Route3_Underpass/scripts.pory"
	.string "???: Oh, you're just some stupid kid.\n"
	.string "How about you mind your own business?\l"
	.string "Play with your toys at home. Get out of\l"
	.string "here before I hurt you!$"

Route3_Underpass_Trigger_EvilBattle_Text_9:
# 37 "data//maps/Route3_Underpass/scripts.pory"
	.string "RAE: No? No?!?! Well then...let me, Aunty\n"
	.string "Gabrielle teach you a lesson. Don't mess\l"
	.string "with adult affairs!$"

Route3_Underpass_Trigger_EvilBattle_Text_10:
# 41 "data//maps/Route3_Underpass/scripts.pory"
	.string "I'll remember this, {PLAYER}!$"

Route3_Underpass_Trigger_EvilBattle_Text_11:
# 44 "data//maps/Route3_Underpass/scripts.pory"
	.string "GG$"
