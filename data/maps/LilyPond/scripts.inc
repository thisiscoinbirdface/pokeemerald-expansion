LilyPond_MapScripts::
# 2 "data//maps/LilyPond/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilyPond_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LilyPond_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/LilyPond/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, LilyPond_OnFrame
	.2byte 0


LilyPond_OnFrame::
# 8 "data//maps/LilyPond/scripts.pory"
	goto_if_set FLAG_HIDE_LILY_POND_KOHLA, LilyPond_OnFrame_2
# 10 "data//maps/LilyPond/scripts.pory"
	lockall
# 11 "data//maps/LilyPond/scripts.pory"
	setrespawn HEAL_LOCATION_WINTERLILY_HOLLOW
# 12 "data//maps/LilyPond/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilyPond_OnFrame_Movement_0
# 13 "data//maps/LilyPond/scripts.pory"
	speakername LilyPond_OnFrame_Text_0
# 14 "data//maps/LilyPond/scripts.pory"
	msgbox LilyPond_OnFrame_Text_1
# 15 "data//maps/LilyPond/scripts.pory"
	release
# 16 "data//maps/LilyPond/scripts.pory"
	delay 16
# 17 "data//maps/LilyPond/scripts.pory"
	speakername LilyPond_OnFrame_Text_0
# 18 "data//maps/LilyPond/scripts.pory"
	msgbox LilyPond_OnFrame_Text_2
# 19 "data//maps/LilyPond/scripts.pory"
	release
# 20 "data//maps/LilyPond/scripts.pory"
	delay 16
# 21 "data//maps/LilyPond/scripts.pory"
	applymovement 2, LilyPond_OnFrame_Movement_1
# 22 "data//maps/LilyPond/scripts.pory"
	waitmovement 0
# 23 "data//maps/LilyPond/scripts.pory"
	delay 16
# 24 "data//maps/LilyPond/scripts.pory"
	speakername LilyPond_OnFrame_Text_0
# 25 "data//maps/LilyPond/scripts.pory"
	msgbox LilyPond_OnFrame_Text_3
# 26 "data//maps/LilyPond/scripts.pory"
	release
# 28 "data//maps/LilyPond/scripts.pory"
	delay 16
# 29 "data//maps/LilyPond/scripts.pory"
	applymovement 2, LilyPond_OnFrame_Movement_2
# 30 "data//maps/LilyPond/scripts.pory"
	waitmovement 0
# 31 "data//maps/LilyPond/scripts.pory"
	delay 16
# 32 "data//maps/LilyPond/scripts.pory"
	speakername LilyPond_OnFrame_Text_0
# 33 "data//maps/LilyPond/scripts.pory"
	msgbox LilyPond_OnFrame_Text_4
# 34 "data//maps/LilyPond/scripts.pory"
	release
# 35 "data//maps/LilyPond/scripts.pory"
	delay 24
# 36 "data//maps/LilyPond/scripts.pory"
	speakername LilyPond_OnFrame_Text_0
# 37 "data//maps/LilyPond/scripts.pory"
	msgbox LilyPond_OnFrame_Text_5
# 38 "data//maps/LilyPond/scripts.pory"
	release
# 40 "data//maps/LilyPond/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data//maps/LilyPond/scripts.pory"
	removeobject 2
# 42 "data//maps/LilyPond/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 44 "data//maps/LilyPond/scripts.pory"
	setflag FLAG_HIDE_LILY_POND_KOHLA
# 45 "data//maps/LilyPond/scripts.pory"
	completequest QUEST_DREAMSTONE_MYSTERIES
# 47 "data//maps/LilyPond/scripts.pory"
	releaseall
	end

LilyPond_OnFrame_2:
	end


# 12 "data//maps/LilyPond/scripts.pory"
LilyPond_OnFrame_Movement_0:
# 12 "data//maps/LilyPond/scripts.pory"
	face_right
	step_end

# 21 "data//maps/LilyPond/scripts.pory"
LilyPond_OnFrame_Movement_1:
# 21 "data//maps/LilyPond/scripts.pory"
	emote_exclamation_mark
	step_end

# 29 "data//maps/LilyPond/scripts.pory"
LilyPond_OnFrame_Movement_2:
# 29 "data//maps/LilyPond/scripts.pory"
	emote_question_mark
	step_end

LilyPond_OnFrame_Text_0:
# 13 "data//maps/LilyPond/scripts.pory"
	.string "Kohla$"

LilyPond_OnFrame_Text_1:
# 14 "data//maps/LilyPond/scripts.pory"
	.string "Well...that was certainly a first for me.$"

LilyPond_OnFrame_Text_2:
# 18 "data//maps/LilyPond/scripts.pory"
	.string "So you were sent there by Moxie before\n"
	.string "I came?$"

LilyPond_OnFrame_Text_3:
# 25 "data//maps/LilyPond/scripts.pory"
	.string "You had a chance to stop Melea! Had I\n"
	.string "been a little faster, I would've stopped\l"
	.string "them from getting that Ancient Terror!\p"
	.string "{PLAYER}, you mucked it up! You were\n"
	.string "there and yet you couldn't stop them.\l"
	.string "And now they've got the Ancient Terror,\l"
	.string "and whatever happens will be on your\l"
	.string "shoulders.\p"
	.string "Not mine. Yours!$"

LilyPond_OnFrame_Text_4:
# 33 "data//maps/LilyPond/scripts.pory"
	.string "What? You have something to say?\p"
	.string "...\p"
	.string "You saw someone who looked like Prof.\n"
	.string "Tenebris there?\p"
	.string "...\p"
	.string "So you're saying that Prof. Tenebris\n"
	.string "somehow has been living in Ancient\l"
	.string "Cormoria this whole time?\p"
	.string "Alone?\p"
	.string "Without any food?\p"
	.string "Water?\p"
	.string "Protection?\p"
	.string "And you just somehow happened to see\n"
	.string "her?\p"
	.string "...\p"
	.string "{PLAYER}. That sounds like a complete\n"
	.string "lie to me.\p"
	.string "Pathetic. To think the detectives\n"
	.string "thought so highly of you.$"

LilyPond_OnFrame_Text_5:
# 37 "data//maps/LilyPond/scripts.pory"
	.string "I disliked you because I thought you\n"
	.string "didn't deserve the attention you got.\l"
	.string "But now? You're nothing but a failure.\p"
	.string "...\p"
	.string "I'm going to chase Team Somber and get\n"
	.string "that Ancient Terror back. It'd be best\l"
	.string "if we didn't see each other again.\p"
	.string "You're off the case. Do whatever you\n"
	.string "like.$"
