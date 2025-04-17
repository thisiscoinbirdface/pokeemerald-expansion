MirrohBaseCamp_Graveyard_MapScripts::
	.byte 0


MirrohBaseCamp_Graveyard_KohlaBattle::
# 7 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	lockall
# 8 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	faceplayer
# 10 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 30
# 11 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_0
# 12 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 13 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	applymovement 1, MirrohBaseCamp_Graveyard_KohlaBattle_Movement_0
# 14 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 15 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_1
# 16 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 17 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 18 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	faceplayer
# 19 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 16
# 20 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_2
# 21 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 22 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 16
# 25 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHBASECAMP_KOHLA, MirrohBaseCamp_Graveyard_KohlaBattle_Text_3
# 28 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 29 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_4
# 30 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	applymovement 1, MirrohBaseCamp_Graveyard_KohlaBattle_Movement_1
# 33 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	waitmovement 0
# 34 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	removeobject 1
# 37 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	setflag FLAG_MIRROH_KOHLA_BATTLE
# 38 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	releaseall
	return


# 13 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
MirrohBaseCamp_Graveyard_KohlaBattle_Movement_0:
# 13 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	face_up
	step_end

# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
MirrohBaseCamp_Graveyard_KohlaBattle_Movement_1:
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
	step_end

MirrohBaseCamp_Graveyard_KohlaBattle_Text_0:
# 11 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "KOHLA: It's you.$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_1:
# 15 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "KOHLA: Do you know what happens if you\n"
	.string "push something too hard?$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_2:
# 20 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "KOHLA: No, I suppose you don't.$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_3:
# 25 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "...$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_4:
# 29 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "KOHLA: I have to carry on.\p"
	.string "I'll see you at Mt. Mirroh.$"
