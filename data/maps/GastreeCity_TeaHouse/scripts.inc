GastreeCity_TeaHouse_MapScripts::
	.byte 0


GastreeCity_TeaHouse_EventScript_OldLady::
	return


GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt::
# 15 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 17 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_0
# 18 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 19 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0
# 20 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 21 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_1
# 22 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 23 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_1
# 24 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 25 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_2
# 26 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 27 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_2
# 28 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 29 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0
# 30 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 31 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_3
# 32 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 35 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_1
# 36 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 37 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_4, MSGBOX_YESNO
# 39 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	compare VAR_RESULT, 1
# 41 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	goto_if_eq GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest
# 44 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_5
# 45 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	return


GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest::
# 53 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	lockall
# 54 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	applymovement 4, GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Movement_0
# 55 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	waitmovement 0
# 56 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	msgbox GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Text_0
# 57 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	release
# 58 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	releaseall
	return


# 19 "data//maps/GastreeCity_TeaHouse/scripts.pory"
GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_0:
# 19 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	face_left
	step_end

# 23 "data//maps/GastreeCity_TeaHouse/scripts.pory"
GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_1:
# 23 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	face_down
	step_end

# 25 "data//maps/GastreeCity_TeaHouse/scripts.pory"
GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Movement_2:
# 25 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	emote_exclamation_mark
	step_end

# 54 "data//maps/GastreeCity_TeaHouse/scripts.pory"
GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Movement_0:
# 54 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	jump_in_place_down
	step_end

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_0:
# 17 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "OWNER: Welcome to our tea shop, young\n"
	.string "one. Please enjoy a selection of our\l"
	.string "finely crafted traditional\l"
	.string "matchas...you don't want traditional\l"
	.string "teas?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_1:
# 21 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Sigh...you young ones just have no\n"
	.string "taste.\p"
	.string "Well...times are changing I suppose, and\n"
	.string "our business should change with them.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_2:
# 27 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "OWNER: Yes, I'd like to try crafting a\n"
	.string "modern tea. Something with zing and\l"
	.string "zap! Like those energy drinks.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_3:
# 31 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "but I'll need the right\n"
	.string "ingredients...hmm...$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_4:
# 37 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "Young one, will you help me?$"

GastreeCity_TeaHouse_EventScript_Poltchageist_FirstPrompt_Text_5:
# 44 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "I understand. Please come back if you'd\n"
	.string "like to help me out.$"

GastreeCity_TeaHouse_EventScript_Poltchageist_GiveQuest_Text_0:
# 56 "data//maps/GastreeCity_TeaHouse/scripts.pory"
	.string "You breathe new life into these old\n"
	.string "bones, young one! For the tea, I'll\l"
	.string "need...hmm...let's see...\p"
	.string "1 ENERGY POWDER...\n"
	.string "...1 SHOAL SALT...\n"
	.string "...and...\p"
	.string "...1 REVIVAL HERB! You should be able to\n"
	.string "find some REVIVAL HERBs in our back\l"
	.string "garden, but you'll have to find the rest\l"
	.string "yourself.$"
