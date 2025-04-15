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
# 34 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger1_2
# 35 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 37 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 38 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0
# 39 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 40 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger1_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger2::
# 45 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger2_2
# 46 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 48 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0
# 50 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 51 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger2_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger3::
# 56 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger3_2
# 57 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 59 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0
# 61 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 62 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger3_2:
	end


CeramBaseCamp_Main_EventScript_MainEncounter::
# 68 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0
# 70 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 71 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 24
# 72 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 74 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 75 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 76 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 24
# 77 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_1
# 78 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_2
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 80 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 84 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 86 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 88 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 24
# 89 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_4
# 90 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 93 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4
# 94 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 95 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 96 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 97 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_5
# 99 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 100 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 101 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 102 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 103 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_6
# 104 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 105 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 106 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 107 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 108 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 109 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 110 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 111 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 112 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_8
# 114 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 117 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 119 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMP_EVIL_GABRIELLE, CeramBaseCamp_Main_EventScript_MainEncounter_Text_9
# 126 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 127 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_10
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 130 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 131 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 132 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_11
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 138 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_12
# 139 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 140 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 141 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 142 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 144 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_13
# 145 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9
# 150 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 152 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadedefaultbgm
# 156 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 157 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 158 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 159 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_14
# 160 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 161 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 162 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 163 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 164 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_15
# 165 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_SHOPKEEPER2F, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10
# 167 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 170 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 171 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 172 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 173 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_16
# 174 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_17
# 175 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_18
# 176 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_19
# 177 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_TO_BLACK
# 181 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT1
# 182 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT2
# 183 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT3
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT4
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_BOSS
# 186 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_LEADER
# 187 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_SHOPKEEPER2F
# 189 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EVIL_BATTLE
# 190 "data//maps/CeramBaseCamp_Main/scripts.pory"
	clearflag FLAG_HIDE_BASECAMP_SHOPKEEPER
# 191 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setvar VAR_SUPPLY_DEPOT_STATE, 1
# 193 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 194 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return


CeramBaseCamp_Main_TrainerBattle_Grunt1::
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT1, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1
# 203 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2
# 204 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt2::
# 209 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT2, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1
# 210 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2
# 211 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt3::
# 216 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT3, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1
# 217 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2
# 218 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_Pokemart_EventScript_Clerk::
# 237 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lock
# 238 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 239 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_Pokemart_EventScript_Clerk_Text_0
# 240 "data//maps/CeramBaseCamp_Main/scripts.pory"
	message gText_HowMayIServeYou
# 241 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmessage
# 242 "data//maps/CeramBaseCamp_Main/scripts.pory"
	pokemart CeramBaseCamp_Main_Pokemart_Inventory
# 243 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 244 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


	.align 2
# 249 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_Pokemart_Inventory:
# 250 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_POKE_BALL
# 251 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_REPEL
# 252 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 253 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 254 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_SODA_POP
# 255 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 256 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_REVIVE
	.2byte ITEM_NONE

CeramBaseCamp_Main_NPC1::
# 277 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC1_2
# 282 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC1_Text_1, MSGBOX_NPC
CeramBaseCamp_Main_NPC1_1:
	end

CeramBaseCamp_Main_NPC1_2:
# 279 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC1_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC1_1


CeramBaseCamp_Main_NPC2::
# 288 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC2_2
# 293 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC2_Text_1, MSGBOX_NPC
CeramBaseCamp_Main_NPC2_1:
	end

CeramBaseCamp_Main_NPC2_2:
# 290 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC2_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC2_1


CeramBaseCamp_Main_Smeargle::
# 299 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playmoncry SPECIES_SMEARGLE, CRY_MODE_NORMAL
# 300 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_Smeargle_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_Main_NPC3::
# 306 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC3_2
# 319 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_2, MSGBOX_NPC
CeramBaseCamp_Main_NPC3_1:
	end

CeramBaseCamp_Main_NPC3_2:
# 308 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_MAIN_BERRY, CeramBaseCamp_Main_NPC3_5
# 311 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_1, MSGBOX_NPC
# 312 "data//maps/CeramBaseCamp_Main/scripts.pory"
	giveitem ITEM_OCCA_BERRY, 2
# 313 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 314 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_MAIN_BERRY
	goto CeramBaseCamp_Main_NPC3_1

CeramBaseCamp_Main_NPC3_5:
# 309 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC3_1


CeramBaseCamp_Main_NPC4::
# 326 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC4_2
# 331 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC4_Text_1, MSGBOX_NPC
CeramBaseCamp_Main_NPC4_1:
	end

CeramBaseCamp_Main_NPC4_2:
# 328 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC4_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC4_1


CeramBaseCamp_Main_NPC5::
# 338 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_NPC_TRADE, CeramBaseCamp_Main_NPC5_2
# 343 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC5_5
# 399 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_6, MSGBOX_NPC
CeramBaseCamp_Main_NPC5_4:
	end

CeramBaseCamp_Main_NPC5_2:
# 339 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_0, MSGBOX_NPC
	end

CeramBaseCamp_Main_NPC5_5:
# 345 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 346 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 347 "data//maps/CeramBaseCamp_Main/scripts.pory"
	showmonpic SPECIES_DEWPIDER, 10, 3
# 348 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_1
# 349 "data//maps/CeramBaseCamp_Main/scripts.pory"
	hidemonpic
# 350 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_2, MSGBOX_YESNO
# 351 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Main_NPC5_8
# 395 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_5, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC5_4

CeramBaseCamp_Main_NPC5_8:
# 355 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_WIMPOD
# 356 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 358 "data//maps/CeramBaseCamp_Main/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 359 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 363 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special ChoosePartyMon
# 364 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitstate
# 365 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 368 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq CeramBaseCamp_Main_NPC5_12
# 374 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 375 "data//maps/CeramBaseCamp_Main/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 376 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 377 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq CeramBaseCamp_Main_NPC5_14
# 390 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_4, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC5_4

CeramBaseCamp_Main_NPC5_12:
# 369 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_2
# 370 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	end

CeramBaseCamp_Main_NPC5_14:
# 379 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 380 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 381 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special CreateInGameTradePokemon
# 382 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special DoInGameTradeScene
# 383 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitstate
# 384 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_3
# 385 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 386 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_NPC_TRADE
	goto CeramBaseCamp_Main_NPC5_4


CeramBaseCamp_Main_NPC6::
# 434 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC6_2
# 439 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_6, MSGBOX_NPC
CeramBaseCamp_Main_NPC6_1:
	end

CeramBaseCamp_Main_NPC6_2:
# 436 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC6_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC6_1


# 38 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0:
# 38 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 38 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
	step_end

# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0:
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0:
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0:
# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_up
	step_end

# 74 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1:
# 74 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_down
	step_end

# 84 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2:
# 84 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_right
	step_end

# 86 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3:
# 86 "data//maps/CeramBaseCamp_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 93 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4:
# 93 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 93 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 100 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5:
# 100 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 110 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6:
# 110 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_down
	step_end

# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7:
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8:
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9:
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10:
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

CeramBaseCamp_Main_EventScript_MainEncounter_Text_0:
# 72 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Release our shopkeeper at once!\n"
	.string "How dare you!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_1:
# 77 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Get out of my face, leader! We have\n"
	.string "business that concerns you not one bit.\l"
	.string "We want his supplies for our trek up Mt.\l"
	.string "Ceram!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_2:
# 78 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIANA: The name's Ariana! And no way!\n"
	.string "This is MY base camp! You're not harming\l"
	.string "anyone while I'm around!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_3:
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Hahaha! Well said! You are a leader\n"
	.string "after all. But how do you intend to\l"
	.string "handle the two of us, when there's just\l"
	.string "one of you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_4:
# 89 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey - you! You look like a trainer. I\n"
	.string "need your help. These people are trying\l"
	.string "to steal the shopkeeper's supplies. We\l"
	.string "have to stop them!\p"
	.string "I'll take the boss. You deal with the one\n"
	.string "on the right for me!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_5:
# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: It's you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_6:
# 103 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: Boss! Boss! This is the kid\n"
	.string "that beat me in Route 3. I was trying to\l"
	.string "take the dreamstone from that Clefairy\l"
	.string "hiker.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_7:
# 108 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: That wasn't a dreamstone you idiot\n"
	.string "- that was an everstone! Nonetheless,\l"
	.string "remind me to punish you for that later.\p"
	.string "GABRIELLE:...yes boss.\p"
	.string "???: But there is a dreamstone sitting\n"
	.string "right on top of Mt. Ceram, and these\l"
	.string "people are in the way! Gabrielle, you\l"
	.string "deal with this pest while I put the\l"
	.string "leader in her place. And you better win\l"
	.string "this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_8:
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: You heard that...what was\n"
	.string "your name again? {PLAYER}? Yeah,\l"
	.string "{PLAYER}! I'm not going to lose to you\l"
	.string "this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_9:
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! Not again!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_10:
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Agh! You and your stupid\n"
	.string "FIRE-type Pokémon! I just didn't have\l"
	.string "my Pokémon with me.\p"
	.string "ARIANA: Serves you right! Now move over\n"
	.string "and give our shopkeeper back.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_11:
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: I...I'm sorry boss! I lost\n"
	.string "again.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_12:
# 138 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: You useless, incompetent fool!\n"
	.string "Argh! How can we accomplish anything\l"
	.string "with such terrible support!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_13:
# 144 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Fine, take your stupid shopkeeper\n"
	.string "back. We'll make it up the mountain\l"
	.string "anyway and there's nothing you can do\l"
	.string "to stop us!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_14:
# 159 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIANA: Thanks for the help trainer!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_15:
# 164 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIANA: They didn't harm you right?\p"
	.string "SHOPKEEPER: No they didn't. Thank you\n"
	.string "Ariana! And you too, trainer. I owe you\l"
	.string "one. Stop by our counter downstairs for\l"
	.string "trekking supplies later on.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_16:
# 173 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIANA: That boss was really tough!\p"
	.string "Hmm? You've met these thugs before?\n"
	.string "And you're also going to Mt. Ceram?\l"
	.string "What's up there?\p"
	.string "Dreamstones? I thought those were\n"
	.string "just rumours.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_17:
# 174 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIANA: They're connected to\n"
	.string "Professor Tenebris' disappearance?\p"
	.string "ARIANA: Well I gotta do something -\n"
	.string "Professor Tenebris is the one who gave\l"
	.string "me my Tauros.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_18:
# 175 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIANA: Those guys seem to be after\n"
	.string "the dreamstone too...but I can't let you\l"
	.string "go up the mountain as you are now.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_19:
# 176 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIANA: {PLAYER}, was it? Mt. Ceram is\n"
	.string "filled with dangerous Pokémon. The\l"
	.string "rules around here are you can't climb\l"
	.string "unless you have my gym badge and my\l"
	.string "blessing. If you can beat me, I'll be\l"
	.string "able to send you up the hill with\l"
	.string "confidence. See you around, {PLAYER}!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0:
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey, where do you think you're going\n"
	.string "kid? This Supply Depot is under Team\l"
	.string "Somber's control!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1:
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Gah! I lost!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2:
# 203 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "We're here to collect supplies for the\n"
	.string "climb up Mt. Ceram.$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0:
# 209 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "We're going to steal all the climbing\n"
	.string "supplies here!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1:
# 209 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I can't believe it!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2:
# 210 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You just got lucky. I'll crush you if I\n"
	.string "ever see you again!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0:
# 216 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "How did you get this far? No matter -\n"
	.string "you can't stop us from taking all the\l"
	.string "supplies!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1:
# 216 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! My Pokémon were too weak!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2:
# 217 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You're too late - the boss is already\n"
	.string "with the shopkeeper.$"

CeramBaseCamp_Main_Pokemart_EventScript_Clerk_Text_0:
# 239 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey {PLAYER}! Here you can get\n"
	.string "mountain-climbing supplies!$"

CeramBaseCamp_Main_NPC1_Text_0:
# 279 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Centiskorch and Scolipede are fiercely\n"
	.string "territorial. They keep fighting each\l"
	.string "other in Mt. Ceram.$"

CeramBaseCamp_Main_NPC1_Text_1:
# 282 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Who are these Team Somber people? They\n"
	.string "act all high and mighty, but they're\l"
	.string "really just harrassing innocent folk.$"

CeramBaseCamp_Main_NPC2_Text_0:
# 290 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "It's believed that a dreamstone is a\n"
	.string "crystallised representation of a\l"
	.string "Pokémon's memories.$"

CeramBaseCamp_Main_NPC2_Text_1:
# 293 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I overheard them talking about a\n"
	.string "dreamstone! Dreamstones are supposed\l"
	.string "to be very rare. What do they want with\l"
	.string "one?$"

CeramBaseCamp_Main_Smeargle_Text_0:
# 300 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "SMEARGLE looks resolute. What is it\n"
	.string "thinking?$"

CeramBaseCamp_Main_NPC3_Text_0:
# 309 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Potions are all well and good, but\n"
	.string "berries can be used in battle!$"

CeramBaseCamp_Main_NPC3_Text_1:
# 311 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Berries don't grow here, so I brought my\n"
	.string "own! Would you like some?$"

CeramBaseCamp_Main_NPC3_Text_2:
# 319 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "These thugs took the shopkeeper\n"
	.string "upstairs! But Ariana, the Gym Leader,\l"
	.string "just went up there to get him back.\l"
	.string "She's going to teach them a lesson!$"

CeramBaseCamp_Main_NPC4_Text_0:
# 328 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "This isn't really a town, so the supply\n"
	.string "depot and the management office is all\l"
	.string "we have.$"

CeramBaseCamp_Main_NPC4_Text_1:
# 331 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Shh! Don't look here! You'll attract\n"
	.string "their attention!$"

CeramBaseCamp_Main_NPC5_Text_0:
# 339 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "My sister will be so happy. She's always\n"
	.string "wanted her own Pokémon.$"

CeramBaseCamp_Main_NPC5_Text_1:
# 348 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I want to gift my sister a Dewpider. It's\n"
	.string "her favourite Pokémon! But I couldn't\l"
	.string "find any on Route 4.$"

CeramBaseCamp_Main_NPC5_Text_2:
# 350 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "If you have one, will you trade it for my\n"
	.string "Wimpod?$"

CeramBaseCamp_Main_NPC5_Text_3:
# 384 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Thank you! Please take good care of my\n"
	.string "Wimpod.$"

CeramBaseCamp_Main_NPC5_Text_4:
# 390 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey, this isn't a Dewpider! I'm not\n"
	.string "stupid, you know?$"

CeramBaseCamp_Main_NPC5_Text_5:
# 395 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Oh...well, if you change your mind, you\n"
	.string "know where I am!$"

CeramBaseCamp_Main_NPC5_Text_6:
# 399 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I can't wait for Ariana to put these\n"
	.string "crooks in their place!$"

CeramBaseCamp_Main_NPC6_Text_0:
# 436 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "On the other side of Mt. Ceram is\n"
	.string "Silversun City. I hear the trek down\l"
	.string "from the summit is tough, because the\l"
	.string "native CENTISKORCH and SCOLIPEDE\l"
	.string "fight each other.$"
