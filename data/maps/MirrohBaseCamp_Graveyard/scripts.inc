MirrohBaseCamp_Graveyard_Mapscripts::
	.byte 0


MirrohBaseCamp_Graveyard_KohlaBattle::
# 10 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	lockall
# 11 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	faceplayer
# 13 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 30
# 14 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_0
# 15 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 16 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	applymovement 1, MirrohBaseCamp_Graveyard_KohlaBattle_Movement_0
# 17 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 18 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_1
# 19 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 20 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 21 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_2
# 24 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHBASECAMP_KOHLA, MirrohBaseCamp_Graveyard_KohlaBattle_Text_3
# 27 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 28 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_4
# 29 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 30 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	applymovement 1, MirrohBaseCamp_Graveyard_KohlaBattle_Movement_1
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	waitmovement 0
# 33 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	removeobject 1
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	setflag FLAG_MIRROH_KOHLA_BATTLE
# 37 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	releaseall
	return


# 16 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
MirrohBaseCamp_Graveyard_KohlaBattle_Movement_0:
# 16 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	face_up
	step_end

# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
MirrohBaseCamp_Graveyard_KohlaBattle_Movement_1:
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
	step_end

MirrohBaseCamp_Graveyard_KohlaBattle_Text_0:
# 14 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "KOHLA: It's you.$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_1:
# 18 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "KOHLA: Do you know what happens if you\n"
	.string "push something too hard?$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_2:
# 21 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "KOHLA: No, I suppose you don't.$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_3:
# 24 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_4:
# 28 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "KOHLA: I have to carry on. Let's do the\n"
	.string "right thing and go stop Team Somber.\p"
	.string "I'll see you at MT MIRROH.$"
