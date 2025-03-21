RangerInstitute_MapScripts::
	.byte 0


RangerInstitute_1F_ApplicationPC::
# 24 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 26 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_2
RangerInstitute_1F_ApplicationPC_1:
# 30 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RangerInstitute_1F_ApplicationPC_5
RangerInstitute_1F_ApplicationPC_4:
# 47 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_ApplicationPC_2:
# 27 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_0
	goto RangerInstitute_1F_ApplicationPC_1

RangerInstitute_1F_ApplicationPC_5:
# 31 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_1, MSGBOX_SIGN
# 32 "data//maps/RangerInstitute/scripts.pory"
	release
# 33 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_2, MSGBOX_YESNO
# 34 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_7
	goto RangerInstitute_1F_ApplicationPC_4

RangerInstitute_1F_ApplicationPC_7:
# 35 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_3, MSGBOX_YESNO
# 36 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_10
	goto RangerInstitute_1F_ApplicationPC_4

RangerInstitute_1F_ApplicationPC_10:
# 37 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_4
# 38 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 1
	goto RangerInstitute_1F_ApplicationPC_4


RangerInstitute_1F_Interviewer::
# 52 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 53 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 55 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_Interviewer_2
# 58 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_1
RangerInstitute_1F_Interviewer_1:
# 61 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_Interviewer_2:
# 56 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_0
	goto RangerInstitute_1F_Interviewer_1


RangerInstitute_1F_NPC1::
# 67 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 68 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 69 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC1_Text_0
# 70 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC2::
# 74 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 75 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 76 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC2_Text_0
# 77 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC3::
# 81 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 82 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 83 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC3_Text_0
# 84 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerBasement::
# 90 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 91 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 92 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
# 93 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerUpstairs::
# 97 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 98 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 99 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
# 100 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_ApplicationPC_Text_0:
# 27 "data//maps/RangerInstitute/scripts.pory"
	.string "YOU ALREADY HAVE AN APPLICATION IN\n"
	.string "PROGRESS.$"

RangerInstitute_1F_ApplicationPC_Text_1:
# 31 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} booted up the Application\n"
	.string "PC.$"

RangerInstitute_1F_ApplicationPC_Text_2:
# 33 "data//maps/RangerInstitute/scripts.pory"
	.string "WOULD YOU LIKE TO PRINT AN\n"
	.string "APPLICATION FORM?$"

RangerInstitute_1F_ApplicationPC_Text_3:
# 35 "data//maps/RangerInstitute/scripts.pory"
	.string "IT WILL COST 500. PROCEED WITH\n"
	.string "PRINTING?$"

RangerInstitute_1F_ApplicationPC_Text_4:
# 37 "data//maps/RangerInstitute/scripts.pory"
	.string "...\p"
	.string "A peice of paper comes out of the PC!\p"
	.string "PLEASE BRING THIS FORM TO THE\n"
	.string "INTERVIEWER ON DUTY.$"

RangerInstitute_1F_Interviewer_Text_0:
# 56 "data//maps/RangerInstitute/scripts.pory"
	.string "Ah, very good! You have an application\n"
	.string "form. Come then, sit with me.$"

RangerInstitute_1F_Interviewer_Text_1:
# 58 "data//maps/RangerInstitute/scripts.pory"
	.string "I'm the interviewer on duty. We get so\n"
	.string "many applicants!$"

RangerInstitute_1F_NPC1_Text_0:
# 69 "data//maps/RangerInstitute/scripts.pory"
	.string "Should I become a {PKMN} Ranger? It's\n"
	.string "really hard to get in...I don't know if I\l"
	.string "can do it.$"

RangerInstitute_1F_NPC2_Text_0:
# 76 "data//maps/RangerInstitute/scripts.pory"
	.string "My interview is coming up. I'm nervous -\n"
	.string "I really want to become a {PKMN} Ranger so\l"
	.string "bad! Their {PKMN} are so cool! TAUROS!\l"
	.string "KANGASKHAN!$"

RangerInstitute_1F_NPC3_Text_0:
# 83 "data//maps/RangerInstitute/scripts.pory"
	.string "Not all Rangers are out on the field!\n"
	.string "Managing such a large organisation is\l"
	.string "no easy task, let me tell you.$"

RangerInstitute_1F_BlockerBasement_Text_0:
# 92 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, only {PKMN} Rangers are allowed\n"
	.string "inside. If you'd like to apply, you can\l"
	.string "print an application form using the PC\l"
	.string "by the entrance.$"
