# 2 "data//maps/CeramBaseCamp_Main/scripts.pory"

# 3 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_GRUNT1, 1
# 4 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_GRUNT2, 2
# 5 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_GRUNT3, 3
# 6 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_GRUNT4, 4
# 7 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_BOSS, 9
# 8 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_LEADER, 5
# 9 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_SHOPKEEPER2F, 8

CeramBaseCamp_Main_MapScripts::
	.byte 0


CeramBaseCamp_Main_EventScript_EvilTrigger1::
# 17 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger1_2
# 20 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 21 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0
# 22 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 23 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger1_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger2::
# 28 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger2_2
# 31 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0
# 33 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 34 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger2_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger3::
# 39 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger3_2
# 42 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0
# 44 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 45 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger3_2:
	end


CeramBaseCamp_Main_EventScript_MainEncounter::
# 51 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 52 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0
# 53 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 55 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 56 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 57 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 58 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_1
# 59 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_2
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 61 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 65 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 66 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 67 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 68 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_4
# 70 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4
# 74 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 75 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 76 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 77 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_5
# 78 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 80 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 81 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_6
# 82 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 83 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 84 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 86 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 88 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 89 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_8
# 90 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 93 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 94 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 95 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMP_EVIL_GABRIELLE, CeramBaseCamp_Main_EventScript_MainEncounter_Text_9
# 102 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 103 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 104 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_10
# 105 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 106 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_11
# 107 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 108 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 109 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_12
# 110 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 111 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 112 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_13
# 114 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 115 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 116 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 117 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_14
# 119 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9
# 124 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 130 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 131 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_15
# 132 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_16
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_SHOPKEEPER2F, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10
# 138 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 141 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 142 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 144 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_17
# 145 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_18
# 146 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_19
# 147 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_20
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 151 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_TO_BLACK
# 152 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT1
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT2
# 154 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT3
# 155 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT4
# 156 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_BOSS
# 157 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_LEADER
# 158 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_SHOPKEEPER2F
# 160 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EVIL_BATTLE
# 161 "data//maps/CeramBaseCamp_Main/scripts.pory"
	clearflag FLAG_HIDE_BASECAMP_SHOPKEEPER
# 163 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 164 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return


CeramBaseCamp_Main_EventScript_ExitTrigger::
# 173 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 174 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement 9, CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_0
# 175 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 176 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 177 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_ExitTrigger_Text_0
# 178 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_1
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 181 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return


CeramBaseCamp_Main_TrainerBattle_Grunt1::
# 188 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT1, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1
# 189 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2
# 190 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt2::
# 195 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT2, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1
# 196 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2
# 197 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt3::
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT3, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1
# 203 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2
# 204 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_Pokemart_EventScript_Clerk::
# 223 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lock
# 224 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 225 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_Pokemart_EventScript_Clerk_Text_0
# 226 "data//maps/CeramBaseCamp_Main/scripts.pory"
	message gText_HowMayIServeYou
# 227 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmessage
# 228 "data//maps/CeramBaseCamp_Main/scripts.pory"
	pokemart CeramBaseCamp_Main_Pokemart_Inventory
# 229 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 230 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


	.align 2
# 235 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_Pokemart_Inventory:
# 236 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_POKE_BALL
# 237 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_REPEL
# 238 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 239 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 240 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_SODA_POP
# 241 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

CeramBaseCamp_Main_NPC1::
# 264 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 265 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 267 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC1_2
# 272 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC1_Text_1
CeramBaseCamp_Main_NPC1_1:
# 275 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC1_2:
# 269 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC1_Text_0
	goto CeramBaseCamp_Main_NPC1_1


CeramBaseCamp_Main_NPC2::
# 279 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 280 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 282 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC2_2
# 287 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC2_Text_1
CeramBaseCamp_Main_NPC2_1:
# 290 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC2_2:
# 284 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC2_Text_0
	goto CeramBaseCamp_Main_NPC2_1


CeramBaseCamp_Main_NPC3::
# 295 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 296 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 298 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC3_2
# 311 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_2
CeramBaseCamp_Main_NPC3_1:
# 314 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC3_2:
# 300 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_MAIN_BERRY, CeramBaseCamp_Main_NPC3_5
# 303 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_1
# 304 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 305 "data//maps/CeramBaseCamp_Main/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 2
# 306 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_MAIN_BERRY
	goto CeramBaseCamp_Main_NPC3_1

CeramBaseCamp_Main_NPC3_5:
# 301 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_0
	goto CeramBaseCamp_Main_NPC3_1


CeramBaseCamp_Main_NPC4::
# 318 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 319 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 321 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC4_2
# 326 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC4_Text_1
CeramBaseCamp_Main_NPC4_1:
# 329 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC4_2:
# 323 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC4_Text_0
	goto CeramBaseCamp_Main_NPC4_1


CeramBaseCamp_Main_NPC5::
# 334 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 335 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 337 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_NPC_TRADE, CeramBaseCamp_Main_NPC5_2
# 343 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC5_5
# 400 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_6
CeramBaseCamp_Main_NPC5_4:
# 403 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC5_2:
# 338 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_0
# 339 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	end

CeramBaseCamp_Main_NPC5_5:
# 345 "data//maps/CeramBaseCamp_Main/scripts.pory"
	showmonpic SPECIES_NYMBLE, 10, 3
# 346 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_1
# 347 "data//maps/CeramBaseCamp_Main/scripts.pory"
	hidemonpic
# 348 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_2, MSGBOX_YESNO
# 349 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Main_NPC5_8
# 396 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_5
	goto CeramBaseCamp_Main_NPC5_4

CeramBaseCamp_Main_NPC5_8:
# 353 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MEOWTH
# 354 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 356 "data//maps/CeramBaseCamp_Main/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 357 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 361 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special ChoosePartyMon
# 362 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitstate
# 363 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 366 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq CeramBaseCamp_Main_NPC5_12
# 372 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 373 "data//maps/CeramBaseCamp_Main/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 374 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 375 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq CeramBaseCamp_Main_NPC5_14
# 387 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_4
# 388 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	end

CeramBaseCamp_Main_NPC5_12:
# 367 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_2
# 368 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	end

CeramBaseCamp_Main_NPC5_14:
# 377 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 378 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 379 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special CreateInGameTradePokemon
# 380 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special DoInGameTradeScene
# 381 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitstate
# 382 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_3
# 383 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_NPC_TRADE
	goto CeramBaseCamp_Main_NPC5_4


CeramBaseCamp_Main_NPC6::
# 435 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 436 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 438 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC6_2
# 443 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_6
CeramBaseCamp_Main_NPC6_1:
# 446 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC6_2:
# 440 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC6_Text_0
	goto CeramBaseCamp_Main_NPC6_1


# 21 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0:
# 21 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 21 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
	step_end

# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0:
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0:
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 52 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0:
# 52 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_up
	step_end

# 56 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1:
# 56 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_down
	step_end

# 65 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2:
# 65 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_right
	step_end

# 67 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3:
# 67 "data//maps/CeramBaseCamp_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4:
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5:
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6:
# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_down
	step_end

# 94 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7:
# 94 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8:
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9:
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10:
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 174 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_0:
# 174 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
# 174 "data//maps/CeramBaseCamp_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_1:
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
	step_end

CeramBaseCamp_Main_EventScript_MainEncounter_Text_0:
# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Release our shopkeeper at once!\n"
	.string "How dare you!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_1:
# 58 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Get out of my face, leader! We have\n"
	.string "business that concerns you not one bit.\l"
	.string "We want his supplies for our trek up MT\l"
	.string "CERAM!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_2:
# 59 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: The name's ARIAN! And no way!\n"
	.string "This is MY base camp! You're not harming\l"
	.string "anyone while I'm around!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_3:
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Hahaha! Well said! You are a leader\n"
	.string "after all. But how do you intend to\l"
	.string "handle the two of us, when there's just\l"
	.string "one of you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_4:
# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey - you! You look like a trainer. I\n"
	.string "need your help. These people are trying\l"
	.string "to steal the shopkeeper's supplies. We\l"
	.string "have to stop them!\p"
	.string "I'll take the boss. You deal with the one\n"
	.string "on the right for me!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_5:
# 77 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: GABRIELLE: It's you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_6:
# 81 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: Boss! Boss! This is the kid\n"
	.string "that beat me in Route 4. I was trying to\l"
	.string "take the dreamstone from that Clefairy\l"
	.string "hiker.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_7:
# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: That wasn't a dreamstone you idiot\n"
	.string "- that was a moonstone! Nonetheless,\l"
	.string "remind me to punish you for that later.\p"
	.string "GABRIELLE:...yes boss.\p"
	.string "???: But there is a dreamstone sitting\n"
	.string "right on top of Mt. Ceram, and these\l"
	.string "people are in the way! GABRIELLE, you\l"
	.string "deal with this pest while I put the\l"
	.string "leader in her place. And you better win\l"
	.string "this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_8:
# 89 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: You heard that...what was\n"
	.string "your name again? {PLAYER}? Yeah,\l"
	.string "{PLAYER}! I'm not going to lose to you\l"
	.string "this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_9:
# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! Not again!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_10:
# 104 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Agh! You stupid fire-type monkey!\n"
	.string "I just didn't have my {PKMN} with me.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_11:
# 106 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: Serves you right! Now move over\n"
	.string "and give our shopkeeper back.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_12:
# 109 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: I...I'm sorry boss! I lost\n"
	.string "again.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_13:
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: You useless, incompetent fool!\n"
	.string "Argh! How can we accomplish anything\l"
	.string "with such terrible support!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_14:
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Fine, take your stupid shopkeeper\n"
	.string "back. We'll make it up the mountain\l"
	.string "anyway and there's nothing you can do\l"
	.string "to stop us!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_15:
# 131 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: Thanks for the help trainer! I\n"
	.string "needed it there. I could've taken them\l"
	.string "both alone, but I didn't have all my {PKMN}\l"
	.string "on me.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_16:
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: They didn't harm you right?\p"
	.string "SHOPKEEPER: No they didn't. Thank you\n"
	.string "ARIAN! And you too, trainer. I owe you\l"
	.string "one. Stop by our counter downstairs for\l"
	.string "trekking supplies later on.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_17:
# 144 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: That boss was really tough!\p"
	.string "Hmm? You've met these thugs before?\n"
	.string "And you're also going to Mt. Ceram?\l"
	.string "What's up there?\p"
	.string "Dreamstones? I thought those were\n"
	.string "just rumours.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_18:
# 145 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: They're connected to Professor\n"
	.string "Tenebris' disappearance?\p"
	.string "Well I gotta do something - Professor\n"
	.string "Tenebris is the one who gave me my\l"
	.string "GROWLITHE.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_19:
# 146 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: Those guys seem to be after the\n"
	.string "dreamstone too...but I can't let you go\l"
	.string "up the mountain as you are now.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_20:
# 147 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: {PLAYER}, was it? Mt. Ceram is\n"
	.string "filled with dangerous {PKMN}. The rules\l"
	.string "around here are you can't climb unless\l"
	.string "you have my gym badge and my blessing.\l"
	.string "If you can beat me, I'll be able to send\l"
	.string "you up the hill with confidence. See you\l"
	.string "around, {PLAYER}!$"

CeramBaseCamp_Main_EventScript_ExitTrigger_Text_0:
# 177 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey kid! The rules are you can't climb\n"
	.string "unless you have the FIRE BADGE. If you\l"
	.string "can't beat ARIAN, you won't be able to\l"
	.string "handle the heat of the mountain!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0:
# 188 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey, where do you think you're going\n"
	.string "kid? This supply depot is under Team\l"
	.string "Somber's control!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1:
# 188 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Gah! I lost!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2:
# 189 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "We're here to collect supplies for the\n"
	.string "climb up Mt. Ceram.$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0:
# 195 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "We're going to steal all the climbing\n"
	.string "supplies here!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1:
# 195 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I can't believe it!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2:
# 196 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You just got lucky. I'll crush you if I\n"
	.string "ever see you again!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0:
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "How did you get this far? No matter -\n"
	.string "you can't stop us from taking all the\l"
	.string "supplies!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1:
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! My {PKMN} were too weak!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2:
# 203 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You're too late - the boss is already\n"
	.string "with the shopkeeper.$"

CeramBaseCamp_Main_Pokemart_EventScript_Clerk_Text_0:
# 225 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey {PLAYER}! Here you can get\n"
	.string "mountain-climbing supplies!$"

CeramBaseCamp_Main_NPC1_Text_0:
# 269 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I'm glad those Team Somber people have\n"
	.string "left!$"

CeramBaseCamp_Main_NPC1_Text_1:
# 272 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Who are these Team Somber people? They\n"
	.string "act all high and mighty, but they're\l"
	.string "really just harrassing innocent folk.$"

CeramBaseCamp_Main_NPC2_Text_0:
# 284 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "It's believed that a dreamstone is a\n"
	.string "crystallised representation of a {PKMN}'s\l"
	.string "memories.$"

CeramBaseCamp_Main_NPC2_Text_1:
# 287 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I overheard them talking about a\n"
	.string "dreamstone! Dreamstones are supposed\l"
	.string "to be very rare. What do they want with\l"
	.string "one?$"

CeramBaseCamp_Main_NPC3_Text_0:
# 301 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Potions are all well and good, but\n"
	.string "berries can be used in battle!$"

CeramBaseCamp_Main_NPC3_Text_1:
# 303 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Berries don't grow here, so I brought my\n"
	.string "own! Would you like some?$"

CeramBaseCamp_Main_NPC3_Text_2:
# 311 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "These thugs took the shopkeeper\n"
	.string "upstairs! But ARIAN, the Gym Leader,\l"
	.string "just went up there to get him back. He's\l"
	.string "going to teach them a lesson!$"

CeramBaseCamp_Main_NPC4_Text_0:
# 323 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "This isn't really a town, so the supply\n"
	.string "depot and the management office is all\l"
	.string "we have.$"

CeramBaseCamp_Main_NPC4_Text_1:
# 326 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Shh! Don't look here! You'll attract\n"
	.string "their attention!$"

CeramBaseCamp_Main_NPC5_Text_0:
# 338 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "My sister will be so happy. She's always\n"
	.string "wanted her own {PKMN}.$"

CeramBaseCamp_Main_NPC5_Text_1:
# 346 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I want to gift my sister a NYMBLE. It's\n"
	.string "her favourite {PKMN}! But I couldn't find\l"
	.string "any on Route 4.$"

CeramBaseCamp_Main_NPC5_Text_2:
# 348 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "If you have one, will you trade it for my\n"
	.string "WIMPOD?$"

CeramBaseCamp_Main_NPC5_Text_3:
# 382 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Thank you! Please take good care of my\n"
	.string "WIMPOD.$"

CeramBaseCamp_Main_NPC5_Text_4:
# 387 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey, this isn't a NYMBLE! I'm not stupid,\n"
	.string "you know?$"

CeramBaseCamp_Main_NPC5_Text_5:
# 396 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Oh...well, if you change your mind, you\n"
	.string "know where I am!$"

CeramBaseCamp_Main_NPC5_Text_6:
# 400 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I can't wait for ARIAN to put these\n"
	.string "crooks in their place!$"

CeramBaseCamp_Main_NPC6_Text_0:
# 440 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "On the other side of Mt. Ceram is\n"
	.string "Goldensun City. I hear the trek down\l"
	.string "from the summit is tough, because the\l"
	.string "native CENTISKORCH and SCOLIPEDE\l"
	.string "fight each other.$"
