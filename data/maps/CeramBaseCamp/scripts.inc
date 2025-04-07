CeramBaseCamp_MapScripts::
	.byte 0


CeramBaseCamp_RedBlockGym::
# 7 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 8 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 9 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_RedBlockGym_Text_0
# 10 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 11 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 8, CeramBaseCamp_RedBlockGym_Movement_0
# 12 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_EventScript_ExitTrigger::
# 20 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeramBaseCamp_EventScript_ExitTrigger_2
# 22 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 23 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 7, CeramBaseCamp_EventScript_ExitTrigger_Movement_0
# 24 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 25 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 26 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_EventScript_ExitTrigger_Text_0
# 27 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 28 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_EventScript_ExitTrigger_Movement_1
# 29 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 30 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return

CeramBaseCamp_EventScript_ExitTrigger_2:
	end


CeramBaseCamp_NPC_Exit::
# 34 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 35 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 36 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC_Exit_Text_0
# 37 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC1::
# 43 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 44 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 45 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC1_Text_0
# 46 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC2::
# 51 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 52 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 53 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC2_Text_0
# 54 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC3::
# 59 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 60 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 61 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC3_Text_0
# 62 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_NPC4::
# 67 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 69 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_complete QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_Quest_Done
# 70 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_active QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_QuestInProgress
# 71 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_inactive QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_StartQuest
# 73 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Cyndaquil_Quest_Done::
# 79 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 80 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Quest_Done_Text_0
# 81 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0
# 82 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 83 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Cyndaquil_StartQuest::
# 89 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_0
# 90 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 91 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 9, CeramBaseCamp_Cyndaquil_StartQuest_Movement_0
# 92 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_1
# 93 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 94 "data//maps/CeramBaseCamp/scripts.pory"
	delay 20
# 96 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 97 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_2, MSGBOX_YESNO
# 100 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_StartQuest_2
# 105 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_4
CeramBaseCamp_Cyndaquil_StartQuest_1:
# 107 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Cyndaquil_StartQuest_2:
# 101 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_3
# 102 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 103 "data//maps/CeramBaseCamp/scripts.pory"
	startquest QUEST_CERAM_CYNDAQUIL
	goto CeramBaseCamp_Cyndaquil_StartQuest_1


CeramBaseCamp_Cyndaquil_QuestInProgress::
# 114 "data//maps/CeramBaseCamp/scripts.pory"
	checkitem ITEM_TM_SUNNY_DAY
# 115 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_QuestInProgress_2
# 128 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_3
# 129 "data//maps/CeramBaseCamp/scripts.pory"
	release
CeramBaseCamp_Cyndaquil_QuestInProgress_1:
# 132 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0
# 133 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 134 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return

CeramBaseCamp_Cyndaquil_QuestInProgress_2:
# 116 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_0
# 117 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 118 "data//maps/CeramBaseCamp/scripts.pory"
	delay 20
# 120 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_1
# 121 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 122 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_Cyndaquil_QuestInProgress_Movement_0
# 123 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 124 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_2
# 125 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem ITEM_CHARCOAL
# 126 "data//maps/CeramBaseCamp/scripts.pory"
	completequest QUEST_CERAM_CYNDAQUIL
	goto CeramBaseCamp_Cyndaquil_QuestInProgress_1


CeramBaseCamp_NPC5::
# 139 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 140 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 141 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_0
# 143 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_NPCITEM, CeramBaseCamp_NPC5_2
# 146 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_1
# 147 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 148 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_NPCITEM
# 149 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_2
CeramBaseCamp_NPC5_1:
# 151 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return

CeramBaseCamp_NPC5_2:
	goto CeramBaseCamp_NPC5_1


CeramBaseCamp_Excadrill::
# 161 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EXCADRILL, CeramBaseCamp_Excadrill_2
# 169 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_1, MSGBOX_YESNO
# 170 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 171 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Excadrill_5
CeramBaseCamp_Excadrill_1:
# 196 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Excadrill_2:
# 163 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_0
# 164 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Excadrill_5:
# 174 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_ENCOUNTER
# 175 "data//maps/CeramBaseCamp/scripts.pory"
	delay 40
# 176 "data//maps/CeramBaseCamp/scripts.pory"
	waitmoncry
# 177 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_2
# 178 "data//maps/CeramBaseCamp/scripts.pory"
	setwildbattle SPECIES_EXCADRILL, 37
# 179 "data//maps/CeramBaseCamp/scripts.pory"
	dowildbattle
# 182 "data//maps/CeramBaseCamp/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 183 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CeramBaseCamp_Excadrill_8
CeramBaseCamp_Excadrill_7:
# 186 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq CeramBaseCamp_Excadrill_11
CeramBaseCamp_Excadrill_10:
# 189 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CeramBaseCamp_Excadrill_13
	goto CeramBaseCamp_Excadrill_1

CeramBaseCamp_Excadrill_8:
# 184 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto CeramBaseCamp_Excadrill_7

CeramBaseCamp_Excadrill_11:
# 187 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto CeramBaseCamp_Excadrill_10

CeramBaseCamp_Excadrill_13:
# 190 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_3
	goto CeramBaseCamp_Excadrill_1


# 11 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_RedBlockGym_Movement_0:
# 11 "data//maps/CeramBaseCamp/scripts.pory"
	face_down
	step_end

# 23 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_EventScript_ExitTrigger_Movement_0:
# 23 "data//maps/CeramBaseCamp/scripts.pory"
	face_left
# 23 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

# 28 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_EventScript_ExitTrigger_Movement_1:
# 28 "data//maps/CeramBaseCamp/scripts.pory"
	walk_down
	step_end

# 81 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0:
# 81 "data//maps/CeramBaseCamp/scripts.pory"
	face_up
	step_end

# 91 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_StartQuest_Movement_0:
# 91 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
# 91 "data//maps/CeramBaseCamp/scripts.pory"
	jump_in_place_down
	step_end

# 122 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_QuestInProgress_Movement_0:
# 122 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

CeramBaseCamp_RedBlockGym_Text_0:
# 9 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The Gym Leader's gone to the Supply\n"
	.string "Depot to sort out some commotion\l"
	.string "there.$"

CeramBaseCamp_EventScript_ExitTrigger_Text_0:
# 26 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Hey kid! The rules are you can't climb\n"
	.string "unless you have the FIRE BADGE. If you\l"
	.string "can't beat ARIAN, you won't be able to\l"
	.string "handle the heat of the mountain!$"

CeramBaseCamp_NPC_Exit_Text_0:
# 36 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Mt. Ceram is dangerous because once\n"
	.string "you enter you can't come back. For\l"
	.string "safety reasons, we don't allow trainers\l"
	.string "without at least two gym badges to\l"
	.string "pass.$"

CeramBaseCamp_NPC1_Text_0:
# 45 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Since the base camp is so small, the\n"
	.string "Pokemon League clubbed the gym and\l"
	.string "camp management office into one.$"

CeramBaseCamp_NPC2_Text_0:
# 53 "data//maps/CeramBaseCamp/scripts.pory"
	.string "This camp was established to dig a\n"
	.string "tunnel through Mt. Ceram. Old equipment\l"
	.string "from back then is left here. I remember\l"
	.string "a DRILBUR made its home inside one of\l"
	.string "these machines and refused to leave!\l"
	.string "Haha! I wonder if it's still there...$"

CeramBaseCamp_NPC3_Text_0:
# 61 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We get many hikers and collectors pass\n"
	.string "through the base camp, because they\l"
	.string "want to climb Mt. Ceram.$"

CeramBaseCamp_Cyndaquil_Quest_Done_Text_0:
# 80 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Cyndaquil and I do everything\n"
	.string "together!$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_0:
# 89 "data//maps/CeramBaseCamp/scripts.pory"
	.string "C'mon Cyndaquil!$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_1:
# 92 "data//maps/CeramBaseCamp/scripts.pory"
	.string "CYNDAQUIL: quiiillll!!!\p"
	.string "Sigh, it's just not good enough...$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_2:
# 97 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We battled Arian and my Cyndaquil saw\n"
	.string "the move SUNNY DAY for the first time!\l"
	.string "Since then we've been trying to learn it\l"
	.string "but it's just not working...say, would\l"
	.string "you be able to help us out? Will you find\l"
	.string "the TM SUNNY DAY and teach my\l"
	.string "Cyndaquil?$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_3:
# 101 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Brilliant! Thank you. We'll be waiting\n"
	.string "here till you get the TM SUNNY DAY.$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_4:
# 105 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Oh well. See you.$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_0:
# 116 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Did you bring SUNNY DAY?\n"
	.string "Yes? Perfect! Let's get to it.$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_1:
# 120 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Using TM on Cyndaquil...\p"
	.string "...poof!\p"
	.string "Cyndaquil has learned SUNNY DAY!$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_2:
# 124 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Thank you! Isn't this great, Cyndaquil?\p"
	.string "CYNDAQUIL: quiii!!!\p"
	.string "Here, you must take this. No no, I\n"
	.string "insist.$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_3:
# 128 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Please bring the TM SUNNY DAY for\n"
	.string "Cyndaquil!$"

CeramBaseCamp_NPC5_Text_0:
# 141 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Mt. Ceram's geology is unique. Many rare\n"
	.string "rocks can be found up there.$"

CeramBaseCamp_NPC5_Text_1:
# 146 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Here, have one.$"

CeramBaseCamp_NPC5_Text_2:
# 149 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Don't worry. I've got tons of these!$"

CeramBaseCamp_Excadrill_Text_0:
# 163 "data//maps/CeramBaseCamp/scripts.pory"
	.string "An old mechanical drill.$"

CeramBaseCamp_Excadrill_Text_1:
# 169 "data//maps/CeramBaseCamp/scripts.pory"
	.string "An old mechanical drill...peek inside?$"

CeramBaseCamp_Excadrill_Text_2:
# 177 "data//maps/CeramBaseCamp/scripts.pory"
	.string "A wild Pokemon attacks!$"

CeramBaseCamp_Excadrill_Text_3:
# 190 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The Excadrill retreats back into its\n"
	.string "home. Better not disturb it again!$"
