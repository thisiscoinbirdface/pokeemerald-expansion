SSElegant_Storage_MapScripts::
	.byte 0


SSElegant_Storage_Catcher1::
# 7 "data//maps/SSElegant_Storage/scripts.pory"
	msgbox SSElegant_Storage_Catcher1_Text_0
# 8 "data//maps/SSElegant_Storage/scripts.pory"
	warp MAP_SSELEGANT_STORAGE, 1, 2
# 9 "data//maps/SSElegant_Storage/scripts.pory"
	delay 60
	return


SSElegant_Storage_Catcher1_Text_0:
# 7 "data//maps/SSElegant_Storage/scripts.pory"
	.string "Hey! We've got a stowaway!$"
