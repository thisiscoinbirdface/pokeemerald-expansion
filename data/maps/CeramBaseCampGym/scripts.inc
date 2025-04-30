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
# 33 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_SPENSER_WATER, CeramBaseCampGym_Red_8
# 36 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_6
# 37 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 38 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_7
# 39 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_SPENSER_WATER
CeramBaseCampGym_Red_1:
# 42 "data//maps/CeramBaseCampGym/scripts.pory"
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
# 22 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCampGym_Red_15
CeramBaseCampGym_Red_11:
# 29 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_SPENSER_REWARD
# 30 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_4
	goto CeramBaseCampGym_Red_1

CeramBaseCampGym_Red_5:
# 14 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_0
	goto CeramBaseCampGym_Red_1

CeramBaseCampGym_Red_8:
# 34 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_5, MSGBOX_NPC
	goto CeramBaseCampGym_Red_1

CeramBaseCampGym_Red_12:
# 20 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_FIRE_GEM
	goto CeramBaseCampGym_Red_11

CeramBaseCampGym_Red_15:
# 23 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_CHARCOAL
	goto CeramBaseCampGym_Red_11


CeramBaseCampGym_Guard::
# 47 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 48 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 49 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Guard_Text_0
# 50 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_NPC_A::
# 54 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 55 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 56 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_NPC_A_Text_0
# 57 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_NPC_B::
# 61 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 62 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 63 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_NPC_B_Text_0
# 64 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_TrainerBattle_A::
# 69 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMPGYM_A, CeramBaseCampGym_TrainerBattle_A_Text_0, CeramBaseCampGym_TrainerBattle_A_Text_1
# 70 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_TrainerBattle_A_Text_2
# 71 "data//maps/CeramBaseCampGym/scripts.pory"
	release
	end


CeramBaseCampGym_TrainerBattle_B::
# 76 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMPGYM_B, CeramBaseCampGym_TrainerBattle_B_Text_0, CeramBaseCampGym_TrainerBattle_B_Text_1
# 77 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_TrainerBattle_B_Text_2
# 78 "data//maps/CeramBaseCampGym/scripts.pory"
	release
	end


CeramBaseCampGym_GuardTrigger::
# 83 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_GuardTrigger_2
# 85 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 86 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_0
# 87 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_1
# 88 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 89 "data//maps/CeramBaseCampGym/scripts.pory"
	delay 16
# 90 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_GuardTrigger_Text_0
# 91 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 92 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_2
# 93 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_3
# 94 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 96 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_GuardTrigger_2:
	end


CeramBaseCampGym_EventScript_NPC_LetterPrint::
# 100 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 101 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
	checkitem ITEM_APPOINTMENT_LETTER
# 0 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CeramBaseCampGym_EventScript_NPC_LetterPrint_2
# 110 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2
# 111 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 114 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_C, CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_3
# 117 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_4
# 119 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_APPOINTMENT_LETTER
# 121 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_5
CeramBaseCampGym_EventScript_NPC_LetterPrint_1:
# 123 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_EventScript_NPC_LetterPrint_2:
# 104 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_EventScript_NPC_LetterPrint_5
# 107 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1
	goto CeramBaseCampGym_EventScript_NPC_LetterPrint_1

CeramBaseCampGym_EventScript_NPC_LetterPrint_5:
# 105 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_LetterPrint_1


CeramBaseCampGym_EventScript_NPC_Signature::
# 127 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 128 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 129 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_EventScript_NPC_Signature_2
	checkitem ITEM_APPOINTMENT_LETTER
# 0 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CeramBaseCampGym_EventScript_NPC_Signature_5
# 158 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_7
CeramBaseCampGym_EventScript_NPC_Signature_1:
# 162 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_EventScript_NPC_Signature_2:
# 130 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_5:
# 134 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_0
# 135 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 136 "data//maps/CeramBaseCampGym/scripts.pory"
	showmoneybox 0, 0
# 137 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_1, MSGBOX_YESNO
# 139 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCampGym_EventScript_NPC_Signature_9
# 146 "data//maps/CeramBaseCampGym/scripts.pory"
	hidemoneybox
# 147 "data//maps/CeramBaseCampGym/scripts.pory"
	removemoney 500
# 148 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_4
# 149 "data//maps/CeramBaseCampGym/scripts.pory"
	release
CeramBaseCampGym_EventScript_NPC_Signature_8:
# 152 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_5
# 153 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_6
# 154 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 155 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER
# 156 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_9:
# 140 "data//maps/CeramBaseCampGym/scripts.pory"
	hidemoneybox
# 141 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_2
# 143 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_D, CeramBaseCampGym_EventScript_NPC_Signature_Text_3
	goto CeramBaseCampGym_EventScript_NPC_Signature_8


CeramBaseCampGym_LeaderBattle::
# 187 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 188 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 190 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeramBaseCampGym_LeaderBattle_2
# 194 "data//maps/CeramBaseCampGym/scripts.pory"
	special SaveGame
# 195 "data//maps/CeramBaseCampGym/scripts.pory"
	waitstate
# 196 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 197 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 198 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Text_Intro
# 199 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_LEADER, CeramBaseCampGym_Text_Defeated
# 202 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_2
# 203 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 204 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 207 "data//maps/CeramBaseCampGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 210 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 211 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_3
# 212 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 213 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_4
# 214 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 216 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 218 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 219 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_5
# 220 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 223 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 224 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_6
# 225 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
CeramBaseCampGym_LeaderBattle_1:
# 229 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_LeaderBattle_2:
# 191 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 192 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_1
	goto CeramBaseCampGym_LeaderBattle_1


# 86 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_0:
# 86 "data//maps/CeramBaseCampGym/scripts.pory"
	emote_exclamation_mark
# 86 "data//maps/CeramBaseCampGym/scripts.pory"
	face_right
	step_end

# 87 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_1:
# 87 "data//maps/CeramBaseCampGym/scripts.pory"
	face_left
	step_end

# 92 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_2:
# 92 "data//maps/CeramBaseCampGym/scripts.pory"
	face_down
	step_end

# 93 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_3:
# 93 "data//maps/CeramBaseCampGym/scripts.pory"
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
	.string "Fire Gem$"

CeramBaseCampGym_Red_Text_3:
# 17 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Charcoal$"

CeramBaseCampGym_Red_Text_4:
# 30 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

CeramBaseCampGym_Red_Text_5:
# 34 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The Gym Leader Ariana, who also manages\n"
	.string "the base camp, specialises in\l"
	.string "intimidating FIRE type Pokémon. Avoid\l"
	.string "using physical attackers!$"

CeramBaseCampGym_Red_Text_6:
# 36 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Welcome to the Ceram Base Camp\n"
	.string "Management Office And Gym! First, have\l"
	.string "some water.$"

CeramBaseCampGym_Red_Text_7:
# 38 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The Gym Leader Ariana, who also manages\n"
	.string "the base camp, specialises in\l"
	.string "intimidating FIRE type Pokémon. Avoid\l"
	.string "using physical attackers! Now go get\l"
	.string "'em, champ-in-the-making!$"

CeramBaseCampGym_Guard_Text_0:
# 49 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Arian's got a busy schedule. She sets up\n"
	.string "all her appointments in advance.$"

CeramBaseCampGym_NPC_A_Text_0:
# 56 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I can't battle. Ariana tried to teach me\n"
	.string "but both she and her Pokémon are so\l"
	.string "intimidating!$"

CeramBaseCampGym_NPC_B_Text_0:
# 63 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Why does everyone used FIRE type\n"
	.string "Pokémon in here? It's already\l"
	.string "sweltering hot. Our air conditioning\l"
	.string "bills are too high!$"

CeramBaseCampGym_TrainerBattle_A_Text_0:
# 69 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Who would've thought managing a\n"
	.string "basecamp would involve so much\l"
	.string "paperwork?$"

CeramBaseCampGym_TrainerBattle_A_Text_1:
# 69 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Back to my work!$"

CeramBaseCampGym_TrainerBattle_A_Text_2:
# 70 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The base camp doubling as a Gym is just\n"
	.string "extra work for the employees! And we\l"
	.string "didn't get a raise too!$"

CeramBaseCampGym_TrainerBattle_B_Text_0:
# 76 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I've been waiting all day for an\n"
	.string "appointment. I'm so frustrated that I\l"
	.string "need to let it out!$"

CeramBaseCampGym_TrainerBattle_B_Text_1:
# 76 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "At least I've cooled down a bit.$"

CeramBaseCampGym_TrainerBattle_B_Text_2:
# 77 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "All this bureaucracy is mind-numbing.$"

CeramBaseCampGym_GuardTrigger_Text_0:
# 90 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Hold on! You can't have a meeting with\n"
	.string "the manager without an appointment.\l"
	.string "Please come back once you have a\l"
	.string "signed APPOINTMENT LETTER.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0:
# 105 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I'm busy now. Get out.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1:
# 107 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You'll have to get this letter signed by\n"
	.string "the assistant manager in the basement.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2:
# 110 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You're a trainer and want an\n"
	.string "Appointment Letter? I can print you a\l"
	.string "letter, but first I'll need to see your\l"
	.string "credentials.\p"
	.string "...\p"
	.string "No, not your trainer card. Don't you\n"
	.string "have a Pokémon League Pass? You don't?\l"
	.string "Well then a battle should prove that\l"
	.string "you really are who you say you are!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_3:
# 114 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I'm better with spreadsheets!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_4:
# 117 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Very good! Well then, let me do my job.\n"
	.string "Here you go!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_5:
# 121 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "But this letter won't be enough without\n"
	.string "the approval of the assistant manager.\l"
	.string "He sits in the basement. Get this letter\l"
	.string "signed by him.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_0:
# 134 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "So you got an Appointment Letter and\n"
	.string "want my signature on it? Well...I\l"
	.string "wouldn't mind doing it for a small token\l"
	.string "of appreciation...say...500?$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_1:
# 137 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Will you slip the money under the table?$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_2:
# 141 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You'll have to do it the way everyone\n"
	.string "else does it then!$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_3:
# 143 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I wish you had just paid up!$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_4:
# 148 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} bribed the assistant\n"
	.string "manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_5:
# 152 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Alright, I'll sign the letter.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_6:
# 153 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} got the Appointment Letter\n"
	.string "signed by the assistant manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_7:
# 158 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You're a trainer and want an\n"
	.string "Appointment Letter? You'll have to go\l"
	.string "upstairs, get a letter printed, and then\l"
	.string "I can sign and approve it.$"

CeramBaseCampGym_LeaderBattle_Text_0:
# 191 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Ariana$"

CeramBaseCampGym_LeaderBattle_Text_1:
# 192 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "That was a great battle. You've earned\n"
	.string "my confidence. Go get 'em, {PLAYER}!$"

CeramBaseCampGym_LeaderBattle_Text_2:
# 202 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} received the Cinder Badge\n"
	.string "from Ariana.$"

CeramBaseCampGym_LeaderBattle_Text_3:
# 211 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The Cinder Badge increases the ATK of\n"
	.string "all your Pokémon and lets you control\l"
	.string "Pokémon upto lv. 20.$"

CeramBaseCampGym_LeaderBattle_Text_4:
# 213 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "And I'd also like to give you this.$"

CeramBaseCampGym_LeaderBattle_Text_5:
# 219 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Since this is your second badge, you\n"
	.string "must know what these shards do by now.\l"
	.string "There's a shrine close to Route 4, so\l"
	.string "why don't you use these there?$"

CeramBaseCampGym_LeaderBattle_Text_6:
# 224 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "And now it's time for you to set off on\n"
	.string "your journey. I hope you manage to find\l"
	.string "the dreamstone and Professor Tenebris.\l"
	.string "I don't know why Team Somber is after\l"
	.string "the dreamstones, but be careful if you\l"
	.string "run into them!$"

CeramBaseCampGym_Text_Intro::
# 234 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Who's my next appointment? Ah! It's\n"
	.string "you, {PLAYER}. A pleasant surprise.\l"
	.string "I'm sick of all this work. This office is\l"
	.string "supposed to be a Gym too, but we get\l"
	.string "very few trainers. Most people that\l"
	.string "come are hikers or collectors. It's good\l"
	.string "to have a chance to battle for a\l"
	.string "change!$"

CeramBaseCampGym_Text_Defeated::
# 238 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "What a match! What a display! I could\n"
	.string "not be more pleased, {PLAYER}. The\l"
	.string "way you stand, you might be able to\l"
	.string "handle yourself on Mt. Ceram. I present\l"
	.string "you with the CINDER BADGE.$"
