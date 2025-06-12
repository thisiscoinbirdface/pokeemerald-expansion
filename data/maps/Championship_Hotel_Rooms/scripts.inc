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
	lockall
# 44 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	faceplayer
# 45 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_1, MSGBOX_YESNO
# 46 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	release
# 47 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_NPC3_5
# 53 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_3
# 55 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_4, MSGBOX_POKENAV
# 56 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_5, MSGBOX_YESNO
# 57 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	release
# 58 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_NPC3_8
# 63 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_ChooseMove
	return

Championship_Hotel_Rooms_NPC3_2:
# 39 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_0, MSGBOX_NPC
	end

Championship_Hotel_Rooms_NPC3_5:
# 48 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_2, MSGBOX_NPC
# 49 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end

Championship_Hotel_Rooms_NPC3_8:
# 59 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_6, MSGBOX_NPC
	end


Championship_Hotel_Rooms_ChooseMove::
# 68 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	message Championship_Hotel_Rooms_ChooseMove_Text_0
# 69 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmessage
# 70 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Championship_Hotel_Rooms_ChooseMove_Text_1, Championship_Hotel_Rooms_ChooseMove_Text_2, Championship_Hotel_Rooms_ChooseMove_Text_3, Championship_Hotel_Rooms_ChooseMove_Text_4, Championship_Hotel_Rooms_ChooseMove_Text_5, Championship_Hotel_Rooms_ChooseMove_Text_6, Championship_Hotel_Rooms_ChooseMove_Text_7
# 74 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_2
Championship_Hotel_Rooms_ChooseMove_1:
# 78 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_5
Championship_Hotel_Rooms_ChooseMove_4:
# 82 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_8
Championship_Hotel_Rooms_ChooseMove_7:
# 86 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_11
Championship_Hotel_Rooms_ChooseMove_10:
# 90 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_14
Championship_Hotel_Rooms_ChooseMove_13:
# 94 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_17
Championship_Hotel_Rooms_ChooseMove_16:
# 98 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Championship_Hotel_Rooms_ChooseMove_20
Championship_Hotel_Rooms_ChooseMove_19:
# 103 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC3_Text_6, MSGBOX_NPC
# 104 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end

Championship_Hotel_Rooms_ChooseMove_2:
# 75 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_STEEL_BEAM
# 76 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_1

Championship_Hotel_Rooms_ChooseMove_5:
# 79 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_DRACO_METEOR
# 80 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_4

Championship_Hotel_Rooms_ChooseMove_8:
# 83 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_OVERHEAT
# 84 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_7

Championship_Hotel_Rooms_ChooseMove_11:
# 87 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_STORM
# 88 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_10

Championship_Hotel_Rooms_ChooseMove_14:
# 91 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_PUMP
# 92 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_13

Championship_Hotel_Rooms_ChooseMove_17:
# 95 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_GUNK_SHOT
# 96 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_16

Championship_Hotel_Rooms_ChooseMove_20:
# 99 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setvar VAR_0x8005, MOVE_METEOR_BEAM
# 100 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_TeachMove
	goto Championship_Hotel_Rooms_ChooseMove_19


Championship_Hotel_Rooms_TeachMove::
# 109 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 111 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Championship_Hotel_Rooms_TeachMove_1
# 115 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setflag FLAG_TUTOR_VICTORY_CAPE
# 116 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_TeachMove_Text_0, MSGBOX_NPC
# 117 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end

Championship_Hotel_Rooms_TeachMove_1:
# 112 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto Championship_Hotel_Rooms_ChooseMove
	return


Championship_Hotel_Rooms_NPC4::
# 125 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC4_Text_0, MSGBOX_NPC
	end


Championship_Hotel_Rooms_Kohla::
# 139 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	goto_if_set FLAG_CHAMPIONSHIP_KOHLA_ROOM, Championship_Hotel_Rooms_Kohla_2
# 146 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	lockall
# 148 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	hidefollower
# 149 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	special SpawnCameraObject
# 150 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Championship_Hotel_Rooms_Kohla_Movement_0
# 151 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 152 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	special RemoveCameraObject
# 154 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_2
# 155 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_4
# 156 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_5
# 157 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_6, Championship_Hotel_Rooms_Kohla_Text_7
# 158 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_8
# 159 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_9
# 160 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_6, Championship_Hotel_Rooms_Kohla_Text_10
# 161 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_11
# 162 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_12
# 163 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_13
# 164 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_6, Championship_Hotel_Rooms_Kohla_Text_14
# 165 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_15
# 166 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_16
# 167 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_6, Championship_Hotel_Rooms_Kohla_Text_17
# 168 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_18
# 169 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_19
# 170 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_1, Championship_Hotel_Rooms_Kohla_Text_20
# 171 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_3, Championship_Hotel_Rooms_Kohla_Text_21
# 172 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_6, Championship_Hotel_Rooms_Kohla_Text_22
# 176 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_Hotel_Rooms_Kohla_Movement_1
# 177 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 180 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	opendoor 11, 1
# 181 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitdooranim
# 183 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	addobject LOCALID_MELEA
# 184 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setobjectxy LOCALID_MELEA, 11, 1
# 186 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_2
# 187 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 189 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	addobject LOCALID_MOXIE
# 190 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setobjectxy LOCALID_MOXIE, 11, 1
# 192 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_2
# 193 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MOXIE, Championship_Hotel_Rooms_Kohla_Movement_2
# 194 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 196 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	closedoor 11, 1
# 198 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_3
# 199 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MOXIE, Championship_Hotel_Rooms_Kohla_Movement_3
# 200 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 202 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	delay 24
# 204 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_4
# 205 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MOXIE, Championship_Hotel_Rooms_Kohla_Movement_4
# 206 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 207 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	delay 36
# 209 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_5
# 210 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MOXIE, Championship_Hotel_Rooms_Kohla_Movement_6
# 211 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 213 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	delay 40
# 214 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MELEA, Championship_Hotel_Rooms_Kohla_Movement_7
# 215 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	applymovement LOCALID_MOXIE, Championship_Hotel_Rooms_Kohla_Movement_7
# 216 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	waitmovement 0
# 218 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	removeobject LOCALID_MOXIE
# 219 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	removeobject LOCALID_MELEA
# 221 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	delay 16
# 222 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	playse SE_DING_DONG
# 223 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox_delay Championship_Hotel_Rooms_Kohla_Text_23, Championship_Hotel_Rooms_Kohla_Text_24
# 225 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	setflag FLAG_CHAMPIONSHIP_KOHLA_ROOM
# 227 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end

Championship_Hotel_Rooms_Kohla_2:
# 140 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_Kohla_Text_0, MSGBOX_SIGN
# 141 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	releaseall
	end


# 150 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_0:
# 150 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_up
# 150 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_up
	step_end

# 176 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_1:
# 176 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_right
# 176 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	face_left
	step_end

# 186 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_2:
# 186 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_down
	step_end

# 198 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_3:
# 198 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_left
# 198 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_left
# 198 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	face_right
	step_end

# 204 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_4:
# 204 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_left
# 204 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	emote_exclamation_mark
# 204 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	jump_in_place_right
	step_end

# 209 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_5:
# 209 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	face_up
	step_end

# 210 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_6:
# 210 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	face_down
	step_end

# 214 "data//maps/Championship_Hotel_Rooms/scripts.pory"
Championship_Hotel_Rooms_Kohla_Movement_7:
# 214 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_fast_left
# 214 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_fast_left
# 214 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	walk_fast_left
# 214 "data//maps/Championship_Hotel_Rooms/scripts.pory"
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
# 45 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "You look like a strong trainer.\n"
	.string "Are you competing this year?$"

Championship_Hotel_Rooms_NPC3_Text_2:
# 48 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Hmpf.$"

Championship_Hotel_Rooms_NPC3_Text_3:
# 53 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "If you're going up against the best,\n"
	.string "you'll need the best! I can teach one of\l"
	.string "your Pokémon a really powerful move.\l"
	.string "But I'll only teach one - I can't be\l"
	.string "biased, you know!$"

Championship_Hotel_Rooms_NPC3_Text_4:
# 55 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "You will only be able to teach\n"
	.string "a move once. Make sure you choose\l"
	.string "both the move and Pokémon carefully!$"

Championship_Hotel_Rooms_NPC3_Text_5:
# 56 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Teach a powerful move?$"

Championship_Hotel_Rooms_NPC3_Text_6:
# 59 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Come back when you're ready.$"

Championship_Hotel_Rooms_ChooseMove_Text_0:
# 68 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Which move should I teach?$"

Championship_Hotel_Rooms_ChooseMove_Text_1:
# 71 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Steel Beam$"

Championship_Hotel_Rooms_ChooseMove_Text_2:
# 71 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Draco Meteor$"

Championship_Hotel_Rooms_ChooseMove_Text_3:
# 71 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Overheat$"

Championship_Hotel_Rooms_ChooseMove_Text_4:
# 71 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Leaf Storm$"

Championship_Hotel_Rooms_ChooseMove_Text_5:
# 72 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Hydro Pump$"

Championship_Hotel_Rooms_ChooseMove_Text_6:
# 72 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Gunk Shot$"

Championship_Hotel_Rooms_ChooseMove_Text_7:
# 72 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Meteor Beam$"

Championship_Hotel_Rooms_TeachMove_Text_0:
# 116 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "That's all I can do for you!$"

Championship_Hotel_Rooms_NPC4_Text_0:
# 125 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "I booked front-row seats to the finals\n"
	.string "months in advance!$"

Championship_Hotel_Rooms_Kohla_Text_0:
# 140 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "It's locked.$"

Championship_Hotel_Rooms_Kohla_Text_1:
# 154 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Kohla$"

Championship_Hotel_Rooms_Kohla_Text_2:
# 154 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "How did you two get in here?$"

Championship_Hotel_Rooms_Kohla_Text_3:
# 155 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Melea$"

Championship_Hotel_Rooms_Kohla_Text_4:
# 155 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Calm down! We're not here to fight.$"

Championship_Hotel_Rooms_Kohla_Text_5:
# 156 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Give me a good reason I shouldn't call\n"
	.string "the police right now.$"

Championship_Hotel_Rooms_Kohla_Text_6:
# 157 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Moxie$"

Championship_Hotel_Rooms_Kohla_Text_7:
# 157 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Will you give us a moment to talk at\n"
	.string "least? Like Melea said, we're not here\l"
	.string "to fight. Just listen to us.$"

Championship_Hotel_Rooms_Kohla_Text_8:
# 158 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "...fine. Hurry up then.\n"
	.string "I've got a tournament to win.$"

Championship_Hotel_Rooms_Kohla_Text_9:
# 159 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "That's why we're here, Kohla.$"

Championship_Hotel_Rooms_Kohla_Text_10:
# 160 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Have you seen the rest of the\n"
	.string "competitors this year?\l"
	.string "Do any of the names stick out?$"

Championship_Hotel_Rooms_Kohla_Text_11:
# 161 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "If you're talking about that former\n"
	.string "grunt, Gabrielle -$"

Championship_Hotel_Rooms_Kohla_Text_12:
# 162 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Do NOT utter her name!\p"
	.string "...\p"
	.string "No, not her. She's of no consequence.$"

Championship_Hotel_Rooms_Kohla_Text_13:
# 163 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Then who?$"

Championship_Hotel_Rooms_Kohla_Text_14:
# 164 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "It's obvious, Kohla.\p"
	.string "We're talking about {PLAYER}.$"

Championship_Hotel_Rooms_Kohla_Text_15:
# 165 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "...\p"
	.string "I'm listening.$"

Championship_Hotel_Rooms_Kohla_Text_16:
# 166 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "An enemy of an enemy is a friend.\n"
	.string "All we want to do is offer a bit of help\l"
	.string "against {PLAYER}. Just in case you\l"
	.string "two get matched against each other.$"

Championship_Hotel_Rooms_Kohla_Text_17:
# 167 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "We're taking a risk admitting this...but\n"
	.string "the Gym Leaders didn't find all our\l"
	.string "Ancient Pokémon. We've still got one.\p"
	.string "What would you say to using it in the\n"
	.string "tournament?$"

Championship_Hotel_Rooms_Kohla_Text_18:
# 168 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "An enemy of an enemy is a friend, eh?$"

Championship_Hotel_Rooms_Kohla_Text_19:
# 169 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Exactly.$"

Championship_Hotel_Rooms_Kohla_Text_20:
# 170 "data//maps/Championship_Hotel_Rooms/scripts.pory"
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
# 171 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "...\p"
	.string "A shame.$"

Championship_Hotel_Rooms_Kohla_Text_22:
# 172 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Good luck, Ace Rookie.\n"
	.string "We'll be in touch.$"

Championship_Hotel_Rooms_Kohla_Text_23:
# 223 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "PA$"

Championship_Hotel_Rooms_Kohla_Text_24:
# 223 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "Attention all participants!\n"
	.string "Please report to the Championship\l"
	.string "Venue for registration.$"
