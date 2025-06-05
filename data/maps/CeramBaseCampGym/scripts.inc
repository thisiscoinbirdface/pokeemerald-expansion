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
# 20 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_SPENSER_WATER, CeramBaseCampGym_Red_8
# 23 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_3
# 24 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 25 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_2
# 26 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_SPENSER_WATER
CeramBaseCampGym_Red_1:
# 29 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	end

CeramBaseCampGym_Red_2:
# 13 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_SPENSER_REWARD, CeramBaseCampGym_Red_5
# 16 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_1
# 17 "data//maps/CeramBaseCampGym/scripts.pory"
	goto CeramBaseCampGym_Red_Reward
	goto CeramBaseCampGym_Red_1

CeramBaseCampGym_Red_5:
# 14 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_0
	goto CeramBaseCampGym_Red_1

CeramBaseCampGym_Red_8:
# 21 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Text_2, MSGBOX_NPC
	goto CeramBaseCampGym_Red_1


CeramBaseCampGym_Red_Reward::
# 34 "data//maps/CeramBaseCampGym/scripts.pory"
	message CeramBaseCampGym_Red_Reward_Text_0
# 35 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmessage
# 36 "data//maps/CeramBaseCampGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, CeramBaseCampGym_Red_Reward_Text_1, CeramBaseCampGym_Red_Reward_Text_2
# 37 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCampGym_Red_Reward_2
CeramBaseCampGym_Red_Reward_1:
# 38 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCampGym_Red_Reward_5
CeramBaseCampGym_Red_Reward_4:
# 39 "data//maps/CeramBaseCampGym/scripts.pory"
	goto CeramBaseCampGym_Red_Reward_Give
	return

CeramBaseCampGym_Red_Reward_2:
# 37 "data//maps/CeramBaseCampGym/scripts.pory"
	setvar VAR_0x8006, ITEM_FIRE_GEM
	goto CeramBaseCampGym_Red_Reward_1

CeramBaseCampGym_Red_Reward_5:
# 38 "data//maps/CeramBaseCampGym/scripts.pory"
	setvar VAR_0x8006, ITEM_CHARCOAL
	goto CeramBaseCampGym_Red_Reward_4


CeramBaseCampGym_Red_Reward_Give::
# 43 "data//maps/CeramBaseCampGym/scripts.pory"
	showitemdescription
# 44 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Reward_Give_Text_0, MSGBOX_YESNO
# 45 "data//maps/CeramBaseCampGym/scripts.pory"
	hideitemdescription
# 46 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCampGym_Red_Reward_Give_1
# 51 "data//maps/CeramBaseCampGym/scripts.pory"
	goto CeramBaseCampGym_Red_Reward
	return

CeramBaseCampGym_Red_Reward_Give_1:
# 47 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem VAR_0x8006
# 48 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_SPENSER_REWARD
# 49 "data//maps/CeramBaseCampGym/scripts.pory"
	goto CeramBaseCampGym_Red_Reward_End
	return


CeramBaseCampGym_Red_Reward_End::
# 56 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Red_Reward_End_Text_0, MSGBOX_NPC
	end


CeramBaseCampGym_Guard::
# 86 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 87 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 88 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Guard_Text_0
# 89 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_NPC_A::
# 93 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 94 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 95 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_NPC_A_Text_0
# 96 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_NPC_B::
# 100 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 101 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 102 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_NPC_B_Text_0
# 103 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_TrainerBattle_A::
# 108 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMPGYM_A, CeramBaseCampGym_TrainerBattle_A_Text_0, CeramBaseCampGym_TrainerBattle_A_Text_1
# 109 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_TrainerBattle_A_Text_2
# 110 "data//maps/CeramBaseCampGym/scripts.pory"
	release
	end


CeramBaseCampGym_TrainerBattle_B::
# 115 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMPGYM_B, CeramBaseCampGym_TrainerBattle_B_Text_0, CeramBaseCampGym_TrainerBattle_B_Text_1
# 116 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_TrainerBattle_B_Text_2
# 117 "data//maps/CeramBaseCampGym/scripts.pory"
	release
	end


CeramBaseCampGym_GuardTrigger::
# 122 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_GuardTrigger_2
# 124 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 125 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_0
# 126 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_1
# 127 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 128 "data//maps/CeramBaseCampGym/scripts.pory"
	delay 16
# 129 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_GuardTrigger_Text_0
# 130 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 131 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_2
# 132 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_3
# 133 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 135 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_GuardTrigger_2:
	end


CeramBaseCampGym_EventScript_NPC_LetterPrint::
# 139 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 140 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
	checkitem ITEM_APPOINTMENT_LETTER
# 0 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CeramBaseCampGym_EventScript_NPC_LetterPrint_2
# 149 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2
# 150 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 153 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_C, CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_3
# 156 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_4
# 158 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_APPOINTMENT_LETTER
# 160 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_5
CeramBaseCampGym_EventScript_NPC_LetterPrint_1:
# 162 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_EventScript_NPC_LetterPrint_2:
# 143 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_EventScript_NPC_LetterPrint_5
# 146 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1
	goto CeramBaseCampGym_EventScript_NPC_LetterPrint_1

CeramBaseCampGym_EventScript_NPC_LetterPrint_5:
# 144 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_LetterPrint_1


CeramBaseCampGym_EventScript_NPC_Signature::
# 166 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 167 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 168 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_EventScript_NPC_Signature_2
	checkitem ITEM_APPOINTMENT_LETTER
# 0 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CeramBaseCampGym_EventScript_NPC_Signature_5
# 197 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_7
CeramBaseCampGym_EventScript_NPC_Signature_1:
# 201 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_EventScript_NPC_Signature_2:
# 169 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_5:
# 173 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_0
# 174 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 175 "data//maps/CeramBaseCampGym/scripts.pory"
	showmoneybox 0, 0
# 176 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_1, MSGBOX_YESNO
# 178 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCampGym_EventScript_NPC_Signature_9
# 185 "data//maps/CeramBaseCampGym/scripts.pory"
	hidemoneybox
# 186 "data//maps/CeramBaseCampGym/scripts.pory"
	removemoney 500
# 187 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_4
# 188 "data//maps/CeramBaseCampGym/scripts.pory"
	release
CeramBaseCampGym_EventScript_NPC_Signature_8:
# 191 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_5
# 192 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_6
# 193 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 194 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER
# 195 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_9:
# 179 "data//maps/CeramBaseCampGym/scripts.pory"
	hidemoneybox
# 180 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_2
# 182 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_D, CeramBaseCampGym_EventScript_NPC_Signature_Text_3
	goto CeramBaseCampGym_EventScript_NPC_Signature_8


CeramBaseCampGym_LeaderBattle::
# 226 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 227 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 229 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeramBaseCampGym_LeaderBattle_2
# 233 "data//maps/CeramBaseCampGym/scripts.pory"
	special SaveGame
# 234 "data//maps/CeramBaseCampGym/scripts.pory"
	waitstate
# 235 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 236 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 237 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Text_Intro
# 238 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_LEADER, CeramBaseCampGym_Text_Defeated
# 241 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_2
# 242 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_3
# 243 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 244 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 247 "data//maps/CeramBaseCampGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 250 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 251 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_4
# 252 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 253 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_5
# 254 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 256 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 258 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 259 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_6
# 260 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 262 "data//maps/CeramBaseCampGym/scripts.pory"
	delay 16
# 265 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 266 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_7
# 267 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
CeramBaseCampGym_LeaderBattle_1:
# 271 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_LeaderBattle_2:
# 230 "data//maps/CeramBaseCampGym/scripts.pory"
	speakername CeramBaseCampGym_LeaderBattle_Text_0
# 231 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_1
	goto CeramBaseCampGym_LeaderBattle_1


# 125 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_0:
# 125 "data//maps/CeramBaseCampGym/scripts.pory"
	emote_exclamation_mark
# 125 "data//maps/CeramBaseCampGym/scripts.pory"
	face_right
	step_end

# 126 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_1:
# 126 "data//maps/CeramBaseCampGym/scripts.pory"
	face_left
	step_end

# 131 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_2:
# 131 "data//maps/CeramBaseCampGym/scripts.pory"
	face_down
	step_end

# 132 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_3:
# 132 "data//maps/CeramBaseCampGym/scripts.pory"
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
	.string "give you something.$"

CeramBaseCampGym_Red_Text_2:
# 21 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The Gym Leader Ariana, who also manages\n"
	.string "the base camp, specialises in\l"
	.string "intimidating FIRE type Pokémon. An Occa\l"
	.string "Berry might come in useful.\p"
	.string "Now go get 'em, champ-in-the-making!$"

CeramBaseCampGym_Red_Text_3:
# 23 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Welcome to the Ceram Base Camp\n"
	.string "Management Office And Gym! First, have\l"
	.string "some water.$"

CeramBaseCampGym_Red_Reward_Text_0:
# 34 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Which of these do you fancy?$"

CeramBaseCampGym_Red_Reward_Text_1:
# 36 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Fire Gem$"

CeramBaseCampGym_Red_Reward_Text_2:
# 36 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Charcoal$"

CeramBaseCampGym_Red_Reward_Give_Text_0:
# 44 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Are you sure?$"

CeramBaseCampGym_Red_Reward_End_Text_0:
# 56 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

CeramBaseCampGym_Guard_Text_0:
# 88 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Arian's got a busy schedule. She sets up\n"
	.string "all her appointments in advance.$"

CeramBaseCampGym_NPC_A_Text_0:
# 95 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I can't battle. Ariana tried to teach me\n"
	.string "but her Pokémon are so intimidating!$"

CeramBaseCampGym_NPC_B_Text_0:
# 102 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Why does everyone used FIRE type\n"
	.string "Pokémon in here? It's already\l"
	.string "sweltering hot. Our air conditioning\l"
	.string "bills are too high!$"

CeramBaseCampGym_TrainerBattle_A_Text_0:
# 108 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Who would've thought managing a\n"
	.string "basecamp would mean so much\l"
	.string "paperwork?$"

CeramBaseCampGym_TrainerBattle_A_Text_1:
# 108 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Back to my work!$"

CeramBaseCampGym_TrainerBattle_A_Text_2:
# 109 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The base camp doubling as a Gym is just\n"
	.string "extra work for the employees.\p"
	.string "We didn't even get a raise!$"

CeramBaseCampGym_TrainerBattle_B_Text_0:
# 115 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I've been waiting all day for an\n"
	.string "appointment. I'm so frustrated that I\l"
	.string "need to let it out!$"

CeramBaseCampGym_TrainerBattle_B_Text_1:
# 115 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "At least I've cooled down a bit.$"

CeramBaseCampGym_TrainerBattle_B_Text_2:
# 116 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "All this bureaucracy is mind-numbing.$"

CeramBaseCampGym_GuardTrigger_Text_0:
# 129 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Hold on! You can't have a meeting with\n"
	.string "the manager without an appointment.\l"
	.string "Please come back once you have a\l"
	.string "signed Appointment Letter.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0:
# 144 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I'm busy now. Get out.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1:
# 146 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You'll have to get this letter signed by\n"
	.string "the assistant manager in the basement.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2:
# 149 "data//maps/CeramBaseCampGym/scripts.pory"
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
# 153 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I'm better with spreadsheets!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_4:
# 156 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Very good! Well then, let me do my job.\n"
	.string "Here you go!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_5:
# 160 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "But this letter won't be enough without\n"
	.string "the approval of the assistant manager.\l"
	.string "He sits in the basement. Get this letter\l"
	.string "signed by him.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_0:
# 173 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "So you got an Appointment Letter and\n"
	.string "want my signature on it? Well...I\l"
	.string "wouldn't mind doing it for a small token\l"
	.string "of appreciation...say...500?$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_1:
# 176 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Will you slip the money under the table?$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_2:
# 180 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You'll have to do it the way everyone\n"
	.string "else does it then!$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_3:
# 182 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I wish you had just paid up!$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_4:
# 187 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} bribed the assistant\n"
	.string "manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_5:
# 191 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Alright, I'll sign the letter.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_6:
# 192 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} got the Appointment Letter\n"
	.string "signed by the assistant manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_7:
# 197 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You're a trainer and want an\n"
	.string "Appointment Letter? You'll have to go\l"
	.string "upstairs, get a letter printed, and then\l"
	.string "I can sign and approve it.$"

CeramBaseCampGym_LeaderBattle_Text_0:
# 230 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Ariana$"

CeramBaseCampGym_LeaderBattle_Text_1:
# 231 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "That was a great battle. You've earned\n"
	.string "my confidence. Go get 'em, {PLAYER}!$"

CeramBaseCampGym_LeaderBattle_Text_2:
# 241 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I could not be more pleased, {PLAYER}.\n"
	.string "The way you stand, you might be able to\l"
	.string "handle yourself on Mt. Ceram. I present\l"
	.string "you with the Cinder Badge.$"

CeramBaseCampGym_LeaderBattle_Text_3:
# 242 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} received the Cinder Badge\n"
	.string "from Ariana.$"

CeramBaseCampGym_LeaderBattle_Text_4:
# 251 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The Cinder Badge increases the ATK of\n"
	.string "all your Pokémon and lets you control\l"
	.string "Pokémon upto lv. 20.$"

CeramBaseCampGym_LeaderBattle_Text_5:
# 253 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "And I'd also like to give you this.$"

CeramBaseCampGym_LeaderBattle_Text_6:
# 259 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Since this is your second badge, you\n"
	.string "must know what these shards do by now.\l"
	.string "There's a statue close to Route 4, so\l"
	.string "why don't you use these there?$"

CeramBaseCampGym_LeaderBattle_Text_7:
# 266 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "And now it's time for you to set off on\n"
	.string "your journey. I hope you manage to find\l"
	.string "the dreamstone and Professor Tenebris.\l"
	.string "I don't know why Team Somber is after\l"
	.string "the dreamstones, but be careful if you\l"
	.string "run into them!$"

CeramBaseCampGym_Text_Intro::
# 276 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Who's my next appointment? Ah! It's\n"
	.string "you, {PLAYER}. A pleasant surprise.\p"
	.string "I'm sick of all this work. This office is\n"
	.string "supposed to be a Gym too, but we get\l"
	.string "very few trainers. Most people that\l"
	.string "come are hikers or collectors.\p"
	.string "It's good to have a chance to battle\n"
	.string "for a change!$"

CeramBaseCampGym_Text_Defeated::
# 280 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "What a match!$"
