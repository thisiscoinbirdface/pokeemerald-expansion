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
# 90 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_11, MSGBOX_NPC
# 92 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
	setvar VAR_RANGER_INSTITUTE, 8
	end


IvyRiver_Ranger_FirstQuest_Reward::
# 98 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Reward_Text_0
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 100 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, IvyRiver_Ranger_FirstQuest_Reward_Text_1, IvyRiver_Ranger_FirstQuest_Reward_Text_2, IvyRiver_Ranger_FirstQuest_Reward_Text_3, IvyRiver_Ranger_FirstQuest_Reward_Text_4
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_2
IvyRiver_Ranger_FirstQuest_Reward_1:
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_5
IvyRiver_Ranger_FirstQuest_Reward_4:
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_8
IvyRiver_Ranger_FirstQuest_Reward_7:
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_10
	return

IvyRiver_Ranger_FirstQuest_Reward_2:
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_VENUSAURITE
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_1

IvyRiver_Ranger_FirstQuest_Reward_5:
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_BLASTOISINITE
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_4

IvyRiver_Ranger_FirstQuest_Reward_8:
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_CHARIZARDITE_X
# 106 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_7

IvyRiver_Ranger_FirstQuest_Reward_10:
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_CHARIZARDITE_Y
# 107 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	return


IvyRiver_Ranger_FirstQuest_Reward_Give::
# 111 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showitemdescription
# 112 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0, MSGBOX_YESNO
# 113 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_Give_1
# 118 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 119 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	return

IvyRiver_Ranger_FirstQuest_Reward_Give_1:
# 114 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 115 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	giveitem VAR_0x8006
# 116 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_RewardEnd
	return


IvyRiver_Ranger_FirstQuest_RewardEnd::
# 125 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0
# 126 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 129 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 4
# 130 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_RANGER, SUB_QUEST_1
# 132 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


IvyRiver_Ranger_TaurosTrigger::
# 152 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosTrigger_2
# 154 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 4
	goto_if_ge IvyRiver_Ranger_TaurosTrigger_5
IvyRiver_Ranger_TaurosTrigger_4:
# 174 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end

IvyRiver_Ranger_TaurosTrigger_2:
	end

IvyRiver_Ranger_TaurosTrigger_5:
# 156 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 157 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_0
# 158 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 160 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_0
# 161 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 162 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Ranger_TaurosTrigger_Movement_1
# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 164 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 12
# 166 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_2
# 167 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 168 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_1
# 169 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 171 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_RANGER_TAUROS_USE
	goto IvyRiver_Ranger_TaurosTrigger_4


IvyRiver_Ranger_TaurosBreeder::
# 179 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosBreeder_2
# 182 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_1, MSGBOX_NPC
IvyRiver_Ranger_TaurosBreeder_1:
	end

IvyRiver_Ranger_TaurosBreeder_2:
# 180 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_0, MSGBOX_NPC
	goto IvyRiver_Ranger_TaurosBreeder_1


IvyRiver_Ranger_Scientist_A::
# 206 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_Scientist_A_2
# 211 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_A, IvyRiver_Ranger_Scientist_A_5
# 217 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_2, MSGBOX_NPC
# 219 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_SHIINOTIC, 10, 3
# 220 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_YESNO
# 221 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 222 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 224 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_A_8
# 229 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 230 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 231 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 232 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 233 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 235 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_SHIINOTIC
	goto_if_eq IvyRiver_Ranger_Scientist_A_10
# 248 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_7, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_2:
# 207 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_5:
# 212 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_1, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_8:
# 225 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_10:
# 236 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q1, IvyRiver_Ranger_FirstQuest_Movement_1
# 237 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 238 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 239 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5
# 240 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 241 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 242 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
# 243 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 244 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 245 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_A
	end


IvyRiver_Ranger_Scientist_B::
# 255 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_Scientist_B_2
# 261 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_B, IvyRiver_Ranger_Scientist_B_5
# 267 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_2, MSGBOX_NPC
# 269 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_TOEDSCOOL, 10, 3
# 270 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_3, MSGBOX_YESNO
# 271 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 272 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 274 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_B_8
# 279 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 280 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 281 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 282 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 283 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 285 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_TOEDSCOOL
	goto_if_eq IvyRiver_Ranger_Scientist_B_10
# 298 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_5, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_2:
# 256 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_5:
# 262 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_1, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_8:
# 275 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_10:
# 286 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q2, IvyRiver_Ranger_FirstQuest_Movement_1
# 287 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 288 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 289 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_4
# 290 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 291 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 292 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
# 293 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 294 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 295 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_B
	end


IvyRiver_Ranger_Scientist_C::
# 306 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_Scientist_C_2
# 311 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_C, IvyRiver_Ranger_Scientist_C_5
# 317 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_2, MSGBOX_NPC
# 319 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_ORBEETLE, 10, 3
# 320 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_3, MSGBOX_YESNO
# 321 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 322 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 324 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_C_8
# 329 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 330 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 331 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 332 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 333 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 335 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_ORBEETLE
	goto_if_eq IvyRiver_Ranger_Scientist_C_10
# 348 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_5, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_2:
# 307 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_5:
# 312 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_1, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_8:
# 325 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_10:
# 336 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q3, IvyRiver_Ranger_FirstQuest_Movement_1
# 337 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 338 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 339 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_4
# 340 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 341 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 342 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
# 343 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 344 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 345 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_C
	end


IvyRiver_Ranger_NPC_A::
# 361 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_A_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_B::
# 365 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_B_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_C::
# 369 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_C_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_E::
# 374 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_E_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_F::
# 378 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_F_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_Scizor::
# 384 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_SCIZOR, CRY_MODE_NORMAL
# 385 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scizor_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_Stoutland::
# 389 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 390 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_STOUTLAND, CRY_MODE_NORMAL
# 391 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Stoutland_Text_0
# 392 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


IvyRiver_Ranger_Braviary::
# 396 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_BRAVIARY_HISUI, CRY_MODE_NORMAL
# 397 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Braviary_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_Clodsire::
# 401 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playmoncry SPECIES_CLODSIRE, CRY_MODE_NORMAL
# 402 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Clodsire_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_D::
# 416 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_D_Text_0
# 417 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	pokemart IvyRiver_Ranger_Mart
# 418 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 419 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
	end


	.align 2
# 423 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_Mart:
# 424 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM38
# 425 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM57
# 426 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM59
# 427 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM64
# 428 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM54
# 429 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM60
# 430 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.2byte ITEM_TM50
# 431 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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

# 157 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_0:
# 157 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	face_up
# 157 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_exclamation_mark
	step_end

# 162 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_1:
# 162 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
# 162 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
	step_end

# 166 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_2:
# 166 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
# 90 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hello {PLAYER}! What are you up to?$"

IvyRiver_Ranger_FirstQuest_Reward_Text_0:
# 98 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Choose carefully! You might not get\n"
	.string "another one for a while.$"

IvyRiver_Ranger_FirstQuest_Reward_Text_1:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Venusaurite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_2:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Blastoisite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_3:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Charizardite X$"

IvyRiver_Ranger_FirstQuest_Reward_Text_4:
# 101 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Charizardite Y$"

IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0:
# 112 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Are you sure?$"

IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0:
# 125 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
# 160 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey! You're the new Candidate right?\n"
	.string "Come here for a second.$"

IvyRiver_Ranger_TaurosTrigger_Text_1:
# 168 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "See this here Tauros? This is my baby\n"
	.string "right here - raised him all by myself, I\l"
	.string "did! This one's been trained specially\l"
	.string "to take Rangers up and down Mt. Mirroh\l"
	.string "in a flash! You can head straight to\l"
	.string "Pelluca City or even to the Route 6 HQ\l"
	.string "if you like! All Candidates can use it.$"

IvyRiver_Ranger_TaurosBreeder_Text_0:
# 180 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gotta love the speed on this bull, eh?$"

IvyRiver_Ranger_TaurosBreeder_Text_1:
# 182 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "This here Tauros is my baby! It can take\n"
	.string "you up and down Mt. Mirroh...oh, you\l"
	.string "aren't a Ranger Candidate yet?\p"
	.string "Sorry, only Ranger Candidates are\n"
	.string "allowed to ride the Tauros.$"

IvyRiver_Ranger_Scientist_A_Text_0:
# 207 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Shiinotic emits\n"
	.string "spores that cause drowsiness?\p"
	.string "I'm studying whether those spores may\n"
	.string "be connected to mega evolution\l"
	.string "somehow.$"

IvyRiver_Ranger_Scientist_A_Text_1:
# 212 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "The spores are just spores. There's no\n"
	.string "connection to mega evolution. What a\l"
	.string "waste of time! I'll never get published\l"
	.string "like this.$"

IvyRiver_Ranger_Scientist_A_Text_2:
# 217 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Shiinotic emits\n"
	.string "spores that cause drowsiness?\p"
	.string "I'm studying whether those spores may\n"
	.string "be connected to mega evolution\l"
	.string "somehow. But since we're so far away\l"
	.string "from Vilethorn Woods, it's hard to\l"
	.string "conduct experiments.$"

IvyRiver_Ranger_Scientist_A_Text_3:
# 220 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Shiinotic that\n"
	.string "I can take spore samples of?$"

IvyRiver_Ranger_Scientist_A_Text_4:
# 225 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ah. Come back when you do!$"

IvyRiver_Ranger_Scientist_A_Text_5:
# 239 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Amazing! Such a beautiful, yet\n"
	.string "dangerous, Pokémon.\p"
	.string "Hang on while I take some samples.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_A_Text_6:
# 242 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "And...done!\p"
	.string "Thank you, Candidate. This'll be very\n"
	.string "helpful. Come back later if you want to\l"
	.string "find out the results of my research!$"

IvyRiver_Ranger_Scientist_A_Text_7:
# 248 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Shiinotic!\n"
	.string "You need to work harder, Candidate!$"

IvyRiver_Ranger_Scientist_B_Text_0:
# 256 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Toedscool is a\n"
	.string "regional form of Tentacool?\p"
	.string "I'm studying whether regional forms may\n"
	.string "be connected to mega evolution.$"

IvyRiver_Ranger_Scientist_B_Text_1:
# 262 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There seems to be no correlation\n"
	.string "between mega evolution and regional\l"
	.string "forms. This might be a failed\l"
	.string "experiment, but that's a learning in and\l"
	.string "of itself!$"

IvyRiver_Ranger_Scientist_B_Text_2:
# 267 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Toedscool is a\n"
	.string "regional form of Tentacool?\p"
	.string "I'm studying whether regional forms may\n"
	.string "be connected to mega evolution. But I\l"
	.string "have no idea where to find a Toedscool!$"

IvyRiver_Ranger_Scientist_B_Text_3:
# 270 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Toedscool that\n"
	.string "I can take photographs of?$"

IvyRiver_Ranger_Scientist_B_Text_4:
# 289 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Wonderful! Toedscool and Tentacool\n"
	.string "look so similar, yet so different. The\l"
	.string "beauty of nature!\p"
	.string "Hang on while I take some photographs.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_B_Text_5:
# 298 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Toedscool!\n"
	.string "You need to work harder, Candidate!$"

IvyRiver_Ranger_Scientist_C_Text_0:
# 307 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that in other regions,\n"
	.string "Orbeetle can undergo a transformation\l"
	.string "known as Gigantamaxing?\p"
	.string "I'm assessing a potential connection\n"
	.string "with mega evolution.$"

IvyRiver_Ranger_Scientist_C_Text_1:
# 312 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There's no connection between\n"
	.string "gigantamaxing and mega evolution.\p"
	.string "I'm neither happy nor sad. This is the\n"
	.string "nature of the job, after all.$"

IvyRiver_Ranger_Scientist_C_Text_2:
# 317 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that in other regions,\n"
	.string "Orbeetle can undergo a transformation\l"
	.string "known as Gigantamaxing?\p"
	.string "I'm assessing a potential connection\n"
	.string "with mega evolution.\p"
	.string "But an Orbeetle is hard to come by...$"

IvyRiver_Ranger_Scientist_C_Text_3:
# 320 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have an Orbeetle that\n"
	.string "I can observe and take notes of?$"

IvyRiver_Ranger_Scientist_C_Text_4:
# 339 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Oh my! Such a fascinating creature!\p"
	.string "Hang on while I make some notes.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_C_Text_5:
# 348 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not an Orbeetle!\n"
	.string "You need to work harder, Candidate!$"

IvyRiver_Ranger_NPC_A_Text_0:
# 361 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hello! Are you a Ranger Recruit too?\n"
	.string "I came here for my first mission.\l"
	.string "They're making me catch wild Dreepy!$"

IvyRiver_Ranger_NPC_B_Text_0:
# 365 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I've come to get some new TMs for\n"
	.string "Scizor!$"

IvyRiver_Ranger_NPC_C_Text_0:
# 369 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "The CrazyTrain 2.0 is incredible!\n"
	.string "It manufactures strong TMs.$"

IvyRiver_Ranger_NPC_E_Text_0:
# 374 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I hate being upstairs! Too many stuffy\n"
	.string "scientists who don't know what its like\l"
	.string "to be out in the field.$"

IvyRiver_Ranger_NPC_F_Text_0:
# 378 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I'm a Ranger Candidate. Director Ravine\n"
	.string "asked me to complete a mission to rank\l"
	.string "up to Associate, but it's too hard!$"

IvyRiver_Ranger_Scizor_Text_0:
# 385 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Scizor is stretching. It's getting ready\n"
	.string "to learn some new moves!$"

IvyRiver_Ranger_Stoutland_Text_0:
# 391 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Stoutland is intently focused on the\n"
	.string "computer screen.$"

IvyRiver_Ranger_Braviary_Text_0:
# 397 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Braviary looks bored...$"

IvyRiver_Ranger_Clodsire_Text_0:
# 402 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Such a calm smile!$"

IvyRiver_Ranger_NPC_D_Text_0:
# 416 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "The CrazyTrain 2.0 is my brainchild! With\n"
	.string "it, I can manufacture a variety of TMs\l"
	.string "for Rangers. Have a look!$"
