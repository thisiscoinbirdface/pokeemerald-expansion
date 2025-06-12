# 1 "data//maps/CeramBaseCamp/scripts.pory"

# 2 "data//maps/CeramBaseCamp/scripts.pory"
    .set LOCALID_CYNDA, 9
# 3 "data//maps/CeramBaseCamp/scripts.pory"
    .set LOCALID_DUDE, 4

CeramBaseCamp_MapScripts::
# 7 "data//maps/CeramBaseCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeramBaseCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CeramBaseCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_VISITED_CERAM_BASE_CAMP
	return


CeramBaseCamp_RedBlockGym::
# 16 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 17 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 18 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_RedBlockGym_Text_0
# 19 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 20 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 8, CeramBaseCamp_RedBlockGym_Movement_0
# 21 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_EventScript_ExitTrigger::
# 29 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeramBaseCamp_EventScript_ExitTrigger_2
# 31 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 32 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 7, CeramBaseCamp_EventScript_ExitTrigger_Movement_0
# 33 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 34 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 35 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_EventScript_ExitTrigger_Text_0
# 36 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 37 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_EventScript_ExitTrigger_Movement_1
# 38 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 39 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return

CeramBaseCamp_EventScript_ExitTrigger_2:
	end


CeramBaseCamp_NPC_Exit::
# 43 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC_Exit_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC1::
# 50 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC1_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC2::
# 56 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC2_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC3::
# 62 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC3_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC4::
# 68 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 70 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_complete QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_Quest_Done
# 71 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_active QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_QuestInProgress
# 72 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_inactive QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_StartQuest
# 74 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Cyndaquil_Quest_Done::
# 80 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 81 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Quest_Done_Text_0
# 82 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement LOCALID_DUDE, CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0
# 83 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 84 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Cyndaquil_StartQuest::
# 90 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_0
# 91 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 92 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement LOCALID_CYNDA, CeramBaseCamp_Cyndaquil_StartQuest_Movement_0
# 93 "data//maps/CeramBaseCamp/scripts.pory"
	waitmoncry
# 94 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_1
# 95 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 96 "data//maps/CeramBaseCamp/scripts.pory"
	delay 20
# 98 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 99 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_2, MSGBOX_YESNO
# 102 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_StartQuest_2
# 107 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_4
CeramBaseCamp_Cyndaquil_StartQuest_1:
# 109 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Cyndaquil_StartQuest_2:
# 103 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_3
# 104 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 105 "data//maps/CeramBaseCamp/scripts.pory"
	startquest QUEST_CERAM_CYNDAQUIL
	goto CeramBaseCamp_Cyndaquil_StartQuest_1


CeramBaseCamp_Cyndaquil_QuestInProgress::
# 116 "data//maps/CeramBaseCamp/scripts.pory"
	checkitem ITEM_EJECT_BUTTON
# 117 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_QuestInProgress_2
# 145 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_7
# 146 "data//maps/CeramBaseCamp/scripts.pory"
	release
CeramBaseCamp_Cyndaquil_QuestInProgress_1:
# 149 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0
# 150 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 151 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Cyndaquil_QuestInProgress_2:
# 118 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_0
# 119 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 120 "data//maps/CeramBaseCamp/scripts.pory"
	delay 20
# 122 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement LOCALID_DUDE, CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0
# 124 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_1
# 125 "data//maps/CeramBaseCamp/scripts.pory"
	playse SE_FAILURE
# 126 "data//maps/CeramBaseCamp/scripts.pory"
	waitse
# 127 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_2
# 128 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 129 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement LOCALID_DUDE, CeramBaseCamp_Cyndaquil_QuestInProgress_Movement_0
# 130 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 131 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_3
# 132 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 133 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_4
# 134 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 135 "data//maps/CeramBaseCamp/scripts.pory"
	delay 8
# 136 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_5
# 137 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 138 "data//maps/CeramBaseCamp/scripts.pory"
	delay 8
# 139 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 140 "data//maps/CeramBaseCamp/scripts.pory"
	delay 8
# 141 "data//maps/CeramBaseCamp/scripts.pory"
	message CeramBaseCamp_Cyndaquil_QuestInProgress_Text_6
# 143 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Cyndaquil_Reward
	goto CeramBaseCamp_Cyndaquil_QuestInProgress_1


CeramBaseCamp_Cyndaquil_Reward::
# 167 "data//maps/CeramBaseCamp/scripts.pory"
	message CeramBaseCamp_Cyndaquil_Reward_Text_0
# 168 "data//maps/CeramBaseCamp/scripts.pory"
	waitmessage
# 169 "data//maps/CeramBaseCamp/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, CeramBaseCamp_Cyndaquil_Reward_Text_1, CeramBaseCamp_Cyndaquil_Reward_Text_2
# 170 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCamp_Cyndaquil_Reward_2
CeramBaseCamp_Cyndaquil_Reward_1:
# 171 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_Reward_5
CeramBaseCamp_Cyndaquil_Reward_4:
# 172 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Cyndaquil_Reward_Give
	return

CeramBaseCamp_Cyndaquil_Reward_2:
# 170 "data//maps/CeramBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_STICKY_BARB
	goto CeramBaseCamp_Cyndaquil_Reward_1

CeramBaseCamp_Cyndaquil_Reward_5:
# 171 "data//maps/CeramBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_IRON_BALL
	goto CeramBaseCamp_Cyndaquil_Reward_4


CeramBaseCamp_Cyndaquil_Reward_Give::
# 176 "data//maps/CeramBaseCamp/scripts.pory"
	showitemdescription
# 177 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Reward_Give_Text_0, MSGBOX_YESNO
# 178 "data//maps/CeramBaseCamp/scripts.pory"
	hideitemdescription
# 179 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_Reward_Give_1
# 180 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Cyndaquil_Reward
	return

CeramBaseCamp_Cyndaquil_Reward_Give_1:
# 179 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem VAR_0x8006
# 179 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Cyndaquil_Reward_End
	return


CeramBaseCamp_Cyndaquil_Reward_End::
# 184 "data//maps/CeramBaseCamp/scripts.pory"
	completequest QUEST_CERAM_CYNDAQUIL
# 185 "data//maps/CeramBaseCamp/scripts.pory"
	delay 16
# 186 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Reward_End_Text_0
# 187 "data//maps/CeramBaseCamp/scripts.pory"
	delay 8
# 188 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement LOCALID_DUDE, CeramBaseCamp_Cyndaquil_QuestInProgress_Movement_0
# 189 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 190 "data//maps/CeramBaseCamp/scripts.pory"
	delay 20
# 191 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Reward_End_Text_1, MSGBOX_NPC
# 192 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 193 "data//maps/CeramBaseCamp/scripts.pory"
	delay 16
# 194 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement LOCALID_DUDE, CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0
# 195 "data//maps/CeramBaseCamp/scripts.pory"
	delay 16
# 196 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Reward_End_Text_2
# 197 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_NPC5::
# 215 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 216 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 217 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_NPCITEM, CeramBaseCamp_NPC5_2
# 222 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 223 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 224 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_1
# 225 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Dude_Reward
	end

CeramBaseCamp_NPC5_2:
# 218 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_0
# 219 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Dude_Reward::
# 231 "data//maps/CeramBaseCamp/scripts.pory"
	message CeramBaseCamp_Dude_Reward_Text_0
# 232 "data//maps/CeramBaseCamp/scripts.pory"
	waitmessage
# 233 "data//maps/CeramBaseCamp/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, CeramBaseCamp_Dude_Reward_Text_1, CeramBaseCamp_Dude_Reward_Text_2
# 234 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCamp_Dude_Reward_2
CeramBaseCamp_Dude_Reward_1:
# 235 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Dude_Reward_5
CeramBaseCamp_Dude_Reward_4:
# 236 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Dude_Reward_Give
	return

CeramBaseCamp_Dude_Reward_2:
# 234 "data//maps/CeramBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_KINGS_ROCK
	goto CeramBaseCamp_Dude_Reward_1

CeramBaseCamp_Dude_Reward_5:
# 235 "data//maps/CeramBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_QUICK_CLAW
	goto CeramBaseCamp_Dude_Reward_4


CeramBaseCamp_Dude_Reward_Give::
# 240 "data//maps/CeramBaseCamp/scripts.pory"
	showitemdescription
# 241 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Reward_Give_Text_0, MSGBOX_YESNO
# 242 "data//maps/CeramBaseCamp/scripts.pory"
	hideitemdescription
# 243 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Dude_Reward_Give_1
# 244 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Dude_Reward
	return

CeramBaseCamp_Dude_Reward_Give_1:
# 243 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem VAR_0x8006
# 243 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Dude_Reward_End
	return


CeramBaseCamp_Dude_Reward_End::
# 248 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_NPCITEM
# 249 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_0
# 250 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Excadrill::
# 259 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EXCADRILL, CeramBaseCamp_Excadrill_2
# 267 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_1, MSGBOX_YESNO
# 268 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 269 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Excadrill_5
CeramBaseCamp_Excadrill_1:
# 294 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Excadrill_2:
# 261 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_0
# 262 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Excadrill_5:
# 272 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_DRILBUR, CRY_MODE_ENCOUNTER
# 273 "data//maps/CeramBaseCamp/scripts.pory"
	delay 40
# 274 "data//maps/CeramBaseCamp/scripts.pory"
	waitmoncry
# 275 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_2
# 276 "data//maps/CeramBaseCamp/scripts.pory"
	setwildbattle SPECIES_DRILBUR, 15
# 277 "data//maps/CeramBaseCamp/scripts.pory"
	dowildbattle
# 280 "data//maps/CeramBaseCamp/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 281 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CeramBaseCamp_Excadrill_8
CeramBaseCamp_Excadrill_7:
# 284 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq CeramBaseCamp_Excadrill_11
CeramBaseCamp_Excadrill_10:
# 287 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CeramBaseCamp_Excadrill_13
	goto CeramBaseCamp_Excadrill_1

CeramBaseCamp_Excadrill_8:
# 282 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto CeramBaseCamp_Excadrill_7

CeramBaseCamp_Excadrill_11:
# 285 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto CeramBaseCamp_Excadrill_10

CeramBaseCamp_Excadrill_13:
# 288 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_3
	goto CeramBaseCamp_Excadrill_1


CeramBaseCamp_TalonFlame::
# 313 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_TALONFLAME, CRY_MODE_NORMAL
# 314 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_TalonFlame_Text_0, MSGBOX_YESNO
# 315 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_TalonFlame_2
CeramBaseCamp_TalonFlame_1:
# 318 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_TalonFlame_2:
# 316 "data//maps/CeramBaseCamp/scripts.pory"
	warp MAP_MT_CERAM, 11, 20
	goto CeramBaseCamp_TalonFlame_1


CeramBaseCamp_BergmiteTrainer::
# 325 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_BergmiteTrainer_Text_0, MSGBOX_NPC
# 326 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox_delay CeramBaseCamp_BergmiteTrainer_Text_1, CeramBaseCamp_BergmiteTrainer_Text_2
	end


CeramBaseCamp_Bergmite::
# 330 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 331 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Bergmite_Text_0, MSGBOX_NPC
	end


# 20 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_RedBlockGym_Movement_0:
# 20 "data//maps/CeramBaseCamp/scripts.pory"
	face_down
	step_end

# 32 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_EventScript_ExitTrigger_Movement_0:
# 32 "data//maps/CeramBaseCamp/scripts.pory"
	face_left
# 32 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

# 37 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_EventScript_ExitTrigger_Movement_1:
# 37 "data//maps/CeramBaseCamp/scripts.pory"
	walk_down
	step_end

# 82 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0:
# 82 "data//maps/CeramBaseCamp/scripts.pory"
	face_up
	step_end

# 92 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_StartQuest_Movement_0:
# 92 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
# 92 "data//maps/CeramBaseCamp/scripts.pory"
	jump_in_place_down
	step_end

# 129 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_QuestInProgress_Movement_0:
# 129 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

CeramBaseCamp_RedBlockGym_Text_0:
# 18 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The Leader's gone to the Supply Depot\n"
	.string "to sort out some commotion there.$"

CeramBaseCamp_EventScript_ExitTrigger_Text_0:
# 35 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Hey kid! The rules are you can't climb\n"
	.string "unless you have the Cinder Badge. If\l"
	.string "you can't beat Ariana, you won't be able\l"
	.string "to handle the heat of the mountain!$"

CeramBaseCamp_NPC_Exit_Text_0:
# 43 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Mt. Ceram is dangerous because once\n"
	.string "you enter you can't come back. For\l"
	.string "safety reasons, we don't allow trainers\l"
	.string "without at least two gym badges to\l"
	.string "pass.$"

CeramBaseCamp_NPC1_Text_0:
# 50 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Since the base camp is so small, the\n"
	.string "Pokémon League clubbed the gym and\l"
	.string "camp management office into one.$"

CeramBaseCamp_NPC2_Text_0:
# 56 "data//maps/CeramBaseCamp/scripts.pory"
	.string "This camp was built by Rivetshore\n"
	.string "Construction! Old equipment from back\l"
	.string "then is left here. I remember a Drilbur\l"
	.string "made its home inside one of these\l"
	.string "machines and refused to leave! Haha! I\l"
	.string "wonder if it's still there...$"

CeramBaseCamp_NPC3_Text_0:
# 62 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We get many hikers and collectors pass\n"
	.string "through the base camp, because they\l"
	.string "want to climb Mt. Ceram.$"

CeramBaseCamp_Cyndaquil_Quest_Done_Text_0:
# 81 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Cyndaquil and I do everything\n"
	.string "together!$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_0:
# 90 "data//maps/CeramBaseCamp/scripts.pory"
	.string "C'mon Cyndaquil!$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_1:
# 94 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Sigh, it's just not good enough...$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_2:
# 99 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We battled Ariana and Cyndaquil's FIRE\n"
	.string "moves did nothing! Since then we've\l"
	.string "been trying to learn some other moves\l"
	.string "but it's just not working...say, would\l"
	.string "you be able to help us out? Will you find\l"
	.string "the TM Acid Spray and teach my\l"
	.string "Cyndaquil?$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_3:
# 103 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Brilliant! Thank you. We'll be waiting\n"
	.string "here till you get the TM Acid Spray.$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_4:
# 107 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Oh well. We'll keep training.\n"
	.string "Sigh...it's just not working...$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_0:
# 118 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Did you bring Acid Spray?\p"
	.string "Yes?\p"
	.string "Awesome! Let's get to it.$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_1:
# 124 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Using TM on Cyndaquil...\p"
	.string "...$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_2:
# 127 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Cyndaquil can't learn Acid Spray!$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_3:
# 131 "data//maps/CeramBaseCamp/scripts.pory"
	.string "What?! Cyndaquil can't learn it!?\n"
	.string "But Cyndaquil is the best!$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_4:
# 133 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Quiii!!!!!$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_5:
# 136 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Oh no! I'm sorry Cyndaquil...\n"
	.string "I wasted so much time!$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_6:
# 141 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Well...you still helped us out,\n"
	.string "so we owe you something.$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_7:
# 145 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Please bring the TM Acid Spray for\n"
	.string "Cyndaquil!$"

CeramBaseCamp_Cyndaquil_Reward_Text_0:
# 167 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We won't use these. Want one?$"

CeramBaseCamp_Cyndaquil_Reward_Text_1:
# 169 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Sticky Barb$"

CeramBaseCamp_Cyndaquil_Reward_Text_2:
# 169 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Iron Ball$"

CeramBaseCamp_Cyndaquil_Reward_Give_Text_0:
# 177 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Are you sure?$"

CeramBaseCamp_Cyndaquil_Reward_End_Text_0:
# 186 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Sigh...what'll we do now?\p"
	.string "...$"

CeramBaseCamp_Cyndaquil_Reward_End_Text_1:
# 191 "data//maps/CeramBaseCamp/scripts.pory"
	.string "You're saying Acid Spray is a weak move\n"
	.string "anyway and WATER or GROUND type moves\l"
	.string "are better against Ariana?\n"
	.string "So we were on the wrong track from the\l"
	.string "beginning!\p"
	.string "Argh!\p"
	.string "I guess there's more to battling than I\n"
	.string "thought...I need to be a better trainer!$"

CeramBaseCamp_Cyndaquil_Reward_End_Text_2:
# 196 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Don't worry Cyndaquil - I'm going to\n"
	.string "learn more about battling. I'm going to\l"
	.string "become the best trainer and you're\l"
	.string "going to become the best Pokémon!$"

CeramBaseCamp_NPC5_Text_0:
# 218 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Many trekkers climb the mountain. You\n"
	.string "can find dropped stuff everywhere!\p"
	.string "...is it stealing?$"

CeramBaseCamp_NPC5_Text_1:
# 224 "data//maps/CeramBaseCamp/scripts.pory"
	.string "I found these weird trinkets when I\n"
	.string "went up Mt. Ceram.$"

CeramBaseCamp_Dude_Reward_Text_0:
# 231 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Do you want one?$"

CeramBaseCamp_Dude_Reward_Text_1:
# 233 "data//maps/CeramBaseCamp/scripts.pory"
	.string "King's Rock$"

CeramBaseCamp_Dude_Reward_Text_2:
# 233 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Quick Claw$"

CeramBaseCamp_Excadrill_Text_0:
# 261 "data//maps/CeramBaseCamp/scripts.pory"
	.string "An old mechanical drill.$"

CeramBaseCamp_Excadrill_Text_1:
# 267 "data//maps/CeramBaseCamp/scripts.pory"
	.string "An old mechanical drill...peek inside?$"

CeramBaseCamp_Excadrill_Text_2:
# 275 "data//maps/CeramBaseCamp/scripts.pory"
	.string "A wild Pokémon attacks!$"

CeramBaseCamp_Excadrill_Text_3:
# 288 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The Drilbur retreats back into its home.\n"
	.string "Better not disturb it again!$"

CeramBaseCamp_TalonFlame_Text_0:
# 314 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Talonflame's about to fly to the peak!\n"
	.string "Hitch a ride?$"

CeramBaseCamp_BergmiteTrainer_Text_0:
# 325 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Aren't you the trainer with that old\n"
	.string "archaeologist?\p"
	.string "Yeah, you are!\p"
	.string "...\p"
	.string "I feel bad for what I did...\n"
	.string "but it was an honest mistake!\p"
	.string "We just...we trained too hard!\n"
	.string "We want to be the strongest.$"

CeramBaseCamp_BergmiteTrainer_Text_1:
# 326 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Berger$"

CeramBaseCamp_BergmiteTrainer_Text_2:
# 326 "data//maps/CeramBaseCamp/scripts.pory"
	.string "My name's Berger. And Bergmite is my\n"
	.string "best friend! See you around!$"

CeramBaseCamp_Bergmite_Text_0:
# 331 "data//maps/CeramBaseCamp/scripts.pory"
	.string "keee!!!\p"
	.string "Bergmite says hello!\n"
	.string "Nice to meet you, Bergmite!$"
