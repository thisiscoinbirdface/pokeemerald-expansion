# 1 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"

# 2 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
    .set LOCALID_DET1, 6
# 3 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
    .set LOCALID_DET2, 5
# 4 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
    .set LOCALID_TENE, 4

CarabrueTown_TenebrisLab_Finale_MapScripts::
# 9 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CarabrueTown_TenebrisLab_Finale_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CarabrueTown_TenebrisLab_Finale_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, CarabrueTown_TenebrisLab_PostFinale
	.2byte 0


CarabrueTown_TenebrisLab_PostFinale::
# 16 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	lockall
# 19 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_PostFinale_Movement_0
# 21 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_1
# 22 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 23 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 24 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_1
# 27 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_2
# 28 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 29 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 30 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_3
# 32 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_3
# 33 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET2, CarabrueTown_TenebrisLab_PostFinale_Movement_3
# 34 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 35 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 36 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_4
# 40 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_4
# 41 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 42 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 43 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_5
# 45 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_1
# 46 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 47 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 48 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_6
# 50 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_4
# 51 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 52 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 53 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_7
# 55 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_1
# 56 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 57 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 58 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_8
# 60 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_5
# 61 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET2, CarabrueTown_TenebrisLab_PostFinale_Movement_5
# 62 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_5
# 63 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 64 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 65 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_9
# 67 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_6
# 68 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 69 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 70 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_10
# 72 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_5
# 73 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 74 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 75 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_11
# 77 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_6
# 78 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 79 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 80 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_12
	return


# 19 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_0:
# 19 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	face_up
	step_end

# 21 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_1:
# 21 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	jump_in_place_right
	step_end

# 27 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_2:
# 27 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	emote_question_mark
	step_end

# 32 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_3:
# 32 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	emote_exclamation_mark
# 32 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	jump_in_place_right
	step_end

# 40 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_4:
# 40 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	jump_in_place_left
	step_end

# 60 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_5:
# 60 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	face_down
	step_end

# 67 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_6:
# 67 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	jump_in_place_down
	step_end

CarabrueTown_TenebrisLab_PostFinale_Text_0:
# 24 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Detective$"

CarabrueTown_TenebrisLab_PostFinale_Text_1:
# 24 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "...and now Rue won't be allowed to plot\n"
	.string "any schemes for a long, long time.$"

CarabrueTown_TenebrisLab_PostFinale_Text_2:
# 30 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Tenebris$"

CarabrueTown_TenebrisLab_PostFinale_Text_3:
# 30 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "All's well that ends well, then?$"

CarabrueTown_TenebrisLab_PostFinale_Text_4:
# 36 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Yes. Case closed!$"

CarabrueTown_TenebrisLab_PostFinale_Text_5:
# 43 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "I'm ever so grateful for your help,\n"
	.string "detectives.\p"
	.string "Without your leadership on this case,\n"
	.string "who knows how long I would have been\l"
	.string "trapped in Ancient Cormoria?$"

CarabrueTown_TenebrisLab_PostFinale_Text_6:
# 48 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "We're only doing our duty, Professor.\p"
	.string "We also have people to thank...\p"
	.string "Kohla of course, although he's not here\n"
	.string "now, was instrumental in chasing Team\l"
	.string "Somber across Cormoria. He's got the\l"
	.string "makings of a truly detective!\p"
	.string "The Gym Leaders are the ones who\n"
	.string "actually took Team Somber apart.\p"
	.string "Inger and Ariana are with Gloria in\n"
	.string "Silversun City right now, clearing out\l"
	.string "their headquarters.$"

CarabrueTown_TenebrisLab_PostFinale_Text_7:
# 53 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "So it was a team effort, then?\n"
	.string "No doubt you all came through.$"

CarabrueTown_TenebrisLab_PostFinale_Text_8:
# 58 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Absolutely.\p"
	.string "There was no solving this case without\n"
	.string "Kohla and the Gym Leaders...\p"
	.string "...$"

CarabrueTown_TenebrisLab_PostFinale_Text_9:
# 65 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "...and you, {PLAYER}.$"

CarabrueTown_TenebrisLab_PostFinale_Text_10:
# 70 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "{PLAYER}, you were just incredible.\n"
	.string "You stood up against huge organisation\l"
	.string "like Team Somber and fought them off\l"
	.string "time and again!$"

CarabrueTown_TenebrisLab_PostFinale_Text_11:
# 75 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "And even after you were taken off the\n"
	.string "case, you did what was right,\l"
	.string "{PLAYER}.\p"
	.string "We're in your debt.$"

CarabrueTown_TenebrisLab_PostFinale_Text_12:
# 80 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "I couldn't be prouder of my newest\n"
	.string "research associate.\p"
	.string "Now that all of this is finished,\n"
	.string "I'll finally get to know you better.\p"
	.string "...but before you rejoin the lab,\n"
	.string "there is one last thing to do.$"
