# 1 "data//maps/GalecrestCity/scripts.pory"

# 2 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_GAB, 17
# 3 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_DET1, 24
# 4 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_DET2, 25
# 5 "data//maps/GalecrestCity/scripts.pory"
    .set LOCALID_RUE, 26

GalecrestCity_MapScripts::
# 9 "data//maps/GalecrestCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GalecrestCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GalecrestCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data//maps/GalecrestCity/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, GalecrestCity_OnFrame
	.2byte 0


GalecrestCity_OnFrame::
# 27 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POST_ANCIENT, GalecrestCity_OnFrame_2
# 31 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 32 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_OnFrame_Movement_0
# 33 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 34 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_OnFrame_Text_0
# 35 "data//maps/GalecrestCity/scripts.pory"
	release
# 38 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_GAB
# 40 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 42 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_POST_ANCIENT
# 43 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_OnFrame_2:
	end


GalecrestCity_DetectiveMeet_ReactionInit::
# 60 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 61 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 62 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 63 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 65 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_ReactionInit_Text_0
	return


GalecrestCity_DetectiveMeet_Trigger0::
# 70 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 73 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 74 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 75 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 76 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 78 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_ReactionInit_Text_0
# 79 "data//maps/GalecrestCity/scripts.pory"
	release
# 82 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger0_Movement_0
# 85 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return


GalecrestCity_DetectiveMeet_Trigger1::
# 89 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 92 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 93 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 94 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 95 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 97 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_ReactionInit_Text_0
# 98 "data//maps/GalecrestCity/scripts.pory"
	release
# 101 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger1_Movement_0
# 102 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 105 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return


GalecrestCity_DetectiveMeet_Trigger2::
# 109 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 112 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 113 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 114 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 115 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 117 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_ReactionInit_Text_0
# 118 "data//maps/GalecrestCity/scripts.pory"
	release
# 121 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger2_Movement_0
# 122 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 125 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return


GalecrestCity_DetectiveMeet_Trigger3::
# 129 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 132 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 133 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 134 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 135 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 137 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_ReactionInit_Text_0
# 138 "data//maps/GalecrestCity/scripts.pory"
	release
# 141 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Trigger3_Movement_0
# 142 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 145 "data//maps/GalecrestCity/scripts.pory"
	call GalecrestCity_DetectiveMeet_Main
	return


GalecrestCity_DetectiveMeet_Main::
# 150 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_0
# 151 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 152 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 153 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_ReactionInit_Movement_0
# 154 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 155 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_1
# 156 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_2
# 157 "data//maps/GalecrestCity/scripts.pory"
	release
# 158 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_OnFrame_Movement_0
# 159 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_OnFrame_Movement_0
# 160 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_0
# 161 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_3
# 162 "data//maps/GalecrestCity/scripts.pory"
	release
# 163 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_1
# 164 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_1
# 165 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_1
# 166 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_4
# 167 "data//maps/GalecrestCity/scripts.pory"
	release
# 170 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_1
# 171 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_1
# 172 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_1
# 174 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_RUE, GalecrestCity_DetectiveMeet_Main_Movement_2
# 175 "data//maps/GalecrestCity/scripts.pory"
	waitmovement 0
# 176 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_RUE
# 179 "data//maps/GalecrestCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveMeet_Main_Movement_3
# 180 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_5
# 181 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_6
# 182 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_7
# 183 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET1, GalecrestCity_DetectiveMeet_Main_Movement_3
# 184 "data//maps/GalecrestCity/scripts.pory"
	applymovement LOCALID_DET2, GalecrestCity_DetectiveMeet_Main_Movement_3
# 185 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_DetectiveMeet_Main_Text_8
# 188 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 189 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET1
# 190 "data//maps/GalecrestCity/scripts.pory"
	removeobject LOCALID_DET2
# 191 "data//maps/GalecrestCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 194 "data//maps/GalecrestCity/scripts.pory"
	setflag FLAG_GALECREST_DETECTIVE_CONVO
# 195 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return


GalecrestCity_EventScript_Poochyena::
# 218 "data//maps/GalecrestCity/scripts.pory"
	goto_if_set FLAG_GALECREST_POOCHYENA, GalecrestCity_EventScript_Poochyena_2
# 220 "data//maps/GalecrestCity/scripts.pory"
	lockall
# 221 "data//maps/GalecrestCity/scripts.pory"
	msgbox GalecrestCity_EventScript_Poochyena_Text_0
# 222 "data//maps/GalecrestCity/scripts.pory"
	releaseall
	return

GalecrestCity_EventScript_Poochyena_2:
	end


# 32 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_OnFrame_Movement_0:
# 32 "data//maps/GalecrestCity/scripts.pory"
	face_right
	step_end

# 60 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_ReactionInit_Movement_0:
# 60 "data//maps/GalecrestCity/scripts.pory"
	face_down
# 60 "data//maps/GalecrestCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 82 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger0_Movement_0:
# 82 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 82 "data//maps/GalecrestCity/scripts.pory"
	walk_right
# 82 "data//maps/GalecrestCity/scripts.pory"
	walk_right
# 82 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 101 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger1_Movement_0:
# 101 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 101 "data//maps/GalecrestCity/scripts.pory"
	walk_right
# 101 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 121 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger2_Movement_0:
# 121 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 121 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 141 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Trigger3_Movement_0:
# 141 "data//maps/GalecrestCity/scripts.pory"
	walk_up
# 141 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 141 "data//maps/GalecrestCity/scripts.pory"
	walk_up
	step_end

# 160 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_0:
# 160 "data//maps/GalecrestCity/scripts.pory"
	face_left
	step_end

# 163 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_1:
# 163 "data//maps/GalecrestCity/scripts.pory"
	face_down
	step_end

# 174 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_2:
# 174 "data//maps/GalecrestCity/scripts.pory"
	walk_right
# 174 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 174 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 174 "data//maps/GalecrestCity/scripts.pory"
	walk_left
# 174 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 174 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 174 "data//maps/GalecrestCity/scripts.pory"
	walk_down
# 174 "data//maps/GalecrestCity/scripts.pory"
	walk_down
	step_end

# 179 "data//maps/GalecrestCity/scripts.pory"
GalecrestCity_DetectiveMeet_Main_Movement_3:
# 179 "data//maps/GalecrestCity/scripts.pory"
	face_up
	step_end

GalecrestCity_OnFrame_Text_0:
# 34 "data//maps/GalecrestCity/scripts.pory"
	.string "GABRIELLE: ...have we left that place?\p"
	.string "Yes! Yes we have! I'm so relieved. I've\n"
	.string "never been so happy to see a city\l"
	.string "before!\p"
	.string "This must be GALECREST CITY. The\n"
	.string "Detective Academy is here. I suppose\l"
	.string "you'll be headed there. Just head north\l"
	.string "from here...\p"
	.string "...and I'll be going back to Team Somber.\p"
	.string "Sigh...\p"
	.string "...\p"
	.string "{PLAYER}, we're still enemies! But you\n"
	.string "saved me. I owe you one.\p"
	.string "...\p"
	.string "T-thanks. Bye.$"

GalecrestCity_DetectiveMeet_ReactionInit_Text_0:
# 65 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: {PLAYER}! You're here! Where\n"
	.string "have you been?$"

GalecrestCity_DetectiveMeet_Main_Text_0:
# 150 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: the detectives here have been\n"
	.string "pursuing other leads on PRofessor\l"
	.string "Tenebris' whereabouts. We heard from\l"
	.string "KOHLA that you went up to the peak to\l"
	.string "stop Team Somber. What happened up\l"
	.string "there?\p"
	.string "...$"

GalecrestCity_DetectiveMeet_Main_Text_1:
# 155 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: What! Is that true? Did all of that\n"
	.string "happen?\p"
	.string "...\p"
	.string "I'm glad you're safe, {PLAYER}. What a\n"
	.string "series of events!$"

GalecrestCity_DetectiveMeet_Main_Text_2:
# 156 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: So the dreamstones\n"
	.string "transported you to another dimension\l"
	.string "that you couldn't recognise? And the\l"
	.string "{PKMN} were completely different too?$"

GalecrestCity_DetectiveMeet_Main_Text_3:
# 161 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: Did you know this was\n"
	.string "possible RUE?\p"
	.string "RUE: No, I had no idea. We knew that\n"
	.string "dreamstones absorbed {PKMN} memories, but\l"
	.string "to transport things and people...$"

GalecrestCity_DetectiveMeet_Main_Text_4:
# 166 "data//maps/GalecrestCity/scripts.pory"
	.string "RUE: {PLAYER}, you encountered\n"
	.string "ancient {PKMN} there, right? I wonder...\p"
	.string "Did the dreamstone take you back to\n"
	.string "the past somehow?\p"
	.string "RUE: Incredible...so much we don't yet\n"
	.string "know...\p"
	.string "I need to do some research. I'm going to\n"
	.string "head back to the lab.\p"
	.string "{PLAYER}, the detectives have some\n"
	.string "updates for you.\p"
	.string "...\p"
	.string "I'm glad you're okay.$"

GalecrestCity_DetectiveMeet_Main_Text_5:
# 180 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: We've uncovered a new lead\n"
	.string "on Professor Tenebris. An agent told us\l"
	.string "that he was spotted in Goldensun City.$"

GalecrestCity_DetectiveMeet_Main_Text_6:
# 181 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: There's one issue...Team\n"
	.string "Somber. They're a known and dangerous\l"
	.string "criminal syndicate that aims to wrest\l"
	.string "power from the government.\p"
	.string "Their hideout is confirmed to be\n"
	.string "somewhere around Goldensun City too.\p"
	.string "If the Professor, his dreamstone and\n"
	.string "Team Somber are in the same spot,\l"
	.string "things could erupt. We have to be there.$"

GalecrestCity_DetectiveMeet_Main_Text_7:
# 182 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: But now that we know Team\n"
	.string "Somber is involved, we fear for your\l"
	.string "safety, {PLAYER}. You may have\l"
	.string "handled a couple of grunts, but you're\l"
	.string "still green.\p"
	.string "So heed my instructions carefully -\n"
	.string "make your way to Goldensun City as soon\l"
	.string "as possible and keep a low profile. Do\l"
	.string "NOT engage with any suspicious\l"
	.string "individuals!$"

GalecrestCity_DetectiveMeet_Main_Text_8:
# 185 "data//maps/GalecrestCity/scripts.pory"
	.string "DETECTIVE: This building is the\n"
	.string "Detective Academy. Your frield KOHLA\l"
	.string "was trained here. He knows the plan\l"
	.string "already. Go and talk to him first.$"

GalecrestCity_EventScript_Poochyena_Text_0:
# 221 "data//maps/GalecrestCity/scripts.pory"
	.string "POOCHYENA: grr...\p"
	.string "The POOCHYENA are clearly on edge.\n"
	.string "Better not aggravate them!$"
