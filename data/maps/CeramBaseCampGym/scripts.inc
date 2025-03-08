# 1 "data//maps/CeramBaseCampGym/scripts.pory"

# 2 "data//maps/CeramBaseCampGym/scripts.pory"
    .set LOCALID_GUARD, 2
# 3 "data//maps/CeramBaseCampGym/scripts.pory"
    .set LOCALID_LEADER, 5

CeramBaseCampGym_MapScripts::
	.byte 0


CeramBaseCampGym_Red::
# 9 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 10 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 11 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_0
# 12 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_Guard::
# 16 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 17 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 18 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Guard_Text_0
# 19 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_GuardTrigger::
# 23 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_GuardTrigger_2
# 25 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 26 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_0
# 27 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_1
# 28 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 29 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_GuardTrigger_Text_0
# 30 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 31 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_2
# 32 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_3
# 33 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 35 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_GuardTrigger_2:
	end


CeramBaseCampGym_EventScript_NPC_LetterPrint::
# 39 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 40 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 41 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
# 42 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 48 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1
# 50 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_APPOINTMENT_LETTER
# 52 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2
# 53 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_EventScript_NPC_Signature::
# 60 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 61 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 62 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_EventScript_NPC_Signature_2
	checkitem ITEM_APPOINTMENT_LETTER
# 0 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CeramBaseCampGym_EventScript_NPC_Signature_5
# 83 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_5
CeramBaseCampGym_EventScript_NPC_Signature_1:
# 87 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_EventScript_NPC_Signature_2:
# 63 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_5:
# 67 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_1, MSGBOX_YESNO
# 68 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCampGym_EventScript_NPC_Signature_9
# 72 "data//maps/CeramBaseCampGym/scripts.pory"
	removemoney 500
# 73 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_2
# 74 "data//maps/CeramBaseCampGym/scripts.pory"
	release
CeramBaseCampGym_EventScript_NPC_Signature_8:
# 77 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_3
# 78 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_4
# 79 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 80 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER
# 81 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_9:
	goto CeramBaseCampGym_EventScript_NPC_Signature_8


# 26 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_0:
# 26 "data//maps/CeramBaseCampGym/scripts.pory"
	face_right
	step_end

# 27 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_1:
# 27 "data//maps/CeramBaseCampGym/scripts.pory"
	face_left
	step_end

# 31 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_2:
# 31 "data//maps/CeramBaseCampGym/scripts.pory"
	face_down
	step_end

# 32 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_3:
# 32 "data//maps/CeramBaseCampGym/scripts.pory"
	walk_down
	step_end

CeramBaseCampGym_Red_Text_0:
# 11 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Welcome to the Ceram Base Camp\n"
	.string "Management Office And Gym! The Gym\l"
	.string "Leader ARIAN, who also manages the\l"
	.string "base camp, specialises in FIRE type {PKMN}.\l"
	.string "Avoid using BUG and GRASS types!$"

CeramBaseCampGym_Guard_Text_0:
# 18 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "ARIAN's got a busy schedule. He sets up\n"
	.string "all his appointments in advance.$"

CeramBaseCampGym_GuardTrigger_Text_0:
# 29 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Hold on! You can't have a meeting with\n"
	.string "the manager without an appointment.\l"
	.string "Please come back once you have a\l"
	.string "signed APPOINTMENT LETTER.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0:
# 41 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You're a trainer and want an\n"
	.string "APPOINTMENT LETTER? I can print you a\l"
	.string "letter, but first I'll need to see your\l"
	.string "credentials. You have none? Well then a\l"
	.string "battle should prove that you really are\l"
	.string "who you say you are!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1:
# 48 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Very good! Well then, let me do my job.\n"
	.string "Here you go!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2:
# 52 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "But this letter won't be enough without\n"
	.string "the approval of the assistant manager.\l"
	.string "He sits in the basement. Get this letter\l"
	.string "signed by him.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_0:
# 63 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I'm busy now. Get out.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_1:
# 67 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "So you got an APPOINTMENT LETTER and\n"
	.string "want my signature on it? Well...I\l"
	.string "wouldn't mind doing it for a small token\l"
	.string "of appreciation...say...500?\p"
	.string "Will you slip the money under the table?$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_2:
# 73 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} bribed the assistant\n"
	.string "manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_3:
# 77 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Alright, I'll sign the letter.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_4:
# 78 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} got the APPOINTMENT LETTER\n"
	.string "signed by the assistant manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_5:
# 83 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You're a trainer and want an\n"
	.string "APPOINTMENT LETTER? You'll have to go\l"
	.string "upstairs, get a letter printed, and then\l"
	.string "I can sign and approve it.$"
