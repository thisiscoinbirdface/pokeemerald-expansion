# 1 "data//maps/Championship_Venue/scripts.pory"

# 2 "data//maps/Championship_Venue/scripts.pory"
    .set LOCALID_TEALA, 1

Championship_Venue_MapScripts::
	.byte 0


ChampionshipVenue_SignUp::
# 13 "data//maps/Championship_Venue/scripts.pory"
	goto_if_set FLAG_CHAMP_SIGNUP_DONE, ChampionshipVenue_SignUp_1
# 17 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_1, MSGBOX_YESNO
# 19 "data//maps/Championship_Venue/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ChampionshipVenue_SignUp_4
# 23 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_3
# 24 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_4, MSGBOX_SIGN
# 25 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_5
# 26 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_7
# 27 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_8
# 28 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_C
# 29 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_9
# 30 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_10
# 31 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_D
# 32 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_9
# 33 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_11
# 34 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_E
# 35 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_9
# 36 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_12
# 37 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_F
# 38 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_9
# 39 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_13
# 40 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_G
# 41 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_9
# 42 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_14
# 43 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_A
# 44 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_9
# 45 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_15
# 46 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_B
# 47 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_9
# 48 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_16
# 49 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_C_HIGH
# 50 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_9
# 51 "data//maps/Championship_Venue/scripts.pory"
	delay 16
# 52 "data//maps/Championship_Venue/scripts.pory"
	playse SE_DING_DONG
# 53 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_6, ChampionshipVenue_SignUp_Text_17
# 55 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_18
# 56 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_19, MSGBOX_YESNO
# 58 "data//maps/Championship_Venue/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ChampionshipVenue_SignUp_8
ChampionshipVenue_SignUp_7:
# 62 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_21
# 64 "data//maps/Championship_Venue/scripts.pory"
	setflag FLAG_CHAMP_SIGNUP_DONE
# 65 "data//maps/Championship_Venue/scripts.pory"
	setvar VAR_CHAMP_STAGE, 1
# 67 "data//maps/Championship_Venue/scripts.pory"
	releaseall
	end

ChampionshipVenue_SignUp_1:
# 14 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_0, MSGBOX_NPC
	end

ChampionshipVenue_SignUp_4:
# 20 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_2, MSGBOX_NPC
	end

ChampionshipVenue_SignUp_8:
# 59 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_20
	goto ChampionshipVenue_SignUp_7


ChampionshipVenue_Entry::
# 75 "data//maps/Championship_Venue/scripts.pory"
	goto_if_set FLAG_CHAMP_SIGNUP_DONE, ChampionshipVenue_Entry_2
# 100 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_Entry_Text_5, MSGBOX_NPC
ChampionshipVenue_Entry_1:
# 103 "data//maps/Championship_Venue/scripts.pory"
	release
	end

ChampionshipVenue_Entry_2:
# 76 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_Entry_Text_0, MSGBOX_YESNO
# 78 "data//maps/Championship_Venue/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ChampionshipVenue_Entry_5
	goto ChampionshipVenue_Entry_1

ChampionshipVenue_Entry_5:
# 81 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_Entry_Text_1, MSGBOX_POKENAV
# 82 "data//maps/Championship_Venue/scripts.pory"
	dynmultichoice 10, 8, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ChampionshipVenue_Entry_Text_2, ChampionshipVenue_Entry_Text_3
# 84 "data//maps/Championship_Venue/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ChampionshipVenue_Entry_8
# 86 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_Entry_Text_4
# 87 "data//maps/Championship_Venue/scripts.pory"
	release
# 89 "data//maps/Championship_Venue/scripts.pory"
	applymovement LOCALID_TEALA, ChampionshipVenue_Entry_Movement_0
# 90 "data//maps/Championship_Venue/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChampionshipVenue_Entry_Movement_1
# 91 "data//maps/Championship_Venue/scripts.pory"
	waitmovement 0
# 94 "data//maps/Championship_Venue/scripts.pory"
	compare VAR_CHAMP_STAGE, 1
	goto_if_eq ChampionshipVenue_Entry_10
	goto ChampionshipVenue_Entry_1

ChampionshipVenue_Entry_8:
	end

ChampionshipVenue_Entry_10:
# 95 "data//maps/Championship_Venue/scripts.pory"
	warp MAP_CHAMPIONSHIP_R1, 4, 8
	goto ChampionshipVenue_Entry_1


# 89 "data//maps/Championship_Venue/scripts.pory"
ChampionshipVenue_Entry_Movement_0:
# 89 "data//maps/Championship_Venue/scripts.pory"
	walk_up
# 89 "data//maps/Championship_Venue/scripts.pory"
	walk_up
# 89 "data//maps/Championship_Venue/scripts.pory"
	walk_right
# 89 "data//maps/Championship_Venue/scripts.pory"
	face_left
	step_end

# 90 "data//maps/Championship_Venue/scripts.pory"
ChampionshipVenue_Entry_Movement_1:
# 90 "data//maps/Championship_Venue/scripts.pory"
	walk_up
# 90 "data//maps/Championship_Venue/scripts.pory"
	walk_up
# 90 "data//maps/Championship_Venue/scripts.pory"
	walk_up
# 90 "data//maps/Championship_Venue/scripts.pory"
	walk_up
	step_end

ChampionshipVenue_SignUp_Text_0:
# 14 "data//maps/Championship_Venue/scripts.pory"
	.string "Please head to your designated battle\n"
	.string "hall through the right.\p"
	.string "Good luck, trainer!$"

ChampionshipVenue_SignUp_Text_1:
# 17 "data//maps/Championship_Venue/scripts.pory"
	.string "Welcome, trainer, to this years\n"
	.string "Cormoria Pokemon Championships!\p"
	.string "Are you here to register your\n"
	.string "participation?$"

ChampionshipVenue_SignUp_Text_2:
# 20 "data//maps/Championship_Venue/scripts.pory"
	.string "This sign-up center is for\n"
	.string "participating trainers only.\p"
	.string "If you're looking for the hotel,\n"
	.string "it's to the left of this building.\p"
	.string "Have a nice day!$"

ChampionshipVenue_SignUp_Text_3:
# 23 "data//maps/Championship_Venue/scripts.pory"
	.string "Very good!\p"
	.string "Firstly, I'll need your trainer card.$"

ChampionshipVenue_SignUp_Text_4:
# 24 "data//maps/Championship_Venue/scripts.pory"
	.string "{PLAYER} handed the attendant the\n"
	.string "Trainer Card.$"

ChampionshipVenue_SignUp_Text_5:
# 25 "data//maps/Championship_Venue/scripts.pory"
	.string "I'll just swipe in in here...$"

ChampionshipVenue_SignUp_Text_6:
# 26 "data//maps/Championship_Venue/scripts.pory"
	.string "PC$"

ChampionshipVenue_SignUp_Text_7:
# 26 "data//maps/Championship_Venue/scripts.pory"
	.string "PROCESSING...\p"
	.string "TRAINER NAME: {PLAYER}$"

ChampionshipVenue_SignUp_Text_8:
# 27 "data//maps/Championship_Venue/scripts.pory"
	.string "HARD BADGE...$"

ChampionshipVenue_SignUp_Text_9:
# 29 "data//maps/Championship_Venue/scripts.pory"
	.string "REGISTERED.$"

ChampionshipVenue_SignUp_Text_10:
# 30 "data//maps/Championship_Venue/scripts.pory"
	.string "FLAME BADGE...$"

ChampionshipVenue_SignUp_Text_11:
# 33 "data//maps/Championship_Venue/scripts.pory"
	.string "NORMAL BADGE...$"

ChampionshipVenue_SignUp_Text_12:
# 36 "data//maps/Championship_Venue/scripts.pory"
	.string "DRAMA BADGE...$"

ChampionshipVenue_SignUp_Text_13:
# 39 "data//maps/Championship_Venue/scripts.pory"
	.string "IRONFIST BADGE...$"

ChampionshipVenue_SignUp_Text_14:
# 42 "data//maps/Championship_Venue/scripts.pory"
	.string "SPARK BADGE...$"

ChampionshipVenue_SignUp_Text_15:
# 45 "data//maps/Championship_Venue/scripts.pory"
	.string "WAVE BADGE...$"

ChampionshipVenue_SignUp_Text_16:
# 48 "data//maps/Championship_Venue/scripts.pory"
	.string "RUST BADGE...$"

ChampionshipVenue_SignUp_Text_17:
# 53 "data//maps/Championship_Venue/scripts.pory"
	.string "TRAINER {PLAYER} IS ELIGIBLE FOR\n"
	.string "THE POKEMON CHAMPIONSHIP.$"

ChampionshipVenue_SignUp_Text_18:
# 55 "data//maps/Championship_Venue/scripts.pory"
	.string "And we're all set!\n"
	.string "You came right on time, {PLAYER}.\p"
	.string "We have 64 spots available for trainers\n"
	.string "and you took the last one!$"

ChampionshipVenue_SignUp_Text_19:
# 56 "data//maps/Championship_Venue/scripts.pory"
	.string "Do you want me to explain the\n"
	.string "tournament rules to you?$"

ChampionshipVenue_SignUp_Text_20:
# 59 "data//maps/Championship_Venue/scripts.pory"
	.string "Alright - make sure you listen to the\n"
	.string "rules carefully, okay?\p"
	.string "The Cormoria Pokemon Championship is a\n"
	.string "single-elimination tournament where\l"
	.string "the 64 strongest trainers in Cormoria\l"
	.string "compete for the title of Champion!\p"
	.string "Each round, you'll be paired against a\n"
	.string "random opponent. If you win your\l"
	.string "battle, you advance to the next stage.\l"
	.string "If you lose, you'll be eliminated from\l"
	.string "the tournament!\p"
	.string "There are four stages - the round of\n"
	.string "64, the round of 32, the quarter-finals\l"
	.string "and the semi-finals. Make it through\l"
	.string "and you'll be a Grand Finalist!$"

ChampionshipVenue_SignUp_Text_21:
# 62 "data//maps/Championship_Venue/scripts.pory"
	.string "You can check your paired opponent on\n"
	.string "the noticeboard to the left.\p"
	.string "When you're ready, please head inside\n"
	.string "through the door to your right.\p"
	.string "Good luck!$"

ChampionshipVenue_Entry_Text_0:
# 76 "data//maps/Championship_Venue/scripts.pory"
	.string "Welcome trainer!\n"
	.string "Are you ready for your match?$"

ChampionshipVenue_Entry_Text_1:
# 81 "data//maps/Championship_Venue/scripts.pory"
	.string "Warning! You are about to enter the\n"
	.string "Pokemon Championship.\p"
	.string "If you lose at any point in the\n"
	.string "tournament, you will be eliminated\l"
	.string "and your game will auto-save.\p"
	.string "Make sure you're ready!$"

ChampionshipVenue_Entry_Text_2:
# 82 "data//maps/Championship_Venue/scripts.pory"
	.string "I'm ready!$"

ChampionshipVenue_Entry_Text_3:
# 82 "data//maps/Championship_Venue/scripts.pory"
	.string "Not yet$"

ChampionshipVenue_Entry_Text_4:
# 86 "data//maps/Championship_Venue/scripts.pory"
	.string "Very good. Please follow me.$"

ChampionshipVenue_Entry_Text_5:
# 100 "data//maps/Championship_Venue/scripts.pory"
	.string "Sorry, only participating trainers may\n"
	.string "enter past this point.\p"
	.string "Are you a trainer?\p"
	.string "Please register yourself at the\n"
	.string "front desk to your left.$"
