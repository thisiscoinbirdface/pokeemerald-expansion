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
	msgbox CeramBaseCamp_NPC_Exit_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC1::
# 41 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC1_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC2::
# 47 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC2_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC3::
# 53 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC3_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC4::
# 59 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 61 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_complete QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_Quest_Done
# 62 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_active QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_QuestInProgress
# 63 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_inactive QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_StartQuest
# 65 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Cyndaquil_Quest_Done::
# 71 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 72 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Quest_Done_Text_0
# 73 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0
# 74 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 75 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Cyndaquil_StartQuest::
# 81 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_0
# 82 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 83 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 9, CeramBaseCamp_Cyndaquil_StartQuest_Movement_0
# 84 "data//maps/CeramBaseCamp/scripts.pory"
	waitmoncry
# 85 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_1
# 86 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 87 "data//maps/CeramBaseCamp/scripts.pory"
	delay 20
# 89 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 90 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_2, MSGBOX_YESNO
# 93 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_StartQuest_2
# 98 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_4
CeramBaseCamp_Cyndaquil_StartQuest_1:
# 100 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Cyndaquil_StartQuest_2:
# 94 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_3
# 95 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 96 "data//maps/CeramBaseCamp/scripts.pory"
	startquest QUEST_CERAM_CYNDAQUIL
	goto CeramBaseCamp_Cyndaquil_StartQuest_1


CeramBaseCamp_Cyndaquil_QuestInProgress::
# 107 "data//maps/CeramBaseCamp/scripts.pory"
	checkitem ITEM_TM_SUNNY_DAY
# 108 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_QuestInProgress_2
# 126 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_5
# 127 "data//maps/CeramBaseCamp/scripts.pory"
	release
CeramBaseCamp_Cyndaquil_QuestInProgress_1:
# 130 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0
# 131 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 132 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Cyndaquil_QuestInProgress_2:
# 109 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_0
# 110 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 111 "data//maps/CeramBaseCamp/scripts.pory"
	delay 20
# 113 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_1
# 114 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 115 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_Cyndaquil_QuestInProgress_Movement_0
# 116 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 117 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_2
# 118 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 119 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_3
# 120 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 121 "data//maps/CeramBaseCamp/scripts.pory"
	delay 8
# 122 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_4
# 123 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem ITEM_POTION
# 124 "data//maps/CeramBaseCamp/scripts.pory"
	completequest QUEST_CERAM_CYNDAQUIL
	goto CeramBaseCamp_Cyndaquil_QuestInProgress_1


CeramBaseCamp_NPC5::
# 138 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_NPCITEM, CeramBaseCamp_NPC5_2
# 141 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 142 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 143 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_1
# 144 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 145 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_NPCITEM
# 146 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_2, MSGBOX_NPC
# 147 "data//maps/CeramBaseCamp/scripts.pory"
	release
CeramBaseCamp_NPC5_1:
	end

CeramBaseCamp_NPC5_2:
# 139 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_NPC5_1


CeramBaseCamp_Excadrill::
# 159 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EXCADRILL, CeramBaseCamp_Excadrill_2
# 167 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_1, MSGBOX_YESNO
# 168 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 169 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Excadrill_5
CeramBaseCamp_Excadrill_1:
# 194 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Excadrill_2:
# 161 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_0
# 162 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Excadrill_5:
# 172 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_DRILBUR, CRY_MODE_ENCOUNTER
# 173 "data//maps/CeramBaseCamp/scripts.pory"
	delay 40
# 174 "data//maps/CeramBaseCamp/scripts.pory"
	waitmoncry
# 175 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_2
# 176 "data//maps/CeramBaseCamp/scripts.pory"
	setwildbattle SPECIES_DRILBUR, 15
# 177 "data//maps/CeramBaseCamp/scripts.pory"
	dowildbattle
# 180 "data//maps/CeramBaseCamp/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 181 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CeramBaseCamp_Excadrill_8
CeramBaseCamp_Excadrill_7:
# 184 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq CeramBaseCamp_Excadrill_11
CeramBaseCamp_Excadrill_10:
# 187 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CeramBaseCamp_Excadrill_13
	goto CeramBaseCamp_Excadrill_1

CeramBaseCamp_Excadrill_8:
# 182 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto CeramBaseCamp_Excadrill_7

CeramBaseCamp_Excadrill_11:
# 185 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto CeramBaseCamp_Excadrill_10

CeramBaseCamp_Excadrill_13:
# 188 "data//maps/CeramBaseCamp/scripts.pory"
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

# 73 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0:
# 73 "data//maps/CeramBaseCamp/scripts.pory"
	face_up
	step_end

# 83 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_StartQuest_Movement_0:
# 83 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
# 83 "data//maps/CeramBaseCamp/scripts.pory"
	jump_in_place_down
	step_end

# 115 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_QuestInProgress_Movement_0:
# 115 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

CeramBaseCamp_RedBlockGym_Text_0:
# 9 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The Leader's gone to the Supply Depot\n"
	.string "to sort out some commotion there.$"

CeramBaseCamp_EventScript_ExitTrigger_Text_0:
# 26 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Hey kid! The rules are you can't climb\n"
	.string "unless you have the FIRE BADGE. If you\l"
	.string "can't beat Ariana, you won't be able to\l"
	.string "handle the heat of the mountain!$"

CeramBaseCamp_NPC_Exit_Text_0:
# 34 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Mt. Ceram is dangerous because once\n"
	.string "you enter you can't come back. For\l"
	.string "safety reasons, we don't allow trainers\l"
	.string "without at least two gym badges to\l"
	.string "pass.$"

CeramBaseCamp_NPC1_Text_0:
# 41 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Since the base camp is so small, the\n"
	.string "Pokémon League clubbed the gym and\l"
	.string "camp management office into one.$"

CeramBaseCamp_NPC2_Text_0:
# 47 "data//maps/CeramBaseCamp/scripts.pory"
	.string "This camp was established to dig a\n"
	.string "tunnel through Mt. Ceram. Old equipment\l"
	.string "from back then is left here. I remember\l"
	.string "a DRILBUR made its home inside one of\l"
	.string "these machines and refused to leave!\l"
	.string "Haha! I wonder if it's still there...$"

CeramBaseCamp_NPC3_Text_0:
# 53 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We get many hikers and collectors pass\n"
	.string "through the base camp, because they\l"
	.string "want to climb Mt. Ceram.$"

CeramBaseCamp_Cyndaquil_Quest_Done_Text_0:
# 72 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Cyndaquil and I do everything\n"
	.string "together!$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_0:
# 81 "data//maps/CeramBaseCamp/scripts.pory"
	.string "C'mon Cyndaquil!$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_1:
# 85 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Sigh, it's just not good enough...$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_2:
# 90 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We battled Ariana and Cyndaquil saw the\n"
	.string "move Sunny Day for the first time!\l"
	.string "Since then we've been trying to learn it\l"
	.string "but it's just not working...say, would\l"
	.string "you be able to help us out? Will you find\l"
	.string "the TM SUNNY DAY and teach my\l"
	.string "Cyndaquil?$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_3:
# 94 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Brilliant! Thank you. We'll be waiting\n"
	.string "here till you get the TM Sunny Day.$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_4:
# 98 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Oh well. We'll keep training.\n"
	.string "Sigh...it's just not working...$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_0:
# 109 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Did you bring Sunny Day?\n"
	.string "Yes? Perfect! Let's get to it.$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_1:
# 113 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Using TM on Cyndaquil...\p"
	.string "...poof!\p"
	.string "Cyndaquil has learned SUNNY DAY!$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_2:
# 117 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Thank you! Isn't this great, Cyndaquil?$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_3:
# 119 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Quiii!!!!!$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_4:
# 122 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Here, you must take this. No no, I\n"
	.string "insist.$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_5:
# 126 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Please bring the TM SUNNY DAY for\n"
	.string "Cyndaquil!$"

CeramBaseCamp_NPC5_Text_0:
# 139 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Mt. Ceram's geology is unique. Many rare\n"
	.string "rocks can be found up there.$"

CeramBaseCamp_NPC5_Text_1:
# 143 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Mt. Ceram's geology is unique. Many rare\n"
	.string "rocks can be found up there. Here, have\l"
	.string "one.$"

CeramBaseCamp_NPC5_Text_2:
# 146 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Don't worry. I've got tons of these!$"

CeramBaseCamp_Excadrill_Text_0:
# 161 "data//maps/CeramBaseCamp/scripts.pory"
	.string "An old mechanical drill.$"

CeramBaseCamp_Excadrill_Text_1:
# 167 "data//maps/CeramBaseCamp/scripts.pory"
	.string "An old mechanical drill...peek inside?$"

CeramBaseCamp_Excadrill_Text_2:
# 175 "data//maps/CeramBaseCamp/scripts.pory"
	.string "A wild Pokémon attacks!$"

CeramBaseCamp_Excadrill_Text_3:
# 188 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The Drilbur retreats back into its home.\n"
	.string "Better not disturb it again!$"
