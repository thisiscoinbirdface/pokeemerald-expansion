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


CeramBaseCampGym_NPC_A::
# 23 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 24 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 25 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_NPC_A_Text_0
# 26 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_NPC_B::
# 30 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 31 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 32 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_NPC_B_Text_0
# 33 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return


CeramBaseCampGym_TrainerBattle_A::
# 38 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMPGYM_A, CeramBaseCampGym_TrainerBattle_A_Text_0, CeramBaseCampGym_TrainerBattle_A_Text_1
# 39 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_TrainerBattle_A_Text_2
# 40 "data//maps/CeramBaseCampGym/scripts.pory"
	release
	end


CeramBaseCampGym_TrainerBattle_B::
# 45 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMPGYM_B, CeramBaseCampGym_TrainerBattle_B_Text_0, CeramBaseCampGym_TrainerBattle_B_Text_1
# 46 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_TrainerBattle_B_Text_2
# 47 "data//maps/CeramBaseCampGym/scripts.pory"
	release
	end


CeramBaseCampGym_GuardTrigger::
# 52 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_GuardTrigger_2
# 54 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 55 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_0
# 56 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_1
# 57 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 58 "data//maps/CeramBaseCampGym/scripts.pory"
	delay 16
# 59 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_GuardTrigger_Text_0
# 60 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 61 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement LOCALID_GUARD, CeramBaseCampGym_GuardTrigger_Movement_2
# 62 "data//maps/CeramBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCampGym_GuardTrigger_Movement_3
# 63 "data//maps/CeramBaseCampGym/scripts.pory"
	waitmovement 0
# 65 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_GuardTrigger_2:
	end


CeramBaseCampGym_EventScript_NPC_LetterPrint::
# 69 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 70 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
	checkitem ITEM_APPOINTMENT_LETTER
# 0 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CeramBaseCampGym_EventScript_NPC_LetterPrint_2
# 79 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2
# 80 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 83 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_C, CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_3
# 86 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_4
# 88 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_APPOINTMENT_LETTER
# 90 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_5
CeramBaseCampGym_EventScript_NPC_LetterPrint_1:
# 92 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_EventScript_NPC_LetterPrint_2:
# 73 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_EventScript_NPC_LetterPrint_5
# 76 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1
	goto CeramBaseCampGym_EventScript_NPC_LetterPrint_1

CeramBaseCampGym_EventScript_NPC_LetterPrint_5:
# 74 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_LetterPrint_1


CeramBaseCampGym_EventScript_NPC_Signature::
# 96 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 97 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 98 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER, CeramBaseCampGym_EventScript_NPC_Signature_2
	checkitem ITEM_APPOINTMENT_LETTER
# 0 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CeramBaseCampGym_EventScript_NPC_Signature_5
# 127 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_7
CeramBaseCampGym_EventScript_NPC_Signature_1:
# 131 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_EventScript_NPC_Signature_2:
# 99 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_5:
# 103 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_0
# 104 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 105 "data//maps/CeramBaseCampGym/scripts.pory"
	showmoneybox 0, 0
# 106 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_1, MSGBOX_YESNO
# 108 "data//maps/CeramBaseCampGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCampGym_EventScript_NPC_Signature_9
# 115 "data//maps/CeramBaseCampGym/scripts.pory"
	hidemoneybox
# 116 "data//maps/CeramBaseCampGym/scripts.pory"
	removemoney 500
# 117 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_4
# 118 "data//maps/CeramBaseCampGym/scripts.pory"
	release
CeramBaseCampGym_EventScript_NPC_Signature_8:
# 121 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_5
# 122 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_6
# 123 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 124 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_CERAMBASECAMPGYM_APPOINTMENTLETTER
# 125 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0
	goto CeramBaseCampGym_EventScript_NPC_Signature_1

CeramBaseCampGym_EventScript_NPC_Signature_9:
# 109 "data//maps/CeramBaseCampGym/scripts.pory"
	hidemoneybox
# 110 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_EventScript_NPC_Signature_Text_2
# 112 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_D, CeramBaseCampGym_EventScript_NPC_Signature_Text_3
	goto CeramBaseCampGym_EventScript_NPC_Signature_8


CeramBaseCampGym_LeaderBattle::
# 155 "data//maps/CeramBaseCampGym/scripts.pory"
	call Common_EventScript_SaveGame
# 157 "data//maps/CeramBaseCampGym/scripts.pory"
	lockall
# 158 "data//maps/CeramBaseCampGym/scripts.pory"
	faceplayer
# 160 "data//maps/CeramBaseCampGym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeramBaseCampGym_LeaderBattle_2
# 163 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_Text_Intro
# 164 "data//maps/CeramBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMPGYM_LEADER, CeramBaseCampGym_Text_Defeated
# 167 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_1
# 168 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 169 "data//maps/CeramBaseCampGym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 172 "data//maps/CeramBaseCampGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 175 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_2
# 176 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_3
# 177 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 179 "data//maps/CeramBaseCampGym/scripts.pory"
	giveitem ITEM_TM_SUNNY_DAY
# 180 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_4
# 181 "data//maps/CeramBaseCampGym/scripts.pory"
	release
# 184 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_5
# 185 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
CeramBaseCampGym_LeaderBattle_1:
# 189 "data//maps/CeramBaseCampGym/scripts.pory"
	releaseall
	return

CeramBaseCampGym_LeaderBattle_2:
# 161 "data//maps/CeramBaseCampGym/scripts.pory"
	msgbox CeramBaseCampGym_LeaderBattle_Text_0
	goto CeramBaseCampGym_LeaderBattle_1


# 55 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_0:
# 55 "data//maps/CeramBaseCampGym/scripts.pory"
	emote_exclamation_mark
# 55 "data//maps/CeramBaseCampGym/scripts.pory"
	face_right
	step_end

# 56 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_1:
# 56 "data//maps/CeramBaseCampGym/scripts.pory"
	face_left
	step_end

# 61 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_2:
# 61 "data//maps/CeramBaseCampGym/scripts.pory"
	face_down
	step_end

# 62 "data//maps/CeramBaseCampGym/scripts.pory"
CeramBaseCampGym_GuardTrigger_Movement_3:
# 62 "data//maps/CeramBaseCampGym/scripts.pory"
	walk_down
	step_end

CeramBaseCampGym_Red_Text_0:
# 11 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Welcome to the Ceram Base Camp\n"
	.string "Management Office And Gym! The Gym\l"
	.string "Leader ARIAN, who also manages the\l"
	.string "base camp, specialises in FIRE type\l"
	.string "Pokemon. Avoid using BUG and GRASS\l"
	.string "types!$"

CeramBaseCampGym_Guard_Text_0:
# 18 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Arian's got a busy schedule. He sets up\n"
	.string "all his appointments in advance.$"

CeramBaseCampGym_NPC_A_Text_0:
# 25 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I can't battle. Arian tried to teach me\n"
	.string "but both him and his Pokemon are so\l"
	.string "intimidating!$"

CeramBaseCampGym_NPC_B_Text_0:
# 32 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Why does everyone used FIRE type\n"
	.string "Pokemon in here? It's already\l"
	.string "sweltering hot. I keep processing AC\l"
	.string "repair bills.$"

CeramBaseCampGym_TrainerBattle_A_Text_0:
# 38 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Who would've thought managing a basecamp would involve so much paperwork?$"

CeramBaseCampGym_TrainerBattle_A_Text_1:
# 38 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Back to my work!$"

CeramBaseCampGym_TrainerBattle_A_Text_2:
# 39 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The base camp doubling as a Gym is just\n"
	.string "extra work for the employees! And we\l"
	.string "didn't get a raise too!$"

CeramBaseCampGym_TrainerBattle_B_Text_0:
# 45 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I've been waiting all day for an appointment. I'm so frustrated that I need to let it out!$"

CeramBaseCampGym_TrainerBattle_B_Text_1:
# 45 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "At least I've cooled down a bit.$"

CeramBaseCampGym_TrainerBattle_B_Text_2:
# 46 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "All this bureaucracy is mind-numbing.$"

CeramBaseCampGym_GuardTrigger_Text_0:
# 59 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Hold on! You can't have a meeting with\n"
	.string "the manager without an appointment.\l"
	.string "Please come back once you have a\l"
	.string "signed APPOINTMENT LETTER.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_0:
# 74 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I'm busy now. Get out.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_1:
# 76 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You'll have to get this letter signed by\n"
	.string "the assistant manager in the basement.$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_2:
# 79 "data//maps/CeramBaseCampGym/scripts.pory"
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
# 83 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I lost$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_4:
# 86 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Very good! Well then, let me do my job.\n"
	.string "Here you go!$"

CeramBaseCampGym_EventScript_NPC_LetterPrint_Text_5:
# 90 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "But this letter won't be enough without\n"
	.string "the approval of the assistant manager.\l"
	.string "He sits in the basement. Get this letter\l"
	.string "signed by him.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_0:
# 103 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "So you got an APPOINTMENT LETTER and\n"
	.string "want my signature on it? Well...I\l"
	.string "wouldn't mind doing it for a small token\l"
	.string "of appreciation...say...500?$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_1:
# 106 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Will you slip the money under the table?$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_2:
# 110 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You'll have to do it the way everyone\n"
	.string "else does it then!$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_3:
# 112 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "I wish you had just paid up!$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_4:
# 117 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} bribed the assistant\n"
	.string "manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_5:
# 121 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Alright, I'll sign the letter.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_6:
# 122 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} got the APPOINTMENT LETTER\n"
	.string "signed by the assistant manager.$"

CeramBaseCampGym_EventScript_NPC_Signature_Text_7:
# 127 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "You're a trainer and want an\n"
	.string "APPOINTMENT LETTER? You'll have to go\l"
	.string "upstairs, get a letter printed, and then\l"
	.string "I can sign and approve it.$"

CeramBaseCampGym_LeaderBattle_Text_0:
# 161 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "That was a great battle. You've earned\n"
	.string "my confidence. Go get 'em, {PLAYER}!$"

CeramBaseCampGym_LeaderBattle_Text_1:
# 167 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "{PLAYER} received the CINDER BADGE\n"
	.string "from ARIAN.$"

CeramBaseCampGym_LeaderBattle_Text_2:
# 175 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "The CINDER BADGE increases the ATK of\n"
	.string "all your Pokemon and lets you control\l"
	.string "Pokemon upto lv. 20.$"

CeramBaseCampGym_LeaderBattle_Text_3:
# 176 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "And I'd also like to give you this.$"

CeramBaseCampGym_LeaderBattle_Text_4:
# 180 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "This TM will let your Pokemon bring\n"
	.string "sunlight on the battlefield, powering\l"
	.string "up FIRE-type moves!$"

CeramBaseCampGym_LeaderBattle_Text_5:
# 184 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "And now it's time for you to set off on\n"
	.string "your journey. I hope you manage to find\l"
	.string "the dreamstone and Professor Tenebris.\l"
	.string "I don't know why Team Somber is after\l"
	.string "the dreamstones, but be careful if you\l"
	.string "run into them!$"

CeramBaseCampGym_Text_Intro::
# 194 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "Who's my next appointment? Ah! It's\n"
	.string "you, {PLAYER}. A pleasant surprise.\l"
	.string "I'm sick of all this work. This office is\l"
	.string "supposed to be a Gym too, but we get\l"
	.string "very few trainers. Most people that\l"
	.string "come are hikers or collectors. It's good\l"
	.string "to have a chance to battle for a\l"
	.string "change!$"

CeramBaseCampGym_Text_Defeated::
# 198 "data//maps/CeramBaseCampGym/scripts.pory"
	.string "What a match! What a display! I could\n"
	.string "not be more pleased, {PLAYER}. The\l"
	.string "way you stand, you might be able to\l"
	.string "handle yourself on Mt. Ceram. I present\l"
	.string "you with the CINDER BADGE.$"
