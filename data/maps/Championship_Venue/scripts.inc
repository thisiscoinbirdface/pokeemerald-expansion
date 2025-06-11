# 1 "data//maps/Championship_Venue/scripts.pory"

# 2 "data//maps/Championship_Venue/scripts.pory"
    .set LOCALID_TEALA, 1

Championship_Venue_MapScripts::
	.byte 0


ChampionshipVenue_SignUp::
# 13 "data//maps/Championship_Venue/scripts.pory"
	goto_if_unset FLAG_CHAMPIONSHIP_KOHLA_ROOM, ChampionshipVenue_SignUp_2
# 18 "data//maps/Championship_Venue/scripts.pory"
	goto_if_set FLAG_CHAMP_SIGNUP_DONE, ChampionshipVenue_SignUp_4
# 22 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_2, MSGBOX_YESNO
# 24 "data//maps/Championship_Venue/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ChampionshipVenue_SignUp_7
# 28 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_4
# 29 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_5, MSGBOX_SIGN
# 30 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_6
# 31 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_8
# 32 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_9
# 33 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_C
# 34 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_10
# 35 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_11
# 36 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_D
# 37 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_10
# 38 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_12
# 39 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_E
# 40 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_10
# 41 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_13
# 42 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_F
# 43 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_10
# 44 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_14
# 45 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_G
# 46 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_10
# 47 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_15
# 48 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_A
# 49 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_10
# 50 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_16
# 51 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_B
# 52 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_10
# 53 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_17
# 54 "data//maps/Championship_Venue/scripts.pory"
	playse SE_NOTE_C_HIGH
# 55 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_10
# 56 "data//maps/Championship_Venue/scripts.pory"
	delay 16
# 57 "data//maps/Championship_Venue/scripts.pory"
	playse SE_DING_DONG
# 58 "data//maps/Championship_Venue/scripts.pory"
	msgbox_delay ChampionshipVenue_SignUp_Text_7, ChampionshipVenue_SignUp_Text_18
# 60 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_19
# 61 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_20, MSGBOX_YESNO
# 63 "data//maps/Championship_Venue/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ChampionshipVenue_SignUp_11
ChampionshipVenue_SignUp_10:
# 67 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_22
# 69 "data//maps/Championship_Venue/scripts.pory"
	setflag FLAG_CHAMP_SIGNUP_DONE
# 70 "data//maps/Championship_Venue/scripts.pory"
	setvar VAR_CHAMP_STAGE, 1
# 72 "data//maps/Championship_Venue/scripts.pory"
	releaseall
	end

ChampionshipVenue_SignUp_2:
# 14 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_0, MSGBOX_NPC
	end

ChampionshipVenue_SignUp_4:
# 19 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_1, MSGBOX_NPC
	end

ChampionshipVenue_SignUp_7:
# 25 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_3, MSGBOX_NPC
	end

ChampionshipVenue_SignUp_11:
# 64 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_SignUp_Text_21
	goto ChampionshipVenue_SignUp_10


ChampionshipVenue_Entry::
# 81 "data//maps/Championship_Venue/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, ChampionshipVenue_Entry_2
# 86 "data//maps/Championship_Venue/scripts.pory"
	goto_if_set FLAG_CHAMP_SIGNUP_DONE, ChampionshipVenue_Entry_5
# 111 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_Entry_Text_6, MSGBOX_NPC
ChampionshipVenue_Entry_4:
# 114 "data//maps/Championship_Venue/scripts.pory"
	release
	end

ChampionshipVenue_Entry_2:
# 82 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_Entry_Text_0, MSGBOX_NPC
	end

ChampionshipVenue_Entry_5:
# 87 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_Entry_Text_1, MSGBOX_YESNO
# 89 "data//maps/Championship_Venue/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ChampionshipVenue_Entry_8
	goto ChampionshipVenue_Entry_4

ChampionshipVenue_Entry_8:
# 92 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_Entry_Text_2, MSGBOX_POKENAV
# 93 "data//maps/Championship_Venue/scripts.pory"
	dynmultichoice 10, 8, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ChampionshipVenue_Entry_Text_3, ChampionshipVenue_Entry_Text_4
# 95 "data//maps/Championship_Venue/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ChampionshipVenue_Entry_11
# 97 "data//maps/Championship_Venue/scripts.pory"
	msgbox ChampionshipVenue_Entry_Text_5
# 98 "data//maps/Championship_Venue/scripts.pory"
	release
# 100 "data//maps/Championship_Venue/scripts.pory"
	applymovement LOCALID_TEALA, ChampionshipVenue_Entry_Movement_0
# 101 "data//maps/Championship_Venue/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChampionshipVenue_Entry_Movement_1
# 102 "data//maps/Championship_Venue/scripts.pory"
	waitmovement 0
# 105 "data//maps/Championship_Venue/scripts.pory"
	compare VAR_CHAMP_STAGE, 1
	goto_if_eq ChampionshipVenue_Entry_13
	goto ChampionshipVenue_Entry_4

ChampionshipVenue_Entry_11:
	end

ChampionshipVenue_Entry_13:
# 106 "data//maps/Championship_Venue/scripts.pory"
	warp MAP_CHAMPIONSHIP_R1, 4, 8
	goto ChampionshipVenue_Entry_4


Champ_Venue_NPC1::
# 122 "data//maps/Championship_Venue/scripts.pory"
	msgbox Champ_Venue_NPC1_Text_0, MSGBOX_NPC
	end


Champ_Venue_NPC2::
# 127 "data//maps/Championship_Venue/scripts.pory"
	msgbox Champ_Venue_NPC2_Text_0, MSGBOX_NPC
	end


Champ_Venue_NPC3::
# 132 "data//maps/Championship_Venue/scripts.pory"
	msgbox Champ_Venue_NPC3_Text_0, MSGBOX_NPC
	end


Champ_Venue_NPC4::
# 137 "data//maps/Championship_Venue/scripts.pory"
	msgbox Champ_Venue_NPC4_Text_0, MSGBOX_NPC
	end


Champ_Venue_NPC5::
# 142 "data//maps/Championship_Venue/scripts.pory"
	msgbox Champ_Venue_NPC5_Text_0, MSGBOX_NPC
	end


Champ_Venue_NPC6::
# 147 "data//maps/Championship_Venue/scripts.pory"
	msgbox Champ_Venue_NPC6_Text_0, MSGBOX_NPC
	end


Champ_Venue_Inger::
# 156 "data//maps/Championship_Venue/scripts.pory"
	msgbox Champ_Venue_Inger_Text_0, MSGBOX_NPC
	end


Champ_Venue_Minior::
# 160 "data//maps/Championship_Venue/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 161 "data//maps/Championship_Venue/scripts.pory"
	msgbox Champ_Venue_Minior_Text_0, MSGBOX_NPC
	end


Champ_Venue_Ariana::
# 165 "data//maps/Championship_Venue/scripts.pory"
	msgbox Champ_Venue_Ariana_Text_0, MSGBOX_NPC
	end


Champ_Venue_Tauros::
# 169 "data//maps/Championship_Venue/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_NORMAL
# 170 "data//maps/Championship_Venue/scripts.pory"
	msgbox Champ_Venue_Tauros_Text_0, MSGBOX_NPC
	end


Champ_Venue_NoticeBoard::
# 178 "data//maps/Championship_Venue/scripts.pory"
	lockall
# 179 "data//maps/Championship_Venue/scripts.pory"
	msgbox Champ_Venue_NoticeBoard_Text_0
# 180 "data//maps/Championship_Venue/scripts.pory"
	releaseall
	end


# 100 "data//maps/Championship_Venue/scripts.pory"
ChampionshipVenue_Entry_Movement_0:
# 100 "data//maps/Championship_Venue/scripts.pory"
	walk_up
# 100 "data//maps/Championship_Venue/scripts.pory"
	walk_up
# 100 "data//maps/Championship_Venue/scripts.pory"
	walk_right
# 100 "data//maps/Championship_Venue/scripts.pory"
	face_left
	step_end

# 101 "data//maps/Championship_Venue/scripts.pory"
ChampionshipVenue_Entry_Movement_1:
# 101 "data//maps/Championship_Venue/scripts.pory"
	walk_up
# 101 "data//maps/Championship_Venue/scripts.pory"
	walk_up
# 101 "data//maps/Championship_Venue/scripts.pory"
	walk_up
# 101 "data//maps/Championship_Venue/scripts.pory"
	walk_up
	step_end

ChampionshipVenue_SignUp_Text_0:
# 14 "data//maps/Championship_Venue/scripts.pory"
	.string "Welcome, trainer, to this years\n"
	.string "Cormoria Pokémon Championships!\l"
	.string "Registration will open shortly.\p"
	.string "We're waiting for all the participants\n"
	.string "to arrive at the venue.$"

ChampionshipVenue_SignUp_Text_1:
# 19 "data//maps/Championship_Venue/scripts.pory"
	.string "Please head to your designated battle\n"
	.string "hall through the right.\p"
	.string "Good luck, trainer!$"

ChampionshipVenue_SignUp_Text_2:
# 22 "data//maps/Championship_Venue/scripts.pory"
	.string "Welcome, trainer, to this years\n"
	.string "Cormoria Pokémon Championships!\p"
	.string "Are you here to register your\n"
	.string "participation?$"

ChampionshipVenue_SignUp_Text_3:
# 25 "data//maps/Championship_Venue/scripts.pory"
	.string "This sign-up center is for\n"
	.string "participating trainers only.\p"
	.string "If you're looking for the hotel,\n"
	.string "it's to the left of this building.\p"
	.string "Have a nice day!$"

ChampionshipVenue_SignUp_Text_4:
# 28 "data//maps/Championship_Venue/scripts.pory"
	.string "Very good!\p"
	.string "Firstly, I'll need your trainer card.$"

ChampionshipVenue_SignUp_Text_5:
# 29 "data//maps/Championship_Venue/scripts.pory"
	.string "{PLAYER} handed the attendant the\n"
	.string "Trainer Card.$"

ChampionshipVenue_SignUp_Text_6:
# 30 "data//maps/Championship_Venue/scripts.pory"
	.string "I'll just swipe in in here...$"

ChampionshipVenue_SignUp_Text_7:
# 31 "data//maps/Championship_Venue/scripts.pory"
	.string "PC$"

ChampionshipVenue_SignUp_Text_8:
# 31 "data//maps/Championship_Venue/scripts.pory"
	.string "PROCESSING...\p"
	.string "TRAINER NAME: {PLAYER}$"

ChampionshipVenue_SignUp_Text_9:
# 32 "data//maps/Championship_Venue/scripts.pory"
	.string "HARD BADGE...$"

ChampionshipVenue_SignUp_Text_10:
# 34 "data//maps/Championship_Venue/scripts.pory"
	.string "REGISTERED.$"

ChampionshipVenue_SignUp_Text_11:
# 35 "data//maps/Championship_Venue/scripts.pory"
	.string "FLAME BADGE...$"

ChampionshipVenue_SignUp_Text_12:
# 38 "data//maps/Championship_Venue/scripts.pory"
	.string "NORMAL BADGE...$"

ChampionshipVenue_SignUp_Text_13:
# 41 "data//maps/Championship_Venue/scripts.pory"
	.string "DRAMA BADGE...$"

ChampionshipVenue_SignUp_Text_14:
# 44 "data//maps/Championship_Venue/scripts.pory"
	.string "IRONFIST BADGE...$"

ChampionshipVenue_SignUp_Text_15:
# 47 "data//maps/Championship_Venue/scripts.pory"
	.string "SPARK BADGE...$"

ChampionshipVenue_SignUp_Text_16:
# 50 "data//maps/Championship_Venue/scripts.pory"
	.string "WAVE BADGE...$"

ChampionshipVenue_SignUp_Text_17:
# 53 "data//maps/Championship_Venue/scripts.pory"
	.string "RUST BADGE...$"

ChampionshipVenue_SignUp_Text_18:
# 58 "data//maps/Championship_Venue/scripts.pory"
	.string "TRAINER {PLAYER} IS ELIGIBLE FOR\n"
	.string "THE POKEMON CHAMPIONSHIP.$"

ChampionshipVenue_SignUp_Text_19:
# 60 "data//maps/Championship_Venue/scripts.pory"
	.string "And we're all set!\n"
	.string "You came right on time, {PLAYER}.\p"
	.string "We have 32 spots available for trainers\n"
	.string "and you took the last one!$"

ChampionshipVenue_SignUp_Text_20:
# 61 "data//maps/Championship_Venue/scripts.pory"
	.string "Do you want me to explain the\n"
	.string "tournament rules to you?$"

ChampionshipVenue_SignUp_Text_21:
# 64 "data//maps/Championship_Venue/scripts.pory"
	.string "Alright - make sure you listen to the\n"
	.string "rules carefully, okay?\p"
	.string "The Cormoria Pokémon Championship is a\n"
	.string "single-elimination tournament where\l"
	.string "the 32 strongest trainers in Cormoria\l"
	.string "compete for the title of Champion!\p"
	.string "Each round, you'll be paired against a\n"
	.string "random opponent. If you win your\l"
	.string "battle, you advance to the next stage.\l"
	.string "If you lose, you'll be eliminated from\l"
	.string "the tournament!\p"
	.string "There are four stages - the round of\n"
	.string "32, the round of 16, the quarter-finals\l"
	.string "and the semi-finals. Make it through\l"
	.string "and you'll be in the grand finals!$"

ChampionshipVenue_SignUp_Text_22:
# 67 "data//maps/Championship_Venue/scripts.pory"
	.string "You can check your paired opponent on\n"
	.string "the noticeboard to the left.\p"
	.string "When you're ready, please head inside\n"
	.string "through the door to your right.\p"
	.string "Good luck!$"

ChampionshipVenue_Entry_Text_0:
# 82 "data//maps/Championship_Venue/scripts.pory"
	.string "Thank you for participating in this\n"
	.string "year's Championship!$"

ChampionshipVenue_Entry_Text_1:
# 87 "data//maps/Championship_Venue/scripts.pory"
	.string "Welcome trainer!\n"
	.string "Are you ready for your match?$"

ChampionshipVenue_Entry_Text_2:
# 92 "data//maps/Championship_Venue/scripts.pory"
	.string "Warning! You are about to enter the\n"
	.string "Pokémon Championship.\p"
	.string "If you lose at any point in the\n"
	.string "tournament, you will be eliminated\l"
	.string "and your game will auto-save.\p"
	.string "Make sure you're ready!$"

ChampionshipVenue_Entry_Text_3:
# 93 "data//maps/Championship_Venue/scripts.pory"
	.string "I'm ready!$"

ChampionshipVenue_Entry_Text_4:
# 93 "data//maps/Championship_Venue/scripts.pory"
	.string "Not yet$"

ChampionshipVenue_Entry_Text_5:
# 97 "data//maps/Championship_Venue/scripts.pory"
	.string "Very good. Please follow me.$"

ChampionshipVenue_Entry_Text_6:
# 111 "data//maps/Championship_Venue/scripts.pory"
	.string "Sorry, only participating trainers may\n"
	.string "enter past this point.\p"
	.string "Are you a trainer?\p"
	.string "Please register yourself at the\n"
	.string "front desk to your left.$"

Champ_Venue_NPC1_Text_0:
# 122 "data//maps/Championship_Venue/scripts.pory"
	.string "Move, kid! You're getting in the shot!$"

Champ_Venue_NPC2_Text_0:
# 127 "data//maps/Championship_Venue/scripts.pory"
	.string "We're trying to get an exclusive scoop\n"
	.string "with the {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY}!\p"
	.string "...so get out of the way!$"

Champ_Venue_NPC3_Text_0:
# 132 "data//maps/Championship_Venue/scripts.pory"
	.string "I remember my first Pokémon\n"
	.string "Championship! I was a young lad, around\l"
	.string "your age. I'm old now, but the thrill is\l"
	.string "the same!$"

Champ_Venue_NPC4_Text_0:
# 137 "data//maps/Championship_Venue/scripts.pory"
	.string "I'm not competing - I thought this was\n"
	.string "the hotel.$"

Champ_Venue_NPC5_Text_0:
# 142 "data//maps/Championship_Venue/scripts.pory"
	.string "Will my son be alright? He's a bug maniac\n"
	.string "and I've always supported his dreams.\l"
	.string "But I don't know if he's as strong as\l"
	.string "the other trainers here.$"

Champ_Venue_NPC6_Text_0:
# 147 "data//maps/Championship_Venue/scripts.pory"
	.string "Haaah! Haaaaaaaaaah!\n"
	.string "It's showtime!$"

Champ_Venue_Inger_Text_0:
# 156 "data//maps/Championship_Venue/scripts.pory"
	.string "What's up {PLAYER}? Come to see your\n"
	.string "opponent details?$"

Champ_Venue_Minior_Text_0:
# 161 "data//maps/Championship_Venue/scripts.pory"
	.string "Minior is curling up to {COLOR RED}Inger{COLOR DARK_GRAY}!$"

Champ_Venue_Ariana_Text_0:
# 165 "data//maps/Championship_Venue/scripts.pory"
	.string "Gym Leaders aren't allowed to compete,\n"
	.string "since we're part of the system.\l"
	.string "Otherwise {COLOR RED}Raazi{COLOR DARK_GRAY} would win every time!$"

Champ_Venue_Tauros_Text_0:
# 170 "data//maps/Championship_Venue/scripts.pory"
	.string "Tauros looks at the noticeboard...\n"
	.string "It huffs, disappointed.$"

Champ_Venue_NoticeBoard_Text_0:
# 179 "data//maps/Championship_Venue/scripts.pory"
	.string "{PLAYER} scanned the noticeboard...\p"
	.string "...\p"
	.string "ROUND 1 PAIRINGS\n"
	.string "Kohla vs. Brent...\l"
	.string "...\l"
	.string "...{COLOR RED}Gabrielle{COLOR DARK_GRAY} vs. Anaya\l"
	.string "...\l"
	.string "...\l"
	.string "...Aha!\p"
	.string "{PLAYER} vs. Chara.$"
