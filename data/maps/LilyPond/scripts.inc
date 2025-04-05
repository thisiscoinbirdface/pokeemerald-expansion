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
	msgbox LilyPond_OnFrame_Text_0
# 13 "data//maps/LilyPond/scripts.pory"
	applymovement 2, LilyPond_OnFrame_Movement_0
# 14 "data//maps/LilyPond/scripts.pory"
	waitmovement 0
# 15 "data//maps/LilyPond/scripts.pory"
	delay 24
# 16 "data//maps/LilyPond/scripts.pory"
	msgbox LilyPond_OnFrame_Text_1
# 17 "data//maps/LilyPond/scripts.pory"
	release
# 19 "data//maps/LilyPond/scripts.pory"
	fadescreen FADE_TO_BLACK
# 20 "data//maps/LilyPond/scripts.pory"
	removeobject 2
# 21 "data//maps/LilyPond/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 23 "data//maps/LilyPond/scripts.pory"
	setflag FLAG_HIDE_LILY_POND_KOHLA
# 24 "data//maps/LilyPond/scripts.pory"
	completequest QUEST_DREAMSTONE_MYSTERIES
	return

LilyPond_OnFrame_2:
	end


# 13 "data//maps/LilyPond/scripts.pory"
LilyPond_OnFrame_Movement_0:
# 13 "data//maps/LilyPond/scripts.pory"
	emote_exclamation_mark
	step_end

LilyPond_OnFrame_Text_0:
# 11 "data//maps/LilyPond/scripts.pory"
	.string "KOHLA: Well...that was certainly a first\n"
	.string "for me.$"

LilyPond_OnFrame_Text_1:
# 16 "data//maps/LilyPond/scripts.pory"
	.string "KOHLA: But had I been a little faster, I\n"
	.string "might have been able to stop them from\l"
	.string "getting that ANCIENT TERROR!\p"
	.string "KOHLA: {PLAYER}, you failed. You were\n"
	.string "there on time and yet you couldn't stop\l"
	.string "them. And now they're going to do who\l"
	.string "knows what with that ANCIENT TERROR,\l"
	.string "and it'll be on YOUR shoulders.\p"
	.string "KOHLA: Not mine. YOURS!\p"
	.string "...\p"
	.string "KOHLA: At Mt. Ceram, you showed me the\n"
	.string "value of strength. But here, on Mt.\l"
	.string "Mirroh, you showed me the consequences\l"
	.string "of not using your strength.\p"
	.string "KOHLA: I disliked you because I\n"
	.string "thought you didn't deserve the\l"
	.string "attention you got. But now? Now I look\l"
	.string "down upon you. You're a failure whose\l"
	.string "mess I have to clean up.\p"
	.string "...\p"
	.string "KOHLA: I'm going to chase TEAM SOMBER\n"
	.string "down and get that ANCIENT TERROR back\l"
	.string "from them. It'd be best if we didn't see\l"
	.string "each other again. You're off the case.\l"
	.string "Do whatever you like now.$"
