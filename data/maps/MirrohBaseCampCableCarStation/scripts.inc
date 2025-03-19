.set LOCALID_ATTENDANT, 1

MirrohBaseCampCableCarStation_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MirrohBaseCampCableCarStation_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MirrohBaseCampCableCarStation_OnFrame
	.byte 0

MirrohBaseCampCableCarStation_OnTransition:
	call_if_eq VAR_CABLE_CAR_STATION_STATE, 1, MirrohBaseCampCableCarStation_EventScript_MoveAttendantAside
	end

MirrohBaseCampCableCarStation_EventScript_MoveAttendantAside::
	setobjectxyperm LOCALID_ATTENDANT, 5, 4
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_RIGHT
	return

MirrohBaseCampCableCarStation_OnFrame:
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 1, MirrohBaseCampCableCarStation_EventScript_ExitCableCar
	.2byte 0

MirrohBaseCampCableCarStation_EventScript_ExitCableCar::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampCableCarStation_Movement_ExitCableCar
	applymovement LOCALID_ATTENDANT, MirrohBaseCampCableCarStation_Movement_FollowPlayerOutFromCableCar
	waitmovement 0
	setvar VAR_CABLE_CAR_STATION_STATE, 0
	setobjectxyperm LOCALID_ATTENDANT, 6, 7
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
	releaseall
	end

MirrohBaseCampCableCarStation_EventScript_Attendant::
	lock
	faceplayer
	msgbox MirrohBaseCampCableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MirrohBaseCampCableCarStation_EventScript_RideCableCar
	goto_if_eq VAR_RESULT, NO, MirrohBaseCampCableCarStation_EventScript_DeclineRide
	end

MirrohBaseCampCableCarStation_EventScript_RideCableCar::
	msgbox MirrohBaseCampCableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ATTENDANT, MirrohBaseCampCableCarStation_Movement_LeadPlayerToCableCar
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampCableCarStation_Movement_BoardCableCar
	waitmovement 0
	setvar VAR_0x8004, TRUE  @ Going down
	setvar VAR_CABLE_CAR_STATION_STATE, 2
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
	special CableCarWarp
	special CableCar
	waitstate
	release
	end

MirrohBaseCampCableCarStation_EventScript_DeclineRide::
	msgbox MirrohBaseCampCableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
	release
	end

MirrohBaseCampCableCarStation_Movement_LeadPlayerToCableCar:
	walk_up
	walk_up
	walk_left
	walk_in_place_faster_right
	step_end

MirrohBaseCampCableCarStation_Movement_FollowPlayerOutFromCableCar:
	delay_16
	walk_right
	walk_down
	walk_down
	step_end

MirrohBaseCampCableCarStation_Movement_BoardCableCar:
	walk_up
	walk_up
	walk_up
	delay_16
	step_end

MirrohBaseCampCableCarStation_Movement_ExitCableCar:
	walk_down
	walk_down
	walk_down
	delay_16
	step_end

MirrohBaseCampCableCarStation_Text_CableCarReadyGetOn:
	.string "The CABLE CAR is ready to go down.\n"
	.string "Would you like to be on it?$"

MirrohBaseCampCableCarStation_Text_StepThisWay:
	.string "Please step this way.$"

MirrohBaseCampCableCarStation_Text_RideAnotherTime:
	.string "Please ride with us another time.$"

