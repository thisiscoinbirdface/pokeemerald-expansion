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
	delay 8
# 72 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_1
# 74 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 75 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 76 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 77 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 8
# 78 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_2
# 80 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 81 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0
# 82 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 83 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 8
# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 86 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_4
# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 88 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 8
# 89 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 90 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_5
# 91 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 95 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 96 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 97 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 99 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 24
# 100 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 101 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_6
# 102 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 105 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4
# 106 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 107 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 108 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 109 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 110 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 111 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_8
# 112 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 114 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 115 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 116 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 117 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_9
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 119 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 120 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 121 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_10
# 124 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 125 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 8
# 126 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 127 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_11
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 8
# 130 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 131 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_12
# 132 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_13
# 138 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 141 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 142 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 146 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMP_EVIL_GABRIELLE, CeramBaseCamp_Main_EventScript_MainEncounter_Text_14
# 150 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 151 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 152 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_15
# 154 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 155 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 156 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_16
# 157 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 158 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 159 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 160 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 161 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 162 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_17
# 163 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 164 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 165 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 167 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 168 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_18
# 169 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 170 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 171 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 172 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 173 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 174 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 175 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_19
# 176 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9
# 181 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 183 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadedefaultbgm
# 187 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 188 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 189 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 190 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 191 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_20
# 192 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 193 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 194 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 195 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 196 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 197 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 198 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_21
# 199 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_22
# 200 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_23
# 201 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_SHOPKEEPER2F, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10
# 203 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 206 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 208 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 209 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 210 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_24
# 211 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 212 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_25
# 213 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 214 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_26
# 215 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 216 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_27
# 217 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 220 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 221 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT1
# 222 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT2
# 223 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT3
# 224 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT4
# 225 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_BOSS
# 226 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_LEADER
# 227 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_SHOPKEEPER2F
# 229 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EVIL_BATTLE
# 230 "data//maps/CeramBaseCamp_Main/scripts.pory"
	clearflag FLAG_HIDE_BASECAMP_SHOPKEEPER
# 231 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setvar VAR_SUPPLY_DEPOT_STATE, 1
# 233 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 234 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return


CeramBaseCamp_Main_TrainerBattle_Grunt1::
# 242 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT1, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1
# 243 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2
# 244 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt2::
# 249 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT2, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1
# 250 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2
# 251 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt3::
# 256 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT3, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1
# 257 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2
# 258 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_Pokemart_EventScript_Clerk::
# 277 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lock
# 278 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 279 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_Pokemart_EventScript_Clerk_Text_0
# 280 "data//maps/CeramBaseCamp_Main/scripts.pory"
	message gText_HowMayIServeYou
# 281 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmessage
# 282 "data//maps/CeramBaseCamp_Main/scripts.pory"
	pokemart CeramBaseCamp_Main_Pokemart_Inventory
# 283 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 284 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


	.align 2
# 289 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_Pokemart_Inventory:
# 290 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_POKE_BALL
# 291 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_REPEL
# 292 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 293 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 294 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_SODA_POP
# 295 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 296 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_REVIVE
	.2byte ITEM_NONE

CeramBaseCamp_Main_NPC1::
# 317 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC1_2
# 322 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC1_Text_1, MSGBOX_NPC
CeramBaseCamp_Main_NPC1_1:
	end

CeramBaseCamp_Main_NPC1_2:
# 319 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC1_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC1_1


CeramBaseCamp_Main_NPC2::
# 328 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC2_2
# 333 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC2_Text_1, MSGBOX_NPC
CeramBaseCamp_Main_NPC2_1:
	end

CeramBaseCamp_Main_NPC2_2:
# 330 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC2_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC2_1


CeramBaseCamp_Main_Smeargle::
# 339 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playmoncry SPECIES_SMEARGLE, CRY_MODE_NORMAL
# 340 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_Smeargle_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_Main_NPC3::
# 346 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC3_2
# 359 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_2, MSGBOX_NPC
CeramBaseCamp_Main_NPC3_1:
	end

CeramBaseCamp_Main_NPC3_2:
# 348 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_MAIN_BERRY, CeramBaseCamp_Main_NPC3_5
# 351 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_1, MSGBOX_NPC
# 352 "data//maps/CeramBaseCamp_Main/scripts.pory"
	giveitem ITEM_OCCA_BERRY, 5
# 353 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 354 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_MAIN_BERRY
	goto CeramBaseCamp_Main_NPC3_1

CeramBaseCamp_Main_NPC3_5:
# 349 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC3_1


CeramBaseCamp_Main_NPC4::
# 366 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC4_2
# 371 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC4_Text_1, MSGBOX_NPC
CeramBaseCamp_Main_NPC4_1:
	end

CeramBaseCamp_Main_NPC4_2:
# 368 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC4_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC4_1


CeramBaseCamp_Main_NPC5::
# 378 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_NPC_TRADE, CeramBaseCamp_Main_NPC5_2
# 383 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC5_5
# 443 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_6, MSGBOX_NPC
CeramBaseCamp_Main_NPC5_4:
	end

CeramBaseCamp_Main_NPC5_2:
# 379 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_0, MSGBOX_NPC
	end

CeramBaseCamp_Main_NPC5_5:
# 385 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 386 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 387 "data//maps/CeramBaseCamp_Main/scripts.pory"
	showmonpic SPECIES_PETILIL, 1, 3
# 388 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_1
# 389 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 390 "data//maps/CeramBaseCamp_Main/scripts.pory"
	hidemonpic
# 391 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 24
# 392 "data//maps/CeramBaseCamp_Main/scripts.pory"
	showmonpic SPECIES_PONYTA_GALAR, 1, 3
# 393 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_2, MSGBOX_YESNO
# 394 "data//maps/CeramBaseCamp_Main/scripts.pory"
	hidemonpic
# 395 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Main_NPC5_8
# 439 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_5, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC5_4

CeramBaseCamp_Main_NPC5_8:
# 399 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_WIMPOD
# 400 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 402 "data//maps/CeramBaseCamp_Main/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 403 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 407 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special ChoosePartyMon
# 408 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitstate
# 409 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 412 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq CeramBaseCamp_Main_NPC5_12
# 418 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 419 "data//maps/CeramBaseCamp_Main/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 420 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 421 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq CeramBaseCamp_Main_NPC5_14
# 434 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_4, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC5_4

CeramBaseCamp_Main_NPC5_12:
# 413 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_2
# 414 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	end

CeramBaseCamp_Main_NPC5_14:
# 423 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 424 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 425 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special CreateInGameTradePokemon
# 426 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special DoInGameTradeScene
# 427 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitstate
# 428 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_3
# 429 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 430 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_NPC_TRADE
	goto CeramBaseCamp_Main_NPC5_4


CeramBaseCamp_Main_NPC6::
# 478 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC6_2
# 483 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_6, MSGBOX_NPC
CeramBaseCamp_Main_NPC6_1:
	end

CeramBaseCamp_Main_NPC6_2:
# 480 "data//maps/CeramBaseCamp_Main/scripts.pory"
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

# 75 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1:
# 75 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_down
	step_end

# 95 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2:
# 95 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_right
	step_end

# 97 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3:
# 97 "data//maps/CeramBaseCamp_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 105 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4:
# 105 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 105 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5:
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6:
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_down
	step_end

# 142 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7:
# 142 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8:
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9:
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10:
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

CeramBaseCamp_Main_EventScript_MainEncounter_Text_0:
# 72 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_1:
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Release our shopkeeper at once! How\n"
	.string "dare you!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_2:
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Get out of my face, leader! We have\n"
	.string "business that concerns you not one bit.\l"
	.string "We're going to take his supplies for our\l"
	.string "trek up {COLOR RED}Mt. Ceram{COLOR DARK_GRAY}!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_3:
# 85 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Ariana$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_4:
# 86 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "The name's {COLOR RED}Ariana{COLOR DARK_GRAY}! And no way! This is MY\n"
	.string "base camp! You're not harrassing\l"
	.string "anyone while I'm around!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_5:
# 90 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hahaha! Well said! You are a leader\n"
	.string "after all. But how do you intend to\l"
	.string "handle the two of us, when I can only\l"
	.string "count one of you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_6:
# 101 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey - you! You look like a trainer. I\n"
	.string "need your help. These people are trying\l"
	.string "to steal the shopkeeper's supplies.\n"
	.string "We have to stop them!\p"
	.string "I'll take the boss. You deal with the one\n"
	.string "on the right for me!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_7:
# 110 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Gabrielle$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_8:
# 111 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "It's you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_9:
# 117 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Boss! Boss! This is the kid that beat me\n"
	.string "in {COLOR BLUE}Route 3{COLOR DARK_GRAY}. I was trying to take the\l"
	.string "dreamstone from that Clefairy hiker.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_10:
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "That wasn't a dreamstone you idiot -\n"
	.string "that was an everstone! Nonetheless,\l"
	.string "remind me to punish you for that later.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_11:
# 127 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "...yes boss.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_12:
# 131 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "But there is a dreamstone sitting right\n"
	.string "on top of {COLOR RED}Mt. Ceram{COLOR DARK_GRAY}, and these people\l"
	.string "are in the way! Gabrielle, you deal with\l"
	.string "this pest while I put the leader in her\l"
	.string "place. And you better win this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_13:
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You heard that...what was your name\n"
	.string "again? {PLAYER}? Yeah, {PLAYER}!\l"
	.string "I'm not going to lose to you this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_14:
# 146 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! Not again!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_15:
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Agh! You and your stupid Tauros! I just\n"
	.string "didn't have my Pokémon with me.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_16:
# 156 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Serves you right! Now move over and\n"
	.string "give our shopkeeper back.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_17:
# 162 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I...I'm sorry boss! I lost again.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_18:
# 168 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You useless, incompetent fool! Argh!\n"
	.string "How can we accomplish anything with\l"
	.string "such terrible support!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_19:
# 175 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Fine, take your stupid shopkeeper back.\n"
	.string "We'll make it up the mountain anyway and\l"
	.string "there's nothing you can do to stop us!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_20:
# 191 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Thanks for the help trainer!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_21:
# 198 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "They didn't harm you right?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_22:
# 199 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Shopkeeper$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_23:
# 200 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No they didn't. Thank you {COLOR RED}Ariana{COLOR DARK_GRAY}! And\n"
	.string "you too, trainer. I owe you one. Stop by\l"
	.string "our counter downstairs for trekking\l"
	.string "supplies later on.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_24:
# 210 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "That boss was really tough!\p"
	.string "Hmm? You've met these thugs before?\n"
	.string "And you're also going to {COLOR RED}Mt. Ceram{COLOR DARK_GRAY}?\l"
	.string "What's up there?\p"
	.string "Dreamstones? I thought those were\n"
	.string "just rumours.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_25:
# 212 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "They're connected to {COLOR GREEN}Professor\n"
	.string "Tenebris{COLOR DARK_GRAY}' disappearance?\p"
	.string "I gotta do something - {COLOR GREEN}Professor\n"
	.string "Tenebris{COLOR DARK_GRAY} gave me my Tauros!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_26:
# 214 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Those guys seem to be after the\n"
	.string "dreamstone too...but I can't let you go\l"
	.string "up the mountain as you are now.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_27:
# 216 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "{PLAYER}, was it? {COLOR RED}Mt. Ceram{COLOR DARK_GRAY} is filled\n"
	.string "with dangerous Pokémon. The rules\l"
	.string "around here are you can't climb unless\l"
	.string "you have my gym badge and my blessing.\l"
	.string "If you can beat me, I'll be able to send\l"
	.string "you up the hill with confidence.\p"
	.string "See you around, {PLAYER}!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0:
# 242 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey, where do you think you're going\n"
	.string "kid? This Supply Depot is under {COLOR BLUE}Team\l"
	.string "Somber{COLOR DARK_GRAY}'s control!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1:
# 242 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Gah! I lost!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2:
# 243 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "We're here to collect supplies for the\n"
	.string "climb up {COLOR RED}Mt. Ceram{COLOR DARK_GRAY}!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0:
# 249 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "We're going to steal all the climbing\n"
	.string "supplies! You can't stop us!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1:
# 249 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I can't believe it!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2:
# 250 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You just got lucky. I'll crush you if I\n"
	.string "ever see you again!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0:
# 256 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "How did you get this far?\p"
	.string "No matter - you can't stop us from\n"
	.string "taking the supplies! Hahaha!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1:
# 256 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! My Pokémon were too weak!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2:
# 257 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You're too late - the boss is already\n"
	.string "with the shopkeeper.$"

CeramBaseCamp_Main_Pokemart_EventScript_Clerk_Text_0:
# 279 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey {PLAYER}! Here you can get\n"
	.string "mountain-climbing supplies!$"

CeramBaseCamp_Main_NPC1_Text_0:
# 319 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Centiskorch and Scolipede are fiercely\n"
	.string "territorial. They keep fighting each\l"
	.string "other in {COLOR RED}Mt. Ceram{COLOR DARK_GRAY}.$"

CeramBaseCamp_Main_NPC1_Text_1:
# 322 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Who are these {COLOR BLUE}Team Somber{COLOR DARK_GRAY} people? They\n"
	.string "act all high and mighty, but they're\l"
	.string "really just harrassing innocent folk.$"

CeramBaseCamp_Main_NPC2_Text_0:
# 330 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "It's believed that a dreamstone is a\n"
	.string "crystallised representation of a\l"
	.string "Pokémon's memories.$"

CeramBaseCamp_Main_NPC2_Text_1:
# 333 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I overheard them talking about a\n"
	.string "dreamstone! Dreamstones are supposed\l"
	.string "to be very rare. Why do they want one?$"

CeramBaseCamp_Main_Smeargle_Text_0:
# 340 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Smeargle looks resolute. What is it\n"
	.string "thinking?$"

CeramBaseCamp_Main_NPC3_Text_0:
# 349 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Potions are all well and good, but\n"
	.string "berries can be used in battle!$"

CeramBaseCamp_Main_NPC3_Text_1:
# 351 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Berries don't grow here, so I brought my\n"
	.string "own! Would you like some?$"

CeramBaseCamp_Main_NPC3_Text_2:
# 359 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "These thugs took the shopkeeper\n"
	.string "upstairs! But {COLOR RED}Ariana{COLOR DARK_GRAY}, the Gym Leader,\l"
	.string "just went up there to get him back.\l"
	.string "She's going to teach them a lesson!$"

CeramBaseCamp_Main_NPC4_Text_0:
# 368 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "This isn't really a town, so the supply\n"
	.string "depot and the management\l"
	.string "office-cum-gym is all we have.$"

CeramBaseCamp_Main_NPC4_Text_1:
# 371 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Shh! Don't look here! You'll attract\n"
	.string "their attention!$"

CeramBaseCamp_Main_NPC5_Text_0:
# 379 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "My sister will be so happy. She's always\n"
	.string "wanted her own Pokémon.$"

CeramBaseCamp_Main_NPC5_Text_1:
# 388 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I want to gift my sister a Petilil. It's\n"
	.string "her favourite Pokémon! But I couldn't\l"
	.string "find any on {COLOR BLUE}Route 4{COLOR DARK_GRAY}.$"

CeramBaseCamp_Main_NPC5_Text_2:
# 393 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "If you have one, will you trade it for my\n"
	.string "Ponyta?$"

CeramBaseCamp_Main_NPC5_Text_3:
# 428 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Thank you! Please take good care of my\n"
	.string "Ponyta.$"

CeramBaseCamp_Main_NPC5_Text_4:
# 434 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey, this isn't a Dewpider! I'm not\n"
	.string "stupid, you know?$"

CeramBaseCamp_Main_NPC5_Text_5:
# 439 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Oh...well, if you change your mind, you\n"
	.string "know where I am!$"

CeramBaseCamp_Main_NPC5_Text_6:
# 443 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I can't wait for {COLOR RED}Ariana{COLOR DARK_GRAY} to put these\n"
	.string "crooks in their place!$"

CeramBaseCamp_Main_NPC6_Text_0:
# 480 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "On the other side of {COLOR RED}Mt. Ceram{COLOR DARK_GRAY} is\n"
	.string "{COLOR BLUE}Silversun City{COLOR DARK_GRAY}. I hear the trek down\l"
	.string "from the summit is tough, because the\l"
	.string "native Centiskorch and Scolipede fight\l"
	.string "each other.$"
