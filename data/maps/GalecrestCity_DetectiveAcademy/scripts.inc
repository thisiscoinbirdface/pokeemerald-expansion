# 1 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"

# 2 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
    .set LOCALID_KOHLA, 16

GalecrestCity_DetectiveAcademy_MapScripts::
	.byte 0


GalecrestCity_DetectiveAcademy_EventScript_Kohla::
# 11 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 15 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0
# 18 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0
# 19 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 20 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 24
# 21 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_1
# 24 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_1
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 26 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0
# 28 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_2
# 31 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_2
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	removeobject LOCALID_KOHLA
# 33 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_DETECTIVE_ACAD_KOHLA
# 35 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


# 18 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0:
# 18 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_up
	step_end

# 24 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_1:
# 24 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_right
# 24 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 24 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 24 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_left
# 24 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 24 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 31 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_2:
# 31 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 31 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 31 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 31 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 31 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
	step_end

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0:
# 15 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "KOHLA: I'm as an orphan. As a child I\n"
	.string "learned to rely on myself. I saw a lot of\l"
	.string "bad stuff growing up, so I wanted to\l"
	.string "become a detective.\p"
	.string "So I did.\p"
	.string "I graduated from this academy at the\n"
	.string "top of my class..\p"
	.string "...but it wasn't enough.$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_1:
# 21 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "{PLAYER}, it was you who stopped Team\n"
	.string "Somber from getting the dreamstone.\p"
	.string "Thanks to you, I learned something.\n"
	.string "Being the Ace Rookie isn't enough. To\l"
	.string "stop Team Somber - no, to stop all crime,\l"
	.string "I need to become stronger than the\l"
	.string "criminals.\p"
	.string "Stronger...at any cost.$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_2:
# 28 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Silverstone City is west of here, but\n"
	.string "the path is blocked by rocks. The Gym\l"
	.string "Leader here can teach your {PKMN} ROCK\l"
	.string "SMASH, which will let you pass.\p"
	.string "See you in Silversun City.$"
