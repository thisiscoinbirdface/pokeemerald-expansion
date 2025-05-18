SSElegant_Common_MapScripts::
	.byte 0


SSElegant_Common_Nurse::
# 8 "data//maps/SSElegant_Common/scripts.pory"
	lockall
# 9 "data//maps/SSElegant_Common/scripts.pory"
	faceplayer
# 10 "data//maps/SSElegant_Common/scripts.pory"
	msgbox SSElegant_Common_Nurse_Text_0
# 11 "data//maps/SSElegant_Common/scripts.pory"
	release
# 12 "data//maps/SSElegant_Common/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 13 "data//maps/SSElegant_Common/scripts.pory"
	msgbox SSElegant_Common_Nurse_Text_1
# 14 "data//maps/SSElegant_Common/scripts.pory"
	releaseall
	end


SSElegant_Common_Chansey::
# 18 "data//maps/SSElegant_Common/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 19 "data//maps/SSElegant_Common/scripts.pory"
	msgbox SSElegant_Common_Chansey_Text_0, MSGBOX_NPC
	end


SSElegant_Common_NPC1::
# 25 "data//maps/SSElegant_Common/scripts.pory"
	msgbox SSElegant_Common_NPC1_Text_0, MSGBOX_NPC
	end


SSElegant_Common_NPC2::
# 30 "data//maps/SSElegant_Common/scripts.pory"
	msgbox SSElegant_Common_NPC1_Text_0, MSGBOX_NPC
	end


SSElegant_Common_Carona::
# 36 "data//maps/SSElegant_Common/scripts.pory"
	msgbox SSElegant_Common_NPC1_Text_0, MSGBOX_NPC
	end


SSElegant_Common_Medicham::
# 40 "data//maps/SSElegant_Common/scripts.pory"
	playmoncry SPECIES_MEDICHAM, CRY_MODE_NORMAL
# 41 "data//maps/SSElegant_Common/scripts.pory"
	msgbox SSElegant_Common_Medicham_Text_0, MSGBOX_NPC
	end


SSElegant_Common_Nurse_Text_0:
# 10 "data//maps/SSElegant_Common/scripts.pory"
	.string "Hello! We hope you're enjoying your time\n"
	.string "on the S.S. Elegant.\p"
	.string "Why don't you rest for a bit?$"

SSElegant_Common_Nurse_Text_1:
# 13 "data//maps/SSElegant_Common/scripts.pory"
	.string "Take care, trainer!$"

SSElegant_Common_Chansey_Text_0:
# 19 "data//maps/SSElegant_Common/scripts.pory"
	.string "Chansey is bobbing up and down with the\n"
	.string "ship.$"

SSElegant_Common_NPC1_Text_0:
# 25 "data//maps/SSElegant_Common/scripts.pory"
	.string "$"

SSElegant_Common_Medicham_Text_0:
# 41 "data//maps/SSElegant_Common/scripts.pory"
	.string "Medicham is reading a book.\n"
	.string "Better not disturb it!$"
