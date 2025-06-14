# 1 "data//maps/IvyRiver_ResearchFacility/scripts.pory"

# 2 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_MAIN, 4
# 3 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q1, 6
# 4 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q2, 7
# 5 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q3, 8
# 6 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_EV, 9
# 7 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_TAUROS_RANGER, 13

IvyRiver_ResearchFacility_MapScripts::
	.byte 0


IvyRiver_Ranger_FirstQuest::
# 26 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_2
# 75 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 7
	goto_if_eq IvyRiver_Ranger_FirstQuest_5
# 91 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_11, MSGBOX_NPC
# 93 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end

IvyRiver_Ranger_FirstQuest_2:
# 29 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 30 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	faceplayer
# 31 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_0
# 32 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 33 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 34 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_0
# 35 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 36 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 37 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_1
# 38 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 39 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	removeitem ITEM_RANGER_PACKAGE
# 40 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 41 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_2
# 42 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 43 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 44 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_1
# 45 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 46 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 47 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_3
# 48 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 49 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 50 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_4
# 51 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 52 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 55 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Text_5
# 56 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 57 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 59 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_6
# 60 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 61 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 62 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_1
# 63 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 64 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 65 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_7
# 66 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 67 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 70 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	end

IvyRiver_Ranger_FirstQuest_5:
# 76 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_8
# 77 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 80 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Text_9
# 81 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 82 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_10, MSGBOX_NPC
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	completesubquest QUEST_POKEMON_RANGER, SUB_QUEST_2
# 87 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 8
	end


IvyRiver_Ranger_FirstQuest_Reward::
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Reward_Text_0
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, IvyRiver_Ranger_FirstQuest_Reward_Text_1, IvyRiver_Ranger_FirstQuest_Reward_Text_2, IvyRiver_Ranger_FirstQuest_Reward_Text_3, IvyRiver_Ranger_FirstQuest_Reward_Text_4
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_2
IvyRiver_Ranger_FirstQuest_Reward_1:
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_5
IvyRiver_Ranger_FirstQuest_Reward_4:
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_8
IvyRiver_Ranger_FirstQuest_Reward_7:
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_10
	return

IvyRiver_Ranger_FirstQuest_Reward_2:
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_VENUSAURITE
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_1

IvyRiver_Ranger_FirstQuest_Reward_5:
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_BLASTOISINITE
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_4

IvyRiver_Ranger_FirstQuest_Reward_8:
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_CHARIZARDITE_X
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_7

IvyRiver_Ranger_FirstQuest_Reward_10:
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_CHARIZARDITE_Y
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	return


IvyRiver_Ranger_FirstQuest_Reward_Give::
# 112 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showitemdescription
# 113 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0, MSGBOX_YESNO
# 114 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_Give_1
# 119 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 120 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	return

IvyRiver_Ranger_FirstQuest_Reward_Give_1:
# 115 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 116 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	giveitem VAR_0x8006
# 117 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_RewardEnd
	return


IvyRiver_Ranger_FirstQuest_RewardEnd::
# 126 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0
# 127 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 130 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 4
# 131 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	completesubquest QUEST_POKEMON_RANGER, SUB_QUEST_2
# 133 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


IvyRiver_Ranger_TaurosTrigger::
# 153 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosTrigger_2
# 155 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 4
	goto_if_ge IvyRiver_Ranger_TaurosTrigger_5
IvyRiver_Ranger_TaurosTrigger_4:
# 175 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end

IvyRiver_Ranger_TaurosTrigger_2:
	end

IvyRiver_Ranger_TaurosTrigger_5:
# 157 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 158 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_0
# 159 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 161 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_0
# 162 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Ranger_TaurosTrigger_Movement_1
# 164 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 165 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 12
# 167 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_2
# 168 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 169 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_1
# 170 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 172 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_RANGER_TAUROS_USE
	goto IvyRiver_Ranger_TaurosTrigger_4


IvyRiver_Ranger_TaurosBreeder::
# 180 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosBreeder_2
# 183 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_1, MSGBOX_NPC
IvyRiver_Ranger_TaurosBreeder_1:
	end

IvyRiver_Ranger_TaurosBreeder_2:
# 181 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_0, MSGBOX_NPC
	goto IvyRiver_Ranger_TaurosBreeder_1


IvyRiver_Ranger_Scientist_A::
# 207 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_Scientist_A_2
# 212 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_A, IvyRiver_Ranger_Scientist_A_5
# 218 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_2, MSGBOX_NPC
# 220 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_SHIINOTIC, 10, 3
# 221 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_YESNO
# 222 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 223 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 225 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_A_8
# 230 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 231 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 232 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 233 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 234 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 236 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_SHIINOTIC
	goto_if_eq IvyRiver_Ranger_Scientist_A_10
# 249 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_7, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_2:
# 208 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_5:
# 213 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_1, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_8:
# 226 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_10:
# 237 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q1, IvyRiver_Ranger_FirstQuest_Movement_1
# 238 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 239 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 240 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5
# 241 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 242 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 243 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
# 244 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 245 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 246 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_A
	end


IvyRiver_Ranger_Scientist_B::
# 256 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_Scientist_B_2
# 262 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_B, IvyRiver_Ranger_Scientist_B_5
# 268 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_2, MSGBOX_NPC
# 270 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_TOEDSCOOL, 10, 3
# 271 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_3, MSGBOX_YESNO
# 272 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 273 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 275 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_B_8
# 280 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 281 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 282 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 283 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 284 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 286 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_TOEDSCOOL
	goto_if_eq IvyRiver_Ranger_Scientist_B_10
# 299 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_5, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_2:
# 257 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_5:
# 263 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_1, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_8:
# 276 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_10:
# 287 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q2, IvyRiver_Ranger_FirstQuest_Movement_1
# 288 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 289 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 290 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_4
# 291 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 292 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 293 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
# 294 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 295 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 296 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_B
	end


IvyRiver_Ranger_Scientist_C::
# 307 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_Scientist_C_2
# 312 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_C, IvyRiver_Ranger_Scientist_C_5
# 318 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_2, MSGBOX_NPC
# 320 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_ORBEETLE, 10, 3
# 321 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_3, MSGBOX_YESNO
# 322 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 323 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 325 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_C_8
# 330 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 331 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 332 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 333 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 334 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 336 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_ORBEETLE
	goto_if_eq IvyRiver_Ranger_Scientist_C_10
# 349 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_5, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_2:
# 308 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_5:
# 313 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_1, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_8:
# 326 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_10:
# 337 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q3, IvyRiver_Ranger_FirstQuest_Movement_1
# 338 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 339 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 340 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_4
# 341 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 342 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 343 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
# 344 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 345 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 346 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_C
	end


IvyRiver_Ranger_NPC_A::
# 362 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_A_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_B::
# 366 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_B_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_C::
# 370 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_C_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_E::
# 375 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_E_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_F::
# 379 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_F_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_Scizor::
# 385 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_SCIZOR, CRY_MODE_NORMAL
# 386 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scizor_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_Stoutland::
# 390 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 391 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_STOUTLAND, CRY_MODE_NORMAL
# 392 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Stoutland_Text_0
# 393 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


IvyRiver_Ranger_Braviary::
# 397 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_BRAVIARY_HISUI, CRY_MODE_NORMAL
# 398 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Braviary_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_Clodsire::
# 402 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_CLODSIRE, CRY_MODE_NORMAL
# 403 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Clodsire_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_D::
# 417 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_D_Text_0
# 418 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	pokemart IvyRiver_Ranger_Mart
# 419 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 420 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
	end


	.align 2
# 424 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_Mart:
# 425 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM38
# 426 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM57
# 427 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM59
# 428 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM64
# 429 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM54
# 430 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM60
# 431 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM50
# 432 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM62
	.2byte ITEM_NONE

# 34 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_FirstQuest_Movement_0:
# 34 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_question_mark
	step_end

# 44 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_FirstQuest_Movement_1:
# 44 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_exclamation_mark
	step_end

# 158 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_0:
# 158 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	face_up
# 158 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_exclamation_mark
	step_end

# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_1:
# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
	step_end

# 167 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_2:
# 167 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	face_up
	step_end

IvyRiver_Ranger_FirstQuest_Text_0:
# 31 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hmm? A Recruit?\p"
	.string "Then I must welcome you to the Ivy\n"
	.string "River Ranger Institute!\p"
	.string "We're a tad remote, but we've made this\n"
	.string "place our home...and yours too!\p"
	.string "...$"

IvyRiver_Ranger_FirstQuest_Text_1:
# 37 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hmm? Ravine has a package for me?$"

IvyRiver_Ranger_FirstQuest_Text_2:
# 41 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER} gave the Ranger scientist\n"
	.string "the Ranger Package.$"

IvyRiver_Ranger_FirstQuest_Text_3:
# 47 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ahh, yes, yes. The supplies have\n"
	.string "arrived! Excellent!\p"
	.string "Exciting stuff.\p"
	.string "You see, {PLAYER}, the Ivy River\n"
	.string "Ranger Institute studies Pokémon mega\l"
	.string "evolutions. To maintain a robust\l"
	.string "Pokémon ecosystem, we need to know as\l"
	.string "much as we can about these abnormal\l"
	.string "evolutions. This has become\l"
	.string "particularly important since the Mega\l"
	.string "Sharpedo incident...$"

IvyRiver_Ranger_FirstQuest_Text_4:
# 50 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Director Ravine has sent us a\n"
	.string "collection of rare mega stones.\p"
	.string "We've been eagerly waiting for this!\p"
	.string "Thank you, {PLAYER}!\p"
	.string "And am I correct in assuming that this\n"
	.string "is your first mission?\p"
	.string "...\p"
	.string "In that case, I officially declare that\n"
	.string "you've cleared your first mission.\p"
	.string "I now promote you to the rank of\n"
	.string "Pokémon Ranger Candidate!$"

IvyRiver_Ranger_FirstQuest_Text_5:
# 55 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER} was promoted from Recruit\n"
	.string "to Candidate!$"

IvyRiver_Ranger_FirstQuest_Text_6:
# 59 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I should also give you a reward...hmm,\n"
	.string "what do we have with us?\p"
	.string "Sorry, we're a bare-bones setup here.$"

IvyRiver_Ranger_FirstQuest_Text_7:
# 65 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "How about this? Take your pick from one\n"
	.string "of the items Director Ravine sent us.$"

IvyRiver_Ranger_FirstQuest_Text_8:
# 76 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ah, {PLAYER}! There you are. The\n"
	.string "second floor has reported that your\l"
	.string "performance has been splendid! I\l"
	.string "hereby promote you to the rank of\l"
	.string "Associate!$"

IvyRiver_Ranger_FirstQuest_Text_9:
# 80 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER} was promoted from Candidate\n"
	.string "to Associate!$"

IvyRiver_Ranger_FirstQuest_Text_10:
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Director Ravine will be happy to know.\n"
	.string "You should go and see him!$"

IvyRiver_Ranger_FirstQuest_Text_11:
# 91 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hello {PLAYER}! What are you up to?$"

IvyRiver_Ranger_FirstQuest_Reward_Text_0:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Choose carefully! You might not get\n"
	.string "another one for a while.$"

IvyRiver_Ranger_FirstQuest_Reward_Text_1:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Venusaurite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_2:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Blastoisite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_3:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Charizardite X$"

IvyRiver_Ranger_FirstQuest_Reward_Text_4:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Charizardite Y$"

IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0:
# 113 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Are you sure?$"

IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0:
# 126 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "You'll be eyeing the rank of Associate\n"
	.string "next. And for that, you'll need to clear\l"
	.string "one more mission.\p"
	.string "For your next mission, I'll have you help\n"
	.string "out our second floor. Three of our\l"
	.string "researchers need someone on the field\l"
	.string "and we're short on hands.\p"
	.string "Go upstairs, find the three researchers\n"
	.string "and complete their tasks!$"

IvyRiver_Ranger_TaurosTrigger_Text_0:
# 161 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey! You're the new Candidate right?\n"
	.string "Come here for a second.$"

IvyRiver_Ranger_TaurosTrigger_Text_1:
# 169 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "See this here Tauros? This is my baby\n"
	.string "right here - raised him all by myself, I\l"
	.string "did! This one's been trained specially\l"
	.string "to take Rangers up and down Mt. Mirroh\l"
	.string "in a flash! You can head straight to\l"
	.string "Pelluca City or even to the Route 6 HQ\l"
	.string "if you like! All Candidates can use it.$"

IvyRiver_Ranger_TaurosBreeder_Text_0:
# 181 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gotta love the speed on this bull, eh?$"

IvyRiver_Ranger_TaurosBreeder_Text_1:
# 183 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "This here Tauros is my baby! It can take\n"
	.string "you up and down Mt. Mirroh...oh, you\l"
	.string "aren't a Ranger Candidate yet?\p"
	.string "Sorry, only Ranger Candidates are\n"
	.string "allowed to ride the Tauros.$"

IvyRiver_Ranger_Scientist_A_Text_0:
# 208 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Shiinotic emits\n"
	.string "spores that cause drowsiness?\p"
	.string "I'm studying whether those spores may\n"
	.string "be connected to mega evolution\l"
	.string "somehow.$"

IvyRiver_Ranger_Scientist_A_Text_1:
# 213 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "The spores are just spores. There's no\n"
	.string "connection to mega evolution. What a\l"
	.string "waste of time! I'll never get published\l"
	.string "like this.$"

IvyRiver_Ranger_Scientist_A_Text_2:
# 218 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Shiinotic emits\n"
	.string "spores that cause drowsiness?\p"
	.string "I'm studying whether those spores may\n"
	.string "be connected to mega evolution\l"
	.string "somehow. But since we're so far away\l"
	.string "from Vilethorn Woods, it's hard to\l"
	.string "conduct experiments.$"

IvyRiver_Ranger_Scientist_A_Text_3:
# 221 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Shiinotic that\n"
	.string "I can take spore samples of?$"

IvyRiver_Ranger_Scientist_A_Text_4:
# 226 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ah. Come back when you do!$"

IvyRiver_Ranger_Scientist_A_Text_5:
# 240 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Amazing! Such a beautiful, yet\n"
	.string "dangerous, Pokémon.\p"
	.string "Hang on while I take some samples.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_A_Text_6:
# 243 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "And...done!\p"
	.string "Thank you, Candidate. This'll be very\n"
	.string "helpful. Come back later if you want to\l"
	.string "find out the results of my research!$"

IvyRiver_Ranger_Scientist_A_Text_7:
# 249 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Shiinotic!\n"
	.string "You need to work harder, Candidate!$"

IvyRiver_Ranger_Scientist_B_Text_0:
# 257 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Toedscool is a\n"
	.string "regional form of Tentacool?\p"
	.string "I'm studying whether regional forms may\n"
	.string "be connected to mega evolution.$"

IvyRiver_Ranger_Scientist_B_Text_1:
# 263 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There seems to be no correlation\n"
	.string "between mega evolution and regional\l"
	.string "forms. This might be a failed\l"
	.string "experiment, but that's a learning in and\l"
	.string "of itself!$"

IvyRiver_Ranger_Scientist_B_Text_2:
# 268 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Toedscool is a\n"
	.string "regional form of Tentacool?\p"
	.string "I'm studying whether regional forms may\n"
	.string "be connected to mega evolution. But I\l"
	.string "have no idea where to find a Toedscool!$"

IvyRiver_Ranger_Scientist_B_Text_3:
# 271 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Toedscool that\n"
	.string "I can take photographs of?$"

IvyRiver_Ranger_Scientist_B_Text_4:
# 290 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Wonderful! Toedscool and Tentacool\n"
	.string "look so similar, yet so different. The\l"
	.string "beauty of nature!\p"
	.string "Hang on while I take some photographs.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_B_Text_5:
# 299 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Toedscool!\n"
	.string "You need to work harder, Candidate!$"

IvyRiver_Ranger_Scientist_C_Text_0:
# 308 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that in other regions,\n"
	.string "Orbeetle can undergo a transformation\l"
	.string "known as Gigantamaxing?\p"
	.string "I'm assessing a potential connection\n"
	.string "with mega evolution.$"

IvyRiver_Ranger_Scientist_C_Text_1:
# 313 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There's no connection between\n"
	.string "gigantamaxing and mega evolution.\p"
	.string "I'm neither happy nor sad. This is the\n"
	.string "nature of the job, after all.$"

IvyRiver_Ranger_Scientist_C_Text_2:
# 318 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that in other regions,\n"
	.string "Orbeetle can undergo a transformation\l"
	.string "known as Gigantamaxing?\p"
	.string "I'm assessing a potential connection\n"
	.string "with mega evolution.\p"
	.string "But an Orbeetle is hard to come by...$"

IvyRiver_Ranger_Scientist_C_Text_3:
# 321 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have an Orbeetle that\n"
	.string "I can observe and take notes of?$"

IvyRiver_Ranger_Scientist_C_Text_4:
# 340 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Oh my! Such a fascinating creature!\p"
	.string "Hang on while I make some notes.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_C_Text_5:
# 349 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not an Orbeetle!\n"
	.string "You need to work harder, Candidate!$"

IvyRiver_Ranger_NPC_A_Text_0:
# 362 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hello! Are you a Ranger Recruit too?\n"
	.string "I came here for my first mission.\l"
	.string "They're making me catch wild Dreepy!$"

IvyRiver_Ranger_NPC_B_Text_0:
# 366 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I've come to get some new TMs for\n"
	.string "Scizor!$"

IvyRiver_Ranger_NPC_C_Text_0:
# 370 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "The CrazyTrain 2.0 is incredible!\n"
	.string "It manufactures strong TMs.$"

IvyRiver_Ranger_NPC_E_Text_0:
# 375 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I hate being upstairs! Too many stuffy\n"
	.string "scientists who don't know what its like\l"
	.string "to be out in the field.$"

IvyRiver_Ranger_NPC_F_Text_0:
# 379 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I'm a Ranger Candidate. Director Ravine\n"
	.string "asked me to complete a mission to rank\l"
	.string "up to Associate, but it's too hard!$"

IvyRiver_Ranger_Scizor_Text_0:
# 386 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Scizor is stretching. It's getting ready\n"
	.string "to learn some new moves!$"

IvyRiver_Ranger_Stoutland_Text_0:
# 392 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Stoutland is intently focused on the\n"
	.string "computer screen.$"

IvyRiver_Ranger_Braviary_Text_0:
# 398 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Braviary looks bored...$"

IvyRiver_Ranger_Clodsire_Text_0:
# 403 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Such a calm smile!$"

IvyRiver_Ranger_NPC_D_Text_0:
# 417 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "The CrazyTrain 2.0 is my brainchild! With\n"
	.string "it, I can manufacture a variety of TMs\l"
	.string "for Rangers. Have a look!$"
