# 1 "data//maps/Championship_Hotel_Rooms/scripts.pory"

# 2 "data//maps/Championship_Hotel_Rooms/scripts.pory"
    .set LOCALID_MELEA, 7
# 3 "data//maps/Championship_Hotel_Rooms/scripts.pory"
    .set LOCALID_MOXIE, 8

Championship_Hotel_Rooms_MapScripts::
	.byte 0


Championship_Hotel_Rooms_NPC1::
# 17 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC1_Text_0, MSGBOX_NPC
	end


Championship_Hotel_Rooms_NPC2::
# 22 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC2_Text_0
# 23 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end


Championship_Hotel_Rooms_Mon::
# 27 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 28 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_Mon_Text_0
# 29 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end


Championship_Hotel_Rooms_NPC3::
# 34 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto_if_set FLAG_TUTOR_VICTORY_CAPE, Championship_Hotel_Rooms_NPC3_2
# 39 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_1, MSGBOX_YESNO
# 41 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_NPC3_5
# 46 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_3
# 48 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_4, MSGBOX_POKENAV
# 49 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_5, MSGBOX_YESNO
# 51 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_NPC3_8
# 56 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_ChooseMove
	return

Championship_Hotel_Rooms_NPC3_2:
# 35 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_0, MSGBOX_NPC
	end

Championship_Hotel_Rooms_NPC3_5:
# 42 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_2, MSGBOX_NPC
	end

Championship_Hotel_Rooms_NPC3_8:
# 52 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_6, MSGBOX_NPC
	end


Championship_Hotel_Rooms_ChooseMove::
# 61 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	message Championship_Hotel_Rooms_ChooseMove_Text_0
# 62 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmessage
# 63 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Championship_Hotel_Rooms_ChooseMove_Text_1, Championship_Hotel_Rooms_ChooseMove_Text_2, Championship_Hotel_Rooms_ChooseMove_Text_3, Championship_Hotel_Rooms_ChooseMove_Text_4, Championship_Hotel_Rooms_ChooseMove_Text_5, Championship_Hotel_Rooms_ChooseMove_Text_6, Championship_Hotel_Rooms_ChooseMove_Text_7
# 67 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_2
Championship_Hotel_Rooms_ChooseMove_1:
# 71 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_5
Championship_Hotel_Rooms_ChooseMove_4:
# 75 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_8
Championship_Hotel_Rooms_ChooseMove_7:
# 79 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_11
Championship_Hotel_Rooms_ChooseMove_10:
# 83 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_14
Championship_Hotel_Rooms_ChooseMove_13:
# 87 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_17
Championship_Hotel_Rooms_ChooseMove_16:
# 91 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_20
Championship_Hotel_Rooms_ChooseMove_19:
# 96 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_6, MSGBOX_NPC
# 97 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end

Championship_Hotel_Rooms_ChooseMove_2:
# 68 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_STEEL_BEAM
# 69 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_1

Championship_Hotel_Rooms_ChooseMove_5:
# 72 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_DRACO_METEOR
# 73 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_4

Championship_Hotel_Rooms_ChooseMove_8:
# 76 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_OVERHEAT
# 77 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_7

Championship_Hotel_Rooms_ChooseMove_11:
# 80 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_STORM
# 81 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_10

Championship_Hotel_Rooms_ChooseMove_14:
# 84 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_PUMP
# 85 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_13

Championship_Hotel_Rooms_ChooseMove_17:
# 88 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_GUNK_SHOT
# 89 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_16

Championship_Hotel_Rooms_ChooseMove_20:
# 92 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_METEOR_BEAM
# 93 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_19


Championship_Hotel_Rooms_TeachMove::
# 102 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 104 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_TeachMove_1
# 108 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setflag FLAG_TUTOR_VICTORY_CAPE
# 109 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_TeachMove_Text_0, MSGBOX_NPC
# 110 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end

Championship_Hotel_Rooms_TeachMove_1:
# 105 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_ChooseMove
	return


Championship_Hotel_Rooms_NPC4::
# 118 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC4_Text_0, MSGBOX_NPC
	end


Championship_Hotel_Rooms_Kohla::
	return


Championship_Hotel_Rooms_NPC1_Text_0:
# 17 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "I can't wait for the Championship to\n"
	.string "start! Who are you rooting for?$"

Championship_Hotel_Rooms_NPC2_Text_0:
# 22 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Alright Chandelure - we've got to focus\n"
	.string "and win!$"

Championship_Hotel_Rooms_Mon_Text_0:
# 28 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Chandelure is heated up!$"

Championship_Hotel_Rooms_NPC3_Text_0:
# 35 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Show me your new move at the\n"
	.string "Championship!$"

Championship_Hotel_Rooms_NPC3_Text_1:
# 39 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "You look like a strong trainer.\n"
	.string "Are you competing this year?$"

Championship_Hotel_Rooms_NPC3_Text_2:
# 42 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Hmpf.$"

Championship_Hotel_Rooms_NPC3_Text_3:
# 46 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "If you're going up against the best,\n"
	.string "you'll need the best! I can teach one of\l"
	.string "your Pokemon a really powerful move.\l"
	.string "But I'll only teach one - I can't be\l"
	.string "biased, you know!$"

Championship_Hotel_Rooms_NPC3_Text_4:
# 48 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "You will only be able to teach\n"
	.string "a move once. Make sure you choose\l"
	.string "both the move and Pokemon carefully!$"

Championship_Hotel_Rooms_NPC3_Text_5:
# 49 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Teach a powerful move?$"

Championship_Hotel_Rooms_NPC3_Text_6:
# 52 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Come back when you're ready.$"

Championship_Hotel_Rooms_ChooseMove_Text_0:
# 61 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Which move should I teach?$"

Championship_Hotel_Rooms_ChooseMove_Text_1:
# 64 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Steel Beam$"

Championship_Hotel_Rooms_ChooseMove_Text_2:
# 64 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Draco Meteor$"

Championship_Hotel_Rooms_ChooseMove_Text_3:
# 64 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Overheat$"

Championship_Hotel_Rooms_ChooseMove_Text_4:
# 64 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Leaf Storm$"

Championship_Hotel_Rooms_ChooseMove_Text_5:
# 65 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Hydro Pump$"

Championship_Hotel_Rooms_ChooseMove_Text_6:
# 65 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Gunk Shot$"

Championship_Hotel_Rooms_ChooseMove_Text_7:
# 65 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Meteor Beam$"

Championship_Hotel_Rooms_TeachMove_Text_0:
# 109 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "That's all I can do for you!$"

Championship_Hotel_Rooms_NPC4_Text_0:
# 118 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "$"
