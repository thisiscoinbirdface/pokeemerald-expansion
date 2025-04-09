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
# 12 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeramBaseCampGym_Red_2
# 30 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_SPENSER_WATER, CeramBaseCampGym_Red_8
# 33 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_6
# 34 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 35 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_7
# 36 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_SPENSER_WATER
CeramBaseCampGym_Red_1:
# 39 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	end

CeramBaseCampGym_Red_2:
# 13 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_SPENSER_REWARD, CeramBaseCampGym_Red_5
# 16 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_1
# 17 "data//maps/CeramBaseCampGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, CeramBaseCampGym_Red_Text_2, CeramBaseCampGym_Red_Text_3
# 19 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCampGym_Red_12
CeramBaseCampGym_Red_11:
# 22 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCampGym_Red_15
CeramBaseCampGym_Red_14:
# 26 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_SPENSER_REWARD
# 27 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_4
	goto CeramBaseCampGym_Red_1

CeramBaseCampGym_Red_5:
# 14 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_0
	goto CeramBaseCampGym_Red_1

CeramBaseCampGym_Red_8:
# 31 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_5
	goto CeramBaseCampGym_Red_1

CeramBaseCampGym_Red_12:
# 20 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_FIRE_GEM
	goto CeramBaseCampGym_Red_11

CeramBaseCampGym_Red_15:
# 23 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_CHARCOAL
	goto CeramBaseCampGym_Red_14


CeramBaseCampGym_Guard::
# 44 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 45 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 46 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Guard_Text_0
# 47 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_NPC_A::
# 51 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 52 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 53 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_NPC_A_Text_0
# 54 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_NPC_B::
# 58 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 59 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 60 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_NPC_B_Text_0
# 61 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_TrainerBattle_A::
# 66 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMPGYM_A, CeramBaseCampGym_TrainerBattle_A_Text_0, CeramBaseCampGym_TrainerBattle_A_Text_1
# 67 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_TrainerBattle_A_Text_2
# 68 "data//maps/CeramBaseCampGym/scripts.pory"
	release
	end


CeramBaseCampGym_TrainerBattle_B::
# 73 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMPGYM_B, CeramBaseCampGym_TrainerBattle_B_Text_0, CeramBaseCampGym_TrainerBattle_B_Text_1
# 74 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_TrainerBattle_B_Text_2
# 75 "data//maps/CeramBaseCampGym/scripts.pory"
	release
	end


CeramBaseCampGym_GuardTrigger::
# 80 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_GuardTrigger_2
# 82 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 83 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_0
# 84 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_1
# 85 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 86 "data//maps/CeramBaseCampGym/scripts.pory"
	delay 16
# 87 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_GuardTrigger_Text_0
# 88 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 89 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_2
# 90 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_3
# 91 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 93 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_GuardTrigger_2:
	end


CeramBaseCampGym_EventScript_NPC_LetterPrint::
# 97 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 98 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
	checkitem ITEM_APPOINTMENT_LETTER
# 0 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CeramBaseCampGym_EventScript_NPC_LetterPrint_2
# 107 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2
# 108 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 111 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_C, CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_3
# 114 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_4
# 116 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_APPOINTMENT_LETTER
# 118 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_5
CeramBaseCampGym_EventScript_NPC_LetterPrint_1:
# 120 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_EventScript_NPC_LetterPrint_2:
# 101 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_EventScript_NPC_LetterPrint_5
# 104 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1
	goto CeramBaseCampGym_EventScript_NPC_LetterPrint_1

CeramBaseCampGym_EventScript_NPC_LetterPrint_5:
# 102 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_LetterPrint_1


CeramBaseCampGym_EventScript_NPC_Signature::
# 124 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 125 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 126 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_EventScript_NPC_Signature_2
	checkitem ITEM_APPOINTMENT_LETTER
# 0 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CeramBaseCampGym_EventScript_NPC_Signature_5
# 155 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_7
CeramBaseCampGym_EventScript_NPC_Signature_1:
# 159 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_EventScript_NPC_Signature_2:
# 127 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_5:
# 131 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_0
# 132 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 133 "data//maps/CeramBaseCampGym/scripts.pory"
	showmoneybox 0, 0
# 134 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_1, MSGBOX_YESNO
# 136 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCampGym_EventScript_NPC_Signature_9
# 143 "data//maps/CeramBaseCampGym/scripts.pory"
	hidemoneybox
# 144 "data//maps/CeramBaseCampGym/scripts.pory"
	removemoney 500
# 145 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_4
# 146 "data//maps/CeramBaseCampGym/scripts.pory"
	release
CeramBaseCampGym_EventScript_NPC_Signature_8:
# 149 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_5
# 150 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_6
# 151 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 152 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER
# 153 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_9:
# 137 "data//maps/CeramBaseCampGym/scripts.pory"
	hidemoneybox
# 138 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_2
# 140 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_D, CeramBaseCampGym_EventScript_NPC_Signature_Text_3
	goto CeramBaseCampGym_EventScript_NPC_Signature_8


CeramBaseCampGym_LeaderBattle::
# 184 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 185 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 187 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeramBaseCampGym_LeaderBattle_2
# 190 "data//maps/CeramBaseCampGym/scripts.pory"
	call Common_EventScript_SaveGame
# 191 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Text_Intro
# 192 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_LEADER, CeramBaseCampGym_Text_Defeated
# 195 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_1
# 196 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 197 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 200 "data//maps/CeramBaseCampGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 203 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_2
# 204 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_3
# 205 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 207 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_TM_SUNNY_DAY
# 208 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_4
# 209 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 212 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_5
# 213 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
CeramBaseCampGym_LeaderBattle_1:
# 217 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_LeaderBattle_2:
# 188 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_0
	goto CeramBaseCampGym_LeaderBattle_1


# 83 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_0:
# 83 "data//maps/CeramBaseCampGym/scripts.pory"
	emote_exclamation_mark
# 83 "data//maps/CeramBaseCampGym/scripts.pory"
	face_right
	step_end

# 84 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_1:
# 84 "data//maps/CeramBaseCampGym/scripts.pory"
	face_left
	step_end

# 89 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_2:
# 89 "data//maps/CeramBaseCampGym/scripts.pory"
	face_down
	step_end

# 90 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_3:
# 90 "data//maps/CeramBaseCampGym/scripts.pory"
	walk_down
	step_end

CeramBaseCampGym_Red_Text_0:
# 14 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

CeramBaseCampGym_Red_Text_1:
# 16 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Well done champ-in-the-making! That\n"
	.string "was an impressive battle. In\l"
	.string "recognition of your victory, I'd like to\l"
	.string "give you something. Which of these do\l"
	.string "you fancy?$"

CeramBaseCampGym_Red_Text_2:
# 17 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "FIRE GEM$"

CeramBaseCampGym_Red_Text_3:
# 17 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "CHARCOAL$"

CeramBaseCampGym_Red_Text_4:
# 27 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

CeramBaseCampGym_Red_Text_5:
# 31 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The Gym Leader Arian, who also manages\n"
	.string "the base camp, specialises in\l"
	.string "intimidating FIRE type Pokemon. Avoid\l"
	.string "using physical attackers!$"

CeramBaseCampGym_Red_Text_6:
# 33 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Welcome to the Ceram Base Camp\n"
	.string "Management Office And Gym! First, have\l"
	.string "some water.$"

CeramBaseCampGym_Red_Text_7:
# 35 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The Gym Leader Arian, who also manages\n"
	.string "the base camp, specialises in\l"
	.string "intimidating FIRE type Pokemon. Avoid\l"
	.string "using physical attackers! Now go get\l"
	.string "'em, champ-in-the-making!$"

CeramBaseCampGym_Guard_Text_0:
# 46 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Arian's got a busy schedule. He sets up\n"
	.string "all his appointments in advance.$"

CeramBaseCampGym_NPC_A_Text_0:
# 53 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I can't battle. Arian tried to teach me\n"
	.string "but both him and his Pokemon are so\l"
	.string "intimidating!$"

CeramBaseCampGym_NPC_B_Text_0:
# 60 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Why does everyone used FIRE type\n"
	.string "Pokemon in here? It's already\l"
	.string "sweltering hot. Our air conditioning\l"
	.string "bills are too high!$"

CeramBaseCampGym_TrainerBattle_A_Text_0:
# 66 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Who would've thought managing a\n"
	.string "basecamp would involve so much\l"
	.string "paperwork?$"

CeramBaseCampGym_TrainerBattle_A_Text_1:
# 66 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Back to my work!$"

CeramBaseCampGym_TrainerBattle_A_Text_2:
# 67 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The base camp doubling as a Gym is just\n"
	.string "extra work for the employees! And we\l"
	.string "didn't get a raise too!$"

CeramBaseCampGym_TrainerBattle_B_Text_0:
# 73 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I've been waiting all day for an\n"
	.string "appointment. I'm so frustrated that I\l"
	.string "need to let it out!$"

CeramBaseCampGym_TrainerBattle_B_Text_1:
# 73 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "At least I've cooled down a bit.$"

CeramBaseCampGym_TrainerBattle_B_Text_2:
# 74 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "All this bureaucracy is mind-numbing.$"

CeramBaseCampGym_GuardTrigger_Text_0:
# 87 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Hold on! You can't have a meeting with\n"
	.string "the manager without an appointment.\l"
	.string "Please come back once you have a\l"
	.string "signed APPOINTMENT LETTER.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0:
# 102 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I'm busy now. Get out.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1:
# 104 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You'll have to get this letter signed by\n"
	.string "the assistant manager in the basement.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2:
# 107 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You're a trainer and want an\n"
	.string "APPOINTMENT LETTER? I can print you a\l"
	.string "letter, but first I'll need to see your\l"
	.string "credentials.\p"
	.string "...\p"
	.string "No, not your trainer card. Don't you\n"
	.string "have a Pokemon League Pass? You don't?\l"
	.string "Well then a battle should prove that\l"
	.string "you really are who you say you are!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_3:
# 111 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I lost$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_4:
# 114 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Very good! Well then, let me do my job.\n"
	.string "Here you go!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_5:
# 118 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "But this letter won't be enough without\n"
	.string "the approval of the assistant manager.\l"
	.string "He sits in the basement. Get this letter\l"
	.string "signed by him.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_0:
# 131 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "So you got an APPOINTMENT LETTER and\n"
	.string "want my signature on it? Well...I\l"
	.string "wouldn't mind doing it for a small token\l"
	.string "of appreciation...say...500?$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_1:
# 134 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Will you slip the money under the table?$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_2:
# 138 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You'll have to do it the way everyone\n"
	.string "else does it then!$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_3:
# 140 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I wish you had just paid up!$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_4:
# 145 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} bribed the assistant\n"
	.string "manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_5:
# 149 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Alright, I'll sign the letter.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_6:
# 150 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} got the APPOINTMENT LETTER\n"
	.string "signed by the assistant manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_7:
# 155 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You're a trainer and want an\n"
	.string "APPOINTMENT LETTER? You'll have to go\l"
	.string "upstairs, get a letter printed, and then\l"
	.string "I can sign and approve it.$"

CeramBaseCampGym_LeaderBattle_Text_0:
# 188 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "That was a great battle. You've earned\n"
	.string "my confidence. Go get 'em, {PLAYER}!$"

CeramBaseCampGym_LeaderBattle_Text_1:
# 195 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} received the CINDER BADGE\n"
	.string "from Arian.$"

CeramBaseCampGym_LeaderBattle_Text_2:
# 203 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The CINDER BADGE increases the ATK of\n"
	.string "all your Pokemon and lets you control\l"
	.string "Pokemon upto lv. 20.$"

CeramBaseCampGym_LeaderBattle_Text_3:
# 204 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "And I'd also like to give you this.$"

CeramBaseCampGym_LeaderBattle_Text_4:
# 208 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "This TM will let your Pokemon bring\n"
	.string "sunlight on the battlefield, powering\l"
	.string "up FIRE-type moves!$"

CeramBaseCampGym_LeaderBattle_Text_5:
# 212 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "And now it's time for you to set off on\n"
	.string "your journey. I hope you manage to find\l"
	.string "the dreamstone and Professor Tenebris.\l"
	.string "I don't know why Team Somber is after\l"
	.string "the dreamstones, but be careful if you\l"
	.string "run into them!$"

CeramBaseCampGym_Text_Intro::
# 222 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Who's my next appointment? Ah! It's\n"
	.string "you, {PLAYER}. A pleasant surprise.\l"
	.string "I'm sick of all this work. This office is\l"
	.string "supposed to be a Gym too, but we get\l"
	.string "very few trainers. Most people that\l"
	.string "come are hikers or collectors. It's good\l"
	.string "to have a chance to battle for a\l"
	.string "change!$"

CeramBaseCampGym_Text_Defeated::
# 226 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "What a match! What a display! I could\n"
	.string "not be more pleased, {PLAYER}. The\l"
	.string "way you stand, you might be able to\l"
	.string "handle yourself on Mt. Ceram. I present\l"
	.string "you with the CINDER BADGE.$"
