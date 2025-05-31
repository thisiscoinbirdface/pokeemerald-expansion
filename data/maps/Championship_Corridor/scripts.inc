Championship_Corridor_MapScripts::
	.byte 0


Championship_Corridor_Register::
# 4 "data//maps/Championship_Corridor/scripts.pory"
	lockall
# 6 "data//maps/Championship_Corridor/scripts.pory"
	applymovement 1, Championship_Corridor_Register_Movement_0
# 8 "data//maps/Championship_Corridor/scripts.pory"
	compare VAR_CHAMP_STAGE, 1
	goto_if_eq Championship_Corridor_Register_2
Championship_Corridor_Register_1:
# 12 "data//maps/Championship_Corridor/scripts.pory"
	compare VAR_CHAMP_STAGE, 2
	goto_if_eq Championship_Corridor_Register_5
Championship_Corridor_Register_4:
# 16 "data//maps/Championship_Corridor/scripts.pory"
	compare VAR_CHAMP_STAGE, 3
	goto_if_eq Championship_Corridor_Register_8
Championship_Corridor_Register_7:
# 20 "data//maps/Championship_Corridor/scripts.pory"
	compare VAR_CHAMP_STAGE, 4
	goto_if_eq Championship_Corridor_Register_11
Championship_Corridor_Register_10:
# 26 "data//maps/Championship_Corridor/scripts.pory"
	delay 20
# 27 "data//maps/Championship_Corridor/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 28 "data//maps/Championship_Corridor/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 29 "data//maps/Championship_Corridor/scripts.pory"
	delay 40
# 30 "data//maps/Championship_Corridor/scripts.pory"
	setvar VAR_TEMP_A, 1
# 31 "data//maps/Championship_Corridor/scripts.pory"
	setflag FLAG_GAME_CLEAR
# 32 "data//maps/Championship_Corridor/scripts.pory"
	special GameClear
# 33 "data//maps/Championship_Corridor/scripts.pory"
	releaseall
	end

Championship_Corridor_Register_2:
# 9 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Register_Text_0
# 10 "data//maps/Championship_Corridor/scripts.pory"
	release
	goto Championship_Corridor_Register_1

Championship_Corridor_Register_5:
# 13 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Register_Text_1
# 14 "data//maps/Championship_Corridor/scripts.pory"
	release
	goto Championship_Corridor_Register_4

Championship_Corridor_Register_8:
# 17 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Register_Text_2
# 18 "data//maps/Championship_Corridor/scripts.pory"
	release
	goto Championship_Corridor_Register_7

Championship_Corridor_Register_11:
# 21 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Register_Text_3
# 22 "data//maps/Championship_Corridor/scripts.pory"
	release
	goto Championship_Corridor_Register_10


Championship_Corridor_Register_Nurse::
# 38 "data//maps/Championship_Corridor/scripts.pory"
	special GameClear
# 40 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Register_Nurse_Text_0, MSGBOX_NPC
	end


Championship_Corridor_Exit_Nurse::
# 45 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Exit_Nurse_Text_0, MSGBOX_YESNO
# 46 "data//maps/Championship_Corridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Championship_Corridor_Exit_Nurse_2
Championship_Corridor_Exit_Nurse_1:
	end

Championship_Corridor_Exit_Nurse_2:
# 47 "data//maps/Championship_Corridor/scripts.pory"
	special StartCredits
	goto Championship_Corridor_Exit_Nurse_1


Championship_Corridor_NPC1::
# 60 "data//maps/Championship_Corridor/scripts.pory"
	lockall
# 61 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_NPC1_Text_0
# 62 "data//maps/Championship_Corridor/scripts.pory"
	releaseall
	end


Championship_Corridor_Mon1::
# 67 "data//maps/Championship_Corridor/scripts.pory"
	playmoncry SPECIES_EELEKTROSS, CRY_MODE_NORMAL
# 68 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Mon1_Text_0, MSGBOX_NPC
	end


Championship_Corridor_NPC2::
# 74 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_NPC2_Text_0, MSGBOX_NPC
	end


Championship_Corridor_Mon2::
# 79 "data//maps/Championship_Corridor/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_NORMAL
# 80 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Mon2_Text_0, MSGBOX_NPC
	end


Championship_Corridor_NPC3::
# 86 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_NPC3_Text_0, MSGBOX_NPC
	end


Championship_Corridor_Mon3::
# 91 "data//maps/Championship_Corridor/scripts.pory"
	playmoncry SPECIES_ROSERADE, CRY_MODE_NORMAL
# 92 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Mon3_Text_0, MSGBOX_NPC
	end


Championship_Corridor_NPC4::
# 98 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_NPC4_Text_0, MSGBOX_NPC
	end


Championship_Corridor_Mon4::
# 103 "data//maps/Championship_Corridor/scripts.pory"
	playmoncry SPECIES_TOXTRICITY, CRY_MODE_NORMAL
# 104 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Mon4_Text_0, MSGBOX_NPC
	end


Championship_Corridor_NPC5::
# 111 "data//maps/Championship_Corridor/scripts.pory"
	lockall
# 112 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_NPC5_Text_0
# 113 "data//maps/Championship_Corridor/scripts.pory"
	releaseall
	end


Championship_Corridor_Mon5::
# 118 "data//maps/Championship_Corridor/scripts.pory"
	playmoncry SPECIES_AVALUGG_HISUI, CRY_MODE_NORMAL
# 119 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Mon5_Text_0, MSGBOX_NPC
	end


Championship_Corridor_TV::
# 124 "data//maps/Championship_Corridor/scripts.pory"
	playse SE_APPLAUSE
# 125 "data//maps/Championship_Corridor/scripts.pory"
	msgbox_delay Championship_Corridor_TV_Text_0, Championship_Corridor_TV_Text_1
	end


# 6 "data//maps/Championship_Corridor/scripts.pory"
Championship_Corridor_Register_Movement_0:
# 6 "data//maps/Championship_Corridor/scripts.pory"
	face_left
	step_end

Championship_Corridor_Register_Text_0:
# 9 "data//maps/Championship_Corridor/scripts.pory"
	.string "With your defeat to Chara, you have\n"
	.string "been eliminated from the Cormoria\l"
	.string "Pokemon Championship.\p"
	.string "Your final result is: Top 32.\p"
	.string "Congratulations, {PLAYER}!\p"
	.string "Despite not winning the tournament,\n"
	.string "you and your Pokemon have proved\l"
	.string "yourselves as strong trainers.\p"
	.string "For our record, we will now proceed to\n"
	.string "enter your team into the Hall of Fame.$"

Championship_Corridor_Register_Text_1:
# 13 "data//maps/Championship_Corridor/scripts.pory"
	.string "With your defeat to Stanja, you have\n"
	.string "been eliminated from the Cormoria\l"
	.string "Pokemon Championship.\p"
	.string "Your final result is: Top 16.\p"
	.string "Congratulations, {PLAYER}!\p"
	.string "Despite not winning the tournament,\n"
	.string "you and your Pokemon have proved\l"
	.string "yourselves as strong trainers.\p"
	.string "For our record, we will now proceed to\n"
	.string "enter your team into the Hall of Fame.$"

Championship_Corridor_Register_Text_2:
# 17 "data//maps/Championship_Corridor/scripts.pory"
	.string "With your defeat to Anaya, you have\n"
	.string "been eliminated from the Cormoria\l"
	.string "Pokemon Championship.\p"
	.string "Your final result is: Quarter-Finalist.\p"
	.string "Congratulations, {PLAYER}!\p"
	.string "Despite not winning the tournament,\n"
	.string "you and your Pokemon have proved\l"
	.string "yourselves as strong trainers.\p"
	.string "For our record, we will now proceed to\n"
	.string "enter your team into the Hall of Fame.$"

Championship_Corridor_Register_Text_3:
# 21 "data//maps/Championship_Corridor/scripts.pory"
	.string "With your defeat to Gabrielle, you have\n"
	.string "been eliminated from the Cormoria\l"
	.string "Pokemon Championship.\p"
	.string "Your final result is: Semi-Finalist.\p"
	.string "Congratulations, {PLAYER}!\p"
	.string "Despite not winning the tournament,\n"
	.string "you and your Pokemon have proved\l"
	.string "yourselves as strong trainers.\p"
	.string "For our record, we will now proceed to\n"
	.string "enter your team into the Hall of Fame.$"

Championship_Corridor_Register_Nurse_Text_0:
# 40 "data//maps/Championship_Corridor/scripts.pory"
	.string "Whenever ready, please use the machine\n"
	.string "next to me.$"

Championship_Corridor_Exit_Nurse_Text_0:
# 45 "data//maps/Championship_Corridor/scripts.pory"
	.string "Would you like to return to the\n"
	.string "Championship hall?$"

Championship_Corridor_NPC1_Text_0:
# 61 "data//maps/Championship_Corridor/scripts.pory"
	.string "We could've been up there...$"

Championship_Corridor_Mon1_Text_0:
# 68 "data//maps/Championship_Corridor/scripts.pory"
	.string "Eelectross is in a daze...$"

Championship_Corridor_NPC2_Text_0:
# 74 "data//maps/Championship_Corridor/scripts.pory"
	.string "Sniff...I just can't believe it..\n"
	.string "...after all our training...$"

Championship_Corridor_Mon2_Text_0:
# 80 "data//maps/Championship_Corridor/scripts.pory"
	.string "Excadrill is trying to console its\n"
	.string "trainer, but it's clearly sad too.$"

Championship_Corridor_NPC3_Text_0:
# 86 "data//maps/Championship_Corridor/scripts.pory"
	.string "My first-round opponent was the Ace\n"
	.string "Rookie from Galecrest...\p"
	.string "Roserade and I never had a chance.\p"
	.string "It's fine...\p"
	.string "I just...sniff...$"

Championship_Corridor_Mon3_Text_0:
# 92 "data//maps/Championship_Corridor/scripts.pory"
	.string "Roserade's petals look a little singed...$"

Championship_Corridor_NPC4_Text_0:
# 98 "data//maps/Championship_Corridor/scripts.pory"
	.string "...\p"
	.string "Toxtricity and I trained for years...\n"
	.string "...it was over so fast...$"

Championship_Corridor_Mon4_Text_0:
# 104 "data//maps/Championship_Corridor/scripts.pory"
	.string "Toxtricity looks dejected...$"

Championship_Corridor_NPC5_Text_0:
# 112 "data//maps/Championship_Corridor/scripts.pory"
	.string "Listen up, Avalugg! We're not gonna lose\n"
	.string "next time, got it?\p"
	.string "We're going to win!\p"
	.string "...sniff...next time...$"

Championship_Corridor_Mon5_Text_0:
# 119 "data//maps/Championship_Corridor/scripts.pory"
	.string "Avalugg is trying to put on a brave face\n"
	.string "for its trainer.$"

Championship_Corridor_TV_Text_0:
# 125 "data//maps/Championship_Corridor/scripts.pory"
	.string "TV$"

Championship_Corridor_TV_Text_1:
# 125 "data//maps/Championship_Corridor/scripts.pory"
	.string "And the crowd goes wild as Kohla's\n"
	.string "Ceruledge knocks out another Pokemon!\l"
	.string "I must say, we haven't seen a trainer\l"
	.string "like this in years! The skill! The style!\p"
	.string "He sure is this years favourite!$"
