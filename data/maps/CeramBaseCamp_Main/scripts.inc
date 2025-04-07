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
# 14 "data//maps/CeramBaseCamp_Main/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeramBaseCamp_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CeramBaseCamp_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data//maps/CeramBaseCamp_Main/scripts.pory"
	checkflag FLAG_CERAMBASECAMP_EVIL_BATTLE
# 16 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeramBaseCamp_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CeramBaseCamp_Main_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, FALSE
	return


CeramBAseCamp_Main_OnWarp::
	.byte 0


CeramBaseCamp_Main_EventScript_EvilTrigger1::
# 28 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger1_2
# 29 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 31 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0
# 33 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 34 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger1_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger2::
# 39 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger2_2
# 40 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 42 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0
# 44 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 45 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger2_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger3::
# 50 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger3_2
# 51 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 53 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0
# 55 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 56 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger3_2:
	end


CeramBaseCamp_Main_EventScript_MainEncounter::
# 62 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 63 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0
# 64 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 65 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 66 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 67 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 68 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_1
# 70 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_2
# 71 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 72 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 76 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 77 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 78 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 80 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_4
# 81 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 84 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4
# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 86 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 88 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_5
# 89 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 90 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 91 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 92 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_6
# 93 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 94 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 95 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 96 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 97 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 99 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 100 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_8
# 101 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 104 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 105 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 106 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 109 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMP_EVIL_GABRIELLE, CeramBaseCamp_Main_EventScript_MainEncounter_Text_9
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 114 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 115 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_10
# 116 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 117 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 119 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 120 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_11
# 121 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 124 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 125 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_12
# 126 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 127 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 130 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 131 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_13
# 132 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 139 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadedefaultbgm
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 144 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 145 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 146 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_14
# 147 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 150 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 151 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_15
# 152 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_SHOPKEEPER2F, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10
# 154 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 157 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 158 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 159 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 160 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_16
# 161 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_17
# 162 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_18
# 163 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_19
# 164 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 167 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_TO_BLACK
# 168 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT1
# 169 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT2
# 170 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT3
# 171 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT4
# 172 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_BOSS
# 173 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_LEADER
# 174 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_SHOPKEEPER2F
# 176 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EVIL_BATTLE
# 177 "data//maps/CeramBaseCamp_Main/scripts.pory"
	clearflag FLAG_HIDE_BASECAMP_SHOPKEEPER
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
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
# 262 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 263 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 265 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC1_2
# 270 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC1_Text_1
CeramBaseCamp_Main_NPC1_1:
# 273 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC1_2:
# 267 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC1_Text_0
	goto CeramBaseCamp_Main_NPC1_1


CeramBaseCamp_Main_NPC2::
# 277 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 278 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 280 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC2_2
# 285 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC2_Text_1
CeramBaseCamp_Main_NPC2_1:
# 288 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC2_2:
# 282 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC2_Text_0
	goto CeramBaseCamp_Main_NPC2_1


CeramBaseCamp_Main_Smeargle::
# 292 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 293 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 294 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playmoncry SPECIES_SMEARGLE, CRY_MODE_NORMAL
# 295 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_Smeargle_Text_0
# 296 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	end


CeramBaseCamp_Main_NPC3::
# 302 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 303 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 305 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC3_2
# 318 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_2
CeramBaseCamp_Main_NPC3_1:
# 321 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC3_2:
# 307 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_MAIN_BERRY, CeramBaseCamp_Main_NPC3_5
# 310 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_1
# 311 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 312 "data//maps/CeramBaseCamp_Main/scripts.pory"
	giveitem ITEM_OCCA_BERRY, 2
# 313 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_MAIN_BERRY
	goto CeramBaseCamp_Main_NPC3_1

CeramBaseCamp_Main_NPC3_5:
# 308 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_0
	goto CeramBaseCamp_Main_NPC3_1


CeramBaseCamp_Main_NPC4::
# 325 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 326 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 328 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC4_2
# 333 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC4_Text_1
CeramBaseCamp_Main_NPC4_1:
# 336 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC4_2:
# 330 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC4_Text_0
	goto CeramBaseCamp_Main_NPC4_1


CeramBaseCamp_Main_NPC5::
# 341 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 342 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 344 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_NPC_TRADE, CeramBaseCamp_Main_NPC5_2
# 350 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC5_5
# 407 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_6
CeramBaseCamp_Main_NPC5_4:
# 410 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC5_2:
# 345 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_0
# 346 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	end

CeramBaseCamp_Main_NPC5_5:
# 352 "data//maps/CeramBaseCamp_Main/scripts.pory"
	showmonpic SPECIES_NYMBLE, 10, 3
# 353 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_1
# 354 "data//maps/CeramBaseCamp_Main/scripts.pory"
	hidemonpic
# 355 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_2, MSGBOX_YESNO
# 356 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Main_NPC5_8
# 403 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_5
	goto CeramBaseCamp_Main_NPC5_4

CeramBaseCamp_Main_NPC5_8:
# 360 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_WIMPOD
# 361 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 363 "data//maps/CeramBaseCamp_Main/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 364 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 368 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special ChoosePartyMon
# 369 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitstate
# 370 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 373 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq CeramBaseCamp_Main_NPC5_12
# 379 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 380 "data//maps/CeramBaseCamp_Main/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 381 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 382 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq CeramBaseCamp_Main_NPC5_14
# 394 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_4
# 395 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	end

CeramBaseCamp_Main_NPC5_12:
# 374 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_2
# 375 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	end

CeramBaseCamp_Main_NPC5_14:
# 384 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 385 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 386 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special CreateInGameTradePokemon
# 387 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special DoInGameTradeScene
# 388 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitstate
# 389 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_3
# 390 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_NPC_TRADE
	goto CeramBaseCamp_Main_NPC5_4


CeramBaseCamp_Main_NPC6::
# 442 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 443 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 445 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC6_2
# 450 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_6
CeramBaseCamp_Main_NPC6_1:
# 453 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_Main_NPC6_2:
# 447 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC6_Text_0
	goto CeramBaseCamp_Main_NPC6_1


# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0:
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 32 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
	step_end

# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0:
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 43 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0:
# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 54 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 63 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0:
# 63 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_up
	step_end

# 67 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1:
# 67 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_down
	step_end

# 76 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2:
# 76 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_right
	step_end

# 78 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3:
# 78 "data//maps/CeramBaseCamp_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 84 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4:
# 84 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 84 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 90 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5:
# 90 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6:
# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_down
	step_end

# 105 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7:
# 105 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8:
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9:
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10:
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

CeramBaseCamp_Main_EventScript_MainEncounter_Text_0:
# 65 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Release our shopkeeper at once!\n"
	.string "How dare you!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_1:
# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Get out of my face, leader! We have\n"
	.string "business that concerns you not one bit.\l"
	.string "We want his supplies for our trek up Mt.\l"
	.string "Ceram!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_2:
# 70 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: The name's ARIAN! And no way!\n"
	.string "This is MY base camp! You're not harming\l"
	.string "anyone while I'm around!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_3:
# 71 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Hahaha! Well said! You are a leader\n"
	.string "after all. But how do you intend to\l"
	.string "handle the two of us, when there's just\l"
	.string "one of you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_4:
# 80 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey - you! You look like a trainer. I\n"
	.string "need your help. These people are trying\l"
	.string "to steal the shopkeeper's supplies. We\l"
	.string "have to stop them!\p"
	.string "I'll take the boss. You deal with the one\n"
	.string "on the right for me!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_5:
# 88 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: It's you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_6:
# 92 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: Boss! Boss! This is the kid\n"
	.string "that beat me in Route 3. I was trying to\l"
	.string "take the dreamstone from that\l"
	.string "CLEFAIRY hiker.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_7:
# 96 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: That wasn't a dreamstone you idiot\n"
	.string "- that was an everstone! Nonetheless,\l"
	.string "remind me to punish you for that later.\p"
	.string "GABRIELLE:...yes boss.\p"
	.string "???: But there is a dreamstone sitting\n"
	.string "right on top of Mt. Ceram, and these\l"
	.string "people are in the way! GABRIELLE, you\l"
	.string "deal with this pest while I put the\l"
	.string "leader in her place. And you better win\l"
	.string "this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_8:
# 100 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: You heard that...what was\n"
	.string "your name again? {PLAYER}? Yeah,\l"
	.string "{PLAYER}! I'm not going to lose to you\l"
	.string "this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_9:
# 109 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! Not again!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_10:
# 115 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Agh! You stupid fire-type monkey!\n"
	.string "I just didn't have my {PKMN} with me.\p"
	.string "ARIAN: Serves you right! Now move over\n"
	.string "and give our shopkeeper back.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_11:
# 120 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: I...I'm sorry boss! I lost\n"
	.string "again.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_12:
# 125 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: You useless, incompetent fool!\n"
	.string "Argh! How can we accomplish anything\l"
	.string "with such terrible support!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_13:
# 131 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Fine, take your stupid shopkeeper\n"
	.string "back. We'll make it up the mountain\l"
	.string "anyway and there's nothing you can do\l"
	.string "to stop us!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_14:
# 146 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: Thanks for the help trainer!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_15:
# 151 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: They didn't harm you right?\p"
	.string "SHOPKEEPER: No they didn't. Thank you\n"
	.string "ARIAN! And you too, trainer. I owe you\l"
	.string "one. Stop by our counter downstairs for\l"
	.string "trekking supplies later on.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_16:
# 160 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: That boss was really tough!\p"
	.string "Hmm? You've met these thugs before?\n"
	.string "And you're also going to Mt. Ceram?\l"
	.string "What's up there?\p"
	.string "Dreamstones? I thought those were\n"
	.string "just rumours.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_17:
# 161 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: They're connected to Professor\n"
	.string "Tenebris' disappearance?\p"
	.string "Well I gotta do something - Professor\n"
	.string "Tenebris is the one who gave me my\l"
	.string "GROWLITHE.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_18:
# 162 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: Those guys seem to be after the\n"
	.string "dreamstone too...but I can't let you go\l"
	.string "up the mountain as you are now.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_19:
# 163 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "ARIAN: {PLAYER}, was it? Mt. Ceram is\n"
	.string "filled with dangerous {PKMN}. The rules\l"
	.string "around here are you can't climb unless\l"
	.string "you have my gym badge and my blessing.\l"
	.string "If you can beat me, I'll be able to send\l"
	.string "you up the hill with confidence. See you\l"
	.string "around, {PLAYER}!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0:
# 188 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey, where do you think you're going\n"
	.string "kid? This Supply Depot is under Team\l"
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
# 267 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "CENTISKORCH and SCOLIPEDE are\n"
	.string "fiercely territorial. They keep fighting\l"
	.string "each other in Mt. Ceram.$"

CeramBaseCamp_Main_NPC1_Text_1:
# 270 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Who are these Team Somber people? They\n"
	.string "act all high and mighty, but they're\l"
	.string "really just harrassing innocent folk.$"

CeramBaseCamp_Main_NPC2_Text_0:
# 282 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "It's believed that a dreamstone is a\n"
	.string "crystallised representation of a {PKMN}'s\l"
	.string "memories.$"

CeramBaseCamp_Main_NPC2_Text_1:
# 285 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I overheard them talking about a\n"
	.string "dreamstone! Dreamstones are supposed\l"
	.string "to be very rare. What do they want with\l"
	.string "one?$"

CeramBaseCamp_Main_Smeargle_Text_0:
# 295 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "SMEARGLE looks resolute. What is it\n"
	.string "thinking?$"

CeramBaseCamp_Main_NPC3_Text_0:
# 308 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Potions are all well and good, but\n"
	.string "berries can be used in battle!$"

CeramBaseCamp_Main_NPC3_Text_1:
# 310 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Berries don't grow here, so I brought my\n"
	.string "own! Would you like some?$"

CeramBaseCamp_Main_NPC3_Text_2:
# 318 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "These thugs took the shopkeeper\n"
	.string "upstairs! But ARIAN, the Gym Leader,\l"
	.string "just went up there to get him back. He's\l"
	.string "going to teach them a lesson!$"

CeramBaseCamp_Main_NPC4_Text_0:
# 330 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "This isn't really a town, so the supply\n"
	.string "depot and the management office is all\l"
	.string "we have.$"

CeramBaseCamp_Main_NPC4_Text_1:
# 333 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Shh! Don't look here! You'll attract\n"
	.string "their attention!$"

CeramBaseCamp_Main_NPC5_Text_0:
# 345 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "My sister will be so happy. She's always\n"
	.string "wanted her own {PKMN}.$"

CeramBaseCamp_Main_NPC5_Text_1:
# 353 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I want to gift my sister a DEWPIDER.\n"
	.string "It's her favourite {PKMN}! But I couldn't\l"
	.string "find any on Route 4.$"

CeramBaseCamp_Main_NPC5_Text_2:
# 355 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "If you have one, will you trade it for my\n"
	.string "WIMPOD?$"

CeramBaseCamp_Main_NPC5_Text_3:
# 389 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Thank you! Please take good care of my\n"
	.string "WIMPOD.$"

CeramBaseCamp_Main_NPC5_Text_4:
# 394 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey, this isn't a NYMBLE! I'm not stupid,\n"
	.string "you know?$"

CeramBaseCamp_Main_NPC5_Text_5:
# 403 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Oh...well, if you change your mind, you\n"
	.string "know where I am!$"

CeramBaseCamp_Main_NPC5_Text_6:
# 407 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I can't wait for ARIAN to put these\n"
	.string "crooks in their place!$"

CeramBaseCamp_Main_NPC6_Text_0:
# 447 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "On the other side of Mt. Ceram is\n"
	.string "Silversun City. I hear the trek down\l"
	.string "from the summit is tough, because the\l"
	.string "native CENTISKORCH and SCOLIPEDE\l"
	.string "fight each other.$"
