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


CeramBaseCampGym_TrainerBattle_A::
# 23 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMPGYM_A, CeramBaseCampGym_TrainerBattle_A_Text_0, CeramBaseCampGym_TrainerBattle_A_Text_1
# 24 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_TrainerBattle_A_Text_2
# 25 "data//maps/CeramBaseCampGym/scripts.pory"
	release
	end


CeramBaseCampGym_TrainerBattle_B::
# 30 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMPGYM_B, CeramBaseCampGym_TrainerBattle_B_Text_0, CeramBaseCampGym_TrainerBattle_B_Text_1
# 31 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_TrainerBattle_B_Text_2
# 32 "data//maps/CeramBaseCampGym/scripts.pory"
	release
	end


CeramBaseCampGym_GuardTrigger::
# 37 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_GuardTrigger_2
# 39 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 40 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_0
# 41 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_1
# 42 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 43 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_GuardTrigger_Text_0
# 44 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 45 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_2
# 46 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_3
# 47 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 49 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_GuardTrigger_2:
	end


CeramBaseCampGym_EventScript_NPC_LetterPrint::
# 53 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 54 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 55 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
# 56 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 59 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_C, CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1
# 62 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2
# 64 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_APPOINTMENT_LETTER
# 66 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_3
# 67 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_EventScript_NPC_Signature::
# 71 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 72 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 73 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_EventScript_NPC_Signature_2
	checkitem ITEM_APPOINTMENT_LETTER
# 0 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CeramBaseCampGym_EventScript_NPC_Signature_5
# 101 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_8
CeramBaseCampGym_EventScript_NPC_Signature_1:
# 105 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_EventScript_NPC_Signature_2:
# 74 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_5:
# 78 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_1
# 79 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 80 "data//maps/CeramBaseCampGym/scripts.pory"
	showmoneybox 0, 0
# 81 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_2, MSGBOX_YESNO
# 83 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCampGym_EventScript_NPC_Signature_9
# 90 "data//maps/CeramBaseCampGym/scripts.pory"
	removemoney 500
# 91 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_5
# 92 "data//maps/CeramBaseCampGym/scripts.pory"
	release
CeramBaseCampGym_EventScript_NPC_Signature_8:
# 95 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_6
# 96 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_7
# 97 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 98 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER
# 99 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_9:
# 84 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 85 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_3
# 87 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_D, CeramBaseCampGym_EventScript_NPC_Signature_Text_4
	goto CeramBaseCampGym_EventScript_NPC_Signature_8


CeramBaseCampGym_LeaderBattle::
# 129 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 130 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 132 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeramBaseCampGym_LeaderBattle_2
# 135 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_LEADER, CeramBaseCampGym_Text_Intro, CeramBaseCampGym_Text_Defeated, CeramBaseCampGym_EventScript_NPC_Signature, NO_MUSIC
# 136 "data//maps/CeramBaseCampGym/scripts.pory"
	release
CeramBaseCampGym_LeaderBattle_1:
# 139 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_LeaderBattle_2:
# 133 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_0
	goto CeramBaseCampGym_LeaderBattle_1


CeramBaseCampGym_EventScript_Victory::
# 145 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_Victory_Text_0
# 146 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 147 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 150 "data//maps/CeramBaseCampGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 153 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_Victory_Text_1
# 154 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_Victory_Text_2
# 155 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 157 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_TM_SUNNY_DAY
# 158 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_Victory_Text_3
# 159 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 162 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_Victory_Text_4
# 163 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


# 40 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_0:
# 40 "data//maps/CeramBaseCampGym/scripts.pory"
	face_right
	step_end

# 41 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_1:
# 41 "data//maps/CeramBaseCampGym/scripts.pory"
	face_left
	step_end

# 45 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_2:
# 45 "data//maps/CeramBaseCampGym/scripts.pory"
	face_down
	step_end

# 46 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_3:
# 46 "data//maps/CeramBaseCampGym/scripts.pory"
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

CeramBaseCampGym_TrainerBattle_A_Text_0:
# 23 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Who would've thought managing a\nbasecamp would involve so\lmuch paperwork?$"

CeramBaseCampGym_TrainerBattle_A_Text_1:
# 23 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Back to my work!$"

CeramBaseCampGym_TrainerBattle_A_Text_2:
# 24 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The base camp doubling as a Gym is just\n"
	.string "extra work for the employees! And we\l"
	.string "didn't get a raise too!$"

CeramBaseCampGym_TrainerBattle_B_Text_0:
# 30 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I've been waiting all day\nfor an appointment.\pI'm so frustrated that\nI need to let it out!$"

CeramBaseCampGym_TrainerBattle_B_Text_1:
# 30 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "At least I've cooled down a bit.$"

CeramBaseCampGym_TrainerBattle_B_Text_2:
# 31 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "All this bureaucracy is mind-numbing.$"

CeramBaseCampGym_GuardTrigger_Text_0:
# 43 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Hold on! You can't have a meeting with\n"
	.string "the manager without an appointment.\l"
	.string "Please come back once you have a\l"
	.string "signed APPOINTMENT LETTER.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0:
# 55 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You're a trainer and want an\n"
	.string "APPOINTMENT LETTER? I can print you a\l"
	.string "letter, but first I'll need to see your\l"
	.string "credentials. You have none? Well then a\l"
	.string "battle should prove that you really are\l"
	.string "who you say you are!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1:
# 59 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I lost$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2:
# 62 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Very good! Well then, let me do my job.\n"
	.string "Here you go!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_3:
# 66 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "But this letter won't be enough without\n"
	.string "the approval of the assistant manager.\l"
	.string "He sits in the basement. Get this letter\l"
	.string "signed by him.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_0:
# 74 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I'm busy now. Get out.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_1:
# 78 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "So you got an APPOINTMENT LETTER and\n"
	.string "want my signature on it? Well...I\l"
	.string "wouldn't mind doing it for a small token\l"
	.string "of appreciation...say...500?$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_2:
# 81 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Will you slip the money under the table?$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_3:
# 85 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You'll have to do it the way everyone\n"
	.string "else does it then!$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_4:
# 87 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I wish you had just paid up!$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_5:
# 91 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} bribed the assistant\n"
	.string "manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_6:
# 95 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Alright, I'll sign the letter.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_7:
# 96 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} got the APPOINTMENT LETTER\n"
	.string "signed by the assistant manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_8:
# 101 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You're a trainer and want an\n"
	.string "APPOINTMENT LETTER? You'll have to go\l"
	.string "upstairs, get a letter printed, and then\l"
	.string "I can sign and approve it.$"

CeramBaseCampGym_LeaderBattle_Text_0:
# 133 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "That was a great battle. You've earned\n"
	.string "my confidence. Go get 'em, {PLAYER}!$"

CeramBaseCampGym_EventScript_Victory_Text_0:
# 145 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} received the CINDER BADGE\n"
	.string "from LEADER.$"

CeramBaseCampGym_EventScript_Victory_Text_1:
# 153 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The CINDER BADGE increases the ATK of\n"
	.string "all your {PKMN} and lets you control {PKMN}\l"
	.string "upto lv. 20.$"

CeramBaseCampGym_EventScript_Victory_Text_2:
# 154 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "And I'd also like to give you this.$"

CeramBaseCampGym_EventScript_Victory_Text_3:
# 158 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "This TM will let your {PKMN} bring sunlight\n"
	.string "on the battlefield, powering up\l"
	.string "FIRE-type moves!$"

CeramBaseCampGym_EventScript_Victory_Text_4:
# 162 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "And now it's time for you to set off on\n"
	.string "your journey. I hope you manage to find\l"
	.string "the dreamstone and Professor Tenebris.\l"
	.string "I don't know why Team Somber is after\l"
	.string "the dreamstones, but be careful if you\l"
	.string "run into them!$"

CeramBaseCampGym_Text_Intro::
# 167 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Who's my next appointment? Ah! It's\n"
	.string "you, {PLAYER}. A pleasant surprise.\l"
	.string "I'm sick of all this work. This office is\l"
	.string "supposed to be a Gym too, but we get\l"
	.string "very few trainers. Most people that\l"
	.string "come are hikers or collectors. It's good\l"
	.string "to have a chance to battle for a\l"
	.string "change!$"

CeramBaseCampGym_Text_Defeated::
# 171 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "What a match! What a display! I could\n"
	.string "not be more pleased, {PLAYER}. The\l"
	.string "way you stand, you might be able to\l"
	.string "handle yourself on Mt. Ceram. I present\l"
	.string "you with the CINDER BADGE.$"
