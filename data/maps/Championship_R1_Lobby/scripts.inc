Championship_R1_Lobby_MapScripts::
	.byte 0


Championship_Lobby_Teala::
# 4 "data//maps/Championship_R1_Lobby/scripts.pory"
	lockall
# 5 "data//maps/Championship_R1_Lobby/scripts.pory"
	msgbox Championship_Lobby_Teala_Text_0, MSGBOX_YESNO
# 6 "data//maps/Championship_R1_Lobby/scripts.pory"
	release
# 7 "data//maps/Championship_R1_Lobby/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Championship_Lobby_Teala_2
Championship_Lobby_Teala_1:
# 21 "data//maps/Championship_R1_Lobby/scripts.pory"
	releaseall
	end

Championship_Lobby_Teala_2:
# 9 "data//maps/Championship_R1_Lobby/scripts.pory"
	applymovement 2, Championship_Lobby_Teala_Movement_0
# 10 "data//maps/Championship_R1_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Championship_Lobby_Teala_Movement_1
# 11 "data//maps/Championship_R1_Lobby/scripts.pory"
	waitmovement 0
# 12 "data//maps/Championship_R1_Lobby/scripts.pory"
	delay 8
# 15 "data//maps/Championship_R1_Lobby/scripts.pory"
	compare VAR_CHAMP_STAGE, 2
	goto_if_eq Championship_Lobby_Teala_5
Championship_Lobby_Teala_4:
# 16 "data//maps/Championship_R1_Lobby/scripts.pory"
	compare VAR_CHAMP_STAGE, 3
	goto_if_eq Championship_Lobby_Teala_8
Championship_Lobby_Teala_7:
# 17 "data//maps/Championship_R1_Lobby/scripts.pory"
	compare VAR_CHAMP_STAGE, 4
	goto_if_eq Championship_Lobby_Teala_10
	goto Championship_Lobby_Teala_1

Championship_Lobby_Teala_5:
# 15 "data//maps/Championship_R1_Lobby/scripts.pory"
	warp MAP_CHAMPIONSHIP_R2, 4, 8
	goto Championship_Lobby_Teala_4

Championship_Lobby_Teala_8:
# 16 "data//maps/Championship_R1_Lobby/scripts.pory"
	warp MAP_CHAMPIONSHIP_R3, 4, 8
	goto Championship_Lobby_Teala_7

Championship_Lobby_Teala_10:
# 17 "data//maps/Championship_R1_Lobby/scripts.pory"
	warp MAP_CHAMPIONSHIP_R4, 4, 8
	goto Championship_Lobby_Teala_1


Championship_Lobby_Nurse::
# 27 "data//maps/Championship_R1_Lobby/scripts.pory"
	lockall
# 29 "data//maps/Championship_R1_Lobby/scripts.pory"
	msgbox Championship_Lobby_Nurse_Text_0
# 30 "data//maps/Championship_R1_Lobby/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 31 "data//maps/Championship_R1_Lobby/scripts.pory"
	msgbox Championship_Lobby_Nurse_Text_1
# 33 "data//maps/Championship_R1_Lobby/scripts.pory"
	releaseall
	end


# 9 "data//maps/Championship_R1_Lobby/scripts.pory"
Championship_Lobby_Teala_Movement_0:
# 9 "data//maps/Championship_R1_Lobby/scripts.pory"
	walk_right
# 9 "data//maps/Championship_R1_Lobby/scripts.pory"
	face_left
	step_end

# 10 "data//maps/Championship_R1_Lobby/scripts.pory"
Championship_Lobby_Teala_Movement_1:
# 10 "data//maps/Championship_R1_Lobby/scripts.pory"
	walk_up
# 10 "data//maps/Championship_R1_Lobby/scripts.pory"
	walk_up
	step_end

Championship_Lobby_Teala_Text_0:
# 5 "data//maps/Championship_R1_Lobby/scripts.pory"
	.string "Are you ready to proceed to the next\n"
	.string "round?$"

Championship_Lobby_Nurse_Text_0:
# 29 "data//maps/Championship_R1_Lobby/scripts.pory"
	.string "Congraluations on your victory,\n"
	.string "trainer!\p"
	.string "I'll now heal your Pokemon.$"

Championship_Lobby_Nurse_Text_1:
# 31 "data//maps/Championship_R1_Lobby/scripts.pory"
	.string "All the best!$"
