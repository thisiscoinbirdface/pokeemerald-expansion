# 1 "data//maps/MtCeram_Peak/scripts.pory"

# 2 "data//maps/MtCeram_Peak/scripts.pory"
    .set LOCALID_DREAMSTONE, 1
# 3 "data//maps/MtCeram_Peak/scripts.pory"
    .set LOCALID_BOSS, 2

MtCeramPeak_MapScripts::
	.byte 0


MtCeramPeak_MainEvent_Trigger::
# 10 "data//maps/MtCeram_Peak/scripts.pory"
	lockall
# 11 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_0
# 12 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_0
# 15 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 17 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_1
# 18 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 20 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement LOCALID_BOSS, MtCeramPeak_MainEvent_Trigger_Movement_1
# 21 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 22 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_2
# 23 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 3, MtCeramPeak_MainEvent_Trigger_Movement_2
# 28 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 5, MtCeramPeak_MainEvent_Trigger_Movement_3
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement 4, MtCeramPeak_MainEvent_Trigger_Movement_4
# 30 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 32 "data//maps/MtCeram_Peak/scripts.pory"
	msgbox MtCeramPeak_MainEvent_Trigger_Text_3
# 33 "data//maps/MtCeram_Peak/scripts.pory"
	release
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeramPeak_MainEvent_Trigger_Movement_5
# 37 "data//maps/MtCeram_Peak/scripts.pory"
	waitmovement 0
# 39 "data//maps/MtCeram_Peak/scripts.pory"
	releaseall
	return


# 14 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_0:
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 14 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

# 20 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_1:
# 20 "data//maps/MtCeram_Peak/scripts.pory"
	face_down
	step_end

# 27 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_2:
# 27 "data//maps/MtCeram_Peak/scripts.pory"
	face_right
	step_end

# 28 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_3:
# 28 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 29 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_4:
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	walk_left
# 29 "data//maps/MtCeram_Peak/scripts.pory"
	face_left
	step_end

# 36 "data//maps/MtCeram_Peak/scripts.pory"
MtCeramPeak_MainEvent_Trigger_Movement_5:
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
# 36 "data//maps/MtCeram_Peak/scripts.pory"
	walk_up
	step_end

MtCeramPeak_MainEvent_Trigger_Text_0:
# 11 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: So you broke through my grunts.\n"
	.string "Come here then.$"

MtCeramPeak_MainEvent_Trigger_Text_1:
# 17 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: A dreamstone. This is the first\n"
	.string "time I've ever seen one.$"

MtCeramPeak_MainEvent_Trigger_Text_2:
# 22 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Move. I want to see this trainers\n"
	.string "face.$"

MtCeramPeak_MainEvent_Trigger_Text_3:
# 32 "data//maps/MtCeram_Peak/scripts.pory"
	.string "???: Now step up to me.$"
