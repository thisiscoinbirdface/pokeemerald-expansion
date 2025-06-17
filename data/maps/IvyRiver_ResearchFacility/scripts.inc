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
# 93 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_11, MSGBOX_NPC
# 95 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
	lockall
# 77 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	faceplayer
# 78 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_8
# 79 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 82 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Text_9
# 83 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 84 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_10, MSGBOX_NPC
# 88 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	completesubquest QUEST_POKEMON_RANGER, SUB_QUEST_2
# 89 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 8
	end


IvyRiver_Ranger_FirstQuest_Reward::
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Reward_Text_0
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 103 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, IvyRiver_Ranger_FirstQuest_Reward_Text_1, IvyRiver_Ranger_FirstQuest_Reward_Text_2, IvyRiver_Ranger_FirstQuest_Reward_Text_3, IvyRiver_Ranger_FirstQuest_Reward_Text_4
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_2
IvyRiver_Ranger_FirstQuest_Reward_1:
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_5
IvyRiver_Ranger_FirstQuest_Reward_4:
# 109 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_8
IvyRiver_Ranger_FirstQuest_Reward_7:
# 110 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_10
	return

IvyRiver_Ranger_FirstQuest_Reward_2:
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_VENUSAURITE
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_1

IvyRiver_Ranger_FirstQuest_Reward_5:
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_BLASTOISINITE
# 108 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_4

IvyRiver_Ranger_FirstQuest_Reward_8:
# 109 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_CHARIZARDITE_X
# 109 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_7

IvyRiver_Ranger_FirstQuest_Reward_10:
# 110 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_CHARIZARDITE_Y
# 110 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	return


IvyRiver_Ranger_FirstQuest_Reward_Give::
# 114 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showitemdescription
# 115 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0, MSGBOX_YESNO
# 116 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_Give_1
# 121 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 122 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	return

IvyRiver_Ranger_FirstQuest_Reward_Give_1:
# 117 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 118 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	giveitem VAR_0x8006
# 119 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_RewardEnd
	return


IvyRiver_Ranger_FirstQuest_RewardEnd::
# 128 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0
# 129 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 132 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 4
# 133 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	completesubquest QUEST_POKEMON_RANGER, SUB_QUEST_2
# 135 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


IvyRiver_Ranger_TaurosTrigger::
# 155 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosTrigger_2
# 157 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 4
	goto_if_ge IvyRiver_Ranger_TaurosTrigger_5
IvyRiver_Ranger_TaurosTrigger_4:
# 177 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end

IvyRiver_Ranger_TaurosTrigger_2:
	end

IvyRiver_Ranger_TaurosTrigger_5:
# 159 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 160 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_0
# 161 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_0
# 164 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 165 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Ranger_TaurosTrigger_Movement_1
# 166 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 167 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 12
# 169 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_2
# 170 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 171 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_1
# 172 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 174 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_RANGER_TAUROS_USE
	goto IvyRiver_Ranger_TaurosTrigger_4


IvyRiver_Ranger_TaurosBreeder::
# 182 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosBreeder_2
# 185 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_1, MSGBOX_NPC
IvyRiver_Ranger_TaurosBreeder_1:
	end

IvyRiver_Ranger_TaurosBreeder_2:
# 183 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_0, MSGBOX_NPC
	goto IvyRiver_Ranger_TaurosBreeder_1


IvyRiver_Ranger_Scientist_A::
# 209 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_Scientist_A_2
# 214 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_A, IvyRiver_Ranger_Scientist_A_5
# 220 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_2, MSGBOX_NPC
# 222 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_SHIINOTIC, 10, 3
# 223 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_YESNO
# 224 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 225 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 227 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_A_8
# 232 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 233 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 234 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 235 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 236 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 238 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_SHIINOTIC
	goto_if_eq IvyRiver_Ranger_Scientist_A_10
# 251 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_7, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_2:
# 210 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_5:
# 215 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_1, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_8:
# 228 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_10:
# 239 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q1, IvyRiver_Ranger_FirstQuest_Movement_1
# 240 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 241 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 242 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5
# 243 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 244 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 245 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
# 246 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 247 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 248 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_A
	end


IvyRiver_Ranger_Scientist_B::
# 258 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_Scientist_B_2
# 264 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_B, IvyRiver_Ranger_Scientist_B_5
# 270 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_2, MSGBOX_NPC
# 272 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_TOEDSCOOL, 10, 3
# 273 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_3, MSGBOX_YESNO
# 274 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 275 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 277 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_B_8
# 282 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 283 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 284 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 285 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 286 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 288 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_TOEDSCOOL
	goto_if_eq IvyRiver_Ranger_Scientist_B_10
# 301 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_5, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_2:
# 259 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_5:
# 265 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_1, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_8:
# 278 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_10:
# 289 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q2, IvyRiver_Ranger_FirstQuest_Movement_1
# 290 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 291 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 292 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_4
# 293 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 294 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 295 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
# 296 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 297 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 298 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_B
	end


IvyRiver_Ranger_Scientist_C::
# 309 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_Scientist_C_2
# 314 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_C, IvyRiver_Ranger_Scientist_C_5
# 320 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_2, MSGBOX_NPC
# 322 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_ORBEETLE, 10, 3
# 323 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_3, MSGBOX_YESNO
# 324 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 325 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 327 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_C_8
# 332 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 333 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 334 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 335 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 336 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 338 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_ORBEETLE
	goto_if_eq IvyRiver_Ranger_Scientist_C_10
# 351 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_5, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_2:
# 310 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_5:
# 315 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_1, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_8:
# 328 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_10:
# 339 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q3, IvyRiver_Ranger_FirstQuest_Movement_1
# 340 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 341 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 342 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_4
# 343 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 344 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 345 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
# 346 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 347 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 348 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_C
	end


IvyRiver_Ranger_NPC_A::
# 364 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_A_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_B::
# 368 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_B_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_C::
# 372 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_C_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_E::
# 377 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_E_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_F::
# 381 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_F_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_Scizor::
# 387 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_SCIZOR, CRY_MODE_NORMAL
# 388 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scizor_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_Stoutland::
# 392 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 393 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_STOUTLAND, CRY_MODE_NORMAL
# 394 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Stoutland_Text_0
# 395 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


IvyRiver_Ranger_Braviary::
# 399 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_BRAVIARY_HISUI, CRY_MODE_NORMAL
# 400 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Braviary_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_Clodsire::
# 404 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_CLODSIRE, CRY_MODE_NORMAL
# 405 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Clodsire_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_D::
# 419 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_D_Text_0
# 420 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	pokemart IvyRiver_Ranger_Mart
# 421 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 422 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
	end


	.align 2
# 426 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_Mart:
# 427 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM38
# 428 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM57
# 429 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM59
# 430 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM64
# 431 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM54
# 432 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM60
# 433 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM50
# 434 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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

# 160 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_0:
# 160 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	face_up
# 160 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_exclamation_mark
	step_end

# 165 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_1:
# 165 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
# 165 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
	step_end

# 169 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_2:
# 169 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
# 78 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ah, {PLAYER}! There you are. The\n"
	.string "second floor has reported that your\l"
	.string "performance has been splendid! I\l"
	.string "hereby promote you to the rank of\l"
	.string "Associate!$"

IvyRiver_Ranger_FirstQuest_Text_9:
# 82 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER} was promoted from Candidate\n"
	.string "to Associate!$"

IvyRiver_Ranger_FirstQuest_Text_10:
# 86 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Director Ravine will be happy to know.\n"
	.string "You should go and see him!$"

IvyRiver_Ranger_FirstQuest_Text_11:
# 93 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hello {PLAYER}! What are you up to?$"

IvyRiver_Ranger_FirstQuest_Reward_Text_0:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Choose carefully! You might not get\n"
	.string "another one for a while.$"

IvyRiver_Ranger_FirstQuest_Reward_Text_1:
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Venusaurite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_2:
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Blastoisite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_3:
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Charizardite X$"

IvyRiver_Ranger_FirstQuest_Reward_Text_4:
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Charizardite Y$"

IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0:
# 115 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Are you sure?$"

IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0:
# 128 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey! You're the new Candidate right?\n"
	.string "Come here for a second.$"

IvyRiver_Ranger_TaurosTrigger_Text_1:
# 171 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "See this here Tauros? This is my baby\n"
	.string "right here - raised him all by myself, I\l"
	.string "did! This one's been trained specially\l"
	.string "to take Rangers up and down Mt. Mirroh\l"
	.string "in a flash! You can head straight to\l"
	.string "Pelluca City or even to the Route 6 HQ\l"
	.string "if you like! All Candidates can use it.$"

IvyRiver_Ranger_TaurosBreeder_Text_0:
# 183 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gotta love the speed on this bull, eh?$"

IvyRiver_Ranger_TaurosBreeder_Text_1:
# 185 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "This here Tauros is my baby! It can take\n"
	.string "you up and down Mt. Mirroh...oh, you\l"
	.string "aren't a Ranger Candidate yet?\p"
	.string "Sorry, only Ranger Candidates are\n"
	.string "allowed to ride the Tauros.$"

IvyRiver_Ranger_Scientist_A_Text_0:
# 210 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Shiinotic emits\n"
	.string "spores that cause drowsiness?\p"
	.string "I'm studying whether those spores may\n"
	.string "be connected to mega evolution\l"
	.string "somehow.$"

IvyRiver_Ranger_Scientist_A_Text_1:
# 215 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "The spores are just spores. There's no\n"
	.string "connection to mega evolution. What a\l"
	.string "waste of time! I'll never get published\l"
	.string "like this.$"

IvyRiver_Ranger_Scientist_A_Text_2:
# 220 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Shiinotic emits\n"
	.string "spores that cause drowsiness?\p"
	.string "I'm studying whether those spores may\n"
	.string "be connected to mega evolution\l"
	.string "somehow. But since we're so far away\l"
	.string "from Vilethorn Woods, it's hard to\l"
	.string "conduct experiments.$"

IvyRiver_Ranger_Scientist_A_Text_3:
# 223 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Shiinotic that\n"
	.string "I can take spore samples of?$"

IvyRiver_Ranger_Scientist_A_Text_4:
# 228 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ah. Come back when you do!$"

IvyRiver_Ranger_Scientist_A_Text_5:
# 242 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Amazing! Such a beautiful, yet\n"
	.string "dangerous, Pokémon.\p"
	.string "Hang on while I take some samples.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_A_Text_6:
# 245 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "And...done!\p"
	.string "Thank you, Candidate. This'll be very\n"
	.string "helpful. Come back later if you want to\l"
	.string "find out the results of my research!$"

IvyRiver_Ranger_Scientist_A_Text_7:
# 251 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Shiinotic!\n"
	.string "You need to work harder, Candidate!$"

IvyRiver_Ranger_Scientist_B_Text_0:
# 259 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Toedscool is a\n"
	.string "regional form of Tentacool?\p"
	.string "I'm studying whether regional forms may\n"
	.string "be connected to mega evolution.$"

IvyRiver_Ranger_Scientist_B_Text_1:
# 265 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There seems to be no correlation\n"
	.string "between mega evolution and regional\l"
	.string "forms. This might be a failed\l"
	.string "experiment, but that's a learning in and\l"
	.string "of itself!$"

IvyRiver_Ranger_Scientist_B_Text_2:
# 270 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Toedscool is a\n"
	.string "regional form of Tentacool?\p"
	.string "I'm studying whether regional forms may\n"
	.string "be connected to mega evolution. But I\l"
	.string "have no idea where to find a Toedscool!$"

IvyRiver_Ranger_Scientist_B_Text_3:
# 273 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Toedscool that\n"
	.string "I can take photographs of?$"

IvyRiver_Ranger_Scientist_B_Text_4:
# 292 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Wonderful! Toedscool and Tentacool\n"
	.string "look so similar, yet so different. The\l"
	.string "beauty of nature!\p"
	.string "Hang on while I take some photographs.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_B_Text_5:
# 301 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Toedscool!\n"
	.string "You need to work harder, Candidate!$"

IvyRiver_Ranger_Scientist_C_Text_0:
# 310 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that in other regions,\n"
	.string "Orbeetle can undergo a transformation\l"
	.string "known as Gigantamaxing?\p"
	.string "I'm assessing a potential connection\n"
	.string "with mega evolution.$"

IvyRiver_Ranger_Scientist_C_Text_1:
# 315 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There's no connection between\n"
	.string "gigantamaxing and mega evolution.\p"
	.string "I'm neither happy nor sad. This is the\n"
	.string "nature of the job, after all.$"

IvyRiver_Ranger_Scientist_C_Text_2:
# 320 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that in other regions,\n"
	.string "Orbeetle can undergo a transformation\l"
	.string "known as Gigantamaxing?\p"
	.string "I'm assessing a potential connection\n"
	.string "with mega evolution.\p"
	.string "But an Orbeetle is hard to come by...$"

IvyRiver_Ranger_Scientist_C_Text_3:
# 323 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have an Orbeetle that\n"
	.string "I can observe and take notes of?$"

IvyRiver_Ranger_Scientist_C_Text_4:
# 342 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Oh my! Such a fascinating creature!\p"
	.string "Hang on while I make some notes.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_C_Text_5:
# 351 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not an Orbeetle!\n"
	.string "You need to work harder, Candidate!$"

IvyRiver_Ranger_NPC_A_Text_0:
# 364 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hello! Are you a Ranger Recruit too?\n"
	.string "I came here for my first mission.\l"
	.string "They're making me catch wild Dreepy!$"

IvyRiver_Ranger_NPC_B_Text_0:
# 368 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I've come to get some new TMs for\n"
	.string "Scizor!$"

IvyRiver_Ranger_NPC_C_Text_0:
# 372 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "The CrazyTrain 2.0 is incredible!\n"
	.string "It manufactures strong TMs.$"

IvyRiver_Ranger_NPC_E_Text_0:
# 377 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I hate being upstairs! Too many stuffy\n"
	.string "scientists who don't know what its like\l"
	.string "to be out in the field.$"

IvyRiver_Ranger_NPC_F_Text_0:
# 381 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I'm a Ranger Candidate. Director Ravine\n"
	.string "asked me to complete a mission to rank\l"
	.string "up to Associate, but it's too hard!$"

IvyRiver_Ranger_Scizor_Text_0:
# 388 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Scizor is stretching. It's getting ready\n"
	.string "to learn some new moves!$"

IvyRiver_Ranger_Stoutland_Text_0:
# 394 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Stoutland is intently focused on the\n"
	.string "computer screen.$"

IvyRiver_Ranger_Braviary_Text_0:
# 400 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Braviary looks bored...$"

IvyRiver_Ranger_Clodsire_Text_0:
# 405 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Such a calm smile!$"

IvyRiver_Ranger_NPC_D_Text_0:
# 419 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "The CrazyTrain 2.0 is my brainchild! With\n"
	.string "it, I can manufacture a variety of TMs\l"
	.string "for Rangers. Have a look!$"
