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


CeramBaseCamp_Main_OnResume::
# 24 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_OnResume_2
# 27 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, FALSE
CeramBaseCamp_Main_OnResume_1:
# 29 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	end

CeramBaseCamp_Main_OnResume_2:
	goto CeramBaseCamp_Main_OnResume_1


CeramBaseCamp_Main_EventScript_EvilTrigger1::
# 35 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger1_2
# 36 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 38 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 39 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0
# 40 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 41 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger1_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger2::
# 46 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger2_2
# 47 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 49 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 50 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0
# 51 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 52 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger2_2:
	end


CeramBaseCamp_Main_EventScript_EvilTrigger3::
# 57 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_EventScript_EvilTrigger3_2
# 58 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 60 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 61 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0
# 62 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 63 "data//maps/CeramBaseCamp_Main/scripts.pory"
	call CeramBaseCamp_Main_EventScript_MainEncounter
	return

CeramBaseCamp_Main_EventScript_EvilTrigger3_2:
	end


CeramBaseCamp_Main_EventScript_MainEncounter::
# 69 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 70 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0
# 71 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 72 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 8
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 74 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_1
# 75 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 76 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 77 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 78 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 8
# 79 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 80 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_2
# 81 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 82 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0
# 83 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 84 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 8
# 86 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_4
# 88 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 89 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 8
# 90 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 91 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_5
# 92 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 96 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 97 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 99 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 100 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 24
# 101 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 102 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_6
# 103 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 106 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4
# 107 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 108 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3
# 109 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 110 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 111 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 112 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_8
# 113 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 114 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 115 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 116 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 117 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_9
# 119 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 120 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 121 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 122 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 123 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 124 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_10
# 125 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 126 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 8
# 127 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_11
# 129 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 130 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 8
# 131 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 132 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_12
# 133 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 135 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 136 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 137 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 138 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_13
# 139 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 142 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 144 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 147 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_no_intro TRAINER_CERAMBASECAMP_EVIL_GABRIELLE, CeramBaseCamp_Main_EventScript_MainEncounter_Text_14
# 151 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1
# 152 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 153 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 154 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_15
# 155 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 156 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 157 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0
# 158 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 159 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 160 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 161 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_16
# 162 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 163 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 164 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 165 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 166 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_7
# 167 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_17
# 168 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 169 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 170 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 171 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 172 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 173 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_18
# 174 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 175 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 176 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6
# 177 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 178 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 179 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_0
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_19
# 181 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_BOSS, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_GRUNT4, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9
# 186 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 188 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadenewbgm MUS_RUSTBORO
# 192 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 193 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 194 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 195 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 196 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_20
# 197 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 198 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 199 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7
# 200 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 201 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 16
# 202 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 203 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_21
# 204 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_22
# 205 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_23
# 206 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_SHOPKEEPER2F, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10
# 208 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 211 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5
# 212 "data//maps/CeramBaseCamp_Main/scripts.pory"
	applymovement LOCALID_LEADER, CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2
# 213 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmovement 0
# 214 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 215 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_24
# 216 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 217 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_25
# 218 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 219 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_26
# 220 "data//maps/CeramBaseCamp_Main/scripts.pory"
	speakername CeramBaseCamp_Main_EventScript_MainEncounter_Text_3
# 221 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_EventScript_MainEncounter_Text_27
# 222 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 225 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 226 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT1
# 227 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT2
# 228 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT3
# 229 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_GRUNT4
# 230 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_BOSS
# 231 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_LEADER
# 232 "data//maps/CeramBaseCamp_Main/scripts.pory"
	removeobject LOCALID_SHOPKEEPER2F
# 234 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_EVIL_BATTLE
# 235 "data//maps/CeramBaseCamp_Main/scripts.pory"
	clearflag FLAG_HIDE_BASECAMP_SHOPKEEPER
# 236 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setvar VAR_SUPPLY_DEPOT_STATE, 1
# 238 "data//maps/CeramBaseCamp_Main/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 239 "data//maps/CeramBaseCamp_Main/scripts.pory"
	releaseall
	return


CeramBaseCamp_Main_TrainerBattle_Grunt1::
# 247 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT1, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1
# 248 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2
# 249 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt2::
# 254 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT2, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1
# 255 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2
# 256 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_TrainerBattle_Grunt3::
# 261 "data//maps/CeramBaseCamp_Main/scripts.pory"
	trainerbattle_single TRAINER_CERAMBASECAMP_GRUNT3, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0, CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1
# 262 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2
# 263 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


CeramBaseCamp_Main_Pokemart_EventScript_Clerk::
# 282 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lock
# 283 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 284 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_Pokemart_EventScript_Clerk_Text_0
# 285 "data//maps/CeramBaseCamp_Main/scripts.pory"
	message gText_HowMayIServeYou
# 286 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitmessage
# 287 "data//maps/CeramBaseCamp_Main/scripts.pory"
	pokemart CeramBaseCamp_Main_Pokemart_Inventory
# 288 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 289 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
	end


	.align 2
# 294 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_Pokemart_Inventory:
# 295 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_POKE_BALL
# 296 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_REPEL
# 297 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 298 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_SODA_POP
# 299 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 300 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.2byte ITEM_REVIVE
	.2byte ITEM_NONE

CeramBaseCamp_Main_NPC1::
# 321 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC1_2
# 326 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC1_Text_1, MSGBOX_NPC
CeramBaseCamp_Main_NPC1_1:
	end

CeramBaseCamp_Main_NPC1_2:
# 323 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC1_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC1_1


CeramBaseCamp_Main_NPC2::
# 332 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC2_2
# 337 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC2_Text_1, MSGBOX_NPC
CeramBaseCamp_Main_NPC2_1:
	end

CeramBaseCamp_Main_NPC2_2:
# 334 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC2_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC2_1


CeramBaseCamp_Main_Smeargle::
# 343 "data//maps/CeramBaseCamp_Main/scripts.pory"
	playmoncry SPECIES_SMEARGLE, CRY_MODE_NORMAL
# 344 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_Smeargle_Text_0, MSGBOX_NPC
	end


CeramBaseCamp_Main_NPC3::
# 350 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC3_2
# 363 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_2, MSGBOX_NPC
CeramBaseCamp_Main_NPC3_1:
	end

CeramBaseCamp_Main_NPC3_2:
# 352 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_MAIN_BERRY, CeramBaseCamp_Main_NPC3_5
# 355 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_1, MSGBOX_NPC
# 356 "data//maps/CeramBaseCamp_Main/scripts.pory"
	giveitem ITEM_OCCA_BERRY, 5
# 357 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 358 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_MAIN_BERRY
	goto CeramBaseCamp_Main_NPC3_1

CeramBaseCamp_Main_NPC3_5:
# 353 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC3_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC3_1


CeramBaseCamp_Main_NPC4::
# 370 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC4_2
# 375 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC4_Text_1, MSGBOX_NPC
CeramBaseCamp_Main_NPC4_1:
	end

CeramBaseCamp_Main_NPC4_2:
# 372 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC4_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC4_1


CeramBaseCamp_Main_NPC5::
# 382 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_NPC_TRADE, CeramBaseCamp_Main_NPC5_2
# 387 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC5_5
# 446 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_6, MSGBOX_NPC
CeramBaseCamp_Main_NPC5_4:
	end

CeramBaseCamp_Main_NPC5_2:
# 383 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_0, MSGBOX_NPC
	end

CeramBaseCamp_Main_NPC5_5:
# 389 "data//maps/CeramBaseCamp_Main/scripts.pory"
	lockall
# 390 "data//maps/CeramBaseCamp_Main/scripts.pory"
	faceplayer
# 391 "data//maps/CeramBaseCamp_Main/scripts.pory"
	showmonpic SPECIES_PETILIL, 10, 3
# 392 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_1
# 393 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 394 "data//maps/CeramBaseCamp_Main/scripts.pory"
	hidemonpic
# 395 "data//maps/CeramBaseCamp_Main/scripts.pory"
	delay 24
# 396 "data//maps/CeramBaseCamp_Main/scripts.pory"
	showmonpic SPECIES_PONYTA_GALAR, 10, 3
# 397 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_2, MSGBOX_YESNO
# 398 "data//maps/CeramBaseCamp_Main/scripts.pory"
	hidemonpic
# 399 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeramBaseCamp_Main_NPC5_8
# 442 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_3, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC5_4

CeramBaseCamp_Main_NPC5_8:
# 403 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_WIMPOD
# 404 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 406 "data//maps/CeramBaseCamp_Main/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 407 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 411 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special ChoosePartyMon
# 412 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitstate
# 413 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 416 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq CeramBaseCamp_Main_NPC5_12
# 421 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 422 "data//maps/CeramBaseCamp_Main/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 423 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 424 "data//maps/CeramBaseCamp_Main/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq CeramBaseCamp_Main_NPC5_14
# 437 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_5, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC5_4

CeramBaseCamp_Main_NPC5_12:
# 417 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_3, MSGBOX_NPC
	end

CeramBaseCamp_Main_NPC5_14:
# 426 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 427 "data//maps/CeramBaseCamp_Main/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 428 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special CreateInGameTradePokemon
# 429 "data//maps/CeramBaseCamp_Main/scripts.pory"
	special DoInGameTradeScene
# 430 "data//maps/CeramBaseCamp_Main/scripts.pory"
	waitstate
# 431 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_4
# 432 "data//maps/CeramBaseCamp_Main/scripts.pory"
	release
# 433 "data//maps/CeramBaseCamp_Main/scripts.pory"
	setflag FLAG_CERAMBASECAMP_NPC_TRADE
	goto CeramBaseCamp_Main_NPC5_4


CeramBaseCamp_Main_NPC6::
# 481 "data//maps/CeramBaseCamp_Main/scripts.pory"
	goto_if_set FLAG_CERAMBASECAMP_EVIL_BATTLE, CeramBaseCamp_Main_NPC6_2
# 486 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC5_Text_6, MSGBOX_NPC
CeramBaseCamp_Main_NPC6_1:
	end

CeramBaseCamp_Main_NPC6_2:
# 483 "data//maps/CeramBaseCamp_Main/scripts.pory"
	msgbox CeramBaseCamp_Main_NPC6_Text_0, MSGBOX_NPC
	goto CeramBaseCamp_Main_NPC6_1


# 39 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger1_Movement_0:
# 39 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 39 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
	step_end

# 50 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger2_Movement_0:
# 50 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 50 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 50 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 50 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 61 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_EvilTrigger3_Movement_0:
# 61 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 61 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 61 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 61 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_up
# 61 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 70 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_0:
# 70 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_up
	step_end

# 76 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_1:
# 76 "data//maps/CeramBaseCamp_Main/scripts.pory"
	jump_in_place_down
	step_end

# 96 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_2:
# 96 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_right
	step_end

# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_3:
# 98 "data//maps/CeramBaseCamp_Main/scripts.pory"
	emote_exclamation_mark
	step_end

# 106 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_4:
# 106 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 106 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 114 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_5:
# 114 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_left
	step_end

# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_6:
# 134 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_down
	step_end

# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_7:
# 143 "data//maps/CeramBaseCamp_Main/scripts.pory"
	face_up
	step_end

# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_8:
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 184 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_9:
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 185 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
CeramBaseCamp_Main_EventScript_MainEncounter_Movement_10:
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_left
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_down
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
# 207 "data//maps/CeramBaseCamp_Main/scripts.pory"
	walk_right
	step_end

CeramBaseCamp_Main_EventScript_MainEncounter_Text_0:
# 73 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "???$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_1:
# 74 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Release our shopkeeper at once!\n"
	.string "How dare you!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_2:
# 80 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Get out of my face, leader! We have\n"
	.string "business that concerns you not one bit.\l"
	.string "We're going to take his supplies for\l"
	.string "our trek up Mt. Ceram!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_3:
# 86 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Ariana$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_4:
# 87 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "The name's Ariana! And no way!\n"
	.string "This is MY base camp! You're not\l"
	.string "harrassing anyone while I'm around!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_5:
# 91 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hahaha! Well said! You are a leader\n"
	.string "after all. But how do you intend to\l"
	.string "handle the two of us, when I can only\l"
	.string "count one of you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_6:
# 102 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey - you! You look like a trainer.\n"
	.string "I need your help.\p"
	.string "These people are trying to steal the\n"
	.string "supplies here. We have to stop them!\p"
	.string "I'll take the boss. You deal with the\n"
	.string "grunt on the right for me!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_7:
# 111 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Gabrielle$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_8:
# 112 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "It's you?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_9:
# 118 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Boss! Boss! This is the kid that beat me\n"
	.string "in Route 3. I was trying to take the\l"
	.string "dreamstone from that Clefairy hiker.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_10:
# 124 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "That wasn't a dreamstone you idiot -\n"
	.string "that was an everstone! Nonetheless,\l"
	.string "remind me to punish you for that later.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_11:
# 128 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "...yes boss.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_12:
# 132 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "But there is a dreamstone sitting right\n"
	.string "on top of Mt. Ceram, and these people\l"
	.string "are in the way! Gabrielle, handle this\l"
	.string "pest while I put the leader in her place.\p"
	.string "And you better win this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_13:
# 138 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You heard that...what was your name\n"
	.string "again?\p"
	.string "{PLAYER}?\p"
	.string "Yeah, {PLAYER}! I'm not going to lose\n"
	.string "to you this time!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_14:
# 147 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! Not again!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_15:
# 154 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Agh! You and your stupid Tauros!\n"
	.string "I just didn't have any good Pokémon.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_16:
# 161 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Serves you right! Now move over and\n"
	.string "give our shopkeeper back.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_17:
# 167 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I...I'm sorry boss! I lost again.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_18:
# 173 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You useless, incompetent fool!\n"
	.string "How can we accomplish anything\l"
	.string "with such terrible support!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_19:
# 180 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Fine, take your stupid shopkeeper back.\n"
	.string "We'll make it up the mountain anyway and\l"
	.string "there's nothing you can do to stop us!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_20:
# 196 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Thanks for the help trainer!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_21:
# 203 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "They didn't harm you right?$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_22:
# 204 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Shopkeeper$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_23:
# 205 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No they didn't. Thank you Ariana! And\n"
	.string "you too, trainer. I owe you one.\l"
	.string "Please stop by our counter downstairs\l"
	.string "for trekking supplies later on!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_24:
# 215 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "That boss was really tough!\p"
	.string "Hmm? You've met these thugs before?\n"
	.string "And you're also going to Mt. Ceram?\l"
	.string "What's up there?\p"
	.string "There's a dreamstone up there?\n"
	.string "I thought those were just rumours.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_25:
# 217 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "They're connected to Professor\n"
	.string "Tenebris' disappearance?\p"
	.string "I gotta do something - Professor\n"
	.string "Tenebris gave me my Tauros!$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_26:
# 219 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Those guys seem to be after the\n"
	.string "dreamstone too...but I can't let you go\l"
	.string "up the mountain as you are now.$"

CeramBaseCamp_Main_EventScript_MainEncounter_Text_27:
# 221 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "{PLAYER}, was it?\p"
	.string "Mt. Ceram is filled with dangerous\n"
	.string "Pokémon. The rules around here are you\l"
	.string "can't climb unless you have my gym\l"
	.string "badge and my blessing.\p"
	.string "If you can beat me, I'll be able to send\n"
	.string "you up the hill with confidence.\p"
	.string "See you around, {PLAYER}!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_0:
# 247 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Where do you think you're going kid?\n"
	.string "This Supply Depot is under Team\l"
	.string "Somber's control now!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_1:
# 247 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Gah! I lost!$"

CeramBaseCamp_Main_TrainerBattle_Grunt1_Text_2:
# 248 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "We're here to collect supplies for\n"
	.string "the climb up Mt. Ceram!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_0:
# 254 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "We're going to steal all the climbing\n"
	.string "supplies and you can't stop us!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_1:
# 254 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I can't believe it!$"

CeramBaseCamp_Main_TrainerBattle_Grunt2_Text_2:
# 255 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You just got lucky. I'll crush you if\n"
	.string "I ever see you again!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_0:
# 261 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "How did you get this far?\p"
	.string "No matter - you can't stop us from\n"
	.string "taking the supplies! Hahaha!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_1:
# 261 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "No! My Pokémon were too weak!$"

CeramBaseCamp_Main_TrainerBattle_Grunt3_Text_2:
# 262 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "You're too late - the boss is already\n"
	.string "with the shopkeeper!$"

CeramBaseCamp_Main_Pokemart_EventScript_Clerk_Text_0:
# 284 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey {PLAYER}! You can get all our\n"
	.string "mountain climbing supplies here!$"

CeramBaseCamp_Main_NPC1_Text_0:
# 323 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Ariana is so cool! She's the one that\n"
	.string "holds this base camp together.\l"
	.string "But she's so scary in battle!$"

CeramBaseCamp_Main_NPC1_Text_1:
# 326 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Who are these Team Somber people?\n"
	.string "They act all high and mighty, but\l"
	.string "they're just harrassing innocent folk.$"

CeramBaseCamp_Main_NPC2_Text_0:
# 334 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "It's believed that a dreamstone is a\n"
	.string "crystallised representation of a\l"
	.string "Pokémon's memories.$"

CeramBaseCamp_Main_NPC2_Text_1:
# 337 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I overheard them talking about a\n"
	.string "dreamstone! Dreamstones are supposed\l"
	.string "to be very rare. Why do they want one?$"

CeramBaseCamp_Main_Smeargle_Text_0:
# 344 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Smeargle looks resolute.\n"
	.string "What's it thinking?$"

CeramBaseCamp_Main_NPC3_Text_0:
# 353 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Potions are all well and good, but\n"
	.string "berries can be used in battle!$"

CeramBaseCamp_Main_NPC3_Text_1:
# 355 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Berries don't grow in this heat, so I\n"
	.string "brought my own! Would you like some?$"

CeramBaseCamp_Main_NPC3_Text_2:
# 363 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "These thugs took the shopkeeper\n"
	.string "upstairs! But Ariana, the Gym Leader,\l"
	.string "just went up there to get him back.\l"
	.string "She's going to teach them a lesson!$"

CeramBaseCamp_Main_NPC4_Text_0:
# 372 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "This isn't really a town, so the supply\n"
	.string "depot and the management office and\l"
	.string "gym is all we have.$"

CeramBaseCamp_Main_NPC4_Text_1:
# 375 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Shh! Don't look here, idiot child!\n"
	.string "You'll attract their attention!$"

CeramBaseCamp_Main_NPC5_Text_0:
# 383 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "My sister will be so happy. She's always\n"
	.string "wanted her own Pokémon.$"

CeramBaseCamp_Main_NPC5_Text_1:
# 392 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I want to gift my sister a Petilil.\n"
	.string "It's her favourite Pokémon!\l"
	.string "But I couldn't find any on Route 4.$"

CeramBaseCamp_Main_NPC5_Text_2:
# 397 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "If you have one, will you trade it for\n"
	.string "my Ponyta?$"

CeramBaseCamp_Main_NPC5_Text_3:
# 417 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Oh...well, if you change your mind,\n"
	.string "you know where I am!$"

CeramBaseCamp_Main_NPC5_Text_4:
# 431 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Thank you! Please take good care of my\n"
	.string "Ponyta.$"

CeramBaseCamp_Main_NPC5_Text_5:
# 437 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "Hey, this isn't a Petilil!\n"
	.string "I'm not stupid, you know?$"

CeramBaseCamp_Main_NPC5_Text_6:
# 446 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "I can't wait for Ariana to put these\n"
	.string "crooks in their place!$"

CeramBaseCamp_Main_NPC6_Text_0:
# 483 "data//maps/CeramBaseCamp_Main/scripts.pory"
	.string "On the other side of Mt. Ceram is\n"
	.string "Galecrest City. But I hear the trek\l"
	.string "down from the summit is impossible,\l"
	.string "because the native Centiskorch and\l"
	.string "Scolipede fight each other.$"
