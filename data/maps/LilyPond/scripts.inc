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
	applymovement OBJ_EVENT_ID_PLAYER, LilyPond_OnFrame_Movement_0
# 12 "data//maps/LilyPond/scripts.pory"
	msgbox LilyPond_OnFrame_Text_0
# 13 "data//maps/LilyPond/scripts.pory"
	release
# 14 "data//maps/LilyPond/scripts.pory"
	delay 16
# 15 "data//maps/LilyPond/scripts.pory"
	msgbox LilyPond_OnFrame_Text_1
# 16 "data//maps/LilyPond/scripts.pory"
	release
# 17 "data//maps/LilyPond/scripts.pory"
	delay 16
# 18 "data//maps/LilyPond/scripts.pory"
	applymovement 2, LilyPond_OnFrame_Movement_1
# 19 "data//maps/LilyPond/scripts.pory"
	waitmovement 0
# 20 "data//maps/LilyPond/scripts.pory"
	delay 16
# 21 "data//maps/LilyPond/scripts.pory"
	msgbox LilyPond_OnFrame_Text_2
# 22 "data//maps/LilyPond/scripts.pory"
	release
# 24 "data//maps/LilyPond/scripts.pory"
	delay 16
# 25 "data//maps/LilyPond/scripts.pory"
	applymovement 2, LilyPond_OnFrame_Movement_2
# 26 "data//maps/LilyPond/scripts.pory"
	waitmovement 0
# 27 "data//maps/LilyPond/scripts.pory"
	delay 16
# 28 "data//maps/LilyPond/scripts.pory"
	msgbox LilyPond_OnFrame_Text_3
# 29 "data//maps/LilyPond/scripts.pory"
	release
# 30 "data//maps/LilyPond/scripts.pory"
	delay 24
# 31 "data//maps/LilyPond/scripts.pory"
	msgbox LilyPond_OnFrame_Text_4
# 32 "data//maps/LilyPond/scripts.pory"
	release
# 34 "data//maps/LilyPond/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data//maps/LilyPond/scripts.pory"
	removeobject 2
# 36 "data//maps/LilyPond/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 38 "data//maps/LilyPond/scripts.pory"
	setflag FLAG_HIDE_LILY_POND_KOHLA
# 39 "data//maps/LilyPond/scripts.pory"
	completequest QUEST_DREAMSTONE_MYSTERIES
# 41 "data//maps/LilyPond/scripts.pory"
	releaseall
	end

LilyPond_OnFrame_2:
	end


# 11 "data//maps/LilyPond/scripts.pory"
LilyPond_OnFrame_Movement_0:
# 11 "data//maps/LilyPond/scripts.pory"
	face_right
	step_end

# 18 "data//maps/LilyPond/scripts.pory"
LilyPond_OnFrame_Movement_1:
# 18 "data//maps/LilyPond/scripts.pory"
	emote_exclamation_mark
	step_end

# 25 "data//maps/LilyPond/scripts.pory"
LilyPond_OnFrame_Movement_2:
# 25 "data//maps/LilyPond/scripts.pory"
	emote_question_mark
	step_end

LilyPond_OnFrame_Text_0:
# 12 "data//maps/LilyPond/scripts.pory"
	.string "KOHLA: Well...that was certainly a first\n"
	.string "for me.$"

LilyPond_OnFrame_Text_1:
# 15 "data//maps/LilyPond/scripts.pory"
	.string "KOHLA: So you were sent there by Moxie\n"
	.string "before I came?$"

LilyPond_OnFrame_Text_2:
# 21 "data//maps/LilyPond/scripts.pory"
	.string "KOHLA: You had a chance to stop Melea!\n"
	.string "Had I been a little faster, I would've\l"
	.string "stopped them from getting that Ancient\l"
	.string "Terror!\p"
	.string "KOHLA: {PLAYER}, you mucked it up!\n"
	.string "You were there and yet you couldn't\l"
	.string "stop them. And now they've got the\l"
	.string "Ancient Terror, and whatever happens\l"
	.string "will be on your shoulders.\p"
	.string "KOHLA: Not mine. Yours!$"

LilyPond_OnFrame_Text_3:
# 28 "data//maps/LilyPond/scripts.pory"
	.string "KOHLA: What? You have something to\n"
	.string "say?\p"
	.string "...\p"
	.string "KOHLA: You saw someone who looked like\n"
	.string "Prof. Tenebris there?\p"
	.string "...\p"
	.string "KOHLA: So you're saying that Prof.\n"
	.string "Tenebris somehow has been living in\l"
	.string "Ancient Cormoria this whole time?\p"
	.string "Alone?\p"
	.string "Without any food?\p"
	.string "Water?\p"
	.string "Protection?\p"
	.string "KOHLA: And you just somehow happened\n"
	.string "to see her?\p"
	.string "...\p"
	.string "KOHLA: {PLAYER}. xThat sounds like a\n"
	.string "complete lie to me.\p"
	.string "KOHLA: Pathetic. To think the\n"
	.string "detectives thought so highly of you.$"

LilyPond_OnFrame_Text_4:
# 31 "data//maps/LilyPond/scripts.pory"
	.string "KOHLA: I disliked you because I\n"
	.string "thought you didn't deserve the\l"
	.string "attention you got. But now? You're\l"
	.string "nothing but a failure.\p"
	.string "...\p"
	.string "KOHLA: I'm going to chase Team Somber\n"
	.string "and get that Ancient Terror back. It'd\l"
	.string "be best if we didn't see each other\l"
	.string "again.\p"
	.string "KOHLA: You're off the case. Do whatever\n"
	.string "you like.$"
