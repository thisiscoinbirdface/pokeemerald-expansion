Championship_R1_Lobby_MapScripts::
	.byte 0


Championship_Lobby_Nurse::
# 5 "data//maps/Championship_R1_Lobby/scripts.pory"
	lockall
# 7 "data//maps/Championship_R1_Lobby/scripts.pory"
	msgbox Championship_Lobby_Nurse_Text_0
# 8 "data//maps/Championship_R1_Lobby/scripts.pory"
	special HealPlayerParty
# 9 "data//maps/Championship_R1_Lobby/scripts.pory"
	msgbox Championship_Lobby_Nurse_Text_1
# 11 "data//maps/Championship_R1_Lobby/scripts.pory"
	releaseall
	end


Championship_Lobby_Nurse_Text_0:
# 7 "data//maps/Championship_R1_Lobby/scripts.pory"
	.string "Congraluations on your victory,\n"
	.string "trainer!\p"
	.string "I'll now heal your Pokemon.$"

Championship_Lobby_Nurse_Text_1:
# 9 "data//maps/Championship_R1_Lobby/scripts.pory"
	.string "All the best!$"
