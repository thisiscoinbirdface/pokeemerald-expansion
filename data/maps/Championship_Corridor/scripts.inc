Championship_Corridor_MapScripts::
# 2 "data//maps/Championship_Corridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Championship_Corridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Championship_Corridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/Championship_Corridor/scripts.pory"
	map_script_2 VAR_TEMP_A, 0, Championship_Register
	.2byte 0


Championship_Register::
# 8 "data//maps/Championship_Corridor/scripts.pory"
	lockall
# 10 "data//maps/Championship_Corridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_Register_Movement_0
# 11 "data//maps/Championship_Corridor/scripts.pory"
	waitmovement 0
# 12 "data//maps/Championship_Corridor/scripts.pory"
	applymovement 1, Championship_Register_Movement_1
# 14 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Register_Text_0
# 15 "data//maps/Championship_Corridor/scripts.pory"
	release
# 17 "data//maps/Championship_Corridor/scripts.pory"
	delay 20
# 18 "data//maps/Championship_Corridor/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 19 "data//maps/Championship_Corridor/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 20 "data//maps/Championship_Corridor/scripts.pory"
	delay 40
# 21 "data//maps/Championship_Corridor/scripts.pory"
	setvar VAR_TEMP_A, 1
# 24 "data//maps/Championship_Corridor/scripts.pory"
	releaseall
	end


Championship_Corridor_Exit_Nurse::
# 29 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Exit_Nurse_Text_0, MSGBOX_YESNO
# 30 "data//maps/Championship_Corridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Championship_Corridor_Exit_Nurse_2
Championship_Corridor_Exit_Nurse_1:
	end

Championship_Corridor_Exit_Nurse_2:
# 31 "data//maps/Championship_Corridor/scripts.pory"
	warp MAP_CHAMPIONSHIP, 10, 10
	goto Championship_Corridor_Exit_Nurse_1


Championship_Corridor_NPC1::
# 43 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_NPC1_Text_0, MSGBOX_NPC
	end


Championship_Corridor_Mon1::
# 48 "data//maps/Championship_Corridor/scripts.pory"
	playmoncry SPECIES_EELECTROSS, CRY_MODE_NORMAL
# 49 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Mon1_Text_0
	end


Championship_Corridor_NPC2::
# 55 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_NPC2_Text_0, MSGBOX_NPC
	end


Championship_Corridor_Mon2::
# 60 "data//maps/Championship_Corridor/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_NORMAL
# 61 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Mon2_Text_0
	end


Championship_Corridor_NPC3::
# 67 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_NPC3_Text_0, MSGBOX_NPC
	end


Championship_Corridor_Mon3::
# 72 "data//maps/Championship_Corridor/scripts.pory"
	playmoncry SPECIES_ROSERADE, CRY_MODE_NORMAL
# 73 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Mon3_Text_0
	end


Championship_Corridor_NPC4::
# 79 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_NPC4_Text_0, MSGBOX_NPC
	end


Championship_Corridor_Mon4::
# 84 "data//maps/Championship_Corridor/scripts.pory"
	playmoncry SPECIES_EELECTROSS, CRY_MODE_NORMAL
# 85 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Mon4_Text_0
	end


Championship_Corridor_NPC5::
# 91 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_NPC5_Text_0, MSGBOX_NPC
	end


Championship_Corridor_Mon5::
# 96 "data//maps/Championship_Corridor/scripts.pory"
	playmoncry SPECIES_EELECTROSS, CRY_MODE_NORMAL
# 97 "data//maps/Championship_Corridor/scripts.pory"
	msgbox Championship_Corridor_Mon5_Text_0
	end


Championship_Corridor_TV::
# 102 "data//maps/Championship_Corridor/scripts.pory"
	playse SE_APPLAUSE
# 103 "data//maps/Championship_Corridor/scripts.pory"
	msgbox_delay Championship_Corridor_TV_Text_0, Championship_Corridor_TV_Text_1
	return


# 10 "data//maps/Championship_Corridor/scripts.pory"
Championship_Register_Movement_0:
# 10 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 10 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 10 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 10 "data//maps/Championship_Corridor/scripts.pory"
	walk_up
# 10 "data//maps/Championship_Corridor/scripts.pory"
	face_right
	step_end

# 12 "data//maps/Championship_Corridor/scripts.pory"
Championship_Register_Movement_1:
# 12 "data//maps/Championship_Corridor/scripts.pory"
	face_left
	step_end

Championship_Register_Text_0:
# 14 "data//maps/Championship_Corridor/scripts.pory"
	.string "With your defeat to Chara, you have\n"
	.string "been eliminated from the Cormoria\l"
	.string "Pokemon Championship.\p"
	.string "Your final result is: Top 64.\p"
	.string "Congratulations, {PLAYER}!\p"
	.string "Despite not winning the tournament,\n"
	.string "you and your Pokemon have proved\l"
	.string "yourselves as strong trainers.\p"
	.string "For our record, we will now proceed to\n"
	.string "enter your team into the Hall of Fame.$"

Championship_Corridor_Exit_Nurse_Text_0:
# 29 "data//maps/Championship_Corridor/scripts.pory"
	.string "Would you like to return to the\n"
	.string "Championship hall?$"

Championship_Corridor_NPC1_Text_0:
# 43 "data//maps/Championship_Corridor/scripts.pory"
	.string "We could've been up there...$"

Championship_Corridor_Mon1_Text_0:
# 49 "data//maps/Championship_Corridor/scripts.pory"
	.string "Eelectross is in a daze...$"

Championship_Corridor_NPC2_Text_0:
# 55 "data//maps/Championship_Corridor/scripts.pory"
	.string "Sniff...I just can't believe it...after all\n"
	.string "our training...$"

Championship_Corridor_Mon2_Text_0:
# 61 "data//maps/Championship_Corridor/scripts.pory"
	.string "Excadrill is trying to console its\n"
	.string "trainer, but it's clearly sad too.$"

Championship_Corridor_NPC3_Text_0:
# 67 "data//maps/Championship_Corridor/scripts.pory"
	.string "My first-round opponent was the Ace\n"
	.string "Rookie from Galecrest...\p"
	.string "Roserade and I never had a chance.\p"
	.string "It's fine...\p"
	.string "I just...sniff...$"

Championship_Corridor_Mon3_Text_0:
# 73 "data//maps/Championship_Corridor/scripts.pory"
	.string "Roserade's petals look a little singed...$"

Championship_Corridor_NPC4_Text_0:
# 79 "data//maps/Championship_Corridor/scripts.pory"
	.string "...\p"
	.string "Toxtricity and I trained for years...it\n"
	.string "was over so fast...$"

Championship_Corridor_Mon4_Text_0:
# 85 "data//maps/Championship_Corridor/scripts.pory"
	.string "Toxtricity looks dejected...$"

Championship_Corridor_NPC5_Text_0:
# 91 "data//maps/Championship_Corridor/scripts.pory"
	.string "Listen up, Avalugg! We're not gonna lose\n"
	.string "next time, got it?\p"
	.string "We're going to win!\p"
	.string "...sniff...next time...$"

Championship_Corridor_Mon5_Text_0:
# 97 "data//maps/Championship_Corridor/scripts.pory"
	.string "Avalugg is trying to put on a brave face\n"
	.string "for its trainer.$"

Championship_Corridor_TV_Text_0:
# 103 "data//maps/Championship_Corridor/scripts.pory"
	.string "TV$"

Championship_Corridor_TV_Text_1:
# 103 "data//maps/Championship_Corridor/scripts.pory"
	.string "And the crowd goes wild as Kohla's\n"
	.string "Ceruledge knocks out another Pokemon!\l"
	.string "I must say, we haven't seen a trainer\l"
	.string "like this in years! He sure is this years\l"
	.string "favourite!$"
