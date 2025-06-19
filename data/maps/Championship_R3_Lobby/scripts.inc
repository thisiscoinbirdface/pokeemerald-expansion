Championship_R3_Lobby_MapScripts::
	.byte 0


Championship_R3_Lobby_NPC1::
# 5 "data//maps/Championship_R3_Lobby/scripts.pory"
	lockall
# 6 "data//maps/Championship_R3_Lobby/scripts.pory"
	msgbox Championship_R3_Lobby_NPC1_Text_0, MSGBOX_NPC
# 7 "data//maps/Championship_R3_Lobby/scripts.pory"
	releaseall
	end


Championship_R3_Lobby_Mon1::
# 12 "data//maps/Championship_R3_Lobby/scripts.pory"
	playmoncry SPECIES_GOODRA_HISUI, CRY_MODE_NORMAL
# 13 "data//maps/Championship_R3_Lobby/scripts.pory"
	msgbox Championship_R3_Lobby_Mon1_Text_0, MSGBOX_NPC
	end


Championship_R3_Lobby_NPC1_Text_0:
# 6 "data//maps/Championship_R3_Lobby/scripts.pory"
	.string "The Ace Rookie's on the other side.\n"
	.string "I hope I don't draw him...$"

Championship_R3_Lobby_Mon1_Text_0:
# 13 "data//maps/Championship_R3_Lobby/scripts.pory"
	.string "Goodra is as nervous as its trainer.$"
