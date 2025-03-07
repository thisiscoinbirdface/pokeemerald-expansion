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
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeramBaseCamp_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CeramBaseCamp_Main_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data//maps/CeramBaseCamp_Main/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, CeramBaseCamp_MapScript_OnEnter
	.2byte 0


CeramBaseCamp_MapScript_OnEnter::
# 20 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 21 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_MapScript_OnEnter_2
# 22 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject 13
# 23 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return

CeramBaseCamp_MapScript_OnEnter_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger1::
# 28 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger1_2
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
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_11
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 119 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 120 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_12
# 121 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 124 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_13
# 125 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 126 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 127 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_14
# 130 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 139 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 140 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 141 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 142 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_15
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 144 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 145 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 146 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_16
# 147 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_SHOPKEEPER2F, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10
# 149 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 152 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 154 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 155 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_17
# 156 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_18
# 157 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_19
# 158 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_20
# 159 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 162 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_TO_BLACK
# 163 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT1
# 164 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT2
# 165 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT3
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT4
# 167 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_BOSS
# 168 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_LEADER
# 169 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_SHOPKEEPER2F
# 171 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EVIL_BATTLE
# 173 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 174 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return


CeramBaseCamp_Main_EventScript_ExitTrigger::
# 183 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement 9, CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_0
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 186 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 187 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_ExitTrigger_Text_0
# 188 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 189 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_1
# 190 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 191 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return


CeramBaseCamp_Main_TrainerBattle_Grunt1::
# 198 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT1, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1
# 199 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2
# 200 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt2::
# 205 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT2, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1
# 206 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt3::
# 212 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT3, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1
# 213 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2
# 214 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_Pokemart_EventScript_Clerk::
# 221 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lock
# 222 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 223 "data//maps/CeramBaseCamp_Main/scripts.pory"
	message gText_HowMayIServeYou
# 224 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmessage
# 225 "data//maps/CeramBaseCamp_Main/scripts.pory"
	pokemart CeramBaseCamp_Main_Pokemart_Inventory
# 226 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 227 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


	.align 2
# 232 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_Pokemart_Inventory:
# 233 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_POTION
# 234 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

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

# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8:
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9:
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10:
# 148 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
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

# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_0:
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 189 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_ExitTrigger_Movement_1:
# 189 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
	step_end

CeramBaseCamp_Main_EventScript_MainEncounter_Text_0:
# 65 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Release our shopkeeper at once!\n"
	.string "How dare you!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_1:
# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Get out of my face, leader! We have\n"
	.string "business that concerns you not one bit.\l"
	.string "We want his supplies for our trek up MT\l"
	.string "CERAM!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_2:
# 70 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: The name's FLANNERY! And no\n"
	.string "way! This is MY base camp! You're not\l"
	.string "harming anyone while I'm around!$"

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
	.string "???: GABRIELLE: It's you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_6:
# 92 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: Boss! Boss! This is the kid\n"
	.string "that beat me in Route 4. I was trying to\l"
	.string "take the dreamstone from that Celfairy\l"
	.string "hiker.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_7:
# 96 "data//maps/CeramBaseCamp_Main/scripts.pory"
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
	.string "I just didn't have my {PKMN} with me.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_11:
# 117 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: Serves you right! Now move\n"
	.string "over and give our shopkeeper back.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_12:
# 120 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "GABRIELLE: I...I'm sorry boss! I lost\n"
	.string "again.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_13:
# 124 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: You useless, incompetent fool!\n"
	.string "Argh! How can we accomplish anything\l"
	.string "with such terrible support!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_14:
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???: Fine, take your stupid shopkeeper\n"
	.string "back. We'll make it up the mountain\l"
	.string "anyway and there's nothing you can do\l"
	.string "to stop us!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_15:
# 142 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: Thanks for the help trainer!\n"
	.string "I needed it there. I could've taken them\l"
	.string "both alone, but I didn't have all my {PKMN}\l"
	.string "on me.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_16:
# 146 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: They didn't harm you right?\p"
	.string "SHOPKEEPER: No they didn't. Thank you\n"
	.string "FLANNERY! And you too, trainer. I owe\l"
	.string "you one. Stop by our counter downstairs\l"
	.string "for trekking supplies later on.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_17:
# 155 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: That boss was really tough!\p"
	.string "Hmm? You've met these thugs before?\n"
	.string "And you're also going to Mt. Ceram?\l"
	.string "What's up there?\p"
	.string "Dreamstones? I thought those were\n"
	.string "just rumours.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_18:
# 156 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: They're connected to\n"
	.string "Professor Tenebris' disappearance?\p"
	.string "Well I gotta do something - Professor\n"
	.string "Tenebris is the one who gave me my\l"
	.string "GROWLITHE.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_19:
# 157 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: Those guys seem to be after\n"
	.string "the dreamstone too...but I can't let you\l"
	.string "go up the mountain as you are now.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_20:
# 158 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "FLANNERY: {PLAYER}, was it? Mt. Ceram\n"
	.string "is filled with dangerous {PKMN}. The rules\l"
	.string "around here are you can't climb unless\l"
	.string "you have my gym badge and my blessing.\l"
	.string "If you can beat me, I'll be able to send\l"
	.string "you up the hill with confidence. See you\l"
	.string "around, {PLAYER}!$"

CeramBaseCamp_Main_EventScript_ExitTrigger_Text_0:
# 187 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey kid! The rules are you can't climb\n"
	.string "unless you have the FIRE BADGE. If you\l"
	.string "can't beat FLANNERY, you won't be able\l"
	.string "to handle the heat of the mountain!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0:
# 198 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey, where do you think you're going\n"
	.string "kid? This supply depot is under Team\l"
	.string "Somber's control!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1:
# 198 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Gah! I lost!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2:
# 199 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You may have beaten me, but you'll never\n"
	.string "get to the boss in time.$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0:
# 205 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "We're going to steal all the climbing\n"
	.string "supplies here!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1:
# 205 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I can't believe it!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2:
# 206 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You just got lucky. I'll crush you if I\n"
	.string "ever see you again!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0:
# 212 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "How did you get this far? No matter -\n"
	.string "you can't stop us from taking all the\l"
	.string "supplies!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1:
# 212 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! My {PKMN} were too weak!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2:
# 213 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You're too late - the boss is already\n"
	.string "with the shopkeeper.$"
