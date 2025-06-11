# 1 "data//maps/Championship_Hotel_Rooms/scripts.pory"

# 2 "data//maps/Championship_Hotel_Rooms/scripts.pory"
    .set LOCALID_MELEA, 7
# 3 "data//maps/Championship_Hotel_Rooms/scripts.pory"
    .set LOCALID_MOXIE, 8

Championship_Hotel_Rooms_MapScripts::
	.byte 0


Championship_Hotel_Rooms_NPC1::
# 17 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto_if_set FLAG_CHAMPIONSHIP_KOHLA_ROOM, Championship_Hotel_Rooms_NPC1_2
# 21 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC1_Text_1, MSGBOX_NPC
	end

Championship_Hotel_Rooms_NPC1_2:
# 18 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC1_Text_0, MSGBOX_NPC
	end


Championship_Hotel_Rooms_NPC2::
# 26 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC2_Text_0
# 27 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end


Championship_Hotel_Rooms_Mon::
# 31 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 32 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_Mon_Text_0
# 33 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end


Championship_Hotel_Rooms_NPC3::
# 38 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto_if_set FLAG_TUTOR_VICTORY_CAPE, Championship_Hotel_Rooms_NPC3_2
# 43 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_1, MSGBOX_YESNO
# 45 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_NPC3_5
# 50 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_3
# 52 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_4, MSGBOX_POKENAV
# 53 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_5, MSGBOX_YESNO
# 55 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_NPC3_8
# 60 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_ChooseMove
	return

Championship_Hotel_Rooms_NPC3_2:
# 39 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_0, MSGBOX_NPC
	end

Championship_Hotel_Rooms_NPC3_5:
# 46 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_2, MSGBOX_NPC
	end

Championship_Hotel_Rooms_NPC3_8:
# 56 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_6, MSGBOX_NPC
	end


Championship_Hotel_Rooms_ChooseMove::
# 65 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	message Championship_Hotel_Rooms_ChooseMove_Text_0
# 66 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmessage
# 67 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Championship_Hotel_Rooms_ChooseMove_Text_1, Championship_Hotel_Rooms_ChooseMove_Text_2, Championship_Hotel_Rooms_ChooseMove_Text_3, Championship_Hotel_Rooms_ChooseMove_Text_4, Championship_Hotel_Rooms_ChooseMove_Text_5, Championship_Hotel_Rooms_ChooseMove_Text_6, Championship_Hotel_Rooms_ChooseMove_Text_7
# 71 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_2
Championship_Hotel_Rooms_ChooseMove_1:
# 75 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_5
Championship_Hotel_Rooms_ChooseMove_4:
# 79 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_8
Championship_Hotel_Rooms_ChooseMove_7:
# 83 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_11
Championship_Hotel_Rooms_ChooseMove_10:
# 87 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_14
Championship_Hotel_Rooms_ChooseMove_13:
# 91 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_17
Championship_Hotel_Rooms_ChooseMove_16:
# 95 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_20
Championship_Hotel_Rooms_ChooseMove_19:
# 100 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_6, MSGBOX_NPC
# 101 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end

Championship_Hotel_Rooms_ChooseMove_2:
# 72 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_STEEL_BEAM
# 73 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_1

Championship_Hotel_Rooms_ChooseMove_5:
# 76 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_DRACO_METEOR
# 77 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_4

Championship_Hotel_Rooms_ChooseMove_8:
# 80 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_OVERHEAT
# 81 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_7

Championship_Hotel_Rooms_ChooseMove_11:
# 84 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_STORM
# 85 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_10

Championship_Hotel_Rooms_ChooseMove_14:
# 88 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_PUMP
# 89 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_13

Championship_Hotel_Rooms_ChooseMove_17:
# 92 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_GUNK_SHOT
# 93 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_16

Championship_Hotel_Rooms_ChooseMove_20:
# 96 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_METEOR_BEAM
# 97 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_19


Championship_Hotel_Rooms_TeachMove::
# 106 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 108 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_TeachMove_1
# 112 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setflag FLAG_TUTOR_VICTORY_CAPE
# 113 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_TeachMove_Text_0, MSGBOX_NPC
# 114 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end

Championship_Hotel_Rooms_TeachMove_1:
# 109 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_ChooseMove
	return


Championship_Hotel_Rooms_NPC4::
# 122 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC4_Text_0, MSGBOX_NPC
	end


Championship_Hotel_Rooms_Kohla::
# 136 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto_if_set FLAG_CHAMPIONSHIP_KOHLA_ROOM, Championship_Hotel_Rooms_Kohla_2
# 143 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	lockall
# 145 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	hidefollower
# 146 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	special SpawnCameraObject
# 147 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Championship_Hotel_Rooms_Kohla_Movement_0
# 148 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 149 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	special RemoveCameraObject
# 151 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_2
# 152 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_4
# 153 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_5
# 154 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_6, Championship_Hotel_Rooms_Kohla_Text_7
# 155 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_8
# 156 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_9
# 157 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_6, Championship_Hotel_Rooms_Kohla_Text_10
# 158 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_11
# 159 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_12
# 160 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_13
# 161 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_6, Championship_Hotel_Rooms_Kohla_Text_14
# 162 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_15
# 163 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_16
# 164 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_6, Championship_Hotel_Rooms_Kohla_Text_17
# 165 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_18
# 166 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_19
# 167 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_20
# 168 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_21
# 169 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_6, Championship_Hotel_Rooms_Kohla_Text_22
# 173 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_Hotel_Rooms_Kohla_Movement_1
# 174 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 177 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	opendoor 11, 1
# 178 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitdooranim
# 180 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	addobject LOCALID_MELEA
# 181 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setobjectxy LOCALID_MELEA, 11, 1
# 183 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_2
# 184 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 186 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	addobject LOCALID_MOXIE
# 187 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setobjectxy LOCALID_MOXIE, 11, 1
# 189 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_2
# 190 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MOXIE, Championship_Hotel_Rooms_Kohla_Movement_2
# 191 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 193 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	closedoor 11, 1
# 195 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_3
# 196 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MOXIE, Championship_Hotel_Rooms_Kohla_Movement_3
# 197 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 199 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	delay 24
# 201 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_4
# 202 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MOXIE, Championship_Hotel_Rooms_Kohla_Movement_4
# 203 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 204 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	delay 36
# 206 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_5
# 207 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MOXIE, Championship_Hotel_Rooms_Kohla_Movement_6
# 208 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 210 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	delay 40
# 211 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_7
# 212 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MOXIE, Championship_Hotel_Rooms_Kohla_Movement_7
# 213 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 215 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	removeobject LOCALID_MOXIE
# 216 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	removeobject LOCALID_MELEA
# 218 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	delay 16
# 219 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	playse SE_DING_DONG
# 220 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_23, Championship_Hotel_Rooms_Kohla_Text_24
# 222 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setflag FLAG_CHAMPIONSHIP_KOHLA_ROOM
# 224 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end

Championship_Hotel_Rooms_Kohla_2:
# 137 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_Kohla_Text_0, MSGBOX_SIGN
# 138 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end


# 147 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_0:
# 147 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_up
# 147 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_up
	step_end

# 173 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_1:
# 173 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_right
# 173 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	face_left
	step_end

# 183 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_2:
# 183 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_down
	step_end

# 195 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_3:
# 195 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_left
# 195 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_left
# 195 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	face_right
	step_end

# 201 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_4:
# 201 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_left
# 201 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	emote_exclamation_mark
# 201 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	jump_in_place_right
	step_end

# 206 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_5:
# 206 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	face_up
	step_end

# 207 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_6:
# 207 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	face_down
	step_end

# 211 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_7:
# 211 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_fast_left
# 211 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_fast_left
# 211 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_fast_left
# 211 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_fast_left
	step_end

Championship_Hotel_Rooms_NPC1_Text_0:
# 18 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Who were those two people?\n"
	.string "They were in such a hurry!$"

Championship_Hotel_Rooms_NPC1_Text_1:
# 21 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "I can't wait for the Championship!\n"
	.string "Which trainer are you rooting for?$"

Championship_Hotel_Rooms_NPC2_Text_0:
# 26 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Alright Chandelure - we've got to focus\n"
	.string "and win!$"

Championship_Hotel_Rooms_Mon_Text_0:
# 32 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Chandelure is heated up!$"

Championship_Hotel_Rooms_NPC3_Text_0:
# 39 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Show me your new move at the\n"
	.string "Championship!$"

Championship_Hotel_Rooms_NPC3_Text_1:
# 43 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "You look like a strong trainer.\n"
	.string "Are you competing this year?$"

Championship_Hotel_Rooms_NPC3_Text_2:
# 46 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Hmpf.$"

Championship_Hotel_Rooms_NPC3_Text_3:
# 50 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "If you're going up against the best,\n"
	.string "you'll need the best! I can teach one of\l"
	.string "your Pokémon a really powerful move.\l"
	.string "But I'll only teach one - I can't be\l"
	.string "biased, you know!$"

Championship_Hotel_Rooms_NPC3_Text_4:
# 52 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "You will only be able to teach\n"
	.string "a move once. Make sure you choose\l"
	.string "both the move and Pokémon carefully!$"

Championship_Hotel_Rooms_NPC3_Text_5:
# 53 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Teach a powerful move?$"

Championship_Hotel_Rooms_NPC3_Text_6:
# 56 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Come back when you're ready.$"

Championship_Hotel_Rooms_ChooseMove_Text_0:
# 65 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Which move should I teach?$"

Championship_Hotel_Rooms_ChooseMove_Text_1:
# 68 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Steel Beam$"

Championship_Hotel_Rooms_ChooseMove_Text_2:
# 68 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Draco Meteor$"

Championship_Hotel_Rooms_ChooseMove_Text_3:
# 68 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Overheat$"

Championship_Hotel_Rooms_ChooseMove_Text_4:
# 68 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Leaf Storm$"

Championship_Hotel_Rooms_ChooseMove_Text_5:
# 69 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Hydro Pump$"

Championship_Hotel_Rooms_ChooseMove_Text_6:
# 69 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Gunk Shot$"

Championship_Hotel_Rooms_ChooseMove_Text_7:
# 69 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Meteor Beam$"

Championship_Hotel_Rooms_TeachMove_Text_0:
# 113 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "That's all I can do for you!$"

Championship_Hotel_Rooms_NPC4_Text_0:
# 122 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "I booked front-row seats to the finals\n"
	.string "months in advance!$"

Championship_Hotel_Rooms_Kohla_Text_0:
# 137 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "It's locked.$"

Championship_Hotel_Rooms_Kohla_Text_1:
# 151 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Kohla$"

Championship_Hotel_Rooms_Kohla_Text_2:
# 151 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "How did you two get in here?$"

Championship_Hotel_Rooms_Kohla_Text_3:
# 152 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Melea$"

Championship_Hotel_Rooms_Kohla_Text_4:
# 152 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Calm down! We're not here to fight.$"

Championship_Hotel_Rooms_Kohla_Text_5:
# 153 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Give me a good reason I shouldn't call\n"
	.string "the police right now.$"

Championship_Hotel_Rooms_Kohla_Text_6:
# 154 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Moxie$"

Championship_Hotel_Rooms_Kohla_Text_7:
# 154 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Will you give us a moment to talk at\n"
	.string "least? Like Melea said, we're not here\l"
	.string "to fight. Just listen to us.$"

Championship_Hotel_Rooms_Kohla_Text_8:
# 155 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "...fine. Hurry up then.\n"
	.string "I've got a tournament to win.$"

Championship_Hotel_Rooms_Kohla_Text_9:
# 156 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "That's why we're here, {COLOR GREEN}Kohla{COLOR DARK_GRAY}.$"

Championship_Hotel_Rooms_Kohla_Text_10:
# 157 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Have you see the rest of the\n"
	.string "competitors this year?\l"
	.string "Do an of the names stick out?$"

Championship_Hotel_Rooms_Kohla_Text_11:
# 158 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "If you're talking about that former\n"
	.string "grunt, {COLOR RED}Gabrielle{COLOR DARK_GRAY} -$"

Championship_Hotel_Rooms_Kohla_Text_12:
# 159 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Do NOT utter her name!\p"
	.string "...\p"
	.string "No, not her. She's of no consequence.$"

Championship_Hotel_Rooms_Kohla_Text_13:
# 160 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Then who?$"

Championship_Hotel_Rooms_Kohla_Text_14:
# 161 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "It's obvious, {COLOR GREEN}Kohla{COLOR DARK_GRAY}.\p"
	.string "We're talking about {PLAYER}.$"

Championship_Hotel_Rooms_Kohla_Text_15:
# 162 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "...\p"
	.string "I'm listening.$"

Championship_Hotel_Rooms_Kohla_Text_16:
# 163 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "An enemy of an enemy is a friend.\n"
	.string "All we want to do is offer a bit of help\l"
	.string "against {PLAYER}. Just in case you\l"
	.string "two get matched against each other.$"

Championship_Hotel_Rooms_Kohla_Text_17:
# 164 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "We're taking a risk admitting this...but\n"
	.string "the Gym Leaders didn't find all our\l"
	.string "Ancient Pokémon. We've still got one.\p"
	.string "What would you say to using it in the\n"
	.string "tournament?$"

Championship_Hotel_Rooms_Kohla_Text_18:
# 165 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "An enemy of an enemy is a friend, eh?$"

Championship_Hotel_Rooms_Kohla_Text_19:
# 166 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Exactly.$"

Championship_Hotel_Rooms_Kohla_Text_20:
# 167 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "...\p"
	.string "But you're not friends of mine.\p"
	.string "If you think that I'll ever take any\n"
	.string "help from anyone - much less the likes\l"
	.string "of you two - then you're mistaken!\p"
	.string "I don't NEED help!\p"
	.string "I'm better than {PLAYER}! Do you\n"
	.string "understand? I can beat {PLAYER} with\l"
	.string "my own Pokémon!\p"
	.string "Now get out of my room!$"

Championship_Hotel_Rooms_Kohla_Text_21:
# 168 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "...\p"
	.string "A shame.$"

Championship_Hotel_Rooms_Kohla_Text_22:
# 169 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Good luck, {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY}.\n"
	.string "We'll be in touch.$"

Championship_Hotel_Rooms_Kohla_Text_23:
# 220 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "PA$"

Championship_Hotel_Rooms_Kohla_Text_24:
# 220 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Attention all participants!\n"
	.string "Please report to the Championship\l"
	.string "Venue for registration.$"
