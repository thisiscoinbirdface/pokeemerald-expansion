CeramBaseCamp_MapScripts::
# 2 "data//maps/CeramBaseCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeramBaseCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CeramBaseCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_VISITED_CERAM_BASE_CAMP
	return


CeramBaseCamp_RedBlockGym::
# 11 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 12 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 13 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_RedBlockGym_Text_0
# 14 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 15 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 8, CeramBaseCamp_RedBlockGym_Movement_0
# 16 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return


CeramBaseCamp_EventScript_ExitTrigger::
# 24 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeramBaseCamp_EventScript_ExitTrigger_2
# 26 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 27 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 7, CeramBaseCamp_EventScript_ExitTrigger_Movement_0
# 28 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 29 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 30 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_EventScript_ExitTrigger_Text_0
# 31 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 32 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_EventScript_ExitTrigger_Movement_1
# 33 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 34 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	return

CeramBaseCamp_EventScript_ExitTrigger_2:
	end


CeramBaseCamp_NPC_Exit::
# 38 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC_Exit_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC1::
# 45 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC1_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC2::
# 51 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC2_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC3::
# 57 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC3_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC4::
# 63 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 65 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_complete QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_Quest_Done
# 66 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_active QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_QuestInProgress
# 67 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_quest_inactive QUEST_CERAM_CYNDAQUIL, CeramBaseCamp_Cyndaquil_StartQuest
# 69 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Cyndaquil_Quest_Done::
# 75 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 76 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Quest_Done_Text_0
# 77 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0
# 78 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 79 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Cyndaquil_StartQuest::
# 85 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_0
# 86 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 87 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 9, CeramBaseCamp_Cyndaquil_StartQuest_Movement_0
# 88 "data//maps/CeramBaseCamp/scripts.pory"
	waitmoncry
# 89 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_1
# 90 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 91 "data//maps/CeramBaseCamp/scripts.pory"
	delay 20
# 93 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 94 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_2, MSGBOX_YESNO
# 97 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_StartQuest_2
# 102 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_4
CeramBaseCamp_Cyndaquil_StartQuest_1:
# 104 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Cyndaquil_StartQuest_2:
# 98 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_StartQuest_Text_3
# 99 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 100 "data//maps/CeramBaseCamp/scripts.pory"
	startquest QUEST_CERAM_CYNDAQUIL
	goto CeramBaseCamp_Cyndaquil_StartQuest_1


CeramBaseCamp_Cyndaquil_QuestInProgress::
# 111 "data//maps/CeramBaseCamp/scripts.pory"
	checkitem ITEM_EJECT_BUTTON
# 112 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_QuestInProgress_2
# 129 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_4
# 130 "data//maps/CeramBaseCamp/scripts.pory"
	release
CeramBaseCamp_Cyndaquil_QuestInProgress_1:
# 133 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0
# 134 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 135 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Cyndaquil_QuestInProgress_2:
# 113 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_0
# 114 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 115 "data//maps/CeramBaseCamp/scripts.pory"
	delay 20
# 117 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_1
# 118 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 119 "data//maps/CeramBaseCamp/scripts.pory"
	applymovement 4, CeramBaseCamp_Cyndaquil_QuestInProgress_Movement_0
# 120 "data//maps/CeramBaseCamp/scripts.pory"
	waitmovement 0
# 121 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_2
# 122 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 123 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_QuestInProgress_Text_3
# 124 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 125 "data//maps/CeramBaseCamp/scripts.pory"
	delay 8
# 127 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Cyndaquil_Reward
	goto CeramBaseCamp_Cyndaquil_QuestInProgress_1


CeramBaseCamp_Cyndaquil_Reward::
# 151 "data//maps/CeramBaseCamp/scripts.pory"
	message CeramBaseCamp_Cyndaquil_Reward_Text_0
# 152 "data//maps/CeramBaseCamp/scripts.pory"
	waitmessage
# 153 "data//maps/CeramBaseCamp/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, CeramBaseCamp_Cyndaquil_Reward_Text_1, CeramBaseCamp_Cyndaquil_Reward_Text_2
# 154 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCamp_Cyndaquil_Reward_2
CeramBaseCamp_Cyndaquil_Reward_1:
# 155 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_Reward_5
CeramBaseCamp_Cyndaquil_Reward_4:
# 156 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Cyndaquil_Reward_Give
	return

CeramBaseCamp_Cyndaquil_Reward_2:
# 154 "data//maps/CeramBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_EJECT_BUTTON
	goto CeramBaseCamp_Cyndaquil_Reward_1

CeramBaseCamp_Cyndaquil_Reward_5:
# 155 "data//maps/CeramBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_PUNCHING_GLOVE
	goto CeramBaseCamp_Cyndaquil_Reward_4


CeramBaseCamp_Cyndaquil_Reward_Give::
# 160 "data//maps/CeramBaseCamp/scripts.pory"
	showitemdescription
# 161 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Reward_Give_Text_0, MSGBOX_YESNO
# 162 "data//maps/CeramBaseCamp/scripts.pory"
	hideitemdescription
# 163 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Cyndaquil_Reward_Give_1
# 164 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Cyndaquil_Reward
	return

CeramBaseCamp_Cyndaquil_Reward_Give_1:
# 163 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem VAR_0x8006
# 163 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Cyndaquil_Reward_End
	return


CeramBaseCamp_Cyndaquil_Reward_End::
# 168 "data//maps/CeramBaseCamp/scripts.pory"
	completequest QUEST_CERAM_CYNDAQUIL
# 169 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Reward_End_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_NPC5::
# 187 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 188 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 189 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_NPCITEM, CeramBaseCamp_NPC5_2
# 194 "data//maps/CeramBaseCamp/scripts.pory"
	lockall
# 195 "data//maps/CeramBaseCamp/scripts.pory"
	faceplayer
# 196 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_1
# 197 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Dude_Reward
	end

CeramBaseCamp_NPC5_2:
# 190 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_0
# 191 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Dude_Reward::
# 203 "data//maps/CeramBaseCamp/scripts.pory"
	message CeramBaseCamp_Dude_Reward_Text_0
# 204 "data//maps/CeramBaseCamp/scripts.pory"
	waitmessage
# 205 "data//maps/CeramBaseCamp/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, CeramBaseCamp_Dude_Reward_Text_1, CeramBaseCamp_Dude_Reward_Text_2
# 206 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCamp_Dude_Reward_2
CeramBaseCamp_Dude_Reward_1:
# 207 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Dude_Reward_5
CeramBaseCamp_Dude_Reward_4:
# 208 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Dude_Reward_Give
	return

CeramBaseCamp_Dude_Reward_2:
# 206 "data//maps/CeramBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_KINGS_ROCK
	goto CeramBaseCamp_Dude_Reward_1

CeramBaseCamp_Dude_Reward_5:
# 207 "data//maps/CeramBaseCamp/scripts.pory"
	setvar VAR_0x8006, ITEM_QUICK_CLAW
	goto CeramBaseCamp_Dude_Reward_4


CeramBaseCamp_Dude_Reward_Give::
# 212 "data//maps/CeramBaseCamp/scripts.pory"
	showitemdescription
# 213 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Cyndaquil_Reward_Give_Text_0, MSGBOX_YESNO
# 214 "data//maps/CeramBaseCamp/scripts.pory"
	hideitemdescription
# 215 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Dude_Reward_Give_1
# 216 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Dude_Reward
	return

CeramBaseCamp_Dude_Reward_Give_1:
# 215 "data//maps/CeramBaseCamp/scripts.pory"
	giveitem VAR_0x8006
# 215 "data//maps/CeramBaseCamp/scripts.pory"
	goto CeramBaseCamp_Dude_Reward_End
	return


CeramBaseCamp_Dude_Reward_End::
# 220 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_NPCITEM
# 221 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_NPC5_Text_0
# 222 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end


CeramBaseCamp_Excadrill::
# 231 "data//maps/CeramBaseCamp/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EXCADRILL, CeramBaseCamp_Excadrill_2
# 239 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_1, MSGBOX_YESNO
# 240 "data//maps/CeramBaseCamp/scripts.pory"
	release
# 241 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Excadrill_5
CeramBaseCamp_Excadrill_1:
# 266 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Excadrill_2:
# 233 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_0
# 234 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_Excadrill_5:
# 244 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_DRILBUR, CRY_MODE_ENCOUNTER
# 245 "data//maps/CeramBaseCamp/scripts.pory"
	delay 40
# 246 "data//maps/CeramBaseCamp/scripts.pory"
	waitmoncry
# 247 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_2
# 248 "data//maps/CeramBaseCamp/scripts.pory"
	setwildbattle SPECIES_DRILBUR, 15
# 249 "data//maps/CeramBaseCamp/scripts.pory"
	dowildbattle
# 252 "data//maps/CeramBaseCamp/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 253 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CeramBaseCamp_Excadrill_8
CeramBaseCamp_Excadrill_7:
# 256 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq CeramBaseCamp_Excadrill_11
CeramBaseCamp_Excadrill_10:
# 259 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CeramBaseCamp_Excadrill_13
	goto CeramBaseCamp_Excadrill_1

CeramBaseCamp_Excadrill_8:
# 254 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto CeramBaseCamp_Excadrill_7

CeramBaseCamp_Excadrill_11:
# 257 "data//maps/CeramBaseCamp/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EXCADRILL
	goto CeramBaseCamp_Excadrill_10

CeramBaseCamp_Excadrill_13:
# 260 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Excadrill_Text_3
	goto CeramBaseCamp_Excadrill_1


CeramBaseCamp_TalonFlame::
# 285 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_TALONFLAME, CRY_MODE_NORMAL
# 286 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_TalonFlame_Text_0, MSGBOX_YESNO
# 287 "data//maps/CeramBaseCamp/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_TalonFlame_2
CeramBaseCamp_TalonFlame_1:
# 290 "data//maps/CeramBaseCamp/scripts.pory"
	releaseall
	end

CeramBaseCamp_TalonFlame_2:
# 288 "data//maps/CeramBaseCamp/scripts.pory"
	warp MAP_MT_CERAM, 11, 20
	goto CeramBaseCamp_TalonFlame_1


CeramBaseCamp_BergmiteTrainer::
# 297 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_BergmiteTrainer_Text_0, MSGBOX_NPC
# 298 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox_delay CeramBaseCamp_BergmiteTrainer_Text_1, CeramBaseCamp_BergmiteTrainer_Text_2
	end


CeramBaseCamp_Bergmite::
# 302 "data//maps/CeramBaseCamp/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 303 "data//maps/CeramBaseCamp/scripts.pory"
	msgbox CeramBaseCamp_Bergmite_Text_0, MSGBOX_NPC
	end


# 15 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_RedBlockGym_Movement_0:
# 15 "data//maps/CeramBaseCamp/scripts.pory"
	face_down
	step_end

# 27 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_EventScript_ExitTrigger_Movement_0:
# 27 "data//maps/CeramBaseCamp/scripts.pory"
	face_left
# 27 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

# 32 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_EventScript_ExitTrigger_Movement_1:
# 32 "data//maps/CeramBaseCamp/scripts.pory"
	walk_down
	step_end

# 77 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_Quest_Done_Movement_0:
# 77 "data//maps/CeramBaseCamp/scripts.pory"
	face_up
	step_end

# 87 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_StartQuest_Movement_0:
# 87 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
# 87 "data//maps/CeramBaseCamp/scripts.pory"
	jump_in_place_down
	step_end

# 119 "data//maps/CeramBaseCamp/scripts.pory"
CeramBaseCamp_Cyndaquil_QuestInProgress_Movement_0:
# 119 "data//maps/CeramBaseCamp/scripts.pory"
	emote_exclamation_mark
	step_end

CeramBaseCamp_RedBlockGym_Text_0:
# 13 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The Leader's gone to the Supply Depot\n"
	.string "to sort out some commotion there.$"

CeramBaseCamp_EventScript_ExitTrigger_Text_0:
# 30 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Hey kid! The rules are you can't climb\n"
	.string "unless you have the Cinder Badge. If\l"
	.string "you can't beat Ariana, you won't be able\l"
	.string "to handle the heat of the mountain!$"

CeramBaseCamp_NPC_Exit_Text_0:
# 38 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Mt. Ceram is dangerous because once\n"
	.string "you enter you can't come back. For\l"
	.string "safety reasons, we don't allow trainers\l"
	.string "without at least two gym badges to\l"
	.string "pass.$"

CeramBaseCamp_NPC1_Text_0:
# 45 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Since the base camp is so small, the\n"
	.string "Pokémon League clubbed the gym and\l"
	.string "camp management office into one.$"

CeramBaseCamp_NPC2_Text_0:
# 51 "data//maps/CeramBaseCamp/scripts.pory"
	.string "This camp was built by Rivetshore\n"
	.string "Construction! Old equipment from back\l"
	.string "then is left here. I remember a Drilbur\l"
	.string "made its home inside one of these\l"
	.string "machines and refused to leave! Haha! I\l"
	.string "wonder if it's still there...$"

CeramBaseCamp_NPC3_Text_0:
# 57 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We get many hikers and collectors pass\n"
	.string "through the base camp, because they\l"
	.string "want to climb Mt. Ceram.$"

CeramBaseCamp_Cyndaquil_Quest_Done_Text_0:
# 76 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Cyndaquil and I do everything\n"
	.string "together!$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_0:
# 85 "data//maps/CeramBaseCamp/scripts.pory"
	.string "C'mon Cyndaquil!$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_1:
# 89 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Sigh, it's just not good enough...$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_2:
# 94 "data//maps/CeramBaseCamp/scripts.pory"
	.string "We battled Ariana and Cyndaquil saw the\n"
	.string "move Sunny Day for the first time!\l"
	.string "Since then we've been trying to learn it\l"
	.string "but it's just not working...say, would\l"
	.string "you be able to help us out? Will you find\l"
	.string "the TM Sunny Day and teach my\l"
	.string "Cyndaquil?$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_3:
# 98 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Brilliant! Thank you. We'll be waiting\n"
	.string "here till you get the TM Sunny Day.$"

CeramBaseCamp_Cyndaquil_StartQuest_Text_4:
# 102 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Oh well. We'll keep training.\n"
	.string "Sigh...it's just not working...$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_0:
# 113 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Did you bring Sunny Day?\n"
	.string "Yes? Perfect! Let's get to it.$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_1:
# 117 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Using TM on Cyndaquil...\p"
	.string "...poof!\p"
	.string "Cyndaquil has learned SUNNY DAY!$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_2:
# 121 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Thank you! Isn't this great, Cyndaquil?$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_3:
# 123 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Quiii!!!!!$"

CeramBaseCamp_Cyndaquil_QuestInProgress_Text_4:
# 129 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Please bring the TM Sunny Day for\n"
	.string "Cyndaquil!$"

CeramBaseCamp_Cyndaquil_Reward_Text_0:
# 151 "data//maps/CeramBaseCamp/scripts.pory"
	.string "In exchange, do you want one of these?$"

CeramBaseCamp_Cyndaquil_Reward_Text_1:
# 153 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Eject Button$"

CeramBaseCamp_Cyndaquil_Reward_Text_2:
# 153 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Punching Glove$"

CeramBaseCamp_Cyndaquil_Reward_Give_Text_0:
# 161 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Are you sure?$"

CeramBaseCamp_Cyndaquil_Reward_End_Text_0:
# 169 "data//maps/CeramBaseCamp/scripts.pory"
	.string "See you trainer!$"

CeramBaseCamp_NPC5_Text_0:
# 190 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Many trekkers climb the mountain. You\n"
	.string "can find dropped stuff everywhere!\p"
	.string "...is it stealing?$"

CeramBaseCamp_NPC5_Text_1:
# 196 "data//maps/CeramBaseCamp/scripts.pory"
	.string "I found these weird trinkets when I\n"
	.string "went up Mt. Ceram.$"

CeramBaseCamp_Dude_Reward_Text_0:
# 203 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Do you want one?$"

CeramBaseCamp_Dude_Reward_Text_1:
# 205 "data//maps/CeramBaseCamp/scripts.pory"
	.string "King's Rock$"

CeramBaseCamp_Dude_Reward_Text_2:
# 205 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Quick Claw$"

CeramBaseCamp_Excadrill_Text_0:
# 233 "data//maps/CeramBaseCamp/scripts.pory"
	.string "An old mechanical drill.$"

CeramBaseCamp_Excadrill_Text_1:
# 239 "data//maps/CeramBaseCamp/scripts.pory"
	.string "An old mechanical drill...peek inside?$"

CeramBaseCamp_Excadrill_Text_2:
# 247 "data//maps/CeramBaseCamp/scripts.pory"
	.string "A wild Pokémon attacks!$"

CeramBaseCamp_Excadrill_Text_3:
# 260 "data//maps/CeramBaseCamp/scripts.pory"
	.string "The Drilbur retreats back into its home.\n"
	.string "Better not disturb it again!$"

CeramBaseCamp_TalonFlame_Text_0:
# 286 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Talonflame's about to fly to the peak!\n"
	.string "Hitch a ride?$"

CeramBaseCamp_BergmiteTrainer_Text_0:
# 297 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Aren't you the trainer with that old\n"
	.string "archaeologist?\p"
	.string "Yeah, you are!\p"
	.string "...\p"
	.string "I feel bad for what I did...\n"
	.string "but it was an honest mistake!\p"
	.string "We just...we trained too hard!\n"
	.string "We want to be the strongest.$"

CeramBaseCamp_BergmiteTrainer_Text_1:
# 298 "data//maps/CeramBaseCamp/scripts.pory"
	.string "Berger$"

CeramBaseCamp_BergmiteTrainer_Text_2:
# 298 "data//maps/CeramBaseCamp/scripts.pory"
	.string "My name's Berger. And Bergmite is my\n"
	.string "best friend! See you around!$"

CeramBaseCamp_Bergmite_Text_0:
# 303 "data//maps/CeramBaseCamp/scripts.pory"
	.string "keee!!!\p"
	.string "Bergmite says hello!\n"
	.string "Nice to meet you, Bergmite!$"
