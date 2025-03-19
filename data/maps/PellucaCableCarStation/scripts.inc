raw `
.set LOCALID_ATTENDANT, 1

PellucaCableCarStation_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PellucaCableCarStation_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PellucaCableCarStation_OnFrame
	.byte 0

PellucaCableCarStation_OnTransition:
	setescapewarp MAP_ROUTE112, 28, 28
	call_if_eq VAR_CABLE_CAR_STATION_STATE, 2, PellucaCableCarStation_EventScript_MoveAttendantAside
	end

PellucaCableCarStation_EventScript_MoveAttendantAside::
	setobjectxyperm LOCALID_ATTENDANT, 7, 4
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_LEFT
	return

PellucaCableCarStation_OnFrame:
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 2, PellucaCableCarStation_EventScript_ExitCableCar
	.2byte 0

PellucaCableCarStation_EventScript_ExitCableCar::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCableCarStation_Movement_ExitCableCar
	applymovement LOCALID_ATTENDANT, PellucaCableCarStation_Movement_FollowPlayerOutFromCableCar
	waitmovement 0
	setvar VAR_CABLE_CAR_STATION_STATE, 0
	setobjectxyperm LOCALID_ATTENDANT, 6, 7
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
	releaseall
	end

PellucaCableCarStation_EventScript_Attendant::
	lock
	faceplayer
	msgbox PellucaCableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PellucaCableCarStation_EventScript_RideCableCar
	goto_if_eq VAR_RESULT, NO, PellucaCableCarStation_EventScript_DeclineRide
	end

PellucaCableCarStation_EventScript_RideCableCar::
	msgbox PellucaCableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ATTENDANT, PellucaCableCarStation_Movement_LeadPlayerToCableCar
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCableCarStation_Movement_BoardCableCar
	waitmovement 0
	setvar VAR_0x8004, FALSE  @ Going up
	setvar VAR_CABLE_CAR_STATION_STATE, 1
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
	special CableCarWarp
	special CableCar
	waitstate
	release
	end

PellucaCableCarStation_EventScript_DeclineRide::
	msgbox PellucaCableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
	release
	end

PellucaCableCarStation_Movement_LeadPlayerToCableCar:
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_left
	step_end

PellucaCableCarStation_Movement_FollowPlayerOutFromCableCar:
	delay_16
	walk_left
	walk_down
	walk_down
	step_end

PellucaCableCarStation_Movement_BoardCableCar:
	walk_up
	walk_up
	walk_up
	delay_16
	step_end

PellucaCableCarStation_Movement_ExitCableCar:
	walk_down
	walk_down
	walk_down
	delay_16
	step_end

PellucaCableCarStation_Text_CableCarReadyGetOn:
	.string "The CABLE CAR is ready to go up.\n"
	.string "Would you like to be on it?$"

PellucaCableCarStation_Text_StepThisWay:
	.string "Please step this way.$"

PellucaCableCarStation_Text_RideAnotherTime:
	.string "Please ride with us another time.$"

`