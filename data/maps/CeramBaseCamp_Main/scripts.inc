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
    .set LOCALID_BOSS, 10
# 8 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_LEADER, 5
# 9 "data//maps/CeramBaseCamp_Main/scripts.pory"
    .set LOCALID_SHOPKEEPER2F, 9

CeramBaseCamp_Main_MapScripts::
# 14 "data//maps/CeramBaseCamp_Main/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CeramBaseCamp_Main_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

CeramBaseCamp_Main_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 14 "data//maps/CeramBaseCamp_Main/scripts.pory"
	CeramBaseCamp_MapScript_OnWarp
	return


CeramBaseCamp_MapScript_OnWarp::
	return


CeramBaseCamp_Main_EventScript_EvilTrigger1::
# 23 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger1_2
# 26 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 27 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0
# 28 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 29 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger1_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger2::
# 34 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger2_2
# 37 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 38 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0
# 39 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 40 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger2_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger3::
# 45 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger3_2
# 48 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0
# 50 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 51 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger3_2:
	end


CeramBaseCamp_Main_EventScript_MainEncounter::
# 57 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 58 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0
# 59 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 61 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 62 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 63 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 64 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_1
# 65 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_2
# 66 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 67 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 71 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 72 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 74 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 75 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_4
# 76 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4
# 80 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 81 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 82 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 83 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_5
# 84 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 86 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_6
# 88 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 89 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 90 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 91 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 92 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 93 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 94 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 95 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_8
# 96 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 99 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 100 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 101 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 104 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMP_EVIL_GABRIELLE, CeramBaseCamp_Main_EventScript_MainEncounter_Text_9
# 108 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 109 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 110 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_10
# 111 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 112 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_11
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 114 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 115 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_12
# 116 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 117 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 119 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_13
# 120 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 121 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 124 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_14
# 125 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9
# 130 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_15
# 138 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 139 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 140 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 141 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_16
# 142 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_SHOPKEEPER2F, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10
# 144 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 147 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 150 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_17
# 151 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_18
# 152 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_19
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_20
# 154 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 157 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_TO_BLACK
# 158 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT1
# 159 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT2
# 160 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT3
# 161 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT4
# 162 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_BOSS
# 163 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_LEADER
# 164 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_SHOPKEEPER2F
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EVIL_BATTLE
# 168 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 169 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return


CeramBaseCamp_Main_EventScript_ExitTrigger::
# 178 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement 9, CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_0
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 181 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 182 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_ExitTrigger_Text_0
# 183 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_1
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 186 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return


CeramBaseCamp_Main_TrainerBattle_Grunt1::
# 193 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT1, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1
# 194 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2
# 195 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt2::
# 200 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT2, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1
# 201 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt3::
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT3, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1
# 208 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2
# 209 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_Pokemart_EventScript_Clerk::
# 216 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lock
# 217 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 218 "data//maps/CeramBaseCamp_Main/scripts.pory"
	message gText_HowMayIServeYou
# 219 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmessage
# 220 "data//maps/CeramBaseCamp_Main/scripts.pory"
	pokemart CeramBaseCamp_Main_Pokemart_Inventory
# 221 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 222 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


	.align 2
# 227 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_Pokemart_Inventory:
# 228 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_POTION
# 229 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

# 27 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0:
# 27 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 27 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
	step_end

# 38 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0:
# 38 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 38 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 38 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 38 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0:
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 58 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0:
# 58 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_up
	step_end

# 62 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1:
# 62 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_down
	step_end

# 71 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2:
# 71 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_right
	step_end

# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3:
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4:
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5:
# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 93 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6:
# 93 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_down
	step_end

# 100 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7:
# 100 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8:
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9:
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10:
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_0:
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_1:
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
	step_end

CeramBaseCamp_Main_EventScript_MainEncounter_Text_0:
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Release our shopkeeper at once!\n"
	.string "How dare you!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_1:
# 64 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Get out of my face, leader! We have\n"
	.string "business that concerns you not one bit.\l"
	.string "We want his supplies for our trek up MT\l"
	.string "CERAM!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_2:
# 65 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: The name's FLANNERY! And no\n"
	.string "way! This is MY base camp! You're not\l"
	.string "harming anyone while I'm around!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_3:
# 66 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Hahaha! Well said! You are a leader\n"
	.string "after all. But how do you intend to\l"
	.string "handle the two of us, when there's just\l"
	.string "one of you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_4:
# 75 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey - you! You look like a trainer. I\n"
	.string "need your help. These people are trying\l"
	.string "to steal the shopkeeper's supplies. We\l"
	.string "have to stop them!\p"
	.string "I'll take the boss. You deal with the one\n"
	.string "on the right for me!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_5:
# 83 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: GABRIELLE: It's you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_6:
# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: Boss! Boss! This is the kid\n"
	.string "that beat me in Route 4. I was trying to\l"
	.string "take the dreamstone from that Celfairy\l"
	.string "hiker.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_7:
# 91 "data//maps/CeramBaseCamp_Main/scripts.pory"
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
# 95 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: You heard that...what was\n"
	.string "your name again? {PLAYER}? Yeah,\l"
	.string "{PLAYER}! I'm not going to lose to you\l"
	.string "this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_9:
# 104 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! Not again!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_10:
# 110 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Agh! You stupid fire-type monkey!\n"
	.string "I just didn't have my {PKMN} with me.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_11:
# 112 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: Serves you right! Now move\n"
	.string "over and give our shopkeeper back.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_12:
# 115 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: I...I'm sorry boss! I lost\n"
	.string "again.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_13:
# 119 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: You useless, incompetent fool!\n"
	.string "Argh! How can we accomplish anything\l"
	.string "with such terrible support!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_14:
# 124 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Fine, take your stupid shopkeeper\n"
	.string "back. We'll make it up the mountain\l"
	.string "anyway and there's nothing you can do\l"
	.string "to stop us!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_15:
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: Thanks for the help trainer!\n"
	.string "I needed it there. I could've taken them\l"
	.string "both alone, but I didn't have all my {PKMN}\l"
	.string "on me.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_16:
# 141 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: They didn't harm you right?\p"
	.string "SHOPKEEPER: No they didn't. Thank you\n"
	.string "FLANNERY! And you too, trainer. I owe\l"
	.string "you one. Stop by our counter downstairs\l"
	.string "for trekking supplies later on.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_17:
# 150 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: That boss was really tough!\p"
	.string "Hmm? You've met these thugs before?\n"
	.string "And you're also going to Mt. Ceram?\l"
	.string "What's up there?\p"
	.string "Dreamstones? I thought those were\n"
	.string "just rumours.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_18:
# 151 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: They're connected to\n"
	.string "Professor Tenebris' disappearance?\p"
	.string "Well I gotta do something - Professor\n"
	.string "Tenebris is the one who gave me my\l"
	.string "GROWLITHE.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_19:
# 152 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: Those guys seem to be after\n"
	.string "the dreamstone too...but I can't let you\l"
	.string "go up the mountain as you are now.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_20:
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: {PLAYER}, was it? Mt. Ceram\n"
	.string "is filled with dangerous {PKMN}. The rules\l"
	.string "around here are you can't climb unless\l"
	.string "you have my gym badge and my blessing.\l"
	.string "If you can beat me, I'll be able to send\l"
	.string "you up the hill with confidence. See you\l"
	.string "around, {PLAYER}!$"

CeramBaseCamp_Main_EventScript_ExitTrigger_Text_0:
# 182 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey kid! The rules are you can't climb\n"
	.string "unless you have the FIRE BADGE. If you\l"
	.string "can't beat FLANNERY, you won't be able\l"
	.string "to handle the heat of the mountain!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0:
# 193 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey, where do you think you're going\n"
	.string "kid? This supply depot is under Team\l"
	.string "Somber's control!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1:
# 193 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Gah! I lost!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2:
# 194 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You may have beaten me, but you'll never\n"
	.string "get to the boss in time.$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0:
# 200 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "We're going to steal all the climbing\n"
	.string "supplies here!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1:
# 200 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I can't believe it!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2:
# 201 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You just got lucky. I'll crush you if I\n"
	.string "ever see you again!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0:
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "How did you get this far? No matter -\n"
	.string "you can't stop us from taking all the\l"
	.string "supplies!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1:
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! My {PKMN} were too weak!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2:
# 208 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You're too late - the boss is already\n"
	.string "with the shopkeeper.$"
