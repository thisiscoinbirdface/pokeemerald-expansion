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
# 88 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_11, MSGBOX_NPC
# 90 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
	end


IvyRiver_Ranger_FirstQuest_Reward::
# 96 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Reward_Text_0
# 97 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 98 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, IvyRiver_Ranger_FirstQuest_Reward_Text_1, IvyRiver_Ranger_FirstQuest_Reward_Text_2, IvyRiver_Ranger_FirstQuest_Reward_Text_3, IvyRiver_Ranger_FirstQuest_Reward_Text_4
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_2
IvyRiver_Ranger_FirstQuest_Reward_1:
# 103 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_5
IvyRiver_Ranger_FirstQuest_Reward_4:
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_8
IvyRiver_Ranger_FirstQuest_Reward_7:
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_10
	return

IvyRiver_Ranger_FirstQuest_Reward_2:
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_VENUSAURITE
# 102 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_1

IvyRiver_Ranger_FirstQuest_Reward_5:
# 103 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_BLASTOISINITE
# 103 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_4

IvyRiver_Ranger_FirstQuest_Reward_8:
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_CHARIZARDITE_X
# 104 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	goto IvyRiver_Ranger_FirstQuest_Reward_7

IvyRiver_Ranger_FirstQuest_Reward_10:
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_0x8006, ITEM_CHARIZARDITE_Y
# 105 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward_Give
	return


IvyRiver_Ranger_FirstQuest_Reward_Give::
# 109 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showitemdescription
# 110 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0, MSGBOX_YESNO
# 111 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IvyRiver_Ranger_FirstQuest_Reward_Give_1
# 116 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 117 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_Reward
	return

IvyRiver_Ranger_FirstQuest_Reward_Give_1:
# 112 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hideitemdescription
# 113 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	giveitem VAR_0x8006
# 114 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto IvyRiver_Ranger_FirstQuest_RewardEnd
	return


IvyRiver_Ranger_FirstQuest_RewardEnd::
# 124 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0
# 125 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 128 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 4
# 129 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_RANGER, SUB_QUEST_1
# 131 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


IvyRiver_Ranger_TaurosTrigger::
# 151 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosTrigger_2
# 153 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 4
	goto_if_ge IvyRiver_Ranger_TaurosTrigger_5
IvyRiver_Ranger_TaurosTrigger_4:
# 173 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end

IvyRiver_Ranger_TaurosTrigger_2:
	end

IvyRiver_Ranger_TaurosTrigger_5:
# 155 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 156 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_0
# 157 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 159 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_0
# 160 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 161 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IvyRiver_Ranger_TaurosTrigger_Movement_1
# 162 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 163 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 12
# 165 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_TAUROS_RANGER, IvyRiver_Ranger_TaurosTrigger_Movement_2
# 166 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 167 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosTrigger_Text_1
# 168 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 170 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_RANGER_TAUROS_USE
	goto IvyRiver_Ranger_TaurosTrigger_4


IvyRiver_Ranger_TaurosBreeder::
# 178 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_RANGER_TAUROS_USE, IvyRiver_Ranger_TaurosBreeder_2
# 181 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_1, MSGBOX_NPC
IvyRiver_Ranger_TaurosBreeder_1:
	end

IvyRiver_Ranger_TaurosBreeder_2:
# 179 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_TaurosBreeder_Text_0, MSGBOX_NPC
	goto IvyRiver_Ranger_TaurosBreeder_1


IvyRiver_Ranger_Scientist_A::
# 204 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_A, IvyRiver_Ranger_Scientist_A_2
# 210 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_1, MSGBOX_NPC
# 212 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_SHIINOTIC, 10, 3
# 213 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_2, MSGBOX_YESNO
# 214 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 215 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 217 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_A_5
# 222 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 223 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 224 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 225 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 226 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 228 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_SHIINOTIC
	goto_if_eq IvyRiver_Ranger_Scientist_A_7
# 241 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_6, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_2:
# 205 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_5:
# 218 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_A_7:
# 229 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q1, IvyRiver_Ranger_FirstQuest_Movement_1
# 230 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 231 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 232 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_4
# 233 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 234 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 235 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5, MSGBOX_NPC
# 236 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 237 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 238 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_A
	end


IvyRiver_Ranger_Scientist_B::
# 248 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_B, IvyRiver_Ranger_Scientist_B_2
# 254 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_1, MSGBOX_NPC
# 256 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_TOEDSCOOL, 10, 3
# 257 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_2, MSGBOX_YESNO
# 258 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 259 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 261 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_B_5
# 266 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 267 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 268 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 269 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 270 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 272 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_TOEDSCOOL
	goto_if_eq IvyRiver_Ranger_Scientist_B_7
# 285 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_2:
# 249 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_5:
# 262 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_B_7:
# 273 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q2, IvyRiver_Ranger_FirstQuest_Movement_1
# 274 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 275 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 276 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_B_Text_3
# 277 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 278 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 279 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5, MSGBOX_NPC
# 280 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 281 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 282 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_B
	end


IvyRiver_Ranger_Scientist_C::
# 293 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	goto_if_set FLAG_IVY_RIVER_RANGER_SCIENTIST_C, IvyRiver_Ranger_Scientist_C_2
# 299 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_1, MSGBOX_NPC
# 301 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	showmonpic SPECIES_LAPRAS, 10, 3
# 302 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_2, MSGBOX_YESNO
# 303 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 304 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	hidemonpic
# 306 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IvyRiver_Ranger_Scientist_C_5
# 311 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	special ChoosePartyMon
# 312 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitstate
# 313 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 314 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 315 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 317 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RESULT, SPECIES_LAPRAS
	goto_if_eq IvyRiver_Ranger_Scientist_C_7
# 330 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_4, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_2:
# 294 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_0, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_5:
# 307 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_3, MSGBOX_NPC
	end

IvyRiver_Ranger_Scientist_C_7:
# 318 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_Q3, IvyRiver_Ranger_FirstQuest_Movement_1
# 319 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 320 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 321 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_C_Text_3
# 322 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 323 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	playse SE_BANG
# 324 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_Scientist_A_Text_5, MSGBOX_NPC
# 325 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 326 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	addvar VAR_RANGER_INSTITUTE, 1
# 327 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setflag FLAG_IVY_RIVER_RANGER_SCIENTIST_C
	end


IvyRiver_Ranger_NPC_A::
# 343 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_A_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_B::
# 347 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_B_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_C::
# 351 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_C_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_D::
# 355 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_D_Text_0, MSGBOX_NPC
	end


IvyRiver_Ranger_NPC_E::
# 359 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_NPC_E_Text_0, MSGBOX_NPC
	end


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

# 156 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_0:
# 156 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	face_up
# 156 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_exclamation_mark
	step_end

# 161 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_1:
# 161 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
# 161 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	walk_down
	step_end

# 165 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_TaurosTrigger_Movement_2:
# 165 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	face_up
	step_end

IvyRiver_Ranger_FirstQuest_Text_0:
# 31 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hmm? A Recruit? Welcome to the Ivy\n"
	.string "River Ranger Institute! We're a tad\l"
	.string "remote - to say the least - but we've\l"
	.string "made this place our home...and yours\l"
	.string "too!\p"
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
	.string "Exciting stuff indeed.\p"
	.string "You see, {PLAYER}, the Ivy River\n"
	.string "Ranger Institute studies Pokémon mega\l"
	.string "evolutions. To maintain a robust\l"
	.string "Pokémon ecosystem, we need to know as\l"
	.string "much as we can about these abnormal\l"
	.string "evolutions. This has become\l"
	.string "particularly important since the Mega\l"
	.string "Sharpedo sighting...$"

IvyRiver_Ranger_FirstQuest_Text_4:
# 50 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Director Ravine sent us a collection of\n"
	.string "items that induce mega evolution in\l"
	.string "certain Pokémon. We've been waiting for\l"
	.string "this for a long time!\p"
	.string "Thank you, {PLAYER}!\p"
	.string "And am I correct in assuming that this\n"
	.string "is your first mission?\p"
	.string "...\p"
	.string "In that case, I officially declare that\n"
	.string "you've cleared your first mission and I\l"
	.string "now promote you to the rank of\l"
	.string "Candidate!$"

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
# 88 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER}! I hope you're settling in\n"
	.string "well here.$"

IvyRiver_Ranger_FirstQuest_Reward_Text_0:
# 96 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Choose carefully! You might not get\n"
	.string "another one for a while.$"

IvyRiver_Ranger_FirstQuest_Reward_Text_1:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Venusaurite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_2:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Blastoisite$"

IvyRiver_Ranger_FirstQuest_Reward_Text_3:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Charizardite X$"

IvyRiver_Ranger_FirstQuest_Reward_Text_4:
# 99 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Charizardite Y$"

IvyRiver_Ranger_FirstQuest_Reward_Give_Text_0:
# 110 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Are you sure?$"

IvyRiver_Ranger_FirstQuest_RewardEnd_Text_0:
# 124 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
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
# 159 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey! You're the new Candidate right?\n"
	.string "Come here for a second.$"

IvyRiver_Ranger_TaurosTrigger_Text_1:
# 167 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "See this here Tauros? This is my baby\n"
	.string "right here - raised him all by myself, I\l"
	.string "did! This one's been traiend specially\l"
	.string "to take Rangers up and down Mt. Mirroh\l"
	.string "in a flash! You can head straight to\l"
	.string "Pelluca City or even to the Route 6 HQ\l"
	.string "if you like! All Candidates can use it.$"

IvyRiver_Ranger_TaurosBreeder_Text_0:
# 179 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Gotta love the speed on this bull, eh?$"

IvyRiver_Ranger_TaurosBreeder_Text_1:
# 181 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "This here Tauros is my baby! It can take\n"
	.string "you up and down Mt. Mirroh...oh, you\l"
	.string "aren't a Candidate yet? Sorry, only\l"
	.string "Candidates are allowed to use it.$"

IvyRiver_Ranger_Scientist_A_Text_0:
# 205 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "The spores are just spores. There's no\n"
	.string "connection to mega evolution. What a\l"
	.string "waste of time! I'll never get published\l"
	.string "like this.$"

IvyRiver_Ranger_Scientist_A_Text_1:
# 210 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Shiinotic emits\n"
	.string "flickering spores that can cause\l"
	.string "drowsiness? I'm studying whether those\l"
	.string "spores may be connected to mega\l"
	.string "evolution somehow. But since we're so\l"
	.string "far away from Vilethorn Woods, it's hard\l"
	.string "to conduct experiments.$"

IvyRiver_Ranger_Scientist_A_Text_2:
# 213 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Shiinotic that I can take\n"
	.string "spore samples of?$"

IvyRiver_Ranger_Scientist_A_Text_3:
# 218 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ah. Come back when you do!$"

IvyRiver_Ranger_Scientist_A_Text_4:
# 232 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Amazing! Such a beautiful, yet\n"
	.string "dangerous, Pokémon.\p"
	.string "Hang on while I take some samples.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_A_Text_5:
# 235 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "And...done!\p"
	.string "Thank you, Candidate. This'll be very\n"
	.string "helpful. Come back later if you want to\l"
	.string "find out the results of my research!$"

IvyRiver_Ranger_Scientist_A_Text_6:
# 241 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Shiinotic! You need to\n"
	.string "work harder, Candidate!$"

IvyRiver_Ranger_Scientist_B_Text_0:
# 249 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There seems to be no correlation\n"
	.string "between mega evolution and regional\l"
	.string "forms. This might be a failed\l"
	.string "experiment, but that's a learning in and\l"
	.string "of itself!$"

IvyRiver_Ranger_Scientist_B_Text_1:
# 254 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that Toedscool is a\n"
	.string "regional form of a Pokémon called\l"
	.string "Tentacool? I'm studying whether\l"
	.string "regional forms may be connected to\l"
	.string "mega evolution somehow. But I have no\l"
	.string "idea where to find a Toedscool!$"

IvyRiver_Ranger_Scientist_B_Text_2:
# 257 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Toedscool that I can\n"
	.string "study?$"

IvyRiver_Ranger_Scientist_B_Text_3:
# 276 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Wonderful! Toedscool and Tentacool\n"
	.string "look so similar, yet so different. The\l"
	.string "beauty of nature!\p"
	.string "Hang on while I take some photographs.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_B_Text_4:
# 285 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Toedscool! You need\n"
	.string "to work harder, Candidate!$"

IvyRiver_Ranger_Scientist_C_Text_0:
# 294 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Want to know the results of my study?\p"
	.string "There's no connection between\n"
	.string "gigantamaxing and mega evolution.\p"
	.string "I'm neither happy nor sad. This is the\n"
	.string "nature of the job, after all.$"

IvyRiver_Ranger_Scientist_C_Text_1:
# 299 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Did you know that in other regions,\n"
	.string "Lapras can undergo a transformation\l"
	.string "known as Gigantamaxing? I'm studying\l"
	.string "it's connection with mega evolution.\l"
	.string "But a Lapras is hard to come by...$"

IvyRiver_Ranger_Scientist_C_Text_2:
# 302 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Do you have a Lapras for me to take a\n"
	.string "look at?$"

IvyRiver_Ranger_Scientist_C_Text_3:
# 321 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Oh my! Such an elegant creature!\p"
	.string "Hang on while I make some notes.\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

IvyRiver_Ranger_Scientist_C_Text_4:
# 330 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hey, that's not a Lapras! You need to\n"
	.string "work harder, Candidate!$"

IvyRiver_Ranger_NPC_A_Text_0:
# 343 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hello! Are you a Candidate too? I just\n"
	.string "reached here for my first mission.\l"
	.string "They're making me catch wild Dreepy!$"

IvyRiver_Ranger_NPC_B_Text_0:
# 347 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "I've come to train my Kangaskhan with\n"
	.string "the CrazyTrain 2.0!$"

IvyRiver_Ranger_NPC_C_Text_0:
# 351 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "The CrazyTrain 2.0 is incredible! And\n"
	.string "you can even retrain your Pokémon any\l"
	.string "time you like!$"

IvyRiver_Ranger_NPC_D_Text_0:
# 355 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "You need to be an Associate to use the\n"
	.string "CrazyTrain 2.0. Come back after\l"
	.string "completing some more missions!$"

IvyRiver_Ranger_NPC_E_Text_0:
# 359 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "It's too stuffy upstairs! Too many\n"
	.string "stuffy scientists who don't know what\l"
	.string "its like to be out in the field.$"
